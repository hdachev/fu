#include <cstdint>
#include <errno.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/process.h>
#include <fu/vec_range.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

typedef uint16_t BuildScheme_Vgo7;
typedef int ExitStatus_iZrm;
typedef int Errno_88RA;
struct BuildOutput_zaam;
struct TestOutput_OIXu;
typedef fu::u8 DEV_OnFail_3YLB;
enum RunMode_n0r3: fu::u8;
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
struct TranslationUnit_8Oo1;
typedef fu::u8 CacheCleanup_Oz5J;
struct Set_qOJY;
struct FileInvariants_fbOC;
struct Stat_EQWk;
struct Timespec_RdAp;
struct Map_cOsg;
struct Set_XshD;
struct DirWrk_Nlbc;
struct BuildError_kI1v;
typedef int Signo_6FLP;
Errno_88RA exec_G82R(fu::str&&, ExitStatus_iZrm&, fu::vec_range_mut<char>);
Errno_88RA spawn_0Hw8(fu::vec<fu::str>&&, fu::vec_range_mut<char>, fu::vec_range_mut<char>, ExitStatus_iZrm&, bool);
TEA_0Daz hash_s9RC(fu::vec_range<char>);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
Errno_88RA read_VWJw(fu::str&&, fu::vec_range_mut<char>, int64_t);
fu::vec_range<char> filename_qZI0(fu::vec_range<char>);
fu::vec_range<char> dirname_qZI0(fu::vec_range<char>);
Errno_88RA stat_VWJw(fu::str&&, Stat_EQWk&);
fu::str qBAD_e44U(fu::view<char>);
fu::str qID_e44U(fu::view<char>);
fu::str qKW_e44U(fu::view<char>);
static uint64_t visitInclude_uGHE(fu::vec_range<char>, fu::vec_range<char>, fu::view<char>, fu::vec<FileInvariants_fbOC>&, Map_cOsg&);
void hash_qRo1(TEA_0Daz&, uint64_t);

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif
Errno_88RA mkdir_p_5u3x(fu::str&&, unsigned);
void hash_l6RU(TEA_0Daz&, fu::vec_range<char>);
fu::str digest16_lweH(uint64_t, int);
void hash_lweH(TEA_0Daz&, const TEA_0Daz&);
Errno_88RA unlink_VWJw(fu::str&&);
int64_t size_VWJw(fu::str&&);
uint64_t next_u64_qB1H();

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif
Errno_88RA write_VWJw(fu::str&&, fu::view<char>, unsigned);
Errno_88RA rename_VWJw(fu::str&&, fu::str&&);
double hr_0pZh();

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif
Errno_88RA chmod_VWJw(fu::str&&, unsigned);
bool looks_legit_6GsP(int64_t);
TestOutput_OIXu parse_6GsP(fu::vec_range<char>);
TestOutput_OIXu from_6GsP(fu::vec_range<char>, ExitStatus_iZrm);
bool signalled_BXrk(ExitStatus_iZrm);
Signo_6FLP signal_BXrk(ExitStatus_iZrm);
bool exited_BXrk(ExitStatus_iZrm);
int exit_BXrk(ExitStatus_iZrm);
fu::str serialize_6GsP(const TestOutput_OIXu&);
fu::str relative_qZI0(fu::view<char>, fu::view<char>);

                                #ifndef DEF_BuildScheme_Vgo7
                                #define DEF_BuildScheme_Vgo7
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_shared = BuildScheme_Vgo7(1u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_hotswap = BuildScheme_Vgo7(2u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_nocache = BuildScheme_Vgo7(4u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_notest = BuildScheme_Vgo7(8u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_nocache_tests = BuildScheme_Vgo7(16u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_watch = BuildScheme_Vgo7(32u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_debuggable = BuildScheme_Vgo7(64u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_unoptimized = BuildScheme_Vgo7(128u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_assertions = BuildScheme_Vgo7(256u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_TODO_FIX_retail = BuildScheme_Vgo7(512u);

inline constexpr BuildScheme_Vgo7 MASK_BuildScheme_Vgo7
    = BuildScheme_Vgo7_shared
    | BuildScheme_Vgo7_hotswap
    | BuildScheme_Vgo7_nocache
    | BuildScheme_Vgo7_notest
    | BuildScheme_Vgo7_nocache_tests
    | BuildScheme_Vgo7_watch
    | BuildScheme_Vgo7_debuggable
    | BuildScheme_Vgo7_unoptimized
    | BuildScheme_Vgo7_assertions
    | BuildScheme_Vgo7_TODO_FIX_retail;
                                #endif

                                #ifndef DEF_ExitStatus_iZrm
                                #define DEF_ExitStatus_iZrm
                                #endif

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
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

                                #ifndef DEF_BuildOutput_zaamx5NImnj
                                #define DEF_BuildOutput_zaamx5NImnj
struct BuildOutput_zaam
{
    fu::str executable;
    fu::vec<fu::str> watch_list;
    TestOutput_OIXu output;
    explicit operator bool() const noexcept
    {
        return false
            || executable
            || watch_list
            || output
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

                                #ifndef DEF_RunMode_n0r3
                                #define DEF_RunMode_n0r3
enum RunMode_n0r3: fu::u8
{
    RunMode_n0r3_None = 0u,
    RunMode_n0r3_Normally = 1u,
    RunMode_n0r3_Testsuite = 2u,
    RunMode_n0r3_CompilerTestcase = 3u,
    RunMode_n0r3_EnsureExecutableButDontRun = 4u,
};
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

                                #ifndef DEF_CacheCleanup_Oz5J
                                #define DEF_CacheCleanup_Oz5J
inline constexpr CacheCleanup_Oz5J CacheCleanup_Oz5J_Obj = CacheCleanup_Oz5J(1u);
inline constexpr CacheCleanup_Oz5J CacheCleanup_Oz5J_Cpp = CacheCleanup_Oz5J(2u);

inline constexpr CacheCleanup_Oz5J MASK_CacheCleanup_Oz5J
    = CacheCleanup_Oz5J_Obj
    | CacheCleanup_Oz5J_Cpp;
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

                                #ifndef DEF_TranslationUnit_8Oo15NELr1i
                                #define DEF_TranslationUnit_8Oo15NELr1i
struct TranslationUnit_8Oo1
{
    fu::str human;
    fu::str src;
    fu::str iquote;
    TEA_0Daz includes_hash;
    fu::str src_output_file;
    fu::str cpp_cache_file;
    TEA_0Daz obj_hash;
    fu::str obj_cache_file;
    fu::str tmp_file;
    CacheCleanup_Oz5J cache_cleanup;
    BuildHacks_sqc0 hacks;
    Set_qOJY testsuite_units;
    explicit operator bool() const noexcept
    {
        return false
            || human
            || src
            || iquote
            || includes_hash
            || src_output_file
            || cpp_cache_file
            || obj_hash
            || obj_cache_file
            || tmp_file
            || cache_cleanup
            || hacks
            || testsuite_units
        ;
    }
};
                                #endif

                                #ifndef DEF_Timespec_RdAp1SOrifg
                                #define DEF_Timespec_RdAp1SOrifg
struct Timespec_RdAp
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

                                #ifndef DEF_Stat_EQWkITIAK82
                                #define DEF_Stat_EQWkITIAK82
struct Stat_EQWk
{
    int64_t size;
    Timespec_RdAp atime;
    Timespec_RdAp mtime;
    Timespec_RdAp ctime;
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

                                #ifndef DEF_FileInvariants_fbOCznQpXt9
                                #define DEF_FileInvariants_fbOCznQpXt9
struct FileInvariants_fbOC
{
    fu::str path;
    Stat_EQWk stat;
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

                                #ifndef DEF_Map_cOsgHqsa9Tb
                                #define DEF_Map_cOsgHqsa9Tb
struct Map_cOsg
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

                                #ifndef DEF_DirWrk_Nlbciah5KDd
                                #define DEF_DirWrk_Nlbciah5KDd
struct DirWrk_Nlbc
{
    fu::str cpp;
    fu::str obj;
    fu::str bin;
    fu::str out;
    fu::str tmp;
    DirWrk_Nlbc(const DirWrk_Nlbc&) = delete;
    DirWrk_Nlbc(DirWrk_Nlbc&&) = default;
    DirWrk_Nlbc& operator=(const DirWrk_Nlbc&) = delete;
    DirWrk_Nlbc& operator=(DirWrk_Nlbc&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || cpp
            || obj
            || bin
            || out
            || tmp
        ;
    }
};
                                #endif

                                #ifndef DEF_BuildError_kI1vtEZIKqd
                                #define DEF_BuildError_kI1vtEZIKqd
struct BuildError_kI1v
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

                                #ifndef DEF_Signo_6FLP
                                #define DEF_Signo_6FLP
                                #endif

                                #ifndef STR_ZXYssoHDnv3
                                #define STR_ZXYssoHDnv3
static const fu::str str_ZXYssoHDnv3 fu_INIT_PRIORITY(1006) { "gcc --version"_fu };
                                #endif

                                #ifndef STR_DXqe975g894
                                #define STR_DXqe975g894
static const fu::str str_DXqe975g894 fu_INIT_PRIORITY(1006) { "No workspace directory provided."_fu };
                                #endif

                                #ifndef STR_p8131mZs3C2
                                #define STR_p8131mZs3C2
static const fu::str str_p8131mZs3C2 fu_INIT_PRIORITY(1006) { "-Og "_fu };
                                #endif

                                #ifndef STR_CqqoPrYpftb
                                #define STR_CqqoPrYpftb
static const fu::str str_CqqoPrYpftb fu_INIT_PRIORITY(1006) { "-O3 "_fu };
                                #endif

                                #ifndef STR_9EH8A0P6J72
                                #define STR_9EH8A0P6J72
static const fu::str str_9EH8A0P6J72 fu_INIT_PRIORITY(1006) { "include/fu/_sharedlib.cpp"_fu };
                                #endif

                                #ifndef STR_guvpxVzy8u5
                                #define STR_guvpxVzy8u5
static const fu::str str_guvpxVzy8u5 fu_INIT_PRIORITY(1006) { "include/fu/_fulib.cpp"_fu };
                                #endif

                                #ifndef STR_SwaHKZwsGC2
                                #define STR_SwaHKZwsGC2
static const fu::str str_SwaHKZwsGC2 fu_INIT_PRIORITY(1006) { "fulib runtime"_fu };
                                #endif

                                #ifndef STR_fhzi64hBLPa
                                #define STR_fhzi64hBLPa
static const fu::str str_fhzi64hBLPa fu_INIT_PRIORITY(1006) { "Empty translation unit."_fu };
                                #endif

                                #ifndef STR_EpBq6326Vyf
                                #define STR_EpBq6326Vyf
static const fu::str str_EpBq6326Vyf fu_INIT_PRIORITY(1006) { "  BUILD "_fu };
                                #endif

                                #ifndef STR_Cebu50MstTd
                                #define STR_Cebu50MstTd
static const fu::str str_Cebu50MstTd fu_INIT_PRIORITY(1006) { " "_fu };
                                #endif

                                #ifndef STR_0akfmmne1qe
                                #define STR_0akfmmne1qe
static const fu::str str_0akfmmne1qe fu_INIT_PRIORITY(1006) { " $(pkg-config --cflags"_fu };
                                #endif

                                #ifndef STR_Ae0dFzAVWej
                                #define STR_Ae0dFzAVWej
static const fu::str str_Ae0dFzAVWej fu_INIT_PRIORITY(1006) { "     OK "_fu };
                                #endif

                                #ifndef STR_8HAsbhg9gt2
                                #define STR_8HAsbhg9gt2
static const fu::str str_8HAsbhg9gt2 fu_INIT_PRIORITY(1006) { "s"_fu };
                                #endif

                                #ifndef STR_T3ejd7F41K9
                                #define STR_T3ejd7F41K9
static const fu::str str_T3ejd7F41K9 fu_INIT_PRIORITY(1006) { "   LINK "_fu };
                                #endif

                                #ifndef STR_CMHrCVD5k9e
                                #define STR_CMHrCVD5k9e
static const fu::str str_CMHrCVD5k9e fu_INIT_PRIORITY(1006) { "\read lazily"_fu };
                                #endif

                                #ifndef STR_M1UgLXF83oa
                                #define STR_M1UgLXF83oa
static const fu::str str_M1UgLXF83oa fu_INIT_PRIORITY(1006) { "    RUN "_fu };
                                #endif

                                #ifndef STR_u0rYBAjdSD5
                                #define STR_u0rYBAjdSD5
static const fu::str str_u0rYBAjdSD5 fu_INIT_PRIORITY(1006) { "TestOutput.len != 20"_fu };
                                #endif

                                #ifndef STR_NTPcb2QoQ9a
                                #define STR_NTPcb2QoQ9a
static const fu::str str_NTPcb2QoQ9a fu_INIT_PRIORITY(1006) { "Testsuite without a translation unit."_fu };
                                #endif

                                #ifndef STR_k8srE0RQadk
                                #define STR_k8srE0RQadk
static const fu::str str_k8srE0RQadk fu_INIT_PRIORITY(1006) { ".testsuite"_fu };
                                #endif

                                #ifndef STR_4RS8rTVHIC5
                                #define STR_4RS8rTVHIC5
static const fu::str str_4RS8rTVHIC5 fu_INIT_PRIORITY(1006) { "Translation unit has no src_output_file."_fu };
                                #endif

                                #ifndef STR_NDllWFurVnb
                                #define STR_NDllWFurVnb
static const fu::str str_NDllWFurVnb fu_INIT_PRIORITY(1006) { "ensure_local_fname broken"_fu };
                                #endif

#ifndef fu_NO_fdefs

extern const BuildScheme_Vgo7 DEBUG_SCHEME = BuildScheme_Vgo7((BuildScheme_Vgo7((BuildScheme_Vgo7_debuggable | BuildScheme_Vgo7_unoptimized)) | BuildScheme_Vgo7_assertions));
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

                                #ifndef DEF_find_BNNwXhPzgU8
                                #define DEF_find_BNNwXhPzgU8
inline int find_BNNw(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_7SLc(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
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
    ExitStatus_iZrm status = 0;
    Errno_88RA err {};
    if (has_YIf6(cmd, "$("_view))
    {
        /*MOV*/ fu::str cmd_1 = replace_4fXW(replace_4fXW(cmd, "$"_view, "\\$"_view), "\\$("_view, "$("_view);
        err = exec_G82R(cmd_1.destructive_move(), status, stdout);
    }
    else
        err = spawn_0Hw8(split_Gbk9(cmd, ' '), stdout, stdout, status, false);

    int _0;
    return (_0 = int(err)) ? _0 : int(status);
}

                                #ifndef DEF_ends_L30JVW8oAb6
                                #define DEF_ends_L30JVW8oAb6
inline bool ends_L30J(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu::str gcc_version_uGHE()
{
    /*MOV*/ fu::str stdout {};
    const int code = exec_uGHE(str_ZXYssoHDnv3, stdout);
    if (code)
    {
        if (stdout)
            stdout += (ends_L30J(stdout, '\n') ? "\n"_view : "\n\n"_view);

        stdout += (x7E_rA00("NON-ZERO EXIT CODE: "_view, fu::i64dec(code)) + "\n"_view);
    };
    return /*NRVO*/ stdout;
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

BuildScheme_Vgo7 tryGetScheme_uGHE(fu::view<char> name)
{
    if (name == "debug"_view)
        return DEBUG_SCHEME;
    else if (name == "reldeb"_view)
        return BuildScheme_Vgo7_debuggable;
    else if (name == "retail"_view)
        return BuildScheme_Vgo7_TODO_FIX_retail;
    else
    {
        return BuildScheme_Vgo7{};
    };
}

                                #ifndef DEF_if_last_0CThtiA13q7
                                #define DEF_if_last_0CThtiA13q7
inline char if_last_0CTh(fu::view<char> a)
{
    if (a.size())
        return a[(a.size() - 1)];
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

static const fu::str TODO_FIX_ignoredWarnings fu_INIT_PRIORITY(1006) = ((((fu::view<char>{} + "-Wno-float-conversion "_view) + "-Wno-unused-but-set-variable "_view) + "-Wno-unknown-warning-option "_view) + "-Wno-maybe-uninitialized -Wno-stringop-overflow -Wno-array-bounds -Wno-sequence-point -Wno-dangling-reference "_view);

                                #ifndef DEF___UacLuCKTHvh
                                #define DEF___UacLuCKTHvh
inline static int _UacL()
{
    return -1;
}
                                #endif

                                #ifndef DEF_map_UKvQdeSFIvc
                                #define DEF_map_UKvQdeSFIvc
inline fu::vec<int> map_UKvQ(fu::view<Module_wo7O> a)
{
    /*MOV*/ fu::vec<int> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _UacL();

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_starts_SfbfOAVfSee
                                #define DEF_starts_SfbfOAVfSee
inline bool starts_Sfbf(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_bfind_RITGc6JGzXk
                                #define DEF_bfind_RITGc6JGzXk
inline static int bfind_RITG(fu::view<fu::str> keys_asc, fu::view<char> key, Set_XshD& _, fu::vec_range<char> key_1, fu::vec_range_mut<uint64_t> values)
{
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_j5CR(keys_asc[i], key);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    values.insert(i, 0ull);
    _.keys_asc.insert(i, fu::str(key_1));
    return i;
}
                                #endif

                                #ifndef DEF_ref_0pckU4BIL73
                                #define DEF_ref_0pckU4BIL73
inline uint64_t& ref_0pck(Set_XshD& _, fu::vec_range<char> key, fu::vec_range_mut<uint64_t> values)
{
    const int idx = bfind_RITG(_.keys_asc, key, _, key, values);
    return values.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_eYd0ri0swHk
                                #define DEF_ref_eYd0ri0swHk
inline uint64_t& ref_eYd0(Map_cOsg& _, fu::vec_range<char> key)
{
    return ref_0pck(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF___6OTig90JA3l
                                #define DEF___6OTig90JA3l
[[noreturn]] inline static fu::never _6OTi(fu::view<char> reason, fu::view<char> include)
{
    fail_uGHE(((("Failed to hash the #includes of:\n\t"_view + qID_e44U(include)) + "\n\n\t"_view) + reason));
}
                                #endif

                                #ifndef DEF_each_XwQKRG8sP66
                                #define DEF_each_XwQKRG8sP66
inline static void each_XwQK(fu::vec_range<char> match, const bool first, fu::vec_range<char> path, TEA_0Daz& hash_all, fu::view<char> include, fu::vec<FileInvariants_fbOC>& file_invariants, Map_cOsg& include_hashes)
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
                hash_qRo1(hash_all, visitInclude_uGHE(include_1, path, include, file_invariants, include_hashes));
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

                                #ifndef DEF_split_5vSR4B6y5Wk
                                #define DEF_split_5vSR4B6y5Wk
inline void split_5vSR(fu::vec_range<char> str, fu::view<char> sep, fu::vec_range<char> path, TEA_0Daz& hash_all, fu::view<char> include, fu::vec<FileInvariants_fbOC>& file_invariants, Map_cOsg& include_hashes)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = find_BNNw(str, sep, last)) >= 0))
        {
            each_XwQK(fu::get_range(str, last, next), !last, path, hash_all, include, file_invariants, include_hashes);
            last = (next + N);
        };
    };
    if (last)
        each_XwQK(fu::get_range(str, last), false, path, hash_all, include, file_invariants, include_hashes);
    else
        each_XwQK(str, true, path, hash_all, include, file_invariants, include_hashes);

}
                                #endif

static TEA_0Daz parseIncludes_uGHE(fu::vec_range<char> path, fu::vec_range<char> src, fu::view<char> include, fu::vec<FileInvariants_fbOC>& file_invariants, Map_cOsg& include_hashes)
{
    TEA_0Daz hash_all {};
    split_5vSR(src, "#include"_view, path, hash_all, include, file_invariants, include_hashes);
    return hash_all;
}

static uint64_t tryFollow_uGHE(fu::view<char> dir, fu::vec_range<char> file, fu::view<char> include, fu::vec<FileInvariants_fbOC>& file_invariants, Map_cOsg& include_hashes)
{
    fu::str path = join_qZI0(dir, file);
    uint64_t& hash = ref_eYd0(include_hashes, path);
    if (hash)
        return hash;
    else
    {
        Stat_EQWk stat {};
        Errno_88RA err;
        if ((err = stat_VWJw(fu::str(path), stat)))
            _6OTi(((qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err))) + " while attempting to stat: "_view) + qBAD_e44U(path)), include);
        else
        {
            file_invariants += FileInvariants_fbOC { fu::str(path), Stat_EQWk(stat) };
            fu::str src {};
            Errno_88RA err_1;
            if ((err_1 = read_VWJw(fu::str(path), src, 0ll)))
                _6OTi(((qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err_1))) + " while attempting to read: "_view) + qBAD_e44U(path)), include);
            else
            {
                TEA_0Daz tea;
                const uint64_t hash_1 = (hash = (tea = hash_s9RC(src), (uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull))));
                TEA_0Daz hash_deep = parseIncludes_uGHE(path, src, include, file_invariants, include_hashes);
                if (hash_deep)
                {
                    uint64_t& hash_2 = ref_eYd0(include_hashes, path);
                    hash_qRo1(hash_deep, hash_2);
                    const TEA_0Daz* tea_1;
                    return (hash_2 = (tea_1 = &(hash_deep), (uint64_t((*tea_1).v0) | (uint64_t((*tea_1).v1) << 32ull))));
                }
                else
                    return hash_1;

            };
        };
    };
}

                                #ifndef DEF_starts_ojopLVekF87
                                #define DEF_starts_ojopLVekF87
inline bool starts_ojop(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

extern const fu::str FU_INCLUDE;
static uint64_t visitInclude_uGHE(fu::vec_range<char> include, fu::vec_range<char> start_fname, fu::view<char> include_1, fu::vec<FileInvariants_fbOC>& file_invariants, Map_cOsg& include_hashes)
{
    fu::vec_range<char> f = fu::get_range(include, 1, (include.size() - 1));
    if (starts_Sfbf(include, '"'))
        return tryFollow_uGHE(dirname_qZI0(start_fname), f, include_1, file_invariants, include_hashes);
    else if (starts_ojop(include, "<fu/"_view))
        return tryFollow_uGHE(FU_INCLUDE, f, include_1, file_invariants, include_hashes);
    else
        return 0ull;

}

static uint64_t getIncludeHash_uGHE(fu::vec_range<char> include, fu::vec_range<char> start_fname, fu::vec<FileInvariants_fbOC>& file_invariants, Map_cOsg& include_hashes)
{
    return visitInclude_uGHE(include, start_fname, include, file_invariants, include_hashes);
}

                                #ifndef DEF_add_EEscCp065Kd
                                #define DEF_add_EEscCp065Kd
inline void add_EEsc(fu::vec_range_mut<fu::str> a, fu::view<fu::str> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        fu::view<char> X = a[x];
        fu::vec_range<char> Y = b[y];
        const int cmp = x3Cx3E_j5CR(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, fu::str(Y));
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y);

}
                                #endif

                                #ifndef DEF_add_JHtkOYaHZm9
                                #define DEF_add_JHtkOYaHZm9
inline bool add_JHtk(Set_XshD& _, fu::vec_range<char> key)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_j5CR(keys_asc[i], key);
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

                                #ifndef DEF___NllgGOdTut5
                                #define DEF___NllgGOdTut5
inline static bool _Nllg(fu::vec_range<char> incl, TranslationUnit_8Oo1& unit, fu::view<char> dir)
{
    return add_JHtk(unit.hacks.include_dirs, (starts_Sfbf(incl, '.') ? join_qZI0(dir, incl) : fu::str(incl)));
}
                                #endif

                                #ifndef DEF_each_6hRADz3NZAf
                                #define DEF_each_6hRADz3NZAf
inline void each_6hRA(fu::view<fu::str> a, TranslationUnit_8Oo1& unit, fu::view<char> dir)
{
    for (int i = 0; i < a.size(); i++)
        _Nllg(a[i], unit, dir);

}
                                #endif

static DirWrk_Nlbc DirWrk_uGHE(fu::view<char> dir_wrk)
{
    /*MOV*/ DirWrk_Nlbc ret = DirWrk_Nlbc { (dir_wrk + "cpp/"_view), (dir_wrk + "obj/"_view), (dir_wrk + "bin/"_view), (dir_wrk + "out/"_view), (dir_wrk + "tmp/"_view) };

    {
        mkdir_p_5u3x(fu::str(ret.cpp), RWX_RWX_RWX);
        mkdir_p_5u3x(fu::str(ret.obj), RWX_RWX_RWX);
        mkdir_p_5u3x(fu::str(ret.bin), RWX_RWX_RWX);
        mkdir_p_5u3x(fu::str(ret.out), RWX_RWX_RWX);
        mkdir_p_5u3x(fu::str(ret.tmp), RWX_RWX_RWX);
    };
    return /*NRVO*/ ret;
}

static void try_unlink_uGHE(fu::vec_range<char> path)
{
    if (path)
    {
        const Errno_88RA err = unlink_VWJw(fu::str(path));
        if (err)
        {
            fu::str x {};
            fu::println(fu::view<fu::str> {{ (x = (((" UNLINK "_view + qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err)))) + " "_view) + path), x).const_cast_mut().destructive_move() }});
        };
    };
}

                                #ifndef DEF___b2TSq0uWi5c
                                #define DEF___b2TSq0uWi5c
inline static void _b2TS(fu::vec_range<char> flag, fu::vec_range<char> lib, Set_XshD& HACK_linkFlags, Set_XshD& HACK_pkgConfig_libs)
{
    if (flag)
        add_JHtk(HACK_linkFlags, flag);
    else if (lib)
        add_JHtk(HACK_pkgConfig_libs, lib);

}
                                #endif

                                #ifndef DEF_link_each_8txf4Tm7L3i
                                #define DEF_link_each_8txf4Tm7L3i
inline static void link_each_8txf(const Set_XshD& link, Set_XshD& HACK_linkFlags, Set_XshD& HACK_pkgConfig_libs)
{
    for (int i = 0; i < link.keys_asc.size(); i++)
    {
        int i_1;
        fu::vec_range<char> item = (i_1 = i, link.keys_asc[i_1]);
        const bool isFlag = starts_Sfbf(item, '-');
        _b2TS((isFlag ? item : (*(fu::str*)fu::NIL)), (!isFlag ? item : (*(fu::str*)fu::NIL)), HACK_linkFlags, HACK_pkgConfig_libs);
    };
}
                                #endif

                                #ifndef DEF___S4XgqtrX1mj
                                #define DEF___S4XgqtrX1mj
inline static void _S4Xg(const TranslationUnit_8Oo1& unit, Set_XshD& HACK_linkFlags, Set_XshD& HACK_pkgConfig_libs, Set_XshD& HACK_include_dirs, int& len_all, TEA_0Daz& hash_all)
{
    len_all += unit.src.size();
    hash_lweH(hash_all, unit.obj_hash);
    add_EEsc(HACK_include_dirs.keys_asc, unit.hacks.include_dirs.keys_asc);
    link_each_8txf(unit.hacks.link, HACK_linkFlags, HACK_pkgConfig_libs);
}
                                #endif

                                #ifndef DEF_each_8SHZc4qLXGk
                                #define DEF_each_8SHZc4qLXGk
inline void each_8SHZ(fu::view<TranslationUnit_8Oo1> a, Set_XshD& HACK_linkFlags, Set_XshD& HACK_pkgConfig_libs, Set_XshD& HACK_include_dirs, int& len_all, TEA_0Daz& hash_all)
{
    for (int i = 0; i < a.size(); i++)
        _S4Xg(a[i], HACK_linkFlags, HACK_pkgConfig_libs, HACK_include_dirs, len_all, hash_all);

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

static fu::str tmpfile_uGHE(const DirWrk_Nlbc& dir_wrk)
{
    /*MOV*/ fu::str fname = fu::str(dir_wrk.tmp);
    uint64_t r = next_u64_qB1H();
    for (int i = 0; i < 8; i++)
    {
        const uint64_t v = (r & 0x1full);
        fname += char(((v < 10ull) ? (int(fu::u8('0')) + int(unsigned(v))) : ((int(fu::u8('a')) + int(unsigned(v))) - 10)));
        r >>= 5ull;
    };
    return /*NRVO*/ fname;
}

static Errno_88RA atomic_write_uGHE(fu::vec_range<char> fname, fu::view<char> data, const DirWrk_Nlbc& dir_wrk)
{
    /*MOV*/ fu::str tmp = tmpfile_uGHE(dir_wrk);
    Errno_88RA _0;
    const Errno_88RA err = ((_0 = write_VWJw(fu::str(tmp), data, RW_RW_RW)) ? _0 : rename_VWJw(fu::str(tmp), fu::str(fname)));
    if (err)
        unlink_VWJw(static_cast<fu::str&&>(tmp));

    return err;
}

                                #ifndef DEF___AIQaQaGYUC4
                                #define DEF___AIQaQaGYUC4
inline static void _AIQa(fu::view<char> lib, fu::str& HACK_pkgConfig_cflags)
{
    if (!(!lib))
    {
        if (!HACK_pkgConfig_cflags)
            HACK_pkgConfig_cflags = fu::str(str_0akfmmne1qe);

        HACK_pkgConfig_cflags += (HACK_pkgConfig_cflags ? " "_view : " $(pkg-config --cflags "_view);
        HACK_pkgConfig_cflags += lib;
    };
}
                                #endif

                                #ifndef DEF_link_each_8q1xcBviSWa
                                #define DEF_link_each_8q1xcBviSWa
inline static void link_each_8q1x(const Set_XshD& link, fu::str& HACK_pkgConfig_cflags)
{
    for (int i = 0; i < link.keys_asc.size(); i++)
    {
        int i_1;
        fu::view<char> item = (i_1 = i, link.keys_asc[i_1]);
        const bool isFlag = starts_Sfbf(item, '-');
        _AIQa((!isFlag ? item : fu::view<char>{}), HACK_pkgConfig_cflags);
    };
}
                                #endif

                                #ifndef DEF_ends_OW45P9GlDid
                                #define DEF_ends_OW45P9GlDid
inline bool ends_OW45(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static BuildError_kI1v buildUnit_uGHE(TranslationUnit_8Oo1& unit, const int i, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const DirWrk_Nlbc& dir_wrk)
{
    const fu::str& F_cpp = unit.cpp_cache_file;
    const fu::str& F_obj = unit.obj_cache_file;
    if (!F_cpp || !F_obj)
    {
        return BuildError_kI1v{};
    }
    else if ((size_VWJw(fu::str(F_obj)) > 0ll) && !BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_nocache)))
    {
        return BuildError_kI1v{};
    }
    else
    {
        unit.tmp_file = tmpfile_uGHE(dir_wrk);
        unit.cache_cleanup |= CacheCleanup_Oz5J_Cpp;
        const fu::str& cpp = unit.src;
        atomic_write_uGHE(F_cpp, cpp, dir_wrk);
        const fu::str* x;
        const fu::str* x_1;
        const fu::str* x_2;
        fu::println(fu::view<fu::str> {{ fu::str((x = &(str_EpBq6326Vyf), (*x))), fu::str((x_1 = &(unit.human), (*x_1))), fu::str((x_2 = &(str_Cebu50MstTd), (*x_2))), fu::str(F_cpp) }});
        const double t0 = hr_0pZh();
        fu::str HACK_pkgConfig_cflags {};
        link_each_8q1x(unit.hacks.link, HACK_pkgConfig_cflags);
        if (HACK_pkgConfig_cflags)
            HACK_pkgConfig_cflags += ")"_view;

        fu::str INCLUDE_1 = (INCLUDE + HACK_pkgConfig_cflags);
        fu::str INCLUDE_2 = (INCLUDE_1 + (unit.iquote ? (" -iquote "_view + unit.iquote) : fu::str{}));
        fu::view<char> TODO_FIX_define_fu_TESTSUITE = (ends_OW45(F_obj, ".o.testsuite"_view) ? "-Dfu_TESTSUITE "_view : fu::view<char>{});
        fu::str CMD = (((((((GCC_CMD + TODO_FIX_define_fu_TESTSUITE) + "-c"_view) + INCLUDE_2) + " -o "_view) + unit.tmp_file) + " "_view) + F_cpp);
        /*MOV*/ fu::str stdout {};
        const int code = exec_uGHE(CMD, stdout);
        if (code)
        {
            return BuildError_kI1v { code, fu::str(cpp), static_cast<fu::str&&>(stdout) };
        }
        else
        {
            if ((runmode == RunMode_n0r3_CompilerTestcase) && (i > 0))
                unit.cache_cleanup |= CacheCleanup_Oz5J_Obj;

            const double t1 = hr_0pZh();
            const fu::str* x_3;
            const fu::str* x_4;
            const fu::str* x_5;
            fu::str x_6 {};
            const fu::str* x_7;
            fu::println(fu::view<fu::str> {{ fu::str((x_3 = &(str_Ae0dFzAVWej), (*x_3))), fu::str((x_4 = &(unit.human), (*x_4))), fu::str((x_5 = &(str_Cebu50MstTd), (*x_5))), (x_6 = fu::f64dec((t1 - t0)), x_6).const_cast_mut().destructive_move(), fu::str((x_7 = &(str_8HAsbhg9gt2), (*x_7))) }});
            return BuildError_kI1v{};
        };
    };
}

                                #ifndef DEF___w4p1v31ElX9
                                #define DEF___w4p1v31ElX9
inline static const BuildError_kI1v& _w4p1(const int i, fu::view_mut<TranslationUnit_8Oo1> arr, fu::view_mut<BuildError_kI1v> result, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const DirWrk_Nlbc& dir_wrk)
{
    TranslationUnit_8Oo1* _0;
    return (result.mutref(i) = (_0 = &(arr.mutref(i)), buildUnit_uGHE(*_0, i, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk)));
}
                                #endif

                                #ifndef DEF_parallel_for_6JzdUd7DXh6
                                #define DEF_parallel_for_6JzdUd7DXh6
inline static void parallel_for_6Jzd(const int min, int end, fu::view_mut<TranslationUnit_8Oo1> arr, fu::view_mut<BuildError_kI1v> result, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const DirWrk_Nlbc& dir_wrk)
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
        _w4p1(i, arr, result, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk);

    });

}
                                #endif

                                #ifndef DEF_map_oUt7tgCgZqh
                                #define DEF_map_oUt7tgCgZqh
inline fu::vec<BuildError_kI1v> map_oUt7(fu::view_mut<TranslationUnit_8Oo1> arr, const int min, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::view<char> GCC_CMD, fu::view<char> INCLUDE, const DirWrk_Nlbc& dir_wrk)
{
    /*MOV*/ fu::vec<BuildError_kI1v> result {};
    result.grow<false>(arr.size());
    parallel_for_6Jzd(min, arr.size(), arr, result, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF___8pSDFOgPRu7
                                #define DEF___8pSDFOgPRu7
inline static CacheCleanup_Oz5J _8pSD(TranslationUnit_8Oo1& unit)
{
    return (unit.cache_cleanup &= CacheCleanup_Oz5J(~CacheCleanup_Oz5J_Cpp));
}
                                #endif

                                #ifndef DEF_each_sm56SANX6J7
                                #define DEF_each_sm56SANX6J7
inline void each_sm56(fu::view_mut<TranslationUnit_8Oo1> a)
{
    for (int i = 0; i < a.size(); i++)
        _8pSD(a.mutref(i));

}
                                #endif

                                #ifndef DEF___M4McyGUKGo2
                                #define DEF___M4McyGUKGo2
inline static void _M4Mc(const TranslationUnit_8Oo1& unit, const int i, fu::str& explain, fu::view<TranslationUnit_8Oo1> units, const RunMode_n0r3 runmode)
{
    if (!((runmode == RunMode_n0r3_Testsuite) && (i != (units.size() - 1))))
        explain += (unit.human + "\n"_view);

}
                                #endif

                                #ifndef DEF_each_TSAOhKBl2q6
                                #define DEF_each_TSAOhKBl2q6
inline void each_TSAO(fu::view<TranslationUnit_8Oo1> a, fu::str& explain, fu::view<TranslationUnit_8Oo1> units, const RunMode_n0r3 runmode)
{
    for (int i = 0; i < a.size(); i++)
        _M4Mc(a[i], i, explain, units, runmode);

}
                                #endif

static void ensureOneEmptyLine_uGHE(fu::str& explain)
{
    if (explain && !ends_OW45(explain, "\n\n"_view))
        explain += (ends_L30J(explain, '\n') ? "\n"_view : "\n\n"_view);

}

                                #ifndef DEF___rgROGJ0cmia
                                #define DEF___rgROGJ0cmia
inline static fu::view<char> _rgRO(const TranslationUnit_8Oo1& unit, fu::str& explain)
{
    return (explain += unit.src);
}
                                #endif

                                #ifndef DEF_each_cnRZcVFRbR3
                                #define DEF_each_cnRZcVFRbR3
inline void each_cnRZ(fu::view<TranslationUnit_8Oo1> a, fu::str& explain)
{
    for (int i = 0; i < a.size(); i++)
        _rgRO(a[i], explain);

}
                                #endif

[[noreturn]] static fu::never ERR_uGHE(fu::str&& cpp, fu::view_mut<TranslationUnit_8Oo1> units, const DEV_OnFail_3YLB onfail, const RunMode_n0r3 runmode, const int code, fu::view<char> stdout, const DirWrk_Nlbc& dir_wrk)
{
    each_sm56(units);
    if (onfail & DEV_OnFail_3YLB_OnFail_WriteRepro)
    {
        if (!cpp)
        {
            for (int i = units.size(); i-- > 0; )
            {
                const TranslationUnit_8Oo1& unit = units[i];
                if (unit.cpp_cache_file)
                    cpp += (("#include \""_view + unit.cpp_cache_file) + "\"\n"_view);

            };
        };
        fu::str fname = (dir_wrk.cpp + "failing-testcase.cpp"_view);
        fu::str x {};
        fu::println(fu::view<fu::str> {{ (x = ("  WRITE "_view + fname), x).const_cast_mut().destructive_move() }});
        atomic_write_uGHE(fname, cpp, dir_wrk);
    };
    fu::str explain {};
    if (onfail & DEV_OnFail_3YLB_OnFail_PrintInput)
    {
        explain += ((runmode == RunMode_n0r3_CompilerTestcase) ? "COMPILER BUG or INCORRECT TESTCASE:\n\n"_view : "Testsuite failed: "_view);
        each_TSAO(units, explain, units, runmode);
    };
    if (stdout)
        ensureOneEmptyLine_uGHE(explain);

    explain += stdout;
    if (onfail & DEV_OnFail_3YLB_OnFail_PrintOutput)
    {
        ensureOneEmptyLine_uGHE(explain);
        explain += "\tGenerated code:\n\n"_view;
        each_cnRZ(units, explain);
    };
    ensureOneEmptyLine_uGHE(explain);
    explain += x7E_rA00("   EXIT code: "_view, fu::i64dec(code));
    fail_uGHE(explain);
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

                                #ifndef DEF_x3Cx3E_FjWJAzgHW9g
                                #define DEF_x3Cx3E_FjWJAzgHW9g
inline int x3Cx3E_FjWJ(const Timespec_RdAp& a, const Timespec_RdAp& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_Rgh3(a.sec, b.sec)))
        return cmp;
    else if ((cmp = x3Cx3E_Rgh3(a.nsec, b.nsec)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x21x3D_c3YqaIp8Wi8
                                #define DEF_x21x3D_c3YqaIp8Wi8
inline bool operator!=(const Timespec_RdAp& a, const Timespec_RdAp& b)
{
    return !!x3Cx3E_FjWJ(a, b);
}
                                #endif

                                #ifndef DEF___zH2nRMoVoq4
                                #define DEF___zH2nRMoVoq4
inline static void _zH2n(const FileInvariants_fbOC& file_invariant)
{
    const Stat_EQWk& expect = file_invariant.stat;
    Stat_EQWk actual {};
    const Errno_88RA err = stat_VWJw(fu::str(file_invariant.path), actual);
    if (err || (actual.size != expect.size) || (actual.mtime != expect.mtime))
        fail_uGHE((((("Header crosscheck failed for:"_view + "\n\t"_view) + file_invariant.path) + "\n\n\tError: "_view) + (err ? qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err))) : fu::str("mtime changed."_fu))));

}
                                #endif

                                #ifndef DEF_each_e2Yp41xV4Pl
                                #define DEF_each_e2Yp41xV4Pl
inline void each_e2Yp(fu::view<FileInvariants_fbOC> a)
{
    for (int i = 0; i < a.size(); i++)
        _zH2n(a[i]);

}
                                #endif

static void crosscheckHeaders_beforePersistingTempObjects_uGHE(fu::view<FileInvariants_fbOC> file_invariants, int& _didCrosscheckHeaders)
{
    if (!(_didCrosscheckHeaders++))
        each_e2Yp(file_invariants);

}

static void READ_cachedTestOutput_uGHE(fu::str& stdout, fu::vec_range<char> F_exe, TestOutput_OIXu& output, const fu::str& READ_LAZILY, ExitStatus_iZrm& status)
{
    fu::str src {};
    read_VWJw(fu::str(F_exe), src, 0ll);
    output = parse_6GsP(src);
    status = output.status;
    stdout = READ_LAZILY;
}

static void WRITE_cachedTestOutput_uGHE(fu::view<char> stdout, fu::vec_range<char> F_exe, const TestOutput_OIXu& output, fu::vec_range<char> F_out, const DirWrk_Nlbc& dir_wrk)
{
    fu::str out = serialize_6GsP(output);
    if (out.size() == 20)
    {
        atomic_write_uGHE(F_exe, out, dir_wrk);
        if (stdout)
            atomic_write_uGHE(F_out, stdout, dir_wrk);

    }
    else
        fail_uGHE(str_u0rYBAjdSD5);

}

static BuildOutput_zaam buildTarget_uGHE(fu::view_mut<TranslationUnit_8Oo1> units, fu::view<FileInvariants_fbOC> file_invariants, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const DEV_OnFail_3YLB onfail, const RunMode_n0r3 runmode, const int expect_exit, const BuildScheme_Vgo7 bscheme, fu::view<char> GCC_CMD, fu::vec_range<char> bin, const Context_noPA& ctx, const DirWrk_Nlbc& dir_wrk)
{
    fu_DEFER(for (int i = 0; i < units.size(); i++)
    {
        const TranslationUnit_8Oo1& unit = units[i];
        try_unlink_uGHE(unit.tmp_file);
        if (unit.cache_cleanup & CacheCleanup_Oz5J_Cpp)
            try_unlink_uGHE(unit.cpp_cache_file);

        if (unit.cache_cleanup & CacheCleanup_Oz5J_Obj)
            try_unlink_uGHE(unit.obj_cache_file);

    });
    Set_XshD HACK_linkFlags {};
    Set_XshD HACK_pkgConfig_libs {};
    Set_XshD HACK_include_dirs {};
    int len_all {};
    TEA_0Daz hash_all {};
    each_8SHZ(units, HACK_linkFlags, HACK_pkgConfig_libs, HACK_include_dirs, len_all, hash_all);
    fu::str INCLUDE = (((((flags_cc ? (" "_view + join_RGgB(flags_cc, ' ')) : fu::str{}) + " -I "_view) + ctx.fudir) + "include"_view) + (HACK_include_dirs ? (" -I "_view + join_yqDb(HACK_include_dirs.keys_asc, " -I "_view)) : fu::str{}));
    fu::str LINK = (((flags_ld ? (" "_view + join_RGgB(flags_ld, ' ')) : fu::str{}) + (HACK_linkFlags ? (" "_view + join_yqDb(HACK_linkFlags.keys_asc, " "_view)) : fu::str{})) + (HACK_pkgConfig_libs ? ((" $(pkg-config --libs "_view + join_yqDb(HACK_pkgConfig_libs.keys_asc, " "_view)) + ")"_view) : fu::str{}));
    if (BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_shared)) && (runmode != RunMode_n0r3_Testsuite))
    {
        LINK += " -shared"_view;
        fu::view<char> soname = filename_qZI0(bin);
        if (fu::APPLE)
            LINK += (" -Wl,-install_name,@rpath/"_view + soname);
        else
            LINK += (" -Wl,-soname,"_view + soname);

    };
    len_all += LINK.size();
    hash_l6RU(hash_all, LINK);
    int code {};
    fu::str stdout {};
    const TEA_0Daz* tea;
    fu::str F_exe = x7E_rA00(((dir_wrk.bin + digest16_lweH((tea = &(hash_all), (uint64_t((*tea).v0) | (uint64_t((*tea).v1) << 32ull))), 0)) + "-"_view), fu::i64dec(len_all));
    const int64_t old_size = (!(BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_nocache)) || ((runmode == RunMode_n0r3_Testsuite) && BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_nocache_tests)))) ? size_VWJw(fu::str(F_exe)) : 0ll);
    const int64_t old_size_1 = ((old_size != 4ll) ? old_size : 0ll);
    if ((old_size_1 < 1ll) && (bin || runmode))
    {
        fu::vec<BuildError_kI1v> buildErrors = map_oUt7(units, 0, runmode, bscheme, GCC_CMD, INCLUDE, dir_wrk);
        for (int i_1 = 0; i_1 < buildErrors.size(); i_1++)
        {
            const BuildError_kI1v& err = buildErrors[i_1];
            if ((code = err.code))
            {
                stdout = err.stdout;
                ERR_uGHE(fu::str(err.cpp), units, onfail, runmode, code, stdout, dir_wrk);
            };
        };
        int _didCrosscheckHeaders {};
        for (int i_2 = 0; i_2 < units.size(); i_2++)
        {
            TranslationUnit_8Oo1& unit = units.mutref(i_2);
            if (unit.tmp_file)
            {
                crosscheckHeaders_beforePersistingTempObjects_uGHE(file_invariants, _didCrosscheckHeaders);
                const fu::str& from = unit.tmp_file;
                const fu::str& to = unit.obj_cache_file;
                const Errno_88RA err = rename_VWJw(fu::str(from), fu::str(to));
                if (err)
                    fail_uGHE(((((("Build cache failed to move temporary:\n\t"_view + from) + "\n\n\tto the object cache at:\n\t"_view) + to) + "\n\n\tError: "_view) + qBAD_e44U(x7E_rA00("E"_view, fu::i64dec(err)))));
                else
                    unit.tmp_file.clear();

            };
        };
        /*MOV*/ fu::str F_tmp = tmpfile_uGHE(dir_wrk);
        fu::str cmd = ((GCC_CMD + "-o "_view) + F_tmp);
        for (int i_3 = 0; i_3 < units.size(); i_3++)
        {
            const TranslationUnit_8Oo1& unit = units[i_3];
            if (unit.obj_cache_file)
                cmd += (" "_view + unit.obj_cache_file);

        };

        {
            const fu::str* x;
            fu::vec_range<char> x_1 {};
            fu::println(fu::view<fu::str> {{ fu::str((x = &(str_T3ejd7F41K9), (*x))), fu::str(F_exe), fu::str((x_1.ptr_reassign(LINK), x_1)) }});
            const double t0 = hr_0pZh();
            fu::str CMD = (cmd + LINK);
            int _0;
            code = ((_0 = exec_uGHE(CMD, stdout)) ? _0 : (_0 = int(chmod_VWJw(fu::str(F_tmp), RWX_RX_RX))) ? _0 : int(rename_VWJw(static_cast<fu::str&&>(F_tmp), fu::str(F_exe))));
            if (code)
            {
                fu::str x_2 {};
                fu::println(fu::view<fu::str> {{ (x_2 = ((x7E_rA00((("   FAIL "_view + CMD) + " EXIT="_view), fu::i64dec(code)) + "\n"_view) + stdout), x_2).const_cast_mut().destructive_move() }});
                ERR_uGHE(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
            }
            else
            {
                const double t1 = hr_0pZh();
                const fu::str* x_2;
                fu::str x_3 {};
                const fu::str* x_4;
                fu::println(fu::view<fu::str> {{ fu::str((x_2 = &(str_Ae0dFzAVWej), (*x_2))), (x_3 = fu::f64dec((t1 - t0)), x_3).const_cast_mut().destructive_move(), fu::str((x_4 = &(str_8HAsbhg9gt2), (*x_4))) }});
            };
        };
        if (code)
        {
            ERR_uGHE(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
        };
    };
    TestOutput_OIXu output {};
    if (runmode && (runmode != RunMode_n0r3_EnsureExecutableButDontRun))
    {
        const bool OPTI_StatusCode = ((runmode == RunMode_n0r3_CompilerTestcase) || (runmode == RunMode_n0r3_Testsuite));
        /*MOV*/ fu::str F_out = (OPTI_StatusCode ? (dir_wrk.out + fu::get_view(F_exe, dir_wrk.bin.size())) : fu::str{});
        const fu::str& READ_LAZILY = str_CMHrCVD5k9e;
        ExitStatus_iZrm status {};
        stdout = fu::str{};
        if (OPTI_StatusCode && looks_legit_6GsP(old_size_1))
            READ_cachedTestOutput_uGHE(stdout, F_exe, output, READ_LAZILY, status);
        else
        {

            {
                const fu::str* x;
                fu::println(fu::view<fu::str> {{ fu::str((x = &(str_M1UgLXF83oa), (*x))), fu::str(F_exe) }});
                const double t0 = hr_0pZh();
                code = int(spawn_0Hw8(fu::vec<fu::str> {{ fu::str(F_exe) }}, stdout, stdout, status, (runmode == RunMode_n0r3_Normally)));
                output = from_6GsP(stdout, status);
                const double t1 = hr_0pZh();
                const fu::str* x_1;
                fu::str x_2 {};
                const fu::str* x_3;
                fu::str x_4 {};
                fu::str x_5 {};
                fu::str x_6 {};
                fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_Ae0dFzAVWej), (*x_1))), (x_2 = fu::f64dec((t1 - t0)), x_2).const_cast_mut().destructive_move(), fu::str((x_3 = &(str_8HAsbhg9gt2), (*x_3))), (x_4 = (signalled_BXrk(status) ? (x7E_rA00(" signal("_view, fu::i64dec(signal_BXrk(status))) + ")"_view) : fu::str{}), x_4).const_cast_mut().destructive_move(), (x_5 = (exited_BXrk(status) ? (x7E_rA00(" exit("_view, fu::i64dec(exit_BXrk(status))) + ")"_view) : fu::str{}), x_5).const_cast_mut().destructive_move(), (x_6 = (code ? (x7E_rA00(" errno("_view, fu::i64dec(code)) + ")"_view) : fu::str{}), x_6).const_cast_mut().destructive_move() }});
            };
            if (OPTI_StatusCode)
            {
                const int64_t new_size = size_VWJw(fu::str(F_exe));
                if (looks_legit_6GsP(new_size))
                    READ_cachedTestOutput_uGHE(stdout, F_exe, output, READ_LAZILY, status);
                else if (!code)
                    WRITE_cachedTestOutput_uGHE(stdout, F_exe, output, F_out, dir_wrk);

            };
        };
        if (!code && !(exited_BXrk(status) && (exit_BXrk(status) == expect_exit)))
        {
            int _1;
            code = ((_1 = (exited_BXrk(status) ? exit_BXrk(status) : 0)) ? _1 : (_1 = (signalled_BXrk(status) ? int(signal_BXrk(status)) : 0)) ? _1 : (_1 = int(status)) ? _1 : -1);
        };
        if (OPTI_StatusCode && code && (stdout == READ_LAZILY))
        {
            stdout = fu::str{};
            read_VWJw(F_out.destructive_move(), stdout, 0ll);
        };
    };
    if (code)
    {
        ERR_uGHE(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
    }
    else
    {
        if (bin)
        {
            mkdir_p_5u3x(fu::str(dirname_qZI0(bin)), RWX_RWX_RWX);
            code = int(rename_VWJw(fu::str(F_exe), fu::str(bin)));
        };
        if (code)
        {
            ERR_uGHE(fu::str{}, units, onfail, runmode, code, stdout, dir_wrk);
        }
        else
        {
            return BuildOutput_zaam { fu::str((bin ? bin : F_exe)), fu::vec<fu::str>{}, TestOutput_OIXu(output) };
        };
    };
}

                                #ifndef DEF___sunmlIMXmKh
                                #define DEF___sunmlIMXmKh
