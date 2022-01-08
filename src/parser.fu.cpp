
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
static fu_VEC<s_Node> parseBlockLike_cRIuEohd(fu::view<char>, fu::view<char>, bool, bool, int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseExpression_i8HbOuMQ(int, int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseFnDecl_DeOeDkP6(int, bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int, int&, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseLet_3sMJyPGw(bool, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseStatement_VAwBHoKJ(int&, fu::view<s_Token>, int&, const fu_STR&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseTypeAnnot_NihMLCRj(int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseUnaryExpression_qYGBJqqT(int, int&, int&, int&, int&, fu::view<s_Token>, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node tryPopTypeAnnot_4AdjyVGh(fu::view<s_Token>, int&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, const fu_STR&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, bool&, fu_VEC<fu_STR>&, int&);

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

                                #ifndef DEF_F_CTX_PURE
                                #define DEF_F_CTX_PURE
extern const int F_CTX_PURE = F_OPT_ARG;
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

                                #ifndef DEF_F_TODO_FIX_RRET
                                #define DEF_F_TODO_FIX_RRET
inline constexpr int F_TODO_FIX_RRET = (1 << 27);
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

                                #ifndef DEFt_grow_if_oob_eIneq03b
                                #define DEFt_grow_if_oob_eIneq03b
inline bool& grow_if_oob_eIneq03b(fu_VEC<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_update_tkI0P9Qv
                                #define DEFt_update_tkI0P9Qv
inline void update_tkI0P9Qv(int, const fu_STR& item, int, const int extra, s_Map_qI00nKJW& _)
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
    update_tkI0P9Qv(0, key, 0, value, _);
}
                                #endif

static void binop_E3aPH9Rk(fu::view<fu_STR> ops, int& precedence, s_BINOP& out, const bool rightToLeft)
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
    binop_E3aPH9Rk((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<2, fu_STR> { "+"_fu, "-"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<2, fu_STR> { "<<"_fu, ">>"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "&"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "^"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "|"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "~"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "<=>"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<4, fu_STR> { "in"_fu, "is"_fu, "as"_fu, "->"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<4, fu_STR> { "<"_fu, "<="_fu, ">"_fu, ">="_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<2, fu_STR> { "=="_fu, "!="_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "&&"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "||"_fu }), precedence, out, rightToLeft);
    rightToLeft = true;
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "?"_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<16, fu_STR> { "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), precedence, out, rightToLeft);
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "<|"_fu }), precedence, out, rightToLeft);
    rightToLeft = false;
    binop_E3aPH9Rk((fu::slate<1, fu_STR> { "|>"_fu }), precedence, out, rightToLeft);
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

[[noreturn]] static fu::never fail_f0gbzHmy(fu_STR&& reason, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_TpfrRZA4(fname, src, token, reason);
}

static const s_Token& consume_AA0wu9eo(fu::view<char> kind, fu::view<char> value, const fu_STR& err, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    };
    fail_f0gbzHmy(((((((err ? fu_STR(err) : "Expected"_fu) + " `"_fu) + (value ? value : kind)) + "`, got `"_fu) + token.value) + "`."_fu), tokens, _idx, fname, src);
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_compose_O7f2aayI(fu_STR&& reason, fu::view<s_Token> tokens, const int _loc, const int _idx, fu::view<char> fname)
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

static void warn_iJup6O0x(const fu_STR& reason, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_f0gbzHmy(fu_STR(reason), tokens, _idx, fname, src);

    warnings += fail_compose_O7f2aayI(fu_STR(reason), tokens, _loc, _idx, fname);
}

static s_Token tryConsume_fQgvcv2z(fu::view<char> kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return s_Token(token);
    };
    return s_Token{};
}

static s_Node make_WQTPiphi(const fu_STR& kind, const fu_VEC<s_Node>& items, const int flags, const fu_STR& value, const int modid, const int _loc)
{
    return s_Node { fu_STR(kind), int(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static s_Node createLeaf_uWkYniud(const fu_STR& kind, const fu_STR& value, const int modid, const int _loc)
{
    return make_WQTPiphi(kind, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
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

static s_Node createAddrOfFn_H4WVWwY1(const fu_STR& name, const int flags, const int modid, const int _loc)
{
    return make_WQTPiphi("addroffn"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), flags, name, modid, _loc);
}

static int parseArgsDecl_tyi3fBc3(fu_VEC<s_Node>& outArgs, fu::view<char> endk, fu::view<char> endv, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
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
        if (tryConsume_fQgvcv2z(endk, endv, tokens, _idx))
            break;

        if (!first)
            consume_AA0wu9eo("op"_fu, ","_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);

        first = false;
        const bool isInline = !!tryConsume_fQgvcv2z("id"_fu, "inline"_fu, tokens, _idx);
        int insertAt = -1;
        s_Node arg = parseLet_3sMJyPGw(true, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
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
                fail_f0gbzHmy("TODO default implicit arguments"_fu, tokens, _idx, fname, src);

            defaults = true;
            firstDefault = outArgs.size();
        }
        else if (defaults)
        {
            if (!(arg.flags & F_MUSTNAME))
                fail_f0gbzHmy("TODO non-trailing default arguments"_fu, tokens, _idx, fname, src);

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

static s_Node createBlock_bOIPkTAM(const fu_VEC<s_Node>& items, const fu_STR& label, const int modid, const int _loc)
{
    return make_WQTPiphi("block"_fu, items, 0, label, modid, _loc);
}

static s_Node parseBlock_QA3G9MxG(int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> _0 {};
    return (_0 = parseBlockLike_cRIuEohd("op"_fu, "}"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns), createBlock_bOIPkTAM(static_cast<fu_VEC<s_Node>&&>(_0), (*(const fu_STR*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_vN5jYo0V(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& label = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    /*MOV*/ s_Node stmt = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if ((stmt.kind == "loop"_fu) || (stmt.kind == "block"_fu))
    {
        if (stmt.value)
            fail_f0gbzHmy((((("Label `"_fu + label) + "`: statement already labeled as `"_fu) + stmt.value) + "`."_fu), tokens, _idx, fname, src);

        stmt.value = label;
        return /*NRVO*/ stmt;
    };
    return createBlock_bOIPkTAM(fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(stmt) } }, label, modid, _loc);
}

static void softSemi_XklMweQa(fu::view<s_Token> tokens, int& _idx, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<char> fname, const fu_STR& src, const int _loc)
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
    warn_iJup6O0x((("Missing semicollon before `"_fu + peek.value) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);
}

static s_Node parseLetStmt_YK1Eg2tr(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node ret = parseLet_3sMJyPGw(false, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node pipelineLeft_HHyXrdE0(/*MOV*/ s_Node&& left, const s_Node& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (left.kind != "call"_fu)
        fail_f0gbzHmy("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    left.items.push(s_Node(right));
    left.flags &= ~F_ID;
    return static_cast<s_Node&&>(left);
}

static s_Node parseExpressionStatement_nvchsvdV(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node expr = parseExpression_i8HbOuMQ(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if (tryConsume_fQgvcv2z("op"_fu, ":"_fu, tokens, _idx))
    {
        if (!((expr.kind == "call"_fu) ? (expr.flags & ((F_ACCESS | F_METHOD) | F_ID)) : int{}))
            fail_f0gbzHmy("We only allow x.y: z pipelines right now to avoid ambiguity."_fu, tokens, _idx, fname, src);

        s_Node right = parseExpression_i8HbOuMQ(P_RESET, M_LAMBDA_STMT_OK, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        return pipelineLeft_HHyXrdE0(s_Node(expr), right, tokens, _idx, fname, src);
    };
    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ expr;
}

static s_Node parseLetOrExpressionStatement_42jCPOzi(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == "id"_fu) && (tokens[_idx].kind == "id"_fu))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_YK1Eg2tr(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        if (v == "lax"_fu)
            return ((void)_idx--, parseLetStmt_YK1Eg2tr(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (v == "mut"_fu)
            return ((void)_idx--, parseLetStmt_YK1Eg2tr(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (v == "ref"_fu)
            return ((void)_idx--, parseLetStmt_YK1Eg2tr(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

    };
    _idx--;
    if (!_fnDepth)
        fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src);

    return parseExpressionStatement_nvchsvdV(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

                                #ifndef DEFt_only_RY1rhQ63
                                #define DEFt_only_RY1rhQ63
inline char only_RY1rhQ63(fu::view<char> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createCall_Hlx5mUSU(const fu_STR& id, const int flags, const fu_VEC<s_Node>& args, const int modid, const int _loc)
{
    return make_WQTPiphi("call"_fu, args, flags, id, modid, _loc);
}

static s_Node createPrefix_JaQYyeUZ(const fu_STR& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
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
    return createCall_Hlx5mUSU(op, (F_PREFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, modid, _loc);
}

static s_Node createIf_ENrOvbxt(const s_Node& cond, const s_Node& cons, const s_Node& alt, const int modid, const int _loc)
{
    return make_WQTPiphi("if"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node flattenIfSame_mxQSzW3h(const fu_STR& kind, const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    fu::view<char> k_left = left.kind;
    fu::view<char> k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_WQTPiphi(kind, items, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node createAnd_xGB9EFDB(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame_mxQSzW3h("and"_fu, left, right, modid, _loc);
}

static s_Node parseIf_aAfrm9d9(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == "id"_fu) && (prev.value == "else"_fu)) ? prev : token);
    s_Token nOt = tryConsume_fQgvcv2z("op"_fu, "!"_fu, tokens, _idx);
    consume_AA0wu9eo("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cond = parseLetOrExpressionStatement_42jCPOzi(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_AA0wu9eo("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (nOt)
        cond = createPrefix_JaQYyeUZ("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    s_Token eLse = tryConsume_fQgvcv2z("id"_fu, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.line == token_1.line) || (eLse.col == token_1.col)))
            warn_iJup6O0x((x7E((x7E((x7E("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.col)) + ", got "_fu), fu::i64dec(eLse.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.line)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        s_Node alt = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        return createIf_ENrOvbxt(cond, cons, alt, modid, _loc);
    };
    return createAnd_xGB9EFDB(cond, cons, modid, _loc);
}

static s_Node parseParens_3yeF85su(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node out = parseExpression_i8HbOuMQ(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    out.flags |= F_PARENS;
    consume_AA0wu9eo("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return /*NRVO*/ out;
}

static s_Node createLoop_qeHg7UbG(const s_Node& init, const s_Node& pre_cond, const s_Node& body, const s_Node& post_cond, const s_Node& post, const int modid, const int _loc)
{
    return make_WQTPiphi("loop"_fu, fu_VEC<s_Node> { fu::slate<5, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(body), s_Node(post_cond), s_Node(post) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseFor_UdzY4MwP(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_AA0wu9eo("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    if (tryConsume_fQgvcv2z("id"_fu, "fieldname"_fu, tokens, _idx))
    {
        const fu_STR& placeholder = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        consume_AA0wu9eo("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node type = parseTypeAnnot_NihMLCRj(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        consume_AA0wu9eo("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        s_Node body = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        return make_WQTPiphi("forfieldsof"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(body) } }, 0, placeholder, modid, _loc);
    };
    s_Node init = (!tryConsume_fQgvcv2z("op"_fu, ";"_fu, tokens, _idx) ? parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{});
    if (init && (init.kind != "let"_fu))
        fail_f0gbzHmy((("`for` expects a `let` statement, got a `"_fu + init.kind) + "`."_fu), tokens, _idx, fname, src);

    s_Node pre_cond = (!tryConsume_fQgvcv2z("op"_fu, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_42jCPOzi(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{});
    const s_Token& token = tokens[_idx];
    s_Node post = (!((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseParens_3yeF85su(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : (consume_AA0wu9eo("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src) ? s_Node{} : s_Node{}));
    s_Node body = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return createLoop_qeHg7UbG(init, pre_cond, body, (*(const s_Node*)fu::NIL), post, modid, _loc);
}

static s_Node parseWhile_b1dJ9Rbd(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_AA0wu9eo("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node pre_cond = parseLetOrExpressionStatement_42jCPOzi(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_AA0wu9eo("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node body = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return createLoop_qeHg7UbG((*(const s_Node*)fu::NIL), pre_cond, body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_nMKB3E06(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    s_Node body = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_AA0wu9eo("id"_fu, "while"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_AA0wu9eo("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node post_cond = parseLetOrExpressionStatement_42jCPOzi(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_AA0wu9eo("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLoop_qeHg7UbG((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, post_cond, (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node createJump_7iLhJ71d(const fu_STR& kind, const fu_STR& label, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make_WQTPiphi(kind, (expr ? fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } } : fu_VEC<s_Node>{}), flags, label, modid, _loc);
}

static s_Node parseJump_dcktCtkJ(const fu_STR& kind, int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src);
    };
    const fu_STR& label = (tryConsume_fQgvcv2z("op"_fu, ":"_fu, tokens, _idx) ? consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value : (*(const fu_STR*)fu::NIL));
    s_Node expr {};
    if (!tryConsume_fQgvcv2z("op"_fu, ";"_fu, tokens, _idx))
    {
        expr = parseExpression_i8HbOuMQ(P_RESET, M_LINT_ENSURE_INDENT, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    };
    return createJump_7iLhJ71d(kind, label, expr, 0, modid, _loc);
}

static s_Node createRead_uFq1n26s(const fu_STR& id, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    return createCall_Hlx5mUSU((id ? id : fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src)), F_ID, (*(const fu_VEC<s_Node>*)fu::NIL), modid, _loc);
}

static s_Node createLet_I8Jcp5pU(const fu_STR& id, const int flags, const s_Node& type, const s_Node& init, const int modid, const int _loc)
{
    return make_WQTPiphi("let"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, modid, _loc);
}

static s_Node parseCatchErrvar_Mk9AsUb3(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    const fu_STR& id = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    return createLet_I8Jcp5pU(id, 0, createRead_uFq1n26s("string"_fu, tokens, _idx, fname, src, modid, _loc), s_Node{}, modid, _loc);
}

static s_Node parseTryCatch_ReyK06G0(int& _fnDepth, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src);
    };
    s_Node tRy = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    consume_AA0wu9eo("id"_fu, "catch"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    consume_AA0wu9eo("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node err = parseCatchErrvar_Mk9AsUb3(tokens, _idx, fname, src, modid, _loc);
    consume_AA0wu9eo("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node cAtch = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return make_WQTPiphi("try"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(tRy), s_Node(err), s_Node(cAtch) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseStructDecl_bh6QUdW8(const int flags, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_STR name = tryConsume_fQgvcv2z("id"_fu, fu::view<char>{}, tokens, _idx).value;
    consume_AA0wu9eo("op"_fu, "{"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    fu_VEC<s_Node> items = parseBlockLike_cRIuEohd("op"_fu, "}"_fu, true, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return make_WQTPiphi("struct"_fu, items, flags, name, modid, _loc);
}

static s_Node parseTypedef_4HKhA3FO(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& name = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    consume_AA0wu9eo("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    s_Node annot = parseTypeAnnot_NihMLCRj(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return make_WQTPiphi("typedef"_fu, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(annot) } }, 0, name, modid, _loc);
}

static void set_PUB_JF2CBrgY(int& flags, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, bool& _hasPUB)
{
    flags |= F_PUB;
    if (flags & F_SHADOW)
        fail_f0gbzHmy("Cannot pub a shadow."_fu, tokens, _idx, fname, src);

    _hasPUB = true;
}

static s_Node parsePub_3RJUsUM0(int& _fnDepth, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (_fnDepth)
        fail_f0gbzHmy("Cannot pub from within a fn."_fu, tokens, _idx, fname, src);

    /*MOV*/ s_Node out = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    set_PUB_JF2CBrgY(out.flags, tokens, _idx, fname, src, _hasPUB);
    return /*NRVO*/ out;
}

static s_Node parseShadow_C1Y55YXa(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node out = parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    out.flags |= F_SHADOW;
    if (out.flags & F_PUB)
        fail_f0gbzHmy("Cannot shadow a pub."_fu, tokens, _idx, fname, src);

    return /*NRVO*/ out;
}

static s_Node parseFixityDecl_vZ8BUaFf(const int flags, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if ((flags & F_CONVERSION) && (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX)))
        fail_f0gbzHmy("`implicit` functions can't be operators."_fu, tokens, _idx, fname, src);

    consume_AA0wu9eo("id"_fu, "fn"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseFnDecl_DeOeDkP6(int(flags), expr, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseInlineDecl_JKaXiKWM(int flags, const int F, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    flags |= F;
    fu::view<char> v = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "infix"_fu)
        return parseFixityDecl_vZ8BUaFf((flags | F_INFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    if (v == "prefix"_fu)
        return parseFixityDecl_vZ8BUaFf((flags | F_PREFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    if (v == "postfix"_fu)
        return parseFixityDecl_vZ8BUaFf((flags | F_POSTFIX), bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    _idx--;
    return parseFixityDecl_vZ8BUaFf(flags, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parsePureDecl_9cczNO2w(const int flags, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseInlineDecl_JKaXiKWM(int(flags), F_PURE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseConversionDecl_1LXE9mkV(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu::view<char> v = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (v == "pure"_fu)
        return parsePureDecl_9cczNO2w(int(F_CONVERSION), tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    if (v == "inline"_fu)
        return parseInlineDecl_JKaXiKWM(int(F_CONVERSION), F_INLINE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    _idx--;
    return parseFixityDecl_vZ8BUaFf(F_CONVERSION, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseNoCopy_glV3bKlj(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_AA0wu9eo("id"_fu, "struct"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    return parseStructDecl_bh6QUdW8(F_NOCOPY, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseNovec_aN9tCLTM(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseInlineDecl_JKaXiKWM(0, F_NOVEC, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
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

static fu_STR registerImport_3UBNgP3d(/*MOV*/ fu_STR&& value, const fu_STR& fname, fu_VEC<fu_STR>& fuzimports)
{
    if (!path_ext_rOVPWlZS(value))
        value += ".fu"_fu;

    fu_STR dir = path_dirname_rOVPWlZS(fname);
    value = (starts_FrnSuXk6(value, "."_fu) ? path_join_iwa818V1(dir, value) : ((dir + '\v') + value));
    if (!has_H8YIzJWF(fuzimports, value))
        fuzimports.push(fu_STR(value));

    return static_cast<fu_STR&&>(value);
}

static s_Node parseImport_k15lSvOM(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int _loc, fu_VEC<fu_STR>& fuzimports, const int modid)
{
    fu_STR value = tryConsume_fQgvcv2z("id"_fu, fu::view<char>{}, tokens, _idx).value;
    if (value)
    {
        while (tryConsume_fQgvcv2z("op"_fu, "::"_fu, tokens, _idx))
            value += ("/"_fu + consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    }
    else
        value = consume_AA0wu9eo("str"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;

    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    value = registerImport_3UBNgP3d(fu_STR(value), fname, fuzimports);
    return make_WQTPiphi("import"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node parseCompilerPragma_oTvg3z8M(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc, const int _col0, fu_VEC<fu_STR>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node ret = make_WQTPiphi("compiler"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value, modid, _loc);
    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ ret;
}

static s_Node parseExternDecl_wdZzmlmZ(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseInlineDecl_JKaXiKWM(0, F_EXTERN, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);
}

static s_Node parsePrimDecl_KVPxaq0G(const bool eNum, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_STR name = tryConsume_fQgvcv2z("id"_fu, fu::view<char>{}, tokens, _idx).value;
    s_Node annot = tryPopTypeAnnot_4AdjyVGh(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    fu_VEC<s_Node> items = (tryConsume_fQgvcv2z("op"_fu, "{"_fu, tokens, _idx) ? parseBlockLike_cRIuEohd("op"_fu, "}"_fu, false, true, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : fu_VEC<s_Node>{});
    if (eNum)
    {
        if (!(items))
            fail_f0gbzHmy("`enum` declarations require a non-empty { list of variants }."_fu, tokens, _idx, fname, src);

    }
    else
    {
        if (!(annot))
            fail_f0gbzHmy("`primitive` declarations require a base type annotation."_fu, tokens, _idx, fname, src);

    };
    return make_WQTPiphi("primdecl"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(annot), (items ? make_WQTPiphi("items"_fu, items, 0, (*(const fu_STR*)fu::NIL), modid, _loc) : s_Node{}) } }, (eNum ? F_ENUM : (*(const int*)fu::NIL)), name, modid, _loc);
}

static s_Node parseStatement_VAwBHoKJ(int& _loc, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_loc = _idx++)])) ? *_0 : fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src));
    if (token.kind == "op"_fu)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_QA3G9MxG(_idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        if (v == ":"_fu)
            return parseLabelledStatement_vN5jYo0V(tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

    }
    else if (token.kind == "id"_fu)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_aAfrm9d9(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "for"_fu)
                return parseFor_UdzY4MwP(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "while"_fu)
                return parseWhile_b1dJ9Rbd(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "do"_fu)
                return parseDoWhile_nMKB3E06(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "return"_fu)
                return parseJump_dcktCtkJ("return"_fu, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "break"_fu)
                return parseJump_dcktCtkJ("break"_fu, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "continue"_fu)
                return parseJump_dcktCtkJ("continue"_fu, _fnDepth, _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "try"_fu)
                return parseTryCatch_ReyK06G0(_fnDepth, _idx, tokens, fname, src, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        };
        if (peek.kind == "op"_fu)
        {
            if ((peek.value == "{"_fu) && (v == "struct"_fu))
                return parseStructDecl_bh6QUdW8(0, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        };
        if ((v == "fn"_fu) && ((peek.kind == "id"_fu) || !_fnDepth))
            return parseFnDecl_DeOeDkP6(0, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

        if (peek.kind == "id"_fu)
        {
            if (v == "struct"_fu)
                return parseStructDecl_bh6QUdW8(0, tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "type"_fu)
                return parseTypedef_4HKhA3FO(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "pub"_fu)
                return parsePub_3RJUsUM0(_fnDepth, tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "shadow"_fu)
                return parseShadow_C1Y55YXa(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "using"_fu)
                return parseConversionDecl_1LXE9mkV(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "nocopy"_fu)
                return parseNoCopy_glV3bKlj(tokens, _idx, fname, src, _col0, warnings, options, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "novec"_fu)
                return parseNovec_aN9tCLTM(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "import"_fu)
                return parseImport_k15lSvOM(tokens, _idx, fname, src, _col0, warnings, options, _loc, fuzimports, modid);

            if (v == "compiler"_fu)
                return parseCompilerPragma_oTvg3z8M(tokens, _idx, fname, src, modid, _loc, _col0, warnings, options);

            if (v == "pure"_fu)
                return parsePureDecl_9cczNO2w(0, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "inline"_fu)
                return parseInlineDecl_JKaXiKWM(0, F_INLINE, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "extern"_fu)
                return parseExternDecl_wdZzmlmZ(tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "infix"_fu)
                return parseFixityDecl_vZ8BUaFf(F_INFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "prefix"_fu)
                return parseFixityDecl_vZ8BUaFf(F_PREFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "postfix"_fu)
                return parseFixityDecl_vZ8BUaFf(F_POSTFIX, bool{}, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            if (v == "primitive"_fu)
                return parsePrimDecl_KVPxaq0G(false, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "enum"_fu)
                return parsePrimDecl_KVPxaq0G(true, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

        };
    };
    _idx--;
    return parseLetOrExpressionStatement_42jCPOzi(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

                                #ifndef DEFt_last_jfKi2idX
                                #define DEFt_last_jfKi2idX
inline s_Node& last_jfKi2idX(fu_VEC<s_Node>& s)
{
    return (s.size() ? s.mutref((s.size() - 1)) : fu::fail("len == 0"_fu));
}
                                #endif

static s_Node createReturn_45uLv1Ac(const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return createJump_7iLhJ71d("return"_fu, (*(const fu_STR*)fu::NIL), expr, flags, modid, _loc);
}

static s_Node parseFnBodyBranch_R1ET8417(const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    tryConsume_fQgvcv2z("op"_fu, "="_fu, tokens, _idx);
    /*MOV*/ s_Node body = (expr ? parseExpression_i8HbOuMQ(_precedence, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));
    if (body.kind == "block"_fu)
    {
        if (body.items && (last_jfKi2idX(body.items).kind != "return"_fu))
            body.items += make_WQTPiphi("void"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), modid, _loc);

        return /*NRVO*/ body;
    };
    if (body.kind == "return"_fu)
        return createBlock_bOIPkTAM(fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(body) } }, (*(const fu_STR*)fu::NIL), modid, _loc);

    if ((body.kind == "call"_fu) && (body.value == "__native"_fu))
        return /*NRVO*/ body;

    return createBlock_bOIPkTAM(fu_VEC<s_Node> { fu::slate<1, s_Node> { createReturn_45uLv1Ac(body, F_SINGLE_STMT, modid, _loc) } }, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static void parseBranch_GGVGgARG(const bool noCond, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns, fu_VEC<s_Node>& branches)
{
    s_Node cond = (!noCond ? parseUnaryExpression_qYGBJqqT(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{});
    s_Node type = tryPopTypeAnnot_4AdjyVGh(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    s_Node cons = parseFnBodyBranch_R1ET8417(bool{}, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    branches.push(make_WQTPiphi("fnbranch"_fu, fu_VEC<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(type), s_Node(cons) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc));
}

static int parseFnBodyOrPattern_TM03heN5(fu_VEC<s_Node>& out_push_body, const bool expr, fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ const int flags = 0;
    s_Node body {};
    if (!expr && tryConsume_fQgvcv2z("id"_fu, "case"_fu, tokens, _idx))
    {
        fu_VEC<s_Node> branches {};
        do
            parseBranch_GGVGgARG(bool{}, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns, branches);
        while (tryConsume_fQgvcv2z("id"_fu, "case"_fu, tokens, _idx));
        if (tryConsume_fQgvcv2z("id"_fu, "default"_fu, tokens, _idx))
            parseBranch_GGVGgARG(true, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns, branches);

        body = make_WQTPiphi("pattern"_fu, branches, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
    }
    else
        body = parseFnBodyBranch_R1ET8417(expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

    out_push_body.push(s_Node(body));
    return /*NRVO*/ flags;
}

static s_Node parseFnDecl_cont_y0elg4AE(const fu_STR& name, int flags, const bool expr, const fu_STR& endv, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> items {};
    _fnDepth++;
    const int dollars0 = _dollars.size();
    fu_DEFER(
    {
        _fnDepth--;
        _dollars.shrink(dollars0);
    });
    flags |= (endv ? parseArgsDecl_tyi3fBc3(items, "op"_fu, endv, _dollarAuto, _dollars, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _hasPUB, fuzimports, _anonFns) : int{});
    s_Node type = tryPopTypeAnnot_4AdjyVGh(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    const int retIdx = items.size();
    items.push(s_Node(type));
    flags |= parseFnBodyOrPattern_TM03heN5(items, expr, tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if ((name == "main"_fu) && (_fnDepth == 1))
    {
        if (!type)
            items.mutref(retIdx) = (type = createRead_uFq1n26s("i32"_fu, tokens, _idx, fname, src, modid, _loc));
        else if ((type.kind != "call"_fu) || (type.value != "i32"_fu) || type.items.size())
            fail_f0gbzHmy("fn main() must return i32."_fu, tokens, _idx, fname, src);

        set_PUB_JF2CBrgY(flags, tokens, _idx, fname, src, _hasPUB);
        flags |= F_EXTERN;
    };
    if (_dollars.size() > dollars0)
        flags |= F_TEMPLATE;

    return make_WQTPiphi("fn"_fu, items, flags, name, modid, _loc);
}

static s_Node parseFnDecl_DeOeDkP6(int flags, const bool expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, const int modid, int& _loc, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_STR name = tryConsume_fQgvcv2z("id"_fu, fu::view<char>{}, tokens, _idx).value;
    if (!name)
    {
        const int postfix = (flags & F_POSTFIX);
        name = consume_AA0wu9eo("op"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (postfix)
        {
            if (!((name == "++"_fu) || (name == "--"_fu)))
                fail_f0gbzHmy((("No such postfix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

            name = ("postfix"_fu + name);
        }
        else if (flags & F_INFIX)
        {
            if (!(has_pMP4umlu(BINOP.PRECEDENCE, name)))
                fail_f0gbzHmy((("No such infix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        }
        else if (flags & F_PREFIX)
        {
            if (!(has_Bd7df3AL(PREFIX, name)))
                fail_f0gbzHmy((("No such prefix operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

        };
        flags &= ~(F_INFIX | F_PREFIX);
        flags |= F_OPERATOR;
    }
    else if (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX))
        fail_f0gbzHmy((("Not an operator: `"_fu + name) + "`."_fu), tokens, _idx, fname, src);

    fu_STR endv = (tryConsume_fQgvcv2z("op"_fu, "("_fu, tokens, _idx) ? ")"_fu : fu_STR{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_H4WVWwY1(name, flags, modid, _loc);

        consume_AA0wu9eo("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    return parseFnDecl_cont_y0elg4AE(name, int(flags), expr, endv, _fnDepth, _dollars, _dollarAuto, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _hasPUB, fuzimports, _anonFns);
}

static fu_STR getAutoName_lnCAMcZM(const s_Node& expr, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if ((expr.kind == "call"_fu) && hasIdentifierChars_rOVPWlZS(expr.value))
        return fu_STR(expr.value);

    if (expr.items)
    {
        const int i = (((expr.kind == "and"_fu) && (expr.items.size() - 1)) ? ((expr.kind == "if"_fu) ? 1 : int{}) : 0);
        return getAutoName_lnCAMcZM(expr.items[i], tokens, _idx, fname, src);
    };
    fail_f0gbzHmy("Can't :autoname this expression."_fu, tokens, _idx, fname, src);
}

static s_Node createArgID_l9uQwfoa(const fu_STR& id, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make_WQTPiphi("argid"_fu, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, modid, _loc);
}

static int parseCallArgs_GNonMjt1(fu::view<char> endop, fu_VEC<s_Node>& out_args, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ int flags = 0;
    bool first = true;
    for (; ; )
    {
        if (tryConsume_fQgvcv2z("op"_fu, endop, tokens, _idx))
            break;

        if (!first)
        {
            consume_AA0wu9eo("op"_fu, ","_fu, (("Call expr expected `"_fu + endop) + "` or"_fu), tokens, _idx, fname, src);
            if (tryConsume_fQgvcv2z("op"_fu, endop, tokens, _idx))
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
        s_Node expr = parseExpression_i8HbOuMQ(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        if (autoName)
            name = getAutoName_lnCAMcZM(expr, tokens, _idx, fname, src);

        if (name)
            flags |= F_NAMED_ARGS;

        out_args.push((name ? createArgID_l9uQwfoa(name, expr, (optional ? F_OPT_ARG : (*(const int*)fu::NIL)), modid, _loc) : s_Node(expr)));
    };
    return /*NRVO*/ flags;
}

static s_Node createArrayLiteral_6RD3tEp6(const int argFlags, const fu_VEC<s_Node>& items, const int modid, const int _loc)
{
    return make_WQTPiphi("arrlit"_fu, items, argFlags, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseArrayLiteral_KKEPXU9o(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_GNonMjt1("]"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return createArrayLiteral_6RD3tEp6(argFlags, args, modid, _loc);
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

static s_Node createTypeParam_InP4trC6(const fu_STR& value, const int modid, const int _loc)
{
    return make_WQTPiphi("typeparam"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node parseTypeParam_LWkDg9Et(fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, fu_VEC<fu_STR>& _dollars, const int _dollarAuto, const int modid, const int _loc)
{
    const fu_STR& value = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    if (!has_9sek5qv2(_dollars, value) && _dollarAuto)
        _dollars.push(fu_STR(value));

    return createTypeParam_InP4trC6(value, modid, _loc);
}

static s_Node parseLambda_aMxsWqET(const bool noArgs_noClosingPipe, const int mode, int& _precedence, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _anonFns, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _col0, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports)
{
    if (noArgs_noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_iJup6O0x("Unparenthesized `|| lambda` within a binary expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

    fu_STR name = x7E((x7E("l_"_fu, fu::i64dec(modid)) + "_"_fu), fu::i64dec(_anonFns++));
    return parseFnDecl_cont_y0elg4AE(name, (F_INLINE | F_LAMBDA), !(mode & M_LAMBDA_STMT_OK), (!noArgs_noClosingPipe ? "|"_fu : fu_STR{}), _fnDepth, _dollars, _dollarAuto, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _hasPUB, fuzimports, _anonFns);
}

static s_Node createDefinit_2gELYifh(const int modid, const int _loc)
{
    return make_WQTPiphi("definit"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

                                #ifndef DEFt_only_zloPVM3y
                                #define DEFt_only_zloPVM3y
inline const s_Node& only_zloPVM3y(fu::view<s_Node> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createTypeTag_5nvud40M(const fu_STR& value, const int modid, const int _loc)
{
    return make_WQTPiphi("typetag"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value, modid, _loc);
}

static s_Node typeAssert_kvGIMMHX(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_WQTPiphi("typeassert"_fu, fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseQualifierChain_dtktxKK9(/*MOV*/ s_Node&& expr, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, const int modid, const int _loc, fu_VEC<fu_STR>& fuzimports)
{
    if ((expr.kind != "call"_fu) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & F_ACCESS))) || (expr.flags & F_COMPOUND_ID))
    {
        _idx--;
        fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src);
    };
    expr.flags |= F_COMPOUND_ID;
    fu_STR path { expr.value };
    for (; ; )
    {
        const fu_STR& id = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
        if (!tryConsume_fQgvcv2z("op"_fu, "::"_fu, tokens, _idx))
        {
            if ((path == "is"_fu) && (expr.items.size() == 1))
            {
                const s_Node& left = only_zloPVM3y(expr.items);
                s_Node right = createTypeTag_5nvud40M(id, modid, _loc);
                return typeAssert_kvGIMMHX(left, right, modid, _loc);
            };
            path = registerImport_3UBNgP3d(fu_STR(path), fname, fuzimports);
            expr.value = ((path + "\t"_fu) + id);
            return static_cast<s_Node&&>(expr);
        };
        path += ("/"_fu + id);
    };
}

static s_Node parsePrefix_1OLcC8xU(fu_STR&& op, int& _idx, fu::view<s_Token> tokens, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if (!(has_Bd7df3AL(PREFIX, op)))
    {
        _idx--;
        fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src);
    };
    if ((op == "&"_fu) && tryConsume_fQgvcv2z("id"_fu, "mut"_fu, tokens, _idx))
        op = "&mut"_fu;

    const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
    s_Node _0 {};
    return (_0 = parseUnaryExpression_qYGBJqqT(mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns), createPrefix_JaQYyeUZ(op, static_cast<s_Node&&>(_0), modid, _loc));
}

static s_Node parseExpressionHead_p2rmoGav(const int mode, fu::view<s_Token> tokens, int& _idx, const int modid, int& _loc, const fu_STR& fname, const fu_STR& src, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];

    {
        const fu_STR& k = token.kind;
        const fu_STR& v = token.value;
        if ((k == "int"_fu) || (k == "real"_fu) || (k == "str"_fu) || (k == "char"_fu))
            return createLeaf_uWkYniud(k, v, modid, _loc);

        if (k == "id"_fu)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == "id"_fu)
            {
                if (v == "fn"_fu)
                    return parseFnDecl_DeOeDkP6(0, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

                if (v == "infix"_fu)
                    return parseFixityDecl_vZ8BUaFf(F_INFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

                if (v == "prefix"_fu)
                    return parseFixityDecl_vZ8BUaFf(F_PREFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

                if (v == "postfix"_fu)
                    return parseFixityDecl_vZ8BUaFf(F_POSTFIX, true, tokens, _idx, fname, src, modid, _loc, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

            };
            return createRead_uFq1n26s(v, tokens, _idx, fname, src, modid, _loc);
        };
        if (k == "op"_fu)
        {
            if (v == "("_fu)
                return parseParens_3yeF85su(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "{"_fu)
                return parseBlock_QA3G9MxG(_idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "["_fu)
                return parseArrayLiteral_KKEPXU9o(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);

            if (v == "$"_fu)
                return parseTypeParam_LWkDg9Et(tokens, _idx, fname, src, _dollars, _dollarAuto, modid, _loc);

            if (v == "|"_fu)
                return parseLambda_aMxsWqET(bool{}, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _col0, _hasPUB, fuzimports);

            if (v == "||"_fu)
                return parseLambda_aMxsWqET(true, mode, _precedence, warnings, options, tokens, _idx, fname, src, _loc, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _col0, _hasPUB, fuzimports);

            if (v == "[]"_fu)
                return createDefinit_2gELYifh(modid, _loc);

            if (v == "::"_fu)
            {
                const fu_STR& id = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                _idx--;
                return parseQualifierChain_dtktxKK9(createRead_uFq1n26s(id, tokens, _idx, fname, src, modid, _loc), _idx, tokens, fname, src, modid, _loc, fuzimports);
            };
            if (v == "."_fu)
            {
                const fu_STR& id = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
                return createAddrOfFn_H4WVWwY1(id, F_ACCESS, modid, _loc);
            };
            return parsePrefix_1OLcC8xU(fu_STR(v), _idx, tokens, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        };
    };
    _idx--;
    fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src);
}

static s_Node miss_EZIdrHhd()
{
    return s_Node{};
}

static void lint_IZkE50cm(const int mode, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src, const int _loc)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_iJup6O0x((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), warnings, options, tokens, _idx, fname, src, _loc);

}

static s_Node parseAccessExpression_GFii7DOu(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, fu::view<char> fname, const fu_STR& src, const int modid, const int _loc)
{
    s_Token id = tryConsume_fQgvcv2z("id"_fu, fu::view<char>{}, tokens, _idx);
    if (!id)
    {
        consume_AA0wu9eo("op"_fu, "::"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        id = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
        _idx -= 2;
    };
    return createCall_Hlx5mUSU(id.value, F_ACCESS, fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, modid, _loc);
}

static s_Node parseCallExpression_86TTg0M2(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_GNonMjt1(")"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if ((expr.kind == "call"_fu) && (expr.flags & F_ACCESS))
    {
        const s_Node* _0;
        const s_Node& head = (expr.items && (expr.items.size() == 1) && *(_0 = &(expr.items[0])) ? *_0 : fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src));
        args.unshift(s_Node(head));
        return createCall_Hlx5mUSU((expr.value ? expr.value : fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src)), ((F_METHOD | argFlags) | (expr.flags & ~F_ACCESS)), args, modid, _loc);
    };
    if ((expr.kind == "call"_fu) && (expr.flags & F_ID))
        return createCall_Hlx5mUSU((expr.value ? expr.value : fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src)), (argFlags | (expr.flags & ~F_ID)), args, modid, _loc);

    if (expr.kind == "typeparam"_fu)
        return createCall_Hlx5mUSU(("$"_fu + (expr.value ? expr.value : fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src))), argFlags, args, modid, _loc);

    fail_f0gbzHmy("TODO dynamic call"_fu, tokens, _idx, fname, src);
}

static s_Node parseIndexExpression_sfSW8v5O(const s_Node& expr, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs_GNonMjt1("]"_fu, args, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    args.unshift(s_Node(expr));
    return createCall_Hlx5mUSU("[]"_fu, (argFlags | F_OPERATOR), args, modid, _loc);
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

static s_Node createOr_Zqk6wY54(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame_mxQSzW3h("or"_fu, left, right, modid, _loc);
}

static s_Node pipelineRight_78In5XSu(const s_Node& left, /*MOV*/ s_Node&& right, fu::view<s_Token> tokens, const int _idx, fu::view<char> fname, const fu_STR& src)
{
    if (right.kind != "call"_fu)
        fail_f0gbzHmy("Cannot pipeline: not a call expr."_fu, tokens, _idx, fname, src);

    if (right.flags & F_METHOD)
        right.items.insert(1, s_Node(left));
    else
        right.items.unshift(s_Node(left));

    return static_cast<s_Node&&>(right);
}

static s_Node tryParseBinary_UGLSxgo2(const s_Node& left, const fu_STR& op, const int p1, int& _precedence, int& _idx, int& _loc, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_EZIdrHhd();

    _idx++;
    s_Node mid {};
    if (op == "?"_fu)
    {
        mid = parseExpression_i8HbOuMQ(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
        consume_AA0wu9eo("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    };
    s_Node right = parseExpression_i8HbOuMQ(p1, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    if (mid)
        return createIf_ENrOvbxt(left, mid, right, modid, _loc);

    if (op == "||"_fu)
        return createOr_Zqk6wY54(left, right, modid, _loc);

    if (op == "&&"_fu)
        return createAnd_xGB9EFDB(left, right, modid, _loc);

    if ((left.kind == "and"_fu) || (left.kind == "or"_fu))
    {
        if (!(left.flags & F_PARENS))
            warn_iJup6O0x((((("Unparenthesized `"_fu + left.kind) + "` on the left side of an `"_fu) + op) + "`."_fu), warnings, options, tokens, _idx, fname, src, _loc);

    };
    if (op == "|>"_fu)
        return pipelineRight_78In5XSu(left, s_Node(right), tokens, _idx, fname, src);

    if (op == "<|"_fu)
        return pipelineLeft_HHyXrdE0(s_Node(left), right, tokens, _idx, fname, src);

    if (op == "->"_fu)
        return typeAssert_kvGIMMHX(left, right, modid, _loc);

    return createCall_Hlx5mUSU(op, (F_INFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } }, modid, _loc);
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

static s_Node tryParseExpressionTail_BOGFdsPw(const s_Node& head, const int mode, fu::view<s_Token> tokens, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, const int modid, int& _precedence, int& _col0, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& token = tokens[_idx++];
    if (token.kind == "op"_fu)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
            return ((void)_idx--, miss_EZIdrHhd());

        if (v == "."_fu)
            return ((void)lint_IZkE50cm(mode, warnings, options, tokens, _idx, fname, src, _loc), parseAccessExpression_GFii7DOu(head, tokens, _idx, fname, src, modid, _loc));

        if (v == "("_fu)
            return ((void)lint_IZkE50cm(mode, warnings, options, tokens, _idx, fname, src, _loc), parseCallExpression_86TTg0M2(head, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (v == "["_fu)
            return ((void)lint_IZkE50cm(mode, warnings, options, tokens, _idx, fname, src, _loc), parseIndexExpression_sfSW8v5O(head, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        const int p1 = get_AYFdiMCu(BINOP.PRECEDENCE, v);
        if (p1)
            return ((void)_idx--, tryParseBinary_UGLSxgo2(head, v, p1, _precedence, _idx, _loc, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

        if (has_VtCzn94C(POSTFIX, v))
            return createCall_Hlx5mUSU((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu_STR(v)), (F_POSTFIX | F_OPERATOR), fu_VEC<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, modid, _loc);

        if (v == "::"_fu)
            return parseQualifierChain_dtktxKK9(s_Node(head), _idx, tokens, fname, src, modid, _loc, fuzimports);

    };
    return ((void)_idx--, miss_EZIdrHhd());
}

static s_Node parseExpression_i8HbOuMQ(const int p1, const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (mode & M_LINT_ENSURE_INDENT)
    {
        if (!(tokens[_idx].col > _col0))
            warn_iJup6O0x(x7E((x7E((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].col)), warnings, options, tokens, _idx, fname, src, _loc);

    };
    /*MOV*/ s_Node head = parseExpressionHead_p2rmoGav(mode, tokens, _idx, modid, _loc, fname, src, _fnDepth, _dollars, _dollarAuto, _precedence, _col0, warnings, options, _hasPUB, fuzimports, _anonFns);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == "int"_fu) || (head.kind == "real"_fu))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_BOGFdsPw(head, mode_1, tokens, _idx, warnings, options, fname, src, _loc, modid, _precedence, _col0, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.col > col00))
                    warn_iJup6O0x(x7E((x7E((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.col)), warnings, options, tokens, _idx, fname, src, _loc);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_qYGBJqqT(const int mode, int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseExpression_i8HbOuMQ(P_PREFIX_UNARY, mode, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

static s_Node parseTypeAnnot_NihMLCRj(int& _precedence, int& _loc, int& _idx, int& _col0, fu::view<s_Token> tokens, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return parseUnaryExpression_qYGBJqqT(0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

static s_Node tryPopTypeAnnot_4AdjyVGh(fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return (tryConsume_fQgvcv2z("op"_fu, ":"_fu, tokens, _idx) ? parseTypeAnnot_NihMLCRj(_precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : miss_EZIdrHhd());
}

static s_Node tryParseLetInit_eksFR601(fu::view<s_Token> tokens, int& _idx, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    return tryConsume_fQgvcv2z("op"_fu, "="_fu, tokens, _idx) ? parseExpression_i8HbOuMQ(P_RESET, 0, _precedence, _loc, _idx, _col0, tokens, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : s_Node{};
}

static s_Node parseLet_3sMJyPGw(const bool xqmark, fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    int flags = 0;
    if (tryConsume_fQgvcv2z("id"_fu, "using"_fu, tokens, _idx))
        flags |= F_USING;

    if (tryConsume_fQgvcv2z("id"_fu, "implicit"_fu, tokens, _idx))
        flags |= F_IMPLICIT;

    if (tryConsume_fQgvcv2z("id"_fu, "lax"_fu, tokens, _idx))
        flags |= F_LAX;

    if (tryConsume_fQgvcv2z("id"_fu, "shadow"_fu, tokens, _idx))
        flags |= F_SHADOW;

    if (tryConsume_fQgvcv2z("id"_fu, "mut"_fu, tokens, _idx))
        flags |= F_MUT;

    if (tryConsume_fQgvcv2z("id"_fu, "ref"_fu, tokens, _idx))
        flags |= F_REF;

    fu_STR id { consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value };
    if (id[0] == '_')
        flags |= F_LAX;

    if (xqmark && tryConsume_fQgvcv2z("op"_fu, "!"_fu, tokens, _idx))
    {
        flags |= F_MUSTNAME;
        fu_STR inner_id = tryConsume_fQgvcv2z("id"_fu, fu::view<char>{}, tokens, _idx).value;
        if (inner_id)
        {
            flags |= F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    if (xqmark && tryConsume_fQgvcv2z("op"_fu, "."_fu, tokens, _idx))
    {
        flags |= F_COMPOUND_ID;
        id += ("."_fu + consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);
        while (tryConsume_fQgvcv2z("op"_fu, "::"_fu, tokens, _idx))
            id += ("\t"_fu + consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value);

    };
    if (xqmark && tryConsume_fQgvcv2z("op"_fu, "[]"_fu, tokens, _idx))
        flags |= F_REST_ARG;

    s_Token optional = (xqmark ? tryConsume_fQgvcv2z("op"_fu, "?"_fu, tokens, _idx) : s_Token{});
    s_Node type = tryPopTypeAnnot_4AdjyVGh(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    s_Node init = (optional ? createDefinit_2gELYifh(modid, _loc) : tryParseLetInit_eksFR601(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));
    return createLet_I8Jcp5pU(id, flags, type, init, modid, _loc);
}

static s_Node parseStructItem_BfrEkjd2(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    /*MOV*/ s_Node member = parseLet_3sMJyPGw(true, tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return /*NRVO*/ member;
}

static s_Node parseEnumItem_9yIZRLzN(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _precedence, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const fu_STR& id = consume_AA0wu9eo("id"_fu, fu::view<char>{}, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src).value;
    s_Node init = tryParseLetInit_eksFR601(tokens, _idx, _precedence, _loc, _col0, warnings, options, fname, src, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    softSemi_XklMweQa(tokens, _idx, _col0, warnings, options, fname, src, _loc);
    return createLet_I8Jcp5pU(id, 0, (*(const s_Node*)fu::NIL), init, modid, _loc);
}

static s_Node parseDefer_ZXQpfvpB(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    s_Token _0 {};
    fu_STR value = (tryConsume_fQgvcv2z("op"_fu, ":"_fu, tokens, _idx) ? ((_0 = tryConsume_fQgvcv2z("id"_fu, "err"_fu, tokens, _idx)) ? static_cast<s_Token&&>(_0) : s_Token(consume_AA0wu9eo("id"_fu, "ok"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src))).value : fu_STR{});
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail_f0gbzHmy(fu_STR{}, tokens, _idx, fname, src);
    };
    fu_VEC<s_Node> _1 {};
    return (_1 = fu_VEC<s_Node> { fu::slate<1, s_Node> { parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) } }, make_WQTPiphi("defer"_fu, static_cast<fu_VEC<s_Node>&&>(_1), 0, value, modid, _loc));
}

static s_Node parseStatementOrDefer_lD6JGzH5(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _fnDepth, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == "id"_fu)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
            return ((void)_idx++, parseDefer_ZXQpfvpB(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns));

    };
    return parseStatement_VAwBHoKJ(_loc, tokens, _idx, fname, src, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
}

static fu_VEC<s_Node> parseBlockLike_cRIuEohd(fu::view<char> endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, int& _idx, fu::view<s_Token> tokens, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, const fu_STR& fname, const fu_STR& src, int& _loc, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
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
                warn_iJup6O0x((x7E((x7E((x7E((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

            break;
        };
        _col0 = token.col;
        if (!(_col0 > col00))
            warn_iJup6O0x((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (!((colNN < 0) || (colNN == _col0) || (token.line == lineNN)))
            warn_iJup6O0x((x7E((x7E((x7E((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), warnings, options, tokens, _idx, fname, src, _loc);

        if (colNN < 0)
            colNN = _col0;

        lineNN = token.line;
        s_Node expr = (sTruct ? parseStructItem_BfrEkjd2(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : (eNum ? parseEnumItem_9yIZRLzN(tokens, _idx, fname, src, _precedence, _loc, _col0, warnings, options, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns) : parseStatementOrDefer_lD6JGzH5(tokens, _idx, fname, src, _fnDepth, _loc, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns)));
        if (!((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
            warn_iJup6O0x("Orphan pure-looking expression."_fu, warnings, options, tokens, _idx, fname, src, _loc);

        items.push(s_Node(expr));
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_Gnjsdq1E(fu::view<s_Token> tokens, int& _idx, const fu_STR& fname, const fu_STR& src, int& _loc, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, bool& _hasPUB, fu_VEC<fu_STR>& fuzimports, int& _anonFns)
{
    consume_AA0wu9eo("sof"_fu, "sof"_fu, (*(const fu_STR*)fu::NIL), tokens, _idx, fname, src);
    _loc = _idx;
    fu_VEC<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_cRIuEohd("eof"_fu, "eof"_fu, false, false, _idx, tokens, _col0, warnings, options, fname, src, _loc, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns), make_WQTPiphi("root"_fu, static_cast<fu_VEC<s_Node>&&>(_0), 0, (*(const fu_STR*)fu::NIL), modid, _loc));
    if (use_AUTOPUB && !_hasPUB)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            fu::view<char> k = item.kind;
            if (((k == "fn"_fu) || (k == "let"_fu) || (k == "typedef"_fu) || (k == "struct"_fu)) && !(item.flags & F_SHADOW))
                set_PUB_JF2CBrgY(item.flags, tokens, _idx, fname, src, _hasPUB);

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
    bool _hasPUB = false;
    fu_VEC<fu_STR> fuzimports {};
    fu_VEC<fu_STR> warnings {};
    if (!(tokens[(tokens.size() - 1)].kind == "eof"_fu))
        fail_f0gbzHmy("Missing `eof` token."_fu, tokens, _idx, fname, src);

    s_Node root = parseRoot_Gnjsdq1E(tokens, _idx, fname, src, _loc, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _hasPUB, fuzimports, _anonFns);
    return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(fuzimports), fu_VEC<fu_STR>(warnings) };
}

#endif
