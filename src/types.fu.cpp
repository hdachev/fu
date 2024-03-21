#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct Type_KBIB;
struct ValueType_B8uC;
typedef fu::u8 VFacts_xhRf;
struct Lifetime_llCF;
struct TokenIdx_5b85;
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
fu::str serializeType_1qjp(const ValueType_B8uC&, fu::view<char>);
[[noreturn]] fu::never BUG_u9Gb(fu::view<char>, const TokenIdx_5b85&, const Context_UXD9&);
bool isCanonAssignable_Ot6w(fu::view<char>, fu::view<char>, const TokenIdx_5b85&, const Context_UXD9&);
void Lifetime_add_7Yz9(Lifetime_llCF&, const Lifetime_llCF&, bool, const TokenIdx_5b85&, const Context_UXD9&);
bool is_sliceable_hxWW(const ValueType_B8uC&);
Lifetime_llCF Lifetime_op_field_7Yz9(const Lifetime_llCF&, int, int, const TokenIdx_5b85&, const Context_UXD9&);
fu::str qQUALS_e44U(fu::view<char>);
fu::str qVFACTS_e44U(fu::view<char>);
Type_KBIB tryClear_sliceable_1qjp(const ValueType_B8uC&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
fu::vec_range<char> canon_trySuper_Ot6w(fu::vec_range<char>, fu::vec_range<char>, const TokenIdx_5b85&, const Context_UXD9&);
Type_KBIB type_trySuper_9CJm(const Type_KBIB&, const Type_KBIB&, bool, const TokenIdx_5b85&, const Context_UXD9&);
Lifetime_llCF Lifetime_union_7Yz9(const Lifetime_llCF&, const Lifetime_llCF&, bool, const TokenIdx_5b85&, const Context_UXD9&);
fu::vec_range<char> canon_tryIntersect_Ot6w(fu::vec_range<char>, fu::vec_range<char>, const TokenIdx_5b85&, const Context_UXD9&);
Lifetime_llCF Lifetime_inter_7Yz9(const Lifetime_llCF&, const Lifetime_llCF&, const TokenIdx_5b85&, const Context_UXD9&);
void appendLocalOrGlobal_xQNS(fu::vec_range_mut<char>, const Target_VZrr&);
void trimPattern_Ot6w(fu::vec_range_mut<char>);
unsigned parse7bit_7Yz9(fu::view<char>, int&);

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

                                #ifndef STR_Q1K0BNOSjWk
                                #define STR_Q1K0BNOSjWk
static const fu::str str_Q1K0BNOSjWk fu_INIT_PRIORITY(1009) { "i8"_fu };
                                #endif

                                #ifndef STR_9e92J9C60Ob
                                #define STR_9e92J9C60Ob
static const fu::str str_9e92J9C60Ob fu_INIT_PRIORITY(1009) { "i16"_fu };
                                #endif

                                #ifndef STR_K8KxoYxA7Xl
                                #define STR_K8KxoYxA7Xl
static const fu::str str_K8KxoYxA7Xl fu_INIT_PRIORITY(1009) { "i32"_fu };
                                #endif

                                #ifndef STR_nXBW7I7egP9
                                #define STR_nXBW7I7egP9
static const fu::str str_nXBW7I7egP9 fu_INIT_PRIORITY(1009) { "i64"_fu };
                                #endif

                                #ifndef STR_T4nNVV0oHGc
                                #define STR_T4nNVV0oHGc
static const fu::str str_T4nNVV0oHGc fu_INIT_PRIORITY(1009) { "i128"_fu };
                                #endif

                                #ifndef STR_YhTgzC21Rp2
                                #define STR_YhTgzC21Rp2
static const fu::str str_YhTgzC21Rp2 fu_INIT_PRIORITY(1009) { "u8"_fu };
                                #endif

                                #ifndef STR_2fAchhueS6b
                                #define STR_2fAchhueS6b
static const fu::str str_2fAchhueS6b fu_INIT_PRIORITY(1009) { "u16"_fu };
                                #endif

                                #ifndef STR_AXDdcKHr29k
                                #define STR_AXDdcKHr29k
static const fu::str str_AXDdcKHr29k fu_INIT_PRIORITY(1009) { "u32"_fu };
                                #endif

                                #ifndef STR_bDPbEUy6W2b
                                #define STR_bDPbEUy6W2b
static const fu::str str_bDPbEUy6W2b fu_INIT_PRIORITY(1009) { "u64"_fu };
                                #endif

                                #ifndef STR_BWBehL8bqk0
                                #define STR_BWBehL8bqk0
static const fu::str str_BWBehL8bqk0 fu_INIT_PRIORITY(1009) { "u128"_fu };
                                #endif

                                #ifndef STR_1QwvpsHdfu3
                                #define STR_1QwvpsHdfu3
static const fu::str str_1QwvpsHdfu3 fu_INIT_PRIORITY(1009) { "f32"_fu };
                                #endif

                                #ifndef STR_gz4KnAfW2Ug
                                #define STR_gz4KnAfW2Ug
static const fu::str str_gz4KnAfW2Ug fu_INIT_PRIORITY(1009) { "f64"_fu };
                                #endif

                                #ifndef STR_u0519LQuAo8
                                #define STR_u0519LQuAo8
static const fu::str str_u0519LQuAo8 fu_INIT_PRIORITY(1009) { "b8"_fu };
                                #endif

                                #ifndef STR_XY3l2WlaWSg
                                #define STR_XY3l2WlaWSg
static const fu::str str_XY3l2WlaWSg fu_INIT_PRIORITY(1009) { "c8"_fu };
                                #endif

                                #ifndef STR_KiGuEGIuqEg
                                #define STR_KiGuEGIuqEg
static const fu::str str_KiGuEGIuqEg fu_INIT_PRIORITY(1009) { "void"_fu };
                                #endif

                                #ifndef STR_scsjXZQ1yH3
                                #define STR_scsjXZQ1yH3
static const fu::str str_scsjXZQ1yH3 fu_INIT_PRIORITY(1009) { "never"_fu };
                                #endif

                                #ifndef STR_8HO0vFfS8Nh
                                #define STR_8HO0vFfS8Nh
static const fu::str str_8HO0vFfS8Nh fu_INIT_PRIORITY(1009) { "zeroes"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_q_TAGS_bitsize
                                #define DEF_q_TAGS_bitsize
inline constexpr int q_TAGS_bitsize = 3;
                                #endif

extern const unsigned q_non_compund = (unsigned(1) << unsigned(q_TAGS_bitsize));
extern const fu::vec<fu::str> TAGS fu_INIT_PRIORITY(1009) = fu::vec<fu::str> {{ fu::str("mutref"_fu), fu::str("copy"_fu), fu::str("resize"_fu) }};
extern const unsigned q_mutref;
extern const unsigned q_USAGE;
extern const unsigned RELAX_before_bck = (q_mutref | q_USAGE);
extern const unsigned q_TAGS;
extern const unsigned RELAX_all = (q_TAGS | q_USAGE);
extern const unsigned q_rx_copy;
Type_KBIB Primitive_9CJm(fu::vec_range<char> canon)
{
    return Type_KBIB { ValueType_B8uC { (q_rx_copy | q_non_compund), VFacts_xhRf{}, fu::str(canon) }, Lifetime_llCF{} };
}

extern const Type_KBIB t_i8 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_Q1K0BNOSjWk);
extern const Type_KBIB t_i16 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_9e92J9C60Ob);
extern const Type_KBIB t_i32 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_K8KxoYxA7Xl);
extern const Type_KBIB t_i64 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_nXBW7I7egP9);
extern const Type_KBIB t_i128 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_T4nNVV0oHGc);
extern const Type_KBIB t_u8 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_YhTgzC21Rp2);
extern const Type_KBIB t_u16 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_2fAchhueS6b);
extern const Type_KBIB t_u32 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_AXDdcKHr29k);
extern const Type_KBIB t_u64 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_bDPbEUy6W2b);
extern const Type_KBIB t_u128 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_BWBehL8bqk0);
extern const Type_KBIB t_f32 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_1QwvpsHdfu3);
extern const Type_KBIB t_f64 fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_gz4KnAfW2Ug);
extern const Type_KBIB t_bool fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_u0519LQuAo8);
extern const Type_KBIB t_byte fu_INIT_PRIORITY(1009) = Primitive_9CJm(str_XY3l2WlaWSg);
extern const Type_KBIB t_proposition fu_INIT_PRIORITY(1009) = Type_KBIB { ValueType_B8uC { q_USAGE, VFacts_xhRf{}, fu::str(t_bool.vtype.canon) }, Lifetime_llCF{} };
Type_KBIB NotSure_9CJm(fu::vec_range<char> canon, const unsigned quals)
{
    return Type_KBIB { ValueType_B8uC { quals, VFacts_xhRf{}, fu::str(canon) }, Lifetime_llCF{} };
}

