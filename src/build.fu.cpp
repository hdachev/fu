#include <cstdint>
#include <errno.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/process.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>
#include <fu/vec/LEGACY_slice.h>

typedef uint16_t s_BuildScheme;
typedef int s_ExitStatus;
typedef int s_Errno;
struct s_BuildOutput;
struct s_TestOutput;
typedef fu::u8 s_DEV_OnFail;
enum s_RunMode: fu::u8;
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
struct s_TranslationUnit;
typedef fu::u8 s_CacheCleanup;
struct s_Set_95BJOojOc45;
struct s_FileInvariants;
struct s_Stat;
struct s_Timespec;
struct s_Map_Xty3xLT6R3k;
struct s_Set_6ARmtH0K78f;
struct s_DirWrk;
struct s_BuildError;
typedef int s_Signo;
s_Errno exec_G82RIYwh(fu::str&&, s_ExitStatus&, fu::str&);
s_Errno spawn_0Hw8DqUB(fu::vec<fu::str>&&, fu::str&, fu::str&, s_ExitStatus&, bool);
s_TEA hash_s9RCxn8L(fu::view<char>);
fu::str join_qZI0kCzt(fu::view<char>, const fu::str&);
s_Errno read_VWJwj7Fs(fu::str&&, fu::str&, int64_t);
fu::str filename_qZI0kCzt(const fu::str&);
fu::str dirname_qZI0kCzt(const fu::str&);
s_Errno stat_VWJwj7Fs(fu::str&&, s_Stat&);
fu::str qBAD_e44UlzzA(const fu::str&);
fu::str qID_e44UlzzA(const fu::str&);
fu::str qKW_e44UlzzA(const fu::str&);
static uint64_t visitInclude_uGHE7p6t(const fu::str&, const fu::str&, const fu::str&, fu::vec<s_FileInvariants>&, s_Map_Xty3xLT6R3k&);
void hash_qRo1x0wq(s_TEA&, uint64_t);
s_Errno mkdir_p_5u3xiGA0(fu::str&&, unsigned);
void hash_l6RUR9Sz(s_TEA&, fu::view<char>);
fu::str digest16_lweHUmk8(uint64_t, int);
void hash_lweHUmk8(s_TEA&, const s_TEA&);
s_Errno unlink_VWJwj7Fs(fu::str&&);
int64_t size_VWJwj7Fs(fu::str&&);
uint64_t next_u64_qB1H6Wbg();
s_Errno write_VWJwj7Fs(fu::str&&, fu::view<char>, unsigned);
s_Errno rename_VWJwj7Fs(fu::str&&, fu::str&&);
double hr_0pZhUWR4();
s_Errno chmod_VWJwj7Fs(fu::str&&, unsigned);
bool looks_legit_6GsP67je(int64_t);
s_TestOutput parse_6GsP67je(fu::view<char>);
s_TestOutput from_6GsP67je(const fu::str&, s_ExitStatus);
bool signalled_BXrkWTfT(s_ExitStatus);
s_Signo signal_BXrkWTfT(s_ExitStatus);
bool exited_BXrkWTfT(s_ExitStatus);
int exit_BXrkWTfT(s_ExitStatus);
fu::str serialize_6GsP67je(const s_TestOutput&);
fu::str relative_qZI0kCzt(fu::view<char>, const fu::str&);

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

                                #ifndef DEF_s_ExitStatus
                                #define DEF_s_ExitStatus
                                #endif

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
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

                                #ifndef DEF_s_CacheCleanup
                                #define DEF_s_CacheCleanup
inline constexpr s_CacheCleanup s_CacheCleanup_Obj = s_CacheCleanup(1u);
inline constexpr s_CacheCleanup s_CacheCleanup_Cpp = s_CacheCleanup(2u);

inline constexpr s_CacheCleanup MASK_s_CacheCleanup
    = s_CacheCleanup_Obj
    | s_CacheCleanup_Cpp;
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

                                #ifndef DEF_s_TranslationUnit
                                #define DEF_s_TranslationUnit