inline static void _sunm(const FileInvariants_fbOC& file_invariant, BuildOutput_zaam& ret)
{
    if (file_invariant.path)
        ret.watch_list += fu::str(file_invariant.path);

}
                                #endif

                                #ifndef DEF_each_dMdP3W2jfRj
                                #define DEF_each_dMdP3W2jfRj
inline void each_dMdP(fu::view<FileInvariants_fbOC> a, BuildOutput_zaam& ret)
{
    for (int i = 0; i < a.size(); i++)
        _sunm(a[i], ret);

}
                                #endif

                                #ifndef DEF_add_q7BeXLo3Yld
                                #define DEF_add_q7BeXLo3Yld
inline bool add_q7Be(Set_qOJY& _, const int key)
{
    fu::view<int> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_odNT(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, key);
    return true;
}
                                #endif

                                #ifndef DEF___12X5qKbqWy0
                                #define DEF___12X5qKbqWy0
inline static void _12X5(const int modid, fu::view<int> unit_indices, TranslationUnit_8Oo1& unit)
{
    const int unit_index = unit_indices[modid];
    if (!(unit_index < 0))
        add_q7Be(unit.testsuite_units, unit_index);

}
                                #endif

                                #ifndef DEF_each_Xc3wsdRWkue
                                #define DEF_each_Xc3wsdRWkue
