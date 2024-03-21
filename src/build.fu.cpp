#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/process.h>
#include <fu/vec_range.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct TestOutput_TzQt;
typedef fu::u8 DEV_OnFail_3YLB;
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
struct TranslationUnit_meNO;
typedef fu::u8 CacheCleanup_Oz5J;
struct ModuleSortHelper_Wn5X;
struct FileInvariants_Nycb;
struct Stat_Xqs0;
struct Timespec_nzle;
struct Map_190v;
struct Set_XshD;
struct BuildError_BKQu;
TEA_87LR hash_s9RC(fu::vec_range<char>);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
fu::str read_VWJw(fu::str&&);
int unlink_VWJw(fu::str&&);
fu::str qBAD_e44U(fu::view<char>);
fu::vec_range<char> filename_qZI0(fu::vec_range<char>);
fu::vec_range<char> dirname_qZI0(fu::vec_range<char>);
int stat_VWJw(fu::str&&, Stat_Xqs0&);
fu::str qID_e44U(fu::view<char>);
int read_eyt0(fu::str&&, fu::vec_range_mut<char>, int64_t);
fu::str qKW_e44U(fu::view<char>);
static uint64_t visitInclude_uGHE(fu::vec_range<char>, fu::vec_range<char>, fu::view<char>, fu::vec<FileInvariants_Nycb>&, Map_190v&);
void hash_qRo1(TEA_87LR&, uint64_t);
int mkdir_p_5u3x(fu::str&&, unsigned);
void hash_l6RU(TEA_87LR&, fu::vec_range<char>);
fu::str digest16_lweH(uint64_t, int);
void hash_lweH(TEA_87LR&, const TEA_87LR&);
int64_t size_VWJw(fu::str&&);
uint64_t next_u64_qB1H();
int write_VWJw(fu::str&&, fu::view<char>, unsigned);
int rename_VWJw(fu::str&&, fu::str&&);
double hr_0pZh();
int exec_G82R(fu::str&&, int&, fu::vec_range_mut<char>);
int spawn_0Hw8(fu::vec<fu::str>&&, fu::vec_range_mut<char>, fu::vec_range_mut<char>, int&);
int chmod_VWJw(fu::str&&, unsigned);
bool looks_legit_6GsP(int64_t);
TestOutput_TzQt parse_6GsP(fu::vec_range<char>);
TestOutput_TzQt from_6GsP(fu::vec_range<char>, int);
fu::str serialize_6GsP(const TestOutput_TzQt&);
fu::str relative_qZI0(fu::view<char>, fu::view<char>);

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

                                #ifndef DEF_CacheCleanup_Oz5J
                                #define DEF_CacheCleanup_Oz5J
inline constexpr CacheCleanup_Oz5J CacheCleanup_Oz5J_Obj = CacheCleanup_Oz5J(1u);
inline constexpr CacheCleanup_Oz5J CacheCleanup_Oz5J_Cpp = CacheCleanup_Oz5J(2u);

inline constexpr CacheCleanup_Oz5J MASK_CacheCleanup_Oz5J
    = CacheCleanup_Oz5J_Obj
    | CacheCleanup_Oz5J_Cpp;
                                #endif

                                #ifndef DEF_TranslationUnit_meNOsbJkt18
                                #define DEF_TranslationUnit_meNOsbJkt18
struct TranslationUnit_meNO
{
    fu::str human;
    fu::str src;
    fu::str iquote;
    TEA_87LR includes_hash;
    fu::str src_output_file;
    fu::str cpp_cache_file;
    fu::str obj_cache_file;
    fu::str tmp_file;
    CacheCleanup_Oz5J cache_cleanup;
    fu::str HACK_pkgConfig_cflags;
    explicit operator bool() const noexcept
    {
        return false
            || human
            || src
            || iquote
            || includes_hash
            || src_output_file
            || cpp_cache_file
            || obj_cache_file
            || tmp_file
            || cache_cleanup
            || HACK_pkgConfig_cflags
        ;
    }
};
                                #endif

                                #ifndef DEF_ModuleSortHelper_Wn5XrLGMhBk
                                #define DEF_ModuleSortHelper_Wn5XrLGMhBk
struct ModuleSortHelper_Wn5X
{
    int compile_index;
    explicit operator bool() const noexcept
    {
        return false
            || compile_index
        ;
    }
};
                                #endif

                                #ifndef DEF_Timespec_nzleFdttT14
                                #define DEF_Timespec_nzleFdttT14
struct Timespec_nzle
{
    unsigned sec;
    unsigned nsec;
    explicit operator bool() const noexcept
    {
        return false
            || sec
            || nsec
        ;
    }
};
                                #endif

                                #ifndef DEF_Stat_Xqs0yteXk28
                                #define DEF_Stat_Xqs0yteXk28
struct Stat_Xqs0
{
    int64_t size;
    Timespec_nzle atime;
    Timespec_nzle mtime;
    Timespec_nzle ctime;
    explicit operator bool() const noexcept
    {
        return false
            || size
            || atime
            || mtime
            || ctime
        ;
    }
};
                                #endif

                                #ifndef DEF_FileInvariants_NycbWftypD1
                                #define DEF_FileInvariants_NycbWftypD1
