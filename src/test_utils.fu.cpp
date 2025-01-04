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
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
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
struct s_Map_cUwKMz9CPyg;
struct s_Set_6ARmtH0K78f;
struct s_TestDiffs;
typedef fu::u8 s_DEV_OnFail;
struct s_TODO_FIX_Tuple;
struct s_TestOutput;
typedef int s_ExitStatus;
enum s_RunMode: fu::u8;
struct s_BuildOutput;
typedef uint16_t s_BuildScheme;
typedef int s_Errno;
void setFile_1qjplDUo(s_Map_cUwKMz9CPyg&, const fu::str&, const fu::str&);
void compile_Tsi8gRTk(const fu::str&, s_Context&, const s_Options&);
s_Context ZERO_3QGLLDcU(fu::vec<fu::str>&&, s_Options&&, const fu::str&, int, s_TestDiffs&);
int parse10s32_V5IuMsej(int&, fu::view<char>);
fu::str qBAD_e44UlzzA(const fu::str&);
s_BuildOutput build_uGHE7p6t(fu::str&&, fu::str&&, const fu::str&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, s_DEV_OnFail, s_RunMode, int, s_BuildScheme, fu::view<fu::str>, fu::view<fu::str>, const s_Context&);
fu::str qID_e44UlzzA(const fu::str&);
fu::str lower_KPhiKsnb(fu::str&&);
static bool check_3QGLLDcU(const fu::str&, fu::view<char>);
void set_next_pXriHDvy(s_TestDiffs&, fu::view<char>);
fu::str into_testdiff_6GsP67je(const s_TestOutput&);
fu::str inspect_wkVORywj(const s_Module&);
fu::str strip_e44UlzzA(fu::view<char>);
s_Errno write_VWJwj7Fs(fu::str&&, fu::view<char>, unsigned);

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

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
{
    fu::vec<fu::str> data;
    explicit operator bool() const noexcept
    {
        return false
            || data
        ;
    }
};
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

                                #ifndef DEF_s_TODO_FIX_Tuple
                                #define DEF_s_TODO_FIX_Tuple
struct s_TODO_FIX_Tuple
{
    s_Context ctx;
    s_TestOutput debug_output;
    s_TODO_FIX_Tuple(const s_TODO_FIX_Tuple&) = delete;
    s_TODO_FIX_Tuple(s_TODO_FIX_Tuple&&) = default;
    s_TODO_FIX_Tuple& operator=(const s_TODO_FIX_Tuple&) = delete;
    s_TODO_FIX_Tuple& operator=(s_TODO_FIX_Tuple&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || ctx
            || debug_output
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

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEF_clone_MQq1QmEfRcl
                                #define DEF_clone_MQq1QmEfRcl
inline const fu::str& clone_MQq1QmEf(const fu::str& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_WYOmMh16nBd
                                #define DEF_clone_WYOmMh16nBd
inline int clone_WYOmMh16(const int a)
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

                                #ifndef DEF_find_hqp1KnCkfBl
                                #define DEF_find_hqp1KnCkfBl
inline static int find_hqp1KnCk(fu::view<char> arr, const char val, const int eLse)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == val)
            return i;

    };
    return eLse;
}
                                #endif

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
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

                                #ifndef DEF_find_5WUbOXwWxRb
                                #define DEF_find_5WUbOXwWxRb
inline int find_5WUbOXwW(fu::view<char> haystack, fu::view<char> needle)
{
    if ((haystack.size() < needle.size()) || (needle.size() <= 0))
    {
        if (needle.size())
            return -1;
        else
            return 0;

    }
    else if (needle.size() == 1)
        return find_yP7FbxFZ(haystack, needle[0]);
    else
    {
        const int needle_len_m1 = (needle.size() - 1);
        const char needle_last_char = needle[needle_len_m1];
        int skip = 0;
        for (int i = needle_len_m1; i < haystack.size(); )
        {
            while (haystack[i] != needle_last_char)
            {
                if (++i == haystack.size())
                    return -1;

            };
            for (int j = 0; ; )
            {
                if (haystack[((i - needle_len_m1) + j)] != needle[j])
                {
                    if (!skip)
                    {
                        skip = needle.size();
                        for (int j_1 = needle_len_m1; j_1-- > 0; )
                        {
                            if (needle[j_1] == needle_last_char)
                            {
                                skip = (needle_len_m1 - j_1);
                                break;
                            };
                        };
                    };
                    i += skip;
                    break;
                }
                else if (++j == needle_len_m1)
                    return i - needle_len_m1;

            };
        };
        return -1;
    };
}
                                #endif

                                #ifndef DEF_has_nst65ofMVk7
                                #define DEF_has_nst65ofMVk7
inline bool has_nst65ofM(fu::view<char> a, fu::view<char> b)
{
    return (find_5WUbOXwW(a, b) >= 0);
}
                                #endif

