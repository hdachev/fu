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
#include <fu/vec/LEGACY_find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

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
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
struct s_TestDiffs;
typedef fu::u8 s_DEV_OnFail;
void compile_adoKzaAQ(const fu::str&, s_Context&, const s_Options&);
s_Context ZERO_nyNhVYvN(fu::vec<fu::str>&&, s_Options&&, s_TestDiffs&);
fu::str lower_MpX0JQTu(fu::str&&);
static bool check_XUXAGncz(const fu::str&, fu::view<char>);
fu::str qBAD_3PsDzMvu(const fu::str&);
void set_next_lHORuDVk(s_TestDiffs&, const fu::str&, const fu::str&);
void build_dvjTrKQM(fu::str&&, fu::view<char>, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, fu::view<char>, s_DEV_OnFail, bool, bool, bool, bool, fu::view<fu::str>, fu::view<fu::str>, const s_Context&);
fu::str qID_3PsDzMvu(const fu::str&);
fu::str inspect_SOTjKmcd(const s_Module&);
fu::str strip_MUF5RZQ8(fu::view<char>);
int write_t5NVzxJy(fu::str&&, fu::view<char>, unsigned);

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

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_FUDIR
                                #define DEF_FUDIR
extern const fu::str FUDIR;
                                #endif

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEF_clone_T1Jf1Z0KiR2
                                #define DEF_clone_T1Jf1Z0KiR2
