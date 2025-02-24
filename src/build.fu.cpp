#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/process.h>
#include <fu/vec/LEGACY_find.h>
#include <fu/vec/LEGACY_slice.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

typedef fu::u8 s_DEV_OnFail;
struct s_Context;
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
struct s_Import;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_Shape;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
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
struct s_TEA;
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
struct s_Map_iIYL7rECCBg;
struct s_ModuleSortHelper;
struct s_BuildError;
fu::str join_8GxtVDhD(fu::view<char>, const fu::str&);
fu::str read_zTt3fZzW(fu::str&&);
fu::str hash16_nHEuzL2I(fu::view<char>, int);
int mkdir_p_K8xLUZUk(fu::str&&, unsigned);
fu::str dirname_8Oo0Zp26(const fu::str&);
int64_t size_zTt3fZzW(fu::str&&);
uint64_t next_u64_3z5p6Ska();
fu::str filename_8Oo0Zp26(const fu::str&);
int write_t5NVzxJy(fu::str&&, fu::view<char>, unsigned);
int rename_SX2prLSI(fu::str&&, fu::str&&);
int unlink_zTt3fZzW(fu::str&&);
double hr_CPFg3qvV();
int exec_sounLutz(fu::str&&, int&, fu::str&);
int spawn_Q72PXxQP(fu::vec<fu::str>&&, fu::str&, fu::str&, int&);
int chmod_a08pEYIk(fu::str&&, unsigned);
fu::str relative_PkLpPlOh(fu::view<char>, const fu::str&);

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

                                #ifndef DEF_s_ModuleSortHelper
                                #define DEF_s_ModuleSortHelper
