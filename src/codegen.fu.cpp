#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
enum s_kind: fu::u8;
struct s_LineColChars;
struct s_ParserOutput;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
typedef fu::u8 s_VFacts;
struct s_Scope;
struct s_Overload;
typedef uint16_t s_SolverStatus;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_COWInside;
typedef fu::u8 s_ExitPaths;
struct s_Template;
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Context;
struct s_Map_qfSmCKRS93e;
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
struct s_Outputs;
struct s_StructCanon;
struct s_StructDecl;
struct s_cg_CurrentFn;
struct s_cg_Block;
struct s_NativeHacks;
struct s_ClosureID;
struct s_Intlit;
struct s_TEMPVAR;
struct s_Mi;
[[noreturn]] fu::never FAIL_XGLZHzGg(fu::view<char>, const s_TokenIdx&, const s_Context&);
void HERE_WgKYH8CN(const s_TokenIdx&, s_TokenIdx&);
static fu::str cgNode_Sjk9MAYk(const s_SolvedNode&, int, const s_Type&, const s_Module&, const s_Context&, const s_Options&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
[[noreturn]] fu::never BUG_XGLZHzGg(fu::str&&, const s_TokenIdx&, const s_Context&);
static bool isFieldChain_n5oJBeU7(const s_SolvedNode&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_cg_CurrentFn&);
bool isRTL_lOupdufN(const s_Overload&);
bool is_mutref_tkXzsAAo(const s_Type&, const s_TokenIdx&, const s_Context&);
bool isIrrelevant_DOKZ61Hc(const s_Type&);
bool is_never_8KZIyCKE(const s_Type&);
bool is_sliceable_6bkyMkO3(const s_ValueType&);
bool is_ref_vcLGyw8p(const s_Type&);
bool TODO_FIX_isArray_DOKZ61Hc(const s_Type&);
fu::str qBAD_bF2G8fJR(fu::view<char>);
bool is_primitive_6bkyMkO3(const s_ValueType&);
s_Type tryClear_sliceable_QUN697Dd(const s_ValueType&);
static fu::str typeAnnot_awxZNOaL(const s_Type&, int, const s_Module&, const s_Context&, const s_Options&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
const s_Struct& lookupUserType_LriKPDIk(const s_ValueType&, const s_Context&, const s_Module&);
s_StructCanon parseStructCanon_degpQC5i(fu::view<char>);
s_Target target_7YqD2G7N(const s_ScopeItem&);
fu::str ID_lY0aOmE2(const fu::str&);
bool is_rx_copy_UHdpdATk(const s_Type&);
bool isPassByValue_6bkyMkO3(const s_ValueType&);
bool is_trivial_LriKPDIk(const s_ValueType&, const s_Context&, const s_Module&);
s_NativeHacks NativeHacks_o6l3osDy(fu::view<char>);
bool is_bitfield_6bkyMkO3(const s_ValueType&);
bool is_integral_6bkyMkO3(const s_ValueType&);
bool is_unsigned_6bkyMkO3(const s_ValueType&);
bool hasIdentifierChars_j1t51HgV(fu::view<char>);
s_Type clear_refs_57qzYcmt(s_Type&&);
const s_Struct& tryLookupUserType_LriKPDIk(const s_ValueType&, const s_Context&, const s_Module&);
bool hasBinary_z64rfJDX(fu::view<char>);
bool hasUnary_z64rfJDX(fu::view<char>);
bool hasPostfix_z64rfJDX(fu::view<char>);
s_ClosureID tryParseClosureID_WIMP5mdY(fu::view<char>);
static bool exprOK_Y8Cf5Mdw(fu::view<s_SolvedNode>, const s_Module&, const s_Context&, const s_TokenIdx&, const s_cg_CurrentFn&);
int Region_asLocal_AEPMcxRF(const s_Region&);
bool is_floating_pt_6bkyMkO3(const s_ValueType&);
inline static bool isIntegerConstant_yakL8b1I(const s_SolvedNode&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_cg_CurrentFn&);
s_Intlit Intlit_SQ4NkHfH(fu::view<char>);
bool is_enum_6bkyMkO3(const s_ValueType&);
bool is_flags_6bkyMkO3(const s_ValueType&);
s_Type clear_sliceable_PUTlNd47(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_rx_resize_UHdpdATk(const s_Type&);
bool Region_isTemp_28foEZVg(const s_Region&);
static bool mayNeedConstCast_D80fhtq0(const s_SolvedNode&, const s_Module&, const s_Context&, const s_TokenIdx&, const s_cg_CurrentFn&);
bool Region_isArgPosition_28foEZVg(const s_Region&);
bool isAssignable_Ptvwgj5A(const s_Type&, const s_Type&, bool, bool);
bool isAddrOfFn_KM2rbsyR(const s_Type&);
s_Mi parseMi_Uqhjg5wd(int&, fu::view<char>);
fu::str dirname_BWbYsL34(const fu::str&);
fu::str join_By06Vz3F(fu::view<char>, const fu::str&);
fu::str read_IIXDOWa5(fu::str&&);

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

                                #ifndef DEF_s_StructDecl
                                #define DEF_s_StructDecl
struct s_StructDecl
{
    fu::str def;
    int declDepth;
    explicit operator bool() const noexcept
    {
        return false
            || def
            || declDepth
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Outputs
                                #define DEF_s_Outputs
struct s_Outputs
{
    fu::vec<fu::str> _libs;
    fu::vec<fu::str> _gcc_ignore;
    fu::str _top_emits;
    fu::vec<s_StructCanon> _tfwd;
    fu::str _tfwd_src;
    fu::vec<s_Target> _ffwd;
    fu::str _ffwd_src;
    fu::str _ffwd_live_client;
    fu::str _ffwd_live_nclient;
    fu::str _tdef;
    fu::vec<s_StructDecl> _tdef_stack;
    fu::vec<s_Target> _fdef_started;
    fu::vec<s_Target> _fdef_complete;
    fu::str _fdef;
    fu::str _indent;
    int _hasMain;
    fu::vec<fu::str> HACK_link;
    fu::vec<fu::str> HACK_include_dirs;
    fu::vec<fu::str> HACK_extra_sources;
    fu::vec<int> _live_targets;
    s_CGDefects _defects;
    s_Outputs(const s_Outputs&) = delete;
    s_Outputs(s_Outputs&&) = default;
    s_Outputs& operator=(const s_Outputs&) = delete;
    s_Outputs& operator=(s_Outputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || _libs
            || _gcc_ignore
            || _top_emits
            || _tfwd
            || _tfwd_src
            || _ffwd
            || _ffwd_src
            || _ffwd_live_client
            || _ffwd_live_nclient
            || _tdef
            || _tdef_stack
            || _fdef_started
            || _fdef_complete
            || _fdef
            || _indent
            || _hasMain
            || HACK_link
            || HACK_include_dirs
            || HACK_extra_sources
            || _live_targets
            || _defects
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_Block
                                #define DEF_s_cg_Block
struct s_cg_Block
{
    fu::str name;
    s_Helpers helpers;
    bool has_val;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || helpers
            || has_val
            || ptrflip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_CurrentFn
                                #define DEF_s_cg_CurrentFn
struct s_cg_CurrentFn
{
    s_Target target;
    int numTEMPVARs;
    fu::vec<fu::str> TEMPVARs;
    fu::vec<s_cg_Block> blocks;
    int num_labels;
    s_Helpers can_return;
    s_Helpers can_break;
    s_Helpers can_cont;
    fu::vec<fu::str> _ids_used;
    fu::vec<int> _ids_dedupe;
    fu::vec<fu::str> _hoist;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || numTEMPVARs
            || TEMPVARs
            || blocks
            || num_labels
            || can_return
            || can_break
            || can_cont
            || _ids_used
            || _ids_dedupe
            || _hoist
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

                                #ifndef DEF_s_TEMPVAR
                                #define DEF_s_TEMPVAR
struct s_TEMPVAR
{
    fu::str annot;
    fu::str id;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || annot
            || id
            || ptrflip
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

#ifndef fu_NO_fdefs

[[noreturn]] static fu::never BUG_MI7t3VRj(const fu::str& reason, const s_Context& ctx, const s_TokenIdx& _here)
{
    FAIL_XGLZHzGg(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu::str(reason) : "Assertion failed."_fu)), _here, ctx);
}

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
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

static fu::str cgNot_xbUlfx5J(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return "!"_fu + cgNode_Sjk9MAYk(only_fLVI01Cf(node.items), 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
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

static const s_Extended& EXT_vpuSInYo(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_KgnnxsX5(module.out.solve.scope.extended, target.index);
    else if (target.modid < 0)
        return (*(const s_Extended*)fu::NIL);
    else
        return unless_oob_KgnnxsX5(ctx.modules[target.modid].out.solve.scope.extended, target.index);

}

static bool isLocal_IlFptBeB(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_JFXuxNiz(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (target.index > 0)
    {
        if (isLocal_IlFptBeB(target))
        {
            const s_Target& from = _current_fn.target;
            const s_Module& m = ((!from || (from.modid == module.modid)) ? module : ctx.modules[from.modid]);
            return m.out.solve.scope.extended[-target.modid].locals[(target.index - 1)];
        }
        else
        {
            const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
            return m.out.solve.scope.overloads[(target.index - 1)];
        };
    }
    else
    {
        BUG_XGLZHzGg(fu::str{}, _here, ctx);
    };
}

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

static bool isFieldChain_n5oJBeU7(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (node.kind != s_kind_call)
        return false;
    else
    {
        const s_Overload& t = GET_JFXuxNiz(node.target, module, ctx, _here, _current_fn);
        if (t.kind == s_kind_field)
            return isFieldChain_n5oJBeU7(only_fLVI01Cf(node.items), module, ctx, _here, _current_fn);
        else if (t.kind == s_kind_var)
            return true;
        else
            return false;

    };
}

                                #ifndef DEF_M_ARG_TO_NATIVE
                                #define DEF_M_ARG_TO_NATIVE
inline constexpr int M_ARG_TO_NATIVE = (1 << 12);
                                #endif

static bool arrayType_annotateAsVec_bcgKyWle(const s_Type& type)
{
    return !is_ref_vcLGyw8p(type) || TODO_FIX_isArray_DOKZ61Hc(type);
}

static bool isPointlessMustSeq_2kqx3NAS(const s_SolvedNode& arg, const s_Argument& host_arg, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (is_sliceable_6bkyMkO3(host_arg.type.vtype) && !arrayType_annotateAsVec_bcgKyWle(host_arg.type))
        return false;
    else
        return isFieldChain_n5oJBeU7(arg, module, ctx, _here, _current_fn);

}

static bool rest_isPointlessMustSeq_0lgvPreR(const int seqIdx, fu::view<s_SolvedNode> args, const bool RTL, fu::view<s_Argument> host_args, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{

    {
        const int seqIdx_start = (seqIdx + 1);
        const s_Context& ctx_1 = ctx;
        const s_TokenIdx& _here_1 = _here;
        const s_TokenIdx& _here_2 = _here;
        int seqIdx_1 = 0;
        int lastPass = 1;
        for (int pass = 0; pass < lastPass; pass++)
        {
            for (int i = 0; i < host_args.size(); i++)
            {
                const s_Argument& host_arg = host_args[i];
                if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_tkXzsAAo(host_arg.type, _here_2, ctx))))
                    lastPass = 2;
                else
                {
                    if ((seqIdx_start <= seqIdx_1))
                    {
                        const s_SolvedNode& arg = args[i];
                        if (!isPointlessMustSeq_2kqx3NAS(arg, host_arg, module, ctx_1, _here_1, _current_fn))
                            return false;

                    };
                    seqIdx_1++;
                };
            };
        };
    };
    return true;
}

                                #ifndef DEF_str_wy1aK8fmgWb
                                #define DEF_str_wy1aK8fmgWb
inline fu::str str_wy1aK8fm(const s_CGDefects n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & s_CGDefects_GNUStmtExpr)
            res += ("GNUStmtExpr"_fu + ", "_fu);

        if (n & s_CGDefects_Goto)
            res += ("Goto"_fu + ", "_fu);

        if (n & s_CGDefects_PointlessMustSeq)
            res += ("PointlessMustSeq"_fu + ", "_fu);

        if (n & s_CGDefects_LocalConstBool)
            res += ("LocalConstBool"_fu + ", "_fu);

        if (n & s_CGDefects_ConstCast)
            res += ("ConstCast"_fu + ", "_fu);

        if (n & s_CGDefects_PointlessLocal)
            res += ("PointlessLocal"_fu + ", "_fu);

        if (n & s_CGDefects_IrrelevantLiteral)
            res += ("IrrelevantLiteral"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

static void noteDefect_QRoAj4Vh(const s_CGDefects defects, const s_Context& ctx, const s_Options& options, const s_TokenIdx& _here, s_Outputs& outputs)
{
    if (defects & options.break_defects)
        BUG_MI7t3VRj(("CGDefect break: "_fu + qBAD_bF2G8fJR(str_wy1aK8fm(defects))), ctx, _here);
    else
        outputs._defects |= defects;

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

static void include_9b9HRlw3(const fu::str& lib, s_Outputs& outputs)
{
    add_DOlKANOT(outputs._libs, lib);
}

static fu::str primAnnotBase_fte8MelE(fu::view<char> c, const s_Context& ctx, const s_TokenIdx& _here, s_Outputs& outputs)
{
    if (c == "i32"_fu)
        return "int"_fu;
    else if (c == "i16"_fu)
        return "short"_fu;
    else if (c == "u32"_fu)
        return "unsigned"_fu;
    else if (c == "b8"_fu)
        return "bool"_fu;
    else if (c == "c8"_fu)
        return "char"_fu;
    else if (c == "f32"_fu)
        return "float"_fu;
    else if (c == "f64"_fu)
        return "double"_fu;
    else if ((c == "i8"_fu) || (c == "u8"_fu))
    {
        include_9b9HRlw3("<fu/int.h>"_fu, outputs);
        return "fu::"_fu + c;
    }
    else
    {
        include_9b9HRlw3("<cstdint>"_fu, outputs);
        if (c == "i64"_fu)
            return "int64_t"_fu;
        else if (c == "i128"_fu)
            return "__int128_t"_fu;
        else if (c == "u16"_fu)
            return "uint16_t"_fu;
        else if (c == "u32"_fu)
            return "uint32_t"_fu;
        else if (c == "u64"_fu)
            return "uint64_t"_fu;
        else if (c == "u128"_fu)
            return "__uint128_t"_fu;
        else
            BUG_MI7t3VRj((("Unknown primitive: `"_fu + c) + "`."_fu), ctx, _here);

    };
}

static fu::str annotateNever_QUm4mBBF(s_Outputs& outputs)
{
    include_9b9HRlw3("<fu/never.h>"_fu, outputs);
    return "fu::never"_fu;
}

static fu::str annotateZST_y1voovfI()
{
    return "void"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

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

static fu::str annotateString_nInsyU1o(s_Outputs& outputs)
{
    include_9b9HRlw3("<fu/str.h>"_fu, outputs);
    return "fu::str"_fu;
}

                                #ifndef DEF_M_MUTVAR
                                #define DEF_M_MUTVAR
inline constexpr int M_MUTVAR = (1 << 10);
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

inline static fu::str& l_37_1_1pcEEF77(const s_Target& member, fu::view<char> id, fu::str& def, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::str _0 {};
    return (def += ((_0 = (((((("\ninline constexpr "_fu + id) + " "_fu) + id) + "_"_fu) + GET_JFXuxNiz(member, module, ctx, _here, _current_fn).name) + " = "_fu), (static_cast<fu::str&&>(_0) + cgNode_Sjk9MAYk(GET_JFXuxNiz(member, module, ctx, _here, _current_fn).solved, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn))) + ";"_fu));
}

                                #ifndef DEF_each_9hc4n40mw8k
                                #define DEF_each_9hc4n40mw8k
inline void each_9hc4n40m(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& def, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        l_37_1_1pcEEF77(target_7YqD2G7N(a[i]), id, def, module, ctx, options, _here, outputs, _current_fn);

}
                                #endif

inline static void l_37_2_eveB8Pv3(const s_Target& member, fu::view<char> id, fu::str& mask, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (!mask)
        mask = (((("\n\ninline constexpr "_fu + id) + " MASK_"_fu) + id) + "\n    = "_fu);
    else
        mask += "\n    | "_fu;

    mask += ((id + "_"_fu) + GET_JFXuxNiz(member, module, ctx, _here, _current_fn).name);
}

                                #ifndef DEF_each_XCvO1RLZXu6
                                #define DEF_each_XCvO1RLZXu6
inline void each_XCvO1RLZ(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& mask, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        l_37_2_eveB8Pv3(target_7YqD2G7N(a[i]), id, mask, module, ctx, _here, _current_fn);

}
                                #endif

                                #ifndef DEF_M_ENUM_DECL
                                #define DEF_M_ENUM_DECL
inline constexpr int M_ENUM_DECL = (1 << 13);
                                #endif

inline static fu::str& l_37_3_AZsQafzN(const s_Target& member, fu::view<char> id, fu::str& def, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::str _0 {};
    return (def += ((_0 = (((("\n    "_fu + id) + "_"_fu) + GET_JFXuxNiz(member, module, ctx, _here, _current_fn).name) + " = "_fu), (static_cast<fu::str&&>(_0) + cgNode_Sjk9MAYk(GET_JFXuxNiz(member, module, ctx, _here, _current_fn).solved, M_ENUM_DECL, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn))) + ","_fu));
}

                                #ifndef DEF_each_xQpLqRd7QV5
                                #define DEF_each_xQpLqRd7QV5
inline void each_xQpLqRd7(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& def, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
        l_37_3_AZsQafzN(target_7YqD2G7N(a[i]), id, def, module, ctx, options, _here, outputs, _current_fn);

}
                                #endif

static void declarePrimitive_SIOkAn6L(fu::view<char> id, const s_Struct& s, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::str baseprim = primAnnotBase_fte8MelE(s.base, ctx, _here, outputs);
    fu::view<s_ScopeItem> members = s.items;
    fu::str def = ((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id);
    if ((s.kind != s_kind_enum) || !members)
    {
        outputs._tfwd_src += (((("typedef "_fu + baseprim) + " "_fu) + id) + ";\n"_fu);
        each_9hc4n40m(members, id, def, module, ctx, options, _here, outputs, _current_fn);
        if (s.kind == s_kind_flags)
        {
            fu::str mask {};
            each_XCvO1RLZ(members, id, mask, module, ctx, _here, _current_fn);
            if (mask)
            {
                mask += ";"_fu;
                def += mask;
            };
        };
    }
    else
    {
        fu::str header = ((("enum "_fu + id) + ": "_fu) + baseprim);
        outputs._tfwd_src += (header + ";\n"_fu);
        def += (("\n"_fu + header) + "\n{"_fu);
        each_xQpLqRd7(members, id, def, module, ctx, options, _here, outputs, _current_fn);
        def += "\n};"_fu;
    };
    def += "\n                                #endif\n"_fu;
    outputs._tdef += def;
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

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x21x3D_r7bhmB7DrQ0
                                #define DEF_x21x3D_r7bhmB7DrQ0
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

static const s_Overload& try_GET_Fym5UzMR(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (target)
        return GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    else
        return (*(const s_Overload*)fu::NIL);

}

inline static bool l_37_0_1xzdmn6G(const s_StructDecl& a, const s_StructDecl& b)
{
    return (a.declDepth < b.declDepth) || ((a.declDepth == b.declDepth) ? (x3Cx3E_r7bhmB7D(a.def, b.def) < 0) : false);
}

static void sort_vkQhoq94(fu::vec<s_StructDecl>& a)
{
    s_StructDecl l {};
    s_StructDecl r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = l_37_0_1xzdmn6G(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_sIbCuu0wSDk
                                #define DEF_sort_sIbCuu0wSDk
inline void sort_sIbCuu0w(fu::vec<s_StructDecl>& a)
{
    sort_vkQhoq94(a);
}
                                #endif

static void declareStruct_ZjViyRKt(fu::view<char> id, const s_Struct& s, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (s.base)
        declarePrimitive_SIOkAn6L(id, s, module, ctx, options, _here, outputs, _current_fn);
    else
    {
        const int tdef_stack0 = outputs._tdef_stack.size();
        outputs._tdef_stack += s_StructDecl{};
        fu::str header = (x7E_r7bhmB7D(str_k2hK9UHj(s.kind), " "_fu) + id);
        outputs._tfwd_src += (header + ";\n"_fu);
        const s_Type& t = GET_JFXuxNiz(s.target, module, ctx, _here, _current_fn).type;
        /*MOV*/ fu::str def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\n"_fu) + header) + "\n{"_fu);
        fu::str indent = "\n    "_fu;
        fu::str xOpBool {};
        fu::view<s_ScopeItem> fields = s.items;
        for (int i = 0; i < fields.size(); i++)
        {
            const s_Overload& field = GET_JFXuxNiz(target_7YqD2G7N(fields[i]), module, ctx, _here, _current_fn);
            if (field.kind == s_kind_field)
            {
                fu::str annot = typeAnnot_awxZNOaL(field.type, 0, module, ctx, options, _here, outputs, _current_fn);
                if (annot != "void"_fu)
                {
                    fu::str id_1 = ID_lY0aOmE2(field.name);
                    def += ((((indent + annot) + " "_fu) + id_1) + ";"_fu);
                    if (field.flags & s_Flags_F_PREDICATE)
                        xOpBool += ("\n            || "_fu + id_1);

                };
            }
            else
                BUG_MI7t3VRj(((x7E_r7bhmB7D((("Non-field struct item: "_fu + field.name) + " ("_fu), str_k2hK9UHj(field.kind)) + ") in "_fu) + t.vtype.canon), ctx, _here);

        };
        if (!is_rx_copy_UHdpdATk(t))
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
        }
        else if (try_GET_Fym5UzMR(s.target, module, ctx, _here, _current_fn).status & s_SolverStatus_SS_TYPE_RECUR)
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = default;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
            def += (((((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "& selfrec) { return *this = "_fu) + id) + "(selfrec); }"_fu);
        };
        def += "\n    explicit operator bool() const noexcept"_fu;
        def += "\n    {"_fu;
        def += "\n        return false"_fu;
        def += xOpBool;
        def += "\n        ;"_fu;
        def += "\n    }"_fu;
        def += "\n};\n                                #endif\n"_fu;
        outputs._tdef_stack.mutref(tdef_stack0) = s_StructDecl { static_cast<fu::str&&>(def), s.declDepth };
        if (!tdef_stack0)
        {
            sort_sIbCuu0w(outputs._tdef_stack);
            for (int i_1 = 0; i_1 < outputs._tdef_stack.size(); i_1++)
                outputs._tdef += fu::str(outputs._tdef_stack[i_1].def);

            outputs._tdef_stack.clear();
        };
    };
}

static fu::str typeAnnotBase_2In518b4(const s_Type& type, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_6bkyMkO3(type.vtype) && ((c.size() < 4) || ((c.size() == 4) && (fu::get_view(c, 1, 4) == "128"_fu))))
        return primAnnotBase_fte8MelE(c, ctx, _here, outputs);
    else if (c == "never"_fu)
        return annotateNever_QUm4mBBF(outputs);
    else if (isIrrelevant_DOKZ61Hc(type))
        return annotateZST_y1voovfI();
    else
    {
        s_Type arrayItem = tryClear_sliceable_QUN697Dd(type.vtype);
        if (arrayItem)
        {
            if (arrayType_annotateAsVec_bcgKyWle(type))
            {
                if (arrayItem == t_byte)
                    return annotateString_nInsyU1o(outputs);
                else
                {
                    fu::str itemAnnot = typeAnnot_awxZNOaL(arrayItem, 0, module, ctx, options, _here, outputs, _current_fn);
                    include_9b9HRlw3("<fu/vec.h>"_fu, outputs);
                    return ("fu::vec<"_fu + itemAnnot) + ">"_fu;
                };
            }
            else
            {
                fu::str itemAnnot = typeAnnot_awxZNOaL(arrayItem, 0, module, ctx, options, _here, outputs, _current_fn);
                include_9b9HRlw3("<fu/view.h>"_fu, outputs);
                if (is_mutref_tkXzsAAo(type, _here, ctx) || (mode & M_MUTVAR))
                    return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
                else
                    return ("fu::view<"_fu + itemAnnot) + ">"_fu;

            };
        }
        else
        {
            const s_Struct& s = lookupUserType_LriKPDIk(type.vtype, ctx, module);
            /*MOV*/ fu::str id = ("s_"_fu + s.name);
            const s_StructCanon scp = parseStructCanon_degpQC5i(type.vtype.canon);
            if (add_jDMAnthe(outputs._tfwd, scp))
                declareStruct_ZjViyRKt(id, s, module, ctx, options, _here, outputs, _current_fn);

            return /*NRVO*/ id;
        };
    };
}

                                #ifndef DEF_M_ARGUMENT
                                #define DEF_M_ARGUMENT
inline constexpr int M_ARGUMENT = (1 << 4);
                                #endif

                                #ifndef DEF_M_CONST
                                #define DEF_M_CONST
inline constexpr int M_CONST = (1 << 2);
                                #endif

                                #ifndef DEF_M_FWDECL
                                #define DEF_M_FWDECL
inline constexpr int M_FWDECL = (1 << 6);
                                #endif

                                #ifndef DEF_M_MOVABLE
                                #define DEF_M_MOVABLE
inline constexpr int M_MOVABLE = (1 << 11);
                                #endif

static fu::str typeAnnot_awxZNOaL(const s_Type& type, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu::str fwd = typeAnnotBase_2In518b4(type, mode, module, ctx, options, _here, outputs, _current_fn);
    if (is_ref_vcLGyw8p(type))
    {
        if ((is_sliceable_6bkyMkO3(type.vtype) && !arrayType_annotateAsVec_bcgKyWle(type)) || (fwd == "void"_fu))
            return /*NRVO*/ fwd;
        else if (is_mutref_tkXzsAAo(type, _here, ctx))
            return fwd + "&"_fu;
        else if (isPassByValue_6bkyMkO3(type.vtype))
        {
            if (((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL))
                return "const "_fu + fwd;
            else
                return /*NRVO*/ fwd;

        }
        else if ((mode & M_MOVABLE) && !is_trivial_LriKPDIk(type.vtype, ctx, module))
            return fwd + "&"_fu;
        else
            return ("const "_fu + fwd) + "&"_fu;

    }
    else if ((mode & M_ARGUMENT) && !isPassByValue_6bkyMkO3(type.vtype))
        return fwd + "&&"_fu;
    else if ((mode & M_CONST) && is_trivial_LriKPDIk(type.vtype, ctx, module))
        return "const "_fu + fwd;
    else
        return /*NRVO*/ fwd;

}

static fu::str emitTEMPVAR_hoePgunY(fu::view<char> annot, bool& ptrflip, const fu::str& id, fu::view<char> expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu::str id_1 = (id ? fu::str(id) : x7E_r7bhmB7D("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu::str cgClone_4XkrGKQY(const s_Type& type, const fu::str& src, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isPassByValue_6bkyMkO3(type.vtype))
        return fu::str(src);
    else
    {
        fu::str _0 {};
        return (_0 = (typeAnnotBase_2In518b4(type, 0, module, ctx, options, _here, outputs, _current_fn) + "("_fu), (static_cast<fu::str&&>(_0) + src)) + ")"_fu;
    };
}

static fu::str cgMove_4bOq51sG(const s_Type& type, const fu::str& src, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isPassByValue_6bkyMkO3(type.vtype))
        return cgClone_4XkrGKQY(type, src, module, ctx, options, _here, outputs, _current_fn);
    else
    {
        fu::str _0 {};
        return (_0 = (("static_cast<"_fu + typeAnnotBase_2In518b4(type, 0, module, ctx, options, _here, outputs, _current_fn)) + "&&>("_fu), (static_cast<fu::str&&>(_0) + src)) + ")"_fu;
    };
}

inline static void l_37_5_d9IhMFVO(const int i, const s_Argument& host_arg, const int seqIdx, const s_Extended& ext, const s_Overload& target, fu::view<s_SolvedNode> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::view_mut<fu::str> item_src, const bool RTL, fu::view<s_Argument> host_args, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& arg = args[i];
    const s_SolvedNode& arg_1 = ((isSimpleCpyMovAssign && (i == 1) && (arg.kind == s_kind_copy)) ? only_fLVI01Cf(arg.items) : arg);
    bool junk = false;
    const bool mustDiscard = isIrrelevant_DOKZ61Hc(arg_1.type);
    if (mustDiscard)
        junk = ((arg_1.kind == s_kind_empty) || (arg_1.kind == s_kind_definit) || (arg_1.kind == s_kind_fndef) || ((arg_1.kind == s_kind_call) ? ((GET_JFXuxNiz(arg_1.target, module, ctx, _here, _current_fn).kind == s_kind_var) || ((GET_JFXuxNiz(arg_1.target, module, ctx, _here, _current_fn).kind == s_kind_type) ? !arg_1.items : false) || (GET_JFXuxNiz(arg_1.target, module, ctx, _here, _current_fn).kind == s_kind_enumv)) : false));
    else if (is_never_8KZIyCKE(arg_1.type))
        BUG_MI7t3VRj("cgCall: arg.is_never"_fu, ctx, _here);

    fu::str _0 {};
    /*MOV*/ fu::str src = (junk ? fu::str{} : ((_0 = cgNode_Sjk9MAYk(arg_1, (isNative ? M_ARG_TO_NATIVE : 0), host_arg.type, module, ctx, options, _here, outputs, _current_fn)) ? static_cast<fu::str&&>(_0) : BUG_MI7t3VRj("Empty arg src."_fu, ctx, _here)));
    const int MUSTSEQ_bit = (1 << (i & 31));
    if (mustDiscard && src)
    {
        ooe_crosscheck |= MUSTSEQ_bit;
        if (ooe_header)
            ooe_header += ", "_fu;

        ooe_header += "(void) "_fu;
        ooe_header += src;
        src = fu::str{};
    };
    if (mustDiscard && (target.kind == s_kind_type))
    {
        src = "{}"_fu;
    };
    if (MUSTSEQ_mask & MUSTSEQ_bit)
    {
        if (junk)
            BUG_MI7t3VRj("Trying to MUSTSEQ a discarded argument, shouldnt happen."_fu, ctx, _here);
        else
        {
            ooe_crosscheck |= MUSTSEQ_bit;
            if (isPointlessMustSeq_2kqx3NAS(arg_1, ext.args[i], module, ctx, _here, _current_fn) || (((MUSTSEQ_mask & ~MUSTSEQ_bit) < MUSTSEQ_mask) && rest_isPointlessMustSeq_0lgvPreR(seqIdx, args, RTL, host_args, module, ctx, _here, _current_fn)))
                noteDefect_QRoAj4Vh(s_CGDefects_PointlessMustSeq, ctx, options, _here, outputs);
            else
            {
                if (ooe_header)
                    ooe_header += ", "_fu;

                bool ptrflip = false;
                fu::str annot = typeAnnot_awxZNOaL(arg_1.type, 0, module, ctx, options, _here, outputs, _current_fn);
                fu::str id = emitTEMPVAR_hoePgunY(annot, ptrflip, (*(const fu::str*)fu::NIL), fu::view<char>{}, _current_fn);
                ooe_header += id;
                ooe_header += " = "_fu;
                ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu::str(src));
                src = (ptrflip ? ("*"_fu + id) : cgMove_4bOq51sG(arg_1.type, id, module, ctx, options, _here, outputs, _current_fn));
            };
        };
    };
    item_src.mutref(i) = static_cast<fu::str&&>(src);
}

                                #ifndef DEF_argsForward_dsnGhqOshZj
                                #define DEF_argsForward_dsnGhqOshZj
inline void argsForward_dsnGhqOs(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, const s_Extended& ext, const s_Overload& target, fu::view<s_SolvedNode> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::view_mut<fu::str> item_src, const bool RTL_1, fu::view<s_Argument> host_args_1, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here_1, const s_Context& ctx_1)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_tkXzsAAo(host_arg.type, _here_1, ctx_1))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    l_37_5_d9IhMFVO(i, host_arg, seqIdx, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL_1, host_args_1, module, ctx, options, _here, outputs, _current_fn);

                seqIdx++;
            };
        };
    };
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

static fu::str& ARG_Y6sMqUi8(const int i, fu::view_mut<fu::str> item_src)
{
    return item_src.mutref(i);
}

static fu::str REST_n33suISl(const int start, fu::view<fu::str> item_src)
{
    /*MOV*/ fu::str src {};
    for (int i = start; i < item_src.size(); i++)
    {
        fu::view<char> item = item_src[i];
        if (!(!item))
        {
            if (src)
                src += ", "_fu;

            src += item_src[i];
        };
    };
    return /*NRVO*/ src;
}

static fu::str ooeWrap_YeZDpCfS(const fu::str& src, fu::view<char> ooe_header)
{
    if (ooe_header)
        return ((("("_fu + ooe_header) + ", "_fu) + src) + ")"_fu;
    else
        return fu::str(src);

}

static fu::str emitMethodCall_sECY5VPm(fu::view<char> id, fu::view<char> ooe_header, fu::view_mut<fu::str> item_src)
{
    fu::view<char> _0 {};
    fu::str _1 {};
    fu::str _2 {};
    return (_2 = ((_1 = ((_0 = ARG_Y6sMqUi8(0, item_src), (static_cast<fu::view<char>&&>(_0) + id)) + "("_fu), (static_cast<fu::str&&>(_1) + REST_n33suISl(1, item_src))) + ")"_fu), ooeWrap_YeZDpCfS(static_cast<fu::str&&>(_2), ooe_header));
}

static bool affectedByIntegerPromotions_WYYyWTkK(const s_Type& type)
{
    if (is_ref_vcLGyw8p(type) || !is_bitfield_6bkyMkO3(type.vtype))
        return false;
    else
    {
        fu::view<char> c = type.vtype.canon;
        return ((c.size() >= 2) && (c[1] == '8')) || ((c.size() >= 3) && (fu::get_view(c, 1, 3) == "16"_fu));
    };
}

static fu::str unpromote_eYhKYZlc(const fu::str& expr, const s_SolvedNode& node, const bool isNative, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isNative && affectedByIntegerPromotions_WYYyWTkK(node.type))
    {
        fu::str _0 {};
        return (_0 = (typeAnnotBase_2In518b4(node.type, 0, module, ctx, options, _here, outputs, _current_fn) + "("_fu), (static_cast<fu::str&&>(_0) + expr)) + ")"_fu;
    }
    else
        return fu::str(expr);

}

static fu::str emitPostfixOp_56NUciGQ(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view_mut<fu::str> item_src, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> _0 {};
    return unpromote_eYhKYZlc((_0 = ARG_Y6sMqUi8(0, item_src), (static_cast<fu::view<char>&&>(_0) + op)), node, isNative, module, ctx, options, _here, outputs, _current_fn);
}

                                #ifndef DEF_only_xhmyKdWo0vj
                                #define DEF_only_xhmyKdWo0vj
inline const fu::str& only_xhmyKdWo(fu::view<fu::str> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu::str emitBuiltin_rvS7StNE(fu::view<char> id, fu::view<fu::str> args, const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = node.type;
        const s_Type& input = only_fLVI01Cf(node.items).type;
        fu::str cast = typeAnnotBase_2In518b4(output, 0, module, ctx, options, _here, outputs, _current_fn);
        if (is_integral_6bkyMkO3(input.vtype) && is_integral_6bkyMkO3(output.vtype) && (is_unsigned_6bkyMkO3(input.vtype) != is_unsigned_6bkyMkO3(output.vtype)))
        {
            s_Type mid_t { (is_unsigned_6bkyMkO3(input.vtype) ? output : input) };
            if (mid_t.vtype.canon[0] == 'i')
            {
                mid_t.vtype.canon.mutref(0) = 'u';
                if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
                {
                    fu::str inner = typeAnnotBase_2In518b4(mid_t, 0, module, ctx, options, _here, outputs, _current_fn);
                    return ((((cast + '(') + inner) + '(') + only_xhmyKdWo(args)) + "))"_fu;
                };
            }
            else
                BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here);

        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu::str inner = typeAnnotBase_2In518b4(t_u8, 0, module, ctx, options, _here, outputs, _current_fn);
            return ((((cast + '(') + inner) + '(') + only_xhmyKdWo(args)) + "))"_fu;
        };
        return ((cast + '(') + only_xhmyKdWo(args)) + ')';
    }
    else
        BUG_MI7t3VRj(("Unknown builtin: "_fu + id), ctx, _here);

}

static fu::str emitFunctionCall_iqmIuGNF(fu::view<char> id, fu::view<char> open, fu::view<char> close, fu::view<char> ooe_header, fu::view<fu::str> item_src)
{
    return ooeWrap_YeZDpCfS((((id + open) + REST_n33suISl(0, item_src)) + close), ooe_header);
}

                                #ifndef DEF_M_STMT
                                #define DEF_M_STMT
inline constexpr int M_STMT = (1 << 0);
                                #endif

                                #ifndef DEF_M_PARENS
                                #define DEF_M_PARENS
inline constexpr int M_PARENS = (1 << 7);
                                #endif

                                #ifndef DEF_last_HTJeFkMmZC7
                                #define DEF_last_HTJeFkMmZC7
inline char last_HTJeFkMm(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static bool binSkipParens_M6eFAVTN(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;
    else if (mode & M_PARENS)
    {
        if (last_HTJeFkMm(id) == '=')
        {
            if ((id == "=="_fu) || (id == "!="_fu))
                return true;
            else
                return false;

        }
        else
            return true;

    }
    else
        return false;

}

static fu::str emitBinaryOp_W7Knx8k3(fu::view<char> op, const s_SolvedNode& node, const int mode, fu::view<s_SolvedNode> args, const bool isNative, fu::view<char> ooe_header, fu::view_mut<fu::str> item_src, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (args.size() == 2)
    {
        if (binSkipParens_M6eFAVTN(op, mode) && !ooe_header)
        {
            fu::str _0 {};
            fu::str _1 {};
            return (_1 = ((_0 = (ARG_Y6sMqUi8(0, item_src) + " "_fu), (static_cast<fu::str&&>(_0) + op)) + " "_fu), (static_cast<fu::str&&>(_1) + ARG_Y6sMqUi8(1, item_src)));
        }
        else
        {
            fu::str _2 {};
            fu::str _3 {};
            fu::str _4 {};
            return (_4 = unpromote_eYhKYZlc(((_3 = ((_2 = (("("_fu + ARG_Y6sMqUi8(0, item_src)) + " "_fu), (static_cast<fu::str&&>(_2) + op)) + " "_fu), (static_cast<fu::str&&>(_3) + ARG_Y6sMqUi8(1, item_src))) + ")"_fu), node, isNative, module, ctx, options, _here, outputs, _current_fn), ooeWrap_YeZDpCfS(static_cast<fu::str&&>(_4), ooe_header));
        };
    }
    else
        BUG_MI7t3VRj("args.len != 2"_fu, ctx, _here);

}

static fu::str cgDefault_cYfQenIY(const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (is_mutref_tkXzsAAo(type, _here, ctx))
        BUG_MI7t3VRj("Cannot definit mutrefs."_fu, ctx, _here);
    else if (isIrrelevant_DOKZ61Hc(type))
    {
        noteDefect_QRoAj4Vh(s_CGDefects_IrrelevantLiteral, ctx, options, _here, outputs);
        return "void()"_fu;
    }
    else
    {
        if (is_ref_vcLGyw8p(type) && !isPassByValue_6bkyMkO3(type.vtype))
        {
            if (!is_sliceable_6bkyMkO3(type.vtype) || arrayType_annotateAsVec_bcgKyWle(type))
            {
                include_9b9HRlw3("<fu/default.h>"_fu, outputs);
                if (is_primitive_6bkyMkO3(type.vtype))
                    BUG_MI7t3VRj("cgDefault: Genering NIL refs to primitives."_fu, ctx, _here);
                else
                    return ("(*(const "_fu + typeAnnot_awxZNOaL(clear_refs_57qzYcmt(s_Type(type)), 0, module, ctx, options, _here, outputs, _current_fn)) + "*)fu::NIL)"_fu;

            };
        };
        return typeAnnot_awxZNOaL(type, 0, module, ctx, options, _here, outputs, _current_fn) + "{}"_fu;
    };
}

static bool isInlLinked_Z9Zz3JZT(const s_Overload& overload)
{
    return !!(overload.flags & s_Flags_F_TEMPLATE);
}

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

                                #ifndef DEF_add_SmNkMoTVzAh
                                #define DEF_add_SmNkMoTVzAh
inline bool add_SmNkMoTV(fu::vec<s_Target>& keys, const s_Target& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_u5s5w3qs(keys[i], item);
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

static bool isExtLinked_61HXazVT(const s_Overload& overload)
{
    if (overload.flags & (s_Flags_F_PUB | s_Flags_F_EXTERN))
        return overload.kind != s_kind_inline;
    else
        return false;

}

static fu::str fnLinkage_yj92nX8b(const s_Overload& overload)
{
    return ((is_never_8KZIyCKE(overload.type) ? "[[noreturn]] "_fu : fu::str{}) + (isInlLinked_Z9Zz3JZT(overload) ? "inline "_fu : fu::str{})) + (!isExtLinked_61HXazVT(overload) ? "static "_fu : fu::str{});
}

                                #ifndef DEF_M_RETVAL
                                #define DEF_M_RETVAL
inline constexpr int M_RETVAL = (1 << 3);
                                #endif

static bool isOp_drkhkBLT(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    const s_Flags flags = GET_JFXuxNiz(target, module, ctx, _here, _current_fn).flags;
    if (flags & s_Flags_F_OOE_RTL)
        return true;
    else if (!(flags & s_Flags_F_OPERATOR))
        return false;
    else
    {
        fu::view<s_Argument> args = EXT_vpuSInYo(target, module, ctx).args;
        if (args.size() > 2)
            return false;
        else if (GET_JFXuxNiz(target, module, ctx, _here, _current_fn).kind == s_kind___native)
            return true;
        else
        {
            fu::view<char> name = GET_JFXuxNiz(target, module, ctx, _here, _current_fn).name;
            if (args.size() > 1)
                return hasBinary_z64rfJDX(name);
            else
                return hasUnary_z64rfJDX(name);

        };
    };
}

static fu::str valid_operator_pSc2WOcQ(const fu::str& str)
{
    int start = 0;
    bool some = false;
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
        {
            if (!some)
                start = (i + 1);
            else
                return fu::slice(str, start, i);

        }
        else
            some = true;

    };
    if (start)
        return fu::slice(str, start);
    else
        return fu::str(str);

}

static char hex_pVsGVSNi(const unsigned x)
{
    if (x < 10u)
        return char((unsigned(fu::u8('0')) + x));
    else
        return char((unsigned(fu::u8('A')) + (x - 10u)));

}

static fu::str xHH_HlYTW9wB(const unsigned c)
{
    return ("x"_fu + hex_pVsGVSNi(((c >> 4u) & 0xfu))) + hex_pVsGVSNi(((c >> 0u) & 0xfu));
}

static fu::str valid_identifier_yENXZigi(fu::str&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (!(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_')))
            str = ((fu::get_view(str, 0, i) + xHH_HlYTW9wB(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1), str.size()));

    };
    return ID_lY0aOmE2(str);
}

static fu::str fnID_CdrwBOXT(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    const fu::str& id = (overload.name ? overload.name : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here));
    if (isOp_drkhkBLT(target, module, ctx, _here, _current_fn))
        return "operator"_fu + valid_operator_pSc2WOcQ(id);
    else
    {
        /*MOV*/ fu::str ret = valid_identifier_yENXZigi(fu::str(id));
        if (EXT_vpuSInYo(target, module, ctx).sighash && !(GET_JFXuxNiz(target, module, ctx, _here, _current_fn).flags & s_Flags_F_EXTERN))
            ret += ("_"_fu + fu::get_view(EXT_vpuSInYo(target, module, ctx).sighash, 0, 8));

        return /*NRVO*/ ret;
    };
}

static fu::str cgFnPrototype_PFDQ6A3X(const s_Target& target, const bool fnptr, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu::vec<fu::str>{}, fu::vec<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<fu::str>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    /*MOV*/ fu::str src {};
    const s_Overload& overload = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    if (!fnptr)
    {
        fu::str linkage = fnLinkage_yj92nX8b(overload);
        src += linkage;
    };

    {
        const s_Type& ret = (overload.type ? overload.type : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here));
        fu::str annot = typeAnnot_awxZNOaL(ret, M_RETVAL, module, ctx, options, _here, outputs, _current_fn);
        src += (annot + " "_fu);
    };

    {
        /*MOV*/ fu::str name = fnID_CdrwBOXT(target, module, ctx, _here, _current_fn);
        src += (fnptr ? (("(*"_fu + name) + ")"_fu) : static_cast<fu::str&&>(name));
    };

    {
        src += "("_fu;
        fu::view<s_Argument> args = EXT_vpuSInYo(target, module, ctx).args;
        bool first = true;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& arg = args[i].type;
            if (!(isIrrelevant_DOKZ61Hc(arg)))
            {
                if (first)
                    first = false;
                else
                    src += ", "_fu;

                src += typeAnnot_awxZNOaL(arg, (M_ARGUMENT | M_FWDECL), module, ctx, options, _here, outputs, _current_fn);
            };
        };
        if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_z64rfJDX(overload.name))
            src += ", /*postfix*/int"_fu;

        src += ")"_fu;
    };
    return /*NRVO*/ src;
}

static void ensureFwdDecl_Qv6ZAUP8(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    if (!((overload.kind != s_kind_fn) || (overload.name == "main"_fu)))
    {
        if (!(!add_SmNkMoTV(outputs._ffwd, target)))
        {
            fu::str fwdDecl = (cgFnPrototype_PFDQ6A3X(target, false, module, ctx, options, _here, outputs, _current_fn) + ";\n"_fu);
            if (overload.flags & s_Flags_F_HOTSWAP)
            {
                fu::str fnPtr = (("extern "_fu + cgFnPrototype_PFDQ6A3X(target, true, module, ctx, options, _here, outputs, _current_fn)) + ";\n"_fu);
                outputs._ffwd_live_client += fnPtr;
                outputs._ffwd_live_nclient += fwdDecl;
            }
            else
                outputs._ffwd_src += fwdDecl;

        };
    };
}

                                #ifndef DEF_x3Dx3D_u5s5w3qsBek
                                #define DEF_x3Dx3D_u5s5w3qsBek
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_u5s5w3qs(a, b);
}
                                #endif

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

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_MAIN_needed
                                #define DEF_MAIN_needed
inline constexpr int MAIN_needed = (1 << 0);
                                #endif

                                #ifndef DEF_MAIN_argv
                                #define DEF_MAIN_argv
inline constexpr int MAIN_argv = (1 << 1);
                                #endif

                                #ifndef DEF_MAIN_zst
                                #define DEF_MAIN_zst
inline constexpr int MAIN_zst = (1 << 2);
                                #endif

static s_Target nested_l2hq6NM5(const int index, const s_cg_CurrentFn& _current_fn)
{
    if (index)
    {
        return s_Target { -_current_fn.target.index, index };
    }
    else
    {
        return s_Target{};
    };
}

static fu::vec<fu::str>& _ids_used_se0HiVp0(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu::vec<int>& _ids_dedupe_pzqHgoTK(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEF_grow_if_oob_U5WsiODpEHe
                                #define DEF_grow_if_oob_U5WsiODpEHe
inline int& grow_if_oob_U5WsiODp(fu::vec<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::str localID_ol9gMTjM(const s_Target& target, const bool dedupe, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    /*MOV*/ fu::str id { o.name };
    const s_ClosureID cid = tryParseClosureID_WIMP5mdY(id);
    if (cid.target)
        id = GET_JFXuxNiz(cid.target, module, ctx, _here, _current_fn).name;

    id = ID_lY0aOmE2(id);
    if (isLocal_IlFptBeB(target))
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                /*MOV*/ fu::str candidate = (dupes ? x7E_r7bhmB7D((id + '_'), fu::i64dec(dupes)) : fu::str(id));
                for (int i = 0; i < _ids_used_se0HiVp0(_current_fn).size(); i++)
                {
                    if (_ids_used_se0HiVp0(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_5;
                    };
                };
                _ids_used_se0HiVp0(_current_fn) += static_cast<fu::str&&>(candidate);
                break;
              } BL_5:;
            };
            if (dupes)
            {
                grow_if_oob_U5WsiODp(_ids_dedupe_pzqHgoTK(_current_fn), target.index) = dupes;
            };
        };
        const int dupes = ((_ids_dedupe_pzqHgoTK(_current_fn).size() > target.index) ? _ids_dedupe_pzqHgoTK(_current_fn)[target.index] : 0);
        if (dupes)
            return x7E_r7bhmB7D((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

                                #ifndef DEF_starts_1wDddajZEEk
                                #define DEF_starts_1wDddajZEEk
inline bool starts_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static bool F_HOIST_asPtr_J5gS8aKm(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (!s_SolverStatus((GET_JFXuxNiz(target, module, ctx, _here, _current_fn).status & s_SolverStatus_SS_HOIST)))
        return false;
    else
    {
        const s_Type& t = GET_JFXuxNiz(target, module, ctx, _here, _current_fn).solved.type;
        if (!is_mutref_tkXzsAAo(t, _here, ctx) && isPassByValue_6bkyMkO3(t.vtype))
            return false;
        else
            return is_ref_vcLGyw8p(t) && (!is_sliceable_6bkyMkO3(t.vtype) || arrayType_annotateAsVec_bcgKyWle(t));

    };
}

static fu::str binding_teOAO5Ny(const s_Target& target, const bool forceValue, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    const s_Type& place_type = overload.solved.type;
    const s_Flags isArg = (overload.flags & s_Flags_F_ARG);
    s_Type place_type_1 = (forceValue ? clear_refs_57qzYcmt(s_Type(place_type)) : s_Type(place_type));
    /*MOV*/ fu::str annot = typeAnnot_awxZNOaL(place_type_1, ((((!is_mutref_tkXzsAAo(overload.type, _here, ctx) ? M_CONST : 0) | (isArg ? M_ARGUMENT : 0)) | (is_mutref_tkXzsAAo(overload.type, _here, ctx) ? M_MUTVAR : 0)) | ((overload.flags & s_Flags_F_MOVED_FROM) ? M_MOVABLE : 0)), module, ctx, options, _here, outputs, _current_fn);
    const s_SolverStatus isUnused = s_SolverStatus((overload.status & s_SolverStatus_SS_UNUSED));
    if (isArg && isUnused)
        return /*NRVO*/ annot;
    else
    {
        /*MOV*/ fu::str id = localID_ol9gMTjM(target, true, module, ctx, _here, _current_fn);
        if (GET_JFXuxNiz(target, module, ctx, _here, _current_fn).status & s_SolverStatus_SS_HOIST)
        {
            if (_current_fn.target)
            {
                fu::str hoistDecl = (starts_1wDddajZ(annot, "const "_fu) ? fu::slice(annot, 6) : static_cast<fu::str&&>(annot));
                if (F_HOIST_asPtr_J5gS8aKm(target, module, ctx, _here, _current_fn))
                {
                    if (hoistDecl[(hoistDecl.size() - 1)] == '&')
                        hoistDecl.mutref((hoistDecl.size() - 1)) = '*';
                    else
                        BUG_MI7t3VRj(("F_HOIST_asPtr: Decl not a ref: "_fu + hoistDecl), ctx, _here);

                };
                _current_fn._hoist += (((hoistDecl + " "_fu) + id) + (!is_trivial_LriKPDIk(place_type_1.vtype, ctx, module) ? " {}"_fu : fu::str{}));
                return /*NRVO*/ id;
            }
            else
                BUG_MI7t3VRj("TODO: hoisting for global variables."_fu, ctx, _here);

        }
        else
        {
            /*MOV*/ fu::str head = static_cast<fu::str&&>((annot ? annot : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here)));
            head += (" "_fu + id);
            if (isUnused)
                head = ("[[maybe_unused]] "_fu + head);

            if (GET_JFXuxNiz(target, module, ctx, _here, _current_fn).flags & s_Flags_F_MOVED_FROM)
                head = ("/*MOV*/ "_fu + head);

            return /*NRVO*/ head;
        };
    };
}

static fu::str binding_CSHuzyBi(const s_Argument& arg, const bool forceValue, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target target = nested_l2hq6NM5(arg.local, _current_fn);
    return binding_teOAO5Ny(target, forceValue, module, ctx, options, _here, outputs, _current_fn);
}

static fu::str cgFnSignature_59vfF5Pd(const s_SolvedNode& fn, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    fu::view<s_Argument> host_args = EXT_vpuSInYo(target, module, ctx).args;
    fu::str annot = typeAnnot_awxZNOaL((overload.type ? overload.type : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here)), M_RETVAL, module, ctx, options, _here, outputs, _current_fn);
    fu::str id { overload.name };
    if (id == "main"_fu)
    {
        outputs._hasMain = MAIN_needed;
        id = "fu_MAIN"_fu;
        if (host_args)
            outputs._hasMain |= MAIN_argv;

        if (isIrrelevant_DOKZ61Hc(overload.type))
            outputs._hasMain |= MAIN_zst;

    }
    else
        id = fnID_CdrwBOXT(fn.target, module, ctx, _here, _current_fn);

    /*MOV*/ fu::str src = ((((fnLinkage_yj92nX8b(overload) + annot) + " "_fu) + id) + "("_fu);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (!(isIrrelevant_DOKZ61Hc(host_args[i].type)))
        {
            if (some)
                src += ", "_fu;

            some = true;
            src += binding_CSHuzyBi(host_args[i], false, module, ctx, options, _here, outputs, _current_fn);
        };
    };
    if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_z64rfJDX(overload.name))
        src += ", /*postfix*/int"_fu;

    src += ")"_fu;
    return /*NRVO*/ src;
}

                                #ifndef DEF_M_LOOP_BODY
                                #define DEF_M_LOOP_BODY
inline constexpr int M_LOOP_BODY = (1 << 9);
                                #endif

static bool exprOK_Y8Cf5Mdw(fu::view<s_SolvedNode> nodes, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        const s_kind k = n.kind;
        if ((k == s_kind_jump) || (k == s_kind_loop) || (k == s_kind_try) || (k == s_kind_defer) || (k == s_kind_pragma))
            return false;
        else if ((k == s_kind_letdef) && !s_SolverStatus((GET_JFXuxNiz(n.target, module, ctx, _here, _current_fn).status & s_SolverStatus_SS_HOIST)))
            return false;
        else if (!exprOK_Y8Cf5Mdw(n.items, module, ctx, _here, _current_fn))
            return false;

    };
    return true;
}

                                #ifndef DEF_M_CHECK_NEVER_LTR
                                #define DEF_M_CHECK_NEVER_LTR
inline constexpr int M_CHECK_NEVER_LTR = (1 << 14);
                                #endif

static fu::vec<fu::str> cgNodes_E7HJ67E3(fu::view<s_SolvedNode> nodes, const int mode, fu::view<char> trail, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu::vec<fu::str> result {};
    fu::vec<fu::str> _tv0 {};
    if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs););
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& node = nodes[i];
        if ((mode & M_CHECK_NEVER_LTR) && is_never_8KZIyCKE(node.type) && (i < (nodes.size() - 1)))
            BUG_MI7t3VRj("M_CHECK_NEVER_LTR: non-trailing node.is_never"_fu, ctx, _here);
        else
        {
            const bool isTrail = ((trail && (i == (nodes.size() - 1)) && !is_never_8KZIyCKE(node.type)) ? !isIrrelevant_DOKZ61Hc(node.type) : false);
            /*MOV*/ fu::str src = (node ? cgNode_Sjk9MAYk(node, (isTrail ? (mode & ~M_STMT) : mode), (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn) : fu::str{});
            if (src || (mode & M_STMT))
            {
                if ((mode & M_STMT) && _current_fn.TEMPVARs)
                {
                    result += _current_fn.TEMPVARs;
                    _current_fn.TEMPVARs.clear();
                };
                if (isTrail)
                    src = (((trail + "("_fu) + src) + ")"_fu);

                result.push(static_cast<fu::str&&>(src));
            }
            else
                BUG_MI7t3VRj((((x7E_r7bhmB7D("cgNodes: empty output for Node(kind=`"_fu, str_k2hK9UHj(node.kind)) + "` value=`"_fu) + node.value) + "`)."_fu), ctx, _here);

        };
    };
    return /*NRVO*/ result;
}

static fu::str cgComma_qPm3Cg9B(fu::view<s_SolvedNode> nodes, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::vec<fu::str> items = cgNodes_E7HJ67E3(nodes, M_CHECK_NEVER_LTR, fu::view<char>{}, module, ctx, options, _here, outputs, _current_fn);
    if (!items.size())
    {
        noteDefect_QRoAj4Vh(s_CGDefects_IrrelevantLiteral, ctx, options, _here, outputs);
        return "void()"_fu;
    }
    else if (items.size() == 1)
        return fu::str(items[0]);
    else
    {
        fu::str src = "("_fu;
        for (int i = 0; i < items.size(); i++)
        {
            if (i)
                src += ", "_fu;

            src += items[i];
        };
        return src + ")"_fu;
    };
}

                                #ifndef DEF_M_OPT_CURLIES
                                #define DEF_M_OPT_CURLIES
inline constexpr int M_OPT_CURLIES = (1 << 8);
                                #endif

                                #ifndef DEF_each_taCSHUxSuB2
                                #define DEF_each_taCSHUxSuB2
inline void each_taCSHUxS(fu::view<s_Region> a, bool& force_mut, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        const int local = Region_asLocal_AEPMcxRF(r);
        if (!local || !(GET_JFXuxNiz(nested_l2hq6NM5(local, _current_fn), module, ctx, _here, _current_fn).flags & s_Flags_F_MOVED_FROM))
        {
            force_mut = false;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF_if_first_HTJeFkMmZC7
                                #define DEF_if_first_HTJeFkMmZC7
inline char if_first_HTJeFkMm(fu::view<char> s)
{
    if (s.size())
        return s[0];
    else
    {
        return char{};
    };
}
                                #endif

                                #ifndef DEF_if_last_HTJeFkMmZC7
                                #define DEF_if_last_HTJeFkMmZC7
inline char if_last_HTJeFkMm(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str cgStatements_OQVK8CCs(fu::view<s_SolvedNode> nodes, int& count, fu::view<char> trail, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::vec<fu::str> lines = cgNodes_E7HJ67E3(nodes, (M_STMT | M_CHECK_NEVER_LTR), trail, module, ctx, options, _here, outputs, _current_fn);
    count = lines.size();
    /*MOV*/ fu::str src {};
    for (int i = 0; i < lines.size(); i++)
    {
        fu::view<char> line = lines[i];
        if (line)
        {
            src += (((if_first_HTJeFkMm(line) == '\n') ? ('\n' + line) : (outputs._indent + line)) + ((if_last_HTJeFkMm(line) == ';') ? '\n' : ';'));
        };
    };
    return /*NRVO*/ src;
}

                                #ifndef DEF_has_POzvwmtfK11
                                #define DEF_has_POzvwmtfK11
inline bool has_POzvwmtf(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu::str cgBlock_qtOXDe13(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Helpers& helpers, const s_Type& type, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const int _ids_used0 = _current_fn._ids_used.size();
    fu_DEFER(if (!_current_fn._hoist)
        _current_fn._ids_used.shrink(_ids_used0););
    /*MOV*/ fu::str indent0 { outputs._indent };
    fu_DEFER(outputs._indent = static_cast<fu::str&&>(indent0));
    outputs._indent += "    "_fu;
    fu::str open = "{"_fu;
    fu::str close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu::str trail {};
    fu::str name = x7E_r7bhmB7D("BL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const bool has_val = !isIrrelevant_DOKZ61Hc(type);
    bool ptrflip = false;
    if (has_val)
    {
        bool force_mut = is_ref_vcLGyw8p(type);
        each_taCSHUxS(type.lifetime.uni0n, force_mut, module, ctx, _here, _current_fn);
        fu::str annot = typeAnnot_awxZNOaL(type, (force_mut ? M_MOVABLE : 0), module, ctx, options, _here, outputs, _current_fn);
        fu::str id = emitTEMPVAR_hoePgunY(annot, ptrflip, (name ? (name + "_v"_fu) : fu::str{}), fu::view<char>{}, _current_fn);
        fu::str out = (ptrflip ? ("*"_fu + id) : cgMove_4bOq51sG(type, id, module, ctx, options, _here, outputs, _current_fn));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu::str(name), s_Helpers(helpers), has_val, ptrflip };
    int count {};
    /*MOV*/ fu::str src = cgStatements_OQVK8CCs(nodes, count, trail, module, ctx, options, _here, outputs, _current_fn);
    const bool labelUsed = fu::has(src, (("goto "_fu + name) + ";"_fu));
    if (labelUsed)
    {
        close = (((("  } "_fu + name) + ":;"_fu) + indent0) + close);
        open = "{ {"_fu;
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || labelUsed || has_POzvwmtf(src, '{') || fu::has(src, "if"_fu))
    {
        fu::str gnuOpen {};
        if (gnuStmtExpr)
        {
            noteDefect_QRoAj4Vh(s_CGDefects_GNUStmtExpr, ctx, options, _here, outputs);
            gnuOpen = "(__extension__ ("_fu;
        };
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);
    };
    return /*NRVO*/ src;
}

static fu::str cgBlock_FcfGS45z(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::vec<s_SolvedNode> items = ((node.kind == s_kind_block) ? fu::vec<s_SolvedNode>(node.items) : fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Helpers& helpers = ((node.kind == s_kind_block) ? node.helpers : (*(const s_Helpers*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = helpers;

    if (!(mode & M_STMT))
    {
        if ((items.size() >= 2))
        {
            const s_SolvedNode& last = items[(items.size() - 1)];
            const s_SolvedNode& expr = (((last.kind == s_kind_return) && last.items) ? last.items[0] : last);
            if (expr.kind == s_kind_call)
            {
                const s_Target& target = expr.target;
                const s_SolvedNode& prev = items[(items.size() - 2)];
                if ((prev.kind == s_kind_letdef) && (prev.target == target))
                    noteDefect_QRoAj4Vh(s_CGDefects_PointlessLocal, ctx, options, _here, outputs);

            };
        };
    };
    const bool expr = !(mode & M_STMT);
    if (expr && exprOK_Y8Cf5Mdw(items, module, ctx, _here, _current_fn))
        return cgComma_qPm3Cg9B(items, module, ctx, options, _here, outputs, _current_fn);
    else
        return cgBlock_qtOXDe13(items, !!(mode & M_OPT_CURLIES), expr, helpers, (expr ? node.type : (*(const s_Type*)fu::NIL)), module, ctx, options, _here, outputs, _current_fn);

}

static void cgFn_WpEqweCY(const s_SolvedNode& fn, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu::str indent0 { outputs._indent };
    fu_DEFER(outputs._indent = static_cast<fu::str&&>(indent0));
    fu::view<s_SolvedNode> items = fn.items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    fu::view<char> id = overload.name;
    if (overload.status & s_SolverStatus_SS_FINALIZED)
    {
        if (!body)
        {
            if (!((overload.kind == s_kind___native) || (overload.kind == s_kind_inline)))
                BUG_MI7t3VRj(((x7E_r7bhmB7D("cgFn: no body on non-native: "_fu, str_k2hK9UHj(overload.kind)) + " "_fu) + id), ctx, _here);

        }
        else if (overload.status & s_SolverStatus_SS_Debug_AllPassesComplete)
        {
            outputs._indent = "\n"_fu;
            fu::str src {};

            {
                s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(fn.target), 0, fu::vec<fu::str>{}, fu::vec<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<fu::str>{} };
                fu_DEFER(std::swap(_current_fn, current_fn0));
                std::swap(_current_fn, current_fn0);
                _current_fn.can_return = body.helpers;
                src += cgFnSignature_59vfF5Pd(fn, module, ctx, options, _here, outputs, _current_fn);
                fu::str body_src = cgBlock_FcfGS45z(body, M_STMT, module, ctx, options, _here, outputs, _current_fn);
                if (_current_fn._hoist)
                {
                    fu::str hoist = "\n    // Hoisted:"_fu;
                    for (int i = 0; i < _current_fn._hoist.size(); i++)
                        hoist += (("\n    "_fu + _current_fn._hoist[i]) + ";"_fu);

                    const int idx = (fu::lfind(body_src, "{"_fu) + 1);
                    if (idx > 0)
                        body_src.splice(idx, 0, (hoist + "\n"_fu));

                };
                src += body_src;
            };
            /*MOV*/ fu::str dedupe = (((overload.flags & s_Flags_F_PUB) && (overload.flags & s_Flags_F_TEMPLATE)) ? valid_identifier_yENXZigi(fu::str(overload.name)) : fu::str{});
            fu::view<char> sighash = EXT_vpuSInYo(target, module, ctx).sighash;
            fu::str dedupe_1 = ((dedupe && sighash) ? ((dedupe + '_') + sighash) : static_cast<fu::str&&>(dedupe));
            if (overload.flags & s_Flags_F_HOTSWAP)
            {
                if (target.modid == module.modid)
                {
                    outputs._live_targets += target.index;
                    fu::str fnID = fnID_CdrwBOXT(target, module, ctx, _here, _current_fn);
                    fu::str fnID_local = (fnID + "_local"_fu);
                    fu::str fnPtrAnnot = cgFnPrototype_PFDQ6A3X(target, true, module, ctx, options, _here, outputs, _current_fn);
                    include_9b9HRlw3("<dl/hotswap.hpp>"_fu, outputs);
                    ensureFwdDecl_Qv6ZAUP8(target, module, ctx, options, _here, outputs, _current_fn);
                    src = (((((((((((((((((((((("                                #ifdef fu_HOTSWAP\n"_fu + "                                #define "_fu) + fnID) + " "_fu) + fnID_local) + "\n"_fu) + "extern \"C\" fu_EXPORT\n"_fu) + "                                #endif\n"_fu) + src) + "\n"_fu) + "                                #ifdef fu_HOTSWAP\n"_fu) + "                                #undef "_fu) + fnID) + "\n"_fu) + fnPtrAnnot) + " =\n    fu::hotswap(\""_fu) + fnID_local) + "\",\n                 "_fu) + fnID) + ",\n                &"_fu) + fnID_local) + ");\n"_fu) + "                                #endif"_fu);
                }
                else
                    BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here);

            };
            if (dedupe_1)
            {
                outputs._fdef += ((("\n                                #ifndef DEF_"_fu + dedupe_1) + "\n                                #define DEF_"_fu) + dedupe_1);
            };
            outputs._fdef += (("\n"_fu + src) + "\n"_fu);
            if (dedupe_1)
            {
                outputs._fdef += "                                #endif\n"_fu;
            };
        }
        else
            BUG_MI7t3VRj(("cgFn: SS_Debug_AllPassesComplete not set: "_fu + id), ctx, _here);

    }
    else
        BUG_MI7t3VRj(("cgFn: SS_FINALIZED not set: "_fu + id), ctx, _here);

}

static void ensureFnDef_6bCQPUji(const s_Target& target, const bool offtarget, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if ((target.modid == module.modid) || offtarget)
    {
        if (!add_SmNkMoTV(outputs._fdef_started, target))
        {
            if (!has_SWM1va5b(outputs._fdef_complete, target))
            {
                if (!s_SolverStatus((GET_JFXuxNiz(target, module, ctx, _here, _current_fn).status & s_SolverStatus_SS_FN_RECUR)))
                    BUG_MI7t3VRj("ensureFnDef: Function without SS_FN_RECUR appears to be recursive."_fu, ctx, _here);
                else
                    ensureFwdDecl_Qv6ZAUP8(target, module, ctx, options, _here, outputs, _current_fn);

            };
        }
        else
        {
            const s_SolvedNode& node = GET_JFXuxNiz(target, module, ctx, _here, _current_fn).solved;
            if (node.kind == s_kind_fn)
            {
                cgFn_WpEqweCY(node, module, ctx, options, _here, outputs, _current_fn);
                if (!(add_SmNkMoTV(outputs._fdef_complete, target)))
                    BUG_MI7t3VRj(("ensureFnDef: _fdef_complete twice: "_fu + GET_JFXuxNiz(target, module, ctx, _here, _current_fn).name), ctx, _here);

            }
            else
                BUG_MI7t3VRj("ensureFnDef non-fn"_fu, ctx, _here);

        };
    }
    else
        BUG_MI7t3VRj((((x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu), str_k2hK9UHj(GET_JFXuxNiz(target, module, ctx, _here, _current_fn).kind)) + " "_fu) + GET_JFXuxNiz(target, module, ctx, _here, _current_fn).name) + "`."_fu), ctx, _here);

}

static void ensureFnUsable_DPWQNyFz(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    const bool offtarget = (target.modid != module.modid);
    if (offtarget && !isInlLinked_Z9Zz3JZT(GET_JFXuxNiz(target, module, ctx, _here, _current_fn)))
        ensureFwdDecl_Qv6ZAUP8(target, module, ctx, options, _here, outputs, _current_fn);
    else
        ensureFnDef_6bCQPUji(target, offtarget, module, ctx, options, _here, outputs, _current_fn);

}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

inline static bool isIntegerConstant_yakL8b1I(const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (expr.kind == s_kind_int)
        return true;
    else
    {
        if (expr.kind == s_kind_call)
        {
            const s_Overload& t = GET_JFXuxNiz(expr.target, module, ctx, _here, _current_fn);
            if ((t.kind == s_kind___native) && (t.flags & s_Flags_F_OPERATOR))
            {
                for (int i = 0; i < expr.items.size(); i++)
                {
                    if (!isIntegerConstant_yakL8b1I(expr.items[i], module, ctx, _here, _current_fn))
                        return false;

                };
                return true;
            };
        };
        return false;
    };
}

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

static fu::str binding_4LivgN9y(const s_Target& target, const s_SolvedNode& init, const bool doInit, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu::str head = binding_teOAO5Ny(target, false, module, ctx, options, _here, outputs, _current_fn);
    if (!doInit)
        return /*NRVO*/ head;
    else
    {
        if (GET_JFXuxNiz(target, module, ctx, _here, _current_fn).status & s_SolverStatus_SS_HOIST)
            head += " = "_fu;

        if (!init || ((init.kind == s_kind_definit) && !is_ref_vcLGyw8p(init.type)))
        {
            return head + " {}"_fu;
        }
        else
        {
            const bool isCopy = ((init.kind == s_kind_copy) ? !is_ref_vcLGyw8p(GET_JFXuxNiz(target, module, ctx, _here, _current_fn).solved.type) : false);
            const s_SolvedNode& init_1 = (isCopy ? only_fLVI01Cf(init.items) : init);
            if ((init_1.kind == s_kind_bool) && !(GET_JFXuxNiz(target, module, ctx, _here, _current_fn).flags & s_Flags_F_PUB) && !is_mutref_tkXzsAAo(GET_JFXuxNiz(target, module, ctx, _here, _current_fn).type, _here, ctx))
                noteDefect_QRoAj4Vh(s_CGDefects_LocalConstBool, ctx, options, _here, outputs);

            const bool use_initTEMPVARs = !_current_fn.target.index;
            fu::vec<fu::str> initTEMPVARs {};
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            fu::str expr = cgNode_Sjk9MAYk(init_1, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            if (initTEMPVARs)
            {
                expr = (((((("[]() -> "_fu + typeAnnot_awxZNOaL(init_1.type, 0, module, ctx, options, _here, outputs, _current_fn)) + " {\n    "_fu) + join_9dTc0Ds4(initTEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}()"_fu);
            };
            if (isCopy && !is_primitive_6bkyMkO3(init_1.type.vtype))
            {
                return ((head + " { "_fu) + expr) + " }"_fu;
            }
            else if (GET_JFXuxNiz(target, module, ctx, _here, _current_fn).status & s_SolverStatus_SS_HOIST)
            {
                if (F_HOIST_asPtr_J5gS8aKm(target, module, ctx, _here, _current_fn))
                    return ((head + "&("_fu) + expr) + ")"_fu;
                else
                    return head + expr;

            }
            else
                return (head + " = "_fu) + expr;

        };
    };
}

static fu::str binding_yzfywsDw(const s_SolvedNode& node, const bool doInit, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = node.target;
    const s_SolvedNode& init = ((doInit && node.items) ? node.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
    return binding_4LivgN9y(target, init, doInit, module, ctx, options, _here, outputs, _current_fn);
}

static fu::str cgLet_14cUc75e(const s_SolvedNode& node, const bool global, const bool foreign, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isIrrelevant_DOKZ61Hc(node.type))
    {
        return fu::str{};
    }
    else
    {
        const bool intconst = ((global && is_primitive_6bkyMkO3(node.type.vtype) && !is_floating_pt_6bkyMkO3(node.type.vtype)) ? isIntegerConstant_yakL8b1I(node.items[LET_INIT], module, ctx, _here, _current_fn) : false);
        /*MOV*/ fu::str src = binding_yzfywsDw(node, (!foreign || intconst), module, ctx, options, _here, outputs, _current_fn);
        if (!global)
            return /*NRVO*/ src;
        else
        {
            if (starts_1wDddajZ(src, "const "_fu))
                src = fu::slice(src, 6);

            if (intconst)
            {
                outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                return fu::str{};
            }
            else
            {
                const int prio = (is_primitive_6bkyMkO3(node.type.vtype) ? 0 : ((node.target.modid == module.modid) ? module.order.dep_depth : ctx.modules[node.target.modid].order.dep_depth));
                if (prio)
                {
                    include_9b9HRlw3("<fu/init_priority.h>"_fu, outputs);
                    fu::str attr = (x7E_r7bhmB7D("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ")"_fu);
                    const int eq = find_POzvwmtf(src, '=');
                    if (eq > 0)
                        src = (((fu::get_view(src, 0, eq) + attr) + " "_fu) + fu::get_view(src, eq, src.size()));

                };
                if (!isExtLinked_61HXazVT(GET_JFXuxNiz(node.target, module, ctx, _here, _current_fn)))
                {
                    if (!foreign)
                        outputs._fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
                    else
                        BUG_MI7t3VRj(("Cannot codegen, relies on an external static: "_fu + GET_JFXuxNiz(node.target, module, ctx, _here, _current_fn).name), ctx, _here);

                }
                else
                {
                    outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\nextern const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                };
                return fu::str{};
            };
        };
    };
}

static fu::str cgGlobal_fQaKi9Ft(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!add_SmNkMoTV(outputs._ffwd, target))
    {
        return fu::str{};
    }
    else
        return cgLet_14cUc75e(GET_JFXuxNiz(target, module, ctx, _here, _current_fn).solved, true, (target.modid != module.modid), module, ctx, options, _here, outputs, _current_fn);

}

                                #ifndef DEF_has_E59mf3XC9N1
                                #define DEF_has_E59mf3XC9N1
inline bool has_E59mf3XC(fu::view<fu::str> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu::str rootNS_kOhdRZmS(const fu::str& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_E59mf3XC(_current_fn._ids_used, id))
        return "::"_fu + id;
    else
        return fu::str(id);

}

static fu::str cgEnumv_LlbZbb0t(const s_Type& type, fu::view<char> id, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::str base = typeAnnotBase_2In518b4(type, 0, module, ctx, options, _here, outputs, _current_fn);
    return (base + "_"_fu) + id;
}

static fu::str emitPrefixOp_nkJTbLeR(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view_mut<fu::str> item_src, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> _0 {};
    return unpromote_eYhKYZlc((_0 = op, (static_cast<fu::view<char>&&>(_0) + ARG_Y6sMqUi8(0, item_src))), node, isNative, module, ctx, options, _here, outputs, _current_fn);
}

inline static fu::str l_37_7_7rkCenqY(const s_SolvedNode& x)
{
    return str_k2hK9UHj(x.kind);
}

                                #ifndef DEF_map_arqJv984b4k
                                #define DEF_map_arqJv984b4k
inline fu::vec<fu::str> map_arqJv984(fu::view<s_SolvedNode> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_37_7_7rkCenqY(a[i]);

    return /*NRVO*/ res;
}
                                #endif

static fu::str cgCall_0efTY8Z7(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Extended& ext = EXT_vpuSInYo(node.target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_JFXuxNiz(node.target, module, ctx, _here, _current_fn))) ? *_0 : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here));
    fu::view<s_SolvedNode> args = node.items;
    const bool isNative = (target.kind == s_kind___native);
    const bool isSimpleCpyMovAssign = (((args.size() == 2) && isNative && (target.name == "="_fu)) ? isFieldChain_n5oJBeU7(args[0], module, ctx, _here, _current_fn) : false);
    const int MUSTSEQ_mask = node.helpers.index;
    int ooe_crosscheck = 0;
    fu::str ooe_header {};
    fu::vec<fu::str> item_src {};
    item_src.resize(args.size());
    const bool RTL = isRTL_lOupdufN(target);
    fu::view<s_Argument> host_args = ext.args;
    if (args)
        argsForward_dsnGhqOs(RTL, host_args, 0, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL, host_args, module, ctx, options, _here, outputs, _current_fn, _here, ctx);

    if ((ooe_crosscheck & MUSTSEQ_mask) == MUSTSEQ_mask)
    {
        if (isNative && (target.name[0] == '\n'))
        {
            /*MOV*/ fu::str id = fu::slice(target.name, (NativeHacks_o6l3osDy(target.name).name_start_idx + 1));
            const int idx = find_POzvwmtf(id, '\n');
            if (idx > -1)
            {
                include_9b9HRlw3(fu::slice(id, 0, idx), outputs);
                id = fu::slice(id, (idx + 1));
            };
            if (id[0] == '.')
            {
                if (args.size() > 1)
                    return emitMethodCall_sECY5VPm(id, ooe_header, item_src);
                else
                    return emitPostfixOp_56NUciGQ(id, node, isNative, item_src, module, ctx, options, _here, outputs, _current_fn);

            }
            else if (id[0] == '/')
                return ooeWrap_YeZDpCfS(emitBuiltin_rvS7StNE(id, item_src, node, module, ctx, options, _here, outputs, _current_fn), ooe_header);
            else if (args)
            {
                if (hasIdentifierChars_j1t51HgV(id))
                    return emitFunctionCall_iqmIuGNF(id, "("_fu, ")"_fu, ooe_header, item_src);
                else
                    return emitBinaryOp_W7Knx8k3(id, node, mode, args, isNative, ooe_header, item_src, module, ctx, options, _here, outputs, _current_fn);

            }
            else
                return /*NRVO*/ id;

        }
        else if (target.kind == s_kind_type)
        {
            if (!args)
                return cgDefault_cYfQenIY(target.type, module, ctx, options, _here, outputs, _current_fn);
            else
            {
                const s_Struct* _1;
                const s_Struct& t = (*(_1 = &(tryLookupUserType_LriKPDIk(target.type.vtype, ctx, module))) ? *_1 : BUG_MI7t3VRj("cgCall: defctor/type not a struct nor a user primitive."_fu, ctx, _here));
                fu::str base = typeAnnotBase_2In518b4(target.type, 0, module, ctx, options, _here, outputs, _current_fn);
                if (t.kind == s_kind_flags)
                    return emitFunctionCall_iqmIuGNF(base, "(("_fu, ((") & MASK_"_fu + base) + ")"_fu), ooe_header, item_src);
                else if ((t.kind == s_kind_primitive) || (t.kind == s_kind_enum))
                    return emitFunctionCall_iqmIuGNF(base, "("_fu, ")"_fu, ooe_header, item_src);
                else if ((t.kind == s_kind_struct) || (t.kind == s_kind_union))
                {
                    return emitFunctionCall_iqmIuGNF(base, " { "_fu, " }"_fu, ooe_header, item_src);
                }
                else
                    BUG_MI7t3VRj(x7E_r7bhmB7D("Unknown usertype kind: "_fu, str_k2hK9UHj(t.kind)), ctx, _here);

            };
        }
        else
        {
            if (node.target.modid && (target.kind == s_kind_fn))
                ensureFnUsable_DPWQNyFz(node.target, module, ctx, options, _here, outputs, _current_fn);

            const fu::str& id = (target.name ? target.name : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here));
            if ((args.size() <= 2))
            {
                if (target.kind == s_kind_var)
                {
                    if (isIrrelevant_DOKZ61Hc(target.type))
                        return cgDefault_cYfQenIY(target.type, module, ctx, options, _here, outputs, _current_fn);
                    else if (!isLocal_IlFptBeB(node.target))
                    {
                        cgGlobal_fQaKi9Ft(node.target, module, ctx, options, _here, outputs, _current_fn);
                        return rootNS_kOhdRZmS(ID_lY0aOmE2(id), _current_fn);
                    }
                    else
                    {
                        /*MOV*/ fu::str id_1 = localID_ol9gMTjM(node.target, false, module, ctx, _here, _current_fn);
                        if (F_HOIST_asPtr_J5gS8aKm(node.target, module, ctx, _here, _current_fn))
                            return ("(*"_fu + id_1) + ")"_fu;
                        else
                            return /*NRVO*/ id_1;

                    };
                }
                else if (target.kind == s_kind_field)
                    return (ARG_Y6sMqUi8(0, item_src) + "."_fu) + ID_lY0aOmE2(id);
                else if (target.kind == s_kind_enumv)
                    return cgEnumv_LlbZbb0t(target.type, id, module, ctx, options, _here, outputs, _current_fn);
                else
                {
                    if (isOp_drkhkBLT(node.target, module, ctx, _here, _current_fn))
                    {
                        if (args.size() == 1)
                        {
                            if (hasPostfix_z64rfJDX(id))
                                return emitPostfixOp_56NUciGQ(valid_operator_pSc2WOcQ(id), node, isNative, item_src, module, ctx, options, _here, outputs, _current_fn);
                            else
                                return emitPrefixOp_nkJTbLeR(valid_operator_pSc2WOcQ(id), node, isNative, item_src, module, ctx, options, _here, outputs, _current_fn);

                        }
                        else if (args.size() == 2)
                        {
                            if (id == "[]"_fu)
                            {
                                fu::str _2 {};
                                return ooeWrap_YeZDpCfS(((_2 = (ARG_Y6sMqUi8(0, item_src) + "["_fu), (static_cast<fu::str&&>(_2) + ARG_Y6sMqUi8(1, item_src))) + "]"_fu), ooe_header);
                            }
                            else
                                return emitBinaryOp_W7Knx8k3(valid_operator_pSc2WOcQ(id), node, mode, args, isNative, ooe_header, item_src, module, ctx, options, _here, outputs, _current_fn);

                        };
                    };
                    if ((id == "STEAL"_fu) && (args.size() == 1))
                        return cgMove_4bOq51sG(node.type, ARG_Y6sMqUi8(0, item_src), module, ctx, options, _here, outputs, _current_fn);

                };
            };
            if (isNative)
                BUG_MI7t3VRj((("Unknown __native: `"_fu + id) + "`."_fu), ctx, _here);
            else
                return emitFunctionCall_iqmIuGNF(rootNS_kOhdRZmS(fnID_CdrwBOXT(node.target, module, ctx, _here, _current_fn), _current_fn), "("_fu, ")"_fu, ooe_header, item_src);

        };
    }
    else
        BUG_MI7t3VRj(((x7E_r7bhmB7D((x7E_r7bhmB7D("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(MUSTSEQ_mask)) + ": "_fu) + join_9dTc0Ds4(map_arqJv984(args), "|"_fu)), ctx, _here);

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

                                #ifndef DEF_starts_90iSu77lC9e
                                #define DEF_starts_90iSu77lC9e
inline bool starts_90iSu77l(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static fu::str cgLiteral_0luVqINg(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isIrrelevant_DOKZ61Hc(node.type))
        noteDefect_QRoAj4Vh(s_CGDefects_IrrelevantLiteral, ctx, options, _here, outputs);

    /*MOV*/ fu::str src { node.value };
    int idx {};
    while (((idx = find_OIHcVRad(src, '_', idx)) >= 0))
        src.splice(idx, 1);

    fu::view<char> _0 {};
    fu::view<char> base = ((_0 = tryLookupUserType_LriKPDIk(node.type.vtype, ctx, module).base) ? static_cast<fu::view<char>&&>(_0) : node.type.vtype.canon);
    if (starts_90iSu77l(base, 'u') && !has_POzvwmtf(src, 'u'))
        src += 'u';

    if (starts_90iSu77l(base, 'f'))
    {
        if (!has_POzvwmtf(src, '.') && !has_POzvwmtf(src, (has_POzvwmtf(src, 'x') ? 'p' : 'e')))
            src += ".0"_fu;

        if (base == "f32"_fu)
        {
            if (has_POzvwmtf(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (base != "f64"_fu)
            BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here);

    };
    if (starts_1wDddajZ(src, "0o"_fu))
        src.splice(1, 1);

    if (starts_90iSu77l(base, 'i') || starts_90iSu77l(base, 'u'))
    {
        if (src.size() > 16)
        {
            s_Intlit parse = Intlit_SQ4NkHfH(src);
            if (parse.negative && (parse.absval == 0x8000000000000000ull))
                return "(-9223372036854775807-1)"_fu;

        };
        if ((base == "u64"_fu) || (base == "i64"_fu))
        {
            if (!has_POzvwmtf(src, 'l'))
                return src + "ll"_fu;

        }
        else if ((base != "u32"_fu) && (base != "i32"_fu))
        {
            if (!(mode & M_ENUM_DECL))
                return ((typeAnnotBase_2In518b4(node.type, 0, module, ctx, options, _here, outputs, _current_fn) + "("_fu) + src) + ")"_fu;

        };
    };
    return /*NRVO*/ src;
}

static fu::str escapeStringLiteral_3ti4L7Ku(fu::view<char> str, const char quot)
{
    /*MOV*/ fu::str esc = fu::str { fu::slate<1, char> { quot } };
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (c == '\n')
            esc += "\\n"_fu;
        else if (c == '\r')
            esc += "\\r"_fu;
        else if (c == '\t')
            esc += "\\t"_fu;
        else if (c == '\v')
            esc += "\\v"_fu;
        else if (c == '\\')
            esc += "\\\\"_fu;
        else if (fu::i8(fu::u8(c)) < fu::i8(32))
            esc += ("\\"_fu + xHH_HlYTW9wB(unsigned(fu::u8(c))));
        else
        {
            if (c == quot)
                esc += '\\';

            esc += c;
        };
    };
    esc += quot;
    return /*NRVO*/ esc;
}

static fu::str cgCharLiteral_FmYJkMgW(const s_SolvedNode& node, const s_Context& ctx, const s_Options& options, const s_TokenIdx& _here, s_Outputs& outputs)
{
    if (isIrrelevant_DOKZ61Hc(node.type))
        noteDefect_QRoAj4Vh(s_CGDefects_IrrelevantLiteral, ctx, options, _here, outputs);

    return escapeStringLiteral_3ti4L7Ku(node.value, '\'');
}

static fu::str cgStringLiteral_t2j74T0s(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isIrrelevant_DOKZ61Hc(node.type))
        noteDefect_QRoAj4Vh(s_CGDefects_IrrelevantLiteral, ctx, options, _here, outputs);

    if (is_enum_6bkyMkO3(node.type.vtype) || is_flags_6bkyMkO3(node.type.vtype))
        return cgEnumv_LlbZbb0t(node.type, node.value, module, ctx, options, _here, outputs, _current_fn);
    else
    {
        annotateString_nInsyU1o(outputs);
        /*MOV*/ fu::str esc = escapeStringLiteral_3ti4L7Ku(node.value, '"');
        esc += "_fu"_fu;
        return /*NRVO*/ esc;
    };
}

static bool arrayType_annotateAsView_J1wnb0bF(const s_Type& type)
{
    if (is_ref_vcLGyw8p(type))
        return !(is_rx_copy_UHdpdATk(type) || is_rx_resize_UHdpdATk(type));
    else
        return false;

}

static fu::str cgArrayLiteral_gzhCXiJA(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isIrrelevant_DOKZ61Hc(node.type))
        noteDefect_QRoAj4Vh(s_CGDefects_IrrelevantLiteral, ctx, options, _here, outputs);

    if (node.target)
        return cgCall_0efTY8Z7(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else
    {
        fu::vec<fu::str> items = cgNodes_E7HJ67E3(node.items, M_CHECK_NEVER_LTR, fu::view<char>{}, module, ctx, options, _here, outputs, _current_fn);
        if (!items.size())
            return cgDefault_cYfQenIY(node.type, module, ctx, options, _here, outputs, _current_fn);
        else
        {
            fu::str curly = (("{ "_fu + join_9dTc0Ds4(items, ", "_fu)) + " }"_fu);
            fu::str itemT = typeAnnotBase_2In518b4(clear_sliceable_PUTlNd47(node.type, _here, ctx), 0, module, ctx, options, _here, outputs, _current_fn);
            fu::str slate = ((((x7E_r7bhmB7D("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
            if (arrayType_annotateAsView_J1wnb0bF(callarg))
            {
                include_9b9HRlw3("<fu/view.h>"_fu, outputs);
                return ("("_fu + slate) + ")"_fu;
            }
            else
            {
                return ((typeAnnotBase_2In518b4(node.type, 0, module, ctx, options, _here, outputs, _current_fn) + " { "_fu) + slate) + " }"_fu;
            };
        };
    };
}

static fu::str cgDefinit_pUeC6daw(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgArrayLiteral_gzhCXiJA(node, mode, callarg, module, ctx, options, _here, outputs, _current_fn);
}

                                #ifndef DEF_M_RETURN
                                #define DEF_M_RETURN
inline constexpr int M_RETURN = (1 << 5);
                                #endif

static void sanityCheck_6RX1mJBv(fu::view<s_Region> lt, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (lt)
    {
        for (int i = 0; i < lt.size(); i++)
        {
            const s_Region& r = lt[i];
            if (!(Region_asLocal_AEPMcxRF(r) || Region_isTemp_28foEZVg(r)))
            {
                BUG_MI7t3VRj("cgMoveOrClone: Considering a move from non-local lifetime."_fu, ctx, _here);
            };
        };
    }
    else
    {
        BUG_MI7t3VRj("cgMoveOrClone: Considering a move from an empty lifetime."_fu, ctx, _here);
    };
}

static bool supportsNRVO_gL2ZiiEl(const s_Target& t, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if ((GET_JFXuxNiz(t, module, ctx, _here, _current_fn).kind == s_kind_var) && !(GET_JFXuxNiz(t, module, ctx, _here, _current_fn).flags & s_Flags_F_ARG))
        return !is_ref_vcLGyw8p(GET_JFXuxNiz(t, module, ctx, _here, _current_fn).solved.type);
    else
        return false;

}

static bool mayNeedConstCast_YAyeOVJM(fu::view<s_SolvedNode> items, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < items.size(); i++)
    {
        if (mayNeedConstCast_D80fhtq0(items[i], module, ctx, _here, _current_fn))
            return true;

    };
    return false;
}

static bool mayNeedConstCast_D80fhtq0(const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (is_mutref_tkXzsAAo(expr.type, _here, ctx) || !is_ref_vcLGyw8p(expr.type))
        return false;
    else if ((expr.kind == s_kind_and) || (expr.kind == s_kind_or))
        return mayNeedConstCast_YAyeOVJM(expr.items, module, ctx, _here, _current_fn);
    else if (expr.kind == s_kind_if)
        return mayNeedConstCast_YAyeOVJM(fu::get_view(expr.items, 1, 3), module, ctx, _here, _current_fn);
    else if (expr.kind == s_kind_block)
        return (expr.items.size() > 0) && mayNeedConstCast_D80fhtq0(expr.items[(expr.items.size() - 1)], module, ctx, _here, _current_fn);
    else if (expr.kind == s_kind_call)
    {
        const s_kind k = GET_JFXuxNiz(expr.target, module, ctx, _here, _current_fn).kind;
        if (k == s_kind_field)
            return mayNeedConstCast_YAyeOVJM(expr.items, module, ctx, _here, _current_fn);
        else if (k == s_kind_var)
            return false;
        else
        {
            const s_Type& t = GET_JFXuxNiz(expr.target, module, ctx, _here, _current_fn).type;
            const bool mayNeedConstCast = (is_ref_vcLGyw8p(t) ? !is_mutref_tkXzsAAo(t, _here, ctx) : false);
            if (mayNeedConstCast)
            {
                sanityCheck_6RX1mJBv(expr.type.lifetime.uni0n, ctx, _here);
                fu::view<s_Region> lt = t.lifetime.uni0n;
                for (int i = 0; i < lt.size(); i++)
                {
                    const s_Region& r = lt[i];
                    if (!(Region_isArgPosition_28foEZVg(r) || Region_isTemp_28foEZVg(r)))
                        BUG_MI7t3VRj("About to return mayNeedConstCast, but fn returns non-arg refs."_fu, ctx, _here);

                };
            };
            return mayNeedConstCast;
        };
    }
    else
        return true;

}

static fu::str cgMoveOrClone_N5iks2bG(const s_kind kind, const s_Type& type, const fu::str& src, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (kind == s_kind_move)
        return cgMove_4bOq51sG(type, src, module, ctx, options, _here, outputs, _current_fn);
    else
        return cgClone_4XkrGKQY(type, src, module, ctx, options, _here, outputs, _current_fn);

}

static fu::str cgMoveOrClone_1ZSw2x6s(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& expr = only_fLVI01Cf(node.items);
    if (is_ref_vcLGyw8p(expr.type))
    {
        if ((mode & M_RETURN) && is_trivial_LriKPDIk(node.type.vtype, ctx, module))
            return cgNode_Sjk9MAYk(expr, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
        else
        {
            if (node.kind == s_kind_move)
            {
                sanityCheck_6RX1mJBv(expr.type.lifetime.uni0n, ctx, _here);
                if (mode & M_RETURN)
                {
                    const bool nrvo = (((expr.kind == s_kind_call) && (expr.items.size() == 0)) ? supportsNRVO_gL2ZiiEl(expr.target, module, ctx, _here, _current_fn) : false);
                    if (nrvo)
                        return "/*NRVO*/ "_fu + cgNode_Sjk9MAYk(expr, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);

                };
                if (!is_trivial_LriKPDIk(node.type.vtype, ctx, module))
                {
                    if (mayNeedConstCast_D80fhtq0(expr, module, ctx, _here, _current_fn))
                    {
                        noteDefect_QRoAj4Vh(s_CGDefects_ConstCast, ctx, options, _here, outputs);
                        fu::str annot = typeAnnotBase_2In518b4(node.type, 0, module, ctx, options, _here, outputs, _current_fn);
                        return ((((("static_cast<"_fu + annot) + "&&>(const_cast<"_fu) + annot) + "&>("_fu) + cgNode_Sjk9MAYk(expr, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn)) + "))"_fu;
                    };
                };
            };
            s_kind _0 {};
            return (_0 = node.kind, cgMoveOrClone_N5iks2bG(_0, node.type, cgNode_Sjk9MAYk(expr, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn), module, ctx, options, _here, outputs, _current_fn));
        };
    }
    else
        BUG_MI7t3VRj("cgMoveOrClone: !expr.is_ref"_fu, ctx, _here);

}

                                #ifndef DEF_M_RETBOOL
                                #define DEF_M_RETBOOL
inline constexpr int M_RETBOOL = (1 << 1);
                                #endif

static fu::str blockWrapSubstatement_TinGpX3W(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgBlock_FcfGS45z(node, ((M_STMT | M_OPT_CURLIES) | mode), module, ctx, options, _here, outputs, _current_fn);
}

static fu::str blockWrap_unlessIf_GGr0TmPx(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if ((node.kind == s_kind_if) || (node.kind == s_kind_and))
        return " "_fu + cgNode_Sjk9MAYk(node, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
    else
        return blockWrapSubstatement_TinGpX3W(node, 0, module, ctx, options, _here, outputs, _current_fn);

}

static fu::str cgIf_KXEBEOeP(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& n0 = node.items[0];
    if (is_never_8KZIyCKE(n0.type))
        BUG_MI7t3VRj("cgIf: cond.is_never"_fu, ctx, _here);
    else
    {
        const s_SolvedNode& n1 = node.items[1];
        const s_SolvedNode& n2 = node.items[2];
        const bool stmt = !!(mode & M_STMT);
        fu::str cond = (n0 ? cgNode_Sjk9MAYk(n0, (M_RETBOOL | (stmt ? M_PARENS : 0)), (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn) : fu::str{});
        fu::str cons = (n1 ? (stmt ? blockWrapSubstatement_TinGpX3W(n1, 0, module, ctx, options, _here, outputs, _current_fn) : cgNode_Sjk9MAYk(n1, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn)) : fu::str{});
        fu::str alt = (n2 ? (stmt ? blockWrap_unlessIf_GGr0TmPx(n2, module, ctx, options, _here, outputs, _current_fn) : cgNode_Sjk9MAYk(n2, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn)) : fu::str{});
        if (stmt)
        {
            return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((outputs._indent + "else"_fu) + alt) : fu::str{});
        }
        else
            return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;

    };
}

static void cgAndOr_concat_8PHtz1KQ(fu::str& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, const bool last_never_ok, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const int mode = (M_RETBOOL | ((parens && (items.size() == 1)) ? M_PARENS : 0));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const s_SolvedNode& item = items[i];
        if (is_never_8KZIyCKE(item.type) && !(last_never_ok && (i == (items.size() - 1))))
            BUG_MI7t3VRj("cgAndOr_concat: item.is_never"_fu, ctx, _here);
        else
        {
            fu::str term = cgNode_Sjk9MAYk(item, mode, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
            if (isIrrelevant_DOKZ61Hc(item.type))
                src += (("("_fu + term) + ", 0)"_fu);
            else
                src += term;

        };
    };
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool acceptsBool_6GIELG53(const s_Type& type)
{
    return isAssignable_Ptvwgj5A(type, t_bool, false, false);
}

static fu::str via_k8nDbasT(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
    {
        fu::str _0 {};
        tv.id = (_0 = fu::str((tv.annot = typeAnnot_awxZNOaL(type, 0, module, ctx, options, _here, outputs, _current_fn))), emitTEMPVAR_hoePgunY(static_cast<fu::str&&>(_0), tv.ptrflip, (*(const fu::str*)fu::NIL), fu::view<char>{}, _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;
    else if (is_trivial_LriKPDIk(type.vtype, ctx, module))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;
    else
        return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;

}

static fu::str via_7UpT0Kae(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isFieldChain_n5oJBeU7(expr, module, ctx, _here, _current_fn))
    {
        fu::str trivial = cgNode_Sjk9MAYk(expr, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    }
    else
    {
        if ((expr.kind == s_kind_copy) || (expr.kind == s_kind_move))
        {
            const s_kind kind = expr.kind;
            const s_SolvedNode& expr_1 = only_fLVI01Cf(expr.items);
            if (isFieldChain_n5oJBeU7(expr_1, module, ctx, _here, _current_fn))
            {
                fu::str trivial = cgNode_Sjk9MAYk(expr_1, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
                return ((trivial + " ? "_fu) + cgMoveOrClone_N5iks2bG(kind, type, trivial, module, ctx, options, _here, outputs, _current_fn)) + " : "_fu;
            };
        };
        return via_k8nDbasT(tv, type, cgNode_Sjk9MAYk(expr, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn), module, ctx, options, _here, outputs, _current_fn);
    };
}

static fu::str cgOr_qbDSIE0k(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Type& type = node.type;
    fu::view<s_SolvedNode> items = node.items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = "if (!("_fu;
        cgAndOr_concat_8PHtz1KQ(src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true, false, module, ctx, options, _here, outputs, _current_fn);
        src += "))"_fu;
        src += blockWrapSubstatement_TinGpX3W(items[(items.size() - 1)], 0, module, ctx, options, _here, outputs, _current_fn);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = (!(mode & M_PARENS) ? "("_fu : fu::str{});
        if (acceptsBool_6GIELG53(type))
            cgAndOr_concat_8PHtz1KQ(src, " || "_fu, items, true, true, module, ctx, options, _here, outputs, _current_fn);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < (items.size() - 1); i++)
            {
                const s_SolvedNode* _0;
                const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here));
                s_SolvedNode tail { item };
                if (item.kind == s_kind_and)
                {
                    fu::view<s_SolvedNode> items_1 = item.items;
                    const s_SolvedNode* _1;
                    tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here));
                    cgAndOr_concat_8PHtz1KQ(src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), false, false, module, ctx, options, _here, outputs, _current_fn);
                    src += " && "_fu;
                };
                src += via_7UpT0Kae(tv, type, tail, module, ctx, options, _here, outputs, _current_fn);
            };
            const s_SolvedNode* _2;
            const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here));
            src += cgNode_Sjk9MAYk(tail, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_ilwwFvkU(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = "if ("_fu;
        cgAndOr_concat_8PHtz1KQ(src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true, false, module, ctx, options, _here, outputs, _current_fn);
        src += ")"_fu;
        src += blockWrapSubstatement_TinGpX3W(items[(items.size() - 1)], 0, module, ctx, options, _here, outputs, _current_fn);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = (!(mode & M_PARENS) ? "("_fu : fu::str{});
        if (acceptsBool_6GIELG53(type))
            cgAndOr_concat_8PHtz1KQ(src, " && "_fu, items, true, true, module, ctx, options, _here, outputs, _current_fn);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via_7UpT0Kae(tv, type, item, module, ctx, options, _here, outputs, _current_fn));
                else
                    src += cgNode_Sjk9MAYk(item, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);

            };
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_Cpf4Oo2k(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgAnd_ilwwFvkU(node.items, node.type, mode, module, ctx, options, _here, outputs, _current_fn);
}

static fu::str cgLetDef_EFRKgJes(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!_current_fn.target.index)
    {
        if (isExtLinked_61HXazVT(GET_JFXuxNiz(node.target, module, ctx, _here, _current_fn)))
            return cgGlobal_fQaKi9Ft(node.target, module, ctx, options, _here, outputs, _current_fn);
        else
        {
            return fu::str{};
        };
    }
    else
        return cgLet_14cUc75e(GET_JFXuxNiz(node.target, module, ctx, _here, _current_fn).solved, false, false, module, ctx, options, _here, outputs, _current_fn);

}

static fu::str cgMain_ZMPWgo7Q(s_Outputs& outputs)
{
    if (!outputs._hasMain)
    {
        return fu::str{};
    }
    else
    {
        fu::str zst {};
        if (outputs._hasMain & MAIN_zst)
            zst = ", 0"_fu;

        /*MOV*/ fu::str src = (("\nint main() { return fu_MAIN()"_fu + zst) + "; }"_fu);
        if (outputs._hasMain & MAIN_argv)
        {
            annotateString_nInsyU1o(outputs);
            src = ((((((((((("\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu::vec<fu::str> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu::to_str(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu::vec<fu::str>&&>(args))"_fu) + zst) + ";"_fu) + "\n}"_fu);
        };
        src += "\n"_fu;
        return /*NRVO*/ src;
    };
}

static fu::str collectDedupes_4tqCzcZq(fu::vec<fu::str>&& values, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> header, fu::view<char> footer)
{
    /*MOV*/ fu::str out {};
    if (values)
        out += header;

    for (int i = 0; i < values.size(); i++)
        out += ((prefix + values[i]) + suffix);

    if (out)
        out += footer;

    return /*NRVO*/ out;
}

static fu::str cgRoot_39zzTIBB(const s_SolvedNode& root, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    int count {};
    fu::str src = cgStatements_OQVK8CCs(root.items, count, fu::view<char>{}, module, ctx, options, _here, outputs, _current_fn);
    fu::str main = cgMain_ZMPWgo7Q(outputs);
    return (((((((((((((((collectDedupes_4tqCzcZq(fu::vec<fu::str>(outputs._libs), "#include "_fu, "\n"_fu, fu::view<char>{}, "\n"_fu) + outputs._tfwd_src) + outputs._ffwd_src) + (outputs._ffwd_live_client ? "\n                                #ifdef fu_HOTSWAP\n"_fu : fu::str{})) + outputs._ffwd_live_client) + (outputs._ffwd_live_client ? "                                #else\n"_fu : fu::str{})) + outputs._ffwd_live_nclient) + (outputs._ffwd_live_client ? "                                #endif\n"_fu : fu::str{})) + outputs._tdef) + collectDedupes_4tqCzcZq(fu::vec<fu::str>(outputs._gcc_ignore), "#pragma GCC diagnostic ignored \""_fu, "\"\n"_fu, "#pragma GCC diagnostic push\n#ifdef __clang__\n#pragma GCC diagnostic warning \"-Wunknown-warning-option\"\n#endif\n"_fu, "\n"_fu)) + outputs._top_emits) + (outputs._fdef ? "\n#ifndef fu_NO_fdefs\n"_fu : fu::str{})) + outputs._fdef) + (outputs._fdef ? "\n#endif\n"_fu : fu::str{})) + src) + main) + (outputs._gcc_ignore ? "\n#pragma GCC diagnostic pop\n"_fu : fu::str{});
}

inline static void l_37_8_ox5K7xgg(const s_Target& target, s_Target& last, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (last)
        BUG_MI7t3VRj(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_JFXuxNiz(last, module, ctx, _here, _current_fn).name) + " vs "_fu) + GET_JFXuxNiz(target, module, ctx, _here, _current_fn).name), ctx, _here);
    else
    {
        last = target;
        if (GET_JFXuxNiz(target, module, ctx, _here, _current_fn).kind == s_kind_fn)
        {
            fu::view<s_Argument> args = EXT_vpuSInYo(target, module, ctx).args;
            for (int i = 0; i < args.size(); i++)
            {
                if (args[i].flags & s_Flags_F_IMPLICIT)
                    BUG_MI7t3VRj("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, ctx, _here);

            };
            ensureFnUsable_DPWQNyFz(target, module, ctx, options, _here, outputs, _current_fn);
        }
        else
            BUG_MI7t3VRj(((x7E_r7bhmB7D("Cannot codegen a non-fn: "_fu, str_k2hK9UHj(GET_JFXuxNiz(target, module, ctx, _here, _current_fn).kind)) + " "_fu) + GET_JFXuxNiz(target, module, ctx, _here, _current_fn).name), ctx, _here);

    };
}

                                #ifndef DEF_unpackAddrOfFn_XCSxEJ4zDHi
                                #define DEF_unpackAddrOfFn_XCSxEJ4zDHi
inline void unpackAddrOfFn_XCSxEJ4z(fu::view<char> canon, s_Target& last, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Mi mi = parseMi_Uqhjg5wd(offset, canon);
            l_37_8_ox5K7xgg(s_Target { mi.modid, mi.index }, last, module, ctx, options, _here, outputs, _current_fn);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static fu::str cgEmpty_n9OYhe7o(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (mode & M_STMT)
    {
        return fu::str{};
    }
    else if ((mode & M_ARG_TO_NATIVE) && isAddrOfFn_KM2rbsyR(node.type))
    {
        s_Target last {};
        unpackAddrOfFn_XCSxEJ4z(node.type.vtype.canon, last, module, ctx, options, _here, outputs, _current_fn);
        return "&"_fu + fnID_CdrwBOXT(last, module, ctx, _here, _current_fn);
    }
    else if (!node.type)
        return "0"_fu;
    else
        return cgDefault_cYfQenIY(node.type, module, ctx, options, _here, outputs, _current_fn);

}

static fu::str cgFnDef_CdyjIHVS(const s_SolvedNode& fndef, const int mode, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fndef.target;
    const s_Overload& o = GET_JFXuxNiz(target, module, ctx, _here, _current_fn);
    const s_SolvedNode& n = GET_JFXuxNiz(target, module, ctx, _here, _current_fn).solved;
    if (n && isExtLinked_61HXazVT(o))
        ensureFnDef_6bCQPUji(target, false, module, ctx, options, _here, outputs, _current_fn);

    return cgEmpty_n9OYhe7o(n, mode, module, ctx, options, _here, outputs, _current_fn);
}

                                #ifndef DEF_x3Cx3E_jXeYr11gFdk
                                #define DEF_x3Cx3E_jXeYr11gFdk
inline int x3Cx3E_jXeYr11g(const s_Helpers& a, const s_Helpers& b)
{

    {
        const int cmp = x3Cx3E_AsFD7H8N(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_jXeYr11gFdk
                                #define DEF_x3Dx3D_jXeYr11gFdk
inline bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return !x3Cx3E_jXeYr11g(a, b);
}
                                #endif

static const s_cg_Block& findBlock_QyzBdyjk(const s_Helpers& helpers, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const s_cg_Block& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
            return block;

    };
    BUG_MI7t3VRj(x7E_r7bhmB7D("No such block in scope: "_fu, fu::i64dec(helpers.index)), ctx, _here);
}

static fu::str cgGoto_nbzoa43g(const s_cg_Block& block, const s_Context& ctx, const s_Options& options, const s_TokenIdx& _here, s_Outputs& outputs)
{
    noteDefect_QRoAj4Vh(s_CGDefects_Goto, ctx, options, _here, outputs);
    return "goto "_fu + block.name;
}

static fu::str cgJump_8AX2DFnP(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Helpers& helpers = node.helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    s_cg_Block block { (!use_return ? findBlock_QyzBdyjk(helpers, ctx, _here, _current_fn) : (*(const s_cg_Block*)fu::NIL)) };
    const s_SolvedNode& expr = only_fLVI01Cf(node.items);
    if ((expr.kind != s_kind_empty) || !isIrrelevant_DOKZ61Hc(expr.type))
    {
        if (!use_return)
        {
            fu::str assign = (block.has_val ? (block.name + "_v = "_fu) : fu::str{});
            fu::str value = cgNode_Sjk9MAYk(expr, (!assign ? M_STMT : 0), (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
            if (block.ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            return (((("{ "_fu + assign) + value) + "; "_fu) + cgGoto_nbzoa43g(block, ctx, options, _here, outputs)) + "; }"_fu;
        }
        else
            return "return "_fu + cgNode_Sjk9MAYk(expr, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);

    }
    else if (use_return)
        return "return"_fu;
    else if (helpers == _current_fn.can_break)
        return "break"_fu;
    else if (helpers == _current_fn.can_cont)
        return "continue"_fu;
    else
        return cgGoto_nbzoa43g(block, ctx, options, _here, outputs);

}

                                #ifndef DEF_LOOP_PRE
                                #define DEF_LOOP_PRE
inline constexpr int LOOP_PRE = 2;
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_PRE_COND
                                #define DEF_LOOP_PRE_COND
inline constexpr int LOOP_PRE_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 5;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static fu::str cgLoop_u7Vzizwb(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& n_pre = node.items[LOOP_PRE];
    if (n_pre)
    {
        s_SolvedNode pre { n_pre };
        if (pre.kind != s_kind_block)
        {
            pre.kind = s_kind_block;
            pre.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(n_pre) } };
        };
        /*MOV*/ s_SolvedNode loop { node };
        loop.items.mutref(LOOP_INIT) = s_SolvedNode{};
        loop.items.mutref(LOOP_PRE) = s_SolvedNode{};
        /*MOV*/ s_SolvedNode n_pre_cond { loop.items[LOOP_PRE_COND] };
        if (n_pre_cond)
        {
            if (loop.items[LOOP_POST_COND])
                BUG_MI7t3VRj("TODO: cgLoop with pre, pre_cond & post_cond."_fu, ctx, _here);
            else
            {
                loop.items.mutref(LOOP_POST_COND) = s_SolvedNode(n_pre_cond);
                loop.items.mutref(LOOP_PRE_COND) = s_SolvedNode{};
            };
        };
        pre.items += static_cast<s_SolvedNode&&>(loop);
        if (n_pre_cond)
        {
            /*MOV*/ s_SolvedNode guard { n_pre };
            guard.kind = s_kind_and;
            guard.items = fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { static_cast<s_SolvedNode&&>(n_pre_cond), s_SolvedNode(pre) } };
            pre = n_pre;
            pre.kind = s_kind_block;
            pre.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(guard) } };
        };
        const s_SolvedNode& n_init = node.items[LOOP_INIT];
        if (n_init)
        {
            pre.items.unshift(s_SolvedNode(n_init));
        };
        return cgNode_Sjk9MAYk(pre, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
    }
    else
    {
        const s_Helpers can_cont0 { _current_fn.can_cont };
        const s_Helpers can_break0 { _current_fn.can_break };
        fu_DEFER(
        {
            _current_fn.can_cont = can_cont0;
            _current_fn.can_break = can_break0;
        });
        _current_fn.can_cont = s_Helpers{};
        _current_fn.can_break = s_Helpers{};
        fu::view<s_SolvedNode> items = node.items;
        const s_SolvedNode& n_init = items[LOOP_INIT];
        const s_SolvedNode& n_pre_cond = items[LOOP_PRE_COND];
        const s_SolvedNode& n_body = items[LOOP_BODY];
        const s_SolvedNode& n_post = items[LOOP_POST];
        const s_SolvedNode& n_post_cond = items[LOOP_POST_COND];
        fu::str init = (n_init ? cgNode_Sjk9MAYk(n_init, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn) : fu::str{});
        fu::str pre_cond = (n_pre_cond ? cgNode_Sjk9MAYk(n_pre_cond, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn) : fu::str{});
        fu::str post = (n_post ? cgNode_Sjk9MAYk(n_post, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn) : fu::str{});
        /*MOV*/ fu::str post_cond = (n_post_cond ? cgNode_Sjk9MAYk(n_post_cond, M_RETBOOL, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn) : fu::str{});
        fu::str name = x7E_r7bhmB7D("LL_"_fu, fu::i64dec(_current_fn.num_labels++));
        const s_Helpers& helpers = node.helpers;
        _current_fn.can_break = helpers;
        const int blocks0 = _current_fn.blocks.size();
        fu_DEFER(_current_fn.blocks.shrink(blocks0));
        _current_fn.blocks += s_cg_Block { fu::str(name), s_Helpers(helpers), false, false };
        fu::str body = (n_body ? blockWrapSubstatement_TinGpX3W(n_body, M_LOOP_BODY, module, ctx, options, _here, outputs, _current_fn) : fu::str{});
        const bool labelUsed = fu::has(body, (("goto "_fu + name) + ";"_fu));
        fu::str breakLabel = (labelUsed ? ((" "_fu + name) + ":;"_fu) : fu::str{});
        if (post_cond)
        {
            if (init || pre_cond)
                BUG_MI7t3VRj("TODO: cgLoop with post_cond & init/pre_cond."_fu, ctx, _here);
            else
            {
                fu::str post_cond_1 = (post ? ((post + ", "_fu) + post_cond) : static_cast<fu::str&&>(post_cond));
                return ((((("do"_fu + body) + outputs._indent) + "while ("_fu) + post_cond_1) + ")"_fu) + breakLabel;
            };
        }
        else if (init || post || !pre_cond)
            return ((((((("for ("_fu + init) + "; "_fu) + pre_cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;
        else
            return ((("while ("_fu + pre_cond) + ")"_fu) + body) + breakLabel;

    };
}

static fu::str cgTryCatch_zO07kLY0(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<s_SolvedNode> items = node.items;
    fu::str tRy = blockWrapSubstatement_TinGpX3W(items[0], 0, module, ctx, options, _here, outputs, _current_fn);
    fu::str err = localID_ol9gMTjM(items[1].target, true, module, ctx, _here, _current_fn);
    fu::str cAtch = blockWrapSubstatement_TinGpX3W(items[2], 0, module, ctx, options, _here, outputs, _current_fn);
    return ((((((((((((((((outputs._indent + "try"_fu) + outputs._indent) + "{"_fu) + tRy) + outputs._indent) + "}"_fu) + outputs._indent) + "catch (const std::exception& o_0)"_fu) + outputs._indent) + "{"_fu) + outputs._indent) + "    fu::str "_fu) + err) + " = fu::to_str(o_0.what());\n"_fu) + cAtch) + outputs._indent) + "}\n"_fu;
}

static fu::str cgDefer_3vyK2oyr(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    include_9b9HRlw3("<fu/defer.h>"_fu, outputs);
    fu::str which = ((node.value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((node.value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_Sjk9MAYk(only_fLVI01Cf(node.items), M_STMT, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn)) + ")"_fu;
}

static fu::str inferIndentation_QzisUH01(const fu::str& v)
{
    if (if_first_HTJeFkMm(v) == '\n')
    {
        for (int i = 1; i < v.size(); i++)
        {
            const char c = v[i];
            if ((c != ' ') && (c != '\t'))
                return fu::slice(v, 0, i);

        };
    };
    return fu::str{};
}

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

inline static bool l_37_10_nBR5rMbp(const fu::str& i, s_Outputs& outputs)
{
    return add_DOlKANOT(outputs.HACK_link, i);
}

inline static bool l_37_11_Oa5PLnBt(const fu::str& i, s_Outputs& outputs)
{
    return add_DOlKANOT(outputs.HACK_include_dirs, i);
}

inline static bool l_37_12_a37BYyLT(const fu::str& i, s_Outputs& outputs)
{
    return add_DOlKANOT(outputs.HACK_extra_sources, i);
}

inline static void l_37_13_OVh68vTL(const fu::str& i, s_Outputs& outputs)
{
    include_9b9HRlw3((starts_90iSu77l(i, '<') ? fu::str(i) : (('"' + i) + '"')), outputs);
}

static fu::str cgCompilerPragma_7hS8KC7w(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> cmd = node.value;
    if ((cmd == "emit"_fu) || (cmd == "input"_fu) || (cmd == "output"_fu) || (cmd == "clock"_fu))
    {
        /*MOV*/ fu::str result {};
        fu::str indent {};
        if (node.items)
        {
            const s_SolvedNode& node_1 = node.items[0];
            if (node_1.kind == s_kind_str)
                indent = inferIndentation_QzisUH01(node_1.value);

        };
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& node_1 = node.items[i];
            if (node_1.kind == s_kind_str)
                result += replace_KFDHCttm(fu::slice(node_1.value, ((i == 0) ? indent.size() : 0)), indent, outputs._indent);
            else if (!isIrrelevant_DOKZ61Hc(node_1.type))
                result += cgNode_Sjk9MAYk(node_1, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);

        };
        for (int i_1 = result.size(); i_1-- > 0; )
        {
            const char c = result[i_1];
            if (c > ' ')
            {
                result.shrink((i_1 + 1));
                break;
            };
        };
        if (_current_fn)
            return /*NRVO*/ result;
        else
        {
            outputs._top_emits += result;
            outputs._top_emits += '\n';
            return fu::str{};
        };
    }
    else if (cmd == "link"_fu)
    {
        const s_TokenIdx& _here_1 = _here;
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_MI7t3VRj((x7E_r7bhmB7D("compiler link: All arguments must be string literals, got a `"_fu, str_k2hK9UHj(item.kind)) + "`."_fu), ctx, _here_1);
            else
                l_37_10_nBR5rMbp(item.value, outputs);

        };
        return fu::str{};
    }
    else if (cmd == "include_dirs"_fu)
    {
        const s_TokenIdx& _here_1 = _here;
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_MI7t3VRj((x7E_r7bhmB7D("compiler link: All arguments must be string literals, got a `"_fu, str_k2hK9UHj(item.kind)) + "`."_fu), ctx, _here_1);
            else
                l_37_11_Oa5PLnBt(item.value, outputs);

        };
        return fu::str{};
    }
    else if (cmd == "sources"_fu)
    {
        const s_TokenIdx& _here_1 = _here;
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_MI7t3VRj((x7E_r7bhmB7D("compiler link: All arguments must be string literals, got a `"_fu, str_k2hK9UHj(item.kind)) + "`."_fu), ctx, _here_1);
            else
                l_37_12_a37BYyLT(item.value, outputs);

        };
        return fu::str{};
    }
    else if (cmd == "include"_fu)
    {
        const s_TokenIdx& _here_1 = _here;
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_MI7t3VRj((x7E_r7bhmB7D("compiler link: All arguments must be string literals, got a `"_fu, str_k2hK9UHj(item.kind)) + "`."_fu), ctx, _here_1);
            else
                l_37_13_OVh68vTL(item.value, outputs);

        };
        return fu::str{};
    }
    else
        BUG_MI7t3VRj(("Unknown compiler pragma: "_fu + cmd), ctx, _here);

}

static fu::str cgNode_Sjk9MAYk(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, const s_Options& options, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_kind k = (node.kind ? node.kind : BUG_MI7t3VRj("cgNode: No node.kind."_fu, ctx, _here));
    HERE_WgKYH8CN(node.token, _here);
    if (k == s_kind_not)
        return cgNot_xbUlfx5J(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_call)
        return cgCall_0efTY8Z7(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_int)
        return cgLiteral_0luVqINg(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_real)
        return cgLiteral_0luVqINg(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_char)
        return cgCharLiteral_FmYJkMgW(node, ctx, options, _here, outputs);
    else if (k == s_kind_str)
        return cgStringLiteral_t2j74T0s(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_arrlit)
        return cgArrayLiteral_gzhCXiJA(node, mode, callarg, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_definit)
        return cgDefinit_pUeC6daw(node, mode, callarg, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_bool)
        return fu::str(node.value);
    else if (k == s_kind_copy)
        return cgMoveOrClone_1ZSw2x6s(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_move)
        return cgMoveOrClone_1ZSw2x6s(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_if)
        return cgIf_KXEBEOeP(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_or)
        return cgOr_qbDSIE0k(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_and)
        return cgAnd_Cpf4Oo2k(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_letdef)
        return cgLetDef_EFRKgJes(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_root)
        return cgRoot_39zzTIBB(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_block)
        return cgBlock_FcfGS45z(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_argid)
        return cgComma_qPm3Cg9B(node.items, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_fndef)
        return cgFnDef_CdyjIHVS(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_empty)
        return cgEmpty_n9OYhe7o(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (!(mode & M_STMT))
        return cgBlock_FcfGS45z(node, mode, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_jump)
        return cgJump_8AX2DFnP(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_loop)
        return cgLoop_u7Vzizwb(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_try)
        return cgTryCatch_zO07kLY0(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_defer)
        return cgDefer_3vyK2oyr(node, module, ctx, options, _here, outputs, _current_fn);
    else if (k == s_kind_pragma)
        return cgCompilerPragma_7hS8KC7w(node, module, ctx, options, _here, outputs, _current_fn);
    else
        BUG_MI7t3VRj(x7E_r7bhmB7D("TODO: "_fu, str_k2hK9UHj(k)), ctx, _here);

}

static fu::str localPath_wOtbm6qF(const fu::str& path, const s_Module& module)
{
    if (starts_90iSu77l(path, '.'))
        return join_By06Vz3F(dirname_BWbYsL34(module.fname), path);
    else
        return fu::str(path);

}

s_CodegenOutput cpp_codegen_jRxn7XMh(const s_Module& module, const s_Context& ctx, const s_Options& options)
{
    s_TokenIdx _here {};
    s_Outputs outputs {};
    outputs._indent = "\n"_fu;
    s_cg_CurrentFn _current_fn {};
    const s_SolvedNode& root = module.out.solve.root;
    if (root.kind == s_kind_root)
    {
        /*MOV*/ fu::str src = cgNode_Sjk9MAYk(root, 0, (*(const s_Type*)fu::NIL), module, ctx, options, _here, outputs, _current_fn);
        for (int i = 0; i < outputs.HACK_extra_sources.size(); i++)
        {
            const fu::str& orig = outputs.HACK_extra_sources[i];
            /*MOV*/ fu::str file = localPath_wOtbm6qF(orig, module);
            src += (("\n// "_fu + orig) + "\n"_fu);
            src += read_IIXDOWa5(static_cast<fu::str&&>(file));
        };
        return s_CodegenOutput { static_cast<fu::str&&>(src), fu::vec<fu::str>(outputs.HACK_link), fu::vec<fu::str>(outputs.HACK_include_dirs), fu::vec<fu::str>(outputs.HACK_extra_sources), fu::vec<int>{}, outputs._defects };
    }
    else
        BUG_MI7t3VRj((*(const fu::str*)fu::NIL), ctx, _here);

}

#endif