extern const Type_KBIB t_void fu_INIT_PRIORITY(1009) = NotSure_9CJm(str_KiGuEGIuqEg, 0u);
extern const Type_KBIB t_never fu_INIT_PRIORITY(1009) = NotSure_9CJm(str_scsjXZQ1yH3, 0u);
extern const Type_KBIB t_zeroes fu_INIT_PRIORITY(1009) = NotSure_9CJm(str_8HO0vFfS8Nh, 0u);
extern const unsigned q_rx_resize;
extern const Type_KBIB t_AssumeNever_WhileSolvingRecursion fu_INIT_PRIORITY(1009) = NotSure_9CJm(str_scsjXZQ1yH3, q_rx_resize);
                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
inline constexpr bool CANNOT_definit_mutrefs = true;
                                #endif

Type_KBIB createArray_9CJm(const Type_KBIB& item)
{
    /*MOV*/ fu::str canon = (("["_view + serializeType_1qjp(item.vtype, "createArray"_view)) + "]"_view);
    const unsigned quals = (((item.vtype.quals & q_rx_copy) | q_rx_resize) | q_non_compund);
    return Type_KBIB { ValueType_B8uC { quals, VFacts_xhRf{}, canon.destructive_move() }, Lifetime_llCF(item.lifetime) };
}