struct s_ModuleSortHelper
{
    int compile_index;
    explicit operator bool() const noexcept
    {
        return false
            || compile_index
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_if_last_uwKwzsvZqOh
                                #define DEF_if_last_uwKwzsvZqOh
inline char if_last_uwKwzsvZ(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
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

                                #ifndef DEF_x21x3D_gCeFmDFw0L8
                                #define DEF_x21x3D_gCeFmDFw0L8
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

static const fu::str TODO_FIX_ignoredWarnings fu_INIT_PRIORITY(1004) = (((""_fu + "-Wno-float-conversion "_fu)
    + "-Wno-unused-but-set-variable "_fu) + "-Wno-unknown-warning-option -Wno-maybe-uninitialized -Wno-stringop-overflow -Wno-array-bounds -Wno-sequence-point -Wno-dangling-reference "_fu);

static const s_Module& GET_O38yHq8T(const s_ModuleSortHelper& _, fu::view<s_Module> modules)
{
    return modules[_.compile_index];
}

                                #ifndef DEF_grow_if_oob_2Gj3HoxNF2j
                                #define DEF_grow_if_oob_2Gj3HoxNF2j
inline fu::str& grow_if_oob_2Gj3HoxN(fu::vec<fu::str>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif

                                #ifndef DEF_starts_Db9eGFmCKDj
                                #define DEF_starts_Db9eGFmCKDj
inline bool starts_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

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

inline static bool l_44_0_bgXRVOD3(const fu::str& incl, fu::vec<fu::str>& HACK_include_dirs, fu::view<char> dir)
{
    return add_mts1NXJ4(HACK_include_dirs, (starts_Db9eGFmC(incl, '.') ? join_8GxtVDhD(dir, incl) : fu::str(incl)));
}

                                #ifndef DEF_each_wpMz89ww9Qc
                                #define DEF_each_wpMz89ww9Qc
inline void each_wpMz89ww(fu::view<fu::str> a, fu::vec<fu::str>& HACK_include_dirs, fu::view<char> dir)
{
    for (int i = 0; i < a.size(); i++)
        l_44_0_bgXRVOD3(a[i], HACK_include_dirs, dir);

}
                                #endif

                                #ifndef DEF_starts_t2TApdnqRc8
                                #define DEF_starts_t2TApdnqRc8
inline bool starts_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF_join_zqpLPm5h6cf
                                #define DEF_join_zqpLPm5h6cf
inline fu::str join_zqpLPm5h(fu::view<fu::str> a, const char sep)
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

static fu::str tmpfile_MMG7Cq1v(/*MOV*/ fu::str&& fname)
{
    fname += '-';
    uint64_t r = next_u64_3z5p6Ska();
    for (int i = 0; i < 8; i++)
    {
        const uint64_t v = (r & 0x1full);
        fname += char(((v < 10ull) ? (int(fu::u8('0')) + int(unsigned(v))) : ((int(fu::u8('a')) + int(unsigned(v))) - 10)));
        r >>= 5ull;
    };
    return static_cast<fu::str&&>(fname);
}

static bool CACHE_objFileAvailable_sJorXxam(const fu::str& F_obj)
{
    return size_zTt3fZzW(fu::str(F_obj)) > 0ll;
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

static int atomic_write_532WlRrc(const fu::str& fname, fu::view<char> data)
{
    /*MOV*/ fu::str tmp = tmpfile_MMG7Cq1v(fu::str(fname));
    int _0 {};
    const int err = ((_0 = write_t5NVzxJy(fu::str(tmp), data, RW_RW_RW)) ? _0 : rename_SX2prLSI(fu::str(tmp), fu::str(fname)));
    if (err)
        unlink_zTt3fZzW(static_cast<fu::str&&>(tmp));

    return err;
}

                                #ifndef DEF_unless_oob_YGuMTsMqQ76
                                #define DEF_unless_oob_YGuMTsMqQ76
inline const fu::str& unless_oob_YGuMTsMq(fu::view<fu::str> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const fu::str*)fu::NIL);

}
                                #endif

                                #ifndef DEF_find_T9i966y9wQg
                                #define DEF_find_T9i966y9wQg
inline int find_T9i966y9(fu::view<char> a, const char b, int start)
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

inline static fu::vec<fu::str>& l_0_0_3MkMrI2e(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}

                                #ifndef DEF_split_Wt4JRWvkXg3
                                #define DEF_split_Wt4JRWvkXg3
inline void split_Wt4JRWvk(const fu::str& str, const char sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    while (((next = find_T9i966y9(str, sep, last)) >= 0))
    {
        l_0_0_3MkMrI2e(fu::slice(str, last, next), result);
        last = (next + N);
    };
    if (last)
        l_0_0_3MkMrI2e(fu::slice(str, last), result);
    else
        l_0_0_3MkMrI2e(str, result);

}
                                #endif

                                #ifndef DEF_split_42u6frOYgx6
                                #define DEF_split_42u6frOYgx6
inline fu::vec<fu::str> split_42u6frOY(const fu::str& str, const char sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_Wt4JRWvk(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static int exec_37sZ7uME(const fu::str& cmd, fu::str& stdout)
{
    int status = 0;
    int err {};
    if (fu::has(cmd, "$("_fu) || (2 > 1))
        err = exec_sounLutz(fu::str(cmd), status, stdout);
    else
        err = spawn_Q72PXxQP(split_42u6frOY(cmd, ' '), stdout, stdout, status);

    return (err ? err : status);
}

static s_BuildError buildFile_tLCV3HJ1(fu::view<char> F, const int i, const bool nocache, fu::view<char> GCC_CMD, fu::view<s_Module> modules, fu::view<s_ModuleSortHelper> modules_1, fu::view<fu::str> units, fu::view<fu::str> HACK_pkgConfig_cflags, fu::view<char> INCLUDE)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_4 {};
    fu::str x_5 {};
    fu::str x_6 {};

    if (!F)
    {
        return s_BuildError{};
    }
    else
    {
        fu::str F_cpp = (F + ".cpp"_fu);
        fu::str F_obj = (F + ".o"_fu);
        /*MOV*/ fu::str F_tmp = tmpfile_MMG7Cq1v(fu::str(F_obj));
        if (CACHE_objFileAvailable_sJorXxam(F_obj) && !nocache)
        {
            return s_BuildError{};
        }
        else
        {
            const fu::str& original_fname = (i ? GET_O38yHq8T(modules_1[i], modules).fname : (*(const fu::str*)fu::NIL));
            /*MOV*/ fu::str human = (original_fname ? filename_8Oo0Zp26(original_fname) : "fulib runtime"_fu);
            const fu::str& cpp = units[i];
            atomic_write_532WlRrc(F_cpp, cpp);
            fu::println((fu::slate<4, fu::str> { static_cast<fu::str&&>((x = "  BUILD "_fu, x)), fu::str(human), static_cast<fu::str&&>((x_1 = " "_fu, x_1)), fu::str(F_cpp) }));
            const double t0 = hr_CPFg3qvV();
            fu::str INCLUDE_1 = (INCLUDE + unless_oob_YGuMTsMq(HACK_pkgConfig_cflags, i));
            fu::str INCLUDE_2 = (INCLUDE_1 + (original_fname ? (" -iquote "_fu + dirname_8Oo0Zp26(original_fname)) : fu::str{}));
            fu::str CMD = ((((((GCC_CMD + "-c"_fu) + INCLUDE_2) + " -o "_fu) + F_tmp) + " "_fu) + F_cpp);
            /*MOV*/ fu::str stdout {};
            int _0 {};
            const int code = ((_0 = exec_37sZ7uME(CMD, stdout)) ? _0 : rename_SX2prLSI(static_cast<fu::str&&>(F_tmp), fu::str(F_obj)));
            if (code)
            {
                if (CACHE_objFileAvailable_sJorXxam(F_obj))
                {
                    fu::println((fu::slate<2, fu::str> { static_cast<fu::str&&>((x_2 = "RACE OK "_fu, x_2)), static_cast<fu::str&&>(human) }));
                    return s_BuildError{};
                }
                else
                {
                    return s_BuildError { code, fu::str(cpp), static_cast<fu::str&&>(stdout) };
                };
            }
            else
            {
                const double t1 = hr_CPFg3qvV();
                fu::println((fu::slate<5, fu::str> { static_cast<fu::str&&>((x_3 = "     OK "_fu, x_3)), static_cast<fu::str&&>(human), static_cast<fu::str&&>((x_4 = " "_fu, x_4)), static_cast<fu::str&&>((x_5 = fu::f64dec((t1 - t0)), x_5)), static_cast<fu::str&&>((x_6 = "s"_fu, x_6)) }));
                return s_BuildError{};
            };
        };
    };
}

inline static s_BuildError& l_41_2_SWv8XE7Z(const int i, fu::view<fu::str> arr, fu::view_mut<s_BuildError> result, const bool nocache, fu::view<char> GCC_CMD, fu::view<s_Module> modules, fu::view<s_ModuleSortHelper> modules_1, fu::view<fu::str> units, fu::view<fu::str> HACK_pkgConfig_cflags, fu::view<char> INCLUDE)
{
    return (result.mutref(i) = buildFile_tLCV3HJ1(arr[i], i, nocache, GCC_CMD, modules, modules_1, units, HACK_pkgConfig_cflags, INCLUDE));
}

inline static void parallel_for_TvFvE1tb(const int min, int end, fu::view<fu::str> arr, fu::view_mut<s_BuildError> result, const bool nocache, fu::view<char> GCC_CMD, fu::view<s_Module> modules, fu::view<s_ModuleSortHelper> modules_1, fu::view<fu::str> units, fu::view<fu::str> HACK_pkgConfig_cflags, fu::view<char> INCLUDE)
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
        l_41_2_SWv8XE7Z(i, arr, result, nocache, GCC_CMD, modules, modules_1, units, HACK_pkgConfig_cflags, INCLUDE);

    });

}

