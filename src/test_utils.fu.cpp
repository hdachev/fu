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
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_qfSmCKRS93e;
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
struct s_TestDiffs;
void compile_BH9o2u0I(const fu::str&, fu::view<char>, s_Context&, const s_Options&);
s_Context ZERO_FIg09C9j(fu::vec<fu::str>&&, const s_Options&, s_TestDiffs&);
fu::str lower_0ZAZU2Wn(fu::str&&);
static bool check_o2dCBMHP(const fu::str&, fu::view<char>);
fu::str qBAD_bF2G8fJR(fu::view<char>);
void set_next_XReNAHMs(s_TestDiffs&, const fu::str&, const fu::str&);
void build_Bzn6vtbK(fu::str&&, fu::view<char>, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, fu::view<char>, fu::view<char>, bool, bool, bool, bool, fu::view<fu::str>, fu::view<fu::str>, const s_Context&);
fu::str qID_bF2G8fJR(fu::view<char>);
fu::str inspect_66vMeR0m(const s_Module&);
fu::str strip_XUYqGlVW(fu::view<char>);
int write_l2QLWLgK(fu::str&&, fu::view<char>, unsigned);

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEF_clone_DHH5Baj0nf5
                                #define DEF_clone_DHH5Baj0nf5
inline int clone_DHH5Baj0(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_DcDCLzbwsce
                                #define DEF_clone_DcDCLzbwsce
inline const fu::str& clone_DcDCLzbw(const fu::str& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_cXjT2jIIpdc
                                #define DEF_clone_cXjT2jIIpdc
inline const s_ModuleInputs& clone_cXjT2jII(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_otwjp0Ty2Uc
                                #define DEF_clone_otwjp0Ty2Uc
inline const s_ModuleOrder& clone_otwjp0Ty(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_4EW58o1IPu4
                                #define DEF_clone_4EW58o1IPu4
inline const fu::vec<s_Struct>& clone_4EW58o1I(const fu::vec<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_mJncZhdAp2e
                                #define DEF_clone_mJncZhdAp2e
inline const s_SolvedNode& clone_mJncZhdA(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_24hW9Ytuzm4
                                #define DEF_clone_24hW9Ytuzm4
inline const fu::vec<s_Overload>& clone_24hW9Ytu(const fu::vec<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_kIrmu6DQ4rl
                                #define DEF_clone_kIrmu6DQ4rl
inline const fu::vec<s_Extended>& clone_kIrmu6DQ(const fu::vec<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ESOZciocfl7
                                #define DEF_clone_ESOZciocfl7
inline const fu::vec<s_ScopeItem>& clone_ESOZcioc(const fu::vec<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_kttDaK42hjd
                                #define DEF_clone_kttDaK42hjd
inline const fu::vec<int>& clone_kttDaK42(const fu::vec<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_AfzW5oEvLe7
                                #define DEF_clone_AfzW5oEvLe7
inline const fu::vec<s_Target>& clone_AfzW5oEv(const fu::vec<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TfbmnLDB9Pe
                                #define DEF_clone_TfbmnLDB9Pe
inline s_Scope clone_TfbmnLDB(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_24hW9Ytu(a.overloads);
        res.extended = clone_kIrmu6DQ(a.extended);
        res.items = clone_ESOZcioc(a.items);
        res.implicits = clone_ESOZcioc(a.implicits);
        res.imports = clone_kttDaK42(a.imports);
        res.privates = clone_kttDaK42(a.privates);
        res.usings = clone_AfzW5oEv(a.usings);
        res.converts = clone_AfzW5oEv(a.converts);
        res.pub_items = clone_DHH5Baj0(a.pub_items);
        res.pub_cnvrts = clone_DHH5Baj0(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_55mLsuleO26
                                #define DEF_clone_55mLsuleO26
inline s_SolverNotes clone_55mLsule(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_7R2wn4vRxyb
                                #define DEF_clone_7R2wn4vRxyb
inline s_SolverOutput clone_7R2wn4vR(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_mJncZhdA(a.root);
        res.scope = clone_TfbmnLDB(a.scope);
        res.notes = clone_55mLsule(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_iygyhUpoYj9
                                #define DEF_clone_iygyhUpoYj9
inline const s_CodegenOutput& clone_iygyhUpo(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_wo58Cdr7rS8
                                #define DEF_clone_wo58Cdr7rS8
inline s_ModuleOutputs clone_wo58Cdr7(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_4EW58o1I(a.types);
        res.solve = clone_7R2wn4vR(a.solve);
        res.cpp = clone_iygyhUpo(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_kBrbPK4ZhK9
                                #define DEF_clone_kBrbPK4ZhK9
inline const s_ModuleStats& clone_kBrbPK4Z(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_mLnIjDzkpRc
                                #define DEF_clone_mLnIjDzkpRc
inline s_Module clone_mLnIjDzk(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_DHH5Baj0(a.modid);
        res.fname = clone_DcDCLzbw(a.fname);
        res.in = clone_cXjT2jII(a.in);
        res.order = clone_otwjp0Ty(a.order);
        res.out = clone_wo58Cdr7(a.out);
        res.stats = clone_kBrbPK4Z(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_map_uXnvsVx1UHd
                                #define DEF_map_uXnvsVx1UHd
inline fu::vec<s_Module> map_uXnvsVx1(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_mLnIjDzk(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_mmo21ZBMRNf
                                #define DEF_clone_mmo21ZBMRNf
inline fu::vec<s_Module> clone_mmo21ZBM(fu::view<s_Module> a)
{
    return map_uXnvsVx1(a);
}
                                #endif

                                #ifndef DEF_clone_r8XweoGlSE0
                                #define DEF_clone_r8XweoGlSE0
inline const s_Map_qfSmCKRS93e& clone_r8XweoGl(const s_Map_qfSmCKRS93e& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ZlBdBfUR1la
                                #define DEF_clone_ZlBdBfUR1la
inline s_Context clone_ZlBdBfUR(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.modules = clone_mmo21ZBM(a.modules);
        res.dep_order = clone_kttDaK42(a.dep_order);
        res.files = clone_r8XweoGl(a.files);
        res.fuzzy = clone_r8XweoGl(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

static fu::str ensure_main_4kWhZcBS(const fu::str& src)
{
    if (fu::has(src, "fn main"_fu))
        return fu::str(src);
    else
    {
        return ("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu;
    };
}

                                #ifndef DEF_FUDIR
                                #define DEF_FUDIR
extern const fu::str FUDIR;
                                #endif

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::vec<fu::str>& l_6_0_JOP8UJBE(s_Map_qfSmCKRS93e& _)
{
    return _.keys;
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

static fu::vec<fu::str>& l_6_1_HQq3H1kH(s_Map_qfSmCKRS93e& _)
{
    return _.vals;
}

                                #ifndef DEF_update_gPPUWYu8ysb
                                #define DEF_update_gPPUWYu8ysb
inline bool update_gPPUWYu8(const fu::str& item, const fu::str& extra, s_Map_qfSmCKRS93e& _)
{
    int lo = 0;
    int hi = l_6_0_JOP8UJBE(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(l_6_0_JOP8UJBE(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_HQq3H1kH(_).mutref(i) = fu::str(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_JOP8UJBE(_).insert(lo, fu::str(item));
    l_6_1_HQq3H1kH(_).insert(lo, fu::str(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_jaErudM5jC8
                                #define DEF_set_jaErudM5jC8
inline bool set_jaErudM5(s_Map_qfSmCKRS93e& _, const fu::str& key, const fu::str& value)
{
    return update_gPPUWYu8(key, value, _);
}
                                #endif

                                #ifndef DEF_str_7NcqyHupk37
                                #define DEF_str_7NcqyHupk37
inline fu::str str_7NcqyHup(const s_SolverNotes n)
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

s_Context compile_snippets_Xt97hx1p(fu::view<fu::str> sources, fu::view<fu::str> fnames, fu::view<s_Options> options)
{
    /*MOV*/ s_Context ctx = clone_ZlBdBfUR(CTX_PRELUDE);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu::str& snippet = sources[i];
        fu::str src = ((i == (sources.size() - 1)) ? ensure_main_4kWhZcBS(snippet) : fu::str(snippet));
        fu::str fname = ((fnames.size() > i) ? fu::str(fnames[i]) : (x7E_r7bhmB7D((FUDIR + "__tests__/_"_fu), fu::i64dec(i)) + ".fu"_fu));
        s_Options options_1 { ((options.size() > i) ? options[i] : (*(const s_Options*)fu::NIL)) };
        if (fu::has(src, "/*PRINT*/"_fu))
            options_1.dev |= s_DevOptions((s_DevOptions_DEV_PrintAST | s_DevOptions_DEV_PrintCG));

        set_jaErudM5(ctx.files, fname, src);
        compile_BH9o2u0I(fname, fu::view<char>{}, ctx, options_1);
    };
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        s_Module& module = ctx.modules.mutref(i_1);
        const s_SolverNotes notes = module.out.solve.notes;
        if (notes)
            module.out.cpp.src += (x7E_r7bhmB7D("\n// "_fu, str_7NcqyHup(notes)) + "\n"_fu);

    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_x3Dx3D_r7bhmB7DrQ0
                                #define DEF_x3Dx3D_r7bhmB7DrQ0
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

fu::str snippet2cpp_Hd4OcUkW(const fu::str& src)
{
    fu::str fname = "/DIR/FILE.fu"_fu;
    s_Context ctx = compile_snippets_Xt97hx1p((fu::slate<1, fu::str> { fu::str(src) }), (fu::slate<1, fu::str> { fu::str(fname) }), fu::view<s_Options>{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu::str(module.out.cpp.src);

    };
    return fu::str{};
}

static int unindent_left_dJYRzeRm(fu::view<char> src, const int i0)
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

inline static fu::vec<fu::str>& l_0_0_gTD4rKvN(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}

                                #ifndef DEF_split_KuFcjD0udlk
                                #define DEF_split_KuFcjD0udlk
inline void split_KuFcjD0u(const fu::str& str, fu::view<char> sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {
            l_0_0_gTD4rKvN(fu::slice(str, last, next), result);
            last = (next + N);
        };
    };
    if (last)
        l_0_0_gTD4rKvN(fu::slice(str, last), result);
    else
        l_0_0_gTD4rKvN(str, result);

}
                                #endif

                                #ifndef DEF_split_KKIz7pog4J6
                                #define DEF_split_KKIz7pog4J6
inline fu::vec<fu::str> split_KKIz7pog(const fu::str& str, fu::view<char> sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_KuFcjD0u(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

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

                                #ifndef DEF_starts_1wDddajZEEk
                                #define DEF_starts_1wDddajZEEk
inline bool starts_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu::str ERR_TRIM_m3AL6wfP(const fu::str& e)
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

static fu::str ERR_STRIP_ANSI_m3AL6wfP(/*MOV*/ fu::str&& e)
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

static fu::str ERR_STRIP_SNIPPETS_m3AL6wfP(/*MOV*/ fu::str&& e)
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

                                #ifndef DEF_starts_90iSu77lC9e
                                #define DEF_starts_90iSu77lC9e
inline bool starts_90iSu77l(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_ends_90iSu77lC9e
                                #define DEF_ends_90iSu77lC9e
inline bool ends_90iSu77l(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

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

inline static fu::vec<fu::str>& l_0_0_m9mOwf62(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}

                                #ifndef DEF_split_zq2oj29jVXb
                                #define DEF_split_zq2oj29jVXb
inline void split_zq2oj29j(const fu::str& str, const char sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    while (((next = find_OIHcVRad(str, sep, last)) >= 0))
    {
        l_0_0_m9mOwf62(fu::slice(str, last, next), result);
        last = (next + N);
    };
    if (last)
        l_0_0_m9mOwf62(fu::slice(str, last), result);
    else
        l_0_0_m9mOwf62(str, result);

}
                                #endif

                                #ifndef DEF_split_yF8Ik9LFRBa
                                #define DEF_split_yF8Ik9LFRBa
inline fu::vec<fu::str> split_yF8Ik9LF(const fu::str& str, const char sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_zq2oj29j(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static bool check_o2dCBMHP(const fu::str& word, fu::view<char> actual)
{
    const int pipe = find_POzvwmtf(word, '|');
    if ((pipe > 1) && starts_90iSu77l(word, '(') && ends_90iSu77l(word, ')'))
    {
        fu::vec<fu::str> alternatives = split_yF8Ik9LF(fu::slice(word, 1, (word.size() - 1)), '|');
        for (int i = 0; i < alternatives.size(); i++)
        {
            if (check_o2dCBMHP(alternatives[i], actual))
                return true;

        };
        return false;
    }
    else
    {
        fu::str expect = lower_0ZAZU2Wn(fu::str(word));
        return fu::has(actual, expect);
    };
}

static void verify_errmsg_wLghhuKd(fu::view<char> topic, const fu::str& e, const fu::str& msg)
{
    fu::str actual = lower_0ZAZU2Wn(ERR_STRIP_SNIPPETS_m3AL6wfP(ERR_STRIP_ANSI_m3AL6wfP(ERR_TRIM_m3AL6wfP(e))));
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

                if (!check_o2dCBMHP(exact, actual))
                    fu::fail((((((((topic + " mismatch:\n\n    Expected error keyword:\n        "_fu) + qBAD_bF2G8fJR(exact)) + " from pattern <fail"_fu) + qBAD_bF2G8fJR(msg)) + ">"_fu) + "\n\n    ... not present in error message:\n\n"_fu) + e));

            };
            m0 = -1;
        }
        else if (m0 < 0)
            m0 = m1;

    };
    if (!BUG_ok && fu::has(e, "BUG"_fu))
        fu::fail(((topic + " error message contains BUG:\n\n"_fu) + e));

}

static fu::str ERR_KEY_ZlpCwZKR(fu::view<fu::str> sources)
{
    /*MOV*/ fu::str key {};
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_dJYRzeRm(src, src.size());
        key += fu::get_view(src, 0, end);
    };
    return /*NRVO*/ key;
}

inline static void l_48_0_U65puilC(fu::str& part)
{
    part.shrink(unindent_left_dJYRzeRm(part, part.size()));
}

                                #ifndef DEF_each_tl2wshtXenh
                                #define DEF_each_tl2wshtXenh
inline void each_tl2wshtX(fu::view_mut<fu::str> a)
{
    for (int i = 0; i < a.size(); i++)
        l_48_0_U65puilC(a.mutref(i));

}
                                #endif

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

inline static const s_Options& l_48_1_jpbe4c1m(const s_Options& options)
{
    return options;
}

                                #ifndef DEF_map_taNnM1mLJpi
                                #define DEF_map_taNnM1mLJpi
inline fu::vec<s_Options> map_taNnM1mL(fu::view<fu::str> a, const s_Options& options)
{
    /*MOV*/ fu::vec<s_Options> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = s_Options(l_48_1_jpbe4c1m(options));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_ends_1wDddajZEEk
                                #define DEF_ends_1wDddajZEEk
inline bool ends_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_parse_idWCD2rlFHd
                                #define DEF_parse_idWCD2rlFHd
inline s_SolverNotes parse_idWCD2rl(fu::view<char> v)
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
    else if (v == "N_DeadIfCond"_fu)
        return s_SolverNotes_N_DeadIfCond;
    else if (v == "N_DeadIfCons"_fu)
        return s_SolverNotes_N_DeadIfCons;
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

                                #ifndef DEF_parseWild_idWCD2rlFHd
                                #define DEF_parseWild_idWCD2rlFHd
inline s_SolverNotes parseWild_idWCD2rl(fu::view<char> v)
{
    s_SolverNotes result {};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '*')
        {
            fu::view<char> prefix = fu::get_view(v, 0, i);
            fu::view<char> suffix = fu::get_view(v, (i + 1), v.size());

            {

                {
                    fu::str opt = "N_FnRecursion"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_FnRecursion;

                };

                {
                    fu::str opt = "N_FnResolve"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_FnResolve;

                };

                {
                    fu::str opt = "N_FnReopen"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_FnReopen;

                };

                {
                    fu::str opt = "N_TypeRecursion"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_TypeRecursion;

                };

                {
                    fu::str opt = "N_TypeResolve"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_TypeResolve;

                };

                {
                    fu::str opt = "N_TypeReopen"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_TypeReopen;

                };

                {
                    fu::str opt = "N_DeadCode"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadCode;

                };

                {
                    fu::str opt = "N_DeadCall"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadCall;

                };

                {
                    fu::str opt = "N_DeadLet"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadLet;

                };

                {
                    fu::str opt = "N_DeadIfCond"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadIfCond;

                };

                {
                    fu::str opt = "N_DeadIfCons"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadIfCons;

                };

                {
                    fu::str opt = "N_DeadArrlit"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadArrlit;

                };

                {
                    fu::str opt = "N_DeadLoopInit"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadLoopInit;

                };

                {
                    fu::str opt = "N_DeadConv"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_DeadConv;

                };

                {
                    fu::str opt = "N_NonTrivAutoCopy"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_NonTrivAutoCopy;

                };

                {
                    fu::str opt = "N_RelaxRespec"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_RelaxRespec;

                };

                {
                    fu::str opt = "N_UnusedImplicit"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedImplicit;

                };

                {
                    fu::str opt = "N_UnusedCall"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedCall;

                };

                {
                    fu::str opt = "N_UnusedDefer"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedDefer;

                };

                {
                    fu::str opt = "N_UnusedTry"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedTry;

                };

                {
                    fu::str opt = "N_UnusedAndOr"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedAndOr;

                };

                {
                    fu::str opt = "N_UnusedIfElse"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedIfElse;

                };

                {
                    fu::str opt = "N_UnusedArrlit"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedArrlit;

                };

                {
                    fu::str opt = "N_UnusedLet"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_UnusedLet;

                };

                {
                    fu::str opt = "N_BckMustSeq"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_BckMustSeq;

                };

                {
                    fu::str opt = "N_AARMustSeq"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_AARMustSeq;

                };

                {
                    fu::str opt = "N_AARSoftRisk"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_AARSoftRisk;

                };

                {
                    fu::str opt = "N_MoveMustSeq"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_MoveMustSeq;

                };

                {
                    fu::str opt = "N_SD_HasStaticInit"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_SD_HasStaticInit;

                };

                {
                    fu::str opt = "N_SD_ExternPrivates"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_SolverNotes_N_SD_ExternPrivates;

                };
                fu::str opt = "N_COWRestrict"_fu;
                if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                    result |= s_SolverNotes_N_COWRestrict;

            };
            return result;
        };
    };
    return parse_idWCD2rl(v);
}
                                #endif

                                #ifndef DEF_parse_RPgKaTeyQ9d
                                #define DEF_parse_RPgKaTeyQ9d
inline s_CGDefects parse_RPgKaTey(fu::view<char> v)
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

    return s_CGDefects{};
}
                                #endif

                                #ifndef DEF_parseWild_RPgKaTeyQ9d
                                #define DEF_parseWild_RPgKaTeyQ9d
inline s_CGDefects parseWild_RPgKaTey(fu::view<char> v)
{
    s_CGDefects result {};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '*')
        {
            fu::view<char> prefix = fu::get_view(v, 0, i);
            fu::view<char> suffix = fu::get_view(v, (i + 1), v.size());

            {

                {
                    fu::str opt = "GNUStmtExpr"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_CGDefects_GNUStmtExpr;

                };

                {
                    fu::str opt = "Goto"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_CGDefects_Goto;

                };

                {
                    fu::str opt = "PointlessMustSeq"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_CGDefects_PointlessMustSeq;

                };

                {
                    fu::str opt = "LocalConstBool"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_CGDefects_LocalConstBool;

                };

                {
                    fu::str opt = "ConstCast"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_CGDefects_ConstCast;

                };

                {
                    fu::str opt = "PointlessLocal"_fu;
                    if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                        result |= s_CGDefects_PointlessLocal;

                };
                fu::str opt = "IrrelevantLiteral"_fu;
                if (starts_1wDddajZ(opt, prefix) && ends_1wDddajZ(opt, suffix))
                    result |= s_CGDefects_IrrelevantLiteral;

            };
            return result;
        };
    };
    return parse_RPgKaTey(v);
}
                                #endif

                                #ifndef DEF_grow_if_oob_e4HXHDWXyp0
                                #define DEF_grow_if_oob_e4HXHDWXyp0
inline fu::vec<fu::str>& grow_if_oob_e4HXHDWX(fu::vec<fu::vec<fu::str>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_grow_if_oob_0h8hZAgCyXb
                                #define DEF_grow_if_oob_0h8hZAgCyXb
inline s_CGDefects& grow_if_oob_0h8hZAgC(fu::vec<s_CGDefects>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_x21x3D_r7bhmB7DrQ0
                                #define DEF_x21x3D_r7bhmB7DrQ0
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu::str DEFAULT_WORKSPACE;
                                #endif

                                #ifndef DEF_unless_oob_diF9C5cmuNa
                                #define DEF_unless_oob_diF9C5cmuNa
inline s_CGDefects unless_oob_diF9C5cm(fu::view<s_CGDefects> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
    {
        return s_CGDefects{};
    };
}
                                #endif

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

s_Context ZERO_FIg09C9j(fu::vec<fu::str>&& sources, const s_Options& options, s_TestDiffs& testdiffs)
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
                            start0 = unindent_left_dJYRzeRm(src, start0);
                            end0 = unindent_left_dJYRzeRm(src, end0);
                            fu::str prefix = fu::slice(src, 0, start0);
                            fu::str suffix = fu::slice(src, end1, src.size());
                            fu::vec<fu::str> split = split_KKIz7pog(fu::slice(src, start1, end0), "<pass/>"_fu);
                            if (split.size() > 1)
                            {
                                if (split.size() < 3)
                                {
                                    fu::vec<fu::str> fails = split_KKIz7pog(split[0], "<fail/>"_fu);
                                    split.shift();
                                    fu::view<char> pass = only_xhmyKdWo(split);
                                    for (int j = fails.size(); j-- > 0; )
                                    {
                                        const fu::str& fail = fails[j];
                                        const bool isTODO = starts_1wDddajZ(fail, "<TODO/>"_fu);
                                        fu::str fail_1 = (isTODO ? fu::slice(fail, 7) : fu::str(fail));
                                        const int end = unindent_left_dJYRzeRm(fail_1, fail_1.size());
                                        sources.mutref(i) = ((prefix + fu::get_view(fail_1, 0, end)) + suffix);
                                        s_Options options_1 { options };
                                        options_1.dev |= s_DevOptions_DEV_ExpectFail;

                                        try
                                        {
                                        {
                                            ZERO_FIg09C9j(fu::vec<fu::str>(sources), options_1, testdiffs);
                                        }
                                        }
                                        catch (const std::exception& o_0)
                                        {
                                            fu::str e = fu::to_str(o_0.what());

                                        {
                                            verify_errmsg_wLghhuKd("<fail>"_fu, e, msg);
                                            set_next_XReNAHMs(testdiffs, ERR_KEY_ZlpCwZKR(sources), e);
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
                                    const int end = unindent_left_dJYRzeRm(pass, pass.size());
                                    sources.mutref(i) = ((prefix + fu::get_view(pass, 0, end)) + suffix);
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
                    start0 = unindent_left_dJYRzeRm(src, start0);
                    end0 = unindent_left_dJYRzeRm(src, end0);
                    fu::str prefix = fu::slice(src, 0, start0);
                    fu::str suffix = fu::slice(src, end1, src.size());
                    fu::vec<fu::str> split = split_KKIz7pog(fu::slice(src, start1, end0), "<alt/>"_fu);
                    if (split.size() < 2)
                    {
                        split += fu::str{};
                    };
                    for (int j = split.size(); j-- > 0; )
                    {
                        fu::view<char> part = split[j];
                        const int end = unindent_left_dJYRzeRm(part, part.size());
                        sources.mutref(i_1) = ((prefix + fu::get_view(part, 0, end)) + suffix);
                        if (j)
                        {
                            ZERO_FIg09C9j(fu::vec<fu::str>(sources), options, testdiffs);
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
                    start0 = unindent_left_dJYRzeRm(src, start0);
                    end0 = unindent_left_dJYRzeRm(src, end0);
                    fu::str prefix = fu::slice(src, 0, start0);
                    fu::str suffix = fu::slice(src, end1, src.size());
                    fu::vec<fu::str> split = split_KKIz7pog(fu::slice(src, start1, end0), "<flip/>"_fu);
                    if (split.size() != 2)
                        fu::fail("We expect exactly one `<flip/>` in a `<flip></flip>`."_fu);
                    else
                    {
                        each_tl2wshtX(split);
                        for (int j = split.size(); j-- > 0; )
                        {
                            fu::str a { split[0] };
                            fu::str b { split[1] };
                            if (j)
                                std::swap(a, b);

                            sources.mutref(i_2) = (((prefix + a) + b) + suffix);
                            if (j)
                            {
                                ZERO_FIg09C9j(fu::vec<fu::str>(sources), options, testdiffs);
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
                /*MOV*/ fu::str moduleB = ((x7E_r7bhmB7D((fu::get_view(src, start0, start00) + "pub import _"_fu), fu::i64dec(i_3)) + ";"_fu) + fu::get_view(src, start1, src.size()));
                /*MOV*/ fu::str without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
                sources.mutref(i_3) = static_cast<fu::str&&>(without);
                ZERO_FIg09C9j(fu::vec<fu::str>(sources), options, testdiffs);
                sources.mutref(i_3) = static_cast<fu::str&&>(moduleA);
                sources.insert((i_3 + 1), static_cast<fu::str&&>(moduleB));
            };
        };
    };
    if (!options)
    {
        ZERO_FIg09C9j(fu::vec<fu::str>(sources), s_Options { s_Lint{}, s_SolverNotes{}, s_CGDefects{}, s_DevOptions_DEV_DontFoldLiterals, 0u }, testdiffs);
    };
    fu_DEFER_IF_ERR(if (!s_DevOptions((options.dev & s_DevOptions_DEV_ExpectFail)))
    {
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = ("\nFAILING TESTCASE:\n"_fu + join_9dTc0Ds4(sources, "\n"_fu)), x)) }));
    });
    fu::vec<s_CGDefects> ok_defects_by_insrc {};
    fu::vec<fu::vec<fu::str>> expectations {};
    fu::vec<s_Options> options_1 = map_taNnM1mL(sources, options);
    for (int i_4 = 0; i_4 < sources.size(); i_4++)
    {
        fu::str& src = sources.mutref(i_4);

        {
            int end = src.size();
            for (int r = src.size(); (r-- > 0) && (src[r] == ' '); )
                end = r;

            src.shrink(end);
        };
        s_SolverNotes break_notes {};
        s_CGDefects break_defects {};
        s_CGDefects ok_defects {};
        int start = 0;
        while (((start = fu::lfind(src, " ;; "_fu, start)) >= 0))
        {
            int end_1 = find_OIHcVRad(src, '\n', (start + 4));
            if (end_1 < 0)
                end_1 = src.size();

            /*MOV*/ fu::str annot = fu::slice(src, (start + 4), end_1);
            if (annot[0] == '!')
            {
                fu::view<char> annot_1 = fu::get_view(annot, 1, annot.size());
                const s_SolverNotes notes = parseWild_idWCD2rl(annot_1);
                if (notes)
                    break_notes |= notes;
                else
                {
                    const s_CGDefects defects = parseWild_RPgKaTey(annot_1);
                    if (defects)
                        break_defects |= defects;
                    else
                        fu::fail((("Bad break_note/defect: `;; "_fu + annot_1) + "`."_fu));

                };
            }
            else
            {
                const s_CGDefects defect = parseWild_RPgKaTey(annot);
                if (defect)
                    ok_defects |= defect;
                else
                {
                    grow_if_oob_e4HXHDWX(expectations, i_4) += static_cast<fu::str&&>(annot);
                };
            };
            src.mutref((start + 1)) = '/';
            src.mutref((start + 2)) = '/';
            start = end_1;
        };
        options_1.mutref(i_4).break_notes = break_notes;
        options_1.mutref(i_4).break_defects = break_defects;
        if (ok_defects)
        {
            grow_if_oob_0h8hZAgC(ok_defects_by_insrc, i_4) = ok_defects;
        };
    };
    /*MOV*/ s_Context ctx = compile_snippets_Xt97hx1p(sources, fu::view<fu::str>{}, options_1);
    fu::str testdiff_prepend {};
    for (int i_5 = 0; i_5 < expectations.size(); i_5++)
    {
        fu::view<fu::str> arr = expectations[i_5];
        fu::view<char> src_1 = sources[i_5];
        const s_ModuleOutputs& out = ctx.modules[(i_5 + 1)].out;
        const s_CodegenOutput& cpp = out.cpp;
        for (int i_6 = 0; i_6 < arr.size(); i_6++)
        {
            const fu::str& x_1 = arr[i_6];
            const s_SolverNotes note = parseWild_idWCD2rl(x_1);
            if (note)
            {
                if (!(out.solve.notes & note))
                    fu::fail(((((("Expected note not listed: `"_fu + x_1) + "` in:\n"_fu) + src_1) + "\n\nOutput is:\n\n"_fu) + cpp.src));

            }
            else
            {
                const int idx = find_POzvwmtf(x_1, ' ');
                fu::str cmd = fu::slice(x_1, 0, idx);
                fu::str rest = fu::slice(x_1, (idx + 1));
                const bool found = fu::has(cpp.src, rest);
                if (cmd == "EXPECT"_fu)
                {
                    if (!(found))
                        fu::fail(((((("EXPECT mismatch: `;; "_fu + x_1) + "` in:\n"_fu) + src_1) + "\n\nOutput is:\n\n"_fu) + cpp.src));

                }
                else if (cmd != "TODO"_fu)
                    fu::fail(((("Unknown ;; CHECK: `;; "_fu + x_1) + "` in:\n"_fu) + src_1));
                else if (found)
                    fu::fail(((((("TODO test is actually passing: `;; "_fu + x_1) + "` in:\n"_fu) + src_1) + "\n\nOutput is:\n\n"_fu) + cpp.src));
                else
                {
                    testdiff_prepend += ((";; "_fu + x_1) + "\n"_fu);
                };
            };
        };
    };
    const bool run = true;
    build_Bzn6vtbK(fu::str(DEFAULT_WORKSPACE), FUDIR, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, "debug"_fu, "print-src"_fu, run, false, false, false, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);
    build_Bzn6vtbK(fu::str(DEFAULT_WORKSPACE), FUDIR, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, fu::view<char>{}, "print-src"_fu, run, false, false, false, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);
    for (int i_7 = 0; i_7 < sources.size(); i_7++)
    {
        fu::view<char> src_2 = sources[i_7];
        const s_CGDefects ok_defects_1 = unless_oob_diF9C5cm(ok_defects_by_insrc, i_7);
        const s_CodegenOutput& cpp_1 = ctx.modules[(i_7 + 1)].out.cpp;
        const s_CGDefects unexpected = s_CGDefects((cpp_1.defects & s_CGDefects(~ok_defects_1)));
        const s_CGDefects unnecessary = s_CGDefects((s_CGDefects(~cpp_1.defects) & ok_defects_1));
        if (unexpected)
            fu::fail(((((("Unwanted CGDefect: "_fu + qBAD_bF2G8fJR(str_wy1aK8fm(unexpected))) + " in:\n"_fu) + src_2) + "\n\nOutput is:\n\n"_fu) + cpp_1.src));
        else if (unnecessary)
            fu::fail(((((("Unnecessary CGDefect annotation: "_fu + qID_bF2G8fJR(str_wy1aK8fm(unnecessary))) + " in:\n"_fu) + src_2) + "\n\nOutput is:\n\n"_fu) + cpp_1.src));

    };

    {
        if (testdiff_prepend)
        {
            testdiff_prepend += "\n"_fu;
        };
        fu::str key {};
        for (int i_8 = 0; i_8 < sources.size(); i_8++)
        {
            key += sources[i_8];
            fu::view<char> actual = ctx.modules[((i_8 + ctx.modules.size()) - sources.size())].out.cpp.src;
            set_next_XReNAHMs(testdiffs, key, (testdiff_prepend + actual));
        };
    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

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

static fu::str indent_Eqa140GP(const fu::str& src)
{
    return replace_KFDHCttm(src, "\n"_fu, "\n\t"_fu);
}

void ZERO_SAME_lVBKffWw(fu::view<fu::vec<fu::str>> alts, s_TestDiffs& testdiffs)
{
    fu::vec<s_Module> expect = ZERO_FIg09C9j(fu::vec<fu::str>(alts[0]), s_Options{}, testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu::vec<s_Module> actual = compile_snippets_Xt97hx1p(alts[i], fu::view<fu::str>{}, fu::view<s_Options>{}).modules;
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
                    write_l2QLWLgK((FUDIR + "expect.diff"_fu), ((strip_XUYqGlVW(inspect_66vMeR0m(expect[m])) + "\n\n----------------\n\n"_fu) + x), RW_RW_RW);
                    write_l2QLWLgK((FUDIR + "actual.diff"_fu), ((strip_XUYqGlVW(inspect_66vMeR0m(actual[m])) + "\n\n----------------\n\n"_fu) + a), RW_RW_RW);
                    fu::fail((((x7E_r7bhmB7D((((x7E_r7bhmB7D(((x7E_r7bhmB7D("ZERO_SAME: alts["_fu, fu::i64dec(i)) + "] mismatch at:\n"_fu) + "\nexpect["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_Eqa140GP(x)) + "\nactual["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_Eqa140GP(a)) + "\n"_fu));
                };
            };
        };
    };
}

void TODO_92t10T7t(const fu::vec<fu::str>& sources, const fu::str& currently, s_TestDiffs& testdiffs)
{

    try
    {
    {
        ZERO_FIg09C9j(fu::vec<fu::str>(sources), s_Options { s_Lint{}, s_SolverNotes{}, s_CGDefects{}, s_DevOptions_DEV_ExpectFail, 0u }, testdiffs);
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str e = fu::to_str(o_0.what());

    {
        if (currently)
        {
            verify_errmsg_wLghhuKd("(TODO)"_fu, e, currently);
        };
        set_next_XReNAHMs(testdiffs, ERR_KEY_ZlpCwZKR(sources), ("TODO: "_fu + ERR_TRIM_m3AL6wfP(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + join_9dTc0Ds4(sources, "\n\n"_fu)));
}

s_Context ZERO_bPjjFTLU(const fu::str& src, s_TestDiffs& testdiffs)
{
    return ZERO_FIg09C9j(fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(src) } }, s_Options{}, testdiffs);
}

void TODO_B3xztmPI(const fu::str& src, const fu::str& currently, s_TestDiffs& testdiffs)
{
    TODO_92t10T7t(fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(src) } }, currently, testdiffs);
}

void ZERO_SAME_koQDdNLQ(fu::view<fu::str> alts, s_TestDiffs& testdiffs)
{
    fu::vec<fu::vec<fu::str>> wrap {};
    for (int i = 0; i < alts.size(); i++)
    {
        wrap += fu::vec<fu::str> { fu::slate<1, fu::str> { fu::str(alts[i]) } };
    };
    ZERO_SAME_lVBKffWw(wrap, testdiffs);
}

#endif
