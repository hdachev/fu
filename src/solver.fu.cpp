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
typedef fu::u8 s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
struct s_ScopeItem;
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
struct s_Map_gb6sFwC7IKi;
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
struct s_Moves;
struct s_HelpersData;
enum s_SolverPass: fu::u8;
typedef fu::u8 s_HelpersMask;
struct s_Map_RnDv9VM4mhf;
struct s_Warning;
struct s_ClosureID;
struct s_Map_087aZo54YWi;
struct s_TypeParam;
struct s_Intlit;
struct s_Mi;
struct s_NativeHacks;
fu_STR getShortModuleName_hDYH9Tpk(const fu_STR&);
s_Type createArray_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Scope listGlobals_l8HfNDzr(const s_Module&);
void HERE_Zn8FXweg(const s_TokenIdx&, s_TokenIdx&);
bool is_never_ZFEUWUgI(const s_Type&);
fu_STR qKW_ThvlUeXJ(const fu_STR&);
s_ClosureID tryParseClosureID_QYk3NQTZ(fu::view<char>);
static fu_STR human_CsN1VqyI(const fu_STR&, const s_Module&, const s_Scope&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
fu_STR qID_ThvlUeXJ(const fu_STR&);
static const s_Overload& GET_JhxATLIa(const s_Target&, const s_Scope&, const s_Module&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
[[noreturn]] fu::never FAIL_MO9c1jyS(fu::view<char>, const s_TokenIdx&, const s_Context&);
[[noreturn]] static fu::never BUG_D9Hg55no(fu_STR&&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&);
[[noreturn]] static fu::never fail_F42afdck(fu_STR&&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&);
s_Target Scope_create_v4rjZGCu(s_Scope&, s_kind, const fu_STR&, const s_Type&, s_Flags, s_SolverStatus, int, const s_Module&);
void Scope_set_zPiiGt2T(s_Scope&, const fu_STR&, const s_Target&, bool);
s_ScopeMemo Scope_snap_XX7UzHbd(const s_Scope&, fu::view<s_Helpers>);
fu_STR packAddrOfFn_KKQQYGG8(fu::view<s_Target>);
static s_Type T_tZNU7Ast(int, const s_Node&, const s_Map_087aZo54YWi&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
s_Lifetime Lifetime_temporary_8nlJDPX0();
s_Type add_ref_8kJD1Pzg(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
s_Type add_mutref_8kJD1Pzg(s_Type&&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
inline void each_j5PlarJF(fu::view_mut<s_SolvedNode>, const s_Helpers&, const s_Helpers&, fu::view_mut<s_HelpersData>, s_Scope&, const s_Module&);
static void visit_2yZhIqsm(s_SolvedNode&, const s_Helpers&, const s_Helpers&, fu::view_mut<s_HelpersData>, s_Scope&, const s_Module&);
bool is_void_ZFEUWUgI(const s_Type&);
s_Type type_trySuper_0a4boBJ8(const s_Type&, const s_Type&, bool);
bool is_ref_MvT8pzW6(const s_Type&);
bool is_zeroes_ZFEUWUgI(const s_Type&);
s_Type clear_mutref_MvT8pzW6(s_Type&&);
s_Lifetime Lifetime_makeShared_L0YJBnz6(const s_Lifetime&);
bool is_arithmetic_VS9ogqN5(const s_Type&);
s_Intlit Intlit_IQ08v4Hx(fu::view<char>);
bool is_primitive_VS9ogqN5(const s_Type&);
int basePrimPrefixLen_1NgzHTh0(fu::view<char>);
const s_Struct& lookupStruct_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
s_Type clear_refs_MvT8pzW6(s_Type&&);
const s_Struct& tryLookupStructOrUserPrimitive_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
static s_Type tryRetyping_dostIVUx(const s_SolvedNode&, const s_Type&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_Type&);
bool isStruct_jHe6RDpE(const s_Type&);
fu_STR humanizeQuals_MvT8pzW6(const s_Type&);
static void applyRetype_RC0duBkd(s_SolvedNode&, const s_Type&);
void add_sDUBjUzV(s_BitSet&, int);
const fu_VEC<int>& lookupTypeImports_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
int modidOfOrigin_jHe6RDpE(const s_Type&);
bool has_VM1JQhgd(const s_BitSet&, int);
bool add_once_sDUBjUzV(s_BitSet&, int);
s_Target target_xni9Jmtc(const s_ScopeItem&);
s_Target search_nKIDIgU2(fu::view<s_ScopeItem>, fu::view<char>, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
bool type_isAddrOfFn_ZFEUWUgI(const s_Type&);
s_Mi parseMi_0HRwKgGk(int&, fu::view<char>);
void Scope_pop_KQTgazm7(s_Scope&, const s_ScopeMemo&, fu_VEC<s_Helpers>&);
inline bool all_v6qfU7ln(fu::view<s_SolvedNode>);
static bool couldRetype_a93bitxU(const s_SolvedNode&);
fu_STR resolveFile_x_adz9iQmO(const fu_STR&, const s_Context&);
fu_STR qBAD_ThvlUeXJ(const fu_STR&);
s_Type tryClear_ref_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_mutref_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_array_MvT8pzW6(const s_Type&);
s_Type relax_typeParam_MvT8pzW6(s_Type&&);
s_Type tryClear_sliceable_MvT8pzW6(const s_Type&);
bool isAssignable_b2EdYOvX(const s_Type&, const s_Type&, bool, bool);
static bool trySolveTypeParams_HwBhlKqE(const s_Node&, s_Type&&, s_Map_087aZo54YWi&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
fu_STR serializeType_j1lEWOZW(const s_Type&, fu::view<char>, const s_TokenIdx&, const s_Context&);
bool is_trivial_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
bool is_rx_copy_MvT8pzW6(const s_Type&);
bool is_bitfield_VS9ogqN5(const s_Type&);
bool is_integral_VS9ogqN5(const s_Type&);
bool is_unsigned_VS9ogqN5(const s_Type&);
bool is_floating_pt_VS9ogqN5(const s_Type&);
bool is_mutref_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_enum_VS9ogqN5(const s_Type&);
bool is_flags_VS9ogqN5(const s_Type&);
s_Type type_tryIntersect_XJgsWJyN(const s_Type&, const s_Type&);
static bool evalTypePattern_z4KdfH2s(const s_Node&, s_Map_087aZo54YWi&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_ScopeSkipMemos&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
void Scope_set_5KbqLH2z(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
bool isAssignableAsArgument_0a4boBJ8(const s_Type&, const s_Type&, bool);
bool is_ref2temp_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
static s_SolvedNode solveLetLike_dontTouchScope_i0yzSZn0(const s_Node&, const s_Type&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
s_Lifetime Lifetime_static_8nlJDPX0();
s_Region Region_fromLocal_BaKYka79(int);
bool Region_isArgPosition_RvC5USpz(const s_Region&);
bool Region_isTemp_RvC5USpz(const s_Region&);
int Region_toLocal_RvC5USpz(const s_Region&);
static s_SolvedNode solveLet_S3XwQiJe(const s_Node&, const s_Type&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
int Region_asLocal_RvC5USpz(const s_Region&);
s_NativeHacks NativeHacks_QYk3NQTZ(fu::view<char>);
void ArgsAtRisk_list_rTp4tlti(s_BitSet&, const s_Flow&, int, fu::view<fu_VEC<int>>);
bool TODO_FIX_isArray_MvT8pzW6(const s_Type&);
s_BitSet& and_not_assign_GKz57Mnx(s_BitSet&, const s_BitSet&);
void add_range_sDUBjUzV(s_BitSet&, int);
bool rem_sDUBjUzV(s_BitSet&, int);
s_Lifetime Lifetime_union_BGIGvcl2(const s_Lifetime&, const s_Lifetime&);
const s_Token& _token_oqTaHNkG(const s_TokenIdx&, const s_Context&);
const fu_STR& _fname_oqTaHNkG(const s_TokenIdx&, const s_Context&);
fu_STR formatCodeSnippet_MxvshLCw(const s_TokenIdx&, s_TokenIdx&&, const s_Context&);
static fu_STR qSTACK_ywMJiPAc(const s_Target&, const s_Region&, fu::view<s_Target>, const s_Scope&, const s_Module&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
static fu_STR qSTACK_yxSnwuR0(const s_Target&, int, fu::view<s_Target>, const s_Module&, const s_Scope&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
static fu_STR qSTACK_Y8ZauWfH(const s_Target&, const s_SolvedNode&, const s_Region&, fu::view<s_Target>, const s_Target&, const s_Module&, const s_Context&, const s_Scope&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
bool is_rx_resize_MvT8pzW6(const s_Type&);
s_Region Region_fromArgPosition_BaKYka79(int);
bool Region_isStatic_RvC5USpz(const s_Region&);
bool hasAssignment_3qRoPKdA(fu::view<char>);
fu_STR hash62_EhsXBDGJ(fu::view<char>, int);
static bool Lifetime_allowsMutrefReturn_D0vlKEwC(const s_Lifetime&, int, const s_Target&, const s_Module&, const s_Scope&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
static void test_nodes_7Y8MgurW(fu::view<s_SolvedNode>, fu::view<char>, s_TokenIdx&, const s_Module&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&);
static void test_node_Bpk9KB9y(const s_SolvedNode&, fu_STR&&, s_TokenIdx&, const s_Module&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&);
bool try_relax_Wnahb19Z(s_Type&, const s_Type&, int);
static void relaxBlockVar_MBtVy1qW(const s_Target&, int, s_Scope&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
void add_GKz57Mnx(s_BitSet&, const s_BitSet&);
static bool trackUse_0V2NXrZ1(const s_Target&, s_BitSet&, const s_Scope&, const s_Module&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&, const s_Target&, const s_CurrentFn&);
static bool trackUse_mSINTREx(const s_Lifetime&, s_BitSet&, const s_Target&, const s_Module&, const s_Scope&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&, const s_CurrentFn&);
static s_Target trySpecialize_ODMsMpw1(const s_Target&, fu::view<s_SolvedNode>, fu_STR&, int, const s_Type&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, s_Scope&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
int Region_toArgPosition_RvC5USpz(const s_Region&);
void clear_pjZ6yXGF(s_BitSet&);
s_Type make_copyable_MvT8pzW6(s_Type&&);
inline static void Lifetime_each_Z0DRPhwy(const s_Lifetime&, int, const s_Target&, const s_Module&, s_Scope&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
static void Lifetime_F_MOVED_FROM_t49jzoIG(const s_Lifetime&, const s_Target&, const s_Module&, s_Scope&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
static void trackJustMoved_b3h7rCFb(const s_Lifetime&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_Target&, s_CurrentFn&);
s_Type clear_sliceable_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
static void propagateType_8TxqwKMZ(s_SolvedNode&, const s_Type&, int, s_Scope&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
void Reference_trackArgument_P8K1ktk8(s_Flow&, int, int, const s_TokenIdx&, const s_Context&);
static bool RESOLVE_byAAR_Cm6pdAS6(int, int, bool, bool, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_Target&, s_CurrentFn&);
s_Lifetime Lifetime_inter_BGIGvcl2(const s_Lifetime&, const s_Lifetime&);
bool is_boolean_VS9ogqN5(const s_Type&);
inline void each_vCga3jNj(fu::view<int>, s_CurrentFn&);
static void tagWritten_WKCiCaor(int, s_CurrentFn&);
inline fu_VEC<s_Region> inter_cjr4hkt7(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
static bool RESOLVE_byAAR_gxOGJxIf(int, fu::view<s_Region>, bool, bool, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_Target&, s_CurrentFn&);
static bool RESOLVE_byAAR_FH5yxSJM(fu::view<s_WriteID>, int, bool, s_CurrentFn&, bool, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_Scope&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_Target&);
static void bck_call_hxgS7AxT(s_SolvedNode&, s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, bool, const s_Options&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&, const s_SolvedNode&);
static void bck_loop_T0opoYqB(s_SolvedNode&, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, bool, const s_Options&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&, const s_SolvedNode&);
static void bck_nodes_Vb6n3iPK(fu::view_mut<s_SolvedNode>, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, bool, const s_Options&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&, const s_SolvedNode&);
void Reference_trackLocalRef_b5wNsTR7(s_Flow&, int, const s_Lifetime&);
static void bck_let_2WRDBp7f(s_SolvedNode&, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, bool, const s_Options&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&, const s_SolvedNode&);
static void bck_if_JbwnG4RE(s_SolvedNode&, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, bool, const s_Options&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&, const s_SolvedNode&);
static void bck_block_g0BSo8CK(s_SolvedNode&, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, bool, const s_Options&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&, const s_SolvedNode&);
static void bck_node_6Ft9cFgW(s_SolvedNode&, s_CurrentFn&, s_Module&, s_Scope&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, bool, const s_Options&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&, const s_SolvedNode&);
static void mcom_node_AI3deVBn(s_SolvedNode&, fu_VEC<s_HelpersData>&, const s_Target&, s_Module&, const s_Context&, s_Scope&, fu_VEC<s_Helpers>&, s_TokenIdx&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_CurrentFn&, const s_Options&, s_SolverNotes&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&);
static void runAllPasses_t8PbjGd1(s_SolvedNode&, s_TokenIdx&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveBlock_7a90i7rV(const s_Node&, const s_Type&, int, s_HelpersMask, const fu_STR&, int, s_Scope&, fu_VEC<s_Helpers>&, s_Module&, s_CurrentFn&, const s_Target&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Context&, fu_VEC<s_Warning>&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static void lazySolveEnd_7R2yFqBO(const s_Target&, s_Scope&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Options&, s_SolverNotes&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_Target doTrySpecialize_CuYaoMfr(const s_Target&, const s_Target&, fu::view<s_SolvedNode>, const fu_STR&, fu::view<int>, bool, fu::view<fu_VEC<s_Target>>, int, const s_Type&, s_Scope&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static bool lazySolveStart_vCoSTAS3(const s_Target&, const s_Overload&, s_Scope&, s_Module&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, const s_Context&, s_TokenIdx&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
int popcount_lrBoAoRV(const s_BitSet&);
static fu_STR qWHAT_26BgYmff(const s_Argument&, const s_Module&, const s_Scope&, const s_Context&, fu::view<s_Helpers>, fu::view<s_HelpersData>, const s_TokenIdx&);
fu_STR qCODE_ThvlUeXJ(const fu_STR&);
static s_Target tryMatch__mutargs_wMm8PACJ(fu_STR&&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_STR&, bool, const s_Scope&, fu::view<s_SolvedNode>, s_Flags, const s_Target&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&);
s_Type add_refs_XJgsWJyN(const s_Type&, s_Type&&);
static void foreach_Oxyt0gGK(const s_Target&, fu_VEC<s_SolvedNode>&, bool, bool, const s_SolvedNode&, const s_Type&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, const s_Options&, s_SolverNotes&, const fu_STR&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, bool, const s_Scope&, int);
static void descend_mMNV1ide(const s_Type&, bool, bool, bool, bool, s_Scope&, const s_Scope&, s_ScopeSkipMemos&, fu_VEC<s_SolvedNode>&, const s_SolvedNode&, const s_SolvedNode&, fu_VEC<int>&, fu_VEC<fu_VEC<s_Target>>&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_ScopeItem>&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, const s_Options&, s_SolverNotes&, const fu_STR&, const s_Type&, fu_VEC<s_Target>&, fu_VEC<s_Target>&, const s_Type&, int);
static fu_VEC<s_Target> tryConvert_rJdCmcwd(const s_Type&, const s_Type&, const s_SolvedNode&, bool, const s_Scope&, s_Scope&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_ScopeItem>&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, s_CurrentFn&, const s_Type&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, const s_Options&, s_SolverNotes&, const fu_STR&);
static s_SolvedNode bindImplicitArg_LYVQndty(const fu_STR&, const s_Type&, const s_Target&, s_Module&, s_Scope&, const s_Context&, s_CurrentFn&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, const s_Target&, const s_Options&, s_SolverNotes&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&, const s_Type&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&);
fu_STR serialize_NMBClXQY(const s_ClosureID&);
static s_SolvedNode CallerNode_f9MJt2Cf(const fu_STR&, s_Target&&, fu_VEC<s_SolvedNode>&&, const fu_VEC<int>&, fu::view<fu_VEC<s_Target>>, const s_Target&, s_Module&, s_Scope&, const s_Context&, const s_Options&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_SolverNotes&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&, const s_Type&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&);
static bool applyConversion_1J8eUN5p(s_SolvedNode&, fu::view<s_Target>, s_Module&, s_Scope&, const s_Context&, const s_Target&, const s_Options&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_SolverNotes&, s_CurrentFn&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, fu_VEC<s_SolvedNode>&, const s_Type&, fu_VEC<fu_STR>&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&);
static s_Type convertToSuperType_aJbEq7cm(fu::view<char>, s_SolvedNode&, s_SolvedNode&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, const s_Options&, s_SolverNotes&, const fu_STR&);
static s_SolvedNode createIf_olZB9aMW(const s_SolvedNode&, s_SolvedNode&&, s_SolvedNode&&, s_Type&&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, fu_VEC<fu_STR>&, const s_Options&, s_SolverNotes&, const fu_STR&);
static s_SolvedNode createBlock_7yOivmtL(const s_Type&, fu_VEC<s_SolvedNode>&&, const s_Helpers&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_CurrentFn&, const s_Options&, s_SolverNotes&, fu_VEC<fu_STR>&, const s_Target&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&);
static s_SolvedNode deadCall_emET5nsg(const fu_VEC<s_SolvedNode>&, const s_Options&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_SolverNotes&, const s_Type&, fu_VEC<s_SolvedNode>&, s_ScopeSkipMemos&, fu_VEC<s_ScopeItem>&, s_CurrentFn&, fu_VEC<fu_STR>&, const s_Target&, s_ScopeMemo&, s_Map_RnDv9VM4mhf&, fu_VEC<s_Warning>&, const fu_STR&);
static s_SolvedNode solveCall_4PPXPXkI(const s_Node&, const s_Target&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
s_Type createSlice_8kJD1Pzg(const s_Type&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
static s_Type evalTypeAnnot_Rs0Ayhy7(const s_Node&, const s_Map_087aZo54YWi&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
s_Type initStruct_L8nBbfTc(s_kind, const fu_STR&, const fu_STR&, s_DeclAsserts, s_Module&);
s_Target Scope_Typedef_FdOSYsLU(s_Scope&, const fu_STR&, const s_Type&, s_Flags, const fu_STR&, s_SolverStatus, const s_Module&);
s_Struct& lookupStruct_mut_KqcnL3sY(fu::view<char>, s_Module&);
s_Type despeculateStruct_MwGOv57o(s_Type&&);
const s_Struct& tryLookupStruct_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
s_Intlit Intlit_V3Khstyl(uint64_t, bool, fu_STR&&, bool, bool, uint64_t);
static s_SolvedNode __solveStruct_Gmi1QLIO(bool, const s_Node&, const s_Target&, s_CurrentFn&, s_Scope&, s_Module&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static fu_VEC<s_SolvedNode> solveNodes_uMJCZqge(fu::view<s_Node>, const s_Type&, const s_Type&, bool, const fu_STR&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveRoot_tLz32kCr(const s_Node&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_TokenIdx&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveArgID_i9duhJmV(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveArrlit_bjbGaN96(const s_Node&, const s_Type&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveIf_MsumPKzH(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveOr_um4R73DY(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveAnd_pXaD6MSI(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveLetStatement_1rc1cjCc(const s_Node&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveLoop_t38TMNfT(const s_Node&, s_Scope&, fu_VEC<s_Helpers>&, s_CurrentFn&, const s_Target&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<s_Warning>&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static void injectJumps_6nSchzLo(const s_Helpers&, s_SolvedNode&, const s_TokenIdx&);
static s_SolvedNode solveJump_rvcXZ5JW(const s_Node&, fu_VEC<s_Helpers>&, s_ScopeSkipMemos&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
bool type_isSliceable_ZFEUWUgI(const s_Type&);
static s_SolvedNode solveDefer_ZBp5ZBOm(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveTryCatch_K1rVoCSJ(const s_Node&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Scope&, s_Module&, const s_Context&, s_TokenIdx&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveTypedef_FDueUNoz(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveTypeCast_YH5zRwK2(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static void walk_X94CRFXf(s_Node&, fu::view<char>, fu::view<char>, fu::view<char>, fu::view<char>, const s_ScopeItem&);
static s_SolvedNode solveForFieldsOf_rnFbfkpT(const s_Node&, s_TokenIdx&, const s_Context&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
void bReak_DX6KImTN();
static s_SolvedNode executeCompilerPragma_yh7lONoG(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveDeclExpr_rddvSo7O(const s_Node&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
static s_SolvedNode solveNode_f7LszhQF(const s_Node&, const s_Type&, s_TokenIdx&, fu_VEC<s_Helpers>&, fu_VEC<s_HelpersData>&, s_Module&, const s_Context&, s_Scope&, s_CurrentFn&, fu_VEC<s_Warning>&, const s_Target&, s_Map_RnDv9VM4mhf&, s_ScopeSkipMemos&, s_ScopeMemo&, const s_Type&, fu_VEC<fu_STR>&, fu_VEC<s_SolvedNode>&, const s_Options&, s_SolverNotes&, const fu_STR&, fu_VEC<s_ScopeItem>&);
s_Scope Scope_exports_LfniZTVl(const s_Scope&, int, const fu_VEC<s_ScopeItem>&);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
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
    s_kind_unwrap = 33,
    s_kind_forfieldsof = 34,
    s_kind_pragma = 35,
    s_kind_void = 36,
    s_kind_struct = 37,
    s_kind_union = 38,
    s_kind_primitive = 39,
    s_kind_flags = 40,
    s_kind_enum = 41,
    s_kind_members = 42,
    s_kind_fn = 43,
    s_kind_fnbranch = 44,
    s_kind_pattern = 45,
    s_kind_typeunion = 46,
    s_kind_typetag = 47,
    s_kind_jump = 48,
    s_kind_empty = 49,
    s_kind_letdef = 50,
    s_kind___relaxed = 51,
    s_kind___convert = 52,
    s_kind_fndef = 53,
    s_kind_copy = 54,
    s_kind_move = 55,
    s_kind___far_jump = 56,
    s_kind___no_kind_yet = 57,
    s_kind_type = 58,
    s_kind_var = 59,
    s_kind_field = 60,
    s_kind_enumv = 61,
    s_kind_template = 62,
    s_kind___native = 63,
    s_kind_inline = 64,
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

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_INFIX
    | s_Flags_F_PREFIX
    | s_Flags_F_POSTFIX
    | s_Flags_F_ACCESS
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
    | s_Flags_F_OPERATOR
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
    | s_Flags_F_LAMBDA;
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
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = 1;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = 2;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC_MUT = 4;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = 8;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = 16;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = 32;

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_NOVEC_MUT
    | s_DeclAsserts_A_PURE
    | s_DeclAsserts_A_PURE_CTX
    | s_DeclAsserts_A_NOFLOW;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = 1;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = 2;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = 4;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = 8;

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
inline constexpr s_SolverNotes s_SolverNotes_N_BckSoftRisk = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 1048576;

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

                                #ifndef DEF_s_Map_gb6sFwC7IKi
                                #define DEF_s_Map_gb6sFwC7IKi
struct s_Map_gb6sFwC7IKi
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
    s_Map_gb6sFwC7IKi files;
    s_Map_gb6sFwC7IKi fuzzy;
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
    s_Moves moves;
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
            || moves
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolverPass
                                #define DEF_s_SolverPass
enum s_SolverPass: fu::u8
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

                                #ifndef DEF_s_Map_RnDv9VM4mhf
                                #define DEF_s_Map_RnDv9VM4mhf
struct s_Map_RnDv9VM4mhf
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

                                #ifndef DEF_s_Map_087aZo54YWi
                                #define DEF_s_Map_087aZo54YWi
struct s_Map_087aZo54YWi
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

#ifndef fu_NO_fdefs

static const bool OPTI_autoshadow = true;

static const bool OPTI_dedupe_vars = true;

static const bool OPTI_flatten_blocks = true;

static const bool OPTI_bck = true;

static const bool SELF_TEST = true;

static const bool DONT_match_zeroes = true;

static void push_47mX1hUW(const s_HelpersData& data, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data)
{
    _helpers += s_Helpers { _helpers_data.size() };
    _helpers_data += s_HelpersData(data);
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static s_SolvedNode SolvedNode_ltxQ8cxX(const s_kind kind, const s_Type& type, const s_Flags flags, const fu_STR& value, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_Helpers& helpers, const s_TokenIdx& _here)
{
    return s_SolvedNode { s_kind(kind), s_Helpers(helpers), s_Flags(flags), fu_STR(value), fu_VEC<s_SolvedNode>(items), s_TokenIdx(_here), s_Type(type), s_Target(target), s_RWRanges{} };
}

static void _Scope_import__forceCopy_3bmnGOcd(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, 0, s.pub_items);
    _scope.converts += fu::get_view(s.converts, 0, s.pub_cnvrts);
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

static int unorderedClassify_cIqxGsrh(const s_kind kind)
{
    if (kind == s_kind_fn)
        return 1;
    else if ((kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags))
        return 10;
    else
        return 0;

}

                                #ifndef DEF_str_hwRw3Bt9F9l
                                #define DEF_str_hwRw3Bt9F9l
inline fu_STR str_hwRw3Bt9(const s_SolverNotes n)
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

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static bool isFnOrType_0BbFFz6D(const s_Helpers& h, fu::view<s_HelpersData> _helpers_data)
{
    return !!s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_Struct))));
}

                                #ifndef DEF_str_Nv8N1QNv9nk
                                #define DEF_str_Nv8N1QNv9nk
inline fu_STR str_Nv8N1QNv(const s_SolverPass n)
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

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_max_gcxVH86XFM7
                                #define DEF_max_gcxVH86XFM7
inline int max_gcxVH86X(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

static bool isLocal_bkThDLoo(const s_Target& target)
{
    return target.modid < 0;
}

                                #ifndef DEF_unless_oob_u1lQiwAxifj
                                #define DEF_unless_oob_u1lQiwAxifj
inline const s_Extended& unless_oob_u1lQiwAx(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_onaILX8Q(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_u1lQiwAx(_scope.extended, target.index);
    else
        return (target.modid >= 0) ? unless_oob_u1lQiwAx(ctx.modules[target.modid].out.solve.scope.extended, target.index) : (*(const s_Extended*)fu::NIL);

}

static int localOf_1vQW2MPl(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    if (isLocal_bkThDLoo(target))
        return -target.modid;
    else
        return int(EXT_onaILX8Q(target, module, _scope, ctx).local_of);

}

static s_Target parent_mvdJCDL8(const s_Target& target, const s_Module& module, const s_Scope& _scope, const s_Context& ctx)
{
    return s_Target { int(module.modid), localOf_1vQW2MPl(target, module, _scope, ctx) };
}

                                #ifndef DEF_str_x2XZ9C2mr79
                                #define DEF_str_x2XZ9C2mr79
inline fu_STR str_x2XZ9C2m(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
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
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
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
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_typedef)
        return "typedef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
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
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
    else if (n == s_kind_fndef)
        return "fndef"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
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

static fu_STR human_CsN1VqyI(const fu_STR& id, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    const s_Target t = tryParseClosureID_QYk3NQTZ(id).target;
    if (!t)
        return fu_STR(id);
    else
        return (GET_JhxATLIa(parent_mvdJCDL8(t, module, _scope, ctx), _scope, module, ctx, _helpers, _helpers_data, _here).name + ":"_fu) + GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).name;

}

static fu_STR qWHAT_wCuy3nxK(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    const s_kind kind = o.kind;
    fu_STR kind_1 = (((kind == s_kind_var) && (o.flags & s_Flags_F_ARG)) ? "arg"_fu : str_x2XZ9C2m(kind));
    return (qKW_ThvlUeXJ(kind_1) + " "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(o.name, module, _scope, ctx, _helpers, _helpers_data, _here));
}

static const s_Overload& GET_JhxATLIa(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    if (isLocal_bkThDLoo(target))
    {
        fu::view<s_Overload> locals = _scope.extended[-target.modid].locals;
        if ((locals.size() >= target.index))
            return locals[(target.index - 1)];
        else
            fail_F42afdck(x7E_YP7BiSZZ((x7E_YP7BiSZZ((("Out of range local target from: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(parent_mvdJCDL8(target, module, _scope, ctx), _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tindex="_fu), fu::i64dec(target.index)), _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else if (target.modid == module.modid)
        return _scope.overloads[(target.index - 1)];
    else
        return ctx.modules[target.modid].out.solve.scope.overloads[(target.index - 1)];

}

[[noreturn]] static fu::never BUG_D9Hg55no(/*MOV*/ fu_STR&& reason, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu_STR _0 {};
    fail_F42afdck((_0 = "COMPILER BUG:\n\n\t"_fu, (static_cast<fu_STR&&>(_0) + (reason ? static_cast<fu_STR&&>(reason) : "Assertion failed."_fu))), _helpers, _helpers_data, _scope, module, ctx, _here);
}

[[noreturn]] static fu::never fail_F42afdck(fu_STR&& reason, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (reason)
    {
        int callstack = 0;
        s_SolverPass pass0 {};
        for (int i = _helpers.size(); i-- > 0; )
        {
            const s_Helpers& h = _helpers[i];
            if (isFnOrType_0BbFFz6D(h, _helpers_data))
            {
                if (!callstack++)
                    reason += "\n"_fu;

                s_SolverPass _0 {};
                fu_STR pass = (((_0 = s_SolverPass(pass0), (s_SolverPass(_0) != (pass0 = _helpers_data[h.index].pass))) || (callstack == 1)) ? x7E_YP7BiSZZ(str_Nv8N1QNv(_helpers_data[h.index].pass), " "_fu) : fu_STR{});
                reason += (fu::get_view("\n                "_fu, 0, max_gcxVH86X((17 - pass.size()), 1)) + pass);
                const s_Overload& o = GET_JhxATLIa(_helpers_data[h.index].target, _scope, module, ctx, _helpers, _helpers_data, _here);
                reason += qWHAT_wCuy3nxK(o, module, _scope, ctx, _helpers, _helpers_data, _here);
            };
        };
        FAIL_MO9c1jyS(reason, _here, ctx);
    }
    else
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static void makeNote_hsfuVyUh(const s_SolverNotes note, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_SolverNotes& _notes)
{
    if (note & options.break_notes)
        fail_F42afdck((x7E_YP7BiSZZ("`break_notes`: Unwanted event: `"_fu, str_hwRw3Bt9(note)) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
    else
        _notes |= note;

}

                                #ifndef DEF_x3Cx3E_gcxVH86XFM7
                                #define DEF_x3Cx3E_gcxVH86XFM7
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_hvR4gqODwpa
                                #define DEF_x3Cx3E_hvR4gqODwpa
inline int x3Cx3E_hvR4gqOD(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YP7BiSZZZOd
                                #define DEF_x3Cx3E_YP7BiSZZZOd
inline int x3Cx3E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hvR4gqOD(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_YP7BiSZZZOd
                                #define DEF_x3Dx3D_YP7BiSZZZOd
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

static bool shouldAutoshadow_9tDCZ3vF(fu::view<char> id, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!OPTI_autoshadow)
        return false;
    else
    {

        {
            fu::view<s_ScopeItem> items = _scope.items;
            fu::view<s_ScopeSkip> scope_skip = _ss.items;
            /*MOV*/ const int start = 0;
            const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
            int i0 = int(start);
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
                        const s_ScopeItem& item = items[i_1];
                        if ((i_1 >= _root_scope.items_len) && (item.id == id))
                            return false;

                    };
                    i0 = ss.end;
                };
            };
        };
        return true;
    };
}

static void autoshadow_wb28vyJh(bool& shadows, const int local_of, fu::view<char> id, const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope)
{
    if (!_current_fn.autoshadow_ok)
        return;
    else if (!shadows && local_of && shouldAutoshadow_9tDCZ3vF(id, _scope, _ss, _root_scope))
        shadows = true;

}

                                #ifndef DEF_grow_if_oob_hkxU7cY4dJd
                                #define DEF_grow_if_oob_hkxU7cY4dJd
inline s_Extended& grow_if_oob_hkxU7cY4(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static s_Extended& EXT_mut_9B5b5lCK(const s_Target& target, const s_Module& module, s_Scope& _scope)
{
    if (target.modid == module.modid)
    {
        return grow_if_oob_hkxU7cY4(_scope.extended, target.index);
    }
    else
        fu_ASSERT();

}

static s_Template createTemplate_uO2Ck5ws(const s_Node& node, const s_CurrentFn& _current_fn, const s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss)
{
    return s_Template { s_Node(node), fu_VEC<int>((!_current_fn ? _scope.imports : (*(const fu_VEC<int>*)fu::NIL))), (_current_fn ? Scope_snap_XX7UzHbd(_scope, _helpers) : s_ScopeMemo{}), s_ScopeSkipMemos((_current_fn ? _ss : (*(const s_ScopeSkipMemos*)fu::NIL))) };
}

static s_Type X_addrofTarget_p9ouzOH1(const s_Target& target)
{
    return s_Type { s_ValueType { 0, packAddrOfFn_KKQQYGG8((fu::slate<1, s_Target> { s_Target(target) })) }, s_Lifetime{} };
}

static s_SolvedNode createFnDef_wFm3k8Gb(const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ltxQ8cxX(s_kind_fndef, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode uPrepFn_A_3GcDYZuX(const s_Node& node, const s_CurrentFn& _current_fn, s_Scope& _scope, const s_Module& module, const s_ScopeSkipMemos& _ss, const s_ScopeMemo& _root_scope, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here)
{
    const fu_STR& id = node.value;
    const int local_of = _current_fn.out.target.index;
    const s_SolverStatus status = s_SolverStatus_SS_LAZY;
    const s_Target target = Scope_create_v4rjZGCu(_scope, s_kind_fn, "__prep__"_fu, (*(const s_Type*)fu::NIL), node.flags, status, 0, module);
    bool shadows = !!(node.flags & s_Flags_F_SHADOW);
    autoshadow_wb28vyJh(shadows, local_of, id, _current_fn, _scope, _ss, _root_scope);
    Scope_set_zPiiGt2T(_scope, id, target, shadows);
    s_Extended& ext = EXT_mut_9B5b5lCK(target, module, _scope);
    ext.local_of = local_of;
    ext.tEmplate = createTemplate_uO2Ck5ws(node, _current_fn, _scope, _helpers, _ss);
    ext.min = int(0x7fffffffu);
    ext.max = 0;
    if (node.flags & s_Flags_F_CONVERSION)
        _scope.converts.push(s_Target(target));

    return createFnDef_wFm3k8Gb(X_addrofTarget_p9ouzOH1(target), target, _here);
}

                                #ifndef DEF_STRUCT_BASE
                                #define DEF_STRUCT_BASE
inline constexpr int STRUCT_BASE = 0;
                                #endif

static s_Type T_tZNU7Ast(const int i, const s_Node& node, const s_Map_087aZo54YWi& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    return evalTypeAnnot_Rs0Ayhy7(node.items[i], typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
}

                                #ifndef DEF_if_last_l6T9uEqEjQl
                                #define DEF_if_last_l6T9uEqEjQl
inline const s_SolvedNode& if_last_l6T9uEqE(fu::view<s_SolvedNode> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_SolvedNode*)fu::NIL);
}
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

                                #ifndef DEF_x3Cx3E_3LeATs3f1O0
                                #define DEF_x3Cx3E_3LeATs3f1O0
inline int x3Cx3E_3LeATs3f(const s_Helpers& a, const s_Helpers& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_3LeATs3f1O0
                                #define DEF_x3Dx3D_3LeATs3f1O0
inline bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return !x3Cx3E_3LeATs3f(a, b);
}
                                #endif

static s_Overload& GET_mut_5Ue5IxE1(const s_Target& target, s_Scope& _scope, const s_Module& module)
{
    if (target.modid < 0)
        return _scope.extended.mutref(-target.modid).locals.mutref((target.index - 1));
    else if ((target.index > 0) && (target.modid == module.modid))
        return _scope.overloads.mutref((target.index - 1));
    else
        fu_ASSERT();

}

                                #ifndef DEF_each_j5PlarJFkyk
                                #define DEF_each_j5PlarJFkyk
inline void each_j5PlarJF(fu::view_mut<s_SolvedNode> a, const s_Helpers& h0, const s_Helpers& h, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        visit_2yZhIqsm(a.mutref(i), h0, h, _helpers_data, _scope, module);

}
                                #endif

static void visit_2yZhIqsm(s_SolvedNode& item, const s_Helpers& h0, const s_Helpers& h, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if ((item.kind == s_kind_jump) && (item.helpers == h0))
    {
        item.helpers = h;
        _helpers_data.mutref(h.index).mask |= s_HelpersMask_HM_LabelUsed;
    };
    if (item.kind == s_kind_letdef)
    {
        const s_Target target { item.target };
        std::swap(item, GET_mut_5Ue5IxE1(target, _scope, module).solved);
        fu_DEFER(std::swap(item, GET_mut_5Ue5IxE1(target, _scope, module).solved));
        each_j5PlarJF(item.items, h0, h, _helpers_data, _scope, module);
    };
    each_j5PlarJF(item.items, h0, h, _helpers_data, _scope, module);
}

                                #ifndef DEF_only_l6T9uEqEjQl
                                #define DEF_only_l6T9uEqEjQl
inline const s_SolvedNode& only_l6T9uEqE(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static void relinkJumps_DPgUWGRy(const s_Helpers& h, s_SolvedNode& expr, fu::view_mut<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module)
{
    if (expr.kind == s_kind_block)
    {
        const s_Helpers h0 { expr.helpers };
        if (_helpers_data[h0.index].mask & s_HelpersMask_HM_LabelUsed)
        {
            visit_2yZhIqsm(expr, h0, h, _helpers_data, _scope, module);
            _helpers_data.mutref(h0.index).mask &= s_HelpersMask(~s_HelpersMask_HM_LabelUsed);
            expr.helpers = s_Helpers{};
            if (expr.items.size() == 1)
                expr = only_l6T9uEqE(expr.items);

        };
    };
}

                                #ifndef DEF_last_sQklljcvMFa
                                #define DEF_last_sQklljcvMFa
inline s_SolvedNode& last_sQklljcv(fu::view_mut<s_SolvedNode> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_last_l6T9uEqEjQl
                                #define DEF_last_l6T9uEqEjQl
inline const s_SolvedNode& last_l6T9uEqE(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static s_SolvedNode createEmpty_yAvEtBa3(const s_kind kind, const s_Type& type, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ltxQ8cxX(kind, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

                                #ifndef DEF_x3Cx3E_VSvR2otmpSl
                                #define DEF_x3Cx3E_VSvR2otmpSl
inline int x3Cx3E_VSvR2otm(const s_ValueType& a, const s_ValueType& b)
{

    {

        {
            /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.quals, b.quals);
            if (cmp)
                return /*NRVO*/ cmp;

        };
        /*MOV*/ const int cmp = x3Cx3E_YP7BiSZZ(a.canon, b.canon);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_gIvInnt76me
                                #define DEF_x3Cx3E_gIvInnt76me
inline int x3Cx3E_gIvInnt7(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_I6bIjEiYvCe
                                #define DEF_x3Cx3E_I6bIjEiYvCe
inline int x3Cx3E_I6bIjEiY(fu::view<s_Region> a, fu::view<s_Region> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_gIvInnt7(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_vhcxJrPf7Sf
                                #define DEF_x3Cx3E_vhcxJrPf7Sf
inline int x3Cx3E_vhcxJrPf(const s_Lifetime& a, const s_Lifetime& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_I6bIjEiY(a.uni0n, b.uni0n);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_PsqHNzQDchj
                                #define DEF_x3Cx3E_PsqHNzQDchj
inline int x3Cx3E_PsqHNzQD(const s_Type& a, const s_Type& b)
{

    {

        {
            /*MOV*/ const int cmp = x3Cx3E_VSvR2otm(a.vtype, b.vtype);
            if (cmp)
                return /*NRVO*/ cmp;

        };
        /*MOV*/ const int cmp = x3Cx3E_vhcxJrPf(a.lifetime, b.lifetime);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_PsqHNzQDchj
                                #define DEF_x3Dx3D_PsqHNzQDchj
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_PsqHNzQD(a, b);
}
                                #endif

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
extern const bool CANNOT_definit_mutrefs;
                                #endif

static s_SolvedNode createAnd_fnZkGcX8(const fu_VEC<s_SolvedNode>& items, s_Type&& type, const s_TokenIdx& _here)
{
    if (items.size() < 2)
        return s_SolvedNode(only_l6T9uEqE(items));
    else
    {
        if (is_void_ZFEUWUgI(type))
            type = t_bool;

        if (!(type == t_bool))
        {
            /*MOV*/ s_Type sumType {};
            for (int i = items.size(); i-- > 0; )
            {
                const s_SolvedNode& item = items[i];
                if (is_never_ZFEUWUgI(item.type))
                    continue;
                else if (sumType)
                {
                    sumType = type_trySuper_0a4boBJ8(sumType, item.type, bool{});
                    if (!is_ref_MvT8pzW6(sumType))
                        break;

                }
                else
                {
                    type = item.type;
                    sumType = item.type;
                    if (is_zeroes_ZFEUWUgI(type))
                        break;

                };
            };
            if (!is_ref_MvT8pzW6(sumType))
            {
                if (is_ref_MvT8pzW6(type))
                {
                    if (CANNOT_definit_mutrefs)
                        type = clear_mutref_MvT8pzW6(s_Type(type));

                    type.lifetime = Lifetime_makeShared_L0YJBnz6(type.lifetime);
                };
            }
            else
            {
                type = static_cast<s_Type&&>(sumType);
            };
        };
        return SolvedNode_ltxQ8cxX(s_kind_and, type, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
    };
}

static s_SolvedNode createOr_vwmdrQyS(fu_VEC<s_SolvedNode>&& items, s_Type&& type, const s_TokenIdx& _here)
{
    if (items.size() < 2)
        return s_SolvedNode(only_l6T9uEqE(items));
    else
    {
        if (is_void_ZFEUWUgI(type))
            type = t_bool;

        if (!(type == t_bool))
        {
            /*MOV*/ s_Type sumType {};
            bool hasNever = false;
            for (int i = items.size(); i-- > 0; )
            {
                s_SolvedNode& item = items.mutref(i);
                if (is_never_ZFEUWUgI(item.type))
                {
                    hasNever = true;
                    continue;
                }
                else
                {
                    const s_SolvedNode& andLast = (hasNever && (item.kind == s_kind_and) && item.items ? item.items[(item.items.size() - 1)] : (*(const s_SolvedNode*)fu::NIL));
                    const s_Type& itemType = ((andLast && !is_never_ZFEUWUgI(andLast.type)) ? (item.type = andLast.type) : item.type);
                    if (sumType)
                    {
                        sumType = type_trySuper_0a4boBJ8(sumType, itemType, bool{});
                        if (!sumType)
                            break;

                    }
                    else
                    {
                        sumType = itemType;
                    };
                };
            };
            if (!sumType)
                type = t_bool;
            else
                type = static_cast<s_Type&&>(sumType);

        };
        return SolvedNode_ltxQ8cxX(s_kind_or, type, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
    };
}

static const fu_STR& getBasePrimitive_UfpqgUHG(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    const int offset = basePrimPrefixLen_1NgzHTh0(type.vtype.canon);
    if (offset < type.vtype.canon.size())
        return lookupStruct_3ZVvGB0M(type, module, ctx).base;
    else
        return type.vtype.canon;

}

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

static bool want_PpZA3bq6(const s_Type& t, fu::view<char> c)
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

static s_Type solveInt_h1QHUMDM(fu::view<char> v, const s_Type& type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    /*MOV*/ s_Intlit parse = Intlit_IQ08v4Hx(v);
    if (parse.error)
        fail_F42afdck(static_cast<fu_STR&&>(parse.error), _helpers, _helpers_data, _scope, module, ctx, _here);
    else
    {
        if (type && is_primitive_VS9ogqN5(type))
        {
            fu::view<char> c = getBasePrimitive_UfpqgUHG(type, module, ctx);
            if (!parse.uNsigned)
            {
                if (((parse.minsize_f <= fu::u8(32u)) && want_PpZA3bq6(t_f32, c)) || ((parse.minsize_f <= fu::u8(64u)) && want_PpZA3bq6(t_f64, c)) || ((parse.minsize_i <= fu::u8(32u)) && want_PpZA3bq6(t_i32, c)) || ((parse.minsize_i <= fu::u8(64u)) && want_PpZA3bq6(t_i64, c)) || ((parse.minsize_i <= fu::u8(16u)) && want_PpZA3bq6(t_i16, c)) || ((parse.minsize_i <= fu::u8(8u)) && want_PpZA3bq6(t_i8, c)))
                    return clear_refs_MvT8pzW6(s_Type(type));

            };
            if (!parse.sIgned)
            {
                if (((parse.minsize_u <= fu::u8(32u)) && want_PpZA3bq6(t_u32, c)) || ((parse.minsize_u <= fu::u8(64u)) && want_PpZA3bq6(t_u64, c)) || ((parse.minsize_u <= fu::u8(16u)) && want_PpZA3bq6(t_u16, c)) || ((parse.minsize_u <= fu::u8(8u)) && want_PpZA3bq6(t_u8, c)))
                    return clear_refs_MvT8pzW6(s_Type(type));

            };
        };
        if (parse.uNsigned)
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
        fail_F42afdck("Bad int literal."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static const s_Type& solveReal_ykxfpy51(const fu_STR& v, const s_Type& type)
{
    if (v)
    {
    };
    if (type.vtype.canon == t_f32.vtype.canon)
        return t_f32;
    else
        return t_f64;

}

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes;
                                #endif

static s_Type trySolveDefinit_1AEtthiT(const s_Type& type)
{
    if (!type)
        return s_Type(t_zeroes);
    else
    {
        return type_trySuper_0a4boBJ8(t_zeroes, type, bool{});
    };
}

static s_Type solveString_z5AbYQIw(fu::view<char> v, const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Type& t_string)
{
    if (type && is_primitive_VS9ogqN5(type))
    {
        fu::view<s_ScopeItem> members = tryLookupStructOrUserPrimitive_3ZVvGB0M(type, module, ctx).items;
        for (int i = 0; i < members.size(); i++)
        {
            if (members[i].id == v)
                return clear_refs_MvT8pzW6(s_Type(type));

        };
    };
    return s_Type(t_string);
}

static s_Type tryRetyping_dostIVUx(const s_SolvedNode& node, const s_Type& expect, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Type& t_string)
{
    if (is_arithmetic_VS9ogqN5(node.type) && is_arithmetic_VS9ogqN5(expect))
    {
        if (node.kind == s_kind_int)
            return solveInt_h1QHUMDM(node.value, expect, _helpers, _helpers_data, _scope, module, ctx, _here);
        else if (node.kind == s_kind_real)
            return s_Type(solveReal_ykxfpy51(node.value, expect));

    };
    if (node.kind == s_kind_definit)
        return trySolveDefinit_1AEtthiT(expect);
    else if (node.kind == s_kind_str)
        return solveString_z5AbYQIw(node.value, expect, module, ctx, t_string);
    else if (node.kind == s_kind_if)
    {
        s_Type left = tryRetyping_dostIVUx(node.items[1], expect, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
        s_Type right = tryRetyping_dostIVUx(node.items[2], expect, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
        return left && right ? type_trySuper_0a4boBJ8(left, right, bool{}) : s_Type{};
    }
    else if (node.kind == s_kind_and)
        return tryRetyping_dostIVUx(last_l6T9uEqE(node.items), expect, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
    else
    {
        return s_Type{};
    };
}

static fu_STR humanizeType_PJ01PlxR(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_STR result { (isStruct_jHe6RDpE(type) ? lookupStruct_3ZVvGB0M(type, module, ctx).name : type.vtype.canon) };
    if (type.vtype.quals)
        result += humanizeQuals_MvT8pzW6(type);

    return /*NRVO*/ result;
}

static void applyRetype_RC0duBkd(s_SolvedNode& node, const s_Type& retype)
{
    if (node.kind == s_kind_if)
    {
        applyRetype_RC0duBkd(node.items.mutref(1), retype);
        applyRetype_RC0duBkd(node.items.mutref(2), retype);
    }
    else if (node.kind == s_kind_and)
        applyRetype_RC0duBkd(last_sQklljcv(node.items), retype);

    node.type = retype;
}

                                #ifndef DEF_each_yzMLxCzUgm8
                                #define DEF_each_yzMLxCzUgm8
inline void each_yzMLxCzU(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, int& count, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
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
                const s_Target& u = items[i_1];
                if (u)
                    count++;
                else
                {
                    BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                };
            };
            i0 = ss.end;
        };
    };
}
                                #endif

static int countUsings_dPBMRQTc(const bool local_scope, const s_Scope& _scope, const s_Scope& misc_scope, const s_ScopeSkipMemos& _ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Scope& scope = (local_scope ? _scope : misc_scope);
    /*MOV*/ int count = 0;
    if (scope.usings)
    {
        each_yzMLxCzU(scope.usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, count, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
    return /*NRVO*/ count;
}

                                #ifndef DEF_each_0JDCB4aVlxe
                                #define DEF_each_0JDCB4aVlxe
inline void each_0JDCB4aV(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, s_BitSet& seen)
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
                add_sDUBjUzV(seen, modid);
            };
            i0 = ss.end;
        };
    };
}
                                #endif

static void visitTypeImports_UBWiNznl(const s_Type& type, const s_Module& module, const s_Context& ctx, s_BitSet& seen, const s_Scope& _scope, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
{
    fu::view<int> visit = lookupTypeImports_3ZVvGB0M(type, module, ctx);
    for (int i = -1; i < visit.size(); i++)
    {
        const int modid = ((i >= 0) ? int(visit[i]) : modidOfOrigin_jHe6RDpE(type));
        if (has_VM1JQhgd(seen, modid))
            continue;
        else
        {
            if (!seen)
            {
                add_sDUBjUzV(seen, 0);
                add_sDUBjUzV(seen, module.modid);
                each_0JDCB4aV(_scope.imports, (local_scope ? _ss.imports : fu::view<s_ScopeSkip>{}), 0, seen);
            };
            if (!add_once_sDUBjUzV(seen, modid))
                continue;
            else
            {
                fu::view<s_ScopeItem> items = ctx.modules[modid].out.solve.scope.items;
                for (int i_1 = 0; i_1 < items.size(); i_1++)
                {
                    if (items[i_1].id == id)
                        extra_items.push(target_xni9Jmtc(items[i_1]));

                };
            };
        };
    };
}

                                #ifndef DEF_each_sKHYoDBJ4E8
                                #define DEF_each_sKHYoDBJ4E8
inline void each_sKHYoDBJ(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, s_BitSet& seen, const bool local_scope, const s_ScopeSkipMemos& _ss, fu::view<char> id, fu_VEC<s_Target>& extra_items)
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
                const s_Target& u = items[i_1];
                visitTypeImports_UBWiNznl(GET_JhxATLIa(u, _scope, module, ctx, _helpers, _helpers_data, _here).type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);
            };
            i0 = ss.end;
        };
    };
}
                                #endif

                                #ifndef DEF_str_TLHLjjkRfhd
                                #define DEF_str_TLHLjjkRfhd
inline fu_STR str_TLHLjjkR(const s_SolverStatus n)
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

                                #ifndef DEF_last_E3kAR4gVOg5
                                #define DEF_last_E3kAR4gVOg5
inline const s_Target& last_E3kAR4gV(fu::view<s_Target> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_unpackAddrOfFn_OutF1vc36Ul
                                #define DEF_unpackAddrOfFn_OutF1vc36Ul
inline void unpackAddrOfFn_OutF1vc3(fu::view<char> canon, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, int& parent_idx)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            /*MOV*/ const s_Mi mi = parseMi_0HRwKgGk(offset, canon);
            int _0 {};
            const s_Target target = (_0 = int(mi.modid), s_Target { int(_0), int(mi.index) });
            if ((target.modid < 0) || (target.modid == module.modid))
            {
                /*MOV*/ const int local_of = localOf_1vQW2MPl(target, module, _scope, ctx);
                if (parent_idx < local_of)
                    parent_idx = int(local_of);

            };
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

                                #ifndef DEF_add_wAuMmv6Bq41
                                #define DEF_add_wAuMmv6Bq41
inline bool add_wAuMmv6B(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

                                #ifndef DEF_get_YPkVGUsMGfi
                                #define DEF_get_YPkVGUsMGfi
inline const s_Target& get_YPkVGUsM(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_Target> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return (*(const s_Target*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_Gg123who1rc
                                #define DEF_get_Gg123who1rc
inline const s_Target& get_Gg123who(const s_Map_RnDv9VM4mhf& _, fu::view<char> key)
{
    return get_YPkVGUsM(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_rem_LjXbxyz03p5
                                #define DEF_rem_LjXbxyz03p5
inline bool rem_LjXbxyz0(fu_VEC<fu_STR>& keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
        {
            keys.splice(i, 1);
            return true;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return false;
}
                                #endif

                                #ifndef DEF_x3Cx3E_i2s7sQFVZc5
                                #define DEF_x3Cx3E_i2s7sQFVZc5
inline int x3Cx3E_i2s7sQFV(const s_Target& a, const s_Target& b)
{

    {

        {
            /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.modid, b.modid);
            if (cmp)
                return /*NRVO*/ cmp;

        };
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_i2s7sQFVZc5
                                #define DEF_x3Dx3D_i2s7sQFVZc5
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_i2s7sQFV(a, b);
}
                                #endif

static bool is_SPECFAIL_fTaqkZrb(const s_Target& target)
{
    return target.modid == 2147483647;
}

inline static int bfind_SZrILUzY(fu::view<char> item, s_Map_RnDv9VM4mhf& _, const fu_STR& item_1)
{
    /*MOV*/ int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(_.keys[i], item);
        if (cmp == 0)
            return /*NRVO*/ i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    _.keys.insert(lo, fu_STR(item_1));
    _.vals.insert(lo, s_Target{});
    return /*NRVO*/ lo;
}

                                #ifndef DEF_ref_l44iG3RKYca
                                #define DEF_ref_l44iG3RKYca
inline s_Target& ref_l44iG3RK(const fu_STR& item, s_Map_RnDv9VM4mhf& _)
{
    const int idx = bfind_SZrILUzY(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_nXgSNa0BLfh
                                #define DEF_ref_nXgSNa0BLfh
inline s_Target& ref_nXgSNa0B(s_Map_RnDv9VM4mhf& _, const fu_STR& key)
{
    return ref_l44iG3RK(key, _);
}
                                #endif

inline static fu_STR id_36J1Zycm(const s_Target& target, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    if (is_SPECFAIL_fTaqkZrb(target))
        return "SPEC_FAIL"_fu;
    else
        return ("`"_fu + GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).name) + "`"_fu;

}

static void setSpec_RZ5e2YtJ(const fu_STR& mangle, const s_Target& target, const bool nx, const bool allowReplaceNonSpecfails, const bool isInline, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_Map_RnDv9VM4mhf& _specs)
{
    if (isInline && !is_SPECFAIL_fTaqkZrb(target))
        BUG_D9Hg55no(x7E_YP7BiSZZ((("inline.setSpec: "_fu + mangle) + " = "_fu), fu::booldec(is_SPECFAIL_fTaqkZrb(target))), _helpers, _helpers_data, _scope, module, ctx, _here);
    else
    {
        s_Target& t = ref_nXgSNa0B(_specs, mangle);
        if ((!isInline || !t) && (!t == nx) && (!t || is_SPECFAIL_fTaqkZrb(t) || allowReplaceNonSpecfails))
            t = target;
        else
            BUG_D9Hg55no(((((((x7E_YP7BiSZZ((x7E_YP7BiSZZ("About to screw up royally, replacing spec: "_fu, fu::i64dec(t.index)) + " with "_fu), fu::i64dec(target.index)) + ", mangle: "_fu) + mangle) + ", that's: "_fu) + id_36J1Zycm(t, _scope, module, ctx, _helpers, _helpers_data, _here)) + " becoming "_fu) + id_36J1Zycm(target, _scope, module, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

static void resetSpec_ef4IMBaP(const s_Target& spec, const bool allowReplaceNonSpecfails, s_Target& currentSpec, fu::view<fu_STR> mangles, const bool isInline, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_Map_RnDv9VM4mhf& _specs)
{
    if (!(spec == currentSpec))
    {
        currentSpec = spec;
        for (int i = 0; i < mangles.size(); i++)
            setSpec_RZ5e2YtJ(mangles[i], spec, false, allowReplaceNonSpecfails, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);

    };
}

                                #ifndef DEF_if_last_VqXwkGva3v2
                                #define DEF_if_last_VqXwkGva3v2
inline const s_ScopeSkip& if_last_VqXwkGva(fu::view<s_ScopeSkip> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_ScopeSkip*)fu::NIL);
}
                                #endif

                                #ifndef DEF_last_Atgdo9pCcl0
                                #define DEF_last_Atgdo9pCcl0
inline s_ScopeSkip& last_Atgdo9pC(fu::view_mut<s_ScopeSkip> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static void ScopeSkip_push_ybES16Xc(fu_VEC<s_ScopeSkip>& scope_skip, const int start, const int end, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if ((start <= end))
    {
        if (end == start)
            return;
        else
        {
            const s_ScopeSkip& last = if_last_VqXwkGva(scope_skip);
            if ((last.end <= start))
            {
                if (scope_skip && (last.end == start))
                    last_Atgdo9pC(scope_skip).end = end;
                else
                {
                    scope_skip += s_ScopeSkip { int(start), int(end) };
                };
            }
            else
                BUG_D9Hg55no("ScopeSkip_push: last.end > start."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        };
    }
    else
        BUG_D9Hg55no("ScopeSkip_push: bad args."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

}

static void Scope_import_duP3krTl(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{

    {
        fu::view<int> items = _scope.imports;
        fu::view<s_ScopeSkip> scope_skip = _ss.imports;
        /*MOV*/ const int start = 0;
        const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
        int i0 = int(start);
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
                    const int m = items[i_1];
                    if (m == modid)
                        return;

                };
                i0 = ss.end;
            };
        };
    };
    if (modid)
    {
        _scope.imports += int(modid);
        _Scope_import__forceCopy_3bmnGOcd(modid, ctx, _scope);
    }
    else
        BUG_D9Hg55no("Attempting to import modid-0."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

}

static void _Scope_import__forceCopy_privates_OyAez0Zv(const int modid, const s_Context& ctx, s_Scope& _scope)
{
    const s_Scope& s = ctx.modules[modid].out.solve.scope;
    _scope.items += fu::get_view(s.items, s.pub_items, s.items.size());
    _scope.converts += fu::get_view(s.converts, s.pub_cnvrts, s.converts.size());
}

static void Scope_import_privates_NvjkoWYy(const int modid, s_Scope& _scope, const s_ScopeSkipMemos& _ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{

    {
        fu::view<int> items = _scope.privates;
        fu::view<s_ScopeSkip> scope_skip = _ss.privates;
        /*MOV*/ const int start = 0;
        const s_ScopeSkip END_DUMMY = s_ScopeSkip { items.size(), items.size() };
        int i0 = int(start);
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
                    const int m = items[i_1];
                    if (m == modid)
                        return;

                };
                i0 = ss.end;
            };
        };
    };
    if (modid)
    {
        _scope.privates += int(modid);
        _Scope_import__forceCopy_privates_OyAez0Zv(modid, ctx, _scope);
    }
    else
        BUG_D9Hg55no("Attempting to import_privates modid-0."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

}

static void ScopeSkip_setup_D0SMezz3(const s_Template& tEmplate, const s_ScopeMemo& scope0, const bool isInline, const s_ScopeMemo& _root_scope, s_ScopeSkipMemos& _ss, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_CurrentFn& _current_fn)
{
    if (_root_scope)
    {
        const s_ScopeMemo& start = (tEmplate.scope_memo ? tEmplate.scope_memo : _root_scope);
        _ss = tEmplate.scope_skip;
        ScopeSkip_push_ybES16Xc(_ss.items, start.items_len, scope0.items_len, _helpers, _helpers_data, _scope, module, ctx, _here);
        ScopeSkip_push_ybES16Xc(_ss.implicits, ((isInline && (start.implicits_len > _current_fn.scope0.implicits_len)) ? _current_fn.scope0.implicits_len : start.implicits_len), (isInline ? _current_fn.scope0.implicits_len : scope0.implicits_len), _helpers, _helpers_data, _scope, module, ctx, _here);
        ScopeSkip_push_ybES16Xc(_ss.imports, start.imports_len, scope0.imports_len, _helpers, _helpers_data, _scope, module, ctx, _here);
        ScopeSkip_push_ybES16Xc(_ss.privates, start.privates_len, scope0.privates_len, _helpers, _helpers_data, _scope, module, ctx, _here);
        ScopeSkip_push_ybES16Xc(_ss.usings, start.usings_len, scope0.usings_len, _helpers, _helpers_data, _scope, module, ctx, _here);
        ScopeSkip_push_ybES16Xc(_ss.converts, start.converts_len, scope0.converts_len, _helpers, _helpers_data, _scope, module, ctx, _here);
        ScopeSkip_push_ybES16Xc(_ss.helpers, start.helpers_len, scope0.helpers_len, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
    for (int i = 0; i < tEmplate.imports.size(); i++)
    {
        Scope_import_duP3krTl(tEmplate.imports[i], _scope, _ss, _helpers, _helpers_data, module, ctx, _here);
        if (i == 0)
            Scope_import_privates_NvjkoWYy(tEmplate.imports[i], _scope, _ss, _helpers, _helpers_data, module, ctx, _here);

    };
}

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK;
                                #endif

                                #ifndef DEF_has_8IyOUe0U0hi
                                #define DEF_has_8IyOUe0U0hi
inline bool has_8IyOUe0U(fu::view<int> a, const int b)
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

                                #ifndef DEF_all_v6qfU7lnd4c
                                #define DEF_all_v6qfU7lnd4c
inline bool all_v6qfU7ln(fu::view<s_SolvedNode> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_SolvedNode& item = a[i];
        if (!couldRetype_a93bitxU(item))
            return false;

    };
    return true;
}
                                #endif

static bool couldRetype_a93bitxU(const s_SolvedNode& node)
{
    return (node.kind == s_kind_int) || (node.kind == s_kind_real) || (node.kind == s_kind_definit) || (node.kind == s_kind_str) || ((node.kind == s_kind_if) && all_v6qfU7ln(fu::get_view(node.items, 1, 3))) || ((node.kind == s_kind_and) && couldRetype_a93bitxU(last_l6T9uEqE(node.items)));
}

inline static int bfind_CggFm9zA(fu::view<char> item, s_Map_087aZo54YWi& _, const fu_STR& item_1)
{
    /*MOV*/ int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(_.keys[i], item);
        if (cmp == 0)
            return /*NRVO*/ i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    _.keys.insert(lo, fu_STR(item_1));
    _.vals.insert(lo, s_TypeParam{});
    return /*NRVO*/ lo;
}

                                #ifndef DEF_ref_yaSWnxbk0D6
                                #define DEF_ref_yaSWnxbk0D6
inline s_TypeParam& ref_yaSWnxbk(const fu_STR& item, s_Map_087aZo54YWi& _)
{
    const int idx = bfind_CggFm9zA(item, _, item);
    return _.vals.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_55QAgpmOumd
                                #define DEF_ref_55QAgpmOumd
inline s_TypeParam& ref_55QAgpmO(s_Map_087aZo54YWi& _, const fu_STR& key)
{
    return ref_yaSWnxbk(key, _);
}
                                #endif

                                #ifndef DEF_find_8ObANk7rz5k
                                #define DEF_find_8ObANk7rz5k
inline int find_8ObANk7r(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static const s_Module& findModule_nN6bxOYA(const fu_STR& fuzimport, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_TokenIdx& _here)
{
    fu_STR fname = resolveFile_x_adz9iQmO(fuzimport, ctx);
    fu::view<s_Module> modules = ctx.modules;
    for (int i = 1; i < modules.size(); i++)
    {
        const s_Module& m = modules[i];
        if (m.fname == fname)
            return m;

    };
    fail_F42afdck(("Cannot locate: "_fu + fname), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static const s_Scope& dequalify_andGetScope_1xTN6Bg5(fu_STR& id, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const int split = find_8ObANk7r(id, '\t');
    if ((split >= 0))
    {
        fu_STR fname = fu::slice(id, 0, split);
        id = fu::slice(id, (split + 1));
        const s_Module& other = findModule_nN6bxOYA(fname, ctx, _helpers, _helpers_data, _scope, module, _here);
        if (other.modid != module.modid)
            return other.out.solve.scope;
        else
        {
            fail_F42afdck((("Qualified "_fu + qBAD_ThvlUeXJ(id)) + ":: access current module."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    }
    else
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static const s_Type& Scope_lookupType_F70IkFlQ(fu_STR&& id, const s_Flags flags, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_ScopeSkipMemos& _ss)
{
    int scope_iterator {};
    s_Target overloadIdx {};
    bool shadows {};
    const s_Flags qualified = (flags & s_Flags_F_COMPOUND_ID);
    const s_Scope& scope = (qualified ? dequalify_andGetScope_1xTN6Bg5(id, _helpers, _helpers_data, _scope, module, ctx, _here) : _scope);
    while ((overloadIdx = search_nKIDIgU2(scope.items, id, scope_iterator, (!qualified ? _ss.items : fu::view<s_ScopeSkip>{}), shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        const s_Overload& maybe = GET_JhxATLIa(overloadIdx, _scope, module, ctx, _helpers, _helpers_data, _here);
        if (maybe.kind == s_kind_type)
        {
            return maybe.type ? maybe.type : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    };
    fail_F42afdck((("No type `"_fu + id) + "` in scope."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static const s_Type& Scope_lookupType_sh6YFYka(const s_Node& annot, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_ScopeSkipMemos& _ss)
{
    return Scope_lookupType_F70IkFlQ(fu_STR(annot.value), annot.flags, _helpers, _helpers_data, _scope, module, ctx, _here, _ss);
}

                                #ifndef DEF_x21x3D_YP7BiSZZZOd
                                #define DEF_x21x3D_YP7BiSZZZOd
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

static bool trySolveTypeParams_HwBhlKqE(const s_Node& node, s_Type&& type, s_Map_087aZo54YWi& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
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
            /*MOV*/ s_Type t = ((node.value == "&"_fu) ? tryClear_ref_9gHYdovL(type, _here, ctx) : ((node.value == "&mut"_fu) ? tryClear_mutref_9gHYdovL(type, _here, ctx) : ((node.value == "[]"_fu) ? tryClear_array_MvT8pzW6(type) : (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_5_v)))));
            if (!t)
                return false;
            else
            {
                const s_Node* _0;
                return trySolveTypeParams_HwBhlKqE((*(_0 = &(items[0])) ? *_0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)), static_cast<s_Type&&>(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            };
        };
      } BL_1:;
    }
    else if (node.kind == s_kind_typeparam)
    {
        const fu_STR& id = (node.value ? node.value : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
        s_TypeParam& _param = ref_55QAgpmO(typeParams, id);
        if (_param)
        {
            /*MOV*/ s_Type uNion = type_trySuper_0a4boBJ8(_param.matched, type, DONT_match_zeroes);
            if (!uNion)
                return false;
            else
                type = static_cast<s_Type&&>(uNion);

        };
        /*MOV*/ s_Type type_1 = relax_typeParam_MvT8pzW6(s_Type(type));
        _param.matched = relax_typeParam_MvT8pzW6(static_cast<s_Type&&>(type_1));
        return true;
    }
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        /*MOV*/ s_Type t = tryClear_sliceable_MvT8pzW6(type);
        const s_Node* _1;
        return t && trySolveTypeParams_HwBhlKqE((*(_1 = &(node.items[0])) ? *_1 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)), static_cast<s_Type&&>(t), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    }
    else if (node.kind == s_kind_typeunion)
    {
        s_Map_087aZo54YWi undo { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (trySolveTypeParams_HwBhlKqE(node.items[i], s_Type(type), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items))
                return true;
            else
                typeParams = undo;

        };
        return false;
    };
    return isAssignable_b2EdYOvX(evalTypeAnnot_Rs0Ayhy7(node, (*(const s_Map_087aZo54YWi*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), type, DONT_match_zeroes, bool{});
}

inline static fu_STR mangleArguments_N8Bq3MPM(fu::view<s_Type> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_j1lEWOZW(args[i], "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static s_Target SPECFAIL_jm3uqQdG(const fu_STR& reason, fu_VEC<fu_STR>& _spec_errors, const s_Target& SPECFAIL_RentrySafety, s_Target& currentSpec, fu::view<fu_STR> mangles, const bool isInline, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_Map_RnDv9VM4mhf& _specs)
{
    /*MOV*/ const int index = _spec_errors.size();
    _spec_errors += fu_STR(reason);
    int _0 {};
    /*MOV*/ const s_Target spec = (_0 = int(SPECFAIL_RentrySafety.modid), s_Target { int(_0), int(index) });
    resetSpec_ef4IMBaP(spec, bool{}, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
    return /*NRVO*/ spec;
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_get_Ipveyfk7Jzi
                                #define DEF_get_Ipveyfk7Jzi
inline const s_TypeParam& get_Ipveyfk7(fu::view<fu_STR> keys, fu::view<char> item, fu::view<s_TypeParam> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return (*(const s_TypeParam*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_Trie3uZHu0l
                                #define DEF_get_Trie3uZHu0l
inline const s_TypeParam& get_Trie3uZH(const s_Map_087aZo54YWi& _, fu::view<char> key)
{
    return get_Ipveyfk7(_.keys, key, _.vals);
}
                                #endif

static const s_Type& evalTypeParam_hwhV1iaP(fu::view<char> id, const s_Map_087aZo54YWi& typeParams, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_ScopeSkipMemos& _ss)
{
    const s_Type* _0;
    return *(_0 = &(get_Trie3uZH(typeParams, id).matched)) ? *_0 : *(_0 = &(Scope_lookupType_F70IkFlQ(("$"_fu + (id ? id : fail_F42afdck("Falsy type param id."_fu, _helpers, _helpers_data, _scope, module, ctx, _here))), s_Flags{}, _helpers, _helpers_data, _scope, module, ctx, _here, _ss))) ? *_0 : fail_F42afdck((("No type param `$"_fu + id) + "` in scope."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static bool type_has_WiGb3rmk(const s_Type& type, fu::view<char> tag, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    if (tag == "trivial"_fu)
        return is_trivial_3ZVvGB0M(type, module, ctx);
    else if (tag == "copy"_fu)
        return is_rx_copy_MvT8pzW6(type);
    else if (tag == "arithmetic"_fu)
        return is_arithmetic_VS9ogqN5(type);
    else if (tag == "primitive"_fu)
        return is_primitive_VS9ogqN5(type);
    else if (tag == "bitfield"_fu)
        return is_bitfield_VS9ogqN5(type);
    else if (tag == "integral"_fu)
        return is_integral_VS9ogqN5(type);
    else if (tag == "unsigned"_fu)
        return is_unsigned_VS9ogqN5(type);
    else if (tag == "floating_point"_fu)
        return is_floating_pt_VS9ogqN5(type);
    else if (tag == "mutref"_fu)
        return is_mutref_9gHYdovL(type, _here, ctx);
    else if (tag == "enum"_fu)
        return is_enum_VS9ogqN5(type);
    else if (tag == "flags"_fu)
        return is_flags_VS9ogqN5(type);
    else
        BUG_D9Hg55no((("Unknown type tag: `"_fu + tag) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

}

static bool evalTypePattern_z4KdfH2s(const s_Node& node, s_Map_087aZo54YWi& typeParams, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (node.kind == s_kind_and)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            if (!evalTypePattern_z4KdfH2s(node.items[i], typeParams, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items))
                return false;

        };
        return true;
    }
    else if (node.kind == s_kind_or)
    {
        s_Map_087aZo54YWi undo { typeParams };
        for (int i = 0; i < node.items.size(); i++)
        {
            if (evalTypePattern_z4KdfH2s(node.items[i], typeParams, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items))
                return true;
            else
                typeParams = undo;

        };
        return false;
    }
    else if (node.kind == s_kind_typeassert)
    {
        const s_Node* _0;
        const s_Node& left = (*(_0 = &(node.items[0])) ? *_0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
        const s_Node* _1;
        const s_Node& right = (*(_1 = &(node.items[1])) ? *_1 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
        if ((left.kind == s_kind_typeparam) && (right.kind == s_kind_typetag))
            return type_has_WiGb3rmk(evalTypeParam_hwhV1iaP(left.value, typeParams, _helpers, _helpers_data, _scope, module, ctx, _here, _ss), (right.value ? right.value : fail_F42afdck("Falsy type tag."_fu, _helpers, _helpers_data, _scope, module, ctx, _here)), module, ctx, _here, _helpers, _helpers_data, _scope);
        else
        {
            /*MOV*/ s_Type actual = evalTypeAnnot_Rs0Ayhy7(left, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            /*MOV*/ const bool ok = trySolveTypeParams_HwBhlKqE(right, static_cast<s_Type&&>(actual), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            if (ok && (left.kind == s_kind_typeparam))
            {
                /*MOV*/ s_Type expect = evalTypeAnnot_Rs0Ayhy7(right, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                const fu_STR& id = left.value;
                s_TypeParam& tp = ref_55QAgpmO(typeParams, id);
                s_Type _2 {};
                tp.consumed = (tp.consumed ? ((_2 = type_tryIntersect_XJgsWJyN(tp.consumed, expect)) ? static_cast<s_Type&&>(_2) : fail_F42afdck("typeassert intersect fail."_fu, _helpers, _helpers_data, _scope, module, ctx, _here)) : static_cast<s_Type&&>(expect));
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
                return !evalTypePattern_z4KdfH2s(node.items[0], typeParams, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        };
    };
    fail_F42afdck((x7E_YP7BiSZZ((x7E_YP7BiSZZ("TODO evalTypePattern fallthrough: "_fu, str_x2XZ9C2m(node.kind)) + "("_fu), fu::i64dec(node.items.size())) + ")"_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

static bool isNativeBody_d9j7ccED(const s_Node& n_body)
{
    return (n_body.kind == s_kind_call) && (n_body.value == "__native"_fu);
}

                                #ifndef DEF_if_ref_gvL60Ssh1G1
                                #define DEF_if_ref_gvL60Ssh1G1
inline bool if_ref_gvL60Ssh(fu::view<char> item, s_Map_087aZo54YWi& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(_.keys[i], item);
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
            hi = int(i);

    };
    return false;
}
                                #endif

                                #ifndef DEF_if_ref_aytsKpbr0j7
                                #define DEF_if_ref_aytsKpbr0j7
inline bool if_ref_aytsKpbr(s_Map_087aZo54YWi& _, fu::view<char> key)
{
    return if_ref_gvL60Ssh(key, _);
}
                                #endif

static const s_Target& checkStruct_IuTJvKUx(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    const s_Target& t = lookupStruct_3ZVvGB0M(type, module, ctx).target;
    return (GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).type == type) ? t : (*(const s_Target*)fu::NIL);
}

                                #ifndef DEF_pairs_qgFEAjpvNO0
                                #define DEF_pairs_qgFEAjpvNO0
inline void pairs_qgFEAjpv(const s_Map_087aZo54YWi& _, const s_Module& module, const s_Context& ctx, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, fu_VEC<s_ScopeItem>& res)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        fu::view<char> id = _.keys[i];
        const s_TypeParam& tp = _.vals[i];
        fu_STR name = ("$"_fu + id);
        const s_Type& type = tp.matched;
        s_Target _0 {};
        const s_Target target = ((_0 = s_Target((isStruct_jHe6RDpE(type) ? checkStruct_IuTJvKUx(type, module, ctx, _scope, _helpers, _helpers_data, _here) : (*(const s_Target*)fu::NIL)))) ? _0 : Scope_create_v4rjZGCu(_scope, s_kind_type, ("$"_fu + id), type, s_Flags{}, s_SolverStatus{}, 0, module));
        Scope_set_5KbqLH2z(res, name, target, false);
    };
}
                                #endif

static fu_VEC<s_ScopeItem> intoScopeItems_8awNp2J9(const s_Map_087aZo54YWi& typeParams, const s_Module& module, const s_Context& ctx, s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    /*MOV*/ fu_VEC<s_ScopeItem> res {};
    pairs_qgFEAjpv(typeParams, module, ctx, _scope, _helpers, _helpers_data, _here, res);
    return /*NRVO*/ res;
}

static s_SolvedNode solved_4DB11VJb(const s_Node& node, const s_Type& type, const fu_VEC<s_SolvedNode>& items, const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ltxQ8cxX(node.kind, type, node.flags, node.value, items, target, s_Helpers{}, _here);
}

static fu_VEC<s_SolvedNode>& outItems_hrgLfQ8y(s_CurrentFn& _current_fn)
{
    return _current_fn.out.items;
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Type tryGetArgSpecType_i62gu0AF(fu::view<char> id, fu::view<s_ScopeItem> extra_items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    fu_STR param = ("$"_fu + id);
    for (int i = 0; i < extra_items.size(); i++)
    {
        const s_ScopeItem& m = extra_items[i];
        if (m.id == param)
        {
            const s_Overload& o = GET_JhxATLIa(target_xni9Jmtc(m), _scope, module, ctx, _helpers, _helpers_data, _here);
            if (o.kind == s_kind_type)
                return s_Type(o.type);
            else
                fail_F42afdck((x7E_YP7BiSZZ((((x7E_YP7BiSZZ("tryGetArgSpecType: Not a typeparam: `"_fu, str_x2XZ9C2m(o.kind)) + ":"_fu) + param) + "("_fu), fu::i64dec(EXT_onaILX8Q(target_xni9Jmtc(m), module, _scope, ctx).max)) + ")`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

        };
    };
    return s_Type{};
}

static void checkAssignable_I8obPA2D(const s_Type& host, const s_Type& guest, fu::view<char> err, const fu_STR& id, const fu_STR& sep, const bool asArgument, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (!(isAssignable_b2EdYOvX((host ? host : BUG_D9Hg55no("Bad host type."_fu, _helpers, _helpers_data, _scope, module, ctx, _here)), (guest ? guest : BUG_D9Hg55no("Bad guest type."_fu, _helpers, _helpers_data, _scope, module, ctx, _here)), bool{}, asArgument)))
    {
        fail_F42afdck((((((err + (id ? (" "_fu + qID_ThvlUeXJ(id)) : fu_STR{})) + ": "_fu) + humanizeType_PJ01PlxR(host, module, ctx)) + (sep ? fu_STR(sep) : " <- "_fu)) + humanizeType_PJ01PlxR(guest, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static s_SolvedNode solveLetLike_dontTouchScope_A6dO2S2N(const fu_STR& id, s_Flags flags, const s_SolvedNode& init, const s_Type& annot, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Options& options, s_SolverNotes& _notes)
{
    if (annot || init.type)
    {
        if (annot && init.type)
            checkAssignable_I8obPA2D(annot, init.type, "Type annotation does not match init expression"_fu, id, " <- "_fu, !!(flags & s_Flags_F_ARG), _helpers, _helpers_data, _scope, module, ctx, _here);

        const s_Type& t_init = init.type;
        /*MOV*/ s_Type t_init_1 = (is_ref2temp_9gHYdovL(t_init, _here, ctx) ? clear_refs_MvT8pzW6(s_Type(t_init)) : s_Type(t_init));
        if (!(flags & s_Flags_F_ARG) && is_never_ZFEUWUgI(t_init_1))
        {
            makeNote_hsfuVyUh(s_SolverNotes_N_DeadLet, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
            return s_SolvedNode(init);
        }
        else
        {
            if (is_mutref_9gHYdovL(annot, _here, ctx))
                flags |= s_Flags_F_REF;

            if (flags & s_Flags_F_REF)
            {
                if (!(is_mutref_9gHYdovL(t_init_1, _here, ctx) || (is_never_ZFEUWUgI(t_init_1) && annot) || (!init && (flags & s_Flags_F_ARG))))
                    fail_F42afdck(((("`ref` variables must be initialized to a mutable reference: `"_fu + id) + "`"_fu) + (t_init_1 ? (" = "_fu + humanizeType_PJ01PlxR(t_init_1, module, ctx)) : "."_fu)), _helpers, _helpers_data, _scope, module, ctx, _here);

            };
            s_Type t_let = ((annot && ((flags & s_Flags_F_ARG) || !t_init_1)) ? s_Type(annot) : ((is_mutref_9gHYdovL(t_init_1, _here, ctx) && !(flags & s_Flags_F_REF)) ? clear_mutref_MvT8pzW6(static_cast<s_Type&&>(t_init_1)) : static_cast<s_Type&&>(t_init_1)));
            if ((flags & s_Flags_F_ARG) && !(flags & s_Flags_F_MUT))
            {
                t_let = add_ref_8kJD1Pzg(s_Type(t_let), Lifetime_temporary_8nlJDPX0(), _here, ctx);
            };
            return SolvedNode_ltxQ8cxX(s_kind_let, t_let, flags, id, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
        };
    }
    else
        fail_F42afdck((("Variable declarations without type annotations must be initialized: `"_fu + id) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

}

static s_SolvedNode solveLetLike_dontTouchScope_i0yzSZn0(const s_Node& node, const s_Type& specType, const s_Type& primType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_Node& n_annot = node.items[LET_TYPE];
    s_Type annot = (n_annot && (n_annot.kind != s_kind_typeunion) ? evalTypeAnnot_Rs0Ayhy7(n_annot, (*(const s_Map_087aZo54YWi*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_Type{});
    /*MOV*/ s_Flags flags = node.flags;
    if (is_mutref_9gHYdovL(specType, _here, ctx) && !((flags & s_Flags_F_REF) || is_mutref_9gHYdovL(annot, _here, ctx)))
        flags |= s_Flags_F_RELAXABLE_REF;

    const s_Type& annot_1 = (specType ? specType : primType ? primType : annot);
    s_Type annot_2 = ((annot_1 && (node.flags & s_Flags_F_REF)) ? add_mutref_8kJD1Pzg(s_Type(annot_1), Lifetime_temporary_8nlJDPX0(), _here, ctx) : s_Type(annot_1));
    const s_Node& n_init = node.items[LET_INIT];
    /*MOV*/ s_SolvedNode init = (n_init ? solveNode_f7LszhQF(n_init, annot_2, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
    s_SolvedNode init_1 = ((specType && init.type && !isAssignableAsArgument_0a4boBJ8(specType, init.type, bool{})) ? s_SolvedNode{} : static_cast<s_SolvedNode&&>(init));
    return solveLetLike_dontTouchScope_A6dO2S2N(node.value, s_Flags(flags), init_1, annot_2, _helpers, _helpers_data, _scope, module, ctx, _here, options, _notes);
}

                                #ifndef DEF_find_aQVLX4hMqnc
                                #define DEF_find_aQVLX4hMqnc
inline int find_aQVLX4hM(fu::view<char> a, const char b, /*MOV*/ int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (/*MOV*/ int i = int(start); i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_unpackAddrOfFn_bCEG3H9mII5
                                #define DEF_unpackAddrOfFn_bCEG3H9mII5
inline void unpackAddrOfFn_bCEG3H9m(fu::view<char> canon, s_Scope& _scope, const fu_STR& id, const bool shadows)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            /*MOV*/ const s_Mi mi = parseMi_0HRwKgGk(offset, canon);
            int _0 {};
            const s_Target target = (_0 = int(mi.modid), s_Target { int(_0), int(mi.index) });
            Scope_set_5KbqLH2z(_scope.items, id, target, shadows);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static s_Target nested_u2XpitD4(const int index, const s_Target& _current_fnort, const s_Module& module)
{
    int _0 {};
    return s_Target { ((_0 = -_current_fnort.index) ? _0 : int(module.modid)), int(index) };
}

static const s_Lifetime& Lifetime_test_UDGeBh5H(const s_Lifetime& lifetime, const bool tempsOK, const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    if (SELF_TEST)
    {
        const s_Target& current_fn = _current_fn.out.target;
        const s_Overload& debug_2 = (current_fn ? GET_JhxATLIa(current_fn, _scope, module, ctx, _helpers, _helpers_data, _here) : (*(const s_Overload*)fu::NIL));
        if (debug_2)
        {
        };
        if (!lifetime.uni0n.size())
        {
            BUG_D9Hg55no("Lifetime_test: no region set."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
        }
        else
        {
            s_Region _last {};
            for (int i = 0; i < lifetime.uni0n.size(); i++)
            {
                const s_Region& region = lifetime.uni0n[i];

                {
                    if (!i || (x3Cx3E_gIvInnt7(region, _last) > 0))
                        _last = region;
                    else
                    {
                        BUG_D9Hg55no("Lifetime_test: not a sorted set"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
                    };
                };
                if (Region_isArgPosition_RvC5USpz(region))
                    continue;
                else if (Region_isTemp_RvC5USpz(region))
                {
                    if ((i == (lifetime.uni0n.size() - 1)) && tempsOK)
                        continue;
                    else
                    {
                        BUG_D9Hg55no("Lifetime_test: unexpected temporary."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
                    };
                }
                else
                {
                    const int index = Region_toLocal_RvC5USpz(region);
                    if (index)
                    {
                        const s_Overload& o = GET_JhxATLIa(nested_u2XpitD4(index, _current_fnort, module), _scope, module, ctx, _helpers, _helpers_data, _here);
                        if (!(o.kind == s_kind_var))
                        {
                            BUG_D9Hg55no(((x7E_YP7BiSZZ("Lifetime_test: local is not a var: "_fu, str_x2XZ9C2m(o.kind)) + " "_fu) + o.name), _helpers, _helpers_data, _scope, module, ctx, _here);
                        };
                    };
                };
            };
        };
    };
    return lifetime;
}

static s_Lifetime Lifetime_fromBinding_yJcphg9g(const s_Target& target, const int local_of, const s_Module& module, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Context& ctx, const s_TokenIdx& _here, const s_CurrentFn& _current_fn, const s_Target& _current_fnort)
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
            /*MOV*/ const s_Region region = Region_fromLocal_BaKYka79(index);
            return /* MOVE_FROM_CONST_REF */static_cast<s_Lifetime&&>(const_cast<s_Lifetime&>(Lifetime_test_UDGeBh5H(s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(region) } } }, bool{}, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort)));
        };
    }
    else
        BUG_D9Hg55no("not from this module"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

}

static s_Target Binding_eC3TcGqp(const fu_STR& id, /*MOV*/ s_Type&& type, const s_Flags flags, bool& shadows, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    const fu_STR& name = id;
    const int local_of = _current_fn.out.target.index;
    if (_root_scope)
        autoshadow_wb28vyJh(shadows, local_of, id, _current_fn, _scope, _ss, _root_scope);

    /*MOV*/ const s_Target target = Scope_create_v4rjZGCu(_scope, s_kind_var, name, (*(const s_Type*)fu::NIL), flags, s_SolverStatus{}, local_of, module);
    s_Overload& overload = GET_mut_5Ue5IxE1(target, _scope, module);

    {
        s_Lifetime lifetime = Lifetime_fromBinding_yJcphg9g(target, local_of, module, _helpers, _helpers_data, _scope, ctx, _here, _current_fn, _current_fnort);
        type.lifetime = s_Lifetime{};
        overload.type = ((flags & s_Flags_F_MUT) ? add_mutref_8kJD1Pzg(static_cast<s_Type&&>(type), lifetime, _here, ctx) : add_ref_8kJD1Pzg(static_cast<s_Type&&>(type), lifetime, _here, ctx));
    };
    return /*NRVO*/ target;
}

static s_SolvedNode& solved_set_1uqFwxph(const s_Target& target, const s_SolvedNode& node, s_Scope& _scope, const s_Module& module)
{
    return (GET_mut_5Ue5IxE1(target, _scope, module).solved = node);
}

static s_SolvedNode createLetDef_G3yOqYX3(const s_Target& target, const s_TokenIdx& _here)
{
    return SolvedNode_ltxQ8cxX(s_kind_letdef, t_void, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
}

static s_SolvedNode solveLet_xZqpg91U(s_SolvedNode& out, const fu_STR& id, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    if (out.kind != s_kind_let)
    {
        if (is_never_ZFEUWUgI(out.type))
            return s_SolvedNode(out);
        else
            BUG_D9Hg55no((((x7E_YP7BiSZZ("solveLet: results in a `"_fu, str_x2XZ9C2m(out.kind)) + ": "_fu) + id) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else
    {
        bool shadows = !!(out.flags & s_Flags_F_SHADOW);
        const s_Flags isArg = (out.flags & s_Flags_F_ARG);
        fu_STR cleanID {};
        if (out.flags & s_Flags_F_COMPOUND_ID)
        {
            /*MOV*/ const int start = (find_8ObANk7r(id, '!') + 1);
            /*MOV*/ const int end = find_aQVLX4hM(id, '.', ((start > 0) ? int(start) : 0));
            int _0 {};
            cleanID = (_0 = ((start > 0) ? int(start) : 0), fu::slice(id, int(_0), ((end > 0) ? int(end) : id.size())));
            if (!(cleanID && (cleanID.size() < id.size())))
                BUG_D9Hg55no("solveLet: F_COMPOUND_ID bad cleanID."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        };
        const fu_STR& id_1 = (cleanID ? cleanID : id);
        if (type_isAddrOfFn_ZFEUWUgI(out.type))
        {
            const bool shadows_1 = true;
            unpackAddrOfFn_bCEG3H9m(out.type.vtype.canon, _scope, id_1, shadows_1);
        }
        else
        {
            if (OPTI_dedupe_vars && !isArg && !(out.flags & ((s_Flags_F_PUB | s_Flags_F_IMPLICIT) | s_Flags_F_MUT)))
            {
                const s_SolvedNode& init = out.items[LET_INIT];
                if ((init.kind == s_kind_call) && !init.items)
                {
                    const s_Target& target = init.target;
                    const s_Overload& other = GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here);
                    if (other.kind == s_kind_var)
                    {
                        if (isAssignable_b2EdYOvX(other.type, out.type, bool{}, bool{}))
                        {
                            Scope_set_zPiiGt2T(_scope, id_1, target, shadows);
                            if (out.flags & s_Flags_F_USING)
                                _scope.usings.push(s_Target(target));

                            out = createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here);
                            return s_SolvedNode(out);
                        };
                    };
                };
            };
            const s_Target& target = (out.target = Binding_eC3TcGqp(id_1, s_Type(out.type), out.flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _helpers, _helpers_data, ctx, _here, _current_fnort));
            solved_set_1uqFwxph(target, out, _scope, module);
            Scope_set_zPiiGt2T(_scope, id_1, target, shadows);
            if (out.flags & s_Flags_F_IMPLICIT)
                Scope_set_5KbqLH2z(_scope.implicits, id_1, target, shadows);

            if (out.flags & s_Flags_F_USING)
                _scope.usings.push(s_Target(target));

            return createLetDef_G3yOqYX3(target, _here);
        };
        if (out.flags & s_Flags_F_ARG)
            return s_SolvedNode(out);
        else
        {
            return createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here);
        };
    };
}

static s_SolvedNode solveLet_S3XwQiJe(const s_Node& node, const s_Type& specType, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_i0yzSZn0(node, specType, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    const fu_STR& id = out.value;
    return solveLet_xZqpg91U(out, id, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn, _root_scope, _ss, _current_fnort);
}

                                #ifndef DEF_only_ExmqHm1o0ua
                                #define DEF_only_ExmqHm1o0ua
inline const s_Region& only_ExmqHm1o(fu::view<s_Region> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Lifetime Lifetime_fromNative_QybczBIe(fu::view<s_Node> sig, fu::view<s_SolvedNode> args, const s_Type& actual, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
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
                        fail_F42afdck("Ambiguous __native lifetime."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
                    }
                    else
                    {
                        res = GET_JhxATLIa(args[i].target, _scope, module, ctx, _helpers, _helpers_data, _here).type;
                        if (!(res.lifetime))
                        {
                            fail_F42afdck("Missing arg lifetime."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
                        };
                    };
                };
            };
            if (!mutref || res.lifetime)
                break;
            else
                mutref = false;

        };
        if (Region_asLocal_RvC5USpz(only_ExmqHm1o(res.lifetime.uni0n)))
        {
            if (!isAssignable_b2EdYOvX(actual, res, bool{}, bool{}))
            {
                return Lifetime_makeShared_L0YJBnz6(res.lifetime);
            }
            else
            {
                return static_cast<s_Lifetime&&>(res.lifetime);
            };
        }
        else
        {
            fail_F42afdck("Non-single-local __native lifetime."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    }
    else
        BUG_D9Hg55no("sig.len != args.len"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

}

static fu_STR CompoundArgID_outerSplice_JxU8qELp(fu_STR& name, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    bool exclam = false;
    for (int i = 0; i < name.size(); i++)
    {
        const char c = name[i];
        if (c == '!')
        {
            if (exclam)
                BUG_D9Hg55no((("CompoundArgID: double bang in `"_fu + name) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
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
        BUG_D9Hg55no((("CompoundArgID: no `.` nor `!` in id `"_fu + name) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
    else
    {
        return fu_STR{};
    };
}

                                #ifndef DEF_each_l9PvWpoEGY7
                                #define DEF_each_l9PvWpoEGY7
inline void each_l9PvWpoE(const s_BitSet& _, fu::view<s_SolvedNode> items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, s_BitSet& hard_risk)
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
                    const s_SolvedNode& other = GET_JhxATLIa(items[index].target, _scope, module, ctx, _helpers, _helpers_data, _here).solved;
                    if (!TODO_FIX_isArray_MvT8pzW6(other.type))
                        add_sDUBjUzV(hard_risk, index);

                };
            };
        };
    };
}
                                #endif

                                #ifndef DEF_has_vmKJvga0Sbi
                                #define DEF_has_vmKJvga0Sbi
inline bool has_vmKJvga0(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_AiJjkzWT(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

static const s_Overload& GET_crossmodule_wWmQnbcM(const s_Target& target, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    if (isLocal_bkThDLoo(target) && (_current_fnort.modid != module.modid))
    {
        const s_Module& module_1 = ctx.modules[_current_fnort.modid];
        fu::view<s_Overload> locals = module_1.out.solve.scope.extended[-target.modid].locals;
        if ((locals.size() >= target.index))
            return locals[(target.index - 1)];
        else
            fail_F42afdck(x7E_YP7BiSZZ((x7E_YP7BiSZZ((("Out of range local target from: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(parent_mvdJCDL8(target, module, _scope, ctx), _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + "\n\tlocals="_fu), fu::i64dec(locals.size())) + "\n\tindex="_fu), fu::i64dec(target.index)), _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else
        return GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here);

}

static const s_Type& Lifetime_climbType_j3RC7uVx(const s_Overload& o, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    if (o.kind == s_kind_var)
    {
        const s_SolvedNode& node = o.solved;
        return is_ref_MvT8pzW6(node.type) && node.items ? node.items[LET_INIT].type : (*(const s_Type*)fu::NIL);
    }
    else
    {
        BUG_D9Hg55no(("Lifetime_climbType: not a `var`: "_fu + qWHAT_wCuy3nxK(o, module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

inline static void Lifetime_each_Wxu6tK5c(s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else if (Region_isTemp_RvC5USpz(r))
            continue;
        else
        {
            const s_Target t = nested_u2XpitD4(Region_toLocal_RvC5USpz(r), _current_fnort, module);
            const s_Type& init = Lifetime_climbType_j3RC7uVx(GET_crossmodule_wWmQnbcM(t, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here);
            if (!is_ref_MvT8pzW6(init))
                continue;
            else if (init.lifetime.uni0n.size())
            {
                lifetime.uni0n.splice(i, 1);
                const int N0 = lifetime.uni0n.size();
                lifetime = Lifetime_union_BGIGvcl2(lifetime, init.lifetime);
                const int N1 = lifetime.uni0n.size();
                i += (N1 - N0);
            }
            else
            {
                BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
            };
        };
    };
}

static s_Lifetime Lifetime_unwind_WuYtgzDU(/*MOV*/ s_Lifetime&& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    Lifetime_each_Wxu6tK5c(lifetime, locals_start, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here);
    return static_cast<s_Lifetime&&>(lifetime);
}

                                #ifndef DEF_x3Dx3D_gIvInnt76me
                                #define DEF_x3Dx3D_gIvInnt76me
inline bool operator==(const s_Region& a, const s_Region& b)
{
    return !x3Cx3E_gIvInnt7(a, b);
}
                                #endif

                                #ifndef DEF_has_Ezy4yCLHKkc
                                #define DEF_has_Ezy4yCLHKkc
inline bool has_Ezy4yCLH(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR addr_8v9b6QET(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    const s_Token& t = _token_oqTaHNkG(token, ctx);
    if (token.modid != module.modid)
        return x7E_YP7BiSZZ((x7E_YP7BiSZZ((_fname_oqTaHNkG(token, ctx) + "@"_fu), fu::i64dec(t.line)) + ":"_fu), fu::i64dec(t.col));
    else
        return x7E_YP7BiSZZ(x7E_YP7BiSZZ(fu::i64dec(t.line), ":"_fu), fu::i64dec(t.col));

}

static fu_STR addr_and_snippet_0mVnwYUJ(const s_TokenIdx& token, const s_Context& ctx, const s_Module& module)
{
    return (addr_8v9b6QET(token, ctx, module) + ":\n\n"_fu) + formatCodeSnippet_MxvshLCw(token, s_TokenIdx{}, ctx);
}

static fu_STR qSTACK_ywMJiPAc(const s_Target& target, const s_Region& region, fu::view<s_Target> seen, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    const s_Target& _current_fnort = target;
    return qSTACK_Y8ZauWfH(target, GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).solved, region, seen, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here);
}

static fu_STR qSTACK_yxSnwuR0(const s_Target& target, const int position, fu::view<s_Target> seen, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return qSTACK_ywMJiPAc(target, Region_fromLocal_BaKYka79(EXT_onaILX8Q(target, module, _scope, ctx).args[position].local), seen, _scope, module, ctx, _helpers, _helpers_data, _here);
}

static fu_STR qSTACK_Y8ZauWfH(const s_Target& target, const s_SolvedNode& node, const s_Region& region, fu::view<s_Target> seen, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR src = "\n            "_fu;
    const bool rec = has_vmKJvga0(seen, target);
    if (rec)
        src += "recursively "_fu;


    { {
        fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
        while (stack)
        {
            s_SolvedNode node_1 = TODO_FIX_pop_AiJjkzWT(stack);
            const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_wWmQnbcM(node_1.target, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here).solved : node_1);

            { {
                if (node_2.kind != s_kind_call)
                    goto BL_5;
                else
                {
                    fu::view<s_Argument> host_args = EXT_onaILX8Q(node_2.target, module, _scope, ctx).args;
                    for (int i = 0; i < host_args.size(); i++)
                    {
                        const s_Argument& host_arg = host_args[i];
                        if (!(host_arg.flags & s_Flags_F_WRITTEN_TO))
                            continue;
                        else
                        {
                            const s_SolvedNode& arg = node_2.items[i];
                            if (!has_Ezy4yCLH(Lifetime_unwind_WuYtgzDU(s_Lifetime(arg.type.lifetime), 0, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here).uni0n, region))
                                continue;
                            else
                            {
                                src += (("via "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(node_2.target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + " at "_fu);
                                src += addr_and_snippet_0mVnwYUJ(node_2.token, ctx, module);
                                if (!rec && (seen.size() < 8))
                                    src += qSTACK_yxSnwuR0(node_2.target, i, (seen + target), module, _scope, ctx, _helpers, _helpers_data, _here);

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

                                #ifndef DEF_find_Ezy4yCLHKkc
                                #define DEF_find_Ezy4yCLHKkc
inline int find_Ezy4yCLH(fu::view<s_Region> a, const s_Region& b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_add_lCfOdugH8B3
                                #define DEF_add_lCfOdugH8B3
inline bool add_lCfOdugH(fu_VEC<s_Region>& keys, const s_Region& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gIvInnt7(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    keys.insert(lo, s_Region(item));
    return true;
}
                                #endif

static const s_Overload& Region_GET_ZkX4IHEI(const s_Region& r, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return GET_JhxATLIa(nested_u2XpitD4(Region_toLocal_RvC5USpz(r), _current_fnort, module), _scope, module, ctx, _helpers, _helpers_data, _here);
}

static fu_STR qWHAT_vlGX8XSa(const s_Lifetime& l, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR str {};
    for (int i = 0; i < l.uni0n.size(); i++)
    {
        if (i)
            str += "|"_fu;

        const s_Region& r = l.uni0n[i];
        if (Region_isStatic_RvC5USpz(r))
            str += "static"_fu;
        else if (Region_isTemp_RvC5USpz(r))
            str += "temp"_fu;
        else
            str += qWHAT_wCuy3nxK(Region_GET_ZkX4IHEI(r, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here);

    };
    return /*NRVO*/ str;
}

                                #ifndef DEF_each_tBovNl1vawd
                                #define DEF_each_tBovNl1vawd
inline void each_tBovNl1v(fu::view<s_Region> a, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Type& retval)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArgPosition_RvC5USpz(r) || Region_isStatic_RvC5USpz(r)))
        {
            BUG_D9Hg55no(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_wCuy3nxK(Region_GET_ZkX4IHEI(r, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_vlGX8XSa(retval.lifetime, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    };
}
                                #endif

static s_Flags& isRTL_set_kZSXE876(s_Overload& o, const bool rtl)
{
    if (rtl)
        return (o.flags |= s_Flags_F_OOE_RTL);
    else
        return (o.flags &= ~s_Flags_F_OOE_RTL);

}

inline static fu_STR mangleArguments_t7Hsvamv(fu::view<s_Argument> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_j1lEWOZW(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR HACK_nativeNameParts_OkunXEhT(const bool isNative, const s_Node& n_body)
{
    /*MOV*/ fu_STR name {};
    if (isNative && n_body.items)
        for (int i = 0; i < n_body.items.size(); i++)
            name += ("\n"_fu + n_body.items[i].value);
;
    return /*NRVO*/ name;
}

static int GET_next_local_index_6CO4foiz(const s_Target& _current_fnort, const s_CurrentFn& _current_fn, const s_Scope& _scope)
{
    return _current_fn.out.target.index ? (_scope.extended[_current_fnort.index].locals.size() + 1) : int{};
}

                                #ifndef DEF_last_7ULQODpQg03
                                #define DEF_last_7ULQODpQg03
inline s_Node& last_7ULQODpQ(fu::view_mut<s_Node> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_last_lpa8XGDfwcf
                                #define DEF_last_lpa8XGDfwcf
inline const s_Node& last_lpa8XGDf(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static bool Lifetime_allowsMutrefReturn_D0vlKEwC(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else if (Region_isTemp_RvC5USpz(r))
            continue;
        else
        {
            const s_Target t = nested_u2XpitD4(Region_toLocal_RvC5USpz(r), _current_fnort, module);
            if (is_mutref_9gHYdovL(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).type, _here, ctx))
            {
                if ((GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_var) && !(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).flags & s_Flags_F_REF))
                    return false;
                else
                {
                    const s_Type& init = Lifetime_climbType_j3RC7uVx(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here);
                    if (!Lifetime_allowsMutrefReturn_D0vlKEwC(init.lifetime, locals_start, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here))
                        return false;

                };
            }
            else
                BUG_D9Hg55no(("Checking for mutref-return-ok found non-mutref: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

        };
    };
    return true;
}

static s_Type superType_dfd8ySRL(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_TokenIdx& _here)
{
    s_Type _0 {};
    return (_0 = type_trySuper_0a4boBJ8(a, b, bool{})) ? static_cast<s_Type&&>(_0) : fail_F42afdck(((((((id ? (qID_ThvlUeXJ(id) + ": "_fu) : fu_STR{}) + reason) + "No common supertype: "_fu) + humanizeType_PJ01PlxR(a, module, ctx)) + " | "_fu) + humanizeType_PJ01PlxR(b, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static void reportReturnType_YKElz9tS(const s_Helpers& h, const s_Type& type, const bool NICEERR_missingReturn, const s_TokenIdx& _here, const s_Context& ctx, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    /*MOV*/ s_Type type_1 = ((is_mutref_9gHYdovL(type, _here, ctx) && !Lifetime_allowsMutrefReturn_D0vlKEwC(type.lifetime, _helpers_data[h.index].locals_start, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here)) ? clear_mutref_MvT8pzW6(s_Type(type)) : s_Type(type));
    /*MOV*/ s_Type type_2 = (is_ref2temp_9gHYdovL(type_1, _here, ctx) ? clear_refs_MvT8pzW6(static_cast<s_Type&&>(type_1)) : static_cast<s_Type&&>(type_1));
    if (_helpers_data[h.index].ret_expect)
    {
        checkAssignable_I8obPA2D(_helpers_data[h.index].ret_expect, type_2, "Actual return type does not match annotation"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), bool{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
    _helpers_data.mutref(h.index).ret_actual = (_helpers_data[h.index].ret_actual ? superType_dfd8ySRL((NICEERR_missingReturn ? "Missing final return: "_fu : "Subsequent return: "_fu), _helpers_data[h.index].ret_actual, type_2, (*(const fu_STR*)fu::NIL), module, ctx, _helpers, _helpers_data, _scope, _here) : static_cast<s_Type&&>(type_2));
    if (!(_helpers_data[h.index].ret_actual))
        BUG_D9Hg55no("Can't be null past this point."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

}

static fu_STR currentFn_mustBecomeInline_hYMuSeJd(const s_CurrentFn& _current_fn)
{
    return (_current_fn.effects.far_jumps.size() > 0) ? "Contains non-local control flow."_fu : fu_STR{};
}

static void test_nodes_7Y8MgurW(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_TokenIdx& _here, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    for (int i = 0; i < nodes.size(); i++)
        test_node_Bpk9KB9y(nodes[i], (x7E_YP7BiSZZ((debug + "["_fu), fu::i64dec(i)) + "]"_fu), _here, module, ctx, _helpers, _helpers_data, _scope);

}

[[noreturn]] static fu::never err_fL0Lsz7a(fu::view<char> reason, fu::view<char> debug, const s_SolvedNode& callsite, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    BUG_D9Hg55no(((((debug + " "_fu) + qWHAT_wCuy3nxK(GET_JhxATLIa(callsite.target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + ": "_fu) + reason), _helpers, _helpers_data, _scope, module, ctx, _here);
}

inline static fu_STR mangleArguments_rDBusViv(fu::view<s_SolvedNode> args, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR mangle {};
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            mangle += ","_fu;

        mangle += serializeType_j1lEWOZW(args[i].type, "mangle[$T]"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static fu_STR explainConversion_WJ7YBIkP(fu::view<s_Target> path, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < path.size(); i++)
    {
        if (i)
            res += " -> "_fu;

        const s_Overload& o = GET_JhxATLIa(path[i], _scope, module, ctx, _helpers, _helpers_data, _here);
        res += qWHAT_wCuy3nxK(o, module, _scope, ctx, _helpers, _helpers_data, _here);
        if (i < (path.size() - 1))
            res += (": "_fu + humanizeType_PJ01PlxR(o.type, module, ctx));

    };
    return /*NRVO*/ res;
}

static fu_STR explainWhichFn_CEstsCKu(const s_Target& overload, fu::view<fu_VEC<s_Target>> conversions, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR result = qWHAT_wCuy3nxK(GET_JhxATLIa(overload, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here);
    if (EXT_onaILX8Q(overload, module, _scope, ctx).args)
    {
        result += "("_fu;
        for (int i = 0; i < EXT_onaILX8Q(overload, module, _scope, ctx).args.size(); i++)
        {
            const s_Argument& arg = EXT_onaILX8Q(overload, module, _scope, ctx).args[i];
            if (i)
                result += ","_fu;

            result += (((("\n\t    "_fu + qID_ThvlUeXJ(human_CsN1VqyI(arg.name, module, _scope, ctx, _helpers, _helpers_data, _here))) + ((arg.flags & s_Flags_F_MUSTNAME) ? "!"_fu : fu_STR{})) + (arg.dEfault ? "?: "_fu : ": "_fu)) + (arg.type ? humanizeType_PJ01PlxR(arg.type, module, ctx) : "$"_fu));
            const fu_VEC<s_Target>& c = ((conversions.size() > i) ? conversions[i] : (*(const fu_VEC<s_Target>*)fu::NIL));
            if (c)
                result += ("\n\t        via "_fu + explainConversion_WJ7YBIkP(c, _scope, module, ctx, _helpers, _helpers_data, _here));

        };
        result += ")"_fu;
    };
    return /*NRVO*/ result;
}

static void test_CallSignature_sAmStpBh(const s_SolvedNode& callsite, fu::view<char> debug, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    fu::view<s_Argument> host_args = EXT_onaILX8Q(callsite.target, module, _scope, ctx).args;
    fu::view<s_SolvedNode> args = callsite.items;
    if ((args.size() == 0) && (GET_JhxATLIa(callsite.target, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_type))
        return;
    else
    {
        if (host_args.size() == args.size())
        {
            for (int i = 0; i < host_args.size(); i++)
            {
                const s_Argument& host_arg = host_args[i];
                const s_SolvedNode& arg = args[i];
                if (!(isAssignableAsArgument_0a4boBJ8(host_arg.type, arg.type, bool{})))
                    err_fL0Lsz7a(((((((x7E_YP7BiSZZ("Arg #"_fu, fu::i64dec(i)) + ", "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(host_arg.name, module, _scope, ctx, _helpers, _helpers_data, _here))) + " not assignable to host_arg: "_fu) + humanizeType_PJ01PlxR(host_arg.type, module, ctx)) + " <- "_fu) + humanizeType_PJ01PlxR(arg.type, module, ctx)), debug, callsite, _scope, module, ctx, _helpers, _helpers_data, _here);

            };
        }
        else
        {
            err_fL0Lsz7a((((((x7E_YP7BiSZZ((x7E_YP7BiSZZ("host_args.len ("_fu, fu::i64dec(host_args.size())) + ") != args.len ("_fu), fu::i64dec(args.size())) + "):"_fu) + "\n\t\t"_fu) + mangleArguments_rDBusViv(args, _here, ctx)) + "\n\t\t"_fu) + explainWhichFn_CEstsCKu(callsite.target, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _helpers, _helpers_data, _here)), debug, callsite, _scope, module, ctx, _helpers, _helpers_data, _here);
        };
    };
}

static void test_Statements_zm0RMM6G(const s_SolvedNode& block, fu::view<char> debug, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    fu::view<s_SolvedNode> items = block.items;
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& n = items[i];
        if (n.kind)
        {
            if (!((n.kind != s_kind_empty) || ((block.kind == s_kind_block) && (i == (items.size() - 1)))))
                BUG_D9Hg55no((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ((debug + ": "_fu), str_x2XZ9C2m(block.kind)) + " has an empty at #"_fu), fu::i64dec(i)) + "/"_fu), fu::i64dec(items.size())) + "."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

        }
        else
            BUG_D9Hg55no((x7E_YP7BiSZZ((debug + ": No .kind on item["_fu), fu::i64dec(i)) + "]."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

static void test_node_Bpk9KB9y(const s_SolvedNode& node, fu_STR&& debug, s_TokenIdx& _here, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    debug += x7E_YP7BiSZZ("/"_fu, str_x2XZ9C2m(node.kind));
    if (node.value)
        debug += (("["_fu + node.value) + "]"_fu);

    test_nodes_7Y8MgurW(node.items, debug, _here, module, ctx, _helpers, _helpers_data, _scope);
    _here = node.token;
    if (!is_ref_MvT8pzW6(node.type) == !node.type.lifetime)
    {
        const s_kind k = node.kind;
        if (k == s_kind_call)
            return test_CallSignature_sAmStpBh(node, debug, module, _scope, ctx, _helpers, _helpers_data, _here);
        else if (k == s_kind_let)
        {
            if (node.items.size() == 2)
            {
                if (node.items[0])
                    BUG_D9Hg55no(x7E_YP7BiSZZ("let.items[0] not empty: "_fu, str_x2XZ9C2m(node.items[0].kind)), _helpers, _helpers_data, _scope, module, ctx, _here);
                else
                    return;

            }
            else
                BUG_D9Hg55no(x7E_YP7BiSZZ("let.items.len: "_fu, fu::i64dec(node.items.size())), _helpers, _helpers_data, _scope, module, ctx, _here);

        }
        else if ((k == s_kind_block) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_if))
        {
            if ((k == s_kind_and) || (k == s_kind_or))
            {
                if (!(node.items.size() > 1))
                    BUG_D9Hg55no(x7E_YP7BiSZZ((debug + ".len: "_fu), fu::i64dec(node.items.size())), _helpers, _helpers_data, _scope, module, ctx, _here);

            };
            if (k == s_kind_if)
            {
                if (!(node.items.size() == 3))
                    BUG_D9Hg55no(x7E_YP7BiSZZ((debug + ".len: "_fu), fu::i64dec(node.items.size())), _helpers, _helpers_data, _scope, module, ctx, _here);

            };
            return test_Statements_zm0RMM6G(node, debug, _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    }
    else
        BUG_D9Hg55no(((debug + ": !!ref != !!lt: "_fu) + humanizeType_PJ01PlxR(node.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);

}

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck;
                                #endif

                                #ifndef DEF_unless_oob_5fxaLbAjUO4
                                #define DEF_unless_oob_5fxaLbAjUO4
inline const s_Type& unless_oob_5fxaLbAj(fu::view<s_Type> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Type*)fu::NIL);
}
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const int RELAX_all;
                                #endif

                                #ifndef DEF_grow_if_oob_o722LYkUQge
                                #define DEF_grow_if_oob_o722LYkUQge
inline s_Warning& grow_if_oob_o722LYkU(fu_VEC<s_Warning>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void relaxBlockVar_MBtVy1qW(const s_Target& t, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_Overload& var = GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here);
    s_Type usage { unless_oob_5fxaLbAj(_current_fn.var_usage, t.index) };
    if (!usage && (relax_mask == RELAX_all))
    {
        if (!(var.flags & s_Flags_F_LAX))
        {
            const s_TokenIdx& token = GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).solved.token;

            {
                s_Warning& a = grow_if_oob_o722LYkU(_warnings, _current_fn.out.target.index);
                if (!(a))
                {
                    a = s_Warning { s_TokenIdx(token), (((("Unused variable: "_fu + qBAD_ThvlUeXJ(var.name)) + ": make it "_fu) + qKW_ThvlUeXJ("lax"_fu)) + " if this is intentional."_fu) };
                };
            };
        };
        GET_mut_5Ue5IxE1(t, _scope, module).status |= s_SolverStatus_SS_UNUSED;
    };
    s_Overload& o = GET_mut_5Ue5IxE1(t, _scope, module);
    try_relax_Wnahb19Z(o.type, usage, int(relax_mask));

    {
        s_SolvedNode& node = o.solved;
        if (node.type)
        {
            try_relax_Wnahb19Z(node.type, usage, int(relax_mask));
            if (node.items && node.items[LET_INIT])
            {
                s_SolvedNode init {};
                std::swap(init, node.items.mutref(LET_INIT));
                propagateType_8TxqwKMZ(init, node.type, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                s_Overload& o_1 = GET_mut_5Ue5IxE1(t, _scope, module);
                s_SolvedNode& node_1 = o_1.solved;
                if (is_ref_MvT8pzW6(node_1.type) && !(node_1.flags & s_Flags_F_ARG))
                {
                    node_1.type.lifetime = init.type.lifetime;
                };
                std::swap(init, node_1.items.mutref(LET_INIT));
            };
        }
        else
            BUG_D9Hg55no("relaxBlockVar: !var.solved.type, can`t propagateType"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    };
    s_Overload& o_1 = GET_mut_5Ue5IxE1(t, _scope, module);
    if (o_1.flags & s_Flags_F_MUT)
    {
        if (is_mutref_9gHYdovL(usage, _here, ctx))
        {
            s_SolvedNode& node = GET_mut_5Ue5IxE1(t, _scope, module).solved;
            /*MOV*/ s_Type type = clear_refs_MvT8pzW6(s_Type(node.type));
            node.type = static_cast<s_Type&&>(type);
        }
        else
        {
            o_1.flags &= ~s_Flags_F_MUT;
        };
    };
    s_Overload& o_2 = GET_mut_5Ue5IxE1(t, _scope, module);
    if (o_2.flags & s_Flags_F_RELAXABLE_REF)
    {
        const s_Flags strip = (s_Flags_F_RELAXABLE_REF | (!is_mutref_9gHYdovL(usage, _here, ctx) ? s_Flags_F_REF : s_Flags{}));
        o_2.flags &= ~strip;
        o_2.solved.flags &= ~strip;
    };
}

static void add_CVPwHxWK(s_Moves& dest, const s_Moves& src)
{
    add_GKz57Mnx(dest.used_again, src.used_again);
    add_GKz57Mnx(dest.just_moved, src.just_moved);
    add_GKz57Mnx(dest.just_used, src.just_used);
}

                                #ifndef DEF_only_sQklljcvMFa
                                #define DEF_only_sQklljcvMFa
inline s_SolvedNode& only_sQklljcv(fu::view_mut<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s.mutref(0);
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static bool isNested_HUM6rclY(const s_Target& target, const s_CurrentFn& _current_fn)
{
    return target.modid == -_current_fn.out.target.index;
}

                                #ifndef DEF_grow_if_oob_chScvEBvrGe
                                #define DEF_grow_if_oob_chScvEBvrGe
inline s_Type& grow_if_oob_chScvEBv(fu_VEC<s_Type>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool trackUse_0V2NXrZ1(const s_Target& t, s_BitSet& bitset, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Target& _current_fnort, const s_CurrentFn& _current_fn)
{
    if (!add_once_sDUBjUzV(bitset, t.index))
        return false;
    else
    {
        const s_Overload& o = GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here);
        const s_SolvedNode& letNode = o.solved;
        if (is_ref_MvT8pzW6(letNode.type))
        {
            if (o.flags & s_Flags_F_ARG)
                return false;
            else if (!trackUse_mSINTREx(Lifetime_climbType_j3RC7uVx(o, module, _scope, ctx, _helpers, _helpers_data, _here).lifetime, bitset, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fn))
                return false;

        };
        return (t.index >= _current_fn.loop_start);
    };
}

static bool trackUse_mSINTREx(const s_Lifetime& lt, s_BitSet& bitset, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_CurrentFn& _current_fn)
{
    /*MOV*/ bool allTrue = true;
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const s_Region& r = lt.uni0n[i];
        const int local = Region_asLocal_RvC5USpz(r);
        if (!(local && trackUse_0V2NXrZ1(nested_u2XpitD4(local, _current_fnort, module), bitset, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort, _current_fn)))
        {
            allTrue = false;
        };
    };
    return /*NRVO*/ allTrue;
}

static bool tryTrackLastUse_LOIW8q0I(const s_Lifetime& lt, const int relax_mask, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return (relax_mask == RELAX_all) && trackUse_mSINTREx(lt, _current_fn.moves.used_again, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fn);
}

                                #ifndef DEF_min_gcxVH86XFM7
                                #define DEF_min_gcxVH86XFM7
inline int min_gcxVH86X(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

static fu_STR mangleArguments_PXUdBTEF(fu::view<s_SolvedNode> args, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
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
            mangle += serializeType_j1lEWOZW(GET_JhxATLIa(last_E3kAR4gV(conversions[i]), _scope, module, ctx, _helpers, _helpers_data, _here).type, "mangle.conv"_fu, _here, ctx);
        else if ((callsiteIndex >= 0) && (callsiteIndex <= args.size()))
            mangle += serializeType_j1lEWOZW(args[callsiteIndex].type, "mangle.no-conv"_fu, _here, ctx);

    };
    if (REST_START < REST_END)
    {
        if (REST_START)
            mangle += ","_fu;

        mangle += serializeType_j1lEWOZW(REST_TYPE, "mangle[Nodes].rest"_fu, _here, ctx);
    };
    return /*NRVO*/ mangle;
}

static s_Target trySpecialize_ODMsMpw1(const s_Target& overloadIdx, fu::view<s_SolvedNode> args, fu_STR& args_mangled, const int REST_START, const s_Type& REST_TYPE, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (!(args_mangled))
        args_mangled = mangleArguments_PXUdBTEF(args, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _helpers, _helpers_data, _here);

    fu_STR mangle = ((x7E_YP7BiSZZ(x7E_YP7BiSZZ(fu::i64dec(overloadIdx.modid), "#"_fu), fu::i64dec(overloadIdx.index)) + " "_fu) + args_mangled);
    s_Target _0 {};
    return (_0 = s_Target(get_Gg123who(_specs, mangle))) ? _0 : (_0 = doTrySpecialize_CuYaoMfr(s_Target{}, overloadIdx, args, mangle, reorder, use_reorder, conversions, REST_START, REST_TYPE, _scope, module, ctx, _helpers, _helpers_data, _here, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items)) ? _0 : BUG_D9Hg55no("doTrySpecialize returns empty target."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
}

static s_Lifetime Lifetime_replaceArgsAtCallsite_mU7DzA3y(const s_Target& target, fu::view<s_SolvedNode> argNodes, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    s_Lifetime keep {};
    /*MOV*/ s_Lifetime replace {};
    const s_Lifetime& returned = GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type.lifetime;
    for (int i = 0; i < returned.uni0n.size(); i++)
    {
        const s_Region& region = returned.uni0n[i];
        if (Region_isStatic_RvC5USpz(region))
        {
            keep.uni0n += s_Region(region);
            continue;
        }
        else if (Region_isTemp_RvC5USpz(region))
        {
            BUG_D9Hg55no(("Lifetime_replaceArgsAtCallsite: found a temp lt in: "_fu + qWHAT_vlGX8XSa(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type.lifetime, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
        }
        else
        {
            const s_SolvedNode& argNode = argNodes[Region_toArgPosition_RvC5USpz(region)];
            s_Lifetime argLt = (is_ref_MvT8pzW6(argNode.type) ? s_Lifetime(argNode.type.lifetime) : Lifetime_temporary_8nlJDPX0());
            replace = Lifetime_union_BGIGvcl2(replace, (argLt ? argLt : BUG_D9Hg55no("refarg without lifetime"_fu, _helpers, _helpers_data, _scope, module, ctx, _here)));
        };
    };
    if (replace)
    {
        if (keep)
        {
            return Lifetime_union_BGIGvcl2(keep, replace);
        }
        else
            return /*NRVO*/ replace;

    }
    else
    {
        return s_Lifetime(returned);
    };
}

static bool isRTL_gadTQpqu(const s_Overload& o)
{
    return !!(o.flags & s_Flags_F_OOE_RTL);
}

                                #ifndef DEF_each_ikhZORvHoPh
                                #define DEF_each_ikhZORvHoPh
inline void each_ikhZORvH(const s_BitSet& _, const s_BitSet& just_moved0, const s_BitSet& just_moved00, int& MUSTSEQ_mask, const int mustSeq, const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_SolverNotes& _notes)
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
                    if (has_VM1JQhgd(just_moved0, index) && !has_VM1JQhgd(just_moved00, index))
                    {
                        MUSTSEQ_mask |= (1 << (mustSeq & 31));
                        makeNote_hsfuVyUh(s_SolverNotes_N_MoveMustSeq, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
                        return;
                    };
                };
            };
        };
    };
}
                                #endif

inline static void Lifetime_each_Z0DRPhwy(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    for (int i = lifetime.uni0n.size(); i-- > 0; )
    {
        const s_Region& r = lifetime.uni0n[i];
        if (r.index < locals_start)
            break;
        else if (Region_isTemp_RvC5USpz(r))
            continue;
        else
        {
            const s_Target t = nested_u2XpitD4(Region_toLocal_RvC5USpz(r), _current_fnort, module);
            s_Overload& o = GET_mut_5Ue5IxE1(t, _scope, module);
            if (o.flags & s_Flags_F_MOVED_FROM)
                continue;
            else
            {
                o.flags |= s_Flags_F_MOVED_FROM;
                const s_Type& init = Lifetime_climbType_j3RC7uVx(o, module, _scope, ctx, _helpers, _helpers_data, _here);
                if (is_ref_MvT8pzW6(init))
                {
                    Lifetime_F_MOVED_FROM_t49jzoIG(s_Lifetime(init.lifetime), _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here);
                };
            };
        };
    };
}

static void Lifetime_F_MOVED_FROM_t49jzoIG(const s_Lifetime& lifetime, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    Lifetime_each_Z0DRPhwy(lifetime, 0, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here);
}

static void trackJustMoved_b3h7rCFb(const s_Lifetime& lt, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort, s_CurrentFn& _current_fn)
{
    for (int i = 0; i < lt.uni0n.size(); i++)
    {
        const s_Region& r = lt.uni0n[i];
        int _0 {};
        const int local = ((_0 = Region_asLocal_RvC5USpz(r)) ? _0 : BUG_D9Hg55no("trackJustMoved: found a non-local."_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
        const s_Target target = nested_u2XpitD4(local, _current_fnort, module);
        if (add_once_sDUBjUzV(_current_fn.moves.just_moved, target.index))
        {
            trackJustMoved_b3h7rCFb(Lifetime_climbType_j3RC7uVx(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here).lifetime, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);
        }
        else
            BUG_D9Hg55no("trackJustMoved: already moved."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

inline static void _current_fn_eachArg_BACK_HUtSv5Sw(s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const int relax_mask, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    fu_VEC<s_SolvedNode> sig { _current_fn.out.items };
    for (int i = (sig.size() + FN_ARGS_BACK); i-- > 0; )
    {
        const s_Target t { sig[i].target };
        if (t && (GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).flags & s_Flags_F_ARG))
            relaxBlockVar_MBtVy1qW(t, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

    };
}

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static s_SolvedNode& post_gVR5PSZo(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST);
}

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

static s_SolvedNode& post_cond_XtkSxrvq(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_POST_COND);
}

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

static s_SolvedNode& body_8Wlvj4sj(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_BODY);
}

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

static s_SolvedNode& pre_cond_A5LCKOK8(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_COND);
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

static s_SolvedNode& init_dmg14Uoe(s_SolvedNode& node)
{
    return node.items.mutref(LOOP_INIT);
}

static s_SolvedNode& recover_2rhtgq32(s_SolvedNode& node)
{
    return node.items.mutref(2);
}

static s_SolvedNode& error_6D4OcPhB(s_SolvedNode& node)
{
    return node.items.mutref(1);
}

static s_SolvedNode& attempt_RywWE8FV(s_SolvedNode& node)
{
    return node.items.mutref(0);
}

static void propagateType_8TxqwKMZ(s_SolvedNode& node, const s_Type& slot, const int relax_mask, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_kind k = node.kind;
    if ((k == s_kind_let) || (k == s_kind_letdef))
    {
        if (!node.target)
            return;
        else
            return relaxBlockVar_MBtVy1qW(node.target, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

    }
    else
    {
        /*MOV*/ const s_TokenIdx here0 { _here };
        _here = node.token;
        fu_DEFER(_here = s_TokenIdx(here0));
        try_relax_Wnahb19Z(node.type, slot, int(relax_mask));
        /*MOV*/ s_Type slot_1 { node.type };
        const int LAST = (node.items.size() - 1);
        if (k == s_kind_and)
        {
            s_Type rest { ((is_mutref_9gHYdovL(slot_1, _here, ctx) && CANNOT_definit_mutrefs) ? slot_1 : t_bool) };
            for (int i = node.items.size(); i-- > 0; )
                propagateType_8TxqwKMZ(node.items.mutref(i), ((i == LAST) ? slot_1 : rest), relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        }
        else if (k == s_kind_or)
            for (int i = node.items.size(); i-- > 0; )
                propagateType_8TxqwKMZ(node.items.mutref(i), slot_1, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        else if (k == s_kind_if)
        {
            s_Moves moves0 { _current_fn.moves };
            s_Moves moves1 {};
            for (int i = node.items.size(); i-- > 0; )
            {
                if (i == 1)
                {
                    std::swap(moves1, _current_fn.moves);
                    std::swap(_current_fn.moves, moves0);
                }
                else if (i == 0)
                    add_CVPwHxWK(_current_fn.moves, moves1);

                propagateType_8TxqwKMZ(node.items.mutref(i), ((i != 0) ? slot_1 : t_bool), relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            };
        }
        else if (k == s_kind_call)
        {
            const s_Target& t = node.target;
            if (GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_field)
                return propagateType_8TxqwKMZ(only_sQklljcv(node.items), slot_1, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            else if (GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_var)
            {
                if (isNested_HUM6rclY(t, _current_fn))
                {
                    s_Type& usage = grow_if_oob_chScvEBv(_current_fn.var_usage, t.index);
                    if (!usage)
                        usage = static_cast<s_Type&&>(slot_1);
                    else
                    {
                        s_Type _0 {};
                        usage = ((_0 = type_tryIntersect_XJgsWJyN(usage, slot_1)) ? static_cast<s_Type&&>(_0) : fail_F42afdck((((((qWHAT_wCuy3nxK(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here) + ": Usage intersection failure: `"_fu) + humanizeType_PJ01PlxR(usage, module, ctx)) + "` & `"_fu) + humanizeType_PJ01PlxR(slot_1, module, ctx)) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here));
                    };
                    tryTrackLastUse_LOIW8q0I(node.type.lifetime, relax_mask, _current_fn, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here);
                    trackUse_mSINTREx(node.type.lifetime, _current_fn.moves.just_used, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fn);
                };
                return;
            }
            else
            {

                {
                    fu::view<s_Argument> host_args = EXT_onaILX8Q(t, module, _scope, ctx).args;
                    for (int i = 0; i < host_args.size(); i++)
                    {
                        if (is_ref_MvT8pzW6(host_args[i].type))
                        {
                            tryTrackLastUse_LOIW8q0I(node.items[i].type.lifetime, relax_mask, _current_fn, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here);
                        };
                    };
                };
                if (EXT_onaILX8Q(t, module, _scope, ctx).spec_of && is_ref_MvT8pzW6(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).type))
                {
                    fu_VEC<s_SolvedNode> relaxed {};
                    for (int i = 0; i < node.items.size(); i++)
                    {
                        const s_SolvedNode& orig = node.items[i];
                        if (has_Ezy4yCLH(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).type.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i)))
                        {
                            s_Type type { orig.type };
                            if (try_relax_Wnahb19Z(type, slot_1, int(relax_mask)))
                            {
                                if (!relaxed)
                                    relaxed = fu::slice(node.items, 0, i);

                                relaxed += SolvedNode_ltxQ8cxX(s_kind___relaxed, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                continue;
                            };
                        };
                        if (relaxed)
                            relaxed += s_SolvedNode(orig);

                    };
                    if (relaxed)
                    {
                        fu_STR args_mangled {};
                        /*MOV*/ const s_Target spec = trySpecialize_ODMsMpw1(s_Target(EXT_onaILX8Q(t, module, _scope, ctx).spec_of), relaxed, args_mangled, relaxed.size(), (*(const s_Type*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, _scope, module, ctx, _helpers, _helpers_data, _here, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                        if (!is_SPECFAIL_fTaqkZrb(spec) && !(spec == t))
                        {
                            checkAssignable_I8obPA2D(node.type, GET_JhxATLIa(spec, _scope, module, ctx, _helpers, _helpers_data, _here).type, "Relaxed specialization does not return a subtype"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), bool{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                            if (is_ref_MvT8pzW6(node.type))
                            {
                                node.type.lifetime = Lifetime_test_UDGeBh5H(Lifetime_replaceArgsAtCallsite_mU7DzA3y(spec, relaxed, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort), true, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort);
                            };
                            node.target = s_Target(spec);
                            makeNote_hsfuVyUh(s_SolverNotes_N_RelaxRespec, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
                        };
                    };
                };
                if (node.items)
                {
                    fu_VEC<s_Argument> host_args { EXT_onaILX8Q(node.target, module, _scope, ctx).args };
                    const bool rtl = isRTL_gadTQpqu(GET_JhxATLIa(node.target, _scope, module, ctx, _helpers, _helpers_data, _here));
                    const bool ooe_isUndef = (!rtl && (node.items.size() > 1));
                    /*MOV*/ const int N = node.items.size();
                    const int start = (rtl ? 0 : (N - 1));
                    const int end = (rtl ? int(N) : (0 - 1));
                    const int incr = (rtl ? +1 : -1);
                    s_BitSet just_used1 {};
                    std::swap(_current_fn.moves.just_used, just_used1);
                    fu_DEFER(std::swap(_current_fn.moves.just_used, just_used1));
                    s_BitSet just_moved00 { (ooe_isUndef ? _current_fn.moves.just_moved : (*(const s_BitSet*)fu::NIL)) };
                    int MUSTSEQ_mask = 0;
                    for (int i = start; i != end; i += incr)
                    {
                        s_SolvedNode& arg = node.items.mutref(i);
                        const bool ooe_isUndef_1 = (ooe_isUndef && (i != start));
                        s_BitSet just_moved0 { (ooe_isUndef_1 ? _current_fn.moves.just_moved : (*(const s_BitSet*)fu::NIL)) };
                        propagateType_8TxqwKMZ(arg, host_args[i].type, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                        if (ooe_isUndef_1)
                        {
                            const int mustSeq = i;
                            each_ikhZORvH(_current_fn.moves.just_used, just_moved0, just_moved00, MUSTSEQ_mask, mustSeq, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
                            add_GKz57Mnx(just_used1, _current_fn.moves.just_used);
                            clear_pjZ6yXGF(_current_fn.moves.just_used);
                        };
                    };
                    node.helpers.index |= MUSTSEQ_mask;
                };
            };
        }
        else if ((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_char) || (k == s_kind_str) || (k == s_kind_definit) || (k == s_kind_bool))
        {
        }
        else if ((k == s_kind_typeparam) || (k == s_kind_empty) || (k == s_kind_fndef))
        {
        }
        else if (k == s_kind_move)
            propagateType_8TxqwKMZ(only_sQklljcv(node.items), slot_1, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        else if (k == s_kind_copy)
        {
            if (relax_mask != RELAX_all)
                fail_F42afdck("Found a `copy` node during first relax."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
            else
            {
                s_SolvedNode& item = only_sQklljcv(node.items);
                bool isCopy = true;
                if (tryTrackLastUse_LOIW8q0I(item.type.lifetime, relax_mask, _current_fn, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here))
                {
                    isCopy = false;
                }
                else
                {
                    if (!is_rx_copy_MvT8pzW6(item.type))
                        fail_F42afdck(("Needs an explicit STEAL or CLONE: "_fu + humanizeType_PJ01PlxR(item.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
                    else if (!is_trivial_3ZVvGB0M(node.type, module, ctx))
                        makeNote_hsfuVyUh(s_SolverNotes_N_NonTrivAutoCopy, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);

                };
                propagateType_8TxqwKMZ(item, (isCopy ? make_copyable_MvT8pzW6(static_cast<s_Type&&>(slot_1)) : static_cast<s_Type&&>(slot_1)), relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                if (is_ref_MvT8pzW6(item.type))
                {
                    if (!isCopy)
                    {
                        Lifetime_F_MOVED_FROM_t49jzoIG(item.type.lifetime, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here);
                        trackJustMoved_b3h7rCFb(item.type.lifetime, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);
                        node.kind = s_kind_move;
                    };
                }
                else
                    fail_F42afdck("TODO: Relaxed a copy/move to a value, no point in keeping the outer node."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

            };
        }
        else if (k == s_kind_arrlit)
        {
            s_Type itemSlot = clear_sliceable_9gHYdovL(slot_1, _here, ctx);
            for (int i = 0; i < node.items.size(); i++)
                propagateType_8TxqwKMZ(node.items.mutref(i), itemSlot, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        }
        else if (k == s_kind_argid)
        {
            node = only_sQklljcv(node.items);
            propagateType_8TxqwKMZ(node, slot_1, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        }
        else if (k == s_kind_jump)
        {
            const s_Helpers h { node.helpers };
            if (_helpers_data[h.index].ret_actual)
                propagateType_8TxqwKMZ(only_sQklljcv(node.items), _helpers_data[h.index].ret_actual, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            else
                fail_F42afdck("propagateType(jump): h.ret_actual not available."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        }
        else if (k == s_kind_block)
        {
            const s_Helpers h { node.helpers };
            try_relax_Wnahb19Z(_helpers_data.mutref(h.index).ret_actual, slot_1, int(relax_mask));
            bool isLast = true;
            for (int i = node.items.size(); i-- > 0; )
            {
                s_SolvedNode& node_1 = node.items.mutref(i);
                s_SolvedNode& node_2 = ((node_1.kind == s_kind_defer) ? only_sQklljcv(node_1.items) : node_1);
                propagateType_8TxqwKMZ(node_2, (isLast ? ((void)(isLast = false), slot_1) : t_void), relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            };
            if (_helpers_data[h.index].target == _current_fn.out.target)
                _current_fn_eachArg_BACK_HUtSv5Sw(_current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, relax_mask, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        }
        else if (k == s_kind_loop)
        {
            /*MOV*/ const int loop_start0 = _current_fn.loop_start;
            const s_HelpersData* BL_66_v;
            int _1 {};
            _current_fn.loop_start = ((_1 = (__extension__ (
            {
                const s_Helpers& h = node.helpers;
                BL_66_v = &(_helpers_data[h.index]);
            (void)0;}), *BL_66_v).locals_start) ? _1 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
            if (post_gVR5PSZo(node))
                propagateType_8TxqwKMZ(post_gVR5PSZo(node), t_void, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

            if (post_cond_XtkSxrvq(node))
                propagateType_8TxqwKMZ(post_cond_XtkSxrvq(node), t_bool, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

            if (body_8Wlvj4sj(node))
                propagateType_8TxqwKMZ(body_8Wlvj4sj(node), t_void, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

            if (pre_cond_A5LCKOK8(node))
                propagateType_8TxqwKMZ(pre_cond_A5LCKOK8(node), t_bool, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

            _current_fn.loop_start = int(loop_start0);
            if (init_dmg14Uoe(node))
                propagateType_8TxqwKMZ(init_dmg14Uoe(node), t_void, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        }
        else if (k == s_kind_try)
        {
            propagateType_8TxqwKMZ(recover_2rhtgq32(node), t_void, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            propagateType_8TxqwKMZ(error_6D4OcPhB(node), t_string, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
            propagateType_8TxqwKMZ(attempt_RywWE8FV(node), t_void, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        }
        else if (k == s_kind_root)
        {
        }
        else if (k == s_kind_pragma)
        {
            for (int i = 0; i < node.items.size(); i++)
            {
                s_SolvedNode* _2;
                (_2 = &(node.items.mutref(i)), propagateType_8TxqwKMZ(*_2, node.items[i].type, relax_mask, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items));
            };
        }
        else
            fail_F42afdck((x7E_YP7BiSZZ("TODO: propagateType("_fu, str_x2XZ9C2m(k)) + ")."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

static s_Flow& flow_iKyLSWar(s_CurrentFn& _current_fn)
{
    return _current_fn.flow;
}

inline static void _current_fn_eachArg_FWD_FKaT5Zib(s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    fu_VEC<s_SolvedNode> sig { _current_fn.out.items };
    for (int i = 0; i < (sig.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = sig[i].target;
        if (t && (GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).flags & s_Flags_F_ARG))
            Reference_trackArgument_P8K1ktk8(flow_iKyLSWar(_current_fn), int(t.index), i, _here, ctx);

    };
}

static fu_VEC<s_SolvedNode>& args_DdxDEgjH(s_SolvedNode& callsite)
{
    return callsite.items;
}

static s_Target& target_4jKwHyIt(s_SolvedNode& callsite)
{
    return callsite.target;
}

                                #ifndef DEF_grow_oob_n7rGcOYslTj
                                #define DEF_grow_oob_n7rGcOYslTj
inline int& grow_oob_n7rGcOYs(fu_VEC<int>& a, const int i, const int fill)
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

                                #ifndef DEF_if_first_ExmqHm1o0ua
                                #define DEF_if_first_ExmqHm1o0ua
inline const s_Region& if_first_ExmqHm1o(fu::view<s_Region> s)
{
    return s.size() ? s[0] : (*(const s_Region*)fu::NIL);
}
                                #endif

static s_Lifetime Lifetime_unwind_noStatic_rS2C3uxR(/*MOV*/ s_Lifetime&& lifetime, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    if (Region_isStatic_RvC5USpz(if_first_ExmqHm1o(lifetime.uni0n)))
    {
        lifetime.uni0n.shift();
    };
    return Lifetime_unwind_WuYtgzDU(static_cast<s_Lifetime&&>(lifetime), 0, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here);
}

static bool acceptsTempCopies_gYPAlu8H(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (o.kind == s_kind_var) && !(o.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)) && !is_mutref_9gHYdovL(o.type, _here, ctx);
}

static bool acceptsSoftRisk_GwAL1uTM(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (o.flags & s_Flags_F_ARG) && !acceptsTempCopies_gYPAlu8H(o, _here, ctx);
}

                                #ifndef DEF_grow_if_oob_eq5Lu6Hwt31
                                #define DEF_grow_if_oob_eq5Lu6Hwt31
inline fu_VEC<int>& grow_if_oob_eq5Lu6Hw(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_add_itJnJlI8Hy7
                                #define DEF_add_itJnJlI8Hy7
inline bool add_itJnJlI8(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gcxVH86X(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    keys.insert(lo, int(item));
    return true;
}
                                #endif

                                #ifndef DEF_unless_oob_4Cjh8wBBFy2
                                #define DEF_unless_oob_4Cjh8wBBFy2
inline const fu_VEC<int>& unless_oob_4Cjh8wBB(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static bool RESOLVE_byAAR_Cm6pdAS6(const int read, const int write, const bool trySoft, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort, s_CurrentFn& _current_fn)
{
    if (AAR)
    {
        if (read != write)
        {
            if ((!trySoft || !acceptsSoftRisk_GwAL1uTM(GET_JhxATLIa(nested_u2XpitD4(read, _current_fnort, module), _scope, module, ctx, _helpers, _helpers_data, _here), _here, ctx)) && !add_itJnJlI8(grow_if_oob_eq5Lu6Hw(_current_fn.flow.at_hard_risk, write), read))
                return true;
            else if (!add_itJnJlI8(grow_if_oob_eq5Lu6Hw(_current_fn.flow.at_soft_risk, write), read))
                return true;
            else
            {
                const bool firstTry_to_ascendWrites = (write > read);
                for (int i = 0; i < 2; i++)
                {
                    if (!i == firstTry_to_ascendWrites)
                    {
                        fu_VEC<int> parents { unless_oob_4Cjh8wBB(_current_fn.flow.arg_parents, write) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != read)
                                    RESOLVE_byAAR_Cm6pdAS6(read, parent, trySoft, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);

                            };
                            return true;
                        };
                    }
                    else
                    {
                        fu_VEC<int> parents { unless_oob_4Cjh8wBB(_current_fn.flow.arg_parents, read) };
                        if (parents)
                        {
                            for (int i_1 = 0; i_1 < parents.size(); i_1++)
                            {
                                const int parent = parents[i_1];
                                if (parent != write)
                                    RESOLVE_byAAR_Cm6pdAS6(parent, write, false, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);

                            };
                            return true;
                        };
                    };
                };
                return true;
            };
        }
        else
            BUG_D9Hg55no("RESOLVE_byAAR: read == write"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static bool softRiskSafe_vakHztGu(const s_SolvedNode& arg, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return (arg.kind == s_kind_call) && (GET_JhxATLIa(arg.target, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_var);
}

                                #ifndef DEF_has_inter_mTFSZAWRIei
                                #define DEF_has_inter_mTFSZAWRIei
inline bool has_inter_mTFSZAWR(fu::view<int> l, fu::view<int> r)
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

static bool isInvalidatedBy_bjGaUhDp(fu::view<s_Region> read, fu::view<s_Region> write, s_CurrentFn& _current_fn)
{
    fu::view<int> read_1 = fu::view_of(read, int{});
    for (int i = 0; i < write.size(); i++)
    {
        const int w = Region_asLocal_RvC5USpz(write[i]);
        if (w && has_inter_mTFSZAWR(unless_oob_4Cjh8wBB(flow_iKyLSWar(_current_fn).invalidates, w), read_1))
            return true;

    };
    return false;
}

static bool RESOLVE_byMutvar_K3EMmkSm(const int target, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    if (AAR)
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    }
    else
    {
        const s_Target t = nested_u2XpitD4(target, _current_fnort, module);
        s_Overload& o = GET_mut_5Ue5IxE1(t, _scope, module);
        if (!acceptsTempCopies_gYPAlu8H(o, _here, ctx))
            return false;
        else if (is_mutref_9gHYdovL(o.type, _here, ctx))
            BUG_D9Hg55no(((qWHAT_wCuy3nxK(o, module, _scope, ctx, _helpers, _helpers_data, _here) + ": Not F_REF but type.is_mutref"_fu) + " in RESOLVE_byMutvar: is this a problem?"_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
        else if (o.kind == s_kind_var)
        {
            if (o.type.lifetime.uni0n.size() == 1)
            {
                if (!is_rx_copy_MvT8pzW6(o.type))
                    return false;
                else
                {
                    if (!(o.flags & s_Flags_F_MUT))
                    {
                        o.flags |= s_Flags_F_MUT;
                        /*MOV*/ s_Type t_let = clear_refs_MvT8pzW6(s_Type(o.type));
                        o.solved.type = static_cast<s_Type&&>(t_let);
                    };
                    return true;
                };
            }
            else
                BUG_D9Hg55no("RESOLVE_byMutvar: lt.len != 1"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        }
        else
            BUG_D9Hg55no("RESOLVE_byMutvar: Not a variable."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

static bool RESOLVE_byMutvar_xBuigWY6(const s_Target& target, const s_CurrentFn& _current_fn, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    return (target.modid == -_current_fn.out.target.index) && RESOLVE_byMutvar_K3EMmkSm(target.index, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort);
}

static bool acceptsTempCopies_cxB3ckyE(const s_Argument& arg)
{
    return !(arg.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF));
}

static s_SolvedNode createBool_YeGIVpPL(const fu_STR& value, const s_Type& type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if ((value == "true"_fu) || (value == "false"_fu))
    {
        return SolvedNode_ltxQ8cxX(s_kind_bool, type, s_Flags{}, value, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static s_SolvedNode createDefinit_LoozlLx1(s_Type&& type, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx)
{
    if (is_ref_MvT8pzW6(type))
    {
        type.lifetime = Lifetime_static_8nlJDPX0();
    };
    if (is_integral_VS9ogqN5(type))
    {
        return SolvedNode_ltxQ8cxX(s_kind_int, type, s_Flags{}, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_floating_pt_VS9ogqN5(type))
    {
        return SolvedNode_ltxQ8cxX(s_kind_real, type, s_Flags{}, "0"_fu, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    }
    else if (is_boolean_VS9ogqN5(type))
        return createBool_YeGIVpPL("false"_fu, type, _helpers, _helpers_data, _scope, module, ctx, _here);
    else
    {
        return SolvedNode_ltxQ8cxX(s_kind_definit, type, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
    };
}

static void definitWrap_7lpqCruV(s_SolvedNode& node, const s_Type& slot, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_CurrentFn& _current_fn, const s_Options& options, s_SolverNotes& _notes, fu_VEC<fu_STR>& _spec_errors, const s_Target& _current_fnort, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    if (is_mutref_9gHYdovL(slot, _here, ctx) && CANNOT_definit_mutrefs)
        BUG_D9Hg55no("Trying to definitWrap a mutref."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
    else if (node.kind == s_kind_definit)
    {
        node.type = (is_ref_MvT8pzW6(slot) ? add_ref_8kJD1Pzg(clear_refs_MvT8pzW6(s_Type(slot)), Lifetime_static_8nlJDPX0(), _here, ctx) : s_Type(slot));
    }
    else
    {
        node = createBlock_7yOivmtL(slot, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode(node), createDefinit_LoozlLx1(s_Type(slot), _here, _helpers, _helpers_data, _scope, module, ctx) } }, s_Helpers{}, _here, _helpers, _helpers_data, _scope, module, ctx, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
    };
}

static bool isRefArg_dLWjtWv6(const s_Overload& o)
{
    return (o.flags & s_Flags_F_ARG) && (o.kind == s_kind_var) && is_ref_MvT8pzW6(o.solved.type);
}

static int Lifetime_vs_ZGGHszGT(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    bool neg = false;
    bool pos = false;
    fu::view<s_Region> r = lifetime.uni0n;
    for (int i = 0; (i < r.size()) && !(pos ? neg : (*(const bool*)fu::NIL)); i++)
    {
        const s_Region& r_1 = r[i];
        if (Region_toLocal_RvC5USpz(r_1) < locals_start)
            neg = true;
        else if (Region_isTemp_RvC5USpz(r_1))
            pos = true;
        else if (isRefArg_dLWjtWv6(Region_GET_ZkX4IHEI(r_1, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here)))
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

static void maybeCopyOrMove_CTKcyM8g(s_SolvedNode& node, const s_Type& slot, const bool isArgument, const bool isReturn, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_CurrentFn& _current_fn, const s_Options& options, s_SolverNotes& _notes, fu_VEC<fu_STR>& _spec_errors, const s_Target& _current_fnort, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    if ((slot.vtype.canon != node.type.vtype.canon) && !is_never_ZFEUWUgI(node.type))
    {
        if (is_zeroes_ZFEUWUgI(node.type) && !(is_mutref_9gHYdovL(slot, _here, ctx) ? CANNOT_definit_mutrefs : (*(const bool*)fu::NIL)))
        {
            definitWrap_7lpqCruV(node, slot, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
            return;
        }
        else
            BUG_D9Hg55no(((("Considering copy or move for incompatible types: "_fu + humanizeType_PJ01PlxR(slot, module, ctx)) + " <- "_fu) + humanizeType_PJ01PlxR(node.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else if (is_ref_MvT8pzW6(slot))
    {
        if (is_trivial_3ZVvGB0M(node.type, module, ctx))
        {
            if ((node.kind == s_kind_definit) && isArgument)
                node.type = clear_refs_MvT8pzW6(s_Type(node.type));

        };
        return;
    }
    else if (!is_ref_MvT8pzW6(node.type))
        return;
    else if (node.kind == s_kind_definit)
    {
        node.type = clear_refs_MvT8pzW6(s_Type(node.type));
        return;
    }
    else if (is_zeroes_ZFEUWUgI(node.type))
    {
        definitWrap_7lpqCruV(node, slot, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
        return;
    }
    else
    {
        s_kind kind = s_kind_copy;
        if (isReturn && (Lifetime_vs_ZGGHszGT(Lifetime_unwind_WuYtgzDU(s_Lifetime(node.type.lifetime), 0, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here), 0, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here) > 0))
        {
            kind = s_kind_move;
            Lifetime_F_MOVED_FROM_t49jzoIG(node.type.lifetime, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here);
        };
        node = SolvedNode_ltxQ8cxX(kind, clear_refs_MvT8pzW6(s_Type(node.type)), s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } }, s_Target{}, s_Helpers{}, _here);
    };
}

static bool RESOLVE_byTempCopy_TKAJu2K1(s_SolvedNode& node, const s_Type& slot, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_CurrentFn& _current_fn, const s_Options& options, s_SolverNotes& _notes, fu_VEC<fu_STR>& _spec_errors, const s_Target& _current_fnort, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    s_Type slot_1 = make_copyable_MvT8pzW6(clear_refs_MvT8pzW6(s_Type(slot)));
    maybeCopyOrMove_CTKcyM8g(node, slot_1, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
    return true;
}

static bool RESOLVE_byTempCopy_vIMYcZin(s_SolvedNode& callsite, const int position, const bool AAR, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_CurrentFn& _current_fn, const s_Target& _current_fnort, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, const s_Options& options, s_SolverNotes& _notes, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    if (AAR)
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    }
    else
    {
        const s_Target& target = callsite.target;
        fu_VEC<s_Argument> host_args { EXT_onaILX8Q(target, module, _scope, ctx).args };
        s_Argument host_arg { host_args[position] };
        const s_SolvedNode& arg = callsite.items[position];
        if (!is_rx_copy_MvT8pzW6(arg.type))
            return false;
        else if ((arg.kind == s_kind_call) && RESOLVE_byMutvar_xBuigWY6(arg.target, _current_fn, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort))
            return true;
        else if (!acceptsTempCopies_cxB3ckyE(host_arg))
            return false;
        else
        {
            const s_Region argLt = Region_fromArgPosition_BaKYka79(position);
            const bool isReturned = has_Ezy4yCLH(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type.lifetime.uni0n, argLt);
            if (isReturned)
                return false;
            else
                return RESOLVE_byTempCopy_TKAJu2K1(callsite.items.mutref(position), host_args[position].type, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);

        };
    };
}

                                #ifndef DEF_DEV_DisableBCK
                                #define DEF_DEV_DisableBCK
inline constexpr unsigned DEV_DisableBCK = (0x1u << 0u);
                                #endif

[[noreturn]] static fu::never AAR_cannotFail_U6MIR6Lx(const fu_STR& reason, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (AAR)
        BUG_D9Hg55no(("AAR PASS is trying to emit an error:\n\n\t"_fu + reason), _helpers, _helpers_data, _scope, module, ctx, _here);
    else
        fail_F42afdck(fu_STR(reason), _helpers, _helpers_data, _scope, module, ctx, _here);

}

static void validate_Ka98JgMw(const int i1, fu::view<s_Argument> host_args, const s_Argument& host_arg0, const int i0, s_SolvedNode& callsite, const bool AAR, const int arg_first, const int arg_last, const s_Lifetime& shallow0, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Target& _current_fnort, s_CurrentFn& _current_fn, fu::view<s_Lifetime> bck_unwound, const s_Lifetime& unwound0, const s_SolvedNode& arg0, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    const s_Argument& host_arg1 = host_args[i1];
    if (!has_VM1JQhgd(host_arg0.soft_risk, i1) && !has_VM1JQhgd(host_arg1.soft_risk, i0))
        return;
    else
    {
        const s_SolvedNode& arg1 = args_DdxDEgjH(callsite)[i1];
        const s_Lifetime& shallow1 = arg1.type.lifetime;
        if (AAR)
        {
            if ((i0 >= arg_first) && (i0 <= arg_last) && (i1 >= arg_first) && (i1 <= arg_last))
            {
                for (int r0 = 0; r0 < shallow0.uni0n.size(); r0++)
                {
                    const int region0 = Region_asLocal_RvC5USpz(shallow0.uni0n[r0]);
                    if (region0)
                    {
                        for (int r1 = 0; r1 < shallow1.uni0n.size(); r1++)
                        {
                            const int region1 = Region_asLocal_RvC5USpz(shallow1.uni0n[r1]);
                            if (region1 && (region0 != region1))
                            {
                                if (is_mutref_9gHYdovL(host_arg0.type, _here, ctx))
                                    RESOLVE_byAAR_Cm6pdAS6(region1, region0, !has_VM1JQhgd(host_arg0.hard_risk, i1), AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);

                                if (is_mutref_9gHYdovL(host_arg1.type, _here, ctx))
                                    RESOLVE_byAAR_Cm6pdAS6(region0, region1, !has_VM1JQhgd(host_arg1.hard_risk, i0), AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);

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
            s_Lifetime inter = Lifetime_inter_BGIGvcl2(unwound0, unwound1);
            if (!inter)
                return;
            else
            {
                if (!has_VM1JQhgd(host_arg0.hard_risk, i1) && !has_VM1JQhgd(host_arg1.hard_risk, i0))
                {
                    if ((!has_VM1JQhgd(host_arg0.soft_risk, i1) || (softRiskSafe_vakHztGu(arg1, _scope, module, ctx, _helpers, _helpers_data, _here) && !isInvalidatedBy_bjGaUhDp(shallow1.uni0n, shallow0.uni0n, _current_fn))) && (!has_VM1JQhgd(host_arg1.soft_risk, i0) || (softRiskSafe_vakHztGu(arg0, _scope, module, ctx, _helpers, _helpers_data, _here) && !isInvalidatedBy_bjGaUhDp(shallow0.uni0n, shallow1.uni0n, _current_fn))))
                        return makeNote_hsfuVyUh(s_SolverNotes_N_BckSoftRisk, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);

                };

                {
                    int which = -1;
                    if (!is_mutref_9gHYdovL(host_arg0.type, _here, ctx))
                        which = i0;
                    else if (!is_mutref_9gHYdovL(host_arg1.type, _here, ctx))
                        which = i1;

                    if ((which >= 0))
                    {
                        if (RESOLVE_byTempCopy_vIMYcZin(callsite, which, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn, _current_fnort, t_string, TODO_FIX_convert_args, _ss, _field_items, options, _notes, _spec_errors, _root_scope, _specs, _warnings, shortModuleName))
                            return;

                    };
                };
                if (!(options.dev & DEV_DisableBCK))
                {
                    fu_STR err = qWHAT_wCuy3nxK(GET_JhxATLIa(target_4jKwHyIt(callsite), _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here);
                    err += (((host_args.size() == 2) && (GET_JhxATLIa(target_4jKwHyIt(callsite), _scope, module, ctx, _helpers, _helpers_data, _here).flags & s_Flags_F_OPERATOR)) ? ": Both operands alias:\n"_fu : (x7E_YP7BiSZZ((x7E_YP7BiSZZ(((((": Arguments "_fu + qBAD_ThvlUeXJ(human_CsN1VqyI(host_arg0.name, module, _scope, ctx, _helpers, _helpers_data, _here))) + " and "_fu) + qBAD_ThvlUeXJ(human_CsN1VqyI(host_arg1.name, module, _scope, ctx, _helpers, _helpers_data, _here))) + " (args #"_fu), fu::i64dec(i0)) + " and #"_fu), fu::i64dec(i1)) + ") both alias:\n"_fu));
                    for (int i = 0; i < inter.uni0n.size(); i++)
                    {
                        const s_Region& o = inter.uni0n[i];
                        err += "\n                "_fu;
                        err += qWHAT_wCuy3nxK(Region_GET_ZkX4IHEI(o, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here);
                    };
                    _here = args_DdxDEgjH(callsite)[i0].token;
                    AAR_cannotFail_U6MIR6Lx(err, AAR, _helpers, _helpers_data, _scope, module, ctx, _here);
                };
            };
        };
    };
}

                                #ifndef DEF_add_JiEKD5g4jfg
                                #define DEF_add_JiEKD5g4jfg
inline void add_JiEKD5g4(fu_VEC<s_Region>& a, fu::view<s_Region> b, fu_VEC<int>& extras, const int extra)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_gIvInnt7(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, s_Region(Y));
                extras.insert(x, int(extra));
                y++;
            }
            else
            {
                y++;
            };
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

static s_Events& events_RabcWA8U(s_CurrentFn& _current_fn)
{
    return _current_fn.events;
}

                                #ifndef DEF_unless_oob_KHIQ2SRvw4h
                                #define DEF_unless_oob_KHIQ2SRvw4h
inline const s_ReadID& unless_oob_KHIQ2SRv(fu::view<s_ReadID> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_ReadID*)fu::NIL);
}
                                #endif

static fu_STR bck_name_RaLR3JEM(const int target, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return human_CsN1VqyI(GET_JhxATLIa(nested_u2XpitD4(target, _current_fnort, module), _scope, module, ctx, _helpers, _helpers_data, _here).name, module, _scope, ctx, _helpers, _helpers_data, _here);
}

inline static s_SolvedNode TODO_FIX_pop_L6bGjgeu(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_Ux8kFBvV(const s_SolvedNode& node, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_ReadID& read, s_SolvedNode& result)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_L6bGjgeu(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_wWmQnbcM(node_1.target, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here).solved : node_1);
        if ((node_2.rwr.reads0 < read.id) && (node_2.rwr.reads1 >= read.id))
            result = node_2;

        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_EscbLO5e(const s_SolvedNode& root, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_ReadID& read)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_Ux8kFBvV(root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here, read, result);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByReadID_GrUngevU(const s_ReadID& read, const s_SolvedNode& root, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return SLOW_find_EscbLO5e(root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here, read);
}

                                #ifndef DEF_grow_if_oob_5pq9AIKOTKc
                                #define DEF_grow_if_oob_5pq9AIKOTKc
inline fu_VEC<s_WriteID>& grow_if_oob_5pq9AIKO(fu_VEC<fu_VEC<s_WriteID>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_each_vCga3jNjQae
                                #define DEF_each_vCga3jNjQae
inline void each_vCga3jNj(fu::view<int> a, s_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        tagWritten_WKCiCaor(a[i], _current_fn);

}
                                #endif

static void tagWritten_WKCiCaor(const int target, s_CurrentFn& _current_fn)
{
    if (add_once_sDUBjUzV(events_RabcWA8U(_current_fn).ever_written, target))
        each_vCga3jNj(fu_VEC<int>(unless_oob_4Cjh8wBB(flow_iKyLSWar(_current_fn).parents, target)), _current_fn);

}

static void bck_trackWrites_vxAMq7yp(const s_SolvedNode& callsite, fu::view<s_Region> regions, fu::view<int> positions, s_TokenIdx& _here, s_CurrentFn& _current_fn, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_Target& _current_fnort, const s_SolvedNode& root)
{
    _here = callsite.token;
    for (int i = 0; i < regions.size(); i++)
    {
        const int target = Region_asLocal_RvC5USpz(regions[i]);
        if (!target)
            continue;
        else
        {
            const int position = positions[i];
            fu_VEC<int> invalidates { unless_oob_4Cjh8wBB(flow_iKyLSWar(_current_fn).invalidates, target) };
            if (events_RabcWA8U(_current_fn).used_in_a_loop)
            {
                for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
                {
                    const int read = invalidates[i_1];
                    const s_ReadID& readID = unless_oob_KHIQ2SRv(events_RabcWA8U(_current_fn).used_in_a_loop, read);
                    if (readID)
                    {
                        if (AAR)
                            RESOLVE_byAAR_Cm6pdAS6(read, target, true, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);
                        else
                        {
                            if (!(RESOLVE_byMutvar_K3EMmkSm(read, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort)))
                            {
                                AAR_cannotFail_U6MIR6Lx(((((((((("Write to "_fu + qBAD_ThvlUeXJ(bck_name_RaLR3JEM(target, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here))) + " at call to "_fu) + qWHAT_wCuy3nxK(GET_JhxATLIa(callsite.target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + " invalidates the use of "_fu) + qBAD_ThvlUeXJ(bck_name_RaLR3JEM(read, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here))) + " at "_fu) + addr_and_snippet_0mVnwYUJ(SLOW_findByReadID_GrUngevU(readID, root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here).token, ctx, module)) + "\n\t... on next loop iteration.\n\n\tWritten"_fu) + qSTACK_yxSnwuR0(callsite.target, position, fu::view<s_Target>{}, module, _scope, ctx, _helpers, _helpers_data, _here)), AAR, _helpers, _helpers_data, _scope, module, ctx, _here);
                            };
                        };
                    };
                };
            };
            events_RabcWA8U(_current_fn).writes += s_RWEvent { int(target) };
            const s_WriteID writeID = s_WriteID { events_RabcWA8U(_current_fn).writes.size() };
            for (int i_1 = 0; i_1 < invalidates.size(); i_1++)
            {
                fu_VEC<s_WriteID>& set = grow_if_oob_5pq9AIKO(events_RabcWA8U(_current_fn).snap.invalidated_by, invalidates[i_1]);
                if (!OPTI_bck || AAR || !set)
                    set += s_WriteID(writeID);

            };
            tagWritten_WKCiCaor(target, _current_fn);
        };
    };
}

static s_RWEvent& RWEvent_lB6uc2YJ(const s_WriteID& write, s_CurrentFn& _current_fn)
{
    return _current_fn.events.writes.mutref((write.id - 1));
}

                                #ifndef DEF_add_yy8GBxQDhHb
                                #define DEF_add_yy8GBxQDhHb
inline void add_yy8GBxQD(fu_VEC<s_Region>& a, fu::view<s_Region> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const s_Region& X = a[x];
        const s_Region& Y = b[y];
        const int cmp = x3Cx3E_gIvInnt7(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, s_Region(Y));
                y++;
            }
            else
            {
                y++;
            };
        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

                                #ifndef DEF_has_inter_SHPAFGMJAAa
                                #define DEF_has_inter_SHPAFGMJAAa
inline bool has_inter_SHPAFGMJ(fu::view<s_Region> l, fu::view<s_Region> r)
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
            (void)0;}), static_cast<fu::never&&>(BL_4_v)) : +1) : (r_done ? -1 : x3Cx3E_gIvInnt7(l[li], r[ri])));
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

inline static void merge_gPljF8As(fu::view<s_Region> l, fu::view<s_Region> r, bool& useResult, fu_VEC<s_Region>& result, const fu_VEC<s_Region>& l_1)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_gIvInnt7(l[li], r[ri])));
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

                                #ifndef DEF_inter_cjr4hkt71m3
                                #define DEF_inter_cjr4hkt71m3
inline fu_VEC<s_Region> inter_cjr4hkt7(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_cjr4hkt7(r, l);
    else
    {
        /*MOV*/ fu_VEC<s_Region> result {};
        bool useResult = false;
        merge_gPljF8As(l, r, useResult, result, l);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu_VEC<s_Region>(l);

    };
}
                                #endif

static bool RESOLVE_byAAR_gxOGJxIf(const int write, fu::view<s_Region> reads, const bool trySoft, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort, s_CurrentFn& _current_fn)
{
    for (int r = 0; r < reads.size(); r++)
    {
        const int read = Region_asLocal_RvC5USpz(reads[r]);
        if (read && (read != write))
            RESOLVE_byAAR_Cm6pdAS6(read, write, trySoft, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn);

    };
    return true;
}

                                #ifndef DEF_first_ExmqHm1o0ua
                                #define DEF_first_ExmqHm1o0ua
inline const s_Region& first_ExmqHm1o(fu::view<s_Region> s)
{
    if (s.size())
        return s[0];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

inline static s_SolvedNode TODO_FIX_pop_diVmNAPL(fu_VEC<s_SolvedNode>& arr)
{
    /*MOV*/ s_SolvedNode item {};
    std::swap(item, arr.mutref((arr.size() - 1)));
    arr.pop();
    return /*NRVO*/ item;
}

inline static void SLOW_traverse_9Mx9L38M(const s_SolvedNode& node, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_WriteID& write, s_SolvedNode& result)
{
    fu_VEC<s_SolvedNode> stack = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } };
    while (stack)
    {
        s_SolvedNode node_1 = TODO_FIX_pop_diVmNAPL(stack);
        const s_SolvedNode& node_2 = ((node_1.kind == s_kind_letdef) ? GET_crossmodule_wWmQnbcM(node_1.target, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here).solved : node_1);
        if ((node_2.rwr.writes0 < write.id) && (node_2.rwr.writes1 >= write.id))
            result = node_2;

        for (int i = node_2.items.size(); i-- > 0; )
            stack += s_SolvedNode(node_2.items[i]);

    };
}

inline static s_SolvedNode SLOW_find_Pe2Ud36s(const s_SolvedNode& root, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_WriteID& write)
{
    /*MOV*/ s_SolvedNode result {};
    SLOW_traverse_9Mx9L38M(root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here, write, result);
    return /*NRVO*/ result;
}

static s_SolvedNode SLOW_findByWriteID_FPUlXRuv(const s_WriteID& write, const s_SolvedNode& root, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return SLOW_find_Pe2Ud36s(root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here, write);
}

static fu_STR RWEvent_stack_AyKncyTQ(const s_WriteID& write, const s_SolvedNode& root, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, s_CurrentFn& _current_fn)
{
    s_SolvedNode node = SLOW_findByWriteID_FPUlXRuv(write, root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here);
    if (node.kind != s_kind_call)
        return "\n\tVia "_fu + qKW_ThvlUeXJ(str_x2XZ9C2m(node.kind));
    else
    {
        fu_STR stack {};

        {
            const fu_VEC<s_Region>& uni0n = GET_JhxATLIa(nested_u2XpitD4(RWEvent_lB6uc2YJ(write, _current_fn).rw_target, _current_fnort, module), _scope, module, ctx, _helpers, _helpers_data, _here).type.lifetime.uni0n;
            if (uni0n)
            {
                for (int i = 0; i < node.items.size(); i++)
                {
                    const s_SolvedNode& arg = node.items[i];
                    if (inter_cjr4hkt7(arg.type.lifetime.uni0n, uni0n))
                    {
                        const s_Argument& host_arg = EXT_onaILX8Q(node.target, module, _scope, ctx).args[i];
                        if (host_arg.flags & s_Flags_F_WRITTEN_TO)
                        {
                            stack = qSTACK_yxSnwuR0(node.target, i, fu::view<s_Target>{}, module, _scope, ctx, _helpers, _helpers_data, _here);
                            break;
                        };
                    };
                };
            };
        };
        const s_Overload& o = GET_JhxATLIa(node.target, _scope, module, ctx, _helpers, _helpers_data, _here);
        return ((addr_and_snippet_0mVnwYUJ(node.token, ctx, module) + "\n\tAt call to "_fu) + qID_ThvlUeXJ(o.name)) + stack;
    };
}

static bool RESOLVE_byAAR_FH5yxSJM(fu::view<s_WriteID> writes, const int read, const bool trySoft, s_CurrentFn& _current_fn, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    for (int i = 0; i < writes.size(); i++)
    {
        int _0 {};
        (_0 = int(RWEvent_lB6uc2YJ(writes[i], _current_fn).rw_target), RESOLVE_byAAR_Cm6pdAS6(read, int(_0), trySoft, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn));
    };
    return true;
}

                                #ifndef DEF_first_PtOxbFNOSOk
                                #define DEF_first_PtOxbFNOSOk
inline const s_WriteID& first_PtOxbFNO(fu::view<s_WriteID> s)
{
    if (s.size())
        return s[0];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_grow_if_oob_rqBpsuuEEn5
                                #define DEF_grow_if_oob_rqBpsuuEEn5
inline s_ReadID& grow_if_oob_rqBpsuuE(fu_VEC<s_ReadID>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static void bck_trackRead_akeUXTTh(const s_SolvedNode& callsite, s_CurrentFn& _current_fn, s_TokenIdx& _here, const bool AAR, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_Target& _current_fnort, const s_SolvedNode& root)
{
    if (!is_ref_MvT8pzW6(callsite.type) || !_current_fn.out.target.index)
        return;
    else
    {
        _here = callsite.token;
        fu::view<s_Region> regions = callsite.type.lifetime.uni0n;
        const int loop_start = _current_fn.loop_start;
        for (int i = 0; i < regions.size(); i++)
        {
            const int target = Region_asLocal_RvC5USpz(regions[i]);
            if (!target)
                continue;
            else
            {
                if (events_RabcWA8U(_current_fn).snap.invalidated_by.size() > target)
                {
                    fu_VEC<s_WriteID> u { events_RabcWA8U(_current_fn).snap.invalidated_by[target] };
                    if (u)
                    {
                        if ((AAR ? !RESOLVE_byAAR_FH5yxSJM(u, target, true, _current_fn, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort) : !RESOLVE_byMutvar_K3EMmkSm(target, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort)))
                        {
                            fu_STR _0 {};
                            fu_STR _1 {};
                            AAR_cannotFail_U6MIR6Lx((_1 = ((_0 = (((("Cannot access"_fu + " "_fu) + qBAD_ThvlUeXJ(bck_name_RaLR3JEM(target, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here))) + ", reference invalidated by write to"_fu) + " "_fu), (static_cast<fu_STR&&>(_0) + qBAD_ThvlUeXJ(bck_name_RaLR3JEM(RWEvent_lB6uc2YJ(first_PtOxbFNO(u), _current_fn).rw_target, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here)))) + " at "_fu), (static_cast<fu_STR&&>(_1) + RWEvent_stack_AyKncyTQ(first_PtOxbFNO(u), root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here, _current_fn))), AAR, _helpers, _helpers_data, _scope, module, ctx, _here);
                        }
                        else if (OPTI_bck)
                        {
                            events_RabcWA8U(_current_fn).snap.invalidated_by.mutref(target) = fu_VEC<s_WriteID>{};
                        };
                    };
                };
                events_RabcWA8U(_current_fn).reads += s_RWEvent { int(target) };
                /*MOV*/ const s_ReadID readID = s_ReadID { events_RabcWA8U(_current_fn).reads.size() };
                if (loop_start && (target < loop_start))
                {
                    s_ReadID& a = grow_if_oob_rqBpsuuE(events_RabcWA8U(_current_fn).used_in_a_loop, target);
                    if (!(a))
                        a = s_ReadID(readID);

                };
            };
        };
    };
}

static void bck_call_hxgS7AxT(s_SolvedNode& callsite, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName, const s_SolvedNode& root)
{
    if (args_DdxDEgjH(callsite))
    {
        fu_VEC<s_Argument> host_args { EXT_onaILX8Q(target_4jKwHyIt(callsite), module, _scope, ctx).args };
        const int ooe_read0 = _current_fn.events.reads.size();
        /*MOV*/ const int ooe_write0 = _current_fn.events.writes.size();
        fu_VEC<int> ooe_reads {};
        fu_VEC<int> ooe_writes {};
        const bool ooe_isRTL = isRTL_gadTQpqu(GET_JhxATLIa(target_4jKwHyIt(callsite), _scope, module, ctx, _helpers, _helpers_data, _here));
        const bool ooe_isUndef = !ooe_isRTL;
        const int ooe_START = (ooe_isRTL ? (args_DdxDEgjH(callsite).size() - 1) : 0);

        {
            int ooe_read0_1 = ooe_read0;
            int ooe_write0_1 = ooe_write0;
            for (int ooe_i = 0; ooe_i < args_DdxDEgjH(callsite).size(); ooe_i++)
            {
                bck_node_6Ft9cFgW(args_DdxDEgjH(callsite).mutref((ooe_isRTL ? (ooe_START - ooe_i) : int(ooe_i))), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
                /*MOV*/ const int r1 = _current_fn.events.reads.size();
                /*MOV*/ const int w1 = _current_fn.events.writes.size();
                if (r1 > ooe_read0_1)
                    grow_oob_n7rGcOYs(ooe_reads, ooe_i, ooe_read0_1) = r1;

                if (w1 > ooe_write0_1)
                    grow_oob_n7rGcOYs(ooe_writes, ooe_i, ooe_write0_1) = w1;

                ooe_read0_1 = int(r1);
                ooe_write0_1 = int(w1);
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
        for (int i0 = 0; i0 < args_DdxDEgjH(callsite).size(); i0++)
        {
            s_Argument host_arg0 { host_args[i0] };
            s_Type expect { host_arg0.type };
            if (is_ref_MvT8pzW6(expect))
            {
                if (!bck_unwound)
                {
                    if ((mutref_first >= 0) || ((ref_first >= 0) && is_mutref_9gHYdovL(expect, _here, ctx)))
                    {
                        bck_unwound.resize(args_DdxDEgjH(callsite).size());
                        for (int i0_1 = ref_first; (i0_1 <= ref_last); i0_1++)
                        {
                            const s_Lifetime& unwound = (bck_unwound.mutref(i0_1) = Lifetime_unwind_noStatic_rS2C3uxR(s_Lifetime(args_DdxDEgjH(callsite)[i0_1].type.lifetime), _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here));
                            for (int i = 0; i < unwound.uni0n.size(); i++)
                            {
                                if (Region_asLocal_RvC5USpz(unwound.uni0n[i]))
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
                    s_SolvedNode arg0 { args_DdxDEgjH(callsite)[i0] };
                    s_Lifetime shallow0 { arg0.type.lifetime };
                    const s_Lifetime& unwound0 = (bck_unwound.mutref(i0) = Lifetime_unwind_noStatic_rS2C3uxR(s_Lifetime(shallow0), _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here));
                    for (int i = 0; i < unwound0.uni0n.size(); i++)
                    {
                        if (Region_asLocal_RvC5USpz(unwound0.uni0n[i]))
                        {
                            arg_first = ((arg_first < 0) ? i0 : arg_first);
                            arg_last = i0;
                            continue;
                        };
                    };
                    if (is_mutref_9gHYdovL(expect, _here, ctx))
                    {
                        for (int i_1 = ref_first; (i_1 <= ref_last); i_1++)
                        {
                            if (is_ref_MvT8pzW6(host_args[i_1].type))
                                validate_Ka98JgMw(i_1, host_args, host_arg0, i0, callsite, AAR, arg_first, arg_last, shallow0, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn, bck_unwound, unwound0, arg0, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);

                        };
                    }
                    else
                    {
                        for (int i_1 = mutref_first; (i_1 <= mutref_last); i_1++)
                        {
                            if (is_mutref_9gHYdovL(host_args[i_1].type, _here, ctx))
                                validate_Ka98JgMw(i_1, host_args, host_arg0, i0, callsite, AAR, arg_first, arg_last, shallow0, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fnort, _current_fn, bck_unwound, unwound0, arg0, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);

                        };
                    };
                };

                {
                    if (ref_first < 0)
                        ref_first = i0;

                    ref_last = i0;
                };
                if (is_mutref_9gHYdovL(expect, _here, ctx))
                {
                    if (mutref_first < 0)
                        mutref_first = i0;

                    mutref_last = i0;
                    if (host_arg0.flags & s_Flags_F_WRITTEN_TO)
                    {
                        const s_SolvedNode& arg0 = args_DdxDEgjH(callsite)[i0];
                        if (is_mutref_9gHYdovL(host_arg0.type, _here, ctx))
                        {
                            if (is_mutref_9gHYdovL(arg0.type, _here, ctx))
                            {
                                add_JiEKD5g4(bck_writes, arg0.type.lifetime.uni0n, bck_positions, i0);
                            }
                            else
                                BUG_D9Hg55no((qID_ThvlUeXJ(human_CsN1VqyI(host_arg0.name, module, _scope, ctx, _helpers, _helpers_data, _here)) + ": host_arg0.written but !arg.is_mutref"_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

                        }
                        else
                            BUG_D9Hg55no((qID_ThvlUeXJ(human_CsN1VqyI(host_arg0.name, module, _scope, ctx, _helpers, _helpers_data, _here)) + ": host_arg0.written but !host_arg0.is_mutref"_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

                    };
                };
            };
        };
        if (bck_writes)
        {
            if (bck_positions.size() == bck_writes.size())
                bck_trackWrites_vxAMq7yp(callsite, bck_writes, bck_positions, _here, _current_fn, AAR, _helpers, _helpers_data, _scope, module, ctx, _current_fnort, root);
            else
                BUG_D9Hg55no("bck_position.len is off"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        };
        int MUSTSEQ_mask = 0;

        {
            int ooe_write0_1 = int(ooe_write0);
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
                        const int write = RWEvent_lB6uc2YJ(writeID, _current_fn).rw_target;
                        const bool iw_evalsFirst = (ooe_iw == 0);
                        fu_VEC<s_Region> just_the_write = fu_VEC<s_Region> { fu::slate<1, s_Region> { Region_fromLocal_BaKYka79(write) } };
                        fu_VEC<s_Region> written_and_invalidated {};
                        if (!iw_evalsFirst)
                        {
                            written_and_invalidated = just_the_write;
                            fu::view<int> invalidates = unless_oob_4Cjh8wBB(flow_iKyLSWar(_current_fn).invalidates, write);
                            add_yy8GBxQD(written_and_invalidated, fu::view_of(invalidates, s_Region{}));
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
                                        fu::view<s_Region> regions = GET_JhxATLIa(nested_u2XpitD4(read.rw_target, _current_fnort, module), _scope, module, ctx, _helpers, _helpers_data, _here).type.lifetime.uni0n;
                                        if (!has_inter_SHPAFGMJ(regions, written))
                                            continue;
                                        else
                                        {
                                            const int r_1 = (ooe_isRTL ? (ooe_START - ooe_ir) : int(ooe_ir));
                                            const int w_1 = (ooe_isRTL ? (ooe_START - ooe_iw) : int(ooe_iw));
                                            if (ooe_ir_evalsBefore_iw)
                                            {
                                                s_SolvedNode arg { args_DdxDEgjH(callsite)[r_1] };
                                                const fu_VEC<s_Region>& bound = arg.type.lifetime.uni0n;
                                                fu_VEC<s_Region> inter = inter_cjr4hkt7(bound, written);
                                                if (inter)
                                                {
                                                    if ((AAR ? !RESOLVE_byAAR_gxOGJxIf(write, inter, true, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fnort, _current_fn) : !RESOLVE_byTempCopy_vIMYcZin(callsite, r_1, AAR, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn, _current_fnort, t_string, TODO_FIX_convert_args, _ss, _field_items, options, _notes, _spec_errors, _root_scope, _specs, _warnings, shortModuleName)))
                                                    {
                                                        _here = callsite.token;
                                                        fu_STR _0 {};
                                                        AAR_cannotFail_U6MIR6Lx((_0 = (x7E_YP7BiSZZ((((((((x7E_YP7BiSZZ((((("At call to "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(target_4jKwHyIt(callsite), _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + ", argument binding "_fu) + qBAD_ThvlUeXJ(human_CsN1VqyI(host_args[r_1].name, module, _scope, ctx, _helpers, _helpers_data, _here))) + " (arg #"_fu), fu::i64dec(r_1)) + ") at "_fu) + addr_and_snippet_0mVnwYUJ(arg.token, ctx, module)) + "\n\t... invalidated by subsequent write to "_fu) + qWHAT_wCuy3nxK(Region_GET_ZkX4IHEI(first_ExmqHm1o(just_the_write), _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + " upon evaluation of argument "_fu) + qBAD_ThvlUeXJ(human_CsN1VqyI(host_args[w_1].name, module, _scope, ctx, _helpers, _helpers_data, _here))) + " (arg #"_fu), fu::i64dec(w_1)) + ") at "_fu), (static_cast<fu_STR&&>(_0) + RWEvent_stack_AyKncyTQ(writeID, root, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here, _current_fn))), AAR, _helpers, _helpers_data, _scope, module, ctx, _here);
                                                    };
                                                };
                                            };
                                            if (ooe_isUndef)
                                            {
                                                const int mustSeq = (ooe_ir_evalsBefore_iw ? r_1 : w_1);
                                                MUSTSEQ_mask |= (1 << (mustSeq & 31));
                                                makeNote_hsfuVyUh(s_SolverNotes_N_BckMustSeq, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
                                            };
                                            break;
                                        };
                                    };
                                }
                                else
                                {
                                    BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
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
            BUG_D9Hg55no("MUSTSEQ_mask: helpers already contain something"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else if (GET_JhxATLIa(target_4jKwHyIt(callsite), _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_var)
        bck_trackRead_akeUXTTh(callsite, _current_fn, _here, AAR, _helpers, _helpers_data, _scope, module, ctx, _current_fnort, root);

}

static void bck_loop_T0opoYqB(s_SolvedNode& node, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName, const s_SolvedNode& root)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_6Ft9cFgW(items.mutref(0), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    /*MOV*/ fu_VEC<s_ReadID> events0 { _current_fn.events.used_in_a_loop };
    /*MOV*/ const int loop_start0 = _current_fn.loop_start;
    const s_HelpersData* BL_1_v;
    int _0 {};
    _current_fn.loop_start = ((_0 = (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_1_v = &(_helpers_data[h.index]);
    (void)0;}), *BL_1_v).locals_start) ? _0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
    fu_DEFER(
    {
        _current_fn.loop_start = int(loop_start0);
        _current_fn.events.used_in_a_loop = static_cast<fu_VEC<s_ReadID>&&>(events0);
    });
    for (int i = 1; i < items.size(); i++)
        bck_node_6Ft9cFgW(items.mutref(i), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);

}

static void bck_nodes_Vb6n3iPK(fu::view_mut<s_SolvedNode> items, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName, const s_SolvedNode& root)
{
    for (int i = 0; i < items.size(); i++)
        bck_node_6Ft9cFgW(items.mutref(i), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);

}

                                #ifndef DEF_unless_oob_Dijpjkc4MSi
                                #define DEF_unless_oob_Dijpjkc4MSi
inline const fu_VEC<s_WriteID>& unless_oob_Dijpjkc4(fu::view<fu_VEC<s_WriteID>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<s_WriteID>*)fu::NIL);
}
                                #endif

static void bck_trackInit_ki3xGzdm(const s_Target& target, s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const int index = target.index;
    if (!index)
        return;
    else if (unless_oob_Dijpjkc4(events_RabcWA8U(_current_fn).snap.invalidated_by, index))
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static void bck_let_2WRDBp7f(s_SolvedNode& node, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName, const s_SolvedNode& root)
{
    bck_nodes_Vb6n3iPK(node.items, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    if (is_ref_MvT8pzW6(node.type))
    {
        if (node.flags & s_Flags_F_ARG)
            BUG_D9Hg55no("bck_let: Found an argument!"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
        else
        {
            const s_SolvedNode& init = node.items[LET_INIT];
            if (is_ref_MvT8pzW6(init.type))
            {
                Reference_trackLocalRef_b5wNsTR7(_current_fn.flow, node.target.index, init.type.lifetime);
            }
            else
                BUG_D9Hg55no("What!"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        };
    };
    bck_trackInit_ki3xGzdm(node.target, _current_fn, _helpers, _helpers_data, _scope, module, ctx, _here);
}

                                #ifndef DEF_x3Cx3E_ICIY8JANWA5
                                #define DEF_x3Cx3E_ICIY8JANWA5
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

                                #ifndef DEF_add_0z5wjLTV793
                                #define DEF_add_0z5wjLTV793
inline void add_0z5wjLTV(fu_VEC<s_WriteID>& a, fu::view<s_WriteID> b)
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
            {
                y++;
            };
        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

inline static void Events_merge_7VvflSS4(fu_VEC<fu_VEC<s_WriteID>>& dest, fu::view<fu_VEC<s_WriteID>> src)
{
    if (dest.size() < src.size())
        dest.grow(src.size());

    for (int i = 0; i < src.size(); i++)
    {
        const fu_VEC<s_WriteID>& src_1 = src[i];
        if (src_1)
            add_0z5wjLTV(dest.mutref(i), src_1);

    };
}

static void Events_merge_LeE4Eds7(s_Events& events, const s_EventsSnap& snap)
{
    Events_merge_7VvflSS4(events.snap.invalidated_by, snap.invalidated_by);
}

static void bck_if_JbwnG4RE(s_SolvedNode& node, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName, const s_SolvedNode& root)
{
    fu::view_mut<s_SolvedNode> items = node.items;
    bck_node_6Ft9cFgW(items.mutref(0), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    /*MOV*/ s_EventsSnap e_Restore_AfterCond { _current_fn.events.snap };
    bck_node_6Ft9cFgW(items.mutref(1), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    s_EventsSnap e_Merge_AfterCons { _current_fn.events.snap };
    _current_fn.events.snap = static_cast<s_EventsSnap&&>(e_Restore_AfterCond);
    bck_node_6Ft9cFgW(items.mutref(2), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    Events_merge_LeE4Eds7(_current_fn.events, e_Merge_AfterCons);
}

static void bck_block_g0BSo8CK(s_SolvedNode& node, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName, const s_SolvedNode& root)
{
    fu_VEC<s_SolvedNode> defers {};
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
    {
        s_SolvedNode& node_1 = items.mutref(i);
        if (node_1.kind == s_kind_defer)
            defers += s_SolvedNode(only_l6T9uEqE(node_1.items));
        else
            bck_node_6Ft9cFgW(node_1, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);

    };
    for (int i_1 = defers.size(); i_1-- > 0; )
        bck_node_6Ft9cFgW(defers.mutref(i_1), _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);

}

static void bck_node_6Ft9cFgW(s_SolvedNode& node, s_CurrentFn& _current_fn, s_Module& module, s_Scope& _scope, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const bool AAR, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName, const s_SolvedNode& root)
{
    const s_kind k = node.kind;
    /*MOV*/ s_RWRanges rwr {};
    rwr.reads0 = _current_fn.events.reads.size();
    rwr.writes0 = _current_fn.events.writes.size();
    if (k == s_kind_call)
        bck_call_hxgS7AxT(node, module, _scope, ctx, _current_fn, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    else if (k == s_kind_loop)
        bck_loop_T0opoYqB(node, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_5Ue5IxE1(node.target, _scope, module).solved, node);
        bck_node_6Ft9cFgW(node, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
        std::swap(GET_mut_5Ue5IxE1(node.target, _scope, module).solved, node);
    }
    else if (k == s_kind_let)
        bck_let_2WRDBp7f(node, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    else if (k == s_kind_if)
    {
        bck_if_JbwnG4RE(node, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    }
    else if (k == s_kind_block)
        bck_block_g0BSo8CK(node, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    else if ((k == s_kind_root) || (k == s_kind_and) || (k == s_kind_or) || (k == s_kind_jump) || (k == s_kind_try) || (k == s_kind_copy) || (k == s_kind_move) || (k == s_kind_arrlit))
        bck_nodes_Vb6n3iPK(node.items, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    else if (k == s_kind_pragma)
    {
    }
    else if (node.items)
        AAR_cannotFail_U6MIR6Lx((x7E_YP7BiSZZ("TODO: bck_node(non-empty "_fu, str_x2XZ9C2m(k)) + ")."_fu), AAR, _helpers, _helpers_data, _scope, module, ctx, _here);

    rwr.reads1 = _current_fn.events.reads.size();
    rwr.writes1 = _current_fn.events.writes.size();
    if ((rwr.reads1 > rwr.reads0) || (rwr.writes1 > rwr.writes0))
        node.rwr = s_RWRanges(rwr);

}

inline static void _current_fn_eachArg_FWD_8wUdqkje(const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, int& last, fu_VEC<int>& refs, fu_VEC<int>& consts)
{
    fu::view<s_SolvedNode> sig = _current_fn.out.items;
    for (int i = 0; i < (sig.size() + FN_ARGS_BACK); i++)
    {
        const s_Target& t = sig[i].target;
        if (t && (GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).flags & s_Flags_F_ARG))
        {
            if (t.modid == -_current_fn.out.target.index)
            {
                int _0 {};
                if ((_0 = int(last), (int(_0) < (last = t.index))))
                {
                    if (is_mutref_9gHYdovL(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).solved.type, _here, ctx))
                        refs += int(t.index);
                    else if (is_ref_MvT8pzW6(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).solved.type))
                        consts += int(t.index);

                }
                else
                {
                    BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                };
            }
            else
            {
                BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
            };
        };
    };
}

                                #ifndef DEF_rem_itJnJlI8Hy7
                                #define DEF_rem_itJnJlI8Hy7
inline bool rem_itJnJlI8(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gcxVH86X(keys[i], item);
        if (cmp == 0)
        {
            keys.splice(i, 1);
            return true;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return false;
}
                                #endif

                                #ifndef DEF_add_Lh1Id3Vs6rg
                                #define DEF_add_Lh1Id3Vs6rg
inline void add_Lh1Id3Vs(fu_VEC<int>& a, fu::view<int> b)
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
            {
                y++;
            };
        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

static void PASS_borrowCheck_fir7IRou(s_SolvedNode& root, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Options& options, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    bool AAR = false;
    _current_fn_eachArg_FWD_FKaT5Zib(_current_fn, _scope, module, ctx, _helpers, _helpers_data, _here);
    bck_node_6Ft9cFgW(root, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    fu_VEC<int> consts {};
    fu_VEC<int> refs {};

    {
        int last = 0;
        _current_fn_eachArg_FWD_8wUdqkje(_current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, last, refs, consts);
    };
    if (!refs)
        return;
    else
    {
        s_Flow& flow = _current_fn.flow;
        flow.invalidates.clear();
        for (int i = 0; i < refs.size(); i++)
        {
            const int target = refs[i];
            if (consts)
            {
                grow_if_oob_eq5Lu6Hw(flow.invalidates, target) = consts;
            };
            fu_VEC<int> refs_1 { refs };
            rem_itJnJlI8(refs_1, target);
            if (refs_1)
            {
                add_Lh1Id3Vs(grow_if_oob_eq5Lu6Hw(flow.invalidates, target), refs_1);
            };
        };
        AAR = true;
        _current_fn.events = s_Events{};
        bck_node_6Ft9cFgW(root, _current_fn, module, _scope, ctx, _helpers, _helpers_data, _here, _current_fnort, AAR, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName, root);
    };
}

static fu_VEC<int> Lifetime_slotsUp2_AIBrnomJ(const s_Lifetime& lifetime, const int locals_start, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, const s_Scope& _scope, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    fu_VEC<s_Region> unwound = Lifetime_unwind_WuYtgzDU(s_Lifetime(lifetime), locals_start, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here).uni0n;
    /*MOV*/ fu_VEC<int> result {};
    for (int i = 0; i < unwound.size(); i++)
    {
        const s_Region& r = unwound[i];
        if ((r.index >= locals_start))
            result += int(r.index);

    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_each_ieeBPvckbj4
                                #define DEF_each_ieeBPvckbj4
inline void each_ieeBPvck(fu::view<int> a, const s_Target& _current_fnort, const s_Module& module, s_Scope& _scope)
{
    for (int i = 0; i < a.size(); i++)
    {
        const int index = a[i];
        s_Overload& o = GET_mut_5Ue5IxE1(nested_u2XpitD4(index, _current_fnort, module), _scope, module);
        if (!(o.flags & s_Flags_F_ARG))
            o.status |= s_SolverStatus_SS_HOIST;

    };
}
                                #endif

static void mcom_BlockReturns_CopyOrMoveDecision_zv6N6v3H(const s_Helpers& h, fu::view_mut<s_HelpersData> _helpers_data, const s_Target& _current_fnort, const s_Module& module, const s_Context& ctx, s_Scope& _scope, fu::view<s_Helpers> _helpers, const s_TokenIdx& _here)
{
    if (!is_ref_MvT8pzW6(_helpers_data[h.index].ret_actual))
        return;
    else if (_helpers_data[h.index].mask & s_HelpersMask_HM_Function)
    {
        /*MOV*/ s_Lifetime unwind = Lifetime_unwind_WuYtgzDU(s_Lifetime(_helpers_data[h.index].ret_actual.lifetime), 0, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here);
        if (Lifetime_vs_ZGGHszGT(unwind, _helpers_data[h.index].locals_start, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here) < 0)
        {
            _helpers_data.mutref(h.index).ret_actual.lifetime = static_cast<s_Lifetime&&>(unwind);
        }
        else
        {
            reportReturnType_YKElz9tS(h, clear_refs_MvT8pzW6(s_Type(_helpers_data[h.index].ret_actual)), bool{}, _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers);
        };
    }
    else
    {
        each_ieeBPvck(Lifetime_slotsUp2_AIBrnomJ(_helpers_data[h.index].ret_actual.lifetime, _helpers_data[h.index].locals_start, _current_fnort, module, ctx, _scope, _helpers, _helpers_data, _here), _current_fnort, module, _scope);
    };
}

static void mcom_node_AI3deVBn(s_SolvedNode& node, fu_VEC<s_HelpersData>& _helpers_data, const s_Target& _current_fnort, s_Module& module, const s_Context& ctx, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_CurrentFn& _current_fn, const s_Options& options, s_SolverNotes& _notes, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    const s_kind k = node.kind;
    s_Type t { node.type };
    if (k == s_kind_block)
    {
        if (node.helpers)
            mcom_BlockReturns_CopyOrMoveDecision_zv6N6v3H(node.helpers, _helpers_data, _current_fnort, module, ctx, _scope, _helpers, _here);

    };
    fu::view_mut<s_SolvedNode> items = node.items;
    for (int i = 0; i < items.size(); i++)
        mcom_node_AI3deVBn(items.mutref(i), _helpers_data, _current_fnort, module, ctx, _scope, _helpers, _here, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);

    _here = node.token;
    if (k == s_kind_call)
    {
        const s_Target& target = node.target;
        if (GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).kind != s_kind_field)
        {
            fu_VEC<s_Argument> host_args { EXT_onaILX8Q(target, module, _scope, ctx).args };
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_CTKcyM8g(items.mutref(i_1), s_Type(host_args[i_1].type), true, false, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);

        };
    }
    else if ((k == s_kind_block) || (k == s_kind_jump))
    {
        const s_Helpers h { node.helpers };
        if (_helpers_data[h.index].ret_actual && !is_void_ZFEUWUgI(_helpers_data[h.index].ret_actual) && !is_never_ZFEUWUgI(_helpers_data[h.index].ret_actual))
            maybeCopyOrMove_CTKcyM8g(last_sQklljcv(node.items), s_Type(_helpers_data[h.index].ret_actual), false, true, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);

    }
    else if (k == s_kind_letdef)
    {
        std::swap(GET_mut_5Ue5IxE1(node.target, _scope, module).solved, node);
        mcom_node_AI3deVBn(node, _helpers_data, _current_fnort, module, ctx, _scope, _helpers, _here, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
        std::swap(GET_mut_5Ue5IxE1(node.target, _scope, module).solved, node);
    }
    else if (k == s_kind_let)
    {
        if (node.items)
        {
            s_SolvedNode& init = node.items.mutref(LET_INIT);
            if (init)
                maybeCopyOrMove_CTKcyM8g(init, node.type, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);

        };
    }
    else if (k == s_kind_if)
    {
        if (!is_void_ZFEUWUgI(t))
        {
            maybeCopyOrMove_CTKcyM8g(items.mutref(1), t, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
            maybeCopyOrMove_CTKcyM8g(items.mutref(2), t, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
        };
    }
    else if (k == s_kind_or)
    {
        if (!(t == t_bool))
            for (int i_1 = 0; i_1 < items.size(); i_1++)
                maybeCopyOrMove_CTKcyM8g(items.mutref(i_1), t, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
;
    }
    else if (k == s_kind_arrlit)
    {
        s_Type t_1 = clear_sliceable_9gHYdovL(t, _here, ctx);
        for (int i_1 = 0; i_1 < items.size(); i_1++)
            maybeCopyOrMove_CTKcyM8g(items.mutref(i_1), t_1, false, false, _here, ctx, _helpers, _helpers_data, _scope, module, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);

    };
}

static void runAllPasses_t8PbjGd1(s_SolvedNode& node, s_TokenIdx& _here, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (SELF_TEST)
        test_node_Bpk9KB9y(node, "PASS.0 "_fu, _here, module, ctx, _helpers, _helpers_data, _scope);

    s_HelpersData* BL_2_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_2_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_2_v).pass = s_SolverPass_RelaxMut;
    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_8TxqwKMZ(node, node.type, RELAX_before_bck, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (SELF_TEST)
        test_node_Bpk9KB9y(node, "PASS.0.relax "_fu, _here, module, ctx, _helpers, _helpers_data, _scope);

    s_HelpersData* BL_4_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_4_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_4_v).pass = s_SolverPass_BorrowCheck;
    PASS_borrowCheck_fir7IRou(node, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort, options, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
    if (SELF_TEST)
        test_node_Bpk9KB9y(node, "PASS.1 "_fu, _here, module, ctx, _helpers, _helpers_data, _scope);

    s_HelpersData* BL_6_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_6_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_6_v).pass = s_SolverPass_MaybeCopyOrMove;
    mcom_node_AI3deVBn(node, _helpers_data, _current_fnort, module, ctx, _scope, _helpers, _here, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
    if (SELF_TEST)
        test_node_Bpk9KB9y(node, "PASS.2 "_fu, _here, module, ctx, _helpers, _helpers_data, _scope);

    s_HelpersData* BL_8_v;
    (__extension__ (
    {
        const s_Helpers& h = node.helpers;
        BL_8_v = &(_helpers_data.mutref(h.index));
    (void)0;}), *BL_8_v).pass = s_SolverPass_RelaxCopyResize;
    _current_fn.var_usage = fu_VEC<s_Type>{};
    propagateType_8TxqwKMZ(node, node.type, RELAX_all, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (SELF_TEST)
        test_node_Bpk9KB9y(node, "PASS.2.relax "_fu, _here, module, ctx, _helpers, _helpers_data, _scope);

}

static s_SolvedNode solveBlock_7a90i7rV(const s_Node& node, const s_Type& type, const int fnbody_of, const s_HelpersMask mask, const fu_STR& id, const int locals_start, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_Module& module, s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Warning>& _warnings, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    fu_VEC<s_Node> nodes = ((node.kind == s_kind_block) ? fu_VEC<s_Node>(node.items) : fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(node) } });
    const fu_STR& id_1 = (id ? id : ((node.kind == s_kind_block) ? node.value : (*(const fu_STR*)fu::NIL)));
    const s_ScopeMemo scope0 = Scope_snap_XX7UzHbd(_scope, _helpers);
    fu_DEFER(Scope_pop_KQTgazm7(_scope, scope0, _helpers));
    const int helpers_idx = _helpers.size();
    push_47mX1hUW(s_HelpersData { (fnbody_of ? s_Target { int(module.modid), int(fnbody_of) } : s_Target{}), s_SolverPass{}, fu_STR(id_1), s_HelpersMask(mask), int((fnbody_of ? fnbody_of : _current_fn.out.target.index)), (fnbody_of ? +1 : (locals_start ? int(locals_start) : GET_next_local_index_6CO4foiz(_current_fnort, _current_fn, _scope))), s_Type(type), s_Type{} }, _helpers, _helpers_data);
    const s_Helpers h { _helpers[helpers_idx] };
    if (fnbody_of && nodes)
    {
        last_7ULQODpQ(nodes) = s_Node { s_kind_return, s_DeclAsserts{}, s_ParseSyntax{}, s_Flags_F_IMPLICIT, fu_STR{}, ((last_lpa8XGDf(nodes).kind != s_kind_void) ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(last_lpa8XGDf(nodes)) } } : fu_VEC<s_Node>{}), s_TokenIdx(node.token) };
    };
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_uMJCZqge(nodes, t_void, type, !is_void_ZFEUWUgI(type), (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (!s_HelpersMask((mask & s_HelpersMask_HM_CanReturn)))
    {
        _helpers_data.mutref(h.index).ret_expect = s_Type{};
    };
    reportReturnType_YKElz9tS(h, (items ? last_l6T9uEqE(items).type : t_void), bool{}, _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers);
    if (_helpers_data[h.index].ret_actual)
    {
        const s_Type* _0;
        /*MOV*/ s_SolvedNode block = createBlock_7yOivmtL(s_Type((*(_0 = &(_helpers_data[h.index].ret_actual)) ? *_0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here))), static_cast<fu_VEC<s_SolvedNode>&&>(items), h, _here, _helpers, _helpers_data, _scope, module, ctx, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
        if (fnbody_of)
        {
            const s_SolverStatus status = GET_JhxATLIa(s_Target { int(module.modid), int(fnbody_of) }, _scope, module, ctx, _helpers, _helpers_data, _here).status;
            if (!s_SolverStatus((status & s_SolverStatus_SS_DIRTY)) && !currentFn_mustBecomeInline_hYMuSeJd(_current_fn))
                runAllPasses_t8PbjGd1(block, _here, module, ctx, _helpers, _helpers_data, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        };
        return /*NRVO*/ block;
    }
    else
        BUG_D9Hg55no("No ret_actual"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

}

                                #ifndef DEF_each_lSCPY9LBhXc
                                #define DEF_each_lSCPY9LBhXc
inline void each_lSCPY9LB(const s_BitSet& _, fu::view<s_SolvedNode> items, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, s_BitSet& hard_risk)
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
                    const s_SolvedNode& other = GET_JhxATLIa(items[index].target, _scope, module, ctx, _helpers, _helpers_data, _here).solved;
                    if (!TODO_FIX_isArray_MvT8pzW6(other.type))
                        add_sDUBjUzV(hard_risk, index);

                };
            };
        };
    };
}
                                #endif

                                #ifndef DEF_each_eE4Gn3l80k3
                                #define DEF_each_eE4Gn3l80k3
inline void each_eE4Gn3l8(fu::view<s_Region> a, const s_Target& _current_fnort, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Type& retval)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        if (!(Region_isArgPosition_RvC5USpz(r) || Region_isStatic_RvC5USpz(r)))
        {
            BUG_D9Hg55no(((("updateScope: Non-static/non-arg leaked:\n\t"_fu + qWHAT_wCuy3nxK(Region_GET_ZkX4IHEI(r, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + "\n\n\tIn retval lifetime:\n\t"_fu) + qWHAT_vlGX8XSa(retval.lifetime, _current_fnort, module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    };
}
                                #endif

static void lazySolveEnd_7R2yFqBO(const s_Target& t, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Options& options, s_SolverNotes& _notes, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    s_Overload& o = GET_mut_5Ue5IxE1(t, _scope, module);
    fu_VEC<int> reopen {};
    const int parent = EXT_onaILX8Q(t, module, _scope, ctx).local_of;
    if (o.status & s_SolverStatus_SS_UPDATED)
    {
        o.status &= s_SolverStatus(~s_SolverStatus_SS_UPDATED);
        fu_VEC<int> callers { EXT_onaILX8Q(t, module, _scope, ctx).callers };
        for (int i = 0; i < callers.size(); i++)
        { {
            int index = callers[i];
            for (; ; )
            {
                const s_Target t_1 = s_Target { int(module.modid), int(index) };
                s_Overload& o_1 = GET_mut_5Ue5IxE1(t_1, _scope, module);
                if (s_SolverStatus((o_1.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)))) != s_SolverStatus_SS_DID_START)
                    goto BL_3;
                else if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_FINALIZED)))
                {
                    o_1.status |= s_SolverStatus_SS_DIRTY;
                    goto BL_3;
                }
                else
                {
                    const int up = EXT_onaILX8Q(t_1, module, _scope, ctx).local_of;
                    if (up != parent)
                    {
                        if (up > parent)
                        {
                            index = up;
                            continue;
                        }
                        else
                            BUG_D9Hg55no("lazySolveEnd: about to climb up the wrong tree."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

                    }
                    else
                    {
                        makeNote_hsfuVyUh(((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeReopen : s_SolverNotes_N_FnReopen), options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
                        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)) | s_SolverStatus_SS_FINALIZED)));
                        reopen += int(index);
                        goto BL_3;
                    };
                };
            };
          } BL_3:;
        };
    };
    s_Overload& o_1 = GET_mut_5Ue5IxE1(t, _scope, module);
    if (!s_SolverStatus((o_1.status & s_SolverStatus_SS_DIRTY)))
    {
        o_1.status |= s_SolverStatus_SS_FINALIZED;
    }
    else if (o_1.status & s_SolverStatus_SS_FINALIZED)
        BUG_D9Hg55no("Stray SS_FINALIZED."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
    else
    {
        o_1.status &= s_SolverStatus(~s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_DIRTY)));
        makeNote_hsfuVyUh(((o_1.kind == s_kind_type) ? s_SolverNotes_N_TypeResolve : s_SolverNotes_N_FnResolve), options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
    };
    for (int i = 0; i < reopen.size(); i++)
    {
        const s_Target t_1 = s_Target { int(module.modid), int(reopen[i]) };
        lazySolveStart_vCoSTAS3(t_1, s_Overload(GET_JhxATLIa(t_1, _scope, module, ctx, _helpers, _helpers_data, _here)), _scope, module, _helpers, _helpers_data, ctx, _here, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    };
}

static s_Target doTrySpecialize_CuYaoMfr(const s_Target& into, const s_Target& overloadIdx, fu::view<s_SolvedNode> args_in, const fu_STR& mangle, fu::view<int> reorder, const bool use_reorder, fu::view<fu_VEC<s_Target>> conversions, const int REST_START, const s_Type& REST_TYPE, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
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
            args.mutref(i) = GET_JhxATLIa(last_E3kAR4gV(c), _scope, module, ctx, _helpers, _helpers_data, _here).type;

    };
    if (REST_TYPE)
        args.mutref(REST_START) = REST_TYPE;

    const s_Target SPECFAIL_RentrySafety = s_Target { 2147483647, 0 };
    const s_Target& original = (overloadIdx ? overloadIdx : into ? into : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
    s_Template tEmplate { EXT_onaILX8Q(original, module, _scope, ctx).tEmplate };
    /*MOV*/ const s_TokenIdx here0 { _here };
    fu_DEFER(_here = s_TokenIdx(here0));
    _here = EXT_onaILX8Q(original, module, _scope, ctx).tEmplate.node.token;
    /*MOV*/ int parent_idx = EXT_onaILX8Q(original, module, _scope, ctx).local_of;
    for (int i_1 = 0; i_1 < args.size(); i_1++)
    {
        const s_Type& arg_t = args[i_1];
        if (type_isAddrOfFn_ZFEUWUgI(arg_t))
            unpackAddrOfFn_OutF1vc3(arg_t.vtype.canon, module, _scope, ctx, parent_idx);

    };
    const bool isInline = !!(tEmplate.node.flags & s_Flags_F_INLINE);
    fu_VEC<fu_STR> mangles {};
    s_Target currentSpec { SPECFAIL_RentrySafety };
    if (!into && !isInline)
    {
        const bool allowReplaceNonSpecfails {};
        if (add_wAuMmv6B(mangles, mangle))
        {
            /*MOV*/ const s_Target preexisting { get_Gg123who(_specs, mangle) };
            if (preexisting)
            {
                rem_LjXbxyz0(mangles, mangle);
                resetSpec_ef4IMBaP(preexisting, allowReplaceNonSpecfails, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                return /*NRVO*/ preexisting;
            }
            else
            {
                setSpec_RZ5e2YtJ(mangle, currentSpec, true, bool{}, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
            };
        };
    };
    /*MOV*/ s_Target target {};

    {
        /*MOV*/ const s_ScopeMemo scope0 = Scope_snap_XX7UzHbd(_scope, _helpers);
        /*MOV*/ s_ScopeSkipMemos ss0 { _ss };
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            Scope_pop_KQTgazm7(_scope, scope0, _helpers);
            _ss = static_cast<s_ScopeSkipMemos&&>(ss0);
            _helpers_data.shrink(helpers_data0);
        });
        ScopeSkip_setup_D0SMezz3(tEmplate, scope0, bool{}, _root_scope, _ss, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn);
        fu_VEC<s_Node> items { tEmplate.node.items };
        s_Node& n_fn = tEmplate.node;
        if (n_fn.kind == s_kind_fn)
        {
            fu_STR error {};
            bool remangle = false;
            s_Map_087aZo54YWi typeParams {};
            if (!into)
            {
                const s_kind kind = tEmplate.node.kind;
                const int numArgs = ((kind == s_kind_fn) ? (items.size() + FN_ARGS_BACK) : fail_F42afdck(x7E_YP7BiSZZ("TODO numArgs for template:"_fu, str_x2XZ9C2m(kind)), _helpers, _helpers_data, _scope, module, ctx, _here));
                fu_VEC<int> retypeIndices {};
                for (int pass_retype = 0; (pass_retype == 0) || ((pass_retype == 1) && retypeIndices); pass_retype++)
                {
                    for (int i_2 = 0; i_2 < numArgs; i_2++)
                    {
                        if (pass_retype)
                        {
                            if (!has_8IyOUe0U(retypeIndices, i_2))
                                continue;

                        };
                        s_Type inType { ((args.size() > i_2) ? args[i_2] : (*(const s_Type*)fu::NIL)) };
                        const s_SolvedNode& inValue = (reorder ? ((reorder.size() > i_2) && (reorder[i_2] >= 0) ? args_in[reorder[i_2]] : (*(const s_SolvedNode*)fu::NIL)) : ((args_in.size() > i_2) ? args_in[i_2] : (*(const s_SolvedNode*)fu::NIL)));
                        const s_Node* _0;
                        const s_Node& argNode = (*(_0 = &(items[i_2])) ? *_0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                        const s_Node& annot = argNode.items[LET_TYPE];
                        const s_Argument& host_arg = EXT_onaILX8Q(original, module, _scope, ctx).args[i_2];
                        const s_SolvedNode& inValue_1 = (inValue ? inValue : ((void)(inType = host_arg.dEfault.type), host_arg.dEfault));
                        if (couldRetype_a93bitxU(inValue_1))
                        {
                            const s_Type& paramType = ((annot.kind == s_kind_typeparam) ? ref_55QAgpmO(typeParams, annot.value).matched : ((annot.kind == s_kind_call) && !annot.items ? Scope_lookupType_sh6YFYka(annot, _helpers, _helpers_data, _scope, module, ctx, _here, _ss) : (*(const s_Type*)fu::NIL)));
                            if (paramType)
                            {
                                /*MOV*/ s_Type retype = tryRetyping_dostIVUx(inValue_1, paramType, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
                                if (retype && (retype.vtype.canon != inType.vtype.canon))
                                {
                                    inType = static_cast<s_Type&&>(retype);
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
                        if (argNode.kind == s_kind_let)
                        {
                            if (inType)
                            {
                                const s_Type& exactType = host_arg.type;
                                if (exactType)
                                {
                                    if (args.size() > i_2)
                                        args.mutref(i_2) = exactType;

                                    continue;
                                }
                                else
                                {
                                    const fu_STR& argName = (argNode.value ? argNode.value : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                                    s_TypeParam& argName_typeParam = ref_55QAgpmO(typeParams, argName);
                                    inType = add_ref_8kJD1Pzg(s_Type(inType), Lifetime_temporary_8nlJDPX0(), _here, ctx);
                                    (!argName_typeParam ? argName_typeParam : fail_F42afdck((("Type param name collision with argument "_fu + qID_ThvlUeXJ(argName)) + "."_fu), _helpers, _helpers_data, _scope, module, ctx, _here)).matched = inType;
                                    if (annot)
                                    {
                                        const bool argOk = trySolveTypeParams_HwBhlKqE(annot, s_Type(inType), typeParams, _here, ctx, _helpers, _helpers_data, _scope, module, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                                        if (!error && !argOk)
                                            error = ((("Cannot solve argument "_fu + qID_ThvlUeXJ(argName)) + " pattern for "_fu) + humanizeType_PJ01PlxR(inType, module, ctx));

                                        if (error && !remangle)
                                            break;

                                    };
                                };
                            };
                        }
                        else
                        {
                            BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                        };
                    };
                };
                if (remangle && !isInline)
                {
                    const bool allowReplaceNonSpecfails {};
                    int _1 {};
                    const int start = ((_1 = (find_8ObANk7r(mangle, ' ') + 1)) ? _1 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                    fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArguments_N8Bq3MPM(args, _here, ctx));
                    if (add_wAuMmv6B(mangles, mangle_1))
                    {
                        /*MOV*/ const s_Target preexisting { get_Gg123who(_specs, mangle_1) };
                        if (preexisting)
                        {
                            rem_LjXbxyz0(mangles, mangle_1);
                            resetSpec_ef4IMBaP(preexisting, allowReplaceNonSpecfails, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                            return /*NRVO*/ preexisting;
                        }
                        else
                        {
                            setSpec_RZ5e2YtJ(mangle_1, currentSpec, true, bool{}, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                        };
                    };
                };
                if (error)
                    return SPECFAIL_jm3uqQdG(error, _spec_errors, SPECFAIL_RentrySafety, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                else
                {
                    const s_Node* _2;
                    const s_Node& body = (*(_2 = &(items[(items.size() + FN_BODY_BACK)])) ? *_2 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                    if (body.kind == s_kind_pattern)
                    {
                        s_Map_087aZo54YWi undo { typeParams };
                        fu_VEC<s_Node> branches { body.items };
                        bool did_match = false;
                        for (int i_2 = 0; i_2 < branches.size(); i_2++)
                        {
                            const s_Node& cond = branches[i_2].items[0];
                            if (cond && !evalTypePattern_z4KdfH2s(cond, typeParams, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items))
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
                                    sig.mutref((sig.size() + FN_BODY_BACK)) = (n_body ? n_body : BUG_D9Hg55no("doTrySpec: no case/body."_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
                                };
                                did_match = true;
                                break;
                            };
                        };
                        if (!did_match)
                            return SPECFAIL_jm3uqQdG("No body pattern matched."_fu, _spec_errors, SPECFAIL_RentrySafety, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);

                    };
                    const s_Node& n_body = n_fn.items[(n_fn.items.size() + FN_BODY_BACK)];
                    if (isNativeBody_d9j7ccED(n_body))
                    {
                        for (int i_2 = 0; i_2 < numArgs; i_2++)
                        {
                            const s_Node* _3;
                            const s_Node& argNode = (*(_3 = &(items[i_2])) ? *_3 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                            fu::view<char> id = argNode.value;
                            if_ref_aytsKpbr(typeParams, id);
                        };
                    };
                };
            };
            target = (into ? s_Target(into) : Scope_create_v4rjZGCu(_scope, s_kind___no_kind_yet, (*(const fu_STR*)fu::NIL), (*(const s_Type*)fu::NIL), s_Flags{}, s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)), 0, module));
            EXT_mut_9B5b5lCK(target, module, _scope).local_of = int(parent_idx);
            fu_VEC<s_ScopeItem> extra_items { (into ? EXT_onaILX8Q(original, module, _scope, ctx).extra_items : (EXT_mut_9B5b5lCK(target, module, _scope).extra_items = intoScopeItems_8awNp2J9(typeParams, module, ctx, _scope, _helpers, _helpers_data, _here))) };
            const s_Target& _current_fnort_1 = target;

            {
                s_Extended& o = EXT_mut_9B5b5lCK(target, module, _scope);
                if (o.revision++ > 0)
                {
                    o.locals.clear();
                    if (_warnings.size() > target.index)
                    {
                        _warnings.mutref(target.index) = s_Warning{};
                    };
                };
            };
            /*MOV*/ fu_VEC<s_SolvedNode> TODO_FIX_convert_args0 { TODO_FIX_convert_args };
            TODO_FIX_convert_args.mutref(0) = SolvedNode_ltxQ8cxX(s_kind___convert, s_Type{}, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
            fu_DEFER(TODO_FIX_convert_args = static_cast<fu_VEC<s_SolvedNode>&&>(TODO_FIX_convert_args0));
            s_CurrentFn out = s_CurrentFn { solved_4DB11VJb(n_fn, X_addrofTarget_p9ouzOH1(target), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, _here), s_ScopeMemo(scope0), s_Flow{}, s_Effects{}, s_Events{}, 0, ((n_fn.flags & s_Flags_F_TEMPLATE) ? 1 : 0), fu_VEC<s_Type>{}, s_Moves{} };
            /*MOV*/ const s_ScopeMemo root_scope0 { _root_scope };
            if (!root_scope0)
                _root_scope = s_ScopeMemo(scope0);

            std::swap(_current_fn, out);
            fu_DEFER(
            {
                std::swap(_current_fn, out);
                _root_scope = s_ScopeMemo(root_scope0);
            });
            fu::view<s_Node> inItems = n_fn.items;
            outItems_hrgLfQ8y(_current_fn).resize(inItems.size());
            _scope.items += extra_items;
            const bool isFirst = !GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).solved;
            const s_Flags isTemplate = (tEmplate.node.flags & s_Flags_F_TEMPLATE);
            const bool isSpec = (isTemplate && (!into || !isFirst));
            const bool isUnspec = (isTemplate && !isSpec);
            const s_DeclAsserts isPure = s_DeclAsserts((tEmplate.node.asserts & s_DeclAsserts_A_PURE));
            const s_DeclAsserts isNovec = s_DeclAsserts((tEmplate.node.asserts & s_DeclAsserts_A_NOVEC));
            const s_DeclAsserts isPureCtx = s_DeclAsserts((tEmplate.node.asserts & s_DeclAsserts_A_PURE_CTX));
            const s_DeclAsserts isNoFlow = s_DeclAsserts((tEmplate.node.asserts & s_DeclAsserts_A_NOFLOW));
            for (int i_2 = 0; i_2 < (inItems.size() + FN_ARGS_BACK); i_2++)
            {
                const s_Node& n_arg = inItems[i_2];
                if (isUnspec && ((n_arg.flags & s_Flags_F_TEMPLATE) || !n_arg.items[LET_TYPE]))
                {
                    s_SolvedNode init = (n_arg.items[LET_INIT] ? solveNode_f7LszhQF(n_arg.items[LET_INIT], (*(const s_Type*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort_1, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
                    outItems_hrgLfQ8y(_current_fn).mutref(i_2) = SolvedNode_ltxQ8cxX(s_kind_let, s_Type{}, n_arg.flags, n_arg.value, fu_VEC<s_SolvedNode> { fu::slate<2, s_SolvedNode> { s_SolvedNode{}, s_SolvedNode(init) } }, s_Target{}, s_Helpers{}, _here);
                    continue;
                }
                else
                {
                    s_Type specType = (isSpec ? tryGetArgSpecType_i62gu0AF(n_arg.value, extra_items, _scope, module, ctx, _helpers, _helpers_data, _here) : s_Type{});
                    /*MOV*/ s_SolvedNode arg = solveLet_S3XwQiJe(n_arg, specType, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort_1, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                    outItems_hrgLfQ8y(_current_fn).mutref(i_2) = static_cast<s_SolvedNode&&>(arg);
                };
            };
            const s_Node& n_ret = (!isUnspec ? inItems[(inItems.size() + FN_RET_BACK)] : (*(const s_Node*)fu::NIL));
            const s_Node& n_body = inItems[(inItems.size() + FN_BODY_BACK)];
            if (n_body)
            {
                const bool isNative = isNativeBody_d9j7ccED(n_body);
                /*MOV*/ s_Type ret_expect = (n_ret ? evalTypeAnnot_Rs0Ayhy7(n_ret, (*(const s_Map_087aZo54YWi*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort_1, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_Type{});
                /*MOV*/ s_Type ret_seed { (n_ret ? (ret_expect ? ret_expect : BUG_D9Hg55no(("falsy ret_expect: "_fu + n_fn.value), _helpers, _helpers_data, _scope, module, ctx, _here)) : t_never) };
                if (ret_seed.lifetime)
                {
                    ret_seed.lifetime = (isNative ? Lifetime_fromNative_QybczBIe(inItems, fu::get_view(_current_fn.out.items, 0, (_current_fn.out.items.size() + FN_ARGS_BACK)), ret_seed, _helpers, _helpers_data, _scope, module, ctx, _here) : Lifetime_static_8nlJDPX0());
                };
                if (isFirst)
                {

                    { {
                        const s_CurrentFn& out_1 = _current_fn;
                        s_Type retval { (isInline ? ret_expect : ret_seed) };
                        const bool maybeLast = false;
                        _here = (n_fn.token ? n_fn.token : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                        if (GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).status & s_SolverStatus_SS_DIRTY)
                        {
                            GET_mut_5Ue5IxE1(target, _scope, module).status |= s_SolverStatus_SS_UPDATED;
                            goto BL_71;
                        }
                        else
                        {
                            fu::view<s_SolvedNode> items_1 = out_1.out.items;
                            const int N = (items_1.size() + FN_ARGS_BACK);
                            /*MOV*/ int min = 0;
                            /*MOV*/ int max = 0;
                            const s_NativeHacks NativeHacks = (isNative ? NativeHacks_QYk3NQTZ(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).name) : s_NativeHacks{});
                            fu_VEC<s_Argument> args_1 {};
                            for (int i_3 = 0; i_3 < N; i_3++)
                            {
                                const s_SolvedNode& argNode = items_1[i_3];
                                if (!(argNode.kind == s_kind_letdef))
                                {
                                    if (argNode.target)
                                        BUG_D9Hg55no(("Argnode is not letdef, but has a target: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(argNode.target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

                                };
                                const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_JhxATLIa(argNode.target, _scope, module, ctx, _helpers, _helpers_data, _here).solved : argNode);
                                if (argNode_1.kind == s_kind_let)
                                {
                                    fu_STR name { argNode_1.value };
                                    /*MOV*/ fu_STR autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_JxU8qELp(name, _helpers, _helpers_data, _scope, module, ctx, _here) : fu_STR{});
                                    const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                                    const s_Target& argTarget = argNode_1.target;
                                    const bool written_via = (!isUnspec && is_mutref_9gHYdovL(argNode_1.type, _here, ctx) && (isNative || has_VM1JQhgd(out_1.events.ever_written, argTarget.index)));
                                    /*MOV*/ s_BitSet soft_risk {};
                                    /*MOV*/ s_BitSet hard_risk {};
                                    if (written_via)
                                    {
                                        if (!isNative)
                                        {
                                            ArgsAtRisk_list_rTp4tlti(soft_risk, out_1.flow, i_3, out_1.flow.at_soft_risk);
                                            ArgsAtRisk_list_rTp4tlti(hard_risk, out_1.flow, i_3, out_1.flow.at_hard_risk);
                                            if (TODO_FIX_isArray_MvT8pzW6(argNode_1.type))
                                            {
                                                s_BitSet soft { soft_risk };
                                                and_not_assign_GKz57Mnx(soft, hard_risk);
                                                each_l9PvWpoE(soft, items_1, _scope, module, ctx, _helpers, _helpers_data, _here, hard_risk);
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
                                        fail_F42afdck(((((qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here) + " is not pure, writes to argument "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(name, module, _scope, ctx, _helpers, _helpers_data, _here))) + ":\n"_fu) + qSTACK_Y8ZauWfH(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _current_fnort_1, module, ctx, _scope, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
                                    }
                                    else if (isPureCtx && written_via && isImplicit)
                                    {
                                        fail_F42afdck(((((qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here) + " is not purectx, writes to implicit argument "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(name, module, _scope, ctx, _helpers, _helpers_data, _here))) + ":\n"_fu) + qSTACK_Y8ZauWfH(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _current_fnort_1, module, ctx, _scope, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
                                    }
                                    else if (maybeLast && isNovec && !is_trivial_3ZVvGB0M(argNode_1.type, module, ctx) && (is_rx_copy_MvT8pzW6(argNode_1.type) || is_rx_resize_MvT8pzW6(argNode_1.type)))
                                        fail_F42afdck(((((qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here) + " is not novec, argument "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(name, module, _scope, ctx, _helpers, _helpers_data, _here))) + " is "_fu) + humanizeType_PJ01PlxR(argNode_1.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
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

                                            if (is_ref_MvT8pzW6(retval) && is_ref_MvT8pzW6(argNode_1.type))
                                            {
                                                const s_Region region = Region_fromLocal_BaKYka79(argTarget.index);
                                                const int idx = find_Ezy4yCLH(retval.lifetime.uni0n, region);
                                                if ((idx >= 0))
                                                {
                                                    retval.lifetime.uni0n.splice(idx, 1);
                                                    add_lCfOdugH(retval.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i_3));
                                                };
                                            };
                                        }
                                        else
                                            BUG_D9Hg55no((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

                                    };
                                }
                                else
                                {
                                    BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                                };
                            };
                            s_Overload overload { GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here) };
                            s_Extended& ext = EXT_mut_9B5b5lCK(target, module, _scope);
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
                            ext.min = int(min);
                            ext.max = int(max);
                            ext.args = args_1;
                            s_Overload& overload_1 = GET_mut_5Ue5IxE1(target, _scope, module);
                            overload_1.type = retval;
                            if (isInline)
                                goto BL_71;
                            else if (retval)
                            {
                                if (is_ref_MvT8pzW6(retval))
                                {
                                    Lifetime_test_UDGeBh5H(retval.lifetime, bool{}, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort_1);
                                };
                                each_tBovNl1v(retval.lifetime.uni0n, _current_fnort_1, module, _scope, ctx, _helpers, _helpers_data, _here, retval);
                                overload_1.flags = out_1.out.flags;

                                {
                                    const bool rtl = ((args_1.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR) && hasAssignment_3qRoPKdA(overload_1.name));
                                    isRTL_set_kZSXE876(overload_1, rtl);
                                };
                                if (change)
                                    overload_1.status |= s_SolverStatus_SS_UPDATED;

                                if (!isNative && !isInline && !isUnspec)
                                {
                                    const int sourceModid = tEmplate.node.token.modid;
                                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_hDYH9Tpk(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                                    fu_STR sig = (((EXT_onaILX8Q(target, module, _scope, ctx).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1) + mangleArguments_t7Hsvamv(EXT_onaILX8Q(target, module, _scope, ctx).args, _here, ctx));
                                    fu_STR _5 {};
                                    overload_1.sighash = (sig ? ((_5 = hash62_EhsXBDGJ(sig, 11)) ? static_cast<fu_STR&&>(_5) : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)) : fu_STR{});
                                };
                                solved_set_1uqFwxph(target, (!isUnspec ? out_1 : (*(const s_CurrentFn*)fu::NIL)).out, _scope, module);
                                if (!into && !isInline)
                                {

                                    {
                                        fu::view<s_Argument> args_2 = EXT_onaILX8Q(target, module, _scope, ctx).args;
                                        int _6 {};
                                        const int start = ((_6 = (find_8ObANk7r(mangle, ' ') + 1)) ? _6 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                                        fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArguments_t7Hsvamv(args_2, _here, ctx));
                                        if (add_wAuMmv6B(mangles, mangle_1))
                                        {
                                            /*MOV*/ const s_Target preexisting { get_Gg123who(_specs, mangle_1) };
                                            if (preexisting)
                                            {
                                                rem_LjXbxyz0(mangles, mangle_1);
                                                resetSpec_ef4IMBaP(preexisting, maybeLast, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                                                return /*NRVO*/ preexisting;
                                            }
                                            else
                                            {
                                                setSpec_RZ5e2YtJ(mangle_1, currentSpec, true, bool{}, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                                            };
                                        };
                                    };
                                    resetSpec_ef4IMBaP(target, bool{}, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                                };
                            }
                            else
                                BUG_D9Hg55no("updateScope: no return type."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

                        };
                      } BL_71:;
                    };
                    const fu_STR& name = (n_fn.value ? n_fn.value : fail_F42afdck("TODO anonymous fns"_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
                    s_Overload& overload = GET_mut_5Ue5IxE1(target, _scope, module);
                    fu_STR _7 {};
                    overload.name = ((_7 = HACK_nativeNameParts_OkunXEhT(isNative, n_body)) ? static_cast<fu_STR&&>(_7) : name ? fu_STR(name) : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                    overload.kind = (isUnspec ? s_kind_template : (isNative ? s_kind___native : (isInline ? s_kind_inline : s_kind_fn)));
                    s_Extended& ext = EXT_mut_9B5b5lCK(target, module, _scope);
                    ext.tEmplate = tEmplate;
                    ext.spec_of = overloadIdx;
                };
                bool didSetBody = false;

                { {
                    if (!isInline && !isUnspec)
                    { {
                        /*MOV*/ s_Type retval = static_cast<s_Type&&>(ret_seed);
                        if (!isNative)
                        {
                            /*MOV*/ s_SolvedNode s_body = solveBlock_7a90i7rV(n_body, ret_expect, target.index, s_HelpersMask((s_HelpersMask((s_HelpersMask((s_HelpersMask_HM_Function | s_HelpersMask_HM_CanReturn)) | s_HelpersMask_HM_LabelUsed)) | ((n_fn.flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{}))), n_fn.value, 0, _scope, _helpers, module, _current_fn, _current_fnort_1, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                            fu_STR mustBecomeInlineBecause = currentFn_mustBecomeInline_hYMuSeJd(_current_fn);
                            if (mustBecomeInlineBecause)
                            {
                                if (isFirst)
                                {
                                    if (isNoFlow)
                                        fail_F42afdck(("Function is not noflow: "_fu + qBAD_ThvlUeXJ(mustBecomeInlineBecause)), _helpers, _helpers_data, _scope, module, ctx, _here);
                                    else
                                    {
                                        s_Overload& o = GET_mut_5Ue5IxE1(target, _scope, module);
                                        o.kind = s_kind_inline;
                                        o.type = static_cast<s_Type&&>(ret_expect);
                                        goto BL_114;
                                    };
                                }
                                else
                                    fail_F42afdck("Function wants to become inline on after first solve."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

                            }
                            else
                            {
                                const s_HelpersData* BL_123_v;
                                retval = (__extension__ (
                                {
                                    const s_Helpers& h = s_body.helpers;
                                    BL_123_v = &(_helpers_data[h.index]);
                                (void)0;}), *BL_123_v).ret_actual;
                                checkAssignable_I8obPA2D(retval, s_body.type, "reval after runAllPasses"_fu, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), bool{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                                const int idx_body = (outItems_hrgLfQ8y(_current_fn).size() + FN_BODY_BACK);
                                outItems_hrgLfQ8y(_current_fn).mutref(idx_body) = static_cast<s_SolvedNode&&>((s_body ? s_body : BUG_D9Hg55no("falsy body"_fu, _helpers, _helpers_data, _scope, module, ctx, _here)));
                                didSetBody = true;
                            };
                        };
                        const s_CurrentFn& out_1 = _current_fn;
                        s_Type retval_1 = static_cast<s_Type&&>(retval);
                        const bool maybeLast = true;
                        _here = (n_fn.token ? n_fn.token : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                        if (GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).status & s_SolverStatus_SS_DIRTY)
                        {
                            GET_mut_5Ue5IxE1(target, _scope, module).status |= s_SolverStatus_SS_UPDATED;
                            goto BL_115;
                        }
                        else
                        {
                            fu::view<s_SolvedNode> items_1 = out_1.out.items;
                            const int N = (items_1.size() + FN_ARGS_BACK);
                            /*MOV*/ int min = 0;
                            /*MOV*/ int max = 0;
                            const s_NativeHacks NativeHacks = (isNative ? NativeHacks_QYk3NQTZ(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).name) : s_NativeHacks{});
                            fu_VEC<s_Argument> args_1 {};
                            for (int i_3 = 0; i_3 < N; i_3++)
                            {
                                const s_SolvedNode& argNode = items_1[i_3];
                                if (!(argNode.kind == s_kind_letdef))
                                {
                                    if (argNode.target)
                                        BUG_D9Hg55no(("Argnode is not letdef, but has a target: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(argNode.target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

                                };
                                const s_SolvedNode& argNode_1 = ((argNode.kind == s_kind_letdef) ? GET_JhxATLIa(argNode.target, _scope, module, ctx, _helpers, _helpers_data, _here).solved : argNode);
                                if (argNode_1.kind == s_kind_let)
                                {
                                    fu_STR name { argNode_1.value };
                                    /*MOV*/ fu_STR autocall = ((argNode_1.flags & s_Flags_F_COMPOUND_ID) ? CompoundArgID_outerSplice_JxU8qELp(name, _helpers, _helpers_data, _scope, module, ctx, _here) : fu_STR{});
                                    const bool isImplicit = !!(argNode_1.flags & s_Flags_F_IMPLICIT);
                                    const s_Target& argTarget = argNode_1.target;
                                    const bool written_via = (!isUnspec && is_mutref_9gHYdovL(argNode_1.type, _here, ctx) && (isNative || has_VM1JQhgd(out_1.events.ever_written, argTarget.index)));
                                    /*MOV*/ s_BitSet soft_risk {};
                                    /*MOV*/ s_BitSet hard_risk {};
                                    if (written_via)
                                    {
                                        if (!isNative)
                                        {
                                            ArgsAtRisk_list_rTp4tlti(soft_risk, out_1.flow, i_3, out_1.flow.at_soft_risk);
                                            ArgsAtRisk_list_rTp4tlti(hard_risk, out_1.flow, i_3, out_1.flow.at_hard_risk);
                                            if (TODO_FIX_isArray_MvT8pzW6(argNode_1.type))
                                            {
                                                s_BitSet soft { soft_risk };
                                                and_not_assign_GKz57Mnx(soft, hard_risk);
                                                each_lSCPY9LB(soft, items_1, _scope, module, ctx, _helpers, _helpers_data, _here, hard_risk);
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
                                        fail_F42afdck(((((qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here) + " is not pure, writes to argument "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(name, module, _scope, ctx, _helpers, _helpers_data, _here))) + ":\n"_fu) + qSTACK_Y8ZauWfH(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _current_fnort_1, module, ctx, _scope, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
                                    }
                                    else if (isPureCtx && written_via && isImplicit)
                                    {
                                        fail_F42afdck(((((qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here) + " is not purectx, writes to implicit argument "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(name, module, _scope, ctx, _helpers, _helpers_data, _here))) + ":\n"_fu) + qSTACK_Y8ZauWfH(target, out_1.out, Region_fromLocal_BaKYka79(argTarget.index), fu::view<s_Target>{}, _current_fnort_1, module, ctx, _scope, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
                                    }
                                    else if (maybeLast && isNovec && !is_trivial_3ZVvGB0M(argNode_1.type, module, ctx) && (is_rx_copy_MvT8pzW6(argNode_1.type) || is_rx_resize_MvT8pzW6(argNode_1.type)))
                                        fail_F42afdck(((((qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here) + " is not novec, argument "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(name, module, _scope, ctx, _helpers, _helpers_data, _here))) + " is "_fu) + humanizeType_PJ01PlxR(argNode_1.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
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

                                            if (is_ref_MvT8pzW6(retval_1) && is_ref_MvT8pzW6(argNode_1.type))
                                            {
                                                const s_Region region = Region_fromLocal_BaKYka79(argTarget.index);
                                                const int idx = find_Ezy4yCLH(retval_1.lifetime.uni0n, region);
                                                if ((idx >= 0))
                                                {
                                                    retval_1.lifetime.uni0n.splice(idx, 1);
                                                    add_lCfOdugH(retval_1.lifetime.uni0n, Region_fromArgPosition_BaKYka79(i_3));
                                                };
                                            };
                                        }
                                        else
                                            BUG_D9Hg55no((("updateScope: Unexpected untyped argument: `"_fu + name) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

                                    };
                                }
                                else
                                {
                                    BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                                };
                            };
                            s_Overload overload { GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here) };
                            s_Extended& ext = EXT_mut_9B5b5lCK(target, module, _scope);
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
                            ext.min = int(min);
                            ext.max = int(max);
                            ext.args = args_1;
                            s_Overload& overload_1 = GET_mut_5Ue5IxE1(target, _scope, module);
                            overload_1.type = retval_1;
                            if (isInline)
                                goto BL_115;
                            else if (retval_1)
                            {
                                if (is_ref_MvT8pzW6(retval_1))
                                {
                                    Lifetime_test_UDGeBh5H(retval_1.lifetime, bool{}, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort_1);
                                };
                                each_eE4Gn3l8(retval_1.lifetime.uni0n, _current_fnort_1, module, _scope, ctx, _helpers, _helpers_data, _here, retval_1);
                                overload_1.flags = out_1.out.flags;

                                {
                                    const bool rtl = ((args_1.size() == 2) && (overload_1.flags & s_Flags_F_OPERATOR) && hasAssignment_3qRoPKdA(overload_1.name));
                                    isRTL_set_kZSXE876(overload_1, rtl);
                                };
                                if (change)
                                    overload_1.status |= s_SolverStatus_SS_UPDATED;

                                if (!isNative && !isInline && !isUnspec)
                                {
                                    const int sourceModid = tEmplate.node.token.modid;
                                    fu_STR shortModuleName_1 = ((sourceModid != module.modid) ? (sourceModid && module.modid ? getShortModuleName_hDYH9Tpk(ctx.modules[sourceModid].fname) : fu_STR{}) : fu_STR(shortModuleName));
                                    fu_STR sig = (((EXT_onaILX8Q(target, module, _scope, ctx).local_of ? fu::i64dec(target.index) : fu_STR{}) + shortModuleName_1) + mangleArguments_t7Hsvamv(EXT_onaILX8Q(target, module, _scope, ctx).args, _here, ctx));
                                    fu_STR _9 {};
                                    overload_1.sighash = (sig ? ((_9 = hash62_EhsXBDGJ(sig, 11)) ? static_cast<fu_STR&&>(_9) : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)) : fu_STR{});
                                };
                                solved_set_1uqFwxph(target, (!isUnspec ? out_1 : (*(const s_CurrentFn*)fu::NIL)).out, _scope, module);
                                if (!into && !isInline)
                                {

                                    {
                                        fu::view<s_Argument> args_2 = EXT_onaILX8Q(target, module, _scope, ctx).args;
                                        int _10 {};
                                        const int start = ((_10 = (find_8ObANk7r(mangle, ' ') + 1)) ? _10 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
                                        fu_STR mangle_1 = (fu::slice(mangle, 0, start) + mangleArguments_t7Hsvamv(args_2, _here, ctx));
                                        if (add_wAuMmv6B(mangles, mangle_1))
                                        {
                                            /*MOV*/ const s_Target preexisting { get_Gg123who(_specs, mangle_1) };
                                            if (preexisting)
                                            {
                                                rem_LjXbxyz0(mangles, mangle_1);
                                                resetSpec_ef4IMBaP(preexisting, maybeLast, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                                                return /*NRVO*/ preexisting;
                                            }
                                            else
                                            {
                                                setSpec_RZ5e2YtJ(mangle_1, currentSpec, true, bool{}, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                                            };
                                        };
                                    };
                                    resetSpec_ef4IMBaP(target, bool{}, currentSpec, mangles, isInline, _helpers, _helpers_data, _scope, module, ctx, _here, _specs);
                                };
                            }
                            else
                                BUG_D9Hg55no("updateScope: no return type."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

                        };
                      } BL_115:;
                    };
                  } BL_114:;
                };
                if (!didSetBody)
                {
                    const s_Overload& o = GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here);
                    if (!(o.kind != s_kind_fn))
                        BUG_D9Hg55no(((("did not set body on "_fu + qWHAT_wCuy3nxK(o, module, _scope, ctx, _helpers, _helpers_data, _here)) + ": "_fu) + humanizeType_PJ01PlxR(o.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);

                };
            }
            else
                BUG_D9Hg55no("solveFn: no body."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        }
        else
            BUG_D9Hg55no("n_fn not a `fn`."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    };
    lazySolveEnd_7R2yFqBO(target, _scope, module, ctx, _helpers, _helpers_data, _here, options, _notes, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, shortModuleName, _field_items);
    return /*NRVO*/ target;
}

static bool lazySolveStart_vCoSTAS3(const s_Target& target, const s_Overload& overload, s_Scope& _scope, s_Module& module, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, const s_Context& ctx, s_TokenIdx& _here, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (s_SolverStatus((overload.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY)
        return false;
    else
    {

        {
            s_Overload& o = GET_mut_5Ue5IxE1(target, _scope, module);
            if (o.status & s_SolverStatus((s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_DID_START)) | s_SolverStatus_SS_DIRTY)))
                BUG_D9Hg55no(x7E_YP7BiSZZ("SS_DID_START: non-zero solver status: "_fu, str_TLHLjjkR(overload.status)), _helpers, _helpers_data, _scope, module, ctx, _here);
            else
            {
                o.status |= s_SolverStatus_SS_DID_START;
                if (o.kind == s_kind_fn)
                {
                    doTrySpecialize_CuYaoMfr(target, s_Target{}, fu::view<s_SolvedNode>{}, (*(const fu_STR*)fu::NIL), fu::view<int>{}, bool{}, fu::view<fu_VEC<s_Target>>{}, 0, (*(const s_Type*)fu::NIL), _scope, module, ctx, _helpers, _helpers_data, _here, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                }
                else if (o.kind == s_kind_type)
                    __solveStruct_Gmi1QLIO(true, s_Node(EXT_onaILX8Q(target, module, _scope, ctx).tEmplate.node), target, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                else
                    BUG_D9Hg55no((x7E_YP7BiSZZ("lazySolveStart: kind is `"_fu, str_x2XZ9C2m(o.kind)) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

            };
        };
        return true;
    };
}

static fu_STR str_9FdNhpHZ(const int min, const int max)
{
    if (min != max)
        return x7E_YP7BiSZZ((x7E_YP7BiSZZ("["_fu, fu::i64dec(min)) + ", "_fu), fu::i64dec(max)) + "]"_fu;
    else
        return fu::i64dec(min);

}

static void reorderByNumUsings_8VYvwAqV(bool& use_reorder, fu_VEC<int>& reorder, fu::view<s_Argument> host_args, const int num_args, const int num_usings)
{
    reorder.clear();
    if (num_usings)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            /*MOV*/ const int x = (i - num_usings);
            reorder.push((((x >= 0) && (x < num_args)) ? int(x) : -1));
        };
    };
    use_reorder = !!reorder;
}

                                #ifndef DEF_find_NaazSXrklU3
                                #define DEF_find_NaazSXrklU3
inline int find_NaazSXrk(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static bool reorderByArgIDs_uOpqiR1I(bool& use_reorder, fu_VEC<int>& reorder, fu::view<fu_STR> names, s_BitSet&& optional, fu::view<s_Argument> host_args, const int num_usings)
{
    use_reorder = true;
    reorder.clear();
    int used = 0;
    int offset = num_usings;
    for (int i = 0; i < host_args.size(); i++)
    {
        /*MOV*/ int idx = find_NaazSXrk(names, host_args[i].name);
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
        if ((used + popcount_lrBoAoRV(optional)) != names.size())
            return false;

    };
    while (reorder && (reorder[(reorder.size() - 1)] < 0))
        reorder.pop();

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
}

static fu_STR ERRMSG_findUnmatchedArgName_svIonBZF(fu::view<int> reorder, fu::view<fu_STR> names)
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
        if (!has_VM1JQhgd(used, i_1))
            return fu_STR(names[i_1]);

    };
    return "[BUG: findUnmatchedArgName]"_fu;
}

static int findRestStart_qaD50yjb(const s_Extended& ext)
{
    for (/*MOV*/ int i = ext.args.size(); i-- > 0; )
    {
        const s_Argument& arg = ext.args[i];
        if (arg.flags & s_Flags_F_REST_ARG)
            return /*NRVO*/ i;
        else if (!(arg.flags & s_Flags_F_IMPLICIT))
            break;

    };
    return ext.args.size();
}

                                #ifndef DEF_grow_if_oob_Sxbtw1pxWjb
                                #define DEF_grow_if_oob_Sxbtw1pxWjb
inline fu_VEC<s_Target>& grow_if_oob_Sxbtw1px(fu_VEC<fu_VEC<s_Target>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR qWHAT_26BgYmff(const s_Argument& arg, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    return (qKW_ThvlUeXJ("arg"_fu) + " "_fu) + qID_ThvlUeXJ(human_CsN1VqyI(arg.name, module, _scope, ctx, _helpers, _helpers_data, _here));
}

                                #ifndef DEF_replace_IPuENzWdLPh
                                #define DEF_replace_IPuENzWdLPh
inline fu_STR replace_IPuENzWd(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

                                #ifndef DEF_only_jd0ve8aYtld
                                #define DEF_only_jd0ve8aYtld
inline const fu_VEC<s_Target>& only_jd0ve8aY(fu::view<fu_VEC<s_Target>> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Type solveArrlit_itemType_init_0Qcaj8fU(const s_Type& head, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    s_Type _0 {};
    return (_0 = clear_refs_MvT8pzW6(s_Type(head))) ? static_cast<s_Type&&>(_0) : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
}

static s_Type solveArrlit_done_7i59flO3(const s_Type& itemType, const s_TokenIdx& _here, const s_Context& ctx)
{
    return createArray_9gHYdovL(itemType, _here, ctx);
}

static s_Target GETfn_7qXzYcZF(const int idx, const s_Module& module)
{
    return s_Target { int(module.modid), int(idx) };
}

static fu_STR fnName_gdPZAjZ8(const int idx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    if (idx)
        return ("`"_fu + GET_JhxATLIa(GETfn_7qXzYcZF(idx, module), _scope, module, ctx, _helpers, _helpers_data, _here).name) + "`"_fu;
    else
        return "global scope"_fu;

}

static void disambig_o88VPIiF(const s_Target& matchIdx, const s_Target& overloadIdx, const s_Module& module, const s_Scope& _scope, const s_Context& ctx, const s_CurrentFn& _current_fn, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, fu::view<char> id, fu::view<fu_VEC<s_Target>> conversions, fu::view<fu_VEC<s_Target>> conversions_1)
{
    if (matchIdx)
    {
        const s_Target& PREV = matchIdx;
        const s_Target& NEXT = overloadIdx;
        const int inner = localOf_1vQW2MPl(PREV, module, _scope, ctx);
        const int outer = localOf_1vQW2MPl(NEXT, module, _scope, ctx);
        const int callsite = _current_fn.out.target.index;
        if (SELF_TEST && (GET_JhxATLIa(PREV, _scope, module, ctx, _helpers, _helpers_data, _here).kind != s_kind_field))
        {
            int _c = callsite;
            while (_c > inner)
                _c = localOf_1vQW2MPl(GETfn_7qXzYcZF(_c, module), module, _scope, ctx);

            if (_c == inner)
            {
                int _i = inner;
                while (_i > outer)
                    _i = localOf_1vQW2MPl(GETfn_7qXzYcZF(_i, module), module, _scope, ctx);

                if (!(_i == outer))
                    BUG_D9Hg55no(((((((((((("Leaking `"_fu + id) + "` between functions [inner/outer]: "_fu) + fnName_gdPZAjZ8(inner, module, _scope, ctx, _helpers, _helpers_data, _here)) + "::"_fu) + qWHAT_wCuy3nxK(GET_JhxATLIa(PREV, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + " and "_fu) + fnName_gdPZAjZ8(outer, module, _scope, ctx, _helpers, _helpers_data, _here)) + "::"_fu) + qWHAT_wCuy3nxK(GET_JhxATLIa(NEXT, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + " as seen from "_fu) + fnName_gdPZAjZ8(callsite, module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

            }
            else
                BUG_D9Hg55no(((((((("Leaking `"_fu + id) + "` between functions [inner/callsite]: "_fu) + fnName_gdPZAjZ8(inner, module, _scope, ctx, _helpers, _helpers_data, _here)) + "::"_fu) + qWHAT_wCuy3nxK(GET_JhxATLIa(PREV, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + " is seen from "_fu) + fnName_gdPZAjZ8(callsite, module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

        };
        fail_F42afdck((((((((((((("Ambiguous callsite, matches multiple items in scope:"_fu + "\n\n\t"_fu) + explainWhichFn_CEstsCKu(PREV, conversions, _scope, module, ctx, _helpers, _helpers_data, _here)) + " from "_fu) + fnName_gdPZAjZ8(inner, module, _scope, ctx, _helpers, _helpers_data, _here)) + " and "_fu) + "\n\n\t"_fu) + explainWhichFn_CEstsCKu(NEXT, conversions_1, _scope, module, ctx, _helpers, _helpers_data, _here)) + " from "_fu) + fnName_gdPZAjZ8(outer, module, _scope, ctx, _helpers, _helpers_data, _here)) + ", as seen from "_fu) + fnName_gdPZAjZ8(callsite, module, _scope, ctx, _helpers, _helpers_data, _here)) + "."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

                                #ifndef DEF_last_3Ycuooso7la
                                #define DEF_last_3Ycuooso7la
inline const fu_STR& last_3Ycuooso(fu::view<fu_STR> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static s_Target tryMatch__mutargs_wMm8PACJ(fu_STR&& id, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, fu_STR& error, const bool local_scope, const s_Scope& misc_scope, fu::view<s_SolvedNode> args, const s_Flags flags, const s_Target& target, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName)
{
    const int error_len0 = error.size();
    if (SELF_TEST)
    {
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i].kind)
                BUG_D9Hg55no("Falsy arg.kind!"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        };
    };
    /*MOV*/ s_Target matchIdx {};
    int minArity = args.size();
    const int numUsings = countUsings_dPBMRQTc(local_scope, _scope, misc_scope, _ss, _helpers, _helpers_data, module, ctx, _here);
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
            names.push(fu_STR(((arg.kind == s_kind_argid) ? (*(_0 = &(((void)(some = true), arg.value))) ? *_0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)) : (*(const fu_STR*)fu::NIL))));
            if (arg.flags & s_Flags_F_OPT_ARG)
            {
                minArity--;
                add_sDUBjUzV(optional, i);
            };
        };
        if (!(some))
        {
            BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    };
    fu_STR reusable_mangle {};
    fu_VEC<s_Target> extra_items {};
    if (local_scope && !target)
    {
        s_BitSet seen {};
        if (numUsings)
        {
            each_sKHYoDBJ((local_scope ? _scope : misc_scope).usings, (local_scope ? _ss.usings : fu::view<s_ScopeSkip>{}), 0, _scope, module, ctx, _helpers, _helpers_data, _here, seen, local_scope, _ss, id, extra_items);
        };
        if (flags & ((s_Flags_F_ACCESS | s_Flags_F_METHOD) | s_Flags_F_OPERATOR))
            for (int i = 0; i < args.size(); i++)
                visitTypeImports_UBWiNznl(args[i].type, module, ctx, seen, _scope, local_scope, _ss, id, extra_items);
;
    };
    fu_VEC<s_ScopeItem> field_items { (local_scope && ((flags & s_Flags_F_ACCESS) || !minArity) && (minArity <= 1) && maxArity ? _field_items : (*(const fu_VEC<s_ScopeItem>*)fu::NIL)) };
    fu_VEC<fu_STR> alternate_ids {};
    for (; ; )
    {
        int scope_iterator {};
        s_Target overloadIdx {};
        bool shadows {};
        while ((overloadIdx = search_nKIDIgU2((local_scope ? ((flags & s_Flags_F_IMPLICIT) ? _scope.implicits : _scope.items) : fu::get_view(misc_scope.items, 0, misc_scope.pub_items)), id, scope_iterator, (local_scope ? ((flags & s_Flags_F_IMPLICIT) ? _ss.implicits : _ss.items) : fu::view<s_ScopeSkip>{}), shadows, target, extra_items, field_items)))
        { {
            bool DEBUG_mustMatch = false;
            fu_VEC<fu_VEC<s_Target>> conversions_1 {};
            fu_VEC<int> reorder_1 {};
            bool TODO_FIX_skip_autocalls = false;
            bool TODO_FIX_dontBotherSpecializing = false;
            while (true)
            {
                s_Overload overload { GET_JhxATLIa(overloadIdx, _scope, module, ctx, _helpers, _helpers_data, _here) };
                if (lazySolveStart_vCoSTAS3(overloadIdx, overload, _scope, module, _helpers, _helpers_data, ctx, _here, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items))
                    continue;
                else
                {
                    const s_kind kind = overload.kind;
                    const bool isType = (kind == s_kind_type);
                    if (minArity && isType && !target)
                    {
                        const fu_STR& alt = overload.type.vtype.canon;
                        if (alt != id)
                            alternate_ids.push(fu_STR(alt));

                    };
                    const s_Extended& arity = EXT_onaILX8Q(overloadIdx, module, _scope, ctx);
                    const bool isZeroInit = (isType && !explicitArity);
                    if (!isZeroInit && ((arity.max < minArity) || (arity.min > maxArity)))
                    {
                        if (DEBUG_mustMatch || error)
                        {
                            fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + (((("Wrong number of arguments: expects "_fu + str_9FdNhpHZ(arity.min, arity.max)) + ", got "_fu) + str_9FdNhpHZ(minArity, maxArity)) + "."_fu));
                            if (DEBUG_mustMatch)
                                BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                            else
                                error += ("\n\n\t"_fu + err);

                        };
                        goto BL_18;
                    }
                    else
                    {
                        fu_VEC<s_Argument> host_args { arity.args };
                        const int num_usings = (!isZeroInit && (arity.min > explicitArity) ? (arity.min - explicitArity) : int{});
                        bool use_reorder = false;
                        if (!names)
                            reorderByNumUsings_8VYvwAqV(use_reorder, reorder_1, host_args, args.size(), num_usings);
                        else if (!reorderByArgIDs_uOpqiR1I(use_reorder, reorder_1, names, s_BitSet(optional), host_args, num_usings))
                        {
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + ("Unknown argument name: "_fu + ERRMSG_findUnmatchedArgName_svIonBZF(reorder_1, names)));
                                if (DEBUG_mustMatch)
                                    BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto BL_18;
                        };
                        if (optional && reorder_1 && (reorder_1.size() < args.size()) && (reorder_1.size() < arity.max))
                        {
                            if (DEBUG_mustMatch || error)
                            {
                                fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + "Optional argument ambiguity, not all optional arguments provided, and not all callsite arguments used. Cannot distinguish from a typo. [TODO LIST MISSING ARGS]"_fu);
                                if (DEBUG_mustMatch)
                                    BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                else
                                    error += ("\n\n\t"_fu + err);

                            };
                            goto BL_18;
                        }
                        else
                        {
                            s_Type REST_TYPE {};
                            s_Type REST_EXPECT {};
                            const int REST_START = findRestStart_qaD50yjb(arity);
                            const int N = max_gcxVH86X((use_reorder ? reorder_1.size() : args.size()), (!isZeroInit ? arity.min : (*(const int*)fu::NIL)));
                            if (REST_START < N)
                            {
                                const s_Type& expect = host_args[REST_START].type;
                                if (expect)
                                {
                                    s_Type _1 {};
                                    REST_EXPECT = ((_1 = tryClear_sliceable_MvT8pzW6(expect)) ? static_cast<s_Type&&>(_1) : fail_F42afdck(((GET_JhxATLIa(overloadIdx, _scope, module, ctx, _helpers, _helpers_data, _here).name + ": Rest argument annotation is not an array: "_fu) + humanizeType_PJ01PlxR(expect, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here));
                                };
                            };
                            if (N)
                            {
                                if ((reorder_1.size() >= args.size()) || !reorder_1 || optional)
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
                                            const int callsiteIndex = (use_reorder ? int(reorder_1[i]) : ((i < args.size()) ? int(i) : -1));
                                            if (callsiteIndex < 0)
                                            {
                                                if (host_arg.dEfault || (host_arg.flags & s_Flags_F_IMPLICIT))
                                                    continue;
                                                else
                                                {
                                                    s_Flags _2 {};
                                                    if (!((_2 = (host_arg.flags & s_Flags_F_MUSTNAME)) ? _2 : (flags & s_Flags_F_CONVERSION)))
                                                    {
                                                        if (expect)
                                                        {
                                                            /*MOV*/ fu_VEC<s_Target> conversion = tryConvert_rJdCmcwd(expect, (*(const s_Type*)fu::NIL), (*(const s_SolvedNode*)fu::NIL), local_scope, misc_scope, _scope, TODO_FIX_convert_args, _ss, _helpers, _helpers_data, module, ctx, _here, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName);
                                                            if (conversion)
                                                            {
                                                                grow_if_oob_Sxbtw1px(conversions_1, i) = static_cast<fu_VEC<s_Target>&&>(conversion);
                                                                continue;
                                                            };
                                                        };
                                                    };
                                                    if (DEBUG_mustMatch || error)
                                                    {
                                                        fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + ("Cannot infer missing argument "_fu + qWHAT_26BgYmff(host_arg, module, _scope, ctx, _helpers, _helpers_data, _here)));
                                                        if (DEBUG_mustMatch)
                                                            BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                                        else
                                                            error += ("\n\n\t"_fu + err);

                                                    };
                                                    goto BL_18;
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
                                                            fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + ("Argument must be :explicitly named "_fu + qWHAT_26BgYmff(host_arg, module, _scope, ctx, _helpers, _helpers_data, _here)));
                                                            if (DEBUG_mustMatch)
                                                                BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
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
                                                    fu_STR autocall_error = (error ? (((("Cannot match argument "_fu + qWHAT_26BgYmff(host_arg, module, _scope, ctx, _helpers, _helpers_data, _here)) + " autocall "_fu) + qCODE_ThvlUeXJ(host_arg.autocall)) + ": "_fu) : fu_STR{});
                                                    const s_Target t = tryMatch__mutargs_wMm8PACJ(fu_STR(host_arg.autocall), autocall_reorder, autocall_conversions, autocall_error, local_scope, misc_scope, autocall_args, s_Flags{}, s_Target{}, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName);
                                                    if (!t)
                                                    {
                                                        if (DEBUG_mustMatch || error)
                                                        {
                                                            fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + replace_IPuENzWd(autocall_error, "\t"_fu, "\t\t"_fu));
                                                            if (DEBUG_mustMatch)
                                                                BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                                            else
                                                                error += ("\n\n\t"_fu + err);

                                                        };
                                                        goto BL_18;
                                                    }
                                                    else
                                                    {
                                                        if (autocall_conversions)
                                                        {
                                                            grow_if_oob_Sxbtw1px(conversions_1, i) += only_jd0ve8aY(autocall_conversions);
                                                        };
                                                        grow_if_oob_Sxbtw1px(conversions_1, i) += s_Target(t);
                                                        if (autocall_reorder.size() < 2)
                                                        {
                                                            if (is_never_ZFEUWUgI(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).type))
                                                                TODO_FIX_dontBotherSpecializing = true;

                                                        }
                                                        else
                                                            BUG_D9Hg55no("autocall: reorder"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

                                                    };
                                                };
                                                const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                                                s_Type actual { (hasConv ? GET_JhxATLIa(last_E3kAR4gV(conversions_1[i]), _scope, module, ctx, _helpers, _helpers_data, _here).type : args[callsiteIndex].type) };
                                                if (!expect)
                                                {
                                                    if ((host_arg.flags & s_Flags_F_REF) && !is_mutref_9gHYdovL(actual, _here, ctx))
                                                    {
                                                        if (DEBUG_mustMatch || error)
                                                        {
                                                            fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + ((("Argument "_fu + qWHAT_26BgYmff(host_arg, module, _scope, ctx, _helpers, _helpers_data, _here)) + " expects a mutref, got "_fu) + humanizeType_PJ01PlxR(actual, module, ctx)));
                                                            if (DEBUG_mustMatch)
                                                                BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                                            else
                                                                error += ("\n\n\t"_fu + err);

                                                        };
                                                        goto BL_18;
                                                    }
                                                    else
                                                        continue;

                                                }
                                                else if (isAssignableAsArgument_0a4boBJ8(expect, (actual ? actual : BUG_D9Hg55no("tryMatch: !actual"_fu, _helpers, _helpers_data, _scope, module, ctx, _here)), bool{}))
                                                    continue;
                                                else
                                                {
                                                    if (!hasConv)
                                                    {
                                                        const s_SolvedNode& arg = args[callsiteIndex];
                                                        const s_SolvedNode& arg_1 = ((arg.kind == s_kind_argid) ? only_l6T9uEqE(arg.items) : arg);
                                                        s_Type retype = tryRetyping_dostIVUx(arg_1, expect, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
                                                        if (retype && isAssignableAsArgument_0a4boBJ8(expect, retype, bool{}))
                                                            continue;

                                                    };
                                                    if (!(flags & s_Flags_F_CONVERSION))
                                                    {
                                                        fu_VEC<s_Target> conversion = tryConvert_rJdCmcwd(expect, actual, (!hasConv ? args[callsiteIndex] : (*(const s_SolvedNode*)fu::NIL)), local_scope, misc_scope, _scope, TODO_FIX_convert_args, _ss, _helpers, _helpers_data, module, ctx, _here, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName);
                                                        if (conversion)
                                                        {
                                                            grow_if_oob_Sxbtw1px(conversions_1, i) += conversion;
                                                            continue;
                                                        };
                                                    };
                                                    if (DEBUG_mustMatch || error)
                                                    {
                                                        fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + ((((("Argument "_fu + qWHAT_26BgYmff(host_arg, module, _scope, ctx, _helpers, _helpers_data, _here)) + " expects "_fu) + humanizeType_PJ01PlxR(expect, module, ctx)) + ", got "_fu) + humanizeType_PJ01PlxR(actual, module, ctx)));
                                                        if (DEBUG_mustMatch)
                                                            BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                                        else
                                                            error += ("\n\n\t"_fu + err);

                                                    };
                                                    goto BL_18;
                                                };
                                            };
                                        };
                                    };
                                }
                                else
                                    BUG_D9Hg55no("reorder < args."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

                            };
                            if (REST_START < N)
                            {
                                for (int i = REST_START; i < N; i++)
                                {
                                    const int hasConv = ((conversions_1.size() > i) ? conversions_1[i].size() : int{});
                                    const int callsiteIndex = (use_reorder ? reorder_1[i] : i);
                                    const s_Type& actual = (hasConv ? GET_JhxATLIa(last_E3kAR4gV(conversions_1[i]), _scope, module, ctx, _helpers, _helpers_data, _here).type : args[callsiteIndex].type);
                                    s_Type _3 {};
                                    fu::never BL_92_v {};
                                    REST_TYPE = ((i == REST_START) ? solveArrlit_itemType_init_0Qcaj8fU(actual, _helpers, _helpers_data, _scope, module, ctx, _here) : ((_3 = type_trySuper_0a4boBJ8(REST_TYPE, actual, bool{})) ? static_cast<s_Type&&>(_3) : (__extension__ (
                                    {
                                        if (DEBUG_mustMatch || error)
                                        {
                                            fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + ((("Rest arguments have no common supertype: "_fu + humanizeType_PJ01PlxR(REST_TYPE, module, ctx)) + " <- "_fu) + humanizeType_PJ01PlxR(actual, module, ctx)));
                                            if (DEBUG_mustMatch)
                                                BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                            else
                                                error += ("\n\n\t"_fu + err);

                                        };
                                        goto BL_18;
                                    (void)0;}), static_cast<fu::never&&>(BL_92_v))));
                                };
                                REST_TYPE = solveArrlit_done_7i59flO3(REST_TYPE, _here, ctx);
                            };
                            if ((kind == s_kind_template) && !TODO_FIX_dontBotherSpecializing)
                            {
                                fu_STR cant_reuse {};
                                fu_STR& args_mangled = ((use_reorder || conversions_1) ? cant_reuse : reusable_mangle);
                                /*MOV*/ const s_Target specIdx = trySpecialize_ODMsMpw1(overloadIdx, args, args_mangled, REST_START, REST_TYPE, reorder_1, use_reorder, conversions_1, _scope, module, ctx, _helpers, _helpers_data, _here, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                                if (is_SPECFAIL_fTaqkZrb(specIdx))
                                {
                                    if (DEBUG_mustMatch || error)
                                    {
                                        fu_STR err = ((qWHAT_wCuy3nxK(overload, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + ("Could not specialize: "_fu + _spec_errors[specIdx.index]));
                                        if (DEBUG_mustMatch)
                                            BUG_D9Hg55no(("mustMatch.matchFail: "_fu + err), _helpers, _helpers_data, _scope, module, ctx, _here);
                                        else
                                            error += ("\n\n\t"_fu + err);

                                    };
                                    goto BL_18;
                                }
                                else
                                {
                                    overloadIdx = s_Target(specIdx);
                                    DEBUG_mustMatch = true;
                                    TODO_FIX_skip_autocalls = true;
                                    continue;
                                };
                            }
                            else
                            {
                                disambig_o88VPIiF(matchIdx, overloadIdx, module, _scope, ctx, _current_fn, _helpers, _helpers_data, _here, id, conversions, conversions_1);
                                std::swap(reorder_1, reorder);
                                std::swap(conversions_1, conversions);
                                matchIdx = overloadIdx;
                                if (shadows)
                                    goto LL_17;
                                else
                                    break;

                            };
                        };
                    };
                };
            };
          } BL_18:;
        } LL_17:;

        if (!alternate_ids)
            break;
        else
        {
            id = last_3Ycuooso(alternate_ids);
            alternate_ids.pop();
        };
    };
    if (error && (error.size() == error_len0) && !matchIdx)
        error += (qID_ThvlUeXJ(id) + " is not defined here."_fu);

    return /*NRVO*/ matchIdx;
}

static void foreach_Oxyt0gGK(const s_Target& t, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
{
    /*MOV*/ s_Type arg0type0 { TODO_FIX_convert_args[0].type };
    if (!nullary)
    {
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
            TODO_FIX_convert_args.mutref(0).type = static_cast<s_Type&&>(arg0type0);

    });
    fu_STR error {};
    s_Target candidate {};
    if (nullary || (candidate = tryMatch__mutargs_wMm8PACJ(fu_STR{}, TODO_FIX_reorder, TODO_FIX_conversions, error, bool{}, (*(const s_Scope*)fu::NIL), fu_VEC<s_SolvedNode>(TODO_FIX_convert_args), s_Flags_F_CONVERSION, t, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName)))
    {
        const s_Target& t_1 = (nullary ? t : candidate);
        const s_Overload& convert = GET_JhxATLIa(t_1, _scope, module, ctx, _helpers, _helpers_data, _here);
        if (convert.type)
        {
            s_Type convertType = ((convert.kind == s_kind_field) ? add_refs_XJgsWJyN((from ? from : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)), s_Type(convert.type)) : s_Type(convert.type));
            const bool isStruct = isStruct_jHe6RDpE(convertType);
            if (s_SolverStatus((convert.status & s_SolverStatus((s_SolverStatus_SS_DID_START | s_SolverStatus_SS_FINALIZED)))) == s_SolverStatus_SS_DID_START)
            {
            }
            else if (isAssignableAsArgument_0a4boBJ8(expect, convertType, bool{}))
            {
                if (match)
                {
                    fu_STR suffix = (((("\n\t\t"_fu + explainConversion_WJ7YBIkP(match, _scope, module, ctx, _helpers, _helpers_data, _here)) + "\n\tand:"_fu) + "\n\t\t"_fu) + explainConversion_WJ7YBIkP((path + t_1), _scope, module, ctx, _helpers, _helpers_data, _here));
                    if (actual)
                        fail_F42afdck(((((("Conversion ambiguity, multiple ways to convert `"_fu + humanizeType_PJ01PlxR(actual, module, ctx)) + "` into `"_fu) + humanizeType_PJ01PlxR(expect, module, ctx)) + "`: "_fu) + suffix), _helpers, _helpers_data, _scope, module, ctx, _here);
                    else
                        fail_F42afdck(((("`using` ambiguity, multiple ways to obtain a `"_fu + humanizeType_PJ01PlxR(expect, module, ctx)) + "` in this scope: "_fu) + suffix), _helpers, _helpers_data, _scope, module, ctx, _here);

                }
                else
                    match = (path + t_1);

            }
            else
            {
                const bool mightHaveConversion = (isStruct || (local_scope ? _scope : misc_scope).converts);
                if (mightHaveConversion)
                {
                    if (path.size() > 10)
                    {
                        for (/*MOV*/ int i = path.size(); i-- > 0; )
                        {
                            if (path[i] == t_1)
                            {
                                /*MOV*/ fu_STR err = "Conversion loop:\n"_fu;
                                for (int i_1 = int(i); i_1 < path.size(); i_1++)
                                {
                                    err += "\n\t    "_fu;
                                    const s_Overload& convert_1 = GET_JhxATLIa(path[i_1], _scope, module, ctx, _helpers, _helpers_data, _here);
                                    err += (((qWHAT_wCuy3nxK(convert_1, module, _scope, ctx, _helpers, _helpers_data, _here) + ": "_fu) + humanizeType_PJ01PlxR(convertType, module, ctx)) + " ->"_fu);
                                };
                                err += ("\n\t        "_fu + qWHAT_wCuy3nxK(convert, module, _scope, ctx, _helpers, _helpers_data, _here));
                                fail_F42afdck(static_cast<fu_STR&&>(err), _helpers, _helpers_data, _scope, module, ctx, _here);
                            };
                        };
                    };
                    path.push(s_Target(t_1));
                    fu_DEFER(path.pop());
                    descend_mMNV1ide(convertType, false, isStruct, bool{}, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _helpers, _helpers_data, module, ctx, _here, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName, expect, match, path, actual, has_converts);
                };
            };
        }
        else
            fail_F42afdck((("No convert.type, perhaps a `using inline fn` without a return type annotation: `"_fu + qWHAT_wCuy3nxK(convert, module, _scope, ctx, _helpers, _helpers_data, _here)) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

                                #ifndef DEF_each_qYwiG5cmfe1
                                #define DEF_each_qYwiG5cmfe1
inline void each_qYwiG5cm(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
                const s_Target& u = items[i_1];
                foreach_Oxyt0gGK(u, TODO_FIX_convert_args, nullary, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName, expect, match, path, actual, local_scope, misc_scope, has_converts);
            };
            i0 = ss.end;
        };
    };
}
                                #endif

                                #ifndef DEF_each_UAqPtXSjMeg
                                #define DEF_each_UAqPtXSjMeg
inline void each_UAqPtXSj(fu::view<s_Target> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const bool nullary, const bool root, const s_SolvedNode& retype, const s_Type& from, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const bool local_scope, const s_Scope& misc_scope, const int has_converts)
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
                foreach_Oxyt0gGK(items[i_1], TODO_FIX_convert_args, nullary, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName, expect, match, path, actual, local_scope, misc_scope, has_converts);

            i0 = ss.end;
        };
    };
}
                                #endif

static void descend_mMNV1ide(const s_Type& from, const bool nullary, const bool isStruct, const bool root, const bool local_scope, s_Scope& _scope, const s_Scope& misc_scope, s_ScopeSkipMemos& _ss, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_SolvedNode& retype, const s_SolvedNode& arg0, fu_VEC<int>& TODO_FIX_reorder, fu_VEC<fu_VEC<s_Target>>& TODO_FIX_conversions, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, const s_Type& expect, fu_VEC<s_Target>& match, fu_VEC<s_Target>& path, const s_Type& actual, const int has_converts)
{
    if (nullary)
        each_qYwiG5cm(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).usings), fu_VEC<s_ScopeSkip>((local_scope ? _ss.usings : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, nullary, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName, expect, match, path, actual, local_scope, misc_scope, has_converts);
    else
    {
        if (isStruct)
        {
            fu_VEC<s_Target> inner { lookupStruct_3ZVvGB0M(from, module, ctx).converts };
            for (int i = 0; i < inner.size(); i++)
                foreach_Oxyt0gGK(s_Target(inner[i]), TODO_FIX_convert_args, nullary, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName, expect, match, path, actual, local_scope, misc_scope, has_converts);

        };
        if (has_converts)
            each_UAqPtXSj(fu_VEC<s_Target>((local_scope ? _scope : misc_scope).converts), fu_VEC<s_ScopeSkip>((local_scope ? _ss.converts : (*(const fu_VEC<s_ScopeSkip>*)fu::NIL))), 0, TODO_FIX_convert_args, nullary, root, retype, from, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName, expect, match, path, actual, local_scope, misc_scope, has_converts);

    };
}

static fu_VEC<s_Target> tryConvert_rJdCmcwd(const s_Type& expect, const s_Type& actual, const s_SolvedNode& retype, const bool local_scope, const s_Scope& misc_scope, s_Scope& _scope, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName)
{
    /*MOV*/ fu_VEC<s_Target> match {};
    fu_VEC<s_Target> path {};
    const int has_converts = (local_scope ? _scope : misc_scope).converts.size();
    s_SolvedNode arg0 { TODO_FIX_convert_args[0] };
    fu_VEC<int> TODO_FIX_reorder {};
    fu_VEC<fu_VEC<s_Target>> TODO_FIX_conversions {};
    descend_mMNV1ide(actual, !actual, isStruct_jHe6RDpE(actual), true, local_scope, _scope, misc_scope, _ss, TODO_FIX_convert_args, retype, arg0, TODO_FIX_reorder, TODO_FIX_conversions, _helpers, _helpers_data, module, ctx, _here, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName, expect, match, path, actual, has_converts);
    return /*NRVO*/ match;
}

static s_Type solveArrlit_itemType_joaim3JX(fu::view<s_SolvedNode> items, /*MOV*/ s_Type&& itemType, /*MOV*/ int start, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (!itemType)
    {
        if (start == items.size())
            fail_F42afdck("Cannot infer empty arraylit."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
        else
            itemType = solveArrlit_itemType_init_0Qcaj8fU(items[start++].type, _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else if (is_ref_MvT8pzW6(itemType))
        fail_F42afdck("Array items cannot be refs. TODO Why an error? Should this not just clear_refs?"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    for (int i = int(start); i < items.size(); i++)
        itemType = superType_dfd8ySRL("Array literal: "_fu, itemType, items[i].type, (*(const fu_STR*)fu::NIL), module, ctx, _helpers, _helpers_data, _scope, _here);

    return static_cast<s_Type&&>(itemType);
}

static s_SolvedNode createArrlit_Z1URVVuo(fu_VEC<s_SolvedNode>&& items, const s_Type& itemType, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    s_Type itemType_1 = solveArrlit_itemType_joaim3JX(items, s_Type(itemType), 0, _helpers, _helpers_data, _scope, module, ctx, _here);
    return SolvedNode_ltxQ8cxX(s_kind_arrlit, solveArrlit_done_7i59flO3(itemType_1, _here, ctx), s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, s_Helpers{}, _here);
}

static s_Type intersectionType_FPkgaaBQ(fu::view<char> reason, const s_Type& a, const s_Type& b, const fu_STR& id, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_TokenIdx& _here)
{
    s_Type _0 {};
    return (_0 = type_tryIntersect_XJgsWJyN(a, b)) ? static_cast<s_Type&&>(_0) : fail_F42afdck(((((((id ? (qID_ThvlUeXJ(id) + ": "_fu) : fu_STR{}) + reason) + "Cannot intersect types: "_fu) + humanizeType_PJ01PlxR(a, module, ctx)) + " & "_fu) + humanizeType_PJ01PlxR(b, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static s_Target createLet_tfhpWoXS(const fu_STR& id, const s_Type& type, const s_Flags flags, bool& shadows, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Context& ctx, const s_TokenIdx& _here, const s_Target& _current_fnort)
{
    /*MOV*/ const s_Target target = Binding_eC3TcGqp(id, s_Type(type), flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _helpers, _helpers_data, ctx, _here, _current_fnort);
    s_SolvedNode ret = SolvedNode_ltxQ8cxX(s_kind_let, GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type, flags, GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).name, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), target, s_Helpers{}, _here);
    solved_set_1uqFwxph(target, ret, _scope, module);
    return /*NRVO*/ target;
}

static s_Target injectImplicitArg_SvSEcBIk(const fu_STR& id, const s_Type& type, const s_Target& becauseOf, s_CurrentFn& _current_fn, s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    if (!_current_fn.out.items || (_current_fn.out.flags & s_Flags_F_EXTERN))
        fail_F42afdck((((("No implicit "_fu + qBAD_ThvlUeXJ(id)) + " in scope, needed to call "_fu) + qWHAT_wCuy3nxK(GET_JhxATLIa(becauseOf, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + "."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
    else
    {
        for (int i = 0; i < (_current_fn.out.items.size() + FN_ARGS_BACK); i++)
        {
            s_SolvedNode& arg = _current_fn.out.items.mutref(i);
            /*MOV*/ const s_Target target { arg.target };
            s_SolvedNode& arg_1 = ((arg.kind == s_kind_letdef) ? GET_mut_5Ue5IxE1(target, _scope, module).solved : arg);
            if (arg_1.value == id)
            {
                /*MOV*/ s_Type super = intersectionType_FPkgaaBQ("Implicit argument collision: "_fu, add_ref_8kJD1Pzg(s_Type(type), arg_1.type.lifetime, _here, ctx), arg_1.type, id, module, ctx, _helpers, _helpers_data, _scope, _here);
                arg_1.type = super;
                GET_mut_5Ue5IxE1(target, _scope, module).type = static_cast<s_Type&&>(super);
                return s_Target((target ? target : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)));
            };
        };
        bool shadows {};
        s_Flags flags = (s_Flags_F_IMPLICIT | s_Flags_F_ARG);
        if (is_mutref_9gHYdovL(type, _here, ctx))
            flags |= (s_Flags_F_REF | s_Flags_F_RELAXABLE_REF);

        /*MOV*/ const s_Target newArgTarget = createLet_tfhpWoXS(id, type, flags, shadows, _current_fn, _root_scope, _scope, _ss, module, _helpers, _helpers_data, ctx, _here, _current_fnort);
        const int newArgIdx = (_current_fn.out.items.size() + FN_ARGS_BACK);
        /*MOV*/ s_SolvedNode newLetDef = createLetDef_G3yOqYX3(newArgTarget, _here);
        _current_fn.out.items.insert(newArgIdx, static_cast<s_SolvedNode&&>(newLetDef));
        return /*NRVO*/ newArgTarget;
    };
}

static s_SolvedNode bindImplicitArg_LYVQndty(const fu_STR& name, const s_Type& type, const s_Target& becauseOf, s_Module& module, s_Scope& _scope, const s_Context& ctx, s_CurrentFn& _current_fn, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, const s_Target& _current_fnort, const s_Options& options, s_SolverNotes& _notes, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{

    {
        /*MOV*/ const s_ClosureID _ = tryParseClosureID_QYk3NQTZ(name);
        if (isLocal_bkThDLoo(_.target) && (localOf_1vQW2MPl(_.target, module, _scope, ctx) == _current_fn.out.target.index))
        {
            if (_.revision == EXT_onaILX8Q(_current_fn.out.target, module, _scope, ctx).revision)
            {
                if (GET_JhxATLIa(_.target, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_var)
                {
                    return CallerNode_f9MJt2Cf("__closure"_fu, s_Target(_.target), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, _current_fnort, module, _scope, ctx, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
                }
                else
                    BUG_D9Hg55no(("ClosureID.target is not a var: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(_.target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

            }
            else
                fail_F42afdck(x7E_YP7BiSZZ((x7E_YP7BiSZZ((("ClosureID.revision mismatch: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(_.target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + "\n\tCaptured at: "_fu), fu::i64dec(_.revision)) + "\n\tCurrent rev: "_fu), fu::i64dec(EXT_onaILX8Q(_current_fn.out.target, module, _scope, ctx).revision)), _helpers, _helpers_data, _scope, module, ctx, _here);

        };
    };
    fu_STR error {};
    fu_VEC<int> reorder {};
    fu_VEC<fu_VEC<s_Target>> conversions {};
    s_Target _0 {};
    /*MOV*/ const s_Target target = ((_0 = tryMatch__mutargs_wMm8PACJ(fu_STR(name), reorder, conversions, error, true, (*(const s_Scope*)fu::NIL), fu::view<s_SolvedNode>{}, s_Flags_F_IMPLICIT, s_Target{}, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName)) ? _0 : (_0 = injectImplicitArg_SvSEcBIk(name, type, becauseOf, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _root_scope, _ss, _current_fnort)) ? _0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here));
    const s_Overload& o = GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here);
    if (o.flags & s_Flags_F_IMPLICIT)
    {
        checkAssignable_I8obPA2D(type, o.type, (("Implicit `"_fu + name) + "` type mismatch"_fu), (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), true, _helpers, _helpers_data, _scope, module, ctx, _here);
        return CallerNode_f9MJt2Cf("__implicit"_fu, s_Target(target), fu_VEC<s_SolvedNode>{}, reorder, conversions, _current_fnort, module, _scope, ctx, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
    }
    else
        fail_F42afdck((((("Matching a non-implicit item in scope: `"_fu + name) + "`, binds to call to `"_fu) + GET_JhxATLIa(becauseOf, _scope, module, ctx, _helpers, _helpers_data, _here).name) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

}

static s_SolvedNode createLet_wSWweXHK(const fu_STR& id, const s_Flags flags, const s_SolvedNode& init, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_Options& options, s_SolverNotes& _notes, const s_CurrentFn& _current_fn, const s_ScopeMemo& _root_scope, const s_ScopeSkipMemos& _ss, const s_Target& _current_fnort)
{
    s_SolvedNode out = solveLetLike_dontTouchScope_A6dO2S2N(id, s_Flags(flags), init, (*(const s_Type*)fu::NIL), _helpers, _helpers_data, _scope, module, ctx, _here, options, _notes);
    return solveLet_xZqpg91U(out, id, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn, _root_scope, _ss, _current_fnort);
}

static void detectRecursion_vzOL5MAZ(const s_Target& target, s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Options& options, s_SolverNotes& _notes)
{
    s_Overload overload { GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here) };
    if (s_SolverStatus((overload.status & s_SolverStatus((s_SolverStatus_SS_FINALIZED | s_SolverStatus_SS_LAZY)))) != s_SolverStatus_SS_LAZY)
        return;
    else
    {
        const s_SolverNotes note = ((overload.kind == s_kind_type) ? s_SolverNotes_N_TypeRecursion : s_SolverNotes_N_FnRecursion);
        const s_SolverStatus status = ((overload.kind == s_kind_type) ? s_SolverStatus_SS_TYPE_RECUR : s_SolverStatus_SS_FN_RECUR);
        for (int i = _helpers.size(); i-- > 0; )
        {
            const s_Helpers& h = _helpers[i];
            if (!isFnOrType_0BbFFz6D(h, _helpers_data))
                continue;
            else if (_helpers_data[h.index].mask & s_HelpersMask_HM_Lambda)
                BUG_D9Hg55no("Recursive lambda, what happened here?"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
            else
            {
                GET_mut_5Ue5IxE1(_helpers_data[h.index].target, _scope, module).status |= status;
                makeNote_hsfuVyUh(note, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
                if (_helpers_data[h.index].target == target)
                    return;

            };
        };
        BUG_D9Hg55no((x7E_YP7BiSZZ((("detectRecursion: no _helpers entry for `"_fu + overload.name) + " ("_fu), str_TLHLjjkR(overload.status)) + ")`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static s_SolvedNode CallerNode_f9MJt2Cf(const fu_STR& debug, s_Target&& target, fu_VEC<s_SolvedNode>&& args, const fu_VEC<int>& reorder, fu::view<fu_VEC<s_Target>> conversions, const s_Target& _current_fnort, s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Options& options, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_SolverNotes& _notes, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    if (reorder)
    {
        /*MOV*/ fu_VEC<s_SolvedNode> args_out {};
        args_out.resize(reorder.size());
        for (int i = 0; i < reorder.size(); i++)
        {
            const int idx = reorder[i];
            if ((idx >= 0))
                args_out.mutref(i) = args[idx];

        };
        args = static_cast<fu_VEC<s_SolvedNode>&&>(args_out);
    };
    for (int argIdx = 0; argIdx < conversions.size(); argIdx++)
    {
        fu::view<s_Target> conversion = conversions[argIdx];
        if (applyConversion_1J8eUN5p(args.mutref(argIdx), conversion, module, _scope, ctx, _current_fnort, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName))
        {
            args.shrink((argIdx + 1));
            makeNote_hsfuVyUh(s_SolverNotes_N_DeadConv, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
            return createBlock_7yOivmtL(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module, ctx, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
        };
    };
    const int REST_START = findRestStart_qaD50yjb(EXT_onaILX8Q(target, module, _scope, ctx));
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
                args.mutref(i) = createArrlit_Z1URVVuo(fu_VEC<s_SolvedNode>(rest), (*(const s_Type*)fu::NIL), _helpers, _helpers_data, _scope, module, ctx, _here);

        };
    };
    const bool isZeroInit = ((GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_type) && !args.size());
    if (!isZeroInit)
    {
        fu_VEC<s_Argument> host_args { EXT_onaILX8Q(target, module, _scope, ctx).args };
        args.resize(host_args.size());
        for (int i = 0; i < args.size(); i++)
        {
            if (!args[i])
            {
                const s_Argument& host_arg = host_args[i];
                args.mutref(i) = (host_arg.dEfault ? s_SolvedNode(host_arg.dEfault) : ((host_arg.flags & s_Flags_F_IMPLICIT) ? bindImplicitArg_LYVQndty(fu_STR(host_arg.name), s_Type(host_arg.type), target, module, _scope, ctx, _current_fn, _helpers, _helpers_data, _here, _current_fnort, options, _notes, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName) : fail_F42afdck((((("tryMatch: about to implicit-bind a non-implicit argument: `"_fu + host_arg.name) + ": "_fu) + humanizeType_PJ01PlxR(host_arg.type, module, ctx)) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here)));
                if (is_never_ZFEUWUgI(args[i].type))
                {
                    args.shrink((i + 1));
                    return deadCall_emET5nsg(args, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
                };
            };
        };
    };
    s_Type type { GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type };
    if (GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_field)
    {
        const s_Type* _0;
        type = add_refs_XJgsWJyN((*(_0 = &(only_l6T9uEqE(args).type)) ? *_0 : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)), s_Type(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type));
    }
    else if (GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_var)
    {
        if (GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).flags & s_Flags_F_INLINE)
            return s_SolvedNode(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).solved.items[LET_INIT]);
        else if (type.lifetime.uni0n.size() == 1)
        {
            if (isLocal_bkThDLoo(target) && (localOf_1vQW2MPl(target, module, _scope, ctx) != _current_fn.out.target.index))
            {
                s_ClosureID _1 {};
                int _2 {};
                const s_ClosureID clID = ((_1 = tryParseClosureID_QYk3NQTZ(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).name)) ? _1 : s_ClosureID { s_Target(target), int(((_2 = EXT_onaILX8Q(parent_mvdJCDL8(target, module, _scope, ctx), module, _scope, ctx).revision) ? _2 : BUG_D9Hg55no(("ClosureID: about to serialize at rev 0: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here))) });
                target = injectImplicitArg_SvSEcBIk(serialize_NMBClXQY(clID), s_Type(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type), target, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _root_scope, _ss, _current_fnort);
                const s_Type* _3;
                type = (*(_3 = &(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type)) ? *_3 : BUG_D9Hg55no(("CallerNode: !type on var "_fu + GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).name), _helpers, _helpers_data, _scope, module, ctx, _here));
            };
        }
        else
        {
            BUG_D9Hg55no((("CallerNode: var "_fu + GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).name) + " type.lifetime.len != 1"_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
        };
    }
    else
    {
        if (args)
        {
            fu::view<s_Argument> _4 {};
            fu::view<s_Argument> host_args = ((_4 = EXT_onaILX8Q(target, module, _scope, ctx).args) ? static_cast<fu::view<s_Argument>&&>(_4) : BUG_D9Hg55no(("CallerNode: no host args: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here));
            if ((host_args.size() >= args.size()))
            {
                for (int i0 = 0; i0 < args.size(); i0++)
                {
                    const s_Argument& host_arg = host_args[i0];
                    s_SolvedNode& arg = args.mutref(i0);
                    if (arg.kind == s_kind_argid)
                        arg = only_l6T9uEqE(arg.items);

                    const s_Type& expect = host_arg.type;
                    s_Type retype = tryRetyping_dostIVUx(arg, expect, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
                    if (retype && isAssignableAsArgument_0a4boBJ8(expect, retype, bool{}))
                        applyRetype_RC0duBkd(arg, retype);

                };
            }
            else
                BUG_D9Hg55no(("CallerNode: host_arg.len mismatch: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);

        };
        if (GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).kind == s_kind_inline)
        {
            const s_ScopeMemo scope0 = Scope_snap_XX7UzHbd(_scope, _helpers);
            /*MOV*/ s_ScopeSkipMemos ss0 { _ss };
            /*MOV*/ const int autoshadow_ok0 = _current_fn.autoshadow_ok;
            fu_DEFER(
            {
                Scope_pop_KQTgazm7(_scope, scope0, _helpers);
                _ss = static_cast<s_ScopeSkipMemos&&>(ss0);
                _current_fn.autoshadow_ok = int(autoshadow_ok0);
            });
            /*MOV*/ s_Template tEmplate { EXT_onaILX8Q(target, module, _scope, ctx).tEmplate };
            ScopeSkip_setup_D0SMezz3(tEmplate, scope0, true, _root_scope, _ss, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn);
            _scope.items += fu_VEC<s_ScopeItem>(EXT_onaILX8Q(target, module, _scope, ctx).extra_items);
            if (tEmplate.node.flags & s_Flags_F_TEMPLATE)
                _current_fn.autoshadow_ok++;

            s_Node n_fn = static_cast<s_Node&&>(tEmplate.node);
            s_Node n_body { last_lpa8XGDf(n_fn.items) };
            s_Type ret_expect { GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).type };
            fu_VEC<s_Argument> host_args { EXT_onaILX8Q(target, module, _scope, ctx).args };
            fu_VEC<s_SolvedNode> arg_defs {};
            if (host_args.size() == args.size())
            {
                const int locals_start = (args ? GET_next_local_index_6CO4foiz(_current_fnort, _current_fn, _scope) : int{});
                for (int i = 0; i < args.size(); i++)
                {
                    s_Argument slot { host_args[i] };
                    /*MOV*/ s_SolvedNode arg_def = createLet_wSWweXHK(n_fn.items[i].value, (slot.flags & ~s_Flags_F_ARG), args[i], _helpers, _helpers_data, _scope, module, ctx, _here, options, _notes, _current_fn, _root_scope, _ss, _current_fnort);
                    if (arg_def.kind == s_kind_empty)
                        continue;
                    else
                    {
                        arg_defs += static_cast<s_SolvedNode&&>(arg_def);
                        if (slot.flags & s_Flags_F_INLINE)
                            arg_defs.pop();

                    };
                };
                /*MOV*/ s_SolvedNode s_body = solveBlock_7a90i7rV(n_body, ret_expect, 0, s_HelpersMask((s_HelpersMask((s_HelpersMask_HM_CanReturn | ((n_fn.flags & s_Flags_F_LAMBDA) ? s_HelpersMask_HM_Lambda : s_HelpersMask{}))) | (arg_defs ? s_HelpersMask_HM_KeepBlock : s_HelpersMask{}))), n_fn.value, locals_start, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                if (s_body.kind)
                {
                    s_body.items.splice(0, 0, arg_defs);
                    return /*NRVO*/ s_body;
                }
                else
                    BUG_D9Hg55no("inline: no s_body.kind"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

            }
            else
                BUG_D9Hg55no("inline: arglen mismatch"_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

        }
        else if (args && is_ref_MvT8pzW6(type))
        {
            type.lifetime = Lifetime_test_UDGeBh5H(Lifetime_replaceArgsAtCallsite_mU7DzA3y(target, args, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort), true, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _current_fnort);
        };
    };
    /*MOV*/ s_SolvedNode callsite = SolvedNode_ltxQ8cxX(s_kind_call, type, s_Flags{}, debug, args, target, s_Helpers{}, _here);
    if ((target.modid < 0) || (target.modid == module.modid))
    {
        const s_kind k = GET_JhxATLIa(target, _scope, module, ctx, _helpers, _helpers_data, _here).kind;
        if ((k == s_kind_fn) || (k == s_kind_type))
        {
            add_itJnJlI8(EXT_mut_9B5b5lCK(target, module, _scope).callers, _current_fnort.index);
            detectRecursion_vzOL5MAZ(target, _scope, module, ctx, _helpers, _helpers_data, _here, options, _notes);
        };
    };
    return /*NRVO*/ callsite;
}

static bool applyConversion_1J8eUN5p(s_SolvedNode& arg, fu::view<s_Target> conversion, s_Module& module, s_Scope& _scope, const s_Context& ctx, const s_Target& _current_fnort, const s_Options& options, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_SolverNotes& _notes, s_CurrentFn& _current_fn, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    for (int i = 0; i < conversion.size(); i++)
    {
        const s_Target& t = conversion[i];
        if (EXT_onaILX8Q(t, module, _scope, ctx).min || (EXT_onaILX8Q(t, module, _scope, ctx).max && arg))
        {
            arg = CallerNode_f9MJt2Cf("__using.a"_fu, s_Target(t), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(arg) } }, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, _current_fnort, module, _scope, ctx, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
        }
        else
        {
            if (i)
                fail_F42afdck((("Bad conversion chain, non-leading nullary: `"_fu + GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here).name) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
            else if (arg)
                fail_F42afdck("Bad conversion chain, about to throw away an argnode."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
            else
            {
                arg = CallerNode_f9MJt2Cf("__using.b"_fu, s_Target(t), fu_VEC<s_SolvedNode>{}, (*(const fu_VEC<int>*)fu::NIL), fu::view<fu_VEC<s_Target>>{}, _current_fnort, module, _scope, ctx, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
            };
        };
        if (is_never_ZFEUWUgI(arg.type))
            return true;

    };
    return false;
}

static s_Type convertToSuperType_aJbEq7cm(fu::view<char> topic, s_SolvedNode& a, s_SolvedNode& b, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName)
{

    {
        /*MOV*/ s_Type super = type_trySuper_0a4boBJ8(a.type, b.type, bool{});
        if (super)
            return /*NRVO*/ super;

    };

    {
        s_Type aRetype = tryRetyping_dostIVUx(a, b.type, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
        s_Type bRetype = tryRetyping_dostIVUx(b, a.type, _helpers, _helpers_data, _scope, module, ctx, _here, t_string);
        if (aRetype)
        {
            if (bRetype)
                fail_F42afdck(((((topic + ": Type ambiguity, literals can be retyped both ways: "_fu) + humanizeType_PJ01PlxR(a.type, module, ctx)) + " <-> "_fu) + humanizeType_PJ01PlxR(b.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
            else
            {
                /*MOV*/ s_Type super = type_trySuper_0a4boBJ8(aRetype, b.type, bool{});
                if (super)
                {
                    applyRetype_RC0duBkd(a, aRetype);
                    return /*NRVO*/ super;
                };
            };
        };
        if (bRetype)
        {
            /*MOV*/ s_Type super = type_trySuper_0a4boBJ8(bRetype, a.type, bool{});
            if (super)
            {
                applyRetype_RC0duBkd(b, bRetype);
                return /*NRVO*/ super;
            };
        };
    };

    {
        fu_VEC<s_Target> aConv = tryConvert_rJdCmcwd(b.type, a.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _helpers, _helpers_data, module, ctx, _here, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName);
        fu_VEC<s_Target> bConv = tryConvert_rJdCmcwd(a.type, b.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _helpers, _helpers_data, module, ctx, _here, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName);
        if (aConv)
        {
            if (bConv)
                fail_F42afdck(((((topic + ": Type ambiguity, conversions exist both ways: "_fu) + humanizeType_PJ01PlxR(a.type, module, ctx)) + " <-> "_fu) + humanizeType_PJ01PlxR(b.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
            else
            {
                applyConversion_1J8eUN5p(a, aConv, module, _scope, ctx, _current_fnort, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
                return s_Type(b.type);
            };
        }
        else if (bConv)
        {
            applyConversion_1J8eUN5p(b, bConv, module, _scope, ctx, _current_fnort, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
            return s_Type(a.type);
        };
    };
    fail_F42afdck(((((topic + ": No common supertype: "_fu) + humanizeType_PJ01PlxR(a.type, module, ctx)) + " <-> "_fu) + humanizeType_PJ01PlxR(b.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static s_SolvedNode createIf_olZB9aMW(const s_SolvedNode& cond, /*MOV*/ s_SolvedNode&& cons, /*MOV*/ s_SolvedNode&& alt, s_Type&& type, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName)
{
    if (!is_void_ZFEUWUgI(type))
    {
        type = convertToSuperType_aJbEq7cm("if/else"_fu, cons, alt, _helpers, _helpers_data, _scope, module, ctx, _here, t_string, TODO_FIX_convert_args, _ss, _field_items, _specs, _root_scope, _current_fn, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName);
    };
    if (is_never_ZFEUWUgI(cons.type) && is_never_ZFEUWUgI(alt.type))
        type = t_never;

    return SolvedNode_ltxQ8cxX(s_kind_if, (type ? type : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)), s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { s_SolvedNode(cond), static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt) } }, s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode createBlock_7yOivmtL(const s_Type& type, fu_VEC<s_SolvedNode>&& items, const s_Helpers& h, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_CurrentFn& _current_fn, const s_Options& options, s_SolverNotes& _notes, fu_VEC<fu_STR>& _spec_errors, const s_Target& _current_fnort, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    for (int x = 0; x < items.size(); x++)
    {
        if (!items[x].kind)
            fu::fail(x7E_YP7BiSZZ("createBlock.before-flatten.items: no kind on item #"_fu, fu::i64dec(x)));

    };
    if (_here && (_helpers.size() > 10000001))
        fu::fail(x7E_YP7BiSZZ("woot: "_fu, fu::i64dec(_helpers.size())));
    else
    {
        for (int i = items.size(); i-- > 0; )
        {
            s_SolvedNode& item = items.mutref(i);
            const s_kind k = item.kind;
            if (k == s_kind_block)
            {
                if (if_last_l6T9uEqE(item.items).kind == s_kind_unwrap)
                {
                    relinkJumps_DPgUWGRy(h, item, _helpers_data, _scope, module);
                    items.splice(i, 1, fu::slice(item.items, 0, (i - 1)));
                };
            }
            else if ((k == s_kind_empty) || (k == s_kind_bool))
            {
                if ((i < (items.size() - 1)) || ((i > 0) && is_void_ZFEUWUgI(item.type) && is_void_ZFEUWUgI(items[(i - 1)].type)))
                    items.splice(i, 1);

            };
        };
        if (h && (if_last_l6T9uEqE(items).kind == s_kind_block))
            relinkJumps_DPgUWGRy(h, last_sQklljcv(items), _helpers_data, _scope, module);

        if (OPTI_flatten_blocks)
        {
            while (items.size())
            {
                const s_SolvedNode& tail = last_l6T9uEqE(items);
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
            s_SolvedNode& last = last_sQklljcv(items);
            if ((last.kind == s_kind_jump) && (last.helpers == h) && !(s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask_HM_Function)) && !is_void_ZFEUWUgI(only_l6T9uEqE(last.items).type)))
            {
                last = only_l6T9uEqE(last.items);
            };
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
                    item = only_l6T9uEqE(item.items);
                    if (!(is_void_ZFEUWUgI(item.type) && (i_1 < (items.size() - 1))))
                    {
                        items += createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here);
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
                    if (is_never_ZFEUWUgI(last_l6T9uEqE(n.items).type))
                    {
                        /*MOV*/ fu_VEC<s_SolvedNode> cond = fu::slice(n.items, 0, (n.items.size() - 1));
                        /*MOV*/ s_SolvedNode cons { n.items[(n.items.size() - 1)] };
                        fu_VEC<s_SolvedNode> alt = fu::slice(items, (i_2 + 1), (items.size() - empties));
                        items.splice((i_2 + 1), alt.size());
                        s_SolvedNode cond_1 = ((k == s_kind_and) ? createAnd_fnZkGcX8(cond, s_Type(t_bool), _here) : createOr_vwmdrQyS(static_cast<fu_VEC<s_SolvedNode>&&>(cond), s_Type(t_bool), _here));
                        /*MOV*/ s_SolvedNode alt_1 = createBlock_7yOivmtL(last_l6T9uEqE(alt).type, fu_VEC<s_SolvedNode>(alt), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module, ctx, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
                        s_SolvedNode _0 {};
                        /*MOV*/ s_SolvedNode replacement = (_0 = s_SolvedNode(((k == s_kind_and) ? cons : alt_1)), createIf_olZB9aMW(cond_1, static_cast<s_SolvedNode&&>(_0), static_cast<s_SolvedNode&&>(((k == s_kind_and) ? alt_1 : cons)), s_Type((empties ? t_void : (*(const s_Type*)fu::NIL))), _helpers, _helpers_data, _scope, module, ctx, _here, t_string, TODO_FIX_convert_args, _ss, _field_items, _specs, _root_scope, _current_fn, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName));
                        items.mutref(i_2) = static_cast<s_SolvedNode&&>(replacement);
                    };
                };
            };
        };
        if (!s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask((s_HelpersMask_HM_LabelUsed | s_HelpersMask_HM_KeepBlock)))) && (items.size() == 1))
            return s_SolvedNode(only_l6T9uEqE(items));
        else
        {
            return SolvedNode_ltxQ8cxX(s_kind_block, type, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, h, _here);
        };
    };
}

static s_SolvedNode deadCall_emET5nsg(const fu_VEC<s_SolvedNode>& args, const s_Options& options, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_SolverNotes& _notes, const s_Type& t_string, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_CurrentFn& _current_fn, fu_VEC<fu_STR>& _spec_errors, const s_Target& _current_fnort, s_ScopeMemo& _root_scope, s_Map_RnDv9VM4mhf& _specs, fu_VEC<s_Warning>& _warnings, const fu_STR& shortModuleName)
{
    makeNote_hsfuVyUh(s_SolverNotes_N_DeadCall, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
    return createBlock_7yOivmtL(t_never, fu_VEC<s_SolvedNode>(args), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module, ctx, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
}

                                #ifndef DEF_map_f6QMlpCMEpk
                                #define DEF_map_f6QMlpCMEpk
inline fu_VEC<fu_STR> map_f6QMlpCM(fu::view<s_SolvedNode> a, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = humanizeType_PJ01PlxR(a[i].type, module, ctx);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_NaazSXrklU3
                                #define DEF_join_NaazSXrklU3
inline fu_STR join_NaazSXrk(fu::view<fu_STR> a, fu::view<char> sep)
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

static s_Target match__mutargs_QpdnpD53(const s_Scope& misc_scope, const bool local_scope, const fu_STR& id, fu::view<s_SolvedNode> args, fu_VEC<int>& reorder, fu_VEC<fu_VEC<s_Target>>& conversions, const s_Flags flags, const s_Target& target, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, fu_VEC<s_ScopeItem>& _field_items, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, s_CurrentFn& _current_fn, const s_Type& t_string, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName)
{
    /*MOV*/ fu_STR error {};
    /*MOV*/ const s_Target ret = tryMatch__mutargs_wMm8PACJ(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName);
    if (ret)
        return /*NRVO*/ ret;
    else
    {
        error = (((("Bad call to "_fu + qID_ThvlUeXJ(id)) + " ("_fu) + join_NaazSXrk(map_f6QMlpCM(args, module, ctx), ", "_fu)) + "): "_fu);
        const s_Target debug = tryMatch__mutargs_wMm8PACJ(fu_STR(id), reorder, conversions, error, local_scope, misc_scope, args, flags, target, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName);
        if (debug)
            BUG_D9Hg55no(("Did match on second pass: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(debug, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)), _helpers, _helpers_data, _scope, module, ctx, _here);
        else
            fail_F42afdck(static_cast<fu_STR&&>(error), _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

static s_SolvedNode solveCall_4PPXPXkI(const s_Node& node, const s_Target& target, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    /*MOV*/ fu_VEC<s_SolvedNode> args = solveNodes_uMJCZqge(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (is_never_ZFEUWUgI(if_last_l6T9uEqE(args).type))
        return deadCall_emET5nsg(args, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
    else
    {
        fu_STR id { node.value };
        if (!id)
        {
            if (!(target))
            {
                BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
            };
        };
        const s_Flags qualified = (node.flags & s_Flags_F_COMPOUND_ID);
        const s_Scope& misc_scope = (qualified ? dequalify_andGetScope_1xTN6Bg5(id, _helpers, _helpers_data, _scope, module, ctx, _here) : (*(const s_Scope*)fu::NIL));
        fu_VEC<int> reorder {};
        fu_VEC<fu_VEC<s_Target>> conversions {};
        /*MOV*/ const s_Target callTargIdx = match__mutargs_QpdnpD53(misc_scope, !qualified, id, args, reorder, conversions, node.flags, target, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName);
        return CallerNode_f9MJt2Cf(node.value, s_Target(callTargIdx), static_cast<fu_VEC<s_SolvedNode>&&>(args), reorder, conversions, _current_fnort, module, _scope, ctx, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
    };
}

static s_Type evalTypeAnnot_Rs0Ayhy7(const s_Node& node, const s_Map_087aZo54YWi& typeParams, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (node.kind == s_kind_call)
    {
        fu::view<s_Node> items = node.items;
        if (items.size() == 1)
        {
            if (node.value == "&"_fu)
            {
                s_Type _0 {};
                return (_0 = T_tZNU7Ast(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), add_ref_8kJD1Pzg(static_cast<s_Type&&>(_0), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            }
            else if (node.value == "&mut"_fu)
            {
                s_Type _1 {};
                return (_1 = T_tZNU7Ast(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), add_mutref_8kJD1Pzg(static_cast<s_Type&&>(_1), Lifetime_temporary_8nlJDPX0(), _here, ctx));
            }
            else if (node.value == "[]"_fu)
            {
                s_Type _2 {};
                return (_2 = T_tZNU7Ast(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), createArray_9gHYdovL(static_cast<s_Type&&>(_2), _here, ctx));
            };
        };
        return solveCall_4PPXPXkI(node, s_Target{}, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items).type;
    }
    else if (node.kind == s_kind_typeparam)
        return s_Type(evalTypeParam_hwhV1iaP(node.value, typeParams, _helpers, _helpers_data, _scope, module, ctx, _here, _ss));
    else if ((node.kind == s_kind_arrlit) && (node.items.size() == 1))
    {
        s_Type _3 {};
        return (_3 = T_tZNU7Ast(0, node, typeParams, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), createSlice_8kJD1Pzg(static_cast<s_Type&&>(_3), Lifetime_temporary_8nlJDPX0(), _here, ctx));
    };
    return solveNode_f7LszhQF(node, (*(const s_Type*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items).type;
}

                                #ifndef DEF_STRUCT_MEMBERS
                                #define DEF_STRUCT_MEMBERS
inline constexpr int STRUCT_MEMBERS = 1;
                                #endif

static s_SolvedNode solveMember_qMR7IiYH(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const bool isPrimDecl, const s_Type& primType, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (node.kind == s_kind_let)
    {
        if (!isPrimDecl && node.items[LET_INIT] && (node.items[LET_INIT].kind != s_kind_definit))
            fail_F42afdck(((("All structs must be zerofilled by default."_fu + " Please remove the initializer of struct member `"_fu) + node.value) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
        else
            return solveLetLike_dontTouchScope_i0yzSZn0(node, (*(const s_Type*)fu::NIL), primType, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

    }
    else
        BUG_D9Hg55no(x7E_YP7BiSZZ("solveStructMembers_1: "_fu, str_x2XZ9C2m(node.kind)), _helpers, _helpers_data, _scope, module, ctx, _here);

}

                                #ifndef DEF_map_pAPb85ksPHd
                                #define DEF_map_pAPb85ksPHd
inline fu_VEC<s_SolvedNode> map_pAPb85ks(fu::view<s_Node> a, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, const bool isPrimDecl, const s_Type& primType, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    /*MOV*/ fu_VEC<s_SolvedNode> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = solveMember_qMR7IiYH(a[i], _helpers, _helpers_data, _scope, module, ctx, _here, isPrimDecl, primType, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_each_oFEOOAMixF1
                                #define DEF_each_oFEOOAMixF1
inline void each_oFEOOAMi(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, fu_VEC<int>& structImports)
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
                add_itJnJlI8(structImports, import);
            };
            i0 = ss.end;
        };
    };
}
                                #endif

static s_SolvedNode __solveStruct_Gmi1QLIO(const bool solve, const s_Node& node, const s_Target& into, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const fu_STR& origId = node.value;
    fu_STR _0 {};
    fu_STR name = (origId ? fu_STR(origId) : (_current_fn.out.target ? (((_0 = fu_STR(GET_JhxATLIa(_current_fn.out.target, _scope, module, ctx, _helpers, _helpers_data, _here).name)) ? static_cast<fu_STR&&>(_0) : "Anon"_fu) + (GET_JhxATLIa(_current_fn.out.target, _scope, module, ctx, _helpers, _helpers_data, _here).sighash ? ("_"_fu + GET_JhxATLIa(_current_fn.out.target, _scope, module, ctx, _helpers, _helpers_data, _here).sighash) : fu_STR{})) : fu_STR{}));
    const s_kind kind = node.kind;
    const bool isStruct = (kind == s_kind_struct);
    const bool isUnion = (!isStruct && (kind == s_kind_union));
    const bool isPrimDecl = (!isStruct && !isUnion);
    /*MOV*/ s_Type basePrimType {};
    fu_STR baseprim {};
    if (isPrimDecl)
    {
        const s_Node& baseannot = node.items[STRUCT_BASE];
        basePrimType = (baseannot ? evalTypeAnnot_Rs0Ayhy7(baseannot, (*(const s_Map_087aZo54YWi*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_Type(t_u8));
        baseprim = getBasePrimitive_UfpqgUHG(basePrimType, module, ctx);
    };
    s_Target out_target { into };
    /*MOV*/ s_Type out_type {};
    if (out_target)
    {
        out_type = GET_JhxATLIa(out_target, _scope, module, ctx, _helpers, _helpers_data, _here).type;
    }
    else
    {
        out_type = initStruct_L8nBbfTc(kind, baseprim, name, node.asserts, module);
        out_target = Scope_Typedef_FdOSYsLU(_scope, origId, out_type, node.flags, name, s_SolverStatus_SS_LAZY, module);
        EXT_mut_9B5b5lCK(out_target, module, _scope).tEmplate = createTemplate_uO2Ck5ws(node, _current_fn, _scope, _helpers, _ss);
    };
    if (!solve)
        return createEmpty_yAvEtBa3(s_kind_empty, out_type, out_target, _here);
    else
    {
        const s_Target& _current_fnort_1 = out_target;
        GET_mut_5Ue5IxE1(out_target, _scope, module).status |= s_SolverStatus_SS_DID_START;
        const int helpers0 = _helpers.size();
        const int helpers_data0 = _helpers_data.size();
        fu_DEFER(
        {
            _helpers.shrink(helpers0);
            _helpers_data.shrink(helpers_data0);
        });
        push_47mX1hUW(s_HelpersData { s_Target((out_target ? out_target : BUG_D9Hg55no((("solveStruct: no out_target: `"_fu + origId) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here))), s_SolverPass{}, fu_STR{}, s_HelpersMask_HM_Struct, 0, 0, s_Type{}, s_Type{} }, _helpers, _helpers_data);
        /*MOV*/ fu_VEC<s_Target> structConverts {};
        /*MOV*/ fu_VEC<int> structImports {};
        int flat_cnt {};
        bool all_triv = !!is_rx_copy_MvT8pzW6(out_type);
        const s_Type& primType = (isPrimDecl ? (out_type ? out_type : BUG_D9Hg55no("Falsy isPrimDecl.out_type"_fu, _helpers, _helpers_data, _scope, module, ctx, _here)) : (*(const s_Type*)fu::NIL));
        fu::view<s_Node> items = node.items[STRUCT_MEMBERS].items;
        fu_VEC<s_SolvedNode> members = map_pAPb85ks(items, _helpers, _helpers_data, _scope, module, ctx, _here, isPrimDecl, primType, _current_fn, _warnings, _current_fnort_1, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);

        {
            fu_VEC<s_ScopeItem>& innerScope = lookupStruct_mut_KqcnL3sY(out_type.vtype.canon, module).items;
            if (!innerScope && members)
            {
                fu_VEC<s_Argument> args = (!isPrimDecl ? fu_VEC<s_Argument> { fu::slate<1, s_Argument> { s_Argument { "this"_fu, fu_STR{}, despeculateStruct_MwGOv57o(s_Type(out_type)), s_SolvedNode{}, s_Flags{}, 0, s_BitSet{}, s_BitSet{} } } } : fu_VEC<s_Argument>{});
                for (int i = 0; i < members.size(); i++)
                {
                    const fu_STR& id = items[i].value;
                    const s_Flags isPredicate = (items[i].flags & s_Flags_F_PREDICATE);
                    const s_Target target = Scope_create_v4rjZGCu(_scope, (args ? s_kind_field : s_kind_enumv), (id ? id : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here)), (*(const s_Type*)fu::NIL), (s_Flags_F_PUB | isPredicate), s_SolverStatus{}, 0, module);
                    s_Extended& ext = EXT_mut_9B5b5lCK(target, module, _scope);
                    ext.args = args;
                    ext.min = args.size();
                    ext.max = args.size();
                    Scope_set_5KbqLH2z(innerScope, id, target, false);
                };
                if (isPrimDecl)
                    _scope.items += innerScope;
                else
                    _field_items += innerScope;

            };
            if (innerScope.size() == members.size())
            {
                for (int i = 0; i < innerScope.size(); i++)
                {
                    const s_ScopeItem& item = innerScope[i];
                    const s_SolvedNode& member = members[i];
                    if (item.id == member.value)
                    {
                        s_Overload& field = GET_mut_5Ue5IxE1(target_xni9Jmtc(item), _scope, module);
                        field.type = member.type;
                        int _1 {};
                        flat_cnt += ((_1 = int(tryLookupStruct_3ZVvGB0M(member.type, module, ctx).flat_cnt)) ? _1 : 1);
                        if (all_triv)
                            all_triv = is_trivial_3ZVvGB0M(member.type, module, ctx);

                        if (member.flags & s_Flags_F_USING)
                        {
                            structConverts.push(target_xni9Jmtc(item));
                            const int m = modidOfOrigin_jHe6RDpE(field.type);
                            if (m && (m != module.modid))
                                add_itJnJlI8(structImports, m);

                            add_Lh1Id3Vs(structImports, lookupTypeImports_3ZVvGB0M(field.type, module, ctx));
                        };
                    }
                    else
                        BUG_D9Hg55no("solveStructMembers_4: field id mismatch."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

                };
                if (isPrimDecl)
                {
                    const bool sIgned = (baseprim[0] == 'i');
                    const bool uNsigned = (baseprim[0] == 'u');
                    fu::view<char> size_str = fu::get_view(baseprim, 1, baseprim.size());
                    const fu::u8 size = ((size_str == "8"_fu) ? fu::u8(8u) : ((size_str == "16"_fu) ? fu::u8(16u) : ((size_str == "32"_fu) ? fu::u8(32u) : ((size_str == "64"_fu) ? fu::u8(64u) : ((size_str == "128"_fu) ? fu::u8(128u) : BUG_D9Hg55no(("Enum auto-incrementer: unknown prim size: "_fu + size_str), _helpers, _helpers_data, _scope, module, ctx, _here))))));
                    s_Intlit last {};
                    for (int i_1 = 0; i_1 < innerScope.size(); i_1++)
                    {
                        s_SolvedNode& init = GET_mut_5Ue5IxE1(target_xni9Jmtc(innerScope[i_1]), _scope, module).solved;
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
                                    fail_F42afdck(fu_STR(last.error), _helpers, _helpers_data, _scope, module, ctx, _here);
                                else
                                    continue;

                            }
                            else
                                last.error = "Cannot auto-increment, please provide an explicit value."_fu;

                        };
                        if (last.error)
                            fail_F42afdck(fu_STR(last.error), _helpers, _helpers_data, _scope, module, ctx, _here);
                        else if (last.negative)
                        {
                            fail_F42afdck("Previous constant is negative, not sure how to increment, please specify an explicit value."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
                        }
                        else
                        {
                            /*MOV*/ s_Intlit next = Intlit_V3Khstyl(((kind == s_kind_flags) ? (i_1 ? (last.absval << 1ull) : 1ull) : (last.absval + 1ull)), bool{}, fu_STR{}, uNsigned, sIgned, 10ull);
                            if (next.error || (next.absval > last.absval))
                            {
                                const fu::u8 minsize = (sIgned ? next.minsize_i : next.minsize_u);
                                if (minsize > size)
                                    BUG_D9Hg55no((x7E_YP7BiSZZ((x7E_YP7BiSZZ("Primitive range exhausted: requires "_fu, fu::u64dec(minsize)) + " bits, got "_fu), fu::u64dec(size)) + "."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
                                else
                                {
                                    last = next;
                                    if (sIgned || uNsigned)
                                    {
                                        init = SolvedNode_ltxQ8cxX(s_kind_int, primType, s_Flags{}, x7E_YP7BiSZZ((next.negative ? "-"_fu : fu_STR{}), fu::u64dec(next.absval)), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
                                    }
                                    else
                                        fail_F42afdck(("Cannot auto-increment this type: "_fu + baseprim), _helpers, _helpers_data, _scope, module, ctx, _here);

                                };
                            }
                            else
                                fail_F42afdck((next.error ? static_cast<fu_STR&&>(next.error) : "Failed to auto-increment, range exhausted."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

                        };
                    };
                };
            }
            else
                BUG_D9Hg55no((((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ("solveStructMembers_3: field lens mismatch: "_fu, fu::i64dec(innerScope.size())) + " vs "_fu), fu::i64dec(members.size())) + "/"_fu), fu::i64dec(items.size())) + ": `struct "_fu) + name) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

        };
        each_oFEOOAMi(_scope.imports, _ss.imports, 0, structImports);

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
                s_Struct& s = lookupStruct_mut_KqcnL3sY(out_type.vtype.canon, module);
                s.target = (out_target ? out_target : BUG_D9Hg55no("No struct/out_target."_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
                s.converts = static_cast<fu_VEC<s_Target>&&>(structConverts);
                s.imports = static_cast<fu_VEC<int>&&>(structImports);
                const int flat0 = s.flat_cnt;
                const bool triv0 = s.all_triv;
                s.flat_cnt = flat_cnt;
                s.all_triv = all_triv;
                if (!(CHANGE))
                    CHANGE = ((flat0 != flat_cnt) || (triv0 != all_triv));

                if (!(GET_JhxATLIa(s.target, _scope, module, ctx, _helpers, _helpers_data, _here).status & s_SolverStatus_SS_DID_START))
                    BUG_D9Hg55no("Setting stuff but missing SS_DID_START."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

            };
            /*MOV*/ int min = 0;
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
                    /*MOV*/ s_Argument arg = s_Argument { fu_STR((member.value ? member.value : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here))), fu_STR{}, s_Type((member.type ? member.type : BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here))), ((_2 = s_SolvedNode(member.items[LET_INIT])) ? static_cast<s_SolvedNode&&>(_2) : (isUnion ? createDefinit_LoozlLx1(s_Type(member.type), _here, _helpers, _helpers_data, _scope, module, ctx) : s_SolvedNode{})), (member.flags & s_Flags_F_MUSTNAME), 0, s_BitSet{}, s_BitSet{} };
                    if (!arg.dEfault)
                        min++;

                    args.push(static_cast<s_Argument&&>(arg));
                };
            };
            /*MOV*/ const int max = args.size();
            if (max && !min)
                min++;

            s_Extended& ext = EXT_mut_9B5b5lCK(out_target, module, _scope);
            ext.min = int(min);
            ext.max = int(max);
            ext.args = static_cast<fu_VEC<s_Argument>&&>(args);
            const int mustUpdate = (CHANGE ? ext.callers.size() : int{});
            s_Overload& overload = GET_mut_5Ue5IxE1(out_target, _scope, module);
            overload.type = static_cast<s_Type&&>(out_type);
            if (mustUpdate)
                overload.status |= s_SolverStatus_SS_UPDATED;

        };
        lazySolveEnd_7R2yFqBO(out_target, _scope, module, ctx, _helpers, _helpers_data, _here, options, _notes, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort_1, _spec_errors, TODO_FIX_convert_args, shortModuleName, _field_items);
        return s_SolvedNode{};
    };
}

static s_SolvedNode uPrepStruct_TL61uTTc(const s_Node& node, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    return __solveStruct_Gmi1QLIO(false, node, s_Target{}, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
}

static s_SolvedNode unorderedPrep_A_af5Zo7XA(const s_Node& node, s_CurrentFn& _current_fn, s_Scope& _scope, s_Module& module, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, fu_VEC<s_Helpers>& _helpers, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_HelpersData>& _helpers_data, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_kind kind = node.kind;
    if (kind == s_kind_fn)
        return uPrepFn_A_3GcDYZuX(node, _current_fn, _scope, module, _ss, _root_scope, _helpers, _here);
    else if ((kind == s_kind_struct) || (kind == s_kind_union) || (kind == s_kind_primitive) || (kind == s_kind_enum) || (kind == s_kind_flags))
        return uPrepStruct_TL61uTTc(node, _current_fn, _scope, module, ctx, _helpers, _helpers_data, _here, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else
        BUG_D9Hg55no((x7E_YP7BiSZZ("TODO: unorderedPrep_A("_fu, str_x2XZ9C2m(node.kind)) + ")."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

}

static void uPrepFn_B_dzCyaQQi(const s_Target& target, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    s_Template& tEmplate = EXT_mut_9B5b5lCK(target, module, _scope).tEmplate;
    if (tEmplate.scope_memo && !(tEmplate.node.flags & s_Flags_F_CONVERSION))
        tEmplate.scope_memo = Scope_snap_XX7UzHbd(_scope, _helpers);

}

static void unorderedPrep_B_uro4TCWs(const s_Node& node, const s_Target& into, const s_Module& module, s_Scope& _scope, fu::view<s_Helpers> _helpers)
{
    const s_kind k = node.kind;
    if (k == s_kind_fn)
        uPrepFn_B_dzCyaQQi(into, module, _scope, _helpers);

}

static fu_VEC<s_SolvedNode> solveNodes_uMJCZqge(fu::view<s_Node> nodes, const s_Type& type_all, const s_Type& type_last, const bool use_type_last, const fu_STR& static_eval_brk, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    /*MOV*/ fu_VEC<s_SolvedNode> result {};
    /*MOV*/ const s_TokenIdx here0 { _here };
    fu_DEFER(_here = s_TokenIdx(here0));
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_Node& node = nodes[i];
        if (!node)
            continue;
        else
        {
            const int unorderedClass = unorderedClassify_cIqxGsrh(node.kind);
            if (!unorderedClass)
            {
                HERE_Zn8FXweg(node.token, _here);
                const bool last = (i == (nodes.size() - 1));
                const s_Type& type = ((last && use_type_last) ? type_last : type_all);
                s_SolvedNode solved = solveNode_f7LszhQF(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                result += s_SolvedNode(solved);
                if (is_never_ZFEUWUgI(solved.type))
                {
                    if (i < (nodes.size() - 1))
                        makeNote_hsfuVyUh(s_SolverNotes_N_DeadCode, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);

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
                    const s_Node& node_1 = (*(_0 = &(nodes[i_1])) ? *_0 : BUG_D9Hg55no("solveNodes, prep-a: falsy node"_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
                    if (unorderedClassify_cIqxGsrh(node_1.kind) != unorderedClass)
                    {
                        i1 = i_1;
                        break;
                    }
                    else
                    {
                        HERE_Zn8FXweg(node_1.token, _here);
                        result += unorderedPrep_A_af5Zo7XA(node_1, _current_fn, _scope, module, _ss, _root_scope, _helpers, _here, ctx, _helpers_data, _warnings, _current_fnort, _specs, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
                    };
                };
                if (i1 > i0)
                {
                    i = (i1 - 1);
                    for (int i_2 = i0; i_2 < i1; i_2++)
                    {
                        const s_Node* _1;
                        const s_Node& node_1 = (*(_1 = &(nodes[i_2])) ? *_1 : BUG_D9Hg55no("solveNodes, prep-b: falsy node"_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
                        HERE_Zn8FXweg(node_1.token, _here);
                        unorderedPrep_B_uro4TCWs(node_1, result[(i_2 + offset)].target, module, _scope, _helpers);
                    };
                    bool repeat = true;
                    while (repeat)
                    {
                        repeat = false;
                        for (int i_3 = i0; i_3 < i1; i_3++)
                        {
                            const s_Node* _2;
                            const s_Node& node_1 = (*(_2 = &(nodes[i_3])) ? *_2 : BUG_D9Hg55no("solveNodes, solve: falsy node"_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
                            HERE_Zn8FXweg(node_1.token, _here);
                            const s_Target& into = result[(i_3 + offset)].target;
                            if (lazySolveStart_vCoSTAS3(into, s_Overload(GET_JhxATLIa(into, _scope, module, ctx, _helpers, _helpers_data, _here)), _scope, module, _helpers, _helpers_data, ctx, _here, _specs, _ss, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items))
                                repeat = true;

                        };
                    };
                }
                else
                {
                    BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
                };
            };
        };
    };
    return /*NRVO*/ result;
}

static s_SolvedNode solveRoot_tLz32kCr(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_TokenIdx& _here, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_Helpers helpers = s_Helpers { _helpers.size() };
    push_47mX1hUW(s_HelpersData{}, _helpers, _helpers_data);
    fu_VEC<s_SolvedNode> items = solveNodes_uMJCZqge(node.items, t_void, (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (!is_never_ZFEUWUgI(last_l6T9uEqE(items).type))
    {
        /*MOV*/ s_SolvedNode root = SolvedNode_ltxQ8cxX(s_kind_root, t_void, s_Flags{}, (*(const fu_STR*)fu::NIL), items, s_Target{}, helpers, _here);
        runAllPasses_t8PbjGd1(root, _here, module, ctx, _helpers, _helpers_data, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        return /*NRVO*/ root;
    }
    else
    {
        _here = last_l6T9uEqE(items).token;
        fail_F42afdck("Noreturn during static init: this program will never finish booting."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

                                #ifndef DEF_only_lpa8XGDfwcf
                                #define DEF_only_lpa8XGDfwcf
inline const s_Node& only_lpa8XGDf(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_SolvedNode solveArgID_i9duhJmV(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    s_SolvedNode expr = solveNode_f7LszhQF(only_lpa8XGDf(node.items), type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    return solved_4DB11VJb(node, expr.type, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, _here);
}

static s_SolvedNode solveArrlit_bjbGaN96(const s_Node& node, const s_Type& type, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    s_Type itemType = (type ? tryClear_sliceable_MvT8pzW6(type) : s_Type{});
    if (!itemType && isStruct_jHe6RDpE(type))
        return solveCall_4PPXPXkI(node, s_Target(lookupStruct_3ZVvGB0M(type, module, ctx).target), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else
    {
        /*MOV*/ fu_VEC<s_SolvedNode> args = solveNodes_uMJCZqge(node.items, itemType, (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        if (is_never_ZFEUWUgI(if_last_l6T9uEqE(args).type))
        {
            makeNote_hsfuVyUh(s_SolverNotes_N_DeadArrlit, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
            return createBlock_7yOivmtL(t_never, static_cast<fu_VEC<s_SolvedNode>&&>(args), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module, ctx, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
        }
        else if (!(node.flags & s_Flags_F_NAMED_ARGS))
            return createArrlit_Z1URVVuo(static_cast<fu_VEC<s_SolvedNode>&&>(args), itemType, _helpers, _helpers_data, _scope, module, ctx, _here);
        else
            fail_F42afdck("TODO: solveArrlit: tryMatch by [ argnames: ... ] without function name."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);

    };
}

static s_SolvedNode popAndOr_s4bIYnbw(s_SolvedNode& node)
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

static s_SolvedNode if_A_and_NEVER_then_B_else_C_4kVhGsAI(const s_Options& options, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_SolverNotes& _notes, s_SolvedNode& cond)
{
    makeNote_hsfuVyUh(s_SolverNotes_N_DeadIfCons, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
    return popAndOr_s4bIYnbw(cond);
}

static s_SolvedNode solveIf_MsumPKzH(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    /*MOV*/ s_SolvedNode cond = solveNode_f7LszhQF(node.items[0], t_bool, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (cond.kind == s_kind_bool)
        return solveNode_f7LszhQF(node.items[((cond.value == "true"_fu) ? 1 : 2)], type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (is_never_ZFEUWUgI(cond.type))
    {
        makeNote_hsfuVyUh(s_SolverNotes_N_DeadIfCond, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
        return /*NRVO*/ cond;
    }
    else
    {
        /*MOV*/ s_SolvedNode cons = (((cond.kind == s_kind_and) && is_never_ZFEUWUgI(last_l6T9uEqE(cond.items).type)) ? if_A_and_NEVER_then_B_else_C_4kVhGsAI(options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes, cond) : solveBlock_7a90i7rV(node.items[1], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items));
        /*MOV*/ s_SolvedNode alt = solveBlock_7a90i7rV(node.items[2], type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        return createIf_olZB9aMW(cond, static_cast<s_SolvedNode&&>(cons), static_cast<s_SolvedNode&&>(alt), s_Type(type), _helpers, _helpers_data, _scope, module, ctx, _here, t_string, TODO_FIX_convert_args, _ss, _field_items, _specs, _root_scope, _current_fn, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName);
    };
}

static s_SolvedNode solveOr_um4R73DY(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_uMJCZqge(node.items, (is_void_ZFEUWUgI(type) ? t_bool : type), type, true, "true"_fu, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    return createOr_vwmdrQyS(static_cast<fu_VEC<s_SolvedNode>&&>(items), s_Type(type), _here);
}

static s_SolvedNode solveAnd_pXaD6MSI(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    fu_VEC<s_SolvedNode> items = solveNodes_uMJCZqge(node.items, (is_void_ZFEUWUgI(type) ? t_bool : type), type, true, "false"_fu, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    return createAnd_fnZkGcX8(items, s_Type(type), _here);
}

static s_SolvedNode solveLetStatement_1rc1cjCc(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (node.kind == s_kind_let)
        return solveNode_f7LszhQF(node, t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else
        BUG_D9Hg55no((x7E_YP7BiSZZ("Expected a `let` statement, got: `"_fu, str_x2XZ9C2m(node.kind)) + "`."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

}

static s_SolvedNode solveLoop_t38TMNfT(const s_Node& node, s_Scope& _scope, fu_VEC<s_Helpers>& _helpers, s_CurrentFn& _current_fn, const s_Target& _current_fnort, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_Warning>& _warnings, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_ScopeMemo scope0 = Scope_snap_XX7UzHbd(_scope, _helpers);
    fu_DEFER(Scope_pop_KQTgazm7(_scope, scope0, _helpers));
    const int brk_idx = _helpers.size();
    push_47mX1hUW(s_HelpersData { s_Target{}, s_SolverPass{}, fu_STR(node.value), s_HelpersMask((s_HelpersMask_HM_Anon | s_HelpersMask_HM_CanBreak)), int(_current_fn.out.target.index), GET_next_local_index_6CO4foiz(_current_fnort, _current_fn, _scope), s_Type{}, s_Type(t_void) }, _helpers, _helpers_data);
    const s_Node& n_init = node.items[LOOP_INIT];
    const s_Node& n_pre_cond = node.items[LOOP_COND];
    const s_Node& n_body = node.items[LOOP_BODY];
    const s_Node& n_post_cond = node.items[LOOP_POST_COND];
    const s_Node& n_post = node.items[LOOP_POST];
    /*MOV*/ s_SolvedNode init = (n_init ? solveLetStatement_1rc1cjCc(n_init, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
    if (is_never_ZFEUWUgI(init.type))
    {
        makeNote_hsfuVyUh(s_SolverNotes_N_DeadLoopInit, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
        return /*NRVO*/ init;
    }
    else
    {
        /*MOV*/ s_SolvedNode pre_cond = (n_pre_cond ? solveNode_f7LszhQF(n_pre_cond, t_bool, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode body = (n_body ? solveBlock_7a90i7rV(n_body, t_void, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post_cond = (n_post_cond ? solveNode_f7LszhQF(n_post_cond, t_bool, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
        /*MOV*/ s_SolvedNode post = (n_post ? solveNode_f7LszhQF(n_post, t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items) : s_SolvedNode{});
        const s_Helpers& h = _helpers[brk_idx];
        const s_Type& type = ((!pre_cond && !post_cond && !s_HelpersMask((_helpers_data[h.index].mask & s_HelpersMask_HM_LabelUsed))) ? t_never : t_void);
        return SolvedNode_ltxQ8cxX(s_kind_loop, type, s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<5, s_SolvedNode> { static_cast<s_SolvedNode&&>(init), static_cast<s_SolvedNode&&>(pre_cond), static_cast<s_SolvedNode&&>(body), static_cast<s_SolvedNode&&>(post_cond), static_cast<s_SolvedNode&&>(post) } }, s_Target{}, h, _here);
    };
}

static int Scope_lookupReturn_buWdCM51(const fu_STR& id, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
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
                    return /*NRVO*/ i;

            };
        };
    };
    fail_F42afdck((("No return `"_fu + id) + "` in scope."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static int Scope_lookupLabel_ZUi4D2ez(const fu_STR& id, const bool cont, fu::view<s_Helpers> _helpers, const s_ScopeSkipMemos& _ss, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
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
                    return /*NRVO*/ i;
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
                                fail_F42afdck((("Cannot continue to label `"_fu + id) + "` from here, did you mean to `break`?"_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

                        };
                    };
                    return /*NRVO*/ i;
                };
            };
        };
    };
    fail_F42afdck((("No label `"_fu + id) + "` in scope."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);
}

static s_SolvedNode createJump_8Y04H90F(const s_Helpers& h, const s_SolvedNode& expr, const s_TokenIdx& _here)
{
    return SolvedNode_ltxQ8cxX(s_kind_jump, t_never, s_Flags{}, (*(const fu_STR*)fu::NIL), fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(expr) } }, s_Target{}, h, _here);
}

static void injectJumps_6nSchzLo(const s_Helpers& h, s_SolvedNode& expr, const s_TokenIdx& _here)
{
    if ((expr.kind == s_kind_block) && expr.items)
    {
        s_SolvedNode& expr_1 = last_sQklljcv(expr.items);
        if (!is_never_ZFEUWUgI(expr_1.type))
            injectJumps_6nSchzLo(h, expr_1, _here);

    }
    else if (expr.kind == s_kind_if)
    {
        injectJumps_6nSchzLo(h, expr.items.mutref(1), _here);
        injectJumps_6nSchzLo(h, expr.items.mutref(2), _here);
        expr.type = t_never;
    }
    else
    {
        expr = createJump_8Y04H90F(h, expr, _here);
    };
}

static s_SolvedNode solveJump_rvcXZ5JW(const s_Node& node, fu_VEC<s_Helpers>& _helpers, s_ScopeSkipMemos& _ss, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const int helpers_idx = ((node.kind == s_kind_return) ? Scope_lookupReturn_buWdCM51(node.value, _helpers, _ss, _helpers_data, _scope, module, ctx, _here) : Scope_lookupLabel_ZUi4D2ez(node.value, (node.kind == s_kind_continue), _helpers, _ss, _helpers_data, _scope, module, ctx, _here));
    const s_Helpers h { _helpers[helpers_idx] };
    const s_Type* _0;
    /*MOV*/ s_SolvedNode expr = (!node.items ? createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here) : solveNode_f7LszhQF(only_lpa8XGDf(node.items), s_Type((*(_0 = &(_helpers_data[h.index].ret_actual)) ? *_0 : _helpers_data[h.index].ret_expect)), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items));
    if (is_never_ZFEUWUgI(expr.type))
        return /*NRVO*/ expr;
    else if (_helpers_data[h.index].local_of != _current_fn.out.target.index)
    {
        add_itJnJlI8(_current_fn.effects.far_jumps, _helpers_data[h.index].local_of);
        return createEmpty_yAvEtBa3(s_kind___far_jump, t_never, s_Target{}, _here);
    }
    else
    {
        _helpers_data.mutref(h.index).mask |= s_HelpersMask_HM_LabelUsed;
        reportReturnType_YKElz9tS(h, expr.type, ((node.flags & s_Flags_F_IMPLICIT) && !node.items), _here, ctx, _helpers_data, _current_fnort, module, _scope, _helpers);
        if (is_void_ZFEUWUgI(expr.type) && (node.flags & s_Flags_F_IMPLICIT))
            return /*NRVO*/ expr;
        else
        {
            relinkJumps_DPgUWGRy(h, expr, _helpers_data, _scope, module);
            injectJumps_6nSchzLo(h, expr, _here);
            return /*NRVO*/ expr;
        };
    };
}

static s_SolvedNode solveInt_QRKSFR3y(const s_Node& node, const s_Type& type, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    return solved_4DB11VJb(node, solveInt_h1QHUMDM(node.value, type, _helpers, _helpers_data, _scope, module, ctx, _here), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveReal_GKnTXB9B(const s_Node& node, const s_Type& type, const s_TokenIdx& _here)
{
    return solved_4DB11VJb(node, solveReal_ykxfpy51(node.value, type), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveString_qV4HqGt7(const s_Node& node, const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Type& t_string, const s_TokenIdx& _here, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope)
{
    s_Type type_1 = solveString_z5AbYQIw(node.value, type, module, ctx, t_string);
    if (!node.value && type_isSliceable_ZFEUWUgI(t_string))
    {
        return createDefinit_LoozlLx1(add_ref_8kJD1Pzg(s_Type(t_string), Lifetime_temporary_8nlJDPX0(), _here, ctx), _here, _helpers, _helpers_data, _scope, module, ctx);
    }
    else
    {
        return solved_4DB11VJb(node, type_1, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
    };
}

static s_SolvedNode solveChar_CCqUpIFu(const s_Node& node, const s_TokenIdx& _here)
{
    return solved_4DB11VJb(node, t_byte, (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static s_SolvedNode solveDefinit_MKaX2tAx(const s_Type& type, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_TokenIdx& _here)
{
    s_Type _0 {};
    return createDefinit_LoozlLx1(((_0 = trySolveDefinit_1AEtthiT(type)) ? static_cast<s_Type&&>(_0) : fail_F42afdck(("Cannot definit type: "_fu + humanizeType_PJ01PlxR(type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here)), _here, _helpers, _helpers_data, _scope, module, ctx);
}

static s_SolvedNode solveImport_sXg1tYW5(const s_Node& node, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, s_Scope& _scope, const s_Module& module, const s_TokenIdx& _here, const s_ScopeSkipMemos& _ss)
{
    const s_Module& m = findModule_nN6bxOYA(node.value, ctx, _helpers, _helpers_data, _scope, module, _here);
    Scope_import_duP3krTl(m.modid, _scope, _ss, _helpers, _helpers_data, module, ctx, _here);
    return createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveDefer_ZBp5ZBOm(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    /*MOV*/ s_SolvedNode item = solveNode_f7LszhQF(only_lpa8XGDf(node.items), t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    return solved_4DB11VJb(node, t_void, fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(item) } }, s_Target{}, _here);
}

static s_SolvedNode solveTryCatch_K1rVoCSJ(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (node.items.size() == 3)
    {
        const s_ScopeMemo scope0 = Scope_snap_XX7UzHbd(_scope, _helpers);
        /*MOV*/ s_SolvedNode tRy = solveNode_f7LszhQF(node.items[0], t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        Scope_pop_KQTgazm7(_scope, scope0, _helpers);
        const s_ScopeMemo scope0_1 = Scope_snap_XX7UzHbd(_scope, _helpers);
        /*MOV*/ s_SolvedNode err = solveLetStatement_1rc1cjCc(node.items[1], _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        /*MOV*/ s_SolvedNode cAtch = solveNode_f7LszhQF(node.items[2], t_void, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
        Scope_pop_KQTgazm7(_scope, scope0_1, _helpers);
        if ((err.kind == s_kind_letdef) && isAssignableAsArgument_0a4boBJ8(GET_JhxATLIa(err.target, _scope, module, ctx, _helpers, _helpers_data, _here).solved.type, t_string, bool{}))
        {
            const s_Type& type = ((is_never_ZFEUWUgI(tRy.type) && is_never_ZFEUWUgI(cAtch.type)) ? t_never : t_void);
            return solved_4DB11VJb(node, type, fu_VEC<s_SolvedNode> { fu::slate<3, s_SolvedNode> { static_cast<s_SolvedNode&&>(tRy), static_cast<s_SolvedNode&&>(err), static_cast<s_SolvedNode&&>(cAtch) } }, s_Target{}, _here);
        }
        else
            fail_F42afdck(("catch: exceptions are strings,"_fu + " consider dropping the annotation."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

    }
    else
    {
        BUG_D9Hg55no(fu_STR{}, _helpers, _helpers_data, _scope, module, ctx, _here);
    };
}

static s_SolvedNode solveTypedef_FDueUNoz(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    s_Type annot = evalTypeAnnot_Rs0Ayhy7(only_lpa8XGDf(node.items), (*(const s_Map_087aZo54YWi*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (isStruct_jHe6RDpE(annot))
        Scope_set_zPiiGt2T(_scope, node.value, lookupStruct_3ZVvGB0M(annot, module, ctx).target, false);
    else
    {
        Scope_Typedef_FdOSYsLU(_scope, node.value, annot, node.flags, (*(const fu_STR*)fu::NIL), s_SolverStatus{}, module);
    };
    return createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here);
}

static s_SolvedNode solveTypeCast_YH5zRwK2(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    const s_Node& left = node.items[0];
    const s_Node& right = node.items[1];
    s_Type expect = evalTypeAnnot_Rs0Ayhy7(right, (*(const s_Map_087aZo54YWi*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    /*MOV*/ s_SolvedNode actual = solveNode_f7LszhQF(left, expect, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (isAssignable_b2EdYOvX(expect, actual.type, bool{}, bool{}))
        return /*NRVO*/ actual;
    else
    {
        fu_VEC<s_Target> conv = tryConvert_rJdCmcwd(expect, actual.type, (*(const s_SolvedNode*)fu::NIL), true, (*(const s_Scope*)fu::NIL), _scope, TODO_FIX_convert_args, _ss, _helpers, _helpers_data, module, ctx, _here, _field_items, _specs, _root_scope, _current_fn, t_string, _warnings, _current_fnort, _spec_errors, options, _notes, shortModuleName);
        if (!conv)
            fail_F42afdck(((("Cannot convert: "_fu + humanizeType_PJ01PlxR(expect, module, ctx)) + " <- "_fu) + humanizeType_PJ01PlxR(actual.type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
        else
        {
            applyConversion_1J8eUN5p(actual, conv, module, _scope, ctx, _current_fnort, options, _helpers, _helpers_data, _here, _notes, _current_fn, _ss, _field_items, TODO_FIX_convert_args, t_string, _spec_errors, _root_scope, _specs, _warnings, shortModuleName);
            return /*NRVO*/ actual;
        };
    };
}

static s_SolvedNode createBool_Pf5QXSvf(const bool value, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    return createBool_YeGIVpPL((value ? "true"_fu : "false"_fu), t_bool, _helpers, _helpers_data, _scope, module, ctx, _here);
}

static s_SolvedNode solveTypeAssert_P4beSQEM(const s_Node& node, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Scope& _scope, s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_ScopeSkipMemos& _ss, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    s_Map_087aZo54YWi typeParams {};
    bool _0 {};
    return (_0 = evalTypePattern_z4KdfH2s(node, typeParams, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), createBool_Pf5QXSvf(bool(_0), _helpers, _helpers_data, _scope, module, ctx, _here));
}

static s_SolvedNode solveTypeParam_14DiUMIG(const s_Node& node, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_ScopeSkipMemos& _ss)
{
    return solved_4DB11VJb(node, evalTypeParam_hwhV1iaP(node.value, (*(const s_Map_087aZo54YWi*)fu::NIL), _helpers, _helpers_data, _scope, module, ctx, _here, _ss), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, _here);
}

static void visitScope_5qt03hb1(fu::view<s_ScopeItem> items, const bool shadow, fu::view<char> id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    int scope_iterator {};
    s_Target target {};
    bool shadows {};
    while (!shadow && (target = search_nKIDIgU2(items, id, scope_iterator, _ss.items, shadows, s_Target{}, fu::view<s_Target>{}, fu::view<s_ScopeItem>{})))
    {
        result.unshift(s_Target(target));
    };
}

                                #ifndef DEF_each_xabUTlG36g3
                                #define DEF_each_xabUTlG36g3
inline void each_xabUTlG3(fu::view<s_Struct> a, const bool shadow, fu::view<char> id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Struct& sTruct = a[i];
        visitScope_5qt03hb1(sTruct.items, shadow, id, _ss, result);
    };
}
                                #endif

static void visitTypes_eMbuJfgx(const s_Module& module, const bool shadow, fu::view<char> id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
{
    each_xabUTlG3(module.out.types, shadow, id, _ss, result);
}

                                #ifndef DEF_each_vPRj1sLAnH9
                                #define DEF_each_vPRj1sLAnH9
inline void each_vPRj1sLA(fu::view<int> items, fu::view<s_ScopeSkip> scope_skip, const int start, const s_Context& ctx, const bool shadow, fu::view<char> id, const s_ScopeSkipMemos& _ss, fu_VEC<s_Target>& result)
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
                visitTypes_eMbuJfgx(ctx.modules[import], shadow, id, _ss, result);
            };
            i0 = ss.end;
        };
    };
}
                                #endif

static fu_VEC<s_Target> solveAddrOfFn_Feg3AG82(fu::view<char> id, const s_Flags flags, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    const bool shadow = false;
    /*MOV*/ fu_VEC<s_Target> result {};
    visitScope_5qt03hb1(_scope.items, shadow, id, _ss, result);
    if (flags & s_Flags_F_ACCESS)
    {
        visitTypes_eMbuJfgx(module, shadow, id, _ss, result);
        each_vPRj1sLA(_scope.imports, _ss.imports, 0, ctx, shadow, id, _ss, result);
    };
    return static_cast<fu_VEC<s_Target>&&>((result ? result : fail_F42afdck((("No `fn "_fu + id) + "` in scope."_fu), _helpers, _helpers_data, _scope, module, ctx, _here)));
}

static s_SolvedNode solveAddrOfFn_yWfgmXHL(const s_Node& node, const s_Scope& _scope, const s_ScopeSkipMemos& _ss, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    fu::view<char> id = node.value;
    fu_VEC<s_Target> result = solveAddrOfFn_Feg3AG82(id, node.flags, _scope, _ss, module, ctx, _helpers, _helpers_data, _here);
    s_Type type = s_Type { s_ValueType { 0, packAddrOfFn_KKQQYGG8(result) }, s_Lifetime{} };
    return createEmpty_yAvEtBa3(s_kind_empty, type, s_Target{}, _here);
}

static const s_Struct& lookupStructOrUserPrimitive_ynYQKoZC(const s_Type& type, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_Scope& _scope, const s_TokenIdx& _here)
{
    const s_Struct* _0;
    return *(_0 = &(tryLookupStructOrUserPrimitive_3ZVvGB0M(type, module, ctx))) ? *_0 : fail_F42afdck(("Not a struct nor custom primitive: "_fu + humanizeType_PJ01PlxR(type, module, ctx)), _helpers, _helpers_data, _scope, module, ctx, _here);
}

                                #ifndef DEF_starts_YP7BiSZZZOd
                                #define DEF_starts_YP7BiSZZZOd
inline bool starts_YP7BiSZZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_ends_YP7BiSZZZOd
                                #define DEF_ends_YP7BiSZZZOd
inline bool ends_YP7BiSZZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static void walk_X94CRFXf(s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    for (int i = 0; i < node.items.size(); i++)
        walk_X94CRFXf(node.items.mutref(i), placeholder, prefix, suffix, inside, field);

    const int idx = ((node.value == placeholder) ? 0 : (starts_YP7BiSZZ(node.value, prefix) ? 0 : (ends_YP7BiSZZ(node.value, suffix) ? (node.value.size() - placeholder.size()) : fu::lfind(node.value, inside))));
    if ((idx >= 0))
    {
        if (node.kind == s_kind_call)
            node.value.splice(idx, placeholder.size(), field.id);
        else if (node.kind == s_kind_str)
            node.value.splice(idx, placeholder.size(), field.id);

    };
}

inline static s_Node astReplace_Fu9ikFyx(const s_Node& node, fu::view<char> placeholder, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> inside, const s_ScopeItem& field)
{
    /*MOV*/ s_Node node_1 { node };
    walk_X94CRFXf(node_1, placeholder, prefix, suffix, inside, field);
    return /*NRVO*/ node_1;
}

static s_SolvedNode solveForFieldsOf_rnFbfkpT(const s_Node& node, s_TokenIdx& _here, const s_Context& ctx, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    fu::view<char> placeholder = node.value;
    const s_Node& body_template = node.items[1];
    fu_STR prefix = (placeholder + "_"_fu);
    fu_STR suffix = ("_"_fu + placeholder);
    fu_STR inside = (("_"_fu + placeholder) + "_"_fu);
    s_Type _0 {};
    fu::view<s_ScopeItem> _1 {};
    fu::view<s_ScopeItem> fields = ((_1 = (_0 = evalTypeAnnot_Rs0Ayhy7(node.items[0], (*(const s_Map_087aZo54YWi*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), lookupStructOrUserPrimitive_ynYQKoZC(static_cast<s_Type&&>(_0), module, ctx, _helpers, _helpers_data, _scope, _here)).items) ? static_cast<fu::view<s_ScopeItem>&&>(_1) : BUG_D9Hg55no("Empty struct/enum."_fu, _helpers, _helpers_data, _scope, module, ctx, _here));
    fu_VEC<s_Node> items_ast {};
    for (int i = 0; i < fields.size(); i++)
    {
        const s_ScopeItem& field = fields[i];
        items_ast += astReplace_Fu9ikFyx(body_template, placeholder, prefix, suffix, inside, field);
    };
    /*MOV*/ fu_VEC<s_SolvedNode> items = solveNodes_uMJCZqge(items_ast, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    const s_Type& type = (is_never_ZFEUWUgI(if_last_l6T9uEqE(items).type) ? t_never : t_void);
    return createBlock_7yOivmtL(type, static_cast<fu_VEC<s_SolvedNode>&&>(items), s_Helpers{}, _here, _helpers, _helpers_data, _scope, module, ctx, t_string, TODO_FIX_convert_args, _ss, _field_items, _current_fn, options, _notes, _spec_errors, _current_fnort, _root_scope, _specs, _warnings, shortModuleName);
}

static void compilerBreak_88aecddG(const s_CurrentFn& _current_fn, const s_Scope& _scope, const s_Module& module, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here)
{
    /*MOV*/ fu_STR debug = "\nCompiler break:"_fu;
    if (_current_fn.out.target)
    {
        const s_Target& t = _current_fn.out.target;
        debug += (x7E_YP7BiSZZ((x7E_YP7BiSZZ((("\n    Current fn: "_fu + qWHAT_wCuy3nxK(GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here), module, _scope, ctx, _helpers, _helpers_data, _here)) + " at ("_fu), fu::i64dec(t.modid)) + ", "_fu), fu::i64dec(t.index)) + "):"_fu);
        fu::view<s_Overload> locals = EXT_onaILX8Q(t, module, _scope, ctx).locals;
        for (int i = 0; i < locals.size(); i++)
        {
            const s_Overload& item = locals[i];
            debug += ("\n        "_fu + qWHAT_wCuy3nxK(item, module, _scope, ctx, _helpers, _helpers_data, _here));
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

static s_SolvedNode executeCompilerPragma_yh7lONoG(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    if (node.value != "break"_fu)
    {
        fu_VEC<s_SolvedNode> _0 {};
        return (_0 = solveNodes_uMJCZqge(node.items, (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items), SolvedNode_ltxQ8cxX(s_kind_pragma, t_void, s_Flags{}, node.value, static_cast<fu_VEC<s_SolvedNode>&&>(_0), s_Target{}, s_Helpers{}, _here));
    }
    else
    {
        compilerBreak_88aecddG(_current_fn, _scope, module, ctx, _helpers, _helpers_data, _here);
        return createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here);
    };
}

static s_SolvedNode createUnwrap_Tr3pFv7s(const s_TokenIdx& _here)
{
    return SolvedNode_ltxQ8cxX(s_kind_unwrap, t_void, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here);
}

static s_SolvedNode solveDeclExpr_rddvSo7O(const s_Node& node, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    return s_SolvedNode(only_l6T9uEqE(solveNodes_uMJCZqge((fu::slate<1, s_Node> { s_Node(node) }), (*(const s_Type*)fu::NIL), (*(const s_Type*)fu::NIL), bool{}, (*(const fu_STR*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items)));
}

static s_SolvedNode solveNode_f7LszhQF(const s_Node& node, const s_Type& type, s_TokenIdx& _here, fu_VEC<s_Helpers>& _helpers, fu_VEC<s_HelpersData>& _helpers_data, s_Module& module, const s_Context& ctx, s_Scope& _scope, s_CurrentFn& _current_fn, fu_VEC<s_Warning>& _warnings, const s_Target& _current_fnort, s_Map_RnDv9VM4mhf& _specs, s_ScopeSkipMemos& _ss, s_ScopeMemo& _root_scope, const s_Type& t_string, fu_VEC<fu_STR>& _spec_errors, fu_VEC<s_SolvedNode>& TODO_FIX_convert_args, const s_Options& options, s_SolverNotes& _notes, const fu_STR& shortModuleName, fu_VEC<s_ScopeItem>& _field_items)
{
    HERE_Zn8FXweg(node.token, _here);
    const s_kind k = node.kind;
    if (k == s_kind_root)
        return solveRoot_tLz32kCr(node, _helpers, _helpers_data, _here, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_block)
        return solveBlock_7a90i7rV(node, type, 0, s_HelpersMask_HM_CanBreak, (*(const fu_STR*)fu::NIL), 0, _scope, _helpers, module, _current_fn, _current_fnort, _helpers_data, _here, ctx, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_argid)
        return solveArgID_i9duhJmV(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_let)
        return solveLet_S3XwQiJe(node, (*(const s_Type*)fu::NIL), _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_call)
    {
        return solveCall_4PPXPXkI(node, s_Target{}, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    }
    else if (k == s_kind_arrlit)
        return solveArrlit_bjbGaN96(node, type, module, ctx, _here, _helpers, _helpers_data, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_if)
        return solveIf_MsumPKzH(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_or)
        return solveOr_um4R73DY(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_and)
        return solveAnd_pXaD6MSI(node, type, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_loop)
        return solveLoop_t38TMNfT(node, _scope, _helpers, _current_fn, _current_fnort, _helpers_data, module, ctx, _here, _warnings, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_break)
        return solveJump_rvcXZ5JW(node, _helpers, _ss, _helpers_data, _scope, module, ctx, _here, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_return)
        return solveJump_rvcXZ5JW(node, _helpers, _ss, _helpers_data, _scope, module, ctx, _here, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_continue)
        return solveJump_rvcXZ5JW(node, _helpers, _ss, _helpers_data, _scope, module, ctx, _here, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_int)
        return solveInt_QRKSFR3y(node, type, _helpers, _helpers_data, _scope, module, ctx, _here);
    else if (k == s_kind_real)
        return solveReal_GKnTXB9B(node, type, _here);
    else if (k == s_kind_str)
        return solveString_qV4HqGt7(node, type, module, ctx, t_string, _here, _helpers, _helpers_data, _scope);
    else if (k == s_kind_char)
        return solveChar_CCqUpIFu(node, _here);
    else if (k == s_kind_bool)
        return createBool_YeGIVpPL(node.value, t_bool, _helpers, _helpers_data, _scope, module, ctx, _here);
    else if (k == s_kind_definit)
        return solveDefinit_MKaX2tAx(type, module, ctx, _helpers, _helpers_data, _scope, _here);
    else if (k == s_kind_import)
        return solveImport_sXg1tYW5(node, ctx, _helpers, _helpers_data, _scope, module, _here, _ss);
    else if (k == s_kind_defer)
        return solveDefer_ZBp5ZBOm(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_try)
        return solveTryCatch_K1rVoCSJ(node, _helpers, _helpers_data, _scope, module, ctx, _here, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_typedef)
        return solveTypedef_FDueUNoz(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_typecast)
        return solveTypeCast_YH5zRwK2(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_typeassert)
        return solveTypeAssert_P4beSQEM(node, _helpers, _helpers_data, _scope, module, ctx, _here, _ss, _current_fn, _warnings, _current_fnort, _specs, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_typeparam)
        return solveTypeParam_14DiUMIG(node, _helpers, _helpers_data, _scope, module, ctx, _here, _ss);
    else if (k == s_kind_addroffn)
        return solveAddrOfFn_yWfgmXHL(node, _scope, _ss, module, ctx, _helpers, _helpers_data, _here);
    else if (k == s_kind_forfieldsof)
        return solveForFieldsOf_rnFbfkpT(node, _here, ctx, _helpers, _helpers_data, module, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_pragma)
        return executeCompilerPragma_yh7lONoG(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else if (k == s_kind_void)
    {
        return createEmpty_yAvEtBa3(s_kind_empty, t_void, s_Target{}, _here);
    }
    else if (k == s_kind_unwrap)
        return createUnwrap_Tr3pFv7s(_here);
    else if (unorderedClassify_cIqxGsrh(k))
        return solveDeclExpr_rddvSo7O(node, _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    else
        fail_F42afdck((x7E_YP7BiSZZ("TODO: solveNode("_fu, str_x2XZ9C2m(k)) + ")."_fu), _helpers, _helpers_data, _scope, module, ctx, _here);

}

static void Scope_observeDefects_dWTUNZ9o(fu::view<s_ScopeItem> items, const s_Module& module, s_Scope& _scope, const s_Context& ctx, fu::view<s_Helpers> _helpers, fu::view<s_HelpersData> _helpers_data, const s_TokenIdx& _here, const s_Options& options, s_SolverNotes& _notes)
{
    bool hasLets = false;
    bool hasPubTemplates = false;
    fu_VEC<s_Target> privates {};
    for (int i = 0; i < items.size(); i++)
    {
        /*MOV*/ const s_Target t = target_xni9Jmtc(items[i]);
        if (t.modid != module.modid)
            continue;
        else
        {
            const s_Overload& o = GET_JhxATLIa(t, _scope, module, ctx, _helpers, _helpers_data, _here);
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
        makeNote_hsfuVyUh(s_SolverNotes_N_SD_HasStaticInit, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);

    if (privates && hasPubTemplates)
    {
        makeNote_hsfuVyUh(s_SolverNotes_N_SD_ExternPrivates, options, _helpers, _helpers_data, _scope, module, ctx, _here, _notes);
        for (int i_1 = 0; i_1 < privates.size(); i_1++)
        {
            s_Overload& o = GET_mut_5Ue5IxE1(privates[i_1], _scope, module);
            o.flags |= s_Flags_F_EXTERN;
        };
    };
}

s_SolverOutput solve_88f7wJ3Z(const s_Context& ctx, s_Module& module, const s_Options& options)
{
    fu_STR shortModuleName = (module.modid ? getShortModuleName_hDYH9Tpk(module.fname) : fu_STR{});
    s_TokenIdx _here {};
    s_Scope _scope {};
    s_ScopeMemo _root_scope {};
    s_ScopeSkipMemos _ss {};
    fu_VEC<s_ScopeItem> _field_items {};
    /*MOV*/ s_SolverNotes _notes {};
    s_CurrentFn _current_fn {};
    fu_VEC<s_Helpers> _helpers {};
    fu_VEC<s_HelpersData> _helpers_data {};
    _scope.extended += s_Extended{};
    push_47mX1hUW(s_HelpersData{}, _helpers, _helpers_data);
    s_Map_RnDv9VM4mhf _specs {};
    fu_VEC<fu_STR> _spec_errors = fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "BUG: Specializer reentry."_fu } };
    fu_VEC<s_Warning> _warnings {};
    s_Type t_string = createArray_9gHYdovL(t_byte, _here, ctx);
    fu_VEC<s_SolvedNode> TODO_FIX_convert_args = fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { SolvedNode_ltxQ8cxX(s_kind{}, s_Type{}, s_Flags{}, (*(const fu_STR*)fu::NIL), (*(const fu_VEC<s_SolvedNode>*)fu::NIL), s_Target{}, s_Helpers{}, _here) } };
    if (module.modid)
    {
        _scope.imports += int(module.modid);
        _Scope_import__forceCopy_3bmnGOcd(0, ctx, _scope);
    }
    else
    {
        _scope = listGlobals_l8HfNDzr(module);
    };
    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    /*MOV*/ s_SolvedNode root = solveNode_f7LszhQF(s_Node(module.in.parse.root), (*(const s_Type*)fu::NIL), _here, _helpers, _helpers_data, module, ctx, _scope, _current_fn, _warnings, _current_fnort, _specs, _ss, _root_scope, t_string, _spec_errors, TODO_FIX_convert_args, options, _notes, shortModuleName, _field_items);
    if (_current_fn.out)
        BUG_D9Hg55no("non-empty _current_fn."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
    else if (_helpers_data[0])
        BUG_D9Hg55no("non-empty _helpers_data[0]."_fu, _helpers, _helpers_data, _scope, module, ctx, _here);
    else
    {
        Scope_observeDefects_dWTUNZ9o(_scope.items, module, _scope, ctx, _helpers, _helpers_data, _here, options, _notes);
        for (int i = 0; i < _warnings.size(); i++)
        {
            const s_Warning& w = _warnings[i];
            if (w.token)
            {
                _here = w.token;
                fail_F42afdck(fu_STR(w.message), _helpers, _helpers_data, _scope, module, ctx, _here);
            };
        };
        s_Scope _0 {};
        return (_0 = Scope_exports_LfniZTVl(_scope, module.modid, _field_items), s_SolverOutput { static_cast<s_SolvedNode&&>(root), static_cast<s_Scope&&>(_0), s_SolverNotes(_notes) });
    };
}

#endif
