#define TODO_FIX_REMOVE_copying_push

#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

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
struct s_UserType;
struct s_Target;
struct s_ScopeItem;
struct s_Set_95BJOojOc45;
struct s_Shape;
struct s_Set_ukcriy4HHQd;
struct s_UserTypeCanon;
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
fu::str qID_e44UlzzA(const fu::str&);
fu::str qLT_e44UlzzA(const fu::str&);
fu::str qKW_e44UlzzA(const fu::str&);
fu::str qBAD_e44UlzzA(const fu::str&);
static void inspect_zVz2bCia(const s_SolvedNode&, fu::view<char>, const s_Module&, fu::str&, int);
fu::str trim_V5IuMsej(const fu::str&);

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
inline constexpr s_VFacts s_VFacts_AssumingInfiniteRecursion = s_VFacts(32u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename
    | s_VFacts_LeftAligned
    | s_VFacts_RightAligned
    | s_VFacts_AssumingInfiniteRecursion;
                                #endif

                                #ifndef DEF_s_SolverStatus
                                #define DEF_s_SolverStatus
inline constexpr s_SolverStatus s_SolverStatus_SS_LAZY = s_SolverStatus(1u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DID_START = s_SolverStatus(2u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DIRTY = s_SolverStatus(4u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FINALIZED = s_SolverStatus(8u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UPDATED = s_SolverStatus(16u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_OOE_RTL = s_SolverStatus(32u);
inline constexpr s_SolverStatus s_SolverStatus_SS_NAME_UNUSED = s_SolverStatus(64u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(128u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MATCHED = s_SolverStatus(256u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MOVED_FROM = s_SolverStatus(512u);
inline constexpr s_SolverStatus s_SolverStatus_SS_EXTERNAL_LINKAGE = s_SolverStatus(1024u);
inline constexpr s_SolverStatus s_SolverStatus_SS_OBSERVED_BY_CONV_CACHE = s_SolverStatus(2048u);
inline constexpr s_SolverStatus s_SolverStatus_SS_TODO_FIX_was_rx_resize = s_SolverStatus(4096u);
inline constexpr s_SolverStatus s_SolverStatus_SS_Debug_AllPassesComplete = s_SolverStatus(8192u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
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
inline constexpr s_SolverNotes s_SolverNotes_N_FnResolve = 1;
inline constexpr s_SolverNotes s_SolverNotes_N_FnReopen = 2;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeResolve = 4;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeReopen = 8;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCode = 16;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCall = 32;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLet = 64;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadArrlit = 128;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLoopInit = 256;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadConv = 512;
inline constexpr s_SolverNotes s_SolverNotes_N_NonTrivAutoCopy = 1024;
inline constexpr s_SolverNotes s_SolverNotes_N_RelaxRespec = 2048;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedImplicit = 4096;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedCall = 8192;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedDefer = 16384;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 32768;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedLet = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_AARMustSeq = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_AARSoftRisk = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_McomUnwrapsLetdef = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_COWRestrict = 134217728;

inline constexpr s_SolverNotes MASK_s_SolverNotes
    = s_SolverNotes_N_FnResolve
    | s_SolverNotes_N_FnReopen
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

                                #ifndef DEF_s_Set_ukcriy4HHQd
                                #define DEF_s_Set_ukcriy4HHQd
struct s_Set_ukcriy4HHQd
{
    fu::vec<s_UserTypeCanon> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
        ;
    }
};
                                #endif

                                #ifndef DEF_s_UserTypeCanon
                                #define DEF_s_UserTypeCanon
struct s_UserTypeCanon
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

                                #ifndef DEF_s_Shape
                                #define DEF_s_Shape
struct s_Shape
{
    fu::str basePrim;
    uint64_t non_triv_mask;
    uint64_t hash;
    int flatCount;
    int declDepth;
    s_Set_ukcriy4HHQd usertypes;
    bool recursive;
    explicit operator bool() const noexcept
    {
        return false
            || basePrim
            || non_triv_mask
            || hash
            || flatCount
            || declDepth
            || usertypes
            || recursive
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

                                #ifndef DEF_s_UserType
                                #define DEF_s_UserType
struct s_UserType
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
    uint16_t rest_1b;
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

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu::vec<s_UserType> types;
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_str_WkqQ7QhOMvg
                                #define DEF_str_WkqQ7QhOMvg
inline fu::str str_WkqQ7QhO(const s_Kind n)
{
    if (n == s_Kind_sof)
        return "sof"_fu;
    else if (n == s_Kind_err)
        return "err"_fu;
    else if (n == s_Kind_eof)
        return "eof"_fu;
    else if (n == s_Kind_id)
        return "id"_fu;
    else if (n == s_Kind_op)
        return "op"_fu;
    else if (n == s_Kind_int)
        return "int"_fu;
    else if (n == s_Kind_real)
        return "real"_fu;
    else if (n == s_Kind_char)
        return "char"_fu;
    else if (n == s_Kind_str)
        return "str"_fu;
    else if (n == s_Kind_bool)
        return "bool"_fu;
    else if (n == s_Kind_definit)
        return "definit"_fu;
    else if (n == s_Kind_empty)
        return "empty"_fu;
    else if (n == s_Kind_struct)
        return "struct"_fu;
    else if (n == s_Kind_union)
        return "union"_fu;
    else if (n == s_Kind_primitive)
        return "primitive"_fu;
    else if (n == s_Kind_flags)
        return "flags"_fu;
    else if (n == s_Kind_enum)
        return "enum"_fu;
    else if (n == s_Kind_fn)
        return "fn"_fu;
    else if (n == s_Kind_copy)
        return "copy"_fu;
    else if (n == s_Kind_move)
        return "move"_fu;
    else if (n == s_Kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_Kind_not)
        return "not"_fu;
    else if (n == s_Kind_call)
        return "call"_fu;
    else if (n == s_Kind_call_indir)
        return "call_indir"_fu;
    else if (n == s_Kind_argid)
        return "argid"_fu;
    else if (n == s_Kind_root)
        return "root"_fu;
    else if (n == s_Kind_block)
        return "block"_fu;
    else if (n == s_Kind_if)
    {
        return "if"_fu;
    }
    else if (n == s_Kind_or)
        return "or"_fu;
    else if (n == s_Kind_and)
        return "and"_fu;
    else if (n == s_Kind_loop)
        return "loop"_fu;
    else if (n == s_Kind_jump)
        return "jump"_fu;
    else if (n == s_Kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_Kind_defer)
        return "defer"_fu;
    else if (n == s_Kind_try)
        return "try"_fu;
    else if (n == s_Kind_let)
        return "let"_fu;
    else if (n == s_Kind_letdef)
        return "letdef"_fu;
    else if (n == s_Kind_typecast)
        return "typecast"_fu;
    else if (n == s_Kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_Kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_Kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_Kind_pragma)
        return "pragma"_fu;
    else if (n == s_Kind_break)
        return "break"_fu;
    else if (n == s_Kind_return)
        return "return"_fu;
    else if (n == s_Kind_continue)
        return "continue"_fu;
    else if (n == s_Kind_import)
        return "import"_fu;
    else if (n == s_Kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_Kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_Kind_members)
        return "members"_fu;
    else if (n == s_Kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_Kind_pattern)
        return "pattern"_fu;
    else if (n == s_Kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_Kind_typetag)
        return "typetag"_fu;
    else if (n == s_Kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_Kind___convert)
        return "__convert"_fu;
    else if (n == s_Kind___preceding_ref_arg)
        return "__preceding_ref_arg"_fu;
    else if (n == s_Kind___serialized_type)
        return "__serialized_type"_fu;
    else if (n == s_Kind___serialized_addrof_type_fn)
        return "__serialized_addrof_type_fn"_fu;
    else if (n == s_Kind___litfix_bound)
        return "__litfix_bound"_fu;
    else if (n == s_Kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_Kind___tombstone)
        return "__tombstone"_fu;
    else if (n == s_Kind_type)
        return "type"_fu;
    else if (n == s_Kind_var)
        return "var"_fu;
    else if (n == s_Kind_field)
        return "field"_fu;
    else if (n == s_Kind_enumv)
        return "enumv"_fu;
    else if (n == s_Kind_template)
        return "template"_fu;
    else if (n == s_Kind___native)
        return "__native"_fu;
    else if (n == s_Kind_inline)
        return "inline"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7Ex3D_DKVpwRY7qT3
                                #define DEF_x7Ex3D_DKVpwRY7qT3
inline fu::view<char> x7Ex3D_DKVpwRY7(fu::str& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_str_WkH36txjVGe
                                #define DEF_str_WkH36txjVGe
inline fu::str str_WkH36txj(const s_Flags n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & s_Flags_F_CALL_HAS_DOT)
            res += ("F_CALL_HAS_DOT"_fu + ", "_fu);

        if (n & s_Flags_F_CALL_HAS_ARGPARENS)
            res += ("F_CALL_HAS_ARGPARENS"_fu + ", "_fu);

        if (n & s_Flags_F_CALL_HAS_NAMED_ARGS)
            res += ("F_CALL_HAS_NAMED_ARGS"_fu + ", "_fu);

        if (n & s_Flags_F_OPERATOR)
            res += ("F_OPERATOR"_fu + ", "_fu);

        if (n & s_Flags_F_TYPENAME)
            res += ("F_TYPENAME"_fu + ", "_fu);

        if (n & s_Flags_F_COMPOUND_ID)
            res += ("F_COMPOUND_ID"_fu + ", "_fu);

        if (n & s_Flags_F_ARGID_IS_OPTIONAL)
            res += ("F_ARGID_IS_OPTIONAL"_fu + ", "_fu);

        if (n & s_Flags_F_LAX)
            res += ("F_LAX"_fu + ", "_fu);

        if (n & s_Flags_F_SHADOW)
            res += ("F_SHADOW"_fu + ", "_fu);

        if (n & s_Flags_F_MUSTNAME)
            res += ("F_MUSTNAME"_fu + ", "_fu);

        if (n & s_Flags_F_MUT)
            res += ("F_MUT"_fu + ", "_fu);

        if (n & s_Flags_F_CONST)
            res += ("F_CONST"_fu + ", "_fu);

        if (n & s_Flags_F_VAL)
            res += ("F_VAL"_fu + ", "_fu);

        if (n & s_Flags_F_REF)
            res += ("F_REF"_fu + ", "_fu);

        if (n & s_Flags_F_IMPLICIT)
            res += ("F_IMPLICIT"_fu + ", "_fu);

        if (n & s_Flags_F_USING)
            res += ("F_USING"_fu + ", "_fu);

        if (n & s_Flags_F_CONVERSION)
            res += ("F_CONVERSION"_fu + ", "_fu);

        if (n & s_Flags_F_TEST_painted)
            res += ("F_TEST_painted"_fu + ", "_fu);

        if (n & s_Flags_F_PUB)
            res += ("F_PUB"_fu + ", "_fu);

        if (n & s_Flags_F_EXTERN)
            res += ("F_EXTERN"_fu + ", "_fu);

        if (n & s_Flags_F_HOTSWAP)
            res += ("F_HOTSWAP"_fu + ", "_fu);

        if (n & s_Flags_F_PREDICATE)
            res += ("F_PREDICATE"_fu + ", "_fu);

        if (n & s_Flags_F_LT_RETURNED)
            res += ("F_LT_RETURNED"_fu + ", "_fu);

        if (n & s_Flags_F_REST_ARG)
            res += ("F_REST_ARG"_fu + ", "_fu);

        if (n & s_Flags_F_INJECTED)
            res += ("F_INJECTED"_fu + ", "_fu);

        if (n & s_Flags_F_TEMPLATE)
            res += ("F_TEMPLATE"_fu + ", "_fu);

        if (n & s_Flags_F_INLINE)
            res += ("F_INLINE"_fu + ", "_fu);

        if (n & s_Flags_F_LAMBDA)
            res += ("F_LAMBDA"_fu + ", "_fu);

        if (n & s_Flags_F_COW_INSIDE)
            res += ("F_COW_INSIDE"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_str_DY6GhqTZ7Hc
                                #define DEF_str_DY6GhqTZ7Hc
inline fu::str str_DY6GhqTZ(const s_FxMask n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & s_FxMask_Fx_NotDeadCode)
            res += ("Fx_NotDeadCode"_fu + ", "_fu);

        if (n & s_FxMask_Fx_NonDeterministic)
            res += ("Fx_NonDeterministic"_fu + ", "_fu);

        if (n & s_FxMask_Fx_DontMoveUp)
            res += ("Fx_DontMoveUp"_fu + ", "_fu);

        if (n & s_FxMask_Fx_DontMoveDown)
            res += ("Fx_DontMoveDown"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Input)
            res += ("Fx_Input"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Output)
            res += ("Fx_Output"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Throws)
            res += ("Fx_Throws"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Crashes)
            res += ("Fx_Crashes"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Crashes_Div0)
            res += ("Fx_Crashes_Div0"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Crashes_OOB)
            res += ("Fx_Crashes_OOB"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Crashes_Assert)
            res += ("Fx_Crashes_Assert"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Crashes_Exit)
            res += ("Fx_Crashes_Exit"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Syscall)
            res += ("Fx_Syscall"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Blocks)
            res += ("Fx_Blocks"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Blocks_Alloc)
            res += ("Fx_Blocks_Alloc"_fu + ", "_fu);

        if (n & s_FxMask_Fx_Blocks_Await)
            res += ("Fx_Blocks_Await"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

static void inspect_zVz2bCia(const s_SolvedNode& n, fu::view<char> indent, const s_Module& module, fu::str& src, const int modid)
{
    src += (indent + "("_fu);
    if (n)
    {
        if (n.kind == s_Kind_call)
            src += qID_e44UlzzA(str_WkqQ7QhO(n.kind));
        else if ((n.kind == s_Kind_block) || (n.kind == s_Kind_jump) || (n.kind == s_Kind_defer))
            src += qLT_e44UlzzA(str_WkqQ7QhO(n.kind));
        else if ((n.kind == s_Kind_if) || (n.kind == s_Kind_and) || (n.kind == s_Kind_or) || (n.kind == s_Kind_loop))
            src += qKW_e44UlzzA(str_WkqQ7QhO(n.kind));
        else if (n.kind == s_Kind_empty)
            src += qBAD_e44UlzzA(str_WkqQ7QhO(n.kind));
        else
            x7Ex3D_DKVpwRY7(src, str_WkqQ7QhO(n.kind));

        if (n.value)
            src += (" v:"_fu + n.value);

        if (n.helpers)
            src += x7E_3lDd4lqo(" h:"_fu, fu::i64dec(n.helpers.index));

        if (n.flags)
            src += x7E_3lDd4lqo(" f:"_fu, str_WkH36txj(n.flags));

        if (n.items)
        {
            fu::str indent_1 = (indent + ((n.kind == s_Kind_block) ? qLT_e44UlzzA(". "_fu) : "  "_fu));
            for (int i = 0; i < n.items.size(); i++)
                inspect_zVz2bCia(n.items[i], indent_1, module, src, modid);

        };
        int BL_13_v {};
        const int globid = (__extension__ (
        {
            const s_Target& t = n.target;
            BL_13_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_13_v);
        int BL_14_v {};
        const int locid = (__extension__ (
        {
            const s_Target& t = n.target;
            const unsigned v = unsigned((t._packed & 0xfffffull));
            BL_14_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
        (void)0;}), BL_14_v);
        int BL_15_v {};
        if (((__extension__ (
        {
            const s_Target& t = n.target;
            BL_15_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_15_v) == modid) || locid)
        {
            const s_Overload* BL_17_v;
            const s_Overload& o = (locid ? (__extension__ (
            {
                const s_Extended& ext = module.out.solve.scope.extended[globid];
                BL_17_v = &(ext.args_n_locals[((ext.args_neg - ((locid > 0) ? 1 : 0)) + locid)]);
            (void)0;}), *BL_17_v) : module.out.solve.scope.overloads[(globid - 1)]);
            if (o.name)
                src += (" n:"_fu + trim_V5IuMsej(o.name));

            if (o.kind == s_Kind_fn)
            {
                const s_Extended& x = module.out.solve.scope.extended[globid];
                if (x.fx_mask)
                    src += x7E_3lDd4lqo(" fx:"_fu, str_DY6GhqTZ(x.fx_mask));

            };
            if (n.kind == s_Kind_letdef)
            {
                fu::str indent_1 = (indent + qID_e44UlzzA(". "_fu));
                inspect_zVz2bCia(o.solved, indent_1, module, src, modid);
            };
        };
    };
    if (n.items)
        src += indent;

    src += ")"_fu;
}

fu::str inspect_WenQkW4Y(const s_Module& module, const s_SolvedNode& root)
{
    /*MOV*/ fu::str src = "Your /*PRINT*/:"_fu;
    const int modid = module.modid;
    inspect_zVz2bCia(root, "\n    "_fu, module, src, modid);
    return /*NRVO*/ src;
}

fu::str inspect_wkVORywj(const s_Module& module)
{
    return inspect_WenQkW4Y(module, module.out.solve.root);
}

#endif