extern const Type_KBIB t_string fu_INIT_PRIORITY(1009) = createArray_9CJm(t_byte);
extern const Lifetime_llCF Lifetime_static_immoveable;
Type_KBIB set_lifetime_9CJm(/*MOV*/ Type_KBIB&& type, const Lifetime_llCF& lifetime)
{
    type.lifetime = lifetime;
    return static_cast<Type_KBIB&&>(type);
}

extern const Type_KBIB t_string_literal fu_INIT_PRIORITY(1009) = set_lifetime_9CJm(Type_KBIB(t_string), Lifetime_static_immoveable);
                                #ifndef DEF_str_pB7BLRNZv8f
                                #define DEF_str_pB7BLRNZv8f
inline fu::str str_pB7B(const VFacts_xhRf n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & VFacts_xhRf_AlwaysTrue)
            res += ("AlwaysTrue"_view + ", "_view);

        if (n & VFacts_xhRf_AlwaysFalse)
            res += ("AlwaysFalse"_view + ", "_view);

        if (n & VFacts_xhRf_Typename)
            res += ("Typename"_view + ", "_view);

        if (n & VFacts_xhRf_LeftAligned)
            res += ("LeftAligned"_view + ", "_view);

        if (n & VFacts_xhRf_RightAligned)
            res += ("RightAligned"_view + ", "_view);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
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

bool propositionOK_9CJm(const Type_KBIB& type, const bool vfactsOK, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if (!vfactsOK && type.vtype.vfacts)
        BUG_u9Gb(x7E_rA00("propositionOK seeing vfacts: "_view, str_pB7B(type.vtype.vfacts)), _here, ctx);
    else if (!type.lifetime)
        return type.vtype.canon == t_bool.vtype.canon;
    else
        return false;

}

bool is_void_9CJm(const ValueType_B8uC& t)
{
    return t.canon == t_void.vtype.canon;
}

bool is_never_9CJm(const ValueType_B8uC& t)
{
    return t.canon == t_never.vtype.canon;
}

bool is_zeroes_9CJm(const ValueType_B8uC& t)
{
    return t.canon == t_zeroes.vtype.canon;
}

bool is_void_or_propositionOK_9CJm(const Type_KBIB& type, const bool vfactsOK, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    return propositionOK_9CJm(type, vfactsOK, _here, ctx) || is_void_9CJm(type.vtype);
}

