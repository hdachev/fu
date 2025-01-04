#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec_range.h>
#include <fu/static_ref.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct Lifetime_llCF;
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
struct SubRegion_jsU3;

                                #ifndef DEF_Lifetime_AAR_hasFalsePositives
                                #define DEF_Lifetime_AAR_hasFalsePositives
inline constexpr bool Lifetime_AAR_hasFalsePositives = true;
                                #endif
[[noreturn]] fu::never BUG_u9Gb(fu::view<char>, const Context_noPA&, const TokenIdx_5581&);
unsigned getRegionUsage_CaGD(int, int);

                                #ifndef DEF_Quals_bitsize
                                #define DEF_Quals_bitsize
inline constexpr int Quals_bitsize = 32;
                                #endif

                                #ifndef DEF_q_TAGS_bitsize
                                #define DEF_q_TAGS_bitsize
inline constexpr int q_TAGS_bitsize = 3;
                                #endif

                                #ifndef DEF_q_USAGE_bitsize
                                #define DEF_q_USAGE_bitsize
inline constexpr int q_USAGE_bitsize = (Quals_bitsize - q_TAGS_bitsize);
                                #endif
unsigned USAGE_structUsageFromFieldUsage_CaGD(unsigned, int);
void Paths_inter_7Yz9(fu::vec_range_mut<char>, fu::view<char>, fu::view<char>, const Context_noPA&, const TokenIdx_5581&);

                                #ifndef DEF_q_USAGE_offset
                                #define DEF_q_USAGE_offset
inline constexpr int q_USAGE_offset = q_TAGS_bitsize;
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

                                #ifndef DEF_SubRegion_jsU3ktb89d5
                                #define DEF_SubRegion_jsU3ktb89d5
struct SubRegion_jsU3
{
    int flatCount;
    int flatOffset;
    explicit operator bool() const noexcept
    {
        return false
            || flatCount
            || flatOffset
        ;
    }
};
                                #endif

                                #ifndef STR_vbFiCEx2aD6
                                #define STR_vbFiCEx2aD6
static const fu::str str_vbFiCEx2aD6 fu_INIT_PRIORITY(1007) { "\x00\x00"_fu };
                                #endif

#ifndef fu_NO_fdefs

extern const fu::static_ref<fu::str> SR_empty fu_INIT_PRIORITY(1007) = str_vbFiCEx2aD6;
extern const char byte_STATIC = char(0b0001u);
extern const char byte_ZEROES = char(0b0101u);
extern const char byte_TEMP = char(0b1001u);
extern const fu::str Region_STATIC fu_INIT_PRIORITY(1007) = (byte_STATIC + SR_empty.ref);
extern const fu::str Region_ZEROES fu_INIT_PRIORITY(1007) = (byte_ZEROES + SR_empty.ref);
extern const fu::str Region_TEMP fu_INIT_PRIORITY(1007) = (byte_TEMP + SR_empty.ref);
extern const Lifetime_llCF Lifetime_static_moveable fu_INIT_PRIORITY(1007) = Lifetime_llCF { fu::str(Region_ZEROES) };
extern const Lifetime_llCF Lifetime_static_immoveable fu_INIT_PRIORITY(1007) = Lifetime_llCF { fu::str(Region_STATIC) };
extern const Lifetime_llCF Lifetime_temporary fu_INIT_PRIORITY(1007) = Lifetime_llCF { fu::str(Region_TEMP) };
extern const fu::static_ref<Lifetime_llCF> Lifetime_worst fu_INIT_PRIORITY(1007) = Lifetime_temporary;
                                #ifndef DEF_onPathStart_gCFqvDGvz37
                                #define DEF_onPathStart_gCFqvDGvz37
inline static void onPathStart_gCFq(int& pathDepth, int& numPaths, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    pathDepth = 0;
    numPaths++;
    if (numPaths > 64)
        BUG_u9Gb("assertPathsValid: numPaths > 64, we're likely stuck in an infinite loop."_view, ctx, _here);

}
                                #endif

unsigned parse7bit_7Yz9(fu::view<char> str, int& offset)
{
    unsigned shift {};
    unsigned result {};
    char c {};
    while ((offset < str.size()) && (unsigned(fu::u8((c = str[offset++]))) >= 128u))
    {
        result |= ((unsigned(fu::u8(c)) & 0x7fu) << shift);
        shift += 7u;
    };
    return result | (unsigned(fu::u8(c)) << shift);
}

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_onSubRegion_TObmzwEkj2c
                                #define DEF_onSubRegion_TObmzwEkj2c
inline static void onSubRegion_TObm(const int flatOffset, const int flatCount, const bool isLastSubRegion, const bool isFirstSubRegion, int& expect_flatCount, const int region_flatCount, const bool flatCountMismatchOK, int& pathDepth, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    pathDepth++;
    if (pathDepth > 64)
        BUG_u9Gb("assertPathsValid: pathDepth > 64, we're likely stuck in an infinite loop."_view, ctx, _here);
    else
    {
        if (isFirstSubRegion && (region_flatCount >= 0))
        {
            if (!(((flatOffset + flatCount) <= region_flatCount)))
                BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("assertPathsValid: flatOffset("_view, fu::i64dec(flatOffset)) + ")"_view) + " + flatCount("_view), fu::i64dec(flatCount)) + ")"_view) + " !<= region_flatCount("_view), fu::i64dec(region_flatCount)) + ")"_view), ctx, _here);

        };
        if (isLastSubRegion && !flatCountMismatchOK)
        {
            if (expect_flatCount < 0)
                expect_flatCount = flatCount;
            else
            {
                if (!(expect_flatCount == flatCount))
                    BUG_u9Gb((x7E_rA00(((x7E_rA00("assertPathsValid: expect_flatCount("_view, fu::i64dec(expect_flatCount)) + ")"_view) + " != flatCount("_view), fu::i64dec(flatCount)) + ")"_view), ctx, _here);

            };
        };
    };
}
                                #endif

                                #ifndef DEF_onPathDone_rDxO9Fpfmj9
                                #define DEF_onPathDone_rDxO9Fpfmj9
inline static void onPathDone_rDxO(const int minPathDepth, const int pathDepth, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (!((pathDepth >= minPathDepth)))
        BUG_u9Gb((x7E_rA00(((x7E_rA00("assertPathsValid: pathDepth("_view, fu::i64dec(pathDepth)) + ")"_view) + " !>= minPathDepth("_view), fu::i64dec(minPathDepth)) + ")"_view), ctx, _here);

}
                                #endif

void assertPathsValid_7Yz9(fu::view<char> str, int expect_flatCount, const int region_flatCount, const bool flatCountMismatchOK, const int minPathDepth, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    int pathDepth = -1001;
    int numPaths = 0;
    int offset = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        onPathStart_gCFq(pathDepth, numPaths, ctx, _here);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit_7Yz9(str, offset);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(str, offset) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            onSubRegion_TObm(flatOffset, flatCount, isLastSubRegion, isFirstSubRegion, expect_flatCount, region_flatCount, flatCountMismatchOK, pathDepth, ctx, _here);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        onPathDone_rDxO(minPathDepth, pathDepth, ctx, _here);
        if (isLastPath)
            break;

    };
    if (!(offset == str.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}

                                #ifndef DEF_uNsigned_lZb67c0Fyk5
                                #define DEF_uNsigned_lZb67c0Fyk5
inline unsigned uNsigned_lZb6(const unsigned v)
{
    return v;
}
                                #endif

                                #ifndef DEF_onSubRegion_PYNcpMNzMEj
                                #define DEF_onSubRegion_PYNcpMNzMEj
inline static void onSubRegion_PYNc(const bool isFirstSubRegion, const bool isLastSubRegion, const int flatCount, const int flatOffset, const unsigned usage, unsigned& result, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (!(!isFirstSubRegion))
    {
        if (!isLastSubRegion)
            result |= getRegionUsage_CaGD(flatOffset, flatCount);
        else
        {
            const int usageBits = (q_USAGE_bitsize - __builtin_clz(uNsigned_lZb6(usage)));
            const int usagePopcount = __builtin_popcount(uNsigned_lZb6(usage));
            if ((usageBits <= flatCount) || (usagePopcount <= flatCount))
            {
                const unsigned usage_1 = USAGE_structUsageFromFieldUsage_CaGD(usage, flatOffset);
                result |= usage_1;
            }
            else
            {
                BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00(((x7E_rA00("Lifetime_shiftUsage: flatOffset("_view, fu::i64dec(flatOffset)) + ")"_view) + " flatCount("_view), fu::i64dec(flatCount)) + ")"_view) + " usageBits("_view), fu::i64dec(usageBits)) + ")"_view) + " usagePopcount("_view), fu::i64dec(usagePopcount)) + ")"_view), ctx, _here);
            };
        };
    };
}
                                #endif