struct FileInvariants_Nycb
{
    fu::str path;
    Stat_Xqs0 stat;
    explicit operator bool() const noexcept
    {
        return false
            || path
            || stat
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

                                #ifndef DEF_Map_190vconBYM2
                                #define DEF_Map_190vconBYM2
struct Map_190v
{
    Set_XshD keys;
    fu::vec<uint64_t> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_BuildError_BKQuuI64Mz1
                                #define DEF_BuildError_BKQuuI64Mz1
struct BuildError_BKQu
{
    int code;
    fu::str cpp;
    fu::str stdout;
    explicit operator bool() const noexcept
    {
        return false
            || code
            || cpp
            || stdout
        ;
    }
};
                                #endif

                                #ifndef STR_DXqe975g894
                                #define STR_DXqe975g894
static const fu::str str_DXqe975g894 fu_INIT_PRIORITY(1005) { "No workspace directory provided."_fu };
                                #endif

                                #ifndef STR_c0YW1OlZqe4
                                #define STR_c0YW1OlZqe4
static const fu::str str_c0YW1OlZqe4 fu_INIT_PRIORITY(1005) { "-O3 -DNDEBUG -fno-math-errno "_fu };
                                #endif

                                #ifndef STR_p8131mZs3C2
                                #define STR_p8131mZs3C2
static const fu::str str_p8131mZs3C2 fu_INIT_PRIORITY(1005) { "-Og "_fu };
                                #endif

                                #ifndef STR_9EH8A0P6J72
                                #define STR_9EH8A0P6J72
static const fu::str str_9EH8A0P6J72 fu_INIT_PRIORITY(1005) { "include/fu/_sharedlib.cpp"_fu };
                                #endif

                                #ifndef STR_guvpxVzy8u5
                                #define STR_guvpxVzy8u5
static const fu::str str_guvpxVzy8u5 fu_INIT_PRIORITY(1005) { "include/fu/_fulib.cpp"_fu };
                                #endif

                                #ifndef STR_SwaHKZwsGC2
                                #define STR_SwaHKZwsGC2
static const fu::str str_SwaHKZwsGC2 fu_INIT_PRIORITY(1005) { "fulib runtime"_fu };
                                #endif

                                #ifndef STR_EpBq6326Vyf
                                #define STR_EpBq6326Vyf
static const fu::str str_EpBq6326Vyf fu_INIT_PRIORITY(1005) { "  BUILD "_fu };
                                #endif

                                #ifndef STR_Cebu50MstTd
                                #define STR_Cebu50MstTd
static const fu::str str_Cebu50MstTd fu_INIT_PRIORITY(1005) { " "_fu };
                                #endif

                                #ifndef STR_Ae0dFzAVWej
                                #define STR_Ae0dFzAVWej
static const fu::str str_Ae0dFzAVWej fu_INIT_PRIORITY(1005) { "     OK "_fu };
                                #endif

                                #ifndef STR_8HAsbhg9gt2
                                #define STR_8HAsbhg9gt2
static const fu::str str_8HAsbhg9gt2 fu_INIT_PRIORITY(1005) { "s"_fu };
                                #endif

                                #ifndef STR_IqyuTIPaLJl
                                #define STR_IqyuTIPaLJl
static const fu::str str_IqyuTIPaLJl fu_INIT_PRIORITY(1005) { "\n\n\tCOMPILER BUG or INCORRECT TESTCASE:\n\n"_fu };
                                #endif

                                #ifndef STR_T3ejd7F41K9
                                #define STR_T3ejd7F41K9
static const fu::str str_T3ejd7F41K9 fu_INIT_PRIORITY(1005) { "   LINK "_fu };
                                #endif

                                #ifndef STR_M1UgLXF83oa
                                #define STR_M1UgLXF83oa
static const fu::str str_M1UgLXF83oa fu_INIT_PRIORITY(1005) { "    RUN "_fu };
                                #endif

                                #ifndef STR_u0rYBAjdSD5
                                #define STR_u0rYBAjdSD5
static const fu::str str_u0rYBAjdSD5 fu_INIT_PRIORITY(1005) { "TestOutput.len != 20"_fu };
                                #endif

                                #ifndef STR_NDllWFurVnb
                                #define STR_NDllWFurVnb
static const fu::str str_NDllWFurVnb fu_INIT_PRIORITY(1005) { "ensure_local_fname broken"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_if_last_JKTRv9aHJBg
                                #define DEF_if_last_JKTRv9aHJBg
inline char if_last_JKTR(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

[[noreturn]] static fu::never fail_uGHE(fu::vec_range<char> reason)
{
    fu::fail(fu::str(reason));
}

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

                                #ifndef DEF_x21x3D_lsKv82TBH74
                                #define DEF_x21x3D_lsKv82TBH74
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_erT9(a, b);
}
                                #endif

                                #ifndef DEF_x3Dx3D_xqw8ga5OCp4
                                #define DEF_x3Dx3D_xqw8ga5OCp4
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_erT9(a, b);
}
                                #endif

static const fu::str TODO_FIX_ignoredWarnings fu_INIT_PRIORITY(1005) = ((((fu::view<char>{} + "-Wno-float-conversion "_view) + "-Wno-unused-but-set-variable "_view) + "-Wno-unknown-warning-option "_view) + "-Wno-maybe-uninitialized -Wno-stringop-overflow -Wno-array-bounds -Wno-sequence-point "_view);

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static void try_unlink_uGHE(fu::vec_range<char> path)
{
    if (path)
    {
        const int err = unlink_VWJw(fu::str(path));
        if (err)
        {
            fu::str x {};
            fu::println(fu::view<fu::str> {{ (x = (((" UNLINK "_view + qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err)))) + " "_view) + path), x).const_cast_mut().destructive_move() }});
        };
    };
}

static const Module_qqBh& GET_uGHE(const ModuleSortHelper_Wn5X& _, fu::view<Module_qqBh> modules)
{
    return modules[_.compile_index];
}

                                #ifndef DEF_ensure_UxqzcZEuaO7
                                #define DEF_ensure_UxqzcZEuaO7
