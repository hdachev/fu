#include <cstdint>
#include <errno.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct Struct_LDkB;
enum Kind_Idfg: fu::u8;
struct Target_VZrr;
struct ScopeItem_xiLD;
struct Set_qOJY;
struct Shape_fvCX;
struct Module_wo7O;
struct ModuleInputs_iQIg;
struct LexerOutput_DN4p;
struct Token_6M7a;
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
struct Context_noPA;
struct NukeOnRebuild_TLE7;
struct Map_Umhk;
struct StructCanon_TixV;
struct Map_Umhk;
struct Set_XshD;
typedef int Errno_88RA;
StructCanon_TixV parseStructCanon_p1TN(fu::view<char>);
[[noreturn]] fu::never BUG_u9Gb(fu::view<char>, const Context_noPA&, const TokenIdx_5581&);
int64_t size_VWJw(fu::str&&);
fu::vec_range<char> dirname_qZI0(fu::vec_range<char>);
fu::str resolveFile_1qjp(fu::vec_range<char>, fu::view<char>, Context_noPA&);
fu::str lower_KPhi(fu::str&&);
Errno_88RA read_VWJw(fu::str&&, fu::vec_range_mut<char>, int64_t);
bool is_primitive_hxWW(const ValueType_JtNg&);
bool isStruct_p1TN(const ValueType_JtNg&);
int basePrimPrefixLen_hxWW(fu::view<char>);
bool is_sliceable_hxWW(const ValueType_JtNg&);
unsigned parseVarint_V5Iu(int&, fu::view<char>);
unsigned getMaxUsage_CaGD(int);
Shape_fvCX getShape_1qjp(const ValueType_JtNg&, const Context_noPA&, const TokenIdx_5581&, const Module_wo7O&);
void appendVarint_V5Iu(fu::vec_range_mut<char>, unsigned);

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

                                #ifndef DEF_StructCanon_TixVhPbpah2
                                #define DEF_StructCanon_TixVhPbpah2
struct StructCanon_TixV
{
    int modid;
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || index
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

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
                                #endif

                                #ifndef STR_DtiAaUK6319
                                #define STR_DtiAaUK6319
static const fu::str str_DtiAaUK6319 fu_INIT_PRIORITY(1008) { "\v"_fu };
                                #endif