unsigned Lifetime_shiftUsage_7Yz9(fu::view<char> paths, const unsigned usage, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    unsigned result {};
    int offset = 0;

    {
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit_7Yz9(paths, offset);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(paths, offset) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                const int flatCount = int((raw_flatCount >> 1u));
                const int flatOffset = int((raw_flatOffset >> 1u));
                onSubRegion_PYNc(isFirstSubRegion, isLastSubRegion, flatCount, flatOffset, usage, result, ctx, _here);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };
            if (isLastPath)
                break;

        };
        if (!(offset == paths.size()))
            BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

    };
    return result;
}

void append7bit_7Yz9(fu::vec_range_mut<char> str, unsigned v)
{
    while ((v >= 128u))
    {
        str += char((v | 0x80u));
        v >>= 7u;
    };
    str += char(v);
}

Lifetime_llCF Lifetime_from_7Yz9(const int locid, const int flatCount, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (locid != 0)
    {
        /*MOV*/ fu::str uni0n {};
        append7bit_7Yz9(uni0n, (((unsigned(locid) << 1u) ^ ((locid < 0) ? 0xffffffffu : 0x0u)) << 1u));

        {
            const int flatOffset = 0;
            const bool isLastSubRegion = true;
            if ((flatOffset >= 0) && (flatCount > 0) && isLastSubRegion)
            {
                append7bit_7Yz9(uni0n, ((unsigned(flatOffset) << 1u) | 0u));
                append7bit_7Yz9(uni0n, ((unsigned(flatCount) << 1u) | 0u));
            }
            else
                BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("appendSubRegion: flatCount("_view, fu::i64dec(flatCount)) + ")"_view) + " flatOffset("_view), fu::i64dec(flatOffset)) + ")"_view) + " isLastSubRegion("_view), fu::booldec(isLastSubRegion)) + ")"_view), ctx, _here);

        };
        return Lifetime_llCF { static_cast<fu::str&&>(uni0n) };
    }
    else
    {
        BUG_u9Gb("Lifetime_from: Bad locid"_view, ctx, _here);
    };
}

Lifetime_llCF Lifetime_from_UkiI(const int argidx, fu::view<char> paths, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if ((argidx >= 0))
    {
        /*MOV*/ fu::str uni0n {};
        append7bit_7Yz9(uni0n, ((unsigned(argidx) << 2u) | 3u));
        uni0n += paths;
        return Lifetime_llCF { static_cast<fu::str&&>(uni0n) };
    }
    else
    {
        BUG_u9Gb("Lifetime_from: Bad argidx"_view, ctx, _here);
    };
}