inline void each_Xc3w(fu::view<int> a, fu::view<int> unit_indices, TranslationUnit_8Oo1& unit)
{
    for (int i = 0; i < a.size(); i++)
        _12X5(a[i], unit_indices, unit);

}
                                #endif

                                #ifndef DEF___1NRClBipqCj
                                #define DEF___1NRClBipqCj
inline static const TranslationUnit_8Oo1& _1NRC(const int unit_index, fu::view<TranslationUnit_8Oo1> units)
{
    return units[unit_index];
}
                                #endif

                                #ifndef DEF_map_rTHQunpNhBk
                                #define DEF_map_rTHQunpNhBk
inline fu::vec<TranslationUnit_8Oo1> map_rTHQ(fu::view<int> a, fu::view<TranslationUnit_8Oo1> units)
{
    /*MOV*/ fu::vec<TranslationUnit_8Oo1> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = TranslationUnit_8Oo1(_1NRC(a[i], units));

    return /*NRVO*/ res;
}
                                #endif

static fu::str ensure_local_fname_uGHE(fu::vec_range<char> fname, fu::view<char> dir_src)
{
    if (starts_ojop(fname, dir_src))
        return fu::str(fname);
    else
    {
        fu::str foreign = (dir_src + ".foreign/"_view);
        mkdir_p_5u3x(fu::str(foreign), RWX_RWX_RWX);
        fu::str rel = replace_4fXW(replace_4fXW(relative_qZI0(dir_src, fname), "../"_view, "up__"_view), "/"_view, "__"_view);
        return foreign + rel;
    };
}

