#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_TokenIdx;
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
struct s_SubRegion;
[[noreturn]] fu::never BUG_9SZtRVJ0(fu::str&&, const s_TokenIdx&, const s_Context&);
void Paths_inter(fu::str&, fu::view<char>, fu::view<char>, const s_TokenIdx&, const s_Context&);
bool Paths_hasInter(fu::view<char>, fu::view<char>, const s_TokenIdx&, const s_Context&);

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

                                #ifndef DEF_s_SubRegion
                                #define DEF_s_SubRegion
struct s_SubRegion
{
    int flatCount;
    int flatOffset;
    explicit operator bool() const noexcept
    {
        return false
            || flatCount
            || flatOffset
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_SR_empty
                                #define DEF_SR_empty
extern const fu::str SR_empty fu_INIT_PRIORITY(1005) = "\x00\x00"_fu;
                                #endif

                                #ifndef DEF_Region_TEMP
                                #define DEF_Region_TEMP
extern const fu::str Region_TEMP fu_INIT_PRIORITY(1005) = ("\x01"_fu + SR_empty);
                                #endif

                                #ifndef DEF_Region_STATIC
                                #define DEF_Region_STATIC
extern const fu::str Region_STATIC fu_INIT_PRIORITY(1005) = ("\x00"_fu + SR_empty);
                                #endif

unsigned parse7bit(fu::view<char> str, int& offset)
{
    unsigned shift {};
    unsigned result {};
    char c {};
    while ((offset < str.size()) && (unsigned(fu::u8((c = str[offset++]))) >= 128u))
    {
        result |= ((unsigned(fu::u8(c)) & 0x7fu) << shift);
        shift += 7u;
    };
    return result | (unsigned(fu::u8(c)) << shift);
}

void append7bit(fu::str& str, unsigned v)
{
    while ((v >= 128u))
    {
        str += char((v | 0x80u));
        v >>= 7u;
    };
    str += char(v);
}

static void l_34_0_5Xypm2Oy(int& pathDepth, int& numPaths, const s_TokenIdx& _here, const s_Context& ctx)
{
    pathDepth = 0;
    numPaths++;
    if (numPaths > 64)
        BUG_9SZtRVJ0("assertPathsValid: numPaths > 64, we're likely stuck in an infinite loop."_fu, _here, ctx);

}

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

inline static void l_34_2_FFDQyLd9(const int flatOffset, const int flatCount, const bool isLastSubRegion, const bool isFirstSubRegion, int& expect_flatCount, const int region_flatCount, const bool flatCountMismatchOK, int& pathDepth, const s_TokenIdx& _here, const s_Context& ctx)
{
    pathDepth++;
    if (pathDepth > 64)
        BUG_9SZtRVJ0("assertPathsValid: pathDepth > 64, we're likely stuck in an infinite loop."_fu, _here, ctx);
    else
    {
        if (isFirstSubRegion && (region_flatCount >= 0))
        {
            if (!(((flatOffset + flatCount) <= region_flatCount)))
                BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("assertPathsValid: flatOffset("_fu, fu::i64dec(flatOffset)) + ")"_fu) + " + flatCount("_fu), fu::i64dec(flatCount)) + ")"_fu) + " !<= region_flatCount("_fu), fu::i64dec(region_flatCount)) + ")"_fu), _here, ctx);

        };
        if (isLastSubRegion && !flatCountMismatchOK)
        {
            if (expect_flatCount < 0)
                expect_flatCount = flatCount;
            else
            {
                if (!(expect_flatCount == flatCount))
                    BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw("assertPathsValid: expect_flatCount("_fu, fu::i64dec(expect_flatCount)) + ")"_fu) + " != flatCount("_fu), fu::i64dec(flatCount)) + ")"_fu), _here, ctx);

            };
        };
    };
}

static void l_34_1_ydsTSEcW(const int minPathDepth, const int pathDepth, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!((pathDepth >= minPathDepth)))
        BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw("assertPathsValid: pathDepth("_fu, fu::i64dec(pathDepth)) + ")"_fu) + " !>= minPathDepth("_fu), fu::i64dec(minPathDepth)) + ")"_fu), _here, ctx);

}

void assertPathsValid_F77ZcVgF(fu::view<char> str, int expect_flatCount, const int region_flatCount, const bool flatCountMismatchOK, const int minPathDepth, const s_TokenIdx& _here, const s_Context& ctx)
{
    int pathDepth = -1001;
    int numPaths = 0;
    int offset = 0;
    const int region_flatCount_1 = region_flatCount;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        l_34_0_5Xypm2Oy(pathDepth, numPaths, _here, ctx);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(str, offset);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(str, offset) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_34_2_FFDQyLd9(flatOffset, flatCount, isLastSubRegion, isFirstSubRegion, expect_flatCount, region_flatCount_1, flatCountMismatchOK, pathDepth, _here, ctx);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        l_34_1_ydsTSEcW(minPathDepth, pathDepth, _here, ctx);
        if (isLastPath)
            break;

    };
    if (!(offset == str.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

inline static void l_34_6_1QLeETVV(const int flatCount, const int flatOffset, fu::vec<s_SubRegion>& path)
{
    path += s_SubRegion { flatCount, flatOffset };
}

                                #ifndef DEF_steal_ZjRuwWGLNHl
                                #define DEF_steal_ZjRuwWGLNHl
inline fu::vec<s_SubRegion> steal_ZjRuwWGL(fu::vec<s_SubRegion>& v)
{
    /*MOV*/ fu::vec<s_SubRegion> ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

static void l_34_7_LMqRHJSG(fu::vec<fu::vec<s_SubRegion>>& paths, fu::vec<s_SubRegion>& path)
{
    paths += steal_ZjRuwWGL(path);
}

fu::vec<fu::vec<s_SubRegion>> parsePaths(fu::view<char> str, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu::vec<fu::vec<s_SubRegion>> paths {};
    fu::vec<s_SubRegion> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_34_6_1QLeETVV(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        l_34_7_LMqRHJSG(paths, path);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

    return /*NRVO*/ paths;
}

static void l_34_9_EysPgzMu(fu::str& result)
{
    result += "\n\tPath:\n"_fu;
}

inline static void l_34_11_rSdA8r6S(const int flatCount, const int flatOffset, const bool isFirstSubRegion, const bool isLastSubRegion, fu::str& result)
{
    result += (x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("\t\tSubReg\t flatCount="_fu, fu::i64dec(flatCount)) + " isFirstSubRegion="_fu), fu::booldec(isFirstSubRegion)) + " isLastSubRegion="_fu), fu::booldec(isLastSubRegion)) + "\n"_fu);
    result += (x7E_gCeFmDFw("\t\t\tflatOffset="_fu, fu::i64dec(flatOffset)) + "\n"_fu);
}

inline static void l_34_10_pQoRu8Ry(const bool isLastPath, fu::str& result)
{
    result += x7E_gCeFmDFw("\t/Path\tisLastPath="_fu, fu::booldec(isLastPath));
}

fu::str printPaths(fu::view<char> str, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu::str result = ""_fu;
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        l_34_9_EysPgzMu(result);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_34_11_rSdA8r6S(flatCount, flatOffset, isFirstSubRegion, isLastSubRegion, result);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        l_34_10_pQoRu8Ry(isLastPath, result);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

    return /*NRVO*/ result;
}