struct s_TranslationUnit
{
    fu::str human;
    fu::str src;
    fu::str iquote;
    s_TEA includes_hash;
    fu::str src_output_file;
    fu::str cpp_cache_file;
    s_TEA obj_hash;
    fu::str obj_cache_file;
    fu::str tmp_file;
    s_CacheCleanup cache_cleanup;
    s_BuildHacks hacks;
    s_Set_95BJOojOc45 testsuite_units;
    explicit operator bool() const noexcept
    {
        return false
            || human
            || src
            || iquote
            || includes_hash
            || src_output_file
            || cpp_cache_file
            || obj_hash
            || obj_cache_file
            || tmp_file
            || cache_cleanup
            || hacks
            || testsuite_units
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Timespec
                                #define DEF_s_Timespec
struct s_Timespec
{
    unsigned sec;
    unsigned nsec;
    explicit operator bool() const noexcept
    {
        return false
            || sec
            || nsec
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Stat
                                #define DEF_s_Stat
struct s_Stat
{
    int64_t size;
    s_Timespec atime;
    s_Timespec mtime;
    s_Timespec ctime;
    explicit operator bool() const noexcept
    {
        return false
            || size
            || atime
            || mtime
            || ctime
        ;
    }
};
                                #endif

                                #ifndef DEF_s_FileInvariants
                                #define DEF_s_FileInvariants
struct s_FileInvariants
{
    fu::str path;
    s_Stat stat;
    explicit operator bool() const noexcept
    {
        return false
            || path
            || stat
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

                                #ifndef DEF_s_Map_Xty3xLT6R3k
                                #define DEF_s_Map_Xty3xLT6R3k
struct s_Map_Xty3xLT6R3k
{
    s_Set_6ARmtH0K78f keys;
    fu::vec<uint64_t> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_DirWrk
                                #define DEF_s_DirWrk
struct s_DirWrk
{
    fu::str cpp;
    fu::str obj;
    fu::str bin;
    fu::str out;
    fu::str tmp;
    s_DirWrk(const s_DirWrk&) = delete;
    s_DirWrk(s_DirWrk&&) = default;
    s_DirWrk& operator=(const s_DirWrk&) = delete;
    s_DirWrk& operator=(s_DirWrk&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || cpp
            || obj
            || bin
            || out
            || tmp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BuildError
                                #define DEF_s_BuildError
struct s_BuildError
{
    int code;
    fu::str cpp;
    fu::str stdout;
    explicit operator bool() const noexcept
    {
        return false
            || code
            || cpp
            || stdout
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Signo
                                #define DEF_s_Signo
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_DEBUG_SCHEME
                                #define DEF_DEBUG_SCHEME
extern const s_BuildScheme DEBUG_SCHEME = s_BuildScheme((s_BuildScheme((s_BuildScheme_debuggable | s_BuildScheme_unoptimized)) | s_BuildScheme_assertions));
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

                                #ifndef DEF_find_2C20a41o6u3
                                #define DEF_find_2C20a41o6u3
inline int find_2C20a41o(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_5WUbOXwW(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
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

                                #ifndef DEF_find_tnDs1wBzL75
                                #define DEF_find_tnDs1wBzL75
inline int find_tnDs1wBz(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_yP7FbxFZ(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF___r0PfTUj3G5c
                                #define DEF___r0PfTUj3G5c
inline static fu::view<fu::str> _r0PfTUj3(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
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

static int exec_uGHE7p6t(const fu::str& cmd, fu::str& stdout)
{
    s_ExitStatus status = 0;
    s_Errno err {};
    if (has_nst65ofM(cmd, "$("_fu))
    {
        /*MOV*/ fu::str cmd_1 = replace_EgBUdXNI(replace_EgBUdXNI(cmd, "$"_fu, "\\$"_fu), "\\$("_fu, "$("_fu);
        err = exec_G82RIYwh(static_cast<fu::str&&>(cmd_1), status, stdout);
    }
    else
        err = spawn_0Hw8DqUB(split_i9NDBTFi(cmd, ' '), stdout, stdout, status, false);

    int _0 {};
    return (_0 = int(err)) ? _0 : int(status);
}

                                #ifndef DEF_ends_AbHOxjqnKH3
                                #define DEF_ends_AbHOxjqnKH3
inline bool ends_AbHOxjqn(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu::str gcc_version_uGHE7p6t()
{
    /*MOV*/ fu::str stdout {};
    const int code = exec_uGHE7p6t("gcc --version"_fu, stdout);
    if (code)
    {
        if (stdout)
            stdout += (ends_AbHOxjqn(stdout, '\n') ? "\n"_fu : "\n\n"_fu);

        stdout += (x7E_3lDd4lqo("NON-ZERO EXIT CODE: "_fu, fu::i64dec(code)) + "\n"_fu);
    };
    return /*NRVO*/ stdout;
}

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

s_BuildScheme tryGetScheme_uGHE7p6t(fu::view<char> name)
{
    if (name == "debug"_fu)
        return DEBUG_SCHEME;
    else if (name == "reldeb"_fu)
        return s_BuildScheme_debuggable;
    else if (name == "retail"_fu)
        return s_BuildScheme_TODO_FIX_retail;
    else
    {
        return s_BuildScheme{};
    };
}

                                #ifndef DEF_if_last_fWHNFvAM0jc
                                #define DEF_if_last_fWHNFvAM0jc
inline char if_last_fWHNFvAM(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

[[noreturn]] static fu::never fail_uGHE7p6t(const fu::str& reason)
{
    fu::fail(fu::str(reason));
}

static const fu::str TODO_FIX_ignoredWarnings fu_INIT_PRIORITY(1006) = ((((""_fu + "-Wno-float-conversion "_fu) + "-Wno-unused-but-set-variable "_fu) + "-Wno-unknown-warning-option "_fu) + "-Wno-maybe-uninitialized -Wno-stringop-overflow -Wno-array-bounds -Wno-sequence-point -Wno-dangling-reference "_fu);

                                #ifndef DEF___gNrQ09Isohb
                                #define DEF___gNrQ09Isohb
inline static int _gNrQ09Is()
{
    return -1;
}
                                #endif

                                #ifndef DEF_map_ArfWmIVplQf
                                #define DEF_map_ArfWmIVplQf
inline fu::vec<int> map_ArfWmIVp(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<int> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _gNrQ09Is();

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_starts_8EDTwZj1Fm2
                                #define DEF_starts_8EDTwZj1Fm2
inline bool starts_8EDTwZj1(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_bfind_zHdfZW2AP8j
                                #define DEF_bfind_zHdfZW2AP8j
inline static int bfind_zHdfZW2A(fu::view<fu::str> keys_asc, fu::view<char> key, s_Set_6ARmtH0K78f& _, const fu::str& key_1, fu::vec<uint64_t>& values)
{
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    values.insert(i, uint64_t{});
    _.keys_asc.insert(i, fu::str(key_1));
    return i;
}
                                #endif

                                #ifndef DEF_ref_TUspgpK6Tka
                                #define DEF_ref_TUspgpK6Tka
inline uint64_t& ref_TUspgpK6(s_Set_6ARmtH0K78f& _, const fu::str& key, fu::vec<uint64_t>& values)
{
    const int idx = bfind_zHdfZW2A(_.keys_asc, key, _, key, values);
    return values.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_tkDD8sFEqZ8
                                #define DEF_ref_tkDD8sFEqZ8
inline uint64_t& ref_tkDD8sFE(s_Map_Xty3xLT6R3k& _, const fu::str& key)
{
    return ref_TUspgpK6(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF___9fhUKoAa51e
                                #define DEF___9fhUKoAa51e
[[noreturn]] inline static fu::never _9fhUKoAa(fu::view<char> reason, const fu::str& include)
{
    fail_uGHE7p6t(((("Failed to hash the #includes of:\n\t"_fu + qID_e44UlzzA(include)) + "\n\n\t"_fu) + reason));
}
                                #endif

                                #ifndef DEF___wAsT5TVhg8f
                                #define DEF___wAsT5TVhg8f
inline static void _wAsT5TVh(const fu::str& match, const bool first, const fu::str& path, s_TEA& hash_all, const fu::str& include, fu::vec<s_FileInvariants>& file_invariants, s_Map_Xty3xLT6R3k& include_hashes)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};

    if (!(first))
    {
        int trimLeft = 0;
        for (int i = 0; i < match.size(); i++)
        {
            if (match[i] > ' ')
            {
                trimLeft = i;
                break;
            };
        };
        fu::str match_1 = fu::slice(match, trimLeft);
        const char lead = ((match_1.size() > 2) ? match_1[0] : char{});
        fu::never BL_5_v {};
        const char endChar = ((lead == '"') ? '"' : ((lead == '<') ? '>' : (__extension__ (
        {
            fu::str reason = ((("no leading "_fu + qKW_e44UlzzA("\""_fu)) + " or "_fu) + qKW_e44UlzzA("<"_fu));
            const int firstNewline = find_yP7FbxFZ(match, '\n');
            /*MOV*/ fu::str match_2 = ((firstNewline > 0) ? fu::slice(match, 0, firstNewline) : fu::str(match));
            fu::str match_3 = ((match_2.size() > 90) ? fu::slice(match_2, 0, 80) : static_cast<fu::str&&>(match_2));
            fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ((((("  FISHY #include in "_fu + path) + " ("_fu) + reason) + "):\n\n"_fu) + qBAD_e44UlzzA(match_3)), x)) }));
            return;
        (void)0;}), static_cast<fu::never&&>(BL_5_v))));
        for (int i_1 = 1; i_1 < match_1.size(); i_1++)
        {
            const char c = match_1[i_1];
            if ((c <= ' '))
            {
                fu::str reason_1 = "contains whitespace"_fu;
                const int firstNewline_1 = find_yP7FbxFZ(match, '\n');
                /*MOV*/ fu::str match_4 = ((firstNewline_1 > 0) ? fu::slice(match, 0, firstNewline_1) : fu::str(match));
                fu::str match_5 = ((match_4.size() > 90) ? fu::slice(match_4, 0, 80) : static_cast<fu::str&&>(match_4));
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_1 = ((((("  FISHY #include in "_fu + path) + " ("_fu) + reason_1) + "):\n\n"_fu) + qBAD_e44UlzzA(match_5)), x_1)) }));
                return;
            }
            else if (c == endChar)
            {
                fu::str include_1 = fu::slice(match_1, 0, (i_1 + 1));
                hash_qRo1x0wq(hash_all, visitInclude_uGHE7p6t(include_1, path, include, file_invariants, include_hashes));
                return;
            };
        };
        fu::str reason_2 = ("no trailing "_fu + qKW_e44UlzzA((endChar + ""_fu)));
        const int firstNewline_2 = find_yP7FbxFZ(match, '\n');
        /*MOV*/ fu::str match_6 = ((firstNewline_2 > 0) ? fu::slice(match, 0, firstNewline_2) : fu::str(match));
        fu::str match_7 = ((match_6.size() > 90) ? fu::slice(match_6, 0, 80) : static_cast<fu::str&&>(match_6));
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_2 = ((((("  FISHY #include in "_fu + path) + " ("_fu) + reason_2) + "):\n\n"_fu) + qBAD_e44UlzzA(match_7)), x_2)) }));
    };
}
                                #endif

                                #ifndef DEF_split_ul5KEy3aoKa
                                #define DEF_split_ul5KEy3aoKa
inline void split_ul5KEy3a(const fu::str& str, fu::view<char> sep, const fu::str& path, s_TEA& hash_all, const fu::str& include, fu::vec<s_FileInvariants>& file_invariants, s_Map_Xty3xLT6R3k& include_hashes)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = find_2C20a41o(str, sep, last)) >= 0))
        {
            _wAsT5TVh(fu::slice(str, last, next), !last, path, hash_all, include, file_invariants, include_hashes);
            last = (next + N);
        };
    };
    if (last)
        _wAsT5TVh(fu::slice(str, last), false, path, hash_all, include, file_invariants, include_hashes);
    else
        _wAsT5TVh(str, true, path, hash_all, include, file_invariants, include_hashes);

}
                                #endif

static s_TEA parseIncludes_uGHE7p6t(const fu::str& path, const fu::str& src, const fu::str& include, fu::vec<s_FileInvariants>& file_invariants, s_Map_Xty3xLT6R3k& include_hashes)
{
    s_TEA hash_all {};
    split_ul5KEy3a(src, "#include"_fu, path, hash_all, include, file_invariants, include_hashes);
    return hash_all;
}

static uint64_t tryFollow_uGHE7p6t(fu::view<char> dir, const fu::str& file, const fu::str& include, fu::vec<s_FileInvariants>& file_invariants, s_Map_Xty3xLT6R3k& include_hashes)
{
    fu::str path = join_qZI0kCzt(dir, file);
    uint64_t& hash = ref_tkDD8sFE(include_hashes, path);
    if (hash)
        return hash;
    else
    {
        s_Stat stat {};
        if (const s_Errno err = stat_VWJwj7Fs(fu::str(path), stat))
            _9fhUKoAa(((qBAD_e44UlzzA(x7E_3lDd4lqo("E"_fu, fu::i64dec(err))) + " while attempting to stat: "_fu) + qBAD_e44UlzzA(path)), include);
        else
        {
            file_invariants += s_FileInvariants { fu::str(path), s_Stat(stat) };
            fu::str src {};
            if (const s_Errno err_1 = read_VWJwj7Fs(fu::str(path), src, 0ll))
                _9fhUKoAa(((qBAD_e44UlzzA(x7E_3lDd4lqo("E"_fu, fu::i64dec(err_1))) + " while attempting to read: "_fu) + qBAD_e44UlzzA(path)), include);
            else
            {
                uint64_t BL_7_v {};
                const uint64_t hash_1 = (hash = (__extension__ (
                {
                    const s_TEA tea = hash_s9RCxn8L(src);
                    BL_7_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
                (void)0;}), BL_7_v));
                s_TEA hash_deep = parseIncludes_uGHE7p6t(path, src, include, file_invariants, include_hashes);
                if (hash_deep)
                {
                    uint64_t& hash_2 = ref_tkDD8sFE(include_hashes, path);
                    hash_qRo1x0wq(hash_deep, hash_2);
                    uint64_t BL_9_v {};
                    return (hash_2 = (__extension__ (
                    {
                        const s_TEA& tea = hash_deep;
                        BL_9_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
                    (void)0;}), BL_9_v));
                }
                else
                    return hash_1;

            };
        };
    };
}