unsigned is_AssumeNever_WhileSolvingRecursion_9CJm(const ValueType_B8uC& t)
{
    if (t.canon == "never"_view)
        return t.quals & q_rx_resize;
    else
        return 0u;

}

bool is_rx_copy_9CJm(const ValueType_B8uC& t)
{
    return !!(t.quals & q_rx_copy);
}

bool is_rx_resize_9CJm(const ValueType_B8uC& t)
{
    return !!(t.quals & q_rx_copy);
}

bool areVFactsAssignable_9CJm(const VFacts_xhRf host, const VFacts_xhRf guest, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{

    {
        const VFacts_xhRf h = VFacts_xhRf((host & VFacts_xhRf(~VFacts_xhRf_Typename)));
        const VFacts_xhRf g = VFacts_xhRf((guest & VFacts_xhRf(~VFacts_xhRf_Typename)));
        if (!(VFacts_xhRf((h & g)) == h))
            BUG_u9Gb(x7E_rA00((x7E_rA00("areVFactsAssignable: vfacts mismatch: "_view, str_pB7B(host)) + " != "_view), str_pB7B(guest)), _here, ctx);

    };
    return VFacts_xhRf((host & guest)) == host;
}

bool areQualsAssignable_9CJm(const unsigned host, const unsigned guest)
{
    return (host & guest) == host;
}

bool isAssignableAsArgument_9CJm(const ValueType_B8uC& host, const ValueType_B8uC& guest, const bool DONT_match_zeroes, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if (host && guest)
        return areVFactsAssignable_9CJm(host.vfacts, guest.vfacts, _here, ctx) && ((areQualsAssignable_9CJm(host.quals, guest.quals) && isCanonAssignable_Ot6w(host.canon, guest.canon, _here, ctx)) || (!DONT_match_zeroes && is_zeroes_9CJm(guest) && !(host.quals & q_mutref) && !is_never_9CJm(host)));
    else
        BUG_u9Gb("isAssignableAsArgument: !host || !guest"_view, _here, ctx);

}

bool isLifetimeAssignable_9CJm(const Lifetime_llCF& host, const Lifetime_llCF& guest)
{
    return !host || !!guest;
}

bool isAssignable_9CJm(const Type_KBIB& host, const Type_KBIB& guest, const bool DONT_match_zeroes, const bool asArgument, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    return isAssignableAsArgument_9CJm(host.vtype, guest.vtype, DONT_match_zeroes, _here, ctx) && (asArgument || isLifetimeAssignable_9CJm(host.lifetime, guest.lifetime));
}

bool is_ref_9CJm(const Type_KBIB& type)
{
    return !!type.lifetime;
}

bool is_mutref_9CJm(const Type_KBIB& type, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    const bool is_mutref = !!(type.vtype.quals & q_mutref);
    if (is_mutref && !is_ref_9CJm(type))
    {
        BUG_u9Gb("is_mutref: Empty lifetime, but q_mutref set"_view, _here, ctx);
    }
    else
        return is_mutref;

}

Type_KBIB add_ref_9CJm(/*MOV*/ Type_KBIB&& type, const Lifetime_llCF& lifetime, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    Lifetime_add_7Yz9(type.lifetime, lifetime, false, _here, ctx);
    if (type.lifetime)
        return static_cast<Type_KBIB&&>(type);
    else
    {
        BUG_u9Gb("add_ref: Empty lifetime"_view, _here, ctx);
    };
}

Type_KBIB add_mutref_9CJm(/*MOV*/ Type_KBIB&& type, const Lifetime_llCF& lifetime, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    type.vtype.quals |= q_mutref;
    Lifetime_add_7Yz9(type.lifetime, lifetime, false, _here, ctx);
    if (type.lifetime)
        return static_cast<Type_KBIB&&>(type);
    else
    {
        BUG_u9Gb("add_mutref: Empty lifetime"_view, _here, ctx);
    };
}

extern const Lifetime_llCF Lifetime_temporary;
void ref_anonymize_9CJm(Type_KBIB& type)
{
    if (is_ref_9CJm(type))
    {
        type.lifetime = Lifetime_temporary;
    };
}

Type_KBIB clear_vfacts_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type.vtype.vfacts = VFacts_xhRf{};
    return static_cast<Type_KBIB&&>(type);
}

