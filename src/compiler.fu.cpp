#include <cstdint>
#include <errno.h>
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
#include <fu/process.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>
#include <fu/vec/LEGACY_slice.h>

struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
enum s_Kind: fu::u8;
struct s_LineColChars;
struct s_ParserOutput;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_Import;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_Set_95BJOojOc45;
struct s_Shape;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Type;
struct s_ValueType;
typedef fu::u8 s_VFacts;
struct s_Lifetime;
struct s_Scope;
struct s_Overload;
typedef uint16_t s_SolverStatus;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_COWInside;
typedef unsigned s_MayEscapeVia;
typedef fu::u8 s_ExitPaths;
struct s_Template;
struct s_TEA;
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_CodegenOutput;
struct s_Set_6ARmtH0K78f;
struct s_BuildHacks;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
struct s_Sample_Time;
struct s_NukeOnRebuild;
struct s_Map_cUwKMz9CPyg;
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
struct s_ModidAndOrder;
struct s_Result;
struct s_BuildOutput;
struct s_TestOutput;
typedef int s_ExitStatus;
enum s_RunMode: fu::u8;
typedef uint16_t s_BuildScheme;
typedef fu::u8 s_DEV_OnFail;
typedef int s_Errno;
s_Module& getModule_1qjplDUo(const fu::str&, s_Context&);
fu::str FAIL_text_u9Gbkniv(const fu::vec<s_TokenIdx>&, fu::view<char>, const s_Context&);
fu::str getFile_1qjplDUo(const fu::str&, s_Context&);
fu::str qBAD_e44UlzzA(const fu::str&);
[[noreturn]] fu::never FAIL_u9Gbkniv(fu::view<char>, const fu::vec<s_TokenIdx>&, const s_Context&);
s_ModuleStat ModuleStat_now_aKPwC57a();
s_LexerOutput lex_pnA57tYu(const fu::str&, const fu::str&);
s_ParserOutput parse_qFInc1ha(int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&);
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
void setModule_1qjplDUo(const s_Module&, s_Context&);
fu::str dirname_qZI0kCzt(const fu::str&);
fu::str join_qZI0kCzt(fu::view<char>, const fu::str&);
fu::str resolveFile_SqDqFcFw(const fu::str&, s_Context&);
s_ModidAndOrder compile_lexParseDeps(const fu::str&, fu::view<s_TokenIdx>, s_Context&, const s_Options&);
s_SolverOutput solve_gDsnGKHT(const s_Context&, s_Module&, const s_Options&);
fu::str inspect_wkVORywj(const s_Module&);
s_CodegenOutput cpp_codegen_i4S3ctpP(const s_Module&, const s_Context&, const s_Options&);
s_BuildOutput build_uGHE7p6t(fu::str&&, fu::str&&, const fu::str&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, s_DEV_OnFail, s_RunMode, int, s_BuildScheme, fu::view<fu::str>, fu::view<fu::str>, const s_Context&);
bool add_ZwXYCruz(s_BitSet&, int);
bool has_ZwXYCruz(const s_BitSet&, int);
static s_BuildOutput recompile_Tsi8gRTk(bool, bool, const fu::str&, const fu::str&, const fu::str&, const fu::str&, const fu::str&, const fu::str&, s_RunMode, s_BuildScheme, fu::view<fu::str>, fu::view<fu::str>, s_BuildScheme, const fu::str&, const fu::str&, fu::vec<fu::str>&, bool&, double&, s_Context&, const s_Options&);
double hr_0pZhUWR4();
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void ModuleStat_print_aKPwC57a(const s_ModuleStat&, const fu::str&, fu::view<char>);
s_Errno unlink_VWJwj7Fs(fu::str&&);

                                #ifndef DEF_s_Kind
                                #define DEF_s_Kind
