#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec_range.h>
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
struct TestDiffs_EVlo;
typedef fu::u8 DEV_OnFail_3YLB;
struct TODO_FIX_Tuple_JR9M;
struct TestOutput_TzQt;
void compile_Tsi8(fu::vec_range<char>, Context_UXD9&, const Options_mg7V&);
Context_UXD9 ZERO_3QGL(fu::vec<fu::str>&&, Options_mg7V&&, fu::vec_range<char>, TestDiffs_EVlo&);
int parse10s32_V5Iu(int&, fu::view<char>);
fu::str qBAD_e44U(fu::view<char>);
TestOutput_TzQt build_uGHE(fu::str&&, fu::view<char>, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, fu::view<char>, DEV_OnFail_3YLB, bool, bool, bool, bool, fu::view<fu::str>, fu::view<fu::str>, const Context_UXD9&);
fu::str qID_e44U(fu::view<char>);
fu::str lower_KPhi(fu::str&&);
static bool check_3QGL(fu::vec_range<char>, fu::view<char>);
void set_next_pXri(TestDiffs_EVlo&, fu::view<char>);
fu::str into_testdiff_6GsP(const TestOutput_TzQt&);
fu::str inspect_wkVO(const Module_qqBh&);
fu::str strip_e44U(fu::view<char>);
int write_VWJw(fu::str&&, fu::view<char>, unsigned);

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

                                #ifndef DEF_TestDiffs_EVloQngEKM1
                                #define DEF_TestDiffs_EVloQngEKM1
struct TestDiffs_EVlo
{
    fu::vec<fu::str> data;
    explicit operator bool() const noexcept
    {
        return false
            || data
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

                                #ifndef DEF_TODO_FIX_Tuple_JR9M4aRGsRk
                                #define DEF_TODO_FIX_Tuple_JR9M4aRGsRk
struct TODO_FIX_Tuple_JR9M
{
    Context_UXD9 ctx;
    TestOutput_TzQt debug_output;
    TODO_FIX_Tuple_JR9M(const TODO_FIX_Tuple_JR9M&) = delete;
    TODO_FIX_Tuple_JR9M(TODO_FIX_Tuple_JR9M&&) = default;
    TODO_FIX_Tuple_JR9M& operator=(const TODO_FIX_Tuple_JR9M&) = delete;
    TODO_FIX_Tuple_JR9M& operator=(TODO_FIX_Tuple_JR9M&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || ctx
            || debug_output
        ;
    }
};
                                #endif

                                #ifndef STR_s5KECQeRZe7
                                #define STR_s5KECQeRZe7
static const fu::str str_s5KECQeRZe7 fu_INIT_PRIORITY(1014) { "/DIR/FILE.fu"_fu };
                                #endif

                                #ifndef STR_u8W3TZnkJC4
                                #define STR_u8W3TZnkJC4
static const fu::str str_u8W3TZnkJC4 fu_INIT_PRIORITY(1014) { "compile_snippets: #fwd != #rev"_fu };
                                #endif

                                #ifndef STR_Q5ZEl4gigu9
                                #define STR_Q5ZEl4gigu9
static const fu::str str_Q5ZEl4gigu9 fu_INIT_PRIORITY(1014) { "Multiple `<pass/>` blocks for `<fail>`."_fu };
                                #endif

                                #ifndef STR_waiO6lvzki6
                                #define STR_waiO6lvzki6
static const fu::str str_waiO6lvzki6 fu_INIT_PRIORITY(1014) { "No `<pass/>` for `<fail>`."_fu };
                                #endif

                                #ifndef STR_JNntOGAZ07e
                                #define STR_JNntOGAZ07e
static const fu::str str_JNntOGAZ07e fu_INIT_PRIORITY(1014) { "No <fail keywords>."_fu };
                                #endif

                                #ifndef STR_fe9WBO6ECF2
                                #define STR_fe9WBO6ECF2
static const fu::str str_fe9WBO6ECF2 fu_INIT_PRIORITY(1014) { "No closing `</fail>` for `<fail>`."_fu };
                                #endif

                                #ifndef STR_4CBqFJNR9B3
                                #define STR_4CBqFJNR9B3
static const fu::str str_4CBqFJNR9B3 fu_INIT_PRIORITY(1014) { "No closing `</alt>` for `<alt>`."_fu };
                                #endif

                                #ifndef STR_DQQHz8ffyB4
                                #define STR_DQQHz8ffyB4
static const fu::str str_DQQHz8ffyB4 fu_INIT_PRIORITY(1014) { "We expect exactly one `<flip/>` in a `<flip></flip>`."_fu };
                                #endif

                                #ifndef STR_CGSb369d73f
                                #define STR_CGSb369d73f
static const fu::str str_CGSb369d73f fu_INIT_PRIORITY(1014) { "No closing `</flip>` for `<flip>`."_fu };
                                #endif

                                #ifndef STR_bUXE6bG3EAl
                                #define STR_bUXE6bG3EAl
static const fu::str str_bUXE6bG3EAl fu_INIT_PRIORITY(1014) { "ZERO_SAME: expect/actual len mismatch."_fu };
                                #endif

                                #ifndef STR_Rl0TvwZa8F9
                                #define STR_Rl0TvwZa8F9
static const fu::str str_Rl0TvwZa8F9 fu_INIT_PRIORITY(1014) { "keywords line:col+chars"_fu };
                                #endif

#ifndef fu_NO_fdefs

extern const Context_UXD9 CTX_PRELUDE;
                                #ifndef DEF_clone_uMDnTTVYl6b
                                #define DEF_clone_uMDnTTVYl6b
inline fu::vec_range<char> clone_uMDn(fu::vec_range<char> a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_0DCJaE9X1mk
                                #define DEF_clone_0DCJaE9X1mk
inline int clone_0DCJ(const int a)
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

                                #ifndef DEF_find_gxGfZKQVeEd
                                #define DEF_find_gxGfZKQVeEd
inline static int find_gxGf(fu::view<char> arr, const char val, const int eLse)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == val)
            return i;

    };
    return eLse;
}
                                #endif

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
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

                                #ifndef DEF_find_7SLcWgAQSl4
                                #define DEF_find_7SLcWgAQSl4
inline int find_7SLc(fu::view<char> haystack, fu::view<char> needle)
{
    if ((haystack.size() < needle.size()) || (needle.size() <= 0))
    {
        if (needle.size())
            return -1;
        else
            return 0;

    }
    else if (needle.size() == 1)
        return find_ZKsG(haystack, needle[0]);
    else
    {
        const int needle_len_m1 = (needle.size() - 1);
        const char needle_last_char = needle[needle_len_m1];
        int skip = 0;
        for (int i = needle_len_m1; i < haystack.size(); )
        {
            while (haystack[i] != needle_last_char)
            {
                if (++i == haystack.size())
                    return -1;

            };
            for (int j = 0; ; )
            {
                if (haystack[((i - needle_len_m1) + j)] != needle[j])
                {
                    if (!skip)
                    {
                        skip = needle.size();
                        for (int j_1 = needle_len_m1; j_1-- > 0; )
                        {
                            if (needle[j_1] == needle_last_char)
                            {
                                skip = (needle_len_m1 - j_1);
                                break;
                            };
                        };
                    };
                    i += skip;
                    break;
                }
                else if (++j == needle_len_m1)
                    return i - needle_len_m1;

            };
        };
        return -1;
    };
}
                                #endif

                                #ifndef DEF_has_YIf6pzpE4yj
                                #define DEF_has_YIf6pzpE4yj
