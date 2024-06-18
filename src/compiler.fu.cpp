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

struct Context_AtCH;
struct Module_GQwr;
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
struct ModuleOutputs_mPlY;
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
struct CodegenOutput_kbk6;
struct Set_XshD;
typedef fu::u8 CGDefects_2L18;
struct ModuleStats_ANTR;
struct ModuleStat_sTmh;
struct Profile_4UPJ;
struct Sample_Time_cblj;
struct Map_Umhk;
struct Options_TBgD;
struct Lint_Q9R1;
typedef fu::u8 DevOptions_QEya;
struct ModidAndOrder_itn0;
struct Result_2h7O;
struct TestOutput_OIXu;
typedef int ExitStatus_iZrm;
typedef fu::u8 DEV_OnFail_3YLB;
Module_GQwr& getModule_1qjp(fu::vec_range<char>, Context_AtCH&);
fu::str FAIL_text_u9Gb(fu::vec_range<TokenIdx_5581>, fu::view<char>, const Context_AtCH&);
fu::str getFile_1qjp(fu::vec_range<char>, Context_AtCH&);
fu::str qBAD_e44U(fu::view<char>);
[[noreturn]] fu::never FAIL_u9Gb(fu::view<char>, fu::vec_range<TokenIdx_5581>, const Context_AtCH&);
ModuleStat_sTmh ModuleStat_now_aKPw();
LexerOutput_DN4p lex_pnA5(fu::vec_range<char>, fu::vec_range<char>);
ParserOutput_d14k parse_qFIn(int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, const Options_TBgD&);
ModuleStat_sTmh operator-(const ModuleStat_sTmh&, const ModuleStat_sTmh&);
void setModule_1qjp(const Module_GQwr&, Context_AtCH&);
fu::vec_range<char> dirname_qZI0(fu::vec_range<char>);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
fu::str resolveFile_SqDq(fu::vec_range<char>, Context_AtCH&);
static ModidAndOrder_itn0 compile_lexParseDeps_Tsi8(fu::vec_range<char>, fu::vec_range<TokenIdx_5581>, Context_AtCH&, const Options_TBgD&);
SolverOutput_hA3T solve_gDsn(const Context_AtCH&, Module_GQwr&, const Options_TBgD&);
fu::str inspect_wkVO(const Module_GQwr&);
CodegenOutput_kbk6 cpp_codegen_i4S3(const Module_GQwr&, const Context_AtCH&, const Options_TBgD&);
double hr_0pZh();
void operator+=(ModuleStat_sTmh&, const ModuleStat_sTmh&);
void ModuleStat_print_aKPw(const ModuleStat_sTmh&, fu::vec_range<char>, fu::view<char>);
TestOutput_OIXu build_uGHE(fu::str&&, fu::view<char>, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, fu::view<char>, DEV_OnFail_3YLB, bool, int, bool, bool, bool, fu::view<fu::str>, fu::view<fu::str>, const Context_AtCH&);

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
    Kind_Idfg___no_kind_yet = 59u,
    Kind_Idfg___tombstone = 60u,
    Kind_Idfg_type = 61u,
    Kind_Idfg_var = 62u,
    Kind_Idfg_field = 63u,
    Kind_Idfg_enumv = 64u,
    Kind_Idfg_template = 65u,
    Kind_Idfg___native = 66u,
    Kind_Idfg_inline = 67u,
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

                                #ifndef DEF_CodegenOutput_kbk6YODHGK4
                                #define DEF_CodegenOutput_kbk6YODHGK4
struct CodegenOutput_kbk6
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

                                #ifndef DEF_Context_AtCHQCriSN0
                                #define DEF_Context_AtCHQCriSN0
struct Context_AtCH
{
    fu::str fudir;
    fu::str base_dir;
    fu::vec<Module_GQwr> modules;
    fu::vec<int> dep_order;
    Map_Umhk files;
    Map_Umhk fuzzy;
    Context_AtCH(const Context_AtCH&) = delete;
    Context_AtCH(Context_AtCH&&) = default;
    Context_AtCH& operator=(const Context_AtCH&) = delete;
    Context_AtCH& operator=(Context_AtCH&&) = default;
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