                                #ifndef DEF_starts_hRi5tkxndc1
                                #define DEF_starts_hRi5tkxndc1
inline bool starts_hRi5tkxn(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF_FU_INCLUDE
                                #define DEF_FU_INCLUDE
extern const fu::str FU_INCLUDE;
                                #endif

static uint64_t visitInclude_uGHE7p6t(const fu::str& include, const fu::str& start_fname, const fu::str& include_1, fu::vec<s_FileInvariants>& file_invariants, s_Map_Xty3xLT6R3k& include_hashes)
{
    fu::str f = fu::slice(include, 1, (include.size() - 1));
    if (starts_8EDTwZj1(include, '"'))
        return tryFollow_uGHE7p6t(dirname_qZI0kCzt(start_fname), f, include_1, file_invariants, include_hashes);
    else if (starts_hRi5tkxn(include, "<fu/"_fu))
        return tryFollow_uGHE7p6t(FU_INCLUDE, f, include_1, file_invariants, include_hashes);
    else
        return 0ull;

}

static uint64_t getIncludeHash_uGHE7p6t(const fu::str& include, const fu::str& start_fname, fu::vec<s_FileInvariants>& file_invariants, s_Map_Xty3xLT6R3k& include_hashes)
{
    return visitInclude_uGHE7p6t(include, start_fname, include, file_invariants, include_hashes);
}

                                #ifndef DEF_add_dpiw9mqTHbk
                                #define DEF_add_dpiw9mqTHbk
inline void add_dpiw9mqT(fu::vec<fu::str>& a, fu::view<fu::str> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        fu::view<char> X = a[x];
        const fu::str& Y = b[y];
        const int cmp = x3Cx3E_bv5nK4Kl(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, fu::str(Y));
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

                                #ifndef DEF_add_eHVOG4piV4k
                                #define DEF_add_eHVOG4piV4k
inline bool add_eHVOG4pi(s_Set_6ARmtH0K78f& _, const fu::str& key)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, fu::str(key));
    return true;
}
                                #endif

                                #ifndef DEF___xOTTtEfS0z0
                                #define DEF___xOTTtEfS0z0
inline static bool _xOTTtEfS(const fu::str& incl, s_TranslationUnit& unit, fu::view<char> dir)
{
    return add_eHVOG4pi(unit.hacks.include_dirs, (starts_8EDTwZj1(incl, '.') ? join_qZI0kCzt(dir, incl) : fu::str(incl)));
}
                                #endif

                                #ifndef DEF_each_nntEIc70r18
                                #define DEF_each_nntEIc70r18
inline void each_nntEIc70(fu::view<fu::str> a, s_TranslationUnit& unit, fu::view<char> dir)
{
    for (int i = 0; i < a.size(); i++)
        _xOTTtEfS(a[i], unit, dir);

}
                                #endif

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif

static s_DirWrk DirWrk_uGHE7p6t(fu::view<char> dir_wrk)
{
    /*MOV*/ s_DirWrk ret = s_DirWrk { (dir_wrk + "cpp/"_fu), (dir_wrk + "obj/"_fu), (dir_wrk + "bin/"_fu), (dir_wrk + "out/"_fu), (dir_wrk + "tmp/"_fu) };

    {
        mkdir_p_5u3xiGA0(fu::str(ret.cpp), RWX_RWX_RWX);
        mkdir_p_5u3xiGA0(fu::str(ret.obj), RWX_RWX_RWX);
        mkdir_p_5u3xiGA0(fu::str(ret.bin), RWX_RWX_RWX);
        mkdir_p_5u3xiGA0(fu::str(ret.out), RWX_RWX_RWX);
        mkdir_p_5u3xiGA0(fu::str(ret.tmp), RWX_RWX_RWX);
    };
    return /*NRVO*/ ret;
}

static void try_unlink_uGHE7p6t(const fu::str& path)
{
    // Hoisted:
    fu::str x {};

    if (path)
    {
        const s_Errno err = unlink_VWJwj7Fs(fu::str(path));
        if (err)
        {
            fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = (((" UNLINK "_fu + qBAD_e44UlzzA(x7E_3lDd4lqo("E"_fu, fu::i64dec(err)))) + " "_fu) + path), x)) }));
        };
    };
}

                                #ifndef DEF___lZfmLzfl157
                                #define DEF___lZfmLzfl157
inline static void _lZfmLzfl(const fu::str& flag, const fu::str& lib, s_Set_6ARmtH0K78f& HACK_linkFlags, s_Set_6ARmtH0K78f& HACK_pkgConfig_libs)
{
    if (flag)
        add_eHVOG4pi(HACK_linkFlags, flag);
    else if (lib)
        add_eHVOG4pi(HACK_pkgConfig_libs, lib);

}
                                #endif

                                #ifndef DEF_link_each_pqmgoSko6Zb
                                #define DEF_link_each_pqmgoSko6Zb
inline static void link_each_pqmgoSko(const s_Set_6ARmtH0K78f& link, s_Set_6ARmtH0K78f& HACK_linkFlags, s_Set_6ARmtH0K78f& HACK_pkgConfig_libs)
{
    for (int i = 0; i < link.keys_asc.size(); i++)
    {
        const fu::str* BL_3_v;
        const fu::str& item = (__extension__ (
        {
            const int i_1 = i;
            BL_3_v = &(link.keys_asc[i_1]);
        (void)0;}), *BL_3_v);
        const bool isFlag = starts_8EDTwZj1(item, '-');
        _lZfmLzfl((isFlag ? item : (*(const fu::str*)fu::NIL)), (!isFlag ? item : (*(const fu::str*)fu::NIL)), HACK_linkFlags, HACK_pkgConfig_libs);
    };
}
                                #endif

                                #ifndef DEF___IKjExAQebTg
                                #define DEF___IKjExAQebTg
inline static void _IKjExAQe(const s_TranslationUnit& unit, s_Set_6ARmtH0K78f& HACK_linkFlags, s_Set_6ARmtH0K78f& HACK_pkgConfig_libs, s_Set_6ARmtH0K78f& HACK_include_dirs, int& len_all, s_TEA& hash_all)
{
    len_all += unit.src.size();
    hash_lweHUmk8(hash_all, unit.obj_hash);
    add_dpiw9mqT(HACK_include_dirs.keys_asc, unit.hacks.include_dirs.keys_asc);
    link_each_pqmgoSko(unit.hacks.link, HACK_linkFlags, HACK_pkgConfig_libs);
}
                                #endif

                                #ifndef DEF_each_N5ic0wYncw1
                                #define DEF_each_N5ic0wYncw1
inline void each_N5ic0wYn(fu::view<s_TranslationUnit> a, s_Set_6ARmtH0K78f& HACK_linkFlags, s_Set_6ARmtH0K78f& HACK_pkgConfig_libs, s_Set_6ARmtH0K78f& HACK_include_dirs, int& len_all, s_TEA& hash_all)
{
    for (int i = 0; i < a.size(); i++)
        _IKjExAQe(a[i], HACK_linkFlags, HACK_pkgConfig_libs, HACK_include_dirs, len_all, hash_all);

}
                                #endif

                                #ifndef DEF_join_LLExut74nSd
                                #define DEF_join_LLExut74nSd
inline fu::str join_LLExut74(fu::view<fu::str> a, const char sep)
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
        const int N = 1;
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
            res.mutref(size) = sep;
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
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