inline bool has_YIf6(fu::view<char> a, fu::view<char> b)
{
    return (find_7SLc(a, b) >= 0);
}
                                #endif

static fu::str ensure_main_3QGL(fu::vec_range<char> src)
{
    if (has_YIf6(src, "fn main"_view))
        return fu::str(src);
    else
    {
        return ("\n\nfn main(): i32 {\n"_view + src) + "\n}\n"_view;
    };
}

                                #ifndef DEF_update_Cw1i9Bln1c3
                                #define DEF_update_Cw1i9Bln1c3
inline bool update_Cw1i(Set_XshD& _, fu::vec_range<char> key, fu::vec_range_mut<fu::str> values, fu::vec_range<char> value)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_erT9(keys_asc[i], key);
        if (cmp == 0)
        {
            values.mutref(i) = fu::str(value);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, fu::str(key));
    values.insert(i, fu::str(value));
    return true;
}
                                #endif

                                #ifndef DEF_set_grPPc6DSew3
                                #define DEF_set_grPPc6DSew3
inline bool set_grPP(Map_4s6T& _, fu::vec_range<char> key, fu::vec_range<char> value)
{
    return update_Cw1i(_.keys, key, _.vals, value);
}
                                #endif

                                #ifndef DEF_last_sbzMU93UZok
                                #define DEF_last_sbzMU93UZok
inline fu::vec_range<char> last_sbzM(fu::view<fu::str> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail(fu::str("len == 0"_fu));

}
                                #endif

                                #ifndef DEF___53BlTBLK1vf
                                #define DEF___53BlTBLK1vf
inline static const fu::str& _53Bl(const Module_qqBh& _)
{
    return _.out.cpp.src;
}
                                #endif

                                #ifndef DEF_map_8dhbalal9A0
                                #define DEF_map_8dhbalal9A0
