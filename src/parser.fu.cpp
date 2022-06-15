#include <cstdint>
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

struct s_BINOP;
struct s_Map_guWsCK256I9;
struct s_ParserOutput;
struct s_Node;
enum s_kind: fu::u8;
typedef fu::u8 s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_Token;
struct s_Options;
struct s_Lint;
typedef int s_SolverNotes;
[[noreturn]] fu::never FAIL_0z9LDufF(fu::view<char>, const fu_STR&, const s_Token&, fu::view<char>);
fu_STR ext_KqRBcvmh(const fu_STR&);
fu_STR dirname_KqRBcvmh(const fu_STR&);
fu_STR join_ZK3gqGz2(fu::view<char>, const fu_STR&);
static s_Flags parseArgsDecl_r3FtvUhf(fu_VEC<s_Node>&, s_kind, fu::view<char>, int&, bool&, fu_VEC<fu_STR>&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, bool&, int&);
static s_Node parseBlock_w8weawxV(int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
fu_STR qID_ThvlUeXJ(const fu_STR&);
static s_Node parseLabelledStatement_FXLbHnJP(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseLetStmt_c3hW2Tju(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseExpressionStatement_EIOdFVIs(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseLetOrExpressionStatement_DdFjGIbD(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseIf_8VR2OlHS(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseParens_v2UsROmX(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseFor_qF1h0T6b(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseWhile_GwmgJxaG(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseDoWhile_eq5HoWCS(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseJump_oWYnDeY9(s_kind, int&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseTryCatch_cmTtQMAT(int&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseStructDecl_RaR2PUzZ(s_kind, s_Flags, s_DeclAsserts, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
fu_STR qKW_ThvlUeXJ(const fu_STR&);
static s_Node parseUnwrap_ON6W20xj(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseTypedef_RDg8CuBL(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parsePub_I1k5eXXY(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseShadow_poFd2J8F(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseFixityDecl_TRDN4EOK(s_Flags, s_DeclAsserts, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parseInlineDecl_hDjPCzAd(s_Flags, s_Flags, s_DeclAsserts, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parseConversionDecl_vgAV1VUa(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
bool hasIdentifierChars_XKihkJM1(fu::view<char>);
static fu_STR getAutoName_jHqP2eRW(const s_Node&, fu::view<s_Token>, int, fu::view<char>, const fu_STR&);
static s_Flags parseCallArgs_RWdlCJNY(fu::view<char>, fu_VEC<s_Node>&, bool, int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, const s_Options&, int&, int&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseCompilerPragma_zuOgxxOU(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parsePrimDecl_6j4Rrxea(s_kind, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseStatement_bJMCpw6H(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseFnBodyBranch_cUvjrBnt(bool, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Flags parseFnBodyOrPattern_V7XD0gWV(fu_VEC<s_Node>&, bool, fu::view<s_Token>, int&, bool&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseFnDecl_cont_RdGq3Sp6(const fu_STR&, s_Flags, s_DeclAsserts, bool, const fu_STR&, int&, fu_VEC<fu_STR>&, bool&, int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parseFnDecl_SiWbcxeV(s_Flags, s_DeclAsserts, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parsePrefix_4RkgMInW(fu_STR&&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseExpressionHead_KzZPILGW(int, fu::view<s_Token>, int&, int, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node tryParseBinary_qHkLaW8R(const s_Node&, const fu_STR&, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node tryParseExpressionTail_WYJSGANz(const s_Node&, int, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, int, int&, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseExpression_dfg6HqKH(int, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseUnaryExpression_eJteqtOd(int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseTypeAnnot_V73n1It4(bool, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node tryPopTypeAnnot_uMMPNwX0(bool, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseLet_DsLwvNMB(bool, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseStructItem_TM6sReP8(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static fu_VEC<s_Node> parseBlockLike_2WMu7g1T(s_kind, fu::view<char>, bool, bool, int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);

                                #ifndef DEF_s_Map_guWsCK256I9
                                #define DEF_s_Map_guWsCK256I9
struct s_Map_guWsCK256I9
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
    s_Map_guWsCK256I9 PRECEDENCE;
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

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
{
    s_kind_sof = 1,
    s_kind_id = 2,
    s_kind_op = 3,
    s_kind_int = 4,
    s_kind_real = 5,
    s_kind_char = 6,
    s_kind_str = 7,
    s_kind_err = 8,
    s_kind_eof = 9,
    s_kind_root = 10,
    s_kind_block = 11,
    s_kind_argid = 12,
    s_kind_let = 13,
    s_kind_call = 14,
    s_kind_arrlit = 15,
    s_kind_if = 16,
    s_kind_or = 17,
    s_kind_and = 18,
    s_kind_loop = 19,
    s_kind_break = 20,
    s_kind_return = 21,
    s_kind_continue = 22,
    s_kind_bool = 23,
    s_kind_definit = 24,
    s_kind_import = 25,
    s_kind_defer = 26,
    s_kind_try = 27,
    s_kind_typedef = 28,
    s_kind_typecast = 29,
    s_kind_typeassert = 30,
    s_kind_typeparam = 31,
    s_kind_addroffn = 32,
    s_kind_unwrap = 33,
    s_kind_forfieldsof = 34,
    s_kind_pragma = 35,
    s_kind_void = 36,
    s_kind_struct = 37,
    s_kind_union = 38,
    s_kind_primitive = 39,
    s_kind_flags = 40,
    s_kind_enum = 41,
    s_kind_members = 42,
    s_kind_fn = 43,
    s_kind_fnbranch = 44,
    s_kind_pattern = 45,
    s_kind_typeunion = 46,
    s_kind_typetag = 47,
    s_kind_jump = 48,
    s_kind_empty = 49,
    s_kind_letdef = 50,
    s_kind___relaxed = 51,
    s_kind___convert = 52,
    s_kind_fndef = 53,
    s_kind_copy = 54,
    s_kind_move = 55,
    s_kind___far_jump = 56,
    s_kind___no_kind_yet = 57,
    s_kind_type = 58,
    s_kind_var = 59,
    s_kind_field = 60,
    s_kind_enumv = 61,
    s_kind_template = 62,
    s_kind___native = 63,
    s_kind_inline = 64,
};
                                #endif

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = 1;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = 2;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC_MUT = 4;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = 8;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = 16;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = 32;

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_NOVEC_MUT
    | s_DeclAsserts_A_PURE
    | s_DeclAsserts_A_PURE_CTX
    | s_DeclAsserts_A_NOFLOW;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = 1;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = 2;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = 4;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = 8;

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_ID
    | s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_SEMI
    | s_ParseSyntax_PS_DISCARD;
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1;
inline constexpr s_Flags s_Flags_F_INFIX = 2;
inline constexpr s_Flags s_Flags_F_PREFIX = 4;
inline constexpr s_Flags s_Flags_F_POSTFIX = 8;
inline constexpr s_Flags s_Flags_F_ACCESS = 16;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 32;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 64;
inline constexpr s_Flags s_Flags_F_LAX = 128;
inline constexpr s_Flags s_Flags_F_ARG = 256;
inline constexpr s_Flags s_Flags_F_OPERATOR = 512;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 1024;
inline constexpr s_Flags s_Flags_F_CONVERSION = 2048;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 4096;
inline constexpr s_Flags s_Flags_F_MUT = 8192;
inline constexpr s_Flags s_Flags_F_REF = 16384;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 32768;
inline constexpr s_Flags s_Flags_F_USING = 65536;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 131072;
inline constexpr s_Flags s_Flags_F_SHADOW = 262144;
inline constexpr s_Flags s_Flags_F_PUB = 524288;
inline constexpr s_Flags s_Flags_F_EXTERN = 1048576;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 2097152;
inline constexpr s_Flags s_Flags_F_PREDICATE = 4194304;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 8388608;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 16777216;
inline constexpr s_Flags s_Flags_F_REST_ARG = 33554432;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 67108864;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 134217728;
inline constexpr s_Flags s_Flags_F_INLINE = 268435456;
inline constexpr s_Flags s_Flags_F_LAMBDA = 536870912;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_INFIX
    | s_Flags_F_PREFIX
    | s_Flags_F_POSTFIX
    | s_Flags_F_ACCESS
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
    | s_Flags_F_OPERATOR
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
    | s_Flags_F_LAMBDA;
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
inline constexpr s_SolverNotes s_SolverNotes_N_BckSoftRisk = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 1048576;

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
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static const bool use_AUTOPUB = true;

                                #ifndef DEF_P_RESET
                                #define DEF_P_RESET
inline constexpr int P_RESET = 1000;
                                #endif

                                #ifndef DEF_P_PREFIX_UNARY
                                #define DEF_P_PREFIX_UNARY
inline constexpr int P_PREFIX_UNARY = 1;
                                #endif

static const fu_VEC<fu_STR> PREFIX fu_INIT_PRIORITY(1008) = fu_VEC<fu_STR> { fu::slate<10, fu_STR> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static const fu_VEC<fu_STR> POSTFIX fu_INIT_PRIORITY(1008) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "++"_fu, "--"_fu, "[]"_fu } };

                                #ifndef DEF_grow_if_oob_cT6m9Dl9k2i
                                #define DEF_grow_if_oob_cT6m9Dl9k2i
inline bool& grow_if_oob_cT6m9Dl9(fu_VEC<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_x3Cx3E_gcxVH86XFM7
                                #define DEF_x3Cx3E_gcxVH86XFM7
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_hvR4gqODwpa
                                #define DEF_x3Cx3E_hvR4gqODwpa
inline int x3Cx3E_hvR4gqOD(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YP7BiSZZZOd
                                #define DEF_x3Cx3E_YP7BiSZZZOd
inline int x3Cx3E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hvR4gqOD(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_update_ye7zdtnfWt6
                                #define DEF_update_ye7zdtnfWt6
inline bool update_ye7zdtnf(const fu_STR& item, const int extra, s_Map_guWsCK256I9& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(_.keys[i], item);
        if (cmp == 0)
        {
            _.vals.mutref(i) = extra;
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    _.keys.insert(lo, fu_STR(item));
    _.vals.insert(lo, int(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_hagIi8N3Ic6
                                #define DEF_set_hagIi8N3Ic6
inline bool set_hagIi8N3(s_Map_guWsCK256I9& _, const fu_STR& key, const int value)
{
    return update_ye7zdtnf(key, value, _);
}
                                #endif

static void binop_C7Q8AlEL(fu::view<fu_STR> ops, int& precedence, s_BINOP& out, const bool rightToLeft)
{
    precedence++;
    if (precedence < 64)
    {
        grow_if_oob_cT6m9Dl9(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
        for (int i = 0; i < ops.size(); i++)
            set_hagIi8N3(out.PRECEDENCE, ops[i], precedence);

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
    binop_C7Q8AlEL((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<2, fu_STR> { "+"_fu, "-"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<2, fu_STR> { "<<"_fu, ">>"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "&"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "^"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "|"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "~"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<2, fu_STR> { "<=>"_fu, "<>"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<2, fu_STR> { "=>"_fu, "->"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<5, fu_STR> { "<"_fu, "<="_fu, ">"_fu, ">="_fu, "<=>"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<2, fu_STR> { "=="_fu, "!="_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "&&"_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "||"_fu }), precedence, out, rightToLeft);
    rightToLeft = true;
    binop_C7Q8AlEL((fu::slate<17, fu_STR> { "?"_fu, "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), precedence, out, rightToLeft);
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "<|"_fu }), precedence, out, rightToLeft);
    rightToLeft = false;
    binop_C7Q8AlEL((fu::slate<1, fu_STR> { "|>"_fu }), precedence, out, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1008) = setupOperators_J2h3fYmf();

                                #ifndef DEF_M_LINT_UNARY_PRECEDENCE
                                #define DEF_M_LINT_UNARY_PRECEDENCE
inline constexpr int M_LINT_UNARY_PRECEDENCE = (1 << 0);
                                #endif

                                #ifndef DEF_M_LINT_ENSURE_INDENT
                                #define DEF_M_LINT_ENSURE_INDENT
inline constexpr int M_LINT_ENSURE_INDENT = (1 << 1);
                                #endif

                                #ifndef DEF_M_LAMBDA_STMT_OK
                                #define DEF_M_LAMBDA_STMT_OK
inline constexpr int M_LAMBDA_STMT_OK = (1 << 2);
                                #endif

                                #ifndef DEF_x3Dx3D_YP7BiSZZZOd
                                #define DEF_x3Dx3D_YP7BiSZZZOd
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never fail_5GoI0pZ9(fu_STR&& reason, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_0z9LDufF(fname, src, token, reason);
}

static const s_Token& consume_ALKZlHl5(const s_kind kind, fu::view<char> value, const fu_STR& err, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    }
    else
        fail_5GoI0pZ9((((x7E_YP7BiSZZ(((err ? fu_STR(err) : "Expected"_fu) + " `"_fu), fu::booldec((value || kind))) + "`, got `"_fu) + token.value) + "`."_fu), tokens, _idx, fname, src);

}

static fu_STR fail_compose_rT6D3Jm1(fu_STR&& reason, fu::view<s_Token> tokens, const int _loc, const int _idx, fu::view<char> fname)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? x7E_YP7BiSZZ((x7E_YP7BiSZZ("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    return (((fname + " "_fu) + addr) + ":\n\t"_fu) + reason;
}

static void warn_XYiySt8p(const fu_STR& reason, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_5GoI0pZ9(fu_STR(reason), tokens, _idx, fname, src);
    else
        warnings += fail_compose_rT6D3Jm1(fu_STR(reason), tokens, _loc, _idx, fname);

}

static const s_Token& tryConsume_gmnpPdnE(const s_kind kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
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

                                #ifndef DEF_starts_YP7BiSZZZOd
                                #define DEF_starts_YP7BiSZZZOd
inline bool starts_YP7BiSZZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_has_NaazSXrklU3
                                #define DEF_has_NaazSXrklU3
inline bool has_NaazSXrk(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR registerImport_R7lShVx4(/*MOV*/ fu_STR&& value, const fu_STR& fname, fu_VEC<fu_STR>& fuzimports)
{
    if (!ext_KqRBcvmh(value))
        value += ".fu"_fu;

    fu_STR dir = dirname_KqRBcvmh(fname);
    value = (starts_YP7BiSZZ(value, "."_fu) ? join_ZK3gqGz2(dir, value) : ((dir + '\v') + value));
    if (!has_NaazSXrk(fuzimports, value))
        fuzimports.push(fu_STR(value));

    return static_cast<fu_STR&&>(value);
}

static s_Node make_hB4GfifB(const s_kind kind, const fu_VEC<s_Node>& items, const s_Flags flags, const fu_STR& value, const s_DeclAsserts asserts, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return s_Node { s_kind(kind), s_DeclAsserts(asserts), s_ParseSyntax(syntax), s_Flags(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static s_Node createCall_RKuGJtyA(const fu_STR& id, const s_Flags flags, const fu_VEC<s_Node>& args, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_call, args, flags, id, s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node createRead_iQ0O62U5(const fu_STR& id, const s_Flags flags, const int modid, const int _loc, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if ((id == "true"_fu) || (id == "false"_fu))
    {
        return make_hB4GfifB(s_kind_bool, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        return createCall_RKuGJtyA((id ? id : fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src)), flags, (*(const fu_VEC<s_Node>*)fu::NIL), s_ParseSyntax_PS_ID, modid, _loc);
    };
}

static s_Node createLeaf_WIDsALFm(const s_kind kind, const fu_STR& value, const int modid, const int _loc)
{
    return make_hB4GfifB(kind, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_has_IAp1oy9CzB1
                                #define DEF_has_IAp1oy9CzB1
inline bool has_IAp1oy9C(fu::view<fu_STR> keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return true;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return false;
}
                                #endif

                                #ifndef DEF_has_B2BTURkCwL5
                                #define DEF_has_B2BTURkCwL5
inline bool has_B2BTURkC(const s_Map_guWsCK256I9& _, fu::view<char> key)
{
    return has_IAp1oy9C(_.keys, key);
}
                                #endif

static s_Node createAddrOfFn_7oXKi03f(const fu_STR& name, const s_Flags flags, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_addroffn, (*(const fu_VEC<s_Node>*)fu::NIL), flags, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Flags parseArgsDecl_r3FtvUhf(fu_VEC<s_Node>& outArgs, const s_kind endk, fu::view<char> endv, int& _dollarAuto, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _dollars, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, bool& _hasPUB, int& _anonFns)
{
    bool first = true;
    /*MOV*/ s_Flags outFlags {};
    fu_VEC<s_Node> implicit {};
    bool defaults = false;
    int firstDefault = -1;
    _dollarAuto++;
    _TODO_FIX_dollarOk = true;
    const int dollars0 = _dollars.size();
    for (; ; )
    {
        if (tryConsume_gmnpPdnE(endk, endv, tokens, _idx))
            break;
        else
        {
            if (!first)
                consume_ALKZlHl5(s_kind_op, ","_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);

            first = false;
            const bool isInline = !!tryConsume_gmnpPdnE(s_kind_id, "inline"_fu, tokens, _idx);
            int insertAt = -1;
            /*MOV*/ s_Node arg = parseLet_DsLwvNMB(true, true, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
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
                    fail_5GoI0pZ9("TODO default implicit arguments"_fu, tokens, _idx, fname, src);
                else
                {
                    defaults = true;
                    firstDefault = outArgs.size();
                };
            }
            else if (defaults)
            {
                if (!(arg.flags & s_Flags_F_MUSTNAME))
                    fail_5GoI0pZ9("TODO non-trailing default arguments"_fu, tokens, _idx, fname, src);
                else
                {
                    insertAt = firstDefault;
                    firstDefault++;
                };
            }
            else if (!arg.items[LET_TYPE])
            {
                arg.flags |= s_Flags_F_TEMPLATE;
            };
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
    return /*NRVO*/ outFlags;
}

                                #ifndef DEF_if_last_lpa8XGDfwcf
                                #define DEF_if_last_lpa8XGDfwcf
inline const s_Node& if_last_lpa8XGDf(fu::view<s_Node> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Node*)fu::NIL);
}
                                #endif

static s_Node createBlock_vnd3Gs90(fu_VEC<s_Node>&& items, const fu_STR& label, const int modid, const int _loc)
{
    if (if_last_lpa8XGDf(items).syntax & s_ParseSyntax_PS_DISCARD)
    {
        items += make_hB4GfifB(s_kind_void, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    };
    return make_hB4GfifB(s_kind_block, items, s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseBlock_w8weawxV(int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> _0 {};
    return (_0 = parseBlockLike_2WMu7g1T(s_kind_op, "}"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns), createBlock_vnd3Gs90(static_cast<fu_VEC<s_Node>&&>(_0), (*(const fu_STR*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_FXLbHnJP(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& label = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    /*MOV*/ s_Node stmt = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    if ((stmt.kind == s_kind_loop) || (stmt.kind == s_kind_block))
    {
        if (stmt.value)
            fail_5GoI0pZ9((((("Label "_fu + qID_ThvlUeXJ(label)) + ": statement already labeled as "_fu) + qID_ThvlUeXJ(stmt.value)) + "."_fu), tokens, _idx, fname, src);
        else
        {
            stmt.value = label;
            return /*NRVO*/ stmt;
        };
    }
    else
    {
        return createBlock_vnd3Gs90(fu_VEC<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(stmt) } }, label, modid, _loc);
    };
}

static bool softSemi_yo3Mbaf1(fu::view<s_Token> tokens, int& _idx, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<char> fname, const fu_STR& src, const int _loc)
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

    warn_XYiySt8p((("Missing semicollon before `"_fu + peek.value) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);
    return false;
}

static s_Node parseLetStmt_c3hW2Tju(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node ret = parseLet_DsLwvNMB(false, false, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node pipelineLeft_QkZKDdnc(/*MOV*/ s_Node&& left, const s_Node& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (left.kind != s_kind_call)
        fail_5GoI0pZ9("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);
    else
    {
        left.items.push(s_Node(right));
        left.syntax &= s_ParseSyntax(~s_ParseSyntax_PS_ID);
        return static_cast<s_Node&&>(left);
    };
}

static s_Node parseExpressionStatement_EIOdFVIs(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node expr = parseExpression_dfg6HqKH(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    if (tryConsume_gmnpPdnE(s_kind_op, ":"_fu, tokens, _idx))
    {
        if (!(expr.kind == s_kind_call))
            fail_5GoI0pZ9("Cannot pipeline: expression is not a call."_fu, tokens, _idx, fname, src);
        else
        {
            s_Node right = parseExpression_dfg6HqKH(P_RESET, M_LAMBDA_STMT_OK, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            return pipelineLeft_QkZKDdnc(static_cast<s_Node&&>(expr), right, tokens, _idx, fname, src);
        };
    }
    else
    {
        if (softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc))
            expr.syntax |= s_ParseSyntax_PS_DISCARD;

        return /*NRVO*/ expr;
    };
}

static s_Node parseLetOrExpressionStatement_DdFjGIbD(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == s_kind_id) && (tokens[_idx].kind == s_kind_id))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_c3hW2Tju(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        else
        {
            if (v == "lax"_fu)
            {
                _idx--;
                return parseLetStmt_c3hW2Tju(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            };
            if (v == "mut"_fu)
            {
                _idx--;
                return parseLetStmt_c3hW2Tju(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            };
            if (v == "ref"_fu)
            {
                _idx--;
                return parseLetStmt_c3hW2Tju(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            };
        };
    };
    _idx--;
    if (!_fnDepth)
    {
        fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src);
    }
    else
        return parseExpressionStatement_EIOdFVIs(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

}

                                #ifndef DEF_only_XKihkJM18Pe
                                #define DEF_only_XKihkJM18Pe
inline char only_XKihkJM1(fu::view<char> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createPrefix_rJ95C8dE(const fu_STR& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == s_kind_int) || (expr.kind == s_kind_real)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_XKihkJM1(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    }
    else
    {
        return createCall_RKuGJtyA(op, (s_Flags_F_PREFIX | s_Flags_F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_ParseSyntax{}, modid, _loc);
    };
}

static s_Node createIf_jS02udkS(const s_Node& cond, const s_Node& cons, const s_Node& alt, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_if, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node flattenIfSame_1UNR5IAZ(const s_kind kind, const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    const s_kind k_left = left.kind;
    const s_kind k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_hB4GfifB(kind, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node createAnd_dvGjR5om(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_1UNR5IAZ(s_kind_and, left, right, syntax, modid, _loc);
}

static s_Node parseIf_8VR2OlHS(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == s_kind_id) && (prev.value == "else"_fu)) ? prev : token);
    const s_Token& nOt = tryConsume_gmnpPdnE(s_kind_op, "!"_fu, tokens, _idx);
    consume_ALKZlHl5(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cond = parseLetOrExpressionStatement_DdFjGIbD(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_ALKZlHl5(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (nOt)
        cond = createPrefix_rJ95C8dE("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    const s_Token& eLse = tryConsume_gmnpPdnE(s_kind_id, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.line == token_1.line) || (eLse.col == token_1.col)))
        {
            warn_XYiySt8p((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.col)) + ", got "_fu), fu::i64dec(eLse.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.line)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);
        };
        s_Node alt = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        return createIf_jS02udkS(cond, cons, alt, s_ParseSyntax_PS_DISCARD, modid, _loc);
    }
    else
        return createAnd_dvGjR5om(cond, cons, s_ParseSyntax_PS_DISCARD, modid, _loc);

}

                                #ifndef DEF_str_x2XZ9C2mr79
                                #define DEF_str_x2XZ9C2mr79
inline fu_STR str_x2XZ9C2m(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
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
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
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
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_typedef)
        return "typedef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
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
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
    else if (n == s_kind_fndef)
        return "fndef"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
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

static s_Node parseParens_v2UsROmX(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node out = parseExpression_dfg6HqKH(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    out.syntax |= s_ParseSyntax_PS_PARENS;
    consume_ALKZlHl5(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return /*NRVO*/ out;
}

static s_Node createLoop_M2U5cIaa(const s_Node& init, const s_Node& pre_cond, const s_Node& body, const s_Node& post_cond, const s_Node& post, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_loop, fu_VEC<s_Node> { fu::slate<5, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(body), s_Node(post_cond), s_Node(post) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseFor_qF1h0T6b(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    consume_ALKZlHl5(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (tryConsume_gmnpPdnE(s_kind_id, "fieldname"_fu, tokens, _idx))
    {
        const fu_STR& placeholder = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        consume_ALKZlHl5(s_kind_op, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        /*MOV*/ s_Node type = parseTypeAnnot_V73n1It4(false, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        consume_ALKZlHl5(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        /*MOV*/ s_Node body = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        return make_hB4GfifB(s_kind_forfieldsof, fu_VEC<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(type), static_cast<s_Node&&>(body) } }, s_Flags{}, placeholder, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        s_Node init = (!tryConsume_gmnpPdnE(s_kind_op, ";"_fu, tokens, _idx) ? parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : s_Node{});
        if (init && (init.kind != s_kind_let))
            fail_5GoI0pZ9((x7E_YP7BiSZZ("`for` expects a `let` statement, got a `"_fu, str_x2XZ9C2m(init.kind)) + "`."_fu), tokens, _idx, fname, src);
        else
        {
            s_Node pre_cond = (!tryConsume_gmnpPdnE(s_kind_op, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_DdFjGIbD(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : s_Node{});
            const s_Token& token = tokens[_idx];
            s_Node post = (!((token.kind == s_kind_op) && (token.value == ")"_fu)) ? parseParens_v2UsROmX(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : ((void)(consume_ALKZlHl5(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src) ? void() : void()), s_Node{}));
            s_Node body = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            return createLoop_M2U5cIaa(init, pre_cond, body, (*(const s_Node*)fu::NIL), post, modid, _loc);
        };
    };
}

static s_Node parseWhile_GwmgJxaG(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    consume_ALKZlHl5(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node pre_cond = parseLetOrExpressionStatement_DdFjGIbD(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_ALKZlHl5(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node body = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    return createLoop_M2U5cIaa((*(const s_Node*)fu::NIL), pre_cond, body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_eq5HoWCS(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    s_Node body = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_ALKZlHl5(s_kind_id, "while"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_ALKZlHl5(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node post_cond = parseLetOrExpressionStatement_DdFjGIbD(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_ALKZlHl5(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLoop_M2U5cIaa((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, post_cond, (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node createJump_WGOtmtud(const s_kind kind, const fu_STR& label, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_hB4GfifB(kind, (expr ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } } : fu_VEC<s_Node>{}), flags, label, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseJump_oWYnDeY9(const s_kind kind, int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    if (_fnDepth > 0)
    {
        const fu_STR& label = (tryConsume_gmnpPdnE(s_kind_op, ":"_fu, tokens, _idx) ? consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value : (*(const fu_STR*)fu::NIL));
        s_Node expr {};
        if (!tryConsume_gmnpPdnE(s_kind_op, ";"_fu, tokens, _idx))
        {
            expr = parseExpression_dfg6HqKH(P_RESET, M_LINT_ENSURE_INDENT, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc);
        };
        return createJump_WGOtmtud(kind, label, expr, s_Flags{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src);
    };
}

static s_Node createLet_QMXE6fPO(const fu_STR& id, const s_Node& type, const s_Node& init, const s_Flags flags, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_let, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseCatchErrvar_CPoLEDqE(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    const fu_STR& id = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    return createLet_QMXE6fPO(id, createRead_iQ0O62U5("string"_fu, s_Flags{}, modid, _loc, tokens, _idx, fname, src), s_Node{}, s_Flags{}, modid, _loc);
}

static s_Node parseTryCatch_cmTtQMAT(int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    if (_fnDepth > 0)
    {
        /*MOV*/ s_Node tRy = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        consume_ALKZlHl5(s_kind_id, "catch"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        consume_ALKZlHl5(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        /*MOV*/ s_Node err = parseCatchErrvar_CPoLEDqE(tokens, _idx, fname, src, modid, _loc);
        consume_ALKZlHl5(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        /*MOV*/ s_Node cAtch = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        return make_hB4GfifB(s_kind_try, fu_VEC<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(tRy), static_cast<s_Node&&>(err), static_cast<s_Node&&>(cAtch) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src);
    };
}

                                #ifndef DEF_each_bUVEiTWjCa6
                                #define DEF_each_bUVEiTWjCa6
inline void each_bUVEiTWj(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        s_Node& item = a.mutref(i);
        if (item.kind == s_kind_let)
            item.flags |= s_Flags_F_PREDICATE;

    };
}
                                #endif

static s_Node parseStructDecl_RaR2PUzZ(const s_kind kind, const s_Flags flags, const s_DeclAsserts asserts, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& name = tryConsume_gmnpPdnE(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    consume_ALKZlHl5(s_kind_op, "{"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    fu_VEC<s_Node> items = parseBlockLike_2WMu7g1T(s_kind_op, "}"_fu, true, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

    { {
        for (int i = 0; i < items.size(); i++)
        {
            const s_Node& item = items[i];
            if ((item.kind == s_kind_let) && (item.flags & s_Flags_F_PREDICATE))
                goto BL_1;

        };
        each_bUVEiTWj(items);
      } BL_1:;
    };
    return make_hB4GfifB(kind, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node{}, make_hB4GfifB(s_kind_members, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc) } }, flags, name, asserts, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseUnwrap_ON6W20xj(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node stmt = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    if (stmt.kind == s_kind_block)
    {
        stmt.items += make_hB4GfifB(s_kind_unwrap, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
        return /*NRVO*/ stmt;
    }
    else
        fail_5GoI0pZ9((("Unwrap only works for blocks, this is a "_fu + qKW_ThvlUeXJ(str_x2XZ9C2m(stmt.kind))) + "."_fu), tokens, _idx, fname, src);

}

static s_Node parseTypedef_RDg8CuBL(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& name = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    consume_ALKZlHl5(s_kind_op, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    /*MOV*/ s_Node annot = parseTypeAnnot_V73n1It4(false, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return make_hB4GfifB(s_kind_typedef, fu_VEC<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(annot) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static void set_PUB_gNuEHAhx(s_Flags& flags, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, bool& _hasPUB)
{
    flags |= s_Flags_F_PUB;
    if (flags & s_Flags_F_SHADOW)
        fail_5GoI0pZ9("Cannot pub a shadow."_fu, tokens, _idx, fname, src);
    else
        _hasPUB = true;

}

static s_Node parsePub_I1k5eXXY(int& _fnDepth, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    if (_fnDepth)
        fail_5GoI0pZ9("Cannot pub from within a fn."_fu, tokens, _idx, fname, src);
    else
    {
        /*MOV*/ s_Node out = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        set_PUB_gNuEHAhx(out.flags, tokens, _idx, fname, src, _hasPUB);
        return /*NRVO*/ out;
    };
}

static s_Node parseShadow_poFd2J8F(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node out = parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    out.flags |= s_Flags_F_SHADOW;
    if (out.flags & s_Flags_F_PUB)
        fail_5GoI0pZ9("Cannot shadow a pub."_fu, tokens, _idx, fname, src);
    else
        return /*NRVO*/ out;

}

static s_Node parseFixityDecl_TRDN4EOK(const s_Flags flags, const s_DeclAsserts asserts, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    if ((flags & s_Flags_F_CONVERSION) && (flags & ((s_Flags_F_INFIX | s_Flags_F_PREFIX) | s_Flags_F_POSTFIX)))
        fail_5GoI0pZ9("`implicit` functions can't be operators."_fu, tokens, _idx, fname, src);
    else
    {
        consume_ALKZlHl5(s_kind_id, "fn"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        return parseFnDecl_SiWbcxeV(s_Flags(flags), asserts, expr, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
    };
}

static s_Node parseInlineDecl_hDjPCzAd(s_Flags flags, const s_Flags F, const s_DeclAsserts asserts, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    flags |= F;
    fu::view<char> v = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "infix"_fu)
    {
        return parseFixityDecl_TRDN4EOK((flags | s_Flags_F_INFIX), s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
    }
    else if (v == "prefix"_fu)
    {
        return parseFixityDecl_TRDN4EOK((flags | s_Flags_F_PREFIX), s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
    }
    else if (v == "postfix"_fu)
    {
        return parseFixityDecl_TRDN4EOK((flags | s_Flags_F_POSTFIX), s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
    }
    else
    {
        _idx--;
        return parseFixityDecl_TRDN4EOK(flags, asserts, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
    };
}

static s_Node parseConversionDecl_vgAV1VUa(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ const s_Flags flags = s_Flags_F_CONVERSION;
    fu::view<char> v = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "inline"_fu)
    {
        return parseInlineDecl_hDjPCzAd(s_Flags(flags), s_Flags_F_INLINE, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
    }
    else
    {
        _idx--;
        return parseFixityDecl_TRDN4EOK(flags, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
    };
}

static s_Node parseNoCopy_q6iwhuQB(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    consume_ALKZlHl5(s_kind_id, "struct"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseStructDecl_RaR2PUzZ(s_kind_struct, s_Flags{}, s_DeclAsserts_A_NOCOPY, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
}

static s_Node parseImport_S0txYmYM(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int _loc, fu_VEC<fu_STR>& fuzimports, const int modid)
{
    fu_STR value { tryConsume_gmnpPdnE(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (value)
    {
        while (tryConsume_gmnpPdnE(s_kind_op, "::"_fu, tokens, _idx))
        {
            value += ("/"_fu + consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);
        };
    }
    else
    {
        value = consume_ALKZlHl5(s_kind_str, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    };
    softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    value = registerImport_R7lShVx4(fu_STR(value), fname, fuzimports);
    return make_hB4GfifB(s_kind_import, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_x21x3D_YP7BiSZZZOd
                                #define DEF_x21x3D_YP7BiSZZZOd
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

static void softComma_Qw0aWFAA(fu::view<char> endop, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<char> fname, const fu_STR& src, const int _loc)
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
        warn_XYiySt8p((("Missing comma before `"_fu + peek.value) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);

}

                                #ifndef DEF_max_gcxVH86XFM7
                                #define DEF_max_gcxVH86XFM7
inline int max_gcxVH86X(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

static fu_STR getAutoName_jHqP2eRW(const s_Node& expr, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if ((expr.kind == s_kind_call) && hasIdentifierChars_XKihkJM1(expr.value))
        return fu_STR(expr.value);
    else if (expr.items)
    {
        const int i = (((expr.kind == s_kind_and) && (expr.items.size() - 1)) ? ((expr.kind == s_kind_if) ? 1 : int{}) : 0);
        return getAutoName_jHqP2eRW(expr.items[i], tokens, _idx, fname, src);
    }
    else
        fail_5GoI0pZ9("Can't :autoname this expression."_fu, tokens, _idx, fname, src);

}

static s_Node createArgID_8BVW3isB(const fu_STR& id, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_argid, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Flags parseCallArgs_RWdlCJNY(fu::view<char> endop, fu_VEC<s_Node>& out_args, const bool experimental_sliceAnnots, int& _col0, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Flags flags {};
    /*MOV*/ const int col00 = _col0;
    bool first = true;
    for (; ; )
    {
        if (experimental_sliceAnnots && tryConsume_gmnpPdnE(s_kind_op, ";"_fu, tokens, _idx))
        {
            consume_ALKZlHl5(s_kind_op, endop, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
            break;
        }
        else
        {
            if (!first)
                softComma_Qw0aWFAA(endop, tokens, _idx, warnings, options, fname, src, _loc);

            if (tryConsume_gmnpPdnE(s_kind_op, endop, tokens, _idx))
                break;
            else
            {
                first = false;
                fu_STR name {};
                bool autoName = false;
                bool optional = false;
                const s_Token& tok0 = tokens[_idx];
                _col0 = ((tok0.line > tokens[(_idx - 1)].line) ? max_gcxVH86X(tok0.col, col00) : col00);
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
                /*MOV*/ s_Node expr = parseExpression_dfg6HqKH(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
                if (autoName)
                    name = getAutoName_jHqP2eRW(expr, tokens, _idx, fname, src);

                if (name)
                    flags |= s_Flags_F_NAMED_ARGS;

                out_args.push((name ? createArgID_8BVW3isB(name, expr, (optional ? s_Flags_F_OPT_ARG : s_Flags{}), modid, _loc) : static_cast<s_Node&&>(expr)));
            };
        };
    };
    _col0 = int(col00);
    return /*NRVO*/ flags;
}

static s_Node parseCompilerPragma_zuOgxxOU(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& value = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    fu_VEC<s_Node> items {};
    if (value != "break"_fu)
    {
        consume_ALKZlHl5(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        parseCallArgs_RWdlCJNY(")"_fu, items, bool{}, _col0, tokens, _idx, fname, src, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    };
    return make_hB4GfifB(s_kind_pragma, items, s_Flags{}, value, s_DeclAsserts{}, (softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc) ? s_ParseSyntax_PS_DISCARD : s_ParseSyntax{}), modid, _loc);
}

static s_Node parsePrimDecl_6j4Rrxea(const s_kind kind, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& name = tryConsume_gmnpPdnE(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    /*MOV*/ s_Node annot = tryPopTypeAnnot_uMMPNwX0(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    fu_VEC<s_Node> items = (tryConsume_gmnpPdnE(s_kind_op, "{"_fu, tokens, _idx) ? parseBlockLike_2WMu7g1T(s_kind_op, "}"_fu, false, true, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : fu_VEC<s_Node>{});
    if ((kind != s_kind_enum) && (kind != s_kind_flags))
    {
        if (!(annot))
            fail_5GoI0pZ9("`primitive` declarations require a base type annotation."_fu, tokens, _idx, fname, src);

    };
    return make_hB4GfifB(kind, fu_VEC<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(annot), (items ? make_hB4GfifB(s_kind_members, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc) : s_Node{}) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static void add_8ngRmYSS(const s_DeclAsserts assert, s_DeclAsserts& asserts, const fu_STR& v, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (asserts & assert)
        fail_5GoI0pZ9(("Dulicate assertion: "_fu + qKW_ThvlUeXJ(v)), tokens, _idx, fname, src);
    else
        asserts |= assert;

}

static void add_iJy5ANHD(const s_Flags flag, s_Flags& flags, const fu_STR& v, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (flags & flag)
    {
        fail_5GoI0pZ9(("Duplicate qualifier: "_fu + qKW_ThvlUeXJ(v)), tokens, _idx, fname, src);
    }
    else
        flags |= flag;

}

static s_Node parseExoticDecl_P1O0ZTm8(s_Flags flags, s_DeclAsserts asserts, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    for (; ; )
    {
        const fu_STR& v = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (v == "pure"_fu)
            add_8ngRmYSS(s_DeclAsserts_A_PURE, asserts, v, tokens, _idx, fname, src);
        else if (v == "purectx"_fu)
            add_8ngRmYSS(s_DeclAsserts_A_PURE_CTX, asserts, v, tokens, _idx, fname, src);
        else if (v == "novec"_fu)
            add_8ngRmYSS(s_DeclAsserts_A_NOVEC, asserts, v, tokens, _idx, fname, src);
        else if (v == "noflow"_fu)
            add_8ngRmYSS(s_DeclAsserts_A_NOFLOW, asserts, v, tokens, _idx, fname, src);
        else if (v == "extern"_fu)
            add_iJy5ANHD(s_Flags_F_EXTERN, flags, v, tokens, _idx, fname, src);
        else if (v == "hotswap"_fu)
            add_iJy5ANHD(s_Flags_F_HOTSWAP, flags, v, tokens, _idx, fname, src);
        else if (v == "fn"_fu)
        {
            _idx--;
            return parseInlineDecl_hDjPCzAd(s_Flags{}, flags, s_DeclAsserts(asserts), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
        }
        else
        {
            fail_5GoI0pZ9(("Unknown qualifier: "_fu + qKW_ThvlUeXJ(v)), tokens, _idx, fname, src);
        };
    };
}

static s_Node parseStatement_bJMCpw6H(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ const int loc0 = _loc;
    fu_DEFER(_loc = int(loc0));
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_loc = _idx++)])) ? *_0 : fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src));
    if (token.kind == s_kind_op)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_w8weawxV(_idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        else if (v == ":"_fu)
            return parseLabelledStatement_FXLbHnJP(tokens, _idx, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

    }
    else if (token.kind == s_kind_id)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_8VR2OlHS(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            else if (v == "for"_fu)
                return parseFor_qF1h0T6b(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "while"_fu)
                return parseWhile_GwmgJxaG(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            else if (v == "do"_fu)
                return parseDoWhile_eq5HoWCS(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            else if (v == "return"_fu)
                return parseJump_oWYnDeY9(s_kind_return, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "break"_fu)
                return parseJump_oWYnDeY9(s_kind_break, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "continue"_fu)
                return parseJump_oWYnDeY9(s_kind_continue, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "try"_fu)
                return parseTryCatch_cmTtQMAT(_fnDepth, _idx, tokens, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

        };
        if ((peek.kind == s_kind_op) && (peek.value == "{"_fu))
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_RaR2PUzZ(s_kind_struct, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_RaR2PUzZ(s_kind_union, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            }
            else if (v == "unwrap"_fu)
                return parseUnwrap_ON6W20xj(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

        };
        if ((v == "fn"_fu) && ((peek.kind == s_kind_id) || !_fnDepth))
        {
            return parseFnDecl_SiWbcxeV(s_Flags{}, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
        }
        else if (peek.kind == s_kind_id)
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_RaR2PUzZ(s_kind_struct, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_RaR2PUzZ(s_kind_union, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            }
            else if (v == "type"_fu)
                return parseTypedef_RDg8CuBL(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "pub"_fu)
                return parsePub_I1k5eXXY(_fnDepth, tokens, _idx, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            else if (v == "shadow"_fu)
                return parseShadow_poFd2J8F(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            else if (v == "using"_fu)
                return parseConversionDecl_vgAV1VUa(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            else if (v == "nocopy"_fu)
                return parseNoCopy_q6iwhuQB(tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            else if (v == "import"_fu)
                return parseImport_S0txYmYM(tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid);
            else if (v == "pragma"_fu)
                return parseCompilerPragma_zuOgxxOU(tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "inline"_fu)
            {
                return parseInlineDecl_hDjPCzAd(s_Flags{}, s_Flags_F_INLINE, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "infix"_fu)
            {
                return parseFixityDecl_TRDN4EOK(s_Flags_F_INFIX, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "prefix"_fu)
            {
                return parseFixityDecl_TRDN4EOK(s_Flags_F_PREFIX, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "postfix"_fu)
            {
                return parseFixityDecl_TRDN4EOK(s_Flags_F_POSTFIX, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "primitive"_fu)
                return parsePrimDecl_6j4Rrxea(s_kind_primitive, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "flags"_fu)
                return parsePrimDecl_6j4Rrxea(s_kind_flags, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "enum"_fu)
                return parsePrimDecl_6j4Rrxea(s_kind_enum, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "pure"_fu)
            {
                return parseExoticDecl_P1O0ZTm8(s_Flags{}, s_DeclAsserts_A_PURE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "purectx"_fu)
            {
                return parseExoticDecl_P1O0ZTm8(s_Flags{}, s_DeclAsserts_A_PURE_CTX, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "novec"_fu)
            {
                return parseExoticDecl_P1O0ZTm8(s_Flags{}, s_DeclAsserts_A_NOVEC, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "noflow"_fu)
            {
                return parseExoticDecl_P1O0ZTm8(s_Flags{}, s_DeclAsserts_A_NOFLOW, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "extern"_fu)
            {
                return parseExoticDecl_P1O0ZTm8(s_Flags_F_EXTERN, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            }
            else if (v == "hotswap"_fu)
            {
                return parseExoticDecl_P1O0ZTm8(s_Flags_F_HOTSWAP, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
            };
        };
    };
    _idx--;
    return parseLetOrExpressionStatement_DdFjGIbD(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
}

static s_Node parseFnBodyBranch_cUvjrBnt(const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    tryConsume_gmnpPdnE(s_kind_op, "="_fu, tokens, _idx);
    if (expr)
        return parseExpression_dfg6HqKH(_precedence, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    else
        return parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

}

static void parseBranch_7lS9zExA(const bool noCond, bool& _TODO_FIX_dollarOk, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns, fu_VEC<s_Node>& branches)
{
    _TODO_FIX_dollarOk = true;
    /*MOV*/ s_Node cond = (!noCond ? parseUnaryExpression_eJteqtOd(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : s_Node{});
    _TODO_FIX_dollarOk = false;
    /*MOV*/ s_Node type = tryPopTypeAnnot_uMMPNwX0(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    /*MOV*/ s_Node cons = parseFnBodyBranch_cUvjrBnt(bool{}, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    branches.push(make_hB4GfifB(s_kind_fnbranch, fu_VEC<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(cond), static_cast<s_Node&&>(type), static_cast<s_Node&&>(cons) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
}

static s_Flags parseFnBodyOrPattern_V7XD0gWV(fu_VEC<s_Node>& out_push_body, const bool expr, fu::view<s_Token> tokens, int& _idx, bool& _TODO_FIX_dollarOk, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ const s_Flags flags {};
    /*MOV*/ s_Node body {};
    if (!expr && tryConsume_gmnpPdnE(s_kind_id, "case"_fu, tokens, _idx))
    {
        fu_VEC<s_Node> branches {};
        do
        {
            parseBranch_7lS9zExA(bool{}, _TODO_FIX_dollarOk, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, fuzimports, _hasPUB, _anonFns, branches);
        }
        while (tryConsume_gmnpPdnE(s_kind_id, "case"_fu, tokens, _idx));
        if (tryConsume_gmnpPdnE(s_kind_id, "default"_fu, tokens, _idx))
            parseBranch_7lS9zExA(true, _TODO_FIX_dollarOk, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, fuzimports, _hasPUB, _anonFns, branches);

        body = make_hB4GfifB(s_kind_pattern, branches, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
    {
        body = parseFnBodyBranch_cUvjrBnt(expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    };
    out_push_body.push(static_cast<s_Node&&>(body));
    return /*NRVO*/ flags;
}

static s_Node parseFnDecl_cont_RdGq3Sp6(const fu_STR& name, s_Flags flags, const s_DeclAsserts asserts, const bool expr, const fu_STR& endv, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> items {};
    _fnDepth++;
    const int dollars0 = _dollars.size();
    /*MOV*/ const bool dollarsOk0 = _TODO_FIX_dollarOk;
    fu_DEFER(
    {
        _fnDepth--;
        _dollars.shrink(dollars0);
        _TODO_FIX_dollarOk = bool(dollarsOk0);
    });
    flags |= (endv ? parseArgsDecl_r3FtvUhf(items, s_kind_op, endv, _dollarAuto, _TODO_FIX_dollarOk, _dollars, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _hasPUB, _anonFns) : s_Flags{});
    /*MOV*/ s_Node type = tryPopTypeAnnot_uMMPNwX0(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    const int retIdx = items.size();
    items.push(s_Node(type));
    flags |= parseFnBodyOrPattern_V7XD0gWV(items, expr, tokens, _idx, _TODO_FIX_dollarOk, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    if ((name == "main"_fu) && (_fnDepth == 1))
    {
        if (!type)
        {
            items.mutref(retIdx) = static_cast<s_Node&&>((type = createRead_iQ0O62U5("i32"_fu, s_Flags{}, modid, _loc, tokens, _idx, fname, src)));
        }
        else if ((type.kind != s_kind_call) || (type.value != "i32"_fu) || type.items.size())
            fail_5GoI0pZ9("fn main() must return i32."_fu, tokens, _idx, fname, src);

        set_PUB_gNuEHAhx(flags, tokens, _idx, fname, src, _hasPUB);
        flags |= s_Flags_F_EXTERN;
    };
    if (_dollars.size() > dollars0)
        flags |= s_Flags_F_TEMPLATE;

    return make_hB4GfifB(s_kind_fn, items, flags, name, asserts, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseFnDecl_SiWbcxeV(/*MOV*/ s_Flags flags, const s_DeclAsserts asserts, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    fu_STR name { tryConsume_gmnpPdnE(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (!name)
    {
        const s_Flags postfix = (flags & s_Flags_F_POSTFIX);
        name = consume_ALKZlHl5(s_kind_op, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (postfix)
        {
            if ((name == "++"_fu) || (name == "--"_fu))
                name = ("postfix"_fu + name);
            else
                fail_5GoI0pZ9((("No such postfix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        }
        else if (flags & s_Flags_F_INFIX)
        {
            if (!(has_B2BTURkC(BINOP.PRECEDENCE, name)))
                fail_5GoI0pZ9((("No such infix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        }
        else if (flags & s_Flags_F_PREFIX)
        {
            if (!(has_NaazSXrk(PREFIX, name)))
                fail_5GoI0pZ9((("No such prefix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        };
        flags &= ~(s_Flags_F_INFIX | s_Flags_F_PREFIX);
        flags |= s_Flags_F_OPERATOR;
    }
    else if (flags & ((s_Flags_F_INFIX | s_Flags_F_PREFIX) | s_Flags_F_POSTFIX))
        fail_5GoI0pZ9((("Not an operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

    fu_STR endv = (tryConsume_gmnpPdnE(s_kind_op, "("_fu, tokens, _idx) ? ")"_fu : fu_STR{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_7oXKi03f(name, flags, modid, _loc);
        else
            consume_ALKZlHl5(s_kind_op, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);

    };
    return parseFnDecl_cont_RdGq3Sp6(name, s_Flags(flags), asserts, expr, endv, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
}

static s_Node createArrayLiteral_sCBvZccE(const s_Flags argFlags, const fu_VEC<s_Node>& items, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_arrlit, items, argFlags, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseArrayLiteral_yehTtmKG(int& _col0, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_RWdlCJNY("]"_fu, args, true, _col0, tokens, _idx, fname, src, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    return createArrayLiteral_sCBvZccE(argFlags, args, modid, _loc);
}

static s_Node createTypeParam_3IJ4TyWy(const fu_STR& value, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_typeparam, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseTypeParam_eRwereQm(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const bool _TODO_FIX_dollarOk, const int modid, const int _loc, fu_VEC<fu_STR>& _dollars, const int _dollarAuto)
{
    const fu_STR& value = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (!_TODO_FIX_dollarOk)
    {
        return createRead_iQ0O62U5(("$"_fu + value), s_Flags{}, modid, _loc, tokens, _idx, fname, src);
    }
    else
    {
        if (!has_NaazSXrk(_dollars, value) && _dollarAuto)
            _dollars.push(fu_STR(value));

        return createTypeParam_3IJ4TyWy(value, modid, _loc);
    };
}

static s_Node parseLambda_RK7qy8vz(const bool noArgs_noClosingPipe, const int mode, int& _precedence, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _anonFns, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _col0, bool& _hasPUB)
{
    if (noArgs_noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_XYiySt8p("Unparenthesized `|| lambda` within a binary expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

    fu_STR _0 {};
    fu_STR name = (_0 = (x7E_YP7BiSZZ("l_"_fu, fu::i64dec(modid)) + "_"_fu), x7E_YP7BiSZZ(static_cast<fu_STR&&>(_0), fu::i64dec(_anonFns++)));
    return parseFnDecl_cont_RdGq3Sp6(name, (s_Flags_F_INLINE | s_Flags_F_LAMBDA), s_DeclAsserts{}, !(mode & M_LAMBDA_STMT_OK), (!noArgs_noClosingPipe ? "|"_fu : fu_STR{}), _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
}

static s_Node createDefinit_sjU3LsG4(const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_definit, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_only_lpa8XGDfwcf
                                #define DEF_only_lpa8XGDfwcf
inline const s_Node& only_lpa8XGDf(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createTypeTag_VpG7qQ4Y(const fu_STR& value, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_typetag, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node typeCheck_NYuU4f5u(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_typeassert, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseQualifierChain_t7y8XODs(/*MOV*/ s_Node&& expr, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, const int modid, const int _loc, fu_VEC<fu_STR>& fuzimports)
{
    if ((expr.kind != s_kind_call) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & s_Flags_F_ACCESS))) || (expr.flags & s_Flags_F_COMPOUND_ID))
    {
        _idx--;
        fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src);
    }
    else
    {
        expr.flags |= s_Flags_F_COMPOUND_ID;
        fu_STR path { expr.value };
        for (; ; )
        {
            const fu_STR& id = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
            if (!tryConsume_gmnpPdnE(s_kind_op, "::"_fu, tokens, _idx))
            {
                if ((path == "is"_fu) && (expr.items.size() == 1))
                {
                    const s_Node& left = only_lpa8XGDf(expr.items);
                    s_Node right = createTypeTag_VpG7qQ4Y(id, modid, _loc);
                    return typeCheck_NYuU4f5u(left, right, modid, _loc);
                }
                else
                {
                    path = registerImport_R7lShVx4(fu_STR(path), fname, fuzimports);
                    expr.value = ((path + "\t"_fu) + id);
                    return static_cast<s_Node&&>(expr);
                };
            }
            else
                path += ("/"_fu + id);

        };
    };
}

static s_Node parsePrefix_4RkgMInW(fu_STR&& op, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    if (has_NaazSXrk(PREFIX, op))
    {
        if ((op == "&"_fu) && tryConsume_gmnpPdnE(s_kind_id, "mut"_fu, tokens, _idx))
            op = "&mut"_fu;

        const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
        s_Node _0 {};
        return (_0 = parseUnaryExpression_eJteqtOd(mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns), createPrefix_rJ95C8dE(op, static_cast<s_Node&&>(_0), modid, _loc));
    }
    else
    {
        _idx--;
        fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src);
    };
}

static s_Node parseExpressionHead_KzZPILGW(const int mode, fu::view<s_Token> tokens, int& _idx, const int modid, int& _loc, const fu_STR& fname, const fu_STR& src, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];

    {
        const s_kind k = token.kind;
        const fu_STR& v = token.value;
        if ((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_str) || (k == s_kind_char))
            return createLeaf_WIDsALFm(k, v, modid, _loc);
        else if (k == s_kind_id)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == s_kind_id)
            {
                if (v == "fn"_fu)
                {
                    return parseFnDecl_SiWbcxeV(s_Flags{}, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
                }
                else if (v == "infix"_fu)
                {
                    return parseFixityDecl_TRDN4EOK(s_Flags_F_INFIX, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
                }
                else if (v == "prefix"_fu)
                {
                    return parseFixityDecl_TRDN4EOK(s_Flags_F_PREFIX, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
                }
                else if (v == "postfix"_fu)
                {
                    return parseFixityDecl_TRDN4EOK(s_Flags_F_POSTFIX, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
                };
            };
            return createRead_iQ0O62U5(v, s_Flags{}, modid, _loc, tokens, _idx, fname, src);
        }
        else if (k == s_kind_op)
        {
            if (v == "("_fu)
                return parseParens_v2UsROmX(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "{"_fu)
                return parseBlock_w8weawxV(_idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
            else if (v == "["_fu)
                return parseArrayLiteral_yehTtmKG(_col0, tokens, _idx, fname, src, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            else if (v == "$"_fu)
                return parseTypeParam_eRwereQm(tokens, _idx, fname, src, _TODO_FIX_dollarOk, modid, _loc, _dollars, _dollarAuto);
            else if (v == "|"_fu)
            {
                return parseLambda_RK7qy8vz(bool{}, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _col0, _hasPUB);
            }
            else if (v == "||"_fu)
                return parseLambda_RK7qy8vz(true, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _col0, _hasPUB);
            else if (v == "[]"_fu)
                return createDefinit_sjU3LsG4(modid, _loc);
            else if (v == "::"_fu)
            {
                const fu_STR& id = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                _idx--;
                return parseQualifierChain_t7y8XODs(createRead_iQ0O62U5(id, s_Flags{}, modid, _loc, tokens, _idx, fname, src), _idx, tokens, fname, src, modid, _loc, fuzimports);
            }
            else if (v == "."_fu)
            {
                const fu_STR& id = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                return createAddrOfFn_7oXKi03f(id, s_Flags_F_ACCESS, modid, _loc);
            }
            else
                return parsePrefix_4RkgMInW(fu_STR(v), _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

        };
    };
    _idx--;
    fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src);
}

static s_Node miss_nvchsvdV()
{
    return s_Node{};
}

static void lint_gNpRvvpO(const int mode, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_XYiySt8p((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), warnings, options, tokens, _idx, fname, src, _loc);

}

static s_Node parseAccessExpression_xigP4QdU(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    s_Token id { tryConsume_gmnpPdnE(s_kind_id, fu::view<char>{}, tokens, _idx) };
    if (!id)
    {
        consume_ALKZlHl5(s_kind_op, "::"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        id = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        _idx -= 2;
    };
    return createCall_RKuGJtyA(id.value, s_Flags_F_ACCESS, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseCallExpression_i7Hogle3(const s_Node& expr, int& _col0, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const s_Flags flags = (expr.flags | parseCallArgs_RWdlCJNY(")"_fu, args, bool{}, _col0, tokens, _idx, fname, src, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));
    if ((expr.kind == s_kind_call) && (flags & s_Flags_F_ACCESS))
    {
        const s_Node* _0;
        const s_Node& head = (expr.items && (expr.items.size() == 1) && *(_0 = &(expr.items[0])) ? *_0 : fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src));
        args.unshift(s_Node(head));
        return createCall_RKuGJtyA((expr.value ? expr.value : fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src)), ((flags & ~s_Flags_F_ACCESS) | s_Flags_F_METHOD), args, s_ParseSyntax{}, modid, _loc);
    }
    else if ((expr.kind == s_kind_call) && s_ParseSyntax((expr.syntax & s_ParseSyntax_PS_ID)))
    {
        return createCall_RKuGJtyA((expr.value ? expr.value : fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src)), flags, args, s_ParseSyntax((expr.syntax & s_ParseSyntax(~s_ParseSyntax_PS_ID))), modid, _loc);
    }
    else if (expr.kind == s_kind_typeparam)
    {
        return createCall_RKuGJtyA(("$"_fu + (expr.value ? expr.value : fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src))), flags, args, s_ParseSyntax{}, modid, _loc);
    }
    else
        fail_5GoI0pZ9("TODO dynamic call"_fu, tokens, _idx, fname, src);

}

static s_Node parseIndexExpression_8G7r9TuN(const s_Node& expr, int& _col0, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_RWdlCJNY("]"_fu, args, bool{}, _col0, tokens, _idx, fname, src, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    args.unshift(s_Node(expr));
    return createCall_RKuGJtyA("[]"_fu, (argFlags | s_Flags_F_OPERATOR), args, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_get_nUAYothzjl1
                                #define DEF_get_nUAYothzjl1
inline int get_nUAYothz(fu::view<fu_STR> keys, fu::view<char> item, fu::view<int> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return 0;
}
                                #endif

                                #ifndef DEF_get_B2BTURkCwL5
                                #define DEF_get_B2BTURkCwL5
inline int get_B2BTURkC(const s_Map_guWsCK256I9& _, fu::view<char> key)
{
    return get_nUAYothz(_.keys, key, _.vals);
}
                                #endif

static s_Node createOr_W7FUTO2C(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_1UNR5IAZ(s_kind_or, left, right, syntax, modid, _loc);
}

static s_Node pipelineRight_zZGLToL3(const s_Node& left, /*MOV*/ s_Node&& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (right.kind != s_kind_call)
        fail_5GoI0pZ9("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);
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

static s_Node typeCast_P96qHuH2(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_hB4GfifB(s_kind_typecast, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node tryParseBinary_qHkLaW8R(const s_Node& left, const fu_STR& op, const int p1, int& _precedence, int& _idx, int& _loc, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_nvchsvdV();
    else
    {
        _idx++;
        s_Node mid {};
        if (op == "?"_fu)
        {
            mid = parseExpression_dfg6HqKH(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
            consume_ALKZlHl5(s_kind_op, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        };
        /*MOV*/ s_Node right = parseExpression_dfg6HqKH(p1, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        if (mid)
        {
            return createIf_jS02udkS(left, mid, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "||"_fu)
        {
            return createOr_W7FUTO2C(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "&&"_fu)
        {
            return createAnd_dvGjR5om(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else
        {
            if ((left.kind == s_kind_and) || (left.kind == s_kind_or))
            {
                if (!(left.syntax & s_ParseSyntax_PS_PARENS))
                    warn_XYiySt8p((((x7E_YP7BiSZZ("Unparenthesized `"_fu, str_x2XZ9C2m(left.kind)) + "` on the left side of an `"_fu) + op) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            };
            if (op == "|>"_fu)
                return pipelineRight_zZGLToL3(left, static_cast<s_Node&&>(right), tokens, _idx, fname, src);
            else if (op == "<|"_fu)
                return pipelineLeft_QkZKDdnc(s_Node(left), right, tokens, _idx, fname, src);
            else if (op == "->"_fu)
                return typeCheck_NYuU4f5u(left, right, modid, _loc);
            else if (op == "=>"_fu)
                return typeCast_P96qHuH2(left, right, modid, _loc);
            else
            {
                return createCall_RKuGJtyA(op, (s_Flags_F_INFIX | s_Flags_F_OPERATOR), fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), static_cast<s_Node&&>(right) } }, s_ParseSyntax{}, modid, _loc);
            };
        };
    };
}

static s_Node tryParseExpressionTail_WYJSGANz(const s_Node& head, const int mode, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _col0, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if (token.kind == s_kind_op)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
        {
            _idx--;
            return miss_nvchsvdV();
        };
        if (v == "."_fu)
        {
            lint_gNpRvvpO(mode, warnings, options, tokens, _idx, fname, src, _loc);
            return parseAccessExpression_xigP4QdU(head, tokens, _idx, fname, src, modid, _loc);
        };
        if (v == "("_fu)
        {
            lint_gNpRvvpO(mode, warnings, options, tokens, _idx, fname, src, _loc);
            return parseCallExpression_i7Hogle3(head, _col0, tokens, _idx, fname, src, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        };
        if (v == "["_fu)
        {
            lint_gNpRvvpO(mode, warnings, options, tokens, _idx, fname, src, _loc);
            return parseIndexExpression_8G7r9TuN(head, _col0, tokens, _idx, fname, src, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        };
        const int p1 = get_B2BTURkC(BINOP.PRECEDENCE, v);
        if (p1)
        {
            _idx--;
            return tryParseBinary_qHkLaW8R(head, v, p1, _precedence, _idx, _loc, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        };
        if (has_NaazSXrk(POSTFIX, v))
        {
            return createCall_RKuGJtyA((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu_STR(v)), (s_Flags_F_POSTFIX | s_Flags_F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, s_ParseSyntax{}, modid, _loc);
        }
        else if (v == "::"_fu)
        {
            return parseQualifierChain_t7y8XODs(s_Node(head), _idx, tokens, fname, src, modid, _loc, fuzimports);
        };
    };
    _idx--;
    return miss_nvchsvdV();
}

static s_Node parseExpression_dfg6HqKH(const int p1, const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ const int p0 = _precedence;
    /*MOV*/ const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (!((tokens[_idx].col >= (_col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_XYiySt8p(x7E_YP7BiSZZ((x7E_YP7BiSZZ((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].col)), warnings, options, tokens, _idx, fname, src, _loc);

    /*MOV*/ s_Node head = parseExpressionHead_KzZPILGW(mode, tokens, _idx, modid, _loc, fname, src, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_kind_int) || (head.kind == s_kind_real))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_WYJSGANz(head, mode_1, tokens, _idx, warnings, options, fname, src, _loc, modid, _col0, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.col > col00))
                    warn_XYiySt8p(x7E_YP7BiSZZ((x7E_YP7BiSZZ((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.col)), warnings, options, tokens, _idx, fname, src, _loc);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = int(p0);
    _loc = int(loc00);
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_eJteqtOd(const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    return parseExpression_dfg6HqKH(P_PREFIX_UNARY, mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
}

static s_Node parseTypeAnnot_V73n1It4(const bool allowTypeUnions, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node res = parseUnaryExpression_eJteqtOd(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    while (allowTypeUnions && tryConsume_gmnpPdnE(s_kind_id, "or"_fu, tokens, _idx))
    {
        if (res.kind != s_kind_typeunion)
        {
            res = make_hB4GfifB(s_kind_typeunion, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(res) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
        };
        res.items += parseUnaryExpression_eJteqtOd(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    };
    return /*NRVO*/ res;
}

static s_Node tryPopTypeAnnot_uMMPNwX0(const bool allowTypeUnions, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    if (tryConsume_gmnpPdnE(s_kind_op, ":"_fu, tokens, _idx))
        return parseTypeAnnot_V73n1It4(allowTypeUnions, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    else
        return miss_nvchsvdV();

}

static s_Node tryParseLetInit_jgpxguMD(fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    return tryConsume_gmnpPdnE(s_kind_op, "="_fu, tokens, _idx) ? parseExpression_dfg6HqKH(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : s_Node{};
}

static s_Node parseLet_DsLwvNMB(const bool xqmark, const bool allowTypeUnions, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    s_Flags flags {};
    if (tryConsume_gmnpPdnE(s_kind_id, "using"_fu, tokens, _idx))
        flags |= s_Flags_F_USING;

    if (tryConsume_gmnpPdnE(s_kind_id, "implicit"_fu, tokens, _idx))
        flags |= s_Flags_F_IMPLICIT;

    if (tryConsume_gmnpPdnE(s_kind_id, "lax"_fu, tokens, _idx))
        flags |= s_Flags_F_LAX;

    if (tryConsume_gmnpPdnE(s_kind_id, "shadow"_fu, tokens, _idx))
        flags |= s_Flags_F_SHADOW;

    if (tryConsume_gmnpPdnE(s_kind_id, "mut"_fu, tokens, _idx))
        flags |= s_Flags_F_MUT;

    if (tryConsume_gmnpPdnE(s_kind_id, "ref"_fu, tokens, _idx))
        flags |= s_Flags_F_REF;

    const s_Token& sh_import = tryConsume_gmnpPdnE(s_kind_op, "::"_fu, tokens, _idx);
    fu_STR id { consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value };
    if (id == "_"_fu)
        flags |= s_Flags_F_LAX;

    if (xqmark && tryConsume_gmnpPdnE(s_kind_op, "!"_fu, tokens, _idx))
    {
        flags |= s_Flags_F_MUSTNAME;
        const fu_STR& inner_id = tryConsume_gmnpPdnE(s_kind_id, fu::view<char>{}, tokens, _idx).value;
        if (inner_id)
        {
            flags |= s_Flags_F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    if (xqmark && tryConsume_gmnpPdnE(s_kind_op, "."_fu, tokens, _idx))
    {
        flags |= s_Flags_F_COMPOUND_ID;
        id += ("."_fu + consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);
        while (tryConsume_gmnpPdnE(s_kind_op, "::"_fu, tokens, _idx))
        {
            id += ("\t"_fu + consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);
        };
    };
    if (xqmark && tryConsume_gmnpPdnE(s_kind_op, "[]"_fu, tokens, _idx))
        flags |= s_Flags_F_REST_ARG;

    const s_Token& optional = (xqmark ? tryConsume_gmnpPdnE(s_kind_op, "?"_fu, tokens, _idx) : (*(const s_Token*)fu::NIL));
    s_Node type = (sh_import ? createRead_iQ0O62U5(((registerImport_R7lShVx4(fu_STR(id), fname, fuzimports) + '\t') + id), s_Flags_F_COMPOUND_ID, modid, _loc, tokens, _idx, fname, src) : tryPopTypeAnnot_uMMPNwX0(allowTypeUnions, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));
    s_Node init = (optional ? createDefinit_sjU3LsG4(modid, _loc) : tryParseLetInit_jgpxguMD(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));
    if ((flags & s_Flags_F_REF) && type)
    {
        if ((type.kind != s_kind_call) || (type.value != "&mut"_fu))
        {
            type = createPrefix_rJ95C8dE("&mut"_fu, s_Node(type), modid, _loc);
            flags &= ~s_Flags_F_REF;
        };
    };
    return createLet_QMXE6fPO(id, type, init, flags, modid, _loc);
}

static s_Node parseStructItem_TM6sReP8(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& isPredicate = tryConsume_gmnpPdnE(s_kind_id, "true"_fu, tokens, _idx);
    /*MOV*/ s_Node member = parseLet_DsLwvNMB(true, false, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    if (isPredicate)
        member.flags |= s_Flags_F_PREDICATE;

    return /*NRVO*/ member;
}

static s_Node parseEnumItem_z5YWM6wd(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& id = consume_ALKZlHl5(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    s_Node init = tryParseLetInit_jgpxguMD(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    softSemi_yo3Mbaf1(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLet_QMXE6fPO(id, (*(const s_Node*)fu::NIL), init, s_Flags{}, modid, _loc);
}

static s_Node parseDefer_ghfhQSS8(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token* _0;
    const fu_STR& value = (tryConsume_gmnpPdnE(s_kind_op, ":"_fu, tokens, _idx) ? (*(_0 = &(tryConsume_gmnpPdnE(s_kind_id, "err"_fu, tokens, _idx))) ? *_0 : consume_ALKZlHl5(s_kind_id, "ok"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src)).value : (*(const fu_STR*)fu::NIL));
    if (_fnDepth > 0)
    {
        fu_VEC<s_Node> _1 {};
        return (_1 = fu_VEC<s_Node> { fu::slate<1, s_Node> { parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) } }, make_hB4GfifB(s_kind_defer, static_cast<fu_VEC<s_Node>&&>(_1), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
    }
    else
    {
        _idx--;
        fail_5GoI0pZ9(fu_STR{}, tokens, _idx, fname, src);
    };
}

static s_Node parseStatementOrDefer_5jbH9QE3(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_id)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
        {
            _idx++;
            return parseDefer_ghfhQSS8(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        };
    };
    return parseStatement_bJMCpw6H(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
}

static fu_VEC<s_Node> parseBlockLike_2WMu7g1T(const s_kind endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
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
                warn_XYiySt8p((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            break;
        }
        else
        {
            _col0 = token.col;
            if (!(_col0 > col00))
                warn_XYiySt8p((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            if (!((colNN < 0) || (colNN == _col0) || (token.line == lineNN)))
                warn_XYiySt8p((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            if (colNN < 0)
                colNN = _col0;

            lineNN = token.line;
            /*MOV*/ s_Node expr = (sTruct ? parseStructItem_TM6sReP8(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : (eNum ? parseEnumItem_z5YWM6wd(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : parseStatementOrDefer_5jbH9QE3(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns)));
            if (!((expr.kind != s_kind_call) || (!(expr.flags & s_Flags_F_ACCESS) && !s_ParseSyntax((expr.syntax & s_ParseSyntax_PS_ID))) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
                warn_XYiySt8p("Orphan pure-looking expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

            items.push(static_cast<s_Node&&>(expr));
        };
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_4xjN88qL(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    consume_ALKZlHl5(s_kind_sof, "sof"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    _loc = _idx;
    fu_VEC<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_2WMu7g1T(s_kind_eof, "eof"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns), make_hB4GfifB(s_kind_root, static_cast<fu_VEC<s_Node>&&>(_0), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
    if (use_AUTOPUB && !_hasPUB)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            const s_kind k = item.kind;
            if (((k == s_kind_fn) || (k == s_kind_let) || (k == s_kind_typedef) || (k == s_kind_struct) || (k == s_kind_union) || (k == s_kind_enum) || (k == s_kind_flags) || (k == s_kind_primitive)) && !(item.flags & s_Flags_F_SHADOW))
                set_PUB_gNuEHAhx(item.flags, tokens, _idx, fname, src, _hasPUB);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_s7vuAgZz(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options)
{
    int _idx = 0;
    int _loc = 0;
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    int _dollarAuto = 0;
    fu_VEC<fu_STR> _dollars {};
    int _anonFns = 0;
    bool _hasPUB = false;
    bool _TODO_FIX_dollarOk = false;
    /*MOV*/ fu_VEC<fu_STR> fuzimports {};
    /*MOV*/ fu_VEC<fu_STR> warnings {};
    if (tokens[(tokens.size() - 1)].kind == s_kind_eof)
    {
        /*MOV*/ s_Node root = parseRoot_4xjN88qL(tokens, _idx, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        fu_VEC<fu_STR> _0 {};
        return (_0 = static_cast<fu_VEC<fu_STR>&&>(fuzimports), s_ParserOutput { static_cast<s_Node&&>(root), static_cast<fu_VEC<fu_STR>&&>(_0), static_cast<fu_VEC<fu_STR>&&>(warnings) });
    }
    else
        fail_5GoI0pZ9("Missing `eof` token."_fu, tokens, _idx, fname, src);

}

#endif