Lifetime_llCF Lifetime_AAR_7Yz9(const int locid, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (locid < 0)
    {
        /*MOV*/ fu::str uni0n {};
        append7bit_7Yz9(uni0n, (((unsigned(locid) << 1u) ^ ((locid < 0) ? 0xffffffffu : 0x0u)) << 1u));
        uni0n += SR_empty.ref;
        return Lifetime_llCF { static_cast<fu::str&&>(uni0n) };
    }
    else
    {
        BUG_u9Gb("Lifetime_from: Bad locid"_view, ctx, _here);
    };
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

                                #ifndef DEF_onSubRegion_08qGw1gtU53
                                #define DEF_onSubRegion_08qGw1gtU53
inline static void onSubRegion_08qG(const int flatCount, const int flatOffset, fu::vec<SubRegion_jsU3>& path)
{
    path += SubRegion_jsU3 { flatCount, flatOffset };
}
                                #endif

                                #ifndef DEF_steal_2kWCymujsJk
                                #define DEF_steal_2kWCymujsJk
inline fu::vec<SubRegion_jsU3> steal_2kWC(fu::vec_range_mut<SubRegion_jsU3> v)
{
    /*MOV*/ fu::vec<SubRegion_jsU3> ret {};
    v.swap(ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_onPathDone_htIq3VhzqO9
                                #define DEF_onPathDone_htIq3VhzqO9
inline static void onPathDone_htIq(fu::vec<fu::vec<SubRegion_jsU3>>& paths, fu::vec<SubRegion_jsU3>& path)
{
    fu::vec<SubRegion_jsU3> _0 {};
    (_0 = steal_2kWC(path), (paths += static_cast<fu::vec<SubRegion_jsU3>&&>(_0)));
}
                                #endif

fu::vec<fu::vec<SubRegion_jsU3>> parsePaths_7Yz9(fu::view<char> str, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    /*MOV*/ fu::vec<fu::vec<SubRegion_jsU3>> paths {};
    fu::vec<SubRegion_jsU3> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit_7Yz9(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            onSubRegion_08qG(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        onPathDone_htIq(paths, path);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

    return /*NRVO*/ paths;
}

                                #ifndef DEF_onPathStart_mtwqzC8nqp6
                                #define DEF_onPathStart_mtwqzC8nqp6
inline static void onPathStart_mtwq(fu::vec<SubRegion_jsU3>& path)
{
    path.clear();
}
                                #endif

                                #ifndef DEF_min_DbqN29MT8e3
                                #define DEF_min_DbqN29MT8e3
inline int min_DbqN(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_x3Cx3E_C6Qg2LNcmil
                                #define DEF_x3Cx3E_C6Qg2LNcmil
inline int x3Cx3E_C6Qg(const SubRegion_jsU3& a, const SubRegion_jsU3& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_odNT(a.flatCount, b.flatCount)))
        return cmp;
    else if ((cmp = x3Cx3E_odNT(a.flatOffset, b.flatOffset)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_KwqgqV2Xdz3
                                #define DEF_x3Cx3E_KwqgqV2Xdz3
inline int x3Cx3E_Kwqg(fu::view<SubRegion_jsU3> a, fu::view<SubRegion_jsU3> b)
{
    int cmp = x3Cx3E_odNT(a.size(), b.size());
    bool quick {};
    quick = a.m_data == b.m_data || cmp;
    if (quick)
        return cmp;
    else
    {
        for (int i = 0; (i < a.size()) && !cmp; i++)
            cmp = x3Cx3E_C6Qg(a[i], b[i]);

        return cmp;
    };
}
                                #endif

                                #ifndef DEF_x3Dx3D_xVa8BLAqprl
                                #define DEF_x3Dx3D_xVa8BLAqprl
inline bool operator==(fu::view<SubRegion_jsU3> a, fu::view<SubRegion_jsU3> b)
{
    return !x3Cx3E_Kwqg(a, b);
}
                                #endif

bool Paths_union_7Yz9(fu::vec_range_mut<fu::vec<SubRegion_jsU3>> result, fu::vec_range<SubRegion_jsU3> path, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    for (int i = 0; i < result.size(); i++)
    {
        fu::view<SubRegion_jsU3> host = result[i];
        const int minL = min_DbqN(path.size(), host.size());
        if (minL)
        {
            if (fu::get_view_start0(path, (minL - 1)) == fu::get_view_start0(host, (minL - 1)))
            {
                const SubRegion_jsU3& a_sr = host[(minL - 1)];
                const SubRegion_jsU3& b_sr = path[(minL - 1)];
                const int a0 = a_sr.flatOffset;
                const int a1 = (a0 + a_sr.flatCount);
                const int b0 = b_sr.flatOffset;
                const int b1 = (b0 + b_sr.flatCount);
                const bool host_within_path = ((a0 >= b0) ? (a1 <= b1) : false);
                const bool path_within_host = ((a0 <= b0) ? (a1 >= b1) : false);
                if (path_within_host && (path.size() >= host.size()))
                    return false;
                else if (host_within_path && (host.size() >= path.size()))
                {
                    result.splice(i, 1);
                    i--;
                };
            };
        }
        else
            BUG_u9Gb("Paths_union: found an empty path."_view, ctx, _here);

    };
    result += fu::vec<SubRegion_jsU3>(path);
    return true;
}

                                #ifndef DEF___bpvCJ6IZPTd
                                #define DEF___bpvCJ6IZPTd
inline static bool _bpvC(fu::vec_range<SubRegion_jsU3> b_path, fu::vec<fu::vec<SubRegion_jsU3>>& result, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    return Paths_union_7Yz9(result, b_path, ctx, _here);
}
                                #endif

                                #ifndef DEF_onPathDone_EuEgxDOvhIi
                                #define DEF_onPathDone_EuEgxDOvhIi
inline static void onPathDone_EuEg(const fu::vec<SubRegion_jsU3>& path, fu::vec<fu::vec<SubRegion_jsU3>>& result, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    _bpvC(path, result, ctx, _here);
}
                                #endif

                                #ifndef DEF_parsePaths_each_6UFhu0CbDZi
                                #define DEF_parsePaths_each_6UFhu0CbDZi
inline static void parsePaths_each_6UFh(fu::view<char> str, fu::vec<fu::vec<SubRegion_jsU3>>& result, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::vec<SubRegion_jsU3> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        onPathStart_mtwq(path);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit_7Yz9(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            onSubRegion_08qG(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        onPathDone_EuEg(path, result, ctx, _here);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}
                                #endif

void appendPaths_7Yz9(fu::vec_range_mut<char> str, fu::view<fu::vec<SubRegion_jsU3>> paths, const bool emptyOK, const bool flatCountMismatchOK, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const int str0 = str.size();
    if (emptyOK || paths)
    {
        for (int i = 0; i < paths.size(); i++)
        {
            fu::view<SubRegion_jsU3> path = paths[i];
            const bool isLastPath = (i == (paths.size() - 1));
            if (path)
            {
                for (int i_1 = 0; i_1 < path.size(); i_1++)
                {
                    const SubRegion_jsU3& subregion = path[i_1];
                    if (subregion)
                    {
                        if (!(subregion.flatCount || (path.size() == 1) || (subregion.flatOffset == 0)))
                            BUG_u9Gb("appendPaths: empty flatCount"_view, ctx, _here);

                    }
                    else
                        BUG_u9Gb("appendPaths: empty subregion"_view, ctx, _here);

                    const bool isLastSubRegion = (i_1 == (path.size() - 1));
                    const int flatCount = subregion.flatCount;
                    const int flatOffset = subregion.flatOffset;
                    if ((flatOffset >= 0) && (flatCount > 0) && (isLastSubRegion || (flatCount == 1)))
                    {
                        append7bit_7Yz9(str, ((unsigned(flatOffset) << 1u) | (isLastSubRegion ? 0u : 1u)));
                        if (isLastSubRegion)
                            append7bit_7Yz9(str, ((unsigned(flatCount) << 1u) | (isLastPath ? 0u : 1u)));

                    }
                    else
                        BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("appendSubRegion: flatCount("_view, fu::i64dec(flatCount)) + ")"_view) + " flatOffset("_view), fu::i64dec(flatOffset)) + ")"_view) + " isLastSubRegion("_view), fu::booldec(isLastSubRegion)) + ")"_view), ctx, _here);

                };
            }
            else
                BUG_u9Gb("appendPaths: zero subregions"_view, ctx, _here);

        };
        if (str)
            assertPathsValid_7Yz9(fu::get_view(str, str0), -1, -1, flatCountMismatchOK, 1, ctx, _here);
        else
        {
            if (!(emptyOK))
                BUG_u9Gb("appendPaths: empty output"_view, ctx, _here);

        };
    }
    else
        BUG_u9Gb("appendPaths: zero paths"_view, ctx, _here);

}

void Paths_union_UkiI(fu::vec_range_mut<char> str, fu::view<char> a, fu::view<char> b, const bool flatCountMismatchOK, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::vec<fu::vec<SubRegion_jsU3>> result = parsePaths_7Yz9(a, ctx, _here);
    parsePaths_each_6UFh(b, result, ctx, _here);
    appendPaths_7Yz9(str, result, false, flatCountMismatchOK, ctx, _here);
}

                                #ifndef DEF_both_V5h1NyviDii
                                #define DEF_both_V5h1NyviDii
inline static void both_V5h1(fu::view<char> r_both, fu::view<char> sr_left, fu::view<char> sr_right, const bool flatCountMismatchOK, Lifetime_llCF& result, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    result.uni0n += r_both;
    if ((sr_left == sr_right) || (sr_left == SR_empty.ref))
        result.uni0n += sr_left;
    else if (sr_right == SR_empty.ref)
        result.uni0n += sr_right;
    else
        Paths_union_UkiI(result.uni0n, sr_left, sr_right, flatCountMismatchOK, ctx, _here);

}
                                #endif

                                #ifndef DEF_either_0yqHbITrVoj
                                #define DEF_either_0yqHbITrVoj
inline static fu::view<char> either_0yqH(fu::view<char> raw, Lifetime_llCF& result)
{
    return (result.uni0n += raw);
}
                                #endif

Lifetime_llCF Lifetime_union_7Yz9(const Lifetime_llCF& a, const Lifetime_llCF& b, const bool flatCountMismatchOK, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    /*MOV*/ Lifetime_llCF result {};

    { {
        fu::view<char> l_chars = a.uni0n;
        fu::view<char> r_chars = b.uni0n;
        int l_start {};
        int r_start {};
        int l_paths0 {};
        int r_paths0 {};
        int l_offset {};
        int r_offset {};
        unsigned l {};
        unsigned r {};
        bool l_dirty = true;
        bool r_dirty = true;
        const bool l_done = false;
        const bool r_done = false;
        fu::view<char> BL_2_v {};
        fu::view<char> rest_chars = (__extension__ (
        { {
            for (; ; )
            {
                if (l_dirty)
                {
                    l_dirty = false;
                    l_start = l_offset;
                    if (l_offset < l_chars.size())
                    {
                        l = parse7bit_7Yz9(l_chars, l_offset);
                        int offset0;
                        int BL_7_v;
                        l_paths0 = (__extension__ (
                        {
                            offset0 = (l_offset + 0);
                            for (; ; )
                            {
                                bool isLastPath = false;
                                bool isFirstSubRegion = true;
                                for (; ; )
                                {
                                    const unsigned raw_flatOffset = parse7bit_7Yz9(l_chars, l_offset);
                                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(l_chars, l_offset) : 3u);
                                    isLastPath = !(raw_flatCount & 1u);
                                    if (isLastSubRegion)
                                        break;
                                    else
                                        isFirstSubRegion = false;

                                };
                                if (isLastPath)
                                    break;

                            };
                            BL_7_v = (offset0);
                            (void)0;
                        }), BL_7_v);
                    }
                    else if (!result)
                    {
                        return Lifetime_llCF(b);
                    }
                    else
                    {
                        { BL_2_v.ptr_reassign(fu::get_view(r_chars, (r_dirty ? r_offset : r_start))); goto BL_2; };
                    };
                };
                if (r_dirty)
                {
                    r_dirty = false;
                    r_start = r_offset;
                    if (r_offset < r_chars.size())
                    {
                        r = parse7bit_7Yz9(r_chars, r_offset);
                        int offset0;
                        int BL_19_v;
                        r_paths0 = (__extension__ (
                        {
                            offset0 = (r_offset + 0);
                            for (; ; )
                            {
                                bool isLastPath = false;
                                bool isFirstSubRegion = true;
                                for (; ; )
                                {
                                    const unsigned raw_flatOffset = parse7bit_7Yz9(r_chars, r_offset);
                                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(r_chars, r_offset) : 3u);
                                    isLastPath = !(raw_flatCount & 1u);
                                    if (isLastSubRegion)
                                        break;
                                    else
                                        isFirstSubRegion = false;

                                };
                                if (isLastPath)
                                    break;

                            };
                            BL_19_v = (offset0);
                            (void)0;
                        }), BL_19_v);
                    }
                    else if (!result)
                    {
                        return Lifetime_llCF(a);
                    }
                    else
                    {
                        { BL_2_v.ptr_reassign(fu::get_view(l_chars, (l_dirty ? l_offset : l_start))); goto BL_2; };
                    };
                };
                unsigned r_1;
                unsigned r_2;
                unsigned r_3;
                unsigned r_4;
                unsigned r_5;
                unsigned r_6;
                const int cmp = (l_done ? (r_done ? (__extension__ (
                {
                    goto BL_1;
                    (void)0;
                }), fu::unreachable) : +1) : (r_done ? -1 : (((r_1 = l, ((r_1 & 11u) == 1u)) != (r_2 = r, ((r_2 & 11u) == 1u))) ? ((r_3 = r, ((r_3 & 11u) == 1u)) ? -1 : +1) : (((r_4 = l, (r_4 == 0b1001u)) != (r_5 = r, (r_5 == 0b1001u))) ? ((r_6 = r, (r_6 == 0b1001u)) ? +1 : -1) : (((l & 3u) == 2u) ? (((r & 3u) == 2u) ? x3Cx3E_Rgh3(l, r) : +1) : (((r & 3u) == 2u) ? -1 : x3Cx3E_Rgh3(r, l)))))));
                fu::view<char> either_chars = ((cmp == 0) ? (__extension__ (
                {
                    l_dirty = true;
                    r_dirty = true;
                    both_V5h1(fu::get_view(l_chars, l_start, l_paths0), fu::get_view(l_chars, l_paths0, l_offset), fu::get_view(r_chars, r_paths0, r_offset), flatCountMismatchOK, result, ctx, _here);
                    continue;
                    (void)0;
                }), fu::unreachable) : ((cmp < 0) ? ((l_dirty = true), fu::get_view(l_chars, l_start, l_offset)) : ((r_dirty = true), fu::get_view(r_chars, r_start, r_offset))));
                either_0yqH(either_chars, result);
            };
          } BL_2:;
            (void)0;
        }), BL_2_v);
        result.uni0n += rest_chars;
      } BL_1:;
    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_max_BjFAioWEpjb
                                #define DEF_max_BjFAioWEpjb
inline int max_BjFA(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF___EHeQaLzd2S8
                                #define DEF___EHeQaLzd2S8
inline static void _EHeQ(fu::view<SubRegion_jsU3> b_path, fu::view<SubRegion_jsU3> a_path, fu::vec<fu::vec<SubRegion_jsU3>>& result, fu::vec<SubRegion_jsU3>& inter, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const int N = min_DbqN(a_path.size(), b_path.size());
    for (int i = 0; i < N; i++)
    {
        const SubRegion_jsU3& a = a_path[i];
        const SubRegion_jsU3& b = b_path[i];
        const int overlap = min_DbqN(((b.flatOffset + b.flatCount) - a.flatOffset), ((a.flatOffset + a.flatCount) - b.flatOffset));
        if ((overlap <= 0))
        {
            inter.clear();
            return;
        }
        else
        {
            const int flatCount = min_DbqN(a.flatCount, b.flatCount);
            const int flatOffset = max_BjFA(a.flatOffset, b.flatOffset);
            if ((overlap >= flatCount))
            {
                inter += SubRegion_jsU3 { flatCount, flatOffset };
            }
            else
                BUG_u9Gb((x7E_rA00(((x7E_rA00((x7E_rA00(((x7E_rA00((x7E_rA00(("Paths_inter: self-intersection:"_view + "\n\t\ta.flatOffset("_view), fu::i64dec(a.flatOffset)) + ") a.flatCount("_view), fu::i64dec(a.flatCount)) + ")"_view) + "\n\t\tb.flatOffset("_view), fu::i64dec(b.flatOffset)) + ") b.flatCount("_view), fu::i64dec(b.flatCount)) + ")"_view) + "\n\t\toverlap("_view), fu::i64dec(overlap)) + ")"_view), ctx, _here);

        };
    };
    if (inter)
    {
        if (a_path.size() > b_path.size())
            inter += fu::get_view(a_path, b_path.size());

        if (b_path.size() > a_path.size())
            inter += fu::get_view(b_path, a_path.size());

        Paths_union_7Yz9(result, inter, ctx, _here);
    }
    else
        BUG_u9Gb("Paths_inter: empty inter, about to append suffix"_view, ctx, _here);

}
                                #endif

                                #ifndef DEF_onPathDone_9GlAz2kzQ5i
                                #define DEF_onPathDone_9GlAz2kzQ5i
inline static void onPathDone_9GlA(fu::view<SubRegion_jsU3> path, fu::view<SubRegion_jsU3> a_path, fu::vec<fu::vec<SubRegion_jsU3>>& result, fu::vec<SubRegion_jsU3>& inter, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    _EHeQ(path, a_path, result, inter, ctx, _here);
}
                                #endif

                                #ifndef DEF_parsePaths_each_S2ZH6PBqvdh
                                #define DEF_parsePaths_each_S2ZH6PBqvdh
inline static void parsePaths_each_S2ZH(fu::view<char> str, fu::view<SubRegion_jsU3> a_path, fu::vec<fu::vec<SubRegion_jsU3>>& result, fu::vec<SubRegion_jsU3>& inter, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::vec<SubRegion_jsU3> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        onPathStart_mtwq(path);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit_7Yz9(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            onSubRegion_08qG(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        onPathDone_9GlA(path, a_path, result, inter, ctx, _here);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}
                                #endif

                                #ifndef DEF___II6DsZs7mYh
                                #define DEF___II6DsZs7mYh
inline static void _II6D(fu::view<SubRegion_jsU3> a_path, fu::view<char> b, fu::vec<fu::vec<SubRegion_jsU3>>& result, fu::vec<SubRegion_jsU3>& inter, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    parsePaths_each_S2ZH(b, a_path, result, inter, ctx, _here);
}
                                #endif

                                #ifndef DEF_onPathDone_utvlpJeLHQj
                                #define DEF_onPathDone_utvlpJeLHQj
inline static void onPathDone_utvl(fu::view<SubRegion_jsU3> path, fu::view<char> b, fu::vec<fu::vec<SubRegion_jsU3>>& result, fu::vec<SubRegion_jsU3>& inter, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    _II6D(path, b, result, inter, ctx, _here);
}
                                #endif

                                #ifndef DEF_parsePaths_each_HndtrNH2gTj
                                #define DEF_parsePaths_each_HndtrNH2gTj
inline static void parsePaths_each_Hndt(fu::view<char> str, fu::view<char> b, fu::vec<fu::vec<SubRegion_jsU3>>& result, fu::vec<SubRegion_jsU3>& inter, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::vec<SubRegion_jsU3> path {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        onPathStart_mtwq(path);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit_7Yz9(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            onSubRegion_08qG(flatCount, flatOffset, path);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        onPathDone_utvl(path, b, result, inter, ctx, _here);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}
                                #endif

void Paths_inter_7Yz9(fu::vec_range_mut<char> str, fu::view<char> a, fu::view<char> b, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (a.size() < b.size())
        Paths_inter_7Yz9(str, b, a, ctx, _here);
    else
    {
        fu::vec<fu::vec<SubRegion_jsU3>> result {};
        fu::vec<SubRegion_jsU3> inter {};
        parsePaths_each_Hndt(a, b, result, inter, ctx, _here);
        appendPaths_7Yz9(str, result, true, true, ctx, _here);
    };
}

                                #ifndef DEF_both_dxTDM6T7El5
                                #define DEF_both_dxTDM6T7El5
inline static void both_dxTD(fu::view<char> r_both, fu::view<char> sr_left, fu::view<char> sr_right, Lifetime_llCF& result, fu::str& inter, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::view<char> BL_1_v {};
    fu::view<char> sr_chars = (((sr_left == sr_right) || (sr_right == SR_empty.ref)) ? sr_left : ((sr_left == SR_empty.ref) ? sr_right : (__extension__ (
    {
        inter.clear();
        Paths_inter_7Yz9(inter, sr_left, sr_right, ctx, _here);
        BL_1_v.ptr_reassign((inter ? inter : (__extension__ (
        {
            return;
            (void)0;
        }), fu::unreachable)));
        (void)0;
    }), BL_1_v)));
    result.uni0n += r_both;
    result.uni0n += sr_chars;
}
                                #endif

Lifetime_llCF Lifetime_inter_7Yz9(const Lifetime_llCF& a, const Lifetime_llCF& b, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    /*MOV*/ Lifetime_llCF result {};
    fu::str inter {};

    { {
        fu::view<char> l_chars = a.uni0n;
        fu::view<char> r_chars = b.uni0n;
        int l_start {};
        int r_start {};
        int l_paths0 {};
        int r_paths0 {};
        int l_offset {};
        int r_offset {};
        unsigned l {};
        unsigned r {};
        bool l_dirty = true;
        bool r_dirty = true;
        const bool l_done = false;
        const bool r_done = false;
        for (; ; )
        {
            if (l_dirty)
            {
                l_dirty = false;
                l_start = l_offset;
                if (l_offset < l_chars.size())
                {
                    l = parse7bit_7Yz9(l_chars, l_offset);
                    int offset0;
                    int BL_6_v;
                    l_paths0 = (__extension__ (
                    {
                        offset0 = (l_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath = false;
                            bool isFirstSubRegion = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset = parse7bit_7Yz9(l_chars, l_offset);
                                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(l_chars, l_offset) : 3u);
                                isLastPath = !(raw_flatCount & 1u);
                                if (isLastSubRegion)
                                    break;
                                else
                                    isFirstSubRegion = false;

                            };
                            if (isLastPath)
                                break;

                        };
                        BL_6_v = (offset0);
                        (void)0;
                    }), BL_6_v);
                }
                else
                    goto BL_1;

            };
            if (r_dirty)
            {
                r_dirty = false;
                r_start = r_offset;
                if (r_offset < r_chars.size())
                {
                    r = parse7bit_7Yz9(r_chars, r_offset);
                    int offset0;
                    int BL_17_v;
                    r_paths0 = (__extension__ (
                    {
                        offset0 = (r_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath = false;
                            bool isFirstSubRegion = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset = parse7bit_7Yz9(r_chars, r_offset);
                                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(r_chars, r_offset) : 3u);
                                isLastPath = !(raw_flatCount & 1u);
                                if (isLastSubRegion)
                                    break;
                                else
                                    isFirstSubRegion = false;

                            };
                            if (isLastPath)
                                break;

                        };
                        BL_17_v = (offset0);
                        (void)0;
                    }), BL_17_v);
                }
                else
                    goto BL_1;

            };
            unsigned r_1;
            unsigned r_2;
            unsigned r_3;
            unsigned r_4;
            unsigned r_5;
            unsigned r_6;
            const int cmp = (l_done ? (r_done ? (__extension__ (
            {
                goto BL_1;
                (void)0;
            }), fu::unreachable) : +1) : (r_done ? -1 : (((r_1 = l, ((r_1 & 11u) == 1u)) != (r_2 = r, ((r_2 & 11u) == 1u))) ? ((r_3 = r, ((r_3 & 11u) == 1u)) ? -1 : +1) : (((r_4 = l, (r_4 == 0b1001u)) != (r_5 = r, (r_5 == 0b1001u))) ? ((r_6 = r, (r_6 == 0b1001u)) ? +1 : -1) : (((l & 3u) == 2u) ? (((r & 3u) == 2u) ? x3Cx3E_Rgh3(l, r) : +1) : (((r & 3u) == 2u) ? -1 : x3Cx3E_Rgh3(r, l)))))));
            if (cmp == 0)
            {
                l_dirty = true;
                r_dirty = true;
                both_dxTD(fu::get_view(l_chars, l_start, l_paths0), fu::get_view(l_chars, l_paths0, l_offset), fu::get_view(r_chars, r_paths0, r_offset), result, inter, ctx, _here);
            }
            else if (cmp < 0)
                l_dirty = true;
            else
                r_dirty = true;

        };
      } BL_1:;
    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_Paths_hasInter_XCYjZuM95eb
                                #define DEF_Paths_hasInter_XCYjZuM95eb
inline static bool Paths_hasInter_XCYj(fu::view<char> a, fu::view<char> b, const Context_noPA& ctx, const TokenIdx_5581& _here)
{

    {
        fu::vec<SubRegion_jsU3> path {};
        int _o = 0;
        for (; ; )
        {
            bool isLastPath = false;
            bool isFirstSubRegion = true;
            onPathStart_mtwq(path);
            for (; ; )
            {
                const unsigned raw_flatOffset = parse7bit_7Yz9(a, _o);
                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(a, _o) : 3u);
                isLastPath = !(raw_flatCount & 1u);
                const int flatCount = int((raw_flatCount >> 1u));
                const int flatOffset = int((raw_flatOffset >> 1u));
                onSubRegion_08qG(flatCount, flatOffset, path);
                if (isLastSubRegion)
                    break;
                else
                    isFirstSubRegion = false;

            };

            {
                fu::view<SubRegion_jsU3> a_path = path;
                fu::vec<SubRegion_jsU3> path_1 {};
                int _o_1 = 0;
                for (; ; )
                {
                    bool isLastPath_1 = false;
                    bool isFirstSubRegion_1 = true;
                    onPathStart_mtwq(path_1);
                    for (; ; )
                    {
                        const unsigned raw_flatOffset = parse7bit_7Yz9(b, _o_1);
                        const bool isLastSubRegion = !(raw_flatOffset & 1u);
                        const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(b, _o_1) : 3u);
                        isLastPath_1 = !(raw_flatCount & 1u);
                        const int flatCount = int((raw_flatCount >> 1u));
                        const int flatOffset = int((raw_flatOffset >> 1u));
                        onSubRegion_08qG(flatCount, flatOffset, path_1);
                        if (isLastSubRegion)
                            break;
                        else
                            isFirstSubRegion_1 = false;

                    };

                    { {
                        fu::view<SubRegion_jsU3> b_path = path_1;
                        const int N = min_DbqN(a_path.size(), b_path.size());
                        SubRegion_jsU3 a_1 {};
                        SubRegion_jsU3 b_1 {};
                        for (int i = 0; i < N; i++)
                        {
                            a_1 = a_path[i];
                            b_1 = b_path[i];
                            const int overlap = min_DbqN(((b_1.flatOffset + b_1.flatCount) - a_1.flatOffset), ((a_1.flatOffset + a_1.flatCount) - b_1.flatOffset));
                            if ((overlap <= 0))
                                goto BL_15;

                        };
                        return true;
                      } BL_15:;
                    };
                    if (isLastPath_1)
                        break;

                };
                if (!(_o_1 == b.size()))
                    BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

            };
            if (isLastPath)
                break;

        };
        if (!(_o == a.size()))
            BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

    };
    return false;
}
                                #endif

                                #ifndef DEF_both_MHif5fAjggj
                                #define DEF_both_MHif5fAjggj
inline static void both_MHif(const int locid, fu::view<char> sr_left, fu::view<char> sr_right, fu::vec<int>& result, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (!(!locid))
    {
        if ((sr_left == sr_right) || (sr_left == SR_empty.ref) || (sr_right == SR_empty.ref) || Paths_hasInter_XCYj(sr_left, sr_right, ctx, _here))
            result += locid;

    };
}
                                #endif

fu::vec<int> Lifetime_interLocids_7Yz9(const Lifetime_llCF& a, const Lifetime_llCF& b, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    /*MOV*/ fu::vec<int> result {};

    { {
        fu::view<char> l_chars = a.uni0n;
        fu::view<char> r_chars = b.uni0n;
        int l_start {};
        int r_start {};
        int l_paths0 {};
        int r_paths0 {};
        int l_offset {};
        int r_offset {};
        unsigned l {};
        unsigned r {};
        bool l_dirty = true;
        bool r_dirty = true;
        const bool l_done = false;
        const bool r_done = false;
        for (; ; )
        {
            if (l_dirty)
            {
                l_dirty = false;
                l_start = l_offset;
                if (l_offset < l_chars.size())
                {
                    l = parse7bit_7Yz9(l_chars, l_offset);
                    int offset0;
                    int BL_6_v;
                    l_paths0 = (__extension__ (
                    {
                        offset0 = (l_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath = false;
                            bool isFirstSubRegion = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset = parse7bit_7Yz9(l_chars, l_offset);
                                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(l_chars, l_offset) : 3u);
                                isLastPath = !(raw_flatCount & 1u);
                                if (isLastSubRegion)
                                    break;
                                else
                                    isFirstSubRegion = false;

                            };
                            if (isLastPath)
                                break;

                        };
                        BL_6_v = (offset0);
                        (void)0;
                    }), BL_6_v);
                }
                else
                    goto BL_1;

            };
            if (r_dirty)
            {
                r_dirty = false;
                r_start = r_offset;
                if (r_offset < r_chars.size())
                {
                    r = parse7bit_7Yz9(r_chars, r_offset);
                    int offset0;
                    int BL_17_v;
                    r_paths0 = (__extension__ (
                    {
                        offset0 = (r_offset + 0);
                        for (; ; )
                        {
                            bool isLastPath = false;
                            bool isFirstSubRegion = true;
                            for (; ; )
                            {
                                const unsigned raw_flatOffset = parse7bit_7Yz9(r_chars, r_offset);
                                const bool isLastSubRegion = !(raw_flatOffset & 1u);
                                const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(r_chars, r_offset) : 3u);
                                isLastPath = !(raw_flatCount & 1u);
                                if (isLastSubRegion)
                                    break;
                                else
                                    isFirstSubRegion = false;

                            };
                            if (isLastPath)
                                break;

                        };
                        BL_17_v = (offset0);
                        (void)0;
                    }), BL_17_v);
                }
                else
                    goto BL_1;

            };
            unsigned r_1;
            unsigned r_2;
            unsigned r_3;
            unsigned r_4;
            unsigned r_5;
            unsigned r_6;
            const int cmp = (l_done ? (r_done ? (__extension__ (
            {
                goto BL_1;
                (void)0;
            }), fu::unreachable) : +1) : (r_done ? -1 : (((r_1 = l, ((r_1 & 11u) == 1u)) != (r_2 = r, ((r_2 & 11u) == 1u))) ? ((r_3 = r, ((r_3 & 11u) == 1u)) ? -1 : +1) : (((r_4 = l, (r_4 == 0b1001u)) != (r_5 = r, (r_5 == 0b1001u))) ? ((r_6 = r, (r_6 == 0b1001u)) ? +1 : -1) : (((l & 3u) == 2u) ? (((r & 3u) == 2u) ? x3Cx3E_Rgh3(l, r) : +1) : (((r & 3u) == 2u) ? -1 : x3Cx3E_Rgh3(r, l)))))));
            if (cmp == 0)
            {
                l_dirty = true;
                r_dirty = true;
                unsigned r_7;
                unsigned v;
                both_MHif((r_7 = r, ((r_7 & 1u) ? 0 : (v = (r_7 >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))))), fu::get_view(l_chars, l_paths0, l_offset), fu::get_view(r_chars, r_paths0, r_offset), result, ctx, _here);
            }
            else if (cmp < 0)
                l_dirty = true;
            else
                r_dirty = true;

        };
      } BL_1:;
    };
    return /*NRVO*/ result;
}

