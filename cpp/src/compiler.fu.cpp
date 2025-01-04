#include <cmath>
#include <cstdint>
#include <errno.h>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <signal.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <sys/wait.h>
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
struct ModidAndOrder_itn0;
struct Result_z5w0;
struct BuildOutput_zaam;
struct TestOutput_OIXu;
typedef int ExitStatus_iZrm;
enum RunMode_n0r3: fu::u8;
typedef uint16_t BuildScheme_Vgo7;
typedef fu::u8 DEV_OnFail_3YLB;
typedef int Errno_88RA;
typedef int WatchID_fBDr;
typedef int PID_05b1;
typedef int FD_q1SK;
struct BlockedSigmask_g3Eo;
typedef unsigned SigMask_aymR;
typedef int Signo_6FLP;
struct Loop_UQM7;
struct Pool_X5U1;
union Meta_igy4;
struct Meta256_GAqO;
enum Kind_2p91: fu::u8;
typedef fu::u8 SocketState_xV3L;
enum ChildStream_ofm8: fu::u8;
struct Child_elyG;
typedef int WriteEnd_aNMe;
typedef int ReadEnd_6NTX;
struct LoopEvent_5icL;
Module_wo7O& getModule_1qjp(fu::vec_range<char>, Context_noPA&);
fu::str FAIL_text_u9Gb(fu::vec_range<TokenIdx_5581>, fu::view<char>, const Context_noPA&);
fu::str getFile_1qjp(fu::vec_range<char>, Context_noPA&);
fu::str qBAD_e44U(fu::view<char>);
[[noreturn]] fu::never FAIL_u9Gb(fu::view<char>, fu::vec_range<TokenIdx_5581>, const Context_noPA&);
ModuleStat_sTmh ModuleStat_now_aKPw();
LexerOutput_DN4p lex_pnA5(fu::vec_range<char>, fu::vec_range<char>);
ParserOutput_d14k parse_qFIn(int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, const Options_TBgD&);
ModuleStat_sTmh operator-(const ModuleStat_sTmh&, const ModuleStat_sTmh&);
void setModule_1qjp(const Module_wo7O&, Context_noPA&);
fu::vec_range<char> dirname_qZI0(fu::vec_range<char>);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
fu::str resolveFile_SqDq(fu::vec_range<char>, Context_noPA&);
ModidAndOrder_itn0 compile_lexParseDeps_Tsi8(fu::vec_range<char>, fu::vec_range<TokenIdx_5581>, Context_noPA&, const Options_TBgD&);
SolverOutput_hA3T solve_gDsn(const Context_noPA&, Module_wo7O&, const Options_TBgD&);
fu::str inspect_wkVO(const Module_wo7O&);
CodegenOutput_qIMB cpp_codegen_i4S3(const Module_wo7O&, const Context_noPA&, const Options_TBgD&);
BuildOutput_zaam build_uGHE(fu::str&&, fu::str&&, fu::vec_range<char>, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, DEV_OnFail_3YLB, RunMode_n0r3, int, BuildScheme_Vgo7, fu::view<fu::str>, fu::view<fu::str>, const Context_noPA&);
bool add_ZwXY(BitSet_mmp7&, int);
bool has_ZwXY(const BitSet_mmp7&, int);
static BuildOutput_zaam recompile_Tsi8(bool, bool, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, RunMode_n0r3, BuildScheme_Vgo7, fu::view<fu::str>, fu::view<fu::str>, BuildScheme_Vgo7, fu::vec_range<char>, fu::vec_range<char>, fu::vec<fu::str>&, bool&, double&, Context_noPA&, const Options_TBgD&);
double hr_0pZh();
void operator+=(ModuleStat_sTmh&, const ModuleStat_sTmh&);
void ModuleStat_print_aKPw(const ModuleStat_sTmh&, fu::vec_range<char>, fu::view<char>);
Errno_88RA unlink_VWJw(fu::str&&);
BlockedSigmask_g3Eo block_wYYR(fu::view<Signo_6FLP>, Errno_88RA&);
Errno_88RA close_iPLv(FD_q1SK);
Errno_88RA kill_wYYR(PID_05b1, Signo_6FLP);
Errno_88RA unblock_wYYR(const BlockedSigmask_g3Eo&);

                                #ifndef DEF_STATE_MASK
                                #define DEF_STATE_MASK
inline constexpr uint64_t STATE_MASK = 0xfull;
                                #endif

                                #ifndef DEF_STATE_OFFSET
                                #define DEF_STATE_OFFSET
inline constexpr uint64_t STATE_OFFSET = 4ull;
                                #endif
bool updateFile_1qjp(fu::vec_range<char>, const NukeOnRebuild_TLE7&, Context_noPA&);
Errno_88RA spawn_x5m9(fu::vec<fu::str>&&, Child_elyG&, bool, ChildStream_ofm8, ChildStream_ofm8, ChildStream_ofm8);
Errno_88RA wakeUp_forChild_m5Wn(PID_05b1, FD_q1SK, WriteEnd_aNMe, ReadEnd_6NTX, ReadEnd_6NTX, int, unsigned, bool, Loop_UQM7&);
Errno_88RA sig_listen_m5Wn(const BlockedSigmask_g3Eo&, Loop_UQM7&);
Errno_88RA unsubscribeAndClose_m5Wn(FD_q1SK, Loop_UQM7&);
bool remove_Na55(BitSet_mmp7&, int);
Errno_88RA read_discard_iPLv(FD_q1SK, int&);

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

                                #ifndef DEF_Result_z5w0wc15R4d
                                #define DEF_Result_z5w0wc15R4d
struct Result_z5w0
{
    Module_wo7O module;
    fu::str error;
    Result_z5w0(const Result_z5w0&) = delete;
    Result_z5w0(Result_z5w0&&) = default;
    Result_z5w0& operator=(const Result_z5w0&) = delete;
    Result_z5w0& operator=(Result_z5w0&&) = default;
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

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
                                #endif

                                #ifndef DEF_WatchID_fBDr
                                #define DEF_WatchID_fBDr
                                #endif

                                #ifndef DEF_PID_05b1
                                #define DEF_PID_05b1
                                #endif

                                #ifndef DEF_FD_q1SK
                                #define DEF_FD_q1SK
                                #endif

                                #ifndef DEF_SigMask_aymR
                                #define DEF_SigMask_aymR
                                #endif

                                #ifndef DEF_BlockedSigmask_g3EoU17qNk6
                                #define DEF_BlockedSigmask_g3EoU17qNk6
struct BlockedSigmask_g3Eo
{
    SigMask_aymR requested_sigmask;
    SigMask_aymR actually_blocked;
    FD_q1SK signal_fd;
    explicit operator bool() const noexcept
    {
        return false
            || requested_sigmask
            || actually_blocked
            || signal_fd
        ;
    }
};
                                #endif

                                #ifndef DEF_Signo_6FLP
                                #define DEF_Signo_6FLP
                                #endif

                                #ifndef DEF_Pool_X5U1rUuoUC4
                                #define DEF_Pool_X5U1rUuoUC4
struct Pool_X5U1
{
    fu::vec<Meta_igy4> items;
    int first_free;
    int debug;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || first_free
            || debug
        ;
    }
};
                                #endif

                                #ifndef DEF_Meta256_GAqO5maKByg
                                #define DEF_Meta256_GAqO5maKByg
struct Meta256_GAqO
{
    __uint128_t meta_u128;
    uint64_t meta_u64;
    unsigned meta_u32;
    unsigned tail_u32;
    explicit operator bool() const noexcept
    {
        return false
            || meta_u128
            || meta_u64
            || meta_u32
            || tail_u32
        ;
    }
};
                                #endif

                                #ifndef DEF_Meta_igy4Mg7p5Fc
                                #define DEF_Meta_igy4Mg7p5Fc
union Meta_igy4
{
    Meta256_GAqO meta;
    int Pool__next_free;
    explicit operator bool() const noexcept
    {
        return false
            || meta
            || Pool__next_free
        ;
    }
};
                                #endif

                                #ifndef DEF_Loop_UQM7b3lFTL7
                                #define DEF_Loop_UQM7b3lFTL7
