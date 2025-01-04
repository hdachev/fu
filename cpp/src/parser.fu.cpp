#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct ParserOutput_d14k;
struct Node_JjyR;
enum Kind_Idfg: fu::u8;
typedef uint16_t DeclAsserts_taUG;
typedef fu::u8 ParseSyntax_Lay2;
typedef unsigned Flags_Lzg8;
struct TokenIdx_5581;
struct Import_7CIJ;
struct Token_6M7a;
struct LineColChars_6JiM;
struct Options_TBgD;
struct Lint_Q9R1;
typedef int SolverNotes_LSla;
typedef fu::u8 CGDefects_2L18;
typedef fu::u8 DevOptions_QEya;
struct ParserState_Ahey;
struct Precedence_ybkz;
struct MustBeZeroAtExit_pOKo;
struct Set_XshD;
enum Fixity_7dA5: fu::u8;
struct BINOP_LfrI;
struct Map_0hQQ;
struct ArgsParse_IKpo;
fu::str qKW_e44U(fu::view<char>);
fu::str qID_e44U(fu::view<char>);
[[noreturn]] fu::never FAIL_k53p(fu::vec_range<char>, fu::vec_range<char>, const LineColChars_6JiM&, fu::view<char>);
fu::str qBAD_e44U(fu::view<char>);

                                #ifndef DEF_M_LINT_ENSURE_INDENT
                                #define DEF_M_LINT_ENSURE_INDENT
inline constexpr int M_LINT_ENSURE_INDENT = (1 << 1);
                                #endif

                                #ifndef DEF_M_LINT_UNARY_PRECEDENCE
                                #define DEF_M_LINT_UNARY_PRECEDENCE
inline constexpr int M_LINT_UNARY_PRECEDENCE = (1 << 0);
                                #endif

                                #ifndef DEF_M_CALLSITE_ARGUMENT_POS
                                #define DEF_M_CALLSITE_ARGUMENT_POS
inline constexpr int M_CALLSITE_ARGUMENT_POS = (1 << 3);
                                #endif
inline static Node_JjyR parseExpression_I0Mm(const Precedence_ybkz&, int, int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, ParserState_Ahey&, const Options_TBgD&);
bool hasIdentifierChars_V5Iu(fu::view<char>);
static fu::str getAutoName_qFIn(const Node_JjyR&, fu::vec_range<char>, fu::vec_range<char>, fu::view<Token_6M7a>, const ParserState_Ahey&);
static Node_JjyR parseTypeAnnot_qFIn(bool, bool, int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, ParserState_Ahey&, const Options_TBgD&);
void appendVarint_V5Iu(fu::vec_range_mut<char>, unsigned);
static Node_JjyR parseLet_qFIn(bool, int, bool, bool, const Precedence_ybkz&, int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, ParserState_Ahey&, const Options_TBgD&);

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif
fu::vec_range<char> cleanID_V5Iu(fu::vec_range<char>);
static Node_JjyR parseUnaryExpression_qFIn(int, int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, ParserState_Ahey&, const Options_TBgD&);
inline Set_XshD uNion_GdwD(const Set_XshD&, const Set_XshD&);
static fu::vec<Node_JjyR> parseBlockLike_qFIn(Kind_Idfg, fu::view<char>, bool, bool, int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, ParserState_Ahey&, const Options_TBgD&);
static Node_JjyR parseStatement_qFIn(int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, ParserState_Ahey&, const Options_TBgD&);

                                #ifndef DEF_M_LAMBDA_STMT_OK
                                #define DEF_M_LAMBDA_STMT_OK
inline constexpr int M_LAMBDA_STMT_OK = (1 << 2);
                                #endif
static Node_JjyR parseFnDecl_qFIn(Flags_Lzg8, Fixity_7dA5, DeclAsserts_taUG, bool, int, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<Token_6M7a>, ParserState_Ahey&, const Options_TBgD&);

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline constexpr int FN_ARGS_BACK = FN_RET_BACK;
                                #endif
static Node_JjyR createUsing_qFIn(Node_JjyR&&, int, fu::vec_range<char>, fu::vec_range<char>, fu::view<Token_6M7a>, ParserState_Ahey&);
bool isFnOrTypeDeclaration_UVY6(Kind_Idfg);

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

                                #ifndef DEF_Precedence_ybkzJSWfvo9
                                #define DEF_Precedence_ybkzJSWfvo9
struct Precedence_ybkz
{
    int formal;
    int whitesp_lint;
    int tokidx;
    explicit operator bool() const noexcept
    {
        return false
            || formal
            || whitesp_lint
            || tokidx
        ;
    }
};
                                #endif

                                #ifndef DEF_MustBeZeroAtExit_pOKoxgnEnR5
                                #define DEF_MustBeZeroAtExit_pOKoxgnEnR5
struct MustBeZeroAtExit_pOKo
{
    int _fnDepth;
    int _templateDepth;
    int _loopDepth;
    int _lambdaDepth;
    int _blockArgDepth;
    bool _TODO_FIX_dollarOk;
    Set_XshD _expectedTypeParams;
    Set_XshD _upstreamTypeParams;
    explicit operator bool() const noexcept
    {
        return false
            || _fnDepth
            || _templateDepth
            || _loopDepth
            || _lambdaDepth
            || _blockArgDepth
            || _TODO_FIX_dollarOk
            || _expectedTypeParams
            || _upstreamTypeParams
        ;
    }
};
                                #endif

                                #ifndef DEF_ParserState_AheyAO7lJyi
                                #define DEF_ParserState_AheyAO7lJyi
struct ParserState_Ahey
{
    int _idx;
    int _loc;
    int _col0;
    Precedence_ybkz _precedence;
    MustBeZeroAtExit_pOKo mbz;
    bool _autopub;
    int _numDollars;
    fu::vec<Import_7CIJ> imports;
    fu::vec<fu::str> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || _idx
            || _loc
            || _col0
            || _precedence
            || mbz
            || _autopub
            || _numDollars
            || imports
            || warnings
        ;
    }
};
                                #endif

                                #ifndef DEF_Fixity_7dA5
                                #define DEF_Fixity_7dA5
enum Fixity_7dA5: fu::u8
{
    Fixity_7dA5_Infix = 1u,
    Fixity_7dA5_Prefix = 2u,
    Fixity_7dA5_Postfix = 3u,
};
                                #endif

                                #ifndef DEF_Map_0hQQVkxO6gg
                                #define DEF_Map_0hQQVkxO6gg
struct Map_0hQQ
{
    Set_XshD keys;
    fu::vec<int> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_BINOP_LfrITJKgwk1
                                #define DEF_BINOP_LfrITJKgwk1
struct BINOP_LfrI
{
    Map_0hQQ PRECEDENCE;
    fu::vec<bool> RIGHT_TO_LEFT;
    explicit operator bool() const noexcept
    {
        return false
            || PRECEDENCE
            || RIGHT_TO_LEFT
        ;
    }
};
                                #endif

                                #ifndef DEF_ArgsParse_IKpojvNusHd
                                #define DEF_ArgsParse_IKpojvNusHd
struct ArgsParse_IKpo
{
    Flags_Lzg8 flags;
    bool sliceSyntax;
    explicit operator bool() const noexcept
    {
        return false
            || flags
            || sliceSyntax
        ;
    }
};
                                #endif

                                #ifndef STR_onytfN8TIli
                                #define STR_onytfN8TIli
static const fu::str str_onytfN8TIli fu_INIT_PRIORITY(1007) { "__preceding_ref_arg"_fu };
                                #endif

                                #ifndef STR_QeWEBnJGbog
                                #define STR_QeWEBnJGbog
static const fu::str str_QeWEBnJGbog fu_INIT_PRIORITY(1007) { "__serialized_type"_fu };
                                #endif

                                #ifndef STR_QiuEJjR3RB9
                                #define STR_QiuEJjR3RB9
static const fu::str str_QiuEJjR3RB9 fu_INIT_PRIORITY(1007) { "__serialized_addrof_type_fn"_fu };
                                #endif

                                #ifndef STR_YA1luviVkz3
                                #define STR_YA1luviVkz3
static const fu::str str_YA1luviVkz3 fu_INIT_PRIORITY(1007) { "Shadowing is currently only supported inside functions."_fu };
                                #endif

                                #ifndef STR_Rh23JTcABj5
                                #define STR_Rh23JTcABj5
static const fu::str str_Rh23JTcABj5 fu_INIT_PRIORITY(1007) { "Assertion failed: precedence < 64"_fu };
                                #endif

                                #ifndef STR_QlC4mahL2gb
                                #define STR_QlC4mahL2gb
static const fu::str str_QlC4mahL2gb fu_INIT_PRIORITY(1007) { "start"_fu };
                                #endif

                                #ifndef STR_KgYNc12jxbi
                                #define STR_KgYNc12jxbi
static const fu::str str_KgYNc12jxbi fu_INIT_PRIORITY(1007) { "Cannot :autoname this expression."_fu };
                                #endif

                                #ifndef STR_2SffdvnVDw8
                                #define STR_2SffdvnVDw8
static const fu::str str_2SffdvnVDw8 fu_INIT_PRIORITY(1007) { "Malformed property access expression."_fu };
                                #endif

                                #ifndef STR_cZzwiUzJ2K1
                                #define STR_cZzwiUzJ2K1
static const fu::str str_cZzwiUzJ2K1 fu_INIT_PRIORITY(1007) { "[..]"_fu };
                                #endif

                                #ifndef STR_77oJR2ghS9a
                                #define STR_77oJR2ghS9a
static const fu::str str_77oJR2ghS9a fu_INIT_PRIORITY(1007) { "[]"_fu };
                                #endif

                                #ifndef STR_2NQa5TNr8Mc
                                #define STR_2NQa5TNr8Mc
static const fu::str str_2NQa5TNr8Mc fu_INIT_PRIORITY(1007) { "Cannot pipeline: not a call expr."_fu };
                                #endif

                                #ifndef STR_fiRLyok9R0k
                                #define STR_fiRLyok9R0k
static const fu::str str_fiRLyok9R0k fu_INIT_PRIORITY(1007) { "Invalid let shorthand - left side not an identifier."_fu };
                                #endif

                                #ifndef STR_WGOYs0nMGhg
                                #define STR_WGOYs0nMGhg
static const fu::str str_WGOYs0nMGhg fu_INIT_PRIORITY(1007) { "TODO default implicit arguments"_fu };
                                #endif

                                #ifndef STR_IXHmY51sMJb
                                #define STR_IXHmY51sMJb
static const fu::str str_IXHmY51sMJb fu_INIT_PRIORITY(1007) { "Non-optional arguments without a bang! cannot follow optional arguments."_fu };
                                #endif

                                #ifndef STR_OokQ1yGra4d
                                #define STR_OokQ1yGra4d
static const fu::str str_OokQ1yGra4d fu_INIT_PRIORITY(1007) { "Cannot pipeline: expression is not a call."_fu };
                                #endif

                                #ifndef STR_iXe92EcYeE8
                                #define STR_iXe92EcYeE8
static const fu::str str_iXe92EcYeE8 fu_INIT_PRIORITY(1007) { "Unparenthesized assignment used as a condition."_fu };
                                #endif

                                #ifndef STR_5TEYhFzaE10
                                #define STR_5TEYhFzaE10
static const fu::str str_5TEYhFzaE10 fu_INIT_PRIORITY(1007) { "!"_fu };
                                #endif

                                #ifndef STR_8atgJDQsZa1
                                #define STR_8atgJDQsZa1
static const fu::str str_8atgJDQsZa1 fu_INIT_PRIORITY(1007) { "string"_fu };
                                #endif

                                #ifndef STR_RRLMAufVgP7
                                #define STR_RRLMAufVgP7
static const fu::str str_RRLMAufVgP7 fu_INIT_PRIORITY(1007) { "Conversion functions cannot have more than one non-defaulted explicit argument."_fu };
                                #endif

                                #ifndef STR_vpTbc9CkFUc
                                #define STR_vpTbc9CkFUc
static const fu::str str_vpTbc9CkFUc fu_INIT_PRIORITY(1007) { "Conversion functions cannot have all their explicit arguments defaulted."_fu };
                                #endif

                                #ifndef STR_H0VBGU0sq44
                                #define STR_H0VBGU0sq44
static const fu::str str_H0VBGU0sq44 fu_INIT_PRIORITY(1007) { "Conversion functions need type annotations on their arguments to know when to kick in."_fu };
                                #endif

                                #ifndef STR_SXzNzprGfI2
                                #define STR_SXzNzprGfI2
static const fu::str str_SXzNzprGfI2 fu_INIT_PRIORITY(1007) { "_"_fu };
                                #endif

                                #ifndef STR_K8KxoYxA7Xl
                                #define STR_K8KxoYxA7Xl
static const fu::str str_K8KxoYxA7Xl fu_INIT_PRIORITY(1007) { "i32"_fu };
                                #endif

                                #ifndef STR_MQ9AWe6yLTi
                                #define STR_MQ9AWe6yLTi
static const fu::str str_MQ9AWe6yLTi fu_INIT_PRIORITY(1007) { "fn main() must return i32."_fu };
                                #endif

                                #ifndef STR_ocR3YpRuxa5
                                #define STR_ocR3YpRuxa5
static const fu::str str_ocR3YpRuxa5 fu_INIT_PRIORITY(1007) { "Unparenthesized `|| lambda` within a binary expression."_fu };
                                #endif

                                #ifndef STR_VOy1PtiWBW2
                                #define STR_VOy1PtiWBW2
static const fu::str str_VOy1PtiWBW2 fu_INIT_PRIORITY(1007) { "&mut"_fu };
                                #endif

                                #ifndef STR_8K1yNpGZAm5
                                #define STR_8K1yNpGZAm5
static const fu::str str_8K1yNpGZAm5 fu_INIT_PRIORITY(1007) { "&"_fu };
                                #endif

                                #ifndef STR_uQtsXLlT0n9
                                #define STR_uQtsXLlT0n9
static const fu::str str_uQtsXLlT0n9 fu_INIT_PRIORITY(1007) { "Orphaned call without parentheses, add () to imply a useful side effect."_fu };
                                #endif

                                #ifndef STR_2te45mOwAV9
                                #define STR_2te45mOwAV9
static const fu::str str_2te45mOwAV9 fu_INIT_PRIORITY(1007) { "Missing `eof` token."_fu };
                                #endif

#ifndef fu_NO_fdefs

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

                                #ifndef DEF_str_eN8kTaMKJA9
                                #define DEF_str_eN8kTaMKJA9
inline fu::str str_eN8k(const Kind_Idfg n)
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
    else if (n == Kind_Idfg___serialized_type)
        return fu::str(str_QeWEBnJGbog);
    else if (n == Kind_Idfg___serialized_addrof_type_fn)
        return fu::str(str_QiuEJjR3RB9);
    else if (n == Kind_Idfg___litfix_bound)
        return fu::str("__litfix_bound"_fu);
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

[[noreturn]] static fu::never fail_94Qv(fu::str&& reason, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    const Token_6M7a& token = tokens[_ps._idx];
    if (!reason)
        reason = (("Unexpected `"_view + token.value) + "`."_view);

    FAIL_k53p(fname, src, token.lcc, reason);
}

static const Token_6M7a& consume_qFIn(const Kind_Idfg kind, fu::view<char> value, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    const Token_6M7a& token = tokens[_ps._idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _ps._idx++;
        return token;
    }
    else
    {
        fail_94Qv(((((("Expected "_view + qKW_e44U(str_eN8k(kind))) + ((value && (kind == token.kind)) ? (" "_view + qID_e44U(value)) : fu::str{})) + "\n\t     got "_view) + qKW_e44U(str_eN8k(token.kind))) + ((value && (kind == token.kind)) ? (" "_view + qID_e44U(token.value)) : fu::str{})), fname, src, tokens, _ps);
    };
}

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::str fail_compose_qFIn(fu::str&& reason, fu::view<char> fname, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    const Token_6M7a& loc = tokens[_ps._loc];
    const Token_6M7a& here = tokens[_ps._idx];
    if (!reason)
        reason = (("Unexpected `"_view + here.value) + "`."_view);

    const int l0 = loc.lcc.line;
    const int c0 = loc.lcc.col;
    const int l1 = here.lcc.line;
    const int c1 = here.lcc.col;
    fu::str addr = ((l1 == l0) ? x7E_rA00((x7E_rA00("@"_view, fu::i64dec(l1)) + ":"_view), fu::i64dec(c1)) : x7E_rA00((x7E_rA00((x7E_rA00((x7E_rA00("@"_view, fu::i64dec(l0)) + ":"_view), fu::i64dec(c0)) + ".."_view), fu::i64dec(l1)) + ":"_view), fu::i64dec(c1)));
    return (((fname + " "_view) + addr) + ":\n\t"_view) + reason;
}

static void warn_qFIn(fu::vec_range<char> reason, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (_ps.warnings.size() == options.lint.maxwarn)
        fail_94Qv(fu::str(reason), fname, src, tokens, _ps);
    else
        _ps.warnings += fail_compose_qFIn(fu::str(reason), fname, tokens, _ps);

}

static const Token_6M7a& tryConsume_94Qv(const Kind_Idfg kind, fu::view<char> value, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    const Token_6M7a& token = tokens[_ps._idx];
    if ((token.kind == kind) && (token.value == value))
    {
        _ps._idx++;
        return token;
    }
    else
        return (*(Token_6M7a*)fu::NIL);

}

static const Precedence_ybkz P_RESET fu_INIT_PRIORITY(1007) = Precedence_ybkz { 1000, 0, 0 };