Type_KBIB clear_refs_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type.vtype.quals &= ~q_mutref;
    type.lifetime = Lifetime_llCF{};
    return static_cast<Type_KBIB&&>(type);
}

Type_KBIB clear_mutref_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type.vtype.quals &= ~q_mutref;
    return static_cast<Type_KBIB&&>(type);
}

extern const Lifetime_llCF Lifetime_static_moveable;
Type_KBIB definitType_9CJm(/*MOV*/ Type_KBIB&& type, const bool asTypename, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if (!type || is_never_9CJm(type.vtype))
        type = t_zeroes;

    type.vtype.quals &= ~q_mutref;
    if (is_ref_9CJm(type))
    {
        type.lifetime = Lifetime_static_moveable;
    };
    if (is_never_9CJm(type.vtype))
        BUG_u9Gb("Cannot definit type never."_view, _here, ctx);
    else
    {
        type.vtype.vfacts = VFacts_xhRf((VFacts_xhRf_AlwaysFalse | (asTypename ? VFacts_xhRf_Typename : VFacts_xhRf{})));
        if (is_sliceable_hxWW(type.vtype))
            type.vtype.vfacts |= VFacts_xhRf((VFacts_xhRf_LeftAligned | VFacts_xhRf_RightAligned));

        return static_cast<Type_KBIB&&>(type);
    };
}

Type_KBIB tryClearRefs_9CJm(const Type_KBIB& type, const bool mutref, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if ((mutref ? is_mutref_9CJm(type, _here, ctx) : is_ref_9CJm(type)))
        return clear_refs_9CJm(Type_KBIB(type));
    else
    {
        return Type_KBIB{};
    };
}

Type_KBIB tryClear_mutref_9CJm(const Type_KBIB& type, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    return tryClearRefs_9CJm(type, true, _here, ctx);
}

Type_KBIB tryClear_ref_9CJm(const Type_KBIB& type, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    return tryClearRefs_9CJm(type, false, _here, ctx);
}

Type_KBIB make_field_reference_9CJm(const unsigned quals, const Lifetime_llCF& lifetime, /*MOV*/ Type_KBIB&& to, const int memberFlatOffset, const int memberFlatCount, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    to.vtype.quals |= (quals & q_mutref);
    Lifetime_add_7Yz9(to.lifetime, Lifetime_op_field_7Yz9(lifetime, memberFlatCount, memberFlatOffset, _here, ctx), false, _here, ctx);
    if (is_sliceable_hxWW(to.vtype))
        to.vtype.vfacts |= VFacts_xhRf((VFacts_xhRf_LeftAligned | VFacts_xhRf_RightAligned));

    return static_cast<Type_KBIB&&>(to);
}

Type_KBIB make_copyable_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type.vtype.quals |= q_rx_copy;
    return static_cast<Type_KBIB&&>(type);
}

Type_KBIB make_non_copyable_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type.vtype.quals &= ~q_rx_copy;
    return static_cast<Type_KBIB&&>(type);
}

bool is_rx_move_9CJm(const Type_KBIB& type)
{
    if (is_sliceable_hxWW(type.vtype))
        return !!(type.vtype.quals & q_rx_resize);
    else
        return true;

}

Type_KBIB make_moveable_9CJm(/*MOV*/ Type_KBIB&& type)
{
    if (is_sliceable_hxWW(type.vtype))
        type.vtype.quals |= q_rx_resize;

    return static_cast<Type_KBIB&&>(type);
}

fu::str explainQuals_9CJm(const unsigned quals, const Lifetime_llCF& lifetime)
{
    /*MOV*/ fu::str result {};
    if (!(quals & q_rx_copy))
        result += (qQUALS_e44U("nocopy"_view) + ' ');

    if (quals & q_mutref)
        result += (qQUALS_e44U("mut"_view) + ' ');
    else if (lifetime)
        result += (qQUALS_e44U("const"_view) + ' ');

    if (lifetime || (quals & q_mutref))
        result += (qQUALS_e44U("ref"_view) + ' ');

    return /*NRVO*/ result;
}