inline fu::vec<fu::str> map_8dhb(fu::view<Module_qqBh> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(_53Bl(a[i]));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF___rlze6CCZPd3
                                #define DEF___rlze6CCZPd3
inline static bool _rlze(fu::view<char> a, fu::view<char> b)
{
    return x3Cx3E_erT9(a, b) < 0;
}
                                #endif

static void sort_3QGL(fu::vec_range_mut<fu::str> a)
{
    fu::str l {};
    fu::str r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _rlze(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_lxmLnZvW0q0
                                #define DEF_sort_lxmLnZvW0q0
inline void sort_lxmL(fu::vec_range_mut<fu::str> a)
{
    sort_3QGL(a);
}
                                #endif

static void sort_5TaN(fu::vec_range_mut<fu::str> a)
{
    fu::str l {};
    fu::str r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _rlze(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_n4Cfw3EavYe
                                #define DEF_sort_n4Cfw3EavYe
inline void sort_n4Cf(fu::vec_range_mut<fu::str> a)
{
    sort_5TaN(a);
}
                                #endif

                                #ifndef DEF_str_kJvrhvMrGwi
                                #define DEF_str_kJvrhvMrGwi
inline fu::str str_kJvr(const SolverNotes_LSla n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & SolverNotes_LSla_N_FnRecursion)
            res += ("N_FnRecursion"_view + ", "_view);

        if (n & SolverNotes_LSla_N_FnResolve)
            res += ("N_FnResolve"_view + ", "_view);

        if (n & SolverNotes_LSla_N_FnReopen)
            res += ("N_FnReopen"_view + ", "_view);

        if (n & SolverNotes_LSla_N_TypeRecursion)
            res += ("N_TypeRecursion"_view + ", "_view);

        if (n & SolverNotes_LSla_N_TypeResolve)
            res += ("N_TypeResolve"_view + ", "_view);

        if (n & SolverNotes_LSla_N_TypeReopen)
            res += ("N_TypeReopen"_view + ", "_view);

        if (n & SolverNotes_LSla_N_DeadCode)
            res += ("N_DeadCode"_view + ", "_view);

        if (n & SolverNotes_LSla_N_DeadCall)
            res += ("N_DeadCall"_view + ", "_view);

        if (n & SolverNotes_LSla_N_DeadLet)
            res += ("N_DeadLet"_view + ", "_view);

        if (n & SolverNotes_LSla_N_DeadArrlit)
            res += ("N_DeadArrlit"_view + ", "_view);

        if (n & SolverNotes_LSla_N_DeadLoopInit)
            res += ("N_DeadLoopInit"_view + ", "_view);

        if (n & SolverNotes_LSla_N_DeadConv)
            res += ("N_DeadConv"_view + ", "_view);

        if (n & SolverNotes_LSla_N_NonTrivAutoCopy)
            res += ("N_NonTrivAutoCopy"_view + ", "_view);

        if (n & SolverNotes_LSla_N_RelaxRespec)
            res += ("N_RelaxRespec"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedImplicit)
            res += ("N_UnusedImplicit"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedCall)
            res += ("N_UnusedCall"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedDefer)
            res += ("N_UnusedDefer"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedTry)
            res += ("N_UnusedTry"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedAndOr)
            res += ("N_UnusedAndOr"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedIfElse)
            res += ("N_UnusedIfElse"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedArrlit)
            res += ("N_UnusedArrlit"_view + ", "_view);

        if (n & SolverNotes_LSla_N_UnusedLet)
            res += ("N_UnusedLet"_view + ", "_view);

        if (n & SolverNotes_LSla_N_BckMustSeq)
            res += ("N_BckMustSeq"_view + ", "_view);

        if (n & SolverNotes_LSla_N_AARMustSeq)
            res += ("N_AARMustSeq"_view + ", "_view);

        if (n & SolverNotes_LSla_N_AARSoftRisk)
            res += ("N_AARSoftRisk"_view + ", "_view);

        if (n & SolverNotes_LSla_N_MoveMustSeq)
            res += ("N_MoveMustSeq"_view + ", "_view);

        if (n & SolverNotes_LSla_N_McomUnwrapsLetdef)
            res += ("N_McomUnwrapsLetdef"_view + ", "_view);

        if (n & SolverNotes_LSla_N_SD_HasStaticInit)
            res += ("N_SD_HasStaticInit"_view + ", "_view);

        if (n & SolverNotes_LSla_N_SD_ExternPrivates)
            res += ("N_SD_ExternPrivates"_view + ", "_view);

        if (n & SolverNotes_LSla_N_COWRestrict)
            res += ("N_COWRestrict"_view + ", "_view);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

static Context_UXD9 compile_snippets_3QGL(fu::view<fu::str> sources, fu::vec<fu::str>&& fnames, Options_mg7V&& options)
{
    options.dev |= DevOptions_QEya_DEV_CG_LifetimeAnnots;
    /*MOV*/ Context_UXD9 ctx = clone_EF9m(CTX_PRELUDE);
    /*MOV*/ fu::str base_dir = (ctx.fudir + "__tests__/"_view);
    for (int i = 0; i < sources.size(); i++)
    {
        fu::vec_range<char> src = sources[i];
        fu::str fname = (starts_e85p(src, "//file "_view) ? fu::str(fu::get_range(src, 7, find_gxGf(src, '\n', src.size()))) : (x7E_rA00("_"_view, fu::i64dec(i)) + ".fu"_view));
        fnames.push((base_dir + fname));
    };
    ctx.base_dir = base_dir.destructive_move();
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        fu::vec_range<char> snippet = sources[i_1];
        fu::str src = ((i_1 == (sources.size() - 1)) ? ensure_main_3QGL(snippet) : fu::str(snippet));
        set_grPP(ctx.files, fnames[i_1], src);
        if (has_YIf6(snippet, "/*PRINT*/"_view))
            options.dev |= DevOptions_QEya_DEV_Print;

    };
    Context_UXD9 ctx_reverseBuildOrder = ((sources.size() > 1) ? clone_EF9m(ctx) : Context_UXD9{});
    compile_Tsi8(last_sbzM(fnames), ctx, options);
    if (sources.size() > 1)
    {
        for (int i_2 = 0; i_2 < sources.size(); i_2++)
        {
            fu::vec_range<char> fname = fnames[i_2];
            compile_Tsi8(fname, ctx_reverseBuildOrder, options);
        };
        fu::vec<fu::str> fwd = map_8dhb(ctx.modules);
        fu::vec<fu::str> rev = map_8dhb(ctx_reverseBuildOrder.modules);
        sort_lxmL(fwd);
        sort_n4Cf(rev);
        if (fwd.size() == rev.size())
        {
            for (int i_3 = 0; i_3 < ctx.modules.size(); i_3++)
            {
                if (!(fwd[i_3] == rev[i_3]))
                    fu::fail((((("compile_snippets: fwd != rev:"_view + "\n\nFWD:\n"_view) + fwd[i_3]) + "\n\nREV:\n"_view) + rev[i_3]));

            };
        }
        else
            fu::fail(fu::str(str_u8W3TZnkJC4));

    };
    for (int i_2 = 0; i_2 < ctx.modules.size(); i_2++)
    {
        Module_qqBh& module = ctx.modules.mutref(i_2);
        const SolverNotes_LSla notes = module.out.solve.notes;
        if (notes)
            module.out.cpp.src += (x7E_rA00("\n// "_view, str_kJvr(notes)) + "\n"_view);

    };
    return /*NRVO*/ ctx;
}

fu::str snippet2cpp_3QGL(fu::vec_range<char> src)
{
    const fu::str& fname = str_s5KECQeRZe7;
    Context_UXD9 ctx = compile_snippets_3QGL(fu::view<fu::str> {{ fu::str(src) }}, fu::vec<fu::str> {{ fu::str(fname) }}, Options_mg7V{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const Module_qqBh& module = ctx.modules[i];
        if (module.fname == fname)
            return fu::str(module.out.cpp.src);

    };
    return fu::str{};
}

                                #ifndef DEF_find_BNNwXhPzgU8
                                #define DEF_find_BNNwXhPzgU8
inline int find_BNNw(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_7SLc(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

static int unindent_left_3QGL(fu::view<char> src, const int i0)
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

                                #ifndef DEF___eQwyLf8GPl6
                                #define DEF___eQwyLf8GPl6
inline static fu::view<fu::str> _eQwy(fu::vec_range<char> substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}
                                #endif

                                #ifndef DEF_split_yvvq0ZGoCfa
                                #define DEF_split_yvvq0ZGoCfa
inline void split_yvvq(fu::vec_range<char> str, fu::view<char> sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = find_BNNw(str, sep, last)) >= 0))
        {
            _eQwy(fu::get_range(str, last, next), result);
            last = (next + N);
        };
    };
    if (last)
        _eQwy(fu::get_range(str, last), result);
    else
        _eQwy(str, result);

}
                                #endif

                                #ifndef DEF_split_t3LL2OMc5xa
                                #define DEF_split_t3LL2OMc5xa
inline fu::vec<fu::str> split_t3LL(fu::vec_range<char> str, fu::view<char> sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_yvvq(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_only_LjSjR97Sie3
                                #define DEF_only_LjSjR97Sie3
inline fu::vec_range<char> only_LjSj(fu::view<fu::str> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_rA00("len != 1: "_view, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF___roGS0ZIOci9
                                #define DEF___roGS0ZIOci9
inline static void _roGS(fu::vec_range_mut<char> part)
{
    part.shrink(unindent_left_3QGL(part, part.size()));
}
                                #endif

                                #ifndef DEF_each_UsRTRhl0QIl
                                #define DEF_each_UsRTRhl0QIl
inline void each_UsRT(fu::view_mut<fu::str> a)
{
    for (int i = 0; i < a.size(); i++)
        _roGS(a.mutref(i));

}
                                #endif

                                #ifndef DEF_first_kJ2bLzQncMe
                                #define DEF_first_kJ2bLzQncMe
inline fu::vec_range<char> first_kJ2b(fu::view<fu::str> s)
{
    if (s.size())
        return s[0];
    else
        fu::fail(fu::str("len == 0"_fu));

}
                                #endif

                                #ifndef DEF_join_yqDbqRmcQYi
                                #define DEF_join_yqDbqRmcQYi
inline fu::str join_yqDb(fu::view<fu::str> a, fu::view<char> sep)
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

                                #ifndef DEF_find_rkz0SQgq7mk
                                #define DEF_find_rkz0SQgq7mk
inline int find_rkz0(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_ZKsG(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_last_1k4v4bVA6y9
                                #define DEF_last_1k4v4bVA6y9
inline char last_1k4v(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail(fu::str("len == 0"_fu));

}
                                #endif

                                #ifndef DEF_ends_spjE8XDaau2
                                #define DEF_ends_spjE8XDaau2
inline bool ends_spjE(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_parse_O70XERaqBXj
                                #define DEF_parse_O70XERaqBXj
inline SolverNotes_LSla parse_O70X(fu::view<char> v)
{
    if (v == "N_FnRecursion"_view)
        return SolverNotes_LSla_N_FnRecursion;
    else if (v == "N_FnResolve"_view)
        return SolverNotes_LSla_N_FnResolve;
    else if (v == "N_FnReopen"_view)
        return SolverNotes_LSla_N_FnReopen;
    else if (v == "N_TypeRecursion"_view)
        return SolverNotes_LSla_N_TypeRecursion;
    else if (v == "N_TypeResolve"_view)
        return SolverNotes_LSla_N_TypeResolve;
    else if (v == "N_TypeReopen"_view)
        return SolverNotes_LSla_N_TypeReopen;
    else if (v == "N_DeadCode"_view)
        return SolverNotes_LSla_N_DeadCode;
    else if (v == "N_DeadCall"_view)
        return SolverNotes_LSla_N_DeadCall;
    else if (v == "N_DeadLet"_view)
        return SolverNotes_LSla_N_DeadLet;
    else if (v == "N_DeadArrlit"_view)
        return SolverNotes_LSla_N_DeadArrlit;
    else if (v == "N_DeadLoopInit"_view)
        return SolverNotes_LSla_N_DeadLoopInit;
    else if (v == "N_DeadConv"_view)
        return SolverNotes_LSla_N_DeadConv;
    else if (v == "N_NonTrivAutoCopy"_view)
        return SolverNotes_LSla_N_NonTrivAutoCopy;
    else if (v == "N_RelaxRespec"_view)
        return SolverNotes_LSla_N_RelaxRespec;
    else if (v == "N_UnusedImplicit"_view)
        return SolverNotes_LSla_N_UnusedImplicit;
    else if (v == "N_UnusedCall"_view)
        return SolverNotes_LSla_N_UnusedCall;
    else if (v == "N_UnusedDefer"_view)
        return SolverNotes_LSla_N_UnusedDefer;
    else if (v == "N_UnusedTry"_view)
        return SolverNotes_LSla_N_UnusedTry;
    else if (v == "N_UnusedAndOr"_view)
        return SolverNotes_LSla_N_UnusedAndOr;
    else if (v == "N_UnusedIfElse"_view)
        return SolverNotes_LSla_N_UnusedIfElse;
    else if (v == "N_UnusedArrlit"_view)
        return SolverNotes_LSla_N_UnusedArrlit;
    else if (v == "N_UnusedLet"_view)
        return SolverNotes_LSla_N_UnusedLet;
    else if (v == "N_BckMustSeq"_view)
        return SolverNotes_LSla_N_BckMustSeq;
    else if (v == "N_AARMustSeq"_view)
        return SolverNotes_LSla_N_AARMustSeq;
    else if (v == "N_AARSoftRisk"_view)
        return SolverNotes_LSla_N_AARSoftRisk;
    else if (v == "N_MoveMustSeq"_view)
        return SolverNotes_LSla_N_MoveMustSeq;
    else if (v == "N_McomUnwrapsLetdef"_view)
        return SolverNotes_LSla_N_McomUnwrapsLetdef;
    else if (v == "N_SD_HasStaticInit"_view)
        return SolverNotes_LSla_N_SD_HasStaticInit;
    else if (v == "N_SD_ExternPrivates"_view)
        return SolverNotes_LSla_N_SD_ExternPrivates;
    else if (v == "N_COWRestrict"_view)
        return SolverNotes_LSla_N_COWRestrict;

    return SolverNotes_LSla{};
}
                                #endif

                                #ifndef DEF_parseWild_MzSrKTznk91
                                #define DEF_parseWild_MzSrKTznk91
inline SolverNotes_LSla parseWild_MzSr(fu::view<char> v)
{
    SolverNotes_LSla result {};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '*')
        {
            fu::view<char> prefix = fu::get_view_start0(v, i);
            fu::view<char> suffix = fu::get_view(v, (i + 1));

            {

                {
                    fu::view<char> opt = "N_FnRecursion"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_FnRecursion;

                };

                {
                    fu::view<char> opt = "N_FnResolve"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_FnResolve;

                };

                {
                    fu::view<char> opt = "N_FnReopen"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_FnReopen;

                };

                {
                    fu::view<char> opt = "N_TypeRecursion"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_TypeRecursion;

                };

                {
                    fu::view<char> opt = "N_TypeResolve"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_TypeResolve;

                };

                {
                    fu::view<char> opt = "N_TypeReopen"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_TypeReopen;

                };

                {
                    fu::view<char> opt = "N_DeadCode"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_DeadCode;

                };

                {
                    fu::view<char> opt = "N_DeadCall"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_DeadCall;

                };

                {
                    fu::view<char> opt = "N_DeadLet"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_DeadLet;

                };

                {
                    fu::view<char> opt = "N_DeadArrlit"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_DeadArrlit;

                };

                {
                    fu::view<char> opt = "N_DeadLoopInit"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_DeadLoopInit;

                };

                {
                    fu::view<char> opt = "N_DeadConv"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_DeadConv;

                };

                {
                    fu::view<char> opt = "N_NonTrivAutoCopy"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_NonTrivAutoCopy;

                };

                {
                    fu::view<char> opt = "N_RelaxRespec"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_RelaxRespec;

                };

                {
                    fu::view<char> opt = "N_UnusedImplicit"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedImplicit;

                };

                {
                    fu::view<char> opt = "N_UnusedCall"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedCall;

                };

                {
                    fu::view<char> opt = "N_UnusedDefer"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedDefer;

                };

                {
                    fu::view<char> opt = "N_UnusedTry"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedTry;

                };

                {
                    fu::view<char> opt = "N_UnusedAndOr"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedAndOr;

                };

                {
                    fu::view<char> opt = "N_UnusedIfElse"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedIfElse;

                };

                {
                    fu::view<char> opt = "N_UnusedArrlit"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedArrlit;

                };

                {
                    fu::view<char> opt = "N_UnusedLet"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_UnusedLet;

                };

                {
                    fu::view<char> opt = "N_BckMustSeq"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_BckMustSeq;

                };

                {
                    fu::view<char> opt = "N_AARMustSeq"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_AARMustSeq;

                };

                {
                    fu::view<char> opt = "N_AARSoftRisk"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_AARSoftRisk;

                };

                {
                    fu::view<char> opt = "N_MoveMustSeq"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_MoveMustSeq;

                };

                {
                    fu::view<char> opt = "N_McomUnwrapsLetdef"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_McomUnwrapsLetdef;

                };

                {
                    fu::view<char> opt = "N_SD_HasStaticInit"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_SD_HasStaticInit;

                };

                {
                    fu::view<char> opt = "N_SD_ExternPrivates"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= SolverNotes_LSla_N_SD_ExternPrivates;

                };
                fu::view<char> opt = "N_COWRestrict"_view;
                if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                    result |= SolverNotes_LSla_N_COWRestrict;

            };
            return result;
        };
    };
    return parse_O70X(v);
}
                                #endif

                                #ifndef DEF_parse_oB5nnLRSmrb
                                #define DEF_parse_oB5nnLRSmrb
inline CGDefects_2L18 parse_oB5n(fu::view<char> v)
{
    if (v == "GNUStmtExpr"_view)
        return CGDefects_2L18_GNUStmtExpr;
    else if (v == "Goto"_view)
        return CGDefects_2L18_Goto;
    else if (v == "PointlessMustSeq"_view)
        return CGDefects_2L18_PointlessMustSeq;
    else if (v == "LocalConstBool"_view)
        return CGDefects_2L18_LocalConstBool;
    else if (v == "ConstCast"_view)
        return CGDefects_2L18_ConstCast;
    else if (v == "PointlessLocal"_view)
        return CGDefects_2L18_PointlessLocal;
    else if (v == "IrrelevantLiteral"_view)
        return CGDefects_2L18_IrrelevantLiteral;
    else if (v == "DuplicateFunctions"_view)
        return CGDefects_2L18_DuplicateFunctions;

    return CGDefects_2L18{};
}
                                #endif

                                #ifndef DEF_parseWild_toWzfjrqcG2
                                #define DEF_parseWild_toWzfjrqcG2
inline CGDefects_2L18 parseWild_toWz(fu::view<char> v)
{
    CGDefects_2L18 result {};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == '*')
        {
            fu::view<char> prefix = fu::get_view_start0(v, i);
            fu::view<char> suffix = fu::get_view(v, (i + 1));

            {

                {
                    fu::view<char> opt = "GNUStmtExpr"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= CGDefects_2L18_GNUStmtExpr;

                };

                {
                    fu::view<char> opt = "Goto"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= CGDefects_2L18_Goto;

                };

                {
                    fu::view<char> opt = "PointlessMustSeq"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= CGDefects_2L18_PointlessMustSeq;

                };

                {
                    fu::view<char> opt = "LocalConstBool"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= CGDefects_2L18_LocalConstBool;

                };

                {
                    fu::view<char> opt = "ConstCast"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= CGDefects_2L18_ConstCast;

                };

                {
                    fu::view<char> opt = "PointlessLocal"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= CGDefects_2L18_PointlessLocal;

                };

                {
                    fu::view<char> opt = "IrrelevantLiteral"_view;
                    if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                        result |= CGDefects_2L18_IrrelevantLiteral;

                };
                fu::view<char> opt = "DuplicateFunctions"_view;
                if (starts_e85p(opt, prefix) && ends_spjE(opt, suffix))
                    result |= CGDefects_2L18_DuplicateFunctions;

            };
            return result;
        };
    };
    return parse_oB5n(v);
}
                                #endif

static fu::str all_src_3QGL(fu::view<fu::str> sources)
{
    return join_yqDb(sources, "\n----\n"_view);
}

static fu::vec_range<char> this_src_3QGL(const int i, fu::view<fu::str> sources)
{
    return sources[i];
}

static fu::view<char> this_cpp_3QGL(const ModuleOutputs_wJzJ& out)
{
    return out.cpp.src;
}

static fu::str all_cpp_3QGL(const Context_UXD9& ctx)
{
    return join_yqDb(map_8dhb(ctx.modules), "\n----\n"_view);
}

                                #ifndef DEF_STOP_t6zJuh5vGq3
                                #define DEF_STOP_t6zJuh5vGq3
[[noreturn]] inline static fu::never STOP_t6zJ(fu::view<char> reason, fu::view<char> x, const Context_UXD9& ctx, fu::view<fu::str> sources)
{
    fu::fail(((((((reason + ": `;; "_view) + x) + "` in:\n"_view) + all_src_3QGL(sources)) + "\n\nOutput is:\n\n"_view) + all_cpp_3QGL(ctx)));
}
                                #endif

                                #ifndef DEF_x21x3D_lsKv82TBH74
                                #define DEF_x21x3D_lsKv82TBH74
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_erT9(a, b);
}
                                #endif

                                #ifndef DEF___1Y6sk8dWN06
                                #define DEF___1Y6sk8dWN06
inline static void _1Y6s(fu::view<char> x, const Context_UXD9& ctx, int& expect_alloc_count, int& expect_alloc_bytes, fu::view<fu::str> sources)
{
    const SolverNotes_LSla note = parseWild_MzSr(x);
    const int idx = (!note ? find_ZKsG(x, ' ') : 0);
    if (idx < 0)
        fu::fail(((("Invalid ;; CHECK, no argument: `;; "_view + x) + "` in:\n"_view) + all_src_3QGL(sources)));
    else
    {
        fu::view<char> cmd = fu::get_view_start0(x, idx);
        fu::view<char> rest = fu::get_view(x, (idx + 1));
        if (cmd == "ALLOCS"_view)
        {
            int offset = 0;
            const int first = parse10s32_V5Iu(offset, rest);
            const int second = (((offset < rest.size()) && (rest[offset++] == '/')) ? parse10s32_V5Iu(offset, rest) : -1);
            expect_alloc_count += first;
            expect_alloc_bytes += ((second < 0) ? (first * (128 - 16)) : second);
            if (!(offset == rest.size()))
                fu::fail((("Invalid ;; ALLOCS, parse leftovers in: `;; "_view + x) + "`"_view));

        }
        else
        {
            bool found = false;
            for (int i = 0; i < sources.size(); i++)
            {
                const ModuleOutputs_wJzJ& out = ctx.modules[(i + 1)].out;
                if (note)
                {
                    if (out.solve.notes & note)
                        return;
                    else
                        fu::fail(((((("Expected note not listed: "_view + qBAD_e44U(x)) + " in:\n"_view) + this_src_3QGL(i, sources)) + "\n\nOutput is:\n\n"_view) + this_src_3QGL(i, sources)));

                }
                else if ((found = has_YIf6(this_cpp_3QGL(out), rest)))
                    break;

            };
            if (cmd == "EXPECT"_view)
            {
                if (!(found))
                    STOP_t6zJ("EXPECT mismatch"_view, x, ctx, sources);

            }
            else if (cmd == "BROKEN"_view)
            {
                if (found)
                    STOP_t6zJ("STILL BROKEN"_view, x, ctx, sources);
                else
                    STOP_t6zJ("BROKEN mismatch"_view, x, ctx, sources);

            }
            else if (cmd != "TODO"_view)
                STOP_t6zJ("Unknown ;; CHECK"_view, x, ctx, sources);
            else if (found)
                STOP_t6zJ("TODO test is actually passing"_view, x, ctx, sources);

        };
    };
}
                                #endif

                                #ifndef DEF_each_GQQH6UzP7Uf
                                #define DEF_each_GQQH6UzP7Uf
inline void each_GQQH(fu::view<fu::str> a, const Context_UXD9& ctx, int& expect_alloc_count, int& expect_alloc_bytes, fu::view<fu::str> sources)
{
    for (int i = 0; i < a.size(); i++)
        _1Y6s(a[i], ctx, expect_alloc_count, expect_alloc_bytes, sources);

}
                                #endif

extern const fu::str DEFAULT_WORKSPACE;
                                #ifndef DEF_str_7z76UKwnEX4
                                #define DEF_str_7z76UKwnEX4
inline fu::str str_7z76(const CGDefects_2L18 n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & CGDefects_2L18_GNUStmtExpr)
            res += ("GNUStmtExpr"_view + ", "_view);

        if (n & CGDefects_2L18_Goto)
            res += ("Goto"_view + ", "_view);

        if (n & CGDefects_2L18_PointlessMustSeq)
            res += ("PointlessMustSeq"_view + ", "_view);

        if (n & CGDefects_2L18_LocalConstBool)
            res += ("LocalConstBool"_view + ", "_view);

        if (n & CGDefects_2L18_ConstCast)
            res += ("ConstCast"_view + ", "_view);

        if (n & CGDefects_2L18_PointlessLocal)
            res += ("PointlessLocal"_view + ", "_view);

        if (n & CGDefects_2L18_IrrelevantLiteral)
            res += ("IrrelevantLiteral"_view + ", "_view);

        if (n & CGDefects_2L18_DuplicateFunctions)
            res += ("DuplicateFunctions"_view + ", "_view);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

static TODO_FIX_Tuple_JR9M compile_build_and_run_3QGL(fu::view<fu::str> sources, const Options_mg7V& options, const DEV_OnFail_3YLB onfail, const CGDefects_2L18 ok_defects, fu::view<fu::str> expectations)
{
    /*MOV*/ Context_UXD9 ctx = compile_snippets_3QGL(sources, fu::vec<fu::str>{}, Options_mg7V(options));
    int expect_alloc_count = 0;
    int expect_alloc_bytes = 0;
    each_GQQH(expectations, ctx, expect_alloc_count, expect_alloc_bytes, sources);
    const bool run = true;
    fu::view<char> fudir = ctx.fudir;
    const TestOutput_TzQt debug_output = build_uGHE(fu::str(DEFAULT_WORKSPACE), fudir, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, "debug"_view, onfail, run, false, false, false, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);
    build_uGHE(fu::str(DEFAULT_WORKSPACE), fudir, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::str{}, fu::view<char>{}, fu::view<char>{}, onfail, run, false, false, false, fu::view<fu::str>{}, fu::view<fu::str>{}, ctx);
    if (expect_alloc_count)
    {
        const int actual_alloc_count = (debug_output.uniq_count + debug_output.arc_count);
        const int actual_alloc_bytes = (debug_output.uniq_bytes + debug_output.arc_bytes);
        if ((actual_alloc_count != expect_alloc_count) || (actual_alloc_bytes != expect_alloc_bytes))
            fu::fail((x7E_rA00((x7E_rA00(((x7E_rA00((x7E_rA00(("ALLOC mismatch:\n"_view + "\n\tactual_alloc_count("_view), fu::i64dec(actual_alloc_count)) + ") != expect_alloc_count("_view), fu::i64dec(expect_alloc_count)) + ") ||"_view) + "\n\tactual_alloc_bytes("_view), fu::i64dec(actual_alloc_bytes)) + ") != expect_alloc_bytes("_view), fu::i64dec(expect_alloc_bytes)) + ")"_view));

    };

    {
        CGDefects_2L18 defects {};
        for (int i = 0; i < sources.size(); i++)
        {
            const CodegenOutput_OFce& cpp = ctx.modules[(i + 1)].out.cpp;
            defects |= cpp.defects;
        };
        const CGDefects_2L18 unexpected = CGDefects_2L18((defects & CGDefects_2L18(~ok_defects)));
        const CGDefects_2L18 unnecessary = CGDefects_2L18((CGDefects_2L18(~defects) & ok_defects));
        if (unexpected)
            fu::fail(((((("Unwanted CGDefect: "_view + qBAD_e44U(str_7z76(unexpected))) + " in:\n"_view) + all_src_3QGL(sources)) + "\n\nOutput is:\n\n"_view) + all_cpp_3QGL(ctx)));
        else if (unnecessary)
            fu::fail(((((("Unnecessary CGDefect annotation: "_view + qID_e44U(str_7z76(unnecessary))) + " in:\n"_view) + all_src_3QGL(sources)) + "\n\nOutput is:\n\n"_view) + all_cpp_3QGL(ctx)));

    };
    return TODO_FIX_Tuple_JR9M { static_cast<Context_UXD9&&>(ctx), TestOutput_TzQt(debug_output) };
}

static fu::vec_range<char> ERR_TRIM_3QGL(fu::vec_range<char> e)
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
        return fu::get_range(e, start);
    else
        fu::fail(("FAIL: Error does not start with an `dir/file.fu@line:col` marker:\n"_view + e));

}

static fu::str ERR_STRIP_ANSI_3QGL(/*MOV*/ fu::str&& e)
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
    return e.destructive_move();
}

static fu::str ERR_STRIP_SNIPPETS_3QGL(/*MOV*/ fu::str&& e)
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
    return e.destructive_move();
}

                                #ifndef DEF_starts_SfbfOAVfSee
                                #define DEF_starts_SfbfOAVfSee
inline bool starts_Sfbf(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_ends_L30JVW8oAb6
                                #define DEF_ends_L30JVW8oAb6
inline bool ends_L30J(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_split_kfES3Koo5I5
                                #define DEF_split_kfES3Koo5I5
inline void split_kfES(fu::vec_range<char> str, const char sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    while (((next = find_rkz0(str, sep, last)) >= 0))
    {
        _eQwy(fu::get_range(str, last, next), result);
        last = (next + N);
    };
    if (last)
        _eQwy(fu::get_range(str, last), result);
    else
        _eQwy(str, result);

}
                                #endif

                                #ifndef DEF_split_Gbk9Z7dwor4
                                #define DEF_split_Gbk9Z7dwor4
inline fu::vec<fu::str> split_Gbk9(fu::vec_range<char> str, const char sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_kfES(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

static bool check_3QGL(fu::vec_range<char> word, fu::view<char> actual)
{
    const int pipe = find_ZKsG(word, '|');
    if ((pipe > 1) && starts_Sfbf(word, '(') && ends_L30J(word, ')'))
    {
        fu::vec<fu::str> alternatives = split_Gbk9(fu::get_range(word, 1, (word.size() - 1)), '|');
        for (int i = 0; i < alternatives.size(); i++)
        {
            if (check_3QGL(alternatives[i], actual))
                return true;

        };
        return false;
    }
    else
    {
        fu::str expect = lower_KPhi(fu::str(word));
        return has_YIf6(actual, expect);
    };
}

static void verify_errmsg_3QGL(fu::view<char> topic, fu::vec_range<char> e, fu::vec_range<char> msg)
{
    fu::str actual = lower_KPhi(ERR_STRIP_SNIPPETS_3QGL(ERR_STRIP_ANSI_3QGL(fu::str(ERR_TRIM_3QGL(e)))));
    bool BUG_ok = false;
    int m0 = -1;
    for (int m1 = 0; (m1 <= msg.size()); m1++)
    {
        const char c = ((m1 < msg.size()) ? msg[m1] : ' ');
        if ((int(fu::u8(c)) <= 32))
        {
            if ((m0 >= 0))
            {
                fu::vec_range<char> exact = fu::get_range(msg, m0, m1);
                if (exact == "BUG"_view)
                    BUG_ok = true;

                if (!check_3QGL(exact, actual))
                    fu::fail((((((((topic + " mismatch:\n\n    Expected error keyword:\n        "_view) + qBAD_e44U(exact)) + " from pattern <fail"_view) + qBAD_e44U(msg)) + ">"_view) + "\n\n    ... not present in error message:\n\n"_view) + e));

            };
            m0 = -1;
        }
        else if (m0 < 0)
            m0 = m1;

    };
    if (!BUG_ok && has_YIf6(e, "BUG"_view))
        fu::fail(((topic + " error message contains BUG:\n\n"_view) + e));

}

static fu::str ERR_KEY_3QGL(fu::view<fu::str> sources)
{
    /*MOV*/ fu::str key {};
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_3QGL(src, src.size());
        key += fu::get_view_start0(src, end);
    };
    return /*NRVO*/ key;
}

Context_UXD9 ZERO_3QGL(fu::vec<fu::str>&& sources, Options_mg7V&& options, fu::vec_range<char> expect_fail, TestDiffs_EVlo& testdiffs)
{
    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            fu::vec_range<char> src = sources[i];
            int start0 = find_7SLc(src, "<fail"_view);
            if (start0 < 0)
                break;
            else
            {
                int end0 = find_BNNw(src, "</fail>"_view, start0);
                if ((end0 >= 0))
                {
                    int start1 = (start0 + 5);
                    while (src[start1++] != '>');
                    fu::str msg = fu::str(fu::get_range(src, (start0 + 5), (start1 - 1)));
                    if (msg)
                    {
                        if (msg[0] == ' ')
                        {
                            const int end1 = (end0 + 7);
                            start0 = unindent_left_3QGL(src, start0);
                            end0 = unindent_left_3QGL(src, end0);
                            fu::str prefix = fu::str(fu::get_range(src, 0, start0));
                            fu::str suffix = fu::str(fu::get_range(src, end1, src.size()));
                            fu::vec<fu::str> split = split_t3LL(fu::get_range(src, start1, end0), "<pass/>"_view);
                            if (split.size() > 1)
                            {
                                if (split.size() < 3)
                                {
                                    fu::vec<fu::str> fails = split_t3LL(split[0], "<fail/>"_view);
                                    split.shift();
                                    fu::view<char> pass = only_LjSj(split);
                                    for (int j = fails.size(); j-- > 0; )
                                    {
                                        fu::view<char> fail = fails[j];
                                        const int end = unindent_left_3QGL(fail, fail.size());
                                        sources.mutref(i) = ((prefix + fu::get_view_start0(fail, end)) + suffix);
                                        Options_mg7V options_1 = options;
                                        options_1.dev |= DevOptions_QEya_DEV_ExpectFail;
                                        ZERO_3QGL(fu::vec<fu::str>(sources), Options_mg7V(options_1), msg, testdiffs);
                                    };
                                    const int end = unindent_left_3QGL(pass, pass.size());
                                    sources.mutref(i) = ((prefix + fu::get_view_start0(pass, end)) + suffix);
                                }
                                else
                                    fu::fail(fu::str(str_Q5ZEl4gigu9));

                            }
                            else
                                fu::fail(fu::str(str_waiO6lvzki6));

                        }
                        else
                            fu::fail((("Bad <fail keywords>: `<fail"_view + msg) + ">`."_view));

                    }
                    else
                        fu::fail(fu::str(str_JNntOGAZ07e));

                }
                else
                    fu::fail(fu::str(str_fe9WBO6ECF2));

            };
        };
    };
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        for (; ; )
        {
            fu::vec_range<char> src = sources[i_1];
            int start0 = find_7SLc(src, "<alt>"_view);
            if (start0 < 0)
                break;
            else
            {
                int end0 = find_BNNw(src, "</alt>"_view, start0);
                if ((end0 >= 0))
                {
                    const int start1 = (start0 + 5);
                    const int end1 = (end0 + 6);
                    start0 = unindent_left_3QGL(src, start0);
                    end0 = unindent_left_3QGL(src, end0);
                    fu::str prefix = fu::str(fu::get_range(src, 0, start0));
                    fu::str suffix = fu::str(fu::get_range(src, end1, src.size()));
                    fu::vec<fu::str> split = split_t3LL(fu::get_range(src, start1, end0), "<alt/>"_view);
                    if (split.size() < 2)
                    {
                        split += fu::str{};
                    };
                    for (int j = split.size(); j-- > 0; )
                    {
                        fu::view<char> part = split[j];
                        const int end = unindent_left_3QGL(part, part.size());
                        sources.mutref(i_1) = ((prefix + fu::get_view_start0(part, end)) + suffix);
                        if (j)
                        {
                            ZERO_3QGL(fu::vec<fu::str>(sources), Options_mg7V(options), expect_fail, testdiffs);
                        };
                    };
                }
                else
                    fu::fail(fu::str(str_4CBqFJNR9B3));

            };
        };
    };
    for (int i_2 = 0; i_2 < sources.size(); i_2++)
    {
        for (; ; )
        {
            fu::vec_range<char> src = sources[i_2];
            int start0 = find_7SLc(src, "<flip>"_view);
            if (start0 < 0)
                break;
            else
            {
                int end0 = find_BNNw(src, "</flip>"_view, start0);
                if ((end0 >= 0))
                {
                    const int start1 = (start0 + 6);
                    const int end1 = (end0 + 7);
                    start0 = unindent_left_3QGL(src, start0);
                    end0 = unindent_left_3QGL(src, end0);
                    fu::str prefix = fu::str(fu::get_range(src, 0, start0));
                    fu::str suffix = fu::str(fu::get_range(src, end1, src.size()));
                    fu::vec<fu::str> split = split_t3LL(fu::get_range(src, start1, end0), "<flip/>"_view);
                    if (split.size() != 2)
                        fu::fail(fu::str(str_DQQHz8ffyB4));
                    else
                    {
                        each_UsRT(split);
                        for (int j = split.size(); j-- > 0; )
                        {
                            fu::str a = fu::str(split[0]);
                            fu::str b = fu::str(split[1]);
                            if (j)
                                a.swap(b);

                            sources.mutref(i_2) = (((prefix + a) + b) + suffix);
                            if (j)
                            {
                                ZERO_3QGL(fu::vec<fu::str>(sources), Options_mg7V(options), expect_fail, testdiffs);
                            };
                        };
                    };
                }
                else
                    fu::fail(fu::str(str_CGSb369d73f));

            };
        };
    };
    for (int i_3 = 0; i_3 < sources.size(); i_3++)
    {
        for (; ; )
        {
            fu::vec_range<char> src = sources[i_3];
            int start0 = find_7SLc(src, "<split/>"_view);
            const int start1 = (start0 + 8);
            if (start0 < 0)
                break;
            else
            {
                const int start00 = start0;
                while (start0 && (src[(start0 - 1)] == ' '))
                    start0--;

                /*MOV*/ fu::str moduleA = fu::str(fu::get_range(src, 0, start0));
                /*MOV*/ fu::str moduleB = ((x7E_rA00((fu::get_view(src, start0, start00) + "pub import _"_view), fu::i64dec(i_3)) + ";"_view) + fu::get_view(src, start1));
                /*MOV*/ fu::str without = (fu::get_view_start0(src, start0) + fu::get_view(src, start1));
                sources.mutref(i_3) = without.destructive_move();
                ZERO_3QGL(fu::vec<fu::str>(sources), Options_mg7V(options), expect_fail, testdiffs);
                sources.mutref(i_3) = moduleA.destructive_move();
                sources.insert((i_3 + 1), moduleB.destructive_move());
            };
        };
    };
    if (!has_YIf6(first_kJ2b(sources), ";; EXPECT"_view))
    {
        if (DevOptions_QEya(~options.dev) & DevOptions_QEya_DEV_DontFoldLiterals)
        {
            Options_mg7V options_1 = options;
            options_1.dev |= DevOptions_QEya_DEV_DontFoldLiterals;
            ZERO_3QGL(fu::vec<fu::str>(sources), Options_mg7V(options_1), expect_fail, testdiffs);
        };
    };
    DEV_OnFail_3YLB onfail = DEV_OnFail_3YLB_OnFail_PrintOutput;
    if (!DevOptions_QEya((options.dev & DevOptions_QEya_DEV_ExpectFail)))
    {
        onfail |= DEV_OnFail_3YLB_OnFail_WriteRepro;
        options.dev |= DevOptions_QEya_DEV_HappyPathOnly;
    };
    fu_DEFER_IF_ERR(if (!DevOptions_QEya((options.dev & DevOptions_QEya_DEV_ExpectFail)))
    {
        fu::str x {};
        fu::println(fu::view<fu::str> {{ (x = ("\nFAILING TESTCASE:\n"_view + join_yqDb(sources, "\n"_view)), x).const_cast_mut().destructive_move() }});
    });
    CGDefects_2L18 ok_defects {};
    fu::vec<fu::str> expectations {};
    for (int i_4 = 0; i_4 < sources.size(); i_4++)
    {
        fu::vec_range_mut<char> src = sources.mutref(i_4);

        {
            int end = src.size();
            for (int r = src.size(); (r-- > 0) && (src[r] == ' '); )
                end = r;

            src.shrink(end);
        };
        int start = 0;
        while (((start = find_BNNw(src, " ;; "_view, start)) >= 0))
        {
            int end = find_rkz0(src, '\n', (start + 4));
            if (end < 0)
                end = src.size();

            /*MOV*/ fu::str annot = fu::str(fu::get_range(src, (start + 4), end));
            while (annot && (last_1k4v(annot) <= ' '))
                annot.pop();

            if (annot[0] == '!')
            {
                fu::view<char> annot_1 = fu::get_view(annot, 1);
                const SolverNotes_LSla notes = parseWild_MzSr(annot_1);
                if (notes)
                    options.break_notes |= notes;
                else
                {
                    const CGDefects_2L18 defects = parseWild_toWz(annot_1);
                    if (defects)
                        options.break_defects |= defects;
                    else
                        fu::fail((("Bad break_note/defect: `;; "_view + annot_1) + "`."_view));

                };
            }
            else
            {
                const CGDefects_2L18 defect = parseWild_toWz(annot);
                if (defect)
                    ok_defects |= defect;
                else
                    expectations += annot.destructive_move();

            };
            src.mutref((start + 1)) = '/';
            src.mutref((start + 2)) = '/';
            start = end;
        };
    };
    if (expect_fail)
    {

        try
        {
            compile_build_and_run_3QGL(sources, options, onfail, ok_defects, expectations);
        }
        catch (const std::exception& o_0)
        {
            fu::str e = fu::to_str(o_0.what());

        {
            verify_errmsg_3QGL("<fail>"_view, e, expect_fail);
            set_next_pXri(testdiffs, ((ERR_KEY_3QGL(sources) + "\n---- <fail> ----\n"_view) + e));
            return Context_UXD9{};
        }
        }
;
        fu::fail(("<fail> does not throw:\n"_view + join_yqDb(sources, "\n\n"_view)));
    }
    else
    {
        /*MOV*/ TODO_FIX_Tuple_JR9M _ = compile_build_and_run_3QGL(sources, options, onfail, ok_defects, expectations);

        {
            fu::str input {};
            fu::str output {};
            for (int i_5 = 0; i_5 < sources.size(); i_5++)
            {
                input += sources[i_5];
                const Module_qqBh& m = _.ctx.modules[((i_5 + _.ctx.modules.size()) - sources.size())];
                output += m.out.cpp.src;
                if (m.stats.lex.alloc_count)
                    input += (x7E_rA00((x7E_rA00(("lex"_view + ":\t"_view), fu::i64dec(m.stats.lex.alloc_count)) + "\t"_view), fu::i64dec(m.stats.lex.alloc_bytes)) + "\n"_view);

                if (m.stats.parse.alloc_count)
                    input += (x7E_rA00((x7E_rA00(("parse"_view + ":\t"_view), fu::i64dec(m.stats.parse.alloc_count)) + "\t"_view), fu::i64dec(m.stats.parse.alloc_bytes)) + "\n"_view);

                if (m.stats.solve.alloc_count)
                    input += (x7E_rA00((x7E_rA00(("solve"_view + ":\t"_view), fu::i64dec(m.stats.solve.alloc_count)) + "\t"_view), fu::i64dec(m.stats.solve.alloc_bytes)) + "\n"_view);

                if (m.stats.codegen.alloc_count)
                    input += (x7E_rA00((x7E_rA00(("codegen"_view + ":\t"_view), fu::i64dec(m.stats.codegen.alloc_count)) + "\t"_view), fu::i64dec(m.stats.codegen.alloc_bytes)) + "\n"_view);

            };
            set_next_pXri(testdiffs, ((((input + "\n---- "_view) + into_testdiff_6GsP(_.debug_output)) + " ----\n"_view) + output));
        };
        return static_cast<Context_UXD9&&>(_.ctx);
    };
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

                                #ifndef DEF_replace_4fXW2QLS6G4
                                #define DEF_replace_4fXW2QLS6G4
inline fu::str replace_4fXW(fu::vec_range<char> str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu::str result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = find_BNNw(str, all, last)) >= 0))
            {

                {
                    fu::view<char> substr = fu::get_view(str, last, next);
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
            fu::view<char> substr = fu::get_view(str, last);
            result += with;
            result += substr;
        }
        else
            return fu::str(str);

    };
    return /*NRVO*/ result;
}
                                #endif