                                #ifndef DEF_map_yEDQqPblIK9
                                #define DEF_map_yEDQqPblIK9
inline fu::vec<s_BuildError> map_yEDQqPbl(fu::view<fu::str> arr, const int min, const bool nocache, fu::view<char> GCC_CMD, fu::view<s_Module> modules, fu::view<s_ModuleSortHelper> modules_1, fu::view<fu::str> units, fu::view<fu::str> HACK_pkgConfig_cflags, fu::view<char> INCLUDE)
{
    /*MOV*/ fu::vec<s_BuildError> result {};
    result.grow<false>(arr.size());
    parallel_for_TvFvE1tb(min, arr.size(), arr, result, nocache, GCC_CMD, modules, modules_1, units, HACK_pkgConfig_cflags, INCLUDE);
    return /*NRVO*/ result;
}
                                #endif

[[noreturn]] static fu::never ERR_g5Dxor7D(fu::str&& cpp, fu::view<char> dir_wrk, const s_DEV_OnFail onfail, fu::view<s_Module> modules, fu::view<s_ModuleSortHelper> modules_1, fu::view<fu::str> Fs, const int code, fu::str& stdout)
{
    // Hoisted:
    fu::str x {};

    if (onfail & s_DEV_OnFail_OnFail_WriteRepro)
    {
        if (!cpp)
        {
            for (int i = Fs.size(); i-- > 0; )
            {
                if (Fs[i])
                    cpp += (("#include \""_fu + Fs[i]) + ".cpp\"\n"_fu);

            };
        };
        fu::str fname = (dir_wrk + "failing-testcase.cpp"_fu);
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("  WRITE "_fu + fname), x)) }));
        atomic_write_532WlRrc(fname, cpp);
    };
    if (stdout)
        stdout += "\n\n"_fu;

    stdout += x7E_gCeFmDFw("   EXIT code: "_fu, fu::i64dec(code));
    fu::str explain = ""_fu;
    if (onfail)
    {
        explain = "\n\n\tCOMPILER BUG or INCORRECT TESTCASE:\n\n"_fu;
        for (int i = 1; i < modules_1.size(); i++)
            explain += (s_DEV_OnFail((onfail & s_DEV_OnFail_OnFail_PrintInput)) ? fu::str(GET_O38yHq8T(modules_1[i], modules).in.src) : (GET_O38yHq8T(modules_1[i], modules).fname + "\n"_fu));

        if (onfail & s_DEV_OnFail_OnFail_PrintOutput)
        {
            explain += "\n\n\tGenerated code:\n\n"_fu;
            for (int i_1 = 1; i_1 < modules_1.size(); i_1++)
                explain += GET_O38yHq8T(modules_1[i_1], modules).out.cpp.src;

        };
    };
    fu::fail((stdout + explain));
}

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif

                                #ifndef DEF_only_8o6rzxnHj51
                                #define DEF_only_8o6rzxnHj51