fu::str explainVFacts_9CJm(const VFacts_xhRf vfacts)
{
    /*MOV*/ fu::str result {};
    if (vfacts & VFacts_xhRf_AlwaysTrue)
        result += (qVFACTS_e44U("always-true"_view) + ' ');

    if (vfacts & VFacts_xhRf_AlwaysFalse)
        result += (qVFACTS_e44U("always-false"_view) + ' ');

    if (vfacts & VFacts_xhRf_Typename)
        result += (qVFACTS_e44U("type"_view) + ' ');

    return /*NRVO*/ result;
}

Type_KBIB createSlice_9CJm(const Type_KBIB& item, const Lifetime_llCF& lifetime, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    /*MOV*/ Type_KBIB out = createArray_9CJm(item);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref_9CJm(static_cast<Type_KBIB&&>(out), lifetime, _here, ctx);
}

Type_KBIB tryClear_array_9CJm(const Type_KBIB& type, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if ((type.vtype.quals & q_rx_resize) != q_rx_resize)
    {
        return Type_KBIB{};
    }
    else
        return tryClear_sliceable_1qjp(type.vtype, _here, ctx, module);

}

bool TODO_FIX_isArray_9CJm(const Type_KBIB& type)
{
    return (type.vtype.quals & (q_rx_resize | q_rx_copy)) && is_sliceable_hxWW(type.vtype);
}

Type_KBIB type_trySuper_9CJm(const Type_KBIB& a, const Type_KBIB& b, const bool DONT_match_zeroes, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    fu::vec_range<char> canon = canon_trySuper_Ot6w(a.vtype.canon, b.vtype.canon, _here, ctx);
    if (!canon)
    {
        if (is_zeroes_9CJm(a.vtype) && !DONT_match_zeroes)
            return type_trySuper_9CJm(b, definitType_9CJm(Type_KBIB(b), true, _here, ctx), false, _here, ctx);
        else if (is_zeroes_9CJm(b.vtype) && !DONT_match_zeroes)
            return type_trySuper_9CJm(a, definitType_9CJm(Type_KBIB(a), true, _here, ctx), false, _here, ctx);
        else
        {
            return Type_KBIB{};
        };
    }
    else
    {
        const unsigned quals = (a.vtype.quals & b.vtype.quals);
        const VFacts_xhRf vfacts = VFacts_xhRf((a.vtype.vfacts & b.vtype.vfacts));
        /*MOV*/ Lifetime_llCF lifetime = ((a.lifetime && b.lifetime) ? Lifetime_union_7Yz9(a.lifetime, b.lifetime, false, _here, ctx) : Lifetime_llCF{});
        return Type_KBIB { ValueType_B8uC { quals, vfacts, fu::str(canon) }, static_cast<Lifetime_llCF&&>(lifetime) };
    };
}

Type_KBIB type_tryIntersect_9CJm(const Type_KBIB& a, const Type_KBIB& b, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    fu::vec_range<char> canon = canon_tryIntersect_Ot6w(a.vtype.canon, b.vtype.canon, _here, ctx);
    if (!canon)
    {
        return Type_KBIB{};
    }
    else
    {
        const unsigned quals = (a.vtype.quals | b.vtype.quals);
        const VFacts_xhRf vfacts = VFacts_xhRf((a.vtype.vfacts | b.vtype.vfacts));
        /*MOV*/ Lifetime_llCF lifetime = Lifetime_inter_7Yz9(a.lifetime, b.lifetime, _here, ctx);
        if (!lifetime && (a.lifetime || b.lifetime))
        {
            return Type_KBIB{};
        }
        else
        {
            return Type_KBIB { ValueType_B8uC { quals, vfacts, fu::str(canon) }, static_cast<Lifetime_llCF&&>(lifetime) };
        };
    };
}

                                #ifndef DEF_starts_SfbfOAVfSee
                                #define DEF_starts_SfbfOAVfSee