static fu::str indent_3QGL(fu::vec_range<char> src)
{
    return replace_4fXW(src, "\n"_view, "\n\t"_view);
}

void ZERO_SAME_3QGL(fu::view<fu::vec<fu::str>> alts, TestDiffs_EVlo& testdiffs)
{
    fu::vec<Module_qqBh> expect = ZERO_3QGL(fu::vec<fu::str>(alts[0]), Options_mg7V{}, (*(fu::str*)fu::NIL), testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu::vec<Module_qqBh> actual = compile_snippets_3QGL(alts[i], fu::vec<fu::str>{}, Options_mg7V{}).modules;
        if (expect.size() != actual.size())
            fu::fail(fu::str(str_bUXE6bG3EAl));
        else
        {
            for (int m = 0; m < actual.size(); m++)
            {
                const fu::str& x = expect[m].out.cpp.src;
                const fu::str& a = actual[m].out.cpp.src;
                if (x != a)
                {
                    write_VWJw(fu::str("./expect.diff"_fu), ((strip_e44U(inspect_wkVO(expect[m])) + "\n\n----------------\n\n"_view) + x), RW_RW_RW);
                    write_VWJw(fu::str("./actual.diff"_fu), ((strip_e44U(inspect_wkVO(actual[m])) + "\n\n----------------\n\n"_view) + a), RW_RW_RW);
                    fu::fail((((x7E_rA00((((x7E_rA00(((x7E_rA00("ZERO_SAME: alts["_view, fu::i64dec(i)) + "] mismatch at:\n"_view) + "\nexpect["_view), fu::i64dec(m)) + "]:\n\t"_view) + indent_3QGL(x)) + "\nactual["_view), fu::i64dec(m)) + "]:\n\t"_view) + indent_3QGL(a)) + "\n"_view));
                };
            };
        };
    };
}