void appendPaths(fu::str& str, fu::view<fu::vec<s_SubRegion>> paths, const bool emptyOK, const bool flatCountMismatchOK, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int str0 = str.size();
    if (emptyOK || paths)
    {
        for (int i = 0; i < paths.size(); i++)
        {
            fu::view<s_SubRegion> path = paths[i];
            const bool isLastPath = (i == (paths.size() - 1));
            if (path)
            {
                for (int i_1 = 0; i_1 < path.size(); i_1++)
                {
                    const s_SubRegion& subregion = path[i_1];
                    if (subregion)
                    {
                        if (!(subregion.flatCount || (path.size() == 1) || (subregion.flatOffset == 0)))
                            BUG_9SZtRVJ0("appendPaths: empty flatCount"_fu, _here, ctx);

                    }
                    else
                        BUG_9SZtRVJ0("appendPaths: empty subregion"_fu, _here, ctx);

                    const bool isLastSubRegion = (i_1 == (path.size() - 1));
                    const int flatCount = subregion.flatCount;
                    const int flatOffset = subregion.flatOffset;
                    if ((flatOffset >= 0) && (flatCount > 0) && (isLastSubRegion || (flatCount == 1)))
                    {
                        append7bit(str, ((unsigned(flatOffset) << 1u) | (isLastSubRegion ? 0u : 1u)));
                        if (isLastSubRegion)
                            append7bit(str, ((unsigned(flatCount) << 1u) | (isLastPath ? 0u : 1u)));

                    }
                    else
                        BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("appendSubRegion: flatCount("_fu, fu::i64dec(flatCount)) + ")"_fu) + " flatOffset("_fu), fu::i64dec(flatOffset)) + ")"_fu) + " isLastSubRegion("_fu), fu::booldec(isLastSubRegion)) + ")"_fu), _here, ctx);

                };
            }
            else
                BUG_9SZtRVJ0("appendPaths: zero subregions"_fu, _here, ctx);

        };
        if (str)
            assertPathsValid_F77ZcVgF(fu::get_view(str, str0), -1, -1, flatCountMismatchOK, 1, _here, ctx);
        else
        {
            if (!(emptyOK))
                BUG_9SZtRVJ0("appendPaths: empty output"_fu, _here, ctx);

        };
    }
    else
        BUG_9SZtRVJ0("appendPaths: zero paths"_fu, _here, ctx);

}

                                #ifndef DEF_min_mJGU9byOmI4
                                #define DEF_min_mJGU9byOmI4