static fu::str ensure_main_3QGLLDcU(const fu::str& src)
{
    if (has_nst65ofM(src, "fn main"_fu))
        return fu::str(src);
    else
    {
        return ("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu;
    };
}

                                #ifndef DEF_last_StdcW3mSfW7
                                #define DEF_last_StdcW3mSfW7
inline const fu::str& last_StdcW3mS(fu::view<fu::str> s)
{
    return s[(s.size() - 1)];
}
                                #endif

                                #ifndef DEF___iEmq69PnGD8
                                #define DEF___iEmq69PnGD8
inline static const fu::str& _iEmq69Pn(const s_Module& _)
{
    return _.out.cpp.src;
}
                                #endif

                                #ifndef DEF_map_XfPF3qlefSc
                                #define DEF_map_XfPF3qlefSc
inline fu::vec<fu::str> map_XfPF3qle(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(_iEmq69Pn(a[i]));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF___RR8cQKhYHxc
                                #define DEF___RR8cQKhYHxc
inline static bool _RR8cQKhY(fu::view<char> a, fu::view<char> b)
{
    return x3Cx3E_bv5nK4Kl(a, b) < 0;
}
                                #endif

static void sort_3QGLLDcU(fu::vec<fu::str>& a)
{
    fu::str l {};
    fu::str r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _RR8cQKhY(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_XEfD3Iab16f
                                #define DEF_sort_XEfD3Iab16f
inline void sort_XEfD3Iab(fu::vec<fu::str>& a)
{
    sort_3QGLLDcU(a);
}
                                #endif

static void sort_5TaNJXGQ(fu::vec<fu::str>& a)
{
    fu::str l {};
    fu::str r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _RR8cQKhY(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_NIrE8Ph3Yb4
                                #define DEF_sort_NIrE8Ph3Yb4
inline void sort_NIrE8Ph3(fu::vec<fu::str>& a)
{
    sort_5TaNJXGQ(a);
}
                                #endif

                                #ifndef DEF_str_cVIkXcxdYa6
                                #define DEF_str_cVIkXcxdYa6
inline fu::str str_cVIkXcxd(const s_SolverNotes n)
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

        if (n & s_SolverNotes_N_McomUnwrapsLetdef)
            res += ("N_McomUnwrapsLetdef"_fu + ", "_fu);

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

s_Context compile_snippets_3QGLLDcU(fu::view<fu::str> sources, fu::vec<fu::str>&& fnames, s_Options&& options)
{
    options.dev |= s_DevOptions_DEV_CG_LifetimeAnnots;
    /*MOV*/ s_Context ctx = clone_G8s9W95K(CTX_PRELUDE);
    /*MOV*/ fu::str base_dir = (ctx.fudir + "__tests__/"_fu);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu::str& src = sources[i];
        fu::str fname = (starts_hRi5tkxn(src, "//file "_fu) ? fu::slice(src, 7, find_hqp1KnCk(src, '\n', src.size())) : (x7E_3lDd4lqo("_"_fu, fu::i64dec(i)) + ".fu"_fu));
        fnames.push((base_dir + fname));
    };
    ctx.base_dir = static_cast<fu::str&&>(base_dir);
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        const fu::str& snippet = sources[i_1];
        fu::str src = ((i_1 == (sources.size() - 1)) ? ensure_main_3QGLLDcU(snippet) : fu::str(snippet));
        setFile_1qjplDUo(ctx.nuke.files, fnames[i_1], src);
        if (has_nst65ofM(snippet, "/*PRINT*/"_fu))
            options.dev |= s_DevOptions_DEV_Print;

    };
    s_Context ctx_reverseBuildOrder = ((sources.size() > 1) ? clone_G8s9W95K(ctx) : s_Context{});
    compile_Tsi8gRTk(last_StdcW3mS(fnames), ctx, options);
    if (sources.size() > 1)
    {
        for (int i_2 = 0; i_2 < sources.size(); i_2++)
        {
            const fu::str& fname = fnames[i_2];
            compile_Tsi8gRTk(fname, ctx_reverseBuildOrder, options);
        };
        fu::vec<fu::str> fwd = map_XfPF3qle(ctx.modules);
        fu::vec<fu::str> rev = map_XfPF3qle(ctx_reverseBuildOrder.modules);
        sort_XEfD3Iab(fwd);
        sort_NIrE8Ph3(rev);
        if (fwd.size() == rev.size())
        {
            for (int i_3 = 0; i_3 < ctx.modules.size(); i_3++)
            {
                if (!(fwd[i_3] == rev[i_3]))
                    fu::fail((((("compile_snippets: fwd != rev:"_fu + "\n\nFWD:\n"_fu) + fwd[i_3]) + "\n\nREV:\n"_fu) + rev[i_3]));

            };
        }
        else
            fu::fail("compile_snippets: #fwd != #rev"_fu);

    };
    for (int i_2 = 0; i_2 < ctx.modules.size(); i_2++)
    {
        s_Module& module = ctx.modules.mutref(i_2);
        const s_SolverNotes notes = module.out.solve.notes;
        if (notes)
            module.out.cpp.src += (x7E_3lDd4lqo("\n// "_fu, str_cVIkXcxd(notes)) + "\n"_fu);

    };
    return /*NRVO*/ ctx;
}

fu::str snippet2cpp_3QGLLDcU(const fu::str& src)
{
    fu::str fname = "/DIR/FILE.fu"_fu;
    s_Context ctx = compile_snippets_3QGLLDcU((fu::slate<1, fu::str> { fu::str(src) }), fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(fname) } }, s_Options{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu::str(module.out.cpp.src);

    };
    return ""_fu;
}

                                #ifndef DEF_find_2C20a41o6u3
                                #define DEF_find_2C20a41o6u3
inline int find_2C20a41o(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_5WUbOXwW(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

static int unindent_left_3QGLLDcU(fu::view<char> src, const int i0)
{
    int i1 = i0;
    while (i1--)
    {
        const char c = src[i1];
        if (c != ' ')
        {
            if (c == '\n')
                return i1 + 1;
            else
                break;

        };
    };
    return i0;
}

                                #ifndef DEF___r0PfTUj3G5c
                                #define DEF___r0PfTUj3G5c
inline static fu::view<fu::str> _r0PfTUj3(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}
                                #endif

                                #ifndef DEF_split_qWczmRa2xVj
                                #define DEF_split_qWczmRa2xVj
inline void split_qWczmRa2(const fu::str& str, fu::view<char> sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = find_2C20a41o(str, sep, last)) >= 0))
        {
            _r0PfTUj3(fu::slice(str, last, next), result);
            last = (next + N);
        };
    };
    if (last)
        _r0PfTUj3(fu::slice(str, last), result);
    else
        _r0PfTUj3(str, result);

}
                                #endif

                                #ifndef DEF_split_pAb7nvu3yla
                                #define DEF_split_pAb7nvu3yla
inline fu::vec<fu::str> split_pAb7nvu3(const fu::str& str, fu::view<char> sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_qWczmRa2(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_only_iL7PcytqrGd
                                #define DEF_only_iL7PcytqrGd
inline const fu::str& only_iL7Pcytq(fu::view<fu::str> s)
{
    fu_ASSERT((s.size() == 1));
    return s[0];
}
                                #endif

                                #ifndef DEF___DbUF88wpIQ8
                                #define DEF___DbUF88wpIQ8
inline static void _DbUF88wp(fu::str& part)
{
    part.shrink(unindent_left_3QGLLDcU(part, part.size()));
}
                                #endif

                                #ifndef DEF_each_ID3Ejdw5Gba
                                #define DEF_each_ID3Ejdw5Gba
inline void each_ID3Ejdw5(fu::view_mut<fu::str> a)
{
    for (int i = 0; i < a.size(); i++)
        _DbUF88wp(a.mutref(i));

}
                                #endif

                                #ifndef DEF_first_W2vsAJVmbk6
                                #define DEF_first_W2vsAJVmbk6
inline const fu::str& first_W2vsAJVm(fu::view<fu::str> s)
{
    return s[0];
}
                                #endif

                                #ifndef DEF_join_roEBocCSa32
                                #define DEF_join_roEBocCSa32
inline fu::str join_roEBocCS(fu::view<fu::str> a, fu::view<char> sep)
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

                                #ifndef DEF_find_tnDs1wBzL75
                                #define DEF_find_tnDs1wBzL75
inline int find_tnDs1wBz(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_yP7FbxFZ(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_last_Opodn9l24A5
                                #define DEF_last_Opodn9l24A5
inline char last_Opodn9l2(fu::view<char> s)
{
    return s[(s.size() - 1)];
}
                                #endif

                                #ifndef DEF_ends_JkFJYOhRS8a
                                #define DEF_ends_JkFJYOhRS8a
inline bool ends_JkFJYOhR(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_parse_W9E0jdGWKU8
                                #define DEF_parse_W9E0jdGWKU8
inline s_SolverNotes parse_W9E0jdGW(fu::view<char> v)
{
    if (v == "N_FnRecursion"_fu)
        return s_SolverNotes_N_FnRecursion;
    else if (v == "N_FnResolve"_fu)
        return s_SolverNotes_N_FnResolve;
    else if (v == "N_FnReopen"_fu)
        return s_SolverNotes_N_FnReopen;
    else if (v == "N_TypeRecursion"_fu)
        return s_SolverNotes_N_TypeRecursion;
    else if (v == "N_TypeResolve"_fu)
        return s_SolverNotes_N_TypeResolve;
    else if (v == "N_TypeReopen"_fu)
        return s_SolverNotes_N_TypeReopen;
    else if (v == "N_DeadCode"_fu)
        return s_SolverNotes_N_DeadCode;
    else if (v == "N_DeadCall"_fu)
        return s_SolverNotes_N_DeadCall;
    else if (v == "N_DeadLet"_fu)
        return s_SolverNotes_N_DeadLet;
    else if (v == "N_DeadArrlit"_fu)
        return s_SolverNotes_N_DeadArrlit;
    else if (v == "N_DeadLoopInit"_fu)
        return s_SolverNotes_N_DeadLoopInit;
    else if (v == "N_DeadConv"_fu)
        return s_SolverNotes_N_DeadConv;
    else if (v == "N_NonTrivAutoCopy"_fu)
        return s_SolverNotes_N_NonTrivAutoCopy;
    else if (v == "N_RelaxRespec"_fu)
        return s_SolverNotes_N_RelaxRespec;
    else if (v == "N_UnusedImplicit"_fu)
        return s_SolverNotes_N_UnusedImplicit;
    else if (v == "N_UnusedCall"_fu)
        return s_SolverNotes_N_UnusedCall;
    else if (v == "N_UnusedDefer"_fu)
        return s_SolverNotes_N_UnusedDefer;
    else if (v == "N_UnusedTry"_fu)
        return s_SolverNotes_N_UnusedTry;
    else if (v == "N_UnusedAndOr"_fu)
        return s_SolverNotes_N_UnusedAndOr;
    else if (v == "N_UnusedIfElse"_fu)
        return s_SolverNotes_N_UnusedIfElse;
    else if (v == "N_UnusedArrlit"_fu)
        return s_SolverNotes_N_UnusedArrlit;
    else if (v == "N_UnusedLet"_fu)
        return s_SolverNotes_N_UnusedLet;
    else if (v == "N_BckMustSeq"_fu)
        return s_SolverNotes_N_BckMustSeq;
    else if (v == "N_AARMustSeq"_fu)
        return s_SolverNotes_N_AARMustSeq;
    else if (v == "N_AARSoftRisk"_fu)
        return s_SolverNotes_N_AARSoftRisk;
    else if (v == "N_MoveMustSeq"_fu)
        return s_SolverNotes_N_MoveMustSeq;
    else if (v == "N_McomUnwrapsLetdef"_fu)
        return s_SolverNotes_N_McomUnwrapsLetdef;
    else if (v == "N_SD_HasStaticInit"_fu)
        return s_SolverNotes_N_SD_HasStaticInit;
    else if (v == "N_SD_ExternPrivates"_fu)
        return s_SolverNotes_N_SD_ExternPrivates;
    else if (v == "N_COWRestrict"_fu)
        return s_SolverNotes_N_COWRestrict;

    return s_SolverNotes{};
}
                                #endif

                                #ifndef DEF_parseWild_ZWor1SdbXB3
                                #define DEF_parseWild_ZWor1SdbXB3
inline s_SolverNotes parseWild_ZWor1Sdb(fu::view<char> v)
{
    s_SolverNotes result {};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '*')
        {
            fu::view<char> prefix = fu::get_view_start0(v, i);
            fu::view<char> suffix = fu::get_view(v, (i + 1));

            {

                {
                    fu::str opt = "N_FnRecursion"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_FnRecursion;

                };

                {
                    fu::str opt = "N_FnResolve"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_FnResolve;

                };

                {
                    fu::str opt = "N_FnReopen"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_FnReopen;

                };

                {
                    fu::str opt = "N_TypeRecursion"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_TypeRecursion;

                };

                {
                    fu::str opt = "N_TypeResolve"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_TypeResolve;

                };

                {
                    fu::str opt = "N_TypeReopen"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_TypeReopen;

                };

                {
                    fu::str opt = "N_DeadCode"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_DeadCode;

                };

                {
                    fu::str opt = "N_DeadCall"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_DeadCall;

                };

                {
                    fu::str opt = "N_DeadLet"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_DeadLet;

                };

                {
                    fu::str opt = "N_DeadArrlit"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_DeadArrlit;

                };

                {
                    fu::str opt = "N_DeadLoopInit"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_DeadLoopInit;

                };

                {
                    fu::str opt = "N_DeadConv"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_DeadConv;

                };

                {
                    fu::str opt = "N_NonTrivAutoCopy"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_NonTrivAutoCopy;

                };

                {
                    fu::str opt = "N_RelaxRespec"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_RelaxRespec;

                };

                {
                    fu::str opt = "N_UnusedImplicit"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedImplicit;

                };

                {
                    fu::str opt = "N_UnusedCall"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedCall;

                };

                {
                    fu::str opt = "N_UnusedDefer"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedDefer;

                };

                {
                    fu::str opt = "N_UnusedTry"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedTry;

                };

                {
                    fu::str opt = "N_UnusedAndOr"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedAndOr;

                };

                {
                    fu::str opt = "N_UnusedIfElse"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedIfElse;

                };

                {
                    fu::str opt = "N_UnusedArrlit"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedArrlit;

                };

                {
                    fu::str opt = "N_UnusedLet"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_UnusedLet;

                };

                {
                    fu::str opt = "N_BckMustSeq"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_BckMustSeq;

                };

                {
                    fu::str opt = "N_AARMustSeq"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_AARMustSeq;

                };

                {
                    fu::str opt = "N_AARSoftRisk"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_AARSoftRisk;

                };

                {
                    fu::str opt = "N_MoveMustSeq"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_MoveMustSeq;

                };

                {
                    fu::str opt = "N_McomUnwrapsLetdef"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_McomUnwrapsLetdef;

                };

                {
                    fu::str opt = "N_SD_HasStaticInit"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_SD_HasStaticInit;

                };

                {
                    fu::str opt = "N_SD_ExternPrivates"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_SolverNotes_N_SD_ExternPrivates;

                };
                fu::str opt = "N_COWRestrict"_fu;
                if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                    result |= s_SolverNotes_N_COWRestrict;

            };
            return result;
        };
    };
    return parse_W9E0jdGW(v);
}
                                #endif

                                #ifndef DEF_parse_fbL1z9IzVY8
                                #define DEF_parse_fbL1z9IzVY8
inline s_CGDefects parse_fbL1z9Iz(fu::view<char> v)
{
    if (v == "GNUStmtExpr"_fu)
        return s_CGDefects_GNUStmtExpr;
    else if (v == "Goto"_fu)
        return s_CGDefects_Goto;
    else if (v == "PointlessMustSeq"_fu)
        return s_CGDefects_PointlessMustSeq;
    else if (v == "LocalConstBool"_fu)
        return s_CGDefects_LocalConstBool;
    else if (v == "ConstCast"_fu)
        return s_CGDefects_ConstCast;
    else if (v == "PointlessLocal"_fu)
        return s_CGDefects_PointlessLocal;
    else if (v == "IrrelevantLiteral"_fu)
        return s_CGDefects_IrrelevantLiteral;
    else if (v == "DuplicateFunctions"_fu)
        return s_CGDefects_DuplicateFunctions;

    return s_CGDefects{};
}
                                #endif

                                #ifndef DEF_parseWild_oOGAx3WJVIk
                                #define DEF_parseWild_oOGAx3WJVIk
inline s_CGDefects parseWild_oOGAx3WJ(fu::view<char> v)
{
    s_CGDefects result {};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '*')
        {
            fu::view<char> prefix = fu::get_view_start0(v, i);
            fu::view<char> suffix = fu::get_view(v, (i + 1));

            {

                {
                    fu::str opt = "GNUStmtExpr"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_CGDefects_GNUStmtExpr;

                };

                {
                    fu::str opt = "Goto"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_CGDefects_Goto;

                };

                {
                    fu::str opt = "PointlessMustSeq"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_CGDefects_PointlessMustSeq;

                };

                {
                    fu::str opt = "LocalConstBool"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_CGDefects_LocalConstBool;

                };

                {
                    fu::str opt = "ConstCast"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_CGDefects_ConstCast;

                };

                {
                    fu::str opt = "PointlessLocal"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_CGDefects_PointlessLocal;

                };

                {
                    fu::str opt = "IrrelevantLiteral"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_CGDefects_IrrelevantLiteral;

                };
                fu::str opt = "DuplicateFunctions"_fu;
                if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                    result |= s_CGDefects_DuplicateFunctions;

            };
            return result;
        };
    };
    return parse_fbL1z9Iz(v);
}
                                #endif

                                #ifndef DEF_parse_3Lltp04hY9c
                                #define DEF_parse_3Lltp04hY9c
inline s_DevOptions parse_3Lltp04h(fu::view<char> v)
{
    if (v == "DEV_Print"_fu)
        return s_DevOptions_DEV_Print;
    else if (v == "DEV_Parallel"_fu)
        return s_DevOptions_DEV_Parallel;
    else if (v == "DEV_ExpectFail"_fu)
        return s_DevOptions_DEV_ExpectFail;
    else if (v == "DEV_HappyPathOnly"_fu)
        return s_DevOptions_DEV_HappyPathOnly;
    else if (v == "DEV_DontFoldLiterals"_fu)
        return s_DevOptions_DEV_DontFoldLiterals;
    else if (v == "DEV_IgnoreDefects"_fu)
        return s_DevOptions_DEV_IgnoreDefects;
    else if (v == "DEV_CG_LifetimeAnnots"_fu)
    {
        return s_DevOptions_DEV_CG_LifetimeAnnots;
    };
    return s_DevOptions{};
}
                                #endif

                                #ifndef DEF_parseWild_RNA6W9AHcW8
                                #define DEF_parseWild_RNA6W9AHcW8
inline s_DevOptions parseWild_RNA6W9AH(fu::view<char> v)
{
    s_DevOptions result {};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '*')
        {
            fu::view<char> prefix = fu::get_view_start0(v, i);
            fu::view<char> suffix = fu::get_view(v, (i + 1));

            {

                {
                    fu::str opt = "DEV_Print"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_DevOptions_DEV_Print;

                };

                {
                    fu::str opt = "DEV_Parallel"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_DevOptions_DEV_Parallel;

                };

                {
                    fu::str opt = "DEV_ExpectFail"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_DevOptions_DEV_ExpectFail;

                };

                {
                    fu::str opt = "DEV_HappyPathOnly"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_DevOptions_DEV_HappyPathOnly;

                };

                {
                    fu::str opt = "DEV_DontFoldLiterals"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_DevOptions_DEV_DontFoldLiterals;

                };

                {
                    fu::str opt = "DEV_IgnoreDefects"_fu;
                    if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                        result |= s_DevOptions_DEV_IgnoreDefects;

                };
                fu::str opt = "DEV_CG_LifetimeAnnots"_fu;
                if (starts_hRi5tkxn(opt, prefix) && ends_JkFJYOhR(opt, suffix))
                {
                    result |= s_DevOptions_DEV_CG_LifetimeAnnots;
                };
            };
            return result;
        };
    };
    return parse_3Lltp04h(v);
}
                                #endif