inline TranslationUnit_meNO& ensure_Uxqz(fu::vec_range_mut<TranslationUnit_meNO> a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_starts_SfbfOAVfSee
                                #define DEF_starts_SfbfOAVfSee
inline bool starts_Sfbf(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_bfind_SBgmDFAlQal
                                #define DEF_bfind_SBgmDFAlQal
inline static int bfind_SBgm(fu::view<fu::str> keys_asc, fu::view<char> key, Set_XshD& _, fu::vec_range<char> key_1, fu::vec_range_mut<uint64_t> values)
{
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_erT9(keys_asc[i], key);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    values.insert(i, uint64_t{});
    _.keys_asc.insert(i, fu::str(key_1));
    return i;
}
                                #endif

                                #ifndef DEF_ref_TRIZxqAxNc9
                                #define DEF_ref_TRIZxqAxNc9
inline uint64_t& ref_TRIZ(Set_XshD& _, fu::vec_range<char> key, fu::vec_range_mut<uint64_t> values)
{
    const int idx = bfind_SBgm(_.keys_asc, key, _, key, values);
    return values.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_mVBnxiZ8cei
                                #define DEF_ref_mVBnxiZ8cei
inline uint64_t& ref_mVBn(Map_190v& _, fu::vec_range<char> key)
{
    return ref_TRIZ(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF___6OTig90JA3l
                                #define DEF___6OTig90JA3l
[[noreturn]] inline static fu::never _6OTi(fu::view<char> reason, fu::view<char> include)
{
    fail_uGHE(((("Failed to hash the #includes of:\n\t"_view + qID_e44U(include)) + "\n\n\t"_view) + reason));
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

                                #ifndef DEF_find_BNNwXhPzgU8
                                #define DEF_find_BNNwXhPzgU8
inline int find_BNNw(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_7SLc(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_each_IXbCZ551rxh
                                #define DEF_each_IXbCZ551rxh
inline static void each_IXbC(fu::vec_range<char> match, const bool first, fu::vec_range<char> path, TEA_87LR& hash_all, fu::view<char> include, fu::vec<FileInvariants_Nycb>& file_invariants, Map_190v& content_hashes)
{
    if (!(first))
    {
        int trimLeft = 0;
        for (int i = 0; i < match.size(); i++)
        {
            if (match[i] > ' ')
            {
                trimLeft = i;
                break;
            };
        };
        fu::vec_range<char> match_1 = fu::get_range(match, trimLeft);
        const char lead = ((match_1.size() > 2) ? match_1[0] : char{});
        const char endChar = ((lead == '"') ? '"' : ((lead == '<') ? '>' : (__extension__ (
        {
            fu::str reason = ((("no leading "_view + qKW_e44U("\""_view)) + " or "_view) + qKW_e44U("<"_view));
            const int firstNewline = find_ZKsG(match, '\n');
            fu::view<char> match_2 = ((firstNewline > 0) ? fu::get_view(match, 0, firstNewline) : match);
            fu::view<char> match_3 = ((match_2.size() > 90) ? fu::get_view(match_2, 0, 80) : match_2);
            fu::str x {};
            fu::println(fu::view<fu::str> {{ (x = ((((("  FISHY #include in "_view + path) + " ("_view) + reason) + "):\n\n"_view) + qBAD_e44U(match_3)), x).const_cast_mut().destructive_move() }});
            return;
            (void)0;
        }), fu::unreachable)));
        for (int i_1 = 1; i_1 < match_1.size(); i_1++)
        {
            const char c = match_1[i_1];
            if ((c <= ' '))
            {
                fu::view<char> reason = "contains whitespace"_view;
                const int firstNewline = find_ZKsG(match, '\n');
                fu::view<char> match_2 = ((firstNewline > 0) ? fu::get_view(match, 0, firstNewline) : match);
                fu::view<char> match_3 = ((match_2.size() > 90) ? fu::get_view(match_2, 0, 80) : match_2);
                fu::str x {};
                fu::println(fu::view<fu::str> {{ (x = ((((("  FISHY #include in "_view + path) + " ("_view) + reason) + "):\n\n"_view) + qBAD_e44U(match_3)), x).const_cast_mut().destructive_move() }});
                return;
            }
            else if (c == endChar)
            {
                fu::vec_range<char> include_1 = fu::get_range(match_1, 0, (i_1 + 1));
                hash_qRo1(hash_all, visitInclude_uGHE(include_1, path, include, file_invariants, content_hashes));
                return;
            };
        };
        fu::str reason = ("no trailing "_view + qKW_e44U((endChar + fu::view<char>{})));
        const int firstNewline = find_ZKsG(match, '\n');
        fu::view<char> match_2 = ((firstNewline > 0) ? fu::get_view(match, 0, firstNewline) : match);
        fu::view<char> match_3 = ((match_2.size() > 90) ? fu::get_view(match_2, 0, 80) : match_2);
        fu::str x {};
        fu::println(fu::view<fu::str> {{ (x = ((((("  FISHY #include in "_view + path) + " ("_view) + reason) + "):\n\n"_view) + qBAD_e44U(match_3)), x).const_cast_mut().destructive_move() }});
    };
}
                                #endif

                                #ifndef DEF_split_HFtfG2I9blg
                                #define DEF_split_HFtfG2I9blg
inline void split_HFtf(fu::vec_range<char> str, fu::view<char> sep, fu::vec_range<char> path, TEA_87LR& hash_all, fu::view<char> include, fu::vec<FileInvariants_Nycb>& file_invariants, Map_190v& content_hashes)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = find_BNNw(str, sep, last)) >= 0))
        {
            each_IXbC(fu::get_range(str, last, next), !last, path, hash_all, include, file_invariants, content_hashes);
            last = (next + N);
        };
    };
    if (last)
        each_IXbC(fu::get_range(str, last), false, path, hash_all, include, file_invariants, content_hashes);
    else
        each_IXbC(str, true, path, hash_all, include, file_invariants, content_hashes);

}
                                #endif

static TEA_87LR parseIncludes_uGHE(fu::vec_range<char> path, fu::vec_range<char> src, fu::view<char> include, fu::vec<FileInvariants_Nycb>& file_invariants, Map_190v& content_hashes)
{
    TEA_87LR hash_all {};
    split_HFtf(src, "#include"_view, path, hash_all, include, file_invariants, content_hashes);
    return hash_all;
}

static uint64_t tryFollow_uGHE(fu::view<char> dir, fu::vec_range<char> file, fu::view<char> include, fu::vec<FileInvariants_Nycb>& file_invariants, Map_190v& content_hashes)
{
    fu::str path = join_qZI0(dir, file);
    uint64_t& hash = ref_mVBn(content_hashes, path);
    if (hash)
        return hash;
    else
    {
        Stat_Xqs0 stat {};
        int err;
        if ((err = stat_VWJw(fu::str(path), stat)))
            _6OTi(((qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err))) + " while attempting to stat: "_view) + qBAD_e44U(path)), include);
        else
        {
            file_invariants += FileInvariants_Nycb { fu::str(path), Stat_Xqs0(stat) };
            fu::str src {};
            int err_1;
            if ((err_1 = read_eyt0(fu::str(path), src, 0ll)))
                _6OTi(((qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err_1))) + " while attempting to read: "_view) + qBAD_e44U(path)), include);
            else
            {
                TEA_87LR tea;
                const uint64_t hash_1 = (hash = (tea = hash_s9RC(src), (uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull))));
                TEA_87LR hash_deep = parseIncludes_uGHE(path, src, include, file_invariants, content_hashes);
                if (hash_deep)
                {
                    uint64_t& hash_2 = ref_mVBn(content_hashes, path);
                    hash_qRo1(hash_deep, hash_2);
                    const TEA_87LR* tea_1;
                    return (hash_2 = (tea_1 = &(hash_deep), (uint64_t((*tea_1).v0) | (uint64_t((*tea_1).v1) << 32ull))));
                }
                else
                    return hash_1;

            };
        };
    };
}

                                #ifndef DEF_starts_e85pmfesWad
                                #define DEF_starts_e85pmfesWad