void Lifetime_add_7Yz9(Lifetime_llCF& l, const Lifetime_llCF& r, const bool flatCountMismatchOK, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (r)
    {
        l = Lifetime_union_7Yz9(l, r, flatCountMismatchOK, ctx, _here);
    };
}

                                #ifndef DEF_starts_ojopLVekF87
                                #define DEF_starts_ojopLVekF87
inline bool starts_ojop(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

bool hasTemporary_7Yz9(const Lifetime_llCF& lifetime)
{
    return starts_ojop(lifetime.uni0n, Region_TEMP);
}

bool hasStatic_7Yz9(const Lifetime_llCF& lifetime)
{
    const int n = lifetime.uni0n.size();
    unsigned r;
    return (n >= 3) && (fu::get_view(lifetime.uni0n, (n - 2)) == SR_empty.ref) && (r = unsigned(fu::u8(lifetime.uni0n[(n - 3)])), ((r & 11u) == 1u));
}

bool isStaticOrZeroes_7Yz9(const Lifetime_llCF& lifetime)
{
    unsigned r;
    return (lifetime.uni0n.size() == 3) && (r = unsigned(fu::u8(lifetime.uni0n[0])), ((r & 11u) == 1u));
}

                                #ifndef DEF___oQSm86ihkT3
                                #define DEF___oQSm86ihkT3
inline static bool _oQSm(const int locid, const int search)
{
    return locid == search;
}
                                #endif

                                #ifndef DEF_Lifetime_some_hZbh0nSqLt8
                                #define DEF_Lifetime_some_hZbh0nSqLt8
inline bool Lifetime_some_hZbh(const Lifetime_llCF& lifetime, const int search)
{

    {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit_7Yz9(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit_7Yz9(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            unsigned v;
            const int locid = ((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))));
            if (_oQSm(locid, search))
                return true;

        };
    };
    return false;
}
                                #endif