inline int min_mJGU9byO(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

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

                                #ifndef DEF_x3Cx3E_rMs6lL8vDvc
                                #define DEF_x3Cx3E_rMs6lL8vDvc
inline int x3Cx3E_rMs6lL8v(const s_SubRegion& a, const s_SubRegion& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_mJGU9byO(a.flatCount, b.flatCount)))
        return cmp;
    else if ((cmp = x3Cx3E_mJGU9byO(a.flatOffset, b.flatOffset)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_ywQZhn5XCB4
                                #define DEF_x3Cx3E_ywQZhn5XCB4
inline int x3Cx3E_ywQZhn5X(fu::view<s_SubRegion> a, fu::view<s_SubRegion> b)
{
    int cmp = x3Cx3E_mJGU9byO(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_rMs6lL8v(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_ywQZhn5XCB4
                                #define DEF_x3Dx3D_ywQZhn5XCB4
inline bool operator==(fu::view<s_SubRegion> a, fu::view<s_SubRegion> b)
{
    return !x3Cx3E_ywQZhn5X(a, b);
}
                                #endif

bool Paths_union(fu::vec<fu::vec<s_SubRegion>>& result, const fu::vec<s_SubRegion>& path, const s_TokenIdx& _here, const s_Context& ctx)
{
    for (int i = 0; i < result.size(); i++)
    {
        fu::view<s_SubRegion> host = result[i];
        const int minL = min_mJGU9byO(path.size(), host.size());
        if (minL)
        {
            if (fu::get_view_start0(path, (minL - 1)) == fu::get_view_start0(host, (minL - 1)))
            {
                const s_SubRegion& a_sr = host[(minL - 1)];
                const s_SubRegion& b_sr = path[(minL - 1)];
                const int a0 = a_sr.flatOffset;
                const int a1 = (a0 + a_sr.flatCount);
                const int b0 = b_sr.flatOffset;
                const int b1 = (b0 + b_sr.flatCount);
                const bool host_within_path = ((a0 >= b0) ? (a1 <= b1) : false);
                const bool path_within_host = ((a0 <= b0) ? (a1 >= b1) : false);
                if (path_within_host && (path.size() >= host.size()))
                    return false;
                else if (host_within_path && (host.size() >= path.size()))
                {
                    result.splice(i, 1);
                    i--;
                };
            };
        }
        else
            BUG_9SZtRVJ0("Paths_union: found an empty path."_fu, _here, ctx);

    };
    result += fu::vec<s_SubRegion>(path);
    return true;
}

static void l_34_3_T0OGWuro(fu::vec<s_SubRegion>& path)
{
    path.clear();
}

inline static void l_34_4_HsBPHSDv(const int flatCount, const int flatOffset, fu::vec<s_SubRegion>& path)
{
    path += s_SubRegion { flatCount, flatOffset };
}

inline static bool l_34_13_az7N1nwS(const fu::vec<s_SubRegion>& b_path, fu::vec<fu::vec<s_SubRegion>>& result, const s_TokenIdx& _here, const s_Context& ctx)
{
    return Paths_union(result, b_path, _here, ctx);
}

static void l_34_5_hIYEZQCV(const fu::vec<s_SubRegion>& path, fu::vec<fu::vec<s_SubRegion>>& result, const s_TokenIdx& _here, const s_Context& ctx)
{
    l_34_13_az7N1nwS(path, result, _here, ctx);
}

inline static void parsePaths_each_sjw2eI4t(fu::view<char> str, fu::vec<fu::vec<s_SubRegion>>& result, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::vec<s_SubRegion> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        l_34_3_T0OGWuro(path);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_34_4_HsBPHSDv(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        l_34_5_hIYEZQCV(path, result, _here, ctx);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

void Paths_union(fu::str& str, fu::view<char> a, fu::view<char> b, const bool flatCountMismatchOK, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::vec<fu::vec<s_SubRegion>> result = parsePaths(a, _here, ctx);
    parsePaths_each_sjw2eI4t(b, result, _here, ctx);
    appendPaths(str, result, false, flatCountMismatchOK, _here, ctx);
}

static void l_34_3_gL61ofdk(fu::vec<s_SubRegion>& path)
{
    path.clear();
}

inline static void l_34_4_qxNvDlXx(const int flatCount, const int flatOffset, fu::vec<s_SubRegion>& path)
{
    path += s_SubRegion { flatCount, flatOffset };
}

static void l_34_3_Mo5aGTAE(fu::vec<s_SubRegion>& path)
{
    path.clear();
}

inline static void l_34_4_JsqPIddW(const int flatCount, const int flatOffset, fu::vec<s_SubRegion>& path)
{
    path += s_SubRegion { flatCount, flatOffset };
}

                                #ifndef DEF_max_mJGU9byOmI4
                                #define DEF_max_mJGU9byOmI4
inline int max_mJGU9byO(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

inline static void l_34_15_ILNoYwvF(fu::view<s_SubRegion> b_path, fu::view<s_SubRegion> a_path, fu::vec<fu::vec<s_SubRegion>>& result, fu::vec<s_SubRegion>& inter, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int N = min_mJGU9byO(a_path.size(), b_path.size());
    for (int i = 0; i < N; i++)
    {
        const s_SubRegion& a = a_path[i];
        const s_SubRegion& b = b_path[i];
        const int overlap = min_mJGU9byO(((b.flatOffset + b.flatCount) - a.flatOffset), ((a.flatOffset + a.flatCount) - b.flatOffset));
        if ((overlap <= 0))
        {
            inter.clear();
            return;
        }
        else
        {
            const int flatCount = min_mJGU9byO(a.flatCount, b.flatCount);
            const int flatOffset = max_mJGU9byO(a.flatOffset, b.flatOffset);
            if ((overlap >= flatCount))
            {
                inter += s_SubRegion { flatCount, flatOffset };
            }
            else
                BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw((x7E_gCeFmDFw(((x7E_gCeFmDFw((x7E_gCeFmDFw(("Paths_inter: self-intersection:"_fu + "\n\t\ta.flatOffset("_fu), fu::i64dec(a.flatOffset)) + ") a.flatCount("_fu), fu::i64dec(a.flatCount)) + ")"_fu) + "\n\t\tb.flatOffset("_fu), fu::i64dec(b.flatOffset)) + ") b.flatCount("_fu), fu::i64dec(b.flatCount)) + ")"_fu) + "\n\t\toverlap("_fu), fu::i64dec(overlap)) + ")"_fu), _here, ctx);

        };
    };
    if (inter)
    {
        if (a_path.size() > b_path.size())
            inter += fu::get_view(a_path, b_path.size());

        if (b_path.size() > a_path.size())
            inter += fu::get_view(b_path, a_path.size());

        Paths_union(result, inter, _here, ctx);
    }
    else
        BUG_9SZtRVJ0("Paths_inter: empty inter, about to append suffix"_fu, _here, ctx);

}

static void l_34_5_QxpncM3c(fu::view<s_SubRegion> path, fu::view<s_SubRegion> a_path, fu::vec<fu::vec<s_SubRegion>>& result, fu::vec<s_SubRegion>& inter, const s_TokenIdx& _here, const s_Context& ctx)
{
    l_34_15_ILNoYwvF(path, a_path, result, inter, _here, ctx);
}

inline static void parsePaths_each_bUl3Innq(fu::view<char> str, fu::view<s_SubRegion> a_path, fu::vec<fu::vec<s_SubRegion>>& result, fu::vec<s_SubRegion>& inter, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::vec<s_SubRegion> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        l_34_3_Mo5aGTAE(path);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_34_4_JsqPIddW(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        l_34_5_QxpncM3c(path, a_path, result, inter, _here, ctx);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

inline static void l_34_14_ICuDN8Fo(fu::view<s_SubRegion> a_path, fu::view<char> b, fu::vec<fu::vec<s_SubRegion>>& result, fu::vec<s_SubRegion>& inter, const s_TokenIdx& _here, const s_Context& ctx)
{
    parsePaths_each_bUl3Innq(b, a_path, result, inter, _here, ctx);
}

static void l_34_5_zeCrrEdY(fu::view<s_SubRegion> path, fu::view<char> b, fu::vec<fu::vec<s_SubRegion>>& result, fu::vec<s_SubRegion>& inter, const s_TokenIdx& _here, const s_Context& ctx)
{
    l_34_14_ICuDN8Fo(path, b, result, inter, _here, ctx);
}

inline static void parsePaths_each_AEjms8ot(fu::view<char> str, fu::view<char> b, fu::vec<fu::vec<s_SubRegion>>& result, fu::vec<s_SubRegion>& inter, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::vec<s_SubRegion> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        l_34_3_gL61ofdk(path);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_34_4_qxNvDlXx(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        l_34_5_zeCrrEdY(path, b, result, inter, _here, ctx);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

void Paths_inter(fu::str& str, fu::view<char> a, fu::view<char> b, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (a.size() < b.size())
        Paths_inter(str, b, a, _here, ctx);
    else
    {
        fu::vec<fu::vec<s_SubRegion>> result {};
        fu::vec<s_SubRegion> inter {};
        parsePaths_each_AEjms8ot(a, b, result, inter, _here, ctx);
        appendPaths(str, result, true, true, _here, ctx);
    };
}

static void l_34_3_LRg9Hu56(fu::vec<s_SubRegion>& path)
{
    path.clear();
}

inline static void l_34_4_2KuaXV1i(const int flatCount, const int flatOffset, fu::vec<s_SubRegion>& path)
{
    path += s_SubRegion { flatCount, flatOffset };
}

static void l_34_3_pC7mtmav(fu::vec<s_SubRegion>& path)
{
    path.clear();
}

inline static void l_34_4_MzADPMBX(const int flatCount, const int flatOffset, fu::vec<s_SubRegion>& path)
{
    path += s_SubRegion { flatCount, flatOffset };
}

bool Paths_hasInter(fu::view<char> a, fu::view<char> b, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (a.size() < b.size())
        return Paths_hasInter(b, a, _here, ctx);
    else
    {

        {
            fu::vec<s_SubRegion> path {};
            int _o = 0;
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                l_34_3_LRg9Hu56(path);
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(a, _o);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(a, _o) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    const int flatCount = int((raw_flatCount >> 1u));
                    const int flatOffset = int((raw_flatOffset >> 1u));
                    l_34_4_2KuaXV1i(flatCount, flatOffset, path);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };

                {
                    fu::vec<s_SubRegion> path_1 {};
                    int _o_1 = 0;
                    for (; ; )
                    {
                        bool isLastPath_1 = false;
                        bool isFirstSubRegion_1 = true;
                        l_34_3_pC7mtmav(path_1);
                        for (; ; )
                        {
                            const unsigned raw_flatOffset = parse7bit(b, _o_1);
                            const bool isLastSubRegion = !(raw_flatOffset & 1u);
                            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(b, _o_1) : 3u);
                            isLastPath_1 = !(raw_flatCount & 1u);
                            const int flatCount = int((raw_flatCount >> 1u));
                            const int flatOffset = int((raw_flatOffset >> 1u));
                            l_34_4_MzADPMBX(flatCount, flatOffset, path_1);
                            if (isLastSubRegion)
                                break;
                            else
                                isFirstSubRegion_1 = false;

                        };

                        { {
                            const int N = min_mJGU9byO(path.size(), path_1.size());
                            for (int i = 0; i < N; i++)
                            {
                                const s_SubRegion& a_1 = path[i];
                                const s_SubRegion& b_1 = path_1[i];
                                const int overlap = min_mJGU9byO(((b_1.flatOffset + b_1.flatCount) - a_1.flatOffset), ((a_1.flatOffset + a_1.flatCount) - b_1.flatOffset));
                                if ((overlap <= 0))
                                    goto BL_17;

                            };
                            return true;
                          } BL_17:;
                        };
                        if (isLastPath_1)
                            break;

                    };
                    if (!(_o_1 == b.size()))
                        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

                };
                if (isLastPath)
                    break;

            };
            if (!(_o == a.size()))
                BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

        };
        return false;
    };
}

s_Lifetime Lifetime_from_PFBW1nI4(const int locid, const int flatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (locid > 0)
    {
        /*MOV*/ fu::str uni0n {};
        append7bit(uni0n, (unsigned(locid) << 1u));

        {
            const int flatOffset = 0;
            const bool isLastSubRegion = true;
            if ((flatOffset >= 0) && (flatCount > 0) && isLastSubRegion)
            {
                append7bit(uni0n, ((unsigned(flatOffset) << 1u) | 0u));
                append7bit(uni0n, ((unsigned(flatCount) << 1u) | 0u));
            }
            else
                BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("appendSubRegion: flatCount("_fu, fu::i64dec(flatCount)) + ")"_fu) + " flatOffset("_fu), fu::i64dec(flatOffset)) + ")"_fu) + " isLastSubRegion("_fu), fu::booldec(isLastSubRegion)) + ")"_fu), _here, ctx);

        };
        return s_Lifetime { static_cast<fu::str&&>(uni0n) };
    }
    else
    {
        BUG_9SZtRVJ0("Lifetime_from: Bad locid"_fu, _here, ctx);
    };
}