inline bool starts_e85p(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

extern const fu::str FU_INCLUDE;
static uint64_t visitInclude_uGHE(fu::vec_range<char> include, fu::vec_range<char> start_fname, fu::view<char> include_1, fu::vec<FileInvariants_Nycb>& file_invariants, Map_190v& content_hashes)
{
    fu::vec_range<char> f = fu::get_range(include, 1, (include.size() - 1));
    if (starts_Sfbf(include, '"'))
        return tryFollow_uGHE(dirname_qZI0(start_fname), f, include_1, file_invariants, content_hashes);
    else if (starts_e85p(include, "<fu/"_view))
        return tryFollow_uGHE(FU_INCLUDE, f, include_1, file_invariants, content_hashes);
    else
        return 0ull;

}

static uint64_t getContentHash_uGHE(fu::vec_range<char> include, fu::vec_range<char> start_fname, fu::vec<FileInvariants_Nycb>& file_invariants, Map_190v& content_hashes)
{
    return visitInclude_uGHE(include, start_fname, include, file_invariants, content_hashes);
}

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif

static fu::str dir_wrk_tmp_uGHE(fu::view<char> dir_wrk)
{
    return dir_wrk + "tmp/"_view;
}

                                #ifndef DEF_add_poRwwHZ0Mo1
                                #define DEF_add_poRwwHZ0Mo1
inline bool add_poRw(Set_XshD& _, fu::vec_range<char> key)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_erT9(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, fu::str(key));
    return true;
}
                                #endif

                                #ifndef DEF___FD5IKLSciOh
                                #define DEF___FD5IKLSciOh
inline static bool _FD5I(fu::vec_range<char> incl, Set_XshD& HACK_include_dirs, fu::view<char> dir)
{
    return add_poRw(HACK_include_dirs, (starts_Sfbf(incl, '.') ? join_qZI0(dir, incl) : fu::str(incl)));
}
                                #endif

                                #ifndef DEF_each_5Q0mdeSyzpa
                                #define DEF_each_5Q0mdeSyzpa
inline void each_5Q0m(fu::view<fu::str> a, Set_XshD& HACK_include_dirs, fu::view<char> dir)
{
    for (int i = 0; i < a.size(); i++)
        _FD5I(a[i], HACK_include_dirs, dir);

}
                                #endif

                                #ifndef DEF_join_RGgBgTHcISl
                                #define DEF_join_RGgBgTHcISl
inline fu::str join_RGgB(fu::view<fu::str> a, const char sep)
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
        const int N = 1;
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
            res.mutref(size) = sep;
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
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

static fu::str tmpfile_uGHE(/*MOV*/ fu::str&& fname)
{
    uint64_t r = next_u64_qB1H();
    for (int i = 0; i < 8; i++)
    {
        const uint64_t v = (r & 0x1full);
        fname += char(((v < 10ull) ? (int(fu::u8('0')) + int(unsigned(v))) : ((int(fu::u8('a')) + int(unsigned(v))) - 10)));
        r >>= 5ull;
    };
    return fname.destructive_move();
}

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

static int atomic_write_uGHE(fu::vec_range<char> dir_wrk_tmp, fu::vec_range<char> fname, fu::view<char> data)
{
    /*MOV*/ fu::str tmp = tmpfile_uGHE(fu::str(dir_wrk_tmp));
    int _0;
    const int err = ((_0 = write_VWJw(fu::str(tmp), data, RW_RW_RW)) ? _0 : rename_VWJw(fu::str(tmp), fu::str(fname)));
    if (err)
        unlink_VWJw(tmp.destructive_move());

    return err;
}

                                #ifndef DEF_has_YIf6pzpE4yj
                                #define DEF_has_YIf6pzpE4yj
inline bool has_YIf6(fu::view<char> a, fu::view<char> b)
{
    return (find_7SLc(a, b) >= 0);
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

                                #ifndef DEF___eQwyLf8GPl6
                                #define DEF___eQwyLf8GPl6
inline static fu::view<fu::str> _eQwy(fu::vec_range<char> substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
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

static int exec_uGHE(fu::vec_range<char> cmd, fu::vec_range_mut<char> stdout)
{
    int status = 0;
    int err {};
    if (has_YIf6(cmd, "$("_view))
        err = exec_G82R(fu::str(cmd), status, stdout);
    else
        err = spawn_0Hw8(split_Gbk9(cmd, ' '), stdout, stdout, status);

    return (err ? err : status);
}

static BuildError_BKQu buildUnit_uGHE(TranslationUnit_meNO& unit, const int i, fu::view<char> dir_wrk, const bool run, const bool nocache, fu::view<char> GCC_CMD, fu::view<char> INCLUDE)
{
    const fu::str& F_cpp = unit.cpp_cache_file;
    const fu::str& F_obj = unit.obj_cache_file;
    if (!F_cpp || !F_obj)
    {
        return BuildError_BKQu{};
    }
    else if ((size_VWJw(fu::str(F_obj)) > 0ll) && !nocache)
    {
        return BuildError_BKQu{};
    }
    else
    {
        unit.tmp_file = tmpfile_uGHE(dir_wrk_tmp_uGHE(dir_wrk));
        unit.cache_cleanup |= CacheCleanup_Oz5J_Cpp;
        const fu::str& cpp = unit.src;
        atomic_write_uGHE(dir_wrk_tmp_uGHE(dir_wrk), F_cpp, cpp);
        const fu::str* x;
        const fu::str* x_1;
        const fu::str* x_2;
        fu::println(fu::view<fu::str> {{ fu::str((x = &(str_EpBq6326Vyf), (*x))), fu::str((x_1 = &(unit.human), (*x_1))), fu::str((x_2 = &(str_Cebu50MstTd), (*x_2))), fu::str(F_cpp) }});
        const double t0 = hr_0pZh();
        fu::str INCLUDE_1 = (INCLUDE + unit.HACK_pkgConfig_cflags);
        fu::str INCLUDE_2 = (INCLUDE_1 + (unit.iquote ? (" -iquote "_view + unit.iquote) : fu::str{}));
        fu::str CMD = ((((((GCC_CMD + "-c"_view) + INCLUDE_2) + " -o "_view) + unit.tmp_file) + " "_view) + F_cpp);
        /*MOV*/ fu::str stdout {};
        const int code = exec_uGHE(CMD, stdout);
        if (code)
        {
            return BuildError_BKQu { code, fu::str(cpp), static_cast<fu::str&&>(stdout) };
        }
        else
        {
            if (run && (i == 1))
                unit.cache_cleanup |= CacheCleanup_Oz5J_Obj;

            const double t1 = hr_0pZh();
            const fu::str* x_3;
            const fu::str* x_4;
            const fu::str* x_5;
            fu::str x_6 {};
            const fu::str* x_7;
            fu::println(fu::view<fu::str> {{ fu::str((x_3 = &(str_Ae0dFzAVWej), (*x_3))), fu::str((x_4 = &(unit.human), (*x_4))), fu::str((x_5 = &(str_Cebu50MstTd), (*x_5))), (x_6 = fu::f64dec((t1 - t0)), x_6).const_cast_mut().destructive_move(), fu::str((x_7 = &(str_8HAsbhg9gt2), (*x_7))) }});
            return BuildError_BKQu{};
        };
    };
}

                                #ifndef DEF___5NrjUnLQ3Z1
                                #define DEF___5NrjUnLQ3Z1
inline static const BuildError_BKQu& _5Nrj(const int i, fu::view_mut<TranslationUnit_meNO> arr, fu::view_mut<BuildError_BKQu> result, fu::view<char> dir_wrk, const bool run, const bool nocache, fu::view<char> GCC_CMD, fu::view<char> INCLUDE)
{
    TranslationUnit_meNO* _0;
    return (result.mutref(i) = (_0 = &(arr.mutref(i)), buildUnit_uGHE(*_0, i, dir_wrk, run, nocache, GCC_CMD, INCLUDE)));
}
                                #endif

                                #ifndef DEF_parallel_for_iT2J5NA1Y34
                                #define DEF_parallel_for_iT2J5NA1Y34
inline static void parallel_for_iT2J(const int min, int end, fu::view_mut<TranslationUnit_meNO> arr, fu::view_mut<BuildError_BKQu> result, fu::view<char> dir_wrk, const bool run, const bool nocache, fu::view<char> GCC_CMD, fu::view<char> INCLUDE)
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
        _5Nrj(i, arr, result, dir_wrk, run, nocache, GCC_CMD, INCLUDE);

    });

}
                                #endif

                                #ifndef DEF_map_fT9bHHIJIrc
                                #define DEF_map_fT9bHHIJIrc
