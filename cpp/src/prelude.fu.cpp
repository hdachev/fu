#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec_range.h>
#include <fu/static_ref.h>
#include <fu/init_priority.h>

struct Context_noPA;
struct Module_wo7O;
struct ModuleInputs_iQIg;
struct LexerOutput_DN4p;
struct Token_6M7a;
enum Kind_Idfg: fu::u8;
struct LineColChars_6JiM;
struct ParserOutput_d14k;
struct Node_JjyR;
typedef uint16_t DeclAsserts_taUG;
typedef fu::u8 ParseSyntax_Lay2;
typedef unsigned Flags_Lzg8;
struct TokenIdx_5581;
struct Import_7CIJ;
struct ModuleOrder_HMNg;
struct ModuleOutputs_WMGM;
struct Struct_LDkB;
struct Target_VZrr;
struct ScopeItem_xiLD;
struct Set_qOJY;
struct Shape_fvCX;
struct SolverOutput_hA3T;
struct SolvedNode_efhg;
struct Helpers_DyqV;
struct Type_OiTm;
struct ValueType_JtNg;
typedef fu::u8 VFacts_xhRf;
struct Lifetime_llCF;
struct Scope_blWT;
struct Overload_aO3i;
typedef uint16_t SolverStatus_h9em;
struct Extended_z0HS;
struct Argument_bbKc;
struct BitSet_mmp7;
struct COWInside_qvly;
typedef unsigned MayEscapeVia_5nki;
typedef fu::u8 ExitPaths_UXHs;
struct Template_SsLx;
struct TEA_0Daz;
typedef uint16_t FxMask_2dRz;
typedef int SolverNotes_LSla;
struct CodegenOutput_qIMB;
struct Set_XshD;
struct BuildHacks_sqc0;
typedef fu::u8 CGDefects_2L18;
struct ModuleStats_ANTR;
struct ModuleStat_sTmh;
struct Profile_4UPJ;
struct Sample_Time_cblj;
struct NukeOnRebuild_TLE7;
struct Map_Umhk;
struct Options_TBgD;
struct Lint_Q9R1;
typedef fu::u8 DevOptions_QEya;
Module_wo7O& getModule_1qjp(fu::vec_range<char>, Context_noPA&);
LexerOutput_DN4p lex_pnA5(fu::vec_range<char>, fu::vec_range<char>);
ParserOutput_d14k parse_qFIn(int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, const Options_TBgD&);
void setModule_1qjp(const Module_wo7O&, Context_noPA&);
SolverOutput_hA3T solve_gDsn(const Context_noPA&, Module_wo7O&, const Options_TBgD&);

                                #ifndef DEF_Kind_Idfg
                                #define DEF_Kind_Idfg