static fu::str update_file_dest_uGHE(fu::vec_range<char> fname, fu::view<char> dir_src, fu::view<char> dir_cpp)
{
    fu::str fname_1 = ensure_local_fname_uGHE(fname, dir_src);
    if (starts_ojop(fname_1, dir_src))
        return dir_cpp + fu::get_view(fname_1, dir_src.size());
    else
        fail_uGHE(str_NDllWFurVnb);

}

                                #ifndef DEF_x21x3D_ZDMfM5XjHla
                                #define DEF_x21x3D_ZDMfM5XjHla
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_j5CR(a, b);
}
                                #endif

static fu::vec_range<char> update_file_IpIP(fu::vec_range<char> fname, fu::view<char> data, fu::view<char> dir_cpp, const DirWrk_Nlbc& dir_wrk)
{
    fu::str xcheck {};
    if (read_VWJw(fu::str(fname), xcheck, 0ll) || (xcheck != data))
    {
        for (; ; )
        {
            const Errno_88RA err = atomic_write_uGHE(fname, data, dir_wrk);
            if (err)
            {
                if (err == ENOENT)
                {
                    int last = -1;
                    for (int i = (dir_cpp.size() + 1); i < fname.size(); i++)
                    {
                        if (fname[i] == '/')
                            last = i;

                    };
                    if ((last >= 0) && !mkdir_p_5u3x(fu::str(fu::get_range(fname, 0, (last + 1))), RWX_RWX_RWX))
                        continue;

                };
                fail_uGHE(x7E_rA00((("Failed to write `"_view + fname) + "`, error: #"_view), fu::i64dec(err)));
            }
            else
            {
                fu::str x {};
                fu::println(fu::view<fu::str> {{ (x = ("  WROTE "_view + fname), x).const_cast_mut().destructive_move() }});
                break;
            };
        };
    };
    return fname;
}