                                #ifndef DEF_tryConsume_Qkz7U8gbdgd
                                #define DEF_tryConsume_Qkz7U8gbdgd
inline static const Token_6M7a& tryConsume_Qkz7(const Kind_Idfg kind, fu::view<char> value, const bool xqmark, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    const Token_6M7a& token = tokens[_ps._idx];
    const Token_6M7a* token_1;
    if ((token.kind == kind) && (token.value == value) && (token_1 = &(tokens[(_ps._idx + 1)]), (((*token_1).kind == Kind_Idfg_id) || ((xqmark && ((*token_1).kind == Kind_Idfg_op)) ? (((*token_1).value == "."_view) || ((*token_1).value == "<"_view)) : false))))
    {
        _ps._idx++;
        return token;
    }
    else
        return (*(Token_6M7a*)fu::NIL);

}
                                #endif

static void set_SHADOW_qFIn(Flags_Lzg8& flags, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    if (flags & Flags_Lzg8_F_PUB)
        fail_94Qv(((("Cannot "_view + qBAD_e44U("shadow"_view)) + " a "_view) + qKW_e44U("pub"_view)), fname, src, tokens, _ps);
    else if (_ps.mbz._fnDepth)
        flags |= Flags_Lzg8_F_SHADOW;
    else
        fail_94Qv(fu::str(str_YA1luviVkz3), fname, src, tokens, _ps);

}

static const Token_6M7a& tryConsume_qFIn(const Kind_Idfg kind, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    const Token_6M7a& token = tokens[_ps._idx];
    if (token.kind == kind)
    {
        _ps._idx++;
        return token;
    }
    else
        return (*(Token_6M7a*)fu::NIL);

}

static const Precedence_ybkz P_PREFIX_UNARY fu_INIT_PRIORITY(1007) = Precedence_ybkz { 1, 0, 0 };

static Node_JjyR make_qFIn(const Kind_Idfg kind, fu::vec_range<Node_JjyR> items, const Flags_Lzg8 flags, fu::vec_range<char> value, const DeclAsserts_taUG asserts, const ParseSyntax_Lay2 syntax, const TokenIdx_5581& token, const int modid, const ParserState_Ahey& _ps)
{
    return Node_JjyR { kind, asserts, syntax, flags, fu::str(value), fu::vec<Node_JjyR>(items), (token ? TokenIdx_5581(token) : TokenIdx_5581 { modid, _ps._loc }) };
}

static Node_JjyR createLeaf_qFIn(const Kind_Idfg kind, fu::vec_range<char> value, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(kind, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, value, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static const fu::vec<fu::str> POSTFIX fu_INIT_PRIORITY(1007) = fu::vec<fu::str> {{ fu::str("++"_fu), fu::str("--"_fu), fu::str("[]"_fu), fu::str("[..]"_fu) }};

                                #ifndef DEF_find_cVszpoH03s0
                                #define DEF_find_cVszpoH03s0
inline int find_cVsz(fu::view<fu::str> haystack, fu::view<char> needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_FZWi63CdGZ7
                                #define DEF_has_FZWi63CdGZ7
inline bool has_FZWi(fu::view<fu::str> a, fu::view<char> b)
{
    return (find_cVsz(a, b) >= 0);
}
                                #endif

static const fu::vec<fu::str> PREFIX fu_INIT_PRIORITY(1007) = fu::vec<fu::str> {{ fu::str("++"_fu), fu::str("+"_fu), fu::str("--"_fu), fu::str("-"_fu), fu::str("!"_fu), fu::str("~"_fu), fu::str("?"_fu), fu::str("*"_fu), fu::str("&"_fu), fu::str("-%"_fu) }};

                                #ifndef DEF_ensure_HLp3lv8Bwna
                                #define DEF_ensure_HLp3lv8Bwna
inline bool& ensure_HLp3(fu::vec_range_mut<bool> a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_update_AKXJ26VJzra
                                #define DEF_update_AKXJ26VJzra
inline bool update_AKXJ(Set_XshD& _, fu::vec_range<char> key, fu::vec_range_mut<int> values, const int value)
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
            values.mutref(i) = value;
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, fu::str(key));
    values.insert(i, value);
    return true;
}
                                #endif

                                #ifndef DEF_set_JLKKYftyO82
                                #define DEF_set_JLKKYftyO82
inline bool set_JLKK(Map_0hQQ& _, fu::vec_range<char> key, const int value)
{
    return update_AKXJ(_.keys, key, _.vals, value);
}
                                #endif

static void binop_qFIn(fu::view<fu::str> ops, BINOP_LfrI& out, int& precedence, const bool rightToLeft)
{
    precedence++;
    if (precedence < 64)
    {
        ensure_HLp3(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
        for (int i = 0; i < ops.size(); i++)
            set_JLKK(out.PRECEDENCE, ops[i], precedence);

    }
    else
        fu::fail(fu::str(str_Rh23JTcABj5));

}

static BINOP_LfrI setupOperators_qFIn()
{
    /*MOV*/ BINOP_LfrI out {};
    int precedence = P_PREFIX_UNARY.formal;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_qFIn(fu::view<fu::str> {{ fu::str("*"_fu), fu::str("/"_fu), fu::str("%"_fu), fu::str("*%"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("+"_fu), fu::str("-"_fu), fu::str("+%"_fu), fu::str("-%"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("<<"_fu), fu::str(">>"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("&"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("^"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("|"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("~"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("<>"_fu), fu::str("!<>"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("=>"_fu), fu::str("->"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("<"_fu), fu::str("<="_fu), fu::str(">"_fu), fu::str(">="_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("=="_fu), fu::str("!="_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("&&"_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("||"_fu) }}, out, precedence, rightToLeft);
    rightToLeft = true;
    binop_qFIn(fu::view<fu::str> {{ fu::str("?"_fu), fu::str("="_fu), fu::str("+="_fu), fu::str("-="_fu), fu::str("**="_fu), fu::str("*="_fu), fu::str("/="_fu), fu::str("%="_fu), fu::str("<<="_fu), fu::str(">>="_fu), fu::str("&="_fu), fu::str("^="_fu), fu::str("|="_fu), fu::str("||="_fu), fu::str("&&="_fu), fu::str(".="_fu), fu::str("~="_fu), fu::str(":="_fu), fu::str("+%="_fu), fu::str("-%="_fu), fu::str("*%="_fu) }}, out, precedence, rightToLeft);
    binop_qFIn(fu::view<fu::str> {{ fu::str("<|"_fu) }}, out, precedence, rightToLeft);
    rightToLeft = false;
    binop_qFIn(fu::view<fu::str> {{ fu::str("|>"_fu) }}, out, precedence, rightToLeft);
    return /*NRVO*/ out;
}

static const BINOP_LfrI BINOP fu_INIT_PRIORITY(1007) = setupOperators_qFIn();

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

                                #ifndef DEF_has_zFnNX0AX6Hg
                                #define DEF_has_zFnNX0AX6Hg
inline bool has_zFnN(const Map_0hQQ& _, fu::view<char> key)
{
    return has_lCh8(_.keys, key);
}
                                #endif

                                #ifndef DEF_steal_NfnDLH8Kprj
                                #define DEF_steal_NfnDLH8Kprj
inline Set_XshD steal_NfnD(Set_XshD& v)
{
    /*MOV*/ Set_XshD ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
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

static void parseAndAdd_qFIn(fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    const fu::str& id = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
    if (has_lCh8(_ps.mbz._upstreamTypeParams, id) || !add_JHtk(_ps.mbz._expectedTypeParams, id))
        fail_94Qv((("Duplicate type parameter: "_view + qBAD_e44U(id)) + "."_view), fname, src, tokens, _ps);

}

static void tryParseTypeParamsDecl_qFIn(fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    if (tryConsume_94Qv(Kind_Idfg_op, "!"_view, tokens, _ps) || (tryConsume_94Qv(Kind_Idfg_op, "<"_view, tokens, _ps) && (_ps._idx--, true)))
    {
        if (tryConsume_94Qv(Kind_Idfg_op, "<"_view, tokens, _ps))
        {
            bool first = true;
            for (; ; )
            {
                if (tryConsume_94Qv(Kind_Idfg_op, ">"_view, tokens, _ps))
                    break;
                else
                {
                    if (!first)
                        consume_qFIn(Kind_Idfg_op, ","_view, fname, src, tokens, _ps);

                    first = false;
                    parseAndAdd_qFIn(fname, src, tokens, _ps);
                };
            };
        }
        else
            parseAndAdd_qFIn(fname, src, tokens, _ps);

    };
}

static Node_JjyR createAddrOfFn_qFIn(fu::vec_range<char> name, const Flags_Lzg8 flags, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_addroffn, (*(fu::vec<Node_JjyR>*)fu::NIL), flags, name, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR createLet_qFIn(fu::vec_range<char> id, const Node_JjyR& type, const Node_JjyR& init, const Flags_Lzg8 flags, const ParseSyntax_Lay2 syntax, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_let, fu::vec<Node_JjyR> {{ Node_JjyR(type), Node_JjyR(init) }}, flags, id, DeclAsserts_taUG{}, syntax, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR createCall_qFIn(fu::vec_range<char> id, const Flags_Lzg8 flags, fu::vec_range<Node_JjyR> args, const ParseSyntax_Lay2 syntax, const TokenIdx_5581& token, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_call, args, flags, id, DeclAsserts_taUG{}, syntax, token, modid, _ps);
}

static Node_JjyR createRead_qFIn(fu::vec_range<char> id, const Flags_Lzg8 flags, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    if ((id == "true"_view) || (id == "false"_view))
    {
        return make_qFIn(Kind_Idfg_bool, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, id, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    }
    else
    {
        return createCall_qFIn((id ? id : fail_94Qv(fu::str{}, fname, src, tokens, _ps)), flags, (*(fu::vec<Node_JjyR>*)fu::NIL), ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    };
}

static void lint_qFIn(const int mode, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_qFIn((("Here the unary -/+ separates from the numeric literal,"_view + " and wraps around the whole expression."_view) + " Please parenthesize explicitly to make this obvious."_view), fname, src, tokens, _ps, options);

}

static Node_JjyR parseAccessExpression_qFIn(const Node_JjyR& expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    _ps._loc = _ps._idx;
    Token_6M7a id = tryConsume_qFIn(Kind_Idfg_id, tokens, _ps);
    if (!id)
    {
        consume_qFIn(Kind_Idfg_op, "::"_view, fname, src, tokens, _ps);
        id = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps);
        _ps._idx -= 2;
    };
    return createCall_qFIn(id.value, Flags_Lzg8_F_CALL_HAS_DOT, fu::vec<Node_JjyR> {{ Node_JjyR(expr) }}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

                                #ifndef DEF_last_krcn9h36FKk
                                #define DEF_last_krcn9h36FKk
inline Node_JjyR& last_krcn(fu::view_mut<Node_JjyR> a)
{
    return a.mutref((a.size() - 1));
}
                                #endif

static Node_JjyR createArgID_qFIn(fu::vec_range<char> id, const Node_JjyR& expr, const Flags_Lzg8 flags, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_argid, fu::vec<Node_JjyR> {{ Node_JjyR(expr) }}, flags, id, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static void softComma_qFIn(fu::view<char> endop, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& peek = tokens[_ps._idx];
    if (peek.kind == Kind_Idfg_op)
    {
        if (peek.value == ","_view)
        {
            _ps._idx++;
            return;
        }
        else if (peek.value == endop)
            return;

    };
    if (!((peek.kind == Kind_Idfg_str) != (tokens[(_ps._idx - 1)].kind == Kind_Idfg_str)))
        warn_qFIn((("Missing comma before "_view + qBAD_e44U(peek.value)) + "."_view), fname, src, tokens, _ps, options);

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

static fu::str getAutoName_qFIn(const Node_JjyR& expr, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    if (hasIdentifierChars_V5Iu(expr.value) && ((expr.kind == Kind_Idfg_call) || (expr.kind == Kind_Idfg_typeparam) || (expr.kind == Kind_Idfg_addroffn)))
        return fu::str(expr.value);
    else if (expr.items)
    {
        const int i = (((expr.kind == Kind_Idfg_and) && (expr.items.size() - 1)) ? ((expr.kind == Kind_Idfg_if) ? 1 : 0) : 0);
        return getAutoName_qFIn(expr.items[i], fname, src, tokens, _ps);
    }
    else
        fail_94Qv(fu::str(str_KgYNc12jxbi), fname, src, tokens, _ps);

}

static ArgsParse_IKpo parseCallArgs_qFIn(fu::view<char> endop, fu::vec_range_mut<Node_JjyR> out_args, const bool sliceSyntax, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    Flags_Lzg8 flags {};
    bool sliceSyntax_used {};
    const int col00 = _ps._col0;
    for (; ; )
    {
        fu::str name {};

        { {
            if (sliceSyntax && !sliceSyntax_used)
            {
                const Token_6M7a& peek = tokens[_ps._idx];
                if ((peek.kind == Kind_Idfg_op) && (peek.value == ".."_view))
                {
                    if (out_args)
                    {
                        Node_JjyR& last = last_krcn(out_args);
                        if (last.kind == Kind_Idfg_argid)
                        {
                            fail_94Qv(fu::str{}, fname, src, tokens, _ps);
                        }
                        else
                        {
                            last = createArgID_qFIn(str_QlC4mahL2gb, last, Flags_Lzg8{}, modid, _ps);
                            flags |= Flags_Lzg8_F_CALL_HAS_NAMED_ARGS;
                        };
                    };
                    _ps._idx++;
                    sliceSyntax_used = true;
                    const Token_6M7a& peek_1 = tokens[_ps._idx];
                    if ((peek_1.kind == Kind_Idfg_op) && (peek_1.value == ","_view))
                        _ps._idx++;
                    else
                        name = fu::str("end"_fu);

                    goto BL_3;
                };
            };
            if (out_args)
                softComma_qFIn(endop, fname, src, tokens, _ps, options);

          } BL_3:;
        };
        if (tryConsume_94Qv(Kind_Idfg_op, endop, tokens, _ps))
            break;
        else
        {
            bool autoName = false;
            bool optional = false;
            const Token_6M7a& tok0 = tokens[_ps._idx];
            _ps._col0 = ((tok0.lcc.line > tokens[(_ps._idx - 1)].lcc.line) ? max_BjFA(tok0.lcc.col, col00) : col00);
            if (!(name))
            {
                if ((tok0.kind == Kind_Idfg_op) && (tok0.value == "?:"_view))
                {
                    autoName = true;
                    optional = true;
                    _ps._idx += 1;
                }
                else if ((tok0.kind == Kind_Idfg_op) && (tok0.value == ":"_view))
                {
                    autoName = true;
                    _ps._idx += 1;
                }
                else if (tok0.kind == Kind_Idfg_id)
                {
                    const Token_6M7a& tok1 = tokens[(_ps._idx + 1)];
                    if (tok1.kind == Kind_Idfg_op)
                    {
                        if ((tok1.value == ":"_view) || (optional = (tok1.value == "?:"_view)))
                        {
                            name = tok0.value;
                            _ps._idx += 2;
                        };
                    };
                };
            };
            /*MOV*/ Node_JjyR expr = parseExpression_I0Mm(P_RESET, M_CALLSITE_ARGUMENT_POS, modid, fname, src, tokens, _ps, options);
            if (autoName)
                name = getAutoName_qFIn(expr, fname, src, tokens, _ps);

            if (name)
            {
                flags |= Flags_Lzg8_F_CALL_HAS_NAMED_ARGS;
                if ((expr.kind == Kind_Idfg_fn) && (expr.value == "_"_view))
                    expr.value = name;

            };
            out_args.push((name ? createArgID_qFIn(name, expr, (optional ? Flags_Lzg8_F_ARGID_IS_OPTIONAL : Flags_Lzg8{}), modid, _ps) : static_cast<Node_JjyR&&>(expr)));
        };
    };
    _ps._col0 = col00;
    return ArgsParse_IKpo { flags, sliceSyntax_used };
}

static Node_JjyR parseCallExpression_qFIn(const Node_JjyR& expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    fu::vec<Node_JjyR> args {};
    const int numDollars0 = _ps._numDollars;
    Flags_Lzg8 argFlags = parseCallArgs_qFIn(")"_view, args, false, modid, fname, src, tokens, _ps, options).flags;
    if (_ps._numDollars > numDollars0)
        argFlags |= Flags_Lzg8_F_TEMPLATE;

    const Flags_Lzg8 flags = (expr.flags | argFlags);

    { {
        if (!(expr.syntax & ParseSyntax_Lay2_PS_PARENS))
        {
            if ((expr.kind == Kind_Idfg_call) && ((flags & (Flags_Lzg8_F_CALL_HAS_DOT | Flags_Lzg8_F_CALL_HAS_ARGPARENS)) == Flags_Lzg8_F_CALL_HAS_DOT))
            {
                const Node_JjyR* _0;
                const Node_JjyR& head = (*(_0 = &(((expr.items.size() == 1) ? expr.items[0] : (*(Node_JjyR*)fu::NIL)))) ? *_0 : fu::fail(fu::str(str_2SffdvnVDw8)));
                args.unshift(Node_JjyR(head));
            }
            else
            {
                if (!((expr.kind == Kind_Idfg_call) && !(flags & (Flags_Lzg8_F_CALL_HAS_DOT | Flags_Lzg8_F_CALL_HAS_ARGPARENS))))
                {
                    if (!(expr.kind == Kind_Idfg_typeparam))
                        goto BL_2;

                };
            };
            return createCall_qFIn((expr.value ? expr.value : fail_94Qv(fu::str{}, fname, src, tokens, _ps)), (flags | Flags_Lzg8_F_CALL_HAS_ARGPARENS), args, ParseSyntax_Lay2{}, expr.token, modid, _ps);
        };
      } BL_2:;
    };
    return make_qFIn(Kind_Idfg_call_indir, (expr + args), argFlags, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseIndexExpression_qFIn(const Node_JjyR& expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    fu::vec<Node_JjyR> args {};
    const ArgsParse_IKpo argsParse = parseCallArgs_qFIn("]"_view, args, true, modid, fname, src, tokens, _ps, options);
    args.unshift(Node_JjyR(expr));
    return createCall_qFIn((argsParse.sliceSyntax ? str_cZzwiUzJ2K1 : str_77oJR2ghS9a), (argsParse.flags | Flags_Lzg8_F_OPERATOR), args, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

                                #ifndef DEF_get_w4m8TMBGWx9
                                #define DEF_get_w4m8TMBGWx9
inline int get_w4m8(const Set_XshD& _, fu::view<char> key, fu::view<int> values)
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
    return 0;
}
                                #endif

                                #ifndef DEF_get_wuokLvtmVD0
                                #define DEF_get_wuokLvtmVD0
inline int get_wuok(const Map_0hQQ& _, fu::view<char> key)
{
    return get_w4m8(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_uNsigned_40Hlp3Rl5Y4
                                #define DEF_uNsigned_40Hlp3Rl5Y4
inline unsigned uNsigned_40Hl(const int v)
{
    return unsigned(v);
}
                                #endif

                                #ifndef DEF_iF_9heQTKIf08f
                                #define DEF_iF_9heQTKIf08f
inline const Token_6M7a& iF_9heQ(fu::view<Token_6M7a> a, const int i)
{
    if (uNsigned_40Hl(i) < uNsigned_40Hl(a.size()))
        return a[i];
    else
        return (*(Token_6M7a*)fu::NIL);

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

static int whitespaceDiff_qFIn(const Token_6M7a& prev, const Token_6M7a& next)
{
    if (prev.lcc.line < next.lcc.line)
        return 10;
    else
        return max_BjFA(0, min_DbqN(1, ((next.lcc.col - prev.lcc.col) - prev.lcc.chars)));

}

                                #ifndef DEF_abs_NHZZYqEtT21
                                #define DEF_abs_NHZZYqEtT21
inline int abs_NHZZ(const int v)
{
    if (v < 0)
        return -v;
    else
        return v;

}
                                #endif

static Node_JjyR createIf_qFIn(const Node_JjyR& cond, const Node_JjyR& cons, const Node_JjyR& alt, const ParseSyntax_Lay2 syntax, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_if, fu::vec<Node_JjyR> {{ Node_JjyR(cond), Node_JjyR(cons), Node_JjyR(alt) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, syntax, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR flattenIfSame_qFIn(const Kind_Idfg kind, const Node_JjyR& left, const Node_JjyR& right, const ParseSyntax_Lay2 syntax, const int modid, const ParserState_Ahey& _ps)
{
    const Kind_Idfg k_left = left.kind;
    const Kind_Idfg k_right = right.kind;
    fu::vec<Node_JjyR> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu::vec<Node_JjyR> {{ Node_JjyR(left), Node_JjyR(right) }})));
    return make_qFIn(kind, items, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, syntax, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR createOr_qFIn(const Node_JjyR& left, const Node_JjyR& right, const ParseSyntax_Lay2 syntax, const int modid, const ParserState_Ahey& _ps)
{
    return flattenIfSame_qFIn(Kind_Idfg_or, left, right, syntax, modid, _ps);
}

static Node_JjyR createAnd_qFIn(const Node_JjyR& left, const Node_JjyR& right, const ParseSyntax_Lay2 syntax, const int modid, const ParserState_Ahey& _ps)
{
    return flattenIfSame_qFIn(Kind_Idfg_and, left, right, syntax, modid, _ps);
}

static Node_JjyR pipelineRight_qFIn(const Node_JjyR& left, /*MOV*/ Node_JjyR&& right, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    if (right.kind != Kind_Idfg_call)
        fail_94Qv(fu::str(str_2NQa5TNr8Mc), fname, src, tokens, _ps);
    else
    {
        if (right.flags & Flags_Lzg8_F_CALL_HAS_DOT)
            right.items.insert(1, Node_JjyR(left));
        else
        {
            right.items.unshift(Node_JjyR(left));
        };
        return static_cast<Node_JjyR&&>(right);
    };
}

static Node_JjyR pipelineLeft_qFIn(/*MOV*/ Node_JjyR&& left, const Node_JjyR& right, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    if (left.kind != Kind_Idfg_call)
        fail_94Qv(fu::str(str_2NQa5TNr8Mc), fname, src, tokens, _ps);
    else
    {
        left.items.push(Node_JjyR(right));
        left.flags |= Flags_Lzg8_F_CALL_HAS_ARGPARENS;
        return static_cast<Node_JjyR&&>(left);
    };
}

static Node_JjyR letShorthand_qFIn(const Node_JjyR& left, const Node_JjyR& right, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, const ParserState_Ahey& _ps)
{
    if ((left.kind != Kind_Idfg_call) || left.flags || left.items)
        fail_94Qv(fu::str(str_fiRLyok9R0k), fname, src, tokens, _ps);
    else
    {
        return createLet_qFIn(left.value, (*(Node_JjyR*)fu::NIL), right, Flags_Lzg8{}, ParseSyntax_Lay2{}, modid, _ps);
    };
}

static Node_JjyR typeCheck_qFIn(const Node_JjyR& actual, const Node_JjyR& expect, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_typeassert, fu::vec<Node_JjyR> {{ Node_JjyR(actual), Node_JjyR(expect) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR typeCast_qFIn(const Node_JjyR& actual, const Node_JjyR& expect, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_typecast, fu::vec<Node_JjyR> {{ Node_JjyR(actual), Node_JjyR(expect) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR tryParseBinary_qFIn(const Node_JjyR& left, const Token_6M7a& op, const int p1, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const bool miss = ((p1 > _ps._precedence.formal) || ((p1 == _ps._precedence.formal) ? !BINOP.RIGHT_TO_LEFT[p1] : false));
    const int whitesp_lint = max_BjFA(whitespaceDiff_qFIn(iF_9heQ(tokens, (_ps._idx - 1)), op), whitespaceDiff_qFIn(op, iF_9heQ(tokens, (_ps._idx + 1))));
    if (_ps._precedence.tokidx)
    {
        const int whitespace_diff = (whitesp_lint - _ps._precedence.whitesp_lint);
        const bool multiline = (abs_NHZZ(whitespace_diff) > 1);
        int indent_diff;
        if ((miss ? (whitespace_diff < 0) : (whitespace_diff > 0)) && (p1 != _ps._precedence.formal) && (!multiline || (indent_diff = (op.lcc.col - tokens[_ps._precedence.tokidx].lcc.col), (miss ? (indent_diff >= 0) : (indent_diff <= 0)))) && !BINOP.RIGHT_TO_LEFT[p1] && !BINOP.RIGHT_TO_LEFT[_ps._precedence.formal])
        {
            if (miss)
                _ps._idx = _ps._precedence.tokidx;

            warn_qFIn((("Misleading whitespace: misrepresents operator precedence."_view + "\n\n\tPlease parenthesize this expression to disambiguate"_view) + (multiline ? ((","_view + "\n\t\tindent the stronger operator further to the right,"_view) + "\n\t\tor put the weaker operator on a new line."_view) : fu::str("."_fu))), fname, src, tokens, _ps, options);
        };
    };
    if (miss)
    {
        return Node_JjyR{};
    }
    else
    {
        const Precedence_ybkz p1_1 = Precedence_ybkz { p1, whitesp_lint, _ps._idx };
        _ps._idx++;
        const fu::str& op_1 = op.value;
        Node_JjyR mid {};
        if (op_1 == "?"_view)
        {
            mid = parseExpression_I0Mm(P_RESET, 0, modid, fname, src, tokens, _ps, options);
            consume_qFIn(Kind_Idfg_op, ":"_view, fname, src, tokens, _ps);
        };
        /*MOV*/ Node_JjyR right = (((op_1 == "->"_view) || (op_1 == "=>"_view)) ? parseTypeAnnot_qFIn(false, true, modid, fname, src, tokens, _ps, options) : parseExpression_I0Mm(p1_1, 0, modid, fname, src, tokens, _ps, options));
        if (mid)
        {
            return createIf_qFIn(left, mid, right, ParseSyntax_Lay2{}, modid, _ps);
        }
        else if (op_1 == "||"_view)
        {
            return createOr_qFIn(left, right, ParseSyntax_Lay2{}, modid, _ps);
        }
        else if (op_1 == "&&"_view)
        {
            return createAnd_qFIn(left, right, ParseSyntax_Lay2{}, modid, _ps);
        }
        else
        {
            if ((left.kind == Kind_Idfg_and) || (left.kind == Kind_Idfg_or))
            {
                if (!(left.syntax & ParseSyntax_Lay2_PS_PARENS))
                    warn_qFIn((((x7E_rA00("Unparenthesized `"_view, str_eN8k(left.kind)) + "` on the left side of an `"_view) + op_1) + "`."_view), fname, src, tokens, _ps, options);

            };
            if (op_1 == "|>"_view)
                return pipelineRight_qFIn(left, static_cast<Node_JjyR&&>(right), fname, src, tokens, _ps);
            else if (op_1 == "<|"_view)
                return pipelineLeft_qFIn(Node_JjyR(left), right, fname, src, tokens, _ps);
            else if (op_1 == ":="_view)
                return letShorthand_qFIn(left, right, modid, fname, src, tokens, _ps);
            else if (op_1 == "->"_view)
                return typeCheck_qFIn(left, right, modid, _ps);
            else if (op_1 == "=>"_view)
                return typeCast_qFIn(left, right, modid, _ps);
            else
            {
                return createCall_qFIn(op_1, Flags_Lzg8_F_OPERATOR, fu::vec<Node_JjyR> {{ Node_JjyR(left), static_cast<Node_JjyR&&>(right) }}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
            };
        };
    };
}

                                #ifndef DEF_only_hN9EXt7sNe2
                                #define DEF_only_hN9EXt7sNe2
inline const Node_JjyR& only_hN9E(fu::view<Node_JjyR> a)
{
    fu_ASSERT((a.size() == 1));
    return a[0];
}
                                #endif

static Node_JjyR createTypeTag_qFIn(fu::vec_range<char> value, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_typetag, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, value, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static fu::str registerImport_qFIn(/*MOV*/ fu::str&& pattern, fu::view<char> id, const int modid, ParserState_Ahey& _ps)
{
    int index = _ps.imports.size();

    { {
        if (id)
            (pattern += '\t') += id;

        for (int i = 0; i < _ps.imports.size(); i++)
        {
            if (_ps.imports[i].pattern == pattern)
            {
                index = i;
                goto BL_1;
            };
        };
        _ps.imports += Import_7CIJ { TokenIdx_5581 { modid, _ps._loc }, pattern.destructive_move(), 0 };
      } BL_1:;
    };
    /*MOV*/ fu::str marker {};
    appendVarint_V5Iu(marker, unsigned(modid));
    appendVarint_V5Iu(marker, unsigned(index));
    marker += id;
    return /*NRVO*/ marker;
}

static Node_JjyR parseQualifierChain_qFIn(/*MOV*/ Node_JjyR&& expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    if (expr.kind != Kind_Idfg_addroffn)
    {
        if ((expr.kind != Kind_Idfg_call) || (expr.items.size() > 1) || (expr.flags & ~Flags_Lzg8_F_CALL_HAS_DOT))
        {
            _ps._idx--;
            fail_94Qv(fu::str{}, fname, src, tokens, _ps);
        };
    };
    expr.flags |= Flags_Lzg8_F_COMPOUND_ID;
    /*MOV*/ fu::str path = fu::str(expr.value);
    for (; ; )
    {
        const fu::str& id = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
        if (!tryConsume_94Qv(Kind_Idfg_op, "::"_view, tokens, _ps))
        {
            if ((path == "is"_view) && (expr.items.size() == 1))
            {
                const Node_JjyR& left = only_hN9E(expr.items);
                Node_JjyR right = createTypeTag_qFIn(id, modid, _ps);
                return typeCheck_qFIn(left, right, modid, _ps);
            }
            else
            {
                expr.value = registerImport_qFIn(static_cast<fu::str&&>(path), id, modid, _ps);
                expr.token.tokidx = (_ps._idx - 1);
                return static_cast<Node_JjyR&&>(expr);
            };
        }
        else
            path += ("/"_view + id);

    };
}

static Node_JjyR tryParseExpressionTail_qFIn(const Node_JjyR& head, const int mode, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& token = tokens[_ps._idx++];
    if (token.kind == Kind_Idfg_op)
    {
        const fu::str& v = token.value;
        if (v == ";"_view)
        {
            _ps._idx--;
            return Node_JjyR{};
        }
        else if (v == "."_view)
        {
            lint_qFIn(mode, fname, src, tokens, _ps, options);
            return parseAccessExpression_qFIn(head, modid, fname, src, tokens, _ps);
        }
        else if (v == "("_view)
        {
            lint_qFIn(mode, fname, src, tokens, _ps, options);
            return parseCallExpression_qFIn(head, modid, fname, src, tokens, _ps, options);
        }
        else if (v == "["_view)
        {
            lint_qFIn(mode, fname, src, tokens, _ps, options);
            return parseIndexExpression_qFIn(head, modid, fname, src, tokens, _ps, options);
        }
        else
        {
            const int p1 = get_wuok(BINOP.PRECEDENCE, v);
            if (p1)
            {
                _ps._idx--;
                return tryParseBinary_qFIn(head, token, p1, modid, fname, src, tokens, _ps, options);
            }
            else if (has_FZWi(POSTFIX, v))
            {
                return createCall_qFIn((((v == "++"_view) || (v == "--"_view)) ? ("postfix"_view + v) : fu::str(v)), Flags_Lzg8_F_OPERATOR, fu::vec<Node_JjyR> {{ Node_JjyR(head) }}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
            }
            else if (v == "::"_view)
            {
                return parseQualifierChain_qFIn(Node_JjyR(head), modid, fname, src, tokens, _ps);
            };
        };
    };
    _ps._idx--;
    return Node_JjyR{};
}

                                #ifndef DEF_parseExpression_d7mkMFIl0pl
                                #define DEF_parseExpression_d7mkMFIl0pl
inline static Node_JjyR parseExpression_d7mk(const Precedence_ybkz& p1, const Node_JjyR& parseHead, const int mode, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Precedence_ybkz p0 = _ps._precedence;
    const int loc00 = _ps._loc;
    _ps._precedence = p1;
    _ps._loc = _ps._idx;
    const int col00 = _ps._col0;
    if (!((tokens[_ps._idx].lcc.col >= (_ps._col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_qFIn(x7E_rA00((x7E_rA00((("Ambiguous indent at `"_view + tokens[_ps._idx].value) + "`: expected more than "_view), fu::i64dec(_ps._col0)) + ", got "_view), fu::i64dec(tokens[_ps._idx].lcc.col)), fname, src, tokens, _ps, options);

    /*MOV*/ Node_JjyR head = parseHead;
    if (!ParseSyntax_Lay2((head.syntax & ParseSyntax_Lay2_PS_NOT_AN_EXPRESSION)))
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == Kind_Idfg_int) || (head.kind == Kind_Idfg_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_ps._loc = _ps._idx);
        Node_JjyR out {};
        while ((out = tryParseExpressionTail_qFIn(head, mode_1, modid, fname, src, tokens, _ps, options)))
        {

            {
                const Token_6M7a& t1 = tokens[(_ps._loc = loc0)];
                if (!(t1.lcc.col > col00))
                    warn_qFIn(x7E_rA00((x7E_rA00((("Ambiguous indent at `"_view + t1.value) + "`: expected more than "_view), fu::i64dec(col00)) + ", got "_view), fu::i64dec(t1.lcc.col)), fname, src, tokens, _ps, options);

            };
            loc0 = (_ps._loc = _ps._idx);
            head = static_cast<Node_JjyR&&>(out);
        };
    };
    _ps._precedence = p0;
    _ps._loc = loc00;
    return /*NRVO*/ head;
}
                                #endif

static Flags_Lzg8 parseLeadingDot_qFIn(fu::vec_range_mut<Node_JjyR> out_push_arg_and_body, fu::vec_range<char> name, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR singleArg = createLet_qFIn(name, (*(Node_JjyR*)fu::NIL), (*(Node_JjyR*)fu::NIL), ((Flags_Lzg8_F_TEMPLATE | Flags_Lzg8_F_SHADOW) | Flags_Lzg8_F_REF), ParseSyntax_Lay2{}, modid, _ps);
    Node_JjyR _0 {};
    /*MOV*/ Node_JjyR singleExpression = (_0 = (_ps._idx--, createRead_qFIn(name, Flags_Lzg8{}, modid, fname, src, tokens, _ps)), parseExpression_d7mk(_ps._precedence, static_cast<Node_JjyR&&>(_0), 0, modid, fname, src, tokens, _ps, options));
    out_push_arg_and_body.push(static_cast<Node_JjyR&&>(singleArg));
    out_push_arg_and_body.push(Node_JjyR{});
    out_push_arg_and_body.push(static_cast<Node_JjyR&&>(singleExpression));
    return Flags_Lzg8_F_TEMPLATE;
}

static Flags_Lzg8 parseArgsDecl_qFIn(fu::vec_range_mut<Node_JjyR> outArgs, const Kind_Idfg endk, fu::view<char> endv, const Precedence_ybkz& initPrecedence, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    bool first = true;
    Flags_Lzg8 outFlags {};
    fu::vec<Node_JjyR> implicit {};
    int firstDefaulted = -1;
    for (; ; )
    {
        if (tryConsume_94Qv(endk, endv, tokens, _ps))
            break;
        else
        {
            if (!first)
                consume_qFIn(Kind_Idfg_op, ","_view, fname, src, tokens, _ps);

            first = false;
            const bool isInline = !!tryConsume_94Qv(Kind_Idfg_id, "inline"_view, tokens, _ps);
            const int numDollars0 = _ps._numDollars;
            int insertAt = -1;
            /*MOV*/ Node_JjyR arg = parseLet_qFIn(true, outArgs.size(), true, true, initPrecedence, modid, fname, src, tokens, _ps, options);
            const bool NEW = (_ps._numDollars > numDollars0);
            if (NEW || (arg.items[LET_TYPE].kind == Kind_Idfg_typeunion))
                arg.flags |= Flags_Lzg8_F_TEMPLATE;

            if (isInline)
            {
                arg.flags |= Flags_Lzg8_F_INLINE;
                outFlags |= Flags_Lzg8_F_INLINE;
            };
            const Node_JjyR& annot = arg.items[LET_TYPE];
            const Node_JjyR& init = arg.items[LET_INIT];
            if (init)
            {
                if (arg.flags & Flags_Lzg8_F_IMPLICIT)
                    fail_94Qv(fu::str(str_WGOYs0nMGhg), fname, src, tokens, _ps);
                else
                {
                    if (firstDefaulted < 0)
                        firstDefaulted = outArgs.size();

                    if (((init.kind == Kind_Idfg_definit) && !annot) || (arg.flags & Flags_Lzg8_F_TYPENAME))
                        arg.flags |= Flags_Lzg8_F_TEMPLATE;

                };
            }
            else if ((firstDefaulted >= 0))
            {
                if (!(arg.flags & Flags_Lzg8_F_MUSTNAME))
                    fail_94Qv(fu::str(str_IXHmY51sMJb), fname, src, tokens, _ps);
                else
                {
                    insertAt = firstDefaulted;
                    firstDefaulted++;
                };
            }
            else if (!annot)
                arg.flags |= Flags_Lzg8_F_TEMPLATE;

            outFlags |= (arg.flags & Flags_Lzg8_F_TEMPLATE);
            if (arg.flags & Flags_Lzg8_F_IMPLICIT)
                implicit.push(static_cast<Node_JjyR&&>(arg));
            else if ((insertAt >= 0))
                outArgs.insert(insertAt, static_cast<Node_JjyR&&>(arg));
            else
                outArgs.push(static_cast<Node_JjyR&&>(arg));

        };
    };
    if (implicit)
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(Node_JjyR(implicit[i]));
;
    return outFlags;
}

static Node_JjyR tryPopTypeAnnot_qFIn(const bool allowTypeUnions, const bool allowLegacyRefs, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (tryConsume_94Qv(Kind_Idfg_op, ":"_view, tokens, _ps))
        return parseTypeAnnot_qFIn(allowTypeUnions, allowLegacyRefs, modid, fname, src, tokens, _ps, options);
    else
    {
        return Node_JjyR{};
    };
}

                                #ifndef DEF_x21x3D_ZDMfM5XjHla
                                #define DEF_x21x3D_ZDMfM5XjHla
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_j5CR(a, b);
}
                                #endif

                                #ifndef DEF_left_or_both_aKyt5SS5SNj
                                #define DEF_left_or_both_aKyt5SS5SNj
inline static void left_or_both_aKyt(fu::vec_range<char> item, fu::vec<fu::str>& result, const bool useResult)
{
    if (useResult)
        result += fu::str(item);

}
                                #endif

                                #ifndef DEF_right_X0YCGYdoQ5g
                                #define DEF_right_X0YCGYdoQ5g
inline static void right_X0YC(fu::vec_range<char> item, const int left, const Set_XshD& l, fu::vec<fu::str>& result, bool& useResult)
{
    if (!useResult)
    {
        useResult = true;
        result += fu::get_view_start0(l.keys_asc, left);
    };
    result += fu::str(item);
}
                                #endif

                                #ifndef DEF_merge_AbidURsd342
                                #define DEF_merge_AbidURsd342
inline static void merge_Abid(fu::view<fu::str> l, fu::view<fu::str> r, const Set_XshD& l_1, fu::vec<fu::str>& result, bool& useResult)
{
    int li = 0;
    int ri = 0;
    for (; ; )
    {
        const bool l_done = (li == l.size());
        const bool r_done = (ri == r.size());
        const int cmp = (l_done ? (r_done ? (__extension__ (
        {
            return;
            (void)0;
        }), fu::unreachable) : +1) : (r_done ? -1 : x3Cx3E_j5CR(l[li], r[ri])));
        if ((cmp <= 0))
        {
            left_or_both_aKyt(l[li], result, useResult);
            li++;
            ri += int((cmp == 0));
        }
        else
        {
            right_X0YC(r[ri], li, l_1, result, useResult);
            ri++;
        };
    };
}
                                #endif

                                #ifndef DEF_uNion_GdwDaw80UIb
                                #define DEF_uNion_GdwDaw80UIb
inline Set_XshD uNion_GdwD(const Set_XshD& l, const Set_XshD& r)
{
    if (r.keys_asc.size() > l.keys_asc.size())
        return uNion_GdwD(r, l);
    else
    {
        /*MOV*/ fu::vec<fu::str> result {};
        bool useResult = false;
        merge_Abid(l.keys_asc, r.keys_asc, l, result, useResult);
        if (useResult)
        {
            return Set_XshD { static_cast<fu::vec<fu::str>&&>(result) };
        }
        else
            return Set_XshD(l);

    };
}
                                #endif

                                #ifndef DEF_if_last_TSYPYksIqp1
                                #define DEF_if_last_TSYPYksIqp1
inline const Node_JjyR& if_last_TSYP(fu::view<Node_JjyR> a)
{
    if (a.size())
        return a[(a.size() - 1)];
    else
        return (*(Node_JjyR*)fu::NIL);

}
                                #endif

                                #ifndef DEF_last_FlhicUYAga0
                                #define DEF_last_FlhicUYAga0
inline const Node_JjyR& last_Flhi(fu::view<Node_JjyR> a)
{
    return a[(a.size() - 1)];
}
                                #endif

static Node_JjyR createBlock_qFIn(fu::vec<Node_JjyR>&& items, fu::vec_range<char> label, const int modid, const ParserState_Ahey& _ps)
{
    if (if_last_TSYP(items).syntax & ParseSyntax_Lay2((ParseSyntax_Lay2_PS_DISCARD_IF_BLOCK_TAIL | ParseSyntax_Lay2_PS_ALWAYS_DISCARD)))
    {
        items += make_qFIn(Kind_Idfg_empty, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, last_Flhi(items).token, modid, _ps);
    };
    return make_qFIn(Kind_Idfg_block, items, Flags_Lzg8{}, label, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseBlock_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    fu::vec<Node_JjyR> _0 {};
    return (_0 = parseBlockLike_qFIn(Kind_Idfg_op, "}"_view, false, false, modid, fname, src, tokens, _ps, options), createBlock_qFIn(static_cast<fu::vec<Node_JjyR>&&>(_0), (*(fu::str*)fu::NIL), modid, _ps));
}

static Node_JjyR parseLabelledStatement_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const fu::str& label = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
    /*MOV*/ Node_JjyR stmt = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
    if ((stmt.kind == Kind_Idfg_loop) || (stmt.kind == Kind_Idfg_block))
    {
        if (stmt.value)
            fail_94Qv((((("Label "_view + qID_e44U(label)) + ": statement already labeled as "_view) + qID_e44U(stmt.value)) + "."_view), fname, src, tokens, _ps);
        else
        {
            stmt.value = label;
            return /*NRVO*/ stmt;
        };
    }
    else
    {
        return createBlock_qFIn(fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(stmt) }}, label, modid, _ps);
    };
}

static bool softSemi_qFIn(fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& peek = tokens[_ps._idx];
    if (peek.kind == Kind_Idfg_op)
    {
        if (peek.value == ";"_view)
        {
            _ps._idx++;
            return true;
        }
        else if ((peek.value == "}"_view) || (peek.value == ")"_view))
            return false;

    }
    else if (peek.lcc.col == _ps._col0)
        return false;
    else if (peek.kind == Kind_Idfg_eof)
        return false;

    warn_qFIn((("Missing semicollon before "_view + qBAD_e44U(peek.value)) + "."_view), fname, src, tokens, _ps, options);
    return false;
}

static Node_JjyR parseLetStmt_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR ret = parseLet_qFIn(false, 0, false, false, P_RESET, modid, fname, src, tokens, _ps, options);
    if (softSemi_qFIn(fname, src, tokens, _ps, options))
        ret.syntax |= ParseSyntax_Lay2_PS_ALWAYS_DISCARD;

    if (!(~ret.flags & (Flags_Lzg8_F_IMPLICIT | Flags_Lzg8_F_REF)) && ret.items[LET_TYPE] && !ret.items[LET_INIT])
    {
        const fu::str& name = ret.value;
        const Flags_Lzg8 flags = (ret.flags & (Flags_Lzg8_F_SHADOW | Flags_Lzg8_F_LAX));
        ret.flags |= Flags_Lzg8_F_SHADOW;
        return make_qFIn(Kind_Idfg_fn, fu::vec<Node_JjyR> {{ Node_JjyR(ret), Node_JjyR{}, createRead_qFIn(name, Flags_Lzg8{}, modid, fname, src, tokens, _ps) }}, (flags | Flags_Lzg8_F_INLINE), name, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    }
    else
        return /*NRVO*/ ret;

}

static void tryColonPipeline_qFIn(Node_JjyR& expr, const bool stmt, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (tryConsume_94Qv(Kind_Idfg_op, ":"_view, tokens, _ps))
    {
        if (!(expr.kind == Kind_Idfg_call))
            fail_94Qv(fu::str(str_OokQ1yGra4d), fname, src, tokens, _ps);
        else
        {
            Node_JjyR right = parseExpression_I0Mm(P_RESET, ((stmt ? M_LAMBDA_STMT_OK : 0) | M_CALLSITE_ARGUMENT_POS), modid, fname, src, tokens, _ps, options);
            expr = pipelineLeft_qFIn(Node_JjyR(expr), right, fname, src, tokens, _ps);
            if (stmt)
            {
                const Token_6M7a& prev = (_ps._idx ? tokens[(_ps._idx - 1)] : (*(Token_6M7a*)fu::NIL));
                if ((prev.kind == Kind_Idfg_op) && (prev.value == ";"_view))
                    _ps._idx--;

            };
        };
    };
}

static Node_JjyR parseExpressionStatement_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR expr = parseExpression_I0Mm(P_RESET, 0, modid, fname, src, tokens, _ps, options);
    tryColonPipeline_qFIn(expr, true, modid, fname, src, tokens, _ps, options);
    if (softSemi_qFIn(fname, src, tokens, _ps, options))
        expr.syntax |= ParseSyntax_Lay2_PS_DISCARD_IF_BLOCK_TAIL;

    return /*NRVO*/ expr;
}

static Node_JjyR parseLetOrExpressionStatement_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& token = tokens[_ps._idx++];
    if ((token.kind == Kind_Idfg_id) && (tokens[_ps._idx].kind == Kind_Idfg_id))
    {
        fu::view<char> v = token.value;
        if (v == "let"_view)
            return parseLetStmt_qFIn(modid, fname, src, tokens, _ps, options);
        else if ((v == "mut"_view) || (v == "ref"_view) || (v == "val"_view) || (v == "const"_view) || (v == "implicit"_view) || (v == "type"_view))
        {
            _ps._idx--;
            return parseLetStmt_qFIn(modid, fname, src, tokens, _ps, options);
        };
    };
    _ps._idx--;
    if (!_ps.mbz._fnDepth)
    {
        fail_94Qv(fu::str{}, fname, src, tokens, _ps);
    }
    else
        return parseExpressionStatement_qFIn(modid, fname, src, tokens, _ps, options);

}

[[noreturn]] static fu::never fail_qFIn(const TokenIdx_5581& token, /*MOV*/ fu::str&& reason, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    if (token.modid == modid)
        _ps._loc = (_ps._idx = token.tokidx);

    fail_94Qv(reason.destructive_move(), fname, src, tokens, _ps);
}

static Node_JjyR parseConditionExpr_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR ret = parseLetOrExpressionStatement_qFIn(modid, fname, src, tokens, _ps, options);
    if ((ret.kind == Kind_Idfg_call) && (ret.value == "="_view) && !ParseSyntax_Lay2((ret.syntax & ParseSyntax_Lay2_PS_PARENS)))
        fail_qFIn(ret.token, fu::str(str_iXe92EcYeE8), modid, fname, src, tokens, _ps);
    else
        return /*NRVO*/ ret;

}

                                #ifndef DEF_only_ugv96g8F9Zg
                                #define DEF_only_ugv96g8F9Zg
inline char only_ugv9(fu::view<char> a)
{
    fu_ASSERT((a.size() == 1));
    return a[0];
}
                                #endif

static Node_JjyR createPrefix_qFIn(fu::vec_range<char> op, /*MOV*/ Node_JjyR&& expr, const int modid, const ParserState_Ahey& _ps)
{
    if (((op == "+"_view) || (op == "-"_view)) && ((expr.kind == Kind_Idfg_int) || (expr.kind == Kind_Idfg_real)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_ugv9(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<Node_JjyR&&>(expr);
    }
    else if (op == "!"_view)
    {
        return make_qFIn(Kind_Idfg_not, fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(expr) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    }
    else
    {
        return createCall_qFIn(op, Flags_Lzg8_F_OPERATOR, fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(expr) }}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    };
}

static Node_JjyR parseIfCond_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& nOt = tryConsume_94Qv(Kind_Idfg_op, "!"_view, tokens, _ps);
    consume_qFIn(Kind_Idfg_op, "("_view, fname, src, tokens, _ps);
    /*MOV*/ Node_JjyR cond = parseConditionExpr_qFIn(modid, fname, src, tokens, _ps, options);
    consume_qFIn(Kind_Idfg_op, ")"_view, fname, src, tokens, _ps);
    if (nOt)
        return createPrefix_qFIn(str_5TEYhFzaE10, static_cast<Node_JjyR&&>(cond), modid, _ps);
    else
        return /*NRVO*/ cond;

}

static Node_JjyR parseSubStatement_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& peek = tokens[_ps._idx];
    if ((peek.kind != Kind_Idfg_op) || (peek.value != "{"_view))
    {
        if (!(peek.lcc.col > _ps._col0))
            warn_qFIn((x7E_rA00((x7E_rA00((("Misleading indent at "_view + qBAD_e44U(peek.value)) + ": expected more than "_view), fu::i64dec(_ps._col0)) + ", got "_view), fu::i64dec(peek.lcc.col)) + "."_view), fname, src, tokens, _ps, options);

    };
    return parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
}

static Node_JjyR parseIf_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& token = tokens[(_ps._idx - 1)];
    const Token_6M7a& prev = ((_ps._idx > 1) ? tokens[(_ps._idx - 2)] : (*(Token_6M7a*)fu::NIL));
    const Token_6M7a& token_1 = (((prev.kind == Kind_Idfg_id) && (prev.value == "else"_view)) ? prev : token);
    Node_JjyR cond = parseIfCond_qFIn(modid, fname, src, tokens, _ps, options);
    Node_JjyR cons = parseSubStatement_qFIn(modid, fname, src, tokens, _ps, options);
    const Token_6M7a& eLse = tryConsume_94Qv(Kind_Idfg_id, "else"_view, tokens, _ps);
    if (eLse)
    {
        if (!((eLse.lcc.line == token_1.lcc.line) || (eLse.lcc.col == token_1.lcc.col)))
        {
            warn_qFIn((x7E_rA00((x7E_rA00((x7E_rA00("Inconsistent indent at `else`: expected "_view, fu::i64dec(token_1.lcc.col)) + ", got "_view), fu::i64dec(eLse.lcc.col)) + ". `if` starts on line "_view), fu::i64dec(token_1.lcc.line)) + "."_view), fname, src, tokens, _ps, options);
        };
        Node_JjyR alt = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
        return createIf_qFIn(cond, cons, alt, ParseSyntax_Lay2_PS_ALWAYS_DISCARD, modid, _ps);
    }
    else
        return createAnd_qFIn(cond, cons, ParseSyntax_Lay2_PS_ALWAYS_DISCARD, modid, _ps);

}

static Node_JjyR parseParens_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR out = parseExpression_I0Mm(P_RESET, 0, modid, fname, src, tokens, _ps, options);
    out.syntax |= ParseSyntax_Lay2_PS_PARENS;
    consume_qFIn(Kind_Idfg_op, ")"_view, fname, src, tokens, _ps);
    return /*NRVO*/ out;
}

static Node_JjyR tryParseLoopPreheader_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& peek = tokens[_ps._idx];
    if ((peek.kind == Kind_Idfg_id) && (peek.value == "on"_view))
    {
        const Token_6M7a& peek_1 = tokens[(_ps._idx + 1)];
        if ((peek_1.kind == Kind_Idfg_id) && (peek_1.value == "enter"_view))
        {
            _ps._idx += 2;
            /*MOV*/ Node_JjyR ret = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
            consume_qFIn(Kind_Idfg_id, "then"_view, fname, src, tokens, _ps);
            return /*NRVO*/ ret;
        };
    };
    return Node_JjyR{};
}

static Node_JjyR createLoop_qFIn(const Node_JjyR& init, const Node_JjyR& pre_cond, const Node_JjyR& pre, const Node_JjyR& body, const Node_JjyR& post, const Node_JjyR& post_cond, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_loop, fu::vec<Node_JjyR> {{ Node_JjyR(init), Node_JjyR(pre_cond), Node_JjyR(pre), Node_JjyR(body), Node_JjyR(post), Node_JjyR(post_cond) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2_PS_ALWAYS_DISCARD, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseFor_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    _ps.mbz._loopDepth++;
    fu_DEFER(_ps.mbz._loopDepth--);
    consume_qFIn(Kind_Idfg_op, "("_view, fname, src, tokens, _ps);
    if (tryConsume_94Qv(Kind_Idfg_id, "fieldname"_view, tokens, _ps))
    {
        const fu::str& placeholder = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
        consume_qFIn(Kind_Idfg_op, ":"_view, fname, src, tokens, _ps);
        /*MOV*/ Node_JjyR type = parseTypeAnnot_qFIn(false, false, modid, fname, src, tokens, _ps, options);
        consume_qFIn(Kind_Idfg_op, ")"_view, fname, src, tokens, _ps);
        /*MOV*/ Node_JjyR body = parseSubStatement_qFIn(modid, fname, src, tokens, _ps, options);
        return make_qFIn(Kind_Idfg_forfieldsof, fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(type), static_cast<Node_JjyR&&>(body) }}, Flags_Lzg8{}, placeholder, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    }
    else
    {
        Node_JjyR init = (!tryConsume_94Qv(Kind_Idfg_op, ";"_view, tokens, _ps) ? parseStatement_qFIn(modid, fname, src, tokens, _ps, options) : Node_JjyR{});
        if (init && (init.kind != Kind_Idfg_let))
            fail_94Qv((x7E_rA00("`for` expects a `let` statement, got a `"_view, str_eN8k(init.kind)) + "`."_view), fname, src, tokens, _ps);
        else
        {
            Node_JjyR pre_cond = (!tryConsume_94Qv(Kind_Idfg_op, ";"_view, tokens, _ps) ? parseConditionExpr_qFIn(modid, fname, src, tokens, _ps, options) : Node_JjyR{});
            const Token_6M7a& token = tokens[_ps._idx];
            Node_JjyR post = (!((token.kind == Kind_Idfg_op) && (token.value == ")"_view)) ? parseParens_qFIn(modid, fname, src, tokens, _ps, options) : (consume_qFIn(Kind_Idfg_op, ")"_view, fname, src, tokens, _ps), Node_JjyR{}));
            Node_JjyR pre = tryParseLoopPreheader_qFIn(modid, fname, src, tokens, _ps, options);
            Node_JjyR body = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
            return createLoop_qFIn(init, pre_cond, pre, body, post, (*(Node_JjyR*)fu::NIL), modid, _ps);
        };
    };
}

static Node_JjyR parseWhile_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    _ps.mbz._loopDepth++;
    fu_DEFER(_ps.mbz._loopDepth--);
    Node_JjyR pre_cond = parseIfCond_qFIn(modid, fname, src, tokens, _ps, options);
    Node_JjyR body = parseSubStatement_qFIn(modid, fname, src, tokens, _ps, options);
    return createLoop_qFIn((*(Node_JjyR*)fu::NIL), pre_cond, (*(Node_JjyR*)fu::NIL), body, (*(Node_JjyR*)fu::NIL), (*(Node_JjyR*)fu::NIL), modid, _ps);
}

static Node_JjyR parseDoWhile_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    _ps.mbz._loopDepth++;
    fu_DEFER(_ps.mbz._loopDepth--);
    Node_JjyR body = parseSubStatement_qFIn(modid, fname, src, tokens, _ps, options);
    consume_qFIn(Kind_Idfg_id, "while"_view, fname, src, tokens, _ps);
    consume_qFIn(Kind_Idfg_op, "("_view, fname, src, tokens, _ps);
    Node_JjyR post_cond = parseConditionExpr_qFIn(modid, fname, src, tokens, _ps, options);
    consume_qFIn(Kind_Idfg_op, ")"_view, fname, src, tokens, _ps);
    softSemi_qFIn(fname, src, tokens, _ps, options);
    return createLoop_qFIn((*(Node_JjyR*)fu::NIL), (*(Node_JjyR*)fu::NIL), (*(Node_JjyR*)fu::NIL), body, (*(Node_JjyR*)fu::NIL), post_cond, modid, _ps);
}

static Node_JjyR parseJump_qFIn(const Kind_Idfg kind, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const fu::str& label = (tryConsume_94Qv(Kind_Idfg_op, ":"_view, tokens, _ps) ? consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value : (*(fu::str*)fu::NIL));

    {
        _ps._idx--;
        if (!label)
        {
            if (kind == Kind_Idfg_break)
            {
                if (!(_ps.mbz._blockArgDepth || _ps.mbz._loopDepth))
                    fail_94Qv(((("Nothing to "_view + qKW_e44U(str_eN8k(kind))) + " from here."_view) + "\n\n\tNo surrounding loop or |code| block."_view), fname, src, tokens, _ps);

            };
            if (kind == Kind_Idfg_continue)
            {
                if (!(_ps.mbz._lambdaDepth || _ps.mbz._loopDepth))
                    fail_94Qv(((("Nothing to "_view + qKW_e44U(str_eN8k(kind))) + " from here."_view) + "\n\n\tNo surrounding loop or callsite: |code| block."_view), fname, src, tokens, _ps);

            };
        };
        if (kind == Kind_Idfg_return)
        {
            if (!(_ps.mbz._fnDepth))
                fail_94Qv(((("Cannot "_view + qKW_e44U(str_eN8k(kind))) + " here."_view) + "\n\n\tNo surrounding function."_view), fname, src, tokens, _ps);

        };
        _ps._idx++;
    };
    /*MOV*/ Node_JjyR expr {};
    if (!tryConsume_94Qv(Kind_Idfg_op, ";"_view, tokens, _ps))
    {
        expr = parseExpression_I0Mm(P_RESET, M_LINT_ENSURE_INDENT, modid, fname, src, tokens, _ps, options);
        softSemi_qFIn(fname, src, tokens, _ps, options);
    };
    return make_qFIn(kind, (expr ? fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(expr) }} : fu::vec<Node_JjyR>{}), Flags_Lzg8{}, label, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseCatchErrvar_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    const fu::str& id = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
    return createLet_qFIn(id, createRead_qFIn(str_8atgJDQsZa1, Flags_Lzg8{}, modid, fname, src, tokens, _ps), (*(Node_JjyR*)fu::NIL), Flags_Lzg8{}, ParseSyntax_Lay2{}, modid, _ps);
}

static Node_JjyR parseTryCatch_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (_ps.mbz._fnDepth > 0)
    {
        /*MOV*/ Node_JjyR tRy = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
        consume_qFIn(Kind_Idfg_id, "catch"_view, fname, src, tokens, _ps);
        consume_qFIn(Kind_Idfg_op, "("_view, fname, src, tokens, _ps);
        /*MOV*/ Node_JjyR err = parseCatchErrvar_qFIn(modid, fname, src, tokens, _ps);
        consume_qFIn(Kind_Idfg_op, ")"_view, fname, src, tokens, _ps);
        /*MOV*/ Node_JjyR cAtch = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
        return make_qFIn(Kind_Idfg_try, fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(tRy), static_cast<Node_JjyR&&>(err), static_cast<Node_JjyR&&>(cAtch) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    }
    else
    {
        _ps._idx--;
        fail_94Qv(fu::str{}, fname, src, tokens, _ps);
    };
}

static Node_JjyR parseUnwrap_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR stmt = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
    if (stmt.kind == Kind_Idfg_block)
    {
        stmt.items += make_qFIn(Kind_Idfg_unwrap, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
        return /*NRVO*/ stmt;
    }
    else
        fail_94Qv((("Unwrap only works for blocks, this is a "_view + qKW_e44U(str_eN8k(stmt.kind))) + "."_view), fname, src, tokens, _ps);

}

                                #ifndef DEF___mjttbOBpqK8
                                #define DEF___mjttbOBpqK8
inline static void _mjtt(Node_JjyR& item)
{
    if (item.kind == Kind_Idfg_let)
        item.flags |= Flags_Lzg8_F_PREDICATE;

}
                                #endif

                                #ifndef DEF_each_IRPnvM3BQoa
                                #define DEF_each_IRPnvM3BQoa
inline void each_IRPn(fu::view_mut<Node_JjyR> a)
{
    for (int i = 0; i < a.size(); i++)
        _mjtt(a.mutref(i));

}
                                #endif

static Node_JjyR parseStructDecl_qFIn(const Kind_Idfg kind, const Flags_Lzg8 flags, const DeclAsserts_taUG asserts, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    Set_XshD expectedTypedParams0 = steal_NfnD(_ps.mbz._expectedTypeParams);
    fu_DEFER(std::swap(expectedTypedParams0, _ps.mbz._expectedTypeParams));
    const fu::str& name = tryConsume_qFIn(Kind_Idfg_id, tokens, _ps).value;
    fu::vec<Node_JjyR> args {};
    const Flags_Lzg8 argFlags = ((name && tryConsume_94Qv(Kind_Idfg_op, "("_view, tokens, _ps)) ? parseArgsDecl_qFIn(args, Kind_Idfg_op, ")"_view, P_RESET, modid, fname, src, tokens, _ps, options) : Flags_Lzg8{});
    consume_qFIn(Kind_Idfg_op, "{"_view, fname, src, tokens, _ps);
    fu::vec<Node_JjyR> items = parseBlockLike_qFIn(Kind_Idfg_op, "}"_view, true, false, modid, fname, src, tokens, _ps, options);

    { {
        for (int i = 0; i < items.size(); i++)
        {
            const Node_JjyR& item = items[i];
            if ((item.kind == Kind_Idfg_let) && (item.flags & Flags_Lzg8_F_PREDICATE))
                goto BL_1;

        };
        each_IRPn(items);
      } BL_1:;
    };
    /*MOV*/ Node_JjyR sTruct = make_qFIn(kind, fu::vec<Node_JjyR> {{ Node_JjyR{}, make_qFIn(Kind_Idfg_members, items, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps) }}, flags, name, asserts, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    if (!args)
        return /*NRVO*/ sTruct;
    else
    {
        sTruct.value = fu::str{};
        return make_qFIn(Kind_Idfg_fn, ((args + Node_JjyR{}) + sTruct), argFlags, name, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    };
}

static void set_PUB_qFIn(Flags_Lzg8& flags, fu::view<char> extra, const bool autopub_ok, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    if (flags & Flags_Lzg8_F_SHADOW)
        fail_94Qv((((("Cannot "_view + qBAD_e44U("pub"_view)) + " a "_view) + qKW_e44U("shadow"_view)) + (extra ? (": "_view + extra) : fu::str("."_fu))), fname, src, tokens, _ps);
    else
    {
        flags |= Flags_Lzg8_F_PUB;
        if (!autopub_ok)
            _ps._autopub = false;

    };
}

static Node_JjyR parsePub_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (_ps.mbz._fnDepth)
        fail_94Qv((((("Cannot "_view + qBAD_e44U("pub"_view)) + " from within a "_view) + qKW_e44U("fn"_view)) + "."_view), fname, src, tokens, _ps);
    else
    {
        /*MOV*/ Node_JjyR out = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
        set_PUB_qFIn(out.flags, fu::view<char>{}, (out.kind == Kind_Idfg_import), fname, src, tokens, _ps);
        return /*NRVO*/ out;
    };
}

static Node_JjyR parseShadow_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    int idx0 = _ps._idx;
    /*MOV*/ Node_JjyR out = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
    if (out.flags & Flags_Lzg8_F_PUB)
        fail_94Qv((((("Cannot "_view + qBAD_e44U("shadow"_view)) + " a "_view) + qKW_e44U("pub"_view)) + "."_view), fname, src, tokens, _ps);
    else
    {
        std::swap(idx0, _ps._idx);
        set_SHADOW_qFIn(out.flags, fname, src, tokens, _ps);
        std::swap(idx0, _ps._idx);
        return /*NRVO*/ out;
    };
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

                                #ifndef DEF_has_Mnu2KTFEuhg
                                #define DEF_has_Mnu2KTFEuhg
inline bool has_Mnu2(fu::view<char> a, const char b)
{
    return (find_ZKsG(a, b) >= 0);
}
                                #endif

static Node_JjyR createUsing_qFIn(/*MOV*/ Node_JjyR&& out, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    if (out.kind == Kind_Idfg_fn)
    {
        int explicitMin = 0;
        int explicitMax = 0;
        for (int i = 0; i < (out.items.size() + FN_ARGS_BACK); i++)
        {
            const Node_JjyR& arg = out.items[i];
            if (!(arg.flags & Flags_Lzg8_F_IMPLICIT))
            {
                explicitMax++;
                if (!arg.items[LET_INIT] && explicitMin++)
                    fail_qFIn(arg.token, fu::str(str_RRLMAufVgP7), modid, fname, src, tokens, _ps);

            };
        };
        if (explicitMin)
            out.flags |= Flags_Lzg8_F_CONVERSION;
        else if (!explicitMax)
            out.flags |= Flags_Lzg8_F_USING;
        else
            fail_qFIn(out.token, fu::str(str_vpTbc9CkFUc), modid, fname, src, tokens, _ps);

        for (int i_1 = 0; i_1 < (out.items.size() - 2); i_1++)
        {
            const Node_JjyR& arg = out.items[i_1];
            if (!arg.items[LET_TYPE] && !has_Mnu2(arg.value, '.'))
                fail_qFIn(arg.token, fu::str(str_H0VBGU0sq44), modid, fname, src, tokens, _ps);

        };
    }
    else if (out.kind == Kind_Idfg_let)
        out.flags |= Flags_Lzg8_F_USING;
    else if ((out.kind == Kind_Idfg_enum) || (out.kind == Kind_Idfg_flags) || (out.kind == Kind_Idfg_primitive))
        out.flags |= Flags_Lzg8_F_USING;
    else if (out.kind == Kind_Idfg_call)
    {
        return createUsing_qFIn(createLet_qFIn(str_SXzNzprGfI2, (*(Node_JjyR*)fu::NIL), out, Flags_Lzg8{}, ParseSyntax_Lay2_PS_USING_EXPRESSION, modid, _ps), modid, fname, src, tokens, _ps);
    }
    else
        fail_94Qv((qBAD_e44U("using"_view) + " cannot be used here."_view), fname, src, tokens, _ps);

    if (out.flags & Flags_Lzg8_F_OPERATOR)
        fail_94Qv((qBAD_e44U("using"_view) + " cannot be used on operator functions."_view), fname, src, tokens, _ps);
    else
        return static_cast<Node_JjyR&&>(out);

}

static Node_JjyR parseUsing_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR out = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
    return createUsing_qFIn(static_cast<Node_JjyR&&>(out), modid, fname, src, tokens, _ps);
}

static Node_JjyR parseLax_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR out = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
    if ((out.kind == Kind_Idfg_let) || (out.kind == Kind_Idfg_fn))
    {
        out.flags |= Flags_Lzg8_F_LAX;
        return /*NRVO*/ out;
    }
    else
        fail_qFIn(out.token, (qBAD_e44U("lax"_view) + " is not supported for this statement or declaration."_view), modid, fname, src, tokens, _ps);

}

static Node_JjyR parseExtern_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR out = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
    if (isFnOrTypeDeclaration_UVY6(out.kind))
    {
        out.flags |= Flags_Lzg8_F_EXTERN;
        return /*NRVO*/ out;
    }
    else
        fail_qFIn(out.token, (qBAD_e44U("extern"_view) + " is not supported for this statement or declaration."_view), modid, fname, src, tokens, _ps);

}

static Node_JjyR parseImport_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ fu::str path = fu::str(tryConsume_qFIn(Kind_Idfg_id, tokens, _ps).value);
    if (path)
    {
        while (tryConsume_94Qv(Kind_Idfg_op, "::"_view, tokens, _ps))
        {
            path += ("/"_view + consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value);
        };
    }
    else
    {
        path = consume_qFIn(Kind_Idfg_str, fu::view<char>{}, fname, src, tokens, _ps).value;
    };
    softSemi_qFIn(fname, src, tokens, _ps, options);
    fu::str _0 {};
    return (_0 = registerImport_qFIn(static_cast<fu::str&&>(path), fu::view<char>{}, modid, _ps), make_qFIn(Kind_Idfg_import, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, static_cast<fu::str&&>(_0), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps));
}

static Node_JjyR parseCompilerPragma_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const fu::str& value = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
    fu::vec<Node_JjyR> items {};
    if (value != "break"_view)
    {
        consume_qFIn(Kind_Idfg_op, "("_view, fname, src, tokens, _ps);
        parseCallArgs_qFIn(")"_view, items, false, modid, fname, src, tokens, _ps, options);
    };
    ParseSyntax_Lay2 _0;
    return (_0 = (softSemi_qFIn(fname, src, tokens, _ps, options) ? ParseSyntax_Lay2_PS_DISCARD_IF_BLOCK_TAIL : ParseSyntax_Lay2{}), make_qFIn(Kind_Idfg_pragma, items, Flags_Lzg8{}, value, DeclAsserts_taUG{}, _0, TokenIdx_5581{}, modid, _ps));
}

static Node_JjyR parseFixityDecl_qFIn(const Flags_Lzg8 flags, const Fixity_7dA5 fixity, const DeclAsserts_taUG asserts, const bool expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    consume_qFIn(Kind_Idfg_id, "fn"_view, fname, src, tokens, _ps);
    return parseFnDecl_qFIn(flags, fixity, asserts, expr, modid, fname, src, tokens, _ps, options);
}

static Node_JjyR parseOperatorDecl_qFIn(const Fixity_7dA5 fixity, const Flags_Lzg8 flags, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (fixity)
    {
        return parseFixityDecl_qFIn(flags, fixity, DeclAsserts_taUG{}, false, modid, fname, src, tokens, _ps, options);
    }
    else
        fail_94Qv(fu::str("Falsy fixity."_fu), fname, src, tokens, _ps);

}

static Node_JjyR parseInlineDecl_qFIn(Flags_Lzg8 flags, const Flags_Lzg8 F, const DeclAsserts_taUG asserts, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    flags |= F;
    fu::view<char> v = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
    if (v == "infix"_view)
        return parseOperatorDecl_qFIn(Fixity_7dA5_Infix, flags, modid, fname, src, tokens, _ps, options);
    else if (v == "prefix"_view)
        return parseOperatorDecl_qFIn(Fixity_7dA5_Prefix, flags, modid, fname, src, tokens, _ps, options);
    else if (v == "postfix"_view)
        return parseOperatorDecl_qFIn(Fixity_7dA5_Postfix, flags, modid, fname, src, tokens, _ps, options);
    else
    {
        _ps._idx--;
        return parseFixityDecl_qFIn(flags, Fixity_7dA5{}, asserts, false, modid, fname, src, tokens, _ps, options);
    };
}

static Node_JjyR parseNoInlineDecl_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    return parseInlineDecl_qFIn(Flags_Lzg8{}, Flags_Lzg8{}, DeclAsserts_taUG_A_NOINLINE, modid, fname, src, tokens, _ps, options);
}

static Node_JjyR parsePrimDecl_qFIn(const Kind_Idfg kind, const DeclAsserts_taUG asserts, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const fu::str& name = tryConsume_qFIn(Kind_Idfg_id, tokens, _ps).value;
    /*MOV*/ Node_JjyR annot = tryPopTypeAnnot_qFIn(false, false, modid, fname, src, tokens, _ps, options);
    fu::vec<Node_JjyR> items = (tryConsume_94Qv(Kind_Idfg_op, "{"_view, tokens, _ps) ? parseBlockLike_qFIn(Kind_Idfg_op, "}"_view, false, true, modid, fname, src, tokens, _ps, options) : fu::vec<Node_JjyR>{});
    if ((kind != Kind_Idfg_enum) && (kind != Kind_Idfg_flags))
    {
        if (!(annot))
            fail_94Qv((qKW_e44U("primitive"_view) + " declarations require a base type annotation."_view), fname, src, tokens, _ps);

    };
    return make_qFIn(kind, fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(annot), (items ? make_qFIn(Kind_Idfg_members, items, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps) : Node_JjyR{}) }}, Flags_Lzg8{}, name, asserts, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseAnnotatedFn_qFIn(const Flags_Lzg8 flags, const DeclAsserts_taUG asserts, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const int _idx0 = _ps._idx;
    /*MOV*/ Node_JjyR stmt = parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
    if ((stmt.kind != Kind_Idfg_fn) || (stmt.flags & Flags_Lzg8_F_LAMBDA))
    {
        _ps._idx = (_idx0 ? (_idx0 - 1) : 0);
        fail_94Qv((("Invalid annotation: not a "_view + qKW_e44U("fn"_view)) + " declaration."_view), fname, src, tokens, _ps);
    }
    else
    {
        stmt.flags |= flags;
        stmt.asserts |= asserts;
        return /*NRVO*/ stmt;
    };
}

static Node_JjyR parseAnnotatedStruct_qFIn(const DeclAsserts_taUG asserts, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    consume_qFIn(Kind_Idfg_id, "struct"_view, fname, src, tokens, _ps);
    return parseStructDecl_qFIn(Kind_Idfg_struct, Flags_Lzg8{}, asserts, modid, fname, src, tokens, _ps, options);
}

static Node_JjyR parseAnnotatedType_qFIn(const DeclAsserts_taUG asserts, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    fu::view<char> kw = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
    if (kw == "struct"_view)
    {
        return parseStructDecl_qFIn(Kind_Idfg_struct, Flags_Lzg8{}, asserts, modid, fname, src, tokens, _ps, options);
    }
    else if (kw == "enum"_view)
        return parsePrimDecl_qFIn(Kind_Idfg_enum, asserts, modid, fname, src, tokens, _ps, options);
    else if (kw == "flags"_view)
        return parsePrimDecl_qFIn(Kind_Idfg_flags, asserts, modid, fname, src, tokens, _ps, options);
    else if (kw == "primitive"_view)
        return parsePrimDecl_qFIn(Kind_Idfg_primitive, asserts, modid, fname, src, tokens, _ps, options);
    else
    {
        _ps._idx--;
        fail_94Qv(fu::str{}, fname, src, tokens, _ps);
    };
}

extern const Flags_Lzg8 F_TESTCASE;
static Node_JjyR parseTestcase_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    return parseFnDecl_qFIn(F_TESTCASE, Fixity_7dA5{}, DeclAsserts_taUG{}, false, modid, fname, src, tokens, _ps, options);
}

static Node_JjyR parseStatement_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const int loc0 = _ps._loc;
    fu_DEFER(_ps._loc = loc0);
    const Token_6M7a* _0;
    const Token_6M7a& token = (*(_0 = &(tokens[(_ps._loc = _ps._idx++)])) ? *_0 : fail_94Qv(fu::str{}, fname, src, tokens, _ps));
    if (token.kind == Kind_Idfg_op)
    {
        fu::view<char> v = token.value;
        if (v == "{"_view)
            return parseBlock_qFIn(modid, fname, src, tokens, _ps, options);
        else if (v == ":"_view)
            return parseLabelledStatement_qFIn(modid, fname, src, tokens, _ps, options);

    }
    else if (token.kind == Kind_Idfg_id)
    {
        fu::view<char> v = token.value;
        const Token_6M7a& peek = tokens[_ps._idx];
        if (_ps.mbz._fnDepth)
        {
            if (v == "if"_view)
                return parseIf_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "for"_view)
                return parseFor_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "while"_view)
                return parseWhile_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "do"_view)
                return parseDoWhile_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "return"_view)
                return parseJump_qFIn(Kind_Idfg_return, modid, fname, src, tokens, _ps, options);
            else if (v == "break"_view)
                return parseJump_qFIn(Kind_Idfg_break, modid, fname, src, tokens, _ps, options);
            else if (v == "continue"_view)
                return parseJump_qFIn(Kind_Idfg_continue, modid, fname, src, tokens, _ps, options);
            else if (v == "try"_view)
                return parseTryCatch_qFIn(modid, fname, src, tokens, _ps, options);

        };
        if ((peek.kind == Kind_Idfg_op) && (peek.value == "{"_view))
        {
            if (v == "unwrap"_view)
                return parseUnwrap_qFIn(modid, fname, src, tokens, _ps, options);

        };
        if ((v == "fn"_view) && ((peek.kind == Kind_Idfg_id) || !_ps.mbz._fnDepth))
        {
            return parseFnDecl_qFIn(Flags_Lzg8{}, Fixity_7dA5{}, DeclAsserts_taUG{}, false, modid, fname, src, tokens, _ps, options);
        }
        else if (peek.kind == Kind_Idfg_id)
        {
            if (v == "struct"_view)
            {
                return parseStructDecl_qFIn(Kind_Idfg_struct, Flags_Lzg8{}, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "union"_view)
            {
                return parseStructDecl_qFIn(Kind_Idfg_union, Flags_Lzg8{}, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "pub"_view)
                return parsePub_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "shadow"_view)
                return parseShadow_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "using"_view)
                return parseUsing_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "lax"_view)
                return parseLax_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "extern"_view)
                return parseExtern_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "import"_view)
                return parseImport_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "pragma"_view)
                return parseCompilerPragma_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "inline"_view)
            {
                return parseInlineDecl_qFIn(Flags_Lzg8{}, Flags_Lzg8_F_INLINE, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "noinline"_view)
                return parseNoInlineDecl_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "infix"_view)
            {
                return parseOperatorDecl_qFIn(Fixity_7dA5_Infix, Flags_Lzg8{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "prefix"_view)
            {
                return parseOperatorDecl_qFIn(Fixity_7dA5_Prefix, Flags_Lzg8{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "postfix"_view)
            {
                return parseOperatorDecl_qFIn(Fixity_7dA5_Postfix, Flags_Lzg8{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "primitive"_view)
            {
                return parsePrimDecl_qFIn(Kind_Idfg_primitive, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "flags"_view)
            {
                return parsePrimDecl_qFIn(Kind_Idfg_flags, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "enum"_view)
            {
                return parsePrimDecl_qFIn(Kind_Idfg_enum, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "pure"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_PURE, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "purectx"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_PURE_CTX, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "purefx"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_PURE_FX, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "novec"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_NOVEC, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "noflow"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_NOFLOW, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "nothrow"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_NOTHROW, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "nocrash"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_NOCRASH, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "noio"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_NOIO, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "fast"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8{}, DeclAsserts_taUG_A_FAST, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "nocopy"_view)
                return parseAnnotatedStruct_qFIn(DeclAsserts_taUG_A_NOCOPY, modid, fname, src, tokens, _ps, options);
            else if (v == "trivial"_view)
                return parseAnnotatedStruct_qFIn(DeclAsserts_taUG_A_TRIVIAL, modid, fname, src, tokens, _ps, options);
            else if (v == "nodiscard"_view)
                return parseAnnotatedType_qFIn(DeclAsserts_taUG_A_NODISCARD, modid, fname, src, tokens, _ps, options);
            else if (v == "hotswap"_view)
            {
                return parseAnnotatedFn_qFIn(Flags_Lzg8_F_HOTSWAP, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "test"_view)
                return parseTestcase_qFIn(modid, fname, src, tokens, _ps, options);

        };
    };
    _ps._idx--;
    return parseLetOrExpressionStatement_qFIn(modid, fname, src, tokens, _ps, options);
}

static Node_JjyR parseFnBodyBranch_qFIn(const Flags_Lzg8 flags, const bool expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    Set_XshD upstreamTypeParams0 = uNion_GdwD(_ps.mbz._upstreamTypeParams, _ps.mbz._expectedTypeParams);
    std::swap(_ps.mbz._upstreamTypeParams, upstreamTypeParams0);
    Set_XshD expectedTypeParams0 = steal_NfnD(_ps.mbz._expectedTypeParams);
    const int templateDepth0 = _ps.mbz._templateDepth;
    fu_DEFER(
    {
        std::swap(_ps.mbz._upstreamTypeParams, upstreamTypeParams0);
        std::swap(_ps.mbz._expectedTypeParams, expectedTypeParams0);
        _ps.mbz._templateDepth = templateDepth0;
    });
    if (flags & Flags_Lzg8_F_TEMPLATE)
        _ps.mbz._templateDepth++;

    tryConsume_94Qv(Kind_Idfg_op, "="_view, tokens, _ps);
    /*MOV*/ Node_JjyR body = (expr ? parseExpression_I0Mm(_ps._precedence, 0, modid, fname, src, tokens, _ps, options) : parseStatement_qFIn(modid, fname, src, tokens, _ps, options));
    if (body.syntax & ParseSyntax_Lay2_PS_ALWAYS_DISCARD)
    {
        body = createBlock_qFIn(fu::vec<Node_JjyR> {{ Node_JjyR(body) }}, (*(fu::str*)fu::NIL), modid, _ps);
    };
    return /*NRVO*/ body;
}

static void parseBranch_qFIn(const bool noCond, const Flags_Lzg8 flags, fu::view<Node_JjyR> out_push_body, bool& TODO_FIX_didInitArgTypeParams, Set_XshD& withArgTypeParams, fu::vec<Node_JjyR>& branches, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (!noCond)
    {
        if (!TODO_FIX_didInitArgTypeParams)
        {
            TODO_FIX_didInitArgTypeParams = true;
            withArgTypeParams = _ps.mbz._expectedTypeParams;
            for (int i = (out_push_body.size() - 1); i-- > 0; )
            {
                const Node_JjyR& arg = out_push_body[i];
                fu::vec_range<char> argName = ((arg.kind == Kind_Idfg_let) ? ((arg.flags & Flags_Lzg8_F_COMPOUND_ID) ? cleanID_V5Iu(arg.value) : arg.value) : (*(fu::str*)fu::NIL));
                if (argName && (argName != "_"_view))
                    add_JHtk(withArgTypeParams, argName);

            };
        };
        std::swap(_ps.mbz._expectedTypeParams, withArgTypeParams);
    };
    _ps.mbz._TODO_FIX_dollarOk = true;
    /*MOV*/ Node_JjyR cond = (!noCond ? parseUnaryExpression_qFIn(0, modid, fname, src, tokens, _ps, options) : Node_JjyR{});
    _ps.mbz._TODO_FIX_dollarOk = false;
    if (!noCond)
        std::swap(_ps.mbz._expectedTypeParams, withArgTypeParams);

    /*MOV*/ Node_JjyR type = tryPopTypeAnnot_qFIn(false, true, modid, fname, src, tokens, _ps, options);
    /*MOV*/ Node_JjyR cons = parseFnBodyBranch_qFIn(flags, false, modid, fname, src, tokens, _ps, options);
    branches.push(make_qFIn(Kind_Idfg_fnbranch, fu::vec<Node_JjyR> {{ static_cast<Node_JjyR&&>(cond), static_cast<Node_JjyR&&>(type), static_cast<Node_JjyR&&>(cons) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps));
}

static void parseFnBodyOrPattern_qFIn(Flags_Lzg8& flags, fu::vec_range_mut<Node_JjyR> out_push_body, const bool expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    /*MOV*/ Node_JjyR body {};
    bool TODO_FIX_didInitArgTypeParams = false;
    Set_XshD withArgTypeParams {};
    if (!expr && tryConsume_94Qv(Kind_Idfg_id, "case"_view, tokens, _ps))
    {
        flags |= Flags_Lzg8_F_TEMPLATE;
        fu::vec<Node_JjyR> branches {};
        do
            parseBranch_qFIn(false, flags, out_push_body, TODO_FIX_didInitArgTypeParams, withArgTypeParams, branches, modid, fname, src, tokens, _ps, options);
        while (tryConsume_94Qv(Kind_Idfg_id, "case"_view, tokens, _ps));
        if (tryConsume_94Qv(Kind_Idfg_id, "default"_view, tokens, _ps))
            parseBranch_qFIn(true, flags, out_push_body, TODO_FIX_didInitArgTypeParams, withArgTypeParams, branches, modid, fname, src, tokens, _ps, options);

        body = make_qFIn(Kind_Idfg_pattern, branches, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    }
    else
        body = parseFnBodyBranch_qFIn(flags, expr, modid, fname, src, tokens, _ps, options);

    out_push_body.push(static_cast<Node_JjyR&&>(body));
}

static Node_JjyR parseFnDecl_cont_qFIn(fu::vec_range<char> name, Flags_Lzg8 flags, const DeclAsserts_taUG asserts, const bool expr, const bool leadingDot, fu::view<char> endv, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const bool expr_1 = (expr ? expr : leadingDot);
    fu::vec<Node_JjyR> items {};
    _ps.mbz._fnDepth++;
    const int numDollars0 = _ps._numDollars;
    fu_DEFER(
    {
        _ps.mbz._fnDepth--;
        _ps._numDollars = numDollars0;
    });
    if (leadingDot)
        flags |= parseLeadingDot_qFIn(items, name, modid, fname, src, tokens, _ps, options);
    else
    {
        flags |= (endv ? parseArgsDecl_qFIn(items, Kind_Idfg_op, endv, ((endv == "|"_view) ? P_PREFIX_UNARY : P_RESET), modid, fname, src, tokens, _ps, options) : Flags_Lzg8{});
        /*MOV*/ Node_JjyR type = tryPopTypeAnnot_qFIn(false, true, modid, fname, src, tokens, _ps, options);
        const int retIdx = items.size();
        items.push(Node_JjyR(type));
        parseFnBodyOrPattern_qFIn(flags, items, expr_1, modid, fname, src, tokens, _ps, options);
        if ((name == "main"_view) && (_ps.mbz._fnDepth == 1))
        {
            if (!type)
            {
                items.mutref(retIdx) = static_cast<Node_JjyR&&>((type = createRead_qFIn(str_K8KxoYxA7Xl, Flags_Lzg8{}, modid, fname, src, tokens, _ps)));
            }
            else if ((type.kind != Kind_Idfg_call) || (type.value != "i32"_view) || type.items.size())
                fail_94Qv(fu::str(str_MQ9AWe6yLTi), fname, src, tokens, _ps);

            set_PUB_qFIn(flags, fu::view<char>{}, false, fname, src, tokens, _ps);
            flags |= Flags_Lzg8_F_EXTERN;
        };
    };
    if ((flags & Flags_Lzg8_F_LAMBDA) || _ps.mbz._templateDepth)
        flags |= Flags_Lzg8_F_TEMPLATE;

    if (flags & Flags_Lzg8_F_TEMPLATE)
    {
        for (int i = 0; i < (items.size() + FN_ARGS_BACK); i++)
        {
            if ((items[i].flags & ((Flags_Lzg8_F_REF | Flags_Lzg8_F_CONST) | Flags_Lzg8_F_MUT)) == Flags_Lzg8_F_REF)
                items.mutref(i).flags |= Flags_Lzg8_F_TEMPLATE;

        };
    };
    return make_qFIn(Kind_Idfg_fn, items, flags, name, asserts, (!expr_1 ? ParseSyntax_Lay2_PS_NOT_AN_EXPRESSION : ParseSyntax_Lay2{}), TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseFnDecl_qFIn(Flags_Lzg8 flags, const Fixity_7dA5 fixity, const DeclAsserts_taUG asserts, const bool expr, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const int loc0 = _ps._loc;
    _ps._loc = _ps._idx;
    fu_DEFER(_ps._loc = loc0);
    fu::str name = fu::str(tryConsume_qFIn(Kind_Idfg_id, tokens, _ps).value);
    if (!name)
    {
        name = consume_qFIn(Kind_Idfg_op, fu::view<char>{}, fname, src, tokens, _ps).value;
        if (fixity == Fixity_7dA5_Postfix)
        {
            if (!has_FZWi(POSTFIX, name))
                fail_94Qv((("No such postfix operator: "_view + qBAD_e44U(name)) + "."_view), fname, src, tokens, _ps);
            else if (has_FZWi(PREFIX, name))
                name = ("postfix"_view + name);

        }
        else if (fixity == Fixity_7dA5_Infix)
        {
            if (!(has_zFnN(BINOP.PRECEDENCE, name)))
                fail_94Qv((("No such infix operator: "_view + qBAD_e44U(name)) + "."_view), fname, src, tokens, _ps);

        }
        else if (fixity == Fixity_7dA5_Prefix)
        {
            if (!(has_FZWi(PREFIX, name)))
                fail_94Qv((("No such prefix operator: "_view + qBAD_e44U(name)) + "."_view), fname, src, tokens, _ps);

        };
        flags |= Flags_Lzg8_F_OPERATOR;
    }
    else if ((flags & Flags_Lzg8_F_OPERATOR) || fixity)
        fail_94Qv((("Not an operator: "_view + qBAD_e44U(name)) + "."_view), fname, src, tokens, _ps);

    Set_XshD expectedTypedParams0 = steal_NfnD(_ps.mbz._expectedTypeParams);
    fu_DEFER(std::swap(expectedTypedParams0, _ps.mbz._expectedTypeParams));
    tryParseTypeParamsDecl_qFIn(fname, src, tokens, _ps);
    fu::view<char> endv = (tryConsume_94Qv(Kind_Idfg_op, "("_view, tokens, _ps) ? ")"_view : fu::view<char>{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_qFIn(name, flags, modid, _ps);
        else
            consume_qFIn(Kind_Idfg_op, "="_view, fname, src, tokens, _ps);

    };
    return parseFnDecl_cont_qFIn(name, flags, asserts, expr, false, endv, modid, fname, src, tokens, _ps, options);
}

                                #ifndef DEF_starts_SfbfOAVfSee
                                #define DEF_starts_SfbfOAVfSee
inline bool starts_Sfbf(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static Node_JjyR createTypeParam_qFIn(fu::vec_range<char> value, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    const bool isDollar = starts_Sfbf(value, '$');
    if ((!_ps.mbz._TODO_FIX_dollarOk && isDollar) || has_lCh8(_ps.mbz._upstreamTypeParams, value))
    {
        return createRead_qFIn(value, Flags_Lzg8{}, modid, fname, src, tokens, _ps);
    }
    else
    {
        if (_ps.mbz._TODO_FIX_dollarOk && isDollar)
            add_JHtk(_ps.mbz._expectedTypeParams, value);

        _ps._numDollars++;
        return make_qFIn(Kind_Idfg_typeparam, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, value, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    };
}

static Node_JjyR createAnonymousTypeParam_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    return createTypeParam_qFIn(x7E_rA00("_ "_view, fu::i64dec(_ps._idx)), modid, fname, src, tokens, _ps);
}

static Node_JjyR createArrayLiteral_qFIn(const Flags_Lzg8 argFlags, fu::vec_range<Node_JjyR> items, const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_arrlit, items, argFlags, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseArrayLiteral_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    fu::vec<Node_JjyR> args {};
    const Flags_Lzg8 argFlags = parseCallArgs_qFIn("]"_view, args, false, modid, fname, src, tokens, _ps, options).flags;
    return createArrayLiteral_qFIn(argFlags, args, modid, _ps);
}

static Node_JjyR parseTypeParam_94Qv(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    fu::str value = ("$"_view + consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value);
    return createTypeParam_qFIn(value, modid, fname, src, tokens, _ps);
}

static Node_JjyR parseLambda_qFIn(const bool noClosingPipe, const bool leadingDot, const int mode, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const int blockArgDepth0 = _ps.mbz._blockArgDepth;
    _ps.mbz._blockArgDepth = ((mode & M_CALLSITE_ARGUMENT_POS) ? (_ps.mbz._blockArgDepth + 1) : 0);
    _ps.mbz._lambdaDepth++;
    fu_DEFER(
    {
        _ps.mbz._blockArgDepth = blockArgDepth0;
        _ps.mbz._lambdaDepth--;
    });
    if (noClosingPipe && (_ps._precedence.formal > P_RESET.formal) && (_ps._precedence.formal < P_PREFIX_UNARY.formal))
        warn_qFIn(str_ocR3YpRuxa5, fname, src, tokens, _ps, options);

    const fu::str& name = str_SXzNzprGfI2;
    const Flags_Lzg8 flags = (Flags_Lzg8_F_LAX | Flags_Lzg8_F_LAMBDA);
    return parseFnDecl_cont_qFIn(name, flags, DeclAsserts_taUG{}, !(mode & M_LAMBDA_STMT_OK), leadingDot, (!noClosingPipe ? "|"_view : fu::view<char>{}), modid, fname, src, tokens, _ps, options);
}

static Node_JjyR createDefinit_qFIn(const int modid, const ParserState_Ahey& _ps)
{
    return make_qFIn(Kind_Idfg_definit, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
}

static Node_JjyR parseTypeParam_qFIn(fu::view<char> endv, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps)
{
    if (_ps.mbz._TODO_FIX_dollarOk)
    {
        const fu::str& value = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
        if (has_lCh8(_ps.mbz._upstreamTypeParams, value) || !add_JHtk(_ps.mbz._expectedTypeParams, value))
        {
            _ps._idx--;
            fail_94Qv((("A type parameter "_view + qID_e44U(value)) + " is already defined."_view), fname, src, tokens, _ps);
        }
        else
        {
            consume_qFIn(Kind_Idfg_op, endv, fname, src, tokens, _ps);
            _ps._numDollars++;
            return make_qFIn(Kind_Idfg_typeparam, (*(fu::vec<Node_JjyR>*)fu::NIL), Flags_Lzg8{}, value, DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
        };
    }
    else
    {
        fail_94Qv(fu::str{}, fname, src, tokens, _ps);
    };
}

static Node_JjyR parsePrefix_qFIn(fu::vec_range<char> op, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (has_FZWi(PREFIX, op))
    {
        const int mode = (((op == "-"_view) || (op == "+"_view)) ? M_LINT_UNARY_PRECEDENCE : 0);
        return createPrefix_qFIn(op, parseUnaryExpression_qFIn(mode, modid, fname, src, tokens, _ps, options), modid, _ps);
    }
    else
    {
        _ps._idx--;
        fail_94Qv(fu::str{}, fname, src, tokens, _ps);
    };
}

static Node_JjyR parseExpressionHead_qFIn(const int mode, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& token = tokens[_ps._idx++];

    {
        const Kind_Idfg k = token.kind;
        const fu::str& v = token.value;
        if ((k == Kind_Idfg_int) || (k == Kind_Idfg_real) || (k == Kind_Idfg_str) || (k == Kind_Idfg_char))
            return createLeaf_qFIn(k, v, modid, _ps);
        else if (k == Kind_Idfg_id)
        {
            const Token_6M7a& peek = tokens[_ps._idx];
            if (peek.kind == Kind_Idfg_id)
            {
                if ((v == "fn"_view) || (v == "infix"_view) || (v == "prefix"_view) || (v == "postfix"_view))
                {
                    _ps._idx++;
                    const Fixity_7dA5 fixity = ((v == "infix"_view) ? Fixity_7dA5_Infix : ((v == "prefix"_view) ? Fixity_7dA5_Prefix : ((v == "postfix"_view) ? Fixity_7dA5_Postfix : (_ps._idx--, Fixity_7dA5{}))));
                    return parseFnDecl_qFIn(Flags_Lzg8{}, fixity, DeclAsserts_taUG{}, true, modid, fname, src, tokens, _ps, options);
                };
            };
            if ((peek.kind == Kind_Idfg_op) && (peek.value == "{"_view))
            {
                if (v == "struct"_view)
                {
                    return parseStructDecl_qFIn(Kind_Idfg_struct, Flags_Lzg8{}, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
                }
                else if (v == "union"_view)
                {
                    return parseStructDecl_qFIn(Kind_Idfg_union, Flags_Lzg8{}, DeclAsserts_taUG{}, modid, fname, src, tokens, _ps, options);
                };
            };
            if (_ps.mbz._TODO_FIX_dollarOk && has_lCh8(_ps.mbz._expectedTypeParams, v))
                return createTypeParam_qFIn(v, modid, fname, src, tokens, _ps);
            else if (v == "_"_view)
                return createAnonymousTypeParam_qFIn(modid, fname, src, tokens, _ps);
            else
            {
                return createRead_qFIn(v, Flags_Lzg8{}, modid, fname, src, tokens, _ps);
            };
        }
        else if (k == Kind_Idfg_op)
        {
            if (v == "("_view)
                return parseParens_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "{"_view)
                return parseBlock_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "["_view)
                return parseArrayLiteral_qFIn(modid, fname, src, tokens, _ps, options);
            else if (v == "$"_view)
                return parseTypeParam_94Qv(modid, fname, src, tokens, _ps);
            else if (v == "|"_view)
                return parseLambda_qFIn(false, false, mode, modid, fname, src, tokens, _ps, options);
            else if (v == "||"_view)
                return parseLambda_qFIn(true, false, mode, modid, fname, src, tokens, _ps, options);
            else if (v == "."_view)
                return parseLambda_qFIn(true, true, 0, modid, fname, src, tokens, _ps, options);
            else if (v == "[]"_view)
                return createDefinit_qFIn(modid, _ps);
            else if (v == "::"_view)
            {
                const fu::str& id = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
                _ps._idx--;
                return parseQualifierChain_qFIn(createRead_qFIn(id, Flags_Lzg8{}, modid, fname, src, tokens, _ps), modid, fname, src, tokens, _ps);
            }
            else if ((v == "<"_view) && _ps.mbz._TODO_FIX_dollarOk)
                return parseTypeParam_qFIn(">"_view, modid, fname, src, tokens, _ps);
            else
                return parsePrefix_qFIn(v, modid, fname, src, tokens, _ps, options);

        };
    };
    _ps._idx--;
    fail_94Qv(fu::str{}, fname, src, tokens, _ps);
}

                                #ifndef DEF_parseExpression_I0MmklM7zq1
                                #define DEF_parseExpression_I0MmklM7zq1
inline static Node_JjyR parseExpression_I0Mm(const Precedence_ybkz& p1, const int mode, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Precedence_ybkz p0 = _ps._precedence;
    const int loc00 = _ps._loc;
    _ps._precedence = p1;
    _ps._loc = _ps._idx;
    const int col00 = _ps._col0;
    if (!((tokens[_ps._idx].lcc.col >= (_ps._col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_qFIn(x7E_rA00((x7E_rA00((("Ambiguous indent at `"_view + tokens[_ps._idx].value) + "`: expected more than "_view), fu::i64dec(_ps._col0)) + ", got "_view), fu::i64dec(tokens[_ps._idx].lcc.col)), fname, src, tokens, _ps, options);

    /*MOV*/ Node_JjyR head = parseExpressionHead_qFIn(mode, modid, fname, src, tokens, _ps, options);
    if (!ParseSyntax_Lay2((head.syntax & ParseSyntax_Lay2_PS_NOT_AN_EXPRESSION)))
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == Kind_Idfg_int) || (head.kind == Kind_Idfg_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_ps._loc = _ps._idx);
        Node_JjyR out {};
        while ((out = tryParseExpressionTail_qFIn(head, mode_1, modid, fname, src, tokens, _ps, options)))
        {

            {
                const Token_6M7a& t1 = tokens[(_ps._loc = loc0)];
                if (!(t1.lcc.col > col00))
                    warn_qFIn(x7E_rA00((x7E_rA00((("Ambiguous indent at `"_view + t1.value) + "`: expected more than "_view), fu::i64dec(col00)) + ", got "_view), fu::i64dec(t1.lcc.col)), fname, src, tokens, _ps, options);

            };
            loc0 = (_ps._loc = _ps._idx);
            head = static_cast<Node_JjyR&&>(out);
        };
    };
    _ps._precedence = p0;
    _ps._loc = loc00;
    return /*NRVO*/ head;
}
                                #endif

static Node_JjyR parseUnaryExpression_qFIn(const int mode, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    return parseExpression_I0Mm(P_PREFIX_UNARY, mode, modid, fname, src, tokens, _ps, options);
}

static Node_JjyR parseTypeAnnot_qFIn(const bool allowTypeUnions, const bool allowLegacyRefs, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    bool hasLegacyRef = false;
    bool hasLegacyMutRef = false;
    if (allowLegacyRefs)
    {
        hasLegacyRef = !!tryConsume_94Qv(Kind_Idfg_op, "&"_view, tokens, _ps);
        hasLegacyMutRef = (hasLegacyRef ? !!tryConsume_94Qv(Kind_Idfg_id, "mut"_view, tokens, _ps) : false);
    };
    /*MOV*/ Node_JjyR res = parseUnaryExpression_qFIn(0, modid, fname, src, tokens, _ps, options);
    while (allowTypeUnions && tryConsume_94Qv(Kind_Idfg_id, "or"_view, tokens, _ps))
    {
        if (res.kind != Kind_Idfg_typeunion)
        {
            res = make_qFIn(Kind_Idfg_typeunion, fu::vec<Node_JjyR> {{ Node_JjyR(res) }}, Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
        };
        res.items += parseUnaryExpression_qFIn(0, modid, fname, src, tokens, _ps, options);
    };
    if (hasLegacyRef)
    {
        res = createCall_qFIn((hasLegacyMutRef ? str_VOy1PtiWBW2 : str_8K1yNpGZAm5), Flags_Lzg8_F_OPERATOR, fu::vec<Node_JjyR> {{ Node_JjyR(res) }}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps);
    };
    return /*NRVO*/ res;
}

static Node_JjyR tryParseLetInit_qFIn(const Precedence_ybkz& precedence, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    if (tryConsume_94Qv(Kind_Idfg_op, "="_view, tokens, _ps))
        return parseExpression_I0Mm(precedence, 0, modid, fname, src, tokens, _ps, options);
    else
    {
        return Node_JjyR{};
    };
}

static Node_JjyR parseLet_qFIn(const bool xqmark, const int anonIndex, const bool allowTypeUnions, const bool allowTypeParams, const Precedence_ybkz& initPrecedence, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    Flags_Lzg8 flags {};

    {
        if (tryConsume_Qkz7(Kind_Idfg_id, "using"_view, xqmark, tokens, _ps))
            flags |= Flags_Lzg8_F_USING;

        if (tryConsume_Qkz7(Kind_Idfg_id, "implicit"_view, xqmark, tokens, _ps))
            flags |= Flags_Lzg8_F_IMPLICIT;

        if (tryConsume_Qkz7(Kind_Idfg_id, "lax"_view, xqmark, tokens, _ps))
            flags |= Flags_Lzg8_F_LAX;

        if (tryConsume_Qkz7(Kind_Idfg_id, "shadow"_view, xqmark, tokens, _ps))
            set_SHADOW_qFIn(flags, fname, src, tokens, _ps);

        if (tryConsume_Qkz7(Kind_Idfg_id, "type"_view, xqmark, tokens, _ps))
            flags |= Flags_Lzg8_F_TYPENAME;
        else
        {
            if (tryConsume_Qkz7(Kind_Idfg_id, "mut"_view, xqmark, tokens, _ps))
                flags |= Flags_Lzg8_F_MUT;
            else if (tryConsume_Qkz7(Kind_Idfg_id, "const"_view, xqmark, tokens, _ps))
                flags |= Flags_Lzg8_F_CONST;

            if (tryConsume_Qkz7(Kind_Idfg_id, "ref"_view, xqmark, tokens, _ps))
                flags |= Flags_Lzg8_F_REF;
            else if (tryConsume_Qkz7(Kind_Idfg_id, "val"_view, xqmark, tokens, _ps))
                flags |= Flags_Lzg8_F_VAL;

        };
    };
    if ((flags & Flags_Lzg8_F_MUT) && !(flags & Flags_Lzg8_F_REF))
        flags |= Flags_Lzg8_F_VAL;

    if ((flags & Flags_Lzg8_F_CONST) && !(flags & Flags_Lzg8_F_VAL))
        flags |= Flags_Lzg8_F_REF;

    const Token_6M7a& sh_autocall = (xqmark ? tryConsume_94Qv(Kind_Idfg_op, "."_view, tokens, _ps) : (*(Token_6M7a*)fu::NIL));
    const int loc0 = _ps._loc;
    _ps._loc = _ps._idx;
    fu_DEFER(_ps._loc = loc0);
    const fu::str* v;
    fu::str id = fu::str((((flags & Flags_Lzg8_F_TYPENAME) && tryConsume_94Qv(Kind_Idfg_op, "<"_view, tokens, _ps)) ? (v = &(consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value), consume_qFIn(Kind_Idfg_op, ">"_view, fname, src, tokens, _ps), (*v)) : consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value));
    if (!sh_autocall)
    {
        if (xqmark && tryConsume_94Qv(Kind_Idfg_op, "."_view, tokens, _ps))
        {
            flags |= Flags_Lzg8_F_COMPOUND_ID;
            id += ("."_view + consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value);
            while (tryConsume_94Qv(Kind_Idfg_op, "::"_view, tokens, _ps))
            {
                id += ("\t"_view + consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value);
            };
        };
    };
    if (xqmark && tryConsume_94Qv(Kind_Idfg_op, "[]"_view, tokens, _ps))
        flags |= Flags_Lzg8_F_REST_ARG;

    if (sh_autocall)
    {
        const Token_6M7a& postfix = tryConsume_qFIn(Kind_Idfg_id, tokens, _ps);
        flags |= Flags_Lzg8_F_COMPOUND_ID;
        id = (((postfix ? postfix.value : id) + "."_view) + id);
    };
    if (id == "_"_view)
    {
        if (anonIndex)
            id = x7E_rA00("_ "_view, fu::i64dec(anonIndex));

        flags |= Flags_Lzg8_F_LAX;
    };
    if (xqmark && tryConsume_94Qv(Kind_Idfg_op, "!"_view, tokens, _ps))
    {
        flags |= Flags_Lzg8_F_MUSTNAME;
        fu::view<char> v_1 {};
        fu::view<char> inner_id = (((flags & Flags_Lzg8_F_TYPENAME) && tryConsume_94Qv(Kind_Idfg_op, "<"_view, tokens, _ps)) ? (v_1.ptr_reassign(consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value), consume_qFIn(Kind_Idfg_op, ">"_view, fname, src, tokens, _ps), v_1) : tryConsume_qFIn(Kind_Idfg_id, tokens, _ps).value);
        if (inner_id)
        {
            flags |= Flags_Lzg8_F_COMPOUND_ID;
            id += ("!"_view + inner_id);
        };
    };
    Token_6M7a optional = (xqmark ? tryConsume_94Qv(Kind_Idfg_op, "?"_view, tokens, _ps) : (*(Token_6M7a*)fu::NIL));
    _ps.mbz._TODO_FIX_dollarOk = allowTypeParams;
    const Token_6M7a& isOpt = ((xqmark && !optional) ? (optional = tryConsume_94Qv(Kind_Idfg_op, "?:"_view, tokens, _ps)) : (*(Token_6M7a*)fu::NIL));
    Node_JjyR type = (isOpt ? parseTypeAnnot_qFIn(allowTypeUnions, false, modid, fname, src, tokens, _ps, options) : tryPopTypeAnnot_qFIn(allowTypeUnions, false, modid, fname, src, tokens, _ps, options));
    _ps.mbz._TODO_FIX_dollarOk = false;
    Node_JjyR init = (optional ? createDefinit_qFIn(modid, _ps) : tryParseLetInit_qFIn(initPrecedence, modid, fname, src, tokens, _ps, options));
    return createLet_qFIn(id, type, init, flags, ParseSyntax_Lay2{}, modid, _ps);
}

static Node_JjyR parseStructItem_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& isPredicate = tryConsume_94Qv(Kind_Idfg_id, "true"_view, tokens, _ps);
    /*MOV*/ Node_JjyR member = parseLet_qFIn(true, 0, false, false, P_RESET, modid, fname, src, tokens, _ps, options);
    softSemi_qFIn(fname, src, tokens, _ps, options);
    if (isPredicate)
        member.flags |= Flags_Lzg8_F_PREDICATE;

    return /*NRVO*/ member;
}

static Node_JjyR parseEnumItem_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const fu::str& id = consume_qFIn(Kind_Idfg_id, fu::view<char>{}, fname, src, tokens, _ps).value;
    Node_JjyR init = tryParseLetInit_qFIn(P_RESET, modid, fname, src, tokens, _ps, options);
    softSemi_qFIn(fname, src, tokens, _ps, options);
    return createLet_qFIn(id, (*(Node_JjyR*)fu::NIL), init, Flags_Lzg8{}, ParseSyntax_Lay2{}, modid, _ps);
}

static Node_JjyR parseDefer_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a* _0;
    const fu::str& value = (tryConsume_94Qv(Kind_Idfg_op, ":"_view, tokens, _ps) ? (*(_0 = &(tryConsume_94Qv(Kind_Idfg_id, "err"_view, tokens, _ps))) ? *_0 : consume_qFIn(Kind_Idfg_id, "ok"_view, fname, src, tokens, _ps)).value : (*(fu::str*)fu::NIL));
    if (_ps.mbz._fnDepth > 0)
    {
        fu::vec<Node_JjyR> _1 {};
        return (_1 = fu::vec<Node_JjyR> {{ parseStatement_qFIn(modid, fname, src, tokens, _ps, options) }}, make_qFIn(Kind_Idfg_defer, static_cast<fu::vec<Node_JjyR>&&>(_1), Flags_Lzg8{}, value, DeclAsserts_taUG{}, ParseSyntax_Lay2_PS_ALWAYS_DISCARD, TokenIdx_5581{}, modid, _ps));
    }
    else
    {
        _ps._idx--;
        fail_94Qv(fu::str{}, fname, src, tokens, _ps);
    };
}

static Node_JjyR parseDeferOrStatement_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const int loc0 = _ps._loc;
    fu_DEFER(_ps._loc = loc0);
    const Token_6M7a* _0;
    const Token_6M7a& peek = (*(_0 = &(tokens[(_ps._loc = _ps._idx)])) ? *_0 : fail_94Qv(fu::str{}, fname, src, tokens, _ps));
    if (peek.kind == Kind_Idfg_id)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_view)
        {
            _ps._idx++;
            return parseDefer_qFIn(modid, fname, src, tokens, _ps, options);
        };
    };
    return parseStatement_qFIn(modid, fname, src, tokens, _ps, options);
}

                                #ifndef DEF_warn_bpou6bXjmn1
                                #define DEF_warn_bpou6bXjmn1
inline static void warn_bpou(const int idx, fu::vec_range<char> reason, fu::vec_range<char> fname, fu::vec_range<char> src, fu::view<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const int idx0 = _ps._idx;
    _ps._idx = idx;
    warn_qFIn(reason, fname, src, tokens, _ps, options);
    _ps._idx = idx0;
}
                                #endif

static fu::vec<Node_JjyR> parseBlockLike_qFIn(const Kind_Idfg endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    const Token_6M7a& tok0 = (_ps._idx ? tokens[(_ps._idx - 1)] : (*(Token_6M7a*)fu::NIL));
    const int line0 = tok0.lcc.line;
    const int col00 = _ps._col0;
    const int col01 = ((tok0.lcc.col == col00) ? col00 : -1);
    int colNN = -1;
    int lineNN = line0;
    /*MOV*/ fu::vec<Node_JjyR> items {};
    for (; ; )
    {
        const int idx0 = _ps._idx;
        const Token_6M7a& token = tokens[_ps._idx];
        if ((token.kind == Kind_Idfg_op) && (token.value == ";"_view))
            _ps._idx++;
        else if ((token.kind == endKind) && (token.value == endVal))
        {
            _ps._col0 = col00;
            _ps._idx++;
            const int line1 = token.lcc.line;
            const int col1 = token.lcc.col;
            const int col1_min = _ps._col0;
            const int col1_max = ((col01 < 0) ? ((colNN < 0) ? _ps._col0 : (colNN - 1)) : col01);
            if (!((line1 == line0) || ((col1 >= col1_min) && (col1 <= col1_max))))
            {
                warn_qFIn((x7E_rA00((x7E_rA00(((x7E_rA00((("Inconsistent indent at closing `"_view + token.value) + "`: expected "_view), fu::i64dec((col1_min - 1))) + ((col1_max > col1_min) ? x7E_rA00(" up to "_view, fu::i64dec((col1_max - 1))) : fu::str{})) + ", got "_view), fu::i64dec((col1 - 1))) + ". Block starts on line "_view), fu::i64dec(line0)) + "."_view), fname, src, tokens, _ps, options);
            };
            break;
        }
        else
        {
            _ps._col0 = token.lcc.col;
            if (!(_ps._col0 > col00))
                warn_qFIn((x7E_rA00((x7E_rA00((x7E_rA00((("Inconsistent indent at `"_view + token.value) + "`: expected more than "_view), fu::i64dec(col00)) + ", got "_view), fu::i64dec(_ps._col0)) + ". Block starts on line "_view), fu::i64dec(line0)) + "."_view), fname, src, tokens, _ps, options);

            if (!((colNN < 0) || (colNN == _ps._col0) || (token.lcc.line == lineNN)))
                warn_qFIn((x7E_rA00((x7E_rA00((x7E_rA00((("Inconsistent indent at `"_view + token.value) + "`: expected exactly "_view), fu::i64dec(colNN)) + ", got "_view), fu::i64dec(_ps._col0)) + ". Previous statement starts on line "_view), fu::i64dec(lineNN)) + "."_view), fname, src, tokens, _ps, options);

            if (colNN < 0)
                colNN = _ps._col0;

            lineNN = token.lcc.line;
            /*MOV*/ Node_JjyR expr = (sTruct ? parseStructItem_qFIn(modid, fname, src, tokens, _ps, options) : (eNum ? parseEnumItem_qFIn(modid, fname, src, tokens, _ps, options) : parseDeferOrStatement_qFIn(modid, fname, src, tokens, _ps, options)));
            if (!((expr.kind != Kind_Idfg_call) || (expr.flags & (Flags_Lzg8_F_CALL_HAS_ARGPARENS | Flags_Lzg8_F_OPERATOR)) || (expr.items.size() > 1) || (tokens[_ps._idx].value == endVal)))
                warn_bpou(idx0, str_uQtsXLlT0n9, fname, src, tokens, _ps, options);

            items.push(static_cast<Node_JjyR&&>(expr));
        };
    };
    return /*NRVO*/ items;
}

static Node_JjyR parseRoot_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, ParserState_Ahey& _ps, const Options_TBgD& options)
{
    consume_qFIn(Kind_Idfg_sof, fu::view<char>{}, fname, src, tokens, _ps);
    _ps._loc = _ps._idx;
    fu::vec<Node_JjyR> _0 {};
    /*MOV*/ Node_JjyR out = (_0 = parseBlockLike_qFIn(Kind_Idfg_eof, fu::view<char>{}, false, false, modid, fname, src, tokens, _ps, options), make_qFIn(Kind_Idfg_root, static_cast<fu::vec<Node_JjyR>&&>(_0), Flags_Lzg8{}, (*(fu::str*)fu::NIL), DeclAsserts_taUG{}, ParseSyntax_Lay2{}, TokenIdx_5581{}, modid, _ps));
    _ps._idx--;
    if (_ps._autopub)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            Node_JjyR& item = out.items.mutref(i);
            const Kind_Idfg k = item.kind;
            if ((k == Kind_Idfg_fn) || (k == Kind_Idfg_let) || (k == Kind_Idfg_struct) || (k == Kind_Idfg_union) || (k == Kind_Idfg_enum) || (k == Kind_Idfg_flags) || (k == Kind_Idfg_primitive))
                set_PUB_qFIn(item.flags, "Module has no pubs, pubbing everything."_view, false, fname, src, tokens, _ps);

        };
    };
    return /*NRVO*/ out;
}

ParserOutput_d14k parse_qFIn(const int modid, fu::vec_range<char> fname, fu::vec_range<char> src, fu::vec_range<Token_6M7a> tokens, const Options_TBgD& options)
{
    ParserState_Ahey _ps {};
    fu_DEFER_IF_OK(if (_ps.mbz._fnDepth)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_fnDepth"_view));
    else if (_ps.mbz._templateDepth)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_templateDepth"_view));
    else if (_ps.mbz._loopDepth)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_loopDepth"_view));
    else if (_ps.mbz._lambdaDepth)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_lambdaDepth"_view));
    else if (_ps.mbz._blockArgDepth)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_blockArgDepth"_view));
    else if (_ps.mbz._TODO_FIX_dollarOk)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_TODO_FIX_dollarOk"_view));
    else if (_ps.mbz._expectedTypeParams)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_expectedTypeParams"_view));
    else if (_ps.mbz._upstreamTypeParams)
        fu::fail(("parser: end-cleanup, not empty: "_view + "_upstreamTypeParams"_view)););
    _ps._autopub = true;
    if (tokens[(tokens.size() - 1)].kind == Kind_Idfg_eof)
    {
        /*MOV*/ Node_JjyR root = parseRoot_qFIn(modid, fname, src, tokens, _ps, options);
        return ParserOutput_d14k { static_cast<Node_JjyR&&>(root), fu::vec<Import_7CIJ>(_ps.imports), fu::vec<fu::str>(_ps.warnings) };
    }
    else
        fail_94Qv(fu::str(str_2te45mOwAV9), fname, src, tokens, _ps);

}

#endif