inline fu::vec<BuildError_BKQu> map_fT9b(fu::view_mut<TranslationUnit_meNO> arr, const int min, fu::view<char> dir_wrk, const bool run, const bool nocache, fu::view<char> GCC_CMD, fu::view<char> INCLUDE)
{
    /*MOV*/ fu::vec<BuildError_BKQu> result {};
    result.grow<false>(arr.size());
    parallel_for_iT2J(min, arr.size(), arr, result, dir_wrk, run, nocache, GCC_CMD, INCLUDE);
    return /*NRVO*/ result;
}
                                #endif

[[noreturn]] static fu::never ERR_uGHE(fu::str&& cpp, fu::view<char> dir_wrk, const DEV_OnFail_3YLB onfail, fu::view_mut<TranslationUnit_meNO> units, fu::view<Module_qqBh> modules, const fu::vec<ModuleSortHelper_Wn5X>& modules_1, const int code, fu::str& stdout)
{
    if (onfail & DEV_OnFail_3YLB_OnFail_WriteRepro)
    {
        if (!cpp)
        {
            for (int i = units.size(); i-- > 0; )
            {
                TranslationUnit_meNO& unit = units.mutref(i);
                if (unit.cpp_cache_file)
                {
                    unit.cache_cleanup &= CacheCleanup_Oz5J(~CacheCleanup_Oz5J_Cpp);
                    cpp += (("#include \""_view + unit.cpp_cache_file) + "\"\n"_view);
                };
            };
        };
        fu::str fname = (dir_wrk + "failing-testcase.cpp"_view);
        fu::str x {};
        fu::println(fu::view<fu::str> {{ (x = ("  WRITE "_view + fname), x).const_cast_mut().destructive_move() }});
        atomic_write_uGHE(dir_wrk_tmp_uGHE(dir_wrk), fname, cpp);
    };
    if (stdout)
        stdout += "\n\n"_view;

    stdout += x7E_rA00("   EXIT code: "_view, fu::i64dec(code));
    fu::str explain {};
    if (onfail)
    {
        explain = fu::str(str_IqyuTIPaLJl);
        for (int i = 1; i < modules_1.size(); i++)
            explain += (DEV_OnFail_3YLB((onfail & DEV_OnFail_3YLB_OnFail_PrintInput)) ? fu::str(GET_uGHE(modules_1[i], modules).in.src) : (GET_uGHE(modules_1[i], modules).fname + "\n"_view));

        if (onfail & DEV_OnFail_3YLB_OnFail_PrintOutput)
        {
            explain += "\n\n\tGenerated code:\n\n"_view;
            for (int i_1 = 1; i_1 < modules_1.size(); i_1++)
                explain += GET_uGHE(modules_1[i_1], modules).out.cpp.src;

        };
    };
    fail_uGHE((stdout + explain));
}

                                #ifndef DEF_x3Cx3E_Rgh3ARpn2a3
                                #define DEF_x3Cx3E_Rgh3ARpn2a3
inline int x3Cx3E_Rgh3(const unsigned a, const unsigned b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_z5NrCzfT9Jg
                                #define DEF_x3Cx3E_z5NrCzfT9Jg
inline int x3Cx3E_z5Nr(const Timespec_nzle& a, const Timespec_nzle& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_Rgh3(a.sec, b.sec)))
        return cmp;
    else if ((cmp = x3Cx3E_Rgh3(a.nsec, b.nsec)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x21x3D_nDgMh00FD37
                                #define DEF_x21x3D_nDgMh00FD37
inline bool operator!=(const Timespec_nzle& a, const Timespec_nzle& b)
{
    return !!x3Cx3E_z5Nr(a, b);
}
                                #endif

                                #ifndef DEF___958Zr07MuXe
                                #define DEF___958Zr07MuXe
inline static void _958Z(const FileInvariants_Nycb& file_invariant)
{
    const Stat_Xqs0& expect = file_invariant.stat;
    Stat_Xqs0 actual {};
    const int err = stat_VWJw(fu::str(file_invariant.path), actual);
    if (err || (actual.size != expect.size) || (actual.mtime != expect.mtime))
        fail_uGHE((((("Header crosscheck failed for:"_view + "\n\t"_view) + file_invariant.path) + "\n\n\tError: "_view) + (err ? qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err))) : fu::str("mtime changed."_fu))));

}
                                #endif

                                #ifndef DEF_each_LGuv66CHBP6
                                #define DEF_each_LGuv66CHBP6
inline void each_LGuv(fu::view<FileInvariants_Nycb> a)
{
    for (int i = 0; i < a.size(); i++)
        _958Z(a[i]);

}
                                #endif

static void crosscheckHeaders_beforePersistingTempObjects_uGHE(fu::view<FileInvariants_Nycb> file_invariants, int& _didCrosscheckHeaders)
{
    if (!(_didCrosscheckHeaders++))
        each_LGuv(file_invariants);

}

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif

static void READ_cachedTestOutput_uGHE(int& code, fu::vec_range<char> F_exe, TestOutput_TzQt& output)
{
    output = parse_6GsP(read_VWJw(fu::str(F_exe)));
    code = output.code;
}