static fu::str update_file_uGHE(fu::vec_range<char> fname, fu::view<char> data, fu::view<char> dir_src, fu::view<char> dir_cpp, const DirWrk_Nlbc& dir_wrk)
{
    return update_file_IpIP(update_file_dest_uGHE(fname, dir_src, dir_cpp), data, dir_cpp, dir_wrk).const_cast_mut().destructive_move();
}

static fu::view<char> update_file_QLsA(fu::vec_range<char> fname, fu::view<char> data, fu::view<char> dir_cpp, const DirWrk_Nlbc& dir_wrk)
{
    fu::str xcheck {};
    if (read_VWJw(fu::str(fname), xcheck, 0ll) || (xcheck != data))
    {
        for (; ; )
        {
            const Errno_88RA err = atomic_write_uGHE(fname, data, dir_wrk);
            if (err)
            {
                if (err == ENOENT)
                {
                    int last = -1;
                    for (int i = (dir_cpp.size() + 1); i < fname.size(); i++)
                    {
                        if (fname[i] == '/')
                            last = i;

                    };
                    if ((last >= 0) && !mkdir_p_5u3x(fu::str(fu::get_range(fname, 0, (last + 1))), RWX_RWX_RWX))
                        continue;

                };
                fail_uGHE(x7E_rA00((("Failed to write `"_view + fname) + "`, error: #"_view), fu::i64dec(err)));
            }
            else
            {
                fu::str x {};
                fu::println(fu::view<fu::str> {{ (x = ("  WROTE "_view + fname), x).const_cast_mut().destructive_move() }});
                break;
            };
        };
    };
    return fname;
}