static fu::str tmpfile_uGHE7p6t(const s_DirWrk& dir_wrk)
{
    /*MOV*/ fu::str fname { dir_wrk.tmp };
    uint64_t r = next_u64_qB1H6Wbg();
    for (int i = 0; i < 8; i++)
    {
        const uint64_t v = (r & 0x1full);
        fname += char(((v < 10ull) ? (int(fu::u8('0')) + int(unsigned(v))) : ((int(fu::u8('a')) + int(unsigned(v))) - 10)));
        r >>= 5ull;
    };
    return /*NRVO*/ fname;
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

static s_Errno atomic_write_uGHE7p6t(const fu::str& fname, fu::view<char> data, const s_DirWrk& dir_wrk)
{
    /*MOV*/ fu::str tmp = tmpfile_uGHE7p6t(dir_wrk);
    s_Errno _0 {};
    const s_Errno err = ((_0 = write_VWJwj7Fs(fu::str(tmp), data, RW_RW_RW)) ? _0 : rename_VWJwj7Fs(fu::str(tmp), fu::str(fname)));
    if (err)
        unlink_VWJwj7Fs(static_cast<fu::str&&>(tmp));

    return err;
}

                                #ifndef DEF___lTE1hhL13sa
                                #define DEF___lTE1hhL13sa
inline static void _lTE1hhL1(fu::view<char> lib, fu::str& HACK_pkgConfig_cflags)
{
    if (!(!lib))
    {
        if (!HACK_pkgConfig_cflags)
            HACK_pkgConfig_cflags = " $(pkg-config --cflags"_fu;

        HACK_pkgConfig_cflags += (HACK_pkgConfig_cflags ? " "_fu : " $(pkg-config --cflags "_fu);
        HACK_pkgConfig_cflags += lib;
    };
}
                                #endif

                                #ifndef DEF_link_each_tWscEY1yeR3
                                #define DEF_link_each_tWscEY1yeR3
inline static void link_each_tWscEY1y(const s_Set_6ARmtH0K78f& link, fu::str& HACK_pkgConfig_cflags)
{
    for (int i = 0; i < link.keys_asc.size(); i++)
    {
        fu::view<char> BL_3_v {};
        fu::view<char> item = (__extension__ (
        {
            const int i_1 = i;
            BL_3_v = (link.keys_asc[i_1]);
        (void)0;}), static_cast<fu::view<char>&&>(BL_3_v));
        const bool isFlag = starts_8EDTwZj1(item, '-');
        _lTE1hhL1((!isFlag ? item : fu::view<char>{}), HACK_pkgConfig_cflags);
    };
}
                                #endif

                                #ifndef DEF_ends_JkFJYOhRS8a
                                #define DEF_ends_JkFJYOhRS8a
inline bool ends_JkFJYOhR(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static s_BuildError buildUnit_uGHE7p6t(s_TranslationUnit& unit, const int i, const s_RunMode runmode, const s_BuildScheme bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const s_DirWrk& dir_wrk)
{
    // Hoisted:
    fu::str x {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_5 {};
    fu::str x_6 {};
    fu::str x_7 {};

    const fu::str& F_cpp = unit.cpp_cache_file;
    const fu::str& F_obj = unit.obj_cache_file;
    if (!F_cpp || !F_obj)
    {
        return s_BuildError{};
    }
    else if ((size_VWJwj7Fs(fu::str(F_obj)) > 0ll) && !s_BuildScheme((bscheme & s_BuildScheme_nocache)))
    {
        return s_BuildError{};
    }
    else
    {
        unit.tmp_file = tmpfile_uGHE7p6t(dir_wrk);
        unit.cache_cleanup |= s_CacheCleanup_Cpp;
        const fu::str& cpp = unit.src;
        atomic_write_uGHE7p6t(F_cpp, cpp, dir_wrk);
        const fu::str* BL_4_v;
        fu::println((fu::slate<4, fu::str> { static_cast<fu::str&&>((x = "  BUILD "_fu, x)), fu::str((__extension__ (
        {
            const fu::str& x_1 = unit.human;
            BL_4_v = &(x_1);
        (void)0;}), *BL_4_v)), static_cast<fu::str&&>((x_2 = " "_fu, x_2)), fu::str(F_cpp) }));
        const double t0 = hr_0pZhUWR4();
        fu::str HACK_pkgConfig_cflags {};
        link_each_tWscEY1y(unit.hacks.link, HACK_pkgConfig_cflags);
        if (HACK_pkgConfig_cflags)
            HACK_pkgConfig_cflags += ")"_fu;

        fu::str INCLUDE_1 = (INCLUDE + HACK_pkgConfig_cflags);
        fu::str INCLUDE_2 = (INCLUDE_1 + (unit.iquote ? (" -iquote "_fu + unit.iquote) : fu::str{}));
        fu::str TODO_FIX_define_fu_TESTSUITE = (ends_JkFJYOhR(F_obj, ".o.testsuite"_fu) ? "-Dfu_TESTSUITE "_fu : fu::str{});
        fu::str CMD = (((((((GCC_CMD + TODO_FIX_define_fu_TESTSUITE) + "-c"_fu) + INCLUDE_2) + " -o "_fu) + unit.tmp_file) + " "_fu) + F_cpp);
        /*MOV*/ fu::str stdout {};
        const int code = exec_uGHE7p6t(CMD, stdout);
        if (code)
        {
            return s_BuildError { code, fu::str(cpp), static_cast<fu::str&&>(stdout) };
        }
        else
        {
            if ((runmode == s_RunMode_CompilerTestcase) && (i > 0))
                unit.cache_cleanup |= s_CacheCleanup_Obj;

            const double t1 = hr_0pZhUWR4();
            const fu::str* BL_9_v;
            fu::println((fu::slate<5, fu::str> { static_cast<fu::str&&>((x_3 = "     OK "_fu, x_3)), fu::str((__extension__ (
            {
                const fu::str& x_4 = unit.human;
                BL_9_v = &(x_4);
            (void)0;}), *BL_9_v)), static_cast<fu::str&&>((x_5 = " "_fu, x_5)), static_cast<fu::str&&>((x_6 = fu::f64dec((t1 - t0)), x_6)), static_cast<fu::str&&>((x_7 = "s"_fu, x_7)) }));
            return s_BuildError{};
        };
    };
}

                                #ifndef DEF___n18rv4sdpog
                                #define DEF___n18rv4sdpog
inline static const s_BuildError& _n18rv4sd(const int i, fu::view_mut<s_TranslationUnit> arr, fu::view_mut<s_BuildError> result, const s_RunMode runmode, const s_BuildScheme bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const s_DirWrk& dir_wrk)
{
    s_TranslationUnit* _0;
    return (result.mutref(i) = (_0 = &(arr.mutref(i)), buildUnit_uGHE7p6t(*_0, i, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk)));
}
                                #endif

                                #ifndef DEF_parallel_for_1vUM1vK5cOf
                                #define DEF_parallel_for_1vUM1vK5cOf
inline static void parallel_for_1vUM1vK5(const int min, int end, fu::view_mut<s_TranslationUnit> arr, fu::view_mut<s_BuildError> result, const s_RunMode runmode, const s_BuildScheme bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const s_DirWrk& dir_wrk)
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
        _n18rv4sd(i, arr, result, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk);

    });

}
                                #endif

                                #ifndef DEF_map_XtjIdlAKh22
                                #define DEF_map_XtjIdlAKh22
