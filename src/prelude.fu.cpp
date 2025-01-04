#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>

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
s_Module& getModule_1qjplDUo(const fu::str&, s_Context&);
s_LexerOutput lex_pnA57tYu(const fu::str&, const fu::str&);
s_ParserOutput parse_qFInc1ha(int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&);
void setModule_1qjplDUo(const s_Module&, s_Context&);
s_SolverOutput solve_gDsnGKHT(const s_Context&, s_Module&, const s_Options&);

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

#ifndef fu_NO_fdefs

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

static const fu::str PRELUDE_SRC fu_INIT_PRIORITY(1012) = "\n\n\n// Arithmetics.\n\nprefix fn + (a: <T>) case (T.is::arithmetic): T __native;\nprefix fn - (a: <T>) case (T.is::arithmetic): T __native;\n\ninfix fn + (a: <T>, b: T) case (T.is::arithmetic): T __native;\ninfix fn - (a: <T>, b: T) case (T.is::arithmetic): T __native;\ninfix fn * (a: <T>, b: T) case (T.is::arithmetic): T __native;\ninfix fn / (a: <T>, b: T) case (T.is::arithmetic): T __native;\n\ninfix fn % (a: <T>, b: T)\n    case (T.is::integral): T __native;\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmod\");\n\nprefix fn ++ (mut ref a: <T>) case (T.is::arithmetic): &mut T __native;\nprefix fn -- (mut ref a: <T>) case (T.is::arithmetic): &mut T __native;\n\npostfix fn ++ (mut ref a: <T>) case (T.is::arithmetic): T __native;\npostfix fn -- (mut ref a: <T>) case (T.is::arithmetic): T __native;\n\ninfix fn += (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn -= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn *= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn /= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\n\ninfix fn %= (mut ref a: <T>, b: T)\n    case (T.is::integral): &mut T __native;\n    case (T.is::floating_point) = (a = a % b);\n\ninfix fn >  (a: <T>, b: T) case (T.is::primitive): bool __native;\ninfix fn <  (a: <T>, b: T) case (T.is::primitive): bool __native;\ninfix fn >= (a: <T>, b: T) case (T.is::primitive): bool __native;\ninfix fn <= (a: <T>, b: T) case (T.is::primitive): bool __native;\n\n\n// Wrapping arithmetic, alla Zig.\n\nprefix fn -% (a: <T>) case (T.is::arithmetic): T __native(\"-\");\n\ninfix fn +% (a: <T>, b: T) case (T.is::arithmetic): T __native(\"+\");\ninfix fn -% (a: <T>, b: T) case (T.is::arithmetic): T __native(\"-\");\ninfix fn *% (a: <T>, b: T) case (T.is::arithmetic): T __native(\"*\");\n\ninfix fn +%= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native(\"+=\");\ninfix fn -%= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native(\"-=\");\ninfix fn *%= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native(\"*=\");\n\n\n// Bitwise.\n\nprefix fn ~ (a: <T>) case (T.is::bitfield): T __native;\n\ninfix fn & (a: <T>, b: T) case (T.is::bitfield): T __native;\ninfix fn | (a: <T>, b: T) case (T.is::bitfield): T __native;\ninfix fn ^ (a: <T>, b: T) case (T.is::bitfield): T __native;\n\ninfix fn &= (mut ref a: <T>, b: T) case (T.is::bitfield): &mut T __native;\ninfix fn |= (mut ref a: <T>, b: T) case (T.is::bitfield): &mut T __native;\ninfix fn ^= (mut ref a: <T>, b: T) case (T.is::bitfield): &mut T __native;\n\ninfix fn << (a: <T>, b: T) case (T.is::integral): T __native;\ninfix fn >> (a: <T>, b: T) case (T.is::integral): T __native;\n\ninfix fn <<= (mut ref a: <T>, b: T) case (T.is::integral): &mut T __native;\ninfix fn >>= (mut ref a: <T>, b: T) case (T.is::integral): &mut T __native;\n\n\n// Numeric conversions.\n/*  Sketch for making these programmable.\n\ninfix fn => !From(from: From, type Into)\n    case (Into.is::primitive && From.is::primitive)\n        __native(\"/prim_convert\");\n*/\n\nfn   i8(v: <T>) case (T.is::primitive):   i8 __native(\"/prim/convert\");\nfn  i16(v: <T>) case (T.is::primitive):  i16 __native(\"/prim/convert\");\nfn  i32(v: <T>) case (T.is::primitive):  i32 __native(\"/prim/convert\");\nfn  i64(v: <T>) case (T.is::primitive):  i64 __native(\"/prim/convert\");\nfn i128(v: <T>) case (T.is::primitive): i128 __native(\"/prim/convert\");\n\nfn   u8(v: <T>) case (T.is::primitive):   u8 __native(\"/prim/convert\");\nfn  u16(v: <T>) case (T.is::primitive):  u16 __native(\"/prim/convert\");\nfn  u32(v: <T>) case (T.is::primitive):  u32 __native(\"/prim/convert\");\nfn  u64(v: <T>) case (T.is::primitive):  u64 __native(\"/prim/convert\");\nfn u128(v: <T>) case (T.is::primitive): u128 __native(\"/prim/convert\");\n\nfn  f32(v: <T>) case (T.is::primitive): f32 __native(\"/prim/convert\");\nfn  f64(v: <T>) case (T.is::primitive): f64 __native(\"/prim/convert\");\n\nfn byte(v: <T>) case (T.is::primitive): byte __native(\"/prim/convert\");\n\nfn unsigned(v: <T>)\n    case (T -> i8)     v.u8;\n    case (T -> i16)    v.u16;\n    case (T -> i32)    v.u32;\n    case (T -> i64)    v.u64;\n    case (T -> i128)   v.u128;\n    case (T.is::integral && T.is::unsigned) v;\n\nfn signed(v: <T>)\n    case (T -> u8)     v.i8;\n    case (T -> u16)    v.i16;\n    case (T -> u32)    v.i32;\n    case (T -> u64)    v.i64;\n    case (T -> u128)   v.i128;\n    case (T.is::integral && !T.is::unsigned) v;\n\nfn MIN(type <T>)\n    case (T -> i8 )        -128;\n    case (T -> i16)        -32768;\n    case (T -> i32)        -2147483648;\n    case (T -> i64)        -9223372036854775808;\n    case (T.is::unsigned)  T(0);\n\nfn MAX(type <T>)\n    case (T -> i8 )        127;\n    case (T -> i16)        32767;\n    case (T -> i32)        2147483647;\n    case (T -> i64)        9223372036854775807;\n    case (T.is::unsigned)  T(-1);\n\ntype  int   = i32; // These may become separate types\ntype uint   = u32; //  with a user-selectable size.\n\n\n//\n\nfn x16(v: <T>)\n    case (T -> i8 || T -> i16) v.i16;\n    case (T -> u8 || T -> u16) v.u16;\n\nfn x32(v: <T>)\n    case (T -> i8 || T -> i16 || T -> i32) v.i32;\n    case (T -> u8 || T -> u16 || T -> u32) v.u32;\n\nfn x64(v: <T>)\n    case (T -> i8 || T -> i16 || T -> i32 || T -> i64) v.i64;\n    case (T -> u8 || T -> u16 || T -> u32 || T -> u64) v.u64;\n\nfn trunc64(v: <T>)\n    case (T -> i128 || T -> i64) v.i64;\n    case (T -> u128 || T -> u64) v.u64;\n\nfn trunc32(v: <T>)\n    case (T -> i128 || T -> i64 || T -> i32) v.i32;\n    case (T -> u128 || T -> u64 || T -> u32) v.u32;\n\nfn trunc16(v: <T>)\n    case (T -> i128 || T -> i64 || T -> i32 || T -> i16) v.i16;\n    case (T -> u128 || T -> u64 || T -> u32 || T -> u16) v.u16;\n\n\n// Math.\n\nfn abs(v: <T>)\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fabs\");\n    case (T.is::arithmetic && !T.is::unsigned) v < 0 ? -v : v;\n\nfn max(a: <T>, b: T)\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmin\");\n    case (T.is::primitive) a >= b ? a : b;\n\nfn min(a: <T>, b: T)\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmax\");\n    case (T.is::primitive) a <= b ? a : b;\n\nfn clamp(v: <T>, gteq: T, lteq: T)\n    case (T.is::primitive) v.min(lteq).max(gteq);\n\nfn exp   (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp\");\nfn exp2  (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp2\");\nfn log   (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log\");\nfn log10 (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log10\");\nfn log2  (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log2\");\n\nfn pow   (a: <T>, b: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::pow\");\nfn sqrt  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::ceil\");\nfn floor (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::floor\");\nfn trunc (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::trunc\");\nfn round (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::round\");\n\nfn sin   (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sin\");\nfn cos   (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cos\");\nfn tan   (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::tan\");\n\nfn asin  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::asin\");\nfn acos  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::acos\");\nfn atan  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2 (y: <T>, x: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI  (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(M_PI)\");\nfn E   (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(M_E)\");\nfn INF (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(INFINITY)\");\nfn NAN (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(NAN)\");\n\nfn nan    (v: <T>) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf    (v: <T>) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite (v: <T>) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Assignment.\n\ninfix fn   = (mut ref a: <T>,    mut b: T): &mut T = __native;\ninfix fn ||= (mut ref a: <T>, inline b: T): &mut T = a || (a = b);\ninfix fn &&= (mut ref a: <T>, inline b: T): &mut T = a && (a = b);\n\nfn swap(mut ref a: <T>, mut ref b: T)\n    case (  T -> _[]   ): void __native(\".swap\");\n    case (!(T -> _[..])): void __native(\"#MayAlias\", \"<utility>\", \"std::swap\");\n\n\n// Arrays.\n//\n// TODO mutval .=,\n//  just like the assignments and splice.\n\nfn typeof(lax _: <T>) = T;\n\npostfix fn []  (type <T>) = typeof([] => T[]);\npostfix fn [..](type <T>) = typeof([] => T[..]);\n\nnovec fn len(a: <T>[..]): int __native(\".size()\");\n\nnovec postfix fn [] (ref a: <T>[..], i: int)\n    case (typeof(a) -> &mut T[..]): &mut T __native(\".mutref\");\n    default                       : &    T __native;\n\npostfix fn [..] (ref a: <T>[..], start: int, end: int)\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\npostfix fn [..] (ref a: <T>[..], start!: int)\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\npostfix fn [..] (ref a: <T>[..], end!: int)\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_start0_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_start0\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_start0_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view_start0\");\n\nfn slice(ref a: <T>[..], start: int, end: int) // TODO REMOVE\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn slice(ref a: <T>[..], start: int) // TODO REMOVE\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push(mut ref a: <T>[], mut b: T): void __native(\".push\");\nfn unshift(mut ref a: <T>[], mut b: T): void __native(\".unshift\");\nfn  insert(mut ref a: <T>[], i: int, mut b: T): void __native(\".insert\");\n\nfn splice(mut ref a: <T>[], start: int, count: int): void  __native(\".splice\");\nfn splice(mut ref a: <T>[], start: int, count: int, b: T[..]): void  __native(\".splice\");\n\nfn    pop(mut ref a: <T>[]): void __native(\".pop()\");\nfn  shift(mut ref a: <T>[]): void __native(\".shift()\");\n\nfn  clear(mut ref a: <T>[]): void __native(\".clear()\");\nfn shrink(mut ref a: <T>[], len: int): void __native(\".shrink\");\n\nfn resize(mut ref a: <T>[], len: int): void __native(\".resize\");\nfn   grow(mut ref a: <T>[], len: int): void __native(\".grow\");\n\nfn resize_junk(mut ref a: <T>[], len: int): void __native(\".resize<false>\");\nfn   grow_junk(mut ref a: <T>[], len: int): void __native(\".grow<false>\");\n\n\n// Sorts, via std::sort - fnptrs.\n\nfn sort(mut ref a: <T>[..], less = |l, r| l <> r < 0): void\n{\n    noflow fn sort()\n    {\n        mut l: T;\n        mut r: T;\n        pragma include(\"<algorithm>\");\n        pragma emit(\n        `\n            (void) `l`;\n            (void) `r`;\n            auto* data = `a`.data_mut();\n            std::sort(data, data + `a`.size(), [&](auto& `l`, auto& `r`)\n            {\n        `);\n\n        mut lt: bool = less(l, r);\n        pragma emit(\n        `\n                return `lt`;\n            });\n        `);\n    }\n\n    sort();\n}\n\n\n// String likes.\n\nfn has(a: <T>[..], b: T[..] or T) = a.find(b) >= 0;\n\nfn find(haystack: <T>[..], needle: T[..] or T, start?: int or [], end?: int or []): int\n{\n    type Start  = typeof(start);\n    type End    = typeof(end);\n\n    // Keep things simple.\n    if !(Start -> [] && End -> [])\n    {\n        let slice = Start -> [] ? haystack[      .. end]\n                  : End   -> [] ? haystack[start ..    ]\n                                : haystack[start .. end];\n\n        let res = slice.find(needle);\n        return res + (res < 0 ? 0 : start);\n    }\n\n    // Char vs string.\n    if (typeof(needle) -> T)\n    {\n        for (mut i = 0; i < haystack.len; i++)\n            if (haystack[i] == needle)\n                return i;\n\n        return -1;\n    }\n\n    // Shorter haystack & empty needle.\n    if (haystack.len < needle.len || needle.len <= 0)\n        return needle.len ? -1 : 0;\n\n    // This is both a fast path for single-item needles,\n    //  and simplifies the loops below,\n    //   where the Booyer-Moore trick can rely on needle having at least two items.\n    if (needle.len == 1)\n        return haystack.find(needle[0]);\n\n\n    // Try to go for a whole needle comparison\n    //  if the needle is small enough to fit in an integer.\n    //\n    // This works, never measured if it speeds anything up though.\n\n    // if (T.is::primitive && !T.is::floating_point\n    //                     && needle.len * sizeof(T) <= 16)\n    // {\n    //     let shift       = (sizeof(T) * 8).u128;\n    //     let mask        = needle.len * sizeof(T) * 8;\n    //     shadow let mask =\n    //         mask < 128  ? ~(~(0.u128) << (needle.len * sizeof(T) * 8).u128)\n    //                     :   ~(0.u128);\n    //\n    //     mut reg_needle:     u128;\n    //     mut reg_haystack:   u128;\n    //     for (mut i = 0; i < needle.len; i++) {\n    //         reg_needle    <<= shift;\n    //         reg_haystack  <<= shift;\n    //         reg_needle     |= needle[i].u128;\n    //         reg_haystack   |= haystack[i].u128;\n    //     }\n    //\n    //     mut i = needle.len;\n    //     for (;;) {\n    //         if (reg_haystack == reg_needle)\n    //             return i - needle.len;\n    //\n    //         if !(i < haystack.len)\n    //             return -1;\n    //\n    //         reg_haystack  <<= shift;\n    //         reg_haystack   &= mask;\n    //         reg_haystack   |= haystack[i++].u128;\n    //     }\n    // }\n\n\n    // Booyer-Moore trick from FBString::find,\n    //  modified to avoid testing the last needle character twice.\n\n    let needle_len_m1       = needle.len - 1;\n    let needle_last_char    = needle[needle_len_m1];\n\n    // How many bytes are skipped when a mismatch is found after tail matches -\n    //  if needle is 'aa', then skip would be 1, if needle doesn't repeat the tail byte,\n    //   skip would be needle.len.\n    mut skip = 0;\n\n    for (mut i = needle_len_m1;\n             i < haystack.len; )\n    {\n        // Scan for a the tail char of the needle,\n        //  consider using strchr here or something.\n        while (haystack[i] != needle_last_char)\n            if (++i == haystack.len)\n                return -1;\n\n        // Match the rest of the needle,\n        //  consider randomizing this part, should help with crafted needles.\n        for (mut j = 0;; )\n        {\n            // Mismatch halfway through the needle?\n            if (haystack[i - needle_len_m1 + j] != needle[j])\n            {\n                // Init the skip value.\n                if !(skip)\n                {\n                    // Scan the needle backwards,\n                    //  break on first match with needle tail.\n                    skip = needle.len;\n                    for (shadow mut j = needle_len_m1; j --> 0; ) {\n                        if (needle[j] == needle_last_char) {\n                            skip = needle_len_m1 - j;\n                            break;\n                        }\n                    }\n                }\n\n                // Skip over to the next possible tail-char position.\n                i += skip;\n                break;\n            }\n\n            // Entire needle matches?\n            if (++j == needle_len_m1)\n                return i - needle_len_m1;\n        }\n    }\n\n    return -1;\n}\n\n\n// Find char.\n\nfn starts(a: <T>[..], with: T): bool\n{\n    return a.len && a[0] == with;\n}\n\nfn ends(a: <T>[..], with: T): bool\n{\n    return a.len && a[a.len - 1] == with;\n}\n\nfn starts(a: <T>[..], with: T[..]): bool\n{\n    return a.len >= with.len\n        && a[.. with.len] == with;\n}\n\nfn ends(a: <T>[..], with: T[..]): bool\n{\n    return a.len >= with.len\n        && a[a.len - with.len .. a.len] == with;\n}\n\n\n// D-style concats.\n\ninfix fn ~ (a: <T>[..], b: T[..]): T[] __native(\"<fu/vec/concat.h>\",     \"+\");\ninfix fn ~ (a: <T>[..], b: T    ): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\ninfix fn ~ (a: <T>    , b: T[..]): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\ninfix fn ~= (mut ref a: <T>[],     b: T[..]): &mut T[] __native(\"<fu/vec/concat.h>\",     \"+=\");\ninfix fn ~= (mut ref a: <T>[], mut b: T    ): &mut T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\n\n// Fun with views.\n\nfn sizeof(type <T>)\n    case (T.is::zero_size) 0;\n    case (T ->   i8 || T ->   u8 || T -> byte || T -> bool) 1;\n    case (T ->  i16 || T ->  u16) 2;\n    case (T ->  i32 || T ->  u32) 4;\n    case (T ->  i64 || T ->  u64) 8;\n    case (T -> i128 || T -> u128) 16;\n\nfn view(ref a: <T>[], type <of>)\n    case (typeof(a) -> &mut T[] && T.is::reinterpretable && of.is::reinterpretable): &mut of[..] __native(\"<fu/view.h>\", \"fu::view_of_mut<>\");\n    case (                         T.is::reinterpretable && of.is::reinterpretable): &    of[..] __native(\"<fu/view.h>\", \"fu::view_of<>\");\n\ninfix fn .= (mut ref a: <T>[..], b: T[..]) case (T.is::copy): void __native(\"<fu/vec/view_assign.h>\", \"fu::view_assign\");\n\n// TODO not needed if swap(x, y) alias-ok's its two arguments:\nfn swap(mut ref a: <T>[..], i: int, j: int): void __native(\"<fu/vec/view_swap.h>\", \"fu::view_swap\");\n\nfn partition(mut ref a: <T>[..], predicate, mut start!keep = 0)\n{\n    let size = a.len;\n    for (mut i = keep; i < size; i++)\n        if (!predicate(a[i], ?:i)) {\n            if (i > keep)\n                a.swap(i, keep);\n\n            keep++;\n        }\n\n    return keep;\n}\n\nfn remove(mut ref a: <T>[], predicate, mut start!keep = 0)\n{\n    if (T.is::trivial)\n    {\n        let size = a.len;\n        for (mut i = keep; i < size; i++) {\n            let here = a[i];\n            if (!predicate(here, ?:i)) {\n                if (i > keep)\n                    a[keep] = here;\n\n                keep++;\n            }\n        }\n\n        // TODO FIX this doesn't seem to shrink the array.\n        // TODO FAILCASE appears to be unused.\n        assert(false);\n    }\n    else\n    {\n        a.shrink(a.partition(fn predicate));\n    }\n}\n\n\n// Stringifiables.\n\ntype string = byte[];\n\ninfix fn ~ (        a: byte[..], b.str      ) a ~ b;\ninfix fn ~ (        a.str,       b: byte[..]) a ~ b;\ninfix fn ~=(mut ref a: string,   b.str      ) a ~= b;\n\nfn str(n: <T>)\n    case (T.is::unsigned       ): string __native(\"<fu/decstr.h>\", \"fu::u64dec\");\n    case (T.is::integral       ): string __native(\"<fu/decstr.h>\", \"fu::i64dec\");\n    case (T -> bool            ): string __native(\"<fu/decstr.h>\", \"fu::booldec\");\n    case (T -> f32             ): string __native(\"<fu/decstr.h>\", \"fu::f32dec\");\n    case (T -> f64             ): string __native(\"<fu/decstr.h>\", \"fu::f64dec\");\n    case (T.is::enum)\n{\n    for (fieldname i: T)\n        if (n == \"i\")\n            return \"i\";\n\n    return n.i64.str; // TODO FIX use .integer or .arithmetic when we get these\n}\n    case (T.is::flags)\n{\n    mut res: string;\n    for (fieldname i: T)\n        if (n & \"i\")\n            res ~= \"i\" ~ \", \";\n\n    if (res)\n        res.shrink(res.len - 2);\n\n    return res;\n}\n\n\n// Assertions, bugs & fails.\n\nfn throw(mut reason: string): never __native(\"<fu/never.h>\", \"fu::fail\",\n    \"|Fx_NotDeadCode\", \"|Fx_DontMoveDown\", \"|Fx_Throws\");\n\nfn assert(/*TODO pure*/ expression: bool): void __native(\"<fu/assert.h>\", \"fu_ASSERT\",\n    \"|Fx_NotDeadCode\");\n\n\n// Printifiables = anything that implements print.\n\ninline fn print(x: string): string = x;\ninline fn print(x.str)    : string = x;\n\nfn println(parts.print[]: string[..]): void __native(\"<fu/print.h>\", \"fu::println\",\n    \"|output\");\n\n\n// String commons.\n\nfn join(a: <T>[][..], sep?: T or T[..] or [])\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    let N = typeof(sep) -> T[..] ? sep.len\n          : typeof(sep) -> T     ? 1\n                                 : 0;\n\n    mut size = a[0].len;\n    for (mut i = 1; i < a.len; i++)\n        size += N + a[i].len;\n\n    mut res: T[];\n    res.grow_junk(size);\n\n    let head = a[0];\n    size = head.len;\n    res[.. head.len] .= head;\n    for (mut i = 1; i < a.len; i++)\n    {\n        let range = a[i];\n        if (typeof(sep) -> T[..])\n            res[size .. size + N] .= sep;\n        else if (typeof(sep) -> T)\n            res[size] = sep;\n\n        size += N;\n        res[size .. size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn split(str: <T>[..], sep: T or T[..], each)\n{\n    mut last = 0;\n    mut next = 0;\n\n    let N = typeof(sep) -> T[..] ? sep.len : 1;\n    if (N) while ((next = str.find(sep, start: last)) >= 0)\n    {\n        each(str.slice(last, next), first?: !last, last?: false);\n        last = next + N;\n    }\n\n    if (last)\n        each(str.slice(last), first?: false, last?: true);\n    else\n        each(str, first?: true, last?: true);\n}\n\nfn split(str: <T>[], sep: T or T[..])\n{\n    mut result: T[][];\n    split(str, :sep, |substr| result ~= substr);\n    return result;\n}\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn replace(str: <T>[], all: T or T[..], with: T or T[..] or [])\n{\n    mut result: T[];\n    split(str, sep: all, |substr, lax first, lax last|\n    {\n        if (!first)\n            typeof(with) -> [] ? with() : result ~= with;\n        else if (last)\n            return str;\n\n        result ~= substr;\n    });\n\n    return result;\n}\n\n\n// The floating point partial equality problem.\n//\n// BRIEF: to use a floating point number as a key to e.g. a hashtable,\n//  we need a way to meaningfully tell them apart.\n//\n// Telling two values apart means that if two values can have\n//  any behavioural difference, then the values should be considered different.\n//\n// E.g. you can't consider +0 and -0 equivalent,\n//  if a subsequent call to a collection might behave differently\n//   whether you used -0 or +0 first to refer to the same entry.\n//\n// PROBLEM: The usual ==, !=, >, >=, <, <= operators are not well behaved for floats,\n//  and cannot be used as is to implement robust containers where floats are keys.\n//\n// I came up with three possible courses of action:\n//\n// ----------------------------------------------------------------\n//\n// OPTION A:\n//\n//  1. Make classical equality and comparison ops more c-like:\n//      only implement them on primitives, and nothing else,\n//       these ops will have the usual IEEE float semantics.\n//\n//  2. Provide a second set of strict/total equality and comparison operators\n//      that is automatically implemented for all types,\n//       bitwise-compares floats, fast-compares arrays, etc.\n//\n// When writing container code, if you happen to use a classical operator,\n//  your template will simply not compile when you attempt to use it\n//   with a non-primitive type.\n//\n// CON 1:   This means we'll have two sets of equality operators\n//           that will actually yield different results, not amazing.\n//\n// CON 2:   This only tangentially solves the problem we have,\n//           namely that it is easy to overlook NANs and co when writing templates\n//            that aren't designed for use with floats.\n//\n// infix fn === (a: <T>, b: T)\n//     case (T.is::primitive && !T.is::floating_point): bool __native;\n//     default: bool = !(a <> b);\n//\n// infix fn !== (a: <T>, b: T)\n//     case (T.is::primitive && !T.is::floating_point): bool __native;\n//     default: bool = !!(a <> b);\n//\n// ----------------------------------------------------------------\n//\n// OPTION B:\n//\n//  1. Disallow the use of ==, !=, <, <=, >, >= with floating point types.\n//      This redefines them as the \"total\" equality/comparison operators.\n//\n//  2. Provide a second set of gnarlier *==, *!=, *<, *<=, *>, *>=\n//      \"partial\" equality/comparison operators. These can be used with any type.\n//\n// Now this is all good at first glance because any template code\n//  that wasn't written with floats in mind simply won't accept them.\n//\n// HOWEVER, this is actually not sufficient to drive default sort behavior,\n//  or to cleanly implement a container, etc - when you do want to totally order floats,\n//   there's nothing you can do about it, and you have to hack your way around them.\n//\n// THUS:\n//\n//  3. We need to provide a third set of operators, <> and !<>,\n//      to allow the user to explicity request total order/equality for all types.\n//\n// ----------------------------------------------------------------\n//\n// OPTION C:\n//\n//  Same as B, except we ditch [2] in favor of a warning system -\n//   whenever ==, !=, <, <=, >, >= are used with a floating point type,\n//    (probably in template code only), a warning is raised,\n//     and there is some way to suppress it locally.\n//\n// ----------------------------------------------------------------\n//\n// Tried [A] on a branch: total-eq-neq-alla-js-strict-eq-neq\n//\n// Currently investigating options [B] and [C].\n//\nfn bitrepr(v: <T>) case (T.is::floating_point)\n{\n    mut bitrepr: (T -> f32 ? u32\n                : T -> f64 ? u64\n                : assert(false));\n\n    pragma emit(`\n        union { decltype(`v`) f; decltype(`bitrepr`) u; }\n            p { `v` };\n\n        return `bitrepr` = p.u;\n    `);\n\n    return bitrepr;\n}\n\ninfix fn <> (a: <T>, b: T)\ncase (T.is::primitive)\n{\n    if (T.is::floating_point)\n        return a.bitrepr <> b.bitrepr;\n\n    return a < b ? -1 : a > b ? +1 : 0;\n}\ncase (T -> _[..]) {\n    mut cmp = a.len <> b.len;\n\n    mut quick: bool;\n    pragma emit(quick \" = a.m_data == b.m_data || cmp\");\n    if (quick)\n        return cmp;\n\n    for (mut i = 0; i < a.len && !cmp; i++)\n        cmp = a[i] <> b[i];\n\n    return cmp;\n}\ndefault {\n    lax mut cmp = 0;\n\n    // TODO this would be better if it went through each member doing the trivial work first -\n    //  only then going through them again and looking at e.g. array contents etc,\n    //   this is a first approx but does not go recursively through structs.\n\n    for (fieldname i: T)\n        if (typeof(a.i).is::trivial)\n            if ((cmp = a.i <> b.i))\n                return cmp;\n\n    for (fieldname i: T)\n        if !(typeof(a.i).is::trivial)\n            if ((cmp = a.i <> b.i))\n                return cmp;\n\n    return 0;\n}\n\ninfix fn !<> (a: <T>, b: T) !(a <> b);\n\ninfix fn == (a: <T>, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !(a <> b);\n\ninfix fn != (a: <T>, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !!(a <> b);\n\n\n// String comparisons, TODO FIX: T -> byte hack to force template.\n\ninfix fn  >(a: <T>[..], b: T[..]) case (T -> byte) = a <> b > 0;\ninfix fn  <(a: <T>[..], b: T[..]) case (T -> byte) = a <> b < 0;\ninfix fn >=(a: <T>[..], b: T[..]) case (T -> byte) = a <> b >= 0;\ninfix fn <=(a: <T>[..], b: T[..]) case (T -> byte) = a <> b <= 0;\n\n\n//\n\nfn map(ref a: <T>[..], fn)\n{\n    mut res: typeof( fn(a[0], i?: 0) )[];\n    res.grow_junk(a.len);\n    for (mut i = 0; i < a.len; i++)\n        res[i] = fn(a[i], i?: i);\n\n    return res;\n}\n\nfn each(ref a: <T>[..], fn)\n{\n    for (mut i = 0; i < a.len; i++)\n        fn(a[i], i?: i);\n}\n\nfn reverse(mut ref a: <T>[..])\n{\n    let n1 = a.len - 1;\n    let n2 = a.len >> 1;\n    for (mut i = 0; i < n2; i++)\n        a.swap(i, n1 - i);\n}\n\nfn all(a: <T>[..], pred)\n{\n    a.each: |item, i|\n        if !(pred(item, i?: i))\n            return false;\n\n    return true;\n}\n\nfn some(a: <T>[..], pred)\n{\n    a.each: |item, i|\n        if (pred(item, i?: i))\n            return true;\n\n    return false;\n}\n\n\n//\n\nfn only(ref a: <T>[..]) {\n    assert(a.len == 1);\n    return a[0];\n}\n\nfn first(ref a: <T>[..])\n    a[0];\n\nfn last(ref a: <T>[..])\n    a[a.len - 1];\n\nfn if_only(ref a: <T>[..], and!then?: <Then>, else!?) // TODO inline else!?\n    a.len == 1\n        ? Then -> [] ? a[0] : then(a[0])\n        : else();\n\nfn if_first(ref a: <T>[..], and!then?: <Then>, else!?)\n    a.len\n        ? Then -> [] ? a[0] : then(a[0])\n        : else();\n\nfn if_last(ref a: <T>[..], and!then?: <Then>, else!?)\n    a.len\n        ? Then -> [] ? a[a.len - 1] : then(a[a.len - 1])\n        : else();\n\nfn if(ref a: <T>[..], exists!i: int, and!then?: <Then>, else!?)\n    i.unsigned < a.len.unsigned\n        ? Then -> [] ? a[i] : then(a[i])\n        : else();\n\nfn ensure(ref a: <T>[], exists!i: int) {\n    if (a.len <= i)\n        a.grow(i + 1);\n\n    return a[i];\n}\n\nfn remove(ref a: <T>[..], at!: int, count = 1)\n    a.splice(at, count);\n\n\n//\n\nfn TODO_REMOVE_bootstrap() false;\n\n"_fu;

                                #ifndef DEF_FU_ROOT
                                #define DEF_FU_ROOT
extern const fu::str FU_ROOT;
                                #endif

s_Context solvePrelude_U0mylDNJ()
{
    fu::str fname = "prelude"_fu;
    /*MOV*/ s_Context ctx {};
    s_Module module = clone_YKwHcLQl(getModule_1qjplDUo(fname, ctx));
    const s_Options options {};
    /*MOV*/ s_LexerOutput lex = lex_pnA57tYu(PRELUDE_SRC, fname);
    /*MOV*/ s_ParserOutput parse = parse_qFInc1ha(0, fname, PRELUDE_SRC, lex.tokens, options);
    module.in = s_ModuleInputs { fu::str(PRELUDE_SRC), static_cast<s_LexerOutput&&>(lex), static_cast<s_ParserOutput&&>(parse) };
    setModule_1qjplDUo(module, ctx);
    module.out.solve = solve_gDsnGKHT(ctx, module, options);
    setModule_1qjplDUo(module, ctx);
    ctx.fudir = FU_ROOT;
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE fu_INIT_PRIORITY(1012) = solvePrelude_U0mylDNJ();
                                #endif

#endif