static fu::str all_src_3QGLLDcU(fu::view<fu::str> sources)
{
    return join_roEBocCS(sources, "\n----\n"_fu);
}

static const fu::str& this_src_3QGLLDcU(const int i, fu::view<fu::str> sources)
{
    return sources[i];
}

static fu::view<char> this_cpp_3QGLLDcU(const s_ModuleOutputs& out)
{
    return out.cpp.src;
}

static fu::str all_cpp_3QGLLDcU(const s_Context& ctx)
{
    return join_roEBocCS(map_XfPF3qle(ctx.modules), "\n----\n"_fu);
}

                                #ifndef DEF_STOP_kevr7qNsR2c
                                #define DEF_STOP_kevr7qNsR2c
[[noreturn]] inline static fu::never STOP_kevr7qNs(fu::view<char> reason, fu::view<char> x, const s_Context& ctx, fu::view<fu::str> sources)
{
    fu::fail(((((((reason + ": `;; "_fu) + x) + "` in:\n"_fu) + all_src_3QGLLDcU(sources)) + "\n\nOutput is:\n\n"_fu) + all_cpp_3QGLLDcU(ctx)));
}
                                #endif

                                #ifndef DEF_x21x3D_ExVC00HnUgl
                                #define DEF_x21x3D_ExVC00HnUgl
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

                                #ifndef DEF___2We0SaEy179
                                #define DEF___2We0SaEy179