inline fu::vec<s_BuildError> map_XtjIdlAK(fu::view_mut<s_TranslationUnit> arr, const int min, const s_RunMode runmode, const s_BuildScheme bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const s_DirWrk& dir_wrk)
{
    /*MOV*/ fu::vec<s_BuildError> result {};
    result.grow<false>(arr.size());
    parallel_for_1vUM1vK5(min, arr.size(), arr, result, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF___FGDKtsfi0U4
                                #define DEF___FGDKtsfi0U4
inline static s_CacheCleanup _FGDKtsfi(s_TranslationUnit& unit)
{
    return (unit.cache_cleanup &= s_CacheCleanup(~s_CacheCleanup_Cpp));
}
                                #endif

                                #ifndef DEF_each_w3Xd7S1yARd
                                #define DEF_each_w3Xd7S1yARd
inline void each_w3Xd7S1y(fu::view_mut<s_TranslationUnit> a)
{
    for (int i = 0; i < a.size(); i++)
        _FGDKtsfi(a.mutref(i));

}
                                #endif

                                #ifndef DEF___rlPQWbbXmM8
                                #define DEF___rlPQWbbXmM8
inline static void _rlPQWbbX(const s_TranslationUnit& unit, const int i, fu::str& explain, fu::view<s_TranslationUnit> units, const s_RunMode runmode)
{
    if (!((runmode == s_RunMode_Testsuite) && (i != (units.size() - 1))))
        explain += (unit.human + "\n"_fu);

}
                                #endif

                                #ifndef DEF_each_BMhJqjp6qC6
                                #define DEF_each_BMhJqjp6qC6
inline void each_BMhJqjp6(fu::view<s_TranslationUnit> a, fu::str& explain, fu::view<s_TranslationUnit> units, const s_RunMode runmode)
{
    for (int i = 0; i < a.size(); i++)
        _rlPQWbbX(a[i], i, explain, units, runmode);

}
                                #endif

static void ensureOneEmptyLine_uGHE7p6t(fu::str& explain)
{
    if (explain && !ends_JkFJYOhR(explain, "\n\n"_fu))
        explain += (ends_AbHOxjqn(explain, '\n') ? "\n"_fu : "\n\n"_fu);

}

                                #ifndef DEF___AvDFh8NMYO4
                                #define DEF___AvDFh8NMYO4
inline static fu::view<char> _AvDFh8NM(const s_TranslationUnit& unit, fu::str& explain)
{
    return (explain += unit.src);
}
                                #endif

                                #ifndef DEF_each_2gUq9CprqZ6
                                #define DEF_each_2gUq9CprqZ6
inline void each_2gUq9Cpr(fu::view<s_TranslationUnit> a, fu::str& explain)
{
    for (int i = 0; i < a.size(); i++)
        _AvDFh8NM(a[i], explain);

}
                                #endif

[[noreturn]] static fu::never ERR_uGHE7p6t(fu::str&& cpp, fu::view_mut<s_TranslationUnit> units, const s_DEV_OnFail onfail, const s_RunMode runmode, const int code, fu::view<char> stdout, const s_DirWrk& dir_wrk)
{
    // Hoisted:
    fu::str x {};

    each_w3Xd7S1y(units);
    if (onfail & s_DEV_OnFail_OnFail_WriteRepro)
    {
        if (!cpp)
        {
            for (int i = units.size(); i-- > 0; )
            {
                const s_TranslationUnit& unit = units[i];
                if (unit.cpp_cache_file)
                    cpp += (("#include \""_fu + unit.cpp_cache_file) + "\"\n"_fu);

            };
        };
        fu::str fname = (dir_wrk.cpp + "failing-testcase.cpp"_fu);
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("  WRITE "_fu + fname), x)) }));
        atomic_write_uGHE7p6t(fname, cpp, dir_wrk);
    };
    fu::str explain = ""_fu;
    if (onfail & s_DEV_OnFail_OnFail_PrintInput)
    {
        explain += ((runmode == s_RunMode_CompilerTestcase) ? "COMPILER BUG or INCORRECT TESTCASE:\n\n"_fu : "Testsuite failed: "_fu);
        each_BMhJqjp6(units, explain, units, runmode);
    };
    if (stdout)
        ensureOneEmptyLine_uGHE7p6t(explain);

    explain += stdout;
    if (onfail & s_DEV_OnFail_OnFail_PrintOutput)
    {
        ensureOneEmptyLine_uGHE7p6t(explain);
        explain += "\tGenerated code:\n\n"_fu;
        each_2gUq9Cpr(units, explain);
    };
    ensureOneEmptyLine_uGHE7p6t(explain);
    explain += x7E_3lDd4lqo("   EXIT code: "_fu, fu::i64dec(code));
    fail_uGHE7p6t(explain);
}

                                #ifndef DEF_x3Cx3E_F82w14kIpjk
                                #define DEF_x3Cx3E_F82w14kIpjk