s_Lifetime Lifetime_from_w8BwafZY(const int argidx, fu::view<char> paths, const s_TokenIdx& _here, const s_Context& ctx)
{
    if ((argidx >= 0))
    {
        /*MOV*/ fu::str uni0n {};
        append7bit(uni0n, ((unsigned(argidx) << 2u) | 3u));
        uni0n += paths;
        return s_Lifetime { static_cast<fu::str&&>(uni0n) };
    }
    else
    {
        BUG_9SZtRVJ0("Lifetime_from: Bad argidx"_fu, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_AAR_hasFalsePositives
                                #define DEF_Lifetime_AAR_hasFalsePositives
inline constexpr bool Lifetime_AAR_hasFalsePositives = true;
                                #endif

s_Lifetime Lifetime_AAR_KIn2aDsn(const int locid, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (locid > 0)
    {
        /*MOV*/ fu::str uni0n {};
        append7bit(uni0n, (unsigned(locid) << 1u));
        uni0n += SR_empty;
        return s_Lifetime { static_cast<fu::str&&>(uni0n) };
    }
    else
    {
        BUG_9SZtRVJ0("Lifetime_from: Bad locid"_fu, _here, ctx);
    };
}

                                #ifndef DEF_x3Cx3E_6K8lyb3JRba
                                #define DEF_x3Cx3E_6K8lyb3JRba
inline int x3Cx3E_6K8lyb3J(const unsigned a, const unsigned b)
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

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

inline static void l_34_19_KgImeqWp(fu::view<char> r_both, fu::view<char> sr_left, fu::view<char> sr_right, const bool flatCountMismatchOK, s_Lifetime& result, const s_TokenIdx& _here, const s_Context& ctx)
{
    result.uni0n += r_both;
    if ((sr_left == sr_right) || (sr_left == SR_empty))
        result.uni0n += sr_left;
    else if (sr_right == SR_empty)
        result.uni0n += sr_right;
    else
        Paths_union(result.uni0n, sr_left, sr_right, flatCountMismatchOK, _here, ctx);

}

inline static fu::str& l_34_18_1sglnJu5(fu::view<char> raw, s_Lifetime& result)
{
    return (result.uni0n += raw);
}

s_Lifetime Lifetime_union_YIGC7Sux(const s_Lifetime& a, const s_Lifetime& b, const bool flatCountMismatchOK, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0;
    int offset0_1;

    /*MOV*/ s_Lifetime result {};

    { {
        fu::view<char> l_chars = a.uni0n;
        fu::view<char> r_chars = b.uni0n;
        int l_start {};
        int r_start {};
        int l_paths0 {};
        int r_paths0 {};
        int l_offset {};
        int r_offset {};
        unsigned l {};
        unsigned r {};
        bool l_dirty = true;
        bool r_dirty = true;
        const bool l_done = false;
        const bool r_done = false;
        fu::view<char> BL_2_v {};
        fu::view<char> rest_chars = (__extension__ (
        { {
            for (; ; )
            {
                if (l_dirty)
                {
                    l_dirty = false;
                    l_start = l_offset;
                    if (l_offset < l_chars.size())
                    {
                        l = parse7bit(l_chars, l_offset);
                        int BL_7_v {};
                        l_paths0 = (__extension__ (
                        {
                            offset0 = (l_offset + 0);
                            for (; ; )
                            {
                                bool isLastPath = false;
                                bool isFirstSubRegion = true;
                                for (; ; )
                                {
                                    const unsigned raw_flatOffset = parse7bit(l_chars, l_offset);
                                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(l_chars, l_offset) : 3u);
                                    isLastPath = !(raw_flatCount & 1u);
                                    if (isLastSubRegion)
                                        break;
                                    else
                                        isFirstSubRegion = false;

                                };
                                if (isLastPath)
                                    break;

                            };
                            BL_7_v = (offset0);
                        (void)0;}), BL_7_v);
                    }
                    else if (!result)
                    {
                        return s_Lifetime(b);
                    }
                    else
                    {
                        { BL_2_v = fu::get_view(r_chars, (r_dirty ? r_offset : r_start)); goto BL_2; };
                    };
                };
                if (r_dirty)
                {
                    r_dirty = false;
                    r_start = r_offset;
                    if (r_offset < r_chars.size())
                    {
                        r = parse7bit(r_chars, r_offset);
                        int BL_19_v {};
                        r_paths0 = (__extension__ (
                        {
                            offset0_1 = (r_offset + 0);
                            for (; ; )
                            {
                                bool isLastPath_1 = false;
                                bool isFirstSubRegion_1 = true;
                                for (; ; )
                                {
                                    const unsigned raw_flatOffset_1 = parse7bit(r_chars, r_offset);
                                    const bool isLastSubRegion_1 = !(raw_flatOffset_1 & 1u);
                                    const unsigned raw_flatCount_1 = (isLastSubRegion_1 ? parse7bit(r_chars, r_offset) : 3u);
                                    isLastPath_1 = !(raw_flatCount_1 & 1u);
                                    if (isLastSubRegion_1)
                                        break;
                                    else
                                        isFirstSubRegion_1 = false;

                                };
                                if (isLastPath_1)
                                    break;

                            };
                            BL_19_v = (offset0_1);
                        (void)0;}), BL_19_v);
                    }
                    else if (!result)
                    {
                        return s_Lifetime(a);
                    }
                    else
                    {
                        { BL_2_v = fu::get_view(l_chars, (l_dirty ? l_offset : l_start)); goto BL_2; };
                    };
                };
                fu::never BL_29_v {};
                const int cmp = (l_done ? (r_done ? (__extension__ (
                {
                    goto BL_1;
                (void)0;}), static_cast<fu::never&&>(BL_29_v)) : +1) : (r_done ? -1 : (((l == 0u) != (r == 0u)) ? ((r == 0u) ? -1 : +1) : (((l == 1u) != (r == 1u)) ? ((r == 1u) ? +1 : -1) : x3Cx3E_6K8lyb3J(r, l)))));
                fu::never BL_30_v {};
                fu::view<char> either_chars = ((cmp == 0) ? (__extension__ (
                {
                    l_dirty = true;
                    r_dirty = true;
                    l_34_19_KgImeqWp(fu::get_view(l_chars, l_start, l_paths0), fu::get_view(l_chars, l_paths0, l_offset), fu::get_view(r_chars, r_paths0, r_offset), flatCountMismatchOK, result, _here, ctx);
                    continue;
                (void)0;}), static_cast<fu::never&&>(BL_30_v)) : ((cmp < 0) ? ((l_dirty = true), fu::get_view(l_chars, l_start, l_offset)) : ((r_dirty = true), fu::get_view(r_chars, r_start, r_offset))));
                l_34_18_1sglnJu5(either_chars, result);
            };
          } BL_2:;
        (void)0;}), static_cast<fu::view<char>&&>(BL_2_v));
        result.uni0n += rest_chars;
      } BL_1:;
    };
    return /*NRVO*/ result;
}

inline static void l_34_23_10JM5Soq(fu::view<char> r_both, fu::view<char> sr_left, fu::view<char> sr_right, s_Lifetime& result, fu::str& inter, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::view<char> BL_1_v {};
    fu::view<char> sr_chars = (((sr_left == sr_right) || (sr_right == SR_empty)) ? sr_left : ((sr_left == SR_empty) ? sr_right : (__extension__ (
    {
        inter.clear();
        Paths_inter(inter, sr_left, sr_right, _here, ctx);
        fu::never BL_2_v {};
        BL_1_v = ((inter ? inter : (__extension__ (
        {
            return;
        (void)0;}), static_cast<fu::never&&>(BL_2_v))));
    (void)0;}), static_cast<fu::view<char>&&>(BL_1_v))));
    result.uni0n += r_both;
    result.uni0n += sr_chars;
}

s_Lifetime Lifetime_inter_lYlULmp8(const s_Lifetime& a, const s_Lifetime& b, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0;
    int offset0_1;

    /*MOV*/ s_Lifetime result {};
    fu::str inter {};

    { {
        fu::view<char> l_chars = a.uni0n;
        fu::view<char> r_chars = b.uni0n;
        int l_start {};
        int r_start {};
        int l_paths0 {};
        int r_paths0 {};
        int l_offset {};
        int r_offset {};
        unsigned l {};
        unsigned r {};
        bool l_dirty = true;
        bool r_dirty = true;
        const bool l_done = false;
        const bool r_done = false;
        for (; ; )
        {
            if (l_dirty)
            {
                l_dirty = false;
                l_start = l_offset;
                if (l_offset < l_chars.size())
                {
                    l = parse7bit(l_chars, l_offset);
                    int BL_6_v {};
                    l_paths0 = (__extension__ (
                    {
                        offset0 = (l_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath = false;
                            bool isFirstSubRegion = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset = parse7bit(l_chars, l_offset);
                                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(l_chars, l_offset) : 3u);
                                isLastPath = !(raw_flatCount & 1u);
                                if (isLastSubRegion)
                                    break;
                                else
                                    isFirstSubRegion = false;

                            };
                            if (isLastPath)
                                break;

                        };
                        BL_6_v = (offset0);
                    (void)0;}), BL_6_v);
                }
                else
                    goto BL_1;

            };
            if (r_dirty)
            {
                r_dirty = false;
                r_start = r_offset;
                if (r_offset < r_chars.size())
                {
                    r = parse7bit(r_chars, r_offset);
                    int BL_17_v {};
                    r_paths0 = (__extension__ (
                    {
                        offset0_1 = (r_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath_1 = false;
                            bool isFirstSubRegion_1 = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset_1 = parse7bit(r_chars, r_offset);
                                const bool isLastSubRegion_1 = !(raw_flatOffset_1 & 1u);
                                const unsigned raw_flatCount_1 = (isLastSubRegion_1 ? parse7bit(r_chars, r_offset) : 3u);
                                isLastPath_1 = !(raw_flatCount_1 & 1u);
                                if (isLastSubRegion_1)
                                    break;
                                else
                                    isFirstSubRegion_1 = false;

                            };
                            if (isLastPath_1)
                                break;

                        };
                        BL_17_v = (offset0_1);
                    (void)0;}), BL_17_v);
                }
                else
                    goto BL_1;

            };
            fu::never BL_26_v {};
            const int cmp = (l_done ? (r_done ? (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_26_v)) : +1) : (r_done ? -1 : (((l == 0u) != (r == 0u)) ? ((r == 0u) ? -1 : +1) : (((l == 1u) != (r == 1u)) ? ((r == 1u) ? +1 : -1) : x3Cx3E_6K8lyb3J(r, l)))));
            if (cmp == 0)
            {
                l_dirty = true;
                r_dirty = true;
                l_34_23_10JM5Soq(fu::get_view(l_chars, l_start, l_paths0), fu::get_view(l_chars, l_paths0, l_offset), fu::get_view(r_chars, r_paths0, r_offset), result, inter, _here, ctx);
            }
            else if (cmp < 0)
                l_dirty = true;
            else
                r_dirty = true;

        };
      } BL_1:;
    };
    return /*NRVO*/ result;
}

