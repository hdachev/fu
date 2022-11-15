#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_ParserOutput;
struct s_Node;
enum s_kind: fu::u8;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_Token;
struct s_Options;
struct s_Lint;
typedef int s_SolverNotes;
enum s_Fixity: fu::u8;
struct s_BINOP;
struct s_Map_kjBn1cLsDzk;
fu_STR qKW_9QQZAztz(const fu_STR&);
fu_STR qID_9QQZAztz(const fu_STR&);
[[noreturn]] fu::never FAIL_Xpg08FLx(fu::view<char>, const fu_STR&, const s_Token&, fu::view<char>);
fu_STR ext_hNtHZ3HE(const fu_STR&);
fu_STR dirname_hNtHZ3HE(const fu_STR&);
fu_STR join_rMAWYyxW(fu::view<char>, const fu_STR&);
static s_Flags parseArgsDecl_j9OgT6Cp(fu_VEC<s_Node>&, s_kind, fu::view<char>, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseBlock_VFzTUh5G(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseLabelledStatement_i7bcV3kH(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseLetStmt_sBhia5IQ(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseExpressionStatement_hP2e54Hl(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseLetOrExpressionStatement_BT1ikc90(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseIf_yfcKzvrS(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseParens_tLhL1lAY(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseFor_25PhSSKy(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseWhile_4O3noBKi(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseDoWhile_v0iNUdDQ(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseJump_8jE3ilA1(s_kind, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseTryCatch_OoXyUSlV(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseStructDecl_Eho4Bb98(s_kind, s_Flags, s_DeclAsserts, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseUnwrap_mn5fFAcq(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseTypedef_5K8k8dJz(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
fu_STR qBAD_9QQZAztz(const fu_STR&);
static s_Node parsePub_SSuYnZ4t(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseShadow_npJ3LkYY(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseUsing_kH3NwOtO(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseLax_2GpR2z32(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
bool hasIdentifierChars_LDOhpoIo(fu::view<char>);
static fu_STR getAutoName_02jvS7X0(const s_Node&, fu::view<char>, const fu_STR&, fu::view<s_Token>, int);
static s_Flags parseCallArgs_O8u9ftOd(const fu_STR&, fu_VEC<s_Node>&, bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseCompilerPragma_xfI9qnNo(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseFixityDecl_Eu7ScFTX(s_Flags, s_Fixity, s_DeclAsserts, bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseOperatorDecl_pgLjkBbJ(s_Fixity, s_Flags, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseInlineDecl_f8pnkAF6(s_Flags, s_Flags, s_DeclAsserts, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parsePrimDecl_8E00jib9(s_kind, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseStatement_BXC7j0F3(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseFnBodyBranch_odNL5kNj(bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Flags parseFnBodyOrPattern_DBNYoZfi(fu_VEC<s_Node>&, bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseFnDecl_cont_xLYEfBoK(const fu_STR&, s_Flags, s_DeclAsserts, bool, const fu_STR&, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseFnDecl_wNuU6qma(s_Flags, s_Fixity, s_DeclAsserts, bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parsePrefix_QjZZK4vf(fu_STR&&, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseExpressionHead_I2hMPYdD(int, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node tryParseBinary_2BkjD5x8(const s_Node&, const fu_STR&, int, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node tryParseExpressionTail_tZ9znSX3(const s_Node&, int, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseExpression_gnHamxm0(int, int, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseUnaryExpression_WcvysbOf(int, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseTypeAnnot_yzL88RQF(bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node tryPopTypeAnnot_wmsd9YBC(bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseLet_oLLxdM7f(bool, bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static s_Node parseStructItem_FOkoQug8(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);
static fu_VEC<s_Node> parseBlockLike_EK3yhfCG(s_kind, fu::view<char>, bool, bool, int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, bool&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&, fu_VEC<fu_STR>&);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
{
    s_kind_sof = 1u,
    s_kind_err = 2u,
    s_kind_eof = 3u,
    s_kind_id = 4u,
    s_kind_op = 5u,
    s_kind_int = 6u,
    s_kind_real = 7u,
    s_kind_char = 8u,
    s_kind_str = 9u,
    s_kind_bool = 10u,
    s_kind_copy = 11u,
    s_kind_move = 12u,
    s_kind_arrlit = 13u,
    s_kind_definit = 14u,
    s_kind_empty = 15u,
    s_kind_void = 16u,
    s_kind_not = 17u,
    s_kind_call = 18u,
    s_kind_argid = 19u,
    s_kind_root = 20u,
    s_kind_block = 21u,
    s_kind_if = 22u,
    s_kind_or = 23u,
    s_kind_and = 24u,
    s_kind_loop = 25u,
    s_kind_jump = 26u,
    s_kind___far_jump = 27u,
    s_kind_defer = 28u,
    s_kind_try = 29u,
    s_kind_let = 30u,
    s_kind_letdef = 31u,
    s_kind_typedef = 32u,
    s_kind_typecast = 33u,
    s_kind_typeassert = 34u,
    s_kind_typeparam = 35u,
    s_kind_unwrap = 36u,
    s_kind_pragma = 37u,
    s_kind_break = 38u,
    s_kind_return = 39u,
    s_kind_continue = 40u,
    s_kind_import = 41u,
    s_kind_addroffn = 42u,
    s_kind_forfieldsof = 43u,
    s_kind_struct = 44u,
    s_kind_union = 45u,
    s_kind_primitive = 46u,
    s_kind_flags = 47u,
    s_kind_enum = 48u,
    s_kind_members = 49u,
    s_kind_fndef = 50u,
    s_kind_fn = 51u,
    s_kind_fnbranch = 52u,
    s_kind_pattern = 53u,
    s_kind_typeunion = 54u,
    s_kind_typetag = 55u,
    s_kind___relaxed = 56u,
    s_kind___convert = 57u,
    s_kind___no_kind_yet = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
};
                                #endif

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = s_DeclAsserts(1u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = s_DeclAsserts(2u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_TRIVIAL = s_DeclAsserts(4u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = s_DeclAsserts(8u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = s_DeclAsserts(16u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_FX = s_DeclAsserts(32u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = s_DeclAsserts(64u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOTHROW = s_DeclAsserts(128u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCRASH = s_DeclAsserts(256u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOIO = s_DeclAsserts(512u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_FAST = s_DeclAsserts(1024u);

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_TRIVIAL
    | s_DeclAsserts_A_PURE
    | s_DeclAsserts_A_PURE_CTX
    | s_DeclAsserts_A_PURE_FX
    | s_DeclAsserts_A_NOFLOW
    | s_DeclAsserts_A_NOTHROW
    | s_DeclAsserts_A_NOCRASH
    | s_DeclAsserts_A_NOIO
    | s_DeclAsserts_A_FAST;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = s_ParseSyntax(1u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = s_ParseSyntax(2u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = s_ParseSyntax(4u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = s_ParseSyntax(8u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_ID
    | s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_SEMI
    | s_ParseSyntax_PS_DISCARD;
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 2u;
inline constexpr s_Flags s_Flags_F_ACCESS = 4u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 8u;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 16u;
inline constexpr s_Flags s_Flags_F_LAX = 32u;
inline constexpr s_Flags s_Flags_F_ARG = 64u;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 128u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 256u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 512u;
inline constexpr s_Flags s_Flags_F_MUT = 1024u;
inline constexpr s_Flags s_Flags_F_REF = 2048u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 4096u;
inline constexpr s_Flags s_Flags_F_USING = 8192u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 16384u;
inline constexpr s_Flags s_Flags_F_SHADOW = 32768u;
inline constexpr s_Flags s_Flags_F_PUB = 65536u;
inline constexpr s_Flags s_Flags_F_EXTERN = 131072u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 262144u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 524288u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 1048576u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 2097152u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 4194304u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 8388608u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 16777216u;
inline constexpr s_Flags s_Flags_F_INLINE = 33554432u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 67108864u;
inline constexpr s_Flags s_Flags_F_INJECTED = 134217728u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
    | s_Flags_F_MOVED_FROM
    | s_Flags_F_CONVERSION
    | s_Flags_F_OPT_ARG
    | s_Flags_F_MUT
    | s_Flags_F_REF
    | s_Flags_F_IMPLICIT
    | s_Flags_F_USING
    | s_Flags_F_MUSTNAME
    | s_Flags_F_SHADOW
    | s_Flags_F_PUB
    | s_Flags_F_EXTERN
    | s_Flags_F_HOTSWAP
    | s_Flags_F_PREDICATE
    | s_Flags_F_NAMED_ARGS
    | s_Flags_F_OOE_RTL
    | s_Flags_F_REST_ARG
    | s_Flags_F_RELAXABLE_REF
    | s_Flags_F_TEMPLATE
    | s_Flags_F_INLINE
    | s_Flags_F_LAMBDA
    | s_Flags_F_INJECTED;
                                #endif

                                #ifndef DEF_s_TokenIdx
                                #define DEF_s_TokenIdx
struct s_TokenIdx
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

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    s_kind kind;
    s_DeclAsserts asserts;
    s_ParseSyntax syntax;
    s_Flags flags;
    fu_STR value;
    fu_VEC<s_Node> items;
    s_TokenIdx token;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ParserOutput
                                #define DEF_s_ParserOutput
struct s_ParserOutput
{
    s_Node root;
    fu_VEC<fu_STR> fuzimports;
    fu_VEC<fu_STR> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
            || warnings
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_kind kind;
    fu_STR value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lint
                                #define DEF_s_Lint
struct s_Lint
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

                                #ifndef DEF_s_SolverNotes
                                #define DEF_s_SolverNotes
inline constexpr s_SolverNotes s_SolverNotes_N_FnRecursion = 1;
inline constexpr s_SolverNotes s_SolverNotes_N_FnResolve = 2;
inline constexpr s_SolverNotes s_SolverNotes_N_FnReopen = 4;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeRecursion = 8;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeResolve = 16;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeReopen = 32;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCode = 64;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCall = 128;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLet = 256;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadIfCond = 512;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadIfCons = 1024;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadArrlit = 2048;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLoopInit = 4096;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadConv = 8192;
inline constexpr s_SolverNotes s_SolverNotes_N_NonTrivAutoCopy = 16384;
inline constexpr s_SolverNotes s_SolverNotes_N_RelaxRespec = 32768;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedImplicit = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedCall = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedDefer = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedStmt = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_BckSoftRisk = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 268435456;

inline constexpr s_SolverNotes MASK_s_SolverNotes
    = s_SolverNotes_N_FnRecursion
    | s_SolverNotes_N_FnResolve
    | s_SolverNotes_N_FnReopen
    | s_SolverNotes_N_TypeRecursion
    | s_SolverNotes_N_TypeResolve
    | s_SolverNotes_N_TypeReopen
    | s_SolverNotes_N_DeadCode
    | s_SolverNotes_N_DeadCall
    | s_SolverNotes_N_DeadLet
    | s_SolverNotes_N_DeadIfCond
    | s_SolverNotes_N_DeadIfCons
    | s_SolverNotes_N_DeadArrlit
    | s_SolverNotes_N_DeadLoopInit
    | s_SolverNotes_N_DeadConv
    | s_SolverNotes_N_NonTrivAutoCopy
    | s_SolverNotes_N_RelaxRespec
    | s_SolverNotes_N_UnusedImplicit
    | s_SolverNotes_N_UnusedCall
    | s_SolverNotes_N_UnusedDefer
    | s_SolverNotes_N_UnusedStmt
    | s_SolverNotes_N_UnusedTry
    | s_SolverNotes_N_UnusedAndOr
    | s_SolverNotes_N_UnusedIfElse
    | s_SolverNotes_N_UnusedArrlit
    | s_SolverNotes_N_BckSoftRisk
    | s_SolverNotes_N_BckMustSeq
    | s_SolverNotes_N_MoveMustSeq
    | s_SolverNotes_N_SD_HasStaticInit
    | s_SolverNotes_N_SD_ExternPrivates;
                                #endif

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
{
    s_Lint lint;
    s_SolverNotes break_notes;
    unsigned dev;
    unsigned shuffle;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
            || shuffle
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Fixity
                                #define DEF_s_Fixity
enum s_Fixity: fu::u8
{
    s_Fixity_Infix = 1u,
    s_Fixity_Prefix = 2u,
    s_Fixity_Postfix = 3u,
};
                                #endif

                                #ifndef DEF_s_Map_kjBn1cLsDzk
                                #define DEF_s_Map_kjBn1cLsDzk
struct s_Map_kjBn1cLsDzk
{
    fu_VEC<fu_STR> keys;
    fu_VEC<int> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    s_Map_kjBn1cLsDzk PRECEDENCE;
    fu_VEC<bool> RIGHT_TO_LEFT;
    explicit operator bool() const noexcept
    {
        return false
            || PRECEDENCE
            || RIGHT_TO_LEFT
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_P_RESET
                                #define DEF_P_RESET
inline constexpr int P_RESET = 1000;
                                #endif

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_str_v3b7EcLtghl
                                #define DEF_str_v3b7EcLtghl
inline fu_STR str_v3b7EcLt(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
    else if (n == s_kind_id)
        return "id"_fu;
    else if (n == s_kind_op)
        return "op"_fu;
    else if (n == s_kind_int)
        return "int"_fu;
    else if (n == s_kind_real)
        return "real"_fu;
    else if (n == s_kind_char)
        return "char"_fu;
    else if (n == s_kind_str)
        return "str"_fu;
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
    else if (n == s_kind_not)
        return "not"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
    else if (n == s_kind_if)
    {
        return "if"_fu;
    }
    else if (n == s_kind_or)
        return "or"_fu;
    else if (n == s_kind_and)
        return "and"_fu;
    else if (n == s_kind_loop)
        return "loop"_fu;
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind_typedef)
        return "typedef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_kind_struct)
        return "struct"_fu;
    else if (n == s_kind_union)
        return "union"_fu;
    else if (n == s_kind_primitive)
        return "primitive"_fu;
    else if (n == s_kind_flags)
        return "flags"_fu;
    else if (n == s_kind_enum)
        return "enum"_fu;
    else if (n == s_kind_members)
        return "members"_fu;
    else if (n == s_kind_fndef)
        return "fndef"_fu;
    else if (n == s_kind_fn)
        return "fn"_fu;
    else if (n == s_kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_kind_pattern)
        return "pattern"_fu;
    else if (n == s_kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_kind_typetag)
        return "typetag"_fu;
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
    else if (n == s_kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_kind_type)
        return "type"_fu;
    else if (n == s_kind_var)
        return "var"_fu;
    else if (n == s_kind_field)
        return "field"_fu;
    else if (n == s_kind_enumv)
        return "enumv"_fu;
    else if (n == s_kind_template)
        return "template"_fu;
    else if (n == s_kind___native)
        return "__native"_fu;
    else if (n == s_kind_inline)
        return "inline"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

[[noreturn]] static fu::never fail_JO9dEL1d(fu_STR&& reason, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_Xpg08FLx(fname, src, token, reason);
}

static const s_Token& consume_c7e2rgCu(const s_kind kind, const fu_STR& value, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    }
    else
    {
        fail_JO9dEL1d(((((("Expected "_fu + qKW_9QQZAztz(str_v3b7EcLt(kind))) + (value && (kind == token.kind) ? (" "_fu + qID_9QQZAztz(value)) : fu_STR{})) + "\n\t     got "_fu) + qKW_9QQZAztz(str_v3b7EcLt(token.kind))) + (value && (kind == token.kind) ? (" "_fu + qID_9QQZAztz(token.value)) : fu_STR{})), fname, src, tokens, _idx);
    };
}

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_compose_1npJvXeo(fu_STR&& reason, fu::view<char> fname, fu::view<s_Token> tokens, const int _idx, const int _loc)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? x7E_sTZRmMq1((x7E_sTZRmMq1("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    return (((fname + " "_fu) + addr) + ":\n\t"_fu) + reason;
}

static void warn_VL8yqZ26(const fu_STR& reason, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, const int _idx, const int _loc, fu_VEC<fu_STR>& warnings)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_JO9dEL1d(fu_STR(reason), fname, src, tokens, _idx);
    else
        warnings += fail_compose_1npJvXeo(fu_STR(reason), fname, tokens, _idx, _loc);

}

static const s_Token& tryConsume_fazT8FmH(const s_kind kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}

                                #ifndef DEF_starts_Nz2mqu34wT8
                                #define DEF_starts_Nz2mqu34wT8
inline bool starts_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_has_51aX1qKygWk
                                #define DEF_has_51aX1qKygWk
inline bool has_51aX1qKy(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR registerImport_NJYN6UaQ(/*MOV*/ fu_STR&& value, const fu_STR& fname, fu_VEC<fu_STR>& fuzimports)
{
    if (!ext_hNtHZ3HE(value))
        value += ".fu"_fu;

    fu_STR dir = dirname_hNtHZ3HE(fname);
    value = (starts_Nz2mqu34(value, "."_fu) ? join_rMAWYyxW(dir, value) : ((dir + '\v') + value));
    if (!has_51aX1qKy(fuzimports, value))
        fuzimports.push(fu_STR(value));

    return static_cast<fu_STR&&>(value);
}

static s_Node make_i1nVWkko(const s_kind kind, const fu_VEC<s_Node>& items, const s_Flags flags, const fu_STR& value, const s_DeclAsserts asserts, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return s_Node { s_kind(kind), s_DeclAsserts(asserts), s_ParseSyntax(syntax), s_Flags(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static s_Node createCall_TzJJ3oXO(const fu_STR& id, const s_Flags flags, const fu_VEC<s_Node>& args, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_call, args, flags, id, s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node createRead_7uKkqLnE(const fu_STR& id, const s_Flags flags, const int modid, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx, const int _loc)
{
    if ((id == "true"_fu) || (id == "false"_fu))
    {
        return make_i1nVWkko(s_kind_bool, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        return createCall_TzJJ3oXO((id ? id : fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx)), flags, (*(const fu_VEC<s_Node>*)fu::NIL), s_ParseSyntax_PS_ID, modid, _loc);
    };
}

                                #ifndef DEF_P_PREFIX_UNARY
                                #define DEF_P_PREFIX_UNARY
inline constexpr int P_PREFIX_UNARY = 1;
                                #endif

                                #ifndef DEF_M_LINT_ENSURE_INDENT
                                #define DEF_M_LINT_ENSURE_INDENT
inline constexpr int M_LINT_ENSURE_INDENT = (1 << 1);
                                #endif

static s_Node createLeaf_cvYJhWCl(const s_kind kind, const fu_STR& value, const int modid, const int _loc)
{
    return make_i1nVWkko(kind, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_grow_if_oob_FLtdxZanmo8
                                #define DEF_grow_if_oob_FLtdxZanmo8
inline bool& grow_if_oob_FLtdxZan(fu_VEC<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_update_yTkD5RZLhCk
                                #define DEF_update_yTkD5RZLhCk
inline bool update_yTkD5RZL(const fu_STR& item, const int extra, s_Map_kjBn1cLsDzk& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(_.keys[i], item);
        if (cmp == 0)
        {
            _.vals.mutref(i) = int(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item));
    _.vals.insert(lo, int(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_UcC09MedB84
                                #define DEF_set_UcC09MedB84
inline bool set_UcC09Med(s_Map_kjBn1cLsDzk& _, const fu_STR& key, const int value)
{
    return update_yTkD5RZL(key, value, _);
}
                                #endif

static void binop_G44QXms9(fu::view<fu_STR> ops, s_BINOP& out, int& precedence, const bool rightToLeft)
{
    precedence++;
    if (precedence < 64)
    {
        grow_if_oob_FLtdxZan(out.RIGHT_TO_LEFT, precedence) = bool(rightToLeft);
        for (int i = 0; i < ops.size(); i++)
            set_UcC09Med(out.PRECEDENCE, ops[i], precedence);

    }
    else
        fu::fail("Assertion failed: precedence < 64"_fu);

}

static s_BINOP setupOperators_J2h3fYmf()
{
    /*MOV*/ s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_G44QXms9((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<2, fu_STR> { "+"_fu, "-"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<2, fu_STR> { "<<"_fu, ">>"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<1, fu_STR> { "&"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<1, fu_STR> { "^"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<1, fu_STR> { "|"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<1, fu_STR> { "~"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<2, fu_STR> { "<=>"_fu, "<>"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<2, fu_STR> { "=>"_fu, "->"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<5, fu_STR> { "<"_fu, "<="_fu, ">"_fu, ">="_fu, "<=>"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<2, fu_STR> { "=="_fu, "!="_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<1, fu_STR> { "&&"_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<1, fu_STR> { "||"_fu }), out, precedence, rightToLeft);
    rightToLeft = true;
    binop_G44QXms9((fu::slate<17, fu_STR> { "?"_fu, "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), out, precedence, rightToLeft);
    binop_G44QXms9((fu::slate<1, fu_STR> { "<|"_fu }), out, precedence, rightToLeft);
    rightToLeft = false;
    binop_G44QXms9((fu::slate<1, fu_STR> { "|>"_fu }), out, precedence, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1008) = setupOperators_J2h3fYmf();

                                #ifndef DEF_has_4F6M0s9rPCj
                                #define DEF_has_4F6M0s9rPCj
inline bool has_4F6M0s9r(fu::view<fu_STR> keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(keys[i], item);
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

                                #ifndef DEF_has_kYrdmE0zcQi
                                #define DEF_has_kYrdmE0zcQi
inline bool has_kYrdmE0z(const s_Map_kjBn1cLsDzk& _, fu::view<char> key)
{
    return has_4F6M0s9r(_.keys, key);
}
                                #endif

static const fu_VEC<fu_STR> PREFIX fu_INIT_PRIORITY(1008) = fu_VEC<fu_STR> { fu::slate<10, fu_STR> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static void tryParseTypeParamsDecl_FKkv7IrL(fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& _expectedTypeParams)
{
    if (tryConsume_fazT8FmH(s_kind_op, "!"_fu, tokens, _idx))
    {
        if (tryConsume_fazT8FmH(s_kind_op, "<"_fu, tokens, _idx))
        {
            bool first = true;
            for (; ; )
            {
                if (tryConsume_fazT8FmH(s_kind_op, ">"_fu, tokens, _idx))
                    break;
                else
                {
                    if (!first)
                        consume_c7e2rgCu(s_kind_op, ","_fu, fname, src, tokens, _idx);

                    first = false;
                    const fu_STR& id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
                    _expectedTypeParams += fu_STR(id);
                };
            };
        }
        else
        {
            const fu_STR& id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
            _expectedTypeParams += fu_STR(id);
        };
    };
}

static s_Node createAddrOfFn_RajRDQGB(const fu_STR& name, const s_Flags flags, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_addroffn, (*(const fu_VEC<s_Node>*)fu::NIL), flags, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Flags parseArgsDecl_j9OgT6Cp(fu_VEC<s_Node>& outArgs, const s_kind endk, fu::view<char> endv, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    bool first = true;
    s_Flags outFlags {};
    fu_VEC<s_Node> implicit {};
    bool defaults = false;
    int firstDefault = -1;
    _dollarAuto++;
    _TODO_FIX_dollarOk = true;
    const int dollars0 = _dollars.size();
    for (; ; )
    {
        if (tryConsume_fazT8FmH(endk, endv, tokens, _idx))
            break;
        else
        {
            if (!first)
                consume_c7e2rgCu(s_kind_op, ","_fu, fname, src, tokens, _idx);

            first = false;
            const bool isInline = !!tryConsume_fazT8FmH(s_kind_id, "inline"_fu, tokens, _idx);
            int insertAt = -1;
            /*MOV*/ s_Node arg = parseLet_oLLxdM7f(true, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            if ((_dollars.size() > dollars0) || (arg.items[LET_TYPE].kind == s_kind_typeunion))
                arg.flags |= s_Flags_F_TEMPLATE;

            if (isInline)
            {
                arg.flags |= s_Flags_F_INLINE;
                outFlags |= s_Flags_F_INLINE;
            };
            if (arg.items[LET_INIT])
            {
                if (arg.flags & s_Flags_F_IMPLICIT)
                    fail_JO9dEL1d("TODO default implicit arguments"_fu, fname, src, tokens, _idx);
                else
                {
                    defaults = true;
                    firstDefault = outArgs.size();
                };
            }
            else if (defaults)
            {
                if (!(arg.flags & s_Flags_F_MUSTNAME))
                    fail_JO9dEL1d("TODO non-trailing default arguments"_fu, fname, src, tokens, _idx);
                else
                {
                    insertAt = firstDefault;
                    firstDefault++;
                };
            }
            else if (!arg.items[LET_TYPE])
                arg.flags |= s_Flags_F_TEMPLATE;

            arg.flags |= s_Flags_F_ARG;
            outFlags |= (arg.flags & s_Flags_F_TEMPLATE);
            if (arg.flags & s_Flags_F_IMPLICIT)
                implicit.push(static_cast<s_Node&&>(arg));
            else if (insertAt > 0)
                outArgs.insert(insertAt, static_cast<s_Node&&>(arg));
            else
                outArgs.push(static_cast<s_Node&&>(arg));

        };
    };
    _dollarAuto--;
    _TODO_FIX_dollarOk = false;
    if (implicit)
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(s_Node(implicit[i]));
;
    return outFlags;
}

                                #ifndef DEF_if_last_P1M39QT4jne
                                #define DEF_if_last_P1M39QT4jne
inline const s_Node& if_last_P1M39QT4(fu::view<s_Node> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Node*)fu::NIL);
}
                                #endif

static s_Node createBlock_N9ssWIHw(fu_VEC<s_Node>&& items, const fu_STR& label, const int modid, const int _loc)
{
    if (if_last_P1M39QT4(items).syntax & s_ParseSyntax_PS_DISCARD)
    {
        items += make_i1nVWkko(s_kind_void, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    };
    return make_i1nVWkko(s_kind_block, items, s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseBlock_VFzTUh5G(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    fu_VEC<s_Node> _0 {};
    return (_0 = parseBlockLike_EK3yhfCG(s_kind_op, "}"_fu, false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings), createBlock_N9ssWIHw(static_cast<fu_VEC<s_Node>&&>(_0), (*(const fu_STR*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_i7bcV3kH(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const fu_STR& label = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
    /*MOV*/ s_Node stmt = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if ((stmt.kind == s_kind_loop) || (stmt.kind == s_kind_block))
    {
        if (stmt.value)
            fail_JO9dEL1d((((("Label "_fu + qID_9QQZAztz(label)) + ": statement already labeled as "_fu) + qID_9QQZAztz(stmt.value)) + "."_fu), fname, src, tokens, _idx);
        else
        {
            stmt.value = label;
            return /*NRVO*/ stmt;
        };
    }
    else
    {
        return createBlock_N9ssWIHw(fu_VEC<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(stmt) } }, label, modid, _loc);
    };
}

static bool softSemi_xx4OdEt7(fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, const int _loc, const int _col0, fu_VEC<fu_STR>& warnings)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_op)
    {
        if (peek.value == ";"_fu)
        {
            _idx++;
            return true;
        }
        else if ((peek.value == "}"_fu) || (peek.value == ")"_fu))
            return false;

    }
    else if (peek.col == _col0)
        return false;

    warn_VL8yqZ26((("Missing semicollon before `"_fu + peek.value) + "`."_fu), fname, src, tokens, options, _idx, _loc, warnings);
    return false;
}

static s_Node parseLetStmt_sBhia5IQ(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node ret = parseLet_oLLxdM7f(false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return /*NRVO*/ ret;
}

                                #ifndef DEF_M_LAMBDA_STMT_OK
                                #define DEF_M_LAMBDA_STMT_OK
inline constexpr int M_LAMBDA_STMT_OK = (1 << 2);
                                #endif

static s_Node pipelineLeft_LxRUq4Cm(/*MOV*/ s_Node&& left, const s_Node& right, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx)
{
    if (left.kind != s_kind_call)
        fail_JO9dEL1d("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _idx);
    else
    {
        left.items.push(s_Node(right));
        left.syntax &= s_ParseSyntax(~s_ParseSyntax_PS_ID);
        return static_cast<s_Node&&>(left);
    };
}

static s_Node parseExpressionStatement_hP2e54Hl(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node expr = parseExpression_gnHamxm0(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (tryConsume_fazT8FmH(s_kind_op, ":"_fu, tokens, _idx))
    {
        if (!(expr.kind == s_kind_call))
            fail_JO9dEL1d("Cannot pipeline: expression is not a call."_fu, fname, src, tokens, _idx);
        else
        {
            s_Node right = parseExpression_gnHamxm0(P_RESET, M_LAMBDA_STMT_OK, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            return pipelineLeft_LxRUq4Cm(static_cast<s_Node&&>(expr), right, fname, src, tokens, _idx);
        };
    }
    else
    {
        if (softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings))
            expr.syntax |= s_ParseSyntax_PS_DISCARD;

        return /*NRVO*/ expr;
    };
}

static s_Node parseLetOrExpressionStatement_BT1ikc90(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == s_kind_id) && (tokens[_idx].kind == s_kind_id))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_sBhia5IQ(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        else
        {
            if (v == "mut"_fu)
            {
                _idx--;
                return parseLetStmt_sBhia5IQ(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            };
            if (v == "ref"_fu)
            {
                _idx--;
                return parseLetStmt_sBhia5IQ(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            };
            if (v == "implicit"_fu)
            {
                _idx--;
                return parseLetStmt_sBhia5IQ(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            };
        };
    };
    _idx--;
    if (!_fnDepth)
    {
        fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx);
    }
    else
        return parseExpressionStatement_hP2e54Hl(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

}

                                #ifndef DEF_only_ovYeq1jaRea
                                #define DEF_only_ovYeq1jaRea
inline char only_ovYeq1ja(fu::view<char> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createPrefix_YxgkqROk(const fu_STR& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == s_kind_int) || (expr.kind == s_kind_real)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_ovYeq1ja(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    }
    else if (op == "!"_fu)
    {
        return make_i1nVWkko(s_kind_not, fu_VEC<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        return createCall_TzJJ3oXO(op, s_Flags_F_OPERATOR, fu_VEC<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_ParseSyntax{}, modid, _loc);
    };
}

static s_Node createIf_LLmQH9rc(const s_Node& cond, const s_Node& cons, const s_Node& alt, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_if, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node flattenIfSame_L6Q4ibGR(const s_kind kind, const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    const s_kind k_left = left.kind;
    const s_kind k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_i1nVWkko(kind, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node createAnd_C1qNCVa3(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_L6Q4ibGR(s_kind_and, left, right, syntax, modid, _loc);
}

static s_Node parseIf_yfcKzvrS(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == s_kind_id) && (prev.value == "else"_fu)) ? prev : token);
    const s_Token& nOt = tryConsume_fazT8FmH(s_kind_op, "!"_fu, tokens, _idx);
    consume_c7e2rgCu(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node cond = parseLetOrExpressionStatement_BT1ikc90(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_c7e2rgCu(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    if (nOt)
        cond = createPrefix_YxgkqROk("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    const s_Token& eLse = tryConsume_fazT8FmH(s_kind_id, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.line == token_1.line) || (eLse.col == token_1.col)))
        {
            warn_VL8yqZ26((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.col)) + ", got "_fu), fu::i64dec(eLse.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.line)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);
        };
        s_Node alt = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        return createIf_LLmQH9rc(cond, cons, alt, s_ParseSyntax_PS_DISCARD, modid, _loc);
    }
    else
        return createAnd_C1qNCVa3(cond, cons, s_ParseSyntax_PS_DISCARD, modid, _loc);

}

static s_Node parseParens_tLhL1lAY(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node out = parseExpression_gnHamxm0(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    out.syntax |= s_ParseSyntax_PS_PARENS;
    consume_c7e2rgCu(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    return /*NRVO*/ out;
}

static s_Node createLoop_7AEVTRDO(const s_Node& init, const s_Node& pre_cond, const s_Node& body, const s_Node& post_cond, const s_Node& post, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_loop, fu_VEC<s_Node> { fu::slate<5, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(body), s_Node(post_cond), s_Node(post) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseFor_25PhSSKy(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    consume_c7e2rgCu(s_kind_op, "("_fu, fname, src, tokens, _idx);
    if (tryConsume_fazT8FmH(s_kind_id, "fieldname"_fu, tokens, _idx))
    {
        const fu_STR& placeholder = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
        consume_c7e2rgCu(s_kind_op, ":"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node type = parseTypeAnnot_yzL88RQF(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        consume_c7e2rgCu(s_kind_op, ")"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node body = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        return make_i1nVWkko(s_kind_forfieldsof, fu_VEC<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(type), static_cast<s_Node&&>(body) } }, s_Flags{}, placeholder, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        s_Node init = (!tryConsume_fazT8FmH(s_kind_op, ";"_fu, tokens, _idx) ? parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Node{});
        if (init && (init.kind != s_kind_let))
            fail_JO9dEL1d((x7E_sTZRmMq1("`for` expects a `let` statement, got a `"_fu, str_v3b7EcLt(init.kind)) + "`."_fu), fname, src, tokens, _idx);
        else
        {
            s_Node pre_cond = (!tryConsume_fazT8FmH(s_kind_op, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_BT1ikc90(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Node{});
            const s_Token& token = tokens[_idx];
            s_Node post = (!((token.kind == s_kind_op) && (token.value == ")"_fu)) ? parseParens_tLhL1lAY(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : ((void)consume_c7e2rgCu(s_kind_op, ")"_fu, fname, src, tokens, _idx), s_Node{}));
            s_Node body = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            return createLoop_7AEVTRDO(init, pre_cond, body, (*(const s_Node*)fu::NIL), post, modid, _loc);
        };
    };
}

static s_Node parseWhile_4O3noBKi(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    consume_c7e2rgCu(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node pre_cond = parseLetOrExpressionStatement_BT1ikc90(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_c7e2rgCu(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    s_Node body = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    return createLoop_7AEVTRDO((*(const s_Node*)fu::NIL), pre_cond, body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_v0iNUdDQ(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    s_Node body = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_c7e2rgCu(s_kind_id, "while"_fu, fname, src, tokens, _idx);
    consume_c7e2rgCu(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node post_cond = parseLetOrExpressionStatement_BT1ikc90(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_c7e2rgCu(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return createLoop_7AEVTRDO((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, post_cond, (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node createJump_kpGVDNAP(const s_kind kind, const fu_STR& label, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_i1nVWkko(kind, (expr ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } } : fu_VEC<s_Node>{}), flags, label, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseJump_8jE3ilA1(const s_kind kind, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if (_fnDepth > 0)
    {
        const fu_STR& label = (tryConsume_fazT8FmH(s_kind_op, ":"_fu, tokens, _idx) ? consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value : (*(const fu_STR*)fu::NIL));
        s_Node expr {};
        if (!tryConsume_fazT8FmH(s_kind_op, ";"_fu, tokens, _idx))
        {
            expr = parseExpression_gnHamxm0(P_RESET, M_LINT_ENSURE_INDENT, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings);
        };
        return createJump_kpGVDNAP(kind, label, expr, s_Flags{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx);
    };
}

static s_Node createLet_1BdXHekQ(const fu_STR& id, const s_Node& type, const s_Node& init, const s_Flags flags, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_let, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseCatchErrvar_yWJ5qBqq(const int modid, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, int& _idx, const int _loc)
{
    const fu_STR& id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
    return createLet_1BdXHekQ(id, createRead_7uKkqLnE("string"_fu, s_Flags{}, modid, fname, src, tokens, _idx, _loc), s_Node{}, s_Flags{}, modid, _loc);
}

static s_Node parseTryCatch_OoXyUSlV(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if (_fnDepth > 0)
    {
        /*MOV*/ s_Node tRy = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        consume_c7e2rgCu(s_kind_id, "catch"_fu, fname, src, tokens, _idx);
        consume_c7e2rgCu(s_kind_op, "("_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node err = parseCatchErrvar_yWJ5qBqq(modid, fname, src, tokens, _idx, _loc);
        consume_c7e2rgCu(s_kind_op, ")"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node cAtch = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        return make_i1nVWkko(s_kind_try, fu_VEC<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(tRy), static_cast<s_Node&&>(err), static_cast<s_Node&&>(cAtch) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx);
    };
}

                                #ifndef DEF_each_4xZnzormGcd
                                #define DEF_each_4xZnzormGcd
inline void each_4xZnzorm(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        s_Node& item = a.mutref(i);
        if (item.kind == s_kind_let)
            item.flags |= s_Flags_F_PREDICATE;

    };
}
                                #endif

static s_Node parseStructDecl_Eho4Bb98(const s_kind kind, const s_Flags flags, const s_DeclAsserts asserts, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const fu_STR& name = tryConsume_fazT8FmH(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    consume_c7e2rgCu(s_kind_op, "{"_fu, fname, src, tokens, _idx);
    fu_VEC<s_Node> items = parseBlockLike_EK3yhfCG(s_kind_op, "}"_fu, true, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    { {
        for (int i = 0; i < items.size(); i++)
        {
            const s_Node& item = items[i];
            if ((item.kind == s_kind_let) && (item.flags & s_Flags_F_PREDICATE))
                goto BL_1;

        };
        each_4xZnzorm(items);
      } BL_1:;
    };
    return make_i1nVWkko(kind, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node{}, make_i1nVWkko(s_kind_members, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc) } }, flags, name, asserts, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseUnwrap_mn5fFAcq(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node stmt = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (stmt.kind == s_kind_block)
    {
        stmt.items += make_i1nVWkko(s_kind_unwrap, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
        return /*NRVO*/ stmt;
    }
    else
        fail_JO9dEL1d((("Unwrap only works for blocks, this is a "_fu + qKW_9QQZAztz(str_v3b7EcLt(stmt.kind))) + "."_fu), fname, src, tokens, _idx);

}

static s_Node parseTypedef_5K8k8dJz(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const fu_STR& name = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
    consume_c7e2rgCu(s_kind_op, "="_fu, fname, src, tokens, _idx);
    /*MOV*/ s_Node annot = parseTypeAnnot_yzL88RQF(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return make_i1nVWkko(s_kind_typedef, fu_VEC<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(annot) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static void set_PUB_XyUSTnBU(s_Flags& flags, const fu_STR& extra, const bool autopub_ok, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx, bool& _autopub)
{
    if (flags & s_Flags_F_SHADOW)
        fail_JO9dEL1d((((("Cannot "_fu + qBAD_9QQZAztz("pub"_fu)) + " a "_fu) + qKW_9QQZAztz("shadow"_fu)) + (extra ? (": "_fu + extra) : "."_fu)), fname, src, tokens, _idx);
    else
    {
        flags |= s_Flags_F_PUB;
        if (!autopub_ok)
            _autopub = false;

    };
}

static s_Node parsePub_SSuYnZ4t(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if (_fnDepth)
        fail_JO9dEL1d((((("Cannot "_fu + qBAD_9QQZAztz("pub"_fu)) + " from within a "_fu) + qKW_9QQZAztz("fn"_fu)) + "."_fu), fname, src, tokens, _idx);
    else
    {
        /*MOV*/ s_Node out = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        set_PUB_XyUSTnBU(out.flags, (*(const fu_STR*)fu::NIL), (out.kind == s_kind_import), fname, src, tokens, _idx, _autopub);
        return /*NRVO*/ out;
    };
}

static s_Node parseShadow_npJ3LkYY(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node out = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (out.flags & s_Flags_F_PUB)
        fail_JO9dEL1d((((("Cannot "_fu + qBAD_9QQZAztz("shadow"_fu)) + " a "_fu) + qKW_9QQZAztz("pub"_fu)) + "."_fu), fname, src, tokens, _idx);
    else
    {
        out.flags |= s_Flags_F_SHADOW;
        return /*NRVO*/ out;
    };
}

static s_Node parseUsing_kH3NwOtO(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node out = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (out.kind == s_kind_fn)
        out.flags |= s_Flags_F_CONVERSION;
    else if (out.kind == s_kind_let)
        out.flags |= s_Flags_F_USING;
    else
        fail_JO9dEL1d((qBAD_9QQZAztz("using"_fu) + " cannot be used here."_fu), fname, src, tokens, _idx);

    if (out.flags & s_Flags_F_OPERATOR)
        fail_JO9dEL1d((qBAD_9QQZAztz("using"_fu) + " cannot be used on operator functions."_fu), fname, src, tokens, _idx);
    else
        return /*NRVO*/ out;

}

static s_Node parseLax_2GpR2z32(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node out = parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if ((out.kind == s_kind_let) || (out.kind == s_kind_fn))
    {
        out.flags |= s_Flags_F_LAX;
        return /*NRVO*/ out;
    }
    else
        fail_JO9dEL1d((qBAD_9QQZAztz("lax"_fu) + " cannot be used here."_fu), fname, src, tokens, _idx);

}

static s_Node parseImport_p7RJ1mpx(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, const int _loc, const int _col0, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    fu_STR value { tryConsume_fazT8FmH(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (value)
        while (tryConsume_fazT8FmH(s_kind_op, "::"_fu, tokens, _idx))
            value += ("/"_fu + consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value);

    else
        value = consume_c7e2rgCu(s_kind_str, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;

    softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    value = registerImport_NJYN6UaQ(fu_STR(value), fname, fuzimports);
    return make_i1nVWkko(s_kind_import, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static void softComma_nmrnLsXh(fu::view<char> endop, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, const int _loc, fu_VEC<fu_STR>& warnings)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_op)
    {
        if (peek.value == ","_fu)
        {
            _idx++;
            return;
        }
        else if (peek.value == endop)
            return;

    };
    if ((peek.kind == s_kind_str) != (tokens[(_idx - 1)].kind == s_kind_str))
        return;
    else
        warn_VL8yqZ26((("Missing comma before `"_fu + peek.value) + "`."_fu), fname, src, tokens, options, _idx, _loc, warnings);

}

                                #ifndef DEF_max_F7KakSWb5Tl
                                #define DEF_max_F7KakSWb5Tl
inline int max_F7KakSWb(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

static fu_STR getAutoName_02jvS7X0(const s_Node& expr, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx)
{
    if ((expr.kind == s_kind_call) && hasIdentifierChars_LDOhpoIo(expr.value))
        return fu_STR(expr.value);
    else if (expr.items)
    {
        const int i = (((expr.kind == s_kind_and) && (expr.items.size() - 1)) ? ((expr.kind == s_kind_if) ? 1 : int{}) : 0);
        return getAutoName_02jvS7X0(expr.items[i], fname, src, tokens, _idx);
    }
    else
        fail_JO9dEL1d("Can't :autoname this expression."_fu, fname, src, tokens, _idx);

}

static s_Node createArgID_oYbefVzf(const fu_STR& id, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_argid, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Flags parseCallArgs_O8u9ftOd(const fu_STR& endop, fu_VEC<s_Node>& out_args, const bool experimental_sliceAnnots, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    s_Flags flags {};
    const int col00 = _col0;
    bool first = true;
    for (; ; )
    {
        if (experimental_sliceAnnots && tryConsume_fazT8FmH(s_kind_op, ";"_fu, tokens, _idx))
        {
            consume_c7e2rgCu(s_kind_op, endop, fname, src, tokens, _idx);
            break;
        }
        else
        {
            if (!first)
                softComma_nmrnLsXh(endop, fname, src, tokens, options, _idx, _loc, warnings);

            if (tryConsume_fazT8FmH(s_kind_op, endop, tokens, _idx))
                break;
            else
            {
                first = false;
                fu_STR name {};
                bool autoName = false;
                bool optional = false;
                const s_Token& tok0 = tokens[_idx];
                _col0 = ((tok0.line > tokens[(_idx - 1)].line) ? max_F7KakSWb(tok0.col, col00) : col00);
                if ((tok0.kind == s_kind_op) && (tok0.value == ":"_fu))
                {
                    autoName = true;
                    _idx += 1;
                }
                else if (tok0.kind == s_kind_id)
                {
                    const s_Token& tok1 = tokens[(_idx + 1)];
                    if (tok1.kind == s_kind_op)
                    {
                        if (tok1.value == ":"_fu)
                        {
                            name = tok0.value;
                            _idx += 2;
                        }
                        else if (tok1.value == "?"_fu)
                        {
                            const s_Token& tok2 = tokens[(_idx + 2)];
                            if ((tok2.kind == s_kind_op) && (tok2.value == ":"_fu))
                            {
                                optional = true;
                                name = tok0.value;
                                _idx += 3;
                            };
                        };
                    };
                };
                /*MOV*/ s_Node expr = parseExpression_gnHamxm0(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
                if (autoName)
                    name = getAutoName_02jvS7X0(expr, fname, src, tokens, _idx);

                if (name)
                    flags |= s_Flags_F_NAMED_ARGS;

                out_args.push((name ? createArgID_oYbefVzf(name, expr, (optional ? s_Flags_F_OPT_ARG : s_Flags{}), modid, _loc) : static_cast<s_Node&&>(expr)));
            };
        };
    };
    _col0 = col00;
    return flags;
}

static s_Node parseCompilerPragma_xfI9qnNo(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const fu_STR& value = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
    fu_VEC<s_Node> items {};
    if (value != "break"_fu)
    {
        consume_c7e2rgCu(s_kind_op, "("_fu, fname, src, tokens, _idx);
        parseCallArgs_O8u9ftOd(")"_fu, items, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    };
    return make_i1nVWkko(s_kind_pragma, items, s_Flags{}, value, s_DeclAsserts{}, (softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings) ? s_ParseSyntax_PS_DISCARD : s_ParseSyntax{}), modid, _loc);
}

static s_Node parseFixityDecl_Eu7ScFTX(const s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    consume_c7e2rgCu(s_kind_id, "fn"_fu, fname, src, tokens, _idx);
    return parseFnDecl_wNuU6qma(s_Flags(flags), fixity, asserts, expr, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseOperatorDecl_pgLjkBbJ(const s_Fixity fixity, const s_Flags flags, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if (fixity)
    {
        return parseFixityDecl_Eu7ScFTX(flags, fixity, s_DeclAsserts{}, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    }
    else
        fail_JO9dEL1d("Falsy fixity."_fu, fname, src, tokens, _idx);

}

static s_Node parseInlineDecl_f8pnkAF6(s_Flags flags, const s_Flags F, const s_DeclAsserts asserts, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    flags |= F;
    fu::view<char> v = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
    if (v == "infix"_fu)
        return parseOperatorDecl_pgLjkBbJ(s_Fixity_Infix, flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else if (v == "prefix"_fu)
        return parseOperatorDecl_pgLjkBbJ(s_Fixity_Prefix, flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else if (v == "postfix"_fu)
        return parseOperatorDecl_pgLjkBbJ(s_Fixity_Postfix, flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
    {
        _idx--;
        return parseFixityDecl_Eu7ScFTX(flags, s_Fixity{}, asserts, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    };
}

static s_Node parsePrimDecl_8E00jib9(const s_kind kind, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const fu_STR& name = tryConsume_fazT8FmH(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    /*MOV*/ s_Node annot = tryPopTypeAnnot_wmsd9YBC(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    fu_VEC<s_Node> items = (tryConsume_fazT8FmH(s_kind_op, "{"_fu, tokens, _idx) ? parseBlockLike_EK3yhfCG(s_kind_op, "}"_fu, false, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : fu_VEC<s_Node>{});
    if ((kind != s_kind_enum) && (kind != s_kind_flags))
    {
        if (!(annot))
            fail_JO9dEL1d((qKW_9QQZAztz("primitive"_fu) + " declarations require a base type annotation."_fu), fname, src, tokens, _idx);

    };
    return make_i1nVWkko(kind, fu_VEC<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(annot), (items ? make_i1nVWkko(s_kind_members, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc) : s_Node{}) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static void add_qY3YhcnX(const s_DeclAsserts assert, s_DeclAsserts& asserts, const fu_STR& v, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx)
{
    if (asserts & assert)
        fail_JO9dEL1d(("Dulicate assertion: "_fu + qKW_9QQZAztz(v)), fname, src, tokens, _idx);
    else
        asserts |= assert;

}

static void add_zQ0M2y8h(const s_Flags flag, s_Flags& flags, const fu_STR& v, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx)
{
    if (flags & flag)
    {
        fail_JO9dEL1d(("Duplicate qualifier: "_fu + qKW_9QQZAztz(v)), fname, src, tokens, _idx);
    }
    else
        flags |= flag;

}

static s_Node parseExoticDecl_w5BwMk6P(s_Flags flags, s_DeclAsserts asserts, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    for (; ; )
    {
        const fu_STR& v = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
        if (v == "pure"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_PURE, asserts, v, fname, src, tokens, _idx);
        else if (v == "purectx"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_PURE_CTX, asserts, v, fname, src, tokens, _idx);
        else if (v == "purefx"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_PURE_FX, asserts, v, fname, src, tokens, _idx);
        else if (v == "novec"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_NOVEC, asserts, v, fname, src, tokens, _idx);
        else if (v == "noflow"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_NOFLOW, asserts, v, fname, src, tokens, _idx);
        else if (v == "nothrow"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_NOTHROW, asserts, v, fname, src, tokens, _idx);
        else if (v == "nocrash"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_NOCRASH, asserts, v, fname, src, tokens, _idx);
        else if (v == "noio"_fu)
            add_qY3YhcnX(s_DeclAsserts_A_NOIO, asserts, v, fname, src, tokens, _idx);
        else if (v == "extern"_fu)
            add_zQ0M2y8h(s_Flags_F_EXTERN, flags, v, fname, src, tokens, _idx);
        else if (v == "hotswap"_fu)
            add_zQ0M2y8h(s_Flags_F_HOTSWAP, flags, v, fname, src, tokens, _idx);
        else if (v == "fn"_fu)
        {
            _idx--;
            return parseInlineDecl_f8pnkAF6(s_Flags{}, flags, s_DeclAsserts(asserts), modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else
        {
            fail_JO9dEL1d(("Unknown qualifier: "_fu + qKW_9QQZAztz(v)), fname, src, tokens, _idx);
        };
    };
}

static s_Node parseNoCopy_AyyALCFZ(const s_DeclAsserts asserts, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    consume_c7e2rgCu(s_kind_id, "struct"_fu, fname, src, tokens, _idx);
    return parseStructDecl_Eho4Bb98(s_kind_struct, s_Flags{}, asserts, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseStatement_BXC7j0F3(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_loc = _idx++)])) ? *_0 : fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx));
    if (token.kind == s_kind_op)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_VFzTUh5G(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        else if (v == ":"_fu)
            return parseLabelledStatement_i7bcV3kH(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    }
    else if (token.kind == s_kind_id)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_yfcKzvrS(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "for"_fu)
                return parseFor_25PhSSKy(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "while"_fu)
                return parseWhile_4O3noBKi(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "do"_fu)
                return parseDoWhile_v0iNUdDQ(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "return"_fu)
                return parseJump_8jE3ilA1(s_kind_return, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "break"_fu)
                return parseJump_8jE3ilA1(s_kind_break, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "continue"_fu)
                return parseJump_8jE3ilA1(s_kind_continue, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "try"_fu)
                return parseTryCatch_OoXyUSlV(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        };
        if ((peek.kind == s_kind_op) && (peek.value == "{"_fu))
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_Eho4Bb98(s_kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_Eho4Bb98(s_kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "unwrap"_fu)
                return parseUnwrap_mn5fFAcq(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        };
        if ((v == "fn"_fu) && ((peek.kind == s_kind_id) || !_fnDepth))
        {
            return parseFnDecl_wNuU6qma(s_Flags{}, s_Fixity{}, s_DeclAsserts{}, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else if (peek.kind == s_kind_id)
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_Eho4Bb98(s_kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_Eho4Bb98(s_kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "type"_fu)
                return parseTypedef_5K8k8dJz(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "pub"_fu)
                return parsePub_SSuYnZ4t(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "shadow"_fu)
                return parseShadow_npJ3LkYY(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "using"_fu)
                return parseUsing_kH3NwOtO(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "lax"_fu)
                return parseLax_2GpR2z32(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "import"_fu)
                return parseImport_p7RJ1mpx(modid, fname, src, tokens, options, _idx, _loc, _col0, fuzimports, warnings);
            else if (v == "pragma"_fu)
                return parseCompilerPragma_xfI9qnNo(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "inline"_fu)
            {
                return parseInlineDecl_f8pnkAF6(s_Flags{}, s_Flags_F_INLINE, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "infix"_fu)
            {
                return parseOperatorDecl_pgLjkBbJ(s_Fixity_Infix, s_Flags{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "prefix"_fu)
            {
                return parseOperatorDecl_pgLjkBbJ(s_Fixity_Prefix, s_Flags{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "postfix"_fu)
            {
                return parseOperatorDecl_pgLjkBbJ(s_Fixity_Postfix, s_Flags{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "primitive"_fu)
                return parsePrimDecl_8E00jib9(s_kind_primitive, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "flags"_fu)
                return parsePrimDecl_8E00jib9(s_kind_flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "enum"_fu)
                return parsePrimDecl_8E00jib9(s_kind_enum, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "pure"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_PURE, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "purectx"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_PURE_CTX, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "purefx"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_PURE_FX, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "novec"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_NOVEC, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "noflow"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_NOFLOW, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "nothrow"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_NOTHROW, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "nocrash"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_NOCRASH, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "noio"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_NOIO, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "fast"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags{}, s_DeclAsserts_A_FAST, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "nocopy"_fu)
                return parseNoCopy_AyyALCFZ(s_DeclAsserts_A_NOCOPY, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "trivial"_fu)
                return parseNoCopy_AyyALCFZ(s_DeclAsserts_A_TRIVIAL, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "extern"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags_F_EXTERN, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "hotswap"_fu)
            {
                return parseExoticDecl_w5BwMk6P(s_Flags_F_HOTSWAP, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            };
        };
    };
    _idx--;
    return parseLetOrExpressionStatement_BT1ikc90(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseFnBodyBranch_odNL5kNj(const bool expr, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    tryConsume_fazT8FmH(s_kind_op, "="_fu, tokens, _idx);
    if (expr)
        return parseExpression_gnHamxm0(_precedence, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
        return parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

}

static void parseBranch_ybkhx7AC(const bool noCond, fu_VEC<s_Node>& branches, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    _TODO_FIX_dollarOk = true;
    /*MOV*/ s_Node cond = (!noCond ? parseUnaryExpression_WcvysbOf(0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Node{});
    _TODO_FIX_dollarOk = false;
    /*MOV*/ s_Node type = tryPopTypeAnnot_wmsd9YBC(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    /*MOV*/ s_Node cons = parseFnBodyBranch_odNL5kNj(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    branches.push(make_i1nVWkko(s_kind_fnbranch, fu_VEC<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(cond), static_cast<s_Node&&>(type), static_cast<s_Node&&>(cons) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
}

static s_Flags parseFnBodyOrPattern_DBNYoZfi(fu_VEC<s_Node>& out_push_body, const bool expr, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Flags flags {};
    /*MOV*/ s_Node body {};
    if (!expr && tryConsume_fazT8FmH(s_kind_id, "case"_fu, tokens, _idx))
    {
        fu_VEC<s_Node> branches {};
        do
            parseBranch_ybkhx7AC(false, branches, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        while (tryConsume_fazT8FmH(s_kind_id, "case"_fu, tokens, _idx));
        if (tryConsume_fazT8FmH(s_kind_id, "default"_fu, tokens, _idx))
            parseBranch_ybkhx7AC(true, branches, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        body = make_i1nVWkko(s_kind_pattern, branches, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
        body = parseFnBodyBranch_odNL5kNj(expr, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    out_push_body.push(static_cast<s_Node&&>(body));
    return flags;
}

static s_Node parseFnDecl_cont_xLYEfBoK(const fu_STR& name, s_Flags flags, const s_DeclAsserts asserts, const bool expr, const fu_STR& endv, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    fu_VEC<s_Node> items {};
    _fnDepth++;
    const int dollars0 = _dollars.size();
    const bool dollarsOk0 = _TODO_FIX_dollarOk;
    fu_DEFER(
    {
        _fnDepth--;
        _dollars.shrink(dollars0);
        _TODO_FIX_dollarOk = dollarsOk0;
    });
    flags |= (endv ? parseArgsDecl_j9OgT6Cp(items, s_kind_op, endv, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Flags{});
    /*MOV*/ s_Node type = tryPopTypeAnnot_wmsd9YBC(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    const int retIdx = items.size();
    items.push(s_Node(type));
    flags |= parseFnBodyOrPattern_DBNYoZfi(items, expr, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if ((name == "main"_fu) && (_fnDepth == 1))
    {
        if (!type)
        {
            items.mutref(retIdx) = static_cast<s_Node&&>((type = createRead_7uKkqLnE("i32"_fu, s_Flags{}, modid, fname, src, tokens, _idx, _loc)));
        }
        else if ((type.kind != s_kind_call) || (type.value != "i32"_fu) || type.items.size())
            fail_JO9dEL1d("fn main() must return i32."_fu, fname, src, tokens, _idx);

        set_PUB_XyUSTnBU(flags, (*(const fu_STR*)fu::NIL), false, fname, src, tokens, _idx, _autopub);
        flags |= s_Flags_F_EXTERN;
    };
    if (_dollars.size() > dollars0)
        flags |= s_Flags_F_TEMPLATE;

    return make_i1nVWkko(s_kind_fn, items, flags, name, asserts, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseFnDecl_wNuU6qma(s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    fu_STR name { tryConsume_fazT8FmH(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (!name)
    {
        name = consume_c7e2rgCu(s_kind_op, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
        if (fixity == s_Fixity_Postfix)
        {
            if ((name == "++"_fu) || (name == "--"_fu))
                name = ("postfix"_fu + name);
            else
                fail_JO9dEL1d((("No such postfix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        }
        else if (fixity == s_Fixity_Infix)
        {
            if (!(has_kYrdmE0z(BINOP.PRECEDENCE, name)))
                fail_JO9dEL1d((("No such infix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        }
        else if (fixity == s_Fixity_Prefix)
        {
            if (!(has_51aX1qKy(PREFIX, name)))
                fail_JO9dEL1d((("No such prefix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        };
        flags |= s_Flags_F_OPERATOR;
    }
    else if ((flags & s_Flags_F_OPERATOR) || fixity)
        fail_JO9dEL1d((("Not an operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

    fu_VEC<fu_STR> expectedTypedParams0 {};
    std::swap(expectedTypedParams0, _expectedTypeParams);
    fu_DEFER(std::swap(expectedTypedParams0, _expectedTypeParams));
    tryParseTypeParamsDecl_FKkv7IrL(fname, src, tokens, _idx, _expectedTypeParams);
    fu_STR endv = (tryConsume_fazT8FmH(s_kind_op, "("_fu, tokens, _idx) ? ")"_fu : fu_STR{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_RajRDQGB(name, flags, modid, _loc);
        else
            consume_c7e2rgCu(s_kind_op, "="_fu, fname, src, tokens, _idx);

    };
    return parseFnDecl_cont_xLYEfBoK(name, s_Flags(flags), asserts, expr, endv, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node createTypeParam_WW1ekdxz(const fu_STR& value, const int modid, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx, const int _loc, const int _dollarAuto, fu_VEC<fu_STR>& _dollars, const bool _TODO_FIX_dollarOk)
{
    if (!_TODO_FIX_dollarOk)
    {
        return createRead_7uKkqLnE(value, s_Flags{}, modid, fname, src, tokens, _idx, _loc);
    }
    else
    {
        if (!has_51aX1qKy(_dollars, value) && _dollarAuto)
            _dollars.push(fu_STR(value));

        return make_i1nVWkko(s_kind_typeparam, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    };
}

static s_Node createArrayLiteral_yxrYLCwg(const s_Flags argFlags, const fu_VEC<s_Node>& items, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_arrlit, items, argFlags, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseArrayLiteral_zz3vyEl5(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    fu_VEC<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_O8u9ftOd("]"_fu, args, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    return createArrayLiteral_yxrYLCwg(argFlags, args, modid, _loc);
}

static s_Node parseTypeParam_e7mXD5uH(const int modid, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, int& _idx, const int _loc, const int _dollarAuto, fu_VEC<fu_STR>& _dollars, const bool _TODO_FIX_dollarOk)
{
    fu_STR value = ("$"_fu + consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value);
    return createTypeParam_WW1ekdxz(value, modid, fname, src, tokens, _idx, _loc, _dollarAuto, _dollars, _TODO_FIX_dollarOk);
}

static s_Node parseLambda_DZ4e52lX(const bool noArgs_noClosingPipe, const int mode, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if (noArgs_noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_VL8yqZ26("Unparenthesized `|| lambda` within a binary expression."_fu, fname, src, tokens, options, _idx, _loc, warnings);

    fu_STR _0 {};
    fu_STR name = (_0 = (x7E_sTZRmMq1("l_"_fu, fu::i64dec(modid)) + "_"_fu), x7E_sTZRmMq1(static_cast<fu_STR&&>(_0), fu::i64dec(_anonFns++)));
    return parseFnDecl_cont_xLYEfBoK(name, (s_Flags_F_INLINE | s_Flags_F_LAMBDA), s_DeclAsserts{}, !(mode & M_LAMBDA_STMT_OK), (!noArgs_noClosingPipe ? "|"_fu : fu_STR{}), modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node createDefinit_uvv84Qpo(const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_definit, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_only_P1M39QT4jne
                                #define DEF_only_P1M39QT4jne
inline const s_Node& only_P1M39QT4(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createTypeTag_F3stEkxA(const fu_STR& value, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_typetag, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node typeCheck_UNA7tonK(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_typeassert, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseQualifierChain_BQyyPgz0(/*MOV*/ s_Node&& expr, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, int& _idx, const int _loc, fu_VEC<fu_STR>& fuzimports)
{
    if ((expr.kind != s_kind_call) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & s_Flags_F_ACCESS))) || (expr.flags & s_Flags_F_COMPOUND_ID))
    {
        _idx--;
        fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx);
    }
    else
    {
        expr.flags |= s_Flags_F_COMPOUND_ID;
        fu_STR path { expr.value };
        for (; ; )
        {
            const fu_STR& id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
            if (!tryConsume_fazT8FmH(s_kind_op, "::"_fu, tokens, _idx))
            {
                if ((path == "is"_fu) && (expr.items.size() == 1))
                {
                    const s_Node& left = only_P1M39QT4(expr.items);
                    s_Node right = createTypeTag_F3stEkxA(id, modid, _loc);
                    return typeCheck_UNA7tonK(left, right, modid, _loc);
                }
                else
                {
                    path = registerImport_NJYN6UaQ(fu_STR(path), fname, fuzimports);
                    expr.value = ((path + "\t"_fu) + id);
                    return static_cast<s_Node&&>(expr);
                };
            }
            else
                path += ("/"_fu + id);

        };
    };
}

                                #ifndef DEF_M_LINT_UNARY_PRECEDENCE
                                #define DEF_M_LINT_UNARY_PRECEDENCE
inline constexpr int M_LINT_UNARY_PRECEDENCE = (1 << 0);
                                #endif

static s_Node parsePrefix_QjZZK4vf(fu_STR&& op, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if (has_51aX1qKy(PREFIX, op))
    {
        if ((op == "&"_fu) && tryConsume_fazT8FmH(s_kind_id, "mut"_fu, tokens, _idx))
            op = "&mut"_fu;

        const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
        s_Node _0 {};
        return (_0 = parseUnaryExpression_WcvysbOf(mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings), createPrefix_YxgkqROk(op, static_cast<s_Node&&>(_0), modid, _loc));
    }
    else
    {
        _idx--;
        fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx);
    };
}

static s_Node parseExpressionHead_I2hMPYdD(const int mode, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Token& token = tokens[_idx++];

    {
        const s_kind k = token.kind;
        const fu_STR& v = token.value;
        if ((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_str) || (k == s_kind_char))
            return createLeaf_cvYJhWCl(k, v, modid, _loc);
        else if (k == s_kind_id)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == s_kind_id)
            {
                if (v == "fn"_fu)
                {
                    return parseFnDecl_wNuU6qma(s_Flags{}, s_Fixity{}, s_DeclAsserts{}, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
                };
            };
            if (_TODO_FIX_dollarOk && has_51aX1qKy(_expectedTypeParams, v))
                return createTypeParam_WW1ekdxz(v, modid, fname, src, tokens, _idx, _loc, _dollarAuto, _dollars, _TODO_FIX_dollarOk);
            else
            {
                return createRead_7uKkqLnE(v, s_Flags{}, modid, fname, src, tokens, _idx, _loc);
            };
        }
        else if (k == s_kind_op)
        {
            if (v == "("_fu)
                return parseParens_tLhL1lAY(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "{"_fu)
                return parseBlock_VFzTUh5G(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "["_fu)
                return parseArrayLiteral_zz3vyEl5(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "$"_fu)
                return parseTypeParam_e7mXD5uH(modid, fname, src, tokens, _idx, _loc, _dollarAuto, _dollars, _TODO_FIX_dollarOk);
            else if (v == "|"_fu)
                return parseLambda_DZ4e52lX(false, mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "||"_fu)
                return parseLambda_DZ4e52lX(true, mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "[]"_fu)
                return createDefinit_uvv84Qpo(modid, _loc);
            else if (v == "::"_fu)
            {
                const fu_STR& id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
                _idx--;
                return parseQualifierChain_BQyyPgz0(createRead_7uKkqLnE(id, s_Flags{}, modid, fname, src, tokens, _idx, _loc), modid, fname, src, tokens, _idx, _loc, fuzimports);
            }
            else if (v == "."_fu)
            {
                const fu_STR& id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
                return createAddrOfFn_RajRDQGB(id, s_Flags_F_ACCESS, modid, _loc);
            }
            else
                return parsePrefix_QjZZK4vf(fu_STR(v), modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        };
    };
    _idx--;
    fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx);
}

static s_Node miss_1LXE9mkV()
{
    return s_Node{};
}

static void lint_gPQTjkN4(const int mode, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, const int _idx, const int _loc, fu_VEC<fu_STR>& warnings)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_VL8yqZ26((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), fname, src, tokens, options, _idx, _loc, warnings);

}

static s_Node parseAccessExpression_Lptttv6b(const s_Node& expr, const int modid, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, int& _idx, const int _loc)
{
    s_Token id { tryConsume_fazT8FmH(s_kind_id, fu::view<char>{}, tokens, _idx) };
    if (!id)
    {
        consume_c7e2rgCu(s_kind_op, "::"_fu, fname, src, tokens, _idx);
        id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx);
        _idx -= 2;
    };
    return createCall_TzJJ3oXO(id.value, s_Flags_F_ACCESS, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseCallExpression_4DvftD2w(const s_Node& expr, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    fu_VEC<s_Node> args {};
    const s_Flags flags = (expr.flags | parseCallArgs_O8u9ftOd(")"_fu, args, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings));
    if ((expr.kind == s_kind_call) && (flags & s_Flags_F_ACCESS))
    {
        const s_Node* _0;
        const s_Node& head = (expr.items && (expr.items.size() == 1) && *(_0 = &(expr.items[0])) ? *_0 : fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx));
        args.unshift(s_Node(head));
        return createCall_TzJJ3oXO((expr.value ? expr.value : fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx)), ((flags & ~s_Flags_F_ACCESS) | s_Flags_F_METHOD), args, s_ParseSyntax{}, modid, _loc);
    }
    else if ((expr.kind == s_kind_call) && s_ParseSyntax((expr.syntax & s_ParseSyntax_PS_ID)))
    {
        return createCall_TzJJ3oXO((expr.value ? expr.value : fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx)), flags, args, s_ParseSyntax((expr.syntax & s_ParseSyntax(~s_ParseSyntax_PS_ID))), modid, _loc);
    }
    else if (expr.kind == s_kind_typeparam)
    {
        return createCall_TzJJ3oXO((expr.value ? expr.value : fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx)), flags, args, s_ParseSyntax{}, modid, _loc);
    }
    else
        fail_JO9dEL1d("TODO dynamic call"_fu, fname, src, tokens, _idx);

}

static s_Node parseIndexExpression_8sgdntNi(const s_Node& expr, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    fu_VEC<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_O8u9ftOd("]"_fu, args, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    args.unshift(s_Node(expr));
    return createCall_TzJJ3oXO("[]"_fu, (argFlags | s_Flags_F_OPERATOR), args, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_get_cf86pP7FCc4
                                #define DEF_get_cf86pP7FCc4
inline int get_cf86pP7F(fu::view<fu_STR> keys, fu::view<char> item, fu::view<int> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_get_kYrdmE0zcQi
                                #define DEF_get_kYrdmE0zcQi
inline int get_kYrdmE0z(const s_Map_kjBn1cLsDzk& _, fu::view<char> key)
{
    return get_cf86pP7F(_.keys, key, _.vals);
}
                                #endif

static s_Node createOr_Bjc9hr6r(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_L6Q4ibGR(s_kind_or, left, right, syntax, modid, _loc);
}

static s_Node pipelineRight_p1HoGNa3(const s_Node& left, /*MOV*/ s_Node&& right, fu::view<char> fname, const fu_STR& src, fu::view<s_Token> tokens, const int _idx)
{
    if (right.kind != s_kind_call)
        fail_JO9dEL1d("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _idx);
    else
    {
        if (right.flags & s_Flags_F_METHOD)
            right.items.insert(1, s_Node(left));
        else
        {
            right.items.unshift(s_Node(left));
        };
        return static_cast<s_Node&&>(right);
    };
}

static s_Node typeCast_ZFNztcVY(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_i1nVWkko(s_kind_typecast, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node tryParseBinary_2BkjD5x8(const s_Node& left, const fu_STR& op, const int p1, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_1LXE9mkV();
    else
    {
        _idx++;
        s_Node mid {};
        if (op == "?"_fu)
        {
            mid = parseExpression_gnHamxm0(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            consume_c7e2rgCu(s_kind_op, ":"_fu, fname, src, tokens, _idx);
        };
        /*MOV*/ s_Node right = parseExpression_gnHamxm0(p1, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        if (mid)
        {
            return createIf_LLmQH9rc(left, mid, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "||"_fu)
        {
            return createOr_Bjc9hr6r(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "&&"_fu)
        {
            return createAnd_C1qNCVa3(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else
        {
            if ((left.kind == s_kind_and) || (left.kind == s_kind_or))
            {
                if (!(left.syntax & s_ParseSyntax_PS_PARENS))
                    warn_VL8yqZ26((((x7E_sTZRmMq1("Unparenthesized `"_fu, str_v3b7EcLt(left.kind)) + "` on the left side of an `"_fu) + op) + "`."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            };
            if (op == "|>"_fu)
                return pipelineRight_p1HoGNa3(left, static_cast<s_Node&&>(right), fname, src, tokens, _idx);
            else if (op == "<|"_fu)
                return pipelineLeft_LxRUq4Cm(s_Node(left), right, fname, src, tokens, _idx);
            else if (op == "->"_fu)
                return typeCheck_UNA7tonK(left, right, modid, _loc);
            else if (op == "=>"_fu)
                return typeCast_ZFNztcVY(left, right, modid, _loc);
            else
            {
                return createCall_TzJJ3oXO(op, s_Flags_F_OPERATOR, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), static_cast<s_Node&&>(right) } }, s_ParseSyntax{}, modid, _loc);
            };
        };
    };
}

static const fu_VEC<fu_STR> POSTFIX fu_INIT_PRIORITY(1008) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "++"_fu, "--"_fu, "[]"_fu } };

static s_Node tryParseExpressionTail_tZ9znSX3(const s_Node& head, const int mode, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Token& token = tokens[_idx++];
    if (token.kind == s_kind_op)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
        {
            _idx--;
            return miss_1LXE9mkV();
        };
        if (v == "."_fu)
        {
            lint_gPQTjkN4(mode, fname, src, tokens, options, _idx, _loc, warnings);
            return parseAccessExpression_Lptttv6b(head, modid, fname, src, tokens, _idx, _loc);
        };
        if (v == "("_fu)
        {
            lint_gPQTjkN4(mode, fname, src, tokens, options, _idx, _loc, warnings);
            return parseCallExpression_4DvftD2w(head, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        };
        if (v == "["_fu)
        {
            lint_gPQTjkN4(mode, fname, src, tokens, options, _idx, _loc, warnings);
            return parseIndexExpression_8sgdntNi(head, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        };
        const int p1 = get_kYrdmE0z(BINOP.PRECEDENCE, v);
        if (p1)
        {
            _idx--;
            return tryParseBinary_2BkjD5x8(head, v, p1, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        };
        if (has_51aX1qKy(POSTFIX, v))
        {
            return createCall_TzJJ3oXO((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu_STR(v)), s_Flags_F_OPERATOR, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, s_ParseSyntax{}, modid, _loc);
        }
        else if (v == "::"_fu)
        {
            return parseQualifierChain_BQyyPgz0(s_Node(head), modid, fname, src, tokens, _idx, _loc, fuzimports);
        };
    };
    _idx--;
    return miss_1LXE9mkV();
}

static s_Node parseExpression_gnHamxm0(const int p1, const int mode, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (!((tokens[_idx].col >= (_col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_VL8yqZ26(x7E_sTZRmMq1((x7E_sTZRmMq1((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].col)), fname, src, tokens, options, _idx, _loc, warnings);

    /*MOV*/ s_Node head = parseExpressionHead_I2hMPYdD(mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_kind_int) || (head.kind == s_kind_real))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_tZ9znSX3(head, mode_1, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.col > col00))
                    warn_VL8yqZ26(x7E_sTZRmMq1((x7E_sTZRmMq1((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.col)), fname, src, tokens, options, _idx, _loc, warnings);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_WcvysbOf(const int mode, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    return parseExpression_gnHamxm0(P_PREFIX_UNARY, mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseTypeAnnot_yzL88RQF(const bool allowTypeUnions, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    /*MOV*/ s_Node res = parseUnaryExpression_WcvysbOf(0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    while (allowTypeUnions && tryConsume_fazT8FmH(s_kind_id, "or"_fu, tokens, _idx))
    {
        if (res.kind != s_kind_typeunion)
        {
            res = make_i1nVWkko(s_kind_typeunion, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(res) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
        };
        res.items += parseUnaryExpression_WcvysbOf(0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    };
    return /*NRVO*/ res;
}

static s_Node tryPopTypeAnnot_wmsd9YBC(const bool allowTypeUnions, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    if (tryConsume_fazT8FmH(s_kind_op, ":"_fu, tokens, _idx))
        return parseTypeAnnot_yzL88RQF(allowTypeUnions, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
        return miss_1LXE9mkV();

}

static s_Node tryParseLetInit_0ZXIJyf9(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    return tryConsume_fazT8FmH(s_kind_op, "="_fu, tokens, _idx) ? parseExpression_gnHamxm0(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Node{};
}

static s_Node parseLet_oLLxdM7f(const bool xqmark, const bool allowTypeUnions, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    s_Flags flags {};
    if (tryConsume_fazT8FmH(s_kind_id, "using"_fu, tokens, _idx))
        flags |= s_Flags_F_USING;

    if (tryConsume_fazT8FmH(s_kind_id, "implicit"_fu, tokens, _idx))
        flags |= s_Flags_F_IMPLICIT;

    if (tryConsume_fazT8FmH(s_kind_id, "lax"_fu, tokens, _idx))
        flags |= s_Flags_F_LAX;

    if (tryConsume_fazT8FmH(s_kind_id, "shadow"_fu, tokens, _idx))
        flags |= s_Flags_F_SHADOW;

    if (tryConsume_fazT8FmH(s_kind_id, "mut"_fu, tokens, _idx))
        flags |= s_Flags_F_MUT;

    if (tryConsume_fazT8FmH(s_kind_id, "ref"_fu, tokens, _idx))
        flags |= s_Flags_F_REF;

    const s_Token& sh_import = tryConsume_fazT8FmH(s_kind_op, "::"_fu, tokens, _idx);
    fu_STR id { consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value };
    if (id == "_"_fu)
        flags |= s_Flags_F_LAX;

    if (xqmark && tryConsume_fazT8FmH(s_kind_op, "!"_fu, tokens, _idx))
    {
        flags |= s_Flags_F_MUSTNAME;
        const fu_STR& inner_id = tryConsume_fazT8FmH(s_kind_id, fu::view<char>{}, tokens, _idx).value;
        if (inner_id)
        {
            flags |= s_Flags_F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    if (xqmark && tryConsume_fazT8FmH(s_kind_op, "."_fu, tokens, _idx))
    {
        flags |= s_Flags_F_COMPOUND_ID;
        id += ("."_fu + consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value);
        while (tryConsume_fazT8FmH(s_kind_op, "::"_fu, tokens, _idx))
            id += ("\t"_fu + consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value);

    };
    if (xqmark && tryConsume_fazT8FmH(s_kind_op, "[]"_fu, tokens, _idx))
        flags |= s_Flags_F_REST_ARG;

    const s_Token& optional = (xqmark ? tryConsume_fazT8FmH(s_kind_op, "?"_fu, tokens, _idx) : (*(const s_Token*)fu::NIL));
    s_Node type = (sh_import ? createRead_7uKkqLnE(((registerImport_NJYN6UaQ(fu_STR(id), fname, fuzimports) + '\t') + id), s_Flags_F_COMPOUND_ID, modid, fname, src, tokens, _idx, _loc) : tryPopTypeAnnot_wmsd9YBC(allowTypeUnions, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings));
    s_Node init = (optional ? createDefinit_uvv84Qpo(modid, _loc) : tryParseLetInit_0ZXIJyf9(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings));
    if ((flags & s_Flags_F_REF) && type)
    {
        if ((type.kind != s_kind_call) || (type.value != "&mut"_fu))
        {
            type = createPrefix_YxgkqROk("&mut"_fu, s_Node(type), modid, _loc);
            flags &= ~s_Flags_F_REF;
        };
    };
    return createLet_1BdXHekQ(id, type, init, flags, modid, _loc);
}

static s_Node parseStructItem_FOkoQug8(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Token& isPredicate = tryConsume_fazT8FmH(s_kind_id, "true"_fu, tokens, _idx);
    /*MOV*/ s_Node member = parseLet_oLLxdM7f(true, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    if (isPredicate)
        member.flags |= s_Flags_F_PREDICATE;

    return /*NRVO*/ member;
}

static s_Node parseEnumItem_coBWIZtd(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const fu_STR& id = consume_c7e2rgCu(s_kind_id, (*(const fu_STR*)fu::NIL), fname, src, tokens, _idx).value;
    s_Node init = tryParseLetInit_0ZXIJyf9(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_xx4OdEt7(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return createLet_1BdXHekQ(id, (*(const s_Node*)fu::NIL), init, s_Flags{}, modid, _loc);
}

static s_Node parseDefer_FUutgpnb(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Token* _0;
    const fu_STR& value = (tryConsume_fazT8FmH(s_kind_op, ":"_fu, tokens, _idx) ? (*(_0 = &(tryConsume_fazT8FmH(s_kind_id, "err"_fu, tokens, _idx))) ? *_0 : consume_c7e2rgCu(s_kind_id, "ok"_fu, fname, src, tokens, _idx)).value : (*(const fu_STR*)fu::NIL));
    if (_fnDepth > 0)
    {
        fu_VEC<s_Node> _1 {};
        return (_1 = fu_VEC<s_Node> { fu::slate<1, s_Node> { parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) } }, make_i1nVWkko(s_kind_defer, static_cast<fu_VEC<s_Node>&&>(_1), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
    }
    else
    {
        _idx--;
        fail_JO9dEL1d(fu_STR{}, fname, src, tokens, _idx);
    };
}

static s_Node parseStatementOrDefer_v2RU7v55(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_id)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
        {
            _idx++;
            return parseDefer_FUutgpnb(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        };
    };
    return parseStatement_BXC7j0F3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static fu_VEC<s_Node> parseBlockLike_EK3yhfCG(const s_kind endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    const int line0 = (_idx ? tokens[(_idx - 1)].line : (*(const int*)fu::NIL));
    const int col00 = _col0;
    int colNN = -1;
    int lineNN = line0;
    /*MOV*/ fu_VEC<s_Node> items {};
    for (; ; )
    {
        const s_Token& token = tokens[_idx];
        if ((token.kind == s_kind_op) && (token.value == ";"_fu))
        {
            _idx++;
            continue;
        }
        else if ((token.kind == endKind) && (token.value == endVal))
        {
            _col0 = col00;
            _idx++;
            const int line1 = token.line;
            const int col1 = token.col;
            if (!((line1 == line0) || (col1 == _col0)))
                warn_VL8yqZ26((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            break;
        }
        else
        {
            _col0 = token.col;
            if (!(_col0 > col00))
                warn_VL8yqZ26((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            if (!((colNN < 0) || (colNN == _col0) || (token.line == lineNN)))
                warn_VL8yqZ26((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            if (colNN < 0)
                colNN = _col0;

            lineNN = token.line;
            /*MOV*/ s_Node expr = (sTruct ? parseStructItem_FOkoQug8(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : (eNum ? parseEnumItem_coBWIZtd(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : parseStatementOrDefer_v2RU7v55(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings)));
            if (!((expr.kind != s_kind_call) || (!(expr.flags & s_Flags_F_ACCESS) && !s_ParseSyntax((expr.syntax & s_ParseSyntax_PS_ID))) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
                warn_VL8yqZ26("Orphan pure-looking expression."_fu, fname, src, tokens, options, _idx, _loc, warnings);

            items.push(static_cast<s_Node&&>(expr));
        };
    };
    return /*NRVO*/ items;
}

static const bool use_AUTOPUB = true;

static s_Node parseRoot_IlwpkzrE(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _expectedTypeParams, fu_VEC<fu_STR>& fuzimports, fu_VEC<fu_STR>& warnings)
{
    consume_c7e2rgCu(s_kind_sof, "sof"_fu, fname, src, tokens, _idx);
    _loc = _idx;
    fu_VEC<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_EK3yhfCG(s_kind_eof, "eof"_fu, false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings), make_i1nVWkko(s_kind_root, static_cast<fu_VEC<s_Node>&&>(_0), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
    _idx--;
    if (use_AUTOPUB && _autopub)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            const s_kind k = item.kind;
            if ((k == s_kind_fn) || (k == s_kind_let) || (k == s_kind_typedef) || (k == s_kind_struct) || (k == s_kind_union) || (k == s_kind_enum) || (k == s_kind_flags) || (k == s_kind_primitive))
                set_PUB_XyUSTnBU(item.flags, "Module has no pubs, pubbing everything."_fu, false, fname, src, tokens, _idx, _autopub);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_ZGSvajvi(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options)
{
    int _idx = 0;
    int _loc = 0;
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    int _dollarAuto = 0;
    fu_VEC<fu_STR> _dollars {};
    int _anonFns = 0;
    bool _autopub = true;
    bool _TODO_FIX_dollarOk = false;
    fu_VEC<fu_STR> _expectedTypeParams {};
    /*MOV*/ fu_VEC<fu_STR> fuzimports {};
    /*MOV*/ fu_VEC<fu_STR> warnings {};
    if (tokens[(tokens.size() - 1)].kind == s_kind_eof)
    {
        /*MOV*/ s_Node root = parseRoot_IlwpkzrE(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        fu_VEC<fu_STR> _0 {};
        return (_0 = static_cast<fu_VEC<fu_STR>&&>(fuzimports), s_ParserOutput { static_cast<s_Node&&>(root), static_cast<fu_VEC<fu_STR>&&>(_0), static_cast<fu_VEC<fu_STR>&&>(warnings) });
    }
    else
        fail_JO9dEL1d("Missing `eof` token."_fu, fname, src, tokens, _idx);

}

#endif