inline int x3Cx3E_F82w14kI(const unsigned a, const unsigned b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_B3n7QuP7zGb
                                #define DEF_x3Cx3E_B3n7QuP7zGb
inline int x3Cx3E_B3n7QuP7(const s_Timespec& a, const s_Timespec& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_F82w14kI(a.sec, b.sec)))
        return cmp;
    else if ((cmp = x3Cx3E_F82w14kI(a.nsec, b.nsec)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x21x3D_YVt3H68XC75
                                #define DEF_x21x3D_YVt3H68XC75
inline bool operator!=(const s_Timespec& a, const s_Timespec& b)
{
    return !!x3Cx3E_B3n7QuP7(a, b);
}
                                #endif

                                #ifndef DEF___mBQGHf38J99
                                #define DEF___mBQGHf38J99
inline static void _mBQGHf38(const s_FileInvariants& file_invariant)
{
    const s_Stat& expect = file_invariant.stat;
    s_Stat actual {};
    const s_Errno err = stat_VWJwj7Fs(fu::str(file_invariant.path), actual);
    if (err || (actual.size != expect.size) || (actual.mtime != expect.mtime))
        fail_uGHE7p6t((((("Header crosscheck failed for:"_fu + "\n\t"_fu) + file_invariant.path) + "\n\n\tError: "_fu) + (err ? qBAD_e44UlzzA(x7E_3lDd4lqo("E"_fu, fu::i64dec(err))) : "mtime changed."_fu)));

}
                                #endif

                                #ifndef DEF_each_TeXI2P0Aatd
                                #define DEF_each_TeXI2P0Aatd
inline void each_TeXI2P0A(fu::view<s_FileInvariants> a)
{
    for (int i = 0; i < a.size(); i++)
        _mBQGHf38(a[i]);

}
                                #endif

static void crosscheckHeaders_beforePersistingTempObjects_uGHE7p6t(fu::view<s_FileInvariants> file_invariants, int& _didCrosscheckHeaders)
{
    if (!(_didCrosscheckHeaders++))
        each_TeXI2P0A(file_invariants);

}

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif

static void READ_cachedTestOutput_uGHE7p6t(fu::str& stdout, const fu::str& F_exe, s_TestOutput& output, const fu::str& READ_LAZILY, s_ExitStatus& status)
{
    fu::str src {};
    read_VWJwj7Fs(fu::str(F_exe), src, 0ll);
    output = parse_6GsP67je(src);
    status = output.status;
    stdout = READ_LAZILY;
}

static void WRITE_cachedTestOutput_uGHE7p6t(fu::view<char> stdout, const fu::str& F_exe, const s_TestOutput& output, const fu::str& F_out, const s_DirWrk& dir_wrk)
{
    fu::str out = serialize_6GsP67je(output);
    if (out.size() == 20)
    {
        atomic_write_uGHE7p6t(F_exe, out, dir_wrk);
        if (stdout)
            atomic_write_uGHE7p6t(F_out, stdout, dir_wrk);

    }
    else
        fail_uGHE7p6t("TestOutput.len != 20"_fu);

}

static s_BuildOutput buildTarget_uGHE7p6t(fu::view_mut<s_TranslationUnit> units, fu::view<s_FileInvariants> file_invariants, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const s_DEV_OnFail onfail, const s_RunMode runmode, const int expect_exit, const s_BuildScheme bscheme, fu::view<char> GCC_CMD, const fu::str& bin, const s_Context& ctx, const s_DirWrk& dir_wrk)
{
    // Hoisted:
    fu::str x {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_4 {};
    fu::str x_5 {};
    fu::str x_6 {};
    fu::str x_7 {};
    fu::str x_8 {};
    fu::str x_9 {};
    fu::str x_10 {};
    fu::str x_11 {};
    fu::str x_12 {};

    fu_DEFER(for (int i = 0; i < units.size(); i++)
    {
        const s_TranslationUnit& unit = units[i];
        try_unlink_uGHE7p6t(unit.tmp_file);
        if (unit.cache_cleanup & s_CacheCleanup_Cpp)
            try_unlink_uGHE7p6t(unit.cpp_cache_file);

        if (unit.cache_cleanup & s_CacheCleanup_Obj)
            try_unlink_uGHE7p6t(unit.obj_cache_file);

    });
    s_Set_6ARmtH0K78f HACK_linkFlags {};
    s_Set_6ARmtH0K78f HACK_pkgConfig_libs {};
    s_Set_6ARmtH0K78f HACK_include_dirs {};
    int len_all {};
    s_TEA hash_all {};
    each_N5ic0wYn(units, HACK_linkFlags, HACK_pkgConfig_libs, HACK_include_dirs, len_all, hash_all);
    fu::str INCLUDE = (((((flags_cc ? (" "_fu + join_LLExut74(flags_cc, ' ')) : fu::str{}) + " -I "_fu) + ctx.fudir) + "include"_fu) + (HACK_include_dirs ? (" -I "_fu + join_roEBocCS(HACK_include_dirs.keys_asc, " -I "_fu)) : fu::str{}));
    fu::str LINK = (((flags_ld ? (" "_fu + join_LLExut74(flags_ld, ' ')) : fu::str{}) + (HACK_linkFlags ? (" "_fu + join_roEBocCS(HACK_linkFlags.keys_asc, " "_fu)) : fu::str{})) + (HACK_pkgConfig_libs ? ((" $(pkg-config --libs "_fu + join_roEBocCS(HACK_pkgConfig_libs.keys_asc, " "_fu)) + ")"_fu) : fu::str{}));
    if (s_BuildScheme((bscheme & s_BuildScheme_shared)) && (runmode != s_RunMode_Testsuite))
    {
        LINK += " -shared"_fu;
        fu::str soname = filename_qZI0kCzt(bin);
        if (fu::APPLE)
            LINK += (" -Wl,-install_name,@rpath/"_fu + soname);
        else
            LINK += (" -Wl,-soname,"_fu + soname);

    };
    len_all += LINK.size();
    hash_l6RUR9Sz(hash_all, LINK);
    int code {};
    fu::str stdout {};
    uint64_t BL_8_v {};
    fu::str F_exe = x7E_3lDd4lqo(((dir_wrk.bin + digest16_lweHUmk8((__extension__ (
    {
        const s_TEA& tea = hash_all;
        BL_8_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), BL_8_v), 0)) + "-"_fu), fu::i64dec(len_all));
    const int64_t old_size = (!(s_BuildScheme((bscheme & s_BuildScheme_nocache)) || ((runmode == s_RunMode_Testsuite) && s_BuildScheme((bscheme & s_BuildScheme_nocache_tests)))) ? size_VWJwj7Fs(fu::str(F_exe)) : 0ll);
    const int64_t old_size_1 = ((old_size != 4ll) ? old_size : 0ll);
    if ((old_size_1 < 1ll) && (bin || runmode))
    {
        fu::vec<s_BuildError> buildErrors = map_XtjIdlAK(units, int{}, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk);
        for (int i_1 = 0; i_1 < buildErrors.size(); i_1++)
        {
            const s_BuildError& err = buildErrors[i_1];
            if ((code = err.code))
            {
                stdout = err.stdout;
                ERR_uGHE7p6t(fu::str(err.cpp), units, onfail, runmode, code, stdout, dir_wrk);
            };
        };
        int _didCrosscheckHeaders {};
        for (int i_2 = 0; i_2 < units.size(); i_2++)
        {
            s_TranslationUnit& unit = units.mutref(i_2);
            if (unit.tmp_file)
            {
                crosscheckHeaders_beforePersistingTempObjects_uGHE7p6t(file_invariants, _didCrosscheckHeaders);
                const fu::str& from = unit.tmp_file;
                const fu::str& to = unit.obj_cache_file;
                const s_Errno err = rename_VWJwj7Fs(fu::str(from), fu::str(to));
                if (err)
                    fail_uGHE7p6t(((((("Build cache failed to move temporary:\n\t"_fu + from) + "\n\n\tto the object cache at:\n\t"_fu) + to) + "\n\n\tError: "_fu) + qBAD_e44UlzzA(x7E_3lDd4lqo("E"_fu, fu::i64dec(err)))));
                else
                    unit.tmp_file.clear();

            };
        };
        /*MOV*/ fu::str F_tmp = tmpfile_uGHE7p6t(dir_wrk);
        fu::str cmd = ((GCC_CMD + "-o "_fu) + F_tmp);
        for (int i_3 = 0; i_3 < units.size(); i_3++)
        {
            const s_TranslationUnit& unit = units[i_3];
            if (unit.obj_cache_file)
                cmd += (" "_fu + unit.obj_cache_file);

        };

        {
            const fu::str* BL_22_v;
            fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x = "   LINK "_fu, x)), fu::str(F_exe), fu::str((__extension__ (
            {
                const fu::str& x_1 = LINK;
                BL_22_v = &(x_1);
            (void)0;}), *BL_22_v)) }));
            const double t0 = hr_0pZhUWR4();
            fu::str CMD = (cmd + LINK);
            int _0 {};
            code = ((_0 = exec_uGHE7p6t(CMD, stdout)) ? _0 : (_0 = int(chmod_VWJwj7Fs(fu::str(F_tmp), RWX_RX_RX))) ? _0 : int(rename_VWJwj7Fs(static_cast<fu::str&&>(F_tmp), fu::str(F_exe))));
            if (code)
            {
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_2 = ((x7E_3lDd4lqo((("   FAIL "_fu + CMD) + " EXIT="_fu), fu::i64dec(code)) + "\n"_fu) + stdout), x_2)) }));
                ERR_uGHE7p6t(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
            }
            else
            {
                const double t1 = hr_0pZhUWR4();
                fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x_3 = "     OK "_fu, x_3)), static_cast<fu::str&&>((x_4 = fu::f64dec((t1 - t0)), x_4)), static_cast<fu::str&&>((x_5 = "s"_fu, x_5)) }));
            };
        };
        if (code)
        {
            ERR_uGHE7p6t(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
        };
    };
    s_TestOutput output {};
    if (runmode && (runmode != s_RunMode_EnsureExecutableButDontRun))
    {
        const bool OPTI_StatusCode = ((runmode == s_RunMode_CompilerTestcase) || (runmode == s_RunMode_Testsuite));
        /*MOV*/ fu::str F_out = (OPTI_StatusCode ? (dir_wrk.out + fu::get_view(F_exe, dir_wrk.bin.size())) : fu::str{});
        fu::str READ_LAZILY = "\read lazily"_fu;
        s_ExitStatus status {};
        stdout = ""_fu;
        if (OPTI_StatusCode && looks_legit_6GsP67je(old_size_1))
            READ_cachedTestOutput_uGHE7p6t(stdout, F_exe, output, READ_LAZILY, status);
        else
        {

            {
                fu::println((fu::slate<2, fu::str> { static_cast<fu::str&&>((x_6 = "    RUN "_fu, x_6)), fu::str(F_exe) }));
                const double t0_1 = hr_0pZhUWR4();
                code = int(spawn_0Hw8DqUB(fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(F_exe) } }, stdout, stdout, status, (runmode == s_RunMode_Normally)));
                output = from_6GsP67je(stdout, status);
                const double t1_1 = hr_0pZhUWR4();
                fu::println((fu::slate<6, fu::str> { static_cast<fu::str&&>((x_7 = "     OK "_fu, x_7)), static_cast<fu::str&&>((x_8 = fu::f64dec((t1_1 - t0_1)), x_8)), static_cast<fu::str&&>((x_9 = "s"_fu, x_9)), static_cast<fu::str&&>((x_10 = (signalled_BXrkWTfT(status) ? (x7E_3lDd4lqo(" signal("_fu, fu::i64dec(signal_BXrkWTfT(status))) + ")"_fu) : fu::str{}), x_10)), static_cast<fu::str&&>((x_11 = (exited_BXrkWTfT(status) ? (x7E_3lDd4lqo(" exit("_fu, fu::i64dec(exit_BXrkWTfT(status))) + ")"_fu) : fu::str{}), x_11)), static_cast<fu::str&&>((x_12 = (code ? (x7E_3lDd4lqo(" errno("_fu, fu::i64dec(code)) + ")"_fu) : fu::str{}), x_12)) }));
            };
            if (OPTI_StatusCode)
            {
                const int64_t new_size = size_VWJwj7Fs(fu::str(F_exe));
                if (looks_legit_6GsP67je(new_size))
                    READ_cachedTestOutput_uGHE7p6t(stdout, F_exe, output, READ_LAZILY, status);
                else if (!code)
                    WRITE_cachedTestOutput_uGHE7p6t(stdout, F_exe, output, F_out, dir_wrk);

            };
        };
        if (!code && !(exited_BXrkWTfT(status) && (exit_BXrkWTfT(status) == expect_exit)))
        {
            int _1 {};
            code = ((_1 = (exited_BXrkWTfT(status) ? exit_BXrkWTfT(status) : 0)) ? _1 : (_1 = (signalled_BXrkWTfT(status) ? int(signal_BXrkWTfT(status)) : 0)) ? _1 : (_1 = int(status)) ? _1 : -1);
        };
        if (OPTI_StatusCode && code && (stdout == READ_LAZILY))
        {
            stdout = ""_fu;
            read_VWJwj7Fs(static_cast<fu::str&&>(F_out), stdout, 0ll);
        };
    };
    if (code)
    {
        ERR_uGHE7p6t(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
    }
    else
    {
        if (bin)
        {
            mkdir_p_5u3xiGA0(dirname_qZI0kCzt(bin), RWX_RWX_RWX);
            code = int(rename_VWJwj7Fs(fu::str(F_exe), fu::str(bin)));
        };
        if (code)
        {
            ERR_uGHE7p6t(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
        }
        else
        {
            return s_BuildOutput { fu::str((bin ? bin : F_exe)), fu::vec<fu::str>{}, s_TestOutput(output) };
        };
    };
}

                                #ifndef DEF___55xEVzZfng5
                                #define DEF___55xEVzZfng5
inline static void _55xEVzZf(const s_FileInvariants& file_invariant, s_BuildOutput& ret)
{
    if (file_invariant.path)
        ret.watch_list += fu::str(file_invariant.path);

}
                                #endif

                                #ifndef DEF_each_FM1phmnRIQl
                                #define DEF_each_FM1phmnRIQl
inline void each_FM1phmnR(fu::view<s_FileInvariants> a, s_BuildOutput& ret)
{
    for (int i = 0; i < a.size(); i++)
        _55xEVzZf(a[i], ret);

}
                                #endif

                                #ifndef DEF_add_8Ex4HrqlBhg
                                #define DEF_add_8Ex4HrqlBhg
inline bool add_8Ex4Hrql(s_Set_95BJOojOc45& _, const int key)
{
    fu::view<int> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_XrkW2YUZ(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, key);
    return true;
}
                                #endif

                                #ifndef DEF___TTI8UF0LXll
                                #define DEF___TTI8UF0LXll
inline static void _TTI8UF0L(const int modid, fu::view<int> unit_indices, s_TranslationUnit& unit)
{
    const int unit_index = unit_indices[modid];
    if (!(unit_index < 0))
        add_8Ex4Hrql(unit.testsuite_units, unit_index);

}
                                #endif

                                #ifndef DEF_each_p2y6TLmieEh
                                #define DEF_each_p2y6TLmieEh
inline void each_p2y6TLmi(fu::view<int> a, fu::view<int> unit_indices, s_TranslationUnit& unit)
{
    for (int i = 0; i < a.size(); i++)
        _TTI8UF0L(a[i], unit_indices, unit);

}
                                #endif

                                #ifndef DEF___u3yOxTr8aa2
                                #define DEF___u3yOxTr8aa2
inline static const s_TranslationUnit& _u3yOxTr8(const int unit_index, fu::view<s_TranslationUnit> units)
{
    return units[unit_index];
}
                                #endif

                                #ifndef DEF_map_62tmPuJD212
                                #define DEF_map_62tmPuJD212
inline fu::vec<s_TranslationUnit> map_62tmPuJD(fu::view<int> a, fu::view<s_TranslationUnit> units)
{
    /*MOV*/ fu::vec<s_TranslationUnit> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = s_TranslationUnit(_u3yOxTr8(a[i], units));

    return /*NRVO*/ res;
}
                                #endif

static fu::str ensure_local_fname_uGHE7p6t(const fu::str& fname, fu::view<char> dir_src)
{
    if (starts_hRi5tkxn(fname, dir_src))
        return fu::str(fname);
    else
    {
        fu::str foreign = (dir_src + ".foreign/"_fu);
        mkdir_p_5u3xiGA0(fu::str(foreign), RWX_RWX_RWX);
        fu::str rel = replace_EgBUdXNI(replace_EgBUdXNI(relative_qZI0kCzt(dir_src, fname), "../"_fu, "up__"_fu), "/"_fu, "__"_fu);
        return foreign + rel;
    };
}

static fu::str update_file_dest_uGHE7p6t(const fu::str& fname, fu::view<char> dir_src, fu::view<char> dir_cpp)
{
    fu::str fname_1 = ensure_local_fname_uGHE7p6t(fname, dir_src);
    if (starts_hRi5tkxn(fname_1, dir_src))
        return dir_cpp + fu::slice(fname_1, dir_src.size());
    else
        fail_uGHE7p6t("ensure_local_fname broken"_fu);

}

                                #ifndef DEF_x21x3D_ExVC00HnUgl
                                #define DEF_x21x3D_ExVC00HnUgl
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

static const fu::str& update_file_IpIPbfWB(const fu::str& fname, fu::view<char> data, fu::view<char> dir_cpp, const s_DirWrk& dir_wrk)
{
    // Hoisted:
    fu::str x {};

    fu::str xcheck {};
    if (read_VWJwj7Fs(fu::str(fname), xcheck, 0ll) || (xcheck != data))
    {
        for (; ; )
        {
            const s_Errno err = atomic_write_uGHE7p6t(fname, data, dir_wrk);
            if (err)
            {
                if (err == ENOENT)
                {
                    int last = -1;
                    for (int i = (dir_cpp.size() + 1); i < fname.size(); i++)
                    {
                        if (fname[i] == '/')
                            last = i;

                    };
                    if ((last >= 0) && !mkdir_p_5u3xiGA0(fu::slice(fname, 0, (last + 1)), RWX_RWX_RWX))
                        continue;

                };
                fail_uGHE7p6t(x7E_3lDd4lqo((("Failed to write `"_fu + fname) + "`, error: #"_fu), fu::i64dec(err)));
            }
            else
            {
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("  WROTE "_fu + fname), x)) }));
                break;
            };
        };
    };
    return fname;
}