inline static void _2We0SaEy(const fu::str& x, const s_Context& ctx, int& expect_alloc_count, int& expect_alloc_bytes, fu::view<fu::str> sources)
{
    const s_SolverNotes note = parseWild_ZWor1Sdb(x);
    const int idx = (!note ? find_yP7FbxFZ(x, ' ') : 0);
    if (idx < 0)
        fu::fail(((("Invalid ;; CHECK, no argument: `;; "_fu + x) + "` in:\n"_fu) + all_src_3QGLLDcU(sources)));
    else
    {
        fu::view<char> cmd = fu::get_view_start0(x, idx);
        fu::view<char> rest = fu::get_view(x, (idx + 1));
        if (cmd == "ALLOCS"_fu)
        {
            int offset = 0;
            const int first = parse10s32_V5IuMsej(offset, rest);
            const int second = (((offset < rest.size()) && (rest[offset++] == '/')) ? parse10s32_V5IuMsej(offset, rest) : -1);
            expect_alloc_count += first;
            expect_alloc_bytes += ((second < 0) ? (first * (128 - 16)) : second);
            if (!(offset == rest.size()))
                fu::fail((("Invalid ;; ALLOCS, parse leftovers in: `;; "_fu + x) + "`"_fu));

        }
        else
        {
            bool found = false;
            for (int i = 0; i < sources.size(); i++)
            {
                const s_ModuleOutputs& out = ctx.modules[(i + 1)].out;
                if (note)
                {
                    if (out.solve.notes & note)
                        return;
                    else
                        fu::fail(((((("Expected note not listed: "_fu + qBAD_e44UlzzA(x)) + " in:\n"_fu) + this_src_3QGLLDcU(i, sources)) + "\n\nOutput is:\n\n"_fu) + this_src_3QGLLDcU(i, sources)));

                }
                else if ((found = has_nst65ofM(this_cpp_3QGLLDcU(out), rest)))
                    break;

            };
            if (cmd == "EXPECT"_fu)
            {
                if (!(found))
                    STOP_kevr7qNs("EXPECT mismatch"_fu, x, ctx, sources);

            }
            else if (cmd == "BROKEN"_fu)
            {
                if (found)
                    STOP_kevr7qNs("STILL BROKEN"_fu, x, ctx, sources);
                else
                    STOP_kevr7qNs("BROKEN mismatch"_fu, x, ctx, sources);

            }
            else if (cmd != "TODO"_fu)
                STOP_kevr7qNs("Unknown ;; CHECK"_fu, x, ctx, sources);
            else if (found)
                STOP_kevr7qNs("TODO test is actually passing"_fu, x, ctx, sources);

        };
    };
}
                                #endif

                                #ifndef DEF_each_o3b3EPPPSbe
                                #define DEF_each_o3b3EPPPSbe