bool Lifetime_has_7Yz9(const Lifetime_llCF& lifetime, const int search)
{
    return Lifetime_some_hZbh(lifetime, search);
}

                                #ifndef DEF___ofQTomILjXk
                                #define DEF___ofQTomILjXk
inline static bool _ofQT(const bool isArgIdx, const int argidx, const int search)
{
    if (isArgIdx)
        return argidx == search;
    else
        return false;

}
                                #endif

                                #ifndef DEF_Lifetime_some_FUT6V5FzoC2
                                #define DEF_Lifetime_some_FUT6V5FzoC2
inline bool Lifetime_some_FUT6(const Lifetime_llCF& lifetime, const int search)
{

    {
        fu::view<char> chars = lifetime.uni0n;
        int offset = 0;
        while (offset < chars.size())
        {
            const unsigned r = parse7bit_7Yz9(chars, offset);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit_7Yz9(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            const int argidx = int(((r & 1u) ? (r >> 2u) : 0u));
            const bool isArgIdx = ((r & 3u) == 3u);
            if (_ofQT(isArgIdx, argidx, search))
                return true;

        };
    };
    return false;
}
                                #endif

bool Lifetime_has_UkiI(const Lifetime_llCF& lifetime, const int search)
{
    return Lifetime_some_FUT6(lifetime, search);
}

                                #ifndef DEF_onLastSubRegion_BJIF4reOSx6
                                #define DEF_onLastSubRegion_BJIF4reOSx6
inline static void onLastSubRegion_BJIF(const bool isLastPath, fu::view<char> raw_prefix, const int parent_flatCount, const int parent_flatOffset, fu::vec_range_mut<char> result, const int deref_flatCount, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (parent_flatCount == 1)
    {
        result += raw_prefix;

        {
            const bool isLastSubRegion = false;
            if ((parent_flatOffset >= 0) && (parent_flatCount > 0) && (parent_flatCount == 1))
                append7bit_7Yz9(result, ((unsigned(parent_flatOffset) << 1u) | 1u));
            else
                BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("appendSubRegion: flatCount("_view, fu::i64dec(parent_flatCount)) + ")"_view) + " flatOffset("_view), fu::i64dec(parent_flatOffset)) + ")"_view) + " isLastSubRegion("_view), fu::booldec(isLastSubRegion)) + ")"_view), ctx, _here);

        };
        const int flatOffset = 0;
        const bool isLastSubRegion = true;
        if ((flatOffset >= 0) && (deref_flatCount > 0) && isLastSubRegion)
        {
            append7bit_7Yz9(result, ((unsigned(flatOffset) << 1u) | 0u));
            append7bit_7Yz9(result, ((unsigned(deref_flatCount) << 1u) | (isLastPath ? 0u : 1u)));
        }
        else
            BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("appendSubRegion: flatCount("_view, fu::i64dec(deref_flatCount)) + ")"_view) + " flatOffset("_view), fu::i64dec(flatOffset)) + ")"_view) + " isLastSubRegion("_view), fu::booldec(isLastSubRegion)) + ")"_view), ctx, _here);

    }
    else
    {
        BUG_u9Gb((x7E_rA00("Lifetime_op_deref: parent_flatCount("_view, fu::i64dec(parent_flatCount)) + ") != 1"_view), ctx, _here);
    };
}
                                #endif

                                #ifndef DEF___S7CFxoHcoH6
                                #define DEF___S7CFxoHcoH6