static void WRITE_cachedTestOutput_uGHE(fu::view<char> dir_wrk, fu::vec_range<char> F_exe, const TestOutput_TzQt& output)
{
    fu::str out = serialize_6GsP(output);
    if (out.size() == 20)
        atomic_write_uGHE(dir_wrk_tmp_uGHE(dir_wrk), F_exe, out);
    else
        fail_uGHE(str_u0rYBAjdSD5);

}

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

static fu::str ensure_local_fname_uGHE(fu::vec_range<char> fname, fu::view<char> dir_src)
{
    if (starts_e85p(fname, dir_src))
        return fu::str(fname);
    else
    {
        fu::str foreign = (dir_src + ".foreign/"_view);
        mkdir_p_5u3x(fu::str(foreign), RWX_RWX_RWX);
        fu::str rel = replace_4fXW(replace_4fXW(relative_qZI0(dir_src, fname), "../"_view, "up__"_view), "/"_view, "__"_view);
        return foreign + rel;
    };
}

static fu::str update_file_uGHE(fu::vec_range<char> fname, fu::view<char> data, fu::view<char> dir_src, fu::view<char> dir_out, fu::vec_range<char> dir_wrk_tmp)
{
    fu::str fname_1 = ensure_local_fname_uGHE(fname, dir_src);
    if (starts_e85p(fname_1, dir_src))
    {
        /*MOV*/ fu::str fname_2 = (dir_out + fu::get_view(fname_1, dir_src.size()));
        if (read_VWJw(fu::str(fname_2)) != data)
        {
            const int err = atomic_write_uGHE(dir_wrk_tmp, fname_2, data);
            if (err)
                fail_uGHE(x7E_rA00((("Failed to write `"_view + fname_2) + "`, error: #"_view), fu::i64dec(err)));
            else
            {
                fu::str x {};
                fu::println(fu::view<fu::str> {{ (x = ("  WROTE "_view + fname_2), x).const_cast_mut().destructive_move() }});
            };
        };
        return /*NRVO*/ fname_2;
    }
    else
        fail_uGHE(str_NDllWFurVnb);

}