inline void each_o3b3EPPP(fu::view<fu::str> a, const s_Context& ctx, int& expect_alloc_count, int& expect_alloc_bytes, fu::view<fu::str> sources)
{
    for (int i = 0; i < a.size(); i++)
        _2We0SaEy(a[i], ctx, expect_alloc_count, expect_alloc_bytes, sources);

}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu::str DEFAULT_WORKSPACE;
                                #endif

                                #ifndef DEF_DEBUG_SCHEME
                                #define DEF_DEBUG_SCHEME
extern const s_BuildScheme DEBUG_SCHEME;
                                #endif

                                #ifndef DEF_str_9xCQw8Q9KPh
                                #define DEF_str_9xCQw8Q9KPh
inline fu::str str_9xCQw8Q9(const s_CGDefects n)
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

        if (n & s_CGDefects_DuplicateFunctions)
            res += ("DuplicateFunctions"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

static s_TODO_FIX_Tuple compile_build_and_run_3QGLLDcU(fu::view<fu::str> sources, const s_Options& options, const int expect_exit, const s_DEV_OnFail onfail, const s_CGDefects ok_defects, fu::view<fu::str> expectations)
{
    /*MOV*/ s_Context ctx = compile_snippets_3QGLLDcU(sources, fu::vec<fu::str>{}, s_Options(options));
    int expect_alloc_count = 0;
    int expect_alloc_bytes = 0;
    each_o3b3EPPP(expectations, ctx, expect_alloc_count, expect_alloc_bytes, sources);
    const s_RunMode runmode = s_RunMode_CompilerTestcase;
    s_BuildOutput debug_output = build_uGHE7p6t(fu::str(DEFAULT_WORKSPACE), fu::str{}, (*(const fu::str*)fu::NIL), fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, onfail, runmode, expect_exit, DEBUG_SCHEME, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);
    build_uGHE7p6t(fu::str(DEFAULT_WORKSPACE), fu::str{}, (*(const fu::str*)fu::NIL), fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, onfail, runmode, expect_exit, s_BuildScheme{}, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);
    if (expect_alloc_count)
    {
        const int actual_alloc_count = (debug_output.output.uniq_count + debug_output.output.arc_count);
        const int actual_alloc_bytes = (debug_output.output.uniq_bytes + debug_output.output.arc_bytes);
        if ((actual_alloc_count != expect_alloc_count) || (actual_alloc_bytes != expect_alloc_bytes))
            fu::fail((x7E_3lDd4lqo((x7E_3lDd4lqo(((x7E_3lDd4lqo((x7E_3lDd4lqo(("ALLOC mismatch:\n"_fu + "\n\tactual_alloc_count("_fu), fu::i64dec(actual_alloc_count)) + ") != expect_alloc_count("_fu), fu::i64dec(expect_alloc_count)) + ") ||"_fu) + "\n\tactual_alloc_bytes("_fu), fu::i64dec(actual_alloc_bytes)) + ") != expect_alloc_bytes("_fu), fu::i64dec(expect_alloc_bytes)) + ")"_fu));

    };
    if (!s_DevOptions((options.dev & s_DevOptions_DEV_IgnoreDefects)))
    {
        s_CGDefects defects {};
        for (int i = 0; i < sources.size(); i++)
        {
            const s_CodegenOutput& cpp = ctx.modules[(i + 1)].out.cpp;
            defects |= cpp.defects;
        };
        s_CGDefects unexpected = s_CGDefects((defects & s_CGDefects(~ok_defects)));
        const s_CGDefects unnecessary = s_CGDefects((s_CGDefects(~defects) & ok_defects));
        if (options.dev & s_DevOptions_DEV_DontFoldLiterals)
            unexpected &= s_CGDefects(~s_CGDefects_LocalConstBool);

        if (unexpected)
            fu::fail(((((("Unwanted CGDefect: "_fu + qBAD_e44UlzzA(str_9xCQw8Q9(unexpected))) + " in:\n"_fu) + all_src_3QGLLDcU(sources)) + "\n\nOutput is:\n\n"_fu) + all_cpp_3QGLLDcU(ctx)));
        else if (unnecessary)
            fu::fail(((((("Unnecessary CGDefect annotation: "_fu + qID_e44UlzzA(str_9xCQw8Q9(unnecessary))) + " in:\n"_fu) + all_src_3QGLLDcU(sources)) + "\n\nOutput is:\n\n"_fu) + all_cpp_3QGLLDcU(ctx)));

    };
    return s_TODO_FIX_Tuple { static_cast<s_Context&&>(ctx), s_TestOutput(debug_output.output) };
}

static fu::str ERR_TRIM_3QGLLDcU(const fu::str& e)
{
    int start = 0;
    bool startOK = false;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '/')
            start = (i + 1);
        else if (c == ':')
            startOK = true;
        else if (c == '\n')
            break;

    };
    if (startOK)
        return fu::slice(e, start);
    else
        fu::fail(("FAIL: Error does not start with an `dir/file.fu@line:col` marker:\n"_fu + e));

}

fu::str ERR_STRIP_ANSI_3QGLLDcU(/*MOV*/ fu::str&& e)
{
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '\x1B')
        {
            const int i0 = i++;
            for (; i < e.size(); i++)
            {
                const char c_1 = e[i];
                if (c_1 == 'm')
                {
                    i++;
                    e.splice(i0, (i - i0));
                    i = i0;
                    i--;
                    break;
                };
            };
        };
    };
    return static_cast<fu::str&&>(e);
}