enum Kind_Idfg: fu::u8
{
    Kind_Idfg_sof = 1u,
    Kind_Idfg_err = 2u,
    Kind_Idfg_eof = 3u,
    Kind_Idfg_id = 4u,
    Kind_Idfg_op = 5u,
    Kind_Idfg_int = 6u,
    Kind_Idfg_real = 7u,
    Kind_Idfg_char = 8u,
    Kind_Idfg_str = 9u,
    Kind_Idfg_bool = 10u,
    Kind_Idfg_definit = 11u,
    Kind_Idfg_empty = 12u,
    Kind_Idfg_struct = 13u,
    Kind_Idfg_union = 14u,
    Kind_Idfg_primitive = 15u,
    Kind_Idfg_flags = 16u,
    Kind_Idfg_enum = 17u,
    Kind_Idfg_fn = 18u,
    Kind_Idfg_copy = 19u,
    Kind_Idfg_move = 20u,
    Kind_Idfg_arrlit = 21u,
    Kind_Idfg_not = 22u,
    Kind_Idfg_call = 23u,
    Kind_Idfg_call_indir = 24u,
    Kind_Idfg_argid = 25u,
    Kind_Idfg_root = 26u,
    Kind_Idfg_block = 27u,
    Kind_Idfg_if = 28u,
    Kind_Idfg_or = 29u,
    Kind_Idfg_and = 30u,
    Kind_Idfg_loop = 31u,
    Kind_Idfg_jump = 32u,
    Kind_Idfg___far_jump = 33u,
    Kind_Idfg_defer = 34u,
    Kind_Idfg_try = 35u,
    Kind_Idfg_let = 36u,
    Kind_Idfg_letdef = 37u,
    Kind_Idfg_typecast = 38u,
    Kind_Idfg_typeassert = 39u,
    Kind_Idfg_typeparam = 40u,
    Kind_Idfg_unwrap = 41u,
    Kind_Idfg_pragma = 42u,
    Kind_Idfg_break = 43u,
    Kind_Idfg_return = 44u,
    Kind_Idfg_continue = 45u,
    Kind_Idfg_import = 46u,
    Kind_Idfg_addroffn = 47u,
    Kind_Idfg_forfieldsof = 48u,
    Kind_Idfg_members = 49u,
    Kind_Idfg_fnbranch = 50u,
    Kind_Idfg_pattern = 51u,
    Kind_Idfg_typeunion = 52u,
    Kind_Idfg_typetag = 53u,
    Kind_Idfg___relaxed = 54u,
    Kind_Idfg___convert = 55u,
    Kind_Idfg___preceding_ref_arg = 56u,
    Kind_Idfg___serialized_type = 57u,
    Kind_Idfg___serialized_addrof_type_fn = 58u,
    Kind_Idfg___litfix_bound = 59u,
    Kind_Idfg___no_kind_yet = 60u,
    Kind_Idfg___tombstone = 61u,
    Kind_Idfg_type = 62u,
    Kind_Idfg_var = 63u,
    Kind_Idfg_field = 64u,
    Kind_Idfg_enumv = 65u,
    Kind_Idfg_template = 66u,
    Kind_Idfg___native = 67u,
    Kind_Idfg_inline = 68u,
};
                                #endif

                                #ifndef DEF_DeclAsserts_taUG
                                #define DEF_DeclAsserts_taUG
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NOCOPY = DeclAsserts_taUG(1u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NOVEC = DeclAsserts_taUG(2u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_TRIVIAL = DeclAsserts_taUG(4u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NODISCARD = DeclAsserts_taUG(8u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_PURE = DeclAsserts_taUG(16u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_PURE_CTX = DeclAsserts_taUG(32u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_PURE_FX = DeclAsserts_taUG(64u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NOFLOW = DeclAsserts_taUG(128u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NOTHROW = DeclAsserts_taUG(256u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NOCRASH = DeclAsserts_taUG(512u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NOIO = DeclAsserts_taUG(1024u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_FAST = DeclAsserts_taUG(2048u);
inline constexpr DeclAsserts_taUG DeclAsserts_taUG_A_NOINLINE = DeclAsserts_taUG(4096u);

inline constexpr DeclAsserts_taUG MASK_DeclAsserts_taUG
    = DeclAsserts_taUG_A_NOCOPY
    | DeclAsserts_taUG_A_NOVEC
    | DeclAsserts_taUG_A_TRIVIAL
    | DeclAsserts_taUG_A_NODISCARD
    | DeclAsserts_taUG_A_PURE
    | DeclAsserts_taUG_A_PURE_CTX
    | DeclAsserts_taUG_A_PURE_FX
    | DeclAsserts_taUG_A_NOFLOW
    | DeclAsserts_taUG_A_NOTHROW
    | DeclAsserts_taUG_A_NOCRASH
    | DeclAsserts_taUG_A_NOIO
    | DeclAsserts_taUG_A_FAST
    | DeclAsserts_taUG_A_NOINLINE;
                                #endif

                                #ifndef DEF_ParseSyntax_Lay2
                                #define DEF_ParseSyntax_Lay2
inline constexpr ParseSyntax_Lay2 ParseSyntax_Lay2_PS_PARENS = ParseSyntax_Lay2(1u);
inline constexpr ParseSyntax_Lay2 ParseSyntax_Lay2_PS_DISCARD_IF_BLOCK_TAIL = ParseSyntax_Lay2(2u);
inline constexpr ParseSyntax_Lay2 ParseSyntax_Lay2_PS_ALWAYS_DISCARD = ParseSyntax_Lay2(4u);
inline constexpr ParseSyntax_Lay2 ParseSyntax_Lay2_PS_NOT_AN_EXPRESSION = ParseSyntax_Lay2(8u);
inline constexpr ParseSyntax_Lay2 ParseSyntax_Lay2_PS_USING_EXPRESSION = ParseSyntax_Lay2(16u);

inline constexpr ParseSyntax_Lay2 MASK_ParseSyntax_Lay2
    = ParseSyntax_Lay2_PS_PARENS
    | ParseSyntax_Lay2_PS_DISCARD_IF_BLOCK_TAIL
    | ParseSyntax_Lay2_PS_ALWAYS_DISCARD
    | ParseSyntax_Lay2_PS_NOT_AN_EXPRESSION
    | ParseSyntax_Lay2_PS_USING_EXPRESSION;
                                #endif

                                #ifndef DEF_Flags_Lzg8
                                #define DEF_Flags_Lzg8
inline constexpr Flags_Lzg8 Flags_Lzg8_F_CALL_HAS_DOT = 1u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_CALL_HAS_ARGPARENS = 2u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_CALL_HAS_NAMED_ARGS = 4u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_OPERATOR = 8u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_TYPENAME = 16u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_COMPOUND_ID = 32u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_ARGID_IS_OPTIONAL = 64u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_LAX = 128u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_SHADOW = 256u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_MUSTNAME = 512u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_MUT = 1024u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_CONST = 2048u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_VAL = 4096u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_REF = 8192u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_IMPLICIT = 16384u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_USING = 32768u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_CONVERSION = 65536u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_TEST_painted = 131072u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_PUB = 262144u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_EXTERN = 524288u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_HOTSWAP = 1048576u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_PREDICATE = 2097152u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_LT_RETURNED = 4194304u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_REST_ARG = 8388608u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_INJECTED = 16777216u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_TEMPLATE = 33554432u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_INLINE = 67108864u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_LAMBDA = 134217728u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_COW_INSIDE = 268435456u;

inline constexpr Flags_Lzg8 MASK_Flags_Lzg8
    = Flags_Lzg8_F_CALL_HAS_DOT
    | Flags_Lzg8_F_CALL_HAS_ARGPARENS
    | Flags_Lzg8_F_CALL_HAS_NAMED_ARGS
    | Flags_Lzg8_F_OPERATOR
    | Flags_Lzg8_F_TYPENAME
    | Flags_Lzg8_F_COMPOUND_ID
    | Flags_Lzg8_F_ARGID_IS_OPTIONAL
    | Flags_Lzg8_F_LAX
    | Flags_Lzg8_F_SHADOW
    | Flags_Lzg8_F_MUSTNAME
    | Flags_Lzg8_F_MUT
    | Flags_Lzg8_F_CONST
    | Flags_Lzg8_F_VAL
    | Flags_Lzg8_F_REF
    | Flags_Lzg8_F_IMPLICIT
    | Flags_Lzg8_F_USING
    | Flags_Lzg8_F_CONVERSION
    | Flags_Lzg8_F_TEST_painted
    | Flags_Lzg8_F_PUB
    | Flags_Lzg8_F_EXTERN
    | Flags_Lzg8_F_HOTSWAP
    | Flags_Lzg8_F_PREDICATE
    | Flags_Lzg8_F_LT_RETURNED
    | Flags_Lzg8_F_REST_ARG
    | Flags_Lzg8_F_INJECTED
    | Flags_Lzg8_F_TEMPLATE
    | Flags_Lzg8_F_INLINE
    | Flags_Lzg8_F_LAMBDA
    | Flags_Lzg8_F_COW_INSIDE;
                                #endif

                                #ifndef DEF_VFacts_xhRf
                                #define DEF_VFacts_xhRf
inline constexpr VFacts_xhRf VFacts_xhRf_AlwaysTrue = VFacts_xhRf(1u);
inline constexpr VFacts_xhRf VFacts_xhRf_AlwaysFalse = VFacts_xhRf(2u);
inline constexpr VFacts_xhRf VFacts_xhRf_Typename = VFacts_xhRf(4u);
inline constexpr VFacts_xhRf VFacts_xhRf_LeftAligned = VFacts_xhRf(8u);
inline constexpr VFacts_xhRf VFacts_xhRf_RightAligned = VFacts_xhRf(16u);

inline constexpr VFacts_xhRf MASK_VFacts_xhRf
    = VFacts_xhRf_AlwaysTrue
    | VFacts_xhRf_AlwaysFalse
    | VFacts_xhRf_Typename
    | VFacts_xhRf_LeftAligned
    | VFacts_xhRf_RightAligned;
                                #endif

                                #ifndef DEF_SolverStatus_h9em
                                #define DEF_SolverStatus_h9em
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_LAZY = SolverStatus_h9em(1u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_DID_START = SolverStatus_h9em(2u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_DIRTY = SolverStatus_h9em(4u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_FINALIZED = SolverStatus_h9em(8u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_UPDATED = SolverStatus_h9em(16u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_TYPE_RECUR = SolverStatus_h9em(32u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_FN_RECUR = SolverStatus_h9em(64u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_FN_OOE_RTL = SolverStatus_h9em(128u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_NAME_UNUSED = SolverStatus_h9em(256u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_UNUSED = SolverStatus_h9em(512u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_MATCHED = SolverStatus_h9em(1024u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_MOVED_FROM = SolverStatus_h9em(2048u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_EXTERNAL_LINKAGE = SolverStatus_h9em(4096u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_OBSERVED_BY_CONV_CACHE = SolverStatus_h9em(8192u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_TODO_FIX_was_rx_resize = SolverStatus_h9em(16384u);
inline constexpr SolverStatus_h9em SolverStatus_h9em_SS_Debug_AllPassesComplete = SolverStatus_h9em(32768u);

inline constexpr SolverStatus_h9em MASK_SolverStatus_h9em
    = SolverStatus_h9em_SS_LAZY
    | SolverStatus_h9em_SS_DID_START
    | SolverStatus_h9em_SS_DIRTY
    | SolverStatus_h9em_SS_FINALIZED
    | SolverStatus_h9em_SS_UPDATED
    | SolverStatus_h9em_SS_TYPE_RECUR
    | SolverStatus_h9em_SS_FN_RECUR
    | SolverStatus_h9em_SS_FN_OOE_RTL
    | SolverStatus_h9em_SS_NAME_UNUSED
    | SolverStatus_h9em_SS_UNUSED
    | SolverStatus_h9em_SS_MATCHED
    | SolverStatus_h9em_SS_MOVED_FROM
    | SolverStatus_h9em_SS_EXTERNAL_LINKAGE
    | SolverStatus_h9em_SS_OBSERVED_BY_CONV_CACHE
    | SolverStatus_h9em_SS_TODO_FIX_was_rx_resize
    | SolverStatus_h9em_SS_Debug_AllPassesComplete;
                                #endif

                                #ifndef DEF_MayEscapeVia_5nki
                                #define DEF_MayEscapeVia_5nki
                                #endif

                                #ifndef DEF_ExitPaths_UXHs
                                #define DEF_ExitPaths_UXHs
inline constexpr ExitPaths_UXHs ExitPaths_UXHs_XP_NonEmptyReturn = ExitPaths_UXHs(1u);
inline constexpr ExitPaths_UXHs ExitPaths_UXHs_XP_EmptyReturn = ExitPaths_UXHs(2u);
inline constexpr ExitPaths_UXHs ExitPaths_UXHs_XP_NoReturn = ExitPaths_UXHs(4u);

inline constexpr ExitPaths_UXHs MASK_ExitPaths_UXHs
    = ExitPaths_UXHs_XP_NonEmptyReturn
    | ExitPaths_UXHs_XP_EmptyReturn
    | ExitPaths_UXHs_XP_NoReturn;
                                #endif

                                #ifndef DEF_FxMask_2dRz
                                #define DEF_FxMask_2dRz
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_NotDeadCode = FxMask_2dRz(1u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_NonDeterministic = FxMask_2dRz(2u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_DontMoveUp = FxMask_2dRz(4u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_DontMoveDown = FxMask_2dRz(8u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Input = FxMask_2dRz(16u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Output = FxMask_2dRz(32u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Throws = FxMask_2dRz(64u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Crashes = FxMask_2dRz(128u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Crashes_Div0 = FxMask_2dRz(256u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Crashes_OOB = FxMask_2dRz(512u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Crashes_Assert = FxMask_2dRz(1024u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Crashes_Exit = FxMask_2dRz(2048u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Syscall = FxMask_2dRz(4096u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Blocks = FxMask_2dRz(8192u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Blocks_Alloc = FxMask_2dRz(16384u);
inline constexpr FxMask_2dRz FxMask_2dRz_Fx_Blocks_Await = FxMask_2dRz(32768u);

inline constexpr FxMask_2dRz MASK_FxMask_2dRz
    = FxMask_2dRz_Fx_NotDeadCode
    | FxMask_2dRz_Fx_NonDeterministic
    | FxMask_2dRz_Fx_DontMoveUp
    | FxMask_2dRz_Fx_DontMoveDown
    | FxMask_2dRz_Fx_Input
    | FxMask_2dRz_Fx_Output
    | FxMask_2dRz_Fx_Throws
    | FxMask_2dRz_Fx_Crashes
    | FxMask_2dRz_Fx_Crashes_Div0
    | FxMask_2dRz_Fx_Crashes_OOB
    | FxMask_2dRz_Fx_Crashes_Assert
    | FxMask_2dRz_Fx_Crashes_Exit
    | FxMask_2dRz_Fx_Syscall
    | FxMask_2dRz_Fx_Blocks
    | FxMask_2dRz_Fx_Blocks_Alloc
    | FxMask_2dRz_Fx_Blocks_Await;
                                #endif

                                #ifndef DEF_SolverNotes_LSla
                                #define DEF_SolverNotes_LSla
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_FnRecursion = 1;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_FnResolve = 2;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_FnReopen = 4;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_TypeRecursion = 8;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_TypeResolve = 16;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_TypeReopen = 32;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_DeadCode = 64;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_DeadCall = 128;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_DeadLet = 256;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_DeadArrlit = 512;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_DeadLoopInit = 1024;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_DeadConv = 2048;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_NonTrivAutoCopy = 4096;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_RelaxRespec = 8192;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedImplicit = 16384;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedCall = 32768;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedDefer = 65536;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedTry = 131072;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedAndOr = 262144;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedIfElse = 524288;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedArrlit = 1048576;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_UnusedLet = 2097152;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_BckMustSeq = 4194304;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_AARMustSeq = 8388608;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_AARSoftRisk = 16777216;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_MoveMustSeq = 33554432;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_McomUnwrapsLetdef = 67108864;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_SD_HasStaticInit = 134217728;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_SD_ExternPrivates = 268435456;
inline constexpr SolverNotes_LSla SolverNotes_LSla_N_COWRestrict = 536870912;

inline constexpr SolverNotes_LSla MASK_SolverNotes_LSla
    = SolverNotes_LSla_N_FnRecursion
    | SolverNotes_LSla_N_FnResolve
    | SolverNotes_LSla_N_FnReopen
    | SolverNotes_LSla_N_TypeRecursion
    | SolverNotes_LSla_N_TypeResolve
    | SolverNotes_LSla_N_TypeReopen
    | SolverNotes_LSla_N_DeadCode
    | SolverNotes_LSla_N_DeadCall
    | SolverNotes_LSla_N_DeadLet
    | SolverNotes_LSla_N_DeadArrlit
    | SolverNotes_LSla_N_DeadLoopInit
    | SolverNotes_LSla_N_DeadConv
    | SolverNotes_LSla_N_NonTrivAutoCopy
    | SolverNotes_LSla_N_RelaxRespec
    | SolverNotes_LSla_N_UnusedImplicit
    | SolverNotes_LSla_N_UnusedCall
    | SolverNotes_LSla_N_UnusedDefer
    | SolverNotes_LSla_N_UnusedTry
    | SolverNotes_LSla_N_UnusedAndOr
    | SolverNotes_LSla_N_UnusedIfElse
    | SolverNotes_LSla_N_UnusedArrlit
    | SolverNotes_LSla_N_UnusedLet
    | SolverNotes_LSla_N_BckMustSeq
    | SolverNotes_LSla_N_AARMustSeq
    | SolverNotes_LSla_N_AARSoftRisk
    | SolverNotes_LSla_N_MoveMustSeq
    | SolverNotes_LSla_N_McomUnwrapsLetdef
    | SolverNotes_LSla_N_SD_HasStaticInit
    | SolverNotes_LSla_N_SD_ExternPrivates
    | SolverNotes_LSla_N_COWRestrict;
                                #endif

                                #ifndef DEF_CGDefects_2L18
                                #define DEF_CGDefects_2L18
inline constexpr CGDefects_2L18 CGDefects_2L18_GNUStmtExpr = CGDefects_2L18(1u);
inline constexpr CGDefects_2L18 CGDefects_2L18_Goto = CGDefects_2L18(2u);
inline constexpr CGDefects_2L18 CGDefects_2L18_PointlessMustSeq = CGDefects_2L18(4u);
inline constexpr CGDefects_2L18 CGDefects_2L18_LocalConstBool = CGDefects_2L18(8u);
inline constexpr CGDefects_2L18 CGDefects_2L18_ConstCast = CGDefects_2L18(16u);
inline constexpr CGDefects_2L18 CGDefects_2L18_PointlessLocal = CGDefects_2L18(32u);
inline constexpr CGDefects_2L18 CGDefects_2L18_IrrelevantLiteral = CGDefects_2L18(64u);
inline constexpr CGDefects_2L18 CGDefects_2L18_DuplicateFunctions = CGDefects_2L18(128u);

inline constexpr CGDefects_2L18 MASK_CGDefects_2L18
    = CGDefects_2L18_GNUStmtExpr
    | CGDefects_2L18_Goto
    | CGDefects_2L18_PointlessMustSeq
    | CGDefects_2L18_LocalConstBool
    | CGDefects_2L18_ConstCast
    | CGDefects_2L18_PointlessLocal
    | CGDefects_2L18_IrrelevantLiteral
    | CGDefects_2L18_DuplicateFunctions;
                                #endif

                                #ifndef DEF_Helpers_DyqVC1yXPkj
                                #define DEF_Helpers_DyqVC1yXPkj
struct Helpers_DyqV
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

                                #ifndef DEF_Set_qOJYtbQKZe4
                                #define DEF_Set_qOJYtbQKZe4
struct Set_qOJY
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

                                #ifndef DEF_Target_VZrrYUw5Awd
                                #define DEF_Target_VZrrYUw5Awd
struct Target_VZrr
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

                                #ifndef DEF_Lifetime_llCFAn7rdDl
                                #define DEF_Lifetime_llCFAn7rdDl
struct Lifetime_llCF
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

                                #ifndef DEF_Set_XshDfC0Mim3
                                #define DEF_Set_XshDfC0Mim3
struct Set_XshD
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

                                #ifndef DEF_BitSet_mmp7xBZ4kaf
                                #define DEF_BitSet_mmp7xBZ4kaf
struct BitSet_mmp7
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

                                #ifndef DEF_Sample_Time_cblj5KsY6d7
                                #define DEF_Sample_Time_cblj5KsY6d7
struct Sample_Time_cblj
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

                                #ifndef DEF_ModuleOrder_HMNgkDis85k
                                #define DEF_ModuleOrder_HMNgkDis85k
struct ModuleOrder_HMNg
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

                                #ifndef DEF_TEA_0DazMLEH01f
                                #define DEF_TEA_0DazMLEH01f
struct TEA_0Daz
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

                                #ifndef DEF_ScopeItem_xiLD4Gix9jd
                                #define DEF_ScopeItem_xiLD4Gix9jd
struct ScopeItem_xiLD
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

                                #ifndef DEF_LexerOutput_DN4p6bz8JN7
                                #define DEF_LexerOutput_DN4p6bz8JN7
struct LexerOutput_DN4p
{
    fu::vec<Token_6M7a> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_TokenIdx_5581Mdn3MDd
                                #define DEF_TokenIdx_5581Mdn3MDd
struct TokenIdx_5581
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

                                #ifndef DEF_LineColChars_6JiMQvLXJS2
                                #define DEF_LineColChars_6JiMQvLXJS2
struct LineColChars_6JiM
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

                                #ifndef DEF_ValueType_JtNg3Yu4fH2
                                #define DEF_ValueType_JtNg3Yu4fH2
struct ValueType_JtNg
{
    unsigned quals;
    VFacts_xhRf vfacts;
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

                                #ifndef DEF_ModuleStat_sTmhPzQmjMb
                                #define DEF_ModuleStat_sTmhPzQmjMb
struct ModuleStat_sTmh
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

                                #ifndef DEF_Shape_fvCXSyBvLeh
                                #define DEF_Shape_fvCXSyBvLeh
struct Shape_fvCX
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

                                #ifndef DEF_Scope_blWT6MMEi3a
                                #define DEF_Scope_blWT6MMEi3a
struct Scope_blWT
{
    fu::vec<Overload_aO3i> overloads;
    fu::vec<Extended_z0HS> extended;
    fu::vec<ScopeItem_xiLD> items;
    fu::vec<ScopeItem_xiLD> implicits;
    fu::vec<ScopeItem_xiLD> globals;
    fu::vec<int> imports;
    fu::vec<int> privates;
    fu::vec<Target_VZrr> usings;
    fu::vec<Target_VZrr> converts;
    int pub_items;
    int pub_implicits;
    int pub_globals;
    int pub_converts;
    Scope_blWT(const Scope_blWT&) = delete;
    Scope_blWT(Scope_blWT&&) = default;
    Scope_blWT& operator=(const Scope_blWT&) = delete;
    Scope_blWT& operator=(Scope_blWT&&) = default;
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

                                #ifndef DEF_Profile_4UPJX2Ekm31
                                #define DEF_Profile_4UPJX2Ekm31
struct Profile_4UPJ
{
    Sample_Time_cblj now;
    explicit operator bool() const noexcept
    {
        return false
            || now
        ;
    }
};
                                #endif

                                #ifndef DEF_Map_Umhkk3Q7ESc
                                #define DEF_Map_Umhkk3Q7ESc
struct Map_Umhk
{
    Set_XshD keys;
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

                                #ifndef DEF_Token_6M7a5ObuiN2
                                #define DEF_Token_6M7a5ObuiN2
struct Token_6M7a
{
    Kind_Idfg kind;
    LineColChars_6JiM lcc;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_Type_OiTmZNVtrhg
                                #define DEF_Type_OiTmZNVtrhg
struct Type_OiTm
{
    ValueType_JtNg vtype;
    Lifetime_llCF lifetime;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
        ;
    }
};
                                #endif

                                #ifndef DEF_Import_7CIJGVi8Ybg
                                #define DEF_Import_7CIJGVi8Ybg
struct Import_7CIJ
{
    TokenIdx_5581 token;
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

                                #ifndef DEF_BuildHacks_sqc0iR8AO8j
                                #define DEF_BuildHacks_sqc0iR8AO8j
struct BuildHacks_sqc0
{
    Set_XshD link;
    Set_XshD include_dirs;
    Set_XshD extra_sources;
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

                                #ifndef DEF_ModuleStats_ANTRP1S5xh9
                                #define DEF_ModuleStats_ANTRP1S5xh9
struct ModuleStats_ANTR
{
    ModuleStat_sTmh lex;
    ModuleStat_sTmh parse;
    ModuleStat_sTmh solve;
    ModuleStat_sTmh codegen;
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

                                #ifndef DEF_Struct_LDkBleMfVWj
                                #define DEF_Struct_LDkBleMfVWj
struct Struct_LDkB
{
    Kind_Idfg kind;
    fu::str name;
    Target_VZrr target;
    fu::vec<ScopeItem_xiLD> items;
    fu::vec<ScopeItem_xiLD> implicits;
    Set_qOJY imports;
    fu::vec<Target_VZrr> converts;
    Shape_fvCX shape;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_COWInside_qvlyaYROKmj
                                #define DEF_COWInside_qvlyaYROKmj
struct COWInside_qvly
{
    ValueType_JtNg vtype;
    TokenIdx_5581 token;
    int argTarget;
    MayEscapeVia_5nki mayEscapeVia;
    ExitPaths_UXHs exitPaths;
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

                                #ifndef DEF_Node_JjyRxwEqS5g
                                #define DEF_Node_JjyRxwEqS5g
struct Node_JjyR
{
    Kind_Idfg kind;
    DeclAsserts_taUG asserts;
    ParseSyntax_Lay2 syntax;
    Flags_Lzg8 flags;
    fu::str value;
    fu::vec<Node_JjyR> items;
    TokenIdx_5581 token;
    Node_JjyR(const Node_JjyR&) = default;
    Node_JjyR(Node_JjyR&&) = default;
    Node_JjyR& operator=(Node_JjyR&&) = default;
    Node_JjyR& operator=(const Node_JjyR& selfrec) { return *this = Node_JjyR(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_Template_SsLxhvAKrZc
                                #define DEF_Template_SsLxhvAKrZc
struct Template_SsLx
{
    Node_JjyR node;
    fu::vec<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
        ;
    }
};
                                #endif

                                #ifndef DEF_NukeOnRebuild_TLE7j3PsyGg
                                #define DEF_NukeOnRebuild_TLE7j3PsyGg
struct NukeOnRebuild_TLE7
{
    Map_Umhk files;
    Map_Umhk fuzzy;
    explicit operator bool() const noexcept
    {
        return false
            || files
            || fuzzy
        ;
    }
};
                                #endif

                                #ifndef DEF_ParserOutput_d14kSKCxwSg
                                #define DEF_ParserOutput_d14kSKCxwSg
struct ParserOutput_d14k
{
    Node_JjyR root;
    fu::vec<Import_7CIJ> imports;
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

                                #ifndef DEF_CodegenOutput_qIMBO7608c0
                                #define DEF_CodegenOutput_qIMBO7608c0
struct CodegenOutput_qIMB
{
    fu::str src;
    Set_XshD includes_headers;
    BuildHacks_sqc0 hacks;
    Set_qOJY testsuite_modids;
    CGDefects_2L18 defects;
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

                                #ifndef DEF_SolvedNode_efhg6mFAbn1
                                #define DEF_SolvedNode_efhg6mFAbn1
struct SolvedNode_efhg
{
    Kind_Idfg kind;
    Helpers_DyqV helpers;
    Flags_Lzg8 flags;
    int _loop_start;
    fu::str value;
    fu::vec<SolvedNode_efhg> items;
    TokenIdx_5581 token;
    Type_OiTm type;
    Target_VZrr target;
    SolvedNode_efhg(const SolvedNode_efhg&) = default;
    SolvedNode_efhg(SolvedNode_efhg&&) = default;
    SolvedNode_efhg& operator=(SolvedNode_efhg&&) = default;
    SolvedNode_efhg& operator=(const SolvedNode_efhg& selfrec) { return *this = SolvedNode_efhg(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_ModuleInputs_iQIgWAk3ys1
                                #define DEF_ModuleInputs_iQIgWAk3ys1
struct ModuleInputs_iQIg
{
    fu::str src;
    LexerOutput_DN4p lex;
    ParserOutput_d14k parse;
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

                                #ifndef DEF_Overload_aO3iBmOu2tl
                                #define DEF_Overload_aO3iBmOu2tl
struct Overload_aO3i
{
    Kind_Idfg kind;
    Flags_Lzg8 flags;
    SolverStatus_h9em status;
    DeclAsserts_taUG asserts;
    fu::str name;
    Type_OiTm type;
    SolvedNode_efhg solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_Extended_z0HSOEPqb07
                                #define DEF_Extended_z0HSOEPqb07
struct Extended_z0HS
{
    int min;
    int max;
    fu::vec<Argument_bbKc> args;
    fu::vec<COWInside_qvly> cows_inside;
    Target_VZrr spec_of;
    Template_SsLx tEmplate;
    fu::vec<Overload_aO3i> args_n_locals;
    TEA_0Daz sighash;
    FxMask_2dRz fx_mask;
    int args_neg;
    explicit operator bool() const noexcept
    {
        return false
            || tEmplate
        ;
    }
};
                                #endif

                                #ifndef DEF_SolverOutput_hA3TAuh8W27
                                #define DEF_SolverOutput_hA3TAuh8W27
struct SolverOutput_hA3T
{
    SolvedNode_efhg root;
    Scope_blWT scope;
    SolverNotes_LSla notes;
    SolverOutput_hA3T(const SolverOutput_hA3T&) = delete;
    SolverOutput_hA3T(SolverOutput_hA3T&&) = default;
    SolverOutput_hA3T& operator=(const SolverOutput_hA3T&) = delete;
    SolverOutput_hA3T& operator=(SolverOutput_hA3T&&) = default;
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

                                #ifndef DEF_Argument_bbKcjdTxEug
                                #define DEF_Argument_bbKcjdTxEug
struct Argument_bbKc
{
    fu::str name;
    fu::str autocall;
    Type_OiTm type;
    SolvedNode_efhg dEfault;
    Target_VZrr target;
    Flags_Lzg8 flags;
    unsigned written_to;
    BitSet_mmp7 may_invalidate;
    BitSet_mmp7 may_alias;
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

                                #ifndef DEF_Context_noPAKWUf0xa
                                #define DEF_Context_noPAKWUf0xa
struct Context_noPA
{
    fu::str fudir;
    fu::str base_dir;
    fu::vec<Module_wo7O> modules;
    fu::vec<int> dep_order;
    NukeOnRebuild_TLE7 nuke;
    Context_noPA(const Context_noPA&) = delete;
    Context_noPA(Context_noPA&&) = default;
    Context_noPA& operator=(const Context_noPA&) = delete;
    Context_noPA& operator=(Context_noPA&&) = default;
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

                                #ifndef DEF_ModuleOutputs_WMGMpooiIO2
                                #define DEF_ModuleOutputs_WMGMpooiIO2
struct ModuleOutputs_WMGM
{
    fu::vec<Struct_LDkB> types;
    SolverOutput_hA3T solve;
    CodegenOutput_qIMB cpp;
    ModuleOutputs_WMGM(const ModuleOutputs_WMGM&) = delete;
    ModuleOutputs_WMGM(ModuleOutputs_WMGM&&) = default;
    ModuleOutputs_WMGM& operator=(const ModuleOutputs_WMGM&) = delete;
    ModuleOutputs_WMGM& operator=(ModuleOutputs_WMGM&&) = default;
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

                                #ifndef DEF_Module_wo7O6EZDQyh
                                #define DEF_Module_wo7O6EZDQyh
struct Module_wo7O
{
    int modid;
    fu::str fname;
    ModuleInputs_iQIg in;
    ModuleOrder_HMNg order;
    ModuleOutputs_WMGM out;
    ModuleStats_ANTR stats;
    Profile_4UPJ profile;
    Module_wo7O(const Module_wo7O&) = delete;
    Module_wo7O(Module_wo7O&&) = default;
    Module_wo7O& operator=(const Module_wo7O&) = delete;
    Module_wo7O& operator=(Module_wo7O&&) = default;
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

                                #ifndef DEF_DevOptions_QEya
                                #define DEF_DevOptions_QEya
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_Print = DevOptions_QEya(1u);
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_Parallel = DevOptions_QEya(2u);
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_ExpectFail = DevOptions_QEya(4u);
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_HappyPathOnly = DevOptions_QEya(8u);
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_DontFoldLiterals = DevOptions_QEya(16u);
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_IgnoreDefects = DevOptions_QEya(32u);
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_CG_LifetimeAnnots = DevOptions_QEya(64u);

inline constexpr DevOptions_QEya MASK_DevOptions_QEya
    = DevOptions_QEya_DEV_Print
    | DevOptions_QEya_DEV_Parallel
    | DevOptions_QEya_DEV_ExpectFail
    | DevOptions_QEya_DEV_HappyPathOnly
    | DevOptions_QEya_DEV_DontFoldLiterals
    | DevOptions_QEya_DEV_IgnoreDefects
    | DevOptions_QEya_DEV_CG_LifetimeAnnots;
                                #endif

                                #ifndef DEF_Lint_Q9R1a2Yzb4c
                                #define DEF_Lint_Q9R1a2Yzb4c
struct Lint_Q9R1
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

                                #ifndef DEF_Options_TBgDoLC1XOk
                                #define DEF_Options_TBgDoLC1XOk
struct Options_TBgD
{
    Lint_Q9R1 lint;
    SolverNotes_LSla break_notes;
    CGDefects_2L18 break_defects;
    DevOptions_QEya dev;
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

                                #ifndef STR_nJyHUaSopRe
                                #define STR_nJyHUaSopRe
static const fu::str str_nJyHUaSopRe fu_INIT_PRIORITY(1012) { "prelude"_fu };
                                #endif

                                #ifndef STR_bbacQcmd2r4
                                #define STR_bbacQcmd2r4
static const fu::str str_bbacQcmd2r4 fu_INIT_PRIORITY(1012) { "\n\n\n// Arithmetics.\n\nprefix fn + (a: <T>) case (T.is::arithmetic): T __native;\nprefix fn - (a: <T>) case (T.is::arithmetic): T __native;\n\ninfix fn + (a: <T>, b: T) case (T.is::arithmetic): T __native;\ninfix fn - (a: <T>, b: T) case (T.is::arithmetic): T __native;\ninfix fn * (a: <T>, b: T) case (T.is::arithmetic): T __native;\ninfix fn / (a: <T>, b: T) case (T.is::arithmetic): T __native;\n\ninfix fn % (a: <T>, b: T)\n    case (T.is::integral): T __native;\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmod\");\n\nprefix fn ++ (mut ref a: <T>) case (T.is::arithmetic): &mut T __native;\nprefix fn -- (mut ref a: <T>) case (T.is::arithmetic): &mut T __native;\n\npostfix fn ++ (mut ref a: <T>) case (T.is::arithmetic): T __native;\npostfix fn -- (mut ref a: <T>) case (T.is::arithmetic): T __native;\n\ninfix fn += (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn -= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn *= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn /= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native;\n\ninfix fn %= (mut ref a: <T>, b: T)\n    case (T.is::integral): &mut T __native;\n    case (T.is::floating_point) = (a = a % b);\n\ninfix fn >  (a: <T>, b: T) case (T.is::primitive): bool __native;\ninfix fn <  (a: <T>, b: T) case (T.is::primitive): bool __native;\ninfix fn >= (a: <T>, b: T) case (T.is::primitive): bool __native;\ninfix fn <= (a: <T>, b: T) case (T.is::primitive): bool __native;\n\n\n// Wrapping arithmetic, alla Zig.\n\nprefix fn -% (a: <T>) case (T.is::arithmetic): T __native(\"-\");\n\ninfix fn +% (a: <T>, b: T) case (T.is::arithmetic): T __native(\"+\");\ninfix fn -% (a: <T>, b: T) case (T.is::arithmetic): T __native(\"-\");\ninfix fn *% (a: <T>, b: T) case (T.is::arithmetic): T __native(\"*\");\n\ninfix fn +%= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native(\"+=\");\ninfix fn -%= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native(\"-=\");\ninfix fn *%= (mut ref a: <T>, b: T) case (T.is::arithmetic): &mut T __native(\"*=\");\n\n\n// Bitwise.\n\nprefix fn ~ (a: <T>) case (T.is::bitfield): T __native;\n\ninfix fn & (a: <T>, b: T) case (T.is::bitfield): T __native;\ninfix fn | (a: <T>, b: T) case (T.is::bitfield): T __native;\ninfix fn ^ (a: <T>, b: T) case (T.is::bitfield): T __native;\n\ninfix fn &= (mut ref a: <T>, b: T) case (T.is::bitfield): &mut T __native;\ninfix fn |= (mut ref a: <T>, b: T) case (T.is::bitfield): &mut T __native;\ninfix fn ^= (mut ref a: <T>, b: T) case (T.is::bitfield): &mut T __native;\n\ninfix fn << (a: <T>, b: T) case (T.is::integral): T __native;\ninfix fn >> (a: <T>, b: T) case (T.is::integral): T __native;\n\ninfix fn <<= (mut ref a: <T>, b: T) case (T.is::integral): &mut T __native;\ninfix fn >>= (mut ref a: <T>, b: T) case (T.is::integral): &mut T __native;\n\n\n// Numeric conversions.\n/*  Sketch for making these programmable.\n\ninfix fn => !From(from: From, type Into)\n    case (Into.is::primitive && From.is::primitive)\n        __native(\"/prim_convert\");\n*/\n\nfn   i8(v: <T>) case (T.is::primitive):   i8 __native(\"/prim/convert\");\nfn  i16(v: <T>) case (T.is::primitive):  i16 __native(\"/prim/convert\");\nfn  i32(v: <T>) case (T.is::primitive):  i32 __native(\"/prim/convert\");\nfn  i64(v: <T>) case (T.is::primitive):  i64 __native(\"/prim/convert\");\nfn i128(v: <T>) case (T.is::primitive): i128 __native(\"/prim/convert\");\n\nfn   u8(v: <T>) case (T.is::primitive):   u8 __native(\"/prim/convert\");\nfn  u16(v: <T>) case (T.is::primitive):  u16 __native(\"/prim/convert\");\nfn  u32(v: <T>) case (T.is::primitive):  u32 __native(\"/prim/convert\");\nfn  u64(v: <T>) case (T.is::primitive):  u64 __native(\"/prim/convert\");\nfn u128(v: <T>) case (T.is::primitive): u128 __native(\"/prim/convert\");\n\nfn  f32(v: <T>) case (T.is::primitive): f32 __native(\"/prim/convert\");\nfn  f64(v: <T>) case (T.is::primitive): f64 __native(\"/prim/convert\");\n\nfn byte(v: <T>) case (T.is::primitive): byte __native(\"/prim/convert\");\n\nfn unsigned(v: <T>)\n    case (T -> i8)     v.u8;\n    case (T -> i16)    v.u16;\n    case (T -> i32)    v.u32;\n    case (T -> i64)    v.u64;\n    case (T -> i128)   v.u128;\n    case (T.is::integral && T.is::unsigned) v;\n\nfn signed(v: <T>)\n    case (T -> u8)     v.i8;\n    case (T -> u16)    v.i16;\n    case (T -> u32)    v.i32;\n    case (T -> u64)    v.i64;\n    case (T -> u128)   v.i128;\n    case (T.is::integral && !T.is::unsigned) v;\n\nfn MIN(type <T>)\n    case (T -> i8 )        -128;\n    case (T -> i16)        -32768;\n    case (T -> i32)        -2147483648;\n    case (T -> i64)        -9223372036854775808;\n    case (T.is::unsigned)  T(0);\n\nfn MAX(type <T>)\n    case (T -> i8 )        127;\n    case (T -> i16)        32767;\n    case (T -> i32)        2147483647;\n    case (T -> i64)        9223372036854775807;\n    case (T.is::unsigned)  T(-1);\n\ntype  int   = i32; // These may become separate types\ntype uint   = u32; //  with a user-selectable size.\n\n\n//\n\nfn x16(v: <T>)\n    case (T -> i8 || T -> i16) v.i16;\n    case (T -> u8 || T -> u16) v.u16;\n\nfn x32(v: <T>)\n    case (T -> i8 || T -> i16 || T -> i32) v.i32;\n    case (T -> u8 || T -> u16 || T -> u32) v.u32;\n\nfn x64(v: <T>)\n    case (T -> i8 || T -> i16 || T -> i32 || T -> i64) v.i64;\n    case (T -> u8 || T -> u16 || T -> u32 || T -> u64) v.u64;\n\nfn trunc64(v: <T>)\n    case (T -> i128 || T -> i64) v.i64;\n    case (T -> u128 || T -> u64) v.u64;\n\nfn trunc32(v: <T>)\n    case (T -> i128 || T -> i64 || T -> i32) v.i32;\n    case (T -> u128 || T -> u64 || T -> u32) v.u32;\n\nfn trunc16(v: <T>)\n    case (T -> i128 || T -> i64 || T -> i32 || T -> i16) v.i16;\n    case (T -> u128 || T -> u64 || T -> u32 || T -> u16) v.u16;\n\n\n// Math.\n\nfn abs(v: <T>)\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fabs\");\n    case (T.is::arithmetic && !T.is::unsigned) v < 0 ? -v : v;\n\nfn max(a: <T>, b: T)\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmin\");\n    case (T.is::primitive) a >= b ? a : b;\n\nfn min(a: <T>, b: T)\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmax\");\n    case (T.is::primitive) a <= b ? a : b;\n\nfn clamp(v: <T>, gteq: T, lteq: T)\n    case (T.is::primitive) v.min(lteq).max(gteq);\n\nfn exp   (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp\");\nfn exp2  (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp2\");\nfn log   (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log\");\nfn log10 (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log10\");\nfn log2  (a: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log2\");\n\nfn pow   (a: <T>, b: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::pow\");\nfn sqrt  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::ceil\");\nfn floor (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::floor\");\nfn trunc (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::trunc\");\nfn round (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::round\");\n\nfn sin   (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sin\");\nfn cos   (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cos\");\nfn tan   (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::tan\");\n\nfn asin  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::asin\");\nfn acos  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::acos\");\nfn atan  (v: <T>) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2 (y: <T>, x: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI  (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(M_PI)\");\nfn E   (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(M_E)\");\nfn INF (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(INFINITY)\");\nfn NAN (type <T>) case (T.is::floating_point): T __native(\"<math.h>\", \"static_cast<>(NAN)\");\n\nfn nan    (v: <T>) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf    (v: <T>) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite (v: <T>) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Assignment.\n\ninfix fn   = (mut ref a: <T>,    mut b: T): &mut T = __native;\ninfix fn ||= (mut ref a: <T>, inline b: T): &mut T = a || (a = b);\ninfix fn &&= (mut ref a: <T>, inline b: T): &mut T = a && (a = b);\n\nfn swap(mut ref a: <T>, mut ref b: T)\n    case (  T -> _[]   ): void __native(\".swap\");\n    case (!(T -> _[..])): void __native(\"#MayAlias\", \"<utility>\", \"std::swap\");\n\n\n// Arrays.\n//\n// TODO mutval .=,\n//  just like the assignments and splice.\n\nfn typeof(lax _: <T>) = T;\n\npostfix fn []  (type <T>) = typeof([] => T[]);\npostfix fn [..](type <T>) = typeof([] => T[..]);\n\nnovec fn len(a: <T>[..]): int __native(\".size()\");\n\nnovec postfix fn [] (ref a: <T>[..], i: int)\n    case (typeof(a) -> &mut T[..]): &mut T __native(\".mutref\");\n    default                       : &    T __native;\n\npostfix fn [..] (ref a: <T>[..], start: int, end: int)\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\npostfix fn [..] (ref a: <T>[..], start!: int)\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\npostfix fn [..] (ref a: <T>[..], end!: int)\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_start0_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_start0\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_start0_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view_start0\");\n\nfn slice(ref a: <T>[..], start: int, end: int) // TODO REMOVE\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn slice(ref a: <T>[..], start: int) // TODO REMOVE\n    case (typeof(a) -> &mut T[]  ): &mut T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range_mut\");\n    case (typeof(a) -> &    T[]  ): &    T[]   __native(\"<fu/vec_range.h>\", \"fu::get_range\");\n    case (typeof(a) -> &mut T[..]): &mut T[..] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                       : &    T[..] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push(mut ref a: <T>[], mut b: T): void __native(\".push\");\nfn unshift(mut ref a: <T>[], mut b: T): void __native(\".unshift\");\nfn  insert(mut ref a: <T>[], i: int, mut b: T): void __native(\".insert\");\n\nfn splice(mut ref a: <T>[], start: int, count: int): void  __native(\".splice\");\nfn splice(mut ref a: <T>[], start: int, count: int, b: T[..]): void  __native(\".splice\");\n\nfn    pop(mut ref a: <T>[]): void __native(\".pop()\");\nfn  shift(mut ref a: <T>[]): void __native(\".shift()\");\n\nfn  clear(mut ref a: <T>[]): void __native(\".clear()\");\nfn shrink(mut ref a: <T>[], len: int): void __native(\".shrink\");\n\nfn resize(mut ref a: <T>[], len: int): void __native(\".resize\");\nfn   grow(mut ref a: <T>[], len: int): void __native(\".grow\");\n\nfn resize_junk(mut ref a: <T>[], len: int): void __native(\".resize<false>\");\nfn   grow_junk(mut ref a: <T>[], len: int): void __native(\".grow<false>\");\n\n\n// Sorts, via std::sort - fnptrs.\n\nfn sort(mut ref a: <T>[..], less = |l, r| l <> r < 0): void\n{\n    noflow fn sort()\n    {\n        mut l: T;\n        mut r: T;\n        pragma include(\"<algorithm>\");\n        pragma emit(\n        `\n            (void) `l`;\n            (void) `r`;\n            auto* data = `a`.data_mut();\n            std::sort(data, data + `a`.size(), [&](auto& `l`, auto& `r`)\n            {\n        `);\n\n        mut lt: bool = less(l, r);\n        pragma emit(\n        `\n                return `lt`;\n            });\n        `);\n    }\n\n    sort();\n}\n\n\n// String likes.\n\nfn has(a: <T>[..], b: T[..] or T) = a.find(b) >= 0;\n\nfn find(haystack: <T>[..], needle: T[..] or T, start?: int or [], end?: int or []): int\n{\n    type Start  = typeof(start);\n    type End    = typeof(end);\n\n    // Keep things simple.\n    if !(Start -> [] && End -> [])\n    {\n        let slice = Start -> [] ? haystack[      .. end]\n                  : End   -> [] ? haystack[start ..    ]\n                                : haystack[start .. end];\n\n        let res = slice.find(needle);\n        return res + (res < 0 ? 0 : start);\n    }\n\n    // Char vs string.\n    if (typeof(needle) -> T)\n    {\n        for (mut i = 0; i < haystack.len; i++)\n            if (haystack[i] == needle)\n                return i;\n\n        return -1;\n    }\n\n    // Shorter haystack & empty needle.\n    if (haystack.len < needle.len || needle.len <= 0)\n        return needle.len ? -1 : 0;\n\n    // This is both a fast path for single-item needles,\n    //  and simplifies the loops below,\n    //   where the Booyer-Moore trick can rely on needle having at least two items.\n    if (needle.len == 1)\n        return haystack.find(needle[0]);\n\n\n    // Try to go for a whole needle comparison\n    //  if the needle is small enough to fit in an integer.\n    //\n    // This works, never measured if it speeds anything up though.\n\n    // if (T.is::primitive && !T.is::floating_point\n    //                     && needle.len * sizeof(T) <= 16)\n    // {\n    //     let shift       = (sizeof(T) * 8).u128;\n    //     let mask        = needle.len * sizeof(T) * 8;\n    //     shadow let mask =\n    //         mask < 128  ? ~(~(0.u128) << (needle.len * sizeof(T) * 8).u128)\n    //                     :   ~(0.u128);\n    //\n    //     mut reg_needle:     u128;\n    //     mut reg_haystack:   u128;\n    //     for (mut i = 0; i < needle.len; i++) {\n    //         reg_needle    <<= shift;\n    //         reg_haystack  <<= shift;\n    //         reg_needle     |= needle[i].u128;\n    //         reg_haystack   |= haystack[i].u128;\n    //     }\n    //\n    //     mut i = needle.len;\n    //     for (;;) {\n    //         if (reg_haystack == reg_needle)\n    //             return i - needle.len;\n    //\n    //         if !(i < haystack.len)\n    //             return -1;\n    //\n    //         reg_haystack  <<= shift;\n    //         reg_haystack   &= mask;\n    //         reg_haystack   |= haystack[i++].u128;\n    //     }\n    // }\n\n\n    // Booyer-Moore trick from FBString::find,\n    //  modified to avoid testing the last needle character twice.\n\n    let needle_len_m1       = needle.len - 1;\n    let needle_last_char    = needle[needle_len_m1];\n\n    // How many bytes are skipped when a mismatch is found after tail matches -\n    //  if needle is 'aa', then skip would be 1, if needle doesn't repeat the tail byte,\n    //   skip would be needle.len.\n    mut skip = 0;\n\n    for (mut i = needle_len_m1;\n             i < haystack.len; )\n    {\n        // Scan for a the tail char of the needle,\n        //  consider using strchr here or something.\n        while (haystack[i] != needle_last_char)\n            if (++i == haystack.len)\n                return -1;\n\n        // Match the rest of the needle,\n        //  consider randomizing this part, should help with crafted needles.\n        for (mut j = 0;; )\n        {\n            // Mismatch halfway through the needle?\n            if (haystack[i - needle_len_m1 + j] != needle[j])\n            {\n                // Init the skip value.\n                if !(skip)\n                {\n                    // Scan the needle backwards,\n                    //  break on first match with needle tail.\n                    skip = needle.len;\n                    for (shadow mut j = needle_len_m1; j --> 0; ) {\n                        if (needle[j] == needle_last_char) {\n                            skip = needle_len_m1 - j;\n                            break;\n                        }\n                    }\n                }\n\n                // Skip over to the next possible tail-char position.\n                i += skip;\n                break;\n            }\n\n            // Entire needle matches?\n            if (++j == needle_len_m1)\n                return i - needle_len_m1;\n        }\n    }\n\n    return -1;\n}\n\n\n// Find char.\n\nfn starts(a: <T>[..], with: T): bool\n{\n    return a.len && a[0] == with;\n}\n\nfn ends(a: <T>[..], with: T): bool\n{\n    return a.len && a[a.len - 1] == with;\n}\n\nfn starts(a: <T>[..], with: T[..]): bool\n{\n    return a.len >= with.len\n        && a[.. with.len] == with;\n}\n\nfn ends(a: <T>[..], with: T[..]): bool\n{\n    return a.len >= with.len\n        && a[a.len - with.len .. a.len] == with;\n}\n\n\n// D-style concats.\n\ninfix fn ~ (a: <T>[..], b: T[..]): T[] __native(\"<fu/vec/concat.h>\",     \"+\");\ninfix fn ~ (a: <T>[..], b: T    ): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\ninfix fn ~ (a: <T>    , b: T[..]): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\ninfix fn ~= (mut ref a: <T>[],     b: T[..]): &mut T[] __native(\"<fu/vec/concat.h>\",     \"+=\");\ninfix fn ~= (mut ref a: <T>[], mut b: T    ): &mut T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\n\n// Fun with views.\n\nfn sizeof(type <T>)\n    case (T.is::zero_size) 0;\n    case (T ->   i8 || T ->   u8 || T -> byte || T -> bool) 1;\n    case (T ->  i16 || T ->  u16) 2;\n    case (T ->  i32 || T ->  u32) 4;\n    case (T ->  i64 || T ->  u64) 8;\n    case (T -> i128 || T -> u128) 16;\n\nfn view(ref a: <T>[], type <of>)\n    case (typeof(a) -> &mut T[] && T.is::reinterpretable && of.is::reinterpretable): &mut of[..] __native(\"<fu/view.h>\", \"fu::view_of_mut<>\");\n    case (                         T.is::reinterpretable && of.is::reinterpretable): &    of[..] __native(\"<fu/view.h>\", \"fu::view_of<>\");\n\ninfix fn .= (mut ref a: <T>[..], b: T[..]) case (T.is::copy): void __native(\"<fu/vec/view_assign.h>\", \"fu::view_assign\");\n\n// TODO not needed if swap(x, y) alias-ok's its two arguments:\nfn swap(mut ref a: <T>[..], i: int, j: int): void __native(\"<fu/vec/view_swap.h>\", \"fu::view_swap\");\n\nfn partition(mut ref a: <T>[..], predicate, mut start!keep = 0)\n{\n    let size = a.len;\n    for (mut i = keep; i < size; i++)\n        if (!predicate(a[i], ?:i)) {\n            if (i > keep)\n                a.swap(i, keep);\n\n            keep++;\n        }\n\n    return keep;\n}\n\nfn remove(mut ref a: <T>[], predicate, mut start!keep = 0)\n{\n    if (T.is::trivial)\n    {\n        let size = a.len;\n        for (mut i = keep; i < size; i++) {\n            let here = a[i];\n            if (!predicate(here, ?:i)) {\n                if (i > keep)\n                    a[keep] = here;\n\n                keep++;\n            }\n        }\n\n        // TODO FIX this doesn't seem to shrink the array.\n        // TODO FAILCASE appears to be unused.\n        assert(false);\n    }\n    else\n    {\n        a.shrink(a.partition(fn predicate));\n    }\n}\n\n\n// Stringifiables.\n\ntype string = byte[];\n\ninfix fn ~ (        a: byte[..], b.str      ) a ~ b;\ninfix fn ~ (        a.str,       b: byte[..]) a ~ b;\ninfix fn ~=(mut ref a: string,   b.str      ) a ~= b;\n\nfn str(n: <T>)\n    case (T.is::unsigned       ): string __native(\"<fu/decstr.h>\", \"fu::u64dec\");\n    case (T.is::integral       ): string __native(\"<fu/decstr.h>\", \"fu::i64dec\");\n    case (T -> bool            ): string __native(\"<fu/decstr.h>\", \"fu::booldec\");\n    case (T -> f32             ): string __native(\"<fu/decstr.h>\", \"fu::f32dec\");\n    case (T -> f64             ): string __native(\"<fu/decstr.h>\", \"fu::f64dec\");\n    case (T.is::enum)\n{\n    for (fieldname i: T)\n        if (n == \"i\")\n            return \"i\";\n\n    return n.i64.str; // TODO FIX use .integer or .arithmetic when we get these\n}\n    case (T.is::flags)\n{\n    mut res: string;\n    for (fieldname i: T)\n        if (n & \"i\")\n            res ~= \"i\" ~ \", \";\n\n    if (res)\n        res.shrink(res.len - 2);\n\n    return res;\n}\n\n\n// Assertions, bugs & fails.\n\nfn throw(mut reason: string): never __native(\"<fu/never.h>\", \"fu::fail\",\n    \"|Fx_NotDeadCode\", \"|Fx_DontMoveDown\", \"|Fx_Throws\");\n\nfn assert(/*TODO pure*/ expression: bool): void __native(\"<fu/assert.h>\", \"fu_ASSERT\",\n    \"|Fx_NotDeadCode\");\n\n\n// Printifiables = anything that implements print.\n\ninline fn print(x: string): string = x;\ninline fn print(x.str)    : string = x;\n\nfn println(parts.print[]: string[..]): void __native(\"<fu/print.h>\", \"fu::println\",\n    \"|output\");\n\n\n// String commons.\n\nfn join(a: <T>[][..], sep?: T or T[..] or [])\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    let N = typeof(sep) -> T[..] ? sep.len\n          : typeof(sep) -> T     ? 1\n                                 : 0;\n\n    mut size = a[0].len;\n    for (mut i = 1; i < a.len; i++)\n        size += N + a[i].len;\n\n    mut res: T[];\n    res.grow_junk(size);\n\n    let head = a[0];\n    size = head.len;\n    res[.. head.len] .= head;\n    for (mut i = 1; i < a.len; i++)\n    {\n        let range = a[i];\n        if (typeof(sep) -> T[..])\n            res[size .. size + N] .= sep;\n        else if (typeof(sep) -> T)\n            res[size] = sep;\n\n        size += N;\n        res[size .. size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn split(str: <T>[..], sep: T or T[..], each)\n{\n    mut last = 0;\n    mut next = 0;\n\n    let N = typeof(sep) -> T[..] ? sep.len : 1;\n    if (N) while ((next = str.find(sep, start: last)) >= 0)\n    {\n        each(str.slice(last, next), first?: !last, last?: false);\n        last = next + N;\n    }\n\n    if (last)\n        each(str.slice(last), first?: false, last?: true);\n    else\n        each(str, first?: true, last?: true);\n}\n\nfn split(str: <T>[], sep: T or T[..])\n{\n    mut result: T[][];\n    split(str, :sep, |substr| result ~= substr);\n    return result;\n}\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn replace(str: <T>[], all: T or T[..], with: T or T[..] or [])\n{\n    mut result: T[];\n    split(str, sep: all, |substr, lax first, lax last|\n    {\n        if (!first)\n            typeof(with) -> [] ? with() : result ~= with;\n        else if (last)\n            return str;\n\n        result ~= substr;\n    });\n\n    return result;\n}\n\n\n// The floating point partial equality problem.\n//\n// BRIEF: to use a floating point number as a key to e.g. a hashtable,\n//  we need a way to meaningfully tell them apart.\n//\n// Telling two values apart means that if two values can have\n//  any behavioural difference, then the values should be considered different.\n//\n// E.g. you can't consider +0 and -0 equivalent,\n//  if a subsequent call to a collection might behave differently\n//   whether you used -0 or +0 first to refer to the same entry.\n//\n// PROBLEM: The usual ==, !=, >, >=, <, <= operators are not well behaved for floats,\n//  and cannot be used as is to implement robust containers where floats are keys.\n//\n// I came up with three possible courses of action:\n//\n// ----------------------------------------------------------------\n//\n// OPTION A:\n//\n//  1. Make classical equality and comparison ops more c-like:\n//      only implement them on primitives, and nothing else,\n//       these ops will have the usual IEEE float semantics.\n//\n//  2. Provide a second set of strict/total equality and comparison operators\n//      that is automatically implemented for all types,\n//       bitwise-compares floats, fast-compares arrays, etc.\n//\n// When writing container code, if you happen to use a classical operator,\n//  your template will simply not compile when you attempt to use it\n//   with a non-primitive type.\n//\n// CON 1:   This means we'll have two sets of equality operators\n//           that will actually yield different results, not amazing.\n//\n// CON 2:   This only tangentially solves the problem we have,\n//           namely that it is easy to overlook NANs and co when writing templates\n//            that aren't designed for use with floats.\n//\n// infix fn === (a: <T>, b: T)\n//     case (T.is::primitive && !T.is::floating_point): bool __native;\n//     default: bool = !(a <> b);\n//\n// infix fn !== (a: <T>, b: T)\n//     case (T.is::primitive && !T.is::floating_point): bool __native;\n//     default: bool = !!(a <> b);\n//\n// ----------------------------------------------------------------\n//\n// OPTION B:\n//\n//  1. Disallow the use of ==, !=, <, <=, >, >= with floating point types.\n//      This redefines them as the \"total\" equality/comparison operators.\n//\n//  2. Provide a second set of gnarlier *==, *!=, *<, *<=, *>, *>=\n//      \"partial\" equality/comparison operators. These can be used with any type.\n//\n// Now this is all good at first glance because any template code\n//  that wasn't written with floats in mind simply won't accept them.\n//\n// HOWEVER, this is actually not sufficient to drive default sort behavior,\n//  or to cleanly implement a container, etc - when you do want to totally order floats,\n//   there's nothing you can do about it, and you have to hack your way around them.\n//\n// THUS:\n//\n//  3. We need to provide a third set of operators, <> and !<>,\n//      to allow the user to explicity request total order/equality for all types.\n//\n// ----------------------------------------------------------------\n//\n// OPTION C:\n//\n//  Same as B, except we ditch [2] in favor of a warning system -\n//   whenever ==, !=, <, <=, >, >= are used with a floating point type,\n//    (probably in template code only), a warning is raised,\n//     and there is some way to suppress it locally.\n//\n// ----------------------------------------------------------------\n//\n// Tried [A] on a branch: total-eq-neq-alla-js-strict-eq-neq\n//\n// Currently investigating options [B] and [C].\n//\nfn bitrepr(v: <T>) case (T.is::floating_point)\n{\n    mut bitrepr: (T -> f32 ? u32\n                : T -> f64 ? u64\n                : assert(false));\n\n    pragma emit(`\n        union { decltype(`v`) f; decltype(`bitrepr`) u; }\n            p { `v` };\n\n        return `bitrepr` = p.u;\n    `);\n\n    return bitrepr;\n}\n\ninfix fn <> (a: <T>, b: T)\ncase (T.is::primitive)\n{\n    if (T.is::floating_point)\n        return a.bitrepr <> b.bitrepr;\n\n    return a < b ? -1 : a > b ? +1 : 0;\n}\ncase (T -> _[..]) {\n    mut cmp = a.len <> b.len;\n\n    mut quick: bool;\n    pragma emit(quick \" = a.m_data == b.m_data || cmp\");\n    if (quick)\n        return cmp;\n\n    for (mut i = 0; i < a.len && !cmp; i++)\n        cmp = a[i] <> b[i];\n\n    return cmp;\n}\ndefault {\n    lax mut cmp = 0;\n\n    // TODO this would be better if it went through each member doing the trivial work first -\n    //  only then going through them again and looking at e.g. array contents etc,\n    //   this is a first approx but does not go recursively through structs.\n\n    for (fieldname i: T)\n        if (typeof(a.i).is::trivial)\n            if ((cmp = a.i <> b.i))\n                return cmp;\n\n    for (fieldname i: T)\n        if !(typeof(a.i).is::trivial)\n            if ((cmp = a.i <> b.i))\n                return cmp;\n\n    return 0;\n}\n\ninfix fn !<> (a: <T>, b: T) !(a <> b);\n\ninfix fn == (a: <T>, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !(a <> b);\n\ninfix fn != (a: <T>, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !!(a <> b);\n\n\n// String comparisons, TODO FIX: T -> byte hack to force template.\n\ninfix fn  >(a: <T>[..], b: T[..]) case (T -> byte) = a <> b > 0;\ninfix fn  <(a: <T>[..], b: T[..]) case (T -> byte) = a <> b < 0;\ninfix fn >=(a: <T>[..], b: T[..]) case (T -> byte) = a <> b >= 0;\ninfix fn <=(a: <T>[..], b: T[..]) case (T -> byte) = a <> b <= 0;\n\n\n//\n\nfn map(ref a: <T>[..], fn)\n{\n    mut res: typeof( fn(a[0], i?: 0) )[];\n    res.grow_junk(a.len);\n    for (mut i = 0; i < a.len; i++)\n        res[i] = fn(a[i], i?: i);\n\n    return res;\n}\n\nfn each(ref a: <T>[..], fn)\n{\n    for (mut i = 0; i < a.len; i++)\n        fn(a[i], i?: i);\n}\n\nfn reverse(mut ref a: <T>[..])\n{\n    let n1 = a.len - 1;\n    let n2 = a.len >> 1;\n    for (mut i = 0; i < n2; i++)\n        a.swap(i, n1 - i);\n}\n\nfn all(a: <T>[..], pred)\n{\n    a.each: |item, i|\n        if !(pred(item, i?: i))\n            return false;\n\n    return true;\n}\n\nfn some(a: <T>[..], pred)\n{\n    a.each: |item, i|\n        if (pred(item, i?: i))\n            return true;\n\n    return false;\n}\n\n\n//\n\nfn only(ref a: <T>[..]) {\n    assert(a.len == 1);\n    return a[0];\n}\n\nfn first(ref a: <T>[..])\n    a[0];\n\nfn last(ref a: <T>[..])\n    a[a.len - 1];\n\nfn if_only(ref a: <T>[..], and!then?: <Then>, else!?) // TODO inline else!?\n    a.len == 1\n        ? Then -> [] ? a[0] : then(a[0])\n        : else();\n\nfn if_first(ref a: <T>[..], and!then?: <Then>, else!?)\n    a.len\n        ? Then -> [] ? a[0] : then(a[0])\n        : else();\n\nfn if_last(ref a: <T>[..], and!then?: <Then>, else!?)\n    a.len\n        ? Then -> [] ? a[a.len - 1] : then(a[a.len - 1])\n        : else();\n\nfn if(ref a: <T>[..], exists!i: int, and!then?: <Then>, else!?)\n    i.unsigned < a.len.unsigned\n        ? Then -> [] ? a[i] : then(a[i])\n        : else();\n\nfn ensure(ref a: <T>[], exists!i: int) {\n    if (a.len <= i)\n        a.grow(i + 1);\n\n    return a[i];\n}\n\nfn remove(ref a: <T>[..], at!: int, count = 1)\n    a.splice(at, count);\n\n\n//\n\nfn TODO_REMOVE_bootstrap() false;\n\n"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_clone_0DCJaE9X1mk
                                #define DEF_clone_0DCJaE9X1mk
inline int clone_0DCJ(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_uMDnTTVYl6b
                                #define DEF_clone_uMDnTTVYl6b
inline fu::vec_range<char> clone_uMDn(fu::vec_range<char> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Dn4nFuwICdk
                                #define DEF_clone_Dn4nFuwICdk
inline const ModuleInputs_iQIg& clone_Dn4n(const ModuleInputs_iQIg& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_MUExdLPWQjk
                                #define DEF_clone_MUExdLPWQjk
inline const ModuleOrder_HMNg& clone_MUEx(const ModuleOrder_HMNg& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_kDX3ZKQPq75
                                #define DEF_clone_kDX3ZKQPq75
inline fu::vec_range<Struct_LDkB> clone_kDX3(fu::vec_range<Struct_LDkB> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_K5wqRshSeyc
                                #define DEF_clone_K5wqRshSeyc
inline const SolvedNode_efhg& clone_K5wq(const SolvedNode_efhg& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_yFK5IMVVYsd
                                #define DEF_clone_yFK5IMVVYsd
inline fu::vec_range<Overload_aO3i> clone_yFK5(fu::vec_range<Overload_aO3i> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Hve56IQ9Koe
                                #define DEF_clone_Hve56IQ9Koe
inline fu::vec_range<Extended_z0HS> clone_Hve5(fu::vec_range<Extended_z0HS> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TlnptrLsoD5
                                #define DEF_clone_TlnptrLsoD5
inline fu::vec_range<ScopeItem_xiLD> clone_Tlnp(fu::vec_range<ScopeItem_xiLD> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_vOithUrpyg9
                                #define DEF_clone_vOithUrpyg9
inline fu::vec_range<int> clone_vOit(fu::vec_range<int> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TOxEGXuxaQb
                                #define DEF_clone_TOxEGXuxaQb
inline fu::vec_range<Target_VZrr> clone_TOxE(fu::vec_range<Target_VZrr> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_uCp01zVNwe0
                                #define DEF_clone_uCp01zVNwe0
inline Scope_blWT clone_uCp0(const Scope_blWT& a)
{
    /*MOV*/ Scope_blWT res {};

    {
        res.overloads = clone_yFK5(a.overloads);
        res.extended = clone_Hve5(a.extended);
        res.items = clone_Tlnp(a.items);
        res.implicits = clone_Tlnp(a.implicits);
        res.globals = clone_Tlnp(a.globals);
        res.imports = clone_vOit(a.imports);
        res.privates = clone_vOit(a.privates);
        res.usings = clone_TOxE(a.usings);
        res.converts = clone_TOxE(a.converts);
        res.pub_items = clone_0DCJ(a.pub_items);
        res.pub_implicits = clone_0DCJ(a.pub_implicits);
        res.pub_globals = clone_0DCJ(a.pub_globals);
        res.pub_converts = clone_0DCJ(a.pub_converts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_rBdCjCJnRj2
                                #define DEF_clone_rBdCjCJnRj2
inline SolverNotes_LSla clone_rBdC(const SolverNotes_LSla a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_MA8Gu6QKyYi
                                #define DEF_clone_MA8Gu6QKyYi
inline SolverOutput_hA3T clone_MA8G(const SolverOutput_hA3T& a)
{
    /*MOV*/ SolverOutput_hA3T res {};

    {
        res.root = clone_K5wq(a.root);
        res.scope = clone_uCp0(a.scope);
        res.notes = clone_rBdC(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_wlt8QHHLT82
                                #define DEF_clone_wlt8QHHLT82
inline const CodegenOutput_qIMB& clone_wlt8(const CodegenOutput_qIMB& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_MXGWDSdEcEd
                                #define DEF_clone_MXGWDSdEcEd
inline ModuleOutputs_WMGM clone_MXGW(const ModuleOutputs_WMGM& a)
{
    /*MOV*/ ModuleOutputs_WMGM res {};

    {
        res.types = clone_kDX3(a.types);
        res.solve = clone_MA8G(a.solve);
        res.cpp = clone_wlt8(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_TrP21vTaZk5
                                #define DEF_clone_TrP21vTaZk5
inline const ModuleStats_ANTR& clone_TrP2(const ModuleStats_ANTR& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_AoTUhjx4m8e
                                #define DEF_clone_AoTUhjx4m8e
inline const Profile_4UPJ& clone_AoTU(const Profile_4UPJ& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_bLLKLGOHZGg
                                #define DEF_clone_bLLKLGOHZGg
inline Module_wo7O clone_bLLK(const Module_wo7O& a)
{
    /*MOV*/ Module_wo7O res {};

    {
        res.modid = clone_0DCJ(a.modid);
        res.fname = clone_uMDn(a.fname);
        res.in = clone_Dn4n(a.in);
        res.order = clone_MUEx(a.order);
        res.out = clone_MXGW(a.out);
        res.stats = clone_TrP2(a.stats);
        res.profile = clone_AoTU(a.profile);
    };
    return /*NRVO*/ res;
}
                                #endif

static const fu::static_ref<fu::str> PRELUDE_SRC fu_INIT_PRIORITY(1012) = str_bbacQcmd2r4;

extern const fu::str FU_ROOT;
Context_noPA solvePrelude_U0my()
{
    const fu::str& fname = str_nJyHUaSopRe;
    /*MOV*/ Context_noPA ctx {};
    Module_wo7O module = clone_bLLK(getModule_1qjp(fname, ctx));
    const Options_TBgD options {};
    /*MOV*/ LexerOutput_DN4p lex = lex_pnA5(PRELUDE_SRC.ref, fname);
    /*MOV*/ ParserOutput_d14k parse = parse_qFIn(0, fname, PRELUDE_SRC.ref, lex.tokens, options);
    module.in = ModuleInputs_iQIg { fu::str(PRELUDE_SRC.ref), static_cast<LexerOutput_DN4p&&>(lex), static_cast<ParserOutput_d14k&&>(parse) };
    setModule_1qjp(module, ctx);
    module.out.solve = solve_gDsn(ctx, module, options);
    setModule_1qjp(module, ctx);
    ctx.fudir = FU_ROOT;
    return /*NRVO*/ ctx;
}

extern const Context_noPA CTX_PRELUDE fu_INIT_PRIORITY(1012) = solvePrelude_U0my();
#endif