inline bool starts_Sfbf(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isAddrOfFn_9CJm(const Type_KBIB& type)
{
    return starts_Sfbf(type.vtype.canon, '@');
}

fu::str packAddrOfFn_9CJm(fu::view<Target_VZrr> targets)
{
    /*MOV*/ fu::str res = fu::str("@"_fu);
    for (int i = 0; i < targets.size(); i++)
        appendLocalOrGlobal_xQNS(res, targets[i]);

    return /*NRVO*/ res;
}

unsigned speculateStruct_9CJm(const DeclAsserts_taUG asserts, const int flatCount)
{
    return (!DeclAsserts_taUG((asserts & DeclAsserts_taUG_A_NOCOPY)) ? q_rx_copy : 0u) | ((flatCount != -1) ? q_non_compund : 0u);
}

Type_KBIB despeculateStruct_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type.vtype.quals &= ~(q_rx_copy | q_USAGE);
    type.vtype.vfacts = VFacts_xhRf{};
    trimPattern_Ot6w(type.vtype.canon);
    return static_cast<Type_KBIB&&>(type);
}

unsigned will_relax_9CJm(const Type_KBIB& type, const Type_KBIB& slot, const unsigned relax_mask)
{
    return (type.vtype.quals & ~slot.vtype.quals) & relax_mask;
}

unsigned try_relax_9CJm(Type_KBIB& type, const Type_KBIB& slot, const unsigned relax_mask)
{
    const unsigned will_relax = will_relax_9CJm(type, slot, relax_mask);
    type.vtype.quals &= ~will_relax;
    return will_relax;
}

void force_relax_9CJm(Type_KBIB& type, const unsigned relax_mask)
{
    type.vtype.quals &= ~relax_mask;
}

unsigned mask_retval_relaxable_9CJm(const Type_KBIB& type, const unsigned relaxed_quals, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    bool returnsFromArgument = false;
    bool withoutDereferences = false;

    { {

        {
            const Lifetime_llCF& lifetime = type.lifetime;
            fu::view<char> chars = lifetime.uni0n;
            int offset = 0;
            while (offset < chars.size())
            {
                const unsigned r = parse7bit_7Yz9(chars, offset);
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
                const bool isArgIdx = ((r & 3u) == 3u);
                fu::view<char> paths = fu::get_view(chars, sr, offset);
                if (!(!isArgIdx))
                {
                    returnsFromArgument = true;
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
                            if (isLastSubRegion)
                            {

                                {
                                    const bool isFirstSubRegion_1 = isFirstSubRegion;
                                    if (!(!isFirstSubRegion_1))
                                    {
                                        withoutDereferences = true;
                                        goto BL_1;
                                    };
                                };
                                break;
                            }
                            else
                                isFirstSubRegion = false;

                        };
                        if (isLastPath)
                            break;

                    };
                    if (!(offset_1 == paths.size()))
                        BUG_u9Gb("walkPaths(!tailOK): excess bytes"_view, _here, ctx);

                };
            };
        };
        if (!returnsFromArgument)
            return 0u;

      } BL_1:;
    };
    const unsigned decay = (withoutDereferences ? (type.vtype.quals & (q_rx_copy | q_rx_resize)) : 0u);
    return (relaxed_quals & q_mutref) | (((relaxed_quals & decay) == decay) ? decay : 0u);
}

Type_KBIB into_Typename_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type = clear_refs_9CJm(Type_KBIB(type));
    type.vtype.vfacts = VFacts_xhRf_Typename;
    return static_cast<Type_KBIB&&>(type);
}

Type_KBIB relax_typeParam_9CJm(/*MOV*/ Type_KBIB&& type)
{
    return into_Typename_9CJm(static_cast<Type_KBIB&&>(type));
}

Type_KBIB clear_Typename_9CJm(/*MOV*/ Type_KBIB&& type)
{
    type.vtype.vfacts &= VFacts_xhRf(~VFacts_xhRf_Typename);
    return static_cast<Type_KBIB&&>(type);
}

bool is_Typename_9CJm(const Type_KBIB& type)
{
    return !!VFacts_xhRf((type.vtype.vfacts & VFacts_xhRf_Typename));
}

bool isIrrelevant_9CJm(const Type_KBIB& type)
{
    const ValueType_B8uC* type_1;
    if (!(type_1 = &(type.vtype), ((*type_1).quals & q_USAGE)))
        return !is_never_9CJm(type.vtype);
    else
        return false;

}

extern const int q_USAGE_bitsize;
bool USAGE_justOneThing_9CJm(const unsigned usage, const int flatCount)
{
    if ((flatCount <= q_USAGE_bitsize))
        return __builtin_popcount(usage) == 1;
    else
        return false;

}

#endif