enum s_Kind: fu::u8
{
    s_Kind_sof = 1u,
    s_Kind_err = 2u,
    s_Kind_eof = 3u,
    s_Kind_id = 4u,
    s_Kind_op = 5u,
    s_Kind_int = 6u,
    s_Kind_real = 7u,
    s_Kind_char = 8u,
    s_Kind_str = 9u,
    s_Kind_bool = 10u,
    s_Kind_definit = 11u,
    s_Kind_empty = 12u,
    s_Kind_struct = 13u,
    s_Kind_union = 14u,
    s_Kind_primitive = 15u,
    s_Kind_flags = 16u,
    s_Kind_enum = 17u,
    s_Kind_fn = 18u,
    s_Kind_copy = 19u,
    s_Kind_move = 20u,
    s_Kind_arrlit = 21u,
    s_Kind_not = 22u,
    s_Kind_call = 23u,
    s_Kind_call_indir = 24u,
    s_Kind_argid = 25u,
    s_Kind_root = 26u,
    s_Kind_block = 27u,
    s_Kind_if = 28u,
    s_Kind_or = 29u,
    s_Kind_and = 30u,
    s_Kind_loop = 31u,
    s_Kind_jump = 32u,
    s_Kind___far_jump = 33u,
    s_Kind_defer = 34u,
    s_Kind_try = 35u,
    s_Kind_let = 36u,
    s_Kind_letdef = 37u,
    s_Kind_typecast = 38u,
    s_Kind_typeassert = 39u,
    s_Kind_typeparam = 40u,
    s_Kind_unwrap = 41u,
    s_Kind_pragma = 42u,
    s_Kind_break = 43u,
    s_Kind_return = 44u,
    s_Kind_continue = 45u,
    s_Kind_import = 46u,
    s_Kind_addroffn = 47u,
    s_Kind_forfieldsof = 48u,
    s_Kind_members = 49u,
    s_Kind_fnbranch = 50u,
    s_Kind_pattern = 51u,
    s_Kind_typeunion = 52u,
    s_Kind_typetag = 53u,
    s_Kind___relaxed = 54u,
    s_Kind___convert = 55u,
    s_Kind___preceding_ref_arg = 56u,
    s_Kind___serialized_type = 57u,
    s_Kind___serialized_addrof_type_fn = 58u,
    s_Kind___litfix_bound = 59u,
    s_Kind___no_kind_yet = 60u,
    s_Kind___tombstone = 61u,
    s_Kind_type = 62u,
    s_Kind_var = 63u,
    s_Kind_field = 64u,
    s_Kind_enumv = 65u,
    s_Kind_template = 66u,
    s_Kind___native = 67u,
    s_Kind_inline = 68u,
};
                                #endif

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = s_DeclAsserts(1u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = s_DeclAsserts(2u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_TRIVIAL = s_DeclAsserts(4u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NODISCARD = s_DeclAsserts(8u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = s_DeclAsserts(16u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = s_DeclAsserts(32u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_FX = s_DeclAsserts(64u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = s_DeclAsserts(128u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOTHROW = s_DeclAsserts(256u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCRASH = s_DeclAsserts(512u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOIO = s_DeclAsserts(1024u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_FAST = s_DeclAsserts(2048u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOINLINE = s_DeclAsserts(4096u);

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_TRIVIAL
    | s_DeclAsserts_A_NODISCARD
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
inline constexpr s_ParseSyntax s_ParseSyntax_PS_USING_EXPRESSION = s_ParseSyntax(16u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL
    | s_ParseSyntax_PS_ALWAYS_DISCARD
    | s_ParseSyntax_PS_NOT_AN_EXPRESSION
    | s_ParseSyntax_PS_USING_EXPRESSION;
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
inline constexpr s_Flags s_Flags_F_MUT = 1024u;
inline constexpr s_Flags s_Flags_F_CONST = 2048u;
inline constexpr s_Flags s_Flags_F_VAL = 4096u;
inline constexpr s_Flags s_Flags_F_REF = 8192u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 16384u;
inline constexpr s_Flags s_Flags_F_USING = 32768u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 65536u;
inline constexpr s_Flags s_Flags_F_TEST_painted = 131072u;
inline constexpr s_Flags s_Flags_F_PUB = 262144u;
inline constexpr s_Flags s_Flags_F_EXTERN = 524288u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 1048576u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 2097152u;
inline constexpr s_Flags s_Flags_F_LT_RETURNED = 4194304u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 8388608u;
inline constexpr s_Flags s_Flags_F_INJECTED = 16777216u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 33554432u;
inline constexpr s_Flags s_Flags_F_INLINE = 67108864u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 134217728u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 268435456u;

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
    | s_Flags_F_MUT
    | s_Flags_F_CONST
    | s_Flags_F_VAL
    | s_Flags_F_REF
    | s_Flags_F_IMPLICIT
    | s_Flags_F_USING
    | s_Flags_F_CONVERSION
    | s_Flags_F_TEST_painted
    | s_Flags_F_PUB
    | s_Flags_F_EXTERN
    | s_Flags_F_HOTSWAP
    | s_Flags_F_PREDICATE
    | s_Flags_F_LT_RETURNED
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
inline constexpr s_VFacts s_VFacts_LeftAligned = s_VFacts(8u);
inline constexpr s_VFacts s_VFacts_RightAligned = s_VFacts(16u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename
    | s_VFacts_LeftAligned
    | s_VFacts_RightAligned;
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
inline constexpr s_SolverStatus s_SolverStatus_SS_NAME_UNUSED = s_SolverStatus(256u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(512u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MATCHED = s_SolverStatus(1024u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MOVED_FROM = s_SolverStatus(2048u);
inline constexpr s_SolverStatus s_SolverStatus_SS_EXTERNAL_LINKAGE = s_SolverStatus(4096u);
inline constexpr s_SolverStatus s_SolverStatus_SS_OBSERVED_BY_CONV_CACHE = s_SolverStatus(8192u);
inline constexpr s_SolverStatus s_SolverStatus_SS_TODO_FIX_was_rx_resize = s_SolverStatus(16384u);
inline constexpr s_SolverStatus s_SolverStatus_SS_Debug_AllPassesComplete = s_SolverStatus(32768u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_FN_OOE_RTL
    | s_SolverStatus_SS_NAME_UNUSED
    | s_SolverStatus_SS_UNUSED
    | s_SolverStatus_SS_MATCHED
    | s_SolverStatus_SS_MOVED_FROM
    | s_SolverStatus_SS_EXTERNAL_LINKAGE
    | s_SolverStatus_SS_OBSERVED_BY_CONV_CACHE
    | s_SolverStatus_SS_TODO_FIX_was_rx_resize
    | s_SolverStatus_SS_Debug_AllPassesComplete;
                                #endif

                                #ifndef DEF_s_MayEscapeVia
                                #define DEF_s_MayEscapeVia
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
inline constexpr s_SolverNotes s_SolverNotes_N_McomUnwrapsLetdef = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 268435456;
inline constexpr s_SolverNotes s_SolverNotes_N_COWRestrict = 536870912;

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
    | s_SolverNotes_N_McomUnwrapsLetdef
    | s_SolverNotes_N_SD_HasStaticInit
    | s_SolverNotes_N_SD_ExternPrivates
    | s_SolverNotes_N_COWRestrict;
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

                                #ifndef DEF_s_Sample_Time
                                #define DEF_s_Sample_Time
struct s_Sample_Time
{
    double time;
    explicit operator bool() const noexcept
    {
        return false
            || time
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

                                #ifndef DEF_s_Set_95BJOojOc45
                                #define DEF_s_Set_95BJOojOc45
struct s_Set_95BJOojOc45
{
    fu::vec<int> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
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

                                #ifndef DEF_s_Set_6ARmtH0K78f
                                #define DEF_s_Set_6ARmtH0K78f
struct s_Set_6ARmtH0K78f
{
    fu::vec<fu::str> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
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

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    unsigned quals;
    s_VFacts vfacts;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || vfacts
            || canon
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

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu::vec<s_Overload> overloads;
    fu::vec<s_Extended> extended;
    fu::vec<s_ScopeItem> items;
    fu::vec<s_ScopeItem> implicits;
    fu::vec<s_ScopeItem> globals;
    fu::vec<int> imports;
    fu::vec<int> privates;
    fu::vec<s_Target> usings;
    fu::vec<s_Target> converts;
    int pub_items;
    int pub_implicits;
    int pub_globals;
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
            || globals
            || imports
            || privates
            || usings
            || converts
            || pub_items
            || pub_implicits
            || pub_globals
            || pub_converts
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Profile
                                #define DEF_s_Profile
struct s_Profile
{
    s_Sample_Time now;
    explicit operator bool() const noexcept
    {
        return false
            || now
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_Kind kind;
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
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_cUwKMz9CPyg
                                #define DEF_s_Map_cUwKMz9CPyg
struct s_Map_cUwKMz9CPyg
{
    s_Set_6ARmtH0K78f keys;
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

                                #ifndef DEF_s_Import
                                #define DEF_s_Import
struct s_Import
{
    s_TokenIdx token;
    fu::str pattern;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || token
            || pattern
            || modid
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BuildHacks
                                #define DEF_s_BuildHacks
struct s_BuildHacks
{
    s_Set_6ARmtH0K78f link;
    s_Set_6ARmtH0K78f include_dirs;
    s_Set_6ARmtH0K78f extra_sources;
    explicit operator bool() const noexcept
    {
        return false
            || link
            || include_dirs
            || extra_sources
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
    s_Kind kind;
    fu::str name;
    s_Target target;
    fu::vec<s_ScopeItem> items;
    fu::vec<s_ScopeItem> implicits;
    s_Set_95BJOojOc45 imports;
    fu::vec<s_Target> converts;
    s_Shape shape;
    explicit operator bool() const noexcept
    {
        return false
            || kind
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
    s_MayEscapeVia mayEscapeVia;
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
    s_Kind kind;
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

                                #ifndef DEF_s_NukeOnRebuild
                                #define DEF_s_NukeOnRebuild
struct s_NukeOnRebuild
{
    s_Map_cUwKMz9CPyg files;
    s_Map_cUwKMz9CPyg fuzzy;
    explicit operator bool() const noexcept
    {
        return false
            || files
            || fuzzy
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

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu::str src;
    s_Set_6ARmtH0K78f includes_headers;
    s_BuildHacks hacks;
    s_Set_95BJOojOc45 testsuite_modids;
    s_CGDefects defects;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || includes_headers
            || hacks
            || testsuite_modids
            || defects
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_Kind kind;
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
    s_Kind kind;
    s_Flags flags;
    s_SolverStatus status;
    s_DeclAsserts asserts;
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
    fu::vec<s_Overload> args_n_locals;
    s_TEA sighash;
    s_FxMask fx_mask;
    int args_neg;
    explicit operator bool() const noexcept
    {
        return false
            || tEmplate
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu::str name;
    fu::str autocall;
    s_Type type;
    s_SolvedNode dEfault;
    s_Target target;
    s_Flags flags;
    unsigned written_to;
    s_BitSet may_invalidate;
    s_BitSet may_alias;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || target
            || flags
            || written_to
            || may_invalidate
            || may_alias
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu::str fudir;
    fu::str base_dir;
    fu::vec<s_Module> modules;
    fu::vec<int> dep_order;
    s_NukeOnRebuild nuke;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || fudir
            || base_dir
            || modules
            || dep_order
            || nuke
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
inline constexpr s_DevOptions s_DevOptions_DEV_HappyPathOnly = s_DevOptions(8u);
inline constexpr s_DevOptions s_DevOptions_DEV_DontFoldLiterals = s_DevOptions(16u);
inline constexpr s_DevOptions s_DevOptions_DEV_IgnoreDefects = s_DevOptions(32u);
inline constexpr s_DevOptions s_DevOptions_DEV_CG_LifetimeAnnots = s_DevOptions(64u);

inline constexpr s_DevOptions MASK_s_DevOptions
    = s_DevOptions_DEV_Print
    | s_DevOptions_DEV_Parallel
    | s_DevOptions_DEV_ExpectFail
    | s_DevOptions_DEV_HappyPathOnly
    | s_DevOptions_DEV_DontFoldLiterals
    | s_DevOptions_DEV_IgnoreDefects
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

                                #ifndef DEF_s_ModidAndOrder
                                #define DEF_s_ModidAndOrder
struct s_ModidAndOrder
{
    int modid;
    s_ModuleOrder order;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || order
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Result
                                #define DEF_s_Result
struct s_Result
{
    s_Module module;
    fu::str error;
    s_Result(const s_Result&) = delete;
    s_Result(s_Result&&) = default;
    s_Result& operator=(const s_Result&) = delete;
    s_Result& operator=(s_Result&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || module
            || error
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ExitStatus
                                #define DEF_s_ExitStatus
                                #endif

                                #ifndef DEF_s_TestOutput
                                #define DEF_s_TestOutput
struct s_TestOutput
{
    s_ExitStatus status;
    int uniq_bytes;
    int uniq_count;
    int arc_bytes;
    int arc_count;
    explicit operator bool() const noexcept
    {
        return false
            || status
            || uniq_bytes
            || uniq_count
            || arc_bytes
            || arc_count
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BuildOutput
                                #define DEF_s_BuildOutput
struct s_BuildOutput
{
    fu::str executable;
    fu::vec<fu::str> watch_list;
    s_TestOutput output;
    explicit operator bool() const noexcept
    {
        return false
            || executable
            || watch_list
            || output
        ;
    }
};
                                #endif

                                #ifndef DEF_s_RunMode
                                #define DEF_s_RunMode
enum s_RunMode: fu::u8
{
    s_RunMode_None = 0u,
    s_RunMode_Normally = 1u,
    s_RunMode_Testsuite = 2u,
    s_RunMode_CompilerTestcase = 3u,
    s_RunMode_EnsureExecutableButDontRun = 4u,
};
                                #endif

                                #ifndef DEF_s_BuildScheme
                                #define DEF_s_BuildScheme
inline constexpr s_BuildScheme s_BuildScheme_shared = s_BuildScheme(1u);
inline constexpr s_BuildScheme s_BuildScheme_hotswap = s_BuildScheme(2u);
inline constexpr s_BuildScheme s_BuildScheme_nocache = s_BuildScheme(4u);
inline constexpr s_BuildScheme s_BuildScheme_notest = s_BuildScheme(8u);
inline constexpr s_BuildScheme s_BuildScheme_nocache_tests = s_BuildScheme(16u);
inline constexpr s_BuildScheme s_BuildScheme_watch = s_BuildScheme(32u);
inline constexpr s_BuildScheme s_BuildScheme_debuggable = s_BuildScheme(64u);
inline constexpr s_BuildScheme s_BuildScheme_unoptimized = s_BuildScheme(128u);
inline constexpr s_BuildScheme s_BuildScheme_assertions = s_BuildScheme(256u);
inline constexpr s_BuildScheme s_BuildScheme_TODO_FIX_retail = s_BuildScheme(512u);

inline constexpr s_BuildScheme MASK_s_BuildScheme
    = s_BuildScheme_shared
    | s_BuildScheme_hotswap
    | s_BuildScheme_nocache
    | s_BuildScheme_notest
    | s_BuildScheme_nocache_tests
    | s_BuildScheme_watch
    | s_BuildScheme_debuggable
    | s_BuildScheme_unoptimized
    | s_BuildScheme_assertions
    | s_BuildScheme_TODO_FIX_retail;
                                #endif

                                #ifndef DEF_s_DEV_OnFail
                                #define DEF_s_DEV_OnFail
inline constexpr s_DEV_OnFail s_DEV_OnFail_OnFail_PrintInput = s_DEV_OnFail(1u);
inline constexpr s_DEV_OnFail s_DEV_OnFail_OnFail_PrintOutput = s_DEV_OnFail(2u);
inline constexpr s_DEV_OnFail s_DEV_OnFail_OnFail_WriteRepro = s_DEV_OnFail(4u);

inline constexpr s_DEV_OnFail MASK_s_DEV_OnFail
    = s_DEV_OnFail_OnFail_PrintInput
    | s_DEV_OnFail_OnFail_PrintOutput
    | s_DEV_OnFail_OnFail_WriteRepro;
                                #endif

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF___DxGXYM8b38f
                                #define DEF___DxGXYM8b38f
inline static fu::view<char> _DxGXYM8b(const s_TokenIdx& token, const int i, fu::view<s_TokenIdx> via, fu::str& error, const s_Context& ctx)
{
    return (error += FAIL_text_u9Gbkniv(fu::vec<s_TokenIdx> { fu::slate<1, s_TokenIdx> { s_TokenIdx(token) } }, ((i == (via.size() - 1)) ? "Resulting in an import circle, not currently supported."_fu : "Imports:\n"_fu), ctx));
}
                                #endif

                                #ifndef DEF_each_OodLXbKkfo7
                                #define DEF_each_OodLXbKkfo7
inline void each_OodLXbKk(fu::view<s_TokenIdx> a, fu::view<s_TokenIdx> via, fu::str& error, const s_Context& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _DxGXYM8b(a[i], i, via, error, ctx);

}
                                #endif

                                #ifndef DEF_clone_WYOmMh16nBd
                                #define DEF_clone_WYOmMh16nBd
inline int clone_WYOmMh16(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_MQq1QmEfRcl
                                #define DEF_clone_MQq1QmEfRcl
inline const fu::str& clone_MQq1QmEf(const fu::str& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_zar60R7Er6l
                                #define DEF_clone_zar60R7Er6l
inline const s_ModuleInputs& clone_zar60R7E(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_BW5ZEuMhKol
                                #define DEF_clone_BW5ZEuMhKol
inline const s_ModuleOrder& clone_BW5ZEuMh(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_SER9a4o1mFd
                                #define DEF_clone_SER9a4o1mFd
inline const fu::vec<s_Struct>& clone_SER9a4o1(const fu::vec<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_CW5VJZd6CKc
                                #define DEF_clone_CW5VJZd6CKc
inline const s_SolvedNode& clone_CW5VJZd6(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_u3cG3iHTJyg
                                #define DEF_clone_u3cG3iHTJyg
inline const fu::vec<s_Overload>& clone_u3cG3iHT(const fu::vec<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TjGdMugi3U1
                                #define DEF_clone_TjGdMugi3U1
inline const fu::vec<s_Extended>& clone_TjGdMugi(const fu::vec<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_X0vyWrZMCGf
                                #define DEF_clone_X0vyWrZMCGf
inline const fu::vec<s_ScopeItem>& clone_X0vyWrZM(const fu::vec<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_UiVOHRvKu27
                                #define DEF_clone_UiVOHRvKu27
inline const fu::vec<int>& clone_UiVOHRvK(const fu::vec<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_gjeoYDys8kd
                                #define DEF_clone_gjeoYDys8kd
inline const fu::vec<s_Target>& clone_gjeoYDys(const fu::vec<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_2FTYIoAyz2l
                                #define DEF_clone_2FTYIoAyz2l
inline s_Scope clone_2FTYIoAy(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_u3cG3iHT(a.overloads);
        res.extended = clone_TjGdMugi(a.extended);
        res.items = clone_X0vyWrZM(a.items);
        res.implicits = clone_X0vyWrZM(a.implicits);
        res.globals = clone_X0vyWrZM(a.globals);
        res.imports = clone_UiVOHRvK(a.imports);
        res.privates = clone_UiVOHRvK(a.privates);
        res.usings = clone_gjeoYDys(a.usings);
        res.converts = clone_gjeoYDys(a.converts);
        res.pub_items = clone_WYOmMh16(a.pub_items);
        res.pub_implicits = clone_WYOmMh16(a.pub_implicits);
        res.pub_globals = clone_WYOmMh16(a.pub_globals);
        res.pub_converts = clone_WYOmMh16(a.pub_converts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_C1Qhlqa3BD4
                                #define DEF_clone_C1Qhlqa3BD4
inline s_SolverNotes clone_C1Qhlqa3(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TxoZPH7qSZ2
                                #define DEF_clone_TxoZPH7qSZ2
inline s_SolverOutput clone_TxoZPH7q(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_CW5VJZd6(a.root);
        res.scope = clone_2FTYIoAy(a.scope);
        res.notes = clone_C1Qhlqa3(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_nZUtjGKtjak
                                #define DEF_clone_nZUtjGKtjak
inline const s_CodegenOutput& clone_nZUtjGKt(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_lx6X2qShYG3
                                #define DEF_clone_lx6X2qShYG3
inline s_ModuleOutputs clone_lx6X2qSh(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_SER9a4o1(a.types);
        res.solve = clone_TxoZPH7q(a.solve);
        res.cpp = clone_nZUtjGKt(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_YIb6BDdZkpj
                                #define DEF_clone_YIb6BDdZkpj
inline const s_ModuleStats& clone_YIb6BDdZ(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_HRvYlzuk3vb
                                #define DEF_clone_HRvYlzuk3vb
inline const s_Profile& clone_HRvYlzuk(const s_Profile& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_YKwHcLQlQLh
                                #define DEF_clone_YKwHcLQlQLh
inline s_Module clone_YKwHcLQl(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_WYOmMh16(a.modid);
        res.fname = clone_MQq1QmEf(a.fname);
        res.in = clone_zar60R7E(a.in);
        res.order = clone_BW5ZEuMh(a.order);
        res.out = clone_lx6X2qSh(a.out);
        res.stats = clone_YIb6BDdZ(a.stats);
        res.profile = clone_HRvYlzuk(a.profile);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_if_last_bBvnX5VK5ug
                                #define DEF_if_last_bBvnX5VK5ug
inline const s_TokenIdx& if_last_bBvnX5VK(fu::view<s_TokenIdx> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_TokenIdx*)fu::NIL);

}
                                #endif

                                #ifndef DEF_find_yP7FbxFZnZ0
                                #define DEF_find_yP7FbxFZnZ0
inline int find_yP7FbxFZ(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_steal_zP6PwpIamBk
                                #define DEF_steal_zP6PwpIamBk
inline fu::vec<s_Import> steal_zP6PwpIa(fu::vec<s_Import>& v)
{
    /*MOV*/ fu::vec<s_Import> ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_x3Cx3E_XrkW2YUZsRk
                                #define DEF_x3Cx3E_XrkW2YUZsRk
inline int x3Cx3E_XrkW2YUZ(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_OFzwR3BaA9j
                                #define DEF_x3Cx3E_OFzwR3BaA9j
inline int x3Cx3E_OFzwR3Ba(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_bv5nK4Klcs3
                                #define DEF_x3Cx3E_bv5nK4Klcs3
inline int x3Cx3E_bv5nK4Kl(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_XrkW2YUZ(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_OFzwR3Ba(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_KFMeZhJSBE8
                                #define DEF_x3Dx3D_KFMeZhJSBE8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

                                #ifndef DEF_starts_hRi5tkxndc1
                                #define DEF_starts_hRi5tkxndc1
inline bool starts_hRi5tkxn(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF___raycD7l8483
                                #define DEF___raycD7l8483
inline static void _raycD7l8(s_Import& import, fu::view<s_TokenIdx> via, fu::view<char> dir, s_Context& ctx, s_Module& module, const s_Options& options)
{
    const fu::str& pattern = import.pattern;
    fu::str pattern_1 = (starts_hRi5tkxn(pattern, "."_fu) ? join_qZI0kCzt(dir, pattern) : ((dir + '\v') + pattern));
    fu::str _0 {};
    const s_ModidAndOrder other = (_0 = resolveFile_SqDqFcFw(pattern_1, ctx), compile_lexParseDeps(static_cast<fu::str&&>(_0), (via + import.token), ctx, options));
    import.modid = (other.modid ? other.modid : fu::fail("BUG: !module.modid after lexParseDeps"_fu));
    if ((module.order.dep_depth <= other.order.dep_depth))
        module.order.dep_depth = (other.order.dep_depth + 1);

}
                                #endif

                                #ifndef DEF_each_k2GB6mTIjea
                                #define DEF_each_k2GB6mTIjea
inline void each_k2GB6mTI(fu::view_mut<s_Import> a, fu::view<s_TokenIdx> via, fu::view<char> dir, s_Context& ctx, s_Module& module, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
    {
        s_Import* _0;
        (_0 = &(a.mutref(i)), _raycD7l8(*_0, via, dir, ctx, module, options));
    };
}
                                #endif

s_ModidAndOrder compile_lexParseDeps(const fu::str& fname, fu::view<s_TokenIdx> via, s_Context& ctx, const s_Options& options)
{
    const s_Module& module = getModule_1qjplDUo(fname, ctx);
    if (module.in)
    {
        if (module.order)
        {
            return s_ModidAndOrder { module.modid, s_ModuleOrder(module.order) };
        }
        else
        {
            /*MOV*/ fu::str error = ""_fu;
            each_OodLXbKk(via, via, error, ctx);
            fu::fail(static_cast<fu::str&&>(error));
        };
    }
    else
    {
        s_Module module_1 = clone_YKwHcLQl(module);
        if (module_1.out)
            fu::fail("BUG: !!module.out"_fu);
        else
        {
            /*MOV*/ fu::str src = getFile_1qjplDUo(fname, ctx);
            if (!src)
            {
                const s_TokenIdx& token = if_last_bBvnX5VK(via);
                if (token)
                {
                    fu::str err = "Could not resolve this import."_fu;
                    const int dirEnd = find_yP7FbxFZ(fname, '\v');
                    if (dirEnd > 0)
                    {
                        err += ("\n\n\tSearched relative to:    \t"_fu + qBAD_e44UlzzA(fu::slice(fname, 0, dirEnd)));
                        err += ("\n\tLooking for a file named:\t"_fu + qBAD_e44UlzzA(fu::slice(fname, (dirEnd + 1))));
                    };
                    FAIL_u9Gbkniv(err, fu::vec<s_TokenIdx> { fu::slate<1, s_TokenIdx> { s_TokenIdx(token) } }, ctx);
                }
                else
                    fu::fail((("Could not load "_fu + qBAD_e44UlzzA(fname)) + ": file does not exist or is empty."_fu));

            }
            else
            {
                const s_ModuleStat stat0 = ModuleStat_now_aKPwC57a();
                /*MOV*/ s_LexerOutput lexer_result = lex_pnA57tYu(src, fname);
                const s_ModuleStat stat1 = ModuleStat_now_aKPwC57a();
                /*MOV*/ s_ParserOutput parser_result = parse_qFInc1ha(module_1.modid, fname, src, lexer_result.tokens, options);
                const s_ModuleStat stat2 = ModuleStat_now_aKPwC57a();
                module_1.in = s_ModuleInputs { static_cast<fu::str&&>(src), static_cast<s_LexerOutput&&>(lexer_result), static_cast<s_ParserOutput&&>(parser_result) };
                module_1.stats.lex = (stat1 - stat0);
                module_1.stats.parse = (stat2 - stat1);
                setModule_1qjplDUo(module_1, ctx);
                if (!module_1.order)
                {
                    module_1.order.dep_depth = 1;
                    fu::str dir = dirname_qZI0kCzt(fname);
                    fu::vec<s_Import> imports = steal_zP6PwpIa(module_1.in.parse.imports);
                    each_k2GB6mTI(imports, via, dir, ctx, module_1, options);
                    std::swap(module_1.in.parse.imports, imports);
                    setModule_1qjplDUo(module_1, ctx);
                }
                else
                    fu::fail("BUG: !!module.order"_fu);

                return s_ModidAndOrder { module_1.modid, s_ModuleOrder((module_1.order ? module_1.order : fu::fail("BUG: !module.order after lexParseDeps."_fu))) };
            };
        };
    };
}

                                #ifndef DEF_ensure_nf7b3txsAi5
                                #define DEF_ensure_nf7b3txsAi5
inline fu::vec<int>& ensure_nf7b3txs(fu::vec<fu::vec<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_join_sO8wj3Gh653
                                #define DEF_join_sO8wj3Gh653
inline fu::vec<int> join_sO8wj3Gh(fu::view<fu::vec<int>> a)
{
    if (a.size() < 2)
    {
        if (a.size())
            return fu::vec<int>(a[0]);
        else
        {
            return fu::vec<int>{};
        };
    }
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::vec<int> res {};
        res.grow<false>(size);
        fu::view<int> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_start0_mut(res, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<int> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

void compile_solveCodegen(s_Module& module, const s_Options& options, const s_Context& ctx)
{
    // Hoisted:
    fu::str x {};

    if (module.out)
        fu::fail("compile_solveCodegen: !!module.out"_fu);
    else
    {
        const s_ModuleStat stat0 = ModuleStat_now_aKPwC57a();
        module.out.solve = solve_gDsnGKHT(ctx, module, options);
        if (options.dev & s_DevOptions_DEV_Print)
        {
            fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = inspect_wkVORywj(module), x)) }));
        };
        const s_ModuleStat stat1 = ModuleStat_now_aKPwC57a();
        module.out.cpp = cpp_codegen_i4S3ctpP(module, ctx, options);
        if (options.dev & s_DevOptions_DEV_Print)
        {
            const fu::str* BL_5_v;
            fu::println((fu::slate<1, fu::str> { fu::str((__extension__ (
            {
                const fu::str& x_1 = module.out.cpp.src;
                BL_5_v = &(x_1);
            (void)0;}), *BL_5_v)) }));
        };
        const s_ModuleStat stat2 = ModuleStat_now_aKPwC57a();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
    };
}

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF___haN223VVUsj
                                #define DEF___haN223VVUsj
inline static s_Result _haN223VV(const int modid, const s_Context& ctx, const s_Options& options)
{

    try
    {
    {
        const s_Module& module = ctx.modules[modid];
        if (module.out)
        {
            return s_Result{};
        }
        else
        {
            /*MOV*/ s_Module module_1 = clone_YKwHcLQl(module);
            compile_solveCodegen(module_1, options, ctx);
            return s_Result { static_cast<s_Module&&>(module_1), fu::str{} };
        };
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str error = fu::to_str(o_0.what());

    {
        return s_Result { s_Module{}, (error ? static_cast<fu::str&&>(error) : x7E_3lDd4lqo("COMPILER BUG: Empty error string, modid="_fu, fu::i64dec(modid))) };
    }
    }
;
}
                                #endif

                                #ifndef DEF___zd93U4QmYn8
                                #define DEF___zd93U4QmYn8
inline static const s_Result& _zd93U4Qm(const int i, fu::view<int> arr, fu::view_mut<s_Result> result, const s_Context& ctx, const s_Options& options)
{
    return (result.mutref(i) = _haN223VV(arr[i], ctx, options));
}
                                #endif

                                #ifndef DEF_parallel_for_SflIVLQBpi2
                                #define DEF_parallel_for_SflIVLQBpi2
inline static void parallel_for_SflIVLQB(const int min, int end, fu::view<int> arr, fu::view_mut<s_Result> result, const s_Context& ctx, const s_Options& options)
{
    int start = (end & 0);
    (void) start;

    typedef decltype(start) start_t;
    typedef decltype(end) end_t;

    fu::parallel_for(size_t(end), size_t(min > 1 ? min : 1), [&](size_t Start, size_t End)
    {
        auto start = (start_t) Start;
        auto end   = (end_t  ) End;

    for (int i = start; i < end; i++)
        _zd93U4Qm(i, arr, result, ctx, options);

    });

}
                                #endif

                                #ifndef DEF_map_WpmIh90wCYe
                                #define DEF_map_WpmIh90wCYe
inline fu::vec<s_Result> map_WpmIh90w(fu::view<int> arr, const int min, const s_Context& ctx, const s_Options& options)
{
    /*MOV*/ fu::vec<s_Result> result {};
    result.grow<false>(arr.size());
    parallel_for_SflIVLQB(min, arr.size(), arr, result, ctx, options);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF___J52fdvu55m4
                                #define DEF___J52fdvu55m4
inline static void _J52fdvu5(const s_Result& result, fu::str& err, s_Context& ctx)
{
    if (result.error)
    {
        if (!(err))
            err = result.error;

    }
    else if (result.module.out)
        setModule_1qjplDUo(result.module, ctx);

}
                                #endif

                                #ifndef DEF_each_sVtGiXhlzk7
                                #define DEF_each_sVtGiXhlzk7
inline void each_sVtGiXhl(fu::view<s_Result> a, fu::str& err, s_Context& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _J52fdvu5(a[i], err, ctx);

}
                                #endif

                                #ifndef DEF___NsTKvlQHrTj
                                #define DEF___NsTKvlQHrTj
inline static void _NsTKvlQH(const int modid, s_Context& ctx, const s_Options& options)
{
    const s_Module& module = ctx.modules[modid];
    if (!module.out)
    {
        s_Module module_1 = clone_YKwHcLQl(module);
        compile_solveCodegen(module_1, options, ctx);
        setModule_1qjplDUo(module_1, ctx);
    };
}
                                #endif

                                #ifndef DEF_each_SlWcoRzJu1e
                                #define DEF_each_SlWcoRzJu1e
inline void each_SlWcoRzJ(fu::view<int> a, s_Context& ctx, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
        _NsTKvlQH(a[i], ctx, options);

}
                                #endif

void compile_Tsi8gRTk(const fu::str& fname, s_Context& ctx, const s_Options& options)
{
    compile_lexParseDeps(fname, fu::view<s_TokenIdx>{}, ctx, options);
    fu::vec<fu::vec<int>> dep_order {};
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        ensure_nf7b3txs(dep_order, module.order.dep_depth) += module.modid;
    };
    ctx.dep_order = join_sO8wj3Gh(dep_order);
    for (int i_1 = 0; i_1 < dep_order.size(); i_1++)
    {
        fu::view<int> modids = dep_order[i_1];
        if (options.dev & s_DevOptions_DEV_Parallel)
        {
            fu::vec<s_Result> results = map_WpmIh90w(modids, int{}, ctx, options);
            /*MOV*/ fu::str err {};
            each_sVtGiXhl(results, err, ctx);
            if (err)
                fu::fail(static_cast<fu::str&&>(err));

        }
        else
            each_SlWcoRzJ(modids, ctx, options);

    };
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEF_map_DYs4NFIxv3h
                                #define DEF_map_DYs4NFIxv3h
inline fu::vec<s_Module> map_DYs4NFIx(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_YKwHcLQl(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_RoIQ2OXUgjc
                                #define DEF_clone_RoIQ2OXUgjc
inline fu::vec<s_Module> clone_RoIQ2OXU(fu::view<s_Module> a)
{
    return map_DYs4NFIx(a);
}
                                #endif

                                #ifndef DEF_clone_HrcxkI04ID1
                                #define DEF_clone_HrcxkI04ID1
inline const s_NukeOnRebuild& clone_HrcxkI04(const s_NukeOnRebuild& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_G8s9W95KtF0
                                #define DEF_clone_G8s9W95KtF0
inline s_Context clone_G8s9W95K(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.fudir = clone_MQq1QmEf(a.fudir);
        res.base_dir = clone_MQq1QmEf(a.base_dir);
        res.modules = clone_RoIQ2OXU(a.modules);
        res.dep_order = clone_UiVOHRvK(a.dep_order);
        res.nuke = clone_HrcxkI04(a.nuke);
    };
    return /*NRVO*/ res;
}
                                #endif

static s_BuildOutput build_Tsi8gRTk(fu::view<fu::str> flags_ld, const s_RunMode runmode, const s_BuildScheme bscheme, const fu::str& bin, fu::view<char> fname, const fu::str& dir_wrk, const fu::str& dir_obj, const fu::str& dir_src, const fu::str& dir_cpp, fu::view<fu::str> flags_cc, const s_Context& ctx)
{
    return build_uGHE7p6t(fu::str(dir_wrk), fu::str{}, bin, fu::str(dir_obj), fu::str(dir_src), fu::str(dir_cpp), fname, s_DEV_OnFail{}, runmode, 0, bscheme, flags_cc, flags_ld, ctx);
}

void clear(s_Module& module)
{
    module = s_Module { module.modid, fu::str(module.fname), s_ModuleInputs{}, s_ModuleOrder{}, s_ModuleOutputs{}, s_ModuleStats{}, s_Profile{} };
}

                                #ifndef DEF___ZUmdMmzR0S0
                                #define DEF___ZUmdMmzR0S0
inline static void _ZUmdMmzR(s_Module& module, s_BitSet& invalid)
{
    if (!module.out)
    {
        clear(module);
        add_ZwXYCruz(invalid, module.modid);
    };
}
                                #endif

                                #ifndef DEF_eachButPrelude_TpK4uUXZ00a
                                #define DEF_eachButPrelude_TpK4uUXZ00a
inline static void eachButPrelude_TpK4uUXZ(s_Context& ctx, s_BitSet& invalid)
{
    for (int i = 1; i < ctx.modules.size(); i++)
        _ZUmdMmzR(ctx.modules.mutref(i), invalid);

}
                                #endif

                                #ifndef DEF_each_rV93EiIc620
                                #define DEF_each_rV93EiIc620
inline void each_rV93EiIc(fu::view<s_Import> a, s_Module& module, s_BitSet& invalid, bool& repeat)
{
    // Hoisted:
    fu::str x {};

    for (int i = 0; i < a.size(); i++)
    {
        const s_Import& import = a[i];
        if (has_ZwXYCruz(invalid, import.modid))
        {
            fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("  WATCH Invalidated: "_fu + module.fname), x)) }));
            clear(module);
            add_ZwXYCruz(invalid, module.modid);
            repeat = true;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF___3xQvSphsmkl
                                #define DEF___3xQvSphsmkl
inline static void _3xQvSphs(s_Module& module, s_BitSet& invalid, bool& repeat)
{
    each_rV93EiIc(module.in.parse.imports, module, invalid, repeat);
}
                                #endif

                                #ifndef DEF_eachButPrelude_vXYfwkND4ol
                                #define DEF_eachButPrelude_vXYfwkND4ol
inline static void eachButPrelude_vXYfwkND(s_Context& ctx, s_BitSet& invalid, bool& repeat)
{
    for (int i = 1; i < ctx.modules.size(); i++)
        _3xQvSphs(ctx.modules.mutref(i), invalid, repeat);

}
                                #endif

void watch_pruneModules(s_Context& ctx)
{
    s_BitSet invalid {};
    eachButPrelude_TpK4uUXZ(ctx, invalid);
    if (invalid)
    {
        for (; ; )
        {
            bool repeat = false;
            eachButPrelude_vXYfwkND(ctx, invalid, repeat);
            if (!repeat)
                break;

        };
    };
}

                                #ifndef DEF_ends_JkFJYOhRS8a
                                #define DEF_ends_JkFJYOhRS8a
inline bool ends_JkFJYOhR(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

int countSloc(fu::view<s_Token> tokens)
{
    int line0 = -1;
    int sloc = 0;
    for (int i = 0; i < tokens.size(); i++)
    {
        const s_Token& t = tokens[i];
        if (!((t.lcc.line == line0) || (t.kind != s_Kind_id)))
        {
            line0 = t.lcc.line;
            sloc++;
        };
    };
    return sloc ? sloc : 1;
}

int countSpecs(fu::view<s_Overload> overloads)
{
    int specs = 0;
    for (int i = 0; i < overloads.size(); i++)
    {
        const s_Overload& o = overloads[i];
        if (!((o.kind != s_Kind_fn) && (o.kind != s_Kind_inline)))
            specs++;

    };
    return specs;
}

                                #ifndef DEF_leftpad_17W4ezrsAPh
                                #define DEF_leftpad_17W4ezrsAPh
inline fu::str leftpad_17W4ezrs(const fu::str& str, const int minw, /*MOV*/ fu::str&& pad)
{
    if ((str.size() >= minw))
        return fu::str(str);
    else
    {
        const int needed = (minw - str.size());
        while (pad.size() < needed)
            pad += fu::str(pad);

        pad.shrink(needed);
        return static_cast<fu::str&&>((pad += str));
    };
}
                                #endif

void printSlowBuildDiagnostics(const s_Context& ctx)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_4 {};

    s_ModuleStat lex {};
    s_ModuleStat parse {};
    s_ModuleStat solve {};
    s_ModuleStat codegen {};
    int sloc {};
    int specs {};
    int types {};
    fu::view<s_Module> m = ctx.modules;
    for (int i = 1; i < m.size(); i++)
    {
        const s_Module& m_1 = m[i];
        lex += m_1.stats.lex;
        parse += m_1.stats.parse;
        solve += m_1.stats.solve;
        codegen += m_1.stats.codegen;
        sloc += countSloc(m_1.in.lex.tokens);
        specs += countSpecs(m_1.out.solve.scope.overloads);
        types += m_1.out.types.size();
    };
    ModuleStat_print_aKPwC57a(lex, "\n    lex "_fu, ""_fu);
    ModuleStat_print_aKPwC57a(parse, "  parse "_fu, ""_fu);
    ModuleStat_print_aKPwC57a(solve, "  solve "_fu, ""_fu);
    ModuleStat_print_aKPwC57a(codegen, "codegen "_fu, "\n"_fu);
    fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = "        ---------"_fu, x)) }));
    fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_1 = ("   sloc "_fu + leftpad_17W4ezrs(fu::i64dec(sloc), 9, "               "_fu)), x_1)) }));
    fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_2 = ("    fns "_fu + leftpad_17W4ezrs(fu::i64dec(specs), 9, "               "_fu)), x_2)) }));
    fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_3 = ("  types "_fu + leftpad_17W4ezrs(fu::i64dec(types), 9, "               "_fu)), x_3)) }));
    fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_4 = "        ---------"_fu, x_4)) }));
}

static s_BuildOutput HOTSWAP_build_Tsi8gRTk(const bool plugin, fu::view<char> fname, const fu::str& dir_wrk, const fu::str& bin, const fu::str& dir_obj, const fu::str& dir_src, const fu::str& dir_cpp, const s_RunMode runmode, const s_BuildScheme bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const fu::str& HOTSWAP_dirname, const fu::str& HOTSWAP_plugin, const s_Context& ctx)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};

    const s_Errno err = unlink_VWJwj7Fs(fu::str(HOTSWAP_plugin));
    if (err && (err != ENOENT))
    {
        fu::println((fu::slate<5, fu::str> { static_cast<fu::str&&>((x = "HOTSWAP Could not unlink "_fu, x)), fu::str(HOTSWAP_plugin), static_cast<fu::str&&>((x_1 = ": err("_fu, x_1)), static_cast<fu::str&&>((x_2 = fu::i64dec(err), x_2)), static_cast<fu::str&&>((x_3 = ")"_fu, x_3)) }));
    };
    fu::str ORIGIN = (fu::APPLE ? "@loader_path"_fu : "$ORIGIN"_fu);
    fu::vec<fu::str> libs = fu::vec<fu::str> { fu::slate<4, fu::str> { "-L"_fu, fu::str(HOTSWAP_dirname), "-lfu"_fu, ("-Wl,-rpath,"_fu + ORIGIN) } };
    if (plugin)
        return build_Tsi8gRTk((flags_ld + libs), s_RunMode_None, s_BuildScheme((bscheme | s_BuildScheme_shared)), HOTSWAP_plugin, fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx);
    else
        return build_Tsi8gRTk((flags_ld + libs), runmode, s_BuildScheme((bscheme & s_BuildScheme(~s_BuildScheme_shared))), bin, fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx);

}

static s_BuildOutput recompile_Tsi8gRTk(const bool plugin, const bool dont_try_catch, const fu::str& fname, const fu::str& dir_wrk, const fu::str& bin, const fu::str& dir_obj, const fu::str& dir_src, const fu::str& dir_cpp, const s_RunMode runmode, const s_BuildScheme bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const s_BuildScheme HOTSWAP, const fu::str& HOTSWAP_dirname, const fu::str& HOTSWAP_plugin, fu::vec<fu::str>& watch_list, bool& last_recompile_ok, double& last_spurious_watch_notif, s_Context& ctx, const s_Options& options)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_4 {};

    if (s_BuildScheme((bscheme & s_BuildScheme_watch)) && !dont_try_catch)
    {
        watch_pruneModules(ctx);

        { {

            try
            {
            {
                return recompile_Tsi8gRTk(plugin, true, fname, dir_wrk, bin, dir_obj, dir_src, dir_cpp, runmode, bscheme, flags_cc, flags_ld, HOTSWAP, HOTSWAP_dirname, HOTSWAP_plugin, watch_list, last_recompile_ok, last_spurious_watch_notif, ctx, options);
            }
            }
            catch (const std::exception& o_0)
            {
                fu::str e = fu::to_str(o_0.what());

            {
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = (((("\n"_fu + "\x07"_fu) + qBAD_e44UlzzA("  ERROR "_fu)) + e) + (!ends_JkFJYOhR(e, "\n"_fu) ? "\n"_fu : fu::str{})), x)) }));
                goto BL_2;
            }
            }
;
          } BL_2:;
        };
        return s_BuildOutput{};
    }
    else
    {
        last_recompile_ok = false;
        fu_DEFER_IF_OK(last_recompile_ok = true);
        fu_DEFER(last_spurious_watch_notif = hr_0pZhUWR4());
        fu::println((fu::slate<2, fu::str> { static_cast<fu::str&&>((x_1 = "COMPILE "_fu, x_1)), fu::str(fname) }));
        const double t0 = hr_0pZhUWR4();
        compile_Tsi8gRTk(fname, ctx, options);
        const double t1 = hr_0pZhUWR4();
        const double tt = (t1 - t0);
        if (tt > 0.025)
            printSlowBuildDiagnostics(ctx);

        fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x_2 = "        "_fu, x_2)), static_cast<fu::str&&>((x_3 = fu::f64dec(tt), x_3)), static_cast<fu::str&&>((x_4 = "s\n"_fu, x_4)) }));
        /*MOV*/ s_BuildOutput ret = (HOTSWAP ? HOTSWAP_build_Tsi8gRTk(plugin, fname, dir_wrk, bin, dir_obj, dir_src, dir_cpp, runmode, bscheme, flags_cc, flags_ld, HOTSWAP_dirname, HOTSWAP_plugin, ctx) : build_Tsi8gRTk(flags_ld, runmode, bscheme, bin, fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx));
        if (ret.watch_list && s_BuildScheme((bscheme & s_BuildScheme_watch)))
            watch_list = ret.watch_list;

        return /*NRVO*/ ret;
    };
}

                                #ifndef DEF___vLw7Wh9i1Fk
                                #define DEF___vLw7Wh9i1Fk
inline static void _vLw7Wh9i(const s_Module& module, fu::vec<fu::str>& watch_list)
{
    if (module.fname)
        watch_list += fu::str(module.fname);

}
                                #endif

                                #ifndef DEF_eachButPrelude_2picbmMVNkh
                                #define DEF_eachButPrelude_2picbmMVNkh
inline static void eachButPrelude_2picbmMV(const s_Context& ctx, fu::vec<fu::str>& watch_list)
{
    for (int i = 1; i < ctx.modules.size(); i++)
        _vLw7Wh9i(ctx.modules[i], watch_list);

}
                                #endif

s_BuildOutput compile_and_build_Tsi8gRTk(const fu::str& fname, const fu::str& dir_wrk, const fu::str& bin, const fu::str& dir_obj, const fu::str& dir_src, const fu::str& dir_cpp, const s_RunMode runmode, const s_BuildScheme bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld)
{
    s_Context ctx = clone_G8s9W95K(CTX_PRELUDE);
    const s_Options options = s_Options { s_Lint{}, s_SolverNotes{}, s_CGDefects{}, s_DevOptions_DEV_Parallel, {} };
    const s_BuildScheme HOTSWAP = s_BuildScheme((bscheme & s_BuildScheme_hotswap));
    fu::str HOTSWAP_dirname = (HOTSWAP ? (bin ? dirname_qZI0kCzt(bin) : (dir_wrk + "bin/"_fu)) : fu::str{});
    fu::str HOTSWAP_plugin = (HOTSWAP ? (HOTSWAP_dirname + "hotswap"_fu) : fu::str{});
    if (HOTSWAP)
    {
        build_Tsi8gRTk((flags_ld + (fu::slate<1, fu::str> { "-ldl"_fu })), s_RunMode_None, s_BuildScheme((s_BuildScheme((bscheme & s_BuildScheme(~s_BuildScheme_hotswap))) | s_BuildScheme_shared)), (HOTSWAP_dirname + "libfu.so"_fu), fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx);
    };
    fu::vec<fu::str> watch_list {};
    for (; ; )
    {
        bool last_recompile_ok {};
        double last_spurious_watch_notif {};
        /*MOV*/ s_BuildOutput ret = recompile_Tsi8gRTk(false, false, fname, dir_wrk, bin, dir_obj, dir_src, dir_cpp, runmode, bscheme, flags_cc, flags_ld, HOTSWAP, HOTSWAP_dirname, HOTSWAP_plugin, watch_list, last_recompile_ok, last_spurious_watch_notif, ctx, options);
        if (s_BuildScheme((bscheme & s_BuildScheme_watch)) && !watch_list)
            eachButPrelude_2picbmMV(ctx, watch_list);

        return /*NRVO*/ ret;
    };
}

#endif