inline int only_8o6rzxnH(fu::view<int> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static int READ_StatusCode_J2ezsHRV(const fu::str& F_exe)
{
    return fu::view_of<int>(read_zTt3fZzW(fu::str(F_exe)))[0];
}

static int WRITE_StatusCode_rhOPS2bA(const int code, const fu::str& F_exe)
{
    return atomic_write_532WlRrc(F_exe, fu::view_of<char>((fu::slate<1, int> { code })));
}

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

static fu::str ensure_local_fname_GdTXPoQ2(const fu::str& fname, fu::view<char> dir_src)
{
    if (starts_t2TApdnq(fname, dir_src))
        return fu::str(fname);
    else
    {
        fu::str foreign = (dir_src + ".foreign/"_fu);
        mkdir_p_K8xLUZUk(fu::str(foreign), RWX_RWX_RWX);
        fu::str rel = replace_t9kb9bFx(replace_t9kb9bFx(relative_PkLpPlOh(dir_src, fname), "../"_fu, "up__"_fu), "/"_fu, "__"_fu);
        return foreign + rel;
    };
}

static fu::str update_file_9sMLOsMG(const fu::str& fname, fu::view<char> data, fu::view<char> dir_src, fu::view<char> dir_out)
{
    // Hoisted:
    fu::str x {};

    fu::str fname_1 = ensure_local_fname_GdTXPoQ2(fname, dir_src);
    if (starts_t2TApdnq(fname_1, dir_src))
    {
        /*MOV*/ fu::str fname_2 = (dir_out + fu::slice(fname_1, dir_src.size()));
        if (read_zTt3fZzW(fu::str(fname_2)) != data)
        {
            const int err = atomic_write_532WlRrc(fname_2, data);
            if (err)
                fu::fail(x7E_gCeFmDFw((("Failed to write `"_fu + fname_2) + "`, error: #"_fu), fu::i64dec(err)));
            else
            {
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("  WROTE "_fu + fname_2), x)) }));
            };
        };
        return /*NRVO*/ fname_2;
    }
    else
        fu::fail("ensure_local_fname broken"_fu);

}