bool Lifetime_hasInter_lYlULmp8(const s_Lifetime& a, const s_Lifetime& b, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0;
    int offset0_1;


    { {
        fu::view<char> l_chars = a.uni0n;
        fu::view<char> r_chars = b.uni0n;
        int l_start {};
        int r_start {};
        int l_paths0 {};
        int r_paths0 {};
        int l_offset {};
        int r_offset {};
        unsigned l {};
        unsigned r {};
        bool l_dirty = true;
        bool r_dirty = true;
        const bool l_done = false;
        const bool r_done = false;
        for (; ; )
        {
            if (l_dirty)
            {
                l_dirty = false;
                l_start = l_offset;
                if (l_offset < l_chars.size())
                {
                    l = parse7bit(l_chars, l_offset);
                    int BL_6_v {};
                    l_paths0 = (__extension__ (
                    {
                        offset0 = (l_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath = false;
                            bool isFirstSubRegion = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset = parse7bit(l_chars, l_offset);
                                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(l_chars, l_offset) : 3u);
                                isLastPath = !(raw_flatCount & 1u);
                                if (isLastSubRegion)
                                    break;
                                else
                                    isFirstSubRegion = false;

                            };
                            if (isLastPath)
                                break;

                        };
                        BL_6_v = (offset0);
                    (void)0;}), BL_6_v);
                }
                else
                    goto BL_1;

            };
            if (r_dirty)
            {
                r_dirty = false;
                r_start = r_offset;
                if (r_offset < r_chars.size())
                {
                    r = parse7bit(r_chars, r_offset);
                    int BL_17_v {};
                    r_paths0 = (__extension__ (
                    {
                        offset0_1 = (r_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath_1 = false;
                            bool isFirstSubRegion_1 = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset_1 = parse7bit(r_chars, r_offset);
                                const bool isLastSubRegion_1 = !(raw_flatOffset_1 & 1u);
                                const unsigned raw_flatCount_1 = (isLastSubRegion_1 ? parse7bit(r_chars, r_offset) : 3u);
                                isLastPath_1 = !(raw_flatCount_1 & 1u);
                                if (isLastSubRegion_1)
                                    break;
                                else
                                    isFirstSubRegion_1 = false;

                            };
                            if (isLastPath_1)
                                break;

                        };
                        BL_17_v = (offset0_1);
                    (void)0;}), BL_17_v);
                }
                else
                    goto BL_1;

            };
            fu::never BL_26_v {};
            const int cmp = (l_done ? (r_done ? (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_26_v)) : +1) : (r_done ? -1 : (((l == 0u) != (r == 0u)) ? ((r == 0u) ? -1 : +1) : (((l == 1u) != (r == 1u)) ? ((r == 1u) ? +1 : -1) : x3Cx3E_6K8lyb3J(r, l)))));
            if (cmp == 0)
            {
                l_dirty = true;
                r_dirty = true;
                fu::view<char> sr_left = fu::get_view(l_chars, l_paths0, l_offset);
                fu::view<char> sr_right = fu::get_view(r_chars, r_paths0, r_offset);
                if ((sr_left == sr_right) || (sr_left == SR_empty) || (sr_right == SR_empty) || Paths_hasInter(sr_left, sr_right, _here, ctx))
                    return true;

            }
            else if (cmp < 0)
                l_dirty = true;
            else
                r_dirty = true;

        };
      } BL_1:;
    };
    return false;
}

