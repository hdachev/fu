#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec_range.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct Context_UXD9;
struct Module_qqBh;
struct ModuleInputs_1DFx;
struct LexerOutput_VDDl;
struct Token_RpL8;
enum Kind_Idfg: fu::u8;
struct LineColChars_03II;
struct ParserOutput_oNgu;
struct Node_Wr1X;
typedef uint16_t DeclAsserts_taUG;
typedef fu::u8 ParseSyntax_Lay2;
typedef unsigned Flags_Lzg8;
struct TokenIdx_5b85;
struct Import_jcWj;
struct ModuleOrder_HMNg;
struct ModuleOutputs_wJzJ;
struct Struct_5VgD;
struct Target_VZrr;
struct ScopeItem_ydOE;
struct Set_qOJY;
struct Shape_aOyF;
struct SolverOutput_FnNg;
struct SolvedNode_owql;
struct Helpers_DyqV;
struct Type_KBIB;
struct ValueType_B8uC;
typedef fu::u8 VFacts_xhRf;
struct Lifetime_llCF;
struct Scope_bN0w;
struct Overload_OYmb;
typedef uint16_t SolverStatus_h9em;
struct Extended_Ebxv;
struct Argument_HFkq;
struct BitSet_mmp7;
struct COWInside_2Z4D;
typedef unsigned MayEscapeVia_5nki;
typedef fu::u8 ExitPaths_UXHs;
struct Template_1cFh;
struct TEA_87LR;
typedef uint16_t FxMask_2dRz;
typedef int SolverNotes_LSla;
struct CodegenOutput_OFce;
struct Set_XshD;
typedef fu::u8 CGDefects_2L18;
struct ModuleStats_zo42;
struct ModuleStat_6soj;
struct Profile_zroC;
struct Sample_Time_cblj;
struct Map_4s6T;
struct Options_mg7V;
struct Lint_Q9R1;
typedef fu::u8 DevOptions_QEya;
struct ModidAndOrder_VsB0;
struct Result_mtbD;
struct TestOutput_TzQt;
typedef fu::u8 DEV_OnFail_3YLB;
Module_qqBh& getModule_1qjp(fu::vec_range<char>, Context_UXD9&);
fu::str FAIL_text_u9Gb(const TokenIdx_5b85&, fu::view<char>, const Context_UXD9&);
fu::str getFile_1qjp(fu::vec_range<char>, Context_UXD9&);
fu::str qBAD_e44U(fu::view<char>);
[[noreturn]] fu::never FAIL_u9Gb(fu::view<char>, const TokenIdx_5b85&, const Context_UXD9&);
ModuleStat_6soj ModuleStat_now_aKPw();
LexerOutput_VDDl lex_pnA5(fu::vec_range<char>, fu::vec_range<char>);
ParserOutput_oNgu parse_qFIn(int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_RpL8>, const Options_mg7V&);
ModuleStat_6soj operator-(const ModuleStat_6soj&, const ModuleStat_6soj&);
void setModule_1qjp(const Module_qqBh&, Context_UXD9&);
fu::vec_range<char> dirname_qZI0(fu::vec_range<char>);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
fu::str resolveFile_SqDq(fu::vec_range<char>, Context_UXD9&);
static ModidAndOrder_VsB0 compile_lexParseDeps_Tsi8(fu::vec_range<char>, fu::vec_range<TokenIdx_5b85>, Context_UXD9&, const Options_mg7V&);
SolverOutput_FnNg solve_gDsn(const Context_UXD9&, Module_qqBh&, const Options_mg7V&);
fu::str inspect_wkVO(const Module_qqBh&);
CodegenOutput_OFce cpp_codegen_i4S3(const Module_qqBh&, const Context_UXD9&, const Options_mg7V&);
double hr_0pZh();
void operator+=(ModuleStat_6soj&, const ModuleStat_6soj&);
void ModuleStat_print_aKPw(const ModuleStat_6soj&, fu::vec_range<char>, fu::view<char>);
TestOutput_TzQt build_uGHE(fu::str&&, fu::view<char>, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, fu::view<char>, DEV_OnFail_3YLB, bool, bool, bool, bool, fu::view<fu::str>, fu::view<fu::str>, const Context_UXD9&);

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
    Kind_Idfg___no_kind_yet = 57u,
    Kind_Idfg___tombstone = 58u,
    Kind_Idfg_type = 59u,
    Kind_Idfg_var = 60u,
    Kind_Idfg_field = 61u,
    Kind_Idfg_enumv = 62u,
    Kind_Idfg_template = 63u,
    Kind_Idfg___native = 64u,
    Kind_Idfg_inline = 65u,
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

inline constexpr ParseSyntax_Lay2 MASK_ParseSyntax_Lay2
    = ParseSyntax_Lay2_PS_PARENS
    | ParseSyntax_Lay2_PS_DISCARD_IF_BLOCK_TAIL
    | ParseSyntax_Lay2_PS_ALWAYS_DISCARD
    | ParseSyntax_Lay2_PS_NOT_AN_EXPRESSION;
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
inline constexpr Flags_Lzg8 Flags_Lzg8_F_WRITTEN_TO = 1024u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_MUT = 2048u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_CONST = 4096u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_VAL = 8192u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_REF = 16384u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_IMPLICIT = 32768u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_USING = 65536u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_CONVERSION = 131072u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_TEST_painted = 262144u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_PUB = 524288u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_EXTERN = 1048576u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_HOTSWAP = 2097152u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_PREDICATE = 4194304u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_LT_RETURNED = 8388608u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_REST_ARG = 16777216u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_INJECTED = 33554432u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_TEMPLATE = 67108864u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_INLINE = 134217728u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_LAMBDA = 268435456u;
inline constexpr Flags_Lzg8 Flags_Lzg8_F_COW_INSIDE = 536870912u;

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
    | Flags_Lzg8_F_WRITTEN_TO
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

                                #ifndef DEF_TEA_87LRqzeMoI3
                                #define DEF_TEA_87LRqzeMoI3