void build_dvjTrKQM(fu::str&& dir_wrk, fu::view<char> fudir, /*MOV*/ fu::str&& fulib, /*MOV*/ fu::str&& bin, fu::str&& dir_obj, fu::str&& dir_src, fu::str&& dir_cpp, fu::view<char> unity, fu::view<char> scheme, const s_DEV_OnFail onfail, const bool run, const bool shared, const bool hotswap, const bool nocache, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const s_Context& ctx)
{
    // Hoisted:
    fu::vec<s_ModuleSortHelper> result {};
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_4 {};
    fu::str x_5 {};
    fu::str x_6 {};
    fu::str x_7 {};
    fu::str x_8 {};

    if (if_last_uwKwzsvZ(dir_wrk) != '/')
    {
        if (dir_wrk)
            dir_wrk += '/';
        else
            fu::fail("No workspace directory provided."_fu);

    };
    if (dir_obj && (if_last_uwKwzsvZ(dir_obj) != '/'))
        dir_obj += '/';

    if (dir_src && (if_last_uwKwzsvZ(dir_src) != '/'))
        dir_src += '/';

    if (dir_cpp && (if_last_uwKwzsvZ(dir_cpp) != '/'))
        dir_cpp += '/';

    fu::str O_lvl = ((scheme != "debug"_fu) ? "-O3 -DNDEBUG -fno-math-errno "_fu : "-Og "_fu);
    if ((scheme == "debug"_fu) || (scheme == "reldeb"_fu))
        O_lvl += "-g "_fu;

    if (scheme == "retail"_fu)
        O_lvl += "-Dfu_RETAIL "_fu;

    if (shared)
        O_lvl += "-fPIC "_fu;

    if (hotswap || shared)
        O_lvl += "-Dfu_HOTSWAP "_fu;

    fu::str GCChash = ("g++ -std=c++1z "_fu + O_lvl);
    fu::str GCC_CMD = ((((((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wdouble-promotion "_fu) + "-Wconversion -Wsign-conversion "_fu) + TODO_FIX_ignoredWarnings) + ((hotswap && fu::APPLE) ? "-Wno-return-type-c-linkage "_fu : fu::str{})) + (fu::LINUX ? "-pthread -ldl "_fu : fu::str{}));
    if (!(fulib))
        fulib = join_8GxtVDhD(fudir, (hotswap ? "include/fu/_sharedlib.cpp"_fu : "include/fu/_fulib.cpp"_fu));

    s_CodegenOutput fulib_cpp = s_CodegenOutput { read_zTt3fZzW(static_cast<fu::str&&>(fulib)), fu::vec<fu::str>{}, fu::vec<fu::str>{}, fu::vec<fu::str>{}, fu::vec<int>{}, s_CGDefects{} };
    fu::vec<int> unit_mapping {};
    fu::vec<fu::str> unit_fnames {};
    fu::view<s_Module> modules = ctx.modules;
    fu::view<s_ModuleSortHelper> BL_12_v {};
    fu::view<s_ModuleSortHelper> modules_1 = (__extension__ (
    {
        result =  {};
        for (int i = 0; i < ctx.dep_order.size(); i++)
        {
            result += s_ModuleSortHelper { ctx.dep_order[i] };
        };
        BL_12_v = (result);
    (void)0;}), static_cast<fu::view<s_ModuleSortHelper>&&>(BL_12_v));
    for (int i_1 = 0; i_1 < modules_1.size(); i_1++)
    {
        const s_ModuleSortHelper& module = modules_1[i_1];
        const s_CodegenOutput& cpp = (i_1 ? GET_O38yHq8T(module, modules).out.cpp : fulib_cpp);
        if (!cpp.src)
            unit_mapping += -1;
        else
        {
            const int unit = i_1;
            unit_mapping += unit;
            grow_if_oob_2Gj3HoxN(unit_fnames, unit) = (i_1 ? fu::str(GET_O38yHq8T(module, modules).fname) : "fulib runtime"_fu);
        };
    };
    fu::vec<fu::str> units {};
    for (int i_2 = 0; i_2 < modules_1.size(); i_2++)
    {
        const s_ModuleSortHelper& module_1 = modules_1[i_2];
        const s_CodegenOutput& cpp_1 = (i_2 ? GET_O38yHq8T(module_1, modules).out.cpp : fulib_cpp);
        if (cpp_1.src)
        {
            grow_if_oob_2Gj3HoxN(units, unit_mapping[i_2]) += cpp_1.src;
        };
    };
    fu::vec<fu::str> Fs {};
    int len_all {};
    for (int i_3 = 0; i_3 < units.size(); i_3++)
    {
        fu::view<char> cpp_2 = units[i_3];
        if (!(!cpp_2))
        {
            /*MOV*/ fu::str F = x7E_gCeFmDFw((((dir_wrk + "o-"_fu) + hash16_nHEuzL2I((GCChash + cpp_2), 16)) + "-"_fu), fu::i64dec(cpp_2.size()));
            grow_if_oob_2Gj3HoxN(Fs, i_3) = static_cast<fu::str&&>(F);
            len_all += cpp_2.size();
        };
    };
    mkdir_p_K8xLUZUk(fu::str(dir_wrk), RWX_RWX_RWX);
    int code {};
    fu::str stdout {};
    fu::vec<fu::str> HACK_linkFlags {};
    fu::vec<fu::str> HACK_pkgConfig_libs {};
    fu::vec<fu::str> HACK_pkgConfig_cflags {};
    fu::vec<fu::str> HACK_include_dirs {};
    for (int i_4 = 0; i_4 < modules_1.size(); i_4++)
    {
        const s_ModuleSortHelper& module_2 = modules_1[i_4];
        fu::view<fu::str> include_dirs = GET_O38yHq8T(module_2, modules).out.cpp.include_dirs;
        if (include_dirs)
        {
            fu::str dir = dirname_8Oo0Zp26(GET_O38yHq8T(module_2, modules).fname);
            each_wpMz89ww(include_dirs, HACK_include_dirs, dir);
        };
        fu::str cflags = ""_fu;
        fu::view<fu::str> libs = GET_O38yHq8T(module_2, modules).out.cpp.link;
        for (int i_5 = 0; i_5 < libs.size(); i_5++)
        {
            const fu::str& lib = libs[i_5];
            if (starts_t2TApdnq(lib, "-"_fu))
                add_mts1NXJ4(HACK_linkFlags, lib);
            else
            {
                cflags += lib;
                add_mts1NXJ4(HACK_pkgConfig_libs, lib);
            };
        };
        if (cflags)
        {
            grow_if_oob_2Gj3HoxN(HACK_pkgConfig_cflags, i_4) = ((" $(pkg-config --cflags "_fu + cflags) + ")"_fu);
        };
    };
    fu::str INCLUDE = (((((flags_cc ? (" "_fu + join_zqpLPm5h(flags_cc, ' ')) : fu::str{}) + " -I "_fu) + fudir) + "include"_fu) + (HACK_include_dirs ? (" -I "_fu + join_jCe9HYtv(HACK_include_dirs, " -I "_fu)) : fu::str{}));
    fu::str LIBS = (((flags_ld ? (" "_fu + join_zqpLPm5h(flags_ld, ' ')) : fu::str{}) + (HACK_linkFlags ? (" "_fu + join_jCe9HYtv(HACK_linkFlags, " "_fu)) : fu::str{})) + (HACK_pkgConfig_libs ? ((" $(pkg-config --libs "_fu + join_jCe9HYtv(HACK_pkgConfig_libs, " "_fu)) + ")"_fu) : fu::str{}));
    /*MOV*/ fu::str F_exe = x7E_gCeFmDFw((x7E_gCeFmDFw((((dir_wrk + "b-"_fu) + hash16_nHEuzL2I((join_jCe9HYtv(Fs, "/"_fu) + LIBS), 16)) + "-"_fu), fu::i64dec(len_all)) + "-"_fu), fu::i64dec(Fs.size()));
    const int64_t old_size = size_zTt3fZzW(fu::str(F_exe));
    if ((old_size < 1ll) && (bin || run))
    {
        fu::vec<s_BuildError> buildErrors = map_yEDQqPbl(Fs, 0, nocache, GCC_CMD, modules, modules_1, units, HACK_pkgConfig_cflags, INCLUDE);
        for (int i_6 = 0; i_6 < buildErrors.size(); i_6++)
        {
            const s_BuildError& err = buildErrors[i_6];
            if ((code = err.code))
            {
                stdout = err.stdout;
                ERR_g5Dxor7D(fu::str(err.cpp), dir_wrk, onfail, modules, modules_1, Fs, code, stdout);
            };
        };
        /*MOV*/ fu::str F_tmp = tmpfile_MMG7Cq1v(fu::str(F_exe));
        fu::str cmd = ((GCC_CMD + "-o "_fu) + F_tmp);
        if (shared)
        {
            cmd += " -shared"_fu;
            fu::str soname = filename_8Oo0Zp26(bin);
            if (fu::APPLE)
                cmd += (" -Wl,-install_name,"_fu + soname);
            else
                cmd += (" -Wl,-soname,"_fu + soname);

        };
        for (int i_7 = 0; i_7 < Fs.size(); i_7++)
        {
            fu::view<char> F_1 = Fs[i_7];
            if (F_1)
                cmd += ((" "_fu + F_1) + ".o"_fu);

        };

        {
            fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x = "   LINK "_fu, x)), fu::str(F_exe), fu::str(LIBS) }));
            const double t0 = hr_CPFg3qvV();
            fu::str CMD = (cmd + LIBS);
            int _0 {};
            code = ((_0 = exec_37sZ7uME(CMD, stdout)) ? _0 : (_0 = chmod_a08pEYIk(fu::str(F_tmp), RWX_RX_RX)) ? _0 : rename_SX2prLSI(static_cast<fu::str&&>(F_tmp), fu::str(F_exe)));
            if (code)
            {
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_1 = ((x7E_gCeFmDFw((("   FAIL "_fu + CMD) + " EXIT="_fu), fu::i64dec(code)) + "\n"_fu) + stdout), x_1)) }));
                ERR_g5Dxor7D(fu::str{}, dir_wrk, onfail, modules, modules_1, Fs, code, stdout);
            }
            else
            {
                const double t1 = hr_CPFg3qvV();
                fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x_2 = "     OK "_fu, x_2)), static_cast<fu::str&&>((x_3 = fu::f64dec((t1 - t0)), x_3)), static_cast<fu::str&&>((x_4 = "s"_fu, x_4)) }));
            };
        };
        if (code)
        {
            ERR_g5Dxor7D(fu::str{}, dir_wrk, onfail, modules, modules_1, Fs, code, stdout);
        };
    };
    if (run)
    {
        if (old_size == 4ll || old_size == 20ll)
            code = READ_StatusCode_J2ezsHRV(F_exe);
        else
        {
            fu::println((fu::slate<2, fu::str> { static_cast<fu::str&&>((x_5 = "    RUN "_fu, x_5)), fu::str(F_exe) }));
            const double t0_1 = hr_CPFg3qvV();
            code = exec_37sZ7uME(F_exe, stdout);
            const double t1_1 = hr_CPFg3qvV();
            fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x_6 = "     OK "_fu, x_6)), static_cast<fu::str&&>((x_7 = fu::f64dec((t1_1 - t0_1)), x_7)), static_cast<fu::str&&>((x_8 = "s"_fu, x_8)) }));
            const int64_t new_size = size_zTt3fZzW(fu::str(F_exe));
            if (new_size == 4ll || new_size == 20ll)
                code = READ_StatusCode_J2ezsHRV(F_exe);
            else if ((code != 32512) && (code != 35584))
                WRITE_StatusCode_rhOPS2bA(code, F_exe);

        };
    };
    if (code)
    {
        ERR_g5Dxor7D(fu::str{}, dir_wrk, onfail, modules, modules_1, Fs, code, stdout);
    }
    else
    {
        if (dir_cpp && dir_src)
        {
            mkdir_p_K8xLUZUk(fu::str(dir_cpp), RWX_RWX_RWX);
            fu::vec<fu::str> cpp_files {};
            for (int i_8 = 1; i_8 < units.size(); i_8++)
            {
                fu::view<char> data = units[i_8];
                fu::str fname = (data ? (unit_fnames[i_8] + ".cpp"_fu) : fu::str{});
                /*MOV*/ fu::str fname_1 = (fname ? update_file_9sMLOsMG(fname, data, dir_src, dir_cpp) : fu::str{});
                cpp_files.push(static_cast<fu::str&&>(fname_1));
            };
            fu::str CMakeLists {};
            if (unity || CMakeLists)
            {
                if (unity)
                {
                    fu::str data_1;
                    for (int i_9 = 0; i_9 < cpp_files.size(); i_9++)
                    {
                        const fu::str& incl = cpp_files[i_9];
                        if (incl)
                            data_1 += (("#include \""_fu + relative_PkLpPlOh(unity, incl)) + "\"\n"_fu);

                    };

                    data_1 += "\n#ifdef fu_UNITY_FULIB\n#include <fu/_fulib.cpp>\n#endif\n"_fu;

                    update_file_9sMLOsMG((unity + ".unity.cpp"_fu), data_1, dir_src, dir_cpp);
                };
            };
        };
        if (bin)
        {
            mkdir_p_K8xLUZUk(dirname_8Oo0Zp26(bin), RWX_RWX_RWX);
            code = rename_SX2prLSI(static_cast<fu::str&&>(F_exe), static_cast<fu::str&&>(bin));
        };
        if (code)
        {
            ERR_g5Dxor7D(fu::str{}, dir_wrk, onfail, modules, modules_1, Fs, code, stdout);
        };
    };
}

#endif