                                #ifndef DEF_ModuleOutputs_mPlYLD4nCT5
                                #define DEF_ModuleOutputs_mPlYLD4nCT5
struct ModuleOutputs_mPlY
{
    fu::vec<Struct_LDkB> types;
    SolverOutput_hA3T solve;
    CodegenOutput_kbk6 cpp;
    ModuleOutputs_mPlY(const ModuleOutputs_mPlY&) = delete;
    ModuleOutputs_mPlY(ModuleOutputs_mPlY&&) = default;
    ModuleOutputs_mPlY& operator=(const ModuleOutputs_mPlY&) = delete;
    ModuleOutputs_mPlY& operator=(ModuleOutputs_mPlY&&) = default;
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

                                #ifndef DEF_Module_GQwrbG5Hygd
                                #define DEF_Module_GQwrbG5Hygd
struct Module_GQwr
{
    int modid;
    fu::str fname;
    ModuleInputs_iQIg in;
    ModuleOrder_HMNg order;
    ModuleOutputs_mPlY out;
    ModuleStats_ANTR stats;
    Profile_4UPJ profile;
    Module_GQwr(const Module_GQwr&) = delete;
    Module_GQwr(Module_GQwr&&) = default;
    Module_GQwr& operator=(const Module_GQwr&) = delete;
    Module_GQwr& operator=(Module_GQwr&&) = default;
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

                                #ifndef DEF_ModidAndOrder_itn0E7eJADc
                                #define DEF_ModidAndOrder_itn0E7eJADc
struct ModidAndOrder_itn0
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

                                #ifndef DEF_Result_2h7OHtEX9Se
                                #define DEF_Result_2h7OHtEX9Se
struct Result_2h7O
{
    Module_GQwr module;
    fu::str error;
    Result_2h7O(const Result_2h7O&) = delete;
    Result_2h7O(Result_2h7O&&) = default;
    Result_2h7O& operator=(const Result_2h7O&) = delete;
    Result_2h7O& operator=(Result_2h7O&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || module
            || error
        ;
    }
};
                                #endif

                                #ifndef DEF_ExitStatus_iZrm
                                #define DEF_ExitStatus_iZrm
                                #endif

                                #ifndef DEF_TestOutput_OIXu892afg8
                                #define DEF_TestOutput_OIXu892afg8
struct TestOutput_OIXu
{
    ExitStatus_iZrm status;
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

                                #ifndef DEF___x2mZgr2WDq0
                                #define DEF___x2mZgr2WDq0
inline static fu::view<char> _x2mZ(const TokenIdx_5581& token, const int i, fu::view<TokenIdx_5581> via, fu::str& error, const Context_AtCH& ctx)
{
    return (error += FAIL_text_u9Gb(fu::vec<TokenIdx_5581> {{ TokenIdx_5581(token) }}, ((i == (via.size() - 1)) ? "Resulting in an import circle, not currently supported."_view : "Imports:\n"_view), ctx));
}
                                #endif