inline static void _S7CF(fu::view<char> paths, fu::vec_range_mut<char> result, const int deref_flatCount, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    int offset = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        const int path0 = offset;
        for (; ; )
        {
            const int subregion0 = offset;
            const unsigned raw_flatOffset = parse7bit_7Yz9(paths, offset);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(paths, offset) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            if (isLastSubRegion)
            {
                onLastSubRegion_BJIF(isLastPath, fu::get_view(paths, path0, subregion0), flatCount, flatOffset, result, deref_flatCount, ctx, _here);
                break;
            }
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(offset == paths.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}
                                #endif

                                #ifndef DEF___eJa2E81E4rk
                                #define DEF___eJa2E81E4rk
inline static void _eJa2(fu::view<char> r_raw, fu::view<char> paths, const int locid, const int minPathDepth, fu::str& result, const int deref_flatCount, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    result += r_raw;
    if (paths == SR_empty.ref)
        result += paths;
    else if (locid)
    {
        const int result0 = result.size();
        _S7CF(paths, result, deref_flatCount, ctx, _here);
        assertPathsValid_7Yz9(fu::get_view(result, result0), -1, -1, false, minPathDepth, ctx, _here);
    }
    else
    {
        BUG_u9Gb("Lifetime_op: non-locid non-x00x00 subregion."_view, ctx, _here);
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_ND3NsOQNWHd
                                #define DEF_Lifetime_each_ND3NsOQNWHd
inline void Lifetime_each_ND3N(const Lifetime_llCF& lifetime, const int minPathDepth, fu::str& result, const int deref_flatCount, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit_7Yz9(chars, offset);
        int offset0_1;
        int BL_3_v;
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit_7Yz9(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
            (void)0;
        }), BL_3_v);
        unsigned v;
        _eJa2(fu::get_view(chars, offset0, sr), fu::get_view(chars, sr, offset), ((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), minPathDepth, result, deref_flatCount, ctx, _here);
    };
}
                                #endif

Lifetime_llCF Lifetime_op_deref_7Yz9(const Lifetime_llCF& lt, const int deref_flatCount, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const int minPathDepth = 2;
    /*MOV*/ fu::str result {};
    Lifetime_each_ND3N(lt, minPathDepth, result, deref_flatCount, ctx, _here);
    return Lifetime_llCF { static_cast<fu::str&&>(result) };
}

Lifetime_llCF Lifetime_makeShared_7Yz9(const Lifetime_llCF& lifetime, const int flatCount, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    return Lifetime_union_7Yz9(Lifetime_op_deref_7Yz9(lifetime, flatCount, ctx, _here), Lifetime_static_immoveable, false, ctx, _here);
}

                                #ifndef DEF_onLastSubRegion_J8ubPuAkLBg
                                #define DEF_onLastSubRegion_J8ubPuAkLBg
inline static void onLastSubRegion_J8ub(const bool isLastSubRegion, const bool isLastPath, fu::view<char> raw_prefix, const int struct_flatCount, const int struct_flatOffset, fu::vec_range_mut<char> result, const int flatCount, const int flatOffset, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (((flatCount + flatOffset) <= struct_flatCount))
    {
        result += raw_prefix;
        const int flatOffset_1 = (struct_flatOffset + flatOffset);
        if ((flatOffset_1 >= 0) && (flatCount > 0) && (isLastSubRegion || (flatCount == 1)))
        {
            append7bit_7Yz9(result, ((unsigned(flatOffset_1) << 1u) | (isLastSubRegion ? 0u : 1u)));
            if (isLastSubRegion)
                append7bit_7Yz9(result, ((unsigned(flatCount) << 1u) | (isLastPath ? 0u : 1u)));

        }
        else
            BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("appendSubRegion: flatCount("_view, fu::i64dec(flatCount)) + ")"_view) + " flatOffset("_view), fu::i64dec(flatOffset_1)) + ")"_view) + " isLastSubRegion("_view), fu::booldec(isLastSubRegion)) + ")"_view), ctx, _here);

    }
    else
    {
        BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("Lifetime_op_field: field.flatOffset("_view, fu::i64dec(flatOffset)) + ")"_view) + " + field.flatCount("_view), fu::i64dec(flatCount)) + ")"_view) + " !<= struct.flatCount("_view), fu::i64dec(struct_flatCount)) + ")"_view), ctx, _here);
    };
}
                                #endif

                                #ifndef DEF___KE2oOR5H8c2
                                #define DEF___KE2oOR5H8c2