inline static void l_34_27_aYVAJGKe(const int locid, fu::view<char> sr_left, fu::view<char> sr_right, fu::vec<int>& result, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!(!locid))
    {
        if ((sr_left == sr_right) || (sr_left == SR_empty) || (sr_right == SR_empty) || Paths_hasInter(sr_left, sr_right, _here, ctx))
            result += locid;

    };
}

fu::vec<int> Lifetime_interLocids_lYlULmp8(const s_Lifetime& a, const s_Lifetime& b, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0;
    int offset0_1;

    /*MOV*/ fu::vec<int> result {};

    { {
        fu::view<char> l_chars = a.uni0n;
        fu::view<char> r_chars = b.uni0n;
        int l_start {};
        int r_start {};
        int l_paths0 {};
        int r_paths0 {};
        int l_offset {};
        int r_offset {};
        unsigned l {};
        unsigned r {};
        bool l_dirty = true;
        bool r_dirty = true;
        const bool l_done = false;
        const bool r_done = false;
        for (; ; )
        {
            if (l_dirty)
            {
                l_dirty = false;
                l_start = l_offset;
                if (l_offset < l_chars.size())
                {
                    l = parse7bit(l_chars, l_offset);
                    int BL_6_v {};
                    l_paths0 = (__extension__ (
                    {
                        offset0 = (l_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath = false;
                            bool isFirstSubRegion = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset = parse7bit(l_chars, l_offset);
                                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(l_chars, l_offset) : 3u);
                                isLastPath = !(raw_flatCount & 1u);
                                if (isLastSubRegion)
                                    break;
                                else
                                    isFirstSubRegion = false;

                            };
                            if (isLastPath)
                                break;

                        };
                        BL_6_v = (offset0);
                    (void)0;}), BL_6_v);
                }
                else
                    goto BL_1;

            };
            if (r_dirty)
            {
                r_dirty = false;
                r_start = r_offset;
                if (r_offset < r_chars.size())
                {
                    r = parse7bit(r_chars, r_offset);
                    int BL_17_v {};
                    r_paths0 = (__extension__ (
                    {
                        offset0_1 = (r_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath_1 = false;
                            bool isFirstSubRegion_1 = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset_1 = parse7bit(r_chars, r_offset);
                                const bool isLastSubRegion_1 = !(raw_flatOffset_1 & 1u);
                                const unsigned raw_flatCount_1 = (isLastSubRegion_1 ? parse7bit(r_chars, r_offset) : 3u);
                                isLastPath_1 = !(raw_flatCount_1 & 1u);
                                if (isLastSubRegion_1)
                                    break;
                                else
                                    isFirstSubRegion_1 = false;

                            };
                            if (isLastPath_1)
                                break;

                        };
                        BL_17_v = (offset0_1);
                    (void)0;}), BL_17_v);
                }
                else
                    goto BL_1;

            };
            fu::never BL_26_v {};
            const int cmp = (l_done ? (r_done ? (__extension__ (
            {
                goto BL_1;
            (void)0;}), static_cast<fu::never&&>(BL_26_v)) : +1) : (r_done ? -1 : (((l == 0u) != (r == 0u)) ? ((r == 0u) ? -1 : +1) : (((l == 1u) != (r == 1u)) ? ((r == 1u) ? +1 : -1) : x3Cx3E_6K8lyb3J(r, l)))));
            if (cmp == 0)
            {
                l_dirty = true;
                r_dirty = true;
                l_34_27_aYVAJGKe(int(((r & 1u) ? 0u : (r >> 1u))), fu::get_view(l_chars, l_paths0, l_offset), fu::get_view(r_chars, r_paths0, r_offset), result, _here, ctx);
            }
            else if (cmp < 0)
                l_dirty = true;
            else
                r_dirty = true;

        };
      } BL_1:;
    };
    return /*NRVO*/ result;
}