static fu::view<char> ERR_TRIM_5TaN(fu::view<char> e)
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
        return fu::get_view(e, start);
    else
        fu::fail(("FAIL: Error does not start with an `dir/file.fu@line:col` marker:\n"_view + e));

}

void TODO_3QGL(fu::vec_range<fu::str> sources, fu::vec_range<char> currently, TestDiffs_EVlo& testdiffs)
{

    try
    {
    {
        ZERO_3QGL(fu::vec<fu::str>(sources), Options_mg7V { Lint_Q9R1{}, SolverNotes_LSla{}, CGDefects_2L18{}, DevOptions_QEya_DEV_ExpectFail, 0u }, (*(fu::str*)fu::NIL), testdiffs);
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str e = fu::to_str(o_0.what());

    {
        verify_errmsg_3QGL("TODO()"_view, e, (currently ? currently : str_Rl0TvwZa8F9));
        set_next_pXri(testdiffs, ((ERR_KEY_3QGL(sources) + "\n---- TODO: ----\n"_view) + ERR_TRIM_5TaN(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_view + join_yqDb(sources, "\n\n"_view)));
}

Context_UXD9 ZERO_5TaN(fu::vec_range<char> src, TestDiffs_EVlo& testdiffs)
{
    return ZERO_3QGL(fu::vec<fu::str> {{ fu::str(src) }}, Options_mg7V{}, (*(fu::str*)fu::NIL), testdiffs);
}

void TODO_5TaN(fu::vec_range<char> src, fu::vec_range<char> currently, TestDiffs_EVlo& testdiffs)
{
    TODO_3QGL(fu::vec<fu::str> {{ fu::str(src) }}, currently, testdiffs);
}

void ZERO_SAME_5TaN(fu::view<fu::str> alts, TestDiffs_EVlo& testdiffs)
{
    fu::vec<fu::vec<fu::str>> wrap {};
    for (int i = 0; i < alts.size(); i++)
    {
        wrap += fu::vec<fu::str> {{ fu::str(alts[i]) }};
    };
    ZERO_SAME_3QGL(wrap, testdiffs);
}

#endif