static fu::str ERR_STRIP_SNIPPETS_3QGLLDcU(/*MOV*/ fu::str&& e)
{
    int i0 = 0;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (!((c == ' ') || (c == '\n')))
        {
            bool pipe = (c == '|');
            bool snippet = (((c >= '0') ? (c <= '9') : false) || pipe);
            i++;
            for (; i < e.size(); i++)
            {
                const char c_1 = e[i];
                if (c_1 == '\n')
                {
                    i++;
                    if (pipe)
                    {
                        e.splice(i0, (i - i0));
                        i = i0;
                    }
                    else
                        i0 = i;

                    i--;
                    break;
                }
                else if (snippet && !pipe)
                {
                    if (!(((c_1 >= '0') && (c_1 <= '9')) || (c_1 == ' ')))
                    {
                        if (c_1 == '|')
                            pipe = true;
                        else
                            snippet = false;

                    };
                };
            };
        };
    };
    return static_cast<fu::str&&>(e);
}

                                #ifndef DEF_starts_8EDTwZj1Fm2
                                #define DEF_starts_8EDTwZj1Fm2
inline bool starts_8EDTwZj1(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_ends_AbHOxjqnKH3
                                #define DEF_ends_AbHOxjqnKH3
inline bool ends_AbHOxjqn(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_split_9RucQY1ZE39
                                #define DEF_split_9RucQY1ZE39
inline void split_9RucQY1Z(const fu::str& str, const char sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    while (((next = find_tnDs1wBz(str, sep, last)) >= 0))
    {
        _r0PfTUj3(fu::slice(str, last, next), result);
        last = (next + N);
    };
    if (last)
        _r0PfTUj3(fu::slice(str, last), result);
    else
        _r0PfTUj3(str, result);

}
                                #endif

                                #ifndef DEF_split_i9NDBTFie4j
                                #define DEF_split_i9NDBTFie4j
inline fu::vec<fu::str> split_i9NDBTFi(const fu::str& str, const char sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_9RucQY1Z(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static bool check_3QGLLDcU(const fu::str& word, fu::view<char> actual)
{
    const int pipe = find_yP7FbxFZ(word, '|');
    if ((pipe > 1) && starts_8EDTwZj1(word, '(') && ends_AbHOxjqn(word, ')'))
    {
        fu::vec<fu::str> alternatives = split_i9NDBTFi(fu::slice(word, 1, (word.size() - 1)), '|');
        for (int i = 0; i < alternatives.size(); i++)
        {
            if (check_3QGLLDcU(alternatives[i], actual))
                return true;

        };
        return false;
    }
    else
    {
        fu::str expect = lower_KPhiKsnb(fu::str(word));
        return has_nst65ofM(actual, expect);
    };
}

static void verify_errmsg_3QGLLDcU(fu::view<char> topic, const fu::str& e, const fu::str& msg)
{
    fu::str actual = lower_KPhiKsnb(ERR_STRIP_SNIPPETS_3QGLLDcU(ERR_STRIP_ANSI_3QGLLDcU(ERR_TRIM_3QGLLDcU(e))));
    bool BUG_ok = false;
    int m0 = -1;
    for (int m1 = 0; (m1 <= msg.size()); m1++)
    {
        const char c = ((m1 < msg.size()) ? msg[m1] : ' ');
        if ((int(fu::u8(c)) <= 32))
        {
            if ((m0 >= 0))
            {
                fu::str exact = fu::slice(msg, m0, m1);
                if (exact == "BUG"_fu)
                    BUG_ok = true;

                if (!check_3QGLLDcU(exact, actual))
                    fu::fail((((((((topic + " mismatch:\n\n    Expected error keyword:\n        "_fu) + qBAD_e44UlzzA(exact)) + " from pattern <fail"_fu) + qBAD_e44UlzzA(msg)) + ">"_fu) + "\n\n    ... not present in error message:\n\n"_fu) + e));

            };
            m0 = -1;
        }
        else if (m0 < 0)
            m0 = m1;

    };
    if (!BUG_ok)
    {
        int start = -1;
        while (((start = find_2C20a41o(e, "BUG"_fu, (start + 1))) >= 0))
        {
            if (!((start > 2) && (fu::get_view(e, (start - 2), (start + 3)) == "DEBUG"_fu)))
                fu::fail(((topic + " error message contains BUG:\n\n"_fu) + e));

        };
    };
}

static fu::str ERR_KEY_3QGLLDcU(fu::view<fu::str> sources)
{
    /*MOV*/ fu::str key = ""_fu;
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_3QGLLDcU(src, src.size());
        key += fu::get_view_start0(src, end);
    };
    return /*NRVO*/ key;
}

s_Context ZERO_3QGLLDcU(fu::vec<fu::str>&& sources, s_Options&& options, const fu::str& expect_fail, const int expect_exit, s_TestDiffs& testdiffs)
{
    // Hoisted:
    fu::str x {};

    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu::str& src = sources[i];
            int start0 = find_5WUbOXwW(src, "<fail"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = find_2C20a41o(src, "</fail>"_fu, start0);
                if ((end0 >= 0))
                {
                    int start1 = (start0 + 5);
                    while (src[start1++] != '>');
                    fu::str msg = fu::slice(src, (start0 + 5), (start1 - 1));
                    if (msg)
                    {
                        if (msg[0] == ' ')
                        {
                            const int end1 = (end0 + 7);
                            start0 = unindent_left_3QGLLDcU(src, start0);
                            end0 = unindent_left_3QGLLDcU(src, end0);
                            fu::str prefix = fu::slice(src, 0, start0);
                            fu::str suffix = fu::slice(src, end1, src.size());
                            fu::vec<fu::str> split = split_pAb7nvu3(fu::slice(src, start1, end0), "<pass/>"_fu);
                            if (split.size() > 1)
                            {
                                if (split.size() < 3)
                                {
                                    fu::vec<fu::str> fails = split_pAb7nvu3(split[0], "<fail/>"_fu);
                                    split.shift();
                                    fu::view<char> pass = only_iL7Pcytq(split);
                                    for (int j = fails.size(); j-- > 0; )
                                    {
                                        fu::view<char> fail = fails[j];
                                        const int end = unindent_left_3QGLLDcU(fail, fail.size());
                                        sources.mutref(i) = ((prefix + fu::get_view_start0(fail, end)) + suffix);
                                        s_Options options_1 { options };
                                        options_1.dev |= s_DevOptions_DEV_ExpectFail;
                                        ZERO_3QGLLDcU(fu::vec<fu::str>(sources), s_Options(options_1), msg, expect_exit, testdiffs);
                                    };
                                    const int end = unindent_left_3QGLLDcU(pass, pass.size());
                                    sources.mutref(i) = ((prefix + fu::get_view_start0(pass, end)) + suffix);
                                }
                                else
                                    fu::fail("Multiple `<pass/>` blocks for `<fail>`."_fu);

                            }
                            else
                                fu::fail("No `<pass/>` for `<fail>`."_fu);

                        }
                        else
                            fu::fail((("Bad <fail keywords>: `<fail"_fu + msg) + ">`."_fu));

                    }
                    else
                        fu::fail("No <fail keywords>."_fu);

                }
                else
                    fu::fail("No closing `</fail>` for `<fail>`."_fu);

            };
        };
    };
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        for (; ; )
        {
            const fu::str& src = sources[i_1];
            int start0 = find_5WUbOXwW(src, "<alt>"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = find_2C20a41o(src, "</alt>"_fu, start0);
                if ((end0 >= 0))
                {
                    const int start1 = (start0 + 5);
                    const int end1 = (end0 + 6);
                    start0 = unindent_left_3QGLLDcU(src, start0);
                    end0 = unindent_left_3QGLLDcU(src, end0);
                    fu::str prefix = fu::slice(src, 0, start0);
                    fu::str suffix = fu::slice(src, end1, src.size());
                    fu::vec<fu::str> split = split_pAb7nvu3(fu::slice(src, start1, end0), "<alt/>"_fu);
                    if (split.size() < 2)
                        split += ""_fu;

                    for (int j = split.size(); j-- > 0; )
                    {
                        fu::view<char> part = split[j];
                        const int end = unindent_left_3QGLLDcU(part, part.size());
                        sources.mutref(i_1) = ((prefix + fu::get_view_start0(part, end)) + suffix);
                        if (j)
                        {
                            ZERO_3QGLLDcU(fu::vec<fu::str>(sources), s_Options(options), expect_fail, expect_exit, testdiffs);
                        };
                    };
                }
                else
                    fu::fail("No closing `</alt>` for `<alt>`."_fu);

            };
        };
    };
    for (int i_2 = 0; i_2 < sources.size(); i_2++)
    {
        for (; ; )
        {
            const fu::str& src = sources[i_2];
            int start0 = find_5WUbOXwW(src, "<flip>"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = find_2C20a41o(src, "</flip>"_fu, start0);
                if ((end0 >= 0))
                {
                    const int start1 = (start0 + 6);
                    const int end1 = (end0 + 7);
                    start0 = unindent_left_3QGLLDcU(src, start0);
                    end0 = unindent_left_3QGLLDcU(src, end0);
                    fu::str prefix = fu::slice(src, 0, start0);
                    fu::str suffix = fu::slice(src, end1, src.size());
                    fu::vec<fu::str> split = split_pAb7nvu3(fu::slice(src, start1, end0), "<flip/>"_fu);
                    if (split.size() != 2)
                        fu::fail("We expect exactly one `<flip/>` in a `<flip></flip>`."_fu);
                    else
                    {
                        each_ID3Ejdw5(split);
                        for (int j = split.size(); j-- > 0; )
                        {
                            fu::str a { split[0] };
                            fu::str b { split[1] };
                            if (j)
                                std::swap(a, b);

                            sources.mutref(i_2) = (((prefix + a) + b) + suffix);
                            if (j)
                            {
                                ZERO_3QGLLDcU(fu::vec<fu::str>(sources), s_Options(options), expect_fail, expect_exit, testdiffs);
                            };
                        };
                    };
                }
                else
                    fu::fail("No closing `</flip>` for `<flip>`."_fu);

            };
        };
    };
    for (int i_3 = 0; i_3 < sources.size(); i_3++)
    {
        for (; ; )
        {
            const fu::str& src = sources[i_3];
            int start0 = find_5WUbOXwW(src, "<split/>"_fu);
            const int start1 = (start0 + 8);
            if (start0 < 0)
                break;
            else
            {
                const int start00 = start0;
                while (start0 && (src[(start0 - 1)] == ' '))
                    start0--;

                /*MOV*/ fu::str moduleA = fu::slice(src, 0, start0);
                /*MOV*/ fu::str moduleB = ((x7E_3lDd4lqo((fu::get_view(src, start0, start00) + "pub import _"_fu), fu::i64dec(i_3)) + ";"_fu) + fu::get_view(src, start1));
                /*MOV*/ fu::str without = (fu::get_view_start0(src, start0) + fu::get_view(src, start1));
                sources.mutref(i_3) = static_cast<fu::str&&>(without);
                ZERO_3QGLLDcU(fu::vec<fu::str>(sources), s_Options(options), expect_fail, expect_exit, testdiffs);
                sources.mutref(i_3) = static_cast<fu::str&&>(moduleA);
                sources.insert((i_3 + 1), static_cast<fu::str&&>(moduleB));
            };
        };
    };
    if (!has_nst65ofM(first_W2vsAJVm(sources), ";; EXPECT"_fu) && !has_nst65ofM(first_W2vsAJVm(sources), ";; !DEV_DontFoldLiterals"_fu))
    {
        if (s_DevOptions(~options.dev) & s_DevOptions_DEV_DontFoldLiterals)
        {
            s_Options options_1 { options };
            options_1.dev |= s_DevOptions_DEV_DontFoldLiterals;
            ZERO_3QGLLDcU(fu::vec<fu::str>(sources), s_Options(options_1), expect_fail, expect_exit, testdiffs);
        };
    };
    s_DEV_OnFail onfail = s_DEV_OnFail((s_DEV_OnFail_OnFail_PrintInput | s_DEV_OnFail_OnFail_PrintOutput));
    if (!s_DevOptions((options.dev & s_DevOptions_DEV_ExpectFail)))
    {
        onfail |= s_DEV_OnFail_OnFail_WriteRepro;
        options.dev |= s_DevOptions_DEV_HappyPathOnly;
    };
    fu_DEFER_IF_ERR(if (!s_DevOptions((options.dev & s_DevOptions_DEV_ExpectFail)))
    {
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("\nFAILING TESTCASE:\n"_fu + join_roEBocCS(sources, "\n"_fu)), x)) }));
    });
    s_CGDefects ok_defects {};
    fu::vec<fu::str> expectations {};
    for (int i_4 = 0; i_4 < sources.size(); i_4++)
    {
        fu::str& src = sources.mutref(i_4);

        {
            int end = src.size();
            for (int r = src.size(); (r-- > 0) && (src[r] == ' '); )
                end = r;

            src.shrink(end);
        };
        int start = 0;
        while (((start = find_2C20a41o(src, " ;; "_fu, start)) >= 0))
        {
            int end_1 = find_tnDs1wBz(src, '\n', (start + 4));
            if (end_1 < 0)
                end_1 = src.size();

            /*MOV*/ fu::str annot = fu::slice(src, (start + 4), end_1);
            while (annot && (last_Opodn9l2(annot) <= ' '))
                annot.pop();

            if (annot[0] == '!')
            {
                fu::view<char> annot_1 = fu::get_view(annot, 1);
                const s_SolverNotes notes = parseWild_ZWor1Sdb(annot_1);
                if (notes)
                    options.break_notes |= notes;
                else
                {
                    const s_CGDefects defects = parseWild_oOGAx3WJ(annot_1);
                    if (defects)
                        options.break_defects |= defects;
                    else if ((i_4 != 0) || (parseWild_RNA6W9AH(annot_1) != s_DevOptions_DEV_DontFoldLiterals))
                        fu::fail((("Bad break_note/defect: `;; "_fu + annot_1) + "`."_fu));

                };
            }
            else
            {
                const s_CGDefects defect = parseWild_oOGAx3WJ(annot);
                if (defect)
                    ok_defects |= defect;
                else
                    expectations += static_cast<fu::str&&>(annot);

            };
            src.mutref((start + 1)) = '/';
            src.mutref((start + 2)) = '/';
            start = end_1;
        };
    };
    if (expect_fail)
    {

        try
        {
            compile_build_and_run_3QGLLDcU(sources, options, expect_exit, onfail, ok_defects, expectations);
        }
        catch (const std::exception& o_0)
        {
            fu::str e = fu::to_str(o_0.what());

        {
            verify_errmsg_3QGLLDcU("<fail>"_fu, e, expect_fail);
            set_next_pXriHDvy(testdiffs, ((ERR_KEY_3QGLLDcU(sources) + "\n---- <fail> ----\n"_fu) + e));
            return s_Context{};
        }
        }
;
        fu::fail(("<fail> does not throw:\n"_fu + join_roEBocCS(sources, "\n\n"_fu)));
    }
    else
    {
        /*MOV*/ s_TODO_FIX_Tuple _ = compile_build_and_run_3QGLLDcU(sources, options, expect_exit, onfail, ok_defects, expectations);

        {
            fu::str input = ""_fu;
            fu::str output = ""_fu;
            for (int i_5 = 0; i_5 < sources.size(); i_5++)
            {
                input += sources[i_5];
                const s_Module& m = _.ctx.modules[((i_5 + _.ctx.modules.size()) - sources.size())];
                output += m.out.cpp.src;
                if (m.stats.lex.alloc_count)
                    input += (x7E_3lDd4lqo((x7E_3lDd4lqo(("lex"_fu + ":\t"_fu), fu::i64dec(m.stats.lex.alloc_count)) + "\t"_fu), fu::i64dec(m.stats.lex.alloc_bytes)) + "\n"_fu);

                if (m.stats.parse.alloc_count)
                    input += (x7E_3lDd4lqo((x7E_3lDd4lqo(("parse"_fu + ":\t"_fu), fu::i64dec(m.stats.parse.alloc_count)) + "\t"_fu), fu::i64dec(m.stats.parse.alloc_bytes)) + "\n"_fu);

                if (m.stats.solve.alloc_count)
                    input += (x7E_3lDd4lqo((x7E_3lDd4lqo(("solve"_fu + ":\t"_fu), fu::i64dec(m.stats.solve.alloc_count)) + "\t"_fu), fu::i64dec(m.stats.solve.alloc_bytes)) + "\n"_fu);

                if (m.stats.codegen.alloc_count)
                    input += (x7E_3lDd4lqo((x7E_3lDd4lqo(("codegen"_fu + ":\t"_fu), fu::i64dec(m.stats.codegen.alloc_count)) + "\t"_fu), fu::i64dec(m.stats.codegen.alloc_bytes)) + "\n"_fu);

            };
            set_next_pXriHDvy(testdiffs, ((((input + "\n---- "_fu) + into_testdiff_6GsP67je(_.debug_output)) + " ----\n"_fu) + output));
        };
        return static_cast<s_Context&&>(_.ctx);
    };
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

                                #ifndef DEF_replace_EgBUdXNI93i
                                #define DEF_replace_EgBUdXNI93i