void Lifetime_add_PUWFQPIX(s_Lifetime& l, const s_Lifetime& r, const bool flatCountMismatchOK, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (r)
    {
        l = Lifetime_union_YIGC7Sux(l, r, flatCountMismatchOK, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_static
                                #define DEF_Lifetime_static
extern const s_Lifetime Lifetime_static fu_INIT_PRIORITY(1005) = s_Lifetime { fu::str(Region_STATIC) };
                                #endif

                                #ifndef DEF_Lifetime_temporary
                                #define DEF_Lifetime_temporary
extern const s_Lifetime Lifetime_temporary fu_INIT_PRIORITY(1005) = s_Lifetime { fu::str(Region_TEMP) };
                                #endif

                                #ifndef DEF_starts_t2TApdnqRc8
                                #define DEF_starts_t2TApdnqRc8
inline bool starts_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

bool hasTemporary_Sd1Oo4TV(const s_Lifetime& lifetime)
{
    return starts_t2TApdnq(lifetime.uni0n, Region_TEMP);
}

                                #ifndef DEF_ends_t2TApdnqRc8
                                #define DEF_ends_t2TApdnqRc8
inline bool ends_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

bool hasStatic_Sd1Oo4TV(const s_Lifetime& lifetime)
{
    return ends_t2TApdnq(lifetime.uni0n, Region_STATIC);
}

inline static bool l_34_31_IL0xcmNa(const int locid, const int search)
{
    return locid == search;
}

                                #ifndef DEF_Lifetime_some_XyDqMOgE4z7
                                #define DEF_Lifetime_some_XyDqMOgE4z7
inline bool Lifetime_some_XyDqMOgE(const s_Lifetime& lifetime, const int search)
{

    {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
            if (l_34_31_IL0xcmNa(locid, search))
                return true;

        };
    };
    return false;
}
                                #endif

bool Lifetime_has_62UtfSbx(const s_Lifetime& lifetime, const int search)
{
    return Lifetime_some_XyDqMOgE(lifetime, search);
}

inline static bool l_34_32_dK23HtF9(const bool isArgIdx, const int argidx, const int search)
{
    if (isArgIdx)
        return argidx == search;
    else
        return false;

}

                                #ifndef DEF_Lifetime_some_Ukn6URmk30g
                                #define DEF_Lifetime_some_Ukn6URmk30g
inline bool Lifetime_some_Ukn6URmk(const s_Lifetime& lifetime, const int search)
{

    {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int argidx = int(((r & 1u) ? (r >> 2u) : 0u));
            const bool isArgIdx = ((r & 3u) == 3u);
            if (l_34_32_dK23HtF9(isArgIdx, argidx, search))
                return true;

        };
    };
    return false;
}
                                #endif

bool Lifetime_has_NRjdLNHo(const s_Lifetime& lifetime, const int search)
{
    return Lifetime_some_Ukn6URmk(lifetime, search);
}

inline static void l_34_37_aydkDYZv(const bool isLastPath, fu::view<char> raw_prefix, const int parent_flatCount, const int parent_flatOffset, fu::str& result, const int deref_flatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (parent_flatCount == 1)
    {
        result += raw_prefix;

        {
            const bool isLastSubRegion = false;
            if ((parent_flatOffset >= 0) && (parent_flatCount > 0) && (parent_flatCount == 1))
                append7bit(result, ((unsigned(parent_flatOffset) << 1u) | 1u));
            else
                BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("appendSubRegion: flatCount("_fu, fu::i64dec(parent_flatCount)) + ")"_fu) + " flatOffset("_fu), fu::i64dec(parent_flatOffset)) + ")"_fu) + " isLastSubRegion("_fu), fu::booldec(isLastSubRegion)) + ")"_fu), _here, ctx);

        };
        const int flatOffset = 0;
        const bool isLastSubRegion = true;
        const bool isLastPath_1 = isLastPath;
        if ((flatOffset >= 0) && (deref_flatCount > 0) && isLastSubRegion)
        {
            append7bit(result, ((unsigned(flatOffset) << 1u) | 0u));
            append7bit(result, ((unsigned(deref_flatCount) << 1u) | (isLastPath_1 ? 0u : 1u)));
        }
        else
            BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("appendSubRegion: flatCount("_fu, fu::i64dec(deref_flatCount)) + ")"_fu) + " flatOffset("_fu), fu::i64dec(flatOffset)) + ")"_fu) + " isLastSubRegion("_fu), fu::booldec(isLastSubRegion)) + ")"_fu), _here, ctx);

    }
    else
    {
        BUG_9SZtRVJ0((x7E_gCeFmDFw("Lifetime_op_deref: parent_flatCount("_fu, fu::i64dec(parent_flatCount)) + ") != 1"_fu), _here, ctx);
    };
}

inline static void l_34_36_ISpVkrxQ(fu::view<char> paths, fu::str& result, const int deref_flatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    int offset = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        const int path0 = offset;
        for (; ; )
        {
            const int subregion0 = offset;
            const unsigned raw_flatOffset = parse7bit(paths, offset);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(paths, offset) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            if (isLastSubRegion)
            {
                l_34_37_aydkDYZv(isLastPath, fu::get_view(paths, path0, subregion0), flatCount, flatOffset, result, deref_flatCount, _here, ctx);
                break;
            }
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(offset == paths.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

inline static void l_34_33_5y6WdB13(fu::view<char> r_raw, fu::view<char> paths, const int locid, const int minPathDepth, fu::str& result, const int deref_flatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    result += r_raw;
    if (paths == SR_empty)
        result += paths;
    else if (locid)
    {
        const int result0 = result.size();
        l_34_36_ISpVkrxQ(paths, result, deref_flatCount, _here, ctx);
        assertPathsValid_F77ZcVgF(fu::get_view(result, result0), -1, -1, false, minPathDepth, _here, ctx);
    }
    else
    {
        BUG_9SZtRVJ0("Lifetime_op: non-locid non-x00x00 subregion."_fu, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_each_j3dUF9OKQf4
                                #define DEF_Lifetime_each_j3dUF9OKQf4
inline void Lifetime_each_j3dUF9OK(const s_Lifetime& lifetime, const int minPathDepth, fu::str& result, const int deref_flatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0_1;

    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
        (void)0;}), BL_3_v);
        l_34_33_5y6WdB13(fu::get_view(chars, offset0, sr), fu::get_view(chars, sr, offset), int(((r & 1u) ? 0u : (r >> 1u))), minPathDepth, result, deref_flatCount, _here, ctx);
    };
}
                                #endif

s_Lifetime Lifetime_op_deref_L4FL85LY(const s_Lifetime& lt, const int deref_flatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int minPathDepth = 2;
    /*MOV*/ fu::str result {};
    Lifetime_each_j3dUF9OK(lt, minPathDepth, result, deref_flatCount, _here, ctx);
    return s_Lifetime { static_cast<fu::str&&>(result) };
}

s_Lifetime Lifetime_makeShared_pCJ6hBta(const s_Lifetime& lifetime, const int flatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    return Lifetime_union_YIGC7Sux(Lifetime_op_deref_L4FL85LY(lifetime, flatCount, _here, ctx), Lifetime_static, false, _here, ctx);
}

inline static void l_34_35_KiodcHJa(const bool isLastSubRegion, const bool isLastPath, fu::view<char> raw_prefix, const int struct_flatCount, const int struct_flatOffset, fu::str& result, const int flatCount, const int flatOffset, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (((flatCount + flatOffset) <= struct_flatCount))
    {
        result += raw_prefix;
        const int flatOffset_1 = (struct_flatOffset + flatOffset);
        const bool isLastPath_1 = isLastPath;
        if ((flatOffset_1 >= 0) && (flatCount > 0) && (isLastSubRegion || (flatCount == 1)))
        {
            append7bit(result, ((unsigned(flatOffset_1) << 1u) | (isLastSubRegion ? 0u : 1u)));
            if (isLastSubRegion)
                append7bit(result, ((unsigned(flatCount) << 1u) | (isLastPath_1 ? 0u : 1u)));

        }
        else
            BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("appendSubRegion: flatCount("_fu, fu::i64dec(flatCount)) + ")"_fu) + " flatOffset("_fu), fu::i64dec(flatOffset_1)) + ")"_fu) + " isLastSubRegion("_fu), fu::booldec(isLastSubRegion)) + ")"_fu), _here, ctx);

    }
    else
    {
        BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("Lifetime_op_field: field.flatOffset("_fu, fu::i64dec(flatOffset)) + ")"_fu) + " + field.flatCount("_fu), fu::i64dec(flatCount)) + ")"_fu) + " !<= struct.flatCount("_fu), fu::i64dec(struct_flatCount)) + ")"_fu), _here, ctx);
    };
}