inline const fu::str& clone_T1Jf1Z0K(const fu::str& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_dD3H4GX6AP2
                                #define DEF_clone_dD3H4GX6AP2
inline int clone_dD3H4GX6(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_BpjaAqZzaaa
                                #define DEF_clone_BpjaAqZzaaa
inline const s_ModuleInputs& clone_BpjaAqZz(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_CDer1pfRaKl
                                #define DEF_clone_CDer1pfRaKl
inline const s_ModuleOrder& clone_CDer1pfR(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_yUzRV7AncM9
                                #define DEF_clone_yUzRV7AncM9
inline const fu::vec<s_Struct>& clone_yUzRV7An(const fu::vec<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Q1UUsXjhPGl
                                #define DEF_clone_Q1UUsXjhPGl
inline const s_SolvedNode& clone_Q1UUsXjh(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_YgFd2lJf7Gh
                                #define DEF_clone_YgFd2lJf7Gh
inline const fu::vec<s_Overload>& clone_YgFd2lJf(const fu::vec<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_h2eJ8vfftjk
                                #define DEF_clone_h2eJ8vfftjk
inline const fu::vec<s_Extended>& clone_h2eJ8vff(const fu::vec<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_2gILMhVaICb
                                #define DEF_clone_2gILMhVaICb
inline const fu::vec<s_ScopeItem>& clone_2gILMhVa(const fu::vec<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_KE4Ju1yDYU9
                                #define DEF_clone_KE4Ju1yDYU9
inline const fu::vec<int>& clone_KE4Ju1yD(const fu::vec<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_lmGNhJZgGsc
                                #define DEF_clone_lmGNhJZgGsc
inline const fu::vec<s_Target>& clone_lmGNhJZg(const fu::vec<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_u3AUYy1Feof
                                #define DEF_clone_u3AUYy1Feof
inline s_Scope clone_u3AUYy1F(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_YgFd2lJf(a.overloads);
        res.extended = clone_h2eJ8vff(a.extended);
        res.items = clone_2gILMhVa(a.items);
        res.implicits = clone_2gILMhVa(a.implicits);
        res.imports = clone_KE4Ju1yD(a.imports);
        res.privates = clone_KE4Ju1yD(a.privates);
        res.usings = clone_lmGNhJZg(a.usings);
        res.converts = clone_lmGNhJZg(a.converts);
        res.pub_items = clone_dD3H4GX6(a.pub_items);
        res.pub_implicits = clone_dD3H4GX6(a.pub_implicits);
        res.pub_converts = clone_dD3H4GX6(a.pub_converts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_HWuJXO1jEAi
                                #define DEF_clone_HWuJXO1jEAi
inline s_SolverNotes clone_HWuJXO1j(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_NfKDlKSyerj
                                #define DEF_clone_NfKDlKSyerj
inline s_SolverOutput clone_NfKDlKSy(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_Q1UUsXjh(a.root);
        res.scope = clone_u3AUYy1F(a.scope);
        res.notes = clone_HWuJXO1j(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_x0DVJAtWpqh
                                #define DEF_clone_x0DVJAtWpqh
inline const s_CodegenOutput& clone_x0DVJAtW(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TzGdNpjoLWe
                                #define DEF_clone_TzGdNpjoLWe
inline s_ModuleOutputs clone_TzGdNpjo(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_yUzRV7An(a.types);
        res.solve = clone_NfKDlKSy(a.solve);
        res.cpp = clone_x0DVJAtW(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_Iv4I43NBh01
                                #define DEF_clone_Iv4I43NBh01
inline const s_ModuleStats& clone_Iv4I43NB(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_aAoyWZ00Mtb
                                #define DEF_clone_aAoyWZ00Mtb
inline const s_Profile& clone_aAoyWZ00(const s_Profile& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_G5fNGz6vaZ6
                                #define DEF_clone_G5fNGz6vaZ6
inline s_Module clone_G5fNGz6v(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_dD3H4GX6(a.modid);
        res.fname = clone_T1Jf1Z0K(a.fname);
        res.in = clone_BpjaAqZz(a.in);
        res.order = clone_CDer1pfR(a.order);
        res.out = clone_TzGdNpjo(a.out);
        res.stats = clone_Iv4I43NB(a.stats);
        res.profile = clone_aAoyWZ00(a.profile);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_map_kSAY8xRNAgb
                                #define DEF_map_kSAY8xRNAgb
inline fu::vec<s_Module> map_kSAY8xRN(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_G5fNGz6v(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_Zb6yNbpahB3
                                #define DEF_clone_Zb6yNbpahB3
inline fu::vec<s_Module> clone_Zb6yNbpa(fu::view<s_Module> a)
{
    return map_kSAY8xRN(a);
}
                                #endif

                                #ifndef DEF_clone_1KjRxs5s6Zg
                                #define DEF_clone_1KjRxs5s6Zg
inline const s_Map_iIYL7rECCBg& clone_1KjRxs5s(const s_Map_iIYL7rECCBg& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_OwUtczlseN4
                                #define DEF_clone_OwUtczlseN4
inline s_Context clone_OwUtczls(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.base_dir = clone_T1Jf1Z0K(a.base_dir);
        res.modules = clone_Zb6yNbpa(a.modules);
        res.dep_order = clone_KE4Ju1yD(a.dep_order);
        res.files = clone_1KjRxs5s(a.files);
        res.fuzzy = clone_1KjRxs5s(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

static fu::str ensure_main_2kqPnRj3(const fu::str& src)
{
    if (fu::has(src, "fn main"_fu))
        return fu::str(src);
    else
    {
        return ("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu;
    };
}

static fu::vec<fu::str>& l_6_0_Z69U6GP0(s_Map_iIYL7rECCBg& _)
{
    return _.keys;
}

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

static fu::vec<fu::str>& l_6_1_aIoOLTlD(s_Map_iIYL7rECCBg& _)
{
    return _.vals;
}

                                #ifndef DEF_update_dqzrV6TBGZ0
                                #define DEF_update_dqzrV6TBGZ0
inline bool update_dqzrV6TB(const fu::str& item, const fu::str& extra, s_Map_iIYL7rECCBg& _)
{
    int lo = 0;
    int hi = l_6_0_Z69U6GP0(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_0_Z69U6GP0(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_aIoOLTlD(_).mutref(i) = fu::str(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_Z69U6GP0(_).insert(lo, fu::str(item));
    l_6_1_aIoOLTlD(_).insert(lo, fu::str(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_1ffKFGH8Pfd
                                #define DEF_set_1ffKFGH8Pfd
inline bool set_1ffKFGH8(s_Map_iIYL7rECCBg& _, const fu::str& key, const fu::str& value)
{
    return update_dqzrV6TB(key, value, _);
}
                                #endif

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

inline static const fu::str& l_51_0_1ZaJguRX(const s_Module& l_51_0)
{
    return l_51_0.out.cpp.src;
}

                                #ifndef DEF_map_hl32Kvsojs4
                                #define DEF_map_hl32Kvsojs4
inline fu::vec<fu::str> map_hl32Kvso(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(l_51_0_1ZaJguRX(a[i]));

    return /*NRVO*/ res;
}
                                #endif

inline static const fu::str& l_51_1_Xwy7fJ46(const s_Module& l_51_1)
{
    return l_51_1.out.cpp.src;
}

                                #ifndef DEF_map_oqdKAhBOI0i
                                #define DEF_map_oqdKAhBOI0i
inline fu::vec<fu::str> map_oqdKAhBO(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(l_51_1_Xwy7fJ46(a[i]));

    return /*NRVO*/ res;
}
                                #endif

inline static bool l_51_2_iwnGIih0(fu::view<char> a, fu::view<char> b)
{
    return x3Cx3E_gCeFmDFw(a, b) < 0;
}

static void sort_6UzLs3iI(fu::vec<fu::str>& a)
{
    fu::str l {};
    fu::str r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = l_51_2_iwnGIih0(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_HsCeViTQSTi
                                #define DEF_sort_HsCeViTQSTi
inline void sort_HsCeViTQ(fu::vec<fu::str>& a)
{
    sort_6UzLs3iI(a);
}
                                #endif

inline static bool l_51_3_gmKzaGS6(fu::view<char> a, fu::view<char> b)
{
    return x3Cx3E_gCeFmDFw(a, b) < 0;
}

static void sort_4Ajvv8ar(fu::vec<fu::str>& a)
{
    fu::str l {};
    fu::str r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = l_51_3_gmKzaGS6(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_5TwEUtHMNlj
                                #define DEF_sort_5TwEUtHMNlj
inline void sort_5TwEUtHM(fu::vec<fu::str>& a)
{
    sort_4Ajvv8ar(a);
}
                                #endif

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

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

static s_Context compile_snippets_sz5Wqh9Y(fu::view<fu::str> sources, fu::vec<fu::str>&& fnames, s_Options&& options)
{
    options.dev |= s_DevOptions_DEV_CG_LifetimeAnnots;
    /*MOV*/ fu::str base_dir = (FUDIR + "__tests__/"_fu);
    while (fnames.size() < sources.size())
        fnames.push((x7E_gCeFmDFw((base_dir + "_"_fu), fu::i64dec(fnames.size())) + ".fu"_fu));

    /*MOV*/ s_Context ctx = clone_OwUtczls(CTX_PRELUDE);
    ctx.base_dir = static_cast<fu::str&&>(base_dir);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu::str& snippet = sources[i];
        fu::str src = ((i == (sources.size() - 1)) ? ensure_main_2kqPnRj3(snippet) : fu::str(snippet));
        set_1ffKFGH8(ctx.files, fnames[i], src);
        if (fu::has(snippet, "/*PRINT*/"_fu))
            options.dev |= s_DevOptions_DEV_Print;

    };
    s_Context ctx_reverseBuildOrder = ((sources.size() > 1) ? clone_OwUtczls(ctx) : s_Context{});
    compile_adoKzaAQ(last_dHu5rBA1(fnames), ctx, options);
    if (sources.size() > 1)
    {
        for (int i_1 = 0; i_1 < sources.size(); i_1++)
        {
            const fu::str& fname = fnames[i_1];
            compile_adoKzaAQ(fname, ctx_reverseBuildOrder, options);
        };
        fu::vec<fu::str> fwd = map_hl32Kvso(ctx.modules);
        fu::vec<fu::str> rev = map_oqdKAhBO(ctx_reverseBuildOrder.modules);
        sort_HsCeViTQ(fwd);
        sort_5TwEUtHM(rev);
        if (fwd.size() == rev.size())
        {
            for (int i_2 = 0; i_2 < ctx.modules.size(); i_2++)
            {
                if (!(fwd[i_2] == rev[i_2]))
                    fu::fail((((("compile_snippets: fwd != rev:"_fu + "\n\nFWD:\n"_fu) + fwd[i_2]) + "\n\nREV:\n"_fu) + rev[i_2]));

            };
        }
        else
            fu::fail("compile_snippets: #fwd != #rev"_fu);

    };
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        s_Module& module = ctx.modules.mutref(i_1);
        const s_SolverNotes notes = module.out.solve.notes;
        if (notes)
            module.out.cpp.src += (x7E_gCeFmDFw("\n// "_fu, str_vnKE5IyQ(notes)) + "\n"_fu);

    };
    return /*NRVO*/ ctx;
}

fu::str snippet2cpp_VF0dxkAl(const fu::str& src)
{
    fu::str fname = "/DIR/FILE.fu"_fu;
    s_Context ctx = compile_snippets_sz5Wqh9Y((fu::slate<1, fu::str> { fu::str(src) }), fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(fname) } }, s_Options{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu::str(module.out.cpp.src);

    };
    return ""_fu;
}

static int unindent_left_wAM9q1gI(fu::view<char> src, const int i0)
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

inline static fu::vec<fu::str>& l_0_0_JTOmAv7f(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}

                                #ifndef DEF_split_XgDUIhDMMWd
                                #define DEF_split_XgDUIhDMMWd
inline void split_XgDUIhDM(const fu::str& str, fu::view<char> sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {
            l_0_0_JTOmAv7f(fu::slice(str, last, next), result);
            last = (next + N);
        };
    };
    if (last)
        l_0_0_JTOmAv7f(fu::slice(str, last), result);
    else
        l_0_0_JTOmAv7f(str, result);

}
                                #endif

                                #ifndef DEF_split_e8WhGmUqohg
                                #define DEF_split_e8WhGmUqohg
inline fu::vec<fu::str> split_e8WhGmUq(const fu::str& str, fu::view<char> sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_XgDUIhDM(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_only_dHu5rBA1qqg
                                #define DEF_only_dHu5rBA1qqg
inline const fu::str& only_dHu5rBA1(fu::view<fu::str> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF_starts_t2TApdnqRc8
                                #define DEF_starts_t2TApdnqRc8
inline bool starts_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

static fu::str ERR_TRIM_S1zimhkt(const fu::str& e)
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

static fu::str ERR_STRIP_ANSI_S1zimhkt(/*MOV*/ fu::str&& e)
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

static fu::str ERR_STRIP_SNIPPETS_S1zimhkt(/*MOV*/ fu::str&& e)
{
    int i0 = 0;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (!((c == ' ') || (c == '\n')))
        {
            const bool snippet = (((c >= '0') ? (c <= '9') : false) || (c == '|'));
            i++;
            for (; i < e.size(); i++)
            {
                const char c_1 = e[i];
                if (c_1 == '\n')
                {
                    i++;
                    if (snippet)
                    {
                        e.splice(i0, (i - i0));
                        i = i0;
                    }
                    else
                        i0 = i;

                    i--;
                    break;
                };
            };
        };
    };
    return static_cast<fu::str&&>(e);
}

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

                                #ifndef DEF_starts_Db9eGFmCKDj
                                #define DEF_starts_Db9eGFmCKDj
inline bool starts_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_ends_Db9eGFmCKDj
                                #define DEF_ends_Db9eGFmCKDj
inline bool ends_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
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

inline static fu::vec<fu::str>& l_0_0_P7gzeAeI(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}

                                #ifndef DEF_split_kYoKIIujTu1
                                #define DEF_split_kYoKIIujTu1
inline void split_kYoKIIuj(const fu::str& str, const char sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    while (((next = find_T9i966y9(str, sep, last)) >= 0))
    {
        l_0_0_P7gzeAeI(fu::slice(str, last, next), result);
        last = (next + N);
    };
    if (last)
        l_0_0_P7gzeAeI(fu::slice(str, last), result);
    else
        l_0_0_P7gzeAeI(str, result);

}
                                #endif

                                #ifndef DEF_split_42u6frOYgx6
                                #define DEF_split_42u6frOYgx6
inline fu::vec<fu::str> split_42u6frOY(const fu::str& str, const char sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_kYoKIIuj(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static bool check_XUXAGncz(const fu::str& word, fu::view<char> actual)
{
    const int pipe = find_KonMQ4KB(word, '|');
    if ((pipe > 1) && starts_Db9eGFmC(word, '(') && ends_Db9eGFmC(word, ')'))
    {
        fu::vec<fu::str> alternatives = split_42u6frOY(fu::slice(word, 1, (word.size() - 1)), '|');
        for (int i = 0; i < alternatives.size(); i++)
        {
            if (check_XUXAGncz(alternatives[i], actual))
                return true;

        };
        return false;
    }
    else
    {
        fu::str expect = lower_MpX0JQTu(fu::str(word));
        return fu::has(actual, expect);
    };
}

static void verify_errmsg_5ROk3yHq(fu::view<char> topic, const fu::str& e, const fu::str& msg)
{
    fu::str actual = lower_MpX0JQTu(ERR_STRIP_SNIPPETS_S1zimhkt(ERR_STRIP_ANSI_S1zimhkt(ERR_TRIM_S1zimhkt(e))));
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

                if (!check_XUXAGncz(exact, actual))
                    fu::fail((((((((topic + " mismatch:\n\n    Expected error keyword:\n        "_fu) + qBAD_3PsDzMvu(exact)) + " from pattern <fail"_fu) + qBAD_3PsDzMvu(msg)) + ">"_fu) + "\n\n    ... not present in error message:\n\n"_fu) + e));

            };
            m0 = -1;
        }
        else if (m0 < 0)
            m0 = m1;

    };
    if (!BUG_ok && fu::has(e, "BUG"_fu))
        fu::fail(((topic + " error message contains BUG:\n\n"_fu) + e));

}

static fu::str ERR_KEY_2gac3h64(fu::view<fu::str> sources)
{
    /*MOV*/ fu::str key = ""_fu;
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_wAM9q1gI(src, src.size());
        key += fu::get_view_start0(src, end);
    };
    return /*NRVO*/ key;
}

inline static void l_51_4_IYqvJOT4(fu::str& part)
{
    part.shrink(unindent_left_wAM9q1gI(part, part.size()));
}

                                #ifndef DEF_each_HcQCJUkfQd8
                                #define DEF_each_HcQCJUkfQd8
inline void each_HcQCJUkf(fu::view_mut<fu::str> a)
{
    for (int i = 0; i < a.size(); i++)
        l_51_4_IYqvJOT4(a.mutref(i));

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

                                #ifndef DEF_last_uwKwzsvZqOh
                                #define DEF_last_uwKwzsvZqOh
inline char last_uwKwzsvZ(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_ends_t2TApdnqRc8
                                #define DEF_ends_t2TApdnqRc8
inline bool ends_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_parse_QH70UEfFCS2
                                #define DEF_parse_QH70UEfFCS2
inline s_SolverNotes parse_QH70UEfF(fu::view<char> v)
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
    else if (v == "N_SD_HasStaticInit"_fu)
        return s_SolverNotes_N_SD_HasStaticInit;
    else if (v == "N_SD_ExternPrivates"_fu)
        return s_SolverNotes_N_SD_ExternPrivates;
    else if (v == "N_COWRestrict"_fu)
        return s_SolverNotes_N_COWRestrict;

    return s_SolverNotes{};
}
                                #endif

                                #ifndef DEF_parseWild_QH70UEfFCS2
                                #define DEF_parseWild_QH70UEfFCS2
inline s_SolverNotes parseWild_QH70UEfF(fu::view<char> v)
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
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_FnRecursion;

                };

                {
                    fu::str opt = "N_FnResolve"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_FnResolve;

                };

                {
                    fu::str opt = "N_FnReopen"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_FnReopen;

                };

                {
                    fu::str opt = "N_TypeRecursion"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_TypeRecursion;

                };

                {
                    fu::str opt = "N_TypeResolve"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_TypeResolve;

                };

                {
                    fu::str opt = "N_TypeReopen"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_TypeReopen;

                };

                {
                    fu::str opt = "N_DeadCode"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_DeadCode;

                };

                {
                    fu::str opt = "N_DeadCall"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_DeadCall;

                };

                {
                    fu::str opt = "N_DeadLet"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_DeadLet;

                };

                {
                    fu::str opt = "N_DeadArrlit"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_DeadArrlit;

                };

                {
                    fu::str opt = "N_DeadLoopInit"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_DeadLoopInit;

                };

                {
                    fu::str opt = "N_DeadConv"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_DeadConv;

                };

                {
                    fu::str opt = "N_NonTrivAutoCopy"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_NonTrivAutoCopy;

                };

                {
                    fu::str opt = "N_RelaxRespec"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_RelaxRespec;

                };

                {
                    fu::str opt = "N_UnusedImplicit"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedImplicit;

                };

                {
                    fu::str opt = "N_UnusedCall"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedCall;

                };

                {
                    fu::str opt = "N_UnusedDefer"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedDefer;

                };

                {
                    fu::str opt = "N_UnusedTry"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedTry;

                };

                {
                    fu::str opt = "N_UnusedAndOr"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedAndOr;

                };

                {
                    fu::str opt = "N_UnusedIfElse"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedIfElse;

                };

                {
                    fu::str opt = "N_UnusedArrlit"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedArrlit;

                };

                {
                    fu::str opt = "N_UnusedLet"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_UnusedLet;

                };

                {
                    fu::str opt = "N_BckMustSeq"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_BckMustSeq;

                };

                {
                    fu::str opt = "N_AARMustSeq"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_AARMustSeq;

                };

                {
                    fu::str opt = "N_AARSoftRisk"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_AARSoftRisk;

                };

                {
                    fu::str opt = "N_MoveMustSeq"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_MoveMustSeq;

                };

                {
                    fu::str opt = "N_SD_HasStaticInit"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_SD_HasStaticInit;

                };

                {
                    fu::str opt = "N_SD_ExternPrivates"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_SolverNotes_N_SD_ExternPrivates;

                };
                fu::str opt = "N_COWRestrict"_fu;
                if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                    result |= s_SolverNotes_N_COWRestrict;

            };
            return result;
        };
    };
    return parse_QH70UEfF(v);
}
                                #endif

                                #ifndef DEF_parse_PiQK11ii92e
                                #define DEF_parse_PiQK11ii92e
inline s_CGDefects parse_PiQK11ii(fu::view<char> v)
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

                                #ifndef DEF_parseWild_PiQK11ii92e
                                #define DEF_parseWild_PiQK11ii92e
inline s_CGDefects parseWild_PiQK11ii(fu::view<char> v)
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
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_CGDefects_GNUStmtExpr;

                };

                {
                    fu::str opt = "Goto"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_CGDefects_Goto;

                };

                {
                    fu::str opt = "PointlessMustSeq"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_CGDefects_PointlessMustSeq;

                };

                {
                    fu::str opt = "LocalConstBool"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_CGDefects_LocalConstBool;

                };

                {
                    fu::str opt = "ConstCast"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_CGDefects_ConstCast;

                };

                {
                    fu::str opt = "PointlessLocal"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_CGDefects_PointlessLocal;

                };

                {
                    fu::str opt = "IrrelevantLiteral"_fu;
                    if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                        result |= s_CGDefects_IrrelevantLiteral;

                };
                fu::str opt = "DuplicateFunctions"_fu;
                if (starts_t2TApdnq(opt, prefix) && ends_t2TApdnq(opt, suffix))
                    result |= s_CGDefects_DuplicateFunctions;

            };
            return result;
        };
    };
    return parse_PiQK11ii(v);
}
                                #endif

static fu::str all_src_35mqdvl0(fu::view<fu::str> sources)
{
    return join_jCe9HYtv(sources, "\n----\n"_fu);
}

static fu::str& this_src_aS0KPUuq(const int i, fu::view_mut<fu::str> sources)
{
    return sources.mutref(i);
}

static const fu::str& this_cpp_VtWpL7FH(const s_ModuleOutputs& out)
{
    return out.cpp.src;
}

inline static const fu::str& l_51_5_RogesqlC(const s_Module& l_51_5)
{
    return l_51_5.out.cpp.src;
}

                                #ifndef DEF_map_lKUb3u1qK7j
                                #define DEF_map_lKUb3u1qK7j
inline fu::vec<fu::str> map_lKUb3u1q(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(l_51_5_RogesqlC(a[i]));

    return /*NRVO*/ res;
}
                                #endif

static fu::str all_cpp_uquiu6HQ(const s_Context& ctx)
{
    return join_jCe9HYtv(map_lKUb3u1q(ctx.modules), "\n----\n"_fu);
}

                                #ifndef DEF_x21x3D_gCeFmDFw0L8
                                #define DEF_x21x3D_gCeFmDFw0L8
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

inline static void l_51_6_UWXIoAmS(const fu::str& x, fu::view_mut<fu::str> sources, const s_Context& ctx, fu::str& testdiff_prepend)
{
    const s_SolverNotes note = parseWild_QH70UEfF(x);
    const int idx = (!note ? find_KonMQ4KB(x, ' ') : 0);
    if (idx < 0)
        fu::fail(((("Invalid ;; CHECK, no argument: `;; "_fu + x) + "` in:\n"_fu) + all_src_35mqdvl0(sources)));
    else
    {
        fu::view<char> cmd = fu::get_view_start0(x, idx);
        fu::view<char> rest = fu::get_view(x, (idx + 1));
        bool found = false;
        for (int i = 0; i < sources.size(); i++)
        {
            const s_ModuleOutputs& out = ctx.modules[(i + 1)].out;
            if (note)
            {
                if (out.solve.notes & note)
                    return;
                else
                {
                    fu::str _0 {};
                    fu::fail((_0 = (((("Expected note not listed: "_fu + qBAD_3PsDzMvu(x)) + " in:\n"_fu) + this_src_aS0KPUuq(i, sources)) + "\n\nOutput is:\n\n"_fu), (static_cast<fu::str&&>(_0) + this_src_aS0KPUuq(i, sources))));
                };
            }
            else if ((found = fu::has(this_cpp_VtWpL7FH(out), rest)))
                break;

        };
        if (cmd == "EXPECT"_fu)
        {
            if (!(found))
                fu::fail(((((("EXPECT mismatch: `;; "_fu + x) + "` in:\n"_fu) + all_src_35mqdvl0(sources)) + "\n\nOutput is:\n\n"_fu) + all_cpp_uquiu6HQ(ctx)));

        }
        else if (cmd != "TODO"_fu)
            fu::fail(((("Unknown ;; CHECK: `;; "_fu + x) + "` in:\n"_fu) + all_src_35mqdvl0(sources)));
        else if (found)
            fu::fail(((((("TODO test is actually passing: `;; "_fu + x) + "` in:\n"_fu) + all_src_35mqdvl0(sources)) + "\n\nOutput is:\n\n"_fu) + all_cpp_uquiu6HQ(ctx)));
        else
        {
            testdiff_prepend += ((";; "_fu + x) + "\n"_fu);
        };
    };
}

                                #ifndef DEF_each_rkpdSRjARG8
                                #define DEF_each_rkpdSRjARG8
inline void each_rkpdSRjA(fu::view<fu::str> a, fu::view_mut<fu::str> sources, const s_Context& ctx, fu::str& testdiff_prepend)
{
    for (int i = 0; i < a.size(); i++)
    {
        l_51_6_UWXIoAmS(a[i], sources, ctx, testdiff_prepend);
    };
}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu::str DEFAULT_WORKSPACE;
                                #endif

                                #ifndef DEF_str_s4ven7yysl4
                                #define DEF_str_s4ven7yysl4
inline fu::str str_s4ven7yy(const s_CGDefects n)
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

s_Context ZERO_nyNhVYvN(fu::vec<fu::str>&& sources, s_Options&& options, s_TestDiffs& testdiffs)
{
    // Hoisted:
    fu::str x {};

    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu::str& src = sources[i];
            int start0 = fu::lfind(src, "<fail"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = fu::lfind(src, "</fail>"_fu, start0);
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
                            start0 = unindent_left_wAM9q1gI(src, start0);
                            end0 = unindent_left_wAM9q1gI(src, end0);
                            fu::str prefix = fu::slice(src, 0, start0);
                            fu::str suffix = fu::slice(src, end1, src.size());
                            fu::vec<fu::str> split = split_e8WhGmUq(fu::slice(src, start1, end0), "<pass/>"_fu);
                            if (split.size() > 1)
                            {
                                if (split.size() < 3)
                                {
                                    fu::vec<fu::str> fails = split_e8WhGmUq(split[0], "<fail/>"_fu);
                                    split.shift();
                                    fu::view<char> pass = only_dHu5rBA1(split);
                                    for (int j = fails.size(); j-- > 0; )
                                    {
                                        const fu::str& fail = fails[j];
                                        const bool isTODO = starts_t2TApdnq(fail, "<TODO/>"_fu);
                                        fu::str fail_1 = (isTODO ? fu::slice(fail, 7) : fu::str(fail));
                                        const int end = unindent_left_wAM9q1gI(fail_1, fail_1.size());
                                        sources.mutref(i) = ((prefix + fu::get_view_start0(fail_1, end)) + suffix);
                                        s_Options options_1 { options };
                                        options_1.dev |= s_DevOptions_DEV_ExpectFail;

                                        try
                                        {
                                        {
                                            ZERO_nyNhVYvN(fu::vec<fu::str>(sources), s_Options(options_1), testdiffs);
                                        }
                                        }
                                        catch (const std::exception& o_0)
                                        {
                                            fu::str e = fu::to_str(o_0.what());

                                        {
                                            verify_errmsg_5ROk3yHq("<fail>"_fu, e, msg);
                                            set_next_lHORuDVk(testdiffs, ERR_KEY_2gac3h64(sources), e);
                                            if (isTODO)
                                                fu::fail(("<fail><todo/> is actually passing:\n\n"_fu + e));
                                            else
                                                continue;

                                        }
                                        }
;
                                        if (!isTODO)
                                            fu::fail(("<fail> does not throw:\n"_fu + sources[i]));

                                    };
                                    const int end = unindent_left_wAM9q1gI(pass, pass.size());
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
            int start0 = fu::lfind(src, "<alt>"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = fu::lfind(src, "</alt>"_fu, start0);
                if ((end0 >= 0))
                {
                    const int start1 = (start0 + 5);
                    const int end1 = (end0 + 6);
                    start0 = unindent_left_wAM9q1gI(src, start0);
                    end0 = unindent_left_wAM9q1gI(src, end0);
                    fu::str prefix = fu::slice(src, 0, start0);
                    fu::str suffix = fu::slice(src, end1, src.size());
                    fu::vec<fu::str> split = split_e8WhGmUq(fu::slice(src, start1, end0), "<alt/>"_fu);
                    if (split.size() < 2)
                        split += ""_fu;

                    for (int j = split.size(); j-- > 0; )
                    {
                        fu::view<char> part = split[j];
                        const int end = unindent_left_wAM9q1gI(part, part.size());
                        sources.mutref(i_1) = ((prefix + fu::get_view_start0(part, end)) + suffix);
                        if (j)
                        {
                            ZERO_nyNhVYvN(fu::vec<fu::str>(sources), s_Options(options), testdiffs);
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
            int start0 = fu::lfind(src, "<flip>"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = fu::lfind(src, "</flip>"_fu, start0);
                if ((end0 >= 0))
                {
                    const int start1 = (start0 + 6);
                    const int end1 = (end0 + 7);
                    start0 = unindent_left_wAM9q1gI(src, start0);
                    end0 = unindent_left_wAM9q1gI(src, end0);
                    fu::str prefix = fu::slice(src, 0, start0);
                    fu::str suffix = fu::slice(src, end1, src.size());
                    fu::vec<fu::str> split = split_e8WhGmUq(fu::slice(src, start1, end0), "<flip/>"_fu);
                    if (split.size() != 2)
                        fu::fail("We expect exactly one `<flip/>` in a `<flip></flip>`."_fu);
                    else
                    {
                        each_HcQCJUkf(split);
                        for (int j = split.size(); j-- > 0; )
                        {
                            fu::str a { split[0] };
                            fu::str b { split[1] };
                            if (j)
                                std::swap(a, b);

                            sources.mutref(i_2) = (((prefix + a) + b) + suffix);
                            if (j)
                            {
                                ZERO_nyNhVYvN(fu::vec<fu::str>(sources), s_Options(options), testdiffs);
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
            int start0 = fu::lfind(src, "<split/>"_fu);
            const int start1 = (start0 + 8);
            if (start0 < 0)
                break;
            else
            {
                const int start00 = start0;
                while (start0 && (src[(start0 - 1)] == ' '))
                    start0--;

                /*MOV*/ fu::str moduleA = fu::slice(src, 0, start0);
                /*MOV*/ fu::str moduleB = ((x7E_gCeFmDFw((fu::get_view(src, start0, start00) + "pub import _"_fu), fu::i64dec(i_3)) + ";"_fu) + fu::get_view(src, start1));
                /*MOV*/ fu::str without = (fu::get_view_start0(src, start0) + fu::get_view(src, start1));
                sources.mutref(i_3) = static_cast<fu::str&&>(without);
                ZERO_nyNhVYvN(fu::vec<fu::str>(sources), s_Options(options), testdiffs);
                sources.mutref(i_3) = static_cast<fu::str&&>(moduleA);
                sources.insert((i_3 + 1), static_cast<fu::str&&>(moduleB));
            };
        };
    };
    if (!options)
    {
        ZERO_nyNhVYvN(fu::vec<fu::str>(sources), s_Options { s_Lint{}, s_SolverNotes{}, s_CGDefects{}, s_DevOptions_DEV_DontFoldLiterals, 0u }, testdiffs);
    };
    s_DEV_OnFail onfail = s_DEV_OnFail_OnFail_PrintOutput;
    if (!s_DevOptions((options.dev & s_DevOptions_DEV_ExpectFail)))
        onfail |= s_DEV_OnFail_OnFail_WriteRepro;

    fu_DEFER_IF_ERR(if (!s_DevOptions((options.dev & s_DevOptions_DEV_ExpectFail)))
    {
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("\nFAILING TESTCASE:\n"_fu + join_jCe9HYtv(sources, "\n"_fu)), x)) }));
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
        while (((start = fu::lfind(src, " ;; "_fu, start)) >= 0))
        {
            int end_1 = find_T9i966y9(src, '\n', (start + 4));
            if (end_1 < 0)
                end_1 = src.size();

            /*MOV*/ fu::str annot = fu::slice(src, (start + 4), end_1);
            while (annot && (last_uwKwzsvZ(annot) <= ' '))
                annot.pop();

            if (annot[0] == '!')
            {
                fu::view<char> annot_1 = fu::get_view(annot, 1);
                const s_SolverNotes notes = parseWild_QH70UEfF(annot_1);
                if (notes)
                    options.break_notes |= notes;
                else
                {
                    const s_CGDefects defects = parseWild_PiQK11ii(annot_1);
                    if (defects)
                        options.break_defects |= defects;
                    else
                        fu::fail((("Bad break_note/defect: `;; "_fu + annot_1) + "`."_fu));

                };
            }
            else
            {
                const s_CGDefects defect = parseWild_PiQK11ii(annot);
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
    /*MOV*/ s_Context ctx = compile_snippets_sz5Wqh9Y(sources, fu::vec<fu::str>{}, s_Options(options));
    fu::str testdiff_prepend = ""_fu;
    each_rkpdSRjA(expectations, sources, ctx, testdiff_prepend);
    const bool run = true;
    build_dvjTrKQM(fu::str(DEFAULT_WORKSPACE), FUDIR, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, "debug"_fu, onfail, run, false, false, false, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);
    build_dvjTrKQM(fu::str(DEFAULT_WORKSPACE), FUDIR, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, fu::view<char>{}, onfail, run, false, false, false, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);

    {
        s_CGDefects defects_1 {};
        for (int i_5 = 0; i_5 < sources.size(); i_5++)
        {
            const s_CodegenOutput& cpp = ctx.modules[(i_5 + 1)].out.cpp;
            defects_1 |= cpp.defects;
        };
        const s_CGDefects unexpected = s_CGDefects((defects_1 & s_CGDefects(~ok_defects)));
        const s_CGDefects unnecessary = s_CGDefects((s_CGDefects(~defects_1) & ok_defects));
        if (unexpected)
            fu::fail(((((("Unwanted CGDefect: "_fu + qBAD_3PsDzMvu(str_s4ven7yy(unexpected))) + " in:\n"_fu) + all_src_35mqdvl0(sources)) + "\n\nOutput is:\n\n"_fu) + all_cpp_uquiu6HQ(ctx)));
        else if (unnecessary)
            fu::fail(((((("Unnecessary CGDefect annotation: "_fu + qID_3PsDzMvu(str_s4ven7yy(unnecessary))) + " in:\n"_fu) + all_src_35mqdvl0(sources)) + "\n\nOutput is:\n\n"_fu) + all_cpp_uquiu6HQ(ctx)));

    };

    {
        if (testdiff_prepend)
        {
            testdiff_prepend += "\n"_fu;
        };
        fu::str key = ""_fu;
        for (int i_6 = 0; i_6 < sources.size(); i_6++)
        {
            key += sources[i_6];
            fu::view<char> actual = ctx.modules[((i_6 + ctx.modules.size()) - sources.size())].out.cpp.src;
            set_next_lHORuDVk(testdiffs, key, (testdiff_prepend + actual));
        };
    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
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

static fu::str indent_pPYckf56(const fu::str& src)
{
    return replace_t9kb9bFx(src, "\n"_fu, "\n\t"_fu);
}

void ZERO_SAME_JNM3Dz9T(fu::view<fu::vec<fu::str>> alts, s_TestDiffs& testdiffs)
{
    fu::vec<s_Module> expect = ZERO_nyNhVYvN(fu::vec<fu::str>(alts[0]), s_Options{}, testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu::vec<s_Module> actual = compile_snippets_sz5Wqh9Y(alts[i], fu::vec<fu::str>{}, s_Options{}).modules;
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
                    write_t5NVzxJy((FUDIR + "expect.diff"_fu), ((strip_MUF5RZQ8(inspect_SOTjKmcd(expect[m])) + "\n\n----------------\n\n"_fu) + x), RW_RW_RW);
                    write_t5NVzxJy((FUDIR + "actual.diff"_fu), ((strip_MUF5RZQ8(inspect_SOTjKmcd(actual[m])) + "\n\n----------------\n\n"_fu) + a), RW_RW_RW);
                    fu::fail((((x7E_gCeFmDFw((((x7E_gCeFmDFw(((x7E_gCeFmDFw("ZERO_SAME: alts["_fu, fu::i64dec(i)) + "] mismatch at:\n"_fu) + "\nexpect["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_pPYckf56(x)) + "\nactual["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_pPYckf56(a)) + "\n"_fu));
                };
            };
        };
    };
}

void TODO_wUYWWjRs(const fu::vec<fu::str>& sources, const fu::str& currently, s_TestDiffs& testdiffs)
{

    try
    {
    {
        ZERO_nyNhVYvN(fu::vec<fu::str>(sources), s_Options { s_Lint{}, s_SolverNotes{}, s_CGDefects{}, s_DevOptions_DEV_ExpectFail, 0u }, testdiffs);
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str e = fu::to_str(o_0.what());

    {
        verify_errmsg_5ROk3yHq("TODO()"_fu, e, (currently ? fu::str(currently) : "keywords line:col+chars"_fu));
        set_next_lHORuDVk(testdiffs, ERR_KEY_2gac3h64(sources), ("TODO: "_fu + ERR_TRIM_S1zimhkt(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + join_jCe9HYtv(sources, "\n\n"_fu)));
}

s_Context ZERO_1E3dlGAi(const fu::str& src, s_TestDiffs& testdiffs)
{
    return ZERO_nyNhVYvN(fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(src) } }, s_Options{}, testdiffs);
}

void TODO_bvxMZmIw(const fu::str& src, const fu::str& currently, s_TestDiffs& testdiffs)
{
    TODO_wUYWWjRs(fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(src) } }, currently, testdiffs);
}

void ZERO_SAME_oJfgtjf4(fu::view<fu::str> alts, s_TestDiffs& testdiffs)
{
    fu::vec<fu::vec<fu::str>> wrap {};
    for (int i = 0; i < alts.size(); i++)
    {
        wrap += fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(alts[i]) } };
    };
    ZERO_SAME_JNM3Dz9T(wrap, testdiffs);
}

#endif