static fu::str update_file_uGHE7p6t(const fu::str& fname, fu::view<char> data, fu::view<char> dir_src, fu::view<char> dir_cpp, const s_DirWrk& dir_wrk)
{
    return static_cast<fu::str&&>(const_cast<fu::str&>(update_file_IpIPbfWB(update_file_dest_uGHE7p6t(fname, dir_src, dir_cpp), data, dir_cpp, dir_wrk)));
}

static fu::view<char> update_file_QLsA3QQQ(const fu::str& fname, fu::view<char> data, fu::view<char> dir_cpp, const s_DirWrk& dir_wrk)
{
    // Hoisted:
    fu::str x {};

    fu::str xcheck {};
    if (read_VWJwj7Fs(fu::str(fname), xcheck, 0ll) || (xcheck != data))
    {
        for (; ; )
        {
            const s_Errno err = atomic_write_uGHE7p6t(fname, data, dir_wrk);
            if (err)
            {
                if (err == ENOENT)
                {
                    int last = -1;
                    for (int i = (dir_cpp.size() + 1); i < fname.size(); i++)
                    {
                        if (fname[i] == '/')
                            last = i;

                    };
                    if ((last >= 0) && !mkdir_p_5u3xiGA0(fu::slice(fname, 0, (last + 1)), RWX_RWX_RWX))
                        continue;

                };
                fail_uGHE7p6t(x7E_3lDd4lqo((("Failed to write `"_fu + fname) + "`, error: #"_fu), fu::i64dec(err)));
            }
            else
            {
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("  WROTE "_fu + fname), x)) }));
                break;
            };
        };
    };
    return fname;
}

static void outputSources_uGHE7p6t(fu::view<s_TranslationUnit> units, fu::view<char> dir_src, const fu::str& dir_cpp, fu::view<char> unity, const s_DirWrk& dir_wrk)
{
    if (dir_cpp && dir_src)
    {
        mkdir_p_5u3xiGA0(fu::str(dir_cpp), RWX_RWX_RWX);
        fu::vec<fu::str> cpp_files {};
        for (int i = 1; i < units.size(); i++)
        {
            const s_TranslationUnit& unit = units[i];
            const fu::str& fname = (unit.src_output_file ? unit.src_output_file : fail_uGHE7p6t("Translation unit has no src_output_file."_fu));
            /*MOV*/ fu::str fname_1 = update_file_uGHE7p6t(fname, unit.src, dir_src, dir_cpp, dir_wrk);
            cpp_files.push(static_cast<fu::str&&>(fname_1));
        };
        if (unity)
        {
            fu::str data = (("#ifdef fu_UNITY_FULIB\n"_fu + "#include <fu/_fulib.cpp>\n"_fu) + "#endif\n\n"_fu);
            fu::str fname = (unity + ".unity.cpp"_fu);
            fu::str dest = update_file_dest_uGHE7p6t(fname, dir_src, dir_cpp);
            for (int i_1 = 0; i_1 < cpp_files.size(); i_1++)
            {
                if (const fu::str& incl = cpp_files[i_1])
                    data += (("#include \""_fu + relative_qZI0kCzt(dest, incl)) + "\"\n"_fu);

            };
            update_file_QLsA3QQQ(dest, data, dir_cpp, dir_wrk);
        };
    };
}