inline static void l_34_34_6YdPdThv(fu::view<char> paths, fu::str& result, const int flatCount, const int flatOffset, const s_TokenIdx& _here, const s_Context& ctx)
{
    int offset = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        const int path0 = offset;
        for (; ; )
        {
            const int subregion0 = offset;
            const unsigned raw_flatOffset = parse7bit(paths, offset);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(paths, offset) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount_1 = int((raw_flatCount >> 1u));
            const int flatOffset_1 = int((raw_flatOffset >> 1u));
            if (isLastSubRegion)
            {
                l_34_35_KiodcHJa(isLastSubRegion, isLastPath, fu::get_view(paths, path0, subregion0), flatCount_1, flatOffset_1, result, flatCount, flatOffset, _here, ctx);
                break;
            }
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(offset == paths.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

inline static void l_34_33_h4lOB3RY(fu::view<char> r_raw, fu::view<char> paths, const int locid, const int minPathDepth, fu::str& result, const int flatCount, const int flatOffset, const s_TokenIdx& _here, const s_Context& ctx)
{
    result += r_raw;
    if (paths == SR_empty)
        result += paths;
    else if (locid)
    {
        const int result0 = result.size();
        l_34_34_6YdPdThv(paths, result, flatCount, flatOffset, _here, ctx);
        assertPathsValid_F77ZcVgF(fu::get_view(result, result0), -1, -1, false, minPathDepth, _here, ctx);
    }
    else
    {
        BUG_9SZtRVJ0("Lifetime_op: non-locid non-x00x00 subregion."_fu, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_each_ICHl8Sx2Nv9
                                #define DEF_Lifetime_each_ICHl8Sx2Nv9
inline void Lifetime_each_ICHl8Sx2(const s_Lifetime& lifetime, const int minPathDepth, fu::str& result, const int flatCount, const int flatOffset, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0_1;

    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
        (void)0;}), BL_3_v);
        l_34_33_h4lOB3RY(fu::get_view(chars, offset0, sr), fu::get_view(chars, sr, offset), int(((r & 1u) ? 0u : (r >> 1u))), minPathDepth, result, flatCount, flatOffset, _here, ctx);
    };
}
                                #endif

s_Lifetime Lifetime_op_field_vZQKmIec(const s_Lifetime& lt, const int flatCount, const int flatOffset, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int minPathDepth = 1;
    /*MOV*/ fu::str result {};
    Lifetime_each_ICHl8Sx2(lt, minPathDepth, result, flatCount, flatOffset, _here, ctx);
    return s_Lifetime { static_cast<fu::str&&>(result) };
}

inline static void l_34_40_vbsGH4bz(const bool child_isFirstSubRegion, const bool child_isLastSubRegion, const bool child_isLastPath, const int child_flatCount, const int child_flatOffset, const bool parent_isLastPath, const int parent_flatCount, const int parent_flatOffset, fu::view<char> parent_rawPrefix, fu::str& result, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (child_isFirstSubRegion)
        result += parent_rawPrefix;

    const int result_flatOffset = (!child_isFirstSubRegion ? child_flatOffset : (((child_flatOffset + child_flatCount) <= parent_flatCount) ? (child_flatOffset + parent_flatOffset) : BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("Lifetime_op_join: child_flatOffset("_fu, fu::i64dec(child_flatOffset)) + ")"_fu) + " + child_flatCount("_fu), fu::i64dec(child_flatCount)) + ")"_fu) + " !<= parent_flatCount("_fu), fu::i64dec(parent_flatCount)) + ")"_fu), _here, ctx)));
    const bool isLastPath = (!parent_isLastPath ? parent_isLastPath : child_isLastPath);
    if ((result_flatOffset >= 0) && (child_flatCount > 0) && (child_isLastSubRegion || (child_flatCount == 1)))
    {
        append7bit(result, ((unsigned(result_flatOffset) << 1u) | (child_isLastSubRegion ? 0u : 1u)));
        if (child_isLastSubRegion)
            append7bit(result, ((unsigned(child_flatCount) << 1u) | (isLastPath ? 0u : 1u)));

    }
    else
        BUG_9SZtRVJ0((x7E_gCeFmDFw(((x7E_gCeFmDFw(((x7E_gCeFmDFw("appendSubRegion: flatCount("_fu, fu::i64dec(child_flatCount)) + ")"_fu) + " flatOffset("_fu), fu::i64dec(result_flatOffset)) + ")"_fu) + " isLastSubRegion("_fu), fu::booldec(child_isLastSubRegion)) + ")"_fu), _here, ctx);

}

inline static void l_34_39_J7QiNk4o(const bool parent_isLastPath, const int parent_flatCount, const int parent_flatOffset, fu::view<char> parent_rawPrefix, fu::str& result, fu::view<char> child, const s_TokenIdx& _here, const s_Context& ctx)
{
    int _c0 = 0;
    const bool parent_isLastPath_1 = parent_isLastPath;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit(child, _c0);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(child, _c0) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            l_34_40_vbsGH4bz(isFirstSubRegion, isLastSubRegion, isLastPath, flatCount, flatOffset, parent_isLastPath_1, parent_flatCount, parent_flatOffset, parent_rawPrefix, result, _here, ctx);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(_c0 == child.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

inline static void l_34_38_YhQK4pZ4(fu::view<char> parent, fu::str& result, fu::view<char> child, const s_TokenIdx& _here, const s_Context& ctx)
{
    int _p0 = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        const int path0 = _p0;
        for (; ; )
        {
            const int subregion0 = _p0;
            const unsigned raw_flatOffset = parse7bit(parent, _p0);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(parent, _p0) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            if (isLastSubRegion)
            {
                l_34_39_J7QiNk4o(isLastPath, flatCount, flatOffset, fu::get_view(parent, path0, subregion0), result, child, _here, ctx);
                break;
            }
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(_p0 == parent.size()))
        BUG_9SZtRVJ0("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

}

inline static void l_34_33_xyqI12y8(fu::view<char> r_raw, fu::view<char> paths, const int locid, const int minPathDepth, fu::str& result, fu::view<char> child, const s_TokenIdx& _here, const s_Context& ctx)
{
    result += r_raw;
    if (paths == SR_empty)
        result += paths;
    else if (locid)
    {
        const int result0 = result.size();
        l_34_38_YhQK4pZ4(paths, result, child, _here, ctx);
        assertPathsValid_F77ZcVgF(fu::get_view(result, result0), -1, -1, false, minPathDepth, _here, ctx);
    }
    else
    {
        BUG_9SZtRVJ0("Lifetime_op: non-locid non-x00x00 subregion."_fu, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_each_ozNP2EhUKBj
                                #define DEF_Lifetime_each_ozNP2EhUKBj
inline void Lifetime_each_ozNP2EhU(const s_Lifetime& lifetime, const int minPathDepth, fu::str& result, fu::view<char> child, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0_1;

    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit(chars, offset);
        int BL_3_v {};
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
        (void)0;}), BL_3_v);
        l_34_33_xyqI12y8(fu::get_view(chars, offset0, sr), fu::get_view(chars, sr, offset), int(((r & 1u) ? 0u : (r >> 1u))), minPathDepth, result, child, _here, ctx);
    };
}
                                #endif

s_Lifetime Lifetime_op_join_dwN33Lug(const s_Lifetime& lt, fu::view<char> child, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int minPathDepth = 1;
    /*MOV*/ fu::str result {};
    Lifetime_each_ozNP2EhU(lt, minPathDepth, result, child, _here, ctx);
    return s_Lifetime { static_cast<fu::str&&>(result) };
}

#endif