static void outputSources_uGHE(fu::view<TranslationUnit_8Oo1> units, fu::view<char> dir_src, fu::vec_range<char> dir_cpp, fu::view<char> unity, const DirWrk_Nlbc& dir_wrk)
{
    if (dir_cpp && dir_src)
    {
        mkdir_p_5u3x(fu::str(dir_cpp), RWX_RWX_RWX);
        fu::vec<fu::str> cpp_files {};
        for (int i = 1; i < units.size(); i++)
        {
            const TranslationUnit_8Oo1& unit = units[i];
            fu::vec_range<char> fname = (unit.src_output_file ? unit.src_output_file : fail_uGHE(str_4RS8rTVHIC5));
            /*MOV*/ fu::str fname_1 = update_file_uGHE(fname, unit.src, dir_src, dir_cpp, dir_wrk);
            cpp_files.push(fname_1.destructive_move());
        };
        if (unity)
        {
            fu::str data = (("#ifdef fu_UNITY_FULIB\n"_view + "#include <fu/_fulib.cpp>\n"_view) + "#endif\n\n"_view);
            fu::str fname = (unity + ".unity.cpp"_view);
            fu::str dest = update_file_dest_uGHE(fname, dir_src, dir_cpp);
            for (int i_1 = 0; i_1 < cpp_files.size(); i_1++)
            {
                fu::view<char> incl {};
                if (incl.ptr_reassign(cpp_files[i_1]))
                    data += (("#include \""_view + relative_qZI0(dest, incl)) + "\"\n"_view);

            };
            update_file_QLsA(dest, data, dir_cpp, dir_wrk);
        };
    };
}