inline static void _KE2o(fu::view<char> paths, fu::vec_range_mut<char> result, const int flatCount, const int flatOffset, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    int offset = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        const int path0 = offset;
        for (; ; )
        {
            const int subregion0 = offset;
            const unsigned raw_flatOffset = parse7bit_7Yz9(paths, offset);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(paths, offset) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount_1 = int((raw_flatCount >> 1u));
            const int flatOffset_1 = int((raw_flatOffset >> 1u));
            if (isLastSubRegion)
            {
                onLastSubRegion_J8ub(isLastSubRegion, isLastPath, fu::get_view(paths, path0, subregion0), flatCount_1, flatOffset_1, result, flatCount, flatOffset, ctx, _here);
                break;
            }
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(offset == paths.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}
                                #endif

                                #ifndef DEF___wyB5JQs8G47
                                #define DEF___wyB5JQs8G47
inline static void _wyB5(fu::view<char> r_raw, fu::view<char> paths, const int locid, const int minPathDepth, fu::str& result, const int flatCount, const int flatOffset, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    result += r_raw;
    if (paths == SR_empty.ref)
        result += paths;
    else if (locid)
    {
        const int result0 = result.size();
        _KE2o(paths, result, flatCount, flatOffset, ctx, _here);
        assertPathsValid_7Yz9(fu::get_view(result, result0), -1, -1, false, minPathDepth, ctx, _here);
    }
    else
    {
        BUG_u9Gb("Lifetime_op: non-locid non-x00x00 subregion."_view, ctx, _here);
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_C0edsQpQ70f
                                #define DEF_Lifetime_each_C0edsQpQ70f
inline void Lifetime_each_C0ed(const Lifetime_llCF& lifetime, const int minPathDepth, fu::str& result, const int flatCount, const int flatOffset, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit_7Yz9(chars, offset);
        int offset0_1;
        int BL_3_v;
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit_7Yz9(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
            (void)0;
        }), BL_3_v);
        unsigned v;
        _wyB5(fu::get_view(chars, offset0, sr), fu::get_view(chars, sr, offset), ((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), minPathDepth, result, flatCount, flatOffset, ctx, _here);
    };
}
                                #endif

Lifetime_llCF Lifetime_op_field_7Yz9(const Lifetime_llCF& lt, const int flatCount, const int flatOffset, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const int minPathDepth = 1;
    /*MOV*/ fu::str result {};
    Lifetime_each_C0ed(lt, minPathDepth, result, flatCount, flatOffset, ctx, _here);
    return Lifetime_llCF { static_cast<fu::str&&>(result) };
}

extern const unsigned q_USAGE;
Lifetime_llCF Lifetime_op_mask_7Yz9(const Lifetime_llCF& lt, const unsigned quals, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const unsigned usage = (quals & q_USAGE);
    const int clz = __builtin_clz(usage);
    const int ctz = __builtin_ctz(usage);
    const int flatOffset = (ctz - q_USAGE_offset);
    const int flatCount = (usage ? ((q_USAGE_bitsize - flatOffset) - clz) : 0);
    if (flatCount > 0)
    {

        {
            fu::view<char> chars = lt.uni0n;
            int offset = 0;
            while (offset < chars.size())
            {
                parse7bit_7Yz9(chars, offset);
                int offset0;
                int BL_5_v;
                const int sr = (__extension__ (
                {
                    offset0 = (offset + 0);
                    for (; ; )
                    {
                        bool isLastPath = false;
                        bool isFirstSubRegion = true;
                        for (; ; )
                        {
                            const unsigned raw_flatOffset = parse7bit_7Yz9(chars, offset);
                            const bool isLastSubRegion = !(raw_flatOffset & 1u);
                            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(chars, offset) : 3u);
                            isLastPath = !(raw_flatCount & 1u);
                            if (isLastSubRegion)
                                break;
                            else
                                isFirstSubRegion = false;

                        };
                        if (isLastPath)
                            break;

                    };
                    BL_5_v = (offset0);
                    (void)0;
                }), BL_5_v);
                fu::view<char> paths = fu::get_view(chars, sr, offset);
                int offset_1 = 0;
                for (; ; )
                {
                    bool isLastPath = false;
                    bool isFirstSubRegion = true;
                    for (; ; )
                    {
                        const unsigned raw_flatOffset = parse7bit_7Yz9(paths, offset_1);
                        const bool isLastSubRegion = !(raw_flatOffset & 1u);
                        const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(paths, offset_1) : 3u);
                        isLastPath = !(raw_flatCount & 1u);
                        const int flatCount_1 = int((raw_flatCount >> 1u));
                        if (isLastSubRegion)
                        {
                            if (flatCount_1 > q_USAGE_bitsize)
                            {
                                return Lifetime_llCF(lt);
                            }
                            else if ((flatCount_1 >= flatCount))
                            {
                                return Lifetime_op_field_7Yz9(lt, flatCount, flatOffset, ctx, _here);
                            }
                            else
                            {
                                BUG_u9Gb((x7E_rA00((x7E_rA00("Lifetime_op_mask: struct_flatCount("_view, fu::i64dec(flatCount_1)) + ") !>= flatCount("_view), fu::i64dec(flatCount)) + ")"_view), ctx, _here);
                            };
                        }
                        else
                            isFirstSubRegion = false;

                    };
                };
            };
        };
        BUG_u9Gb("Lifetime_op_mask: empty lifetime."_view, ctx, _here);
    }
    else
    {
        BUG_u9Gb((x7E_rA00((x7E_rA00((x7E_rA00((x7E_rA00((x7E_rA00("Lifetime_op_mask: flatCount("_view, fu::i64dec(flatCount)) + ") flatOffset("_view), fu::i64dec(flatOffset)) + ") clz("_view), fu::i64dec(clz)) + ") ctz("_view), fu::i64dec(ctz)) + ") usage("_view), fu::u64dec(usage)) + ")"_view), ctx, _here);
    };
}

                                #ifndef DEF_onSubRegion_7OsCDaQjIye
                                #define DEF_onSubRegion_7OsCDaQjIye