struct TEA_87LR
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

                                #ifndef DEF_ScopeItem_ydOEnUwGFm9
                                #define DEF_ScopeItem_ydOEnUwGFm9
struct ScopeItem_ydOE
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

                                #ifndef DEF_LexerOutput_VDDlFbkjeT7
                                #define DEF_LexerOutput_VDDlFbkjeT7
struct LexerOutput_VDDl
{
    fu::vec<Token_RpL8> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_TokenIdx_5b85kf1B4eb
                                #define DEF_TokenIdx_5b85kf1B4eb
struct TokenIdx_5b85
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

                                #ifndef DEF_LineColChars_03IIie77ad3
                                #define DEF_LineColChars_03IIie77ad3
struct LineColChars_03II
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

                                #ifndef DEF_ValueType_B8uCkrFbhH5
                                #define DEF_ValueType_B8uCkrFbhH5
struct ValueType_B8uC
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

                                #ifndef DEF_ModuleStat_6sojRyzHDma
                                #define DEF_ModuleStat_6sojRyzHDma
struct ModuleStat_6soj
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

                                #ifndef DEF_Shape_aOyFxjH0sYj
                                #define DEF_Shape_aOyFxjH0sYj
struct Shape_aOyF
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

                                #ifndef DEF_Scope_bN0wB0bie31
                                #define DEF_Scope_bN0wB0bie31
struct Scope_bN0w
{
    fu::vec<Overload_OYmb> overloads;
    fu::vec<Extended_Ebxv> extended;
    fu::vec<ScopeItem_ydOE> items;
    fu::vec<ScopeItem_ydOE> implicits;
    fu::vec<ScopeItem_ydOE> globals;
    fu::vec<int> imports;
    fu::vec<int> privates;
    fu::vec<Target_VZrr> usings;
    fu::vec<Target_VZrr> converts;
    int pub_items;
    int pub_implicits;
    int pub_globals;
    int pub_converts;
    Scope_bN0w(const Scope_bN0w&) = delete;
    Scope_bN0w(Scope_bN0w&&) = default;
    Scope_bN0w& operator=(const Scope_bN0w&) = delete;
    Scope_bN0w& operator=(Scope_bN0w&&) = default;
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

                                #ifndef DEF_Profile_zroCYrctPoa
                                #define DEF_Profile_zroCYrctPoa
struct Profile_zroC
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

                                #ifndef DEF_Map_4s6TdIiM4gd
                                #define DEF_Map_4s6TdIiM4gd
struct Map_4s6T
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

                                #ifndef DEF_Token_RpL8tz7XMX0
                                #define DEF_Token_RpL8tz7XMX0
struct Token_RpL8
{
    Kind_Idfg kind;
    LineColChars_03II lcc;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_Type_KBIBAQNxKdi
                                #define DEF_Type_KBIBAQNxKdi
struct Type_KBIB
{
    ValueType_B8uC vtype;
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

                                #ifndef DEF_Import_jcWj5jfyCbh
                                #define DEF_Import_jcWj5jfyCbh
struct Import_jcWj
{
    TokenIdx_5b85 token;
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

                                #ifndef DEF_ModuleStats_zo42yWR5Sz7
                                #define DEF_ModuleStats_zo42yWR5Sz7
struct ModuleStats_zo42
{
    ModuleStat_6soj lex;
    ModuleStat_6soj parse;
    ModuleStat_6soj solve;
    ModuleStat_6soj codegen;
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

                                #ifndef DEF_Struct_5VgDIbV9CPf
                                #define DEF_Struct_5VgDIbV9CPf
struct Struct_5VgD
{
    Kind_Idfg kind;
    fu::str name;
    Target_VZrr target;
    fu::vec<ScopeItem_ydOE> items;
    fu::vec<ScopeItem_ydOE> implicits;
    Set_qOJY imports;
    fu::vec<Target_VZrr> converts;
    Shape_aOyF shape;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_COWInside_2Z4DPB5kLr4
                                #define DEF_COWInside_2Z4DPB5kLr4
struct COWInside_2Z4D
{
    ValueType_B8uC vtype;
    TokenIdx_5b85 token;
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

                                #ifndef DEF_CodegenOutput_OFceMf04noa
                                #define DEF_CodegenOutput_OFceMf04noa
struct CodegenOutput_OFce
{
    fu::str src;
    Set_XshD link;
    Set_XshD extra_sources;
    Set_XshD includes_headers;
    Set_XshD include_dirs;
    fu::vec<int> live;
    CGDefects_2L18 defects;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || extra_sources
            || includes_headers
            || include_dirs
            || live
            || defects
        ;
    }
};
                                #endif