                                #ifndef DEF_each_WD2UOi3FEya
                                #define DEF_each_WD2UOi3FEya
inline void each_WD2U(fu::vec_range<TokenIdx_5581> a, fu::view<TokenIdx_5581> via, fu::str& error, const Context_AtCH& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _x2mZ(a[i], i, via, error, ctx);

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

                                #ifndef DEF_clone_Forj7k2Jad6
                                #define DEF_clone_Forj7k2Jad6
inline const CodegenOutput_kbk6& clone_Forj(const CodegenOutput_kbk6& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ntM0DtwaK2h
                                #define DEF_clone_ntM0DtwaK2h
inline ModuleOutputs_mPlY clone_ntM0(const ModuleOutputs_mPlY& a)
{
    /*MOV*/ ModuleOutputs_mPlY res {};

    {
        res.types = clone_kDX3(a.types);
        res.solve = clone_MA8G(a.solve);
        res.cpp = clone_Forj(a.cpp);
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

                                #ifndef DEF_clone_WZpRJ05IJlk
                                #define DEF_clone_WZpRJ05IJlk
inline Module_GQwr clone_WZpR(const Module_GQwr& a)
{
    /*MOV*/ Module_GQwr res {};

    {
        res.modid = clone_0DCJ(a.modid);
        res.fname = clone_uMDn(a.fname);
        res.in = clone_Dn4n(a.in);
        res.order = clone_MUEx(a.order);
        res.out = clone_ntM0(a.out);
        res.stats = clone_TrP2(a.stats);
        res.profile = clone_AoTU(a.profile);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_if_last_jkvX1jMRQLf
                                #define DEF_if_last_jkvX1jMRQLf
inline const TokenIdx_5581& if_last_jkvX(fu::view<TokenIdx_5581> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(TokenIdx_5581*)fu::NIL);

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

                                #ifndef DEF_steal_UGwF5d2TJp6
                                #define DEF_steal_UGwF5d2TJp6
inline fu::vec<Import_7CIJ> steal_UGwF(fu::vec_range_mut<Import_7CIJ> v)
{
    /*MOV*/ fu::vec<Import_7CIJ> ret {};
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

                                #ifndef DEF_x3Cx3E_j5CR7zKytVk
                                #define DEF_x3Cx3E_j5CR7zKytVk
inline int x3Cx3E_j5CR(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_odNT(a.size(), b.size());
    bool quick {};
    quick = a.m_data == b.m_data || cmp;
    if (quick)
        return cmp;
    else
    {
        for (int i = 0; (i < a.size()) && !cmp; i++)
            cmp = x3Cx3E_YuqO(a[i], b[i]);

        return cmp;
    };
}
                                #endif

                                #ifndef DEF_x3Dx3D_oVAS1y5c4ld
                                #define DEF_x3Dx3D_oVAS1y5c4ld
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_j5CR(a, b);
}
                                #endif

                                #ifndef DEF_starts_ojopLVekF87
                                #define DEF_starts_ojopLVekF87
inline bool starts_ojop(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF___KiZ1940yTQi
                                #define DEF___KiZ1940yTQi
inline static void _KiZ1(Import_7CIJ& import, fu::view<TokenIdx_5581> via, fu::view<char> dir, Context_AtCH& ctx, Module_GQwr& module, const Options_TBgD& options)
{
    const fu::str& pattern = import.pattern;
    fu::str pattern_1 = (starts_ojop(pattern, "."_view) ? join_qZI0(dir, pattern) : ((dir + '\v') + pattern));
    fu::str _0 {};
    const ModidAndOrder_itn0 other = (_0 = resolveFile_SqDq(pattern_1, ctx), compile_lexParseDeps_Tsi8(static_cast<fu::str&&>(_0), (via + import.token), ctx, options));
    import.modid = (other.modid ? other.modid : fu::fail(fu::str(str_vizsH9xxiE2)));
    if ((module.order.dep_depth <= other.order.dep_depth))
        module.order.dep_depth = (other.order.dep_depth + 1);

}
                                #endif

                                #ifndef DEF_each_wfh7FalWRm8
                                #define DEF_each_wfh7FalWRm8
inline void each_wfh7(fu::view_mut<Import_7CIJ> a, fu::view<TokenIdx_5581> via, fu::view<char> dir, Context_AtCH& ctx, Module_GQwr& module, const Options_TBgD& options)
{
    for (int i = 0; i < a.size(); i++)
    {
        Import_7CIJ* _0;
        (_0 = &(a.mutref(i)), _KiZ1(*_0, via, dir, ctx, module, options));
    };
}
                                #endif

static ModidAndOrder_itn0 compile_lexParseDeps_Tsi8(fu::vec_range<char> fname, fu::vec_range<TokenIdx_5581> via, Context_AtCH& ctx, const Options_TBgD& options)
{
    const Module_GQwr& module = getModule_1qjp(fname, ctx);
    if (module.in)
    {
        if (module.order)
        {
            return ModidAndOrder_itn0 { module.modid, ModuleOrder_HMNg(module.order) };
        }
        else
        {
            /*MOV*/ fu::str error {};
            each_WD2U(via, via, error, ctx);
            fu::fail(static_cast<fu::str&&>(error));
        };
    }
    else
    {
        Module_GQwr module_1 = clone_WZpR(module);
        if (module_1.out)
            fu::fail(fu::str(str_uHjQGYgB6y3));
        else
        {
            /*MOV*/ fu::str src = getFile_1qjp(fname, ctx);
            if (!src)
            {
                const TokenIdx_5581& token = if_last_jkvX(via);
                if (token)
                {
                    fu::str err = fu::str(str_nakXNEHa0Lb);
                    const int dirEnd = find_ZKsG(fname, '\v');
                    if (dirEnd > 0)
                    {
                        err += ("\n\n\tSearched relative to:    \t"_view + qBAD_e44U(fu::get_view(fname, 0, dirEnd)));
                        err += ("\n\tLooking for a file named:\t"_view + qBAD_e44U(fu::get_view(fname, (dirEnd + 1))));
                    };
                    FAIL_u9Gb(err, fu::vec<TokenIdx_5581> {{ TokenIdx_5581(token) }}, ctx);
                }
                else
                    fu::fail((("Could not load "_view + qBAD_e44U(fname)) + ": file does not exist or is empty."_view));

            }
            else
            {
                const ModuleStat_sTmh stat0 = ModuleStat_now_aKPw();
                /*MOV*/ LexerOutput_DN4p lexer_result = lex_pnA5(src, fname);
                const ModuleStat_sTmh stat1 = ModuleStat_now_aKPw();
                /*MOV*/ ParserOutput_d14k parser_result = parse_qFIn(module_1.modid, fname, src, lexer_result.tokens, options);
                const ModuleStat_sTmh stat2 = ModuleStat_now_aKPw();
                module_1.in = ModuleInputs_iQIg { src.destructive_move(), static_cast<LexerOutput_DN4p&&>(lexer_result), static_cast<ParserOutput_d14k&&>(parser_result) };
                module_1.stats.lex = (stat1 - stat0);
                module_1.stats.parse = (stat2 - stat1);
                setModule_1qjp(module_1, ctx);
                if (!module_1.order)
                {
                    module_1.order.dep_depth = 1;
                    fu::view<char> dir = dirname_qZI0(fname);
                    fu::vec<Import_7CIJ> imports = steal_UGwF(module_1.in.parse.imports);
                    each_wfh7(imports, via, dir, ctx, module_1, options);
                    module_1.in.parse.imports.swap(imports);
                    setModule_1qjp(module_1, ctx);
                }
                else
                    fu::fail(fu::str(str_uDrQUMcSBVl));

                return ModidAndOrder_itn0 { module_1.modid, ModuleOrder_HMNg((module_1.order ? module_1.order : fu::fail(fu::str(str_DczkQEiOPqg)))) };
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

static void compile_solveCodegen_Tsi8(Module_GQwr& module, const Options_TBgD& options, const Context_AtCH& ctx)
{
    if (module.out)
        fu::fail(fu::str(str_643vObDScH7));
    else
    {
        const ModuleStat_sTmh stat0 = ModuleStat_now_aKPw();
        module.out.solve = solve_gDsn(ctx, module, options);
        if (options.dev & DevOptions_QEya_DEV_Print)
        {
            fu::str x {};
            fu::println(fu::view<fu::str> {{ (x = inspect_wkVO(module), x).const_cast_mut().destructive_move() }});
        };
        const ModuleStat_sTmh stat1 = ModuleStat_now_aKPw();
        module.out.cpp = cpp_codegen_i4S3(module, ctx, options);
        if (options.dev & DevOptions_QEya_DEV_Print)
        {
            const fu::str* x;
            fu::println(fu::view<fu::str> {{ fu::str((x = &(module.out.cpp.src), (*x))) }});
        };
        const ModuleStat_sTmh stat2 = ModuleStat_now_aKPw();
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

                                #ifndef DEF___QDKFcvnjvM6
                                #define DEF___QDKFcvnjvM6
inline static Result_2h7O _QDKF(const int modid, const Context_AtCH& ctx, const Options_TBgD& options)
{

    try
    {
    {
        const Module_GQwr& module = ctx.modules[modid];
        if (module.out)
        {
            return Result_2h7O{};
        }
        else
        {
            /*MOV*/ Module_GQwr module_1 = clone_WZpR(module);
            compile_solveCodegen_Tsi8(module_1, options, ctx);
            return Result_2h7O { static_cast<Module_GQwr&&>(module_1), fu::str{} };
        };
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str error = fu::to_str(o_0.what());

    {
        return Result_2h7O { Module_GQwr{}, (error ? static_cast<fu::str&&>(error) : x7E_rA00("COMPILER BUG: Empty error string, modid="_view, fu::i64dec(modid))) };
    }
    }
;
}
                                #endif

                                #ifndef DEF___RFYXq7RUiN4
                                #define DEF___RFYXq7RUiN4
inline static const Result_2h7O& _RFYX(const int i, fu::view<int> arr, fu::view_mut<Result_2h7O> result, const Context_AtCH& ctx, const Options_TBgD& options)
{
    return (result.mutref(i) = _QDKF(arr[i], ctx, options));
}
                                #endif

                                #ifndef DEF_parallel_for_gYeygCkX139
                                #define DEF_parallel_for_gYeygCkX139
inline static void parallel_for_gYey(const int min, int end, fu::view<int> arr, fu::view_mut<Result_2h7O> result, const Context_AtCH& ctx, const Options_TBgD& options)
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
        _RFYX(i, arr, result, ctx, options);

    });

}
                                #endif

                                #ifndef DEF_map_BUYLX5cimbl
                                #define DEF_map_BUYLX5cimbl
inline fu::vec<Result_2h7O> map_BUYL(fu::view<int> arr, const int min, const Context_AtCH& ctx, const Options_TBgD& options)
{
    /*MOV*/ fu::vec<Result_2h7O> result {};
    result.grow<false>(arr.size());
    parallel_for_gYey(min, arr.size(), arr, result, ctx, options);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF___gG7aKFPARRc
                                #define DEF___gG7aKFPARRc
inline static void _gG7a(const Result_2h7O& result, Context_AtCH& ctx)
{
    if (result.error)
        fu::fail(fu::str(result.error));
    else if (result.module.out)
        setModule_1qjp(result.module, ctx);

}
                                #endif

                                #ifndef DEF_each_g6QBKBFKU80
                                #define DEF_each_g6QBKBFKU80
inline void each_g6QB(fu::view<Result_2h7O> a, Context_AtCH& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _gG7a(a[i], ctx);

}
                                #endif

                                #ifndef DEF___O9tLV36Tlgh
                                #define DEF___O9tLV36Tlgh
inline static void _O9tL(const int modid, Context_AtCH& ctx, const Options_TBgD& options)
{
    const Module_GQwr& module = ctx.modules[modid];
    if (!module.out)
    {
        Module_GQwr module_1 = clone_WZpR(module);
        compile_solveCodegen_Tsi8(module_1, options, ctx);
        setModule_1qjp(module_1, ctx);
    };
}
                                #endif

                                #ifndef DEF_each_XkCvSDggu33
                                #define DEF_each_XkCvSDggu33
inline void each_XkCv(fu::view<int> a, Context_AtCH& ctx, const Options_TBgD& options)
{
    for (int i = 0; i < a.size(); i++)
        _O9tL(a[i], ctx, options);

}
                                #endif

void compile_Tsi8(fu::vec_range<char> fname, Context_AtCH& ctx, const Options_TBgD& options)
{
    compile_lexParseDeps_Tsi8(fname, (*(fu::vec<TokenIdx_5581>*)fu::NIL), ctx, options);
    fu::vec<fu::vec<int>> dep_order {};
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const Module_GQwr& module = ctx.modules[i];
        ensure_M6xM(dep_order, module.order.dep_depth) += module.modid;
    };
    ctx.dep_order = join_Kp9J(dep_order);
    for (int i_1 = 0; i_1 < dep_order.size(); i_1++)
    {
        fu::view<int> modids = dep_order[i_1];
        if (options.dev & DevOptions_QEya_DEV_Parallel)
        {
            fu::vec<Result_2h7O> results = map_BUYL(modids, 0, ctx, options);
            each_g6QB(results, ctx);
        }
        else
            each_XkCv(modids, ctx, options);

    };
}

extern const Context_AtCH CTX_PRELUDE;
                                #ifndef DEF_map_CGpk4oqZ3Pb
                                #define DEF_map_CGpk4oqZ3Pb
inline fu::vec<Module_GQwr> map_CGpk(fu::view<Module_GQwr> a)
{
    /*MOV*/ fu::vec<Module_GQwr> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_WZpR(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_TyseBnorUvh
                                #define DEF_clone_TyseBnorUvh
inline fu::vec<Module_GQwr> clone_Tyse(fu::view<Module_GQwr> a)
{
    return map_CGpk(a);
}
                                #endif

                                #ifndef DEF_clone_QG1E2EIO3ff
                                #define DEF_clone_QG1E2EIO3ff
inline const Map_Umhk& clone_QG1E(const Map_Umhk& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_xQ6IcYDcYN1
                                #define DEF_clone_xQ6IcYDcYN1
inline Context_AtCH clone_xQ6I(const Context_AtCH& a)
{
    /*MOV*/ Context_AtCH res {};

    {
        res.fudir = clone_uMDn(a.fudir);
        res.base_dir = clone_uMDn(a.base_dir);
        res.modules = clone_Tyse(a.modules);
        res.dep_order = clone_vOit(a.dep_order);
        res.files = clone_QG1E(a.files);
        res.fuzzy = clone_QG1E(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

static int countSloc_Tsi8(fu::view<Token_6M7a> tokens)
{
    int line0 = -1;
    int sloc = 0;
    for (int i = 0; i < tokens.size(); i++)
    {
        const Token_6M7a& t = tokens[i];
        if (!((t.lcc.line == line0) || (t.kind != Kind_Idfg_id)))
        {
            line0 = t.lcc.line;
            sloc++;
        };
    };
    return sloc ? sloc : 1;
}

static int countSpecs_Tsi8(fu::view<Overload_aO3i> overloads)
{
    int specs = 0;
    for (int i = 0; i < overloads.size(); i++)
    {
        const Overload_aO3i& o = overloads[i];
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

static void printSlowBuildDiagnostics_Tsi8(const Context_AtCH& ctx)
{
    ModuleStat_sTmh lex {};
    ModuleStat_sTmh parse {};
    ModuleStat_sTmh solve {};
    ModuleStat_sTmh codegen {};
    int sloc {};
    int specs {};
    int types {};
    fu::view<Module_GQwr> m = ctx.modules;
    for (int i = 1; i < m.size(); i++)
    {
        const Module_GQwr& m_1 = m[i];
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

TestOutput_OIXu compile_and_build_Tsi8(fu::vec_range<char> fname, fu::vec_range<char> dir_wrk, fu::vec_range<char> bin, fu::vec_range<char> dir_obj, fu::vec_range<char> dir_src, fu::vec_range<char> dir_cpp, fu::view<char> scheme, const bool run, const bool shared, const bool hotswap, const bool nocache, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld)
{
    Context_AtCH ctx = clone_xQ6I(CTX_PRELUDE);
    const Options_TBgD options = Options_TBgD { Lint_Q9R1{}, SolverNotes_LSla{}, CGDefects_2L18{}, DevOptions_QEya_DEV_Parallel, {/*unused non-zst*/} };

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
    return build_uGHE(fu::str(dir_wrk), ctx.fudir, fu::str{}, fu::str(bin), fu::str(dir_obj), fu::str(dir_src), fu::str(dir_cpp), fname, scheme, DEV_OnFail_3YLB{}, run, 0, shared, hotswap, nocache, flags_cc, flags_ld, ctx);
}

#endif