                                #ifndef STR_jE83FbiGwHf
                                #define STR_jE83FbiGwHf
static const fu::str str_jE83FbiGwHf fu_INIT_PRIORITY(1008) { "setModule: module.fname mismatch"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

Struct_LDkB& lookupUserType_mut_1qjp(fu::view<char> canon, Module_wo7O& module, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const StructCanon_TixV scp = parseStructCanon_p1TN(canon);
    if (scp.modid == module.modid)
        return module.out.types.mutref(scp.index);
    else
        BUG_u9Gb((((x7E_rA00("lookupUserType_mut: Not from this module ("_view, fu::i64dec(module.modid)) + ": "_view) + canon) + ")"_view), ctx, _here);

}

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

                                #ifndef DEF_find_rkz0SQgq7mk
                                #define DEF_find_rkz0SQgq7mk
inline int find_rkz0(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_ZKsG(slice, needle);
    return res + ((res < 0) ? 0 : start);
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

                                #ifndef DEF_ends_OW45P9GlDid
                                #define DEF_ends_OW45P9GlDid
inline bool ends_OW45(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_has_Mnu2KTFEuhg
                                #define DEF_has_Mnu2KTFEuhg
inline bool has_Mnu2(fu::view<char> a, const char b)
{
    return (find_ZKsG(a, b) >= 0);
}
                                #endif

                                #ifndef DEF_get_j2w8Kciyc69
                                #define DEF_get_j2w8Kciyc69
inline fu::vec_range<char> get_j2w8(const Set_XshD& _, fu::view<char> key, fu::view<fu::str> values)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_j5CR(keys_asc[i], key);
        if (cmp == 0)
            return values[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return fu::vec_range<char>{};
}
                                #endif

                                #ifndef DEF_get_5pgj1aqK0X8
                                #define DEF_get_5pgj1aqK0X8
inline fu::vec_range<char> get_5pgj(const Map_Umhk& _, fu::view<char> key)
{
    return get_j2w8(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_ends_L30JVW8oAb6
                                #define DEF_ends_L30JVW8oAb6
inline bool ends_L30J(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static fu::str tryResolve_1qjp(fu::vec_range<char> from, fu::view<char> name, fu::vec_range<char> path, Context_noPA& ctx)
{

    {
        const bool exists = (size_VWJw(fu::str(path)) >= 0ll);
        if (exists)
            return fu::str(path);

    };
    fu::vec_range<char> fallback = dirname_qZI0(from);
    if (!fallback || (fallback.size() >= from.size()))
    {
        if (ends_L30J(ctx.fudir, '/'))
        {
            /*MOV*/ fu::str path_1 = ((ctx.fudir + "lib/"_view) + name);
            const bool exists = (size_VWJw(fu::str(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };
        return fu::str{};
    }
    else
        return resolveFile_1qjp(fallback, name, ctx);

}

                                #ifndef DEF_update_4eD3mgcdj0d
                                #define DEF_update_4eD3mgcdj0d
inline bool update_4eD3(Set_XshD& _, fu::vec_range<char> key, fu::vec_range_mut<fu::str> values, fu::vec_range<char> value)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_j5CR(keys_asc[i], key);
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

                                #ifndef DEF_set_Z3RqyEN8Quh
                                #define DEF_set_Z3RqyEN8Quh
inline bool set_Z3Rq(Map_Umhk& _, fu::vec_range<char> key, fu::vec_range<char> value)
{
    return update_4eD3(_.keys, key, _.vals, value);
}
                                #endif

fu::str resolveFile_1qjp(fu::vec_range<char> from, fu::view<char> name, Context_noPA& ctx)
{
    fu::str path = (from + name);
    fu::vec_range<char> cached = get_5pgj(ctx.nuke.fuzzy, path);
    if (cached)
    {
        if (cached == "\v"_view)
        {
            return fu::str{};
        }
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str resolve = tryResolve_1qjp(from, name, path, ctx);
        set_Z3Rq(ctx.nuke.fuzzy, path, (resolve ? resolve : str_DtiAaUK6319));
        return /*NRVO*/ resolve;
    };
}

                                #ifndef DEF_run_LkrqAdAzGqa
                                #define DEF_run_LkrqAdAzGqa
inline static fu::str run_Lkrq(fu::vec_range<char> from, fu::view<char> name, fu::view<char> alt, fu::view<char> nested, Context_noPA& ctx)
{
    fu::str _0 {};
    return (_0 = resolveFile_1qjp(from, name, ctx)) ? static_cast<fu::str&&>(_0) : (_0 = (nested ? resolveFile_1qjp(from, nested, ctx) : fu::str{})) ? static_cast<fu::str&&>(_0) : (alt ? resolveFile_1qjp(from, alt, ctx) : fu::str{});
}
                                #endif

                                #ifndef DEF_has_lCh8tkV5B3h
                                #define DEF_has_lCh8tkV5B3h
inline bool has_lCh8(const Set_XshD& _, fu::view<char> key)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_j5CR(keys_asc[i], key);
        if (cmp == 0)
            return true;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_has_xfOV9zG38Nf
                                #define DEF_has_xfOV9zG38Nf
inline bool has_xfOV(const Map_Umhk& _, fu::view<char> key)
{
    return has_lCh8(_.keys, key);
}
                                #endif

fu::str testSuite_resolvePrepopulatedFile_1qjp(fu::view<char> from, fu::view<char> name, const Context_noPA& ctx)
{
    /*MOV*/ fu::str prepopulated = (from + name);
    if (has_xfOV(ctx.nuke.files, prepopulated))
        return /*NRVO*/ prepopulated;
    else
    {
        return fu::str{};
    };
}

                                #ifndef DEF_run_oTIHBx8TBW7
                                #define DEF_run_oTIHBx8TBW7
inline static fu::str run_oTIH(fu::view<char> from, fu::view<char> name, fu::view<char> alt, fu::view<char> nested, const Context_noPA& ctx)
{
    fu::str _0 {};
    return (_0 = testSuite_resolvePrepopulatedFile_1qjp(from, name, ctx)) ? static_cast<fu::str&&>(_0) : (_0 = (nested ? testSuite_resolvePrepopulatedFile_1qjp(from, nested, ctx) : fu::str{})) ? static_cast<fu::str&&>(_0) : (alt ? testSuite_resolvePrepopulatedFile_1qjp(from, alt, ctx) : fu::str{});
}
                                #endif

fu::str resolveFile_SqDq(fu::vec_range<char> path, Context_noPA& ctx)
{
    const int fuz_idx = find_ZKsG(path, '\v');
    if ((fuz_idx > 0) && (fuz_idx < (path.size() - 1)) && (find_rkz0(path, '\v', (fuz_idx + 1)) < 0))
    {
        fu::vec_range<char> from = fu::get_range(path, 0, fuz_idx);
        fu::str name = fu::str(fu::get_range(path, (fuz_idx + 1)));
        fu::str alt {};
        fu::str nested {};
        if (!ends_OW45(name, ".fu"_view))
        {
            const int alt_idx = find_ZKsG(name, '\t');
            if ((alt_idx > 0) && (alt_idx < (name.size() - 1)) && (find_rkz0(name, '\t', (alt_idx + 1)) < 0))
            {
                alt = (((fu::get_view_start0(name, alt_idx) + '/') + fu::get_view(name, (alt_idx + 1))) + ".fu"_view);
                name.shrink(alt_idx);
            };
            nested = (((name + '/') + name) + ".fu"_view);
            name += ".fu"_view;
        };
        fu_ASSERT(((from && name) ? !has_Mnu2(name, '\v') : false));
        fu::str _0 {};
        /*MOV*/ fu::str file = ((_0 = run_Lkrq(from, name, alt, nested, ctx)) ? static_cast<fu::str&&>(_0) : run_oTIH(from, name, alt, nested, ctx));
        if (file)
            return /*NRVO*/ file;

    };
    return fu::str(path);
}

void setFile_1qjp(Map_Umhk& files, fu::vec_range<char> path, fu::vec_range<char> data)
{
    if (data)
    {
        fu::str caseless = (lower_KPhi(fu::str(path)) + '\x00');
        fu::view<char> exists = get_5pgj(files, caseless);
        if (exists)
        {
            fu::fail(((((("Two paths differing only in capitalization were accessed:"_view + "\n\n\t"_view) + path) + "\n\n\t"_view) + exists) + "\n\n\tThis creates confusion on case insensitive file systems."_view));
        }
        else
            set_Z3Rq(files, caseless, path);

    };
    set_Z3Rq(files, path, (data ? data : str_DtiAaUK6319));
}

fu::str getFile_1qjp(fu::vec_range<char> path, Context_noPA& ctx)
{
    fu::vec_range<char> cached = get_5pgj(ctx.nuke.files, path);
    if (cached)
    {
        if (cached == "\v"_view)
        {
            return fu::str{};
        }
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str data {};
        const Errno_88RA err = read_VWJw(fu::str(path), data, 0ll);
        if (err && (err != ENOENT))
            fu::fail((x7E_rA00((("getFile: path("_view + path) + ") err("_view), fu::i64dec(err)) + ")"_view));
        else
        {
            setFile_1qjp(ctx.nuke.files, path, data);
            return /*NRVO*/ data;
        };
    };
}

Module_wo7O& getModule_1qjp(fu::vec_range<char> fname, Context_noPA& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname)
            return ctx.modules.mutref(i);

    };
    const int i_1 = ctx.modules.size();
    ctx.modules.push(Module_wo7O { i_1, fu::str(fname), ModuleInputs_iQIg{}, ModuleOrder_HMNg{}, ModuleOutputs_WMGM{}, ModuleStats_ANTR{}, Profile_4UPJ{} });
    return ctx.modules.mutref(i_1);
}

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

void setModule_1qjp(const Module_wo7O& module, Context_noPA& ctx)
{
    Module_wo7O& current = ctx.modules.mutref(module.modid);
    if (current.fname == module.fname)
        current = clone_bLLK(module);
    else
        fu::fail(fu::str(str_jE83FbiGwHf));

}

                                #ifndef DEF_x21x3D_ZDMfM5XjHla
                                #define DEF_x21x3D_ZDMfM5XjHla
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_j5CR(a, b);
}
                                #endif

bool updateFile_1qjp(fu::vec_range<char> fname, const NukeOnRebuild_TLE7& old, Context_noPA& ctx)
{
    fu::view<char> expect = get_5pgj(old.files, fname);
    fu::str _0 {};
    fu::str actual = ((_0 = getFile_1qjp(fname, ctx)) ? static_cast<fu::str&&>(_0) : fu::str("\v"_fu));
    return expect != actual;
}

const Struct_LDkB& lookupUserType_1qjp(const StructCanon_TixV& scp, const Module_wo7O& module, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    if (scp.modid == module.modid)
    {
        const Struct_LDkB* _0;
        return *(_0 = &(module.out.types[scp.index])) ? *_0 : BUG_u9Gb(fu::view<char>{}, ctx, _here);
    }
    else
    {
        const Struct_LDkB* _1;
        return *(_1 = &(ctx.modules[scp.modid].out.types[scp.index])) ? *_1 : BUG_u9Gb(fu::view<char>{}, ctx, _here);
    };
}

const Struct_LDkB& lookupUserType_SqDq(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    return lookupUserType_1qjp(parseStructCanon_p1TN(type.canon), module, ctx, _here);
}

bool is_trivial_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    return is_primitive_hxWW(type) || (isStruct_p1TN(type) ? !lookupUserType_SqDq(type, ctx, _here, module).shape.non_triv_mask : false);
}

bool is_reinterpretable_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    return is_trivial_1qjp(type, ctx, _here, module);
}

StructCanon_TixV tryParseStructCanon_1qjp(const ValueType_JtNg& type)
{
    if (isStruct_p1TN(type) || (is_primitive_hxWW(type) ? (basePrimPrefixLen_hxWW(type.canon) < type.canon.size()) : false))
        return parseStructCanon_p1TN(type.canon);
    else
    {
        return StructCanon_TixV{};
    };
}

const Struct_LDkB& tryLookupUserType_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    if (isStruct_p1TN(type) || (is_primitive_hxWW(type) ? (basePrimPrefixLen_hxWW(type.canon) < type.canon.size()) : false))
        return lookupUserType_SqDq(type, ctx, _here, module);
    else
        return (*(Struct_LDkB*)fu::NIL);

}

const Set_qOJY& lookupTypeImports_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    return tryLookupUserType_1qjp(type, ctx, _here, module).imports;
}

const fu::vec<Target_VZrr>& lookupTypeConverts_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    return tryLookupUserType_1qjp(type, ctx, _here, module).converts;
}

                                #ifndef DEF_clone_LygTExi0n35
                                #define DEF_clone_LygTExi0n35
inline char clone_LygT(const char a)
{
    return a;
}
                                #endif

                                #ifndef DEF_map_3qsvRagGAz0
                                #define DEF_map_3qsvRagGAz0
inline fu::str map_3qsv(fu::view<char> a)
{
    /*MOV*/ fu::str res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_LygT(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_RSna72mrL45
                                #define DEF_clone_RSna72mrL45
inline fu::str clone_RSna(fu::view<char> a)
{
    return map_3qsv(a);
}
                                #endif

int getFlatCount_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    const Struct_LDkB& s = tryLookupUserType_1qjp(type, ctx, _here, module);
    if (s)
        return s.shape.flatCount;
    else if (is_primitive_hxWW(type) || is_sliceable_hxWW(type))
        return 1;
    else
        return 0;

}

ValueType_JtNg parseType_1qjp(fu::view<char> str, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    int offset {};
    const unsigned quals = unsigned(parseVarint_V5Iu(offset, str));
    /*MOV*/ fu::str canon = clone_RSna(fu::get_view(str, offset));
    /*MOV*/ ValueType_JtNg type = ValueType_JtNg { quals, VFacts_xhRf{}, static_cast<fu::str&&>(canon) };
    type.quals |= getMaxUsage_CaGD(getFlatCount_1qjp(type, ctx, _here, module));
    if (is_primitive_hxWW(type))
    {
        if (!(__builtin_popcount(type.quals) == 2))
            BUG_u9Gb((x7E_rA00((x7E_rA00("parseType: Primitive.quals("_view, fu::u64dec(quals)) + ").popcount("_view), fu::i64dec(__builtin_popcount(quals))) + ") != 2"_view), ctx, _here);

    };
    return /*NRVO*/ type;
}

Shape_fvCX getShape_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    const Struct_LDkB& s = tryLookupUserType_1qjp(type, ctx, _here, module);
    if (s)
        return Shape_fvCX(s.shape);
    else if (is_primitive_hxWW(type))
    {
        uint64_t hash;
        uint64_t BL_3_v;
        return Shape_fvCX { fu::str(type.canon), 0ull, (__extension__ (
        {
            hash = {};
            for (int i = type.canon.size(); i-- > 0; )
                (hash <<= 8ull) |= uint64_t(fu::u8(type.canon[i]));

            BL_3_v = (hash);
            (void)0;
        }), BL_3_v), 1, 0 };
    }
    else if (is_sliceable_hxWW(type))
    {
        ValueType_JtNg arrT = parseType_1qjp(fu::get_view(type.canon, 1, (type.canon.size() - 1)), ctx, _here, module);
        Shape_fvCX item_shape = getShape_1qjp(arrT, ctx, _here, module);
        uint64_t x;
        const uint64_t hash = (x = item_shape.hash, (x ^= (x << 13ull)), (x ^= (x >> 7ull)), (x ^= (x << 17ull)), x);
        return Shape_fvCX { fu::str{}, (item_shape.non_triv_mask | (1ull << (hash & 63ull))), hash, 1, 0 };
    }
    else
    {
        return Shape_fvCX{};
    };
}

bool is_zst_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    return !getFlatCount_1qjp(type, ctx, _here, module);
}

fu::vec_range<char> getShortModuleName_1qjp(fu::vec_range<char> fname, const Context_noPA& ctx, const TokenIdx_5581& _here)
{
    const int end = (fname.size() - 3);
    bool found = false;
    for (int i = end; i-- > 0; )
    {
        const char c = fname[i];
        if (!(c != '/'))
        {
            if (found)
                return fu::get_range(fname, (i + 1), end);
            else
                found = true;

        };
    };
    BUG_u9Gb(fu::view<char>{}, ctx, _here);
}

extern const unsigned q_TAGS;
fu::str serializeType_1qjp(const ValueType_JtNg& type, fu::view<char> debug)
{
    if (type)
    {
        /*MOV*/ fu::str result {};
        appendVarint_V5Iu(result, unsigned((type.quals & q_TAGS)));
        result += (type.canon ? type.canon : fu::fail(("COMPILER BUG: serializeType: No type.canon in: "_view + debug)));
        return /*NRVO*/ result;
    }
    else
        fu::fail(("COMPILER BUG: serializeType: Falsy type in: "_view + debug));

}

Type_OiTm tryClear_sliceable_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    if (is_sliceable_hxWW(type))
    {
        /*MOV*/ ValueType_JtNg vtype = parseType_1qjp(fu::get_view(type.canon, 1, (type.canon.size() - 1)), ctx, _here, module);
        return Type_OiTm { static_cast<ValueType_JtNg&&>(vtype), Lifetime_llCF{} };
    }
    else
    {
        return Type_OiTm{};
    };
}

Type_OiTm clear_sliceable_1qjp(const ValueType_JtNg& type, const Context_noPA& ctx, const TokenIdx_5581& _here, const Module_wo7O& module)
{
    if (is_sliceable_hxWW(type))
    {
        /*MOV*/ ValueType_JtNg vtype = parseType_1qjp(fu::get_view(type.canon, 1, (type.canon.size() - 1)), ctx, _here, module);
        return Type_OiTm { static_cast<ValueType_JtNg&&>(vtype), Lifetime_llCF{} };
    }
    else
        fu::fail(("COMPILER BUG: Not sliceable: "_view + type.canon));

}

#endif