                                #ifndef DEF_Node_Wr1XN7BRTn1
                                #define DEF_Node_Wr1XN7BRTn1
struct Node_Wr1X
{
    Kind_Idfg kind;
    DeclAsserts_taUG asserts;
    ParseSyntax_Lay2 syntax;
    Flags_Lzg8 flags;
    fu::str value;
    fu::vec<Node_Wr1X> items;
    TokenIdx_5b85 token;
    Node_Wr1X(const Node_Wr1X&) = default;
    Node_Wr1X(Node_Wr1X&&) = default;
    Node_Wr1X& operator=(Node_Wr1X&&) = default;
    Node_Wr1X& operator=(const Node_Wr1X& selfrec) { return *this = Node_Wr1X(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_Template_1cFh7XoXDYc
                                #define DEF_Template_1cFh7XoXDYc
struct Template_1cFh
{
    Node_Wr1X node;
    fu::vec<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
        ;
    }
};
                                #endif

                                #ifndef DEF_ParserOutput_oNgu6PpUXWb
                                #define DEF_ParserOutput_oNgu6PpUXWb
struct ParserOutput_oNgu
{
    Node_Wr1X root;
    fu::vec<Import_jcWj> imports;
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

                                #ifndef DEF_Context_UXD9wQGQXT5
                                #define DEF_Context_UXD9wQGQXT5
struct Context_UXD9
{
    fu::str fudir;
    fu::str base_dir;
    fu::vec<Module_qqBh> modules;
    fu::vec<int> dep_order;
    Map_4s6T files;
    Map_4s6T fuzzy;
    Context_UXD9(const Context_UXD9&) = delete;
    Context_UXD9(Context_UXD9&&) = default;
    Context_UXD9& operator=(const Context_UXD9&) = delete;
    Context_UXD9& operator=(Context_UXD9&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || fudir
            || base_dir
            || modules
            || dep_order
            || files
            || fuzzy
        ;
    }
};
                                #endif

                                #ifndef DEF_SolvedNode_owqlcZ14neg
                                #define DEF_SolvedNode_owqlcZ14neg
struct SolvedNode_owql
{
    Kind_Idfg kind;
    Helpers_DyqV helpers;
    Flags_Lzg8 flags;
    int _loop_start;
    fu::str value;
    fu::vec<SolvedNode_owql> items;
    TokenIdx_5b85 token;
    Type_KBIB type;
    Target_VZrr target;
    SolvedNode_owql(const SolvedNode_owql&) = default;
    SolvedNode_owql(SolvedNode_owql&&) = default;
    SolvedNode_owql& operator=(SolvedNode_owql&&) = default;
    SolvedNode_owql& operator=(const SolvedNode_owql& selfrec) { return *this = SolvedNode_owql(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_ModuleInputs_1DFxH6zi2ic
                                #define DEF_ModuleInputs_1DFxH6zi2ic
struct ModuleInputs_1DFx
{
    fu::str src;
    LexerOutput_VDDl lex;
    ParserOutput_oNgu parse;
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

                                #ifndef DEF_Overload_OYmbI2gRgOj
                                #define DEF_Overload_OYmbI2gRgOj
struct Overload_OYmb
{
    Kind_Idfg kind;
    Flags_Lzg8 flags;
    SolverStatus_h9em status;
    fu::str name;
    Type_KBIB type;
    SolvedNode_owql solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_Extended_EbxvU56XnN6
                                #define DEF_Extended_EbxvU56XnN6
struct Extended_Ebxv
{
    int min;
    int max;
    fu::vec<Argument_HFkq> args;
    fu::vec<COWInside_2Z4D> cows_inside;
    Target_VZrr spec_of;
    Template_1cFh tEmplate;
    fu::vec<Overload_OYmb> args_n_locals;
    TEA_87LR sighash;
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

                                #ifndef DEF_Argument_HFkqHKf0jo7
                                #define DEF_Argument_HFkqHKf0jo7
struct Argument_HFkq
{
    fu::str name;
    fu::str autocall;
    Type_KBIB type;
    SolvedNode_owql dEfault;
    Flags_Lzg8 flags;
    Target_VZrr target;
    BitSet_mmp7 may_invalidate;
    BitSet_mmp7 may_alias;
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

                                #ifndef DEF_SolverOutput_FnNg0g9pDh2
                                #define DEF_SolverOutput_FnNg0g9pDh2
struct SolverOutput_FnNg
{
    SolvedNode_owql root;
    Scope_bN0w scope;
    SolverNotes_LSla notes;
    SolverOutput_FnNg(const SolverOutput_FnNg&) = delete;
    SolverOutput_FnNg(SolverOutput_FnNg&&) = default;
    SolverOutput_FnNg& operator=(const SolverOutput_FnNg&) = delete;
    SolverOutput_FnNg& operator=(SolverOutput_FnNg&&) = default;
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

                                #ifndef DEF_ModuleOutputs_wJzJlJKhdDi
                                #define DEF_ModuleOutputs_wJzJlJKhdDi
struct ModuleOutputs_wJzJ
{
    fu::vec<Struct_5VgD> types;
    SolverOutput_FnNg solve;
    CodegenOutput_OFce cpp;
    ModuleOutputs_wJzJ(const ModuleOutputs_wJzJ&) = delete;
    ModuleOutputs_wJzJ(ModuleOutputs_wJzJ&&) = default;
    ModuleOutputs_wJzJ& operator=(const ModuleOutputs_wJzJ&) = delete;
    ModuleOutputs_wJzJ& operator=(ModuleOutputs_wJzJ&&) = default;
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

                                #ifndef DEF_Module_qqBh0BoNExk
                                #define DEF_Module_qqBh0BoNExk
struct Module_qqBh
{
    int modid;
    fu::str fname;
    ModuleInputs_1DFx in;
    ModuleOrder_HMNg order;
    ModuleOutputs_wJzJ out;
    ModuleStats_zo42 stats;
    Profile_zroC profile;
    Module_qqBh(const Module_qqBh&) = delete;
    Module_qqBh(Module_qqBh&&) = default;
    Module_qqBh& operator=(const Module_qqBh&) = delete;
    Module_qqBh& operator=(Module_qqBh&&) = default;
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
inline constexpr DevOptions_QEya DevOptions_QEya_DEV_CG_LifetimeAnnots = DevOptions_QEya(32u);

inline constexpr DevOptions_QEya MASK_DevOptions_QEya
    = DevOptions_QEya_DEV_Print
    | DevOptions_QEya_DEV_Parallel
    | DevOptions_QEya_DEV_ExpectFail
    | DevOptions_QEya_DEV_HappyPathOnly
    | DevOptions_QEya_DEV_DontFoldLiterals
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

                                #ifndef DEF_Options_mg7VY0HPRL2
                                #define DEF_Options_mg7VY0HPRL2
struct Options_mg7V
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

                                #ifndef DEF_ModidAndOrder_VsB0IjiXC51
                                #define DEF_ModidAndOrder_VsB0IjiXC51
struct ModidAndOrder_VsB0
{
    int modid;
    ModuleOrder_HMNg order;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || order
        ;
    }
};
                                #endif

                                #ifndef DEF_Result_mtbDc6jHfEl
                                #define DEF_Result_mtbDc6jHfEl
struct Result_mtbD
{
    Module_qqBh module;
    fu::str error;
    Result_mtbD(const Result_mtbD&) = delete;
    Result_mtbD(Result_mtbD&&) = default;
    Result_mtbD& operator=(const Result_mtbD&) = delete;
    Result_mtbD& operator=(Result_mtbD&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || module
            || error
        ;
    }
};
                                #endif

                                #ifndef DEF_TestOutput_TzQtJLdSPmj
                                #define DEF_TestOutput_TzQtJLdSPmj
struct TestOutput_TzQt
{
    int code;
    int uniq_bytes;
    int uniq_count;
    int arc_bytes;
    int arc_count;
    explicit operator bool() const noexcept
    {
        return false
            || code
            || uniq_bytes
            || uniq_count
            || arc_bytes
            || arc_count
        ;
    }
};
                                #endif

                                #ifndef DEF_DEV_OnFail_3YLB
                                #define DEF_DEV_OnFail_3YLB
inline constexpr DEV_OnFail_3YLB DEV_OnFail_3YLB_OnFail_PrintInput = DEV_OnFail_3YLB(1u);
inline constexpr DEV_OnFail_3YLB DEV_OnFail_3YLB_OnFail_PrintOutput = DEV_OnFail_3YLB(2u);
inline constexpr DEV_OnFail_3YLB DEV_OnFail_3YLB_OnFail_WriteRepro = DEV_OnFail_3YLB(4u);

inline constexpr DEV_OnFail_3YLB MASK_DEV_OnFail_3YLB
    = DEV_OnFail_3YLB_OnFail_PrintInput
    | DEV_OnFail_3YLB_OnFail_PrintOutput
    | DEV_OnFail_3YLB_OnFail_WriteRepro;
                                #endif

                                #ifndef STR_uHjQGYgB6y3
                                #define STR_uHjQGYgB6y3
static const fu::str str_uHjQGYgB6y3 fu_INIT_PRIORITY(1013) { "BUG: !!module.out"_fu };
                                #endif

                                #ifndef STR_nakXNEHa0Lb
                                #define STR_nakXNEHa0Lb
static const fu::str str_nakXNEHa0Lb fu_INIT_PRIORITY(1013) { "Could not resolve this import."_fu };
                                #endif

                                #ifndef STR_vizsH9xxiE2
                                #define STR_vizsH9xxiE2
static const fu::str str_vizsH9xxiE2 fu_INIT_PRIORITY(1013) { "BUG: !module.modid after lexParseDeps"_fu };
                                #endif

                                #ifndef STR_uDrQUMcSBVl
                                #define STR_uDrQUMcSBVl
static const fu::str str_uDrQUMcSBVl fu_INIT_PRIORITY(1013) { "BUG: !!module.order"_fu };
                                #endif

                                #ifndef STR_DczkQEiOPqg
                                #define STR_DczkQEiOPqg
static const fu::str str_DczkQEiOPqg fu_INIT_PRIORITY(1013) { "BUG: !module.order after lexParseDeps."_fu };
                                #endif

                                #ifndef STR_643vObDScH7
                                #define STR_643vObDScH7
static const fu::str str_643vObDScH7 fu_INIT_PRIORITY(1013) { "compile_solveCodegen: !!module.out"_fu };
                                #endif

                                #ifndef STR_qklLkR1yLu4
                                #define STR_qklLkR1yLu4
static const fu::str str_qklLkR1yLu4 fu_INIT_PRIORITY(1013) { "COMPILE "_fu };
                                #endif

                                #ifndef STR_o9tkHEw4bK4
                                #define STR_o9tkHEw4bK4
static const fu::str str_o9tkHEw4bK4 fu_INIT_PRIORITY(1013) { "\n    lex "_fu };
                                #endif

                                #ifndef STR_tfwrmVrW5Tj
                                #define STR_tfwrmVrW5Tj
static const fu::str str_tfwrmVrW5Tj fu_INIT_PRIORITY(1013) { "  parse "_fu };
                                #endif

                                #ifndef STR_3qFvWYzwNvj
                                #define STR_3qFvWYzwNvj
static const fu::str str_3qFvWYzwNvj fu_INIT_PRIORITY(1013) { "  solve "_fu };
                                #endif

                                #ifndef STR_KogfiHpSLlh
                                #define STR_KogfiHpSLlh
static const fu::str str_KogfiHpSLlh fu_INIT_PRIORITY(1013) { "codegen "_fu };
                                #endif

                                #ifndef STR_YeNWBMVKG82
                                #define STR_YeNWBMVKG82
static const fu::str str_YeNWBMVKG82 fu_INIT_PRIORITY(1013) { "        ---------"_fu };
                                #endif

                                #ifndef STR_49Vgx7sroDk
                                #define STR_49Vgx7sroDk
static const fu::str str_49Vgx7sroDk fu_INIT_PRIORITY(1013) { "        "_fu };
                                #endif

                                #ifndef STR_7xwemduDY70
                                #define STR_7xwemduDY70
static const fu::str str_7xwemduDY70 fu_INIT_PRIORITY(1013) { "s\n"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF___tk6Hvxnpeof
                                #define DEF___tk6Hvxnpeof
inline static fu::view<char> _tk6H(const TokenIdx_5b85& token, const int i, fu::view<TokenIdx_5b85> via, fu::str& error, const Context_UXD9& ctx)
{
    return (error += FAIL_text_u9Gb(token, ((i == (via.size() - 1)) ? "Resulting in an import circle, not currently supported."_view : "Imports:\n"_view), ctx));
}
                                #endif

                                #ifndef DEF_each_5bvdSrw1Sbf
                                #define DEF_each_5bvdSrw1Sbf
inline void each_5bvd(fu::vec_range<TokenIdx_5b85> a, fu::view<TokenIdx_5b85> via, fu::str& error, const Context_UXD9& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _tk6H(a[i], i, via, error, ctx);

}
                                #endif

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

                                #ifndef DEF_clone_7YYqtaiJ4Zk
                                #define DEF_clone_7YYqtaiJ4Zk
inline const ModuleInputs_1DFx& clone_7YYq(const ModuleInputs_1DFx& a)
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

                                #ifndef DEF_clone_BsNWVGin4x6
                                #define DEF_clone_BsNWVGin4x6
inline fu::vec_range<Struct_5VgD> clone_BsNW(fu::vec_range<Struct_5VgD> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_t609MH838s0
                                #define DEF_clone_t609MH838s0
inline const SolvedNode_owql& clone_t609(const SolvedNode_owql& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_uj62cjgRzGj
                                #define DEF_clone_uj62cjgRzGj
inline fu::vec_range<Overload_OYmb> clone_uj62(fu::vec_range<Overload_OYmb> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_xFonaToCH32
                                #define DEF_clone_xFonaToCH32
inline fu::vec_range<Extended_Ebxv> clone_xFon(fu::vec_range<Extended_Ebxv> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_yeCUMU5be3j
                                #define DEF_clone_yeCUMU5be3j
inline fu::vec_range<ScopeItem_ydOE> clone_yeCU(fu::vec_range<ScopeItem_ydOE> a)
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

                                #ifndef DEF_clone_KeUgRhJcfhk
                                #define DEF_clone_KeUgRhJcfhk
inline Scope_bN0w clone_KeUg(const Scope_bN0w& a)
{
    /*MOV*/ Scope_bN0w res {};

    {
        res.overloads = clone_uj62(a.overloads);
        res.extended = clone_xFon(a.extended);
        res.items = clone_yeCU(a.items);
        res.implicits = clone_yeCU(a.implicits);
        res.globals = clone_yeCU(a.globals);
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

                                #ifndef DEF_clone_WffmgIWvcY0
                                #define DEF_clone_WffmgIWvcY0
inline SolverOutput_FnNg clone_Wffm(const SolverOutput_FnNg& a)
{
    /*MOV*/ SolverOutput_FnNg res {};

    {
        res.root = clone_t609(a.root);
        res.scope = clone_KeUg(a.scope);
        res.notes = clone_rBdC(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_zo2WPhP1slk
                                #define DEF_clone_zo2WPhP1slk
inline const CodegenOutput_OFce& clone_zo2W(const CodegenOutput_OFce& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_u1LxMP8msxg
                                #define DEF_clone_u1LxMP8msxg
inline ModuleOutputs_wJzJ clone_u1Lx(const ModuleOutputs_wJzJ& a)
{
    /*MOV*/ ModuleOutputs_wJzJ res {};

    {
        res.types = clone_BsNW(a.types);
        res.solve = clone_Wffm(a.solve);
        res.cpp = clone_zo2W(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_Zjp7yDqsqVi
                                #define DEF_clone_Zjp7yDqsqVi
inline const ModuleStats_zo42& clone_Zjp7(const ModuleStats_zo42& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_N0uBVqf7kw9
                                #define DEF_clone_N0uBVqf7kw9
inline const Profile_zroC& clone_N0uB(const Profile_zroC& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ReSiZ8UK6s1
                                #define DEF_clone_ReSiZ8UK6s1
inline Module_qqBh clone_ReSi(const Module_qqBh& a)
{
    /*MOV*/ Module_qqBh res {};

    {
        res.modid = clone_0DCJ(a.modid);
        res.fname = clone_uMDn(a.fname);
        res.in = clone_7YYq(a.in);
        res.order = clone_MUEx(a.order);
        res.out = clone_u1Lx(a.out);
        res.stats = clone_Zjp7(a.stats);
        res.profile = clone_N0uB(a.profile);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_if_last_ScZzaxkPr0j
                                #define DEF_if_last_ScZzaxkPr0j
inline const TokenIdx_5b85& if_last_ScZz(fu::view<TokenIdx_5b85> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(TokenIdx_5b85*)fu::NIL);

}
                                #endif

                                #ifndef DEF_find_ZKsG2FXrtpg
                                #define DEF_find_ZKsG2FXrtpg
inline int find_ZKsG(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_steal_MclgZ4ElCZ4
                                #define DEF_steal_MclgZ4ElCZ4
inline fu::vec<Import_jcWj> steal_Mclg(fu::vec_range_mut<Import_jcWj> v)
{
    /*MOV*/ fu::vec<Import_jcWj> ret {};
    v.swap(ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_x3Cx3E_odNTdyipeEj
                                #define DEF_x3Cx3E_odNTdyipeEj
inline int x3Cx3E_odNT(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YuqOPxIKAE3
                                #define DEF_x3Cx3E_YuqOPxIKAE3
inline int x3Cx3E_YuqO(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_erT9abBVjC1
                                #define DEF_x3Cx3E_erT9abBVjC1
inline int x3Cx3E_erT9(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_odNT(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_YuqO(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_xqw8ga5OCp4
                                #define DEF_x3Dx3D_xqw8ga5OCp4
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_erT9(a, b);
}
                                #endif

                                #ifndef DEF_starts_e85pmfesWad
                                #define DEF_starts_e85pmfesWad
inline bool starts_e85p(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF___RctBqcOqiH1
                                #define DEF___RctBqcOqiH1
inline static void _RctB(Import_jcWj& import, fu::view<TokenIdx_5b85> via, fu::view<char> dir, Context_UXD9& ctx, Module_qqBh& module, const Options_mg7V& options)
{
    const fu::str& pattern = import.pattern;
    fu::str pattern_1 = (starts_e85p(pattern, "."_view) ? join_qZI0(dir, pattern) : ((dir + '\v') + pattern));
    fu::str _0 {};
    const ModidAndOrder_VsB0 other = (_0 = resolveFile_SqDq(pattern_1, ctx), compile_lexParseDeps_Tsi8(static_cast<fu::str&&>(_0), (via + import.token), ctx, options));
    import.modid = (other.modid ? other.modid : fu::fail(fu::str(str_vizsH9xxiE2)));
    if ((module.order.dep_depth <= other.order.dep_depth))
        module.order.dep_depth = (other.order.dep_depth + 1);

}
                                #endif

                                #ifndef DEF_each_heeJbMPYXE6
                                #define DEF_each_heeJbMPYXE6
inline void each_heeJ(fu::view_mut<Import_jcWj> a, fu::view<TokenIdx_5b85> via, fu::view<char> dir, Context_UXD9& ctx, Module_qqBh& module, const Options_mg7V& options)
{
    for (int i = 0; i < a.size(); i++)
    {
        Import_jcWj* _0;
        (_0 = &(a.mutref(i)), _RctB(*_0, via, dir, ctx, module, options));
    };
}
                                #endif

static ModidAndOrder_VsB0 compile_lexParseDeps_Tsi8(fu::vec_range<char> fname, fu::vec_range<TokenIdx_5b85> via, Context_UXD9& ctx, const Options_mg7V& options)
{
    const Module_qqBh& module = getModule_1qjp(fname, ctx);
    if (module.in)
    {
        if (module.order)
        {
            return ModidAndOrder_VsB0 { module.modid, ModuleOrder_HMNg(module.order) };
        }
        else
        {
            /*MOV*/ fu::str error {};
            each_5bvd(via, via, error, ctx);
            fu::fail(static_cast<fu::str&&>(error));
        };
    }
    else
    {
        Module_qqBh module_1 = clone_ReSi(module);
        if (module_1.out)
            fu::fail(fu::str(str_uHjQGYgB6y3));
        else
        {
            /*MOV*/ fu::str src = getFile_1qjp(fname, ctx);
            if (!src)
            {
                const TokenIdx_5b85& token = if_last_ScZz(via);
                if (token)
                {
                    fu::str err = fu::str(str_nakXNEHa0Lb);
                    const int dirEnd = find_ZKsG(fname, '\v');
                    if (dirEnd > 0)
                    {
                        err += ("\n\n\tSearched relative to:    \t"_view + qBAD_e44U(fu::get_view(fname, 0, dirEnd)));
                        err += ("\n\tLooking for a file named:\t"_view + qBAD_e44U(fu::get_view(fname, (dirEnd + 1))));
                    };
                    FAIL_u9Gb(err, token, ctx);
                }
                else
                    fu::fail((("Could not load "_view + qBAD_e44U(fname)) + ": file does not exist or is empty."_view));

            }
            else
            {
                const ModuleStat_6soj stat0 = ModuleStat_now_aKPw();
                /*MOV*/ LexerOutput_VDDl lexer_result = lex_pnA5(src, fname);
                const ModuleStat_6soj stat1 = ModuleStat_now_aKPw();
                /*MOV*/ ParserOutput_oNgu parser_result = parse_qFIn(module_1.modid, fname, src, lexer_result.tokens, options);
                const ModuleStat_6soj stat2 = ModuleStat_now_aKPw();
                module_1.in = ModuleInputs_1DFx { src.destructive_move(), static_cast<LexerOutput_VDDl&&>(lexer_result), static_cast<ParserOutput_oNgu&&>(parser_result) };
                module_1.stats.lex = (stat1 - stat0);
                module_1.stats.parse = (stat2 - stat1);
                setModule_1qjp(module_1, ctx);
                if (!module_1.order)
                {
                    module_1.order.dep_depth = 1;
                    fu::view<char> dir = dirname_qZI0(fname);
                    fu::vec<Import_jcWj> imports = steal_Mclg(module_1.in.parse.imports);
                    each_heeJ(imports, via, dir, ctx, module_1, options);
                    module_1.in.parse.imports.swap(imports);
                    setModule_1qjp(module_1, ctx);
                }
                else
                    fu::fail(fu::str(str_uDrQUMcSBVl));

                return ModidAndOrder_VsB0 { module_1.modid, ModuleOrder_HMNg((module_1.order ? module_1.order : fu::fail(fu::str(str_DczkQEiOPqg)))) };
            };
        };
    };
}

                                #ifndef DEF_ensure_M6xMQRQo4ia
                                #define DEF_ensure_M6xMQRQo4ia
inline fu::vec_range_mut<int> ensure_M6xM(fu::vec_range_mut<fu::vec<int>> a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_join_Kp9JyHcT41i
                                #define DEF_join_Kp9JyHcT41i
inline fu::vec<int> join_Kp9J(fu::view<fu::vec<int>> a)
{
    if (a.size() < 2)
    {
        if (a.size())
            return fu::vec<int>(a[0]);
        else
        {
            return fu::vec<int>{};
        };
    }
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::vec<int> res {};
        res.grow<false>(size);
        fu::view<int> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_start0_mut(res, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<int> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static void compile_solveCodegen_Tsi8(Module_qqBh& module, const Options_mg7V& options, const Context_UXD9& ctx)
{
    if (module.out)
        fu::fail(fu::str(str_643vObDScH7));
    else
    {
        const ModuleStat_6soj stat0 = ModuleStat_now_aKPw();
        module.out.solve = solve_gDsn(ctx, module, options);
        if (options.dev & DevOptions_QEya_DEV_Print)
        {
            fu::str x {};
            fu::println(fu::view<fu::str> {{ (x = inspect_wkVO(module), x).const_cast_mut().destructive_move() }});
        };
        const ModuleStat_6soj stat1 = ModuleStat_now_aKPw();
        module.out.cpp = cpp_codegen_i4S3(module, ctx, options);
        if (options.dev & DevOptions_QEya_DEV_Print)
        {
            const fu::str* x;
            fu::println(fu::view<fu::str> {{ fu::str((x = &(module.out.cpp.src), (*x))) }});
        };
        const ModuleStat_6soj stat2 = ModuleStat_now_aKPw();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
    };
}

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF___YZ31CHZtRji
                                #define DEF___YZ31CHZtRji
inline static Result_mtbD _YZ31(const int modid, const Context_UXD9& ctx, const Options_mg7V& options)
{

    try
    {
    {
        const Module_qqBh& module = ctx.modules[modid];
        if (module.out)
        {
            return Result_mtbD{};
        }
        else
        {
            /*MOV*/ Module_qqBh module_1 = clone_ReSi(module);
            compile_solveCodegen_Tsi8(module_1, options, ctx);
            return Result_mtbD { static_cast<Module_qqBh&&>(module_1), fu::str{} };
        };
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str error = fu::to_str(o_0.what());

    {
        return Result_mtbD { Module_qqBh{}, (error ? static_cast<fu::str&&>(error) : x7E_rA00("COMPILER BUG: Empty error string, modid="_view, fu::i64dec(modid))) };
    }
    }
;
}
                                #endif

                                #ifndef DEF___5jgH3m0qsbh
                                #define DEF___5jgH3m0qsbh
inline static const Result_mtbD& _5jgH(const int i, fu::view<int> arr, fu::view_mut<Result_mtbD> result, const Context_UXD9& ctx, const Options_mg7V& options)
{
    return (result.mutref(i) = _YZ31(arr[i], ctx, options));
}
                                #endif

                                #ifndef DEF_parallel_for_L3GWuQ2uj83
                                #define DEF_parallel_for_L3GWuQ2uj83
inline static void parallel_for_L3GW(const int min, int end, fu::view<int> arr, fu::view_mut<Result_mtbD> result, const Context_UXD9& ctx, const Options_mg7V& options)
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
        _5jgH(i, arr, result, ctx, options);

    });

}
                                #endif

                                #ifndef DEF_map_pRTXCcBjMn3
                                #define DEF_map_pRTXCcBjMn3
inline fu::vec<Result_mtbD> map_pRTX(fu::view<int> arr, const int min, const Context_UXD9& ctx, const Options_mg7V& options)
{
    /*MOV*/ fu::vec<Result_mtbD> result {};
    result.grow<false>(arr.size());
    parallel_for_L3GW(min, arr.size(), arr, result, ctx, options);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF___iyUd9Y8Yvhc
                                #define DEF___iyUd9Y8Yvhc
inline static void _iyUd(const Result_mtbD& result, Context_UXD9& ctx)
{
    if (result.error)
        fu::fail(fu::str(result.error));
    else if (result.module.out)
        setModule_1qjp(result.module, ctx);

}
                                #endif

                                #ifndef DEF_each_mQ7XyIYKbzd
                                #define DEF_each_mQ7XyIYKbzd
inline void each_mQ7X(fu::view<Result_mtbD> a, Context_UXD9& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _iyUd(a[i], ctx);

}
                                #endif

                                #ifndef DEF___WpHUrsDzfzf
                                #define DEF___WpHUrsDzfzf
inline static void _WpHU(const int modid, Context_UXD9& ctx, const Options_mg7V& options)
{
    const Module_qqBh& module = ctx.modules[modid];
    if (!module.out)
    {
        Module_qqBh module_1 = clone_ReSi(module);
        compile_solveCodegen_Tsi8(module_1, options, ctx);
        setModule_1qjp(module_1, ctx);
    };
}
                                #endif

                                #ifndef DEF_each_E0j4HR2pNBb
                                #define DEF_each_E0j4HR2pNBb
inline void each_E0j4(fu::view<int> a, Context_UXD9& ctx, const Options_mg7V& options)
{
    for (int i = 0; i < a.size(); i++)
        _WpHU(a[i], ctx, options);

}
                                #endif

void compile_Tsi8(fu::vec_range<char> fname, Context_UXD9& ctx, const Options_mg7V& options)
{
    compile_lexParseDeps_Tsi8(fname, (*(fu::vec<TokenIdx_5b85>*)fu::NIL), ctx, options);
    fu::vec<fu::vec<int>> dep_order {};
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const Module_qqBh& module = ctx.modules[i];
        ensure_M6xM(dep_order, module.order.dep_depth) += module.modid;
    };
    ctx.dep_order = join_Kp9J(dep_order);
    for (int i_1 = 0; i_1 < dep_order.size(); i_1++)
    {
        fu::view<int> modids = dep_order[i_1];
        if (options.dev & DevOptions_QEya_DEV_Parallel)
        {
            fu::vec<Result_mtbD> results = map_pRTX(modids, 0, ctx, options);
            each_mQ7X(results, ctx);
        }
        else
            each_E0j4(modids, ctx, options);

    };
}

extern const Context_UXD9 CTX_PRELUDE;
                                #ifndef DEF_map_HDy2zgXKUIb
                                #define DEF_map_HDy2zgXKUIb
inline fu::vec<Module_qqBh> map_HDy2(fu::view<Module_qqBh> a)
{
    /*MOV*/ fu::vec<Module_qqBh> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_ReSi(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_wABaoEjhw2k
                                #define DEF_clone_wABaoEjhw2k
inline fu::vec<Module_qqBh> clone_wABa(fu::view<Module_qqBh> a)
{
    return map_HDy2(a);
}
                                #endif

                                #ifndef DEF_clone_663xotbJUL7
                                #define DEF_clone_663xotbJUL7
inline const Map_4s6T& clone_663x(const Map_4s6T& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_EF9m0cUXee4
                                #define DEF_clone_EF9m0cUXee4
inline Context_UXD9 clone_EF9m(const Context_UXD9& a)
{
    /*MOV*/ Context_UXD9 res {};

    {
        res.fudir = clone_uMDn(a.fudir);
        res.base_dir = clone_uMDn(a.base_dir);
        res.modules = clone_wABa(a.modules);
        res.dep_order = clone_vOit(a.dep_order);
        res.files = clone_663x(a.files);
        res.fuzzy = clone_663x(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

static int countSloc_Tsi8(fu::view<Token_RpL8> tokens)
{
    int line0 = -1;
    int sloc = 0;
    for (int i = 0; i < tokens.size(); i++)
    {
        const Token_RpL8& t = tokens[i];
        if (!((t.lcc.line == line0) || (t.kind != Kind_Idfg_id)))
        {
            line0 = t.lcc.line;
            sloc++;
        };
    };
    return sloc ? sloc : 1;
}

static int countSpecs_Tsi8(fu::view<Overload_OYmb> overloads)
{
    int specs = 0;
    for (int i = 0; i < overloads.size(); i++)
    {
        const Overload_OYmb& o = overloads[i];
        if (!((o.kind != Kind_Idfg_fn) && (o.kind != Kind_Idfg_inline)))
            specs++;

    };
    return specs;
}

                                #ifndef DEF_leftpad_a2C49unW75d
                                #define DEF_leftpad_a2C49unW75d
inline fu::str leftpad_a2C4(fu::vec_range<char> str, const int minw, /*MOV*/ fu::str&& pad)
{
    if ((str.size() >= minw))
        return fu::str(str);
    else
    {
        const int needed = (minw - str.size());
        while (pad.size() < needed)
            pad += fu::str(pad);

        pad.shrink(needed);
        return (pad += str).destructive_move();
    };
}
                                #endif

static void printSlowBuildDiagnostics_Tsi8(const Context_UXD9& ctx)
{
    ModuleStat_6soj lex {};
    ModuleStat_6soj parse {};
    ModuleStat_6soj solve {};
    ModuleStat_6soj codegen {};
    int sloc {};
    int specs {};
    int types {};
    fu::view<Module_qqBh> m = ctx.modules;
    for (int i = 1; i < m.size(); i++)
    {
        const Module_qqBh& m_1 = m[i];
        lex += m_1.stats.lex;
        parse += m_1.stats.parse;
        solve += m_1.stats.solve;
        codegen += m_1.stats.codegen;
        sloc += countSloc_Tsi8(m_1.in.lex.tokens);
        specs += countSpecs_Tsi8(m_1.out.solve.scope.overloads);
        types += m_1.out.types.size();
    };
    ModuleStat_print_aKPw(lex, str_o9tkHEw4bK4, fu::view<char>{});
    ModuleStat_print_aKPw(parse, str_tfwrmVrW5Tj, fu::view<char>{});
    ModuleStat_print_aKPw(solve, str_3qFvWYzwNvj, fu::view<char>{});
    ModuleStat_print_aKPw(codegen, str_KogfiHpSLlh, "\n"_view);
    const fu::str* x;
    fu::println(fu::view<fu::str> {{ fu::str((x = &(str_YeNWBMVKG82), (*x))) }});
    fu::str x_1 {};
    fu::println(fu::view<fu::str> {{ (x_1 = ("   sloc "_view + leftpad_a2C4(fu::i64dec(sloc), 9, fu::str("               "_fu))), x_1).const_cast_mut().destructive_move() }});
    fu::str x_2 {};
    fu::println(fu::view<fu::str> {{ (x_2 = ("    fns "_view + leftpad_a2C4(fu::i64dec(specs), 9, fu::str("               "_fu))), x_2).const_cast_mut().destructive_move() }});
    fu::str x_3 {};
    fu::println(fu::view<fu::str> {{ (x_3 = ("  types "_view + leftpad_a2C4(fu::i64dec(types), 9, fu::str("               "_fu))), x_3).const_cast_mut().destructive_move() }});
    const fu::str* x_4;
    fu::println(fu::view<fu::str> {{ fu::str((x_4 = &(str_YeNWBMVKG82), (*x_4))) }});
}

TestOutput_TzQt compile_and_build_Tsi8(fu::vec_range<char> fname, fu::vec_range<char> dir_wrk, fu::vec_range<char> bin, fu::vec_range<char> dir_obj, fu::vec_range<char> dir_src, fu::vec_range<char> dir_cpp, fu::view<char> scheme, const bool run, const bool shared, const bool hotswap, const bool nocache, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld)
{
    Context_UXD9 ctx = clone_EF9m(CTX_PRELUDE);
    const Options_mg7V options = Options_mg7V { Lint_Q9R1{}, SolverNotes_LSla{}, CGDefects_2L18{}, DevOptions_QEya_DEV_Parallel, {/*unused non-zst*/} };

    {
        const fu::str* x;
        fu::println(fu::view<fu::str> {{ fu::str((x = &(str_qklLkR1yLu4), (*x))), fu::str(fname) }});
        const double t0 = hr_0pZh();
        compile_Tsi8(fname, ctx, options);
        const double t1 = hr_0pZh();
        const double tt = (t1 - t0);
        if (tt > 0.025)
            printSlowBuildDiagnostics_Tsi8(ctx);

        const fu::str* x_1;
        fu::str x_2 {};
        const fu::str* x_3;
        fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_49Vgx7sroDk), (*x_1))), (x_2 = fu::f64dec(tt), x_2).const_cast_mut().destructive_move(), fu::str((x_3 = &(str_7xwemduDY70), (*x_3))) }});
    };
    return build_uGHE(fu::str(dir_wrk), ctx.fudir, fu::str{}, fu::str(bin), fu::str(dir_obj), fu::str(dir_src), fu::str(dir_cpp), fname, scheme, DEV_OnFail_3YLB{}, run, shared, hotswap, nocache, flags_cc, flags_ld, ctx);
}

#endif
