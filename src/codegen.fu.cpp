#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct CodegenOutput_OFce;
struct Set_XshD;
typedef fu::u8 CGDefects_2L18;
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
struct ModuleStats_zo42;
struct ModuleStat_6soj;
struct Profile_zroC;
struct Sample_Time_cblj;
struct Context_UXD9;
struct Map_4s6T;
struct Options_mg7V;
struct Lint_Q9R1;
typedef fu::u8 DevOptions_QEya;
struct Outputs_MiyU;
struct Set_XshD;
struct Set_sILh;
struct StructCanon_nOQ0;
struct Set_R8IU;
struct StructDecl_yATi;
struct Set_9RpO;
struct cg_CurrentFn_1clL;
struct cg_Block_OvNG;
enum PointerFlip_I1zX: fu::u8;
typedef unsigned Mode_Z9Je;
struct NativeQualities_EGJc;
struct ClosureID_XYK2;
struct Intlit_SPOq;
struct TEMPVAR_5NLP;
bool is_never_9CJm(const ValueType_B8uC&);
[[noreturn]] fu::never FAIL_u9Gb(fu::view<char>, const TokenIdx_5b85&, const Context_UXD9&);
bool isIrrelevant_9CJm(const Type_KBIB&);
void HERE_u9Gb(const TokenIdx_5b85&, TokenIdx_5b85&);
static fu::str cgNode_i4S3(const SolvedNode_owql&, Mode_Z9Je, const Type_KBIB&, Outputs_MiyU&, cg_CurrentFn_1clL&, TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&, const Options_mg7V&);
static bool isFieldChain_i4S3(const SolvedNode_owql&, const Context_UXD9&, const Module_qqBh&);
bool isRTL_xQNS(const Overload_OYmb&);
bool is_mutref_9CJm(const Type_KBIB&, const TokenIdx_5b85&, const Context_UXD9&);
bool is_sliceable_hxWW(const ValueType_B8uC&);
bool is_zst_1qjp(const ValueType_B8uC&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
bool is_ref_9CJm(const Type_KBIB&);
fu::str qBAD_e44U(fu::view<char>);
bool is_primitive_hxWW(const ValueType_B8uC&);
Type_KBIB tryClear_sliceable_1qjp(const ValueType_B8uC&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
static fu::str typeAnnot_i4S3(const Type_KBIB&, Mode_Z9Je, Outputs_MiyU&, cg_CurrentFn_1clL&, TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&, const Options_mg7V&);
const Struct_5VgD& lookupUserType_SqDq(const ValueType_B8uC&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
fu::str digest62_lweH(uint64_t, int);
StructCanon_nOQ0 parseStructCanon_p1TN(fu::view<char>);
Target_VZrr target_z0Qq(const ScopeItem_ydOE&);
fu::str ID_vRqJ(fu::vec_range<char>);
bool is_rx_copy_9CJm(const ValueType_B8uC&);
bool isPassByValue_hxWW(const ValueType_B8uC&);
bool is_trivial_1qjp(const ValueType_B8uC&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
static fu::str TEMPVAR_init_i4S3(fu::view<char>, PointerFlip_I1zX, fu::view<char>, bool);
unsigned parse7bit_7Yz9(fu::view<char>, int&);
Target_VZrr Target_xQNS(int, int, int);
static bool hasZeroes_i4S3(const Lifetime_llCF&, const cg_CurrentFn_1clL&, const Context_UXD9&, const Module_qqBh&);
NativeQualities_EGJc NativeQualities_UvH3(fu::view<char>);
bool is_bitfield_hxWW(const ValueType_B8uC&);
bool is_integral_hxWW(const ValueType_B8uC&);
bool is_unsigned_hxWW(const ValueType_B8uC&);
bool hasIdentifierChars_V5Iu(fu::view<char>);
Type_KBIB clear_refs_9CJm(Type_KBIB&&);
const Struct_5VgD& tryLookupUserType_1qjp(const ValueType_B8uC&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
bool hasBinary_vRqJ(fu::view<char>);
bool hasUnary_vRqJ(fu::view<char>);
bool hasPostfix_vRqJ(fu::view<char>);
bool add_once_jvxt(BitSet_mmp7&, int);
ClosureID_XYK2 tryParseClosureID_UvH3(fu::view<char>, const TokenIdx_5b85&, const Context_UXD9&);
bool has_jvxt(const BitSet_mmp7&, int);
static bool isConstexpr_i4S3(const SolvedNode_owql&, const Context_UXD9&, const Module_qqBh&);
static bool globalVar_isConstexpr_i4S3(const Overload_OYmb&, const Context_UXD9&, const Module_qqBh&);
void add_jvxt(BitSet_mmp7&, int);
static bool exprOK_i4S3(fu::view<SolvedNode_owql>);
static fu::vec<fu::str> cgNodes_i4S3(fu::view<SolvedNode_owql>, Mode_Z9Je, fu::view<char>, Outputs_MiyU&, cg_CurrentFn_1clL&, TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&, const Options_mg7V&);
static void TEST_noDanglingRefs_i4S3(fu::view<int>, const SolvedNode_owql&, const cg_CurrentFn_1clL&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
static void TEST_noDanglingRefs_cqST(fu::view<int>, const Lifetime_llCF&, const cg_CurrentFn_1clL&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
static fu::str cgStatements_i4S3(fu::view<SolvedNode_owql>, int&, fu::view<char>, Outputs_MiyU&, cg_CurrentFn_1clL&, TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&, const Options_mg7V&);
Intlit_SPOq Intlit_u8re(fu::view<char>);
bool is_enum_hxWW(const ValueType_B8uC&);
bool is_flags_hxWW(const ValueType_B8uC&);
bool hasStatic_7Yz9(const Lifetime_llCF&);
void hash_l6RU(TEA_87LR&, fu::vec_range<char>);
Type_KBIB clear_sliceable_1qjp(const ValueType_B8uC&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
static bool mayNeedConstCast_i4S3(const SolvedNode_owql&, const TokenIdx_5b85&, const Context_UXD9&, const Module_qqBh&);
bool isAddrOfFn_9CJm(const Type_KBIB&);
Target_VZrr parseLocalOrGlobal_xQNS(fu::view<char>, int&);
fu::vec_range<char> dirname_qZI0(fu::vec_range<char>);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
fu::str read_VWJw(fu::str&&);

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

                                #ifndef DEF_Set_9RpOHn6J8Za
                                #define DEF_Set_9RpOHn6J8Za
struct Set_9RpO
{
    fu::vec<uint64_t> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
        ;
    }
};
                                #endif

                                #ifndef DEF_Set_R8IUVvFh4H7
                                #define DEF_Set_R8IUVvFh4H7
struct Set_R8IU
{
    fu::vec<Target_VZrr> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
        ;
    }
};
                                #endif

                                #ifndef DEF_Set_sILh2kHzY18
                                #define DEF_Set_sILh2kHzY18
struct Set_sILh
{
    fu::vec<StructCanon_nOQ0> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
        ;
    }
};
                                #endif

                                #ifndef DEF_StructCanon_nOQ0bK1Kf7b
                                #define DEF_StructCanon_nOQ0bK1Kf7b
struct StructCanon_nOQ0
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

                                #ifndef DEF_StructDecl_yATi7d2iF8e
                                #define DEF_StructDecl_yATi7d2iF8e
struct StructDecl_yATi
{
    fu::str def;
    int declDepth;
    explicit operator bool() const noexcept
    {
        return false
            || def
            || declDepth
        ;
    }
};
                                #endif

                                #ifndef DEF_Outputs_MiyUdvCkzXj
                                #define DEF_Outputs_MiyUdvCkzXj
struct Outputs_MiyU
{
    Set_XshD _libs;
    Set_XshD _gcc_ignore;
    fu::vec<fu::str> _top_emits;
    Set_sILh _tfwd;
    fu::str _tfwd_src;
    Set_R8IU _ffwd;
    fu::str _ffwd_src;
    fu::str _ffwd_live_client;
    fu::str _ffwd_live_nclient;
    fu::str _tdef;
    fu::vec<StructDecl_yATi> _tdef_stack;
    Set_R8IU _fdef_started;
    Set_R8IU _fdef_complete;
    fu::str _fdef;
    fu::str _indent;
    int _hasMain;
    fu::str _test_cases;
    Set_9RpO _static_strings;
    fu::str _static_string_src;
    Set_XshD HACK_link;
    Set_XshD HACK_include_dirs;
    Set_XshD HACK_extra_sources;
    fu::vec<int> _live_targets;
    CGDefects_2L18 _defects;
    Set_XshD _TODO_FIX_seenFns;
    Outputs_MiyU(const Outputs_MiyU&) = delete;
    Outputs_MiyU(Outputs_MiyU&&) = default;
    Outputs_MiyU& operator=(const Outputs_MiyU&) = delete;
    Outputs_MiyU& operator=(Outputs_MiyU&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || _libs
            || _gcc_ignore
            || _top_emits
            || _tfwd
            || _tfwd_src
            || _ffwd
            || _ffwd_src
            || _ffwd_live_client
            || _ffwd_live_nclient
            || _tdef
            || _tdef_stack
            || _fdef_started
            || _fdef_complete
            || _fdef
            || _indent
            || _hasMain
            || _test_cases
            || _static_strings
            || _static_string_src
            || HACK_link
            || HACK_include_dirs
            || HACK_extra_sources
            || _live_targets
            || _defects
            || _TODO_FIX_seenFns
        ;
    }
};
                                #endif

                                #ifndef DEF_PointerFlip_I1zX
                                #define DEF_PointerFlip_I1zX
enum PointerFlip_I1zX: fu::u8
{
    PointerFlip_I1zX_None = 0u,
    PointerFlip_I1zX_VecRangeOrView = 1u,
    PointerFlip_I1zX_RawPointer = 2u,
};
                                #endif

                                #ifndef DEF_cg_Block_OvNG12eSFp3
                                #define DEF_cg_Block_OvNG12eSFp3
struct cg_Block_OvNG
{
    fu::str name;
    Helpers_DyqV helpers;
    bool has_val;
    PointerFlip_I1zX ptr_flip;
    fu::vec<int> surviving_locals;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || helpers
            || has_val
            || ptr_flip
            || surviving_locals
        ;
    }
};
                                #endif

                                #ifndef DEF_cg_CurrentFn_1clLcaHnxde
                                #define DEF_cg_CurrentFn_1clLcaHnxde
struct cg_CurrentFn_1clL
{
    Target_VZrr target;
    int numTEMPVARs;
    fu::vec<fu::str> TEMPVARs;
    fu::vec<cg_Block_OvNG> blocks;
    int num_labels;
    Helpers_DyqV can_return;
    Helpers_DyqV can_break;
    Helpers_DyqV can_cont;
    fu::vec<fu::str> _ids_used;
    fu::vec<int> _ids_dedupe_p;
    fu::vec<int> _ids_dedupe_n;
    BitSet_mmp7 _hoisted;
    BitSet_mmp7 _declared;
    fu::vec<int> _live_locals;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || numTEMPVARs
            || TEMPVARs
            || blocks
            || num_labels
            || can_return
            || can_break
            || can_cont
            || _ids_used
            || _ids_dedupe_p
            || _ids_dedupe_n
            || _hoisted
            || _declared
            || _live_locals
        ;
    }
};
                                #endif

                                #ifndef DEF_Mode_Z9Je
                                #define DEF_Mode_Z9Je
inline constexpr Mode_Z9Je Mode_Z9Je_M_STMT = 1u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_RETBOOL = 2u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_CONST = 4u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_RETVAL = 8u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_ARGUMENT = 16u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_RETURN = 32u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_FWDECL = 64u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_PARENS = 128u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_OPT_CURLIES = 256u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_LOOP_BODY = 512u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_MUTVAR = 1024u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_MOVABLE = 2048u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_ARG_TO_NATIVE = 4096u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_ENUM_DECL = 8192u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_CHECK_NEVER_LTR = 16384u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_STATIC_REF = 32768u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_VOID_EXPR = 65536u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_FN_BODY = 131072u;
inline constexpr Mode_Z9Je Mode_Z9Je_M_IGNORE_REFERENCE = 262144u;

inline constexpr Mode_Z9Je MASK_Mode_Z9Je
    = Mode_Z9Je_M_STMT
    | Mode_Z9Je_M_RETBOOL
    | Mode_Z9Je_M_CONST
    | Mode_Z9Je_M_RETVAL
    | Mode_Z9Je_M_ARGUMENT
    | Mode_Z9Je_M_RETURN
    | Mode_Z9Je_M_FWDECL
    | Mode_Z9Je_M_PARENS
    | Mode_Z9Je_M_OPT_CURLIES
    | Mode_Z9Je_M_LOOP_BODY
    | Mode_Z9Je_M_MUTVAR
    | Mode_Z9Je_M_MOVABLE
    | Mode_Z9Je_M_ARG_TO_NATIVE
    | Mode_Z9Je_M_ENUM_DECL
    | Mode_Z9Je_M_CHECK_NEVER_LTR
    | Mode_Z9Je_M_STATIC_REF
    | Mode_Z9Je_M_VOID_EXPR
    | Mode_Z9Je_M_FN_BODY
    | Mode_Z9Je_M_IGNORE_REFERENCE;
                                #endif

                                #ifndef DEF_NativeQualities_EGJcP9v6iee
                                #define DEF_NativeQualities_EGJcP9v6iee
struct NativeQualities_EGJc
{
    int name_start_idx;
    bool MayAlias;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || MayAlias
        ;
    }
};
                                #endif

                                #ifndef DEF_ClosureID_XYK2X2pzbZd
                                #define DEF_ClosureID_XYK2X2pzbZd
struct ClosureID_XYK2
{
    Target_VZrr target;
    unsigned revision;
    explicit operator bool() const noexcept
    {
        return false
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_Intlit_SPOq2VQxkb1
                                #define DEF_Intlit_SPOq2VQxkb1
struct Intlit_SPOq
{
    fu::u8 base;
    fu::u8 minsize_i;
    fu::u8 minsize_u;
    fu::u8 minsize_f;
    bool sIgned;
    bool uNsigned;
    bool negative;
    uint64_t absval;
    fu::str error;
    explicit operator bool() const noexcept
    {
        return false
            || base
            || minsize_i
            || minsize_u
            || minsize_f
            || sIgned
            || uNsigned
            || negative
            || absval
            || error
        ;
    }
};
                                #endif

                                #ifndef DEF_TEMPVAR_5NLPMRAAC0g
                                #define DEF_TEMPVAR_5NLPMRAAC0g
struct TEMPVAR_5NLP
{
    fu::str annot;
    fu::str id;
    PointerFlip_I1zX ptr_flip;
    explicit operator bool() const noexcept
    {
        return false
            || annot
            || id
            || ptr_flip
        ;
    }
};
                                #endif

                                #ifndef STR_X5dDmzgFGZ4
                                #define STR_X5dDmzgFGZ4
static const fu::str str_X5dDmzgFGZ4 fu_INIT_PRIORITY(1011) { "{/*unused non-zst*/}"_fu };
                                #endif

                                #ifndef STR_NIbgcE07Nch
                                #define STR_NIbgcE07Nch
static const fu::str str_NIbgcE07Nch fu_INIT_PRIORITY(1011) { "<fu/int.h>"_fu };
                                #endif

                                #ifndef STR_CgPFHVpo3La
                                #define STR_CgPFHVpo3La
static const fu::str str_CgPFHVpo3La fu_INIT_PRIORITY(1011) { "<cstdint>"_fu };
                                #endif

                                #ifndef STR_Btdqj43agA6
                                #define STR_Btdqj43agA6
static const fu::str str_Btdqj43agA6 fu_INIT_PRIORITY(1011) { "<fu/never.h>"_fu };
                                #endif

                                #ifndef STR_brI8gCo05zg
                                #define STR_brI8gCo05zg
static const fu::str str_brI8gCo05zg fu_INIT_PRIORITY(1011) { "fu::never"_fu };
                                #endif

                                #ifndef STR_KiGuEGIuqEg
                                #define STR_KiGuEGIuqEg
static const fu::str str_KiGuEGIuqEg fu_INIT_PRIORITY(1011) { "void"_fu };
                                #endif

                                #ifndef STR_QMteAuAC0h7
                                #define STR_QMteAuAC0h7
static const fu::str str_QMteAuAC0h7 fu_INIT_PRIORITY(1011) { "<fu/str.h>"_fu };
                                #endif

                                #ifndef STR_vOGSEBkSjrh
                                #define STR_vOGSEBkSjrh
static const fu::str str_vOGSEBkSjrh fu_INIT_PRIORITY(1011) { "fu::str"_fu };
                                #endif

                                #ifndef STR_NOGxBIraLNl
                                #define STR_NOGxBIraLNl
static const fu::str str_NOGxBIraLNl fu_INIT_PRIORITY(1011) { "<fu/vec.h>"_fu };
                                #endif

                                #ifndef STR_oHp7Y6FTuR1
                                #define STR_oHp7Y6FTuR1
static const fu::str str_oHp7Y6FTuR1 fu_INIT_PRIORITY(1011) { "<fu/vec_range.h>"_fu };
                                #endif

                                #ifndef STR_mvJDIwjABBc
                                #define STR_mvJDIwjABBc
static const fu::str str_mvJDIwjABBc fu_INIT_PRIORITY(1011) { "<fu/view.h>"_fu };
                                #endif

                                #ifndef STR_onytfN8TIli
                                #define STR_onytfN8TIli
static const fu::str str_onytfN8TIli fu_INIT_PRIORITY(1011) { "__preceding_ref_arg"_fu };
                                #endif

                                #ifndef STR_jfOtyZaJDej
                                #define STR_jfOtyZaJDej
static const fu::str str_jfOtyZaJDej fu_INIT_PRIORITY(1011) { "<fu/static_ref.h>"_fu };
                                #endif

                                #ifndef STR_tQES2GAELA1
                                #define STR_tQES2GAELA1
static const fu::str str_tQES2GAELA1 fu_INIT_PRIORITY(1011) { "<fu/move_or_default.h>"_fu };
                                #endif

                                #ifndef STR_NgHIYTVAMJ8
                                #define STR_NgHIYTVAMJ8
static const fu::str str_NgHIYTVAMJ8 fu_INIT_PRIORITY(1011) { "<fu/default.h>"_fu };
                                #endif

                                #ifndef STR_7C9m5sHpsVk
                                #define STR_7C9m5sHpsVk
static const fu::str str_7C9m5sHpsVk fu_INIT_PRIORITY(1011) { "}))"_fu };
                                #endif

                                #ifndef STR_88VsvxHhro2
                                #define STR_88VsvxHhro2
static const fu::str str_88VsvxHhro2 fu_INIT_PRIORITY(1011) { "}"_fu };
                                #endif

                                #ifndef STR_9NlOPDcjiEa
                                #define STR_9NlOPDcjiEa
static const fu::str str_9NlOPDcjiEa fu_INIT_PRIORITY(1011) { "(__extension__ ("_fu };
                                #endif

                                #ifndef STR_vsZ1ziEt2Fe
                                #define STR_vsZ1ziEt2Fe
static const fu::str str_vsZ1ziEt2Fe fu_INIT_PRIORITY(1011) { "<dl/hotswap.hpp>"_fu };
                                #endif

                                #ifndef STR_yWlc4bgOuai
                                #define STR_yWlc4bgOuai
static const fu::str str_yWlc4bgOuai fu_INIT_PRIORITY(1011) { "<fu/init_priority.h>"_fu };
                                #endif

                                #ifndef STR_BNg9CJag9z2
                                #define STR_BNg9CJag9z2
static const fu::str str_BNg9CJag9z2 fu_INIT_PRIORITY(1011) { "(-9223372036854775807-1)"_fu };
                                #endif

                                #ifndef STR_Mh2Kj8clGMl
                                #define STR_Mh2Kj8clGMl
static const fu::str str_Mh2Kj8clGMl fu_INIT_PRIORITY(1011) { "("_fu };
                                #endif

                                #ifndef STR_UITKnaHsmN6
                                #define STR_UITKnaHsmN6
static const fu::str str_UITKnaHsmN6 fu_INIT_PRIORITY(1011) { "<fu/defer.h>"_fu };
                                #endif

#ifndef fu_NO_fdefs

[[noreturn]] static fu::never BUG_i4S3(fu::view<char> reason, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    FAIL_u9Gb(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_view + (reason ? reason : "Assertion failed."_view)), _here, ctx);
}

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_only_CntrmOqF8re
                                #define DEF_only_CntrmOqF8re
inline const SolvedNode_owql& only_Cntr(fu::view<SolvedNode_owql> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_rA00("len != 1: "_view, fu::i64dec(s.size())));

}
                                #endif

static fu::str cgNot_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    return "!"_view + cgNode_i4S3(only_Cntr(node.items), Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF_uNsigned_40Hlp3Rl5Y4
                                #define DEF_uNsigned_40Hlp3Rl5Y4
inline unsigned uNsigned_40Hl(const int v)
{
    return unsigned(v);
}
                                #endif

                                #ifndef DEF_iF_vSIJwT3eHoj
                                #define DEF_iF_vSIJwT3eHoj
inline const Extended_Ebxv& iF_vSIJ(fu::view<Extended_Ebxv> a, const int i)
{
    if (uNsigned_40Hl(i) < uNsigned_40Hl(a.size()))
        return a[i];
    else
        return (*(Extended_Ebxv*)fu::NIL);

}
                                #endif

static const Extended_Ebxv& EXT_i4S3(const Target_VZrr& target, const Context_UXD9& ctx, const Module_qqBh& module)
{
    unsigned v;
    const int locid = (v = unsigned((target._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    if (locid)
        return (*(Extended_Ebxv*)fu::NIL);
    else
    {
        const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
        const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
        const Module_qqBh& m = ((modid == module.modid) ? module : ctx.modules[modid]);
        return iF_vSIJ(m.out.solve.scope.extended, globid);
    };
}

static const Overload_OYmb& GET_i4S3(const Target_VZrr& target, const Context_UXD9& ctx, const Module_qqBh& module)
{
    const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    unsigned v;
    const int locid = (v = unsigned((target._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    const Module_qqBh& m = ((modid == module.modid) ? module : ctx.modules[modid]);
    if (locid)
    {
        const Extended_Ebxv& ext = m.out.solve.scope.extended[globid];
        return ext.args_n_locals[((ext.args_neg - ((locid > 0) ? 1 : 0)) + locid)];
    }
    else
        return m.out.solve.scope.overloads[(globid - 1)];

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

                                #ifndef DEF_x3Dx3D_xqw8ga5OCp4
                                #define DEF_x3Dx3D_xqw8ga5OCp4
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_erT9(a, b);
}
                                #endif

static bool isFieldChain_i4S3(const SolvedNode_owql& node, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if (node.kind != Kind_Idfg_call)
        return false;
    else
    {
        const Overload_OYmb& t = GET_i4S3(node.target, ctx, module);
        if (t.kind == Kind_Idfg_field)
            return isFieldChain_i4S3(only_Cntr(node.items), ctx, module);
        else if (t.kind == Kind_Idfg_var)
            return true;
        else
            return false;

    };
}

static bool isAbbreviatedCopy_i4S3(const SolvedNode_owql& n, const bool sliceOK)
{
    if (n.kind == Kind_Idfg_copy)
        return !is_sliceable_hxWW(n.type.vtype) || sliceOK;
    else
        return false;

}

extern const unsigned q_rx_resize;
extern const unsigned q_rx_copy;
static bool ifArrayRef_annotateAsSlice_i4S3(const Type_KBIB& type)
{
    return !(type.vtype.quals & (q_rx_resize | q_rx_copy));
}

static VFacts_xhRf ifArrayRef_annotateAsVec_i4S3(const Type_KBIB& type)
{
    if (!ifArrayRef_annotateAsSlice_i4S3(type) && VFacts_xhRf((type.vtype.vfacts & VFacts_xhRf_LeftAligned)))
        return type.vtype.vfacts & VFacts_xhRf_RightAligned;
    else
    {
        return VFacts_xhRf{};
    };
}

static bool ifArray_annotateAsVec_i4S3(const Type_KBIB& type)
{
    return !is_ref_9CJm(type) || ifArrayRef_annotateAsVec_i4S3(type);
}

static bool isPointlessMustSeq_i4S3(const SolvedNode_owql& arg, const Argument_HFkq& host_arg, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if (is_sliceable_hxWW(host_arg.type.vtype) && !ifArray_annotateAsVec_i4S3(host_arg.type))
        return false;
    else
        return isFieldChain_i4S3(arg, ctx, module);

}

static bool rest_isPointlessMustSeq_i4S3(const int seqIdx, fu::view<SolvedNode_owql> args, const bool RTL, fu::view<Argument_HFkq> host_args, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{

    {
        const int seqIdx_start = (seqIdx + 1);
        int seqIdx_1 = 0;
        int lastPass = 1;
        for (int pass = 0; pass < lastPass; pass++)
        {
            for (int i = 0; i < host_args.size(); i++)
            {
                const Argument_HFkq& host_arg = host_args[i];
                if (!!pass != (RTL ? !i : !!((host_arg.flags & Flags_Lzg8_F_IMPLICIT) || is_mutref_9CJm(host_arg.type, _here, ctx))))
                    lastPass = 2;
                else
                {
                    if ((seqIdx_start <= seqIdx_1))
                    {
                        const int i_1 = i;
                        const SolvedNode_owql& arg = args[i_1];
                        if (!isPointlessMustSeq_i4S3(arg, host_arg, ctx, module))
                            return false;

                    };
                    seqIdx_1++;
                };
            };
        };
    };
    return true;
}

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

static void noteDefect_i4S3(const CGDefects_2L18 defects, Outputs_MiyU& outputs, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Options_mg7V& options)
{
    if (defects & options.break_defects)
        BUG_i4S3(("CGDefect break: "_view + qBAD_e44U(str_7z76(defects))), _here, ctx);
    else
        outputs._defects |= defects;

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

static void include_i4S3(fu::vec_range<char> lib, Outputs_MiyU& outputs)
{
    add_poRw(outputs._libs, lib);
}

static fu::str primAnnotBase_i4S3(fu::view<char> c, Outputs_MiyU& outputs, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if (c == "i32"_view)
        return fu::str("int"_fu);
    else if (c == "i16"_view)
        return fu::str("short"_fu);
    else if (c == "u32"_view)
        return fu::str("unsigned"_fu);
    else if (c == "b8"_view)
        return fu::str("bool"_fu);
    else if (c == "c8"_view)
        return fu::str("char"_fu);
    else if (c == "f32"_view)
        return fu::str("float"_fu);
    else if (c == "f64"_view)
        return fu::str("double"_fu);
    else if ((c == "i8"_view) || (c == "u8"_view))
    {
        include_i4S3(str_NIbgcE07Nch, outputs);
        return "fu::"_view + c;
    }
    else
    {
        include_i4S3(str_CgPFHVpo3La, outputs);
        if (c == "i64"_view)
            return fu::str("int64_t"_fu);
        else if (c == "i128"_view)
            return fu::str("__int128_t"_fu);
        else if (c == "u16"_view)
            return fu::str("uint16_t"_fu);
        else if (c == "u32"_view)
            return fu::str("uint32_t"_fu);
        else if (c == "u64"_view)
            return fu::str("uint64_t"_fu);
        else if (c == "u128"_view)
            return fu::str("__uint128_t"_fu);
        else
            BUG_i4S3((("Unknown primitive: `"_view + c) + "`."_view), _here, ctx);

    };
}

static const fu::str& annotateNever_i4S3(Outputs_MiyU& outputs)
{
    include_i4S3(str_Btdqj43agA6, outputs);
    return str_brI8gCo05zg;
}

static const fu::str& annotateZST_i4S3()
{
    return str_KiGuEGIuqEg;
}

extern const Type_KBIB t_byte;
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

                                #ifndef DEF_x3Cx3E_IKCCJmNwJx2
                                #define DEF_x3Cx3E_IKCCJmNwJx2
inline int x3Cx3E_IKCC(const VFacts_xhRf a, const VFacts_xhRf b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_m44sOY94GEd
                                #define DEF_x3Cx3E_m44sOY94GEd
inline int x3Cx3E_m44s(const ValueType_B8uC& a, const ValueType_B8uC& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_Rgh3(a.quals, b.quals)))
        return cmp;
    else if ((cmp = x3Cx3E_IKCC(a.vfacts, b.vfacts)))
        return cmp;

    if ((cmp = x3Cx3E_erT9(a.canon, b.canon)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_bEi8WaABfd6
                                #define DEF_x3Cx3E_bEi8WaABfd6
inline int x3Cx3E_bEi8(const Lifetime_llCF& a, const Lifetime_llCF& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_erT9(a.uni0n, b.uni0n)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_QFvw1bsH6wa
                                #define DEF_x3Cx3E_QFvw1bsH6wa
inline int x3Cx3E_QFvw(const Type_KBIB& a, const Type_KBIB& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_m44s(a.vtype, b.vtype)))
        return cmp;
    else if ((cmp = x3Cx3E_bEi8(a.lifetime, b.lifetime)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_La047VFRHic
                                #define DEF_x3Dx3D_La047VFRHic
inline bool operator==(const Type_KBIB& a, const Type_KBIB& b)
{
    return !x3Cx3E_QFvw(a, b);
}
                                #endif

static const fu::str& annotateString_i4S3(Outputs_MiyU& outputs)
{
    include_i4S3(str_QMteAuAC0h7, outputs);
    return str_vOGSEBkSjrh;
}

static bool ifArrayRef_annotateAsVecRange_i4S3(const Type_KBIB& type)
{
    if (!ifArrayRef_annotateAsSlice_i4S3(type))
    {
        return !ifArrayRef_annotateAsVec_i4S3(type);
    }
    else
        return false;

}

                                #ifndef DEF_SIGHASH_CHARS
                                #define DEF_SIGHASH_CHARS
inline constexpr int SIGHASH_CHARS = 4;
                                #endif

static fu::str structID_i4S3(const Struct_5VgD& s)
{
    if (s.shape.hash)
        return (s.name + "_"_view) + digest62_lweH(uint64_t(s.shape.hash), SIGHASH_CHARS);
    else
        return fu::str(s.name);

}

                                #ifndef DEF_x3Cx3E_RliCX0N0Sv0
                                #define DEF_x3Cx3E_RliCX0N0Sv0
inline int x3Cx3E_RliC(const StructCanon_nOQ0& a, const StructCanon_nOQ0& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_odNT(a.modid, b.modid)))
        return cmp;
    else if ((cmp = x3Cx3E_odNT(a.index, b.index)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_add_dWZuuYeOzB6
                                #define DEF_add_dWZuuYeOzB6
inline bool add_dWZu(Set_sILh& _, const StructCanon_nOQ0& key)
{
    fu::view<StructCanon_nOQ0> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_RliC(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, StructCanon_nOQ0(key));
    return true;
}
                                #endif

                                #ifndef DEF___ThLlLxkwTU6
                                #define DEF___ThLlLxkwTU6
inline static fu::view<char> _ThLl(const Target_VZrr& member, fu::view<char> id, fu::vec_range_mut<char> def, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::str _0 {};
    fu::str _1 {};
    return (_1 = ((_0 = (((((("\ninline constexpr "_view + id) + " "_view) + id) + "_"_view) + GET_i4S3(member, ctx, module).name) + " = "_view), (static_cast<fu::str&&>(_0) + cgNode_i4S3(GET_i4S3(member, ctx, module).solved, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options))) + ";"_view), (def += static_cast<fu::str&&>(_1)));
}
                                #endif

                                #ifndef DEF_each_2Peh11lPRv9
                                #define DEF_each_2Peh11lPRv9
inline void each_2Peh(fu::vec_range<ScopeItem_ydOE> a, fu::view<char> id, fu::vec_range_mut<char> def, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    for (int i = 0; i < a.size(); i++)
        _ThLl(target_z0Qq(a[i]), id, def, outputs, _current_fn, _here, ctx, module, options);

}
                                #endif

                                #ifndef DEF___siz0YjzvY36
                                #define DEF___siz0YjzvY36
inline static void _siz0(const Target_VZrr& member, fu::view<char> id, fu::str& mask, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if (!mask)
        mask = (((("\n\ninline constexpr "_view + id) + " MASK_"_view) + id) + "\n    = "_view);
    else
        mask += "\n    | "_view;

    mask += ((id + "_"_view) + GET_i4S3(member, ctx, module).name);
}
                                #endif

                                #ifndef DEF_each_eY93mY0ugzd
                                #define DEF_each_eY93mY0ugzd
inline void each_eY93(fu::vec_range<ScopeItem_ydOE> a, fu::view<char> id, fu::str& mask, const Context_UXD9& ctx, const Module_qqBh& module)
{
    for (int i = 0; i < a.size(); i++)
        _siz0(target_z0Qq(a[i]), id, mask, ctx, module);

}
                                #endif

                                #ifndef DEF___A1bcTLr8MI3
                                #define DEF___A1bcTLr8MI3
inline static fu::view<char> _A1bc(const Target_VZrr& member, fu::view<char> id, fu::vec_range_mut<char> def, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::str _0 {};
    fu::str _1 {};
    return (_1 = ((_0 = (((("\n    "_view + id) + "_"_view) + GET_i4S3(member, ctx, module).name) + " = "_view), (static_cast<fu::str&&>(_0) + cgNode_i4S3(GET_i4S3(member, ctx, module).solved, Mode_Z9Je_M_ENUM_DECL, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options))) + ","_view), (def += static_cast<fu::str&&>(_1)));
}
                                #endif

                                #ifndef DEF_each_1qyquzt5EU7
                                #define DEF_each_1qyquzt5EU7
inline void each_1qyq(fu::vec_range<ScopeItem_ydOE> a, fu::view<char> id, fu::vec_range_mut<char> def, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    for (int i = 0; i < a.size(); i++)
        _A1bc(target_z0Qq(a[i]), id, def, outputs, _current_fn, _here, ctx, module, options);

}
                                #endif

static void declarePrimitive_i4S3(fu::view<char> id, const Struct_5VgD& s, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::str basePrim = primAnnotBase_i4S3(s.shape.basePrim, outputs, _here, ctx);
    const fu::vec<ScopeItem_ydOE>& members = s.items;
    fu::str def = ((("\n                                #ifndef DEF_"_view + id) + "\n                                #define DEF_"_view) + id);
    if ((s.kind != Kind_Idfg_enum) || !members)
    {
        outputs._tfwd_src += (((("typedef "_view + basePrim) + " "_view) + id) + ";\n"_view);
        each_2Peh(members, id, def, outputs, _current_fn, _here, ctx, module, options);
        if (s.kind == Kind_Idfg_flags)
        {
            fu::str mask {};
            each_eY93(members, id, mask, ctx, module);
            if (mask)
            {
                mask += ";"_view;
                def += mask;
            };
        };
    }
    else
    {
        fu::str header = ((("enum "_view + id) + ": "_view) + basePrim);
        outputs._tfwd_src += (header + ";\n"_view);
        def += (("\n"_view + header) + "\n{"_view);
        each_1qyq(members, id, def, outputs, _current_fn, _here, ctx, module, options);
        def += "\n};"_view;
    };
    def += "\n                                #endif\n"_view;
    outputs._tdef += def;
}

                                #ifndef DEF_str_J9IqwO347p0
                                #define DEF_str_J9IqwO347p0
inline fu::str str_J9Iq(const Kind_Idfg n)
{
    if (n == Kind_Idfg_sof)
        return fu::str("sof"_fu);
    else if (n == Kind_Idfg_err)
        return fu::str("err"_fu);
    else if (n == Kind_Idfg_eof)
        return fu::str("eof"_fu);
    else if (n == Kind_Idfg_id)
        return fu::str("id"_fu);
    else if (n == Kind_Idfg_op)
        return fu::str("op"_fu);
    else if (n == Kind_Idfg_int)
        return fu::str("int"_fu);
    else if (n == Kind_Idfg_real)
        return fu::str("real"_fu);
    else if (n == Kind_Idfg_char)
        return fu::str("char"_fu);
    else if (n == Kind_Idfg_str)
        return fu::str("str"_fu);
    else if (n == Kind_Idfg_bool)
        return fu::str("bool"_fu);
    else if (n == Kind_Idfg_definit)
        return fu::str("definit"_fu);
    else if (n == Kind_Idfg_empty)
        return fu::str("empty"_fu);
    else if (n == Kind_Idfg_struct)
        return fu::str("struct"_fu);
    else if (n == Kind_Idfg_union)
        return fu::str("union"_fu);
    else if (n == Kind_Idfg_primitive)
        return fu::str("primitive"_fu);
    else if (n == Kind_Idfg_flags)
        return fu::str("flags"_fu);
    else if (n == Kind_Idfg_enum)
        return fu::str("enum"_fu);
    else if (n == Kind_Idfg_fn)
        return fu::str("fn"_fu);
    else if (n == Kind_Idfg_copy)
        return fu::str("copy"_fu);
    else if (n == Kind_Idfg_move)
        return fu::str("move"_fu);
    else if (n == Kind_Idfg_arrlit)
        return fu::str("arrlit"_fu);
    else if (n == Kind_Idfg_not)
        return fu::str("not"_fu);
    else if (n == Kind_Idfg_call)
        return fu::str("call"_fu);
    else if (n == Kind_Idfg_call_indir)
        return fu::str("call_indir"_fu);
    else if (n == Kind_Idfg_argid)
        return fu::str("argid"_fu);
    else if (n == Kind_Idfg_root)
        return fu::str("root"_fu);
    else if (n == Kind_Idfg_block)
        return fu::str("block"_fu);
    else if (n == Kind_Idfg_if)
    {
        return fu::str("if"_fu);
    }
    else if (n == Kind_Idfg_or)
        return fu::str("or"_fu);
    else if (n == Kind_Idfg_and)
        return fu::str("and"_fu);
    else if (n == Kind_Idfg_loop)
        return fu::str("loop"_fu);
    else if (n == Kind_Idfg_jump)
        return fu::str("jump"_fu);
    else if (n == Kind_Idfg___far_jump)
        return fu::str("__far_jump"_fu);
    else if (n == Kind_Idfg_defer)
        return fu::str("defer"_fu);
    else if (n == Kind_Idfg_try)
        return fu::str("try"_fu);
    else if (n == Kind_Idfg_let)
        return fu::str("let"_fu);
    else if (n == Kind_Idfg_letdef)
        return fu::str("letdef"_fu);
    else if (n == Kind_Idfg_typecast)
        return fu::str("typecast"_fu);
    else if (n == Kind_Idfg_typeassert)
        return fu::str("typeassert"_fu);
    else if (n == Kind_Idfg_typeparam)
        return fu::str("typeparam"_fu);
    else if (n == Kind_Idfg_unwrap)
        return fu::str("unwrap"_fu);
    else if (n == Kind_Idfg_pragma)
        return fu::str("pragma"_fu);
    else if (n == Kind_Idfg_break)
        return fu::str("break"_fu);
    else if (n == Kind_Idfg_return)
        return fu::str("return"_fu);
    else if (n == Kind_Idfg_continue)
        return fu::str("continue"_fu);
    else if (n == Kind_Idfg_import)
        return fu::str("import"_fu);
    else if (n == Kind_Idfg_addroffn)
        return fu::str("addroffn"_fu);
    else if (n == Kind_Idfg_forfieldsof)
        return fu::str("forfieldsof"_fu);
    else if (n == Kind_Idfg_members)
        return fu::str("members"_fu);
    else if (n == Kind_Idfg_fnbranch)
        return fu::str("fnbranch"_fu);
    else if (n == Kind_Idfg_pattern)
        return fu::str("pattern"_fu);
    else if (n == Kind_Idfg_typeunion)
        return fu::str("typeunion"_fu);
    else if (n == Kind_Idfg_typetag)
        return fu::str("typetag"_fu);
    else if (n == Kind_Idfg___relaxed)
        return fu::str("__relaxed"_fu);
    else if (n == Kind_Idfg___convert)
        return fu::str("__convert"_fu);
    else if (n == Kind_Idfg___preceding_ref_arg)
        return fu::str(str_onytfN8TIli);
    else if (n == Kind_Idfg___no_kind_yet)
        return fu::str("__no_kind_yet"_fu);
    else if (n == Kind_Idfg___tombstone)
        return fu::str("__tombstone"_fu);
    else if (n == Kind_Idfg_type)
        return fu::str("type"_fu);
    else if (n == Kind_Idfg_var)
        return fu::str("var"_fu);
    else if (n == Kind_Idfg_field)
        return fu::str("field"_fu);
    else if (n == Kind_Idfg_enumv)
        return fu::str("enumv"_fu);
    else if (n == Kind_Idfg_template)
        return fu::str("template"_fu);
    else if (n == Kind_Idfg___native)
        return fu::str("__native"_fu);
    else if (n == Kind_Idfg_inline)
        return fu::str("inline"_fu);

    return fu::i64dec(int64_t(n));
}
                                #endif

static fu::str hex64_lower_i4S3(const uint64_t v)
{
    /*MOV*/ fu::str str {};
    for (int i = 0; i < 16; i++)
    {
        const uint64_t c = ((v >> (uint64_t(unsigned(i)) * 4ull)) & 0xfull);
        str += char(((c < 10ull) ? (uint64_t(fu::u8('0')) + c) : ((uint64_t(fu::u8('a')) + c) - 10ull)));
    };
    return /*NRVO*/ str;
}

                                #ifndef DEF_x21x3D_lsKv82TBH74
                                #define DEF_x21x3D_lsKv82TBH74
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_erT9(a, b);
}
                                #endif

                                #ifndef DEF___aHOVfx5CRba
                                #define DEF___aHOVfx5CRba
inline static bool _aHOV(const StructDecl_yATi& a, const StructDecl_yATi& b)
{
    return (a.declDepth < b.declDepth) || ((a.declDepth == b.declDepth) ? (x3Cx3E_erT9(a.def, b.def) < 0) : false);
}
                                #endif

static void sort_i4S3(fu::vec_range_mut<StructDecl_yATi> a)
{
    StructDecl_yATi l {};
    StructDecl_yATi r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _aHOV(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_kU3gTiEBSeb
                                #define DEF_sort_kU3gTiEBSeb
inline void sort_kU3g(fu::vec_range_mut<StructDecl_yATi> a)
{
    sort_i4S3(a);
}
                                #endif

static void declareStruct_i4S3(fu::view<char> id, const Struct_5VgD& s, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (s.shape.basePrim)
        declarePrimitive_i4S3(id, s, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        const int tdef_stack0 = outputs._tdef_stack.size();
        outputs._tdef_stack += StructDecl_yATi{};
        fu::str header = (x7E_rA00(str_J9Iq(s.kind), " "_view) + id);
        outputs._tfwd_src += (header + ";\n"_view);
        const Type_KBIB& t = GET_i4S3(s.target, ctx, module).type;
        fu::str dedupe = ((s.name + "_"_view) + digest62_lweH(uint64_t(s.shape.hash), 0));
        /*MOV*/ fu::str def = (((((("\n                                #ifndef DEF_"_view + dedupe) + "\n                                #define DEF_"_view) + dedupe) + "\n"_view) + header) + "\n{"_view);
        if (options.dev & DevOptions_QEya_DEV_CG_LifetimeAnnots)
            def += ((("\n                                // shape_hash:    "_view + hex64_lower_i4S3(s.shape.hash)) + "\n                                // non_triv_mask: "_view) + hex64_lower_i4S3(s.shape.non_triv_mask));

        fu::view<char> indent = "\n    "_view;
        fu::str xOpBool {};
        fu::view<ScopeItem_ydOE> fields = s.items;
        for (int i = 0; i < fields.size(); i++)
        {
            const Overload_OYmb& field = GET_i4S3(target_z0Qq(fields[i]), ctx, module);
            if (field.kind == Kind_Idfg_field)
            {
                fu::str annot = typeAnnot_i4S3(field.type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
                if (annot != "void"_view)
                {
                    fu::str id_1 = ID_vRqJ(field.name);
                    def += ((((indent + annot) + " "_view) + id_1) + ";"_view);
                    if (field.flags & Flags_Lzg8_F_PREDICATE)
                        xOpBool += ("\n            || "_view + id_1);

                };
            }
            else
                BUG_i4S3(((x7E_rA00((("Non-field struct item: "_view + field.name) + " ("_view), str_J9Iq(field.kind)) + ") in "_view) + t.vtype.canon), _here, ctx);

        };
        if (!is_rx_copy_9CJm(t.vtype))
        {
            def += (((("\n    "_view + id) + "(const "_view) + id) + "&) = delete;"_view);
            def += (((("\n    "_view + id) + "("_view) + id) + "&&) = default;"_view);
            def += (((("\n    "_view + id) + "& operator=(const "_view) + id) + "&) = delete;"_view);
            def += (((("\n    "_view + id) + "& operator=("_view) + id) + "&&) = default;"_view);
        }
        else if (GET_i4S3(s.target, ctx, module).status & SolverStatus_h9em_SS_TYPE_RECUR)
        {
            def += (((("\n    "_view + id) + "(const "_view) + id) + "&) = default;"_view);
            def += (((("\n    "_view + id) + "("_view) + id) + "&&) = default;"_view);
            def += (((("\n    "_view + id) + "& operator=("_view) + id) + "&&) = default;"_view);
            def += (((((("\n    "_view + id) + "& operator=(const "_view) + id) + "& selfrec) { return *this = "_view) + id) + "(selfrec); }"_view);
        };
        def += "\n    explicit operator bool() const noexcept"_view;
        def += "\n    {"_view;
        def += "\n        return false"_view;
        def += xOpBool;
        def += "\n        ;"_view;
        def += "\n    }"_view;
        def += "\n};\n                                #endif\n"_view;
        outputs._tdef_stack.mutref(tdef_stack0) = StructDecl_yATi { def.destructive_move(), s.shape.declDepth };
        if (!tdef_stack0)
        {
            sort_kU3g(outputs._tdef_stack);
            for (int i_1 = 0; i_1 < outputs._tdef_stack.size(); i_1++)
                outputs._tdef += outputs._tdef_stack[i_1].def;

            outputs._tdef_stack.clear();
        };
    };
}

static fu::str typeAnnotBase_i4S3(const Type_KBIB& type, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_hxWW(type.vtype) && ((c.size() < 4) || ((c.size() == 4) && (fu::get_view(c, 1, 4) == "128"_view))))
        return primAnnotBase_i4S3(c, outputs, _here, ctx);
    else if (c == "never"_view)
        return fu::str(annotateNever_i4S3(outputs));
    else if (isIrrelevant_9CJm(type))
        return fu::str(annotateZST_i4S3());
    else
    {
        Type_KBIB arrayItem = tryClear_sliceable_1qjp(type.vtype, _here, ctx, module);
        if (arrayItem)
        {
            if (isIrrelevant_9CJm(arrayItem))
                BUG_i4S3("cg: We generate invalid c++ for void[]"_view, _here, ctx);
            else if (ifArray_annotateAsVec_i4S3(type) || (mode & Mode_Z9Je_M_IGNORE_REFERENCE))
            {
                if (arrayItem == t_byte)
                    return fu::str(annotateString_i4S3(outputs));
                else
                {
                    fu::str itemAnnot = typeAnnot_i4S3(arrayItem, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
                    include_i4S3(str_NOGxBIraLNl, outputs);
                    return ("fu::vec<"_view + itemAnnot) + ">"_view;
                };
            }
            else
            {
                fu::str itemAnnot = typeAnnot_i4S3(arrayItem, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
                if (is_ref_9CJm(type))
                {
                    if (ifArrayRef_annotateAsVecRange_i4S3(type))
                    {
                        include_i4S3(str_oHp7Y6FTuR1, outputs);
                        if (is_mutref_9CJm(type, _here, ctx) || (mode & Mode_Z9Je_M_MUTVAR))
                            return ("fu::vec_range_mut<"_view + itemAnnot) + ">"_view;
                        else
                            return ("fu::vec_range<"_view + itemAnnot) + ">"_view;

                    }
                    else if (ifArrayRef_annotateAsSlice_i4S3(type))
                    {
                        include_i4S3(str_mvJDIwjABBc, outputs);
                        if (is_mutref_9CJm(type, _here, ctx) || (mode & Mode_Z9Je_M_MUTVAR))
                            return ("fu::view_mut<"_view + itemAnnot) + ">"_view;
                        else
                            return ("fu::view<"_view + itemAnnot) + ">"_view;

                    }
                    else
                    {
                        BUG_i4S3("!ifArrayRef_annotateAsSlice"_view, _here, ctx);
                    };
                }
                else
                {
                    BUG_i4S3("!type.ifArray_annotateAsVec but !ref"_view, _here, ctx);
                };
            };
        }
        else
        {
            const Struct_5VgD& s = lookupUserType_SqDq(type.vtype, _here, ctx, module);
            /*MOV*/ fu::str id = structID_i4S3(s);
            const StructCanon_nOQ0 scp = parseStructCanon_p1TN(type.vtype.canon);
            if (add_dWZu(outputs._tfwd, scp))
                declareStruct_i4S3(id, s, outputs, _current_fn, _here, ctx, module, options);

            return /*NRVO*/ id;
        };
    };
}

static fu::str typeAnnot_i4S3(const Type_KBIB& type, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    /*MOV*/ fu::str fwd = typeAnnotBase_i4S3(type, mode, outputs, _current_fn, _here, ctx, module, options);
    if (is_ref_9CJm(type))
    {
        if (mode & Mode_Z9Je_M_STATIC_REF)
        {
            include_i4S3(str_jfOtyZaJDej, outputs);
            return ("fu::static_ref<"_view + fwd) + ">"_view;
        }
        else if ((is_sliceable_hxWW(type.vtype) && !ifArrayRef_annotateAsVec_i4S3(type)) || (fwd == "void"_view))
            return /*NRVO*/ fwd;
        else if (is_mutref_9CJm(type, _here, ctx))
            return fwd + "&"_view;
        else if (isPassByValue_hxWW(type.vtype))
        {
            if (((mode & Mode_Z9Je_M_ARGUMENT) | (mode & Mode_Z9Je_M_CONST)) && !(mode & Mode_Z9Je_M_FWDECL))
                return "const "_view + fwd;
            else
                return /*NRVO*/ fwd;

        }
        else if ((mode & Mode_Z9Je_M_MOVABLE) && !is_trivial_1qjp(type.vtype, _here, ctx, module))
            return fwd + "&"_view;
        else
            return ("const "_view + fwd) + "&"_view;

    }
    else if ((mode & Mode_Z9Je_M_ARGUMENT) && !isPassByValue_hxWW(type.vtype))
        return fwd + "&&"_view;
    else if ((mode & Mode_Z9Je_M_CONST) && is_trivial_1qjp(type.vtype, _here, ctx, module))
        return "const "_view + fwd;
    else
        return /*NRVO*/ fwd;

}

static PointerFlip_I1zX PointerFlip_cqST(const Type_KBIB& type, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if (!is_ref_9CJm(type) || (isPassByValue_hxWW(type.vtype) && !is_mutref_9CJm(type, _here, ctx)))
        return PointerFlip_I1zX_None;
    else if (!is_sliceable_hxWW(type.vtype) || ifArrayRef_annotateAsVec_i4S3(type))
        return PointerFlip_I1zX_RawPointer;
    else
        return PointerFlip_I1zX_VecRangeOrView;

}

                                #ifndef DEF_str_lWwuMs4lYQg
                                #define DEF_str_lWwuMs4lYQg
inline fu::str str_lWwu(const PointerFlip_I1zX n)
{
    if (n == PointerFlip_I1zX_None)
        return fu::str("None"_fu);
    else if (n == PointerFlip_I1zX_VecRangeOrView)
        return fu::str("VecRangeOrView"_fu);
    else if (n == PointerFlip_I1zX_RawPointer)
        return fu::str("RawPointer"_fu);

    return fu::i64dec(int64_t(n));
}
                                #endif

static fu::str TEMPVAR_declare_i4S3(const Type_KBIB& type, PointerFlip_I1zX& ptr_flip, fu::vec_range_mut<char> annot, const Mode_Z9Je mode, fu::vec_range<char> id, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    annot = typeAnnot_i4S3(type, mode, outputs, _current_fn, _here, ctx, module, options);
    ptr_flip = PointerFlip_cqST(type, _here, ctx);
    /*MOV*/ fu::str id_1 = (id ? fu::str(id) : x7E_rA00("_"_view, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += ((ptr_flip == PointerFlip_I1zX_RawPointer) ? ((fu::get_view_start0(annot, (annot.size() - 1)) + "* "_view) + id_1) : (is_trivial_1qjp(type.vtype, _here, ctx, module) ? ((annot + " "_view) + id_1) : (((annot + " "_view) + id_1) + " {}"_view)));
    if (annot == "int"_view)
    {
        if (!(ptr_flip == PointerFlip_I1zX_None))
            BUG_i4S3(x7E_rA00("TEMPVAR_declare: int."_view, str_lWwu(ptr_flip)), _here, ctx);

    };
    return /*NRVO*/ id_1;
}

static fu::str TEMPVAR_init_i4S3(fu::view<char> id, const PointerFlip_I1zX ptr_flip, fu::view<char> init, const bool immediate)
{
    if (immediate && (ptr_flip != PointerFlip_I1zX_VecRangeOrView))
        return (((ptr_flip == PointerFlip_I1zX_RawPointer) ? "(*("_view : "("_view) + TEMPVAR_init_i4S3(id, ptr_flip, init, false)) + ((ptr_flip == PointerFlip_I1zX_RawPointer) ? "))"_view : ")"_view);
    else if (ptr_flip == PointerFlip_I1zX_RawPointer)
    {
        return (id + " = &"_view) + (init ? (("("_view + init) + ")"_view) : fu::str{});
    }
    else if (ptr_flip == PointerFlip_I1zX_VecRangeOrView)
    {
        return (id + ".ptr_reassign"_view) + (init ? (("("_view + init) + ")"_view) : fu::str{});
    }
    else
        return (id + " = "_view) + init;

}

static fu::str cgCopy_i4S3(const Type_KBIB& type, fu::vec_range<char> src, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isPassByValue_hxWW(type.vtype))
        return fu::str(src);
    else
        return ((typeAnnotBase_i4S3(type, Mode_Z9Je_M_IGNORE_REFERENCE, outputs, _current_fn, _here, ctx, module, options) + "("_view) + src) + ")"_view;

}

static Target_VZrr nested_i4S3(const int locid, const cg_CurrentFn_1clL& _current_fn)
{
    if (locid)
    {
        const Target_VZrr* t;
        const Target_VZrr* t_1;
        return Target_xQNS((t = &(_current_fn.target), int(unsigned((((*t)._packed >> 40ull) & 0xfffffull)))), (t_1 = &(_current_fn.target), int(unsigned((((*t_1)._packed >> 20ull) & 0xfffffull)))), locid);
    }
    else
    {
        return Target_VZrr{};
    };
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static bool hasZeroes_i4S3(const Lifetime_llCF& lifetime, const cg_CurrentFn_1clL& _current_fn, const Context_UXD9& ctx, const Module_qqBh& module)
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
            const bool isStatic = ((r & 11u) == 1u);
            const bool isAlwaysMoveable = ((r == 0b0101u) || (r == 0b1001u));
            unsigned v;
            const int locid = ((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))));
            if (isStatic && isAlwaysMoveable)
                return true;
            else if (locid && !(locid < 0))
            {
                const SolvedNode_owql& n = GET_i4S3(nested_i4S3(locid, _current_fn), ctx, module).solved;
                if (is_ref_9CJm(n.type) && hasZeroes_i4S3(n.items[LET_INIT].type.lifetime, _current_fn, ctx, module))
                    return true;

            };
        };
    };
    return false;
}

static fu::str cgMoveOrDefault_i4S3(fu::view<char> src, Outputs_MiyU& outputs)
{
    include_i4S3(str_tQES2GAELA1, outputs);
    return ("fu::move_or_default("_view + src) + ")"_view;
}

static fu::str cgMove_i4S3(const Type_KBIB& type, fu::vec_range<char> src, const bool notRefOK, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (!(notRefOK || is_ref_9CJm(type)))
        BUG_i4S3("cgMove: Not a reference."_view, _here, ctx);
    else if (isPassByValue_hxWW(type.vtype))
        return cgCopy_i4S3(type, src, outputs, _current_fn, _here, ctx, module, options);
    else if (is_ref_9CJm(type) && is_sliceable_hxWW(type.vtype) && !ifArrayRef_annotateAsVec_i4S3(type))
        BUG_i4S3("cgMove: About to use the wrong move for a slice or vec-range."_view, _here, ctx);
    else if (hasZeroes_i4S3(type.lifetime, _current_fn, ctx, module))
        return cgMoveOrDefault_i4S3(src, outputs);
    else
        return ((("static_cast<"_view + typeAnnotBase_i4S3(type, Mode_Z9Je_M_IGNORE_REFERENCE, outputs, _current_fn, _here, ctx, module, options)) + "&&>("_view) + src) + ")"_view;

}

static fu::str TEMPVAR_consume_i4S3(fu::vec_range<char> id, const Type_KBIB& type, const PointerFlip_I1zX ptr_flip, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (ptr_flip == PointerFlip_I1zX_None)
        return cgMove_i4S3(type, id, true, outputs, _current_fn, _here, ctx, module, options);
    else if (ptr_flip == PointerFlip_I1zX_RawPointer)
        return "*"_view + id;
    else
        return fu::str(id);

}

                                #ifndef DEF___ZIRsJ1m9Tw5
                                #define DEF___ZIRsJ1m9Tw5
inline static void _ZIRs(const int i, const Argument_HFkq& host_arg, const int seqIdx, const Extended_Ebxv& ext, const Overload_OYmb& target, fu::view<SolvedNode_owql> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::vec<fu::str>& item_src, const bool RTL, fu::view<Argument_HFkq> host_args, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const SolvedNode_owql& arg = args[i];
    const SolvedNode_owql& arg_1 = ((isSimpleCpyMovAssign && (i == 1) && isAbbreviatedCopy_i4S3(arg, true)) ? only_Cntr(arg.items) : arg);
    bool junk = false;
    const bool mustDiscard = isIrrelevant_9CJm(arg_1.type);
    if (mustDiscard)
        junk = ((arg_1.kind == Kind_Idfg_empty) || ((arg_1.kind == Kind_Idfg_call) ? ((GET_i4S3(arg_1.target, ctx, module).kind == Kind_Idfg_var) || ((GET_i4S3(arg_1.target, ctx, module).kind == Kind_Idfg_type) ? !arg_1.items : false) || (GET_i4S3(arg_1.target, ctx, module).kind == Kind_Idfg_enumv)) : false));
    else if (is_never_9CJm(arg_1.type.vtype))
        BUG_i4S3("cgCall: arg.is_never"_view, _here, ctx);

    const int MUSTSEQ_bit = (1 << (i & 31));
    const int mustSeq_useTemporary = (MUSTSEQ_mask & MUSTSEQ_bit);
    fu::str _0 {};
    /*MOV*/ fu::str src = (junk ? fu::str{} : ((_0 = cgNode_i4S3(arg_1, (isNative ? Mode_Z9Je_M_ARG_TO_NATIVE : Mode_Z9Je{}), (!mustSeq_useTemporary ? host_arg.type : (*(Type_KBIB*)fu::NIL)), outputs, _current_fn, _here, ctx, module, options)) ? static_cast<fu::str&&>(_0) : BUG_i4S3("Empty arg src."_view, _here, ctx)));
    if (mustDiscard && src)
    {
        ooe_crosscheck |= MUSTSEQ_bit;
        if (ooe_header)
            ooe_header += ", "_view;

        ooe_header += "(void) "_view;
        ooe_header += src;
        src = fu::str{};
    };
    if (mustDiscard && (target.kind == Kind_Idfg_type) && !is_zst_1qjp(arg_1.type.vtype, _here, ctx, module))
        src = fu::str(str_X5dDmzgFGZ4);

    if (mustSeq_useTemporary)
    {
        if (junk)
            BUG_i4S3("Trying to MUSTSEQ a discarded argument, shouldnt happen."_view, _here, ctx);
        else
        {
            ooe_crosscheck |= MUSTSEQ_bit;
            if (isPointlessMustSeq_i4S3(arg_1, ext.args[i], ctx, module) || (((MUSTSEQ_mask & ~MUSTSEQ_bit) < MUSTSEQ_mask) && rest_isPointlessMustSeq_i4S3(seqIdx, args, RTL, host_args, _here, ctx, module)))
                noteDefect_i4S3(CGDefects_2L18_PointlessMustSeq, outputs, _here, ctx, options);
            else
            {
                if (ooe_header)
                    ooe_header += ", "_view;

                PointerFlip_I1zX ptr_flip {};
                fu::str annot {};
                fu::str id = TEMPVAR_declare_i4S3(arg_1.type, ptr_flip, annot, Mode_Z9Je{}, (*(fu::str*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
                ooe_header += TEMPVAR_init_i4S3(id, ptr_flip, src, false);
                src = TEMPVAR_consume_i4S3(id, arg_1.type, ptr_flip, outputs, _current_fn, _here, ctx, module, options);
            };
        };
    };
    item_src.mutref(i) = src.destructive_move();
}
                                #endif

                                #ifndef DEF_argsForward_GAogVJbF3Mi
                                #define DEF_argsForward_GAogVJbF3Mi
inline void argsForward_GAog(const bool RTL, fu::view<Argument_HFkq> host_args, const int seqIdx_start, const Extended_Ebxv& ext, const Overload_OYmb& target, fu::view<SolvedNode_owql> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::vec<fu::str>& item_src, const bool RTL_1, fu::view<Argument_HFkq> host_args_1, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const Argument_HFkq& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & Flags_Lzg8_F_IMPLICIT) || is_mutref_9CJm(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    _ZIRs(i, host_arg, seqIdx, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL_1, host_args_1, outputs, _current_fn, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
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

static fu::vec_range<char> ARG_cqST(const int i, fu::view<fu::str> item_src)
{
    return item_src[i];
}

static fu::str REST_i4S3(const int start, fu::view<fu::str> item_src)
{
    /*MOV*/ fu::str src {};
    for (int i = start; i < item_src.size(); i++)
    {
        fu::view<char> item = item_src[i];
        if (!(!item))
        {
            if (src)
                src += ", "_view;

            src += item_src[i];
        };
    };
    return /*NRVO*/ src;
}

static fu::str ooeWrap_i4S3(fu::vec_range<char> src, fu::view<char> ooe_header)
{
    if (ooe_header)
        return ((("("_view + ooe_header) + ", "_view) + src) + ")"_view;
    else
        return fu::str(src);

}

static fu::str emitMethodCall_i4S3(fu::view<char> id, fu::view<char> ooe_header, fu::view<fu::str> item_src)
{
    return ooeWrap_i4S3(((((ARG_cqST(0, item_src) + id) + "("_view) + REST_i4S3(1, item_src)) + ")"_view), ooe_header);
}

static bool affectedByIntegerPromotions_i4S3(const Type_KBIB& type)
{
    if (is_ref_9CJm(type) || !is_bitfield_hxWW(type.vtype))
        return false;
    else
    {
        fu::view<char> c = type.vtype.canon;
        return ((c.size() >= 2) && (c[1] == '8')) || ((c.size() >= 3) && (fu::get_view(c, 1, 3) == "16"_view));
    };
}

static fu::str unpromote_i4S3(fu::vec_range<char> expr, const SolvedNode_owql& node, const bool isNative, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isNative && affectedByIntegerPromotions_i4S3(node.type))
    {
        return ((typeAnnotBase_i4S3(node.type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options) + "("_view) + expr) + ")"_view;
    }
    else
        return fu::str(expr);

}

static fu::str emitPostfixOp_i4S3(fu::view<char> op, const SolvedNode_owql& node, const bool isNative, fu::view<fu::str> item_src, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    return unpromote_i4S3((ARG_cqST(0, item_src) + op), node, isNative, outputs, _current_fn, _here, ctx, module, options);
}

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

extern const Type_KBIB t_u8;
static fu::str emitBuiltin_i4S3(fu::view<char> id, fu::view<fu::str> args, const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (id == "/prim/convert"_view)
    {
        const Type_KBIB& output = node.type;
        const Type_KBIB& input = only_Cntr(node.items).type;
        fu::str cast = typeAnnotBase_i4S3(output, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
        if (is_integral_hxWW(input.vtype) && is_integral_hxWW(output.vtype) && (is_unsigned_hxWW(input.vtype) != is_unsigned_hxWW(output.vtype)))
        {
            Type_KBIB mid_t = (is_unsigned_hxWW(input.vtype) ? output : input);
            if (mid_t.vtype.canon[0] == 'i')
            {
                mid_t.vtype.canon.mutref(0) = 'u';
                if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
                {
                    fu::str inner = typeAnnotBase_i4S3(mid_t, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
                    return ((((cast + '(') + inner) + '(') + only_LjSj(args)) + "))"_view;
                };
            }
            else
            {
                BUG_i4S3(fu::view<char>{}, _here, ctx);
            };
        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu::str inner = typeAnnotBase_i4S3(t_u8, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
            return ((((cast + '(') + inner) + '(') + only_LjSj(args)) + "))"_view;
        };
        return ((cast + '(') + only_LjSj(args)) + ')';
    }
    else
        BUG_i4S3(("Unknown builtin: "_view + id), _here, ctx);

}

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

extern const unsigned q_USAGE;
                                #ifndef DEF___CvKGANY8Vd4
                                #define DEF___CvKGANY8Vd4
inline static void _CvKG(const int i, const Argument_HFkq& host_arg, fu::str& angle_brackets, fu::view<Argument_HFkq> host_args, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isIrrelevant_9CJm(host_arg.type))
    {
        if (angle_brackets)
            angle_brackets += ", "_view;

        Type_KBIB slot = host_args[i].type;
        slot.vtype.quals |= q_USAGE;
        fu::str _0 {};
        (_0 = typeAnnotBase_i4S3(slot, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options), (angle_brackets += static_cast<fu::str&&>(_0)));
    };
}
                                #endif

                                #ifndef DEF_argsForward_QnU0KQtW8K5
                                #define DEF_argsForward_QnU0KQtW8K5
inline void argsForward_QnU0(const bool RTL, fu::view<Argument_HFkq> host_args, const int seqIdx_start, fu::str& angle_brackets, fu::view<Argument_HFkq> host_args_1, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const Argument_HFkq& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & Flags_Lzg8_F_IMPLICIT) || is_mutref_9CJm(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    _CvKG(i, host_arg, angle_brackets, host_args_1, outputs, _current_fn, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

                                #ifndef DEF_ends_L30JVW8oAb6
                                #define DEF_ends_L30JVW8oAb6
inline bool ends_L30J(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static fu::str emitFunctionCall_i4S3(/*MOV*/ fu::str&& id, fu::view<char> open, fu::view<char> close, fu::view<char> ooe_header, fu::view<fu::str> item_src, const bool RTL, fu::view<Argument_HFkq> host_args, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const int tEmplate = find_7SLc(id, "<>"_view);
    if (tEmplate > 0)
    {
        fu::str angle_brackets {};
        argsForward_QnU0(RTL, host_args, 0, angle_brackets, host_args, outputs, _current_fn, _here, ctx, module, options);
        id = ((((fu::get_view_start0(id, tEmplate) + '<') + angle_brackets) + '>') + fu::get_view(id, (tEmplate + 2)));
    };
    fu::str args = ((open + REST_i4S3(0, item_src)) + close);
    if ((args == "()"_view) && ends_L30J(id, ')'))
        return id.destructive_move();
    else
        return ooeWrap_i4S3((id + args), ooe_header);

}

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

static bool binSkipParens_i4S3(fu::view<char> id, const Mode_Z9Je mode)
{
    if (mode & Mode_Z9Je_M_STMT)
        return true;
    else if (mode & Mode_Z9Je_M_PARENS)
    {
        if (last_1k4v(id) == '=')
        {
            if ((id == "=="_view) || (id == "!="_view))
                return true;
            else
                return false;

        }
        else
            return true;

    }
    else
        return false;

}

static fu::str emitBinaryOp_i4S3(fu::view<char> op, const SolvedNode_owql& node, const Mode_Z9Je mode, fu::view<SolvedNode_owql> args, const bool isNative, fu::view<char> ooe_header, fu::view<fu::str> item_src, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (args.size() == 2)
    {
        if (binSkipParens_i4S3(op, mode) && !ooe_header)
            return (((ARG_cqST(0, item_src) + " "_view) + op) + " "_view) + ARG_cqST(1, item_src);
        else
        {
            fu::str _0 {};
            return (_0 = unpromote_i4S3((((((("("_view + ARG_cqST(0, item_src)) + " "_view) + op) + " "_view) + ARG_cqST(1, item_src)) + ")"_view), node, isNative, outputs, _current_fn, _here, ctx, module, options), ooeWrap_i4S3(static_cast<fu::str&&>(_0), ooe_header));
        };
    }
    else
        BUG_i4S3("args.len != 2"_view, _here, ctx);

}

static fu::str cgDefault_i4S3(const Type_KBIB& type, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (is_mutref_9CJm(type, _here, ctx))
        BUG_i4S3("Cannot definit mutrefs."_view, _here, ctx);
    else if (isIrrelevant_9CJm(type))
    {
        noteDefect_i4S3(CGDefects_2L18_IrrelevantLiteral, outputs, _here, ctx, options);
        return fu::str("void()"_fu);
    }
    else
    {
        if (is_ref_9CJm(type) && !isPassByValue_hxWW(type.vtype))
        {
            if (!is_sliceable_hxWW(type.vtype) || ifArray_annotateAsVec_i4S3(type))
            {
                include_i4S3(str_NgHIYTVAMJ8, outputs);
                if (is_primitive_hxWW(type.vtype))
                    BUG_i4S3("cgDefault: Genering NIL refs to primitives."_view, _here, ctx);
                else
                {
                    return ("(*("_view + typeAnnot_i4S3(clear_refs_9CJm(Type_KBIB(type)), Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options)) + "*)fu::NIL)"_view;
                };
            };
        };
        return typeAnnot_i4S3(type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options) + "{}"_view;
    };
}

static bool isInlLinked_i4S3(const Overload_OYmb& overload)
{
    return !!(overload.flags & Flags_Lzg8_F_TEMPLATE);
}

                                #ifndef DEF_x3Cx3E_XvO8JNMMsGh
                                #define DEF_x3Cx3E_XvO8JNMMsGh
inline int x3Cx3E_XvO8(const uint64_t a, const uint64_t b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YjZYNFAHEO6
                                #define DEF_x3Cx3E_YjZYNFAHEO6
inline int x3Cx3E_YjZY(const Target_VZrr& a, const Target_VZrr& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_XvO8(a._packed, b._packed)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_add_sjqYZjk1ROa
                                #define DEF_add_sjqYZjk1ROa
inline bool add_sjqY(Set_R8IU& _, const Target_VZrr& key)
{
    fu::view<Target_VZrr> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YjZY(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, Target_VZrr(key));
    return true;
}
                                #endif

static bool isExtLinked_i4S3(const Overload_OYmb& overload)
{
    return SolverStatus_h9em((overload.status & SolverStatus_h9em_SS_EXTERNAL_LINKAGE)) || ((overload.flags & Flags_Lzg8_F_TEMPLATE) && (overload.flags & Flags_Lzg8_F_PUB));
}

static fu::str fnLinkage_i4S3(const Overload_OYmb& overload)
{
    return ((is_never_9CJm(overload.type.vtype) ? "[[noreturn]] "_view : fu::view<char>{}) + (isInlLinked_i4S3(overload) ? "inline "_view : fu::view<char>{})) + (!isExtLinked_i4S3(overload) ? "static "_view : fu::view<char>{});
}

static bool isOp_i4S3(const Target_VZrr& target, const Context_UXD9& ctx, const Module_qqBh& module)
{
    const Flags_Lzg8 flags = GET_i4S3(target, ctx, module).flags;
    if (!(flags & Flags_Lzg8_F_OPERATOR))
        return false;
    else if (GET_i4S3(target, ctx, module).kind == Kind_Idfg___native)
        return true;
    else
    {
        int numArgs {};
        bool primsOnly = true;
        fu::view<Argument_HFkq> args = EXT_i4S3(target, ctx, module).args;
        for (int i = 0; i < args.size(); i++)
        {
            const Type_KBIB& argType = args[i].type;
            if (!isIrrelevant_9CJm(argType))
            {
                numArgs++;
                if (!is_primitive_hxWW(argType.vtype))
                    primsOnly = false;

            };
        };
        if (!numArgs || (numArgs > 2) || primsOnly)
            return false;
        else
        {
            fu::view<char> name = GET_i4S3(target, ctx, module).name;
            if (numArgs > 1)
                return hasBinary_vRqJ(name);
            else
                return hasUnary_vRqJ(name);

        };
    };
}

static fu::view<char> valid_operator_cqST(fu::view<char> str)
{
    int start = 0;
    bool some = false;
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
        {
            if (!some)
                start = (i + 1);
            else
                return fu::get_view(str, start, i);

        }
        else
            some = true;

    };
    if (start)
        return fu::get_view(str, start);
    else
        return str;

}

static char hex_i4S3(const unsigned x)
{
    if (x < 10u)
        return char((unsigned(fu::u8('0')) + x));
    else
        return char((unsigned(fu::u8('A')) + (x - 10u)));

}

static fu::str xHH_i4S3(const unsigned c)
{
    return ("x"_view + hex_i4S3(((c >> 4u) & 0xfu))) + hex_i4S3(((c >> 0u) & 0xfu));
}

static fu::str valid_identifier_i4S3(fu::str&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (!(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_')))
            str = ((fu::get_view_start0(str, i) + xHH_i4S3(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1)));

    };
    return ID_vRqJ(str);
}

static fu::str fnID_i4S3(const Target_VZrr& target, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    const Overload_OYmb& overload = GET_i4S3(target, ctx, module);
    fu::vec_range<char> id = (overload.name ? overload.name : BUG_i4S3(fu::view<char>{}, _here, ctx));
    if (isOp_i4S3(target, ctx, module))
        return "operator"_view + valid_operator_cqST(id);
    else
    {
        /*MOV*/ fu::str ret = valid_identifier_i4S3(fu::str(id));
        if (EXT_i4S3(target, ctx, module).sighash && !(GET_i4S3(target, ctx, module).flags & Flags_Lzg8_F_EXTERN))
        {
            const TEA_87LR* tea;
            ((ret == "_"_view) ? ret : (ret += "_"_view)) += digest62_lweH((tea = &(EXT_i4S3(target, ctx, module).sighash), (uint64_t((*tea).v0) | (uint64_t((*tea).v1) << 32ull))), SIGHASH_CHARS);
        };
        return /*NRVO*/ ret;
    };
}

static fu::str cgFnPrototype_i4S3(const Target_VZrr& target, const bool fnptr, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    cg_CurrentFn_1clL current_fn0 = cg_CurrentFn_1clL { Target_VZrr(target), 0, fu::vec<fu::str>{}, fu::vec<cg_Block_OvNG>{}, 0, Helpers_DyqV{}, Helpers_DyqV{}, Helpers_DyqV{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<int>{}, BitSet_mmp7{}, BitSet_mmp7{}, fu::vec<int>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    /*MOV*/ fu::str src {};
    const Overload_OYmb& overload = GET_i4S3(target, ctx, module);
    if (!fnptr)
    {
        fu::str linkage = fnLinkage_i4S3(overload);
        src += linkage;
        if ((int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid) && !isExtLinked_i4S3(overload) && !isInlLinked_i4S3(overload))
            BUG_i4S3("cgFnPrototype: !isExtLinked but off-module"_view, _here, ctx);

    };

    {
        const Type_KBIB& ret = (overload.type ? overload.type : BUG_i4S3(fu::view<char>{}, _here, ctx));
        fu::str annot = typeAnnot_i4S3(ret, Mode_Z9Je_M_RETVAL, outputs, _current_fn, _here, ctx, module, options);
        src += (annot + " "_view);
    };

    {
        /*MOV*/ fu::str name = fnID_i4S3(target, _here, ctx, module);
        src += (fnptr ? (("(*"_view + name) + ")"_view) : name.destructive_move());
    };

    {
        src += "("_view;
        fu::view<Argument_HFkq> args = EXT_i4S3(target, ctx, module).args;
        bool first = true;
        for (int i = 0; i < args.size(); i++)
        {
            const Type_KBIB& arg = args[i].type;
            if (!(isIrrelevant_9CJm(arg)))
            {
                if (first)
                    first = false;
                else
                    src += ", "_view;

                src += typeAnnot_i4S3(arg, (Mode_Z9Je_M_ARGUMENT | Mode_Z9Je_M_FWDECL), outputs, _current_fn, _here, ctx, module, options);
            };
        };
        if ((overload.flags & Flags_Lzg8_F_OPERATOR) && hasPostfix_vRqJ(overload.name))
            src += ", /*postfix*/int"_view;

        src += ")"_view;
    };
    return /*NRVO*/ src;
}

static void ensureFwdDecl_i4S3(const Target_VZrr& target, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Overload_OYmb& overload = GET_i4S3(target, ctx, module);
    if (!((overload.kind != Kind_Idfg_fn) || (overload.name == "main"_view)))
    {
        if (!(!add_sjqY(outputs._ffwd, target)))
        {
            fu::str fwdDecl = (cgFnPrototype_i4S3(target, false, outputs, _current_fn, _here, ctx, module, options) + ";\n"_view);
            if (overload.flags & Flags_Lzg8_F_HOTSWAP)
            {
                fu::str fnPtr = (("extern "_view + cgFnPrototype_i4S3(target, true, outputs, _current_fn, _here, ctx, module, options)) + ";\n"_view);
                outputs._ffwd_live_client += fnPtr;
                outputs._ffwd_live_nclient += fwdDecl;
            }
            else
                outputs._ffwd_src += fwdDecl;

        };
    };
}

                                #ifndef DEF_has_tphJshBlFLg
                                #define DEF_has_tphJshBlFLg
inline bool has_tphJ(const Set_R8IU& _, const Target_VZrr& key)
{
    fu::view<Target_VZrr> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YjZY(keys_asc[i], key);
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

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_MAIN_needed
                                #define DEF_MAIN_needed
inline constexpr int MAIN_needed = (1 << 0);
                                #endif

                                #ifndef DEF_MAIN_argv
                                #define DEF_MAIN_argv
inline constexpr int MAIN_argv = (1 << 1);
                                #endif

                                #ifndef DEF_MAIN_zst
                                #define DEF_MAIN_zst
inline constexpr int MAIN_zst = (1 << 2);
                                #endif

static void prefix_i4S3(const BitSet_mmp7& bitset, fu::str& prefix)
{
    for (int i = 0; i < bitset._data.size(); i++)
    {
        unsigned v = unsigned(bitset._data[i]);
        prefix += hex_i4S3((v & 0xfu));
        if ((v >>= 4u))
            prefix += hex_i4S3(v);

    };
}

static bool isHoistable_i4S3(const int locid)
{
    return locid > 0;
}

static fu::view<fu::str> _ids_used_WXxA(const cg_CurrentFn_1clL& _current_fn)
{
    return _current_fn._ids_used;
}

static fu::vec<fu::str>& _ids_used_i4S3(cg_CurrentFn_1clL& _current_fn)
{
    return _current_fn._ids_used;
}

                                #ifndef DEF_ensure_2Giz4sIWyKi
                                #define DEF_ensure_2Giz4sIWyKi
inline int& ensure_2Giz(fu::vec_range_mut<int> a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_iF_KelPbrBUghh
                                #define DEF_iF_KelPbrBUghh
inline int iF_KelP(fu::view<int> a, const int i)
{
    if (uNsigned_40Hl(i) < uNsigned_40Hl(a.size()))
        return a[i];
    else
    {
        return int{};
    };
}
                                #endif

static fu::str localID_i4S3(const Target_VZrr& target, const bool dedupe, cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    const Overload_OYmb& o = GET_i4S3(target, ctx, module);
    /*MOV*/ fu::str id = fu::str(o.name);
    const ClosureID_XYK2 cid = tryParseClosureID_UvH3(id, _here, ctx);
    if (cid.target)
        id = GET_i4S3(cid.target, ctx, module).name;

    id = valid_identifier_i4S3(ID_vRqJ(id));
    unsigned v;
    const int locid = (v = unsigned((target._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    if (locid)
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                /*MOV*/ fu::str candidate = (dupes ? x7E_rA00((id + '_'), fu::i64dec(dupes)) : fu::str(id));
                for (int i = 0; i < _ids_used_WXxA(_current_fn).size(); i++)
                {
                    if (_ids_used_WXxA(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_5;
                    };
                };
                _ids_used_i4S3(_current_fn) += candidate.destructive_move();
                break;
              } BL_5:;
            };
            if (dupes)
                ((locid < 0) ? ensure_2Giz(_current_fn._ids_dedupe_n, -locid) : ensure_2Giz(_current_fn._ids_dedupe_p, +locid)) = dupes;

        };
        const int dupes = ((locid < 0) ? iF_KelP(_current_fn._ids_dedupe_n, -locid) : iF_KelP(_current_fn._ids_dedupe_p, +locid));
        if (dupes)
            return x7E_rA00((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

static bool isHoisted_i4S3(const int locid, const cg_CurrentFn_1clL& _current_fn)
{
    if (isHoistable_i4S3(locid))
        return has_jvxt(_current_fn._hoisted, locid);
    else
        return false;

}

                                #ifndef DEF_use_STATIC_REF
                                #define DEF_use_STATIC_REF
inline constexpr bool use_STATIC_REF = true;
                                #endif

static bool isConstexpr_i4S3(const SolvedNode_owql& expr, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if ((expr.kind == Kind_Idfg_int) || (expr.kind == Kind_Idfg_char) || (expr.kind == Kind_Idfg_real) || (expr.kind == Kind_Idfg_bool))
        return true;
    else
    {
        if (expr.kind == Kind_Idfg_call)
        {
            const Overload_OYmb& o = GET_i4S3(expr.target, ctx, module);
            if ((o.kind == Kind_Idfg___native) && (o.flags & Flags_Lzg8_F_OPERATOR))
            {
                for (int i = 0; i < expr.items.size(); i++)
                {
                    if (!isConstexpr_i4S3(expr.items[i], ctx, module))
                        return false;

                };
                return true;
            }
            else if (o.kind == Kind_Idfg_var)
                return globalVar_isConstexpr_i4S3(o, ctx, module);

        };
        return false;
    };
}

static bool globalVar_isConstexpr_i4S3(const Overload_OYmb& o, const Context_UXD9& ctx, const Module_qqBh& module)
{
    return isConstexpr_i4S3(o.solved.items[LET_INIT], ctx, module);
}

static bool TODO_FIX_useStaticRef_i4S3(const Target_VZrr& target, const Context_UXD9& ctx, const Module_qqBh& module)
{
    unsigned v;
    if ((v = unsigned((target._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))) || !use_STATIC_REF)
        return false;
    else
    {
        const Type_KBIB& place_type = GET_i4S3(target, ctx, module).solved.type;
        return is_ref_9CJm(place_type) && !isPassByValue_hxWW(place_type.vtype) && (!is_sliceable_hxWW(place_type.vtype) || ifArray_annotateAsVec_i4S3(place_type)) && !globalVar_isConstexpr_i4S3(GET_i4S3(target, ctx, module), ctx, module);
    };
}

                                #ifndef DEF___kGaHoSx5kHj
                                #define DEF___kGaHoSx5kHj
inline static void _kGaH(const int locid, const bool isTemp, const bool isStatic, const bool isArgIdx, const bool isAlwaysMoveable, fu::str& lt, cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if (lt)
        lt += "|"_view;

    if (isTemp)
        lt += "temp"_view;
    else if (isStatic)
        lt += (isAlwaysMoveable ? "zeroes"_view : "static"_view);
    else if (isArgIdx)
        BUG_i4S3("WTF"_view, _here, ctx);
    else
    {
        fu::str _0 {};
        (_0 = localID_i4S3(nested_i4S3(locid, _current_fn), false, _current_fn, _here, ctx, module), (lt += static_cast<fu::str&&>(_0)));
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_pBlQWkOQIW0
                                #define DEF_Lifetime_each_pBlQWkOQIW0
inline void Lifetime_each_pBlQ(const Lifetime_llCF& lifetime, fu::str& lt, cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
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
        _kGaH(((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), (r == 0b1001u), ((r & 11u) == 1u), ((r & 3u) == 3u), ((r == 0b0101u) || (r == 0b1001u)), lt, _current_fn, _here, ctx, module);
    };
}
                                #endif

static fu::str binding_i4S3(const Target_VZrr& target, const bool forceValue, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Overload_OYmb& o = GET_i4S3(target, ctx, module);
    const Type_KBIB& place_type = o.solved.type;
    unsigned v;
    const bool isArg = ((v = unsigned((target._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))) < 0);
    Type_KBIB place_type_1 = (forceValue ? clear_refs_9CJm(Type_KBIB(place_type)) : Type_KBIB(place_type));
    unsigned v_1;
    unsigned v_2;
    const bool alreadyDeclared = (isHoistable_i4S3((v_1 = unsigned((target._packed & 0xfffffull)), int(((v_1 >> 1u) ^ ((v_1 & 1u) ? 0xffffffffu : 0x0u))))) ? !add_once_jvxt(_current_fn._declared, (v_2 = unsigned((target._packed & 0xfffffull)), int(((v_2 >> 1u) ^ ((v_2 & 1u) ? 0xffffffffu : 0x0u))))) : false);
    /*MOV*/ fu::str id = localID_i4S3(target, !alreadyDeclared, _current_fn, _here, ctx, module);
    unsigned v_3;
    const bool isHoisted = isHoisted_i4S3((v_3 = unsigned((target._packed & 0xfffffull)), int(((v_3 >> 1u) ^ ((v_3 & 1u) ? 0xffffffffu : 0x0u)))), _current_fn);
    const Mode_Z9Je mode = (((is_mutref_9CJm(o.type, _here, ctx) ? Mode_Z9Je_M_MUTVAR : Mode_Z9Je{}) | (SolverStatus_h9em((o.status & SolverStatus_h9em_SS_MOVED_FROM)) ? Mode_Z9Je_M_MOVABLE : Mode_Z9Je{})) | (TODO_FIX_useStaticRef_i4S3(target, ctx, module) ? Mode_Z9Je_M_STATIC_REF : Mode_Z9Je{}));
    if (isHoisted)
    {
        if (!alreadyDeclared)
        {
            fu::str annot {};
            PointerFlip_I1zX ptr_flip {};
            TEMPVAR_declare_i4S3(place_type_1, ptr_flip, annot, mode, id, outputs, _current_fn, _here, ctx, module, options);
        };
        return /*NRVO*/ id;
    }
    else
    {
        /*MOV*/ fu::str annot = typeAnnot_i4S3(place_type_1, ((mode | (!is_mutref_9CJm(o.type, _here, ctx) ? Mode_Z9Je_M_CONST : Mode_Z9Je{})) | (isArg ? Mode_Z9Je_M_ARGUMENT : Mode_Z9Je{})), outputs, _current_fn, _here, ctx, module, options);
        const SolverStatus_h9em isUnused = SolverStatus_h9em((o.status & SolverStatus_h9em_SS_UNUSED));
        if (isArg && isUnused)
            return /*NRVO*/ annot;
        else
        {
            if (!isHoisted)
            {
                unsigned v_4;
                _current_fn._live_locals += (v_4 = unsigned((target._packed & 0xfffffull)), int(((v_4 >> 1u) ^ ((v_4 & 1u) ? 0xffffffffu : 0x0u))));
            };
            /*MOV*/ fu::str head = (annot ? annot : BUG_i4S3(fu::view<char>{}, _here, ctx)).destructive_move();
            if (!isArg && is_ref_9CJm(place_type_1) && DevOptions_QEya((options.dev & DevOptions_QEya_DEV_CG_LifetimeAnnots)))
            {
                fu::str lt {};
                Lifetime_each_pBlQ(place_type_1.lifetime, lt, _current_fn, _here, ctx, module);
                head += ((" /*"_view + lt) + "*/"_view);
            };
            head += (" "_view + id);
            if (isUnused)
                head = ("[[maybe_unused]] "_view + head);

            if (GET_i4S3(target, ctx, module).status & SolverStatus_h9em_SS_MOVED_FROM)
                head = ("/*MOV*/ "_view + head);

            return /*NRVO*/ head;
        };
    };
}

static fu::str binding_EiZ8(const Argument_HFkq& arg, const bool forceValue, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::str prefix {};
    if (DevOptions_QEya((options.dev & DevOptions_QEya_DEV_CG_LifetimeAnnots)) && is_ref_9CJm(arg.type) && (arg.may_alias || arg.may_invalidate))
    {
        prefix += "/*"_view;
        prefix_i4S3(arg.may_alias, prefix);
        prefix += ":"_view;
        prefix_i4S3(arg.may_invalidate, prefix);
        prefix += "*/ "_view;
    };
    return prefix + binding_i4S3(arg.target, forceValue, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgFnSignature_i4S3(const Target_VZrr& target, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Overload_OYmb& overload = GET_i4S3(target, ctx, module);
    fu::view<Argument_HFkq> host_args = EXT_i4S3(target, ctx, module).args;
    fu::str annot = typeAnnot_i4S3((overload.type ? overload.type : BUG_i4S3(fu::view<char>{}, _here, ctx)), Mode_Z9Je_M_RETVAL, outputs, _current_fn, _here, ctx, module, options);
    fu::str id = fu::str(overload.name);
    if (id == "main"_view)
    {
        outputs._hasMain = MAIN_needed;
        id = fu::str("fu_MAIN"_fu);
        if (host_args)
            outputs._hasMain |= MAIN_argv;

        if (isIrrelevant_9CJm(overload.type))
            outputs._hasMain |= MAIN_zst;

    }
    else
        id = fnID_i4S3(target, _here, ctx, module);

    /*MOV*/ fu::str src = ((((fnLinkage_i4S3(overload) + annot) + " "_view) + id) + "("_view);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (!(isIrrelevant_9CJm(host_args[i].type)))
        {
            if (some)
                src += ", "_view;

            some = true;
            src += binding_EiZ8(host_args[i], false, outputs, _current_fn, _here, ctx, module, options);
        };
    };
    if ((overload.flags & Flags_Lzg8_F_OPERATOR) && hasPostfix_vRqJ(overload.name))
        src += ", /*postfix*/int"_view;

    src += ")"_view;
    return /*NRVO*/ src;
}

static void set_isHoisted_i4S3(const int locid, cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if (locid)
    {
        if (locid < 0)
            BUG_i4S3("Hoisted an argument."_view, _here, ctx);

    }
    else
        BUG_i4S3("set_isHoisted: Not a local."_view, _here, ctx);

    add_jvxt(_current_fn._hoisted, locid);
}

                                #ifndef DEF___P2c8CZSvnL8
                                #define DEF___P2c8CZSvnL8
inline static void _P2c8(const int locid, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isHoistable_i4S3(locid) && !has_jvxt(_current_fn._declared, locid))
    {
        set_isHoisted_i4S3(locid, _current_fn, _here, ctx);
        binding_i4S3(nested_i4S3(locid, _current_fn), false, outputs, _current_fn, _here, ctx, module, options);
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_LjoCutYboY7
                                #define DEF_Lifetime_each_LjoCutYboY7
inline void Lifetime_each_LjoC(const Lifetime_llCF& lifetime, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
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
        _P2c8(((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), outputs, _current_fn, _here, ctx, module, options);
    };
}
                                #endif

                                #ifndef DEF_if_last_ztEiWiGd5V1
                                #define DEF_if_last_ztEiWiGd5V1
inline const SolvedNode_owql& if_last_ztEi(fu::view<SolvedNode_owql> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(SolvedNode_owql*)fu::NIL);

}
                                #endif

                                #ifndef DEF_x3Dx3D_XITs8EMohCa
                                #define DEF_x3Dx3D_XITs8EMohCa
inline bool operator==(const Target_VZrr& a, const Target_VZrr& b)
{
    return !x3Cx3E_YjZY(a, b);
}
                                #endif

static bool exprOK_i4S3(fu::view<SolvedNode_owql> nodes)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const SolvedNode_owql& n = nodes[i];
        const Kind_Idfg k = n.kind;
        if ((k == Kind_Idfg_jump) || (k == Kind_Idfg_loop) || (k == Kind_Idfg_try) || (k == Kind_Idfg_defer) || (k == Kind_Idfg_pragma))
            return false;
        else if (!exprOK_i4S3(n.items))
            return false;

    };
    return true;
}

static fu::str cgComma_i4S3(fu::view<SolvedNode_owql> nodes, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::vec<fu::str> items = cgNodes_i4S3(nodes, Mode_Z9Je_M_CHECK_NEVER_LTR, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
    if (!items.size())
    {
        noteDefect_i4S3(CGDefects_2L18_IrrelevantLiteral, outputs, _here, ctx, options);
        return fu::str("void()"_fu);
    }
    else if (items.size() == 1)
        return fu::str(items[0]);
    else
    {
        fu::str src = fu::str("("_fu);
        for (int i = 0; i < items.size(); i++)
        {
            if (i)
                src += ", "_view;

            src += items[i];
        };
        return src + ")"_view;
    };
}

                                #ifndef DEF_Lifetime_each_59yHUw2tAS2
                                #define DEF_Lifetime_each_59yHUw2tAS2
inline void Lifetime_each_59yH(const Lifetime_llCF& lifetime, bool& isMovedFrom, const cg_CurrentFn_1clL& _current_fn, const Context_UXD9& ctx, const Module_qqBh& module)
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
        if (!locid || !SolverStatus_h9em((GET_i4S3(nested_i4S3(locid, _current_fn), ctx, module).status & SolverStatus_h9em_SS_MOVED_FROM)))
        {
            isMovedFrom = false;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF_last_bV6oHbs6cb3
                                #define DEF_last_bV6oHbs6cb3
inline const SolvedNode_owql& last_bV6o(fu::view<SolvedNode_owql> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail(fu::str("len == 0"_fu));

}
                                #endif

                                #ifndef DEF___r1Smsdpx7R7
                                #define DEF___r1Smsdpx7R7
inline static void _r1Sm(const SolvedNode_owql& item, fu::view<int> surviving_locals, const cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    TEST_noDanglingRefs_i4S3(surviving_locals, item, _current_fn, _here, ctx, module);
}
                                #endif

                                #ifndef DEF_each_ycmPqZJx0Hb
                                #define DEF_each_ycmPqZJx0Hb
inline void each_ycmP(fu::view<SolvedNode_owql> a, fu::view<int> surviving_locals, const cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    for (int i = 0; i < a.size(); i++)
        _r1Sm(a[i], surviving_locals, _current_fn, _here, ctx, module);

}
                                #endif

                                #ifndef DEF_find_cnEOb0yQcL9
                                #define DEF_find_cnEOb0yQcL9
inline int find_cnEO(fu::view<int> haystack, const int needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_b66pz2alRJ0
                                #define DEF_has_b66pz2alRJ0
inline bool has_b66p(fu::view<int> a, const int b)
{
    return (find_cnEO(a, b) >= 0);
}
                                #endif

                                #ifndef DEF___kcFfxIv0lZc
                                #define DEF___kcFfxIv0lZc
inline static void _kcFf(const int locid, fu::view<int> surviving_locals, const cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if (!(!locid || has_b66p(surviving_locals, locid)))
    {
        if (!((locid < 0) || isHoisted_i4S3(locid, _current_fn)))
        {
            const Overload_OYmb& o = GET_i4S3(nested_i4S3(locid, _current_fn), ctx, module);
            if (o.solved.type.lifetime)
            {
                TEST_noDanglingRefs_cqST(surviving_locals, o.solved.type.lifetime, _current_fn, _here, ctx, module);
            }
            else
                BUG_i4S3(("TEST_noDanglingRefs: returning a dangling reference to "_view + qBAD_e44U(o.name)), _here, ctx);

        };
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_v9GQcqMtlY8
                                #define DEF_Lifetime_each_v9GQcqMtlY8
inline void Lifetime_each_v9GQ(const Lifetime_llCF& lifetime, fu::view<int> surviving_locals, const cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
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
        _kcFf(((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), surviving_locals, _current_fn, _here, ctx, module);
    };
}
                                #endif

static void TEST_noDanglingRefs_cqST(fu::view<int> surviving_locals, const Lifetime_llCF& lifetime, const cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    Lifetime_each_v9GQ(lifetime, surviving_locals, _current_fn, _here, ctx, module);
}

static void TEST_noDanglingRefs_i4S3(fu::view<int> surviving_locals, const SolvedNode_owql& node, const cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if (!(!is_ref_9CJm(node.type)))
    {
        if ((node.kind == Kind_Idfg_if) || (node.kind == Kind_Idfg_and) || (node.kind == Kind_Idfg_or))
        {
            each_ycmP(fu::get_view(node.items, ((node.kind == Kind_Idfg_if) ? 1 : 0)), surviving_locals, _current_fn, _here, ctx, module);
        };
        TEST_noDanglingRefs_cqST(surviving_locals, node.type.lifetime, _current_fn, _here, ctx, module);
    };
}

                                #ifndef DEF_has_YIf6pzpE4yj
                                #define DEF_has_YIf6pzpE4yj
inline bool has_YIf6(fu::view<char> a, fu::view<char> b)
{
    return (find_7SLc(a, b) >= 0);
}
                                #endif

                                #ifndef DEF_has_Mnu2KTFEuhg
                                #define DEF_has_Mnu2KTFEuhg
inline bool has_Mnu2(fu::view<char> a, const char b)
{
    return (find_ZKsG(a, b) >= 0);
}
                                #endif

static fu::str cgBlock_cqST(fu::view<SolvedNode_owql> nodes, const bool skipCurlies, const bool gnuStmtExpr, const Helpers_DyqV& helpers, const Type_KBIB& type, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    /*MOV*/ fu::str indent0 = fu::str(outputs._indent);
    const int ids_used0 = _current_fn._ids_used.size();
    const int live_locals0 = _current_fn._live_locals.size();
    fu_DEFER(
    {
        outputs._indent = static_cast<fu::str&&>(indent0);
        _current_fn._ids_used.shrink(ids_used0);
        _current_fn._live_locals.shrink(live_locals0);
    });
    outputs._indent += "    "_view;
    fu::str open = fu::str("{"_fu);
    fu::str close = fu::str((gnuStmtExpr ? str_7C9m5sHpsVk : str_88VsvxHhro2));
    fu::str trail {};
    fu::str name = x7E_rA00("BL_"_view, fu::i64dec(_current_fn.num_labels++));
    bool has_val = !isIrrelevant_9CJm(type);
    PointerFlip_I1zX ptr_flip {};
    if (is_never_9CJm(type.vtype))
    {
        has_val = false;
        if (gnuStmtExpr)
        {
            annotateNever_i4S3(outputs);
            close = (("    (void)0;"_view + indent0) + "}), fu::unreachable)"_view);
        };
    }
    else if (has_val)
    {
        bool isMovedFrom = is_ref_9CJm(type);
        Lifetime_each_59yH(type.lifetime, isMovedFrom, _current_fn, ctx, module);
        fu::str annot {};
        fu::str id = TEMPVAR_declare_i4S3(type, ptr_flip, annot, (isMovedFrom ? Mode_Z9Je_M_MOVABLE : Mode_Z9Je{}), (name ? (name + "_v"_view) : fu::str{}), outputs, _current_fn, _here, ctx, module, options);
        fu::str outval = TEMPVAR_consume_i4S3(id, type, ptr_flip, outputs, _current_fn, _here, ctx, module, options);
        close = (((("    (void)0;"_view + indent0) + "}), "_view) + outval) + ")"_view);
        trail = TEMPVAR_init_i4S3(id, ptr_flip, fu::view<char>{}, false);
    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    const fu::vec<int>& surviving_locals = _current_fn._live_locals;
    _current_fn.blocks += cg_Block_OvNG { fu::str(name), Helpers_DyqV(helpers), has_val, ptr_flip, fu::vec<int>(surviving_locals) };
    if (has_val)
        TEST_noDanglingRefs_i4S3(surviving_locals, last_bV6o(nodes), _current_fn, _here, ctx, module);

    int count {};
    /*MOV*/ fu::str src = cgStatements_i4S3(nodes, count, trail, outputs, _current_fn, _here, ctx, module, options);
    const bool labelUsed = has_YIf6(src, (("goto "_view + name) + ";"_view));
    if (labelUsed)
    {
        close = (((("  } "_view + name) + ":;"_view) + indent0) + close);
        open = fu::str("{ {"_fu);
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || labelUsed || has_Mnu2(src, '{') || has_YIf6(src, "if"_view))
    {
        fu::str gnuOpen {};
        if (gnuStmtExpr)
        {
            noteDefect_i4S3(CGDefects_2L18_GNUStmtExpr, outputs, _here, ctx, options);
            gnuOpen = fu::str(str_9NlOPDcjiEa);
        };
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);
    };
    return /*NRVO*/ src;
}

static fu::str cgBlock_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::vec<SolvedNode_owql> items = ((node.kind == Kind_Idfg_block) ? fu::vec<SolvedNode_owql>(node.items) : fu::vec<SolvedNode_owql> {{ SolvedNode_owql(node) }});
    const Helpers_DyqV& helpers = ((node.kind == Kind_Idfg_block) ? node.helpers : (*(Helpers_DyqV*)fu::NIL));
    if (!(mode & Mode_Z9Je_M_FN_BODY))
    {
        Lifetime_each_LjoC(node.type.lifetime, outputs, _current_fn, _here, ctx, module, options);
    };
    if (mode & Mode_Z9Je_M_LOOP_BODY)
        _current_fn.can_cont = helpers;


    {
        const SolvedNode_owql& tail = if_last_ztEi(items);
        if ((tail.kind == Kind_Idfg_let) || (tail.kind == Kind_Idfg_letdef) || (tail.kind == Kind_Idfg_struct) || (tail.kind == Kind_Idfg_fn) || (tail.kind == Kind_Idfg_defer))
            BUG_i4S3(x7E_rA00("cgBlock: tailing "_view, str_J9Iq(tail.kind)), _here, ctx);

    };
    if (!(mode & Mode_Z9Je_M_STMT))
    {
        if ((items.size() >= 2))
        {
            const SolvedNode_owql& last = items[(items.size() - 1)];
            const SolvedNode_owql& expr = (((last.kind == Kind_Idfg_return) && last.items) ? last.items[0] : last);
            if (expr.kind == Kind_Idfg_call)
            {
                const Target_VZrr& target = expr.target;
                const SolvedNode_owql& prev = items[(items.size() - 2)];
                if ((prev.kind == Kind_Idfg_letdef) && (prev.target == target))
                    noteDefect_i4S3(CGDefects_2L18_PointlessLocal, outputs, _here, ctx, options);

            };
        };
    };
    const bool expr = !(mode & Mode_Z9Je_M_STMT);
    if (expr && exprOK_i4S3(items))
        return cgComma_i4S3(items, outputs, _current_fn, _here, ctx, module, options);
    else
        return cgBlock_cqST(items, !!(mode & Mode_Z9Je_M_OPT_CURLIES), expr, helpers, (expr ? node.type : (*(Type_KBIB*)fu::NIL)), outputs, _current_fn, _here, ctx, module, options);

}

extern const Flags_Lzg8 F_TESTCASE;
static void cgFn_i4S3(const Target_VZrr& target, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const SolvedNode_owql& node = GET_i4S3(target, ctx, module).solved;
    if (node.kind == Kind_Idfg_fn)
    {
        /*MOV*/ fu::str indent0 = fu::str(outputs._indent);
        fu_DEFER(outputs._indent = static_cast<fu::str&&>(indent0));
        fu::view<SolvedNode_owql> items = node.items;
        const SolvedNode_owql& body = items[(items.size() + FN_BODY_BACK)];
        const Overload_OYmb& overload = GET_i4S3(target, ctx, module);
        fu::view<char> id = overload.name;
        if (overload.status & SolverStatus_h9em_SS_FINALIZED)
        {
            if (!body)
            {
                if (!((overload.kind == Kind_Idfg___native) || (overload.kind == Kind_Idfg_inline)))
                    BUG_i4S3(((x7E_rA00("cgFn: no body on non-native: "_view, str_J9Iq(overload.kind)) + " "_view) + id), _here, ctx);

            }
            else if (overload.status & SolverStatus_h9em_SS_Debug_AllPassesComplete)
            {
                outputs._indent = fu::str("\n"_fu);
                /*MOV*/ fu::str dedupe = ((overload.flags & Flags_Lzg8_F_TEMPLATE) ? valid_identifier_i4S3(fu::str(overload.name)) : fu::str{});
                const TEA_87LR& sighash = EXT_i4S3(target, ctx, module).sighash;
                fu::str dedupe_1 = ((dedupe && sighash) ? ((dedupe + '_') + digest62_lweH((uint64_t(sighash.v0) | (uint64_t(sighash.v1) << 32ull)), 0)) : dedupe.destructive_move());
                if (dedupe_1 && !add_poRw(outputs._TODO_FIX_seenFns, dedupe_1))
                    noteDefect_i4S3(CGDefects_2L18_DuplicateFunctions, outputs, _here, ctx, options);
                else
                {
                    fu::str src {};

                    {
                        cg_CurrentFn_1clL current_fn0 = cg_CurrentFn_1clL { Target_VZrr(target), 0, fu::vec<fu::str>{}, fu::vec<cg_Block_OvNG>{}, 0, Helpers_DyqV{}, Helpers_DyqV{}, Helpers_DyqV{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<int>{}, BitSet_mmp7{}, BitSet_mmp7{}, fu::vec<int>{} };
                        fu_DEFER(std::swap(_current_fn, current_fn0));
                        std::swap(_current_fn, current_fn0);
                        _current_fn.can_return = body.helpers;
                        src += cgFnSignature_i4S3(target, outputs, _current_fn, _here, ctx, module, options);
                        fu::str body_src = cgBlock_i4S3(body, (Mode_Z9Je_M_STMT | Mode_Z9Je_M_FN_BODY), outputs, _current_fn, _here, ctx, module, options);
                        src += body_src;
                        if (_current_fn.TEMPVARs)
                            BUG_i4S3("Leftover tempvars."_view, _here, ctx);

                    };
                    if (!dedupe_1 && !add_poRw(outputs._TODO_FIX_seenFns, src))
                        noteDefect_i4S3(CGDefects_2L18_DuplicateFunctions, outputs, _here, ctx, options);
                    else
                    {
                        if (overload.flags & Flags_Lzg8_F_HOTSWAP)
                        {
                            if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
                            {
                                outputs._live_targets += int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
                                fu::str fnID = fnID_i4S3(target, _here, ctx, module);
                                fu::str fnID_local = (fnID + "_local"_view);
                                fu::str fnPtrAnnot = cgFnPrototype_i4S3(target, true, outputs, _current_fn, _here, ctx, module, options);
                                include_i4S3(str_vsZ1ziEt2Fe, outputs);
                                ensureFwdDecl_i4S3(target, outputs, _current_fn, _here, ctx, module, options);
                                src = (((((((((((((((((((((("                                #ifdef fu_HOTSWAP\n"_view + "                                #define "_view) + fnID) + " "_view) + fnID_local) + "\n"_view) + "extern \"C\" fu_EXPORT\n"_view) + "                                #endif\n"_view) + src) + "\n"_view) + "                                #ifdef fu_HOTSWAP\n"_view) + "                                #undef "_view) + fnID) + "\n"_view) + fnPtrAnnot) + " =\n    fu::hotswap(\""_view) + fnID_local) + "\",\n                 "_view) + fnID) + ",\n                &"_view) + fnID_local) + ");\n"_view) + "                                #endif"_view);
                            }
                            else
                            {
                                BUG_i4S3(fu::view<char>{}, _here, ctx);
                            };
                        };
                        if (overload.flags & F_TESTCASE)
                        {
                            if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
                                outputs._test_cases += (("\n    "_view + id) + "(),"_view);
                            else
                            {
                                BUG_i4S3(fu::view<char>{}, _here, ctx);
                            };
                        };
                        if (dedupe_1)
                        {
                            outputs._fdef += ((("\n                                #ifndef DEF_"_view + dedupe_1) + "\n                                #define DEF_"_view) + dedupe_1);
                        };
                        outputs._fdef += (("\n"_view + src) + "\n"_view);
                        if (dedupe_1)
                        {
                            outputs._fdef += "                                #endif\n"_view;
                        };
                    };
                };
            }
            else
                BUG_i4S3(("cgFn: SS_Debug_AllPassesComplete not set: "_view + id), _here, ctx);

        }
        else
            BUG_i4S3(("cgFn: SS_FINALIZED not set: "_view + id), _here, ctx);

    }
    else
        BUG_i4S3("cgFn: target.solved.kind != 'fn'"_view, _here, ctx);

}

static void ensureFnDef_i4S3(const Target_VZrr& target, const bool offtarget, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if ((int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid) || offtarget)
    {
        if (!add_sjqY(outputs._fdef_started, target))
        {
            if (!has_tphJ(outputs._fdef_complete, target))
            {
                if (!SolverStatus_h9em((GET_i4S3(target, ctx, module).status & SolverStatus_h9em_SS_FN_RECUR)))
                    BUG_i4S3("ensureFnDef: Function without SS_FN_RECUR appears to be recursive."_view, _here, ctx);
                else
                    ensureFwdDecl_i4S3(target, outputs, _current_fn, _here, ctx, module, options);

            };
        }
        else
        {
            cgFn_i4S3(target, outputs, _current_fn, _here, ctx, module, options);
            if (!(add_sjqY(outputs._fdef_complete, target)))
                BUG_i4S3(("ensureFnDef: _fdef_complete twice: "_view + GET_i4S3(target, ctx, module).name), _here, ctx);

        };
    }
    else
        BUG_i4S3((((x7E_rA00((x7E_rA00((x7E_rA00("ensureFnDef: fndef is needed outside of its original scope: "_view, fu::i64dec(int(unsigned(((target._packed >> 40ull) & 0xfffffull))))) + " vs "_view), fu::i64dec(module.modid)) + ": `"_view), str_J9Iq(GET_i4S3(target, ctx, module).kind)) + " "_view) + GET_i4S3(target, ctx, module).name) + "`."_view), _here, ctx);

}

static void ensureFnUsable_i4S3(const Target_VZrr& target, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const TokenIdx_5b85 here0 = _here;
    fu_DEFER(_here = here0);
    const bool offtarget = (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid);
    if (offtarget && !isInlLinked_i4S3(GET_i4S3(target, ctx, module)))
        ensureFwdDecl_i4S3(target, outputs, _current_fn, _here, ctx, module, options);
    else
        ensureFnDef_i4S3(target, offtarget, outputs, _current_fn, _here, ctx, module, options);

}

static PointerFlip_I1zX PointerFlip_i4S3(const Overload_OYmb& o, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    return PointerFlip_cqST(o.solved.type, _here, ctx);
}

static fu::str HOIST_init_i4S3(fu::view<char> init, const Target_VZrr& target, const Mode_Z9Je mode, fu::view<char> head, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    return TEMPVAR_init_i4S3(head, PointerFlip_i4S3(GET_i4S3(target, ctx, module), _here, ctx), init, !(mode & (Mode_Z9Je_M_STMT | Mode_Z9Je_M_VOID_EXPR)));
}

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

static fu::str binding_cqST(const Target_VZrr& target, const SolvedNode_owql& init, const Mode_Z9Je mode, const bool doInit, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    /*MOV*/ fu::str head = binding_i4S3(target, false, outputs, _current_fn, _here, ctx, module, options);
    if (!doInit)
        return /*NRVO*/ head;
    else
    {
        unsigned v;
        const bool isHoisted = isHoisted_i4S3((v = unsigned((target._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))), _current_fn);
        if (!init || ((init.kind == Kind_Idfg_empty) && !is_ref_9CJm(init.type)))
        {
            if (isHoisted)
            {
                return HOIST_init_i4S3("{}"_view, target, mode, head, _here, ctx, module);
            }
            else
            {
                return head + " {}"_view;
            };
        }
        else
        {
            const bool isAbbreviatedCopy = isAbbreviatedCopy_i4S3(init, false);
            const SolvedNode_owql& init_1 = (isAbbreviatedCopy ? only_Cntr(init.items) : init);
            if ((init_1.kind == Kind_Idfg_bool) && !(GET_i4S3(target, ctx, module).flags & Flags_Lzg8_F_PUB) && !is_mutref_9CJm(GET_i4S3(target, ctx, module).type, _here, ctx))
                noteDefect_i4S3(CGDefects_2L18_LocalConstBool, outputs, _here, ctx, options);

            const Target_VZrr* t;
            const bool use_initTEMPVARs = !(t = &(_current_fn.target), int(unsigned((((*t)._packed >> 20ull) & 0xfffffull))));
            fu::vec<fu::str> initTEMPVARs {};
            if (use_initTEMPVARs)
                initTEMPVARs.swap(_current_fn.TEMPVARs);

            fu::str expr = cgNode_i4S3(init_1, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (use_initTEMPVARs)
                initTEMPVARs.swap(_current_fn.TEMPVARs);

            if (initTEMPVARs)
            {
                expr = (((((("[]() -> "_view + typeAnnot_i4S3(init_1.type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options)) + " {\n    "_view) + join_yqDb(initTEMPVARs, ";\n    "_view)) + ";\n    return "_view) + expr) + ";\n}()"_view);
            };
            if (isHoisted)
                return HOIST_init_i4S3(expr, target, mode, head, _here, ctx, module);
            else
                return (head + " = "_view) + expr;

        };
    };
}

static fu::str binding_WXxA(const SolvedNode_owql& node, const Mode_Z9Je mode, const bool doInit, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Target_VZrr& target = node.target;
    const SolvedNode_owql& init = ((doInit && node.items) ? node.items[LET_INIT] : (*(SolvedNode_owql*)fu::NIL));
    return binding_cqST(target, init, mode, doInit, outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF_starts_e85pmfesWad
                                #define DEF_starts_e85pmfesWad
inline bool starts_e85p(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

static fu::str cgInitPrio_i4S3(const int modid, Outputs_MiyU& outputs, const Context_UXD9& ctx)
{
    const int prio = ctx.modules[modid].order.dep_depth;
    include_i4S3(str_yWlc4bgOuai, outputs);
    return x7E_rA00("fu_INIT_PRIORITY("_view, fu::i64dec((1000 + prio))) + ") "_view;
}

static fu::str cgLet_i4S3(const SolvedNode_owql& node, const bool global, const Mode_Z9Je mode, const bool foreign, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isIrrelevant_9CJm(node.type))
    {
        return fu::str{};
    }
    else
    {
        if (!(mode & Mode_Z9Je_M_STMT))
        {
            const Target_VZrr* t;
            unsigned v;
            set_isHoisted_i4S3((t = &(node.target), v = unsigned(((*t)._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))), _current_fn, _here, ctx);
        };
        const bool cOnstexpr = (global ? globalVar_isConstexpr_i4S3(GET_i4S3(node.target, ctx, module), ctx, module) : false);
        /*MOV*/ fu::str src = binding_WXxA(node, mode, (!foreign || cOnstexpr), outputs, _current_fn, _here, ctx, module, options);
        if (!global)
            return /*NRVO*/ src;
        else
        {
            if (starts_e85p(src, "const "_view))
                src = fu::get_range(src, 6);

            if (cOnstexpr)
            {
                outputs._fdef += ((((((("\n                                #ifndef DEF_"_view + node.value) + "\n                                #define DEF_"_view) + node.value) + "\ninline constexpr "_view) + src) + ";"_view) + "\n                                #endif\n"_view);
                return fu::str{};
            }
            else
            {
                const Target_VZrr* t;
                fu::str prio = ((!foreign && !is_primitive_hxWW(node.type.vtype)) ? cgInitPrio_i4S3((t = &(node.target), int(unsigned((((*t)._packed >> 40ull) & 0xfffffull)))), outputs, ctx) : fu::str{});
                if (prio)
                {
                    const int eq = find_ZKsG(src, '=');
                    const int eq_1 = ((eq >= 0) ? eq : find_ZKsG(src, '{'));
                    if ((eq_1 >= 0))
                        src = ((fu::get_view_start0(src, eq_1) + prio) + fu::get_view(src, eq_1));
                    else
                        BUG_i4S3((("Needs init priority but can't find first = in `"_view + src) + "`"_view), _here, ctx);

                };
                if (!isExtLinked_i4S3(GET_i4S3(node.target, ctx, module)))
                {
                    if (!foreign)
                        outputs._fdef += (("\nstatic const "_view + src) + ";\n"_view);
                    else
                        BUG_i4S3(("Cannot codegen, relies on an external static: "_view + GET_i4S3(node.target, ctx, module).name), _here, ctx);

                }
                else
                    outputs._fdef += (("\nextern const "_view + src) + ";"_view);

                return fu::str{};
            };
        };
    };
}

static fu::str cgGlobal_i4S3(const Target_VZrr& target, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (!add_sjqY(outputs._ffwd, target))
    {
        return fu::str{};
    }
    else
        return cgLet_i4S3(GET_i4S3(target, ctx, module).solved, true, Mode_Z9Je_M_STMT, (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid), outputs, _current_fn, _here, ctx, module, options);

}

                                #ifndef DEF_find_maZ1bPk9M33
                                #define DEF_find_maZ1bPk9M33
inline int find_maZ1(fu::view<fu::str> haystack, fu::view<char> needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_2Cr49IHQCne
                                #define DEF_has_2Cr49IHQCne
inline bool has_2Cr4(fu::view<fu::str> a, fu::view<char> b)
{
    return (find_maZ1(a, b) >= 0);
}
                                #endif

static fu::str rootNS_i4S3(fu::vec_range<char> id, const cg_CurrentFn_1clL& _current_fn)
{
    if (has_2Cr4(_current_fn._ids_used, id))
        return "::"_view + id;
    else
        return fu::str(id);

}

static fu::str TEMPVAR_peek_i4S3(const PointerFlip_I1zX ptr_flip, fu::vec_range<char> expr, const bool parens)
{
    if (ptr_flip == PointerFlip_I1zX_RawPointer)
    {
        if (parens)
            return ("(*"_view + expr) + ")"_view;
        else
            return "*"_view + expr;

    }
    else
        return fu::str(expr);

}

static fu::str cgEnumv_i4S3(const Type_KBIB& type, fu::view<char> id, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::str base = typeAnnotBase_i4S3(type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
    return (base + "_"_view) + id;
}

static fu::str emitPrefixOp_i4S3(fu::view<char> op, const SolvedNode_owql& node, const bool isNative, fu::view<fu::str> item_src, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    return unpromote_i4S3((op + ARG_cqST(0, item_src)), node, isNative, outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF___xq8moCW8r82
                                #define DEF___xq8moCW8r82
inline static fu::str _xq8m(const SolvedNode_owql& x)
{
    return str_J9Iq(x.kind);
}
                                #endif

                                #ifndef DEF_map_6Ej4eaZJNs2
                                #define DEF_map_6Ej4eaZJNs2
inline fu::vec<fu::str> map_6Ej4(fu::view<SolvedNode_owql> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _xq8m(a[i]);

    return /*NRVO*/ res;
}
                                #endif

static fu::str cgCall_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Extended_Ebxv& ext = EXT_i4S3(node.target, ctx, module);
    const Overload_OYmb* _0;
    const Overload_OYmb& target = (*(_0 = &(GET_i4S3(node.target, ctx, module))) ? *_0 : BUG_i4S3(fu::view<char>{}, _here, ctx));
    fu::view<SolvedNode_owql> args = node.items;
    const bool isNative = (target.kind == Kind_Idfg___native);
    const bool isSimpleCpyMovAssign = (((args.size() == 2) && isNative && (target.name == "="_view)) ? isFieldChain_i4S3(args[0], ctx, module) : false);
    const int MUSTSEQ_mask = node.helpers.index;
    int ooe_crosscheck = 0;
    fu::str ooe_header {};
    fu::vec<fu::str> item_src {};
    item_src.resize(args.size());
    const bool RTL = isRTL_xQNS(target);
    fu::view<Argument_HFkq> host_args = ext.args;
    if (args)
        argsForward_GAog(RTL, host_args, 0, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);

    if ((ooe_crosscheck & MUSTSEQ_mask) == MUSTSEQ_mask)
    {
        if (isNative && (target.name[0] == '\n'))
        {
            /*MOV*/ fu::str id = fu::str(fu::get_range(target.name, (NativeQualities_UvH3(target.name).name_start_idx + 1)));
            const int idx = find_ZKsG(id, '\n');
            if (idx > -1)
            {
                include_i4S3(fu::get_range(id, 0, idx), outputs);
                id = fu::get_range(id, (idx + 1));
            };
            if (id[0] == '.')
            {
                if (args.size() > 1)
                    return emitMethodCall_i4S3(id, ooe_header, item_src);
                else
                    return emitPostfixOp_i4S3(id, node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);

            }
            else if (id[0] == '/')
                return ooeWrap_i4S3(emitBuiltin_i4S3(id, item_src, node, outputs, _current_fn, _here, ctx, module, options), ooe_header);
            else if (args)
            {
                if (hasIdentifierChars_V5Iu(id))
                    return emitFunctionCall_i4S3(id.destructive_move(), "("_view, ")"_view, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                else
                    return emitBinaryOp_i4S3(id, node, mode, args, isNative, ooe_header, item_src, outputs, _current_fn, _here, ctx, module, options);

            }
            else
                return /*NRVO*/ id;

        }
        else
        {
            const Kind_Idfg kind = target.kind;
            const Target_VZrr* t;
            if (kind == Kind_Idfg_type)
            {
                if (!args)
                    return cgDefault_i4S3(target.type, outputs, _current_fn, _here, ctx, module, options);
                else
                {
                    const Struct_5VgD* _1;
                    const Struct_5VgD& t = (*(_1 = &(tryLookupUserType_1qjp(target.type.vtype, _here, ctx, module))) ? *_1 : BUG_i4S3("cgCall: defctor/type not a struct nor a user primitive."_view, _here, ctx));
                    /*MOV*/ fu::str base = typeAnnotBase_i4S3(target.type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
                    if (t.kind == Kind_Idfg_flags)
                        return emitFunctionCall_i4S3(fu::str(base), "(("_view, ((") & MASK_"_view + base) + ")"_view), ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    else if ((t.kind == Kind_Idfg_primitive) || (t.kind == Kind_Idfg_enum))
                        return emitFunctionCall_i4S3(base.destructive_move(), "("_view, ")"_view, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    else if ((t.kind == Kind_Idfg_struct) || (t.kind == Kind_Idfg_union))
                    {
                        return emitFunctionCall_i4S3(base.destructive_move(), " { "_view, " }"_view, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    }
                    else
                        BUG_i4S3(x7E_rA00("Unknown usertype kind: "_view, str_J9Iq(t.kind)), _here, ctx);

                };
            }
            else if ((kind == Kind_Idfg_fn) && (t = &(node.target), int(unsigned((((*t)._packed >> 40ull) & 0xfffffull)))))
                ensureFnUsable_i4S3(node.target, outputs, _current_fn, _here, ctx, module, options);
            else if (kind == Kind_Idfg_inline)
                BUG_i4S3(("cgCall: found a call to an inline fn: "_view + GET_i4S3(node.target, ctx, module).name), _here, ctx);

            fu::vec_range<char> id = (target.name ? target.name : BUG_i4S3(fu::view<char>{}, _here, ctx));
            if ((args.size() <= 2))
            {
                if (target.kind == Kind_Idfg_var)
                {
                    const Target_VZrr* t_1;
                    unsigned v;
                    if (isIrrelevant_9CJm(target.type))
                        return cgDefault_i4S3(target.type, outputs, _current_fn, _here, ctx, module, options);
                    else if (!(t_1 = &(node.target), v = unsigned(((*t_1)._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))))
                    {
                        cgGlobal_i4S3(node.target, outputs, _current_fn, _here, ctx, module, options);
                        /*MOV*/ fu::str ret = rootNS_i4S3(ID_vRqJ(id), _current_fn);
                        if (TODO_FIX_useStaticRef_i4S3(node.target, ctx, module))
                            ret += ".ref"_view;

                        return /*NRVO*/ ret;
                    }
                    else
                    {
                        /*MOV*/ fu::str id_1 = localID_i4S3(node.target, false, _current_fn, _here, ctx, module);
                        const Target_VZrr* t_2;
                        unsigned v_1;
                        if (isHoisted_i4S3((t_2 = &(node.target), v_1 = unsigned(((*t_2)._packed & 0xfffffull)), int(((v_1 >> 1u) ^ ((v_1 & 1u) ? 0xffffffffu : 0x0u)))), _current_fn))
                            return TEMPVAR_peek_i4S3(PointerFlip_i4S3(target, _here, ctx), id_1, true);
                        else
                            return /*NRVO*/ id_1;

                    };
                }
                else if (target.kind == Kind_Idfg_field)
                {
                    fu::view<char> _2 {};
                    fu::view<char> head = ((_2.ptr_reassign(ARG_cqST(0, item_src))) ? _2 : BUG_i4S3("cgField: about to emit a [nothing].field sequence."_view, _here, ctx));
                    return (head + "."_view) + ID_vRqJ(id);
                }
                else if (target.kind == Kind_Idfg_enumv)
                    return cgEnumv_i4S3(target.type, id, outputs, _current_fn, _here, ctx, module, options);
                else if (isOp_i4S3(node.target, ctx, module))
                {
                    if (args.size() == 1)
                    {
                        if (hasPostfix_vRqJ(id))
                            return emitPostfixOp_i4S3(valid_operator_cqST(id), node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);
                        else
                            return emitPrefixOp_i4S3(valid_operator_cqST(id), node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);

                    }
                    else if (args.size() == 2)
                    {
                        if (id == "[]"_view)
                            return ooeWrap_i4S3((((ARG_cqST(0, item_src) + "["_view) + ARG_cqST(1, item_src)) + "]"_view), ooe_header);
                        else
                            return emitBinaryOp_i4S3(valid_operator_cqST(id), node, mode, args, isNative, ooe_header, item_src, outputs, _current_fn, _here, ctx, module, options);

                    };
                };
            };
            if (isNative)
                BUG_i4S3((("Unknown __native: `"_view + id) + "`."_view), _here, ctx);
            else
                return emitFunctionCall_i4S3(rootNS_i4S3(fnID_i4S3(node.target, _here, ctx, module), _current_fn), "("_view, ")"_view, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);

        };
    }
    else
        BUG_i4S3(((x7E_rA00((x7E_rA00("OOE crosscheck failed: codegen sequenced "_view, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_view), fu::i64dec(MUSTSEQ_mask)) + ": "_view) + join_yqDb(map_6Ej4(args), "|"_view)), _here, ctx);

}

                                #ifndef DEF_find_rkz0SQgq7mk
                                #define DEF_find_rkz0SQgq7mk
inline int find_rkz0(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_ZKsG(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_starts_SfbfOAVfSee
                                #define DEF_starts_SfbfOAVfSee
inline bool starts_Sfbf(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static fu::str cgLiteral_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isIrrelevant_9CJm(node.type))
        noteDefect_i4S3(CGDefects_2L18_IrrelevantLiteral, outputs, _here, ctx, options);

    /*MOV*/ fu::str src = fu::str(node.value);
    int idx {};
    while (((idx = find_rkz0(src, '_', idx)) >= 0))
        src.splice(idx, 1);

    fu::view<char> _0 {};
    fu::view<char> base = ((_0.ptr_reassign(tryLookupUserType_1qjp(node.type.vtype, _here, ctx, module).shape.basePrim)) ? _0 : node.type.vtype.canon);
    if (starts_Sfbf(base, 'u') && !has_Mnu2(src, 'u'))
        src += 'u';

    if (starts_Sfbf(base, 'f'))
    {
        if (!has_Mnu2(src, '.') && !has_Mnu2(src, (has_Mnu2(src, 'x') ? 'p' : 'e')))
            src += ".0"_view;

        if (base == "f32"_view)
        {
            if (has_Mnu2(src, 'x'))
                src = (("float("_view + src) + ")"_view);
            else
                src += "f"_view;

        }
        else if (base != "f64"_view)
        {
            BUG_i4S3(fu::view<char>{}, _here, ctx);
        };
    };
    if (starts_e85p(src, "0o"_view))
        src.splice(1, 1);

    if (starts_Sfbf(base, 'i') || starts_Sfbf(base, 'u'))
    {
        if (src.size() > 16)
        {
            Intlit_SPOq parse = Intlit_u8re(src);
            if (parse.negative && (parse.absval == 0x8000000000000000ull))
                return fu::str(str_BNg9CJag9z2);

        };
        if ((base == "u64"_view) || (base == "i64"_view))
        {
            if (!has_Mnu2(src, 'l'))
                return src + "ll"_view;

        }
        else if ((base != "u32"_view) && (base != "i32"_view))
        {
            if (!(mode & Mode_Z9Je_M_ENUM_DECL))
            {
                return ((typeAnnotBase_i4S3(node.type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options) + "("_view) + src) + ")"_view;
            };
        };
    };
    return /*NRVO*/ src;
}

static fu::str escapeStringLiteral_i4S3(fu::view<char> str, const char quot)
{
    /*MOV*/ fu::str esc = fu::vec<char> {{ quot }};
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (c == '\n')
            esc += "\\n"_view;
        else if (c == '\r')
            esc += "\\r"_view;
        else if (c == '\t')
            esc += "\\t"_view;
        else if (c == '\v')
            esc += "\\v"_view;
        else if (c == '\\')
            esc += "\\\\"_view;
        else if (fu::i8(fu::u8(c)) < fu::i8(32))
            esc += ("\\"_view + xHH_i4S3(unsigned(fu::u8(c))));
        else
        {
            if (c == quot)
                esc += '\\';

            esc += c;
        };
    };
    esc += quot;
    return /*NRVO*/ esc;
}

static fu::str cgCharLiteral_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Options_mg7V& options)
{
    if (isIrrelevant_9CJm(node.type))
        noteDefect_i4S3(CGDefects_2L18_IrrelevantLiteral, outputs, _here, ctx, options);

    return escapeStringLiteral_i4S3(node.value, '\'');
}

                                #ifndef DEF_SMALL_STRING_OPTI
                                #define DEF_SMALL_STRING_OPTI
inline constexpr int SMALL_STRING_OPTI = 15;
                                #endif

                                #ifndef DEF_add_lb0v238Mip1
                                #define DEF_add_lb0v238Mip1
inline bool add_lb0v(Set_9RpO& _, const uint64_t key)
{
    fu::view<uint64_t> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_XvO8(keys_asc[i], key);
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

static fu::str cgStringLiteral_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isIrrelevant_9CJm(node.type))
        noteDefect_i4S3(CGDefects_2L18_IrrelevantLiteral, outputs, _here, ctx, options);

    if (is_enum_hxWW(node.type.vtype) || is_flags_hxWW(node.type.vtype))
        return cgEnumv_i4S3(node.type, node.value, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        fu::view<char> stringAnnot = annotateString_i4S3(outputs);
        /*MOV*/ fu::str esc = escapeStringLiteral_i4S3(node.value, '"');
        if (is_ref_9CJm(node.type) && ifArrayRef_annotateAsSlice_i4S3(node.type))
            return esc + "_view"_view;
        else
        {
            esc += "_fu"_view;
            if (hasStatic_7Yz9(node.type.lifetime) || ((node.value.size() > SMALL_STRING_OPTI) && _current_fn.target))
            {
                TEA_87LR hash {};
                hash_l6RU(hash, node.value);
                const TEA_87LR* tea;
                fu::str dedupe = digest62_lweH((tea = &(hash), (uint64_t((*tea).v0) | (uint64_t((*tea).v1) << 32ull))), 0);
                /*MOV*/ fu::str id = ("str_"_view + dedupe);
                const TEA_87LR* tea_1;
                if (add_lb0v(outputs._static_strings, (tea_1 = &(hash), (uint64_t((*tea_1).v0) | (uint64_t((*tea_1).v1) << 32ull)))))
                {
                    fu::str prio = cgInitPrio_i4S3(module.modid, outputs, ctx);
                    fu::str& src = outputs._static_string_src;
                    src += ("\n                                #ifndef STR_"_view + dedupe);
                    src += ("\n                                #define STR_"_view + dedupe);
                    src += (((((((("\nstatic const "_view + stringAnnot) + " "_view) + id) + " "_view) + prio) + "{ "_view) + esc) + " };"_view);
                    src += "\n                                #endif\n"_view;
                };
                esc = id.destructive_move();
            };
            if (!is_ref_9CJm(node.type))
                return ((stringAnnot + "("_view) + esc) + ")"_view;
            else
                return /*NRVO*/ esc;

        };
    };
}

static fu::str cgArrayLiteral_i4S3(const SolvedNode_owql& node, const Type_KBIB& callarg, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isIrrelevant_9CJm(node.type))
        noteDefect_i4S3(CGDefects_2L18_IrrelevantLiteral, outputs, _here, ctx, options);

    fu::vec<fu::str> items = cgNodes_i4S3(node.items, Mode_Z9Je_M_CHECK_NEVER_LTR, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
    if (!items.size())
        return cgDefault_i4S3(node.type, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        fu::str src = join_yqDb(items, ", "_view);
        fu::str T = typeAnnotBase_i4S3(clear_sliceable_1qjp(node.type.vtype, _here, ctx, module), Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
        if (is_ref_9CJm(callarg) && ifArrayRef_annotateAsSlice_i4S3(callarg))
        {
            include_i4S3(str_mvJDIwjABBc, outputs);
            return ((("fu::view<"_view + T) + "> {{ "_view) + src) + " }}"_view;
        }
        else
        {
            include_i4S3(str_NOGxBIraLNl, outputs);
            return ((("fu::vec<"_view + T) + "> {{ "_view) + src) + " }}"_view;
        };
    };
}

                                #ifndef DEF___QMI9K2Urokg
                                #define DEF___QMI9K2Urokg
inline static bool _QMI9(const int locid, const bool isAlwaysMoveable, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    return locid || isAlwaysMoveable || BUG_i4S3("cgCopyOrMove: Considering a move from non-local lifetime."_view, _here, ctx);
}
                                #endif

                                #ifndef DEF_Lifetime_each_x7waUa0iEV3
                                #define DEF_Lifetime_each_x7waUa0iEV3
inline void Lifetime_each_x7wa(const Lifetime_llCF& lifetime, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
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
        _QMI9(((r & 1u) ? 0 : (v = (r >> 1u), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), ((r == 0b0101u) || (r == 0b1001u)), _here, ctx);
    };
}
                                #endif

static void sanityCheck_i4S3(const Lifetime_llCF& lt, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    if (lt)
    {
        Lifetime_each_x7wa(lt, _here, ctx);
    }
    else
    {
        BUG_i4S3("cgCopyOrMove: Considering a move from an empty lifetime."_view, _here, ctx);
    };
}

static bool supportsNRVO_i4S3(const Target_VZrr& t, const Context_UXD9& ctx, const Module_qqBh& module)
{
    unsigned v;
    if ((GET_i4S3(t, ctx, module).kind == Kind_Idfg_var) && !((v = unsigned((t._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u)))) < 0))
        return !is_ref_9CJm(GET_i4S3(t, ctx, module).solved.type);
    else
        return false;

}

static bool mayNeedConstCast_cqST(fu::view<SolvedNode_owql> items, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    for (int i = 0; i < items.size(); i++)
    {
        if (mayNeedConstCast_i4S3(items[i], _here, ctx, module))
            return true;

    };
    return false;
}

                                #ifndef DEF___NZD7W70p62g
                                #define DEF___NZD7W70p62g
inline static bool _NZD7(const bool isArgIdx, const bool isAlwaysMoveable, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
{
    return isArgIdx ? isArgIdx : isAlwaysMoveable ? isAlwaysMoveable : BUG_i4S3("About to return mayNeedConstCast, but fn returns non-arg refs."_view, _here, ctx);
}
                                #endif

                                #ifndef DEF_Lifetime_each_tpTlTgkCxNd
                                #define DEF_Lifetime_each_tpTlTgkCxNd
inline void Lifetime_each_tpTl(const Lifetime_llCF& lifetime, const TokenIdx_5b85& _here, const Context_UXD9& ctx)
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
        _NZD7(((r & 3u) == 3u), ((r == 0b0101u) || (r == 0b1001u)), _here, ctx);
    };
}
                                #endif

static bool mayNeedConstCast_i4S3(const SolvedNode_owql& expr, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    if (is_mutref_9CJm(expr.type, _here, ctx) || !is_ref_9CJm(expr.type))
        return false;
    else if ((expr.kind == Kind_Idfg_and) || (expr.kind == Kind_Idfg_or))
        return mayNeedConstCast_cqST(expr.items, _here, ctx, module);
    else if (expr.kind == Kind_Idfg_if)
        return mayNeedConstCast_cqST(fu::get_view(expr.items, 1, 3), _here, ctx, module);
    else if (expr.kind == Kind_Idfg_call)
    {
        const Kind_Idfg k = GET_i4S3(expr.target, ctx, module).kind;
        if (k == Kind_Idfg_field)
            return mayNeedConstCast_cqST(expr.items, _here, ctx, module);
        else if (k == Kind_Idfg_var)
        {
            const Type_KBIB& place = GET_i4S3(expr.target, ctx, module).solved.type;
            if (is_sliceable_hxWW(place.vtype) && is_ref_9CJm(place) && !is_mutref_9CJm(place, _here, ctx) && ifArrayRef_annotateAsVecRange_i4S3(place))
                return true;
            else
                return false;

        }
        else
        {
            const Type_KBIB& t = GET_i4S3(expr.target, ctx, module).type;
            const bool mayNeedConstCast = (is_ref_9CJm(t) ? !is_mutref_9CJm(t, _here, ctx) : false);
            if (mayNeedConstCast)
            {
                sanityCheck_i4S3(expr.type.lifetime, _here, ctx);
                Lifetime_each_tpTl(t.lifetime, _here, ctx);
            };
            return mayNeedConstCast;
        };
    }
    else
        return true;

}

static fu::str cgCopyOrMove_cqST(const Kind_Idfg kind, const Type_KBIB& type, fu::vec_range<char> src, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (kind == Kind_Idfg_move)
        return cgMove_i4S3(type, src, false, outputs, _current_fn, _here, ctx, module, options);
    else
        return cgCopy_i4S3(type, src, outputs, _current_fn, _here, ctx, module, options);

}

static fu::str cgCopyOrMove_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const SolvedNode_owql& expr = only_Cntr(node.items);
    if (is_ref_9CJm(expr.type))
    {
        /*MOV*/ fu::str src = cgNode_i4S3(expr, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        if ((mode & Mode_Z9Je_M_RETURN) && is_trivial_1qjp(node.type.vtype, _here, ctx, module))
            return /*NRVO*/ src;
        else
        {
            if (node.kind == Kind_Idfg_move)
            {
                sanityCheck_i4S3(expr.type.lifetime, _here, ctx);
                if (mode & Mode_Z9Je_M_RETURN)
                {
                    const bool nrvo = (((expr.kind == Kind_Idfg_call) && (expr.items.size() == 0)) ? supportsNRVO_i4S3(expr.target, ctx, module) : false);
                    if (nrvo)
                        return "/*NRVO*/ "_view + src;

                };
                if (!is_trivial_1qjp(node.type.vtype, _here, ctx, module))
                {
                    const bool mayNeedConstCast = mayNeedConstCast_i4S3(expr, _here, ctx, module);
                    if (is_sliceable_hxWW(node.type.vtype) && !ifArrayRef_annotateAsVec_i4S3(node.type))
                    {
                        if (mayNeedConstCast)
                        {
                            noteDefect_i4S3(CGDefects_2L18_ConstCast, outputs, _here, ctx, options);
                            src += ".const_cast_mut()"_view;
                        };
                        src += (hasZeroes_i4S3(expr.type.lifetime, _current_fn, ctx, module) ? ".destructive_move_or_default()"_view : ".destructive_move()"_view);
                        return /*NRVO*/ src;
                    }
                    else if (mayNeedConstCast)
                    {
                        noteDefect_i4S3(CGDefects_2L18_ConstCast, outputs, _here, ctx, options);
                        src = (((("const_cast<"_view + typeAnnotBase_i4S3(node.type, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options)) + "&>("_view) + src) + ")"_view);
                    };
                };
            };
            if (node.value && DevOptions_QEya((options.dev & DevOptions_QEya_DEV_CG_LifetimeAnnots)))
                src = ((("/*"_view + node.value) + "*/ "_view) + src);

            return cgCopyOrMove_cqST(node.kind, expr.type, src, outputs, _current_fn, _here, ctx, module, options);
        };
    }
    else
        BUG_i4S3("cgCopyOrMove: !expr.is_ref"_view, _here, ctx);

}

static fu::str blockWrapSubstatement_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    return cgBlock_i4S3(node, ((Mode_Z9Je_M_STMT | Mode_Z9Je_M_OPT_CURLIES) | mode), outputs, _current_fn, _here, ctx, module, options);
}

static fu::str blockWrap_unlessIf_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if ((node.kind == Kind_Idfg_if) || (node.kind == Kind_Idfg_and))
        return " "_view + cgNode_i4S3(node, Mode_Z9Je_M_STMT, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
    else
    {
        return blockWrapSubstatement_i4S3(node, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
    };
}

static fu::str cgIf_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const SolvedNode_owql& n0 = node.items[0];
    if (is_never_9CJm(n0.type.vtype))
        BUG_i4S3("cgIf: cond.is_never"_view, _here, ctx);
    else
    {
        const SolvedNode_owql& n1 = node.items[1];
        const SolvedNode_owql& n2 = node.items[2];
        const bool stmt = !!(mode & Mode_Z9Je_M_STMT);
        fu::str cond = (n0 ? cgNode_i4S3(n0, (Mode_Z9Je_M_RETBOOL | (stmt ? Mode_Z9Je_M_PARENS : Mode_Z9Je{})), (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str cons = (n1 ? (stmt ? blockWrapSubstatement_i4S3(n1, Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options) : cgNode_i4S3(n1, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) : fu::str{});
        fu::str alt = (n2 ? (stmt ? blockWrap_unlessIf_i4S3(n2, outputs, _current_fn, _here, ctx, module, options) : cgNode_i4S3(n2, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) : fu::str{});
        if (stmt)
        {
            return ((("if ("_view + cond) + ")"_view) + cons) + (alt ? ((outputs._indent + "else"_view) + alt) : fu::str{});
        }
        else
            return ((((("("_view + cond) + " ? "_view) + cons) + " : "_view) + alt) + ")"_view;

    };
}

static void cgAndOr_concat_i4S3(fu::vec_range_mut<char> src, fu::view<char> op, fu::view<SolvedNode_owql> items, const bool parens, const bool last_never_ok, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Mode_Z9Je mode = (Mode_Z9Je_M_RETBOOL | ((parens && (items.size() == 1)) ? Mode_Z9Je_M_PARENS : Mode_Z9Je{}));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const SolvedNode_owql& item = items[i];
        if (is_never_9CJm(item.type.vtype) && !(last_never_ok && (i == (items.size() - 1))))
            BUG_i4S3("cgAndOr_concat: item.is_never"_view, _here, ctx);
        else
        {
            fu::str term = cgNode_i4S3(item, mode, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (isIrrelevant_9CJm(item.type))
                src += (("("_view + term) + ", 0)"_view);
            else
                src += term;

        };
    };
}

extern const Type_KBIB t_bool;
static bool acceptsBools_fromAndOr_i4S3(const Type_KBIB& type)
{
    if (!is_ref_9CJm(type))
        return type.vtype.canon == t_bool.vtype.canon;
    else
        return false;

}

static fu::str via_cqST(TEMPVAR_5NLP& tv, const Type_KBIB& type, fu::view<char> expr, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (!tv.id)
    {
        tv.id = TEMPVAR_declare_i4S3(type, tv.ptr_flip, tv.annot, Mode_Z9Je{}, (*(fu::str*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
    };
    fu::str cond = TEMPVAR_peek_i4S3(tv.ptr_flip, (("("_view + TEMPVAR_init_i4S3(tv.id, tv.ptr_flip, expr, false)) + ")"_view), false);
    fu::str cons = TEMPVAR_consume_i4S3(tv.id, type, tv.ptr_flip, outputs, _current_fn, _here, ctx, module, options);
    return ((cond + " ? "_view) + cons) + " : "_view;
}

static fu::str via_i4S3(TEMPVAR_5NLP& tv, const Type_KBIB& type, const SolvedNode_owql& expr, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (isFieldChain_i4S3(expr, ctx, module))
    {
        fu::str trivial = cgNode_i4S3(expr, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        return ((trivial + " ? "_view) + trivial) + " : "_view;
    }
    else
    {
        if ((expr.kind == Kind_Idfg_copy) || (expr.kind == Kind_Idfg_move))
        {
            const Kind_Idfg kind = expr.kind;
            const SolvedNode_owql& expr_1 = only_Cntr(expr.items);
            if (isFieldChain_i4S3(expr_1, ctx, module))
            {
                fu::str fieldChain = cgNode_i4S3(expr_1, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
                return ((fieldChain + " ? "_view) + cgCopyOrMove_cqST(kind, expr_1.type, fieldChain, outputs, _current_fn, _here, ctx, module, options)) + " : "_view;
            };
        };
        return via_cqST(tv, type, cgNode_i4S3(expr, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options), outputs, _current_fn, _here, ctx, module, options);
    };
}

static fu::str cgOr_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Type_KBIB& type = node.type;
    fu::view<SolvedNode_owql> items = node.items;
    const bool stmt = !!(mode & Mode_Z9Je_M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = fu::str("if (!("_fu);
        cgAndOr_concat_i4S3(src, " || "_view, fu::get_view_start0(items, (items.size() - 1)), true, false, outputs, _current_fn, _here, ctx, module, options);
        src += "))"_view;
        src += blockWrapSubstatement_i4S3(items[(items.size() - 1)], Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = fu::str((!(mode & Mode_Z9Je_M_PARENS) ? str_Mh2Kj8clGMl : (*(fu::str*)fu::NIL)));
        if (acceptsBools_fromAndOr_i4S3(type))
            cgAndOr_concat_i4S3(src, " || "_view, items, true, true, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            TEMPVAR_5NLP tv {};
            for (int i = 0; i < (items.size() - 1); i++)
            {
                const SolvedNode_owql* _0;
                const SolvedNode_owql& item = (*(_0 = &(items[i])) ? *_0 : BUG_i4S3(fu::view<char>{}, _here, ctx));
                SolvedNode_owql tail = item;
                if (item.kind == Kind_Idfg_and)
                {
                    fu::view<SolvedNode_owql> items_1 = item.items;
                    const SolvedNode_owql* _1;
                    tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : BUG_i4S3(fu::view<char>{}, _here, ctx));
                    cgAndOr_concat_i4S3(src, " && "_view, fu::get_view_start0(items_1, (items_1.size() - 1)), false, false, outputs, _current_fn, _here, ctx, module, options);
                    src += " && "_view;
                };
                src += via_i4S3(tv, type, tail, outputs, _current_fn, _here, ctx, module, options);
            };
            const SolvedNode_owql* _2;
            const SolvedNode_owql& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : BUG_i4S3(fu::view<char>{}, _here, ctx));
            src += cgNode_i4S3(tail, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        };
        if (!(mode & Mode_Z9Je_M_PARENS))
            src += ")"_view;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_cqST(fu::view<SolvedNode_owql> items, const Type_KBIB& type, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const bool stmt = !!(mode & Mode_Z9Je_M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = fu::str("if ("_fu);
        cgAndOr_concat_i4S3(src, " && "_view, fu::get_view_start0(items, (items.size() - 1)), true, false, outputs, _current_fn, _here, ctx, module, options);
        src += ")"_view;
        src += blockWrapSubstatement_i4S3(items[(items.size() - 1)], Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = fu::str((!(mode & Mode_Z9Je_M_PARENS) ? str_Mh2Kj8clGMl : (*(fu::str*)fu::NIL)));
        if (acceptsBools_fromAndOr_i4S3(type))
            cgAndOr_concat_i4S3(src, " && "_view, items, true, true, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            TEMPVAR_5NLP tv {};
            for (int i = 0; i < items.size(); i++)
            {
                const SolvedNode_owql& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_view + via_i4S3(tv, type, item, outputs, _current_fn, _here, ctx, module, options));
                else
                {
                    src += cgNode_i4S3(item, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
                };
            };
        };
        if (!(mode & Mode_Z9Je_M_PARENS))
            src += ")"_view;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    return cgAnd_cqST(node.items, node.type, mode, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgLetDef_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Target_VZrr* t;
    if (!(t = &(_current_fn.target), int(unsigned((((*t)._packed >> 20ull) & 0xfffffull)))))
    {
        if (isExtLinked_i4S3(GET_i4S3(node.target, ctx, module)))
            return cgGlobal_i4S3(node.target, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            return fu::str{};
        };
    }
    else
    {
        const Mode_Z9Je mode_1 = (mode | ((isIrrelevant_9CJm(node.type) && !(mode & Mode_Z9Je_M_STMT)) ? Mode_Z9Je_M_VOID_EXPR : Mode_Z9Je{}));
        return cgLet_i4S3(GET_i4S3(node.target, ctx, module).solved, false, mode_1, false, outputs, _current_fn, _here, ctx, module, options);
    };
}

                                #ifndef DEF___j0x8r3giSy7
                                #define DEF___j0x8r3giSy7
inline static void _j0x8(const Target_VZrr& target, Target_VZrr& last, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (last)
        BUG_i4S3(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_view + GET_i4S3(last, ctx, module).name) + " vs "_view) + GET_i4S3(target, ctx, module).name), _here, ctx);
    else
    {
        last = target;
        if (GET_i4S3(target, ctx, module).kind == Kind_Idfg_fn)
        {
            fu::view<Argument_HFkq> args = EXT_i4S3(target, ctx, module).args;
            for (int i = 0; i < args.size(); i++)
            {
                if (args[i].flags & Flags_Lzg8_F_IMPLICIT)
                    BUG_i4S3("How do we codegen F_IMPLICIT arguments through lambdas?"_view, _here, ctx);

            };
            ensureFnUsable_i4S3(target, outputs, _current_fn, _here, ctx, module, options);
        }
        else
            BUG_i4S3(((x7E_rA00("Cannot codegen a non-fn: "_view, str_J9Iq(GET_i4S3(target, ctx, module).kind)) + " "_view) + GET_i4S3(target, ctx, module).name), _here, ctx);

    };
}
                                #endif

                                #ifndef DEF_unpackAddrOfFn_erueAiHbdgl
                                #define DEF_unpackAddrOfFn_erueAiHbdgl
inline void unpackAddrOfFn_erue(fu::view<char> canon, Target_VZrr& last, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const Target_VZrr mi = parseLocalOrGlobal_xQNS(canon, offset);
            unsigned v;
            _j0x8(Target_xQNS(int(unsigned(((mi._packed >> 40ull) & 0xfffffull))), int(unsigned(((mi._packed >> 20ull) & 0xfffffull))), (v = unsigned((mi._packed & 0xfffffull)), int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))))), last, outputs, _current_fn, _here, ctx, module, options);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_view + canon) + "`."_view));

}
                                #endif

static fu::str cgEmpty_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    if (node.type)
    {
        if (mode & Mode_Z9Je_M_STMT)
        {
            return fu::str{};
        }
        else if ((mode & Mode_Z9Je_M_ARG_TO_NATIVE) && isAddrOfFn_9CJm(node.type))
        {
            Target_VZrr last {};
            unpackAddrOfFn_erue(node.type.vtype.canon, last, outputs, _current_fn, _here, ctx, module, options);
            return "&"_view + fnID_i4S3(last, _here, ctx, module);
        }
        else
            return cgDefault_i4S3(node.type, outputs, _current_fn, _here, ctx, module, options);

    }
    else
        BUG_i4S3("cgEmpty: !node.type"_view, _here, ctx);

}

                                #ifndef DEF_x3Cx3E_WfsdRiisFP1
                                #define DEF_x3Cx3E_WfsdRiisFP1
inline int x3Cx3E_Wfsd(const Helpers_DyqV& a, const Helpers_DyqV& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_odNT(a.index, b.index)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Dx3D_ZAikIzO9MFa
                                #define DEF_x3Dx3D_ZAikIzO9MFa
inline bool operator==(const Helpers_DyqV& a, const Helpers_DyqV& b)
{
    return !x3Cx3E_Wfsd(a, b);
}
                                #endif

static const cg_Block_OvNG& findBlock_i4S3(const Helpers_DyqV& helpers, const SolvedNode_owql& expr, const cg_CurrentFn_1clL& _current_fn, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const cg_Block_OvNG& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
        {
            TEST_noDanglingRefs_i4S3(block.surviving_locals, expr, _current_fn, _here, ctx, module);
            return block;
        };
    };
    BUG_i4S3(x7E_rA00("No such block in scope: "_view, fu::i64dec(helpers.index)), _here, ctx);
}

static fu::str cgGoto_i4S3(const cg_Block_OvNG& block, Outputs_MiyU& outputs, const TokenIdx_5b85& _here, const Context_UXD9& ctx, const Options_mg7V& options)
{
    noteDefect_i4S3(CGDefects_2L18_Goto, outputs, _here, ctx, options);
    return "goto "_view + block.name;
}

static fu::str cgJump_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Helpers_DyqV& helpers = node.helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    const SolvedNode_owql& expr = only_Cntr(node.items);
    cg_Block_OvNG block = (!use_return ? findBlock_i4S3(helpers, expr, _current_fn, _here, ctx, module) : (*(cg_Block_OvNG*)fu::NIL));
    if ((expr.kind != Kind_Idfg_empty) || !isIrrelevant_9CJm(expr.type))
    {
        if (!use_return)
        {
            fu::str value = cgNode_i4S3(expr, (!block.has_val ? Mode_Z9Je_M_STMT : Mode_Z9Je{}), (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (block.has_val)
            {
                fu::str id = (block.name + "_v"_view);
                value = TEMPVAR_init_i4S3(id, block.ptr_flip, value, false);
            };
            return ((("{ "_view + value) + "; "_view) + cgGoto_i4S3(block, outputs, _here, ctx, options)) + "; }"_view;
        }
        else
            return "return "_view + cgNode_i4S3(expr, (Mode_Z9Je_M_PARENS | Mode_Z9Je_M_RETURN), (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);

    }
    else if (use_return)
        return fu::str("return"_fu);
    else if (helpers == _current_fn.can_break)
        return fu::str("break"_fu);
    else if (helpers == _current_fn.can_cont)
        return fu::str("continue"_fu);
    else
        return cgGoto_i4S3(block, outputs, _here, ctx, options);

}

                                #ifndef DEF_LOOP_PRE
                                #define DEF_LOOP_PRE
inline constexpr int LOOP_PRE = 2;
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_PRE_COND
                                #define DEF_LOOP_PRE_COND
inline constexpr int LOOP_PRE_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 5;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static fu::str cgLoop_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const SolvedNode_owql& n_pre = node.items[LOOP_PRE];
    if (n_pre)
    {
        SolvedNode_owql pre = n_pre;
        if (pre.kind != Kind_Idfg_block)
        {
            pre.kind = Kind_Idfg_block;
            pre.items = fu::vec<SolvedNode_owql> {{ SolvedNode_owql(n_pre) }};
        };
        /*MOV*/ SolvedNode_owql loop = node;
        loop.items.mutref(LOOP_INIT) = SolvedNode_owql{};
        loop.items.mutref(LOOP_PRE) = SolvedNode_owql{};
        /*MOV*/ SolvedNode_owql n_pre_cond = loop.items[LOOP_PRE_COND];
        if (n_pre_cond)
        {
            if (loop.items[LOOP_POST_COND])
                BUG_i4S3("TODO: cgLoop with pre, pre_cond & post_cond."_view, _here, ctx);
            else
            {
                loop.items.mutref(LOOP_POST_COND) = SolvedNode_owql(n_pre_cond);
                loop.items.mutref(LOOP_PRE_COND) = SolvedNode_owql{};
            };
        };
        pre.items += static_cast<SolvedNode_owql&&>(loop);
        if (n_pre_cond)
        {
            /*MOV*/ SolvedNode_owql guard = n_pre;
            guard.kind = Kind_Idfg_and;
            guard.items = fu::vec<SolvedNode_owql> {{ static_cast<SolvedNode_owql&&>(n_pre_cond), SolvedNode_owql(pre) }};
            pre = n_pre;
            pre.kind = Kind_Idfg_block;
            pre.items = fu::vec<SolvedNode_owql> {{ static_cast<SolvedNode_owql&&>(guard) }};
        };
        const SolvedNode_owql& n_init = node.items[LOOP_INIT];
        if (n_init)
        {
            pre.items.unshift(SolvedNode_owql(n_init));
        };
        return cgNode_i4S3(pre, Mode_Z9Je_M_STMT, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
    }
    else
    {
        const Helpers_DyqV can_cont0 = _current_fn.can_cont;
        const Helpers_DyqV can_break0 = _current_fn.can_break;
        fu_DEFER(
        {
            _current_fn.can_cont = can_cont0;
            _current_fn.can_break = can_break0;
        });
        _current_fn.can_cont = Helpers_DyqV{};
        _current_fn.can_break = Helpers_DyqV{};
        fu::view<SolvedNode_owql> items = node.items;
        const SolvedNode_owql& n_init = items[LOOP_INIT];
        const SolvedNode_owql& n_pre_cond = items[LOOP_PRE_COND];
        const SolvedNode_owql& n_body = items[LOOP_BODY];
        const SolvedNode_owql& n_post = items[LOOP_POST];
        const SolvedNode_owql& n_post_cond = items[LOOP_POST_COND];
        fu::str init = (n_init ? cgNode_i4S3(n_init, Mode_Z9Je_M_STMT, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str pre_cond = (n_pre_cond ? cgNode_i4S3(n_pre_cond, (Mode_Z9Je_M_RETBOOL | Mode_Z9Je_M_PARENS), (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str post = (n_post ? cgNode_i4S3(n_post, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        /*MOV*/ fu::str post_cond = (n_post_cond ? cgNode_i4S3(n_post_cond, Mode_Z9Je_M_RETBOOL, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str name = x7E_rA00("LL_"_view, fu::i64dec(_current_fn.num_labels++));
        const Helpers_DyqV& helpers = node.helpers;
        _current_fn.can_break = helpers;
        const int blocks0 = _current_fn.blocks.size();
        fu_DEFER(_current_fn.blocks.shrink(blocks0));
        _current_fn.blocks += cg_Block_OvNG { fu::str(name), Helpers_DyqV(helpers), false, PointerFlip_I1zX_None, fu::vec<int>{} };
        fu::str body = (n_body ? blockWrapSubstatement_i4S3(n_body, Mode_Z9Je_M_LOOP_BODY, outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        const bool labelUsed = has_YIf6(body, (("goto "_view + name) + ";"_view));
        fu::str breakLabel = (labelUsed ? ((" "_view + name) + ":;"_view) : fu::str{});
        if (post_cond)
        {
            if (init || pre_cond)
                BUG_i4S3("TODO: cgLoop with post_cond & init/pre_cond."_view, _here, ctx);
            else
            {
                fu::str post_cond_1 = (post ? ((post + ", "_view) + post_cond) : post_cond.destructive_move());
                return ((((("do"_view + body) + outputs._indent) + "while ("_view) + post_cond_1) + ")"_view) + breakLabel;
            };
        }
        else if (init || post || !pre_cond)
            return ((((((("for ("_view + init) + "; "_view) + pre_cond) + "; "_view) + post) + ")"_view) + body) + breakLabel;
        else
            return ((("while ("_view + pre_cond) + ")"_view) + body) + breakLabel;

    };
}

                                #ifndef DEF_TRY_TRY
                                #define DEF_TRY_TRY
inline constexpr int TRY_TRY = 0;
                                #endif

                                #ifndef DEF_TRY_ERR
                                #define DEF_TRY_ERR
inline constexpr int TRY_ERR = 1;
                                #endif

                                #ifndef DEF_TRY_CATCH
                                #define DEF_TRY_CATCH
inline constexpr int TRY_CATCH = 2;
                                #endif

static fu::str cgTryCatch_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::view<SolvedNode_owql> items = node.items;
    fu::str tRy = blockWrapSubstatement_i4S3(items[TRY_TRY], Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
    const SolvedNode_owql& err_let = items[TRY_ERR];
    if ((err_let.kind == Kind_Idfg_letdef) || (err_let.kind == Kind_Idfg_empty))
    {
        const Target_VZrr& err_trg = err_let.target;
        fu::str err = (err_trg ? localID_i4S3(err_trg, true, _current_fn, _here, ctx, module) : fu::str{});
        fu::str cAtch = blockWrapSubstatement_i4S3(items[TRY_CATCH], Mode_Z9Je{}, outputs, _current_fn, _here, ctx, module, options);
        /*MOV*/ fu::str res {};
        res += (outputs._indent + "try"_view);
        res += (outputs._indent + "{"_view);
        res += tRy;
        res += (outputs._indent + "}"_view);
        res += (outputs._indent + "catch (const std::exception& o_0)"_view);
        res += (outputs._indent + "{"_view);
        if (err)
            res += (((outputs._indent + "    fu::str "_view) + err) + " = fu::to_str(o_0.what());\n"_view);

        res += cAtch;
        res += (outputs._indent + "}\n"_view);
        return /*NRVO*/ res;
    }
    else
        BUG_i4S3("TRY_ERR not a letdef/empty"_view, _here, ctx);

}

static fu::str cgDefer_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    include_i4S3(str_UITKnaHsmN6, outputs);
    fu::view<char> which = ((node.value == "err"_view) ? "fu_DEFER_IF_ERR"_view : ((node.value == "ok"_view) ? "fu_DEFER_IF_OK"_view : "fu_DEFER"_view));
    return ((which + "("_view) + cgNode_i4S3(only_Cntr(node.items), Mode_Z9Je_M_STMT, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) + ")"_view;
}

                                #ifndef DEF_if_first_9lmUPDg5OXc
                                #define DEF_if_first_9lmUPDg5OXc
inline char if_first_9lmU(fu::view<char> s)
{
    if (s.size())
        return s[0];
    else
    {
        return char{};
    };
}
                                #endif

static fu::vec_range<char> inferIndentation_i4S3(fu::vec_range<char> v)
{
    if (if_first_9lmU(v) == '\n')
    {
        for (int i = 1; i < v.size(); i++)
        {
            const char c = v[i];
            if ((c != ' ') && (c != '\t'))
                return fu::get_range(v, 0, i);

        };
    };
    return (*(fu::str*)fu::NIL);
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

                                #ifndef DEF___esi3LoooRl0
                                #define DEF___esi3LoooRl0
inline static bool _esi3(fu::vec_range<char> i, Outputs_MiyU& outputs)
{
    return add_poRw(outputs.HACK_link, i);
}
                                #endif

                                #ifndef DEF___em7SP5MfQa2
                                #define DEF___em7SP5MfQa2
inline static bool _em7S(fu::vec_range<char> i, Outputs_MiyU& outputs)
{
    return add_poRw(outputs.HACK_include_dirs, i);
}
                                #endif

                                #ifndef DEF___o9Y3cmrZfZ7
                                #define DEF___o9Y3cmrZfZ7
inline static bool _o9Y3(fu::vec_range<char> i, Outputs_MiyU& outputs)
{
    return add_poRw(outputs.HACK_extra_sources, i);
}
                                #endif

                                #ifndef DEF___eZh4xkNI3Xl
                                #define DEF___eZh4xkNI3Xl
inline static void _eZh4(fu::vec_range<char> i, Outputs_MiyU& outputs)
{
    include_i4S3((starts_Sfbf(i, '<') ? fu::str(i) : (('"' + i) + '"')), outputs);
}
                                #endif

static fu::str cgCompilerPragma_i4S3(const SolvedNode_owql& node, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::view<char> cmd = node.value;
    if ((cmd == "emit"_view) || (cmd == "emit_top"_view) || (cmd == "input"_view) || (cmd == "output"_view) || (cmd == "clock"_view))
    {
        /*MOV*/ fu::str result {};
        fu::str indent {};
        if (node.items)
        {
            const SolvedNode_owql& node_1 = node.items[0];
            if (node_1.kind == Kind_Idfg_str)
                indent = inferIndentation_i4S3(node_1.value);

        };
        for (int i = 0; i < node.items.size(); i++)
        {
            const SolvedNode_owql& node_1 = node.items[i];
            if (node_1.kind == Kind_Idfg_str)
                result += replace_4fXW(fu::get_range(node_1.value, ((i == 0) ? indent.size() : 0)), indent, outputs._indent);
            else
            {
                result += cgNode_i4S3(node_1, Mode_Z9Je{}, (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            };
        };
        for (int i_1 = result.size(); i_1-- > 0; )
        {
            const char c = result[i_1];
            if (c > ' ')
            {
                result.shrink((i_1 + 1));
                break;
            };
        };
        if (_current_fn && (cmd != "emit_top"_view))
            return /*NRVO*/ result;
        else
        {
            result += "\n"_view;
            if (!has_2Cr4(outputs._top_emits, result))
                outputs._top_emits += static_cast<fu::str&&>(result);

            return fu::str{};
        };
    }
    else if (cmd == "link"_view)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const SolvedNode_owql& item = node.items[i];
            if (item.kind != Kind_Idfg_str)
                BUG_i4S3((x7E_rA00("compiler link: All arguments must be string literals, got a `"_view, str_J9Iq(item.kind)) + "`."_view), _here, ctx);
            else
                _esi3(item.value, outputs);

        };
        return fu::str{};
    }
    else if (cmd == "include_dirs"_view)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const SolvedNode_owql& item = node.items[i];
            if (item.kind != Kind_Idfg_str)
                BUG_i4S3((x7E_rA00("compiler link: All arguments must be string literals, got a `"_view, str_J9Iq(item.kind)) + "`."_view), _here, ctx);
            else
                _em7S(item.value, outputs);

        };
        return fu::str{};
    }
    else if (cmd == "sources"_view)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const SolvedNode_owql& item = node.items[i];
            if (item.kind != Kind_Idfg_str)
                BUG_i4S3((x7E_rA00("compiler link: All arguments must be string literals, got a `"_view, str_J9Iq(item.kind)) + "`."_view), _here, ctx);
            else
                _o9Y3(item.value, outputs);

        };
        return fu::str{};
    }
    else if (cmd == "include"_view)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const SolvedNode_owql& item = node.items[i];
            if (item.kind != Kind_Idfg_str)
                BUG_i4S3((x7E_rA00("compiler link: All arguments must be string literals, got a `"_view, str_J9Iq(item.kind)) + "`."_view), _here, ctx);
            else
                _eZh4(item.value, outputs);

        };
        return fu::str{};
    }
    else
        BUG_i4S3(("Unknown compiler pragma: "_view + cmd), _here, ctx);

}

static fu::str cgNode_i4S3(const SolvedNode_owql& node, const Mode_Z9Je mode, const Type_KBIB& callarg, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    const Kind_Idfg k = (node.kind ? node.kind : BUG_i4S3("cgNode: No node.kind."_view, _here, ctx));
    HERE_u9Gb(node.token, _here);
    if (k == Kind_Idfg_not)
        return cgNot_i4S3(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_call)
        return cgCall_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_int)
        return cgLiteral_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_real)
        return cgLiteral_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_char)
        return cgCharLiteral_i4S3(node, outputs, _here, ctx, options);
    else if (k == Kind_Idfg_str)
        return cgStringLiteral_i4S3(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_arrlit)
        return cgArrayLiteral_i4S3(node, callarg, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_bool)
        return fu::str(node.value);
    else if (k == Kind_Idfg_copy)
        return cgCopyOrMove_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_move)
        return cgCopyOrMove_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_if)
        return cgIf_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_or)
        return cgOr_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_and)
        return cgAnd_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_letdef)
        return cgLetDef_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_block)
        return cgBlock_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_empty)
        return cgEmpty_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (!(mode & Mode_Z9Je_M_STMT))
        return cgBlock_i4S3(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_jump)
        return cgJump_i4S3(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_loop)
        return cgLoop_i4S3(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_try)
        return cgTryCatch_i4S3(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_defer)
        return cgDefer_i4S3(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == Kind_Idfg_pragma)
        return cgCompilerPragma_i4S3(node, outputs, _current_fn, _here, ctx, module, options);
    else
        BUG_i4S3(x7E_rA00("cg: Unexpected "_view, str_J9Iq(k)), _here, ctx);

}

static fu::vec<fu::str> cgNodes_i4S3(fu::view<SolvedNode_owql> nodes, const Mode_Z9Je mode, fu::view<char> trail, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    /*MOV*/ fu::vec<fu::str> result {};
    fu::vec<fu::str> _tv0 {};
    if (mode & Mode_Z9Je_M_STMT)
        _tv0.swap(_current_fn.TEMPVARs);

    fu_DEFER(if (mode & Mode_Z9Je_M_STMT)
        _tv0.swap(_current_fn.TEMPVARs););
    for (int i = 0; i < nodes.size(); i++)
    {
        const SolvedNode_owql& node = nodes[i];
        if ((mode & Mode_Z9Je_M_CHECK_NEVER_LTR) && is_never_9CJm(node.type.vtype) && (i < (nodes.size() - 1)))
            BUG_i4S3("M_CHECK_NEVER_LTR: non-trailing node.is_never"_view, _here, ctx);
        else
        {
            const bool isTrail = ((trail && (i == (nodes.size() - 1)) && !is_never_9CJm(node.type.vtype)) ? !isIrrelevant_9CJm(node.type) : false);
            /*MOV*/ fu::str src = (node ? cgNode_i4S3(node, (isTrail ? (mode & ~Mode_Z9Je_M_STMT) : mode), (*(Type_KBIB*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
            if (src || (mode & Mode_Z9Je_M_STMT))
            {
                if ((mode & Mode_Z9Je_M_STMT) && _current_fn.TEMPVARs)
                {
                    result += _current_fn.TEMPVARs;
                    _current_fn.TEMPVARs.clear();
                };
                if (isTrail)
                    src = (((trail + "("_view) + src) + ")"_view);

                result.push(src.destructive_move());
            }
            else
                BUG_i4S3((((x7E_rA00("cgNodes: empty output for Node(kind=`"_view, str_J9Iq(node.kind)) + "` value=`"_view) + node.value) + "`)."_view), _here, ctx);

        };
    };
    return /*NRVO*/ result;
}

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

static fu::str cgStatements_i4S3(fu::view<SolvedNode_owql> nodes, int& count, fu::view<char> trail, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    fu::vec<fu::str> lines = cgNodes_i4S3(nodes, (Mode_Z9Je_M_STMT | Mode_Z9Je_M_CHECK_NEVER_LTR), trail, outputs, _current_fn, _here, ctx, module, options);
    count = lines.size();
    /*MOV*/ fu::str src {};
    for (int i = 0; i < lines.size(); i++)
    {
        fu::view<char> line = lines[i];
        if (line)
        {
            src += (((if_first_9lmU(line) == '\n') ? ('\n' + line) : (outputs._indent + line)) + ((if_last_JKTR(line) == ';') ? '\n' : ';'));
        };
    };
    return /*NRVO*/ src;
}

static fu::str cgMain_i4S3(Outputs_MiyU& outputs)
{
    /*MOV*/ fu::str src {};
    if (outputs._test_cases)
    {
        src += "\n#define TESTSUITE TESTSUITE ## __COUNTER__\n"_view;
        src += (("\nstatic int TESTSUITE = ("_view + outputs._test_cases) + "\n    0);\n"_view);
        src += "\n#undef TESTSUITE\n"_view;
    };
    if (outputs._hasMain)
    {
        fu::str zst {};
        if (outputs._hasMain & MAIN_zst)
            zst = fu::str(", 0"_fu);

        src += (("\nint main() { return fu_MAIN()"_view + zst) + "; }"_view);
        if (outputs._hasMain & MAIN_argv)
        {
            annotateString_i4S3(outputs);
            src = ((((((((((("\nint main(int argc, char* argv[])"_view + "\n{"_view) + "\n    fu::vec<fu::str> args;"_view) + "\n    args.reserve(argc);"_view) + "\n"_view) + "\n    for (int i = 0; i < argc; i++)"_view) + "\n        args.push(fu::to_str(argv[i]));"_view) + "\n"_view) + "\n    return fu_MAIN(static_cast<fu::vec<fu::str>&&>(args))"_view) + zst) + ";"_view) + "\n}"_view);
        };
        src += "\n"_view;
    };
    return /*NRVO*/ src;
}

static fu::str collectDedupes_i4S3(const Set_XshD& values, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> header, fu::view<char> footer)
{
    /*MOV*/ fu::str out {};
    if (values)
        out += header;

    const Set_XshD* _;
    for (int i = 0; i < (_ = &(values), (*_).keys_asc.size()); i++)
    {
        const Set_XshD* __1;
        int i_1;
        out += ((prefix + (__1 = &(values), i_1 = i, (*__1).keys_asc[i_1])) + suffix);
    };
    if (out)
        out += footer;

    return /*NRVO*/ out;
}

                                #ifndef DEF_join_QbuIaIZczPf
                                #define DEF_join_QbuIaIZczPf
inline fu::str join_QbuI(fu::view<fu::str> a)
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
        const int N = 0;
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
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static fu::str cgRoot_i4S3(const SolvedNode_owql& root, fu::view<ScopeItem_ydOE> scope, Outputs_MiyU& outputs, cg_CurrentFn_1clL& _current_fn, TokenIdx_5b85& _here, const Context_UXD9& ctx, const Module_qqBh& module, const Options_mg7V& options)
{
    int count {};
    fu::str src = cgStatements_i4S3(root.items, count, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
    for (int i = 0; i < scope.size(); i++)
    {
        const Target_VZrr t = target_z0Qq(scope[i]);
        if ((int(unsigned(((t._packed >> 40ull) & 0xfffffull))) == module.modid) && (GET_i4S3(t, ctx, module).kind == Kind_Idfg_fn) && isExtLinked_i4S3(GET_i4S3(t, ctx, module)))
            ensureFnDef_i4S3(t, false, outputs, _current_fn, _here, ctx, module, options);

    };
    fu::str main = cgMain_i4S3(outputs);
    return ((((((((((((((((collectDedupes_i4S3(outputs._libs, "#include "_view, "\n"_view, fu::view<char>{}, "\n"_view) + outputs._tfwd_src) + outputs._ffwd_src) + (outputs._ffwd_live_client ? "\n                                #ifdef fu_HOTSWAP\n"_view : fu::view<char>{})) + outputs._ffwd_live_client) + (outputs._ffwd_live_client ? "                                #else\n"_view : fu::view<char>{})) + outputs._ffwd_live_nclient) + (outputs._ffwd_live_client ? "                                #endif\n"_view : fu::view<char>{})) + outputs._tdef) + outputs._static_string_src) + collectDedupes_i4S3(outputs._gcc_ignore, "#pragma GCC diagnostic ignored \""_view, "\"\n"_view, "#pragma GCC diagnostic push\n"_view, "\n"_view)) + join_QbuI(outputs._top_emits)) + (outputs._fdef ? "\n#ifndef fu_NO_fdefs\n"_view : fu::view<char>{})) + outputs._fdef) + (outputs._fdef ? "\n#endif\n"_view : fu::view<char>{})) + src) + main) + (outputs._gcc_ignore ? "\n#pragma GCC diagnostic pop\n"_view : fu::view<char>{});
}

static fu::str localPath_i4S3(fu::vec_range<char> path, const Module_qqBh& module)
{
    if (starts_Sfbf(path, '.'))
        return join_qZI0(dirname_qZI0(module.fname), path);
    else
        return fu::str(path);

}

CodegenOutput_OFce cpp_codegen_i4S3(const Module_qqBh& module, const Context_UXD9& ctx, const Options_mg7V& options)
{
    TokenIdx_5b85 _here {};
    Outputs_MiyU outputs {};
    outputs._indent = fu::str("\n"_fu);
    cg_CurrentFn_1clL _current_fn {};
    const SolvedNode_owql& root = module.out.solve.root;
    if (root.kind == Kind_Idfg_root)
    {
        /*MOV*/ fu::str src = cgRoot_i4S3(root, module.out.solve.scope.items, outputs, _current_fn, _here, ctx, module, options);
        const Set_XshD* _;
        for (int i = 0; i < (_ = &(outputs.HACK_extra_sources), (*_).keys_asc.size()); i++)
        {
            const Set_XshD* __1;
            int i_1;
            fu::vec_range<char> orig = (__1 = &(outputs.HACK_extra_sources), i_1 = i, (*__1).keys_asc[i_1]);
            /*MOV*/ fu::str file = localPath_i4S3(orig, module);
            src += (("\n// "_view + orig) + "\n"_view);
            src += read_VWJw(file.destructive_move());
        };
        return CodegenOutput_OFce { src.destructive_move(), Set_XshD(outputs.HACK_link), Set_XshD(outputs.HACK_extra_sources), Set_XshD(outputs._libs), Set_XshD(outputs.HACK_include_dirs), fu::vec<int>{}, outputs._defects };
    }
    else
    {
        BUG_i4S3(fu::view<char>{}, _here, ctx);
    };
}

#endif
