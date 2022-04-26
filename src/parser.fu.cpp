#include <cstdint>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_BINOP;
struct s_Map_guWsCK25;
struct s_ParserOutput;
struct s_Node;
enum s_kind: int;
typedef int s_DeclAsserts;
typedef int s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_Token;
struct s_Options;
struct s_Lint;
[[noreturn]] fu::never FAIL_g7ph5ZNh(fu::view<char>, const fu_STR&, const s_Token&, fu::view<char>);
fu_STR ext_KqRBcvmh(const fu_STR&);
fu_STR dirname_KqRBcvmh(const fu_STR&);
fu_STR join_Lfq50XKd(fu::view<char>, const fu_STR&);
static s_Flags parseArgsDecl_I7TYo8d6(fu_VEC<s_Node>&, s_kind, fu::view<char>, int&, bool&, fu_VEC<fu_STR>&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, bool&, int&);
static s_Node parseBlock_3kYRqpxU(int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseLabelledStatement_s0wc1nsn(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseLetStmt_614s079K(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseExpressionStatement_qJXqP7tq(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseLetOrExpressionStatement_No5eJMdY(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseIf_w4zhCCjQ(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseParens_ReyK06G0(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseFor_xeOr9iXO(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseWhile_cl3fXBiS(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseDoWhile_zJeCU1fe(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseJump_KUu5vQ4u(s_kind, int&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseTryCatch_6ScTKJdc(int&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseStructDecl_khOOi9hF(s_kind, s_Flags, s_DeclAsserts, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseTypedef_uiDTfM2o(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parsePub_rgwkBxCE(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseShadow_eksFR601(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseFixityDecl_UAL4gsmJ(s_Flags, s_DeclAsserts, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parseInlineDecl_WSJIdoWY(s_Flags, s_Flags, s_DeclAsserts, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parseConversionDecl_LABr5nf4(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
bool hasIdentifierChars_ZCtM7908(fu::view<char>);
static fu_STR getAutoName_xOENuT50(const s_Node&, fu::view<s_Token>, int, fu::view<char>, const fu_STR&);
static s_Flags parseCallArgs_BFBtamba(fu::view<char>, fu_VEC<s_Node>&, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, const s_Options&, int&, int&, int&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseCompilerPragma_wdZzmlmZ(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, const s_Options&, int&, int&, int&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parsePrimDecl_0E3MBfIl(s_kind, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
fu_STR qKW_HfIK3mvn(const fu_STR&);
static s_Node parseStatement_gygIW4zW(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseFnBodyBranch_FeJJa7ss(bool, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Flags parseFnBodyOrPattern_llDTSfD4(fu_VEC<s_Node>&, bool, fu::view<s_Token>, int&, bool&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseFnDecl_cont_Xo2MY9zP(const fu_STR&, s_Flags, s_DeclAsserts, bool, const fu_STR&, int&, fu_VEC<fu_STR>&, bool&, int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parseFnDecl_ir2gvfsG(s_Flags, s_DeclAsserts, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node parsePrefix_xiYbiI7o(fu_STR&&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseExpressionHead_gerHnNqN(int, fu::view<s_Token>, int&, int, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, int&);
static s_Node tryParseBinary_jHZrHqT9(const s_Node&, const fu_STR&, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node tryParseExpressionTail_NitKZGlE(const s_Node&, int, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, int, int&, int&, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseExpression_YeBII3Si(int, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseUnaryExpression_JSzKkS2X(int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseTypeAnnot_c1VMMa5D(bool, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node tryPopTypeAnnot_CnS8LGj7(bool, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, bool&, int&, fu_VEC<fu_STR>&, bool&, int&);
static s_Node parseLet_0SukHiwN(bool, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static s_Node parseStructItem_ufr3PwIa(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, fu_VEC<fu_STR>&, int, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);
static fu_VEC<s_Node> parseBlockLike_DXPdKybL(s_kind, fu::view<char>, bool, bool, int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, int, int&, int&, fu_VEC<fu_STR>&, bool&, int&, bool&, int&);

                                #ifndef DEF_s_Map_guWsCK25
                                #define DEF_s_Map_guWsCK25
struct s_Map_guWsCK25
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
    s_Map_guWsCK25 PRECEDENCE;
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
enum s_kind: int
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
    s_kind_forfieldsof = 33,
    s_kind_pragma = 34,
    s_kind_void = 35,
    s_kind_struct = 36,
    s_kind_union = 37,
    s_kind_primitive = 38,
    s_kind_flags = 39,
    s_kind_enum = 40,
    s_kind_members = 41,
    s_kind_fn = 42,
    s_kind_fnbranch = 43,
    s_kind_pattern = 44,
    s_kind_typeunion = 45,
    s_kind_typetag = 46,
    s_kind_jump = 47,
    s_kind_empty = 48,
    s_kind_letdef = 49,
    s_kind___relaxed = 50,
    s_kind___convert = 51,
    s_kind_fndef = 52,
    s_kind_copy = 53,
    s_kind_move = 54,
    s_kind___far_jump = 55,
    s_kind___no_kind_yet = 56,
    s_kind_type = 57,
    s_kind_var = 58,
    s_kind_field = 59,
    s_kind_enumv = 60,
    s_kind_template = 61,
    s_kind___native = 62,
    s_kind_inline = 63,
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
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = 1;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = 2;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = 4;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = 8;
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

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
{
    s_Lint lint;
    int break_notes;
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

static const fu_VEC<fu_STR> PREFIX fu_INIT_PRIORITY(1003) = fu_VEC<fu_STR> { fu::slate<10, fu_STR> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static const fu_VEC<fu_STR> POSTFIX fu_INIT_PRIORITY(1003) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "++"_fu, "--"_fu, "[]"_fu } };

                                #ifndef DEF_grow_if_oob_oj2Y8ejW
                                #define DEF_grow_if_oob_oj2Y8ejW
inline bool& grow_if_oob_oj2Y8ejW(fu_VEC<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_x3Cx3E_gcxVH86X
                                #define DEF_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_D0yPwEUc
                                #define DEF_x3Cx3E_D0yPwEUc
inline int x3Cx3E_D0yPwEUc(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_pN4jXVBE
                                #define DEF_x3Cx3E_pN4jXVBE
inline int x3Cx3E_pN4jXVBE(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_D0yPwEUc(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_update_DuhHfPwP
                                #define DEF_update_DuhHfPwP
inline bool update_DuhHfPwP(const fu_STR& item, const int extra, s_Map_guWsCK25& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(_.keys[i], item);
        if (cmp == 0)
        {
            _.vals.mutref(i) = extra;
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item));
    _.vals.insert(lo, int(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_Ur6fweID
                                #define DEF_set_Ur6fweID
inline bool set_Ur6fweID(s_Map_guWsCK25& _, const fu_STR& key, const int value)
{
    return update_DuhHfPwP(key, value, _);
}
                                #endif

static void binop_ylvqtwnD(fu::view<fu_STR> ops, int& precedence, s_BINOP& out, const bool rightToLeft)
{
    precedence++;
    if (!(precedence < 64))
        fu::fail("Assertion failed: precedence < 64"_fu);

    grow_if_oob_oj2Y8ejW(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
    for (int i = 0; i < ops.size(); i++)
        set_Ur6fweID(out.PRECEDENCE, ops[i], precedence);

}

static s_BINOP setupOperators_J2h3fYmf()
{
    /*MOV*/ s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_ylvqtwnD((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<2, fu_STR> { "+"_fu, "-"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<2, fu_STR> { "<<"_fu, ">>"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "&"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "^"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "|"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "~"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<2, fu_STR> { "<=>"_fu, "<>"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<2, fu_STR> { "=>"_fu, "->"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<5, fu_STR> { "<"_fu, "<="_fu, ">"_fu, ">="_fu, "<=>"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<2, fu_STR> { "=="_fu, "!="_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "&&"_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "||"_fu }), precedence, out, rightToLeft);
    rightToLeft = true;
    binop_ylvqtwnD((fu::slate<17, fu_STR> { "?"_fu, "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), precedence, out, rightToLeft);
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "<|"_fu }), precedence, out, rightToLeft);
    rightToLeft = false;
    binop_ylvqtwnD((fu::slate<1, fu_STR> { "|>"_fu }), precedence, out, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1003) = setupOperators_J2h3fYmf();

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

[[noreturn]] static fu::never fail_DFmt4Umh(fu_STR&& reason, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_g7ph5ZNh(fname, src, token, reason);
}

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Token& consume_4wHlPQvc(const s_kind kind, fu::view<char> value, const fu_STR& err, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    };
    fail_DFmt4Umh((((x7E(((err ? fu_STR(err) : "Expected"_fu) + " `"_fu), fu::booldec((value || kind))) + "`, got `"_fu) + token.value) + "`."_fu), tokens, _idx, fname, src);
}

static fu_STR fail_compose_3x9NgwKp(fu_STR&& reason, fu::view<s_Token> tokens, const int _loc, const int _idx, fu::view<char> fname)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? x7E((x7E("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E((x7E((x7E((x7E("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    return (((fname + " "_fu) + addr) + ":\n\t"_fu) + reason;
}

static void warn_MBVnJZGU(const fu_STR& reason, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_DFmt4Umh(fu_STR(reason), tokens, _idx, fname, src);

    warnings += fail_compose_3x9NgwKp(fu_STR(reason), tokens, _loc, _idx, fname);
}

static const s_Token& tryConsume_Q98B5tWF(const s_kind kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    };
    return (*(const s_Token*)fu::NIL);
}

                                #ifndef DEF_starts_pN4jXVBE
                                #define DEF_starts_pN4jXVBE
inline bool starts_pN4jXVBE(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_has_uS4lo0lt
                                #define DEF_has_uS4lo0lt
inline bool has_uS4lo0lt(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR registerImport_1IF84QCG(/*MOV*/ fu_STR&& value, const fu_STR& fname, fu_VEC<fu_STR>& fuzimports)
{
    if (!ext_KqRBcvmh(value))
        value += ".fu"_fu;

    fu_STR dir = dirname_KqRBcvmh(fname);
    value = (starts_pN4jXVBE(value, "."_fu) ? join_Lfq50XKd(dir, value) : ((dir + '\v') + value));
    if (!has_uS4lo0lt(fuzimports, value))
        fuzimports.push(fu_STR(value));

    return static_cast<fu_STR&&>(value);
}

static s_Node make_Ye1xBxIB(const s_kind kind, const fu_VEC<s_Node>& items, const s_Flags flags, const fu_STR& value, const s_DeclAsserts asserts, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return s_Node { s_kind(kind), s_DeclAsserts(asserts), s_ParseSyntax(syntax), s_Flags(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static s_Node createCall_B17dDqzz(const fu_STR& id, const s_Flags flags, const fu_VEC<s_Node>& args, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_call, args, flags, id, s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node createRead_6amIEpsx(const fu_STR& id, const s_Flags flags, const int modid, const int _loc, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if ((id == "true"_fu) || (id == "false"_fu))
        return make_Ye1xBxIB(s_kind_bool, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);

    return createCall_B17dDqzz((id ? id : fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src)), flags, (*(const fu_VEC<s_Node>*)fu::NIL), s_ParseSyntax_PS_ID, modid, _loc);
}

static s_Node createLeaf_WYTyu083(const s_kind kind, const fu_STR& value, const int modid, const int _loc)
{
    return make_Ye1xBxIB(kind, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_x3Cx3E_KXTKAuVd
                                #define DEF_x3Cx3E_KXTKAuVd
inline int x3Cx3E_KXTKAuVd(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_5XdIvbog
                                #define DEF_x3Cx3E_5XdIvbog
inline int x3Cx3E_5XdIvbog(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_KXTKAuVd(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_has_e0rvubQU
                                #define DEF_has_e0rvubQU
inline bool has_e0rvubQU(fu::view<fu_STR> keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_5XdIvbog(keys[i], item);
        if (cmp == 0)
        {
            return true;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_has_XfK5Iy8T
                                #define DEF_has_XfK5Iy8T
inline bool has_XfK5Iy8T(const s_Map_guWsCK25& _, fu::view<char> key)
{
    return has_e0rvubQU(_.keys, key);
}
                                #endif

                                #ifndef DEF_has_tHwH53lN
                                #define DEF_has_tHwH53lN
inline bool has_tHwH53lN(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createAddrOfFn_csFELpLY(const fu_STR& name, const s_Flags flags, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_addroffn, (*(const fu_VEC<s_Node>*)fu::NIL), flags, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Flags parseArgsDecl_I7TYo8d6(fu_VEC<s_Node>& outArgs, const s_kind endk, fu::view<char> endv, int& _dollarAuto, bool& _TODO_FIX_dollarOk, fu_VEC<fu_STR>& _dollars, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, bool& _hasPUB, int& _anonFns)
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
        if (tryConsume_Q98B5tWF(endk, endv, tokens, _idx))
            break;

        if (!first)
            consume_4wHlPQvc(s_kind_op, ","_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);

        first = false;
        const bool isInline = !!tryConsume_Q98B5tWF(s_kind_id, "inline"_fu, tokens, _idx);
        int insertAt = -1;
        s_Node arg = parseLet_0SukHiwN(true, true, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
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
                fail_DFmt4Umh("TODO default implicit arguments"_fu, tokens, _idx, fname, src);

            defaults = true;
            firstDefault = outArgs.size();
        }
        else if (defaults)
        {
            if (!(arg.flags & s_Flags_F_MUSTNAME))
                fail_DFmt4Umh("TODO non-trailing default arguments"_fu, tokens, _idx, fname, src);

            insertAt = firstDefault;
            firstDefault++;
        }
        else if (!arg.items[LET_TYPE])
            arg.flags |= s_Flags_F_TEMPLATE;

        arg.flags |= s_Flags_F_ARG;
        outFlags |= (arg.flags & s_Flags_F_TEMPLATE);
        if (arg.flags & s_Flags_F_IMPLICIT)
            implicit.push(s_Node(arg));
        else if (insertAt > 0)
            outArgs.insert(insertAt, s_Node(arg));
        else
            outArgs.push(s_Node(arg));

    };
    _dollarAuto--;
    _TODO_FIX_dollarOk = false;
    if (implicit)
    {
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(s_Node(implicit[i]));

    };
    return /*NRVO*/ outFlags;
}

                                #ifndef DEF_if_last_8DAoFAdf
                                #define DEF_if_last_8DAoFAdf
inline const s_Node& if_last_8DAoFAdf(fu::view<s_Node> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Node*)fu::NIL);
}
                                #endif

static s_Node createBlock_lBG6vQSd(fu_VEC<s_Node>&& items, const fu_STR& label, const int modid, const int _loc)
{
    if (if_last_8DAoFAdf(items).syntax & s_ParseSyntax_PS_DISCARD)
        items += make_Ye1xBxIB(s_kind_void, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);

    return make_Ye1xBxIB(s_kind_block, items, s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseBlock_3kYRqpxU(int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> _0 {};
    return (_0 = parseBlockLike_DXPdKybL(s_kind_op, "}"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns), createBlock_lBG6vQSd(static_cast<fu_VEC<s_Node>&&>(_0), (*(const fu_STR*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_s0wc1nsn(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& label = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    /*MOV*/ s_Node stmt = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    if ((stmt.kind == s_kind_loop) || (stmt.kind == s_kind_block))
    {
        if (stmt.value)
            fail_DFmt4Umh((((("Label `"_fu + label) + "`: statement already labeled as `"_fu) + stmt.value) + "`."_fu), tokens, _idx, fname, src);

        stmt.value = label;
        return /*NRVO*/ stmt;
    };
    return createBlock_lBG6vQSd(fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(stmt) } }, label, modid, _loc);
}

static bool softSemi_qUCXLPGA(fu::view<s_Token> tokens, int& _idx, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_op)
    {
        if (peek.value == ";"_fu)
        {
            _idx++;
            return true;
        };
        if ((peek.value == "}"_fu) || (peek.value == ")"_fu))
            return false;

    }
    else if (peek.col == _col0)
        return false;

    warn_MBVnJZGU((("Missing semicollon before `"_fu + peek.value) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);
    return false;
}

static s_Node parseLetStmt_614s079K(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node ret = parseLet_0SukHiwN(false, false, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node pipelineLeft_AvqUWP2O(/*MOV*/ s_Node&& left, const s_Node& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (left.kind != s_kind_call)
        fail_DFmt4Umh("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    left.items.push(s_Node(right));
    left.syntax &= ~s_ParseSyntax_PS_ID;
    return static_cast<s_Node&&>(left);
}

static s_Node parseExpressionStatement_qJXqP7tq(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node expr = parseExpression_YeBII3Si(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    if (tryConsume_Q98B5tWF(s_kind_op, ":"_fu, tokens, _idx))
    {
        if (!(expr.kind == s_kind_call))
            fail_DFmt4Umh("Cannot pipeline: expression is not a call."_fu, tokens, _idx, fname, src);

        s_Node right = parseExpression_YeBII3Si(P_RESET, M_LAMBDA_STMT_OK, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        return pipelineLeft_AvqUWP2O(s_Node(expr), right, tokens, _idx, fname, src);
    };
    if (softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc))
        expr.syntax |= s_ParseSyntax_PS_DISCARD;

    return /*NRVO*/ expr;
}

static s_Node parseLetOrExpressionStatement_No5eJMdY(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == s_kind_id) && (tokens[_idx].kind == s_kind_id))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_614s079K(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

        if (v == "lax"_fu)
            return ((void)_idx--, parseLetStmt_614s079K(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns));

        if (v == "mut"_fu)
            return ((void)_idx--, parseLetStmt_614s079K(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns));

        if (v == "ref"_fu)
            return ((void)_idx--, parseLetStmt_614s079K(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns));

    };
    _idx--;
    if (!_fnDepth)
        fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src);

    return parseExpressionStatement_qJXqP7tq(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
}

                                #ifndef DEF_only_qWkyL0ya
                                #define DEF_only_qWkyL0ya
inline char only_qWkyL0ya(fu::view<char> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createPrefix_KZnEQwlS(const fu_STR& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == s_kind_int) || (expr.kind == s_kind_real)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_qWkyL0ya(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    };
    return createCall_B17dDqzz(op, (s_Flags_F_PREFIX | s_Flags_F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, s_ParseSyntax{}, modid, _loc);
}

static s_Node createIf_fnZWnN0I(const s_Node& cond, const s_Node& cons, const s_Node& alt, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_if, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node flattenIfSame_CpgpGwZ1(const s_kind kind, const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    const s_kind k_left = left.kind;
    const s_kind k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_Ye1xBxIB(kind, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, syntax, modid, _loc);
}

static s_Node createAnd_AOqugKWN(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_CpgpGwZ1(s_kind_and, left, right, syntax, modid, _loc);
}

static s_Node parseIf_w4zhCCjQ(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == s_kind_id) && (prev.value == "else"_fu)) ? prev : token);
    const s_Token& nOt = tryConsume_Q98B5tWF(s_kind_op, "!"_fu, tokens, _idx);
    consume_4wHlPQvc(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cond = parseLetOrExpressionStatement_No5eJMdY(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_4wHlPQvc(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (nOt)
        cond = createPrefix_KZnEQwlS("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    const s_Token& eLse = tryConsume_Q98B5tWF(s_kind_id, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.line == token_1.line) || (eLse.col == token_1.col)))
            warn_MBVnJZGU((x7E((x7E((x7E("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.col)) + ", got "_fu), fu::i64dec(eLse.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.line)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        s_Node alt = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        return createIf_fnZWnN0I(cond, cons, alt, s_ParseSyntax_PS_DISCARD, modid, _loc);
    };
    return createAnd_AOqugKWN(cond, cons, s_ParseSyntax_PS_DISCARD, modid, _loc);
}

                                #ifndef DEF_str_omkBT2iF
                                #define DEF_str_omkBT2iF
inline fu_STR str_omkBT2iF(const s_kind n)
{

    {
        if (n == s_kind_sof)
            return "sof"_fu;

        if (n == s_kind_id)
            return "id"_fu;

        if (n == s_kind_op)
            return "op"_fu;

        if (n == s_kind_int)
            return "int"_fu;

        if (n == s_kind_real)
            return "real"_fu;

        if (n == s_kind_char)
            return "char"_fu;

        if (n == s_kind_str)
            return "str"_fu;

        if (n == s_kind_err)
            return "err"_fu;

        if (n == s_kind_eof)
            return "eof"_fu;

        if (n == s_kind_root)
            return "root"_fu;

        if (n == s_kind_block)
            return "block"_fu;

        if (n == s_kind_argid)
            return "argid"_fu;

        if (n == s_kind_let)
            return "let"_fu;

        if (n == s_kind_call)
            return "call"_fu;

        if (n == s_kind_arrlit)
            return "arrlit"_fu;

        if (n == s_kind_if)
            return "if"_fu;

        if (n == s_kind_or)
            return "or"_fu;

        if (n == s_kind_and)
            return "and"_fu;

        if (n == s_kind_loop)
            return "loop"_fu;

        if (n == s_kind_break)
            return "break"_fu;

        if (n == s_kind_return)
            return "return"_fu;

        if (n == s_kind_continue)
            return "continue"_fu;

        if (n == s_kind_bool)
            return "bool"_fu;

        if (n == s_kind_definit)
            return "definit"_fu;

        if (n == s_kind_import)
            return "import"_fu;

        if (n == s_kind_defer)
            return "defer"_fu;

        if (n == s_kind_try)
            return "try"_fu;

        if (n == s_kind_typedef)
            return "typedef"_fu;

        if (n == s_kind_typecast)
            return "typecast"_fu;

        if (n == s_kind_typeassert)
            return "typeassert"_fu;

        if (n == s_kind_typeparam)
            return "typeparam"_fu;

        if (n == s_kind_addroffn)
            return "addroffn"_fu;

        if (n == s_kind_forfieldsof)
            return "forfieldsof"_fu;

        if (n == s_kind_pragma)
            return "pragma"_fu;

        if (n == s_kind_void)
            return "void"_fu;

        if (n == s_kind_struct)
            return "struct"_fu;

        if (n == s_kind_union)
            return "union"_fu;

        if (n == s_kind_primitive)
            return "primitive"_fu;

        if (n == s_kind_flags)
            return "flags"_fu;

        if (n == s_kind_enum)
            return "enum"_fu;

        if (n == s_kind_members)
            return "members"_fu;

        if (n == s_kind_fn)
            return "fn"_fu;

        if (n == s_kind_fnbranch)
            return "fnbranch"_fu;

        if (n == s_kind_pattern)
            return "pattern"_fu;

        if (n == s_kind_typeunion)
            return "typeunion"_fu;

        if (n == s_kind_typetag)
            return "typetag"_fu;

        if (n == s_kind_jump)
            return "jump"_fu;

        if (n == s_kind_empty)
            return "empty"_fu;

        if (n == s_kind_letdef)
            return "letdef"_fu;

        if (n == s_kind___relaxed)
            return "__relaxed"_fu;

        if (n == s_kind___convert)
            return "__convert"_fu;

        if (n == s_kind_fndef)
            return "fndef"_fu;

        if (n == s_kind_copy)
            return "copy"_fu;

        if (n == s_kind_move)
            return "move"_fu;

        if (n == s_kind___far_jump)
            return "__far_jump"_fu;

        if (n == s_kind___no_kind_yet)
            return "__no_kind_yet"_fu;

        if (n == s_kind_type)
            return "type"_fu;

        if (n == s_kind_var)
            return "var"_fu;

        if (n == s_kind_field)
            return "field"_fu;

        if (n == s_kind_enumv)
            return "enumv"_fu;

        if (n == s_kind_template)
            return "template"_fu;

        if (n == s_kind___native)
            return "__native"_fu;

        if (n == s_kind_inline)
            return "inline"_fu;

    };
    return fu::i64dec(int64_t(n));
}
                                #endif

static s_Node parseParens_ReyK06G0(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node out = parseExpression_YeBII3Si(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    out.syntax |= s_ParseSyntax_PS_PARENS;
    consume_4wHlPQvc(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return /*NRVO*/ out;
}

static s_Node createLoop_JpJ8cK94(const s_Node& init, const s_Node& pre_cond, const s_Node& body, const s_Node& post_cond, const s_Node& post, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_loop, fu_VEC<s_Node> { fu::slate<5, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(body), s_Node(post_cond), s_Node(post) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseFor_xeOr9iXO(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    consume_4wHlPQvc(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (tryConsume_Q98B5tWF(s_kind_id, "fieldname"_fu, tokens, _idx))
    {
        const fu_STR& placeholder = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        consume_4wHlPQvc(s_kind_op, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node type = parseTypeAnnot_c1VMMa5D(false, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        consume_4wHlPQvc(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node body = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
        return make_Ye1xBxIB(s_kind_forfieldsof, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(body) } }, s_Flags{}, placeholder, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    };
    s_Node init = (!tryConsume_Q98B5tWF(s_kind_op, ";"_fu, tokens, _idx) ? parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : s_Node{});
    if (init && (init.kind != s_kind_let))
        fail_DFmt4Umh((x7E("`for` expects a `let` statement, got a `"_fu, str_omkBT2iF(init.kind)) + "`."_fu), tokens, _idx, fname, src);

    s_Node pre_cond = (!tryConsume_Q98B5tWF(s_kind_op, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_No5eJMdY(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : s_Node{});
    const s_Token& token = tokens[_idx];
    s_Node post = (!((token.kind == s_kind_op) && (token.value == ")"_fu)) ? parseParens_ReyK06G0(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : ((void)(consume_4wHlPQvc(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src) ? void() : void()), s_Node{}));
    s_Node body = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    return createLoop_JpJ8cK94(init, pre_cond, body, (*(const s_Node*)fu::NIL), post, modid, _loc);
}

static s_Node parseWhile_cl3fXBiS(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    consume_4wHlPQvc(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node pre_cond = parseLetOrExpressionStatement_No5eJMdY(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_4wHlPQvc(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node body = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    return createLoop_JpJ8cK94((*(const s_Node*)fu::NIL), pre_cond, body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_zJeCU1fe(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    s_Node body = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_4wHlPQvc(s_kind_id, "while"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_4wHlPQvc(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node post_cond = parseLetOrExpressionStatement_No5eJMdY(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_4wHlPQvc(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLoop_JpJ8cK94((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, post_cond, (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node createJump_aHs3oaO5(const s_kind kind, const fu_STR& label, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_Ye1xBxIB(kind, (expr ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } } : fu_VEC<s_Node>{}), flags, label, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseJump_KUu5vQ4u(const s_kind kind, int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src);
    };
    const fu_STR& label = (tryConsume_Q98B5tWF(s_kind_op, ":"_fu, tokens, _idx) ? consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value : (*(const fu_STR*)fu::NIL));
    s_Node expr {};
    if (!tryConsume_Q98B5tWF(s_kind_op, ";"_fu, tokens, _idx))
    {
        expr = parseExpression_YeBII3Si(P_RESET, M_LINT_ENSURE_INDENT, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    };
    return createJump_aHs3oaO5(kind, label, expr, s_Flags{}, modid, _loc);
}

static s_Node createLet_kI3eJcYw(const fu_STR& id, const s_Node& type, const s_Node& init, const s_Flags flags, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_let, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseCatchErrvar_Ymjs1Q6V(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    const fu_STR& id = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    return createLet_kI3eJcYw(id, createRead_6amIEpsx("string"_fu, s_Flags{}, modid, _loc, tokens, _idx, fname, src), s_Node{}, s_Flags{}, modid, _loc);
}

static s_Node parseTryCatch_6ScTKJdc(int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src);
    };
    s_Node tRy = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    consume_4wHlPQvc(s_kind_id, "catch"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_4wHlPQvc(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node err = parseCatchErrvar_Ymjs1Q6V(tokens, _idx, fname, src, modid, _loc);
    consume_4wHlPQvc(s_kind_op, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cAtch = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    return make_Ye1xBxIB(s_kind_try, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(tRy), s_Node(err), s_Node(cAtch) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_each_k3p0wKfc
                                #define DEF_each_k3p0wKfc
inline void each_k3p0wKfc(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        s_Node& item = a.mutref(i);
        if (item.kind == s_kind_let)
            item.flags |= s_Flags_F_PREDICATE;

    };
}
                                #endif

static s_Node parseStructDecl_khOOi9hF(const s_kind kind, const s_Flags flags, const s_DeclAsserts asserts, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& name = tryConsume_Q98B5tWF(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    consume_4wHlPQvc(s_kind_op, "{"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    fu_VEC<s_Node> items = parseBlockLike_DXPdKybL(s_kind_op, "}"_fu, true, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

    { {

        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_Node& item = items[i];
                if ((item.kind == s_kind_let) && (item.flags & s_Flags_F_PREDICATE))
                    goto BL_1;

            };
        };
        each_k3p0wKfc(items);
      } BL_1:;
    };
    return make_Ye1xBxIB(kind, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node{}, make_Ye1xBxIB(s_kind_members, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc) } }, flags, name, asserts, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseTypedef_uiDTfM2o(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& name = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    consume_4wHlPQvc(s_kind_op, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node annot = parseTypeAnnot_c1VMMa5D(false, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return make_Ye1xBxIB(s_kind_typedef, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(annot) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static void set_PUB_9AQ8qxnN(s_Flags& flags, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, bool& _hasPUB)
{
    flags |= s_Flags_F_PUB;
    if (flags & s_Flags_F_SHADOW)
        fail_DFmt4Umh("Cannot pub a shadow."_fu, tokens, _idx, fname, src);

    _hasPUB = true;
}

static s_Node parsePub_rgwkBxCE(int& _fnDepth, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    if (_fnDepth)
        fail_DFmt4Umh("Cannot pub from within a fn."_fu, tokens, _idx, fname, src);

    /*MOV*/ s_Node out = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    set_PUB_9AQ8qxnN(out.flags, tokens, _idx, fname, src, _hasPUB);
    return /*NRVO*/ out;
}

static s_Node parseShadow_eksFR601(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node out = parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    out.flags |= s_Flags_F_SHADOW;
    if (out.flags & s_Flags_F_PUB)
        fail_DFmt4Umh("Cannot shadow a pub."_fu, tokens, _idx, fname, src);

    return /*NRVO*/ out;
}

static s_Node parseFixityDecl_UAL4gsmJ(const s_Flags flags, const s_DeclAsserts asserts, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    if ((flags & s_Flags_F_CONVERSION) && (flags & ((s_Flags_F_INFIX | s_Flags_F_PREFIX) | s_Flags_F_POSTFIX)))
        fail_DFmt4Umh("`implicit` functions can't be operators."_fu, tokens, _idx, fname, src);

    consume_4wHlPQvc(s_kind_id, "fn"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseFnDecl_ir2gvfsG(s_Flags(flags), asserts, expr, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
}

static s_Node parseInlineDecl_WSJIdoWY(s_Flags flags, const s_Flags F, const s_DeclAsserts asserts, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    flags |= F;
    fu::view<char> v = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "infix"_fu)
        return parseFixityDecl_UAL4gsmJ((flags | s_Flags_F_INFIX), s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

    if (v == "prefix"_fu)
        return parseFixityDecl_UAL4gsmJ((flags | s_Flags_F_PREFIX), s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

    if (v == "postfix"_fu)
        return parseFixityDecl_UAL4gsmJ((flags | s_Flags_F_POSTFIX), s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

    _idx--;
    return parseFixityDecl_UAL4gsmJ(flags, asserts, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
}

static s_Node parseConversionDecl_LABr5nf4(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    const s_Flags flags = s_Flags_F_CONVERSION;
    fu::view<char> v = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "inline"_fu)
        return parseInlineDecl_WSJIdoWY(s_Flags(flags), s_Flags_F_INLINE, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

    _idx--;
    return parseFixityDecl_UAL4gsmJ(flags, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
}

static s_Node parseNoCopy_vhwUrISx(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    consume_4wHlPQvc(s_kind_id, "struct"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseStructDecl_khOOi9hF(s_kind_struct, s_Flags{}, s_DeclAsserts_A_NOCOPY, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
}

static s_Node parseImport_KY8gz82V(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int _loc, fu_VEC<fu_STR>& fuzimports, const int modid)
{
    fu_STR value { tryConsume_Q98B5tWF(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (value)
    {
        while (tryConsume_Q98B5tWF(s_kind_op, "::"_fu, tokens, _idx))
            value += ("/"_fu + consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    }
    else
        value = consume_4wHlPQvc(s_kind_str, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;

    softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    value = registerImport_1IF84QCG(fu_STR(value), fname, fuzimports);
    return make_Ye1xBxIB(s_kind_import, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static void softComma_FeR7VjxS(fu::view<char> endop, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_op)
    {
        if (peek.value == ","_fu)
        {
            _idx++;
            return;
        };
        if (peek.value == endop)
            return;

    };
    if ((peek.kind == s_kind_str) != (tokens[(_idx - 1)].kind == s_kind_str))
        return;

    warn_MBVnJZGU((("Missing comma before `"_fu + peek.value) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);
}

static fu_STR getAutoName_xOENuT50(const s_Node& expr, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if ((expr.kind == s_kind_call) && hasIdentifierChars_ZCtM7908(expr.value))
        return fu_STR(expr.value);

    if (expr.items)
    {
        const int i = (((expr.kind == s_kind_and) && (expr.items.size() - 1)) ? ((expr.kind == s_kind_if) ? 1 : int{}) : 0);
        return getAutoName_xOENuT50(expr.items[i], tokens, _idx, fname, src);
    };
    fail_DFmt4Umh("Can't :autoname this expression."_fu, tokens, _idx, fname, src);
}

static s_Node createArgID_W5z6ATse(const fu_STR& id, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_argid, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Flags parseCallArgs_BFBtamba(fu::view<char> endop, fu_VEC<s_Node>& out_args, const bool experimental_sliceAnnots, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, int& _col0, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Flags flags {};
    bool first = true;
    for (; ; )
    {
        if (experimental_sliceAnnots && tryConsume_Q98B5tWF(s_kind_op, ";"_fu, tokens, _idx))
        {
            consume_4wHlPQvc(s_kind_op, endop, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
            break;
        };
        if (!first)
            softComma_FeR7VjxS(endop, tokens, _idx, warnings, options, fname, src, _loc);

        if (tryConsume_Q98B5tWF(s_kind_op, endop, tokens, _idx))
            break;

        first = false;
        fu_STR name {};
        bool autoName = false;
        bool optional = false;
        const s_Token& tok0 = tokens[_idx];
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
        s_Node expr = parseExpression_YeBII3Si(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        if (autoName)
            name = getAutoName_xOENuT50(expr, tokens, _idx, fname, src);

        if (name)
            flags |= s_Flags_F_NAMED_ARGS;

        out_args.push((name ? createArgID_W5z6ATse(name, expr, (optional ? s_Flags_F_OPT_ARG : s_Flags{}), modid, _loc) : s_Node(expr)));
    };
    return /*NRVO*/ flags;
}

static s_Node parseCompilerPragma_wdZzmlmZ(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, int& _col0, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& value = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    fu_VEC<s_Node> items {};
    if (value != "break"_fu)
    {
        consume_4wHlPQvc(s_kind_op, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        parseCallArgs_BFBtamba(")"_fu, items, bool{}, tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    };
    return make_Ye1xBxIB(s_kind_pragma, items, s_Flags{}, value, s_DeclAsserts{}, (softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc) ? s_ParseSyntax_PS_DISCARD : s_ParseSyntax{}), modid, _loc);
}

static s_Node parsePrimDecl_0E3MBfIl(const s_kind kind, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& name = tryConsume_Q98B5tWF(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    s_Node annot = tryPopTypeAnnot_CnS8LGj7(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    fu_VEC<s_Node> items = (tryConsume_Q98B5tWF(s_kind_op, "{"_fu, tokens, _idx) ? parseBlockLike_DXPdKybL(s_kind_op, "}"_fu, false, true, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : fu_VEC<s_Node>{});
    if ((kind != s_kind_enum) && (kind != s_kind_flags))
    {
        if (!(annot))
            fail_DFmt4Umh("`primitive` declarations require a base type annotation."_fu, tokens, _idx, fname, src);

    };
    return make_Ye1xBxIB(kind, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(annot), (items ? make_Ye1xBxIB(s_kind_members, items, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc) : s_Node{}) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static void add_1CUkGuxm(const s_DeclAsserts assert, s_DeclAsserts& asserts, const fu_STR& v, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (asserts & assert)
        fail_DFmt4Umh(("Dulicate assertion: "_fu + qKW_HfIK3mvn(v)), tokens, _idx, fname, src);

    asserts |= assert;
}

static void add_60GgLnjz(const s_Flags flag, s_Flags& flags, const fu_STR& v, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (flags & flag)
        fail_DFmt4Umh(("Duplicate qualifier: "_fu + qKW_HfIK3mvn(v)), tokens, _idx, fname, src);

    flags |= flag;
}

static s_Node parseExoticDecl_mQPdS1Xk(s_Flags flags, s_DeclAsserts asserts, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    for (; ; )
    {
        const fu_STR& v = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (v == "pure"_fu)
            add_1CUkGuxm(s_DeclAsserts_A_PURE, asserts, v, tokens, _idx, fname, src);
        else if (v == "purectx"_fu)
            add_1CUkGuxm(s_DeclAsserts_A_PURE_CTX, asserts, v, tokens, _idx, fname, src);
        else if (v == "novec"_fu)
            add_1CUkGuxm(s_DeclAsserts_A_NOVEC, asserts, v, tokens, _idx, fname, src);
        else if (v == "noflow"_fu)
            add_1CUkGuxm(s_DeclAsserts_A_NOFLOW, asserts, v, tokens, _idx, fname, src);
        else if (v == "extern"_fu)
            add_60GgLnjz(s_Flags_F_EXTERN, flags, v, tokens, _idx, fname, src);
        else if (v == "hotswap"_fu)
            add_60GgLnjz(s_Flags_F_HOTSWAP, flags, v, tokens, _idx, fname, src);
        else if (v == "fn"_fu)
            return ((void)_idx--, parseInlineDecl_WSJIdoWY(s_Flags{}, flags, s_DeclAsserts(asserts), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns));
        else
            fail_DFmt4Umh(("Unknown qualifier: "_fu + qKW_HfIK3mvn(v)), tokens, _idx, fname, src);

    };
}

static s_Node parseStatement_gygIW4zW(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_loc = _idx++)])) ? *_0 : fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src));
    if (token.kind == s_kind_op)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_3kYRqpxU(_idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

        if (v == ":"_fu)
            return parseLabelledStatement_s0wc1nsn(tokens, _idx, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

    }
    else if (token.kind == s_kind_id)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_w4zhCCjQ(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "for"_fu)
                return parseFor_xeOr9iXO(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "while"_fu)
                return parseWhile_cl3fXBiS(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "do"_fu)
                return parseDoWhile_zJeCU1fe(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "return"_fu)
                return parseJump_KUu5vQ4u(s_kind_return, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "break"_fu)
                return parseJump_KUu5vQ4u(s_kind_break, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "continue"_fu)
                return parseJump_KUu5vQ4u(s_kind_continue, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "try"_fu)
                return parseTryCatch_6ScTKJdc(_fnDepth, _idx, tokens, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

        };
        if ((peek.kind == s_kind_op) && (peek.value == "{"_fu))
        {
            if (v == "struct"_fu)
                return parseStructDecl_khOOi9hF(s_kind_struct, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "union"_fu)
                return parseStructDecl_khOOi9hF(s_kind_union, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

        };
        if ((v == "fn"_fu) && ((peek.kind == s_kind_id) || !_fnDepth))
            return parseFnDecl_ir2gvfsG(s_Flags{}, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

        if (peek.kind == s_kind_id)
        {
            if (v == "struct"_fu)
                return parseStructDecl_khOOi9hF(s_kind_struct, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "union"_fu)
                return parseStructDecl_khOOi9hF(s_kind_union, s_Flags{}, s_DeclAsserts{}, tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "type"_fu)
                return parseTypedef_uiDTfM2o(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "pub"_fu)
                return parsePub_rgwkBxCE(_fnDepth, tokens, _idx, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "shadow"_fu)
                return parseShadow_eksFR601(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "using"_fu)
                return parseConversionDecl_LABr5nf4(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "nocopy"_fu)
                return parseNoCopy_vhwUrISx(tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "import"_fu)
                return parseImport_KY8gz82V(tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid);

            if (v == "pragma"_fu)
                return parseCompilerPragma_wdZzmlmZ(tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "inline"_fu)
                return parseInlineDecl_WSJIdoWY(s_Flags{}, s_Flags_F_INLINE, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "infix"_fu)
                return parseFixityDecl_UAL4gsmJ(s_Flags_F_INFIX, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "prefix"_fu)
                return parseFixityDecl_UAL4gsmJ(s_Flags_F_PREFIX, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "postfix"_fu)
                return parseFixityDecl_UAL4gsmJ(s_Flags_F_POSTFIX, s_DeclAsserts{}, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "primitive"_fu)
                return parsePrimDecl_0E3MBfIl(s_kind_primitive, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "flags"_fu)
                return parsePrimDecl_0E3MBfIl(s_kind_flags, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "enum"_fu)
                return parsePrimDecl_0E3MBfIl(s_kind_enum, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "pure"_fu)
                return parseExoticDecl_mQPdS1Xk(s_Flags{}, s_DeclAsserts_A_PURE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "purectx"_fu)
                return parseExoticDecl_mQPdS1Xk(s_Flags{}, s_DeclAsserts_A_PURE_CTX, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "novec"_fu)
                return parseExoticDecl_mQPdS1Xk(s_Flags{}, s_DeclAsserts_A_NOVEC, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "noflow"_fu)
                return parseExoticDecl_mQPdS1Xk(s_Flags{}, s_DeclAsserts_A_NOFLOW, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "extern"_fu)
                return parseExoticDecl_mQPdS1Xk(s_Flags_F_EXTERN, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            if (v == "hotswap"_fu)
                return parseExoticDecl_mQPdS1Xk(s_Flags_F_HOTSWAP, s_DeclAsserts{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

        };
    };
    _idx--;
    return parseLetOrExpressionStatement_No5eJMdY(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
}

static s_Node parseFnBodyBranch_FeJJa7ss(const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    tryConsume_Q98B5tWF(s_kind_op, "="_fu, tokens, _idx);
    return (expr ? parseExpression_YeBII3Si(_precedence, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns));
}

static void parseBranch_8CgiEQIf(const bool noCond, bool& _TODO_FIX_dollarOk, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns, fu_VEC<s_Node>& branches)
{
    _TODO_FIX_dollarOk = true;
    s_Node cond = (!noCond ? parseUnaryExpression_JSzKkS2X(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : s_Node{});
    _TODO_FIX_dollarOk = false;
    s_Node type = tryPopTypeAnnot_CnS8LGj7(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    s_Node cons = parseFnBodyBranch_FeJJa7ss(bool{}, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    branches.push(make_Ye1xBxIB(s_kind_fnbranch, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(type), s_Node(cons) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
}

static s_Flags parseFnBodyOrPattern_llDTSfD4(fu_VEC<s_Node>& out_push_body, const bool expr, fu::view<s_Token> tokens, int& _idx, bool& _TODO_FIX_dollarOk, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ const s_Flags flags {};
    s_Node body {};
    if (!expr && tryConsume_Q98B5tWF(s_kind_id, "case"_fu, tokens, _idx))
    {
        fu_VEC<s_Node> branches {};
        do
            parseBranch_8CgiEQIf(bool{}, _TODO_FIX_dollarOk, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, fuzimports, _hasPUB, _anonFns, branches);
        while (tryConsume_Q98B5tWF(s_kind_id, "case"_fu, tokens, _idx));
        if (tryConsume_Q98B5tWF(s_kind_id, "default"_fu, tokens, _idx))
            parseBranch_8CgiEQIf(true, _TODO_FIX_dollarOk, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, fuzimports, _hasPUB, _anonFns, branches);

        body = make_Ye1xBxIB(s_kind_pattern, branches, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
    }
    else
        body = parseFnBodyBranch_FeJJa7ss(expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

    out_push_body.push(s_Node(body));
    return /*NRVO*/ flags;
}

static s_Node parseFnDecl_cont_Xo2MY9zP(const fu_STR& name, s_Flags flags, const s_DeclAsserts asserts, const bool expr, const fu_STR& endv, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
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
    flags |= (endv ? parseArgsDecl_I7TYo8d6(items, s_kind_op, endv, _dollarAuto, _TODO_FIX_dollarOk, _dollars, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _hasPUB, _anonFns) : s_Flags{});
    s_Node type = tryPopTypeAnnot_CnS8LGj7(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    const int retIdx = items.size();
    items.push(s_Node(type));
    flags |= parseFnBodyOrPattern_llDTSfD4(items, expr, tokens, _idx, _TODO_FIX_dollarOk, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    if ((name == "main"_fu) && (_fnDepth == 1))
    {
        if (!type)
            items.mutref(retIdx) = (type = createRead_6amIEpsx("i32"_fu, s_Flags{}, modid, _loc, tokens, _idx, fname, src));
        else if ((type.kind != s_kind_call) || (type.value != "i32"_fu) || type.items.size())
            fail_DFmt4Umh("fn main() must return i32."_fu, tokens, _idx, fname, src);

        set_PUB_9AQ8qxnN(flags, tokens, _idx, fname, src, _hasPUB);
        flags |= s_Flags_F_EXTERN;
    };
    if (_dollars.size() > dollars0)
        flags |= s_Flags_F_TEMPLATE;

    return make_Ye1xBxIB(s_kind_fn, items, flags, name, asserts, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseFnDecl_ir2gvfsG(s_Flags flags, const s_DeclAsserts asserts, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    fu_STR name { tryConsume_Q98B5tWF(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (!name)
    {
        const s_Flags postfix = (flags & s_Flags_F_POSTFIX);
        name = consume_4wHlPQvc(s_kind_op, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (postfix)
        {
            if (!((name == "++"_fu) || (name == "--"_fu)))
                fail_DFmt4Umh((("No such postfix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

            name = ("postfix"_fu + name);
        }
        else if (flags & s_Flags_F_INFIX)
        {
            if (!(has_XfK5Iy8T(BINOP.PRECEDENCE, name)))
                fail_DFmt4Umh((("No such infix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        }
        else if (flags & s_Flags_F_PREFIX)
        {
            if (!(has_tHwH53lN(PREFIX, name)))
                fail_DFmt4Umh((("No such prefix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        };
        flags &= ~(s_Flags_F_INFIX | s_Flags_F_PREFIX);
        flags |= s_Flags_F_OPERATOR;
    }
    else if (flags & ((s_Flags_F_INFIX | s_Flags_F_PREFIX) | s_Flags_F_POSTFIX))
        fail_DFmt4Umh((("Not an operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

    fu_STR endv = (tryConsume_Q98B5tWF(s_kind_op, "("_fu, tokens, _idx) ? ")"_fu : fu_STR{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_csFELpLY(name, flags, modid, _loc);

        consume_4wHlPQvc(s_kind_op, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    return parseFnDecl_cont_Xo2MY9zP(name, s_Flags(flags), asserts, expr, endv, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
}

static s_Node createArrayLiteral_W2L1zq5Z(const s_Flags argFlags, const fu_VEC<s_Node>& items, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_arrlit, items, argFlags, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseArrayLiteral_8sRDF3aX(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, int& _col0, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_BFBtamba("]"_fu, args, true, tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    return createArrayLiteral_W2L1zq5Z(argFlags, args, modid, _loc);
}

                                #ifndef DEF_has_xAlmFa4a
                                #define DEF_has_xAlmFa4a
inline bool has_xAlmFa4a(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createTypeParam_48IxPltJ(const fu_STR& value, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_typeparam, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseTypeParam_Mk9AsUb3(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const bool _TODO_FIX_dollarOk, const int modid, const int _loc, fu_VEC<fu_STR>& _dollars, const int _dollarAuto)
{
    const fu_STR& value = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (!_TODO_FIX_dollarOk)
        return createRead_6amIEpsx(("$"_fu + value), s_Flags{}, modid, _loc, tokens, _idx, fname, src);

    if (!has_xAlmFa4a(_dollars, value) && _dollarAuto)
        _dollars.push(fu_STR(value));

    return createTypeParam_48IxPltJ(value, modid, _loc);
}

static s_Node parseLambda_5EY8yWih(const bool noArgs_noClosingPipe, const int mode, int& _precedence, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _anonFns, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _col0, bool& _hasPUB)
{
    if (noArgs_noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_MBVnJZGU("Unparenthesized `|| lambda` within a binary expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

    fu_STR _0 {};
    fu_STR name = (_0 = (x7E("l_"_fu, fu::i64dec(modid)) + "_"_fu), x7E(static_cast<fu_STR&&>(_0), fu::i64dec(_anonFns++)));
    return parseFnDecl_cont_Xo2MY9zP(name, (s_Flags_F_INLINE | s_Flags_F_LAMBDA), s_DeclAsserts{}, !(mode & M_LAMBDA_STMT_OK), (!noArgs_noClosingPipe ? "|"_fu : fu_STR{}), _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _hasPUB, _anonFns);
}

static s_Node createDefinit_ZXQpfvpB(const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_definit, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_only_PyOsqkAH
                                #define DEF_only_PyOsqkAH
inline const s_Node& only_PyOsqkAH(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createTypeTag_Wl35DpPN(const fu_STR& value, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_typetag, (*(const fu_VEC<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node typeCheck_NAdQ9Ar2(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_typeassert, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseQualifierChain_SxEZUypU(/*MOV*/ s_Node&& expr, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, const int modid, const int _loc, fu_VEC<fu_STR>& fuzimports)
{
    if ((expr.kind != s_kind_call) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & s_Flags_F_ACCESS))) || (expr.flags & s_Flags_F_COMPOUND_ID))
    {
        _idx--;
        fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src);
    };
    expr.flags |= s_Flags_F_COMPOUND_ID;
    fu_STR path { expr.value };
    for (; ; )
    {
        const fu_STR& id = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (!tryConsume_Q98B5tWF(s_kind_op, "::"_fu, tokens, _idx))
        {
            if ((path == "is"_fu) && (expr.items.size() == 1))
            {
                const s_Node& left = only_PyOsqkAH(expr.items);
                s_Node right = createTypeTag_Wl35DpPN(id, modid, _loc);
                return typeCheck_NAdQ9Ar2(left, right, modid, _loc);
            };
            path = registerImport_1IF84QCG(fu_STR(path), fname, fuzimports);
            expr.value = ((path + "\t"_fu) + id);
            return static_cast<s_Node&&>(expr);
        };
        path += ("/"_fu + id);
    };
}

static s_Node parsePrefix_xiYbiI7o(fu_STR&& op, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    if (!(has_tHwH53lN(PREFIX, op)))
    {
        _idx--;
        fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src);
    };
    if ((op == "&"_fu) && tryConsume_Q98B5tWF(s_kind_id, "mut"_fu, tokens, _idx))
        op = "&mut"_fu;

    const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
    s_Node _0 {};
    return (_0 = parseUnaryExpression_JSzKkS2X(mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns), createPrefix_KZnEQwlS(op, static_cast<s_Node&&>(_0), modid, _loc));
}

static s_Node parseExpressionHead_gerHnNqN(const int mode, fu::view<s_Token> tokens, int& _idx, const int modid, int& _loc, const fu_STR& fname, const fu_STR& src, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];

    {
        const s_kind k = token.kind;
        const fu_STR& v = token.value;
        if ((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_str) || (k == s_kind_char))
            return createLeaf_WYTyu083(k, v, modid, _loc);

        if (k == s_kind_id)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == s_kind_id)
            {
                if (v == "fn"_fu)
                    return parseFnDecl_ir2gvfsG(s_Flags{}, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

                if (v == "infix"_fu)
                    return parseFixityDecl_UAL4gsmJ(s_Flags_F_INFIX, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

                if (v == "prefix"_fu)
                    return parseFixityDecl_UAL4gsmJ(s_Flags_F_PREFIX, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

                if (v == "postfix"_fu)
                    return parseFixityDecl_UAL4gsmJ(s_Flags_F_POSTFIX, s_DeclAsserts{}, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

            };
            return createRead_6amIEpsx(v, s_Flags{}, modid, _loc, tokens, _idx, fname, src);
        };
        if (k == s_kind_op)
        {
            if (v == "("_fu)
                return parseParens_ReyK06G0(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "{"_fu)
                return parseBlock_3kYRqpxU(_idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);

            if (v == "["_fu)
                return parseArrayLiteral_8sRDF3aX(tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);

            if (v == "$"_fu)
                return parseTypeParam_Mk9AsUb3(tokens, _idx, fname, src, _TODO_FIX_dollarOk, modid, _loc, _dollars, _dollarAuto);

            if (v == "|"_fu)
                return parseLambda_5EY8yWih(bool{}, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _col0, _hasPUB);

            if (v == "||"_fu)
                return parseLambda_5EY8yWih(true, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _col0, _hasPUB);

            if (v == "[]"_fu)
                return createDefinit_ZXQpfvpB(modid, _loc);

            if (v == "::"_fu)
            {
                const fu_STR& id = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                _idx--;
                return parseQualifierChain_SxEZUypU(createRead_6amIEpsx(id, s_Flags{}, modid, _loc, tokens, _idx, fname, src), _idx, tokens, fname, src, modid, _loc, fuzimports);
            };
            if (v == "."_fu)
            {
                const fu_STR& id = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                return createAddrOfFn_csFELpLY(id, s_Flags_F_ACCESS, modid, _loc);
            };
            return parsePrefix_xiYbiI7o(fu_STR(v), _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        };
    };
    _idx--;
    fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src);
}

static s_Node miss_nvchsvdV()
{
    return s_Node{};
}

static void lint_3vSAzYNl(const int mode, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_MBVnJZGU((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), warnings, options, tokens, _idx, fname, src, _loc);

}

static s_Node parseAccessExpression_SlwAXK8M(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    s_Token id { tryConsume_Q98B5tWF(s_kind_id, fu::view<char>{}, tokens, _idx) };
    if (!id)
    {
        consume_4wHlPQvc(s_kind_op, "::"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        id = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        _idx -= 2;
    };
    return createCall_B17dDqzz(id.value, s_Flags_F_ACCESS, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseCallExpression_N0sJlrOR(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, int& _col0, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const s_Flags flags = (expr.flags | parseCallArgs_BFBtamba(")"_fu, args, bool{}, tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));
    if ((expr.kind == s_kind_call) && (flags & s_Flags_F_ACCESS))
    {
        const s_Node* _0;
        const s_Node& head = (expr.items && (expr.items.size() == 1) && *(_0 = &(expr.items[0])) ? *_0 : fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src));
        args.unshift(s_Node(head));
        return createCall_B17dDqzz((expr.value ? expr.value : fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src)), ((flags & ~s_Flags_F_ACCESS) | s_Flags_F_METHOD), args, s_ParseSyntax{}, modid, _loc);
    };
    if ((expr.kind == s_kind_call) && (expr.syntax & s_ParseSyntax_PS_ID))
        return createCall_B17dDqzz((expr.value ? expr.value : fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src)), flags, args, (expr.syntax & ~s_ParseSyntax_PS_ID), modid, _loc);

    if (expr.kind == s_kind_typeparam)
        return createCall_B17dDqzz(("$"_fu + (expr.value ? expr.value : fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src))), flags, args, s_ParseSyntax{}, modid, _loc);

    fail_DFmt4Umh("TODO dynamic call"_fu, tokens, _idx, fname, src);
}

static s_Node parseIndexExpression_KEZnTnbY(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, int& _col0, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_BFBtamba("]"_fu, args, bool{}, tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    args.unshift(s_Node(expr));
    return createCall_B17dDqzz("[]"_fu, (argFlags | s_Flags_F_OPERATOR), args, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_x3Cx3E_hvR4gqOD
                                #define DEF_x3Cx3E_hvR4gqOD
inline int x3Cx3E_hvR4gqOD(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_PEYL9mMA
                                #define DEF_x3Cx3E_PEYL9mMA
inline int x3Cx3E_PEYL9mMA(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hvR4gqOD(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_get_3QSNqawK
                                #define DEF_get_3QSNqawK
inline int get_3QSNqawK(fu::view<fu_STR> keys, fu::view<char> item, fu::view<int> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_PEYL9mMA(keys[i], item);
        if (cmp == 0)
        {
            return extras[i];
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_get_DoaqB9br
                                #define DEF_get_DoaqB9br
inline int get_DoaqB9br(const s_Map_guWsCK25& _, fu::view<char> key)
{
    return get_3QSNqawK(_.keys, key, _.vals);
}
                                #endif

static s_Node createOr_KgAzrzv8(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_CpgpGwZ1(s_kind_or, left, right, syntax, modid, _loc);
}

static s_Node pipelineRight_UksqdAq3(const s_Node& left, /*MOV*/ s_Node&& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (right.kind != s_kind_call)
        fail_DFmt4Umh("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    if (right.flags & s_Flags_F_METHOD)
        right.items.insert(1, s_Node(left));
    else
        right.items.unshift(s_Node(left));

    return static_cast<s_Node&&>(right);
}

static s_Node typeCast_0uKkrFHR(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_Ye1xBxIB(s_kind_typecast, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);
}

static s_Node tryParseBinary_jHZrHqT9(const s_Node& left, const fu_STR& op, const int p1, int& _precedence, int& _idx, int& _loc, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_nvchsvdV();

    _idx++;
    s_Node mid {};
    if (op == "?"_fu)
    {
        mid = parseExpression_YeBII3Si(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
        consume_4wHlPQvc(s_kind_op, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    s_Node right = parseExpression_YeBII3Si(p1, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    if (mid)
        return createIf_fnZWnN0I(left, mid, right, s_ParseSyntax{}, modid, _loc);

    if (op == "||"_fu)
        return createOr_KgAzrzv8(left, right, s_ParseSyntax{}, modid, _loc);

    if (op == "&&"_fu)
        return createAnd_AOqugKWN(left, right, s_ParseSyntax{}, modid, _loc);

    if ((left.kind == s_kind_and) || (left.kind == s_kind_or))
    {
        if (!(left.syntax & s_ParseSyntax_PS_PARENS))
            warn_MBVnJZGU((((x7E("Unparenthesized `"_fu, str_omkBT2iF(left.kind)) + "` on the left side of an `"_fu) + op) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);

    };
    if (op == "|>"_fu)
        return pipelineRight_UksqdAq3(left, s_Node(right), tokens, _idx, fname, src);

    if (op == "<|"_fu)
        return pipelineLeft_AvqUWP2O(s_Node(left), right, tokens, _idx, fname, src);

    if (op == "->"_fu)
        return typeCheck_NAdQ9Ar2(left, right, modid, _loc);

    if (op == "=>"_fu)
        return typeCast_0uKkrFHR(left, right, modid, _loc);

    return createCall_B17dDqzz(op, (s_Flags_F_INFIX | s_Flags_F_OPERATOR), fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } }, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_has_tkmelWjn
                                #define DEF_has_tkmelWjn
inline bool has_tkmelWjn(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node tryParseExpressionTail_NitKZGlE(const s_Node& head, const int mode, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _precedence, int& _col0, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if (token.kind == s_kind_op)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
            return ((void)_idx--, miss_nvchsvdV());

        if (v == "."_fu)
            return ((void)lint_3vSAzYNl(mode, warnings, options, tokens, _idx, fname, src, _loc), parseAccessExpression_SlwAXK8M(head, tokens, _idx, fname, src, modid, _loc));

        if (v == "("_fu)
            return ((void)lint_3vSAzYNl(mode, warnings, options, tokens, _idx, fname, src, _loc), parseCallExpression_N0sJlrOR(head, tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));

        if (v == "["_fu)
            return ((void)lint_3vSAzYNl(mode, warnings, options, tokens, _idx, fname, src, _loc), parseIndexExpression_KEZnTnbY(head, tokens, _idx, fname, src, warnings, options, _loc, _precedence, _col0, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));

        const int p1 = get_DoaqB9br(BINOP.PRECEDENCE, v);
        if (p1)
            return ((void)_idx--, tryParseBinary_jHZrHqT9(head, v, p1, _precedence, _idx, _loc, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));

        if (has_tkmelWjn(POSTFIX, v))
            return createCall_B17dDqzz((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu_STR(v)), (s_Flags_F_POSTFIX | s_Flags_F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, s_ParseSyntax{}, modid, _loc);

        if (v == "::"_fu)
            return parseQualifierChain_SxEZUypU(s_Node(head), _idx, tokens, fname, src, modid, _loc, fuzimports);

    };
    return ((void)_idx--, miss_nvchsvdV());
}

static s_Node parseExpression_YeBII3Si(const int p1, const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (mode & M_LINT_ENSURE_INDENT)
    {
        if (!(tokens[_idx].col > _col0))
            warn_MBVnJZGU(x7E((x7E((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].col)), warnings, options, tokens, _idx, fname, src, _loc);

    };
    /*MOV*/ s_Node head = parseExpressionHead_gerHnNqN(mode, tokens, _idx, modid, _loc, fname, src, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _precedence, _col0, warnings, options, _hasPUB, _anonFns);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_kind_int) || (head.kind == s_kind_real))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_NitKZGlE(head, mode_1, tokens, _idx, warnings, options, fname, src, _loc, modid, _precedence, _col0, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.col > col00))
                    warn_MBVnJZGU(x7E((x7E((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.col)), warnings, options, tokens, _idx, fname, src, _loc);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_JSzKkS2X(const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    return parseExpression_YeBII3Si(P_PREFIX_UNARY, mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
}

static s_Node parseTypeAnnot_c1VMMa5D(const bool allowTypeUnions, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    /*MOV*/ s_Node res = parseUnaryExpression_JSzKkS2X(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    while (allowTypeUnions && tryConsume_Q98B5tWF(s_kind_id, "or"_fu, tokens, _idx))
    {
        if (res.kind != s_kind_typeunion)
            res = make_Ye1xBxIB(s_kind_typeunion, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(res) } }, s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc);

        res.items += parseUnaryExpression_JSzKkS2X(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    };
    return /*NRVO*/ res;
}

static s_Node tryPopTypeAnnot_CnS8LGj7(const bool allowTypeUnions, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    return (tryConsume_Q98B5tWF(s_kind_op, ":"_fu, tokens, _idx) ? parseTypeAnnot_c1VMMa5D(allowTypeUnions, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : miss_nvchsvdV());
}

static s_Node tryParseLetInit_NxmIiLZh(fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    return tryConsume_Q98B5tWF(s_kind_op, "="_fu, tokens, _idx) ? parseExpression_YeBII3Si(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : s_Node{};
}

static s_Node parseLet_0SukHiwN(const bool xqmark, const bool allowTypeUnions, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    s_Flags flags {};
    if (tryConsume_Q98B5tWF(s_kind_id, "using"_fu, tokens, _idx))
        flags |= s_Flags_F_USING;

    if (tryConsume_Q98B5tWF(s_kind_id, "implicit"_fu, tokens, _idx))
        flags |= s_Flags_F_IMPLICIT;

    if (tryConsume_Q98B5tWF(s_kind_id, "lax"_fu, tokens, _idx))
        flags |= s_Flags_F_LAX;

    if (tryConsume_Q98B5tWF(s_kind_id, "shadow"_fu, tokens, _idx))
        flags |= s_Flags_F_SHADOW;

    if (tryConsume_Q98B5tWF(s_kind_id, "mut"_fu, tokens, _idx))
        flags |= s_Flags_F_MUT;

    if (tryConsume_Q98B5tWF(s_kind_id, "ref"_fu, tokens, _idx))
        flags |= s_Flags_F_REF;

    const s_Token& sh_import = tryConsume_Q98B5tWF(s_kind_op, "::"_fu, tokens, _idx);
    fu_STR id { consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value };
    if (id == "_"_fu)
        flags |= s_Flags_F_LAX;

    if (xqmark && tryConsume_Q98B5tWF(s_kind_op, "!"_fu, tokens, _idx))
    {
        flags |= s_Flags_F_MUSTNAME;
        const fu_STR& inner_id = tryConsume_Q98B5tWF(s_kind_id, fu::view<char>{}, tokens, _idx).value;
        if (inner_id)
        {
            flags |= s_Flags_F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    if (xqmark && tryConsume_Q98B5tWF(s_kind_op, "."_fu, tokens, _idx))
    {
        flags |= s_Flags_F_COMPOUND_ID;
        id += ("."_fu + consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);
        while (tryConsume_Q98B5tWF(s_kind_op, "::"_fu, tokens, _idx))
            id += ("\t"_fu + consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    };
    if (xqmark && tryConsume_Q98B5tWF(s_kind_op, "[]"_fu, tokens, _idx))
        flags |= s_Flags_F_REST_ARG;

    const s_Token& optional = (xqmark ? tryConsume_Q98B5tWF(s_kind_op, "?"_fu, tokens, _idx) : (*(const s_Token*)fu::NIL));
    s_Node type = (sh_import ? createRead_6amIEpsx(((registerImport_1IF84QCG(fu_STR(id), fname, fuzimports) + '\t') + id), s_Flags_F_COMPOUND_ID, modid, _loc, tokens, _idx, fname, src) : tryPopTypeAnnot_CnS8LGj7(allowTypeUnions, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));
    s_Node init = (optional ? createDefinit_ZXQpfvpB(modid, _loc) : tryParseLetInit_NxmIiLZh(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns));
    if ((flags & s_Flags_F_REF) && type)
    {
        if ((type.kind != s_kind_call) || (type.value != "&mut"_fu))
        {
            type = createPrefix_KZnEQwlS("&mut"_fu, s_Node(type), modid, _loc);
            flags &= ~s_Flags_F_REF;
        };
    };
    return createLet_kI3eJcYw(id, type, init, flags, modid, _loc);
}

static s_Node parseStructItem_ufr3PwIa(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, fu_VEC<fu_STR>& fuzimports, const int modid, int& _loc, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& isPredicate = tryConsume_Q98B5tWF(s_kind_id, "true"_fu, tokens, _idx);
    /*MOV*/ s_Node member = parseLet_0SukHiwN(true, false, tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    if (isPredicate)
        member.flags |= s_Flags_F_PREDICATE;

    return /*NRVO*/ member;
}

static s_Node parseEnumItem_NihMLCRj(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, fu_VEC<fu_STR>& fuzimports, bool& _hasPUB, int& _anonFns)
{
    const fu_STR& id = consume_4wHlPQvc(s_kind_id, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    s_Node init = tryParseLetInit_NxmIiLZh(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns);
    softSemi_qUCXLPGA(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLet_kI3eJcYw(id, (*(const s_Node*)fu::NIL), init, s_Flags{}, modid, _loc);
}

static s_Node parseDefer_bBivss9s(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token* _0;
    const fu_STR& value = (tryConsume_Q98B5tWF(s_kind_op, ":"_fu, tokens, _idx) ? (*(_0 = &(tryConsume_Q98B5tWF(s_kind_id, "err"_fu, tokens, _idx))) ? *_0 : consume_4wHlPQvc(s_kind_id, "ok"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src)).value : (*(const fu_STR*)fu::NIL));
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_DFmt4Umh(fu_STR{}, tokens, _idx, fname, src);
    };
    fu_VEC<s_Node> _1 {};
    return (_1 = fu_VEC<s_Node> { fu::slate<1, s_Node> { parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) } }, make_Ye1xBxIB(s_kind_defer, static_cast<fu_VEC<s_Node>&&>(_1), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
}

static s_Node parseStatementOrDefer_z365SNuu(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_id)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
            return ((void)_idx++, parseDefer_bBivss9s(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns));

    };
    return parseStatement_gygIW4zW(_loc, tokens, _idx, fname, src, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
}

static fu_VEC<s_Node> parseBlockLike_DXPdKybL(const s_kind endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
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
        };
        if ((token.kind == endKind) && (token.value == endVal))
        {
            _col0 = col00;
            _idx++;
            const int line1 = token.line;
            const int col1 = token.col;
            if (!((line1 == line0) || (col1 == _col0)))
                warn_MBVnJZGU((x7E((x7E((x7E((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            break;
        };
        _col0 = token.col;
        if (!(_col0 > col00))
            warn_MBVnJZGU((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (!((colNN < 0) || (colNN == _col0) || (token.line == lineNN)))
            warn_MBVnJZGU((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (colNN < 0)
            colNN = _col0;

        lineNN = token.line;
        s_Node expr = (sTruct ? parseStructItem_ufr3PwIa(tokens, _idx, fname, src, fuzimports, modid, _loc, _precedence, _col0, warnings, options, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns) : (eNum ? parseEnumItem_NihMLCRj(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, fuzimports, _hasPUB, _anonFns) : parseStatementOrDefer_z365SNuu(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns)));
        if (!((expr.kind != s_kind_call) || (!(expr.flags & s_Flags_F_ACCESS) && !(expr.syntax & s_ParseSyntax_PS_ID)) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
            warn_MBVnJZGU("Orphan pure-looking expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

        items.push(s_Node(expr));
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_aN9tCLTM(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu_VEC<fu_STR>& fuzimports, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, bool& _TODO_FIX_dollarOk, int& _dollarAuto, bool& _hasPUB, int& _anonFns)
{
    consume_4wHlPQvc(s_kind_sof, "sof"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    _loc = _idx;
    fu_VEC<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_DXPdKybL(s_kind_eof, "eof"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns), make_Ye1xBxIB(s_kind_root, static_cast<fu_VEC<s_Node>&&>(_0), s_Flags{}, (*(const fu_STR*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, modid, _loc));
    if (use_AUTOPUB && !_hasPUB)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            const s_kind k = item.kind;
            if (((k == s_kind_fn) || (k == s_kind_let) || (k == s_kind_typedef) || (k == s_kind_struct) || (k == s_kind_union) || (k == s_kind_enum) || (k == s_kind_flags) || (k == s_kind_primitive)) && !(item.flags & s_Flags_F_SHADOW))
                set_PUB_9AQ8qxnN(item.flags, tokens, _idx, fname, src, _hasPUB);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_f0oA1Wp0(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options)
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
    fu_VEC<fu_STR> fuzimports {};
    fu_VEC<fu_STR> warnings {};
    if (!(tokens[(tokens.size() - 1)].kind == s_kind_eof))
        fail_DFmt4Umh("Missing `eof` token."_fu, tokens, _idx, fname, src);

    s_Node root = parseRoot_aN9tCLTM(tokens, _idx, fname, src, _loc, _col0, warnings, options, fuzimports, modid, _precedence, _fnDepth, _dollars, _TODO_FIX_dollarOk, _dollarAuto, _hasPUB, _anonFns);
    return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(fuzimports), fu_VEC<fu_STR>(warnings) };
}

#endif