BuildOutput_zaam build_uGHE(fu::str&& dir_wrk, fu::str&& fulib, fu::vec_range<char> bin, fu::str&& dir_obj, fu::str&& dir_src, fu::str&& dir_cpp, fu::view<char> unity, const DEV_OnFail_3YLB onfail, const RunMode_n0r3 runmode, const int expect_exit, const BuildScheme_Vgo7 bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const Context_noPA& ctx)
{
    if (if_last_0CTh(dir_wrk) != '/')
    {
        if (dir_wrk)
            dir_wrk += '/';
        else
            fail_uGHE(str_DXqe975g894);

    };
    if (dir_obj && (if_last_0CTh(dir_obj) != '/'))
        dir_obj += '/';

    if (dir_src && (if_last_0CTh(dir_src) != '/'))
        dir_src += '/';

    if (dir_cpp && (if_last_0CTh(dir_cpp) != '/'))
        dir_cpp += '/';

    fu::str O_lvl = fu::str((BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_unoptimized)) ? str_p8131mZs3C2 : str_CqqoPrYpftb));
    if (!BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_assertions)))
        O_lvl += "-DNDEBUG "_view;

    O_lvl += "-fno-math-errno "_view;
    if (bscheme & BuildScheme_Vgo7_debuggable)
        O_lvl += "-g "_view;

    if (bscheme & BuildScheme_Vgo7_TODO_FIX_retail)
        O_lvl += "-Dfu_RETAIL "_view;

    O_lvl += "-fvisibility=hidden "_view;
    if (BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_hotswap)) || BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_shared)))
        O_lvl += "-fPIC "_view;

    if (BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_hotswap)) || BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_shared)))
        O_lvl += "-Dfu_HOTSWAP "_view;

    fu::str GCChash = ("g++ -std=c++1z "_view + O_lvl);
    fu::str GCC_CMD = ((((((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_view) + "-Wdouble-promotion "_view) + "-Wconversion -Wsign-conversion "_view) + TODO_FIX_ignoredWarnings) + ((BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_hotswap)) && fu::APPLE) ? "-Wno-return-type-c-linkage "_view : fu::view<char>{})) + (fu::LINUX ? "-pthread -ldl "_view : fu::view<char>{}));
    const TEA_0Daz GCChash_1 = hash_s9RC(GCChash);
    if (!(fulib))
        fulib = join_qZI0(ctx.fudir, (BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_hotswap)) ? str_9EH8A0P6J72 : str_guvpxVzy8u5));

    /*MOV*/ fu::str fulib_cpp {};
    Errno_88RA err;
    if ((err = read_VWJw(fu::str(fulib), fulib_cpp, 0ll)))
        fail_uGHE(x7E_rA00((("Failed to read fulib @ "_view + fulib) + ": "_view), fu::i64dec(err)));
    else
    {
        CodegenOutput_qIMB fulib_cpp_1 = CodegenOutput_qIMB { static_cast<fu::str&&>(fulib_cpp), Set_XshD{}, BuildHacks_sqc0{}, Set_qOJY{}, CGDefects_2L18{} };
        fu::vec<int> unit_indices = map_UKvQ(ctx.modules);
        fu::vec<TranslationUnit_8Oo1> units {};
        fu::vec<FileInvariants_fbOC> file_invariants {};
        Map_cOsg include_hashes {};
        fu::vec<int> dep_order = (ctx.dep_order ? fu::vec<int>(ctx.dep_order) : fu::vec<int> {{ 0 }});
        for (int i = 0; i < dep_order.size(); i++)
        {
            const int modid = dep_order[i];
            const Module_wo7O& module = ctx.modules[modid];
            const CodegenOutput_qIMB& cpp = (i ? module.out.cpp : fulib_cpp_1);
            if (!(!cpp.src))
            {
                fu::view<char> fname = (i ? module.fname : "fulib runtime"_view);
                fu::vec_range<char> human = (i ? filename_qZI0(module.fname) : str_SwaHKZwsGC2);
                fu::vec_range<char> iquote = (i ? dirname_qZI0(module.fname) : (*(fu::str*)fu::NIL));
                units.push(TranslationUnit_8Oo1 { fu::str(human), fu::str(cpp.src), fu::str(iquote), TEA_0Daz{}, (fname + ".cpp"_view), fu::str{}, TEA_0Daz{}, fu::str{}, fu::str{}, CacheCleanup_Oz5J{}, BuildHacks_sqc0{}, Set_qOJY{} });
                const int unit_index = (unit_indices.mutref(modid) = (units.size() - 1));
                TranslationUnit_8Oo1& unit = units.mutref(unit_index);
                TEA_0Daz& includes_hash = unit.includes_hash;
                const Set_XshD* _;
                for (int i_1 = 0; i_1 < (_ = &(cpp.includes_headers), (*_).keys_asc.size()); i_1++)
                {
                    const Set_XshD* __1;
                    int i_2;
                    const uint64_t hash = getIncludeHash_uGHE((__1 = &(cpp.includes_headers), i_2 = i_1, (*__1).keys_asc[i_2]), module.fname, file_invariants, include_hashes);
                    if (hash)
                        hash_qRo1(includes_hash, hash);

                };
                if (cpp.hacks)
                {
                    add_EEsc(unit.hacks.link.keys_asc, cpp.hacks.link.keys_asc);
                    const Set_XshD& include_dirs = cpp.hacks.include_dirs;
                    if (include_dirs)
                    {
                        fu::view<char> dir = dirname_qZI0(module.fname);
                        each_6hRA(include_dirs.keys_asc, unit, dir);
                    };
                };
            };
        };
        DirWrk_Nlbc dir_wrk_1 = DirWrk_uGHE(dir_wrk);
        for (int i_1 = 0; i_1 < units.size(); i_1++)
        {
            TranslationUnit_8Oo1& unit = units.mutref(i_1);
            fu::view<char> cpp = (unit.src ? unit.src : fail_uGHE(str_fhzi64hBLPa));
            TEA_0Daz& hash = unit.obj_hash;
            fu_ASSERT(!hash);
            hash_l6RU(hash, unit.src);
            const TEA_0Daz* tea;
            unit.cpp_cache_file = x7E_rA00((digest16_lweH((tea = &(hash), (uint64_t((*tea).v0) | (uint64_t((*tea).v1) << 32ull))), 0) + "-"_view), fu::i64dec(cpp.size()));
            hash_lweH(hash, unit.includes_hash);
            hash_lweH(hash, GCChash_1);
            const TEA_0Daz* tea_1;
            unit.obj_cache_file = ((((dir_wrk_1.obj + unit.cpp_cache_file) + "-"_view) + digest16_lweH((tea_1 = &(hash), (uint64_t((*tea_1).v0) | (uint64_t((*tea_1).v1) << 32ull))), 0)) + ".o"_view);
            unit.cpp_cache_file = ((dir_wrk_1.cpp + unit.cpp_cache_file) + ".cpp"_view);
        };
        /*MOV*/ BuildOutput_zaam ret = buildTarget_uGHE(units, file_invariants, flags_cc, flags_ld, onfail, runmode, expect_exit, bscheme, GCC_CMD, bin, ctx, dir_wrk_1);
        if (bscheme & BuildScheme_Vgo7_watch)
        {
            fu_ASSERT(!ret.watch_list);
            for (int i_2 = 1; i_2 < ctx.modules.size(); i_2++)
            {
                const fu::str& fname = ctx.modules[i_2].fname;
                if (fname)
                    ret.watch_list += fu::str(fname);

            };
            each_dMdP(file_invariants, ret);
        };
        if (!BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_notest)))
        {
            for (int i_2 = 1; i_2 < ctx.modules.size(); i_2++)
            {
                const Set_qOJY& testsuite_modids = ctx.modules[i_2].out.cpp.testsuite_modids;
                if (!(!testsuite_modids))
                {
                    const int unit_index = unit_indices[i_2];
                    if (unit_index > 0)
                    {
                        TranslationUnit_8Oo1& unit = units.mutref(unit_index);
                        each_Xc3w(testsuite_modids.keys_asc, unit_indices, unit);
                    }
                    else
                        fail_uGHE(str_NTPcb2QoQ9a);

                };
            };
            for (int i_3 = 0; i_3 < units.size(); i_3++)
            {
                const TranslationUnit_8Oo1& unit = units[i_3];
                if (!(!unit.testsuite_units))
                {
                    TranslationUnit_8Oo1 testsuite = unit;
                    hash_l6RU(testsuite.obj_hash, str_k8srE0RQadk);
                    testsuite.obj_cache_file += ".testsuite"_view;
                    testsuite.src_output_file += ".testsuite"_view;
                    fu::vec<TranslationUnit_8Oo1> testsuite_units = (map_rTHQ(unit.testsuite_units.keys_asc, units) + testsuite);
                    buildTarget_uGHE(testsuite_units, file_invariants, flags_cc, flags_ld, ((runmode == RunMode_n0r3_CompilerTestcase) ? onfail : DEV_OnFail_3YLB((DEV_OnFail_3YLB_OnFail_PrintInput | DEV_OnFail_3YLB_OnFail_WriteRepro))), RunMode_n0r3_Testsuite, 0, bscheme, GCC_CMD, (*(fu::str*)fu::NIL), ctx, dir_wrk_1);
                };
            };
        };
        outputSources_uGHE(units, dir_src, dir_cpp, unity, dir_wrk_1);
        return /*NRVO*/ ret;
    };
}

#endif