struct Loop_UQM7
{
    FD_q1SK loop_fd;
    BitSet_mmp7 must_close;
    BitSet_mmp7 must_sigkill;
    Pool_X5U1 metas;
    Loop_UQM7(const Loop_UQM7&) = delete;
    Loop_UQM7(Loop_UQM7&&) = default;
    Loop_UQM7& operator=(const Loop_UQM7&) = delete;
    Loop_UQM7& operator=(Loop_UQM7&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || loop_fd
            || must_close
            || must_sigkill
            || metas
        ;
    }
};
                                #endif

                                #ifndef DEF_Kind_2p91
                                #define DEF_Kind_2p91
enum Kind_2p91: fu::u8
{
    Kind_2p91_ipv4_server = 1u,
    Kind_2p91_ipv4_server_socket = 2u,
    Kind_2p91_blocked_signals = 3u,
    Kind_2p91_watched_files = 4u,
    Kind_2p91_child_process_pidfd = 5u,
    Kind_2p91_child_process_stdin = 6u,
    Kind_2p91_child_process_stdout = 7u,
    Kind_2p91_child_process_stderr = 8u,
};
                                #endif

                                #ifndef DEF_SocketState_xV3L
                                #define DEF_SocketState_xV3L
inline constexpr SocketState_xV3L SocketState_xV3L_Readable = SocketState_xV3L(1u);
inline constexpr SocketState_xV3L SocketState_xV3L_Writeable = SocketState_xV3L(2u);
inline constexpr SocketState_xV3L SocketState_xV3L_ReadEOF = SocketState_xV3L(4u);
inline constexpr SocketState_xV3L SocketState_xV3L_WriteEOF = SocketState_xV3L(8u);
inline constexpr SocketState_xV3L SocketState_xV3L_WantsReadASAP = SocketState_xV3L(16u);
inline constexpr SocketState_xV3L SocketState_xV3L_WantsWriteASAP = SocketState_xV3L(32u);
inline constexpr SocketState_xV3L SocketState_xV3L_WillReadLater = SocketState_xV3L(64u);
inline constexpr SocketState_xV3L SocketState_xV3L_WillWriteLater = SocketState_xV3L(128u);

inline constexpr SocketState_xV3L MASK_SocketState_xV3L
    = SocketState_xV3L_Readable
    | SocketState_xV3L_Writeable
    | SocketState_xV3L_ReadEOF
    | SocketState_xV3L_WriteEOF
    | SocketState_xV3L_WantsReadASAP
    | SocketState_xV3L_WantsWriteASAP
    | SocketState_xV3L_WillReadLater
    | SocketState_xV3L_WillWriteLater;
                                #endif

                                #ifndef DEF_ChildStream_ofm8
                                #define DEF_ChildStream_ofm8
enum ChildStream_ofm8: fu::u8
{
    ChildStream_ofm8_Ignore = 0u,
    ChildStream_ofm8_Parent = 1u,
    ChildStream_ofm8_Pipe = 2u,
};
                                #endif

                                #ifndef DEF_WriteEnd_aNMe
                                #define DEF_WriteEnd_aNMe
                                #endif

                                #ifndef DEF_ReadEnd_6NTX
                                #define DEF_ReadEnd_6NTX
                                #endif

                                #ifndef DEF_Child_elyGP48BQul
                                #define DEF_Child_elyGP48BQul
struct Child_elyG
{
    PID_05b1 pid;
    WriteEnd_aNMe in_fd;
    ReadEnd_6NTX out_fd;
    ReadEnd_6NTX err_fd;
    explicit operator bool() const noexcept
    {
        return false
            || pid
            || in_fd
            || out_fd
            || err_fd
        ;
    }
};
                                #endif

                                #ifndef DEF_LoopEvent_5icLD2bAcy3
                                #define DEF_LoopEvent_5icLD2bAcy3
struct LoopEvent_5icL
{
    uint64_t user_data;
    Errno_88RA event_ERR;
    int event_id;
    Kind_2p91 kind;
    SocketState_xV3L state;
    unsigned user32;
    explicit operator bool() const noexcept
    {
        return false
            || user_data
            || event_ERR
            || event_id
            || kind
            || state
            || user32
        ;
    }
};
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

                                #ifndef STR_EkJRBy20lga
                                #define STR_EkJRBy20lga
static const fu::str str_EkJRBy20lga fu_INIT_PRIORITY(1013) { "HOTSWAP Could not unlink "_fu };
                                #endif

                                #ifndef STR_hqQgnei6So7
                                #define STR_hqQgnei6So7
static const fu::str str_hqQgnei6So7 fu_INIT_PRIORITY(1013) { ": err("_fu };
                                #endif

                                #ifndef STR_vToKAcI3qHa
                                #define STR_vToKAcI3qHa
static const fu::str str_vToKAcI3qHa fu_INIT_PRIORITY(1013) { ")"_fu };
                                #endif

                                #ifndef STR_JcRs2PBT7Lk
                                #define STR_JcRs2PBT7Lk
static const fu::str str_JcRs2PBT7Lk fu_INIT_PRIORITY(1013) { "  WATCH err("_fu };
                                #endif

                                #ifndef STR_UuyA8pgq5Fa
                                #define STR_UuyA8pgq5Fa
static const fu::str str_UuyA8pgq5Fa fu_INIT_PRIORITY(1013) { ") watch_list:\n\t"_fu };
                                #endif

                                #ifndef STR_XkqlCExlwG0
                                #define STR_XkqlCExlwG0
static const fu::str str_XkqlCExlwG0 fu_INIT_PRIORITY(1013) { "SPWN ER argv("_fu };
                                #endif

                                #ifndef STR_ndOa8RnsyJi
                                #define STR_ndOa8RnsyJi
static const fu::str str_ndOa8RnsyJi fu_INIT_PRIORITY(1013) { ") err("_fu };
                                #endif

                                #ifndef STR_4SkRoqxyYGd
                                #define STR_4SkRoqxyYGd
static const fu::str str_4SkRoqxyYGd fu_INIT_PRIORITY(1013) { "  WATCH Nothing changed."_fu };
                                #endif

                                #ifndef STR_BnjafLNmXm0
                                #define STR_BnjafLNmXm0
static const fu::str str_BnjafLNmXm0 fu_INIT_PRIORITY(1013) { "\x07  WATCH Nothing changed, note error message above."_fu };
                                #endif

                                #ifndef STR_Gp2vjrxiwYh
                                #define STR_Gp2vjrxiwYh
static const fu::str str_Gp2vjrxiwYh fu_INIT_PRIORITY(1013) { "HOTSWAP Signalling pid("_fu };
                                #endif

                                #ifndef STR_OFL5YhAReEe
                                #define STR_OFL5YhAReEe
static const fu::str str_OFL5YhAReEe fu_INIT_PRIORITY(1013) { ") ..."_fu };
                                #endif

                                #ifndef STR_OoBdvQrJLb3
                                #define STR_OoBdvQrJLb3
static const fu::str str_OoBdvQrJLb3 fu_INIT_PRIORITY(1013) { "HOTSWAP Could not signal pid("_fu };
                                #endif
#ifdef __linux__
                    #include <sys/epoll.h>
                #else
                    #include <sys/event.h>
                #endif
#ifdef __linux__
        #include <sys/inotify.h>
        #include <stdio.h>          // perror
    #else
        #include <fcntl.h>          // open + O_EVTONLY
    #endif //
#ifdef __linux__
        #include <sys/syscall.h>    // SYS_pidfd_open
        #include <unistd.h>         // syscall
        #include <stdio.h>          // perror
        #endif //
#ifdef __linux__
                                    #include <linux/wait.h>
                                    #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF___4rCigWMuf1j
                                #define DEF___4rCigWMuf1j
inline static fu::view<char> _4rCi(const TokenIdx_5581& token, const int i, fu::view<TokenIdx_5581> via, fu::str& error, const Context_noPA& ctx)
{
    return (error += FAIL_text_u9Gb(fu::vec<TokenIdx_5581> {{ TokenIdx_5581(token) }}, ((i == (via.size() - 1)) ? "Resulting in an import circle, not currently supported."_view : "Imports:\n"_view), ctx));
}
                                #endif

                                #ifndef DEF_each_SCcBj7JbP84
                                #define DEF_each_SCcBj7JbP84
