
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
struct s_Map_qI00nKJW;
struct s_Node;
struct s_Options;
struct s_ParserOutput;
struct s_Token;
struct s_TokenIdx;

[[noreturn]] fu::never FAIL_TpfrRZA4(fu::view<char>, const fu_STR&, const s_Token&, fu::view<char>);
bool hasIdentifierChars_rOVPWlZS(fu::view<char>);
fu_STR path_dirname_rOVPWlZS(const fu_STR&);
fu_STR path_ext_rOVPWlZS(const fu_STR&);
fu_STR path_join_iwa818V1(fu::view<char>, const fu_STR&);
inline fu_STR x7E(fu::view<char>, fu::view<char>);
static fu_VEC<s_Node> parseBlockLike_IaJk0AHu(fu::view<char>, fu::view<char>, bool, int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, int&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseExpression_DRkh2378(int, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseFnDecl_qIPhIZ3k(int, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseLet_vNBe6IdH(bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseStatement_nvchsvdV(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseTypeAnnot_eksFR601(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseUnaryExpression_JsAhFVvJ(int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node tryPopTypeAnnot_rgwkBxCE(fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);

                                #ifndef DEF_s_Map_qI00nKJW
                                #define DEF_s_Map_qI00nKJW
struct s_Map_qI00nKJW
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
    s_Map_qI00nKJW PRECEDENCE;
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
            || flags
            || value
            || items
            || token
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
            || value
            || idx0
            || idx1
            || line
            || col
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

                                #ifndef DEF_F_LAX
                                #define DEF_F_LAX
inline constexpr int F_LAX = (1 << 8);
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

                                #ifndef DEF_F_NOCOPY
                                #define DEF_F_NOCOPY
inline constexpr int F_NOCOPY = (1 << 12);
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

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
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

                                #ifndef DEF_F_SPREAD_INLINE
                                #define DEF_F_SPREAD_INLINE
inline constexpr int F_SPREAD_INLINE = (1 << 25);
                                #endif

                                #ifndef DEF_F_REST_ARG
                                #define DEF_F_REST_ARG
inline constexpr int F_REST_ARG = (1 << 26);
                                #endif

                                #ifndef DEF_F_EXTERN_PRIV
                                #define DEF_F_EXTERN_PRIV
extern const int F_EXTERN_PRIV = F_REST_ARG;
                                #endif

                                #ifndef DEF_F_TODO_FIX_RRET
                                #define DEF_F_TODO_FIX_RRET
inline constexpr int F_TODO_FIX_RRET = (1 << 27);
                                #endif

                                #ifndef DEF_F_OOE_RTL
                                #define DEF_F_OOE_RTL
extern const int F_OOE_RTL = F_TODO_FIX_RRET;
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
inline constexpr int F_SINGLE_STMT = (1 << 31);
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

                                #ifndef DEFt_grow_if_oob_eIneq03b
                                #define DEFt_grow_if_oob_eIneq03b
inline bool& grow_if_oob_eIneq03b(fu_VEC<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_update_LtTKnz8F
                                #define DEFt_update_LtTKnz8F
inline void update_LtTKnz8F(int, const fu_STR& item, int, const int extra, s_Map_qI00nKJW& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, int(extra));
                return;
            };
            _.vals.mutref(i) = extra;
            return;
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(int(extra));
}
                                #endif

                                #ifndef DEFt_set_S1h4QscT
                                #define DEFt_set_S1h4QscT
inline void set_S1h4QscT(s_Map_qI00nKJW& _, const fu_STR& key, const int value)
{
    update_LtTKnz8F(0, key, 0, value, _);
}
                                #endif

static void binop_QGJebQeV(fu::view<fu_STR> ops, int& precedence, s_BINOP& out, const bool rightToLeft)
{
    precedence++;
    if (!(precedence < 64))
        fu::fail("Assertion failed: precedence < 64"_fu);

    grow_if_oob_eIneq03b(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
    for (int i = 0; i < ops.size(); i++)
        set_S1h4QscT(out.PRECEDENCE, ops[i], precedence);

}

static s_BINOP setupOperators_J2h3fYmf()
{
    /*MOV*/ s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_QGJebQeV((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<2, fu_STR> { "+"_fu, "-"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<2, fu_STR> { "<<"_fu, ">>"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "&"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "^"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "|"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "~"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "<=>"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<4, fu_STR> { "in"_fu, "is"_fu, "as"_fu, "->"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<4, fu_STR> { "<"_fu, "<="_fu, ">"_fu, ">="_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<2, fu_STR> { "=="_fu, "!="_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "&&"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "||"_fu }), precedence, out, rightToLeft);
    rightToLeft = true;
    binop_QGJebQeV((fu::slate<1, fu_STR> { "?"_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<16, fu_STR> { "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), precedence, out, rightToLeft);
    binop_QGJebQeV((fu::slate<1, fu_STR> { "<|"_fu }), precedence, out, rightToLeft);
    rightToLeft = false;
    binop_QGJebQeV((fu::slate<1, fu_STR> { "|>"_fu }), precedence, out, rightToLeft);
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

[[noreturn]] static fu::never fail_mbZGrjv9(fu_STR&& reason, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_TpfrRZA4(fname, src, token, reason);
}

static const s_Token& consume_qBQTJmo9(fu::view<char> kind, fu::view<char> value, const fu_STR& err, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    };
    fail_mbZGrjv9(((((((err ? fu_STR(err) : "Expected"_fu) + " `"_fu) + (value ? value : kind)) + "`, got `"_fu) + token.value) + "`."_fu), tokens, _idx, fname, src);
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_compose_cIBz56km(fu_STR&& reason, fu::view<s_Token> tokens, const int _loc, const int _idx, fu::view<char> fname)
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

static void warn_GTYtYt58(const fu_STR& reason, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_mbZGrjv9(fu_STR(reason), tokens, _idx, fname, src);

    warnings += fail_compose_cIBz56km(fu_STR(reason), tokens, _loc, _idx, fname);
}

static s_Token tryConsume_Nw1J2nmq(fu::view<char> kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return s_Token(token);
    };
    return s_Token{};
}

static s_Node make_teH17A3z(const fu_STR& kind, const fu_VEC<s_Node>& items, const int flags, const fu_STR& value, const int modid, const int _loc)
{
    return s_Node { fu_STR(kind), int(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static s_Node createLeaf_M8OoSrEi(const fu_STR& kind, const fu_STR& value, const int modid, const int _loc)
{
    return make_teH17A3z(kind, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

                                #ifndef DEFt_bfind_hRkmNIbO
                                #define DEFt_bfind_hRkmNIbO
inline int bfind_hRkmNIbO(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_pMP4umlu
                                #define DEFt_has_pMP4umlu
inline bool has_pMP4umlu(const s_Map_qI00nKJW& _, const fu_STR& key)
{
    return (bfind_hRkmNIbO(_.keys, key) >= 0);
}
                                #endif

                                #ifndef DEFt_has_Bd7df3AL
                                #define DEFt_has_Bd7df3AL
inline bool has_Bd7df3AL(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createAddrOfFn_brlJK1gu(const fu_STR& name, const int flags, const int modid, const int _loc)
{
    return make_teH17A3z("addroffn"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), flags, name, modid, _loc);
}

static int parseArgsDecl_FXvPAzDA(fu_VEC<s_Node>& outArgs, fu::view<char> endk, fu::view<char> endv, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
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
        if (tryConsume_Nw1J2nmq(endk, endv, tokens, _idx))
            break;

        if (!first)
            consume_qBQTJmo9("op"_fu, ","_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);

        first = false;
        const bool isInline = !!tryConsume_Nw1J2nmq("id"_fu, "inline"_fu, tokens, _idx);
        int insertAt = -1;
        s_Node arg = parseLet_vNBe6IdH(true, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
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
                fail_mbZGrjv9("TODO default implicit arguments"_fu, tokens, _idx, fname, src);

            defaults = true;
            firstDefault = outArgs.size();
        }
        else if (defaults)
        {
            if (!(arg.flags & F_MUSTNAME))
                fail_mbZGrjv9("TODO non-trailing default arguments"_fu, tokens, _idx, fname, src);

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

static s_Node createBlock_BIqgYKJp(const fu_VEC<s_Node>& items, const fu_STR& label, const int modid, const int _loc)
{
    return make_teH17A3z("block"_fu, items, 0, label, modid, _loc);
}

static s_Node parseBlock_chMzY9wp(int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_VEC<s_Node> _0 {};
    return (_0 = parseBlockLike_IaJk0AHu("op"_fu, "}"_fu, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns), createBlock_BIqgYKJp(static_cast<fu_VEC<s_Node>&&>(_0), (*(const fu_STR*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_wdZzmlmZ(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const fu_STR& label = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    /*MOV*/ s_Node stmt = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    if ((stmt.kind == "loop"_fu) || (stmt.kind == "block"_fu))
    {
        if (stmt.value)
            fail_mbZGrjv9((((("Label `"_fu + label) + "`: statement already labeled as `"_fu) + stmt.value) + "`."_fu), tokens, _idx, fname, src);

        stmt.value = label;
        return /*NRVO*/ stmt;
    };
    return createBlock_BIqgYKJp(fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(stmt) } }, label, modid, _loc);
}

static void softSemi_1dYg0PuF(fu::view<s_Token> tokens, int& _idx, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<char> fname, const fu_STR& src, const int _loc)
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
    else
    {
        if (peek.col == _col0)
            return;

    };
    warn_GTYtYt58((("Missing semicollon before `"_fu + peek.value) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);
}

static s_Node parseLetStmt_No5eJMdY(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    /*MOV*/ s_Node ret = parseLet_vNBe6IdH(false, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node pipelineLeft_wvTcZoFC(/*MOV*/ s_Node&& left, const s_Node& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (left.kind != "call"_fu)
        fail_mbZGrjv9("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    left.items.push(s_Node(right));
    left.flags &= ~F_ID;
    return static_cast<s_Node&&>(left);
}

static s_Node parseExpressionStatement_3kYRqpxU(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    /*MOV*/ s_Node expr = parseExpression_DRkh2378(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    if (tryConsume_Nw1J2nmq("op"_fu, ":"_fu, tokens, _idx))
    {
        if (!((expr.kind == "call"_fu) ? (expr.flags & ((F_ACCESS | F_METHOD) | F_ID)) : int{}))
            fail_mbZGrjv9("We only allow x.y: z pipelines right now to avoid ambiguity."_fu, tokens, _idx, fname, src);

        s_Node right = parseExpression_DRkh2378(P_RESET, M_LAMBDA_STMT_OK, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        return pipelineLeft_wvTcZoFC(s_Node(expr), right, tokens, _idx, fname, src);
    };
    softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ expr;
}

static s_Node parseLetOrExpressionStatement_1LXE9mkV(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == "id"_fu) && (tokens[_idx].kind == "id"_fu))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_No5eJMdY(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

        if (v == "lax"_fu)
            return ((void)_idx--, parseLetStmt_No5eJMdY(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

        if (v == "mut"_fu)
            return ((void)_idx--, parseLetStmt_No5eJMdY(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

        if (v == "ref"_fu)
            return ((void)_idx--, parseLetStmt_No5eJMdY(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

    };
    _idx--;
    if (!_fnDepth)
        fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src);

    return parseExpressionStatement_3kYRqpxU(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

                                #ifndef DEFt_only_RY1rhQ63
                                #define DEFt_only_RY1rhQ63
inline char only_RY1rhQ63(fu::view<char> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createCall_lzO8w9GS(const fu_STR& id, const int flags, const fu_VEC<s_Node>& args, const int modid, const int _loc)
{
    return make_teH17A3z("call"_fu, args, flags, id, modid, _loc);
}

static s_Node createPrefix_GxQ4Sch9(const fu_STR& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == "int"_fu) || (expr.kind == "real"_fu)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_RY1rhQ63(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    };
    return createCall_lzO8w9GS(op, (F_PREFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, modid, _loc);
}

static s_Node createIf_eWF4TS35(const s_Node& cond, const s_Node& cons, const s_Node& alt, const int modid, const int _loc)
{
    return make_teH17A3z("if"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node flattenIfSame_rQpBPac3(const fu_STR& kind, const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    fu::view<char> k_left = left.kind;
    fu::view<char> k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_teH17A3z(kind, items, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node createAnd_qY74odNN(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame_rQpBPac3("and"_fu, left, right, modid, _loc);
}

static s_Node parseIf_6GTsIxpa(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == "id"_fu) && (prev.value == "else"_fu)) ? prev : token);
    s_Token nOt = tryConsume_Nw1J2nmq("op"_fu, "!"_fu, tokens, _idx);
    consume_qBQTJmo9("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cond = parseLetOrExpressionStatement_1LXE9mkV(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    consume_qBQTJmo9("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (nOt)
        cond = createPrefix_GxQ4Sch9("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    s_Token eLse = tryConsume_Nw1J2nmq("id"_fu, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.line == token_1.line) || (eLse.col == token_1.col)))
            warn_GTYtYt58((x7E((x7E((x7E("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.col)) + ", got "_fu), fu::i64dec(eLse.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.line)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        s_Node alt = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        return createIf_eWF4TS35(cond, cons, alt, modid, _loc);
    };
    return createAnd_qY74odNN(cond, cons, modid, _loc);
}

static s_Node parseParens_XqDvo9oc(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    /*MOV*/ s_Node out = parseExpression_DRkh2378(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    out.flags |= F_PARENS;
    consume_qBQTJmo9("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return /*NRVO*/ out;
}

static s_Node createLoop_QHuULTvt(const s_Node& init, const s_Node& pre_cond, const s_Node& body, const s_Node& post_cond, const s_Node& post, const int modid, const int _loc)
{
    return make_teH17A3z("loop"_fu, fu_VEC<s_Node> { fu::slate<5, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(body), s_Node(post_cond), s_Node(post) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseFor_6kNv8NqY(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    consume_qBQTJmo9("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (tryConsume_Nw1J2nmq("id"_fu, "fieldname"_fu, tokens, _idx))
    {
        const fu_STR& placeholder = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        consume_qBQTJmo9("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node type = parseTypeAnnot_eksFR601(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        consume_qBQTJmo9("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node body = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        return make_teH17A3z("forfieldsof"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(body) } }, 0, placeholder, modid, _loc);
    };
    s_Node init = (!tryConsume_Nw1J2nmq("op"_fu, ";"_fu, tokens, _idx) ? parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : s_Node{});
    if (init && (init.kind != "let"_fu))
        fail_mbZGrjv9((("`for` expects a `let` statement, got a `"_fu + init.kind) + "`."_fu), tokens, _idx, fname, src);

    s_Node pre_cond = (!tryConsume_Nw1J2nmq("op"_fu, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_1LXE9mkV(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : s_Node{});
    const s_Token& token = tokens[_idx];
    s_Node post = (!((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseParens_XqDvo9oc(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : (consume_qBQTJmo9("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src) ? s_Node{} : s_Node{}));
    s_Node body = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return createLoop_QHuULTvt(init, pre_cond, body, (*(const s_Node*)fu::NIL), post, modid, _loc);
}

static s_Node parseWhile_mXtKbJLa(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    consume_qBQTJmo9("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node pre_cond = parseLetOrExpressionStatement_1LXE9mkV(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    consume_qBQTJmo9("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node body = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return createLoop_QHuULTvt((*(const s_Node*)fu::NIL), pre_cond, body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_jalBq2kr(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    s_Node body = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    consume_qBQTJmo9("id"_fu, "while"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_qBQTJmo9("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node post_cond = parseLetOrExpressionStatement_1LXE9mkV(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    consume_qBQTJmo9("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLoop_QHuULTvt((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, post_cond, (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node createJump_hRjLWHjX(const fu_STR& kind, const fu_STR& label, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make_teH17A3z(kind, (expr ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } } : fu_VEC<s_Node>{}), flags, label, modid, _loc);
}

static s_Node parseJump_Jur3jRLe(const fu_STR& kind, int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _numReturns, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src);
    };
    const fu_STR& label = (tryConsume_Nw1J2nmq("op"_fu, ":"_fu, tokens, _idx) ? consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value : (*(const fu_STR*)fu::NIL));
    if (kind == "return"_fu)
        _numReturns++;

    s_Node expr {};
    if (!tryConsume_Nw1J2nmq("op"_fu, ";"_fu, tokens, _idx))
    {
        expr = parseExpression_DRkh2378(P_RESET, M_LINT_ENSURE_INDENT, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    };
    return createJump_hRjLWHjX(kind, label, expr, 0, modid, _loc);
}

static s_Node createRead_Cfcu5xCb(const fu_STR& id, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    return createCall_lzO8w9GS((id ? id : fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src)), F_ID, (*(const fu_VEC<s_Node>*)fu::NIL), modid, _loc);
}

static s_Node createLet_IiwMosMk(const fu_STR& id, const int flags, const s_Node& type, const s_Node& init, const int modid, const int _loc)
{
    return make_teH17A3z("let"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, modid, _loc);
}

static s_Node parseCatchErrvar_wp5VWpcA(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    const fu_STR& id = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    return createLet_IiwMosMk(id, 0, createRead_Cfcu5xCb("string"_fu, tokens, _idx, fname, src, modid, _loc), s_Node{}, modid, _loc);
}

static s_Node parseTryCatch_6AK9CGR8(int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src);
    };
    s_Node tRy = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    consume_qBQTJmo9("id"_fu, "catch"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_qBQTJmo9("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node err = parseCatchErrvar_wp5VWpcA(tokens, _idx, fname, src, modid, _loc);
    consume_qBQTJmo9("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cAtch = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return make_teH17A3z("try"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(tRy), s_Node(err), s_Node(cAtch) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseStructDecl_IZCACNJc(const int flags, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_STR name = tryConsume_Nw1J2nmq("id"_fu, fu::view<char>{}, tokens, _idx).value;
    consume_qBQTJmo9("op"_fu, "{"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    fu_VEC<s_Node> items = parseBlockLike_IaJk0AHu("op"_fu, "}"_fu, true, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    /*MOV*/ s_Node sTruct = make_teH17A3z("struct"_fu, items, flags, name, modid, _loc);
    return /*NRVO*/ sTruct;
}

static s_Node parseTypedef_clByoG8K(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const fu_STR& name = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    consume_qBQTJmo9("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node annot = parseTypeAnnot_eksFR601(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return make_teH17A3z("typedef"_fu, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(annot) } }, 0, name, modid, _loc);
}

static void set_PUB_dYnK1rfW(int& flags, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, bool& _hasPUB)
{
    flags |= F_PUB;
    if (flags & F_SHADOW)
        fail_mbZGrjv9("Cannot pub a shadow."_fu, tokens, _idx, fname, src);

    _hasPUB = true;
}

static s_Node parsePub_k15lSvOM(int& _fnDepth, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if (_fnDepth)
        fail_mbZGrjv9("Cannot pub from within a fn."_fu, tokens, _idx, fname, src);

    /*MOV*/ s_Node out = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    set_PUB_dYnK1rfW(out.flags, tokens, _idx, fname, src, _hasPUB);
    return /*NRVO*/ out;
}

static s_Node parseShadow_vN5jYo0V(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    /*MOV*/ s_Node out = parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    out.flags |= F_SHADOW;
    if (out.flags & F_PUB)
        fail_mbZGrjv9("Cannot shadow a pub."_fu, tokens, _idx, fname, src);

    return /*NRVO*/ out;
}

static s_Node parseFixityDecl_bPlrWjax(const int flags, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if ((flags & F_CONVERSION) && (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX)))
        fail_mbZGrjv9("`implicit` functions can't be operators."_fu, tokens, _idx, fname, src);

    consume_qBQTJmo9("id"_fu, "fn"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseFnDecl_qIPhIZ3k(int(flags), expr, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node parseInlineDecl_3VzoLdTw(int flags, const int F, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    flags |= F;
    fu::view<char> v = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "infix"_fu)
        return parseFixityDecl_bPlrWjax((flags | F_INFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

    if (v == "prefix"_fu)
        return parseFixityDecl_bPlrWjax((flags | F_PREFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

    if (v == "postfix"_fu)
        return parseFixityDecl_bPlrWjax((flags | F_POSTFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

    _idx--;
    return parseFixityDecl_bPlrWjax(flags, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node parsePureDecl_2egNxFSY(const int flags, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    return parseInlineDecl_3VzoLdTw(int(flags), F_PURE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node parseConversionDecl_3RVuCtx0(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu::view<char> v = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "pure"_fu)
        return parsePureDecl_2egNxFSY(int(F_CONVERSION), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

    if (v == "inline"_fu)
        return parseInlineDecl_3VzoLdTw(int(F_CONVERSION), F_INLINE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

    _idx--;
    return parseFixityDecl_bPlrWjax(F_CONVERSION, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node parseNoCopy_3RJUsUM0(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    consume_qBQTJmo9("id"_fu, "struct"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseStructDecl_IZCACNJc(F_NOCOPY, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node parseNovec_qUCXLPGA(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    return parseInlineDecl_3VzoLdTw(0, F_NOCOPY, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);
}

                                #ifndef DEFt_starts_FrnSuXk6
                                #define DEFt_starts_FrnSuXk6
inline bool starts_FrnSuXk6(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEFt_has_H8YIzJWF
                                #define DEFt_has_H8YIzJWF
inline bool has_H8YIzJWF(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR registerImport_oMz37ISH(/*MOV*/ fu_STR&& value, const fu_STR& fname, fu_VEC<fu_STR>& _imports)
{
    if (!path_ext_rOVPWlZS(value))
        value += ".fu"_fu;

    fu_STR dir = path_dirname_rOVPWlZS(fname);
    value = (starts_FrnSuXk6(value, "."_fu) ? path_join_iwa818V1(dir, value) : ((dir + '\v') + value));
    if (!has_H8YIzJWF(_imports, value))
        _imports.push(fu_STR(value));

    return static_cast<fu_STR&&>(value);
}

static s_Node parseImport_aN9tCLTM(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int _loc, fu_VEC<fu_STR>& _imports, const int modid)
{
    fu_STR value = tryConsume_Nw1J2nmq("id"_fu, fu::view<char>{}, tokens, _idx).value;
    if (value)
    {
        while (tryConsume_Nw1J2nmq("op"_fu, "::"_fu, tokens, _idx))
            value += ("/"_fu + consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    }
    else
        value = consume_qBQTJmo9("str"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;

    softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    value = registerImport_oMz37ISH(fu_STR(value), fname, _imports);
    return make_teH17A3z("import"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node parseCompilerPragma_BfrEkjd2(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node ret = make_teH17A3z("compiler"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value, modid, _loc);
    softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node parseStatement_nvchsvdV(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_loc = _idx++)])) ? *_0 : fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src));
    if (token.kind == "op"_fu)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_chMzY9wp(_idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

        if (v == ":"_fu)
            return parseLabelledStatement_wdZzmlmZ(tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

    }
    else if (token.kind == "id"_fu)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_6GTsIxpa(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "for"_fu)
                return parseFor_6kNv8NqY(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "while"_fu)
                return parseWhile_mXtKbJLa(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "do"_fu)
                return parseDoWhile_jalBq2kr(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "return"_fu)
                return parseJump_Jur3jRLe("return"_fu, _fnDepth, _idx, tokens, fname, src, _numReturns, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, _imports, _anonFns);

            if (v == "break"_fu)
                return parseJump_Jur3jRLe("break"_fu, _fnDepth, _idx, tokens, fname, src, _numReturns, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, _imports, _anonFns);

            if (v == "continue"_fu)
                return parseJump_Jur3jRLe("continue"_fu, _fnDepth, _idx, tokens, fname, src, _numReturns, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, _imports, _anonFns);

            if (v == "try"_fu)
                return parseTryCatch_6AK9CGR8(_fnDepth, _idx, tokens, fname, src, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

        };
        if (peek.kind == "op"_fu)
        {
            if ((peek.value == "{"_fu) && (v == "struct"_fu))
                return parseStructDecl_IZCACNJc(0, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

        };
        if ((v == "fn"_fu) && ((peek.kind == "id"_fu) || !_fnDepth))
            return parseFnDecl_qIPhIZ3k(0, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

        if (peek.kind == "id"_fu)
        {
            if (v == "struct"_fu)
                return parseStructDecl_IZCACNJc(0, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "type"_fu)
                return parseTypedef_clByoG8K(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "pub"_fu)
                return parsePub_k15lSvOM(_fnDepth, tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "shadow"_fu)
                return parseShadow_vN5jYo0V(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "using"_fu)
                return parseConversionDecl_3RVuCtx0(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "nocopy"_fu)
                return parseNoCopy_3RJUsUM0(tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "novec"_fu)
                return parseNovec_qUCXLPGA(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "import"_fu)
                return parseImport_aN9tCLTM(tokens, _idx, fname, src, _col0, warnings, options, _loc, _imports, modid);

            if (v == "compiler"_fu)
                return parseCompilerPragma_BfrEkjd2(tokens, _idx, fname, src, modid, _loc, _col0, warnings, options);

            if (v == "pure"_fu)
                return parsePureDecl_2egNxFSY(0, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "inline"_fu)
                return parseInlineDecl_3VzoLdTw(0, F_INLINE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "infix"_fu)
                return parseFixityDecl_bPlrWjax(F_INFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "prefix"_fu)
                return parseFixityDecl_bPlrWjax(F_PREFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "postfix"_fu)
                return parseFixityDecl_bPlrWjax(F_POSTFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

        };
    };
    _idx--;
    return parseLetOrExpressionStatement_1LXE9mkV(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node createReturn_pVLkHzg6(const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return createJump_hRjLWHjX("return"_fu, (*(const fu_STR*)fu::NIL), expr, flags, modid, _loc);
}

static s_Node parseFnBodyBranch_jNLKzYq5(const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    tryConsume_Nw1J2nmq("op"_fu, "="_fu, tokens, _idx);
    /*MOV*/ s_Node body = (expr ? parseExpression_DRkh2378(_precedence, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));
    if (body.kind == "block"_fu)
        return /*NRVO*/ body;

    if (body.kind == "return"_fu)
        return createBlock_BIqgYKJp(fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(body) } }, (*(const fu_STR*)fu::NIL), modid, _loc);

    if ((body.kind == "call"_fu) && (body.value == "__native"_fu))
        return /*NRVO*/ body;

    return createBlock_BIqgYKJp(fu_VEC<s_Node> { fu::slate<1, s_Node> { createReturn_pVLkHzg6(body, F_SINGLE_STMT, modid, _loc) } }, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static void parseBranch_wBKqK3pv(const bool noCond, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, fu_VEC<s_Node>& branches)
{
    s_Node cond = (!noCond ? parseUnaryExpression_JsAhFVvJ(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : s_Node{});
    s_Node type = tryPopTypeAnnot_rgwkBxCE(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    s_Node cons = parseFnBodyBranch_jNLKzYq5(bool{}, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    branches.push(make_teH17A3z("fnbranch"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(type), s_Node(cons) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc));
}

static int parseFnBodyOrPattern_lgm1MKJQ(fu_VEC<s_Node>& out_push_body, const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    /*MOV*/ const int flags = 0;
    s_Node body {};
    if (!expr && tryConsume_Nw1J2nmq("id"_fu, "case"_fu, tokens, _idx))
    {
        fu_VEC<s_Node> branches {};
        do
            parseBranch_wBKqK3pv(bool{}, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns, branches);
        while (tryConsume_Nw1J2nmq("id"_fu, "case"_fu, tokens, _idx));
        if (tryConsume_Nw1J2nmq("id"_fu, "default"_fu, tokens, _idx))
            parseBranch_wBKqK3pv(true, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns, branches);

        body = make_teH17A3z("pattern"_fu, branches, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
    }
    else
        body = parseFnBodyBranch_jNLKzYq5(expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

    out_push_body.push(s_Node(body));
    return /*NRVO*/ flags;
}

static s_Node parseFnDecl_cont_QV9DEVz9(const fu_STR& name, int flags, const bool expr, const fu_STR& endv, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_VEC<s_Node> items {};
    _fnDepth++;
    const int dollars0 = _dollars.size();
    fu_DEFER(
    {
        _fnDepth--;
        _dollars.shrink(dollars0);
    });
    flags |= (endv ? parseArgsDecl_FXvPAzDA(items, "op"_fu, endv, _dollarAuto, _dollars, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _numReturns, _hasPUB, _imports, _anonFns) : int{});
    s_Node type = tryPopTypeAnnot_rgwkBxCE(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    const int retIdx = items.size();
    items.push(s_Node(type));
    const int numReturns0 = _numReturns;
    flags |= parseFnBodyOrPattern_lgm1MKJQ(items, expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    if (flags & F_LAMBDA)
    {
        if (_numReturns > numReturns0)
            flags |= F_SPREAD_INLINE;

    }
    else
        _numReturns = numReturns0;

    if ((name == "main"_fu) && (_fnDepth == 1))
    {
        if (!type)
            items.mutref(retIdx) = (type = createRead_Cfcu5xCb("i32"_fu, tokens, _idx, fname, src, modid, _loc));
        else if ((type.kind != "call"_fu) || (type.value != "i32"_fu) || type.items.size())
            fail_mbZGrjv9("fn main() must return i32."_fu, tokens, _idx, fname, src);

        set_PUB_dYnK1rfW(flags, tokens, _idx, fname, src, _hasPUB);
    };
    if (_dollars.size() > dollars0)
        flags |= F_TEMPLATE;

    return make_teH17A3z("fn"_fu, items, flags, name, modid, _loc);
}

static s_Node parseFnDecl_qIPhIZ3k(int flags, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_STR name = tryConsume_Nw1J2nmq("id"_fu, fu::view<char>{}, tokens, _idx).value;
    if (!name)
    {
        const int postfix = (flags & F_POSTFIX);
        name = consume_qBQTJmo9("op"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (postfix)
        {
            if (!((name == "++"_fu) || (name == "--"_fu)))
                fail_mbZGrjv9((("No such postfix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

            name = ("postfix"_fu + name);
        }
        else if (flags & F_INFIX)
        {
            if (!(has_pMP4umlu(BINOP.PRECEDENCE, name)))
                fail_mbZGrjv9((("No such infix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        }
        else if (flags & F_PREFIX)
        {
            if (!(has_Bd7df3AL(PREFIX, name)))
                fail_mbZGrjv9((("No such prefix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        };
        flags &= ~(F_INFIX | F_PREFIX);
        flags |= F_OPERATOR;
    }
    else if (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX))
        fail_mbZGrjv9((("Not an operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

    fu_STR endv = (tryConsume_Nw1J2nmq("op"_fu, "("_fu, tokens, _idx) ? ")"_fu : fu_STR{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_brlJK1gu(name, flags, modid, _loc);

        consume_qBQTJmo9("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    return parseFnDecl_cont_QV9DEVz9(name, int(flags), expr, endv, _fnDepth, _dollars, _dollarAuto, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _numReturns, _hasPUB, _imports, _anonFns);
}

static fu_STR getAutoName_kbnJsy93(const s_Node& expr, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if ((expr.kind == "call"_fu) && hasIdentifierChars_rOVPWlZS(expr.value))
        return fu_STR(expr.value);

    if (expr.items)
    {
        const int i = (((expr.kind == "and"_fu) && (expr.items.size() - 1)) ? ((expr.kind == "if"_fu) ? 1 : int{}) : 0);
        return getAutoName_kbnJsy93(expr.items[i], tokens, _idx, fname, src);
    };
    fail_mbZGrjv9("Can't :autoname this expression."_fu, tokens, _idx, fname, src);
}

static s_Node createArgID_ErS3jurm(const fu_STR& id, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make_teH17A3z("argid"_fu, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, modid, _loc);
}

static int parseCallArgs_u2BOlYfs(fu::view<char> endop, fu_VEC<s_Node>& out_args, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    /*MOV*/ int flags = 0;
    bool first = true;
    for (; ; )
    {
        if (tryConsume_Nw1J2nmq("op"_fu, endop, tokens, _idx))
            break;

        if (!first)
        {
            consume_qBQTJmo9("op"_fu, ","_fu, (("Call expr expected `"_fu + endop) + "` or"_fu), tokens, _idx, fname, src);
            if (tryConsume_Nw1J2nmq("op"_fu, endop, tokens, _idx))
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
        s_Node expr = parseExpression_DRkh2378(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        if (autoName)
            name = getAutoName_kbnJsy93(expr, tokens, _idx, fname, src);

        if (name)
            flags |= F_NAMED_ARGS;

        out_args.push((name ? createArgID_ErS3jurm(name, expr, (optional ? F_OPT_ARG : (*(const int*)fu::NIL)), modid, _loc) : s_Node(expr)));
    };
    return /*NRVO*/ flags;
}

static s_Node createArrayLiteral_8XU7bXXb(const int argFlags, const fu_VEC<s_Node>& items, const int modid, const int _loc)
{
    return make_teH17A3z("arrlit"_fu, items, argFlags, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseArrayLiteral_12dFM2Xj(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_u2BOlYfs("]"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return createArrayLiteral_8XU7bXXb(argFlags, args, modid, _loc);
}

                                #ifndef DEFt_has_9sek5qv2
                                #define DEFt_has_9sek5qv2
inline bool has_9sek5qv2(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createTypeParam_UFr7zBn1(const fu_STR& value, const int modid, const int _loc)
{
    return make_teH17A3z("typeparam"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node parseTypeParam_y5dQqtm1(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, fu_VEC<fu_STR>& _dollars, const int _dollarAuto, const int modid, const int _loc)
{
    const fu_STR& value = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (!has_9sek5qv2(_dollars, value) && _dollarAuto)
        _dollars.push(fu_STR(value));

    return createTypeParam_UFr7zBn1(value, modid, _loc);
}

static s_Node parseLambda_f50Agene(const bool noArgs_noClosingPipe, const int mode, int& _precedence, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _anonFns, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _col0, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports)
{
    if (noArgs_noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_GTYtYt58("Unparenthesized `|| lambda` within a binary expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

    fu_STR name = x7E((x7E("l_"_fu, fu::i64dec(modid)) + "_"_fu), fu::i64dec(_anonFns++));
    return parseFnDecl_cont_QV9DEVz9(name, ((F_INLINE | F_TEMPLATE) | F_LAMBDA), !(mode & M_LAMBDA_STMT_OK), (!noArgs_noClosingPipe ? "|"_fu : fu_STR{}), _fnDepth, _dollars, _dollarAuto, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node createDefinit_VAI74yEP(const int modid, const int _loc)
{
    return make_teH17A3z("definit"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

                                #ifndef DEFt_only_zloPVM3y
                                #define DEFt_only_zloPVM3y
inline const s_Node& only_zloPVM3y(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createTypeTag_MRDJBVbC(const fu_STR& value, const int modid, const int _loc)
{
    return make_teH17A3z("typetag"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node typeAssert_Wx8oA3WX(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_teH17A3z("typeassert"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseQualifierChain_lnCAMcZM(/*MOV*/ s_Node&& expr, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, const int modid, const int _loc, fu_VEC<fu_STR>& _imports)
{
    if ((expr.kind != "call"_fu) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & F_ACCESS))) || (expr.flags & F_COMPOUND_ID))
    {
        _idx--;
        fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src);
    };
    expr.flags |= F_COMPOUND_ID;
    fu_STR path { expr.value };
    for (; ; )
    {
        const fu_STR& id = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (!tryConsume_Nw1J2nmq("op"_fu, "::"_fu, tokens, _idx))
        {
            if ((path == "is"_fu) && (expr.items.size() == 1))
            {
                const s_Node& left = only_zloPVM3y(expr.items);
                s_Node right = createTypeTag_MRDJBVbC(id, modid, _loc);
                return typeAssert_Wx8oA3WX(left, right, modid, _loc);
            };
            path = registerImport_oMz37ISH(fu_STR(path), fname, _imports);
            expr.value = ((path + "\t"_fu) + id);
            return static_cast<s_Node&&>(expr);
        };
        path += ("/"_fu + id);
    };
}

static s_Node parsePrefix_5GfWlmqp(fu_STR&& op, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if (!(has_Bd7df3AL(PREFIX, op)))
    {
        _idx--;
        fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src);
    };
    if ((op == "&"_fu) && tryConsume_Nw1J2nmq("id"_fu, "mut"_fu, tokens, _idx))
        op = "&mut"_fu;

    const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
    s_Node _0 {};
    return (_0 = parseUnaryExpression_JsAhFVvJ(mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns), createPrefix_GxQ4Sch9(op, static_cast<s_Node&&>(_0), modid, _loc));
}

static s_Node parseExpressionHead_Vb2Kvrt7(const int mode, fu::view<s_Token> tokens, int& _idx, const int modid, int& _loc, const fu_STR& fname, const fu_STR& src, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];

    {
        const fu_STR& k = token.kind;
        const fu_STR& v = token.value;
        if ((k == "int"_fu) || (k == "real"_fu) || (k == "str"_fu) || (k == "char"_fu))
            return createLeaf_M8OoSrEi(k, v, modid, _loc);

        if (k == "id"_fu)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == "id"_fu)
            {
                if (v == "fn"_fu)
                    return parseFnDecl_qIPhIZ3k(0, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

                if (v == "infix"_fu)
                    return parseFixityDecl_bPlrWjax(F_INFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

                if (v == "prefix"_fu)
                    return parseFixityDecl_bPlrWjax(F_PREFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

                if (v == "postfix"_fu)
                    return parseFixityDecl_bPlrWjax(F_POSTFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

            };
            return createRead_Cfcu5xCb(v, tokens, _idx, fname, src, modid, _loc);
        };
        if (k == "op"_fu)
        {
            if (v == "("_fu)
                return parseParens_XqDvo9oc(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "{"_fu)
                return parseBlock_chMzY9wp(_idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "["_fu)
                return parseArrayLiteral_12dFM2Xj(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "$"_fu)
                return parseTypeParam_y5dQqtm1(tokens, _idx, fname, src, _dollars, _dollarAuto, modid, _loc);

            if (v == "|"_fu)
                return parseLambda_f50Agene(bool{}, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _col0, _numReturns, _hasPUB, _imports);

            if (v == "||"_fu)
                return parseLambda_f50Agene(true, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _col0, _numReturns, _hasPUB, _imports);

            if (v == "[]"_fu)
                return createDefinit_VAI74yEP(modid, _loc);

            if (v == "::"_fu)
            {
                const fu_STR& id = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                _idx--;
                return parseQualifierChain_lnCAMcZM(createRead_Cfcu5xCb(id, tokens, _idx, fname, src, modid, _loc), _idx, tokens, fname, src, modid, _loc, _imports);
            };
            if (v == "."_fu)
            {
                const fu_STR& id = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                return createAddrOfFn_brlJK1gu(id, F_ACCESS, modid, _loc);
            };
            return parsePrefix_5GfWlmqp(fu_STR(v), _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        };
    };
    _idx--;
    fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src);
}

static s_Node miss_XklMweQa()
{
    return s_Node{};
}

static void lint_qVTxLBpf(const int mode, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_GTYtYt58((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), warnings, options, tokens, _idx, fname, src, _loc);

}

static s_Node parseAccessExpression_dHKZkX4Q(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    s_Token id = tryConsume_Nw1J2nmq("id"_fu, fu::view<char>{}, tokens, _idx);
    if (!id)
    {
        consume_qBQTJmo9("op"_fu, "::"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        id = consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        _idx -= 2;
    };
    return createCall_lzO8w9GS(id.value, F_ACCESS, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, modid, _loc);
}

static s_Node parseCallExpression_sfSW8v5O(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_u2BOlYfs(")"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    if ((expr.kind == "call"_fu) && (expr.flags & F_ACCESS))
    {
        const s_Node* _0;
        const s_Node& head = (expr.items && (expr.items.size() == 1) && *(_0 = &(expr.items[0])) ? *_0 : fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src));
        args.unshift(s_Node(head));
        return createCall_lzO8w9GS((expr.value ? expr.value : fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src)), ((F_METHOD | argFlags) | (expr.flags & ~F_ACCESS)), args, modid, _loc);
    };
    if ((expr.kind == "call"_fu) && (expr.flags & F_ID))
        return createCall_lzO8w9GS((expr.value ? expr.value : fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src)), (argFlags | (expr.flags & ~F_ID)), args, modid, _loc);

    if (expr.kind == "typeparam"_fu)
        return createCall_lzO8w9GS(("$"_fu + (expr.value ? expr.value : fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src))), argFlags, args, modid, _loc);

    fail_mbZGrjv9("TODO dynamic call"_fu, tokens, _idx, fname, src);
}

static s_Node parseIndexExpression_3PWk4sBE(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_u2BOlYfs("]"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    args.unshift(s_Node(expr));
    return createCall_lzO8w9GS("[]"_fu, (argFlags | F_OPERATOR), args, modid, _loc);
}

                                #ifndef DEFt_bfind_nPNQURov
                                #define DEFt_bfind_nPNQURov
inline int bfind_nPNQURov(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_AYFdiMCu
                                #define DEFt_get_AYFdiMCu
inline int get_AYFdiMCu(const s_Map_qI00nKJW& _, const fu_STR& key)
{
    const int idx = bfind_nPNQURov(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const int*)fu::NIL);
}
                                #endif

static s_Node createOr_m2gaqUd6(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame_rQpBPac3("or"_fu, left, right, modid, _loc);
}

static s_Node pipelineRight_G85ybmvT(const s_Node& left, /*MOV*/ s_Node&& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (right.kind != "call"_fu)
        fail_mbZGrjv9("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    if (right.flags & F_METHOD)
        right.items.insert(1, s_Node(left));
    else
        right.items.unshift(s_Node(left));

    return static_cast<s_Node&&>(right);
}

static s_Node tryParseBinary_9t5n8UzE(const s_Node& left, const fu_STR& op, const int p1, int& _precedence, int& _idx, int& _loc, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_XklMweQa();

    _idx++;
    s_Node mid {};
    if (op == "?"_fu)
    {
        mid = parseExpression_DRkh2378(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        consume_qBQTJmo9("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    s_Node right = parseExpression_DRkh2378(p1, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    if (mid)
        return createIf_eWF4TS35(left, mid, right, modid, _loc);

    if (op == "||"_fu)
        return createOr_m2gaqUd6(left, right, modid, _loc);

    if (op == "&&"_fu)
        return createAnd_qY74odNN(left, right, modid, _loc);

    if ((left.kind == "and"_fu) || (left.kind == "or"_fu))
    {
        if (!(left.flags & F_PARENS))
            warn_GTYtYt58((((("Unparenthesized `"_fu + left.kind) + "` on the left side of an `"_fu) + op) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);

    };
    if (op == "|>"_fu)
        return pipelineRight_G85ybmvT(left, s_Node(right), tokens, _idx, fname, src);

    if (op == "<|"_fu)
        return pipelineLeft_wvTcZoFC(s_Node(left), right, tokens, _idx, fname, src);

    if (op == "->"_fu)
        return typeAssert_Wx8oA3WX(left, right, modid, _loc);

    return createCall_lzO8w9GS(op, (F_INFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } }, modid, _loc);
}

                                #ifndef DEFt_has_VtCzn94C
                                #define DEFt_has_VtCzn94C
inline bool has_VtCzn94C(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node tryParseExpressionTail_Qc3oJoRl(const s_Node& head, const int mode, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _precedence, int& _col0, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if (token.kind == "op"_fu)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
            return ((void)_idx--, miss_XklMweQa());

        if (v == "."_fu)
            return ((void)lint_qVTxLBpf(mode, warnings, options, tokens, _idx, fname, src, _loc), parseAccessExpression_dHKZkX4Q(head, tokens, _idx, fname, src, modid, _loc));

        if (v == "("_fu)
            return ((void)lint_qVTxLBpf(mode, warnings, options, tokens, _idx, fname, src, _loc), parseCallExpression_sfSW8v5O(head, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

        if (v == "["_fu)
            return ((void)lint_qVTxLBpf(mode, warnings, options, tokens, _idx, fname, src, _loc), parseIndexExpression_3PWk4sBE(head, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

        const int p1 = get_AYFdiMCu(BINOP.PRECEDENCE, v);
        if (p1)
            return ((void)_idx--, tryParseBinary_9t5n8UzE(head, v, p1, _precedence, _idx, _loc, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

        if (has_VtCzn94C(POSTFIX, v))
            return createCall_lzO8w9GS((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu_STR(v)), (F_POSTFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, modid, _loc);

        if (v == "::"_fu)
            return parseQualifierChain_lnCAMcZM(s_Node(head), _idx, tokens, fname, src, modid, _loc, _imports);

    };
    return ((void)_idx--, miss_XklMweQa());
}

static s_Node parseExpression_DRkh2378(const int p1, const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (mode & M_LINT_ENSURE_INDENT)
    {
        if (!(tokens[_idx].col > _col0))
            warn_GTYtYt58(x7E((x7E((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].col)), warnings, options, tokens, _idx, fname, src, _loc);

    };
    /*MOV*/ s_Node head = parseExpressionHead_Vb2Kvrt7(mode, tokens, _idx, modid, _loc, fname, src, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _numReturns, _hasPUB, _imports, _anonFns);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == "int"_fu) || (head.kind == "real"_fu))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_Qc3oJoRl(head, mode_1, tokens, _idx, warnings, options, fname, src, _loc, modid, _precedence, _col0, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.col > col00))
                    warn_GTYtYt58(x7E((x7E((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.col)), warnings, options, tokens, _idx, fname, src, _loc);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_JsAhFVvJ(const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    return parseExpression_DRkh2378(P_PREFIX_UNARY, mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node parseTypeAnnot_eksFR601(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    return parseUnaryExpression_JsAhFVvJ(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

static s_Node tryPopTypeAnnot_rgwkBxCE(fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    return (tryConsume_Nw1J2nmq("op"_fu, ":"_fu, tokens, _idx) ? parseTypeAnnot_eksFR601(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : miss_XklMweQa());
}

static s_Node parseLet_vNBe6IdH(const bool xqmark, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    int flags = 0;
    if (tryConsume_Nw1J2nmq("id"_fu, "using"_fu, tokens, _idx))
        flags |= F_USING;

    if (tryConsume_Nw1J2nmq("id"_fu, "implicit"_fu, tokens, _idx))
        flags |= F_IMPLICIT;

    if (tryConsume_Nw1J2nmq("id"_fu, "lax"_fu, tokens, _idx))
        flags |= F_LAX;

    if (tryConsume_Nw1J2nmq("id"_fu, "shadow"_fu, tokens, _idx))
        flags |= F_SHADOW;

    if (tryConsume_Nw1J2nmq("id"_fu, "mut"_fu, tokens, _idx))
        flags |= F_MUT;

    if (tryConsume_Nw1J2nmq("id"_fu, "ref"_fu, tokens, _idx))
        flags |= F_REF;

    fu_STR id { consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value };
    if (id[0] == '_')
        flags |= F_LAX;

    if (xqmark && tryConsume_Nw1J2nmq("op"_fu, "!"_fu, tokens, _idx))
    {
        flags |= F_MUSTNAME;
        fu_STR inner_id = tryConsume_Nw1J2nmq("id"_fu, fu::view<char>{}, tokens, _idx).value;
        if (inner_id)
        {
            flags |= F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    if (xqmark && tryConsume_Nw1J2nmq("op"_fu, "."_fu, tokens, _idx))
    {
        flags |= F_COMPOUND_ID;
        id += ("."_fu + consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);
        while (tryConsume_Nw1J2nmq("op"_fu, "::"_fu, tokens, _idx))
            id += ("\t"_fu + consume_qBQTJmo9("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    };
    if (xqmark && tryConsume_Nw1J2nmq("op"_fu, "[]"_fu, tokens, _idx))
        flags |= F_REST_ARG;

    s_Token optional = (xqmark ? tryConsume_Nw1J2nmq("op"_fu, "?"_fu, tokens, _idx) : s_Token{});
    s_Node type = tryPopTypeAnnot_rgwkBxCE(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    s_Node init = (optional ? createDefinit_VAI74yEP(modid, _loc) : (tryConsume_Nw1J2nmq("op"_fu, "="_fu, tokens, _idx) ? parseExpression_DRkh2378(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : s_Node{}));
    return createLet_IiwMosMk(id, flags, type, init, modid, _loc);
}

static s_Node parseStructItem_VAwBHoKJ(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    /*MOV*/ s_Node member = parseLet_vNBe6IdH(true, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    softSemi_1dYg0PuF(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ member;
}

static s_Node parseDefer_aAfrm9d9(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    s_Token _0 {};
    fu_STR value = (tryConsume_Nw1J2nmq("op"_fu, ":"_fu, tokens, _idx) ? ((_0 = tryConsume_Nw1J2nmq("id"_fu, "err"_fu, tokens, _idx)) ? static_cast<s_Token&&>(_0) : s_Token(consume_qBQTJmo9("id"_fu, "ok"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src))).value : fu_STR{});
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_mbZGrjv9(fu_STR{}, tokens, _idx, fname, src);
    };
    fu_VEC<s_Node> _1 {};
    return (_1 = fu_VEC<s_Node> { fu::slate<1, s_Node> { parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) } }, make_teH17A3z("defer"_fu, static_cast<fu_VEC<s_Node>&&>(_1), 0, value, modid, _loc));
}

static s_Node parseStatementOrDefer_UdBS8Q1R(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == "id"_fu)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
            return ((void)_idx++, parseDefer_aAfrm9d9(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

    };
    return parseStatement_nvchsvdV(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

static fu_VEC<s_Node> parseBlockLike_IaJk0AHu(fu::view<char> endKind, fu::view<char> endVal, const bool sTruct, int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
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
                warn_GTYtYt58((x7E((x7E((x7E((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            break;
        };
        _col0 = token.col;
        if (!(_col0 > col00))
            warn_GTYtYt58((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (!((colNN < 0) || (colNN == _col0) || (token.line == lineNN)))
            warn_GTYtYt58((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (colNN < 0)
            colNN = _col0;

        lineNN = token.line;
        s_Node expr = (sTruct ? parseStructItem_VAwBHoKJ(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : parseStatementOrDefer_UdBS8Q1R(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));
        if (!((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
            warn_GTYtYt58("Orphan pure-looking expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

        items.push(s_Node(expr));
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_JktR9jwC(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    consume_qBQTJmo9("sof"_fu, "sof"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    _loc = _idx;
    fu_VEC<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_IaJk0AHu("eof"_fu, "eof"_fu, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns), make_teH17A3z("root"_fu, static_cast<fu_VEC<s_Node>&&>(_0), 0, (*(const fu_STR*)fu::NIL), modid, _loc));
    if (use_AUTOPUB && !_hasPUB)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            fu::view<char> k = item.kind;
            if (((k == "fn"_fu) || (k == "let"_fu) || (k == "typedef"_fu) || (k == "struct"_fu)) && !(item.flags & F_SHADOW))
                set_PUB_dYnK1rfW(item.flags, tokens, _idx, fname, src, _hasPUB);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_RK3hyBGJ(const int modid, const fu_STR& fname, const fu_STR& src, fu::view<s_Token> tokens, const s_Options& options)
{
    int _idx = 0;
    int _loc = 0;
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    int _dollarAuto = 0;
    fu_VEC<fu_STR> _dollars {};
    int _anonFns = 0;
    int _numReturns = 0;
    bool _hasPUB = false;
    fu_VEC<fu_STR> _imports {};
    fu_VEC<fu_STR> warnings {};
    if (!(tokens[(tokens.size() - 1)].kind == "eof"_fu))
        fail_mbZGrjv9("Missing `eof` token."_fu, tokens, _idx, fname, src);

    s_Node root = parseRoot_JktR9jwC(tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(_imports), fu_VEC<fu_STR>(warnings) };
}

#endif