TestOutput_TzQt build_uGHE(fu::str&& dir_wrk, fu::view<char> fudir, /*MOV*/ fu::str&& fulib, /*MOV*/ fu::str&& bin, fu::str&& dir_obj, fu::str&& dir_src, fu::str&& dir_cpp, fu::view<char> unity, fu::view<char> scheme, const DEV_OnFail_3YLB onfail, const bool run, const bool shared, const bool hotswap, const bool nocache, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const Context_UXD9& ctx)
{
    if (if_last_JKTR(dir_wrk) != '/')
    {
        if (dir_wrk)
            dir_wrk += '/';
        else
            fail_uGHE(str_DXqe975g894);

    };
    if (dir_obj && (if_last_JKTR(dir_obj) != '/'))
        dir_obj += '/';

    if (dir_src && (if_last_JKTR(dir_src) != '/'))
        dir_src += '/';

    if (dir_cpp && (if_last_JKTR(dir_cpp) != '/'))
        dir_cpp += '/';

    fu::str O_lvl = fu::str(((scheme != "debug"_view) ? str_c0YW1OlZqe4 : str_p8131mZs3C2));
    if ((scheme == "debug"_view) || (scheme == "reldeb"_view))
        O_lvl += "-g "_view;

    if (scheme == "retail"_view)
        O_lvl += "-Dfu_RETAIL "_view;

    if (shared)
        O_lvl += "-fPIC "_view;

    if (hotswap || shared)
        O_lvl += "-Dfu_HOTSWAP "_view;

    fu::str GCChash = ("g++ -std=c++1z "_view + O_lvl);
    fu::str GCC_CMD = ((((((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_view) + "-Wdouble-promotion "_view) + "-Wconversion -Wsign-conversion "_view) + TODO_FIX_ignoredWarnings) + ((hotswap && fu::APPLE) ? "-Wno-return-type-c-linkage "_view : fu::view<char>{})) + (fu::LINUX ? "-pthread -ldl "_view : fu::view<char>{}));
    const TEA_87LR GCChash_1 = hash_s9RC(GCChash);
    if (!(fulib))
        fulib = join_qZI0(fudir, (hotswap ? str_9EH8A0P6J72 : str_guvpxVzy8u5));

    CodegenOutput_OFce fulib_cpp = CodegenOutput_OFce { read_VWJw(fulib.destructive_move()), Set_XshD{}, Set_XshD{}, Set_XshD{}, Set_XshD{}, fu::vec<int>{}, CGDefects_2L18{} };
    fu::vec<int> unit_mapping {};
    fu::vec<TranslationUnit_meNO> units {};
    fu_DEFER(for (int i = 0; i < units.size(); i++)
    {
        const TranslationUnit_meNO& unit = units[i];
        try_unlink_uGHE(unit.tmp_file);
        if (unit.cache_cleanup & CacheCleanup_Oz5J_Cpp)
            try_unlink_uGHE(unit.cpp_cache_file);

        if (unit.cache_cleanup & CacheCleanup_Oz5J_Obj)
            try_unlink_uGHE(unit.obj_cache_file);

    });
    fu::view<Module_qqBh> modules = ctx.modules;
    fu::vec<ModuleSortHelper_Wn5X> result {};
    const fu::vec<ModuleSortHelper_Wn5X>* BL_16_v;
    const fu::vec<ModuleSortHelper_Wn5X>& modules_1 = (__extension__ (
    {
        result = {};
        for (int i_1 = 0; i_1 < ctx.dep_order.size(); i_1++)
        {
            result += ModuleSortHelper_Wn5X { ctx.dep_order[i_1] };
        };
        BL_16_v = &(result);
        (void)0;
    }), *BL_16_v);
    for (int i_1 = 0; i_1 < modules_1.size(); i_1++)
    {
        const ModuleSortHelper_Wn5X& module = modules_1[i_1];
        const CodegenOutput_OFce& cpp = (i_1 ? GET_uGHE(module, modules).out.cpp : fulib_cpp);
        if (!cpp.src)
            unit_mapping += -1;
        else
        {
            fu::view<char> fname = (i_1 ? GET_uGHE(module, modules).fname : "fulib runtime"_view);
            fu::vec_range<char> human = (i_1 ? filename_qZI0(GET_uGHE(module, modules).fname) : str_SwaHKZwsGC2);
            fu::vec_range<char> iquote = (i_1 ? dirname_qZI0(GET_uGHE(module, modules).fname) : (*(fu::str*)fu::NIL));
            const int unit_index = i_1;
            unit_mapping += unit_index;
            ensure_Uxqz(units, unit_index) = TranslationUnit_meNO { fu::str(human), fu::str{}, fu::str(iquote), TEA_87LR{}, (fname + ".cpp"_view), fu::str{}, fu::str{}, fu::str{}, CacheCleanup_Oz5J{}, fu::str{} };
        };
    };
    fu::vec<FileInvariants_Nycb> file_invariants {};

    {
        Map_190v content_hashes {};
        for (int i_2 = 0; i_2 < modules_1.size(); i_2++)
        {
            const ModuleSortHelper_Wn5X& module = modules_1[i_2];
            const CodegenOutput_OFce& cpp = (i_2 ? GET_uGHE(module, modules).out.cpp : fulib_cpp);
            if (cpp.src)
            {
                TranslationUnit_meNO& unit = units.mutref(unit_mapping[i_2]);
                unit.src += cpp.src;
                TEA_87LR& includes_hash = unit.includes_hash;
                const Set_XshD* _;
                for (int i_3 = 0; i_3 < (_ = &(cpp.includes_headers), (*_).keys_asc.size()); i_3++)
                {
                    const Set_XshD* __1;
                    int i_4;
                    const uint64_t hash = getContentHash_uGHE((__1 = &(cpp.includes_headers), i_4 = i_3, (*__1).keys_asc[i_4]), GET_uGHE(module, modules).fname, file_invariants, content_hashes);
                    if (hash)
                        hash_qRo1(includes_hash, hash);

                };
            };
        };
    };
    fu::str dir_wrk_cpp = (dir_wrk + "cpp/"_view);
    mkdir_p_5u3x(fu::str(dir_wrk_cpp), RWX_RWX_RWX);
    fu::str dir_wrk_obj = (dir_wrk + "obj/"_view);
    mkdir_p_5u3x(fu::str(dir_wrk_obj), RWX_RWX_RWX);
    fu::str dir_wrk_bin = (dir_wrk + "bin/"_view);
    mkdir_p_5u3x(fu::str(dir_wrk_bin), RWX_RWX_RWX);
    mkdir_p_5u3x(dir_wrk_tmp_uGHE(dir_wrk), RWX_RWX_RWX);
    int len_all {};
    TEA_87LR hash_all {};
    for (int i_2 = 0; i_2 < units.size(); i_2++)
    {
        TranslationUnit_meNO& unit = units.mutref(i_2);
        const fu::str& cpp = unit.src;
        if (!(!cpp))
        {
            TEA_87LR hash {};
            hash_l6RU(hash, cpp);
            const TEA_87LR* tea;
            unit.cpp_cache_file = x7E_rA00((digest16_lweH((tea = &(hash), (uint64_t((*tea).v0) | (uint64_t((*tea).v1) << 32ull))), 0) + "-"_view), fu::i64dec(cpp.size()));
            hash_lweH(hash, unit.includes_hash);
            hash_lweH(hash, GCChash_1);
            len_all += cpp.size();
            hash_lweH(hash_all, hash);
            const TEA_87LR* tea_1;
            unit.obj_cache_file = ((((dir_wrk_obj + unit.cpp_cache_file) + "-"_view) + digest16_lweH((tea_1 = &(hash), (uint64_t((*tea_1).v0) | (uint64_t((*tea_1).v1) << 32ull))), 0)) + ".o"_view);
            unit.cpp_cache_file = ((dir_wrk_cpp + unit.cpp_cache_file) + ".cpp"_view);
        };
    };
    int code {};
    fu::str stdout {};
    Set_XshD HACK_linkFlags {};
    Set_XshD HACK_pkgConfig_libs {};
    Set_XshD HACK_include_dirs {};
    for (int i_3 = 0; i_3 < modules_1.size(); i_3++)
    {
        const ModuleSortHelper_Wn5X& module = modules_1[i_3];
        const Set_XshD& include_dirs = GET_uGHE(module, modules).out.cpp.include_dirs;
        if (include_dirs)
        {
            fu::view<char> dir = dirname_qZI0(GET_uGHE(module, modules).fname);
            each_5Q0m(include_dirs.keys_asc, HACK_include_dirs, dir);
        };
        fu::str cflags {};
        const Set_XshD& libs = GET_uGHE(module, modules).out.cpp.link;
        const Set_XshD* _;
        for (int i_4 = 0; i_4 < (_ = &(libs), (*_).keys_asc.size()); i_4++)
        {
            const Set_XshD* __1;
            int i_5;
            fu::vec_range<char> lib = (__1 = &(libs), i_5 = i_4, (*__1).keys_asc[i_5]);
            if (starts_e85p(lib, "-"_view))
                add_poRw(HACK_linkFlags, lib);
            else
            {
                cflags += lib;
                add_poRw(HACK_pkgConfig_libs, lib);
            };
        };
        if (cflags)
            units.mutref(unit_mapping[i_3]).HACK_pkgConfig_cflags = ((" $(pkg-config --cflags "_view + cflags) + ")"_view);

    };
    fu::str INCLUDE = (((((flags_cc ? (" "_view + join_RGgB(flags_cc, ' ')) : fu::str{}) + " -I "_view) + fudir) + "include"_view) + (HACK_include_dirs ? (" -I "_view + join_yqDb(HACK_include_dirs.keys_asc, " -I "_view)) : fu::str{}));
    fu::str LIBS = (((flags_ld ? (" "_view + join_RGgB(flags_ld, ' ')) : fu::str{}) + (HACK_linkFlags ? (" "_view + join_yqDb(HACK_linkFlags.keys_asc, " "_view)) : fu::str{})) + (HACK_pkgConfig_libs ? ((" $(pkg-config --libs "_view + join_yqDb(HACK_pkgConfig_libs.keys_asc, " "_view)) + ")"_view) : fu::str{}));
    len_all += LIBS.size();
    hash_l6RU(hash_all, LIBS);
    const TEA_87LR* tea;
    /*MOV*/ fu::str F_exe = x7E_rA00(((dir_wrk_bin + digest16_lweH((tea = &(hash_all), (uint64_t((*tea).v0) | (uint64_t((*tea).v1) << 32ull))), 0)) + "-"_view), fu::i64dec(len_all));
    const int64_t old_size = size_VWJw(fu::str(F_exe));
    const int64_t old_size_1 = ((old_size != 4ll) ? old_size : 0ll);
    if ((old_size_1 < 1ll) && (bin || run))
    {
        fu::vec<BuildError_BKQu> buildErrors = map_fT9b(units, 0, dir_wrk, run, nocache, GCC_CMD, INCLUDE);
        for (int i_4 = 0; i_4 < buildErrors.size(); i_4++)
        {
            const BuildError_BKQu& err = buildErrors[i_4];
            if ((code = err.code))
            {
                stdout = err.stdout;
                ERR_uGHE(fu::str(err.cpp), dir_wrk, onfail, units, modules, modules_1, code, stdout);
            };
        };
        int _didCrosscheckHeaders {};
        for (int i_5 = 0; i_5 < units.size(); i_5++)
        {
            TranslationUnit_meNO& unit = units.mutref(i_5);
            if (unit.tmp_file)
            {
                crosscheckHeaders_beforePersistingTempObjects_uGHE(file_invariants, _didCrosscheckHeaders);
                const fu::str& from = unit.tmp_file;
                const fu::str& to = unit.obj_cache_file;
                const int err = rename_VWJw(fu::str(from), fu::str(to));
                if (err)
                    fail_uGHE(((((("Build cache failed to move temporary:\n\t"_view + from) + "\n\n\tto the object cache at:\n\t"_view) + to) + "\n\n\tError: "_view) + qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err)))));
                else
                    unit.tmp_file.clear();

            };
        };
        /*MOV*/ fu::str F_tmp = tmpfile_uGHE(dir_wrk_tmp_uGHE(dir_wrk));
        fu::str cmd = ((GCC_CMD + "-o "_view) + F_tmp);
        if (shared)
        {
            cmd += " -shared"_view;
            fu::view<char> soname = filename_qZI0(bin);
            if (fu::APPLE)
                cmd += (" -Wl,-install_name,"_view + soname);
            else
                cmd += (" -Wl,-soname,"_view + soname);

        };
        for (int i_6 = 0; i_6 < units.size(); i_6++)
        {
            const TranslationUnit_meNO& unit = units[i_6];
            if (unit.obj_cache_file)
                cmd += (" "_view + unit.obj_cache_file);

        };

        {
            const fu::str* x;
            fu::println(fu::view<fu::str> {{ fu::str((x = &(str_T3ejd7F41K9), (*x))), fu::str(F_exe), fu::str(LIBS) }});
            const double t0 = hr_0pZh();
            fu::str CMD = (cmd + LIBS);
            int _0;
            code = ((_0 = exec_uGHE(CMD, stdout)) ? _0 : (_0 = chmod_VWJw(fu::str(F_tmp), RWX_RX_RX)) ? _0 : rename_VWJw(F_tmp.destructive_move(), fu::str(F_exe)));
            if (code)
            {
                fu::str x_1 {};
                fu::println(fu::view<fu::str> {{ (x_1 = ((x7E_rA00((("   FAIL "_view + CMD) + " EXIT="_view), fu::i64dec(code)) + "\n"_view) + stdout), x_1).const_cast_mut().destructive_move() }});
                ERR_uGHE(fu::str{}, dir_wrk, onfail, units, modules, modules_1, code, stdout);
            }
            else
            {
                const double t1 = hr_0pZh();
                const fu::str* x_1;
                fu::str x_2 {};
                const fu::str* x_3;
                fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_Ae0dFzAVWej), (*x_1))), (x_2 = fu::f64dec((t1 - t0)), x_2).const_cast_mut().destructive_move(), fu::str((x_3 = &(str_8HAsbhg9gt2), (*x_3))) }});
            };
        };
        if (code)
        {
            ERR_uGHE(fu::str{}, dir_wrk, onfail, units, modules, modules_1, code, stdout);
        };
    };
    TestOutput_TzQt output {};
    if (run)
    {
        if (looks_legit_6GsP(old_size_1))
            READ_cachedTestOutput_uGHE(code, F_exe, output);
        else
        {
            const fu::str* x;
            fu::println(fu::view<fu::str> {{ fu::str((x = &(str_M1UgLXF83oa), (*x))), fu::str(F_exe) }});
            const double t0 = hr_0pZh();

            {
                fu::str stdout_1 {};
                code = exec_uGHE(F_exe, stdout_1);
                output = from_6GsP(stdout_1, code);
            };
            const double t1 = hr_0pZh();
            const fu::str* x_1;
            fu::str x_2 {};
            const fu::str* x_3;
            fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_Ae0dFzAVWej), (*x_1))), (x_2 = fu::f64dec((t1 - t0)), x_2).const_cast_mut().destructive_move(), fu::str((x_3 = &(str_8HAsbhg9gt2), (*x_3))) }});
            const int64_t new_size = size_VWJw(fu::str(F_exe));
            if (looks_legit_6GsP(new_size))
                READ_cachedTestOutput_uGHE(code, F_exe, output);
            else if ((code != 32512) && (code != 35584))
                WRITE_cachedTestOutput_uGHE(dir_wrk, F_exe, output);

        };
    };
    if (code)
    {
        ERR_uGHE(fu::str{}, dir_wrk, onfail, units, modules, modules_1, code, stdout);
    }
    else
    {
        if (dir_cpp && dir_src)
        {
            mkdir_p_5u3x(fu::str(dir_cpp), RWX_RWX_RWX);
            fu::vec<fu::str> cpp_files {};
            for (int i_4 = 1; i_4 < units.size(); i_4++)
            {
                const TranslationUnit_meNO& unit = units[i_4];
                const fu::str& fname = (!unit.src ? unit.src : unit.src_output_file);
                /*MOV*/ fu::str fname_1 = (fname ? update_file_uGHE(fname, unit.src, dir_src, dir_cpp, dir_wrk_tmp_uGHE(dir_wrk)) : fu::str{});
                cpp_files.push(fname_1.destructive_move());
            };
            fu::str CMakeLists {};
            if (unity || CMakeLists)
            {
                if (unity)
                {
                    fu::str data = (("#ifdef fu_UNITY_FULIB\n"_view + "#include <fu/_fulib.cpp>\n"_view) + "#endif\n\n"_view);
                    for (int i_5 = 0; i_5 < cpp_files.size(); i_5++)
                    {
                        fu::view<char> incl = cpp_files[i_5];
                        if (incl)
                            data += (("#include \""_view + relative_qZI0(unity, incl)) + "\"\n"_view);

                    };
                    update_file_uGHE((unity + ".unity.cpp"_view), data, dir_src, dir_cpp, dir_wrk_tmp_uGHE(dir_wrk));
                };
            };
        };
        if (bin)
        {
            mkdir_p_5u3x(fu::str(dirname_qZI0(bin)), RWX_RWX_RWX);
            code = rename_VWJw(F_exe.destructive_move(), bin.destructive_move());
        };
        if (code)
        {
            ERR_uGHE(fu::str{}, dir_wrk, onfail, units, modules, modules_1, code, stdout);
        }
        else
            return output;

    };
}

#endif