inline fu::str replace_EgBUdXNI(const fu::str& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu::str result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = find_2C20a41o(str, all, last)) >= 0))
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

static fu::str indent_3QGLLDcU(const fu::str& src)
{
    return replace_EgBUdXNI(src, "\n"_fu, "\n\t"_fu);
}

void ZERO_SAME_3QGLLDcU(fu::view<fu::vec<fu::str>> alts, s_TestDiffs& testdiffs)
{
    fu::vec<s_Module> expect = ZERO_3QGLLDcU(fu::vec<fu::str>(alts[0]), s_Options{}, (*(const fu::str*)fu::NIL), 0, testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu::vec<s_Module> actual = compile_snippets_3QGLLDcU(alts[i], fu::vec<fu::str>{}, s_Options{}).modules;
        if (expect.size() != actual.size())
            fu::fail("ZERO_SAME: expect/actual len mismatch."_fu);
        else
        {
            for (int m = 0; m < actual.size(); m++)
            {
                const fu::str& x = expect[m].out.cpp.src;
                const fu::str& a = actual[m].out.cpp.src;
                if (x != a)
                {
                    write_VWJwj7Fs("./expect.diff"_fu, ((strip_e44UlzzA(inspect_wkVORywj(expect[m])) + "\n\n----------------\n\n"_fu) + x), RW_RW_RW);
                    write_VWJwj7Fs("./actual.diff"_fu, ((strip_e44UlzzA(inspect_wkVORywj(actual[m])) + "\n\n----------------\n\n"_fu) + a), RW_RW_RW);
                    fu::fail((((x7E_3lDd4lqo((((x7E_3lDd4lqo(((x7E_3lDd4lqo("ZERO_SAME: alts["_fu, fu::i64dec(i)) + "] mismatch at:\n"_fu) + "\nexpect["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_3QGLLDcU(x)) + "\nactual["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_3QGLLDcU(a)) + "\n"_fu));
                };
            };
        };
    };
}

void TODO_3QGLLDcU(const fu::vec<fu::str>& sources, const fu::str& currently, s_TestDiffs& testdiffs)
{

    try
    {
    {
        ZERO_3QGLLDcU(fu::vec<fu::str>(sources), s_Options { s_Lint{}, s_SolverNotes{}, s_CGDefects{}, s_DevOptions_DEV_ExpectFail, 0u }, (*(const fu::str*)fu::NIL), 0, testdiffs);
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str e = fu::to_str(o_0.what());

    {
        verify_errmsg_3QGLLDcU("TODO()"_fu, e, (currently ? fu::str(currently) : "keywords line:col+chars"_fu));
        set_next_pXriHDvy(testdiffs, ((ERR_KEY_3QGLLDcU(sources) + "\n---- TODO: ----\n"_fu) + ERR_TRIM_3QGLLDcU(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + join_roEBocCS(sources, "\n\n"_fu)));
}

s_Context ZERO_5TaNJXGQ(const fu::str& src, s_TestDiffs& testdiffs)
{
    return ZERO_3QGLLDcU(fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(src) } }, s_Options{}, (*(const fu::str*)fu::NIL), 0, testdiffs);
}

void TODO_5TaNJXGQ(const fu::str& src, const fu::str& currently, s_TestDiffs& testdiffs)
{
    TODO_3QGLLDcU(fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(src) } }, currently, testdiffs);
}

void ZERO_SAME_5TaNJXGQ(fu::view<fu::str> alts, s_TestDiffs& testdiffs)
{
    fu::vec<fu::vec<fu::str>> wrap {};
    for (int i = 0; i < alts.size(); i++)
    {
        wrap += fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(alts[i]) } };
    };
    ZERO_SAME_3QGLLDcU(wrap, testdiffs);
}

#endif
