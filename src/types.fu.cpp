#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>

struct s_Type;
struct s_ValueType;
struct s_Lifetime;
typedef fu::u8 s_VFacts;
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
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
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
struct s_Map_iIYL7rECCBg;
[[noreturn]] fu::never BUG_9SZtRVJ0(fu::str&&, const s_TokenIdx&, const s_Context&);
bool isCanonAssignable_IaeizMuX(fu::view<char>, fu::view<char>);
void Lifetime_add_PKO62rQ1(s_Lifetime&, const s_Lifetime&);
void appendVarint_YxEMA0h9(fu::str&, unsigned);
unsigned parseVarint_Fc3p3Wmg(int&, fu::view<char>);
bool is_sliceable_3t4EwFeQ(const s_ValueType&);
const fu::str& canon_trySuper_YrRpjGae(const fu::str&, const fu::str&);
s_Type type_trySuper_2nNLpyR4(const s_Type&, const s_Type&, bool, const s_TokenIdx&, const s_Context&);
s_Lifetime Lifetime_union_doHetu2L(const s_Lifetime&, const s_Lifetime&);
const fu::str& canon_tryIntersect_YrRpjGae(const fu::str&, const fu::str&);
s_Lifetime Lifetime_inter_k7qB83TF(const s_Lifetime&, const s_Lifetime&);
void appendLocalOrGlobal_bpRG0scY(fu::str&, const s_Target&);
void trimPattern_z4yNxv0x(fu::str&);

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
    s_kind_typecast = 31u,
    s_kind_typeassert = 32u,
    s_kind_typeparam = 33u,
    s_kind_unwrap = 34u,
    s_kind_pragma = 35u,
    s_kind_break = 36u,
    s_kind_return = 37u,
    s_kind_continue = 38u,
    s_kind_import = 39u,
    s_kind_addroffn = 40u,
    s_kind_forfieldsof = 41u,
    s_kind_struct = 42u,
    s_kind_union = 43u,
    s_kind_primitive = 44u,
    s_kind_flags = 45u,
    s_kind_enum = 46u,
    s_kind_members = 47u,
    s_kind_fndef = 48u,
    s_kind_fn = 49u,
    s_kind_fnbranch = 50u,
    s_kind_pattern = 51u,
    s_kind_typeunion = 52u,
    s_kind_typetag = 53u,
    s_kind___relaxed = 54u,
    s_kind___convert = 55u,
    s_kind___preceding_ref_arg = 56u,
    s_kind___no_kind_yet = 57u,
    s_kind___tombstone = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
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
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL = s_ParseSyntax(8u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ALWAYS_DISCARD = s_ParseSyntax(16u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_NOT_AN_EXPRESSION = s_ParseSyntax(32u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_ID
    | s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_SEMI
    | s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL
    | s_ParseSyntax_PS_ALWAYS_DISCARD
    | s_ParseSyntax_PS_NOT_AN_EXPRESSION;
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 2u;
inline constexpr s_Flags s_Flags_F_ACCESS = 4u;
inline constexpr s_Flags s_Flags_F_TYPENAME = 8u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 16u;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 32u;
inline constexpr s_Flags s_Flags_F_LAX = 64u;
inline constexpr s_Flags s_Flags_F_ARG = 128u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 256u;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 512u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 1024u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 2048u;
inline constexpr s_Flags s_Flags_F_MUT = 4096u;
inline constexpr s_Flags s_Flags_F_REF = 8192u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 16384u;
inline constexpr s_Flags s_Flags_F_USING = 32768u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 65536u;
inline constexpr s_Flags s_Flags_F_SHADOW = 131072u;
inline constexpr s_Flags s_Flags_F_PUB = 262144u;
inline constexpr s_Flags s_Flags_F_EXTERN = 524288u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 1048576u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 2097152u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 4194304u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 8388608u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 16777216u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 33554432u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 67108864u;
inline constexpr s_Flags s_Flags_F_INLINE = 134217728u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 268435456u;
inline constexpr s_Flags s_Flags_F_INJECTED = 536870912u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
    | s_Flags_F_TYPENAME
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

inline constexpr s_CGDefects MASK_s_CGDefects
    = s_CGDefects_GNUStmtExpr
    | s_CGDefects_Goto
    | s_CGDefects_PointlessMustSeq
    | s_CGDefects_LocalConstBool
    | s_CGDefects_ConstCast
    | s_CGDefects_PointlessLocal
    | s_CGDefects_IrrelevantLiteral;
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
extern const unsigned q_mutref = (unsigned(1) << 0u);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
extern const unsigned q_rx_copy = (unsigned(1) << 1u);
                                #endif

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
extern const unsigned q_rx_resize = (unsigned(1) << 2u);
                                #endif

                                #ifndef DEF_q_TAGS
                                #define DEF_q_TAGS
extern const unsigned q_TAGS = ((q_mutref | q_rx_copy) | q_rx_resize);
                                #endif

                                #ifndef DEF_q_USAGE
                                #define DEF_q_USAGE
extern const unsigned q_USAGE = ~q_TAGS;
                                #endif

                                #ifndef DEF_q_TAGS_bitsize
                                #define DEF_q_TAGS_bitsize
inline constexpr int q_TAGS_bitsize = 3;
                                #endif

                                #ifndef DEF_Quals_bitsize
                                #define DEF_Quals_bitsize
inline constexpr int Quals_bitsize = 32;
                                #endif

                                #ifndef DEF_q_USAGE_bitsize
                                #define DEF_q_USAGE_bitsize
extern const int q_USAGE_bitsize = (Quals_bitsize - q_TAGS_bitsize);
                                #endif

                                #ifndef DEF_q_non_compund
                                #define DEF_q_non_compund
extern const unsigned q_non_compund = (unsigned(1) << unsigned(q_TAGS_bitsize));
                                #endif

                                #ifndef DEF_TAGS
                                #define DEF_TAGS
extern const fu::vec<fu::str> TAGS fu_INIT_PRIORITY(1009) = fu::vec<fu::str> { fu::slate<3, fu::str> { "mutref"_fu, "copy"_fu, "resize"_fu } };
                                #endif

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const unsigned RELAX_before_bck = (q_mutref | q_USAGE);
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const unsigned RELAX_all = (q_TAGS | q_USAGE);
                                #endif

s_Type Primitive(const fu::str& canon)
{
    return s_Type { s_ValueType { (q_rx_copy | q_non_compund), fu::str(canon) }, s_Lifetime{}, s_VFacts{} };
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8 fu_INIT_PRIORITY(1009) = Primitive("i8"_fu);
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16 fu_INIT_PRIORITY(1009) = Primitive("i16"_fu);
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32 fu_INIT_PRIORITY(1009) = Primitive("i32"_fu);
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64 fu_INIT_PRIORITY(1009) = Primitive("i64"_fu);
                                #endif

                                #ifndef DEF_t_i128
                                #define DEF_t_i128
extern const s_Type t_i128 fu_INIT_PRIORITY(1009) = Primitive("i128"_fu);
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8 fu_INIT_PRIORITY(1009) = Primitive("u8"_fu);
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16 fu_INIT_PRIORITY(1009) = Primitive("u16"_fu);
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32 fu_INIT_PRIORITY(1009) = Primitive("u32"_fu);
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64 fu_INIT_PRIORITY(1009) = Primitive("u64"_fu);
                                #endif

                                #ifndef DEF_t_u128
                                #define DEF_t_u128
extern const s_Type t_u128 fu_INIT_PRIORITY(1009) = Primitive("u128"_fu);
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32 fu_INIT_PRIORITY(1009) = Primitive("f32"_fu);
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64 fu_INIT_PRIORITY(1009) = Primitive("f64"_fu);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool fu_INIT_PRIORITY(1009) = Primitive("b8"_fu);
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte fu_INIT_PRIORITY(1009) = Primitive("c8"_fu);
                                #endif

                                #ifndef DEF_t_proposition
                                #define DEF_t_proposition
extern const s_Type t_proposition fu_INIT_PRIORITY(1009) = s_Type { s_ValueType { q_USAGE, fu::str(t_bool.vtype.canon) }, s_Lifetime{}, s_VFacts{} };
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

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

                                #ifndef DEF_str_RakViOYyDX0
                                #define DEF_str_RakViOYyDX0
inline fu::str str_RakViOYy(const s_VFacts n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & s_VFacts_AlwaysTrue)
            res += ("AlwaysTrue"_fu + ", "_fu);

        if (n & s_VFacts_AlwaysFalse)
            res += ("AlwaysFalse"_fu + ", "_fu);

        if (n & s_VFacts_Typename)
            res += ("Typename"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

bool propositionOK_hoadAQC0(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!type.lifetime)
    {
        if (!type.vfacts)
            return type.vtype.canon == t_bool.vtype.canon;
        else
            BUG_9SZtRVJ0(x7E_gCeFmDFw("propositionOK seeing vfacts: "_fu, str_RakViOYy(type.vfacts)), _here, ctx);

    }
    else
        return false;

}

s_Type NotSure(const fu::str& canon, const unsigned quals)
{
    return s_Type { s_ValueType { quals, fu::str(canon) }, s_Lifetime{}, s_VFacts{} };
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void fu_INIT_PRIORITY(1009) = NotSure("void"_fu, 0u);
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never fu_INIT_PRIORITY(1009) = NotSure("never"_fu, 0u);
                                #endif

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes fu_INIT_PRIORITY(1009) = NotSure("zeroes"_fu, 0u);
                                #endif

bool is_void_FfV8Zuj5(const s_Type& t)
{
    return t.vtype.canon == t_void.vtype.canon;
}

bool is_never_FfV8Zuj5(const s_Type& t)
{
    return t.vtype.canon == t_never.vtype.canon;
}

bool is_zeroes_FfV8Zuj5(const s_Type& t)
{
    return t.vtype.canon == t_zeroes.vtype.canon;
}

                                #ifndef DEF_t_AssumeNever_WhileSolvingRecursion
                                #define DEF_t_AssumeNever_WhileSolvingRecursion
extern const s_Type t_AssumeNever_WhileSolvingRecursion fu_INIT_PRIORITY(1009) = NotSure("never"_fu, q_rx_resize);
                                #endif

unsigned is_AssumeNever_WhileSolvingRecursion_GSunVkiW(const s_Type& t)
{
    if (t.vtype.canon == "never"_fu)
        return t.vtype.quals & q_rx_resize;
    else
        return 0u;

}

bool is_rx_copy_GSunVkiW(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_copy);
}

bool is_rx_resize_GSunVkiW(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_resize);
}

bool areVFactsAssignable(const s_VFacts host, const s_VFacts guest, const s_TokenIdx& _here, const s_Context& ctx)
{

    {
        const s_VFacts h = s_VFacts((host & s_VFacts(~s_VFacts_Typename)));
        const s_VFacts g = s_VFacts((guest & s_VFacts(~s_VFacts_Typename)));
        if (!(s_VFacts((h & g)) == h))
            BUG_9SZtRVJ0(x7E_gCeFmDFw((x7E_gCeFmDFw("areVFactsAssignable: vfacts mismatch: "_fu, str_RakViOYy(host)) + " != "_fu), str_RakViOYy(guest)), _here, ctx);

    };
    return s_VFacts((host & guest)) == host;
}

bool areQualsAssignable(const unsigned host, const unsigned guest)
{
    return (host & guest) == host;
}

bool isLifetimeAssignable(const s_Lifetime& host, const s_Lifetime& guest)
{
    return !host || !!guest;
}

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
inline constexpr bool CANNOT_definit_mutrefs = true;
                                #endif

bool isAssignableAsArgument_E3uCShzQ(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes, const s_TokenIdx& _here, const s_Context& ctx)
{
    return areVFactsAssignable(host.vfacts, guest.vfacts, _here, ctx) && ((areQualsAssignable(host.vtype.quals, guest.vtype.quals) && isCanonAssignable_IaeizMuX(host.vtype.canon, guest.vtype.canon)) || (!DONT_match_zeroes && is_zeroes_FfV8Zuj5(guest) && !(host.vtype.quals & q_mutref) && !is_never_FfV8Zuj5(host)));
}

bool isAssignable_v8EzC34Q(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes, const bool asArgument, const s_TokenIdx& _here, const s_Context& ctx)
{
    return isAssignableAsArgument_E3uCShzQ(host, guest, DONT_match_zeroes, _here, ctx) && (asArgument || isLifetimeAssignable(host.lifetime, guest.lifetime));
}

bool is_ref_gBx1AgSx(const s_Type& type)
{
    return !!type.lifetime;
}

bool is_mutref_hoadAQC0(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    const bool is_mutref = !!(type.vtype.quals & q_mutref);
    if (is_mutref && !is_ref_gBx1AgSx(type))
    {
        BUG_9SZtRVJ0("is_mutref: Empty lifetime, but q_mutref set"_fu, _here, ctx);
    }
    else
        return is_mutref;

}

s_Type add_ref_XBf6EmLx(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    Lifetime_add_PKO62rQ1(type.lifetime, lifetime);
    if (type.lifetime)
        return static_cast<s_Type&&>(type);
    else
    {
        BUG_9SZtRVJ0("add_ref: Empty lifetime"_fu, _here, ctx);
    };
}

s_Type add_mutref_XBf6EmLx(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    type.vtype.quals |= q_mutref;
    Lifetime_add_PKO62rQ1(type.lifetime, lifetime);
    if (type.lifetime)
        return static_cast<s_Type&&>(type);
    else
    {
        BUG_9SZtRVJ0("add_mutref: Empty lifetime"_fu, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_temporary
                                #define DEF_Lifetime_temporary
extern const s_Lifetime Lifetime_temporary;
                                #endif

void ref_anonymize_ucOr4Guq(s_Type& type)
{
    if (is_ref_gBx1AgSx(type))
    {
        type.lifetime = Lifetime_temporary;
    };
}

s_Type clear_vfacts_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type.vfacts = s_VFacts{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_refs_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    type.lifetime = s_Lifetime{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_mutref_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_Lifetime_static
                                #define DEF_Lifetime_static
extern const s_Lifetime Lifetime_static;
                                #endif

s_Type definitType_hoadAQC0(/*MOV*/ s_Type&& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!type || is_never_FfV8Zuj5(type))
        type = t_zeroes;

    type.vtype.quals &= ~q_mutref;
    if (is_ref_gBx1AgSx(type))
    {
        type.lifetime = Lifetime_static;
    };
    if (is_never_FfV8Zuj5(type))
        BUG_9SZtRVJ0("Cannot definit type never."_fu, _here, ctx);
    else
    {
        type.vfacts = s_VFacts_AlwaysFalse;
        return static_cast<s_Type&&>(type);
    };
}

s_Type tryClearRefs(const s_Type& type, const bool mutref, const s_TokenIdx& _here, const s_Context& ctx)
{
    if ((mutref ? is_mutref_hoadAQC0(type, _here, ctx) : is_ref_gBx1AgSx(type)))
        return clear_refs_40rRB6L8(s_Type(type));
    else
    {
        return s_Type{};
    };
}

s_Type tryClear_mutref_hoadAQC0(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, true, _here, ctx);
}

s_Type tryClear_ref_hoadAQC0(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, false, _here, ctx);
}

s_Type add_refs_u1ljuBgp(const s_Type& from, /*MOV*/ s_Type&& to)
{
    to.vtype.quals |= (from.vtype.quals & q_mutref);
    Lifetime_add_PKO62rQ1(to.lifetime, from.lifetime);
    return static_cast<s_Type&&>(to);
}

s_Type make_copyable_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type.vtype.quals |= q_rx_copy;
    return static_cast<s_Type&&>(type);
}

s_Type make_non_copyable_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_rx_copy;
    return static_cast<s_Type&&>(type);
}

fu::str serializeType_NOIpmQqe(const s_Type& type, fu::view<char> debug)
{
    if (type)
    {
        /*MOV*/ fu::str result {};
        appendVarint_YxEMA0h9(result, unsigned(type.vtype.quals));
        result += (type.vtype.canon ? type.vtype.canon : fu::fail(("COMPILER BUG: serializeType: No type.canon in: "_fu + debug)));
        return /*NRVO*/ result;
    }
    else
        fu::fail(("COMPILER BUG: serializeType: Falsy type in: "_fu + debug));

}

fu::str humanizeQuals_3VLS0hFo(const unsigned quals)
{
    /*MOV*/ fu::str result {};
    for (int i = 0; i < TAGS.size(); i++)
    {
        if (quals & (1u << unsigned(i)))
            result += (" "_fu + TAGS[i]);

    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_clone_z7cvvzgxm5d
                                #define DEF_clone_z7cvvzgxm5d
inline char clone_z7cvvzgx(const char a)
{
    return a;
}
                                #endif

                                #ifndef DEF_map_Se1swOyeiO0
                                #define DEF_map_Se1swOyeiO0
inline fu::str map_Se1swOye(fu::view<char> a)
{
    /*MOV*/ fu::str res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_z7cvvzgx(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_9IL064wQMu8
                                #define DEF_clone_9IL064wQMu8
inline fu::str clone_9IL064wQ(fu::view<char> a)
{
    return map_Se1swOye(a);
}
                                #endif

s_ValueType parseType_cWRn30lS(fu::view<char> str)
{
    int offset {};
    const unsigned quals = unsigned(parseVarint_Fc3p3Wmg(offset, str));
    /*MOV*/ fu::str canon = clone_9IL064wQ(fu::get_view(str, offset));
    return s_ValueType { quals, static_cast<fu::str&&>(canon) };
}

s_Type createArray_i5AzHnyb(const s_Type& item)
{
    /*MOV*/ fu::str canon = (("["_fu + serializeType_NOIpmQqe(item, "createArray"_fu)) + "]"_fu);
    const unsigned quals = (((item.vtype.quals & q_rx_copy) | q_rx_resize) | q_non_compund);
    return s_Type { s_ValueType { quals, static_cast<fu::str&&>(canon) }, s_Lifetime(item.lifetime), s_VFacts{} };
}

s_Type createSlice_Sedu2ErD(const s_Type& item, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ s_Type out = createArray_i5AzHnyb(item);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref_XBf6EmLx(static_cast<s_Type&&>(out), lifetime, _here, ctx);
}

s_Type tryClear_sliceable_dB532Fe7(const s_ValueType& type)
{
    if (!is_sliceable_3t4EwFeQ(type))
    {
        return s_Type{};
    }
    else
    {
        /*MOV*/ s_ValueType vtype = parseType_cWRn30lS(fu::slice(type.canon, 1, (type.canon.size() - 1)));
        return s_Type { static_cast<s_ValueType&&>(vtype), s_Lifetime{}, s_VFacts{} };
    };
}

s_Type clear_sliceable_hoadAQC0(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = tryClear_sliceable_dB532Fe7(type.vtype)) ? static_cast<s_Type&&>(_0) : BUG_9SZtRVJ0(("Not sliceable: "_fu + type.vtype.canon), _here, ctx);
}

s_Type tryClear_array_40rRB6L8(const s_Type& type)
{
    if ((type.vtype.quals & q_rx_resize) != q_rx_resize)
    {
        return s_Type{};
    }
    else
        return tryClear_sliceable_dB532Fe7(type.vtype);

}

bool TODO_FIX_isArray_40rRB6L8(const s_Type& type)
{
    return (type.vtype.quals & (q_rx_resize | q_rx_copy)) && is_sliceable_3t4EwFeQ(type.vtype);
}

                                #ifndef DEF_t_string
                                #define DEF_t_string
extern const s_Type t_string fu_INIT_PRIORITY(1009) = createArray_i5AzHnyb(t_byte);
                                #endif

s_Type type_trySuper_2nNLpyR4(const s_Type& a, const s_Type& b, const bool DONT_match_zeroes, const s_TokenIdx& _here, const s_Context& ctx)
{
    const fu::str& canon = canon_trySuper_YrRpjGae(a.vtype.canon, b.vtype.canon);
    if (!canon)
    {
        if (is_zeroes_FfV8Zuj5(a) && !DONT_match_zeroes)
            return type_trySuper_2nNLpyR4(definitType_hoadAQC0(s_Type(b), _here, ctx), b, false, _here, ctx);
        else if (is_zeroes_FfV8Zuj5(b) && !DONT_match_zeroes)
            return type_trySuper_2nNLpyR4(definitType_hoadAQC0(s_Type(a), _here, ctx), a, false, _here, ctx);
        else
        {
            return s_Type{};
        };
    }
    else
    {
        const unsigned quals = (a.vtype.quals & b.vtype.quals);
        const s_VFacts vfacts = s_VFacts((a.vfacts & b.vfacts));
        /*MOV*/ s_Lifetime lifetime = ((a.lifetime && b.lifetime) ? Lifetime_union_doHetu2L(a.lifetime, b.lifetime) : s_Lifetime{});
        return s_Type { s_ValueType { quals, fu::str(canon) }, static_cast<s_Lifetime&&>(lifetime), vfacts };
    };
}

s_Type type_tryIntersect_RYGee21D(const s_Type& a, const s_Type& b)
{
    const fu::str& canon = canon_tryIntersect_YrRpjGae(a.vtype.canon, b.vtype.canon);
    if (!canon)
    {
        return s_Type{};
    }
    else
    {
        const unsigned quals = (a.vtype.quals | b.vtype.quals);
        const s_VFacts vfacts = s_VFacts((a.vfacts | b.vfacts));
        /*MOV*/ s_Lifetime lifetime = Lifetime_inter_k7qB83TF(a.lifetime, b.lifetime);
        if (!lifetime && (a.lifetime || b.lifetime))
        {
            return s_Type{};
        }
        else
        {
            return s_Type { s_ValueType { quals, fu::str(canon) }, static_cast<s_Lifetime&&>(lifetime), vfacts };
        };
    };
}

                                #ifndef DEF_starts_Db9eGFmCKDj
                                #define DEF_starts_Db9eGFmCKDj
inline bool starts_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isAddrOfFn_gBx1AgSx(const s_Type& type)
{
    return starts_Db9eGFmC(type.vtype.canon, '@');
}

fu::str packAddrOfFn_aofyNfjF(fu::view<s_Target> targets)
{
    /*MOV*/ fu::str res = "@"_fu;
    for (int i = 0; i < targets.size(); i++)
        appendLocalOrGlobal_bpRG0scY(res, targets[i]);

    return /*NRVO*/ res;
}

unsigned speculateStruct_uflh0vv2(const s_DeclAsserts asserts, const int flatCount)
{
    return (!s_DeclAsserts((asserts & s_DeclAsserts_A_NOCOPY)) ? q_rx_copy : 0u) | ((flatCount != -1) ? q_non_compund : 0u);
}

s_Type despeculateStruct_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~(q_rx_copy | q_USAGE);
    type.vfacts = s_VFacts{};
    trimPattern_z4yNxv0x(type.vtype.canon);
    return static_cast<s_Type&&>(type);
}

bool will_relax_qiRjC44x(const s_Type& type, const s_Type& slot, const unsigned relax_mask)
{
    return ((type.vtype.quals & ~slot.vtype.quals) & relax_mask) != 0u;
}

bool try_relax_c5Z7RHRf(s_Type& type, const s_Type& slot, const unsigned relax_mask)
{
    if (!will_relax_qiRjC44x(type, slot, relax_mask))
        return false;
    else
    {
        type.vtype.quals &= (slot.vtype.quals | ~relax_mask);
        return true;
    };
}

void force_relax_p4VopRXr(s_Type& type, const unsigned relax_mask)
{
    type.vtype.quals &= ~relax_mask;
}

s_Type into_Typename_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type = clear_refs_40rRB6L8(s_Type(type));
    type.vfacts = s_VFacts_Typename;
    return static_cast<s_Type&&>(type);
}

s_Type relax_typeParam_40rRB6L8(/*MOV*/ s_Type&& type)
{
    return into_Typename_40rRB6L8(static_cast<s_Type&&>(type));
}

s_Type clear_Typename_40rRB6L8(/*MOV*/ s_Type&& type)
{
    type.vfacts &= s_VFacts(~s_VFacts_Typename);
    return static_cast<s_Type&&>(type);
}

unsigned USAGE_shiftRight(const unsigned quals, int offset)
{
    const unsigned keep = (quals & q_TAGS);
    unsigned usage = (quals & q_USAGE);
    while ((offset >= q_USAGE_bitsize))
        offset -= q_USAGE_bitsize;

    usage = ((usage >> unsigned(offset)) | (usage << unsigned((q_USAGE_bitsize - offset))));
    return keep | (usage & q_USAGE);
}

unsigned USAGE_shiftLeft(const unsigned quals, int offset)
{
    const unsigned keep = (quals & q_TAGS);
    unsigned usage = (quals & q_USAGE);
    while ((offset >= q_USAGE_bitsize))
        offset -= q_USAGE_bitsize;

    usage = ((usage << unsigned(offset)) | (usage >> unsigned((q_USAGE_bitsize - offset))));
    return keep | (usage & q_USAGE);
}

s_Type USAGE_structUsageFromFieldUsage_AK7SzNqx(/*MOV*/ s_Type&& slot, const int memberFlatOffset)
{
    slot.vtype.quals = USAGE_shiftLeft(slot.vtype.quals, memberFlatOffset);
    return static_cast<s_Type&&>(slot);
}

unsigned getMaxUsage_Ew3ru92f(const int flatCount)
{
    if ((flatCount >= q_USAGE_bitsize))
        return q_USAGE;
    else
        return unsigned((q_USAGE >> unsigned((q_USAGE_bitsize - flatCount)))) & q_USAGE;

}

s_Type USAGE_fieldUsageFromStructUsage_gOpgTaZ7(/*MOV*/ s_Type&& slot, const unsigned structUsage, const int memberFlatOffset, const int memberFlatCount)
{
    slot.vtype.quals &= ~q_USAGE;
    slot.vtype.quals |= structUsage;
    slot.vtype.quals = USAGE_shiftRight(slot.vtype.quals, memberFlatOffset);
    slot.vtype.quals &= (q_TAGS | getMaxUsage_Ew3ru92f(memberFlatCount));
    return static_cast<s_Type&&>(slot);
}

void USAGE_setMaxUsage_1rUpvgQK(s_Type& type, const int flatCount)
{
    type.vtype.quals = ((type.vtype.quals & q_TAGS) | getMaxUsage_Ew3ru92f(flatCount));
}

bool isIrrelevant_40rRB6L8(const s_Type& type)
{
    if (!(type.vtype.quals & q_USAGE))
        return !is_never_FfV8Zuj5(type);
    else
        return false;

}

bool USAGE_justOneThing_XyuwAq2h(const unsigned usage, const int flatCount)
{
    if ((flatCount <= q_USAGE_bitsize))
        return __builtin_popcount(usage) == 1;
    else
        return false;

}

#endif