s_BuildOutput build_uGHE7p6t(fu::str&& dir_wrk, fu::str&& fulib, const fu::str& bin, fu::str&& dir_obj, fu::str&& dir_src, fu::str&& dir_cpp, fu::view<char> unity, const s_DEV_OnFail onfail, const s_RunMode runmode, const int expect_exit, const s_BuildScheme bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const s_Context& ctx)
{
    if (if_last_fWHNFvAM(dir_wrk) != '/')
    {
        if (dir_wrk)
            dir_wrk += '/';
        else
            fail_uGHE7p6t("No workspace directory provided."_fu);

    };
    if (dir_obj && (if_last_fWHNFvAM(dir_obj) != '/'))
        dir_obj += '/';

    if (dir_src && (if_last_fWHNFvAM(dir_src) != '/'))
        dir_src += '/';

    if (dir_cpp && (if_last_fWHNFvAM(dir_cpp) != '/'))
        dir_cpp += '/';

    fu::str O_lvl = (s_BuildScheme((bscheme & s_BuildScheme_unoptimized)) ? "-Og "_fu : "-O3 "_fu);
    if (!s_BuildScheme((bscheme & s_BuildScheme_assertions)))
        O_lvl += "-DNDEBUG "_fu;

    O_lvl += "-fno-math-errno "_fu;
    if (bscheme & s_BuildScheme_debuggable)
        O_lvl += "-g "_fu;

    if (bscheme & s_BuildScheme_TODO_FIX_retail)
        O_lvl += "-Dfu_RETAIL "_fu;

    O_lvl += "-fvisibility=hidden "_fu;
    if (s_BuildScheme((bscheme & s_BuildScheme_hotswap)) || s_BuildScheme((bscheme & s_BuildScheme_shared)))
        O_lvl += "-fPIC "_fu;

    if (s_BuildScheme((bscheme & s_BuildScheme_hotswap)) || s_BuildScheme((bscheme & s_BuildScheme_shared)))
        O_lvl += "-Dfu_HOTSWAP "_fu;

    fu::str GCChash = ("g++ -std=c++1z "_fu + O_lvl);
    fu::str GCC_CMD = ((((((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wdouble-promotion "_fu) + "-Wconversion -Wsign-conversion "_fu) + TODO_FIX_ignoredWarnings) + ((s_BuildScheme((bscheme & s_BuildScheme_hotswap)) && fu::APPLE) ? "-Wno-return-type-c-linkage "_fu : fu::str{})) + (fu::LINUX ? "-pthread -ldl "_fu : fu::str{}));
    const s_TEA GCChash_1 = hash_s9RCxn8L(GCChash);
    if (!(fulib))
        fulib = join_qZI0kCzt(ctx.fudir, (s_BuildScheme((bscheme & s_BuildScheme_hotswap)) ? "include/fu/_sharedlib.cpp"_fu : "include/fu/_fulib.cpp"_fu));

    /*MOV*/ fu::str fulib_cpp {};
    if (const s_Errno err = read_VWJwj7Fs(fu::str(fulib), fulib_cpp, 0ll))
        fail_uGHE7p6t(x7E_3lDd4lqo((("Failed to read fulib @ "_fu + fulib) + ": "_fu), fu::i64dec(err)));
    else
    {
        s_CodegenOutput fulib_cpp_1 = s_CodegenOutput { static_cast<fu::str&&>(fulib_cpp), s_Set_6ARmtH0K78f{}, s_BuildHacks{}, s_Set_95BJOojOc45{}, s_CGDefects{} };
        fu::vec<int> unit_indices = map_ArfWmIVp(ctx.modules);
        fu::vec<s_TranslationUnit> units {};
        fu::vec<s_FileInvariants> file_invariants {};
        s_Map_Xty3xLT6R3k include_hashes {};
        fu::vec<int> dep_order = (ctx.dep_order ? fu::vec<int>(ctx.dep_order) : fu::vec<int> { fu::slate<1, int> { 0 } });
        for (int i = 0; i < dep_order.size(); i++)
        {
            const int modid = dep_order[i];
            const s_Module& module = ctx.modules[modid];
            const s_CodegenOutput& cpp = (i ? module.out.cpp : fulib_cpp_1);
            if (!(!cpp.src))
            {
                fu::str fname = (i ? fu::str(module.fname) : "fulib runtime"_fu);
                /*MOV*/ fu::str human = (i ? filename_qZI0kCzt(module.fname) : "fulib runtime"_fu);
                /*MOV*/ fu::str iquote = (i ? dirname_qZI0kCzt(module.fname) : ""_fu);
                units.push(s_TranslationUnit { static_cast<fu::str&&>(human), fu::str(cpp.src), static_cast<fu::str&&>(iquote), s_TEA{}, (fname + ".cpp"_fu), fu::str{}, s_TEA{}, fu::str{}, fu::str{}, s_CacheCleanup{}, s_BuildHacks{}, s_Set_95BJOojOc45{} });
                const int unit_index = (unit_indices.mutref(modid) = (units.size() - 1));
                s_TranslationUnit& unit = units.mutref(unit_index);
                s_TEA& includes_hash = unit.includes_hash;
                int BL_18_v {};
                for (int i_1 = 0; i_1 < (__extension__ (
                {
                    const s_Set_6ARmtH0K78f& _ = cpp.includes_headers;
                    BL_18_v = (_.keys_asc.size());
                (void)0;}), BL_18_v); i_1++)
                {
                    const fu::str* BL_21_v;
                    const uint64_t hash = getIncludeHash_uGHE7p6t((__extension__ (
                    {
                        const s_Set_6ARmtH0K78f& _ = cpp.includes_headers;
                        const int i_2 = i_1;
                        BL_21_v = &(_.keys_asc[i_2]);
                    (void)0;}), *BL_21_v), module.fname, file_invariants, include_hashes);
                    if (hash)
                        hash_qRo1x0wq(includes_hash, hash);

                };
                if (cpp.hacks)
                {
                    add_dpiw9mqT(unit.hacks.link.keys_asc, cpp.hacks.link.keys_asc);
                    const s_Set_6ARmtH0K78f& include_dirs = cpp.hacks.include_dirs;
                    if (include_dirs)
                    {
                        fu::str dir = dirname_qZI0kCzt(module.fname);
                        each_nntEIc70(include_dirs.keys_asc, unit, dir);
                    };
                };
            };
        };
        s_DirWrk dir_wrk_1 = DirWrk_uGHE7p6t(dir_wrk);
        for (int i_1 = 0; i_1 < units.size(); i_1++)
        {
            s_TranslationUnit& unit = units.mutref(i_1);
            fu::view<char> cpp = (unit.src ? unit.src : fail_uGHE7p6t("Empty translation unit."_fu));
            s_TEA& hash = unit.obj_hash;
            fu_ASSERT(!hash);
            hash_l6RUR9Sz(hash, unit.src);
            uint64_t BL_27_v {};
            unit.cpp_cache_file = x7E_3lDd4lqo((digest16_lweHUmk8((__extension__ (
            {
                const s_TEA& tea = hash;
                BL_27_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
            (void)0;}), BL_27_v), 0) + "-"_fu), fu::i64dec(cpp.size()));
            hash_lweHUmk8(hash, unit.includes_hash);
            hash_lweHUmk8(hash, GCChash_1);
            uint64_t BL_28_v {};
            unit.obj_cache_file = ((((dir_wrk_1.obj + unit.cpp_cache_file) + "-"_fu) + digest16_lweHUmk8((__extension__ (
            {
                const s_TEA& tea = hash;
                BL_28_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
            (void)0;}), BL_28_v), 0)) + ".o"_fu);
            unit.cpp_cache_file = ((dir_wrk_1.cpp + unit.cpp_cache_file) + ".cpp"_fu);
        };
        /*MOV*/ s_BuildOutput ret = buildTarget_uGHE7p6t(units, file_invariants, flags_cc, flags_ld, onfail, runmode, expect_exit, bscheme, GCC_CMD, bin, ctx, dir_wrk_1);
        if (bscheme & s_BuildScheme_watch)
        {
            fu_ASSERT(!ret.watch_list);
            for (int i_2 = 1; i_2 < ctx.modules.size(); i_2++)
            {
                const fu::str& fname = ctx.modules[i_2].fname;
                if (fname)
                    ret.watch_list += fu::str(fname);

            };
            each_FM1phmnR(file_invariants, ret);
        };
        if (!s_BuildScheme((bscheme & s_BuildScheme_notest)))
        {
            for (int i_2 = 1; i_2 < ctx.modules.size(); i_2++)
            {
                const s_Set_95BJOojOc45& testsuite_modids = ctx.modules[i_2].out.cpp.testsuite_modids;
                if (!(!testsuite_modids))
                {
                    const int unit_index = unit_indices[i_2];
                    if (unit_index > 0)
                    {
                        s_TranslationUnit& unit = units.mutref(unit_index);
                        each_p2y6TLmi(testsuite_modids.keys_asc, unit_indices, unit);
                    }
                    else
                        fail_uGHE7p6t("Testsuite without a translation unit."_fu);

                };
            };
            for (int i_3 = 0; i_3 < units.size(); i_3++)
            {
                const s_TranslationUnit& unit = units[i_3];
                if (!(!unit.testsuite_units))
                {
                    s_TranslationUnit testsuite { unit };
                    hash_l6RUR9Sz(testsuite.obj_hash, ".testsuite"_fu);
                    testsuite.obj_cache_file += ".testsuite"_fu;
                    testsuite.src_output_file += ".testsuite"_fu;
                    fu::vec<s_TranslationUnit> testsuite_units = (map_62tmPuJD(unit.testsuite_units.keys_asc, units) + testsuite);
                    buildTarget_uGHE7p6t(testsuite_units, file_invariants, flags_cc, flags_ld, ((runmode == s_RunMode_CompilerTestcase) ? onfail : s_DEV_OnFail((s_DEV_OnFail_OnFail_PrintInput | s_DEV_OnFail_OnFail_WriteRepro))), s_RunMode_Testsuite, 0, bscheme, GCC_CMD, (*(const fu::str*)fu::NIL), ctx, dir_wrk_1);
                };
            };
        };
        outputSources_uGHE7p6t(units, dir_src, dir_cpp, unity, dir_wrk_1);
        return /*NRVO*/ ret;
    };
}

#endif