inline void each_SCcB(fu::vec_range<TokenIdx_5581> a, fu::view<TokenIdx_5581> via, fu::str& error, const Context_noPA& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _4rCi(a[i], i, via, error, ctx);

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

                                #ifndef DEF_if_last_jkvX1jMRQLf
                                #define DEF_if_last_jkvX1jMRQLf
inline const TokenIdx_5581& if_last_jkvX(fu::view<TokenIdx_5581> a)
{
    if (a.size())
        return a[(a.size() - 1)];
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

                                #ifndef DEF___qg4RYJ3PUig
                                #define DEF___qg4RYJ3PUig
inline static void _qg4R(Import_7CIJ& import, fu::view<TokenIdx_5581> via, fu::view<char> dir, Context_noPA& ctx, Module_wo7O& module, const Options_TBgD& options)
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

                                #ifndef DEF_each_6vKMK7FGWVi
                                #define DEF_each_6vKMK7FGWVi
inline void each_6vKM(fu::view_mut<Import_7CIJ> a, fu::view<TokenIdx_5581> via, fu::view<char> dir, Context_noPA& ctx, Module_wo7O& module, const Options_TBgD& options)
{
    for (int i = 0; i < a.size(); i++)
    {
        Import_7CIJ* _0;
        (_0 = &(a.mutref(i)), _qg4R(*_0, via, dir, ctx, module, options));
    };
}
                                #endif

ModidAndOrder_itn0 compile_lexParseDeps_Tsi8(fu::vec_range<char> fname, fu::vec_range<TokenIdx_5581> via, Context_noPA& ctx, const Options_TBgD& options)
{
    const Module_wo7O& module = getModule_1qjp(fname, ctx);
    if (module.in)
    {
        if (module.order)
        {
            return ModidAndOrder_itn0 { module.modid, ModuleOrder_HMNg(module.order) };
        }
        else
        {
            /*MOV*/ fu::str error {};
            each_SCcB(via, via, error, ctx);
            fu::fail(static_cast<fu::str&&>(error));
        };
    }
    else
    {
        Module_wo7O module_1 = clone_bLLK(module);
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
                    each_6vKM(imports, via, dir, ctx, module_1, options);
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

void compile_solveCodegen_Tsi8(Module_wo7O& module, const Options_TBgD& options, const Context_noPA& ctx)
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

                                #ifndef DEF___iIEO8gcRW2b
                                #define DEF___iIEO8gcRW2b
inline static Result_z5w0 _iIEO(const int modid, const Context_noPA& ctx, const Options_TBgD& options)
{

    try
    {
    {
        const Module_wo7O& module = ctx.modules[modid];
        if (module.out)
        {
            return Result_z5w0{};
        }
        else
        {
            /*MOV*/ Module_wo7O module_1 = clone_bLLK(module);
            compile_solveCodegen_Tsi8(module_1, options, ctx);
            return Result_z5w0 { static_cast<Module_wo7O&&>(module_1), fu::str{} };
        };
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str error = fu::to_str(o_0.what());

    {
        return Result_z5w0 { Module_wo7O{}, (error ? static_cast<fu::str&&>(error) : x7E_rA00("COMPILER BUG: Empty error string, modid="_view, fu::i64dec(modid))) };
    }
    }
;
}
                                #endif

                                #ifndef DEF___BTxRQpDu9bi
                                #define DEF___BTxRQpDu9bi
inline static const Result_z5w0& _BTxR(const int i, fu::view<int> arr, fu::view_mut<Result_z5w0> result, const Context_noPA& ctx, const Options_TBgD& options)
{
    return (result.mutref(i) = _iIEO(arr[i], ctx, options));
}
                                #endif

                                #ifndef DEF_parallel_for_GyUxWxA8TOd
                                #define DEF_parallel_for_GyUxWxA8TOd
inline static void parallel_for_GyUx(const int min, int end, fu::view<int> arr, fu::view_mut<Result_z5w0> result, const Context_noPA& ctx, const Options_TBgD& options)
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
        _BTxR(i, arr, result, ctx, options);

    });

}
                                #endif

                                #ifndef DEF_map_v58TfRH0Ad2
                                #define DEF_map_v58TfRH0Ad2
inline fu::vec<Result_z5w0> map_v58T(fu::view<int> arr, const int min, const Context_noPA& ctx, const Options_TBgD& options)
{
    /*MOV*/ fu::vec<Result_z5w0> result {};
    result.grow<false>(arr.size());
    parallel_for_GyUx(min, arr.size(), arr, result, ctx, options);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF___AZaby7dzVD9
                                #define DEF___AZaby7dzVD9
inline static void _AZab(const Result_z5w0& result, fu::str& err, Context_noPA& ctx)
{
    if (result.error)
    {
        if (!(err))
            err = result.error;

    }
    else if (result.module.out)
        setModule_1qjp(result.module, ctx);

}
                                #endif

                                #ifndef DEF_each_yWxeVZMv3g1
                                #define DEF_each_yWxeVZMv3g1
inline void each_yWxe(fu::view<Result_z5w0> a, fu::str& err, Context_noPA& ctx)
{
    for (int i = 0; i < a.size(); i++)
        _AZab(a[i], err, ctx);

}
                                #endif

                                #ifndef DEF___v7rEAP1UJMh
                                #define DEF___v7rEAP1UJMh
inline static void _v7rE(const int modid, Context_noPA& ctx, const Options_TBgD& options)
{
    const Module_wo7O& module = ctx.modules[modid];
    if (!module.out)
    {
        Module_wo7O module_1 = clone_bLLK(module);
        compile_solveCodegen_Tsi8(module_1, options, ctx);
        setModule_1qjp(module_1, ctx);
    };
}
                                #endif

                                #ifndef DEF_each_QSuJVMmFyU2
                                #define DEF_each_QSuJVMmFyU2
inline void each_QSuJ(fu::view<int> a, Context_noPA& ctx, const Options_TBgD& options)
{
    for (int i = 0; i < a.size(); i++)
        _v7rE(a[i], ctx, options);

}
                                #endif

void compile_Tsi8(fu::vec_range<char> fname, Context_noPA& ctx, const Options_TBgD& options)
{
    compile_lexParseDeps_Tsi8(fname, (*(fu::vec<TokenIdx_5581>*)fu::NIL), ctx, options);
    fu::vec<fu::vec<int>> dep_order {};
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const Module_wo7O& module = ctx.modules[i];
        ensure_M6xM(dep_order, module.order.dep_depth) += module.modid;
    };
    ctx.dep_order = join_Kp9J(dep_order);
    for (int i_1 = 0; i_1 < dep_order.size(); i_1++)
    {
        fu::view<int> modids = dep_order[i_1];
        if (options.dev & DevOptions_QEya_DEV_Parallel)
        {
            fu::vec<Result_z5w0> results = map_v58T(modids, 0, ctx, options);
            /*MOV*/ fu::str err {};
            each_yWxe(results, err, ctx);
            if (err)
                fu::fail(static_cast<fu::str&&>(err));

        }
        else
            each_QSuJ(modids, ctx, options);

    };
}

extern const Context_noPA CTX_PRELUDE;
                                #ifndef DEF_map_H2r3WOsTZW1
                                #define DEF_map_H2r3WOsTZW1
inline fu::vec<Module_wo7O> map_H2r3(fu::view<Module_wo7O> a)
{
    /*MOV*/ fu::vec<Module_wo7O> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_bLLK(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_AwWd7v3Ldkb
                                #define DEF_clone_AwWd7v3Ldkb
inline fu::vec<Module_wo7O> clone_AwWd(fu::view<Module_wo7O> a)
{
    return map_H2r3(a);
}
                                #endif

                                #ifndef DEF_clone_VKXBzEroGOk
                                #define DEF_clone_VKXBzEroGOk
inline const NukeOnRebuild_TLE7& clone_VKXB(const NukeOnRebuild_TLE7& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_9qAlc7gdG1d
                                #define DEF_clone_9qAlc7gdG1d
inline Context_noPA clone_9qAl(const Context_noPA& a)
{
    /*MOV*/ Context_noPA res {};

    {
        res.fudir = clone_uMDn(a.fudir);
        res.base_dir = clone_uMDn(a.base_dir);
        res.modules = clone_AwWd(a.modules);
        res.dep_order = clone_vOit(a.dep_order);
        res.nuke = clone_VKXB(a.nuke);
    };
    return /*NRVO*/ res;
}
                                #endif

static BuildOutput_zaam build_Tsi8(fu::view<fu::str> flags_ld, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::vec_range<char> bin, fu::view<char> fname, fu::vec_range<char> dir_wrk, fu::vec_range<char> dir_obj, fu::vec_range<char> dir_src, fu::vec_range<char> dir_cpp, fu::view<fu::str> flags_cc, const Context_noPA& ctx)
{
    return build_uGHE(fu::str(dir_wrk), fu::str{}, bin, fu::str(dir_obj), fu::str(dir_src), fu::str(dir_cpp), fname, DEV_OnFail_3YLB{}, (runmode ? RunMode_n0r3_EnsureExecutableButDontRun : RunMode_n0r3{}), 0, bscheme, flags_cc, flags_ld, ctx);
}

void clear_Tsi8(Module_wo7O& module)
{
    module = Module_wo7O { module.modid, fu::str(module.fname), ModuleInputs_iQIg{}, ModuleOrder_HMNg{}, ModuleOutputs_WMGM{}, ModuleStats_ANTR{}, Profile_4UPJ{} };
}

                                #ifndef DEF___8yd4GPgVVy6
                                #define DEF___8yd4GPgVVy6
inline static void _8yd4(Module_wo7O& module, BitSet_mmp7& invalid)
{
    if (!module.out)
    {
        clear_Tsi8(module);
        add_ZwXY(invalid, module.modid);
    };
}
                                #endif

                                #ifndef DEF_eachButPrelude_RCHBAfxTQsk
                                #define DEF_eachButPrelude_RCHBAfxTQsk
inline static void eachButPrelude_RCHB(Context_noPA& ctx, BitSet_mmp7& invalid)
{
    for (int i = 1; i < ctx.modules.size(); i++)
        _8yd4(ctx.modules.mutref(i), invalid);

}
                                #endif

                                #ifndef DEF_each_1OAiAQ3QlC8
                                #define DEF_each_1OAiAQ3QlC8
inline void each_1OAi(fu::view<Import_7CIJ> a, Module_wo7O& module, BitSet_mmp7& invalid, bool& repeat)
{
    for (int i = 0; i < a.size(); i++)
    {
        const Import_7CIJ& import = a[i];
        if (has_ZwXY(invalid, import.modid))
        {
            fu::str x {};
            fu::println(fu::view<fu::str> {{ (x = ("  WATCH Invalidated: "_view + module.fname), x).const_cast_mut().destructive_move() }});
            clear_Tsi8(module);
            add_ZwXY(invalid, module.modid);
            repeat = true;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF___ErRgw0YdKR9
                                #define DEF___ErRgw0YdKR9
inline static void _ErRg(Module_wo7O& module, BitSet_mmp7& invalid, bool& repeat)
{
    each_1OAi(module.in.parse.imports, module, invalid, repeat);
}
                                #endif

                                #ifndef DEF_eachButPrelude_mY0JmG9j4ih
                                #define DEF_eachButPrelude_mY0JmG9j4ih
inline static void eachButPrelude_mY0J(Context_noPA& ctx, BitSet_mmp7& invalid, bool& repeat)
{
    for (int i = 1; i < ctx.modules.size(); i++)
        _ErRg(ctx.modules.mutref(i), invalid, repeat);

}
                                #endif

void watch_pruneModules_Tsi8(Context_noPA& ctx)
{
    BitSet_mmp7 invalid {};
    eachButPrelude_RCHB(ctx, invalid);
    if (invalid)
    {
        for (; ; )
        {
            bool repeat = false;
            eachButPrelude_mY0J(ctx, invalid, repeat);
            if (!repeat)
                break;

        };
    };
}

                                #ifndef DEF_ends_OW45P9GlDid
                                #define DEF_ends_OW45P9GlDid
inline bool ends_OW45(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

int countSloc_Tsi8(fu::view<Token_6M7a> tokens)
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

int countSpecs_Tsi8(fu::view<Overload_aO3i> overloads)
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

void printSlowBuildDiagnostics_Tsi8(const Context_noPA& ctx)
{
    ModuleStat_sTmh lex {};
    ModuleStat_sTmh parse {};
    ModuleStat_sTmh solve {};
    ModuleStat_sTmh codegen {};
    int sloc {};
    int specs {};
    int types {};
    fu::view<Module_wo7O> m = ctx.modules;
    for (int i = 1; i < m.size(); i++)
    {
        const Module_wo7O& m_1 = m[i];
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

static BuildOutput_zaam HOTSWAP_build_Tsi8(const bool plugin, fu::view<char> fname, fu::vec_range<char> dir_wrk, fu::vec_range<char> bin, fu::vec_range<char> dir_obj, fu::vec_range<char> dir_src, fu::vec_range<char> dir_cpp, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, fu::vec_range<char> HOTSWAP_dirname, fu::vec_range<char> HOTSWAP_plugin, const Context_noPA& ctx)
{
    const Errno_88RA err = unlink_VWJw(fu::str(HOTSWAP_plugin));
    if (err && (err != ENOENT))
    {
        const fu::str* x;
        const fu::str* x_1;
        fu::str x_2 {};
        const fu::str* x_3;
        fu::println(fu::view<fu::str> {{ fu::str((x = &(str_EkJRBy20lga), (*x))), fu::str(HOTSWAP_plugin), fu::str((x_1 = &(str_hqQgnei6So7), (*x_1))), (x_2 = fu::i64dec(err), x_2).const_cast_mut().destructive_move(), fu::str((x_3 = &(str_vToKAcI3qHa), (*x_3))) }});
    };
    fu::view<char> ORIGIN = (fu::APPLE ? "@loader_path"_view : "$ORIGIN"_view);
    fu::vec<fu::str> libs = fu::vec<fu::str> {{ fu::str("-L"_fu), fu::str(HOTSWAP_dirname), fu::str("-lfu"_fu), ("-Wl,-rpath,"_view + ORIGIN) }};
    if (plugin)
        return build_Tsi8((flags_ld + libs), RunMode_n0r3_None, BuildScheme_Vgo7((bscheme | BuildScheme_Vgo7_shared)), HOTSWAP_plugin, fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx);
    else
        return build_Tsi8((flags_ld + libs), runmode, BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7(~BuildScheme_Vgo7_shared))), bin, fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx);

}

static BuildOutput_zaam recompile_Tsi8(const bool plugin, const bool dont_try_catch, fu::vec_range<char> fname, fu::vec_range<char> dir_wrk, fu::vec_range<char> bin, fu::vec_range<char> dir_obj, fu::vec_range<char> dir_src, fu::vec_range<char> dir_cpp, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld, const BuildScheme_Vgo7 HOTSWAP, fu::vec_range<char> HOTSWAP_dirname, fu::vec_range<char> HOTSWAP_plugin, fu::vec<fu::str>& watch_list, bool& last_recompile_ok, double& last_spurious_watch_notif, Context_noPA& ctx, const Options_TBgD& options)
{
    if (BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_watch)) && !dont_try_catch)
    {
        watch_pruneModules_Tsi8(ctx);

        { {

            try
            {
            {
                return recompile_Tsi8(plugin, true, fname, dir_wrk, bin, dir_obj, dir_src, dir_cpp, runmode, bscheme, flags_cc, flags_ld, HOTSWAP, HOTSWAP_dirname, HOTSWAP_plugin, watch_list, last_recompile_ok, last_spurious_watch_notif, ctx, options);
            }
            }
            catch (const std::exception& o_0)
            {
                fu::str e = fu::to_str(o_0.what());

            {
                fu::str x {};
                fu::println(fu::view<fu::str> {{ (x = (((("\n"_view + "\x07"_view) + qBAD_e44U("  ERROR "_view)) + e) + (!ends_OW45(e, "\n"_view) ? "\n"_view : fu::view<char>{})), x).const_cast_mut().destructive_move() }});
                goto BL_2;
            }
            }
;
          } BL_2:;
        };
        return BuildOutput_zaam{};
    }
    else
    {
        last_recompile_ok = false;
        fu_DEFER_IF_OK(last_recompile_ok = true);
        fu_DEFER(last_spurious_watch_notif = hr_0pZh());
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
        /*MOV*/ BuildOutput_zaam ret = (HOTSWAP ? HOTSWAP_build_Tsi8(plugin, fname, dir_wrk, bin, dir_obj, dir_src, dir_cpp, runmode, bscheme, flags_cc, flags_ld, HOTSWAP_dirname, HOTSWAP_plugin, ctx) : build_Tsi8(flags_ld, runmode, bscheme, bin, fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx));
        if (ret.watch_list && BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_watch)))
            watch_list = ret.watch_list;

        return /*NRVO*/ ret;
    };
}

                                #ifndef DEF___R8nzdW7CE79
                                #define DEF___R8nzdW7CE79
inline static void _R8nz(const Module_wo7O& module, fu::vec<fu::str>& watch_list)
{
    if (module.fname)
        watch_list += fu::str(module.fname);

}
                                #endif

                                #ifndef DEF_eachButPrelude_4qTZU6PucFk
                                #define DEF_eachButPrelude_4qTZU6PucFk
inline static void eachButPrelude_4qTZ(const Context_noPA& ctx, fu::vec<fu::str>& watch_list)
{
    for (int i = 1; i < ctx.modules.size(); i++)
        _R8nz(ctx.modules[i], watch_list);

}
                                #endif

                                #ifndef DEF___SEEVt5xYhJi
                                #define DEF___SEEVt5xYhJi
inline static void _SEEV(const int fd, Errno_88RA& err)
{
    const Errno_88RA close_err = close_iPLv(FD_q1SK(fd));
    if (!(err))
        err = close_err;

}
                                #endif

                                #ifndef DEF_each_JhsVxhI4go2
                                #define DEF_each_JhsVxhI4go2
inline void each_JhsV(const BitSet_mmp7& _, Errno_88RA& err)
{
    for (int i = 0; i < _._data.size(); i++)
    {
        const fu::u8 item = _._data[i];
        if (item)
        {
            for (int b = 0; b < 8; b++)
            {
                const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(b))));
                if (item & mask)
                    _SEEV(((i << 3) | int(b)), err);

            };
        };
    };
}
                                #endif

                                #ifndef DEF___gDPMc9NIa4b
                                #define DEF___gDPMc9NIa4b
inline static void _gDPM(const int pid, Errno_88RA& err)
{
    const Errno_88RA kill_err = kill_wYYR(PID_05b1(pid), SIGTERM);
    if (!(err))
        err = kill_err;

}
                                #endif

                                #ifndef DEF_each_XGVgRYpA2p0
                                #define DEF_each_XGVgRYpA2p0
inline void each_XGVg(const BitSet_mmp7& _, Errno_88RA& err)
{
    for (int i = 0; i < _._data.size(); i++)
    {
        const fu::u8 item = _._data[i];
        if (item)
        {
            for (int b = 0; b < 8; b++)
            {
                const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(b))));
                if (item & mask)
                    _gDPM(((i << 3) | int(b)), err);

            };
        };
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

                                #ifndef DEF_eLse_PoeWxvtuaT8
                                #define DEF_eLse_PoeWxvtuaT8
inline static void eLse_PoeW(const Errno_88RA err, fu::view<fu::str> watch_list)
{
    const fu::str* x;
    fu::str x_1 {};
    const fu::str* x_2;
    fu::str x_3 {};
    fu::println(fu::view<fu::str> {{ fu::str((x = &(str_JcRs2PBT7Lk), (*x))), (x_1 = fu::i64dec(err), x_1).const_cast_mut().destructive_move(), fu::str((x_2 = &(str_UuyA8pgq5Fa), (*x_2))), (x_3 = join_yqDb(watch_list, ",\n\t"_view), x_3).const_cast_mut().destructive_move() }});
}
                                #endif

                                #ifndef DEF_alloc_5AtZcdhBJf2
                                #define DEF_alloc_5AtZcdhBJf2
inline int alloc_5AtZ(Pool_X5U1& pool)
{
    const int first = pool.first_free;
    fu_ASSERT((first >= 0));
    int i = (first - 1);
    if ((i >= 0))
    {
        Meta_igy4& item = pool.items.mutref(i);
        int& next = item.Pool__next_free;
        fu_ASSERT((next >= 0));
        pool.first_free = next;
        next = 0;
    }
    else
    {
        i = pool.items.size();
        pool.items.grow((i + 1));
    };
    if (fu::DEBUG && (i < 32))
    {
        fu_ASSERT(!(pool.debug & (1 << i)));
        pool.debug |= (1 << i);
    };
    return i + 1;
}
                                #endif

                                #ifndef DEF_ends_L30JVW8oAb6
                                #define DEF_ends_L30JVW8oAb6
inline bool ends_L30J(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_watch_files_AEEEXILS0fh
                                #define DEF_watch_files_AEEEXILS0fh
inline WatchID_fBDr watch_files_AEEE(fu::vec<fu::str>&& files, Loop_UQM7& event_loop, fu::view<fu::str> watch_list)
{
    WatchID_fBDr watch_id = -1;
    Errno_88RA err {};
    if (fu::LINUX)
    {
        #ifdef __linux__
        watch_id = inotify_init1(IN_NONBLOCK | IN_CLOEXEC);
        if (watch_id == -1)
            err= errno;
        #endif //;
        if (watch_id < 0)
        {
            eLse_PoeW(err, watch_list);
            return 0;
        };
    }
    else
        watch_id = WatchID_fBDr(alloc_5AtZ(event_loop.metas));

    Kind_2p91 kind;
    FD_q1SK fd;
    SocketState_xV3L state;
    unsigned user32;
    const uint64_t user_data = (kind = Kind_2p91_watched_files, fd = FD_q1SK(int(watch_id)), state = {}, user32 = 0u, fu_ASSERT(((fd >= 0) ? (fd <= 0xffffff) : false)), (((uint64_t(kind) | (uint64_t(FD_q1SK(fd)) << 8ull)) | ((uint64_t(state) & STATE_MASK) << STATE_OFFSET)) | (uint64_t(user32) << 32ull)));
    for (int i = 0; i < files.size(); i++)
    {
        fu::vec_range_mut<char> file = files.mutref(i);
        if (!ends_L30J(file, '\x00'))
            file += '\x00';

        if (fu::LINUX)
        {
            #ifdef __linux__
                if (inotify_add_watch(watch_id, file.data(),
                    // Watched file modified (or file within watched directory modified?) -
                    IN_MODIFY
                        // Watched file/directory itself deleted/moved -
                        | IN_DELETE_SELF | IN_MOVE_SELF
                        // File/directory created/deleted/moved in/from watched directory -
                        | IN_CREATE | IN_DELETE | IN_MOVED_FROM | IN_MOVED_TO
                        // ... to match kqueue behavior below, ignore attribute changes for now (TODO option?)
                        // | IN_ATTRIB
                ) < 0) {
                    err = errno;
                }
            #endif //;
        }
        else
        {
            FD_q1SK event_fd {};
            #ifndef __linux__
                event_fd = open(file.data(), O_EVTONLY);

                // TODO handle errors -
                //  not doing it properly now because it's non-trivial -
                //   we have to close all fds we have already opened to roll this back in isolation,
                //    which will require using the metas somehow or something
                //     to chain these into a bitset or some such.
                //
                if (event_fd <= 0) {
                    err = errno;
                }
                else {
                    // TODO see comment re: kevents_buffer above
                    //  Currently going for the simplest thing,
                    //   an individual call for each file, real stupid.
                    //
                    struct kevent kevent_data;

                    EV_SET(&kevent_data, event_fd,
                        EVFILT_VNODE, EV_ADD | EV_CLEAR,
                        NOTE_DELETE | NOTE_WRITE | NOTE_EXTEND
                                    | NOTE_LINK | NOTE_RENAME | NOTE_REVOKE

                        // TODO FIX silencing NOTE_ATTRIB -
                        //  it's spammy on OSX, often arrives a second after a NOTE_WRITE.
                        //   Currently simply suppressing, TODO filter properly.
                        //
                        // | NOTE_ATTRIB

                        , 0, (void*) user_data);

                    kevent(event_loop.loop_fd, &kevent_data, 1, nullptr, 0, nullptr);
                }
            #endif //;
            if (event_fd > 0)
                add_ZwXY(event_loop.must_close, int(event_fd));

        };
    };
    if (fu::LINUX)
    {
        if (!err)
        {
            #ifdef __linux__
                struct epoll_event ev {};
                ev.data.u64 = user_data;
                ev.events = EPOLLIN;
                if (epoll_ctl(event_loop.loop_fd, EPOLL_CTL_ADD, watch_id, &ev))
                    err = errno;
            #endif //;
        };
        if (err)
        {
            close_iPLv(FD_q1SK(int(watch_id)));
            return 0;
        }
        else
            add_ZwXY(event_loop.must_close, int(watch_id));

    };
    return watch_id;
}
                                #endif

static bool watch_needsRebuild_Tsi8(Context_noPA& ctx)
{
    NukeOnRebuild_TLE7 old {};
    std::swap(ctx.nuke, old);
    bool some = false;
    for (int i = 1; i < ctx.modules.size(); i++)
    {
        const Module_wo7O& module = ctx.modules[i];
        const int i_1 = i;
        if (updateFile_1qjp(module.fname, old, ctx))
        {
            Module_wo7O& module_1 = ctx.modules.mutref(i_1);
            fu::str x {};
            fu::println(fu::view<fu::str> {{ (x = ("  WATCH Changed: "_view + module_1.fname), x).const_cast_mut().destructive_move() }});
            clear_Tsi8(module_1);
            some = true;
        };
        if (1 > 2)
            return some;

    };
    return some;
}

                                #ifndef DEF_eLse_akXK0cjtAO8
                                #define DEF_eLse_akXK0cjtAO8
inline static void eLse_akXK(const Errno_88RA err, fu::view<fu::str> argv)
{
    const fu::str* x;
    fu::str x_1 {};
    const fu::str* x_2;
    fu::str x_3 {};
    const fu::str* x_4;
    fu::println(fu::view<fu::str> {{ fu::str((x = &(str_XkqlCExlwG0), (*x))), (x_1 = join_yqDb(argv, " "_view), x_1).const_cast_mut().destructive_move(), fu::str((x_2 = &(str_ndOa8RnsyJi), (*x_2))), (x_3 = fu::i64dec(err), x_3).const_cast_mut().destructive_move(), fu::str((x_4 = &(str_vToKAcI3qHa), (*x_4))) }});
}
                                #endif

                                #ifndef DEF_x5Bx5D_Ai5N5Bs9VK0
                                #define DEF_x5Bx5D_Ai5N5Bs9VK0
inline Meta_igy4& x5Bx5D_Ai5N(Pool_X5U1& pool, const int i)
{
    fu_ASSERT((i > 0));
    const int i_1 = (i - 1);
    if (fu::DEBUG && (i_1 < 32))
        fu_ASSERT(!!(pool.debug & (1 << i_1)));

    return pool.items.mutref(i_1);
}
                                #endif

                                #ifndef DEF_spawn_BSxmiwQ1Emk
                                #define DEF_spawn_BSxmiwQ1Emk
inline PID_05b1 spawn_BSxm(/*MOV*/ fu::vec<fu::str>&& argv, const ChildStream_ofm8 stdout, const ChildStream_ofm8 stderr, const ChildStream_ofm8 stdin, Loop_UQM7& event_loop, fu::view<fu::str> argv_1)
{
    Child_elyG child {};
    const Errno_88RA err = spawn_x5m9(argv.destructive_move(), child, false, stdout, stderr, stdin);
    if (err)
    {
        eLse_akXK(err, argv_1);
        return 0;
    }
    else
    {
        fu_ASSERT(((child.pid > 0) ? (child.pid <= 0xffffff) : false));
        FD_q1SK pid_fd {};
        #ifdef __linux
        pid_fd = (int) syscall(SYS_pidfd_open, child.pid, 0 /*PIDFD_NONBLOCK*/);
        if (pid_fd < 0) {
            perror("Loop::spawn::SYS_pidfd_open");
            pid_fd = 0;
        }
        #endif //;
        const int event_id = alloc_5AtZ(event_loop.metas);
        Meta256_GAqO& meta = x5Bx5D_Ai5N(event_loop.metas, event_id).meta;
        meta.tail_u32 = unsigned(PID_05b1(child.pid));
        meta.meta_u128 = (((__uint128_t(FD_q1SK(pid_fd)) | (__uint128_t(WriteEnd_aNMe(child.in_fd)) << __uint128_t(unsigned(32)))) | (__uint128_t(ReadEnd_6NTX(child.out_fd)) << __uint128_t(unsigned(64)))) | (__uint128_t(ReadEnd_6NTX(child.err_fd)) << __uint128_t(unsigned(96))));
        wakeUp_forChild_m5Wn(child.pid, pid_fd, child.in_fd, child.out_fd, child.err_fd, event_id, 7u, true, event_loop);
        if (child.pid)
            add_ZwXY(event_loop.must_sigkill, int(child.pid));

        if (pid_fd)
            add_ZwXY(event_loop.must_close, int(pid_fd));

        if (child.in_fd)
            add_ZwXY(event_loop.must_close, int(child.in_fd));

        if (child.out_fd)
            add_ZwXY(event_loop.must_close, int(child.out_fd));

        if (child.err_fd)
            add_ZwXY(event_loop.must_close, int(child.err_fd));

        return child.pid;
    };
}
                                #endif

static PID_05b1 spawn_Tsi8(fu::vec_range<fu::str> argv, Loop_UQM7& Loop_with_child_handlers)
{
    const PID_05b1 pid = spawn_BSxm(fu::vec<fu::str>(argv), ChildStream_ofm8_Parent, ChildStream_ofm8_Parent, ChildStream_ofm8{}, Loop_with_child_handlers, argv);
    return pid;
}

                                #ifndef DEF_x5Bx5D_Tb5OQ8j8ON2
                                #define DEF_x5Bx5D_Tb5OQ8j8ON2
inline const Meta_igy4& x5Bx5D_Tb5O(const Pool_X5U1& pool, const int i)
{
    fu_ASSERT((i > 0));
    const int i_1 = (i - 1);
    if (fu::DEBUG && (i_1 < 32))
        fu_ASSERT(!!(pool.debug & (1 << i_1)));

    return pool.items[i_1];
}
                                #endif

                                #ifndef DEF_free_YePmL9TaER5
                                #define DEF_free_YePmL9TaER5
inline void free_YePm(Pool_X5U1& pool, int& slot)
{
    fu_ASSERT((slot > 0));
    const int i = (slot - 1);
    slot = 0;
    Meta_igy4& item = pool.items.mutref(i);
    Meta_igy4 tombstone {};
    tombstone.Pool__next_free = pool.first_free;
    std::swap(item, tombstone);
    pool.first_free = int((i + 1));
    if (fu::DEBUG && (i < 32))
    {
        fu_ASSERT(!!(pool.debug & (1 << i)));
        pool.debug &= ~(1 << i);
    };
}
                                #endif

BuildOutput_zaam compile_and_build_Tsi8(fu::vec_range<char> fname, fu::vec_range<char> dir_wrk, fu::vec_range<char> bin, fu::vec_range<char> dir_obj, fu::vec_range<char> dir_src, fu::vec_range<char> dir_cpp, const RunMode_n0r3 runmode, const BuildScheme_Vgo7 bscheme, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld)
{
    Context_noPA ctx = clone_9qAl(CTX_PRELUDE);
    const Options_TBgD options = Options_TBgD { Lint_Q9R1{}, SolverNotes_LSla{}, CGDefects_2L18{}, DevOptions_QEya_DEV_Parallel, {/*unused non-zst*/} };
    const BuildScheme_Vgo7 HOTSWAP = BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_hotswap));
    fu::str HOTSWAP_dirname = (HOTSWAP ? (bin ? fu::str(dirname_qZI0(bin)) : (dir_wrk + "bin/"_view)) : fu::str{});
    fu::str HOTSWAP_plugin = (HOTSWAP ? (HOTSWAP_dirname + "hotswap"_view) : fu::str{});
    if (HOTSWAP)
    {
        build_Tsi8((flags_ld + fu::view<fu::str> {{ fu::str("-ldl"_fu) }}), RunMode_n0r3_None, BuildScheme_Vgo7((BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7(~BuildScheme_Vgo7_hotswap))) | BuildScheme_Vgo7_shared)), (HOTSWAP_dirname + "libfu.so"_view), fname, dir_wrk, dir_obj, dir_src, dir_cpp, flags_cc, ctx);
    };
    fu::vec<fu::str> watch_list {};
    for (; ; )
    { {
        bool last_recompile_ok {};
        double last_spurious_watch_notif {};
        /*MOV*/ BuildOutput_zaam ret = recompile_Tsi8(false, false, fname, dir_wrk, bin, dir_obj, dir_src, dir_cpp, runmode, bscheme, flags_cc, flags_ld, HOTSWAP, HOTSWAP_dirname, HOTSWAP_plugin, watch_list, last_recompile_ok, last_spurious_watch_notif, ctx, options);
        if (BuildScheme_Vgo7((bscheme & BuildScheme_Vgo7_watch)) && !watch_list)
            eachButPrelude_4qTZ(ctx, watch_list);

        if (watch_list || runmode)
        { {
            WatchID_fBDr fswatch_wid {};
            PID_05b1 run_pid {};
            fu::vec_range<char> x6031BxFFxFFxFFxFFF = fname;
            fu::vec_range<char> x6031BxFExFFxFFxFFF = dir_wrk;
            fu::vec_range<char> x6031BxFDxFFxFFxFFF = bin;
            fu::vec_range<char> x6031BxFCxFFxFFxFFF = dir_obj;
            fu::vec_range<char> x6031BxFBxFFxFFxFFF = dir_src;
            fu::vec_range<char> x6031BxFAxFFxFFxFFF = dir_cpp;
            const RunMode_n0r3 x6031BxF9xFFxFFxFFF = runmode;
            const BuildScheme_Vgo7 x6031BxF8xFFxFFxFFF = bscheme;
            fu::view<fu::str> x6031BxF7xFFxFFxFFF = flags_cc;
            fu::view<fu::str> x6031BxF6xFFxFFxFFF = flags_ld;
            const BuildScheme_Vgo7 x6031B3 = HOTSWAP;
            fu::vec_range<char> x6031B4 = HOTSWAP_dirname;
            fu::vec_range<char> x6031B5 = HOTSWAP_plugin;
            fu::vec<fu::str>& x6031B6 = watch_list;
            bool& x6031B7 = last_recompile_ok;
            double& x6031B8 = last_spurious_watch_notif;
            const BuildOutput_zaam& x6031B9 = ret;
            WatchID_fBDr& x6031BA = fswatch_wid;
            PID_05b1& x6031BB = run_pid;
            Context_noPA& ctx_1 = ctx;
            const Options_TBgD& options_1 = options;

            {
            };
            FD_q1SK loop_fd {};
            Errno_88RA err {};
            #ifdef __linux__
                loop_fd = epoll_create1(EPOLL_CLOEXEC);
            #else
                loop_fd = kqueue();
            #endif
                if (loop_fd < 0)
                    err = errno;

            if (!(loop_fd < 0))
            {
                const BlockedSigmask_g3Eo blocked_sigmask = block_wYYR(fu::view<Signo_6FLP> {{ SIGHUP, SIGINT, SIGTERM }}, err);
                Loop_UQM7 event_loop = Loop_UQM7 { loop_fd, BitSet_mmp7{}, BitSet_mmp7{}, Pool_X5U1{} };
                add_ZwXY(event_loop.must_close, int(loop_fd));
                fu_DEFER(
                {
                    each_JhsV(event_loop.must_close, err);
                    each_XGVg(event_loop.must_sigkill, err);
                    unblock_wYYR(blocked_sigmask);
                });

                {
                    fu_ASSERT((!x6031BA ? !x6031BB : false));
                    if (x6031B6)
                    {
                        x6031BA = watch_files_AEEE(fu::vec<fu::str>(x6031B6), event_loop, x6031B6);
                        if (watch_needsRebuild_Tsi8(ctx_1))
                            continue;

                    };
                    if (x6031BxF9xFFxFFxFFF && x6031B9.executable)
                    {
                        x6031BB = spawn_Tsi8(fu::vec<fu::str> {{ fu::str(x6031B9.executable) }}, event_loop);
                    };
                    if (!x6031BB && !x6031BA)
                        goto BL_5;

                };
                sig_listen_m5Wn(blocked_sigmask, event_loop);
                for (; ; )
                {
                    int num_new_events {};
                    #ifdef __linux__
                        struct epoll_event events[64];

                        RETRY:
                        num_new_events = epoll_wait(event_loop.loop_fd,
                            events, sizeof(events) / sizeof(struct epoll_event), // buffer & capa
                            -1);                                            // timeout
                    #else
                        struct kevent events[64];

                        RETRY:
                        num_new_events = kevent(event_loop.loop_fd,
                            nullptr, 0,                                     // change events
                            events, sizeof(events) / sizeof(struct kevent), // buffer & capa
                            nullptr);                                       // timeout
                    #endif

                        if (num_new_events < 0)
                        {
                            err = errno;

                            // [EINTR] A signal was delivered before the timeout expired
                            //          and before any events were placed on the kqueue for return.
                            //
                            // [EINTR] A cancellation request was delivered to the thread,
                            //          but not yet handled.
                            //
                            // Ignoring because it's triggered when adding breakpoints,
                            //  not sure how to handle/support these correctly.
                            //
                            if (err == EINTR)
                                goto RETRY;

                            break;
                        };
                    for (int i = 0; i < num_new_events; i++)
                    {
                        LoopEvent_5icL _ {};
                        {
                            auto& ev    = events[i];

                        #ifdef __linux__
                            _.user_data = ev.data.u64;
                            _.state     = (ev.events &  EPOLLIN                 ? SocketState_xV3L_Readable  : 0)
                                        | (ev.events &  EPOLLOUT                ? SocketState_xV3L_Writeable : 0)
                                        | (ev.events & (EPOLLHUP | EPOLLRDHUP)  ? SocketState_xV3L_ReadEOF   : 0)
                                        | (ev.events &  EPOLLHUP                ? SocketState_xV3L_WriteEOF  : 0);
                            _.event_ERR = ev.events & EPOLLERR ? EPIPE : 0;
                        #else
                            _.user_data = (uintptr_t) ev.udata;
                            _.state     = (ev.filter == EVFILT_READ
                                                           ? (          ev.data ? SocketState_xV3L_Readable  : 0)
                                                           | (ev.flags & EV_EOF ? SocketState_xV3L_ReadEOF   : 0)
                                                           : 0)
                                        | (ev.filter == EVFILT_WRITE
                                                           ? (          ev.data ? SocketState_xV3L_Writeable : 0)
                                                           | (ev.flags & EV_EOF ? SocketState_xV3L_WriteEOF  : 0)
                                                           : 0);
                            _.event_ERR = (int) ev.fflags;
                        #endif
                        };

                        {
                            const uint64_t ksfd = _.user_data;
                            Kind_2p91& kind = _.kind;
                            int& fd = _.event_id;
                            SocketState_xV3L& state = _.state;
                            unsigned& user32 = _.user32;
                            kind = Kind_2p91(fu::u8((ksfd & 0xfull)));
                            state |= SocketState_xV3L((fu::u8(((ksfd >> STATE_OFFSET) & STATE_MASK))) & MASK_SocketState_xV3L);
                            user32 = unsigned((ksfd >> 32ull));
                            fd = int(unsigned(((ksfd >> 8ull) & 0xffffffull)));
                        };
                        if ((_.kind >= Kind_2p91_child_process_pidfd) && (_.kind <= Kind_2p91_child_process_stderr))
                        {
                            Meta_igy4 meta = x5Bx5D_Tb5O(event_loop.metas, _.event_id);

                            {

                                {
                                    const int which = 0;
                                    fu_ASSERT(((which >= 0) ? (which <= 2) : false));
                                };

                                {
                                    const int which = 1;
                                    fu_ASSERT(((which >= 0) ? (which <= 2) : false));
                                };
                                const int which = 2;
                                fu_ASSERT(((which >= 0) ? (which <= 2) : false));
                            };
                            const unsigned wants_streams {};
                            const int which = (int(_.kind) - int(Kind_2p91_child_process_stdin));
                            if ((which >= 0))
                            {
                                if (_.state & SocketState_xV3L((SocketState_xV3L_Readable | SocketState_xV3L_Writeable)))
                                {
                                    fu_ASSERT(((which >= 0) ? (which <= 2) : false));
                                    fu_ASSERT(((which >= 0) ? (which <= 2) : false));
                                    meta.meta.meta_u128 |= (__uint128_t(unsigned(1)) << __uint128_t(unsigned((((1 + which) * 32) + 31))));
                                };
                                if (_.state & SocketState_xV3L((SocketState_xV3L_ReadEOF | SocketState_xV3L_WriteEOF)))
                                {
                                    fu_ASSERT(((which >= 0) ? (which <= 2) : false));
                                    const FD_q1SK fd = (fu_ASSERT(((which >= 0) ? (which <= 2) : false)), FD_q1SK(int(unsigned(((meta.meta.meta_u128 >> __uint128_t(unsigned(((1 + which) * 32)))) & __uint128_t(0x7fffffffu))))));
                                    meta.meta.meta_u128 &= ~(__uint128_t(0xffffffffu) << __uint128_t(unsigned(((1 + which) * 32))));
                                    if (fd)
                                        unsubscribeAndClose_m5Wn(fd, event_loop);

                                };
                            };
                            if ((which < 0) || _.event_ERR)
                            {
                                for (int i_1 = 0; i_1 < 3; i_1++)
                                {
                                    const int which_1 = i_1;
                                    const FD_q1SK fd = (fu_ASSERT(((which_1 >= 0) ? (which_1 <= 2) : false)), FD_q1SK(int(unsigned(((meta.meta.meta_u128 >> __uint128_t(unsigned(((1 + which_1) * 32)))) & __uint128_t(0x7fffffffu))))));
                                    meta.meta.meta_u128 &= ~(__uint128_t(0xffffffffu) << __uint128_t(unsigned(((1 + which_1) * 32))));
                                    if (fd)
                                        unsubscribeAndClose_m5Wn(fd, event_loop);

                                };
                                if (which < 0)
                                {
                                    int waitres {};
                                    FD_q1SK pid_fd {};
                                    int code = -1;
                                    Signo_6FLP signo {};
                                    siginfo_t siginfo;

                                    #ifdef __linux__
                                    pid_fd = FD_q1SK(int(unsigned((meta.meta.meta_u128 & __uint128_t(0x7fffffffu)))));
                                    #else
                                    assert(!FD_q1SK(int(unsigned((meta.meta.meta_u128 & __uint128_t(0x7fffffffu))))));
                                    #endif

                                    Retry:
                                    waitres = waitid(

                                        #ifdef __linux__
                                        pid_fd ? (idtype_t) P_PIDFD :
                                        #endif
                                                 (idtype_t) P_PID,

                                        #ifdef __linux__
                                        pid_fd ? (id_t) pid_fd :
                                        #endif
                                                 (id_t) PID_05b1(int(meta.meta.tail_u32)),

                                            &siginfo, WNOHANG | WEXITED);

                                    if (waitres < 0) {
                                        auto err = errno;
                                        if (err == EINTR)
                                            goto Retry;

                                        _.event_ERR = err;
                                    }
                                    else {
                                        code  = siginfo.si_code == CLD_EXITED ? siginfo.si_status : 1;
                                        signo = siginfo.si_code == CLD_EXITED ? 0 : siginfo.si_status;
                                    };
                                    if (pid_fd)
                                        unsubscribeAndClose_m5Wn(pid_fd, event_loop);

                                    const bool listed = remove_Na55(event_loop.must_sigkill, int(PID_05b1(int(meta.meta.tail_u32))));
                                    fu_ASSERT(listed);
                                    free_YePm(event_loop.metas, _.event_id);
                                    const PID_05b1 pid = PID_05b1(int(meta.meta.tail_u32));
                                    fu_ASSERT((pid == x6031BB));
                                    if (pid == x6031BB)
                                        x6031BB = 0;

                                    if (!x6031BB && !x6031BA)
                                        goto BL_5;

                                }
                                else
                                    kill_wYYR(PID_05b1(int(meta.meta.tail_u32)), SIGKILL);

                            }
                            else
                            {
                                for (int i_1 = 0; i_1 < 3; i_1++)
                                {
                                    if (wants_streams & (1u << unsigned(i_1)))
                                    {
                                        const int which_1 = i_1;
                                        fu_ASSERT(((which_1 >= 0) ? (which_1 <= 2) : false));
                                        meta.meta.meta_u128 &= ~(__uint128_t(unsigned(1)) << __uint128_t(unsigned((((1 + which_1) * 32) + 31))));
                                    };
                                };
                                x5Bx5D_Ai5N(event_loop.metas, _.event_id).meta.meta_u128 = meta.meta.meta_u128;
                                int which_1;
                                int which_2;
                                int which_3;
                                wakeUp_forChild_m5Wn(PID_05b1(int(meta.meta.tail_u32)), FD_q1SK(int(unsigned((meta.meta.meta_u128 & __uint128_t(0x7fffffffu))))), WriteEnd_aNMe((which_1 = 0, fu_ASSERT(((which_1 >= 0) ? (which_1 <= 2) : false)), FD_q1SK(int(unsigned(((meta.meta.meta_u128 >> __uint128_t(unsigned(((1 + which_1) * 32)))) & __uint128_t(0x7fffffffu))))))), ReadEnd_6NTX((which_2 = 1, fu_ASSERT(((which_2 >= 0) ? (which_2 <= 2) : false)), FD_q1SK(int(unsigned(((meta.meta.meta_u128 >> __uint128_t(unsigned(((1 + which_2) * 32)))) & __uint128_t(0x7fffffffu))))))), ReadEnd_6NTX((which_3 = 2, fu_ASSERT(((which_3 >= 0) ? (which_3 <= 2) : false)), FD_q1SK(int(unsigned(((meta.meta.meta_u128 >> __uint128_t(unsigned(((1 + which_3) * 32)))) & __uint128_t(0x7fffffffu))))))), _.event_id, wants_streams, false, event_loop);
                            };
                        }
                        else if (_.kind == Kind_2p91_watched_files)
                        {
                            const WatchID_fBDr watch_id = WatchID_fBDr(int(_.event_id));
                            if (fu::LINUX)
                            {
                                int bytes_discarded = 0;
                                read_discard_iPLv(FD_q1SK(int(watch_id)), bytes_discarded);
                            };
                            fu_ASSERT((watch_id == x6031BA));
                            if (!watch_needsRebuild_Tsi8(ctx_1) && (x6031BB || !x6031B7))
                            {
                                const double now = hr_0pZh();
                                if (std::fabs((x6031B8 - now)) > 1.0)
                                {
                                    x6031B8 = now;
                                    const fu::str* x;
                                    fu::println(fu::view<fu::str> {{ fu::str((x = &((x6031B7 ? str_4SkRoqxyYGd : str_BnjafLNmXm0)), (*x))) }});
                                };
                            }
                            else
                            {
                                if (x6031B3 && x6031BB)
                                {
                                    BuildOutput_zaam ok = recompile_Tsi8(true, false, x6031BxFFxFFxFFxFFF, x6031BxFExFFxFFxFFF, x6031BxFDxFFxFFxFFF, x6031BxFCxFFxFFxFFF, x6031BxFBxFFxFFxFFF, x6031BxFAxFFxFFxFFF, x6031BxF9xFFxFFxFFF, x6031BxF8xFFxFFxFFF, x6031BxF7xFFxFFxFFF, x6031BxF6xFFxFFxFFF, x6031B3, x6031B4, x6031B5, x6031B6, x6031B7, x6031B8, ctx_1, options_1);
                                    if (ok)
                                    {
                                        const fu::str* x;
                                        fu::str x_1 {};
                                        const fu::str* x_2;
                                        fu::println(fu::view<fu::str> {{ fu::str((x = &(str_Gp2vjrxiwYh), (*x))), (x_1 = fu::i64dec(x6031BB), x_1).const_cast_mut().destructive_move(), fu::str((x_2 = &(str_OFL5YhAReEe), (*x_2))) }});
                                        const Errno_88RA err_1 = kill_wYYR(x6031BB, SIGUSR1);
                                        if (err_1)
                                        {
                                            const fu::str* x_3;
                                            fu::str x_4 {};
                                            const fu::str* x_5;
                                            fu::str x_6 {};
                                            const fu::str* x_7;
                                            fu::println(fu::view<fu::str> {{ fu::str((x_3 = &(str_OoBdvQrJLb3), (*x_3))), (x_4 = fu::i64dec(x6031BB), x_4).const_cast_mut().destructive_move(), fu::str((x_5 = &(str_ndOa8RnsyJi), (*x_5))), (x_6 = fu::i64dec(err_1), x_6).const_cast_mut().destructive_move(), fu::str((x_7 = &(str_vToKAcI3qHa), (*x_7))) }});
                                        }
                                        else
                                            continue;

                                    }
                                    else
                                        continue;

                                };
                                goto BL_3;
                            };
                        }
                        else if (_.kind == Kind_2p91_blocked_signals)
                            goto LL_14;

                    };
                } LL_14:;

            };
          } BL_5:;
        };
        return /*NRVO*/ ret;
      } BL_3:;
    };
}

#endif
