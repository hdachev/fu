
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/init_priority.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_BINOP;
struct s_Lint;
struct s_Map_sccv6lFJ;
struct s_Node;
struct s_Options;
struct s_ParserOutput;
struct s_Token;
struct s_TokenIdx;

[[noreturn]] fu::never FAIL_1XGXUxQg(fu::view<char>, const fu_STR&, const s_Token&, fu::view<char>);
bool hasIdentifierChars_85KQkyE0(fu::view<char>);
fu_STR dirname_9EcF53rc(const fu_STR&);
fu_STR ext_9EcF53rc(const fu_STR&);
fu_STR join_lq7BzT61(fu::view<char>, const fu_STR&);
fu_STR qKW_HIwg52Ja(const fu_STR&);
static fu_STR getAutoName_KAlYx4Jf(const s_Node&, fu::view<s_Token>, int, fu::view<char>, const fu_STR&);
static fu_VEC<s_Node> parseBlockLike_pFwOQQRr(fu::view<char>, fu::view<char>, bool, bool, int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static int parseArgsDecl_Qbb3brKi(fu_VEC<s_Node>&, fu::view<char>, fu::view<char>, int&, fu_VEC<fu_STR>&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, bool&, fu_VEC<fu_STR>&, int&);
static int parseCallArgs_yL7Kcldy(fu::view<char>, fu_VEC<s_Node>&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static int parseFnBodyOrPattern_0EBJAg0U(fu_VEC<s_Node>&, bool, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseBlock_DWuFw5p4(int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseCompilerPragma_6GTsIxpa(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseConversionDecl_w4zhCCjQ(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseDoWhile_KT1ikYn2(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseExoticDecl_MYhRkXce(int, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseExpressionHead_Gr9h39cN(int, fu::view<s_Token>, int&, int, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseExpressionStatement_Ymjs1Q6V(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseExpression_V9QrobCn(int, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseFixityDecl_959qKhDh(int, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseFnBodyBranch_pIeS2L5F(bool, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseFnDecl_VKhRZco8(int, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseFnDecl_cont_A5K0e9oP(const fu_STR&, int, bool, const fu_STR&, int&, fu_VEC<fu_STR>&, int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseFor_ejCyDy6T(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseIf_1ZTKJr5O(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseInlineDecl_UHbAuHnk(int, int, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseJump_Pkk6l58R(const fu_STR&, int&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseLabelledStatement_6ScTKJdc(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseLetOrExpressionStatement_4rIpZRjS(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseLetStmt_Q72lNbf5(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseLet_qFpep9K4(bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseParens_ys7cvKtm(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parsePrefix_fsyJV3Rb(fu_STR&&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parsePrimDecl_WiwULn9k(bool, fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parsePub_mhOGRJxt(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseShadow_TnImdy8H(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseStatement_R38NSHBa(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseStructDecl_r9rneX8Z(int, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseStructItem_jalBq2kr(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseTryCatch_v9KP5fed(int&, int&, fu::view<s_Token>, const fu_STR&, const fu_STR&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseTypeAnnot_eQUQXGkb(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseTypedef_nMKB3E06(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseUnaryExpression_oNiqjKlT(int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseWhile_miBcnbjT(fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node tryParseBinary_daxTJat7(const s_Node&, const fu_STR&, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node tryParseExpressionTail_XuirQgfT(const s_Node&, int, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, int, int&, int&, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node tryPopTypeAnnot_lzEenSx7(fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);

                                #ifndef DEF_s_Map_sccv6lFJ
                                #define DEF_s_Map_sccv6lFJ
struct s_Map_sccv6lFJ
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
    s_Map_sccv6lFJ PRECEDENCE;
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
    fu_STR kind;
    int flags;
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
    fu_STR kind;
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

#ifndef FU_NO_FDEFs

static const bool use_AUTOPUB = true;

                                #ifndef DEF_F_METHOD
                                #define DEF_F_METHOD
inline constexpr int F_METHOD = (1 << 0);
                                #endif

                                #ifndef DEF_F_INFIX
                                #define DEF_F_INFIX
inline constexpr int F_INFIX = (1 << 1);
                                #endif

                                #ifndef DEF_F_PREFIX
                                #define DEF_F_PREFIX
inline constexpr int F_PREFIX = (1 << 2);
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline constexpr int F_POSTFIX = (1 << 3);
                                #endif

                                #ifndef DEF_F_ACCESS
                                #define DEF_F_ACCESS
inline constexpr int F_ACCESS = (1 << 4);
                                #endif

                                #ifndef DEF_F_ID
                                #define DEF_F_ID
inline constexpr int F_ID = (1 << 5);
                                #endif

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

                                #ifndef DEF_F_PARENS
                                #define DEF_F_PARENS
inline constexpr int F_PARENS = (1 << 7);
                                #endif

                                #ifndef DEF_F_WRITTEN_TO
                                #define DEF_F_WRITTEN_TO
extern const int F_WRITTEN_TO = F_PARENS;
                                #endif

                                #ifndef DEF_F_LAX
                                #define DEF_F_LAX
inline constexpr int F_LAX = (1 << 8);
                                #endif

                                #ifndef DEF_F_EFFECT
                                #define DEF_F_EFFECT
extern const int F_EFFECT = F_LAX;
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

                                #ifndef DEF_F_NOFLOW
                                #define DEF_F_NOFLOW
extern const int F_NOFLOW = F_MOVED_FROM;
                                #endif

                                #ifndef DEF_F_NOCOPY
                                #define DEF_F_NOCOPY
inline constexpr int F_NOCOPY = (1 << 12);
                                #endif

                                #ifndef DEF_F_NOVEC
                                #define DEF_F_NOVEC
extern const int F_NOVEC = F_NOCOPY;
                                #endif

                                #ifndef DEF_F_PURE
                                #define DEF_F_PURE
inline constexpr int F_PURE = (1 << 13);
                                #endif

                                #ifndef DEF_F_CONVERSION
                                #define DEF_F_CONVERSION
inline constexpr int F_CONVERSION = (1 << 14);
                                #endif

                                #ifndef DEF_F_OPT_ARG
                                #define DEF_F_OPT_ARG
inline constexpr int F_OPT_ARG = (1 << 15);
                                #endif

                                #ifndef DEF_F_PURE_CTX
                                #define DEF_F_PURE_CTX
extern const int F_PURE_CTX = F_OPT_ARG;
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline constexpr int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline constexpr int F_USING = (1 << 18);
                                #endif

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline constexpr int F_MUSTNAME = (1 << 19);
                                #endif

                                #ifndef DEF_F_EXTERN
                                #define DEF_F_EXTERN
extern const int F_EXTERN = F_MUSTNAME;
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
                                #endif

                                #ifndef DEF_F_HOIST
                                #define DEF_F_HOIST
extern const int F_HOIST = F_OPERATOR;
                                #endif

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline constexpr int F_REF = (1 << 22);
                                #endif

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline constexpr int F_NAMED_ARGS = (1 << 24);
                                #endif

                                #ifndef DEF_F_PREDICATE
                                #define DEF_F_PREDICATE
extern const int F_PREDICATE = F_NAMED_ARGS;
                                #endif

                                #ifndef DEF_F_OOE_RTL
                                #define DEF_F_OOE_RTL
inline constexpr int F_OOE_RTL = (1 << 25);
                                #endif

                                #ifndef DEF_F_ENUM
                                #define DEF_F_ENUM
extern const int F_ENUM = F_OOE_RTL;
                                #endif

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

                                #ifndef DEF_F_RELAXABLE_REF
                                #define DEF_F_RELAXABLE_REF
inline constexpr int F_RELAXABLE_REF = (1 << 27);
                                #endif

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_INLINE
                                #define DEF_F_INLINE
inline constexpr int F_INLINE = (1 << 29);
                                #endif

                                #ifndef DEF_F_LAMBDA
                                #define DEF_F_LAMBDA
inline constexpr int F_LAMBDA = (1 << 30);
                                #endif

                                #ifndef DEF_F_SINGLE_STMT
                                #define DEF_F_SINGLE_STMT
extern const int F_SINGLE_STMT = F_LAMBDA;
                                #endif

                                #ifndef DEF_P_RESET
                                #define DEF_P_RESET
inline constexpr int P_RESET = 1000;
                                #endif

                                #ifndef DEF_P_PREFIX_UNARY
                                #define DEF_P_PREFIX_UNARY
inline constexpr int P_PREFIX_UNARY = 1;
                                #endif

static const fu_VEC<fu_STR> PREFIX fu_INIT_PRIORITY(1002) = fu_VEC<fu_STR> { fu::slate<10, fu_STR> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static const fu_VEC<fu_STR> POSTFIX fu_INIT_PRIORITY(1002) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "++"_fu, "--"_fu, "[]"_fu } };

                                #ifndef DEFt_grow_if_oob_FnDwnAYq
                                #define DEFt_grow_if_oob_FnDwnAYq
inline bool& grow_if_oob_FnDwnAYq(fu_VEC<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_x3Cx3E_gcxVH86X
                                #define DEFt_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_b25bS2EX
                                #define DEFt_x3Cx3E_b25bS2EX
inline int x3Cx3E_b25bS2EX(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_wtS8CFRs
                                #define DEFt_x3Cx3E_wtS8CFRs
inline int x3Cx3E_wtS8CFRs(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_b25bS2EX(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEFt_update_5lweViog
                                #define DEFt_update_5lweViog
inline bool update_5lweViog(const fu_STR& item, const int extra, s_Map_sccv6lFJ& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_wtS8CFRs(_.keys[i], item);
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

                                #ifndef DEFt_set_iqkLADbd
                                #define DEFt_set_iqkLADbd
inline bool set_iqkLADbd(s_Map_sccv6lFJ& _, const fu_STR& key, const int value)
{
    return update_5lweViog(key, value, _);
}
                                #endif

static void binop_O69Ya2Wd(fu::view<fu_STR> ops, int& precedence, s_BINOP& out, const bool rightToLeft)
{
    precedence++;
    if (!(precedence < 64))
        fu::fail("Assertion failed: precedence < 64"_fu);

    grow_if_oob_FnDwnAYq(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
    for (int i = 0; i < ops.size(); i++)
        set_iqkLADbd(out.PRECEDENCE, ops[i], precedence);

}

static s_BINOP setupOperators_J2h3fYmf()
{
    /*MOV*/ s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_O69Ya2Wd((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<2, fu_STR> { "+"_fu, "-"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<2, fu_STR> { "<<"_fu, ">>"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "&"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "^"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "|"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "~"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<2, fu_STR> { "<=>"_fu, "<>"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<4, fu_STR> { "in"_fu, "is"_fu, "as"_fu, "->"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<5, fu_STR> { "<"_fu, "<="_fu, ">"_fu, ">="_fu, "<=>"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<2, fu_STR> { "=="_fu, "!="_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "&&"_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "||"_fu }), precedence, out, rightToLeft);
    rightToLeft = true;
    binop_O69Ya2Wd((fu::slate<17, fu_STR> { "?"_fu, "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), precedence, out, rightToLeft);
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "<|"_fu }), precedence, out, rightToLeft);
    rightToLeft = false;
    binop_O69Ya2Wd((fu::slate<1, fu_STR> { "|>"_fu }), precedence, out, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1002) = setupOperators_J2h3fYmf();

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_TYPECTOR_BACK
                                #define DEF_TYPECTOR_BACK
inline constexpr int TYPECTOR_BACK = -1;
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

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

[[noreturn]] static fu::never fail_1IwkX2uk(fu_STR&& reason, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_1XGXUxQg(fname, src, token, reason);
}

static const s_Token& consume_34nGe8HQ(fu::view<char> kind, fu::view<char> value, const fu_STR& err, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    };
    fail_1IwkX2uk(((((((err ? fu_STR(err) : "Expected"_fu) + " `"_fu) + (value ? value : kind)) + "`, got `"_fu) + token.value) + "`."_fu), tokens, _idx, fname, src);
}

                                #ifndef DEFt_x7E_KclJlPSOsdf
                                #define DEFt_x7E_KclJlPSOsdf
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_compose_E50qN7lA(fu_STR&& reason, fu::view<s_Token> tokens, const int _loc, const int _idx, fu::view<char> fname)
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

static void warn_BvCCSOQU(const fu_STR& reason, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_1IwkX2uk(fu_STR(reason), tokens, _idx, fname, src);

    warnings += fail_compose_E50qN7lA(fu_STR(reason), tokens, _loc, _idx, fname);
}

static const s_Token& tryConsume_Cuf7epIa(fu::view<char> kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    };
    return (*(const s_Token*)fu::NIL);
}

static s_Node make_HJEC3tbR(const fu_STR& kind, const fu_VEC<s_Node>& items, const int flags, const fu_STR& value, const int modid, const int _loc)
{
    return s_Node { fu_STR(kind), int(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static s_Node createLeaf_ueMBhYia(const fu_STR& kind, const fu_STR& value, const int modid, const int _loc)
{
    return make_HJEC3tbR(kind, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

                                #ifndef DEFt_x3Cx3E_6qQfdfXM
                                #define DEFt_x3Cx3E_6qQfdfXM
inline int x3Cx3E_6qQfdfXM(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_8hN0LrtI
                                #define DEFt_x3Cx3E_8hN0LrtI
inline int x3Cx3E_8hN0LrtI(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_6qQfdfXM(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEFt_has_45AvV8CL
                                #define DEFt_has_45AvV8CL
inline bool has_45AvV8CL(fu::view<fu_STR> keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_8hN0LrtI(keys[i], item);
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

                                #ifndef DEFt_has_9jeSJai8
                                #define DEFt_has_9jeSJai8
inline bool has_9jeSJai8(const s_Map_sccv6lFJ& _, fu::view<char> key)
{
    return has_45AvV8CL(_.keys, key);
}
                                #endif

                                #ifndef DEFt_has_1sVrc6q5
                                #define DEFt_has_1sVrc6q5
inline bool has_1sVrc6q5(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createAddrOfFn_4HbkO69F(const fu_STR& name, const int flags, const int modid, const int _loc)
{
    return make_HJEC3tbR("addroffn"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), flags, name, modid, _loc);
}

static int parseArgsDecl_Qbb3brKi(fu_VEC<s_Node>& outArgs, fu::view<char> endk, fu::view<char> endv, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    bool first = true;
    /*MOV*/ int outFlags = 0;
    fu_VEC<s_Node> implicit {};
    bool defaults = false;
    int firstDefault = -1;
    _dollarAuto++;
    const int dollars0 = _dollars.size();
    for (; ; )
    {
        if (tryConsume_Cuf7epIa(endk, endv, tokens, _idx))
            break;

        if (!first)
            consume_34nGe8HQ("op"_fu, ","_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);

        first = false;
        const bool isInline = !!tryConsume_Cuf7epIa("id"_fu, "inline"_fu, tokens, _idx);
        int insertAt = -1;
        s_Node arg = parseLet_qFpep9K4(true, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        if (_dollars.size() > dollars0)
            arg.flags |= F_TEMPLATE;

        if (isInline)
        {
            arg.flags |= F_INLINE;
            outFlags |= F_INLINE;
        };
        if (arg.items[LET_INIT])
        {
            if (arg.flags & F_IMPLICIT)
                fail_1IwkX2uk("TODO default implicit arguments"_fu, tokens, _idx, fname, src);

            defaults = true;
            firstDefault = outArgs.size();
        }
        else if (defaults)
        {
            if (!(arg.flags & F_MUSTNAME))
                fail_1IwkX2uk("TODO non-trailing default arguments"_fu, tokens, _idx, fname, src);

            insertAt = firstDefault;
            firstDefault++;
        }
        else if (!arg.items[LET_TYPE])
            arg.flags |= F_TEMPLATE;

        arg.flags |= F_ARG;
        outFlags |= (arg.flags & F_TEMPLATE);
        if (arg.flags & F_IMPLICIT)
            implicit.push(s_Node(arg));
        else if (insertAt > 0)
            outArgs.insert(insertAt, s_Node(arg));
        else
            outArgs.push(s_Node(arg));

    };
    _dollarAuto--;
    if (implicit)
    {
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(s_Node(implicit[i]));

    };
    return /*NRVO*/ outFlags;
}

static s_Node createBlock_Z5p4vGEi(const fu_VEC<s_Node>& items, const fu_STR& label, const int modid, const int _loc)
{
    return make_HJEC3tbR("block"_fu, items, 0, label, modid, _loc);
}

static s_Node parseBlock_DWuFw5p4(int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> _0 {};
    return (_0 = parseBlockLike_pFwOQQRr("op"_fu, "}"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns), createBlock_Z5p4vGEi(static_cast<fu_VEC<s_Node>&&>(_0), (*(const fu_STR*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_6ScTKJdc(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& label = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    /*MOV*/ s_Node stmt = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if ((stmt.kind == "loop"_fu) || (stmt.kind == "block"_fu))
    {
        if (stmt.value)
            fail_1IwkX2uk((((("Label `"_fu + label) + "`: statement already labeled as `"_fu) + stmt.value) + "`."_fu), tokens, _idx, fname, src);

        stmt.value = label;
        return /*NRVO*/ stmt;
    };
    return createBlock_Z5p4vGEi(fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(stmt) } }, label, modid, _loc);
}

static void softSemi_b1dJ9Rbd(fu::view<s_Token> tokens, int& _idx, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == "op"_fu)
    {
        if (peek.value == ";"_fu)
        {
            _idx++;
            return;
        };
        if ((peek.value == "}"_fu) || (peek.value == ")"_fu))
            return;

    }
    else if (peek.col == _col0)
        return;

    warn_BvCCSOQU((("Missing semicollon before `"_fu + peek.value) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);
}

static s_Node parseLetStmt_Q72lNbf5(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node ret = parseLet_qFpep9K4(false, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node pipelineLeft_jSPHxmTB(/*MOV*/ s_Node&& left, const s_Node& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (left.kind != "call"_fu)
        fail_1IwkX2uk("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    left.items.push(s_Node(right));
    left.flags &= ~F_ID;
    return static_cast<s_Node&&>(left);
}

static s_Node parseExpressionStatement_Ymjs1Q6V(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node expr = parseExpression_V9QrobCn(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if (tryConsume_Cuf7epIa("op"_fu, ":"_fu, tokens, _idx))
    {
        if (!(expr.kind == "call"_fu))
            fail_1IwkX2uk("Cannot pipeline: expression is not a call."_fu, tokens, _idx, fname, src);

        s_Node right = parseExpression_V9QrobCn(P_RESET, M_LAMBDA_STMT_OK, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        return pipelineLeft_jSPHxmTB(s_Node(expr), right, tokens, _idx, fname, src);
    };
    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ expr;
}

static s_Node parseLetOrExpressionStatement_4rIpZRjS(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == "id"_fu) && (tokens[_idx].kind == "id"_fu))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_Q72lNbf5(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        if (v == "lax"_fu)
            return ((void)_idx--, parseLetStmt_Q72lNbf5(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (v == "mut"_fu)
            return ((void)_idx--, parseLetStmt_Q72lNbf5(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (v == "ref"_fu)
            return ((void)_idx--, parseLetStmt_Q72lNbf5(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

    };
    _idx--;
    if (!_fnDepth)
        fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src);

    return parseExpressionStatement_Ymjs1Q6V(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

                                #ifndef DEFt_only_iw2hijHV
                                #define DEFt_only_iw2hijHV
inline char only_iw2hijHV(fu::view<char> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createCall_1w7rGfTT(const fu_STR& id, const int flags, const fu_VEC<s_Node>& args, const int modid, const int _loc)
{
    return make_HJEC3tbR("call"_fu, args, flags, id, modid, _loc);
}

static s_Node createPrefix_eVKcrEsN(const fu_STR& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == "int"_fu) || (expr.kind == "real"_fu)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_iw2hijHV(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    };
    return createCall_1w7rGfTT(op, (F_PREFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, modid, _loc);
}

static s_Node createIf_m5NyvaYG(const s_Node& cond, const s_Node& cons, const s_Node& alt, const int modid, const int _loc)
{
    return make_HJEC3tbR("if"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node flattenIfSame_cmDoLEpS(const fu_STR& kind, const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    fu::view<char> k_left = left.kind;
    fu::view<char> k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_HJEC3tbR(kind, items, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node createAnd_cGcXmTgm(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame_cmDoLEpS("and"_fu, left, right, modid, _loc);
}

static s_Node parseIf_1ZTKJr5O(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == "id"_fu) && (prev.value == "else"_fu)) ? prev : token);
    const s_Token& nOt = tryConsume_Cuf7epIa("op"_fu, "!"_fu, tokens, _idx);
    consume_34nGe8HQ("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cond = parseLetOrExpressionStatement_4rIpZRjS(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_34nGe8HQ("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (nOt)
        cond = createPrefix_eVKcrEsN("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    const s_Token& eLse = tryConsume_Cuf7epIa("id"_fu, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.line == token_1.line) || (eLse.col == token_1.col)))
            warn_BvCCSOQU((x7E((x7E((x7E("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.col)) + ", got "_fu), fu::i64dec(eLse.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.line)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        s_Node alt = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        return createIf_m5NyvaYG(cond, cons, alt, modid, _loc);
    };
    return createAnd_cGcXmTgm(cond, cons, modid, _loc);
}

static s_Node parseParens_ys7cvKtm(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node out = parseExpression_V9QrobCn(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    out.flags |= F_PARENS;
    consume_34nGe8HQ("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return /*NRVO*/ out;
}

static s_Node createLoop_JUyEIdNB(const s_Node& init, const s_Node& pre_cond, const s_Node& body, const s_Node& post_cond, const s_Node& post, const int modid, const int _loc)
{
    return make_HJEC3tbR("loop"_fu, fu_VEC<s_Node> { fu::slate<5, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(body), s_Node(post_cond), s_Node(post) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseFor_ejCyDy6T(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_34nGe8HQ("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (tryConsume_Cuf7epIa("id"_fu, "fieldname"_fu, tokens, _idx))
    {
        const fu_STR& placeholder = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        consume_34nGe8HQ("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node type = parseTypeAnnot_eQUQXGkb(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        consume_34nGe8HQ("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node body = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        return make_HJEC3tbR("forfieldsof"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(body) } }, 0, placeholder, modid, _loc);
    };
    s_Node init = (!tryConsume_Cuf7epIa("op"_fu, ";"_fu, tokens, _idx) ? parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{});
    if (init && (init.kind != "let"_fu))
        fail_1IwkX2uk((("`for` expects a `let` statement, got a `"_fu + init.kind) + "`."_fu), tokens, _idx, fname, src);

    s_Node pre_cond = (!tryConsume_Cuf7epIa("op"_fu, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_4rIpZRjS(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{});
    const s_Token& token = tokens[_idx];
    s_Node post = (!((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseParens_ys7cvKtm(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : ((void)(consume_34nGe8HQ("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src) ? void() : void()), s_Node{}));
    s_Node body = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return createLoop_JUyEIdNB(init, pre_cond, body, (*(const s_Node*)fu::NIL), post, modid, _loc);
}

static s_Node parseWhile_miBcnbjT(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_34nGe8HQ("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node pre_cond = parseLetOrExpressionStatement_4rIpZRjS(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_34nGe8HQ("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node body = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return createLoop_JUyEIdNB((*(const s_Node*)fu::NIL), pre_cond, body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_KT1ikYn2(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    s_Node body = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_34nGe8HQ("id"_fu, "while"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_34nGe8HQ("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node post_cond = parseLetOrExpressionStatement_4rIpZRjS(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_34nGe8HQ("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLoop_JUyEIdNB((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, post_cond, (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node createJump_Hg3xGbdZ(const fu_STR& kind, const fu_STR& label, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make_HJEC3tbR(kind, (expr ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } } : fu_VEC<s_Node>{}), flags, label, modid, _loc);
}

static s_Node parseJump_Pkk6l58R(const fu_STR& kind, int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src);
    };
    const fu_STR& label = (tryConsume_Cuf7epIa("op"_fu, ":"_fu, tokens, _idx) ? consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value : (*(const fu_STR*)fu::NIL));
    s_Node expr {};
    if (!tryConsume_Cuf7epIa("op"_fu, ";"_fu, tokens, _idx))
    {
        expr = parseExpression_V9QrobCn(P_RESET, M_LINT_ENSURE_INDENT, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    };
    return createJump_Hg3xGbdZ(kind, label, expr, 0, modid, _loc);
}

static s_Node createRead_dIPoXF1K(const fu_STR& id, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    return createCall_1w7rGfTT((id ? id : fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src)), F_ID, (*(const fu_VEC<s_Node>*)fu::NIL), modid, _loc);
}

static s_Node createLet_gwGf8NMt(const fu_STR& id, const int flags, const s_Node& type, const s_Node& init, const int modid, const int _loc)
{
    return make_HJEC3tbR("let"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, modid, _loc);
}

static s_Node parseCatchErrvar_QTXAXvAY(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    const fu_STR& id = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    return createLet_gwGf8NMt(id, 0, createRead_dIPoXF1K("string"_fu, tokens, _idx, fname, src, modid, _loc), s_Node{}, modid, _loc);
}

static s_Node parseTryCatch_v9KP5fed(int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src);
    };
    s_Node tRy = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_34nGe8HQ("id"_fu, "catch"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_34nGe8HQ("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node err = parseCatchErrvar_QTXAXvAY(tokens, _idx, fname, src, modid, _loc);
    consume_34nGe8HQ("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cAtch = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return make_HJEC3tbR("try"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(tRy), s_Node(err), s_Node(cAtch) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

                                #ifndef DEFt_each_xLqat2my
                                #define DEFt_each_xLqat2my
inline void each_xLqat2my(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        s_Node& item = a.mutref(i);
        if (item.kind == "let"_fu)
            item.flags |= F_PREDICATE;

    };
}
                                #endif

static s_Node parseStructDecl_r9rneX8Z(const int flags, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& name = tryConsume_Cuf7epIa("id"_fu, fu::view<char>{}, tokens, _idx).value;
    consume_34nGe8HQ("op"_fu, "{"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    fu_VEC<s_Node> items = parseBlockLike_pFwOQQRr("op"_fu, "}"_fu, true, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

    { {

        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_Node& item = items[i];
                if ((item.kind == "let"_fu) && (item.flags & F_PREDICATE))
                    goto BL_1;

            };
        };
        each_xLqat2my(items);
      } BL_1:;
    };
    return make_HJEC3tbR("struct"_fu, items, flags, name, modid, _loc);
}

static s_Node parseTypedef_nMKB3E06(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& name = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    consume_34nGe8HQ("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node annot = parseTypeAnnot_eQUQXGkb(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return make_HJEC3tbR("typedef"_fu, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(annot) } }, 0, name, modid, _loc);
}

static void set_PUB_mPxtuNJ8(int& flags, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, bool& _hasPUB)
{
    flags |= F_PUB;
    if (flags & F_SHADOW)
        fail_1IwkX2uk("Cannot pub a shadow."_fu, tokens, _idx, fname, src);

    _hasPUB = true;
}

static s_Node parsePub_mhOGRJxt(int& _fnDepth, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (_fnDepth)
        fail_1IwkX2uk("Cannot pub from within a fn."_fu, tokens, _idx, fname, src);

    /*MOV*/ s_Node out = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    set_PUB_mPxtuNJ8(out.flags, tokens, _idx, fname, src, _hasPUB);
    return /*NRVO*/ out;
}

static s_Node parseShadow_TnImdy8H(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node out = parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    out.flags |= F_SHADOW;
    if (out.flags & F_PUB)
        fail_1IwkX2uk("Cannot shadow a pub."_fu, tokens, _idx, fname, src);

    return /*NRVO*/ out;
}

static void add_UwrhxOcQ(const int flag, int& flags, const fu_STR& v, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (flags & flag)
        fail_1IwkX2uk(("Duplicate qualifier: "_fu + qKW_HIwg52Ja(v)), tokens, _idx, fname, src);

    flags |= flag;
}

static s_Node parseFixityDecl_959qKhDh(const int flags, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if ((flags & F_CONVERSION) && (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX)))
        fail_1IwkX2uk("`implicit` functions can't be operators."_fu, tokens, _idx, fname, src);

    consume_34nGe8HQ("id"_fu, "fn"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseFnDecl_VKhRZco8(int(flags), expr, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseInlineDecl_UHbAuHnk(int flags, const int F, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    flags |= F;
    fu::view<char> v = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "infix"_fu)
        return parseFixityDecl_959qKhDh((flags | F_INFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    if (v == "prefix"_fu)
        return parseFixityDecl_959qKhDh((flags | F_PREFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    if (v == "postfix"_fu)
        return parseFixityDecl_959qKhDh((flags | F_POSTFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    _idx--;
    return parseFixityDecl_959qKhDh(flags, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseExoticDecl_MYhRkXce(int flags, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    for (; ; )
    {
        const fu_STR& v = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (v == "pure"_fu)
            add_UwrhxOcQ(F_PURE, flags, v, tokens, _idx, fname, src);
        else if (v == "purectx"_fu)
            add_UwrhxOcQ(F_PURE_CTX, flags, v, tokens, _idx, fname, src);
        else if (v == "novec"_fu)
            add_UwrhxOcQ(F_NOVEC, flags, v, tokens, _idx, fname, src);
        else if (v == "noflow"_fu)
            add_UwrhxOcQ(F_NOFLOW, flags, v, tokens, _idx, fname, src);
        else if (v == "fn"_fu)
            return ((void)_idx--, parseInlineDecl_UHbAuHnk(0, flags, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns));
        else
            fail_1IwkX2uk(("Unknown qualifier: "_fu + qKW_HIwg52Ja(v)), tokens, _idx, fname, src);

    };
}

static s_Node parseConversionDecl_w4zhCCjQ(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu::view<char> v = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "pure"_fu)
        return parseExoticDecl_MYhRkXce((F_CONVERSION | F_PURE), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    if (v == "inline"_fu)
        return parseInlineDecl_UHbAuHnk(int(F_CONVERSION), F_INLINE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    _idx--;
    return parseFixityDecl_959qKhDh(F_CONVERSION, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseNoCopy_6kNv8NqY(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_34nGe8HQ("id"_fu, "struct"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseStructDecl_r9rneX8Z(F_NOCOPY, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

                                #ifndef DEFt_starts_wtS8CFRs
                                #define DEFt_starts_wtS8CFRs
inline bool starts_wtS8CFRs(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEFt_has_8allOgsG
                                #define DEFt_has_8allOgsG
inline bool has_8allOgsG(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR registerImport_qdlHeyRs(/*MOV*/ fu_STR&& value, const fu_STR& fname, fu_VEC<fu_STR>& fuzimports)
{
    if (!ext_9EcF53rc(value))
        value += ".fu"_fu;

    fu_STR dir = dirname_9EcF53rc(fname);
    value = (starts_wtS8CFRs(value, "."_fu) ? join_lq7BzT61(dir, value) : ((dir + '\v') + value));
    if (!has_8allOgsG(fuzimports, value))
        fuzimports.push(fu_STR(value));

    return static_cast<fu_STR&&>(value);
}

static s_Node parseImport_bBivss9s(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int _loc, fu_VEC<fu_STR>& fuzimports, const int modid)
{
    fu_STR value { tryConsume_Cuf7epIa("id"_fu, fu::view<char>{}, tokens, _idx).value };
    if (value)
    {
        while (tryConsume_Cuf7epIa("op"_fu, "::"_fu, tokens, _idx))
            value += ("/"_fu + consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    }
    else
        value = consume_34nGe8HQ("str"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;

    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    value = registerImport_qdlHeyRs(fu_STR(value), fname, fuzimports);
    return make_HJEC3tbR("import"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static fu_STR getAutoName_KAlYx4Jf(const s_Node& expr, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if ((expr.kind == "call"_fu) && hasIdentifierChars_85KQkyE0(expr.value))
        return fu_STR(expr.value);

    if (expr.items)
    {
        const int i = (((expr.kind == "and"_fu) && (expr.items.size() - 1)) ? ((expr.kind == "if"_fu) ? 1 : int{}) : 0);
        return getAutoName_KAlYx4Jf(expr.items[i], tokens, _idx, fname, src);
    };
    fail_1IwkX2uk("Can't :autoname this expression."_fu, tokens, _idx, fname, src);
}

static s_Node createArgID_awhk0E5J(const fu_STR& id, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make_HJEC3tbR("argid"_fu, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, modid, _loc);
}

static int parseCallArgs_yL7Kcldy(fu::view<char> endop, fu_VEC<s_Node>& out_args, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ int flags = 0;
    bool first = true;
    for (; ; )
    {
        if (tryConsume_Cuf7epIa("op"_fu, endop, tokens, _idx))
            break;

        if (!first)
        {
            consume_34nGe8HQ("op"_fu, ","_fu, (("Call expr expected `"_fu + endop) + "` or"_fu), tokens, _idx, fname, src);
            if (tryConsume_Cuf7epIa("op"_fu, endop, tokens, _idx))
                break;

        };
        first = false;
        fu_STR name {};
        bool autoName = false;
        bool optional = false;
        const s_Token& tok0 = tokens[_idx];
        if ((tok0.kind == "op"_fu) && (tok0.value == ":"_fu))
        {
            autoName = true;
            _idx += 1;
        }
        else if (tok0.kind == "id"_fu)
        {
            const s_Token& tok1 = tokens[(_idx + 1)];
            if (tok1.kind == "op"_fu)
            {
                if (tok1.value == ":"_fu)
                {
                    name = tok0.value;
                    _idx += 2;
                }
                else if (tok1.value == "?"_fu)
                {
                    const s_Token& tok2 = tokens[(_idx + 2)];
                    if ((tok2.kind == "op"_fu) && (tok2.value == ":"_fu))
                    {
                        optional = true;
                        name = tok0.value;
                        _idx += 3;
                    };
                };
            };
        };
        s_Node expr = parseExpression_V9QrobCn(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        if (autoName)
            name = getAutoName_KAlYx4Jf(expr, tokens, _idx, fname, src);

        if (name)
            flags |= F_NAMED_ARGS;

        out_args.push((name ? createArgID_awhk0E5J(name, expr, (optional ? F_OPT_ARG : (*(const int*)fu::NIL)), modid, _loc) : s_Node(expr)));
    };
    return /*NRVO*/ flags;
}

static s_Node parseCompilerPragma_6GTsIxpa(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& value = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (value != "break"_fu)
    {
        fu_VEC<s_Node> items {};
        consume_34nGe8HQ("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        parseCallArgs_yL7Kcldy(")"_fu, items, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        return make_HJEC3tbR("compiler"_fu, items, 0, value, modid, _loc);
    };
    /*MOV*/ s_Node ret = make_HJEC3tbR("compiler"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node parseExternDecl_4kJkE83F(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseInlineDecl_UHbAuHnk(0, F_EXTERN, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parsePrimDecl_WiwULn9k(const bool eNum, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& name = tryConsume_Cuf7epIa("id"_fu, fu::view<char>{}, tokens, _idx).value;
    s_Node annot = tryPopTypeAnnot_lzEenSx7(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    fu_VEC<s_Node> items = (tryConsume_Cuf7epIa("op"_fu, "{"_fu, tokens, _idx) ? parseBlockLike_pFwOQQRr("op"_fu, "}"_fu, false, true, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : fu_VEC<s_Node>{});
    if (eNum)
    {
        if (!(items))
            fail_1IwkX2uk("`enum` declarations require a non-empty { list of variants }."_fu, tokens, _idx, fname, src);

    }
    else
    {
        if (!(annot))
            fail_1IwkX2uk("`primitive` declarations require a base type annotation."_fu, tokens, _idx, fname, src);

    };
    return make_HJEC3tbR("primdecl"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(annot), (items ? make_HJEC3tbR("items"_fu, items, 0, (*(const fu_STR*)fu::NIL), modid, _loc) : s_Node{}) } }, (eNum ? F_ENUM : (*(const int*)fu::NIL)), name, modid, _loc);
}

static s_Node parseStatement_R38NSHBa(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_loc = _idx++)])) ? *_0 : fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src));
    if (token.kind == "op"_fu)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_DWuFw5p4(_idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        if (v == ":"_fu)
            return parseLabelledStatement_6ScTKJdc(tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

    }
    else if (token.kind == "id"_fu)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_1ZTKJr5O(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "for"_fu)
                return parseFor_ejCyDy6T(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "while"_fu)
                return parseWhile_miBcnbjT(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "do"_fu)
                return parseDoWhile_KT1ikYn2(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "return"_fu)
                return parseJump_Pkk6l58R("return"_fu, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "break"_fu)
                return parseJump_Pkk6l58R("break"_fu, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "continue"_fu)
                return parseJump_Pkk6l58R("continue"_fu, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "try"_fu)
                return parseTryCatch_v9KP5fed(_fnDepth, _idx, tokens, fname, src, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        };
        if (peek.kind == "op"_fu)
        {
            if ((peek.value == "{"_fu) && (v == "struct"_fu))
                return parseStructDecl_r9rneX8Z(0, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        };
        if ((v == "fn"_fu) && ((peek.kind == "id"_fu) || !_fnDepth))
            return parseFnDecl_VKhRZco8(0, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

        if (peek.kind == "id"_fu)
        {
            if (v == "struct"_fu)
                return parseStructDecl_r9rneX8Z(0, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "type"_fu)
                return parseTypedef_nMKB3E06(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "pub"_fu)
                return parsePub_mhOGRJxt(_fnDepth, tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "shadow"_fu)
                return parseShadow_TnImdy8H(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "using"_fu)
                return parseConversionDecl_w4zhCCjQ(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "nocopy"_fu)
                return parseNoCopy_6kNv8NqY(tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "import"_fu)
                return parseImport_bBivss9s(tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid);

            if (v == "compiler"_fu || v == "pragma"_fu)
                return parseCompilerPragma_6GTsIxpa(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "inline"_fu)
                return parseInlineDecl_UHbAuHnk(0, F_INLINE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "extern"_fu)
                return parseExternDecl_4kJkE83F(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "infix"_fu)
                return parseFixityDecl_959qKhDh(F_INFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "prefix"_fu)
                return parseFixityDecl_959qKhDh(F_PREFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "postfix"_fu)
                return parseFixityDecl_959qKhDh(F_POSTFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "primitive"_fu)
                return parsePrimDecl_WiwULn9k(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "enum"_fu)
                return parsePrimDecl_WiwULn9k(true, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "novec"_fu)
                return parseExoticDecl_MYhRkXce(int(F_NOVEC), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "noflow"_fu)
                return parseExoticDecl_MYhRkXce(int(F_NOFLOW), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "pure"_fu)
                return parseExoticDecl_MYhRkXce(int(F_PURE), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "purectx"_fu)
                return parseExoticDecl_MYhRkXce(int(F_PURE_CTX), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "effect"_fu)
                return parseStructDecl_r9rneX8Z(F_EFFECT, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        };
    };
    _idx--;
    return parseLetOrExpressionStatement_4rIpZRjS(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

                                #ifndef DEFt_last_jhr9I4Fb
                                #define DEFt_last_jhr9I4Fb
inline const s_Node& last_jhr9I4Fb(fu::view<s_Node> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static s_Node createReturn_URxia6JW(const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return createJump_Hg3xGbdZ("return"_fu, (*(const fu_STR*)fu::NIL), expr, flags, modid, _loc);
}

static s_Node parseFnBodyBranch_pIeS2L5F(const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    tryConsume_Cuf7epIa("op"_fu, "="_fu, tokens, _idx);
    /*MOV*/ s_Node body = (expr ? parseExpression_V9QrobCn(_precedence, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));
    if (body.kind == "block"_fu)
    {
        if (body.items && (last_jhr9I4Fb(body.items).kind != "return"_fu))
            body.items += make_HJEC3tbR("void"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), modid, _loc);

        return /*NRVO*/ body;
    };
    if (body.kind == "return"_fu)
        return createBlock_Z5p4vGEi(fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(body) } }, (*(const fu_STR*)fu::NIL), modid, _loc);

    if ((body.kind == "call"_fu) && (body.value == "__native"_fu))
        return /*NRVO*/ body;

    return createBlock_Z5p4vGEi(fu_VEC<s_Node> { fu::slate<1, s_Node> { createReturn_URxia6JW(body, F_SINGLE_STMT, modid, _loc) } }, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static void parseBranch_cXWn11ka(const bool noCond, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns, fu_VEC<s_Node>& branches)
{
    s_Node cond = (!noCond ? parseUnaryExpression_oNiqjKlT(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{});
    s_Node type = tryPopTypeAnnot_lzEenSx7(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    s_Node cons = parseFnBodyBranch_pIeS2L5F(bool{}, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    branches.push(make_HJEC3tbR("fnbranch"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(type), s_Node(cons) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc));
}

static int parseFnBodyOrPattern_0EBJAg0U(fu_VEC<s_Node>& out_push_body, const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ const int flags = 0;
    s_Node body {};
    if (!expr && tryConsume_Cuf7epIa("id"_fu, "case"_fu, tokens, _idx))
    {
        fu_VEC<s_Node> branches {};
        do
            parseBranch_cXWn11ka(bool{}, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns, branches);
        while (tryConsume_Cuf7epIa("id"_fu, "case"_fu, tokens, _idx));
        if (tryConsume_Cuf7epIa("id"_fu, "default"_fu, tokens, _idx))
            parseBranch_cXWn11ka(true, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns, branches);

        body = make_HJEC3tbR("pattern"_fu, branches, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
    }
    else
        body = parseFnBodyBranch_pIeS2L5F(expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

    out_push_body.push(s_Node(body));
    return /*NRVO*/ flags;
}

static s_Node parseFnDecl_cont_A5K0e9oP(const fu_STR& name, int flags, const bool expr, const fu_STR& endv, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> items {};
    _fnDepth++;
    const int dollars0 = _dollars.size();
    fu_DEFER(
    {
        _fnDepth--;
        _dollars.shrink(dollars0);
    });
    flags |= (endv ? parseArgsDecl_Qbb3brKi(items, "op"_fu, endv, _dollarAuto, _dollars, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _hasPUB, fuzimports, _anonFns) : int{});
    s_Node type = tryPopTypeAnnot_lzEenSx7(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    const int retIdx = items.size();
    items.push(s_Node(type));
    flags |= parseFnBodyOrPattern_0EBJAg0U(items, expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if ((name == "main"_fu) && (_fnDepth == 1))
    {
        if (!type)
            items.mutref(retIdx) = (type = createRead_dIPoXF1K("i32"_fu, tokens, _idx, fname, src, modid, _loc));
        else if ((type.kind != "call"_fu) || (type.value != "i32"_fu) || type.items.size())
            fail_1IwkX2uk("fn main() must return i32."_fu, tokens, _idx, fname, src);

        set_PUB_mPxtuNJ8(flags, tokens, _idx, fname, src, _hasPUB);
        flags |= F_EXTERN;
    };
    if (_dollars.size() > dollars0)
        flags |= F_TEMPLATE;

    return make_HJEC3tbR("fn"_fu, items, flags, name, modid, _loc);
}

static s_Node parseFnDecl_VKhRZco8(int flags, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_STR name { tryConsume_Cuf7epIa("id"_fu, fu::view<char>{}, tokens, _idx).value };
    if (!name)
    {
        const int postfix = (flags & F_POSTFIX);
        name = consume_34nGe8HQ("op"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (postfix)
        {
            if (!((name == "++"_fu) || (name == "--"_fu)))
                fail_1IwkX2uk((("No such postfix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

            name = ("postfix"_fu + name);
        }
        else if (flags & F_INFIX)
        {
            if (!(has_9jeSJai8(BINOP.PRECEDENCE, name)))
                fail_1IwkX2uk((("No such infix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        }
        else if (flags & F_PREFIX)
        {
            if (!(has_1sVrc6q5(PREFIX, name)))
                fail_1IwkX2uk((("No such prefix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        };
        flags &= ~(F_INFIX | F_PREFIX);
        flags |= F_OPERATOR;
    }
    else if (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX))
        fail_1IwkX2uk((("Not an operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

    fu_STR endv = (tryConsume_Cuf7epIa("op"_fu, "("_fu, tokens, _idx) ? ")"_fu : fu_STR{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_4HbkO69F(name, flags, modid, _loc);

        consume_34nGe8HQ("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    return parseFnDecl_cont_A5K0e9oP(name, int(flags), expr, endv, _fnDepth, _dollars, _dollarAuto, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _hasPUB, fuzimports, _anonFns);
}

static s_Node createArrayLiteral_QRbtr6MK(const int argFlags, const fu_VEC<s_Node>& items, const int modid, const int _loc)
{
    return make_HJEC3tbR("arrlit"_fu, items, argFlags, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseArrayLiteral_0FflmhUj(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_yL7Kcldy("]"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return createArrayLiteral_QRbtr6MK(argFlags, args, modid, _loc);
}

                                #ifndef DEFt_has_hXY7eLHr
                                #define DEFt_has_hXY7eLHr
inline bool has_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createTypeParam_WxHeRTL7(const fu_STR& value, const int modid, const int _loc)
{
    return make_HJEC3tbR("typeparam"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node parseTypeParam_MCSqNDrR(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, fu_VEC<fu_STR>& _dollars, const int _dollarAuto, const int modid, const int _loc)
{
    const fu_STR& value = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (!has_hXY7eLHr(_dollars, value) && _dollarAuto)
        _dollars.push(fu_STR(value));

    return createTypeParam_WxHeRTL7(value, modid, _loc);
}

static s_Node parseLambda_nebDZ2Q3(const bool noArgs_noClosingPipe, const int mode, int& _precedence, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _anonFns, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _col0, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports)
{
    if (noArgs_noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_BvCCSOQU("Unparenthesized `|| lambda` within a binary expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

    fu_STR _0 {};
    fu_STR name = (_0 = (x7E("l_"_fu, fu::i64dec(modid)) + "_"_fu), x7E(static_cast<fu_STR&&>(_0), fu::i64dec(_anonFns++)));
    return parseFnDecl_cont_A5K0e9oP(name, (F_INLINE | F_LAMBDA), !(mode & M_LAMBDA_STMT_OK), (!noArgs_noClosingPipe ? "|"_fu : fu_STR{}), _fnDepth, _dollars, _dollarAuto, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _hasPUB, fuzimports, _anonFns);
}

static s_Node createDefinit_QbmdN7JI(const int modid, const int _loc)
{
    return make_HJEC3tbR("definit"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

                                #ifndef DEFt_only_vukGqR3r
                                #define DEFt_only_vukGqR3r
inline const s_Node& only_vukGqR3r(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createTypeTag_23b4xqD1(const fu_STR& value, const int modid, const int _loc)
{
    return make_HJEC3tbR("typetag"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node typeAssert_iEMS4yi7(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_HJEC3tbR("typeassert"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseQualifierChain_cWKmhBJP(/*MOV*/ s_Node&& expr, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, const int modid, const int _loc, fu_VEC<fu_STR>& fuzimports)
{
    if ((expr.kind != "call"_fu) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & F_ACCESS))) || (expr.flags & F_COMPOUND_ID))
    {
        _idx--;
        fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src);
    };
    expr.flags |= F_COMPOUND_ID;
    fu_STR path { expr.value };
    for (; ; )
    {
        const fu_STR& id = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (!tryConsume_Cuf7epIa("op"_fu, "::"_fu, tokens, _idx))
        {
            if ((path == "is"_fu) && (expr.items.size() == 1))
            {
                const s_Node& left = only_vukGqR3r(expr.items);
                s_Node right = createTypeTag_23b4xqD1(id, modid, _loc);
                return typeAssert_iEMS4yi7(left, right, modid, _loc);
            };
            path = registerImport_qdlHeyRs(fu_STR(path), fname, fuzimports);
            expr.value = ((path + "\t"_fu) + id);
            return static_cast<s_Node&&>(expr);
        };
        path += ("/"_fu + id);
    };
}

static s_Node parsePrefix_fsyJV3Rb(fu_STR&& op, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (!(has_1sVrc6q5(PREFIX, op)))
    {
        _idx--;
        fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src);
    };
    if ((op == "&"_fu) && tryConsume_Cuf7epIa("id"_fu, "mut"_fu, tokens, _idx))
        op = "&mut"_fu;

    const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
    s_Node _0 {};
    return (_0 = parseUnaryExpression_oNiqjKlT(mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns), createPrefix_eVKcrEsN(op, static_cast<s_Node&&>(_0), modid, _loc));
}

static s_Node parseExpressionHead_Gr9h39cN(const int mode, fu::view<s_Token> tokens, int& _idx, const int modid, int& _loc, const fu_STR& fname, const fu_STR& src, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];

    {
        const fu_STR& k = token.kind;
        const fu_STR& v = token.value;
        if ((k == "int"_fu) || (k == "real"_fu) || (k == "str"_fu) || (k == "char"_fu))
            return createLeaf_ueMBhYia(k, v, modid, _loc);

        if (k == "id"_fu)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == "id"_fu)
            {
                if (v == "fn"_fu)
                    return parseFnDecl_VKhRZco8(0, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

                if (v == "infix"_fu)
                    return parseFixityDecl_959qKhDh(F_INFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

                if (v == "prefix"_fu)
                    return parseFixityDecl_959qKhDh(F_PREFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

                if (v == "postfix"_fu)
                    return parseFixityDecl_959qKhDh(F_POSTFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            };
            return createRead_dIPoXF1K(v, tokens, _idx, fname, src, modid, _loc);
        };
        if (k == "op"_fu)
        {
            if (v == "("_fu)
                return parseParens_ys7cvKtm(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "{"_fu)
                return parseBlock_DWuFw5p4(_idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "["_fu)
                return parseArrayLiteral_0FflmhUj(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "$"_fu)
                return parseTypeParam_MCSqNDrR(tokens, _idx, fname, src, _dollars, _dollarAuto, modid, _loc);

            if (v == "|"_fu)
                return parseLambda_nebDZ2Q3(bool{}, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _col0, _hasPUB, fuzimports);

            if (v == "||"_fu)
                return parseLambda_nebDZ2Q3(true, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _col0, _hasPUB, fuzimports);

            if (v == "[]"_fu)
                return createDefinit_QbmdN7JI(modid, _loc);

            if (v == "::"_fu)
            {
                const fu_STR& id = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                _idx--;
                return parseQualifierChain_cWKmhBJP(createRead_dIPoXF1K(id, tokens, _idx, fname, src, modid, _loc), _idx, tokens, fname, src, modid, _loc, fuzimports);
            };
            if (v == "."_fu)
            {
                const fu_STR& id = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                return createAddrOfFn_4HbkO69F(id, F_ACCESS, modid, _loc);
            };
            return parsePrefix_fsyJV3Rb(fu_STR(v), _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        };
    };
    _idx--;
    fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src);
}

static s_Node miss_Mk9AsUb3()
{
    return s_Node{};
}

static void lint_EcTfb4di(const int mode, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_BvCCSOQU((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), warnings, options, tokens, _idx, fname, src, _loc);

}

static s_Node parseAccessExpression_5drr0q7m(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    s_Token id { tryConsume_Cuf7epIa("id"_fu, fu::view<char>{}, tokens, _idx) };
    if (!id)
    {
        consume_34nGe8HQ("op"_fu, "::"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        id = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        _idx -= 2;
    };
    return createCall_1w7rGfTT(id.value, F_ACCESS, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, modid, _loc);
}

static s_Node parseCallExpression_hgG412wH(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_yL7Kcldy(")"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if ((expr.kind == "call"_fu) && (expr.flags & F_ACCESS))
    {
        const s_Node* _0;
        const s_Node& head = (expr.items && (expr.items.size() == 1) && *(_0 = &(expr.items[0])) ? *_0 : fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src));
        args.unshift(s_Node(head));
        return createCall_1w7rGfTT((expr.value ? expr.value : fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src)), ((F_METHOD | argFlags) | (expr.flags & ~F_ACCESS)), args, modid, _loc);
    };
    if ((expr.kind == "call"_fu) && (expr.flags & F_ID))
        return createCall_1w7rGfTT((expr.value ? expr.value : fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src)), (argFlags | (expr.flags & ~F_ID)), args, modid, _loc);

    if (expr.kind == "typeparam"_fu)
        return createCall_1w7rGfTT(("$"_fu + (expr.value ? expr.value : fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src))), argFlags, args, modid, _loc);

    fail_1IwkX2uk("TODO dynamic call"_fu, tokens, _idx, fname, src);
}

static s_Node parseIndexExpression_dC2tNjCf(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_yL7Kcldy("]"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    args.unshift(s_Node(expr));
    return createCall_1w7rGfTT("[]"_fu, (argFlags | F_OPERATOR), args, modid, _loc);
}

                                #ifndef DEFt_x3Cx3E_hkY7hbvG
                                #define DEFt_x3Cx3E_hkY7hbvG
inline int x3Cx3E_hkY7hbvG(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_KclJlPSO
                                #define DEFt_x3Cx3E_KclJlPSO
inline int x3Cx3E_KclJlPSO(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hkY7hbvG(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEFt_get_YCml4rgR
                                #define DEFt_get_YCml4rgR
inline int get_YCml4rgR(fu::view<fu_STR> keys, fu::view<char> item, fu::view<int> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_KclJlPSO(keys[i], item);
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

                                #ifndef DEFt_get_T7IUMkTC
                                #define DEFt_get_T7IUMkTC
inline int get_T7IUMkTC(const s_Map_sccv6lFJ& _, fu::view<char> key)
{
    return get_YCml4rgR(_.keys, key, _.vals);
}
                                #endif

static s_Node createOr_cxYP4Baw(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame_cmDoLEpS("or"_fu, left, right, modid, _loc);
}

static s_Node pipelineRight_Gm4fwVCm(const s_Node& left, /*MOV*/ s_Node&& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (right.kind != "call"_fu)
        fail_1IwkX2uk("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    if (right.flags & F_METHOD)
        right.items.insert(1, s_Node(left));
    else
        right.items.unshift(s_Node(left));

    return static_cast<s_Node&&>(right);
}

static s_Node tryParseBinary_daxTJat7(const s_Node& left, const fu_STR& op, const int p1, int& _precedence, int& _idx, int& _loc, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_Mk9AsUb3();

    _idx++;
    s_Node mid {};
    if (op == "?"_fu)
    {
        mid = parseExpression_V9QrobCn(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        consume_34nGe8HQ("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    s_Node right = parseExpression_V9QrobCn(p1, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if (mid)
        return createIf_m5NyvaYG(left, mid, right, modid, _loc);

    if (op == "||"_fu)
        return createOr_cxYP4Baw(left, right, modid, _loc);

    if (op == "&&"_fu)
        return createAnd_cGcXmTgm(left, right, modid, _loc);

    if ((left.kind == "and"_fu) || (left.kind == "or"_fu))
    {
        if (!(left.flags & F_PARENS))
            warn_BvCCSOQU((((("Unparenthesized `"_fu + left.kind) + "` on the left side of an `"_fu) + op) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);

    };
    if (op == "|>"_fu)
        return pipelineRight_Gm4fwVCm(left, s_Node(right), tokens, _idx, fname, src);

    if (op == "<|"_fu)
        return pipelineLeft_jSPHxmTB(s_Node(left), right, tokens, _idx, fname, src);

    if (op == "->"_fu)
        return typeAssert_iEMS4yi7(left, right, modid, _loc);

    return createCall_1w7rGfTT(op, (F_INFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } }, modid, _loc);
}

                                #ifndef DEFt_has_IswWtOx1
                                #define DEFt_has_IswWtOx1
inline bool has_IswWtOx1(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node tryParseExpressionTail_XuirQgfT(const s_Node& head, const int mode, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _precedence, int& _col0, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if (token.kind == "op"_fu)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
            return ((void)_idx--, miss_Mk9AsUb3());

        if (v == "."_fu)
            return ((void)lint_EcTfb4di(mode, warnings, options, tokens, _idx, fname, src, _loc), parseAccessExpression_5drr0q7m(head, tokens, _idx, fname, src, modid, _loc));

        if (v == "("_fu)
            return ((void)lint_EcTfb4di(mode, warnings, options, tokens, _idx, fname, src, _loc), parseCallExpression_hgG412wH(head, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (v == "["_fu)
            return ((void)lint_EcTfb4di(mode, warnings, options, tokens, _idx, fname, src, _loc), parseIndexExpression_dC2tNjCf(head, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        const int p1 = get_T7IUMkTC(BINOP.PRECEDENCE, v);
        if (p1)
            return ((void)_idx--, tryParseBinary_daxTJat7(head, v, p1, _precedence, _idx, _loc, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (has_IswWtOx1(POSTFIX, v))
            return createCall_1w7rGfTT((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu_STR(v)), (F_POSTFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, modid, _loc);

        if (v == "::"_fu)
            return parseQualifierChain_cWKmhBJP(s_Node(head), _idx, tokens, fname, src, modid, _loc, fuzimports);

    };
    return ((void)_idx--, miss_Mk9AsUb3());
}

static s_Node parseExpression_V9QrobCn(const int p1, const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (mode & M_LINT_ENSURE_INDENT)
    {
        if (!(tokens[_idx].col > _col0))
            warn_BvCCSOQU(x7E((x7E((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].col)), warnings, options, tokens, _idx, fname, src, _loc);

    };
    /*MOV*/ s_Node head = parseExpressionHead_Gr9h39cN(mode, tokens, _idx, modid, _loc, fname, src, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == "int"_fu) || (head.kind == "real"_fu))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_XuirQgfT(head, mode_1, tokens, _idx, warnings, options, fname, src, _loc, modid, _precedence, _col0, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.col > col00))
                    warn_BvCCSOQU(x7E((x7E((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.col)), warnings, options, tokens, _idx, fname, src, _loc);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_oNiqjKlT(const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseExpression_V9QrobCn(P_PREFIX_UNARY, mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseTypeAnnot_eQUQXGkb(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseUnaryExpression_oNiqjKlT(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

static s_Node tryPopTypeAnnot_lzEenSx7(fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return (tryConsume_Cuf7epIa("op"_fu, ":"_fu, tokens, _idx) ? parseTypeAnnot_eQUQXGkb(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : miss_Mk9AsUb3());
}

static s_Node tryParseLetInit_5FoVOIAE(fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return tryConsume_Cuf7epIa("op"_fu, "="_fu, tokens, _idx) ? parseExpression_V9QrobCn(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{};
}

static s_Node parseLet_qFpep9K4(const bool xqmark, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    int flags = 0;
    if (tryConsume_Cuf7epIa("id"_fu, "using"_fu, tokens, _idx))
        flags |= F_USING;

    if (tryConsume_Cuf7epIa("id"_fu, "implicit"_fu, tokens, _idx))
        flags |= F_IMPLICIT;

    if (tryConsume_Cuf7epIa("id"_fu, "lax"_fu, tokens, _idx))
        flags |= F_LAX;

    if (tryConsume_Cuf7epIa("id"_fu, "shadow"_fu, tokens, _idx))
        flags |= F_SHADOW;

    if (tryConsume_Cuf7epIa("id"_fu, "mut"_fu, tokens, _idx))
        flags |= F_MUT;

    if (tryConsume_Cuf7epIa("id"_fu, "ref"_fu, tokens, _idx))
        flags |= F_REF;

    fu_STR id { consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value };
    if (id == "_"_fu)
        flags |= F_LAX;

    if (xqmark && tryConsume_Cuf7epIa("op"_fu, "!"_fu, tokens, _idx))
    {
        flags |= F_MUSTNAME;
        const fu_STR& inner_id = tryConsume_Cuf7epIa("id"_fu, fu::view<char>{}, tokens, _idx).value;
        if (inner_id)
        {
            flags |= F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    if (xqmark && tryConsume_Cuf7epIa("op"_fu, "."_fu, tokens, _idx))
    {
        flags |= F_COMPOUND_ID;
        id += ("."_fu + consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);
        while (tryConsume_Cuf7epIa("op"_fu, "::"_fu, tokens, _idx))
            id += ("\t"_fu + consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    };
    if (xqmark && tryConsume_Cuf7epIa("op"_fu, "[]"_fu, tokens, _idx))
        flags |= F_REST_ARG;

    const s_Token& optional = (xqmark ? tryConsume_Cuf7epIa("op"_fu, "?"_fu, tokens, _idx) : (*(const s_Token*)fu::NIL));
    s_Node type = tryPopTypeAnnot_lzEenSx7(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    s_Node init = (optional ? createDefinit_QbmdN7JI(modid, _loc) : tryParseLetInit_5FoVOIAE(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));
    if ((flags & F_REF) && type)
    {
        if ((type.kind != "call"_fu) || (type.value != "&mut"_fu))
        {
            type = createPrefix_eVKcrEsN("&mut"_fu, s_Node(type), modid, _loc);
            flags &= ~F_REF;
        };
    };
    return createLet_gwGf8NMt(id, flags, type, init, modid, _loc);
}

static s_Node parseStructItem_jalBq2kr(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& isPredicate = tryConsume_Cuf7epIa("id"_fu, "true"_fu, tokens, _idx);
    /*MOV*/ s_Node member = parseLet_qFpep9K4(true, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    if (isPredicate)
        member.flags |= F_PREDICATE;

    return /*NRVO*/ member;
}

static s_Node parseEnumItem_ehisNAZb(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& id = consume_34nGe8HQ("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    s_Node init = tryParseLetInit_5FoVOIAE(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_b1dJ9Rbd(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLet_gwGf8NMt(id, 0, (*(const s_Node*)fu::NIL), init, modid, _loc);
}

static s_Node parseDefer_Z42nmnAt(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token* _0;
    const fu_STR& value = (tryConsume_Cuf7epIa("op"_fu, ":"_fu, tokens, _idx) ? (*(_0 = &(tryConsume_Cuf7epIa("id"_fu, "err"_fu, tokens, _idx))) ? *_0 : consume_34nGe8HQ("id"_fu, "ok"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src)).value : (*(const fu_STR*)fu::NIL));
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_1IwkX2uk(fu_STR{}, tokens, _idx, fname, src);
    };
    fu_VEC<s_Node> _1 {};
    return (_1 = fu_VEC<s_Node> { fu::slate<1, s_Node> { parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) } }, make_HJEC3tbR("defer"_fu, static_cast<fu_VEC<s_Node>&&>(_1), 0, value, modid, _loc));
}

static s_Node parseStatementOrDefer_8ljzO6nU(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == "id"_fu)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
            return ((void)_idx++, parseDefer_Z42nmnAt(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

    };
    return parseStatement_R38NSHBa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

static fu_VEC<s_Node> parseBlockLike_pFwOQQRr(fu::view<char> endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const int line0 = (_idx ? tokens[(_idx - 1)].line : (*(const int*)fu::NIL));
    const int col00 = _col0;
    int colNN = -1;
    int lineNN = line0;
    /*MOV*/ fu_VEC<s_Node> items {};
    for (; ; )
    {
        const s_Token& token = tokens[_idx];
        if ((token.kind == "op"_fu) && (token.value == ";"_fu))
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
                warn_BvCCSOQU((x7E((x7E((x7E((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            break;
        };
        _col0 = token.col;
        if (!(_col0 > col00))
            warn_BvCCSOQU((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (!((colNN < 0) || (colNN == _col0) || (token.line == lineNN)))
            warn_BvCCSOQU((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (colNN < 0)
            colNN = _col0;

        lineNN = token.line;
        s_Node expr = (sTruct ? parseStructItem_jalBq2kr(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : (eNum ? parseEnumItem_ehisNAZb(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : parseStatementOrDefer_8ljzO6nU(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns)));
        if (!((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
            warn_BvCCSOQU("Orphan pure-looking expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

        items.push(s_Node(expr));
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_wp5VWpcA(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_34nGe8HQ("sof"_fu, "sof"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    _loc = _idx;
    fu_VEC<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_pFwOQQRr("eof"_fu, "eof"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns), make_HJEC3tbR("root"_fu, static_cast<fu_VEC<s_Node>&&>(_0), 0, (*(const fu_STR*)fu::NIL), modid, _loc));
    if (use_AUTOPUB && !_hasPUB)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            fu::view<char> k = item.kind;
            if (((k == "fn"_fu) || (k == "let"_fu) || (k == "typedef"_fu) || (k == "struct"_fu)) && !(item.flags & F_SHADOW))
                set_PUB_mPxtuNJ8(item.flags, tokens, _idx, fname, src, _hasPUB);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_p69A2qTI(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options)
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
    fu_VEC<fu_STR> fuzimports {};
    fu_VEC<fu_STR> warnings {};
    if (!(tokens[(tokens.size() - 1)].kind == "eof"_fu))
        fail_1IwkX2uk("Missing `eof` token."_fu, tokens, _idx, fname, src);

    s_Node root = parseRoot_wp5VWpcA(tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(fuzimports), fu_VEC<fu_STR>(warnings) };
}

#endif