inline static void onSubRegion_7OsC(const bool child_isFirstSubRegion, const bool child_isLastSubRegion, const bool child_isLastPath, const int child_flatCount, const int child_flatOffset, const bool parent_isLastPath, const int parent_flatCount, const int parent_flatOffset, fu::view<char> parent_rawPrefix, fu::vec_range_mut<char> result, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (child_isFirstSubRegion)
        result += parent_rawPrefix;

    const int result_flatOffset = (!child_isFirstSubRegion ? child_flatOffset : (((child_flatOffset + child_flatCount) <= parent_flatCount) ? (child_flatOffset + parent_flatOffset) : BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("Lifetime_op_join: child_flatOffset("_view, fu::i64dec(child_flatOffset)) + ")"_view) + " + child_flatCount("_view), fu::i64dec(child_flatCount)) + ")"_view) + " !<= parent_flatCount("_view), fu::i64dec(parent_flatCount)) + ")"_view), ctx, _here)));
    const bool isLastPath = (!parent_isLastPath ? parent_isLastPath : child_isLastPath);
    if ((result_flatOffset >= 0) && (child_flatCount > 0) && (child_isLastSubRegion || (child_flatCount == 1)))
    {
        append7bit_7Yz9(result, ((unsigned(result_flatOffset) << 1u) | (child_isLastSubRegion ? 0u : 1u)));
        if (child_isLastSubRegion)
            append7bit_7Yz9(result, ((unsigned(child_flatCount) << 1u) | (isLastPath ? 0u : 1u)));

    }
    else
        BUG_u9Gb((x7E_rA00(((x7E_rA00(((x7E_rA00("appendSubRegion: flatCount("_view, fu::i64dec(child_flatCount)) + ")"_view) + " flatOffset("_view), fu::i64dec(result_flatOffset)) + ")"_view) + " isLastSubRegion("_view), fu::booldec(child_isLastSubRegion)) + ")"_view), ctx, _here);

}
                                #endif

                                #ifndef DEF_onLastSubRegion_ziwM7sLFBw9
                                #define DEF_onLastSubRegion_ziwM7sLFBw9
inline static void onLastSubRegion_ziwM(const bool parent_isLastPath, const int parent_flatCount, const int parent_flatOffset, fu::view<char> parent_rawPrefix, fu::vec_range_mut<char> result, fu::view<char> child, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    int _c0 = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit_7Yz9(child, _c0);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(child, _c0) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            onSubRegion_7OsC(isFirstSubRegion, isLastSubRegion, isLastPath, flatCount, flatOffset, parent_isLastPath, parent_flatCount, parent_flatOffset, parent_rawPrefix, result, ctx, _here);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(_c0 == child.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}
                                #endif

                                #ifndef DEF___ehTV0pLut4l
                                #define DEF___ehTV0pLut4l
inline static void _ehTV(fu::view<char> parent, fu::vec_range_mut<char> result, fu::view<char> child, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    int _p0 = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        const int path0 = _p0;
        for (; ; )
        {
            const int subregion0 = _p0;
            const unsigned raw_flatOffset = parse7bit_7Yz9(parent, _p0);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(parent, _p0) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            if (isLastSubRegion)
            {
                onLastSubRegion_ziwM(isLastPath, flatCount, flatOffset, fu::get_view(parent, path0, subregion0), result, child, ctx, _here);
                break;
            }
            else
                isFirstSubRegion = false;

        };
        if (isLastPath)
            break;

    };
    if (!(_p0 == parent.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

}
                                #endif

                                #ifndef DEF___uYlHOSMIgK2
                                #define DEF___uYlHOSMIgK2
inline static void _uYlH(fu::view<char> r_raw, fu::view<char> paths, const int locid, const int minPathDepth, fu::str& result, fu::view<char> child, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    result += r_raw;
    if (paths == SR_empty.ref)
        result += paths;
    else if (locid)
    {
        const int result0 = result.size();
        _ehTV(paths, result, child, ctx, _here);
        assertPathsValid_7Yz9(fu::get_view(result, result0), -1, -1, false, minPathDepth, ctx, _here);
    }
    else
    {
        BUG_u9Gb("Lifetime_op: non-locid non-x00x00 subregion."_view, ctx, _here);
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_fDGuXVrOa70
                                #define DEF_Lifetime_each_fDGuXVrOa70
inline void Lifetime_each_fDGu(const Lifetime_llCF& lifetime, const int minPathDepth, fu::str& result, fu::view<char> child, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const int offset0 = offset;
        const unsigned r = parse7bit_7Yz9(chars, offset);
        int offset0_1;
        int BL_3_v;
        const int sr = (__extension__ (
        {
            offset0_1 = (offset + 0);
            for (; ; )
            {
                bool isLastPath = false;
                bool isFirstSubRegion = true;
                for (; ; )
                {
                    const unsigned raw_flatOffset = parse7bit_7Yz9(chars, offset);
                    const bool isLastSubRegion = !(raw_flatOffset & 1u);
                    const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(chars, offset) : 3u);
                    isLastPath = !(raw_flatCount & 1u);
                    if (isLastSubRegion)
                        break;
                    else
                        isFirstSubRegion = false;

                };
                if (isLastPath)
                    break;

            };
            BL_3_v = (offset0_1);
            (void)0;
        }), BL_3_v);
        unsigned v;
        _uYlH(fu::get_view(chars, offset0, sr), fu::get_view(chars, sr, offset), ((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), minPathDepth, result, child, ctx, _here);
    };
}
                                #endif

Lifetime_llCF Lifetime_op_join_7Yz9(const Lifetime_llCF& lt, fu::view<char> child, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const int minPathDepth = 1;
    /*MOV*/ fu::str result {};
    Lifetime_each_fDGu(lt, minPathDepth, result, child, ctx, _here);
    return Lifetime_llCF { static_cast<fu::str&&>(result) };
}

                                #ifndef DEF_onPathStart_aBuIzFe5hYb
                                #define DEF_onPathStart_aBuIzFe5hYb
inline static void onPathStart_aBuI(fu::str& result)
{
    result += "\n\tPath:\n"_view;
}
                                #endif

                                #ifndef DEF_onSubRegion_m7FSm6F7R8g
                                #define DEF_onSubRegion_m7FSm6F7R8g
inline static void onSubRegion_m7FS(const int flatCount, const int flatOffset, const bool isFirstSubRegion, const bool isLastSubRegion, fu::str& result)
{
    result += (x7E_rA00((x7E_rA00((x7E_rA00("\t\tSubReg\t flatCount="_view, fu::i64dec(flatCount)) + " isFirstSubRegion="_view), fu::booldec(isFirstSubRegion)) + " isLastSubRegion="_view), fu::booldec(isLastSubRegion)) + "\n"_view);
    result += (x7E_rA00("\t\t\tflatOffset="_view, fu::i64dec(flatOffset)) + "\n"_view);
}
                                #endif

                                #ifndef DEF_onPathDone_b58IAFDbu5b
                                #define DEF_onPathDone_b58IAFDbu5b
inline static void onPathDone_b58I(const bool isLastPath, fu::str& result)
{
    result += x7E_rA00("\t/Path\tisLastPath="_view, fu::booldec(isLastPath));
}
                                #endif

fu::str printPaths_7Yz9(fu::view<char> str, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    /*MOV*/ fu::str result {};
    int _o = 0;
    for (; ; )
    {
        bool isLastPath = false;
        bool isFirstSubRegion = true;
        onPathStart_aBuI(result);
        for (; ; )
        {
            const unsigned raw_flatOffset = parse7bit_7Yz9(str, _o);
            const bool isLastSubRegion = !(raw_flatOffset & 1u);
            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit_7Yz9(str, _o) : 3u);
            isLastPath = !(raw_flatCount & 1u);
            const int flatCount = int((raw_flatCount >> 1u));
            const int flatOffset = int((raw_flatOffset >> 1u));
            onSubRegion_m7FS(flatCount, flatOffset, isFirstSubRegion, isLastSubRegion, result);
            if (isLastSubRegion)
                break;
            else
                isFirstSubRegion = false;

        };
        onPathDone_b58I(isLastPath, result);
        if (isLastPath)
            break;

    };
    if (!(_o == str.size()))
        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, ctx, _here);

    return /*NRVO*/ result;
}

#endif
