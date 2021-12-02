
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/view.h>

struct s_BINOP;
struct s_Lint;
struct s_Map_cb0o;
struct s_Node;
struct s_Options;
struct s_ParserOutput;
struct s_Token;
struct s_TokenIdx;

[[noreturn]] static fu::never fail(fu_STR&&, fu::view<s_Token>, int, int, fu::view<fu::byte>);
bool hasIdentifierChars(fu::view<fu::byte>);
fu_STR path_dirname(const fu_STR&);
fu_STR path_ext(const fu_STR&);
fu_STR path_join(fu::view<fu::byte>, const fu_STR&);
s_ParserOutput parse(int, const fu_STR&, fu::view<s_Token>, const s_Options&);
static fu_VEC<s_Node> parseBlockLike(fu::view<fu::byte>, fu::view<fu::byte>, bool, int&, fu::view<s_Token>, int&, fu_VEC<fu_STR>&, const s_Options&, int&, const fu_STR&, int&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseExpression(int, int, int&, int&, int&, fu::view<s_Token>, int, const fu_STR&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&, int&);
static s_Node parseFnDecl(int, bool, fu::view<s_Token>, int&, int&, const fu_STR&, int, int&, fu_VEC<fu_STR>&, int&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&, int&);
static s_Node parseLet(bool, fu::view<s_Token>, int&, int&, const fu_STR&, int&, int, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&, int&);
static s_Node parseStatement(int&, fu::view<s_Token>, int&, const fu_STR&, int&, fu_VEC<fu_STR>&, const s_Options&, int&, int, int&, fu_VEC<fu_STR>&, int&, int&, bool&, fu_VEC<fu_STR>&, int&);
static s_Node parseTypeAnnot(int&, int&, int&, fu::view<s_Token>, int, const fu_STR&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&, int&);
static s_Node parseUnaryExpression(int, int&, int&, int&, fu::view<s_Token>, int, const fu_STR&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&, int&);
static s_Node tryPopTypeAnnot(fu::view<s_Token>, int&, int&, int&, int, const fu_STR&, int&, fu_VEC<fu_STR>&, int&, int&, fu_VEC<fu_STR>&, const s_Options&, bool&, fu_VEC<fu_STR>&, int&, int&);
static void lint(int, fu_VEC<fu_STR>&, const s_Options&, fu::view<s_Token>, int, int, fu::view<fu::byte>);

                                #ifndef DEF_s_Map_cb0o
                                #define DEF_s_Map_cb0o
struct s_Map_cb0o
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
    s_Map_cb0o PRECEDENCE;
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

static const int F_ID = (1 << 5);

                                #ifndef DEF_F_COMPOUND_ID
                                #define DEF_F_COMPOUND_ID
inline constexpr int F_COMPOUND_ID = (1 << 6);
                                #endif

static const int F_PARENS = (1 << 7);

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
inline constexpr int F_SINGLE_STMT = (1 << 31);
                                #endif

static const int P_RESET = 1000;

static const int P_PREFIX_UNARY = 1;

static const fu_VEC<fu_STR> PREFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<10> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static const fu_VEC<fu_STR> POSTFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "++"_fu, "--"_fu, "[]"_fu } };

                                #ifndef DEFt_grow_if_oob_ch6q
                                #define DEFt_grow_if_oob_ch6q
inline bool& grow_if_oob_ch6q(fu_VEC<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_update_AMGb
                                #define DEFt_update_AMGb
inline void update_AMGb(int, const fu_STR& item, int, const int extra, s_Map_cb0o& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, item);
                _.vals.insert(i, extra);
                return;
            };
            _.vals.mutref(i) = extra;
            return;
        };
    };
    _.keys.push(item);
    _.vals.push(extra);
}
                                #endif

                                #ifndef DEFt_set_mYRb
                                #define DEFt_set_mYRb
inline void set_mYRb(s_Map_cb0o& _, const fu_STR& key, const int value_1)
{
    update_AMGb(0, key, 0, value_1, _);
}
                                #endif

static void binop(fu::view<fu_STR> ops, int& precedence, s_BINOP& out, const bool rightToLeft)
{
    precedence++;
    if (!(precedence < 64))
        fu::fail("Assertion failed: precedence < 64"_fu);

    grow_if_oob_ch6q(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
    for (int i = 0; i < ops.size(); i++)
        set_mYRb(out.PRECEDENCE, ops[i], precedence);

}

static s_BINOP setupOperators()
{
    s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    rightToLeft = false;
    binop((fu::slate<3, fu_STR> { "*"_fu, "/"_fu, "%"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<2, fu_STR> { "+"_fu, "-"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<2, fu_STR> { "<<"_fu, ">>"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "&"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "^"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "|"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "~"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "<=>"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<4, fu_STR> { "in"_fu, "is"_fu, "as"_fu, "->"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<4, fu_STR> { "<"_fu, "<="_fu, ">"_fu, ">="_fu }), precedence, out, rightToLeft);
    binop((fu::slate<2, fu_STR> { "=="_fu, "!="_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "&&"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "||"_fu }), precedence, out, rightToLeft);
    rightToLeft = true;
    binop((fu::slate<1, fu_STR> { "?"_fu }), precedence, out, rightToLeft);
    binop((fu::slate<16, fu_STR> { "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), precedence, out, rightToLeft);
    binop((fu::slate<1, fu_STR> { "<|"_fu }), precedence, out, rightToLeft);
    rightToLeft = false;
    binop((fu::slate<1, fu_STR> { "|>"_fu }), precedence, out, rightToLeft);
    return out;
}

static const s_BINOP BINOP = setupOperators();

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

extern const int FN_ARGS_BACK = FN_RET_BACK;

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

static const int M_LINT_UNARY_PRECEDENCE = (1 << 0);

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

static fu_STR fail_compose(fu_STR&& reason, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1)
{
    const s_Token& loc = tokens_1[_loc];
    const s_Token& here = tokens_1[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? x7E_OZkl((x7E_OZkl("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E_OZkl((x7E_OZkl((x7E_OZkl((x7E_OZkl("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    return (((fname_1 + " "_fu) + addr) + ":\n\t"_fu) + reason;
}

[[noreturn]] static fu::never fail(fu_STR&& reason, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1)
{
    fu::fail(fail_compose(fu_STR(reason), tokens_1, _loc, _idx, fname_1));
}

static const s_Token& consume(fu::view<fu::byte> kind_1, fu::view<fu::byte> value_1, const fu_STR& err, fu::view<s_Token> tokens_1, int& _idx, const int _loc, fu::view<fu::byte> fname_1)
{
    const s_Token& token = tokens_1[_idx];
    if ((token.kind == kind_1) && (!value_1 || (token.value == value_1)))
    {
        _idx++;
        return token;
    };
    fail(((((((err ? fu_STR(err) : "Expected"_fu) + " `"_fu) + (value_1 ? value_1 : kind_1)) + "`, got `"_fu) + token.value) + "`."_fu), tokens_1, _loc, _idx, fname_1);
}

static s_Node make(const fu_STR& kind_1, const fu_VEC<s_Node>& items, const int flags, const fu_STR& value_1, const int modid, const int _loc)
{
    return s_Node { fu_STR(kind_1), int(flags), fu_STR(value_1), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static void warn(const fu_STR& reason, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1)
{
    if (warnings.size() == options.lint.maxwarn)
        fail(fu_STR(reason), tokens_1, _loc, _idx, fname_1);

    warnings += fail_compose(fu_STR(reason), tokens_1, _loc, _idx, fname_1);
}

static s_Token tryConsume(fu::view<fu::byte> kind_1, fu::view<fu::byte> value_1, fu::view<s_Token> tokens_1, int& _idx)
{
    const s_Token& token = tokens_1[_idx];
    if ((token.kind == kind_1) && (!value_1 || (token.value == value_1)))
    {
        _idx++;
        return s_Token(token);
    };
    return s_Token{};
}

static s_Node createLeaf(const fu_STR& kind_1, const fu_STR& value_1, const int modid, const int _loc)
{
    return make(kind_1, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value_1, modid, _loc);
}

                                #ifndef DEFt_bfind_Bd7d
                                #define DEFt_bfind_Bd7d
inline int bfind_Bd7d(fu::view<fu_STR> keys_1, const fu_STR& item)
{
    for (int i = 0; i < keys_1.size(); i++)
    {
        if ((keys_1[i] >= item))
        {
            if (keys_1[i] != item)
                return -1;

            return i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_Mcln
                                #define DEFt_has_Mcln
inline bool has_Mcln(const s_Map_cb0o& _, const fu_STR& key)
{
    return (bfind_Bd7d(_.keys, key) >= 0);
}
                                #endif

                                #ifndef DEFt_has_Bd7d
                                #define DEFt_has_Bd7d
inline bool has_Bd7d(fu::view<fu_STR> a, fu::view<fu::byte> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createAddrOfFn(const fu_STR& name, const int flags, const int modid, const int _loc)
{
    return make("addroffn"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), flags, name, modid, _loc);
}

static int parseArgsDecl(fu_VEC<s_Node>& outArgs, fu::view<fu::byte> endk, fu::view<fu::byte> endv, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    bool first_1 = true;
    int outFlags = 0;
    fu_VEC<s_Node> implicit {};
    bool defaults = false;
    _dollarAuto++;
    const int dollars0 = _dollars.size();
    for (; ; )
    {
        if (tryConsume(endk, endv, tokens_1, _idx))
            break;

        if (!first_1)
            consume("op"_fu, ","_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);

        first_1 = false;
        s_Node arg = parseLet(true, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
        if (_dollars.size() > dollars0)
            arg.flags |= F_TEMPLATE;

        if (arg.items[LET_INIT])
        {
            if (arg.flags & F_IMPLICIT)
                fail("TODO default implicit arguments"_fu, tokens_1, _loc, _idx, fname_1);

            defaults = true;
        }
        else if (defaults)
            fail("TODO non-trailing default arguments"_fu, tokens_1, _loc, _idx, fname_1);
        else if (!arg.items[LET_TYPE])
            arg.flags |= F_TEMPLATE;

        arg.flags |= F_ARG;
        outFlags |= (arg.flags & F_TEMPLATE);
        if (arg.flags & F_IMPLICIT)
            implicit.push(arg);
        else
            outArgs.push(arg);

    };
    _dollarAuto--;
    if (implicit)
    {
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(implicit[i]);

    };
    return outFlags;
}

static s_Node createBlock(const fu_VEC<s_Node>& items, const fu_STR& label, const int modid, const int _loc)
{
    return make("block"_fu, items, 0, label, modid, _loc);
}

static s_Node parseBlock(int& _idx, fu::view<s_Token> tokens_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    return createBlock(parseBlockLike("op"_fu, "}"_fu, false, _idx, tokens_1, _col0, warnings, options, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns), (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseParens(int& _precedence, int& _loc, int& _idx, fu::view<s_Token> tokens_1, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    s_Node out = parseExpression(P_RESET, 0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    out.flags |= F_PARENS;
    consume("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return out;
}

                                #ifndef DEFt_only_81Ey
                                #define DEFt_only_81Ey
inline fu::byte only_81Ey(fu::view<fu::byte> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static s_Node createCall(const fu_STR& id, const int flags, const fu_VEC<s_Node>& args, const int modid, const int _loc)
{
    return make("call"_fu, args, flags, id, modid, _loc);
}

static s_Node createPrefix(const fu_STR& op, s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == "int"_fu) || (expr.kind == "real"_fu)))
    {
        const fu::byte sign = expr.value[0];
        if ((sign == fu::byte('+')) || (sign == fu::byte('-')))
            expr.value.mutref(0) = ((sign == only_81Ey(op)) ? fu::byte('+') : fu::byte('-'));
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    };
    return createCall(op, F_PREFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(expr) } }, modid, _loc);
}

static s_Node createIf(const s_Node& cond, const s_Node& cons, const s_Node& alt, const int modid, const int _loc)
{
    return make("if"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(cond), s_Node(cons), s_Node(alt) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node flattenIfSame(const fu_STR& kind_1, const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    fu::view<fu::byte> k_left = left.kind;
    fu::view<fu::byte> k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind_1) && (k_right == kind_1)) ? (left.items + right.items) : ((k_left == kind_1) ? (left.items + right) : ((k_right == kind_1) ? (left + right.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(left), s_Node(right) } })));
    return make(kind_1, items, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node createAnd(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame("and"_fu, left, right, modid, _loc);
}

static s_Node parseIf(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    const s_Token& token = tokens_1[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens_1[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == "id"_fu) && (prev.value == "else"_fu)) ? prev : token);
    s_Token nOt = tryConsume("op"_fu, "!"_fu, tokens_1, _idx);
    consume("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    s_Node cond = parseParens(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    if (nOt)
        cond = createPrefix("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    s_Token eLse = tryConsume("id"_fu, "else"_fu, tokens_1, _idx);
    if (eLse)
    {
        if (!((eLse.line == token_1.line) || (eLse.col == token_1.col)))
            warn((x7E_OZkl((x7E_OZkl((x7E_OZkl("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.col)) + ", got "_fu), fu::i64dec(eLse.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.line)) + "."_fu), warnings, options, tokens_1, _loc, _idx, fname_1);

        s_Node alt = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        return createIf(cond, cons, alt, modid, _loc);
    };
    return createAnd(cond, cons, modid, _loc);
}

static s_Node parseExpressionStatement(int& _precedence, int& _loc, int& _idx, fu::view<s_Token> tokens_1, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    s_Node expr = parseExpression(P_RESET, 0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    const s_Token& peek = tokens_1[_idx];
    if ((peek.kind == "op"_fu) && (peek.value == ";"_fu))
        _idx++;
    else if ((peek.kind != "op"_fu) || (peek.value != "}"_fu))
        warn((("Missing semicollon before `"_fu + peek.value) + "`."_fu), warnings, options, tokens_1, _loc, _idx, fname_1);

    return expr;
}

static s_Node createLoop(const s_Node& init, const s_Node& pre_cond, const s_Node& body, const s_Node& post_cond, const s_Node& post, const int modid, const int _loc)
{
    return make("loop"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<5> { s_Node(init), s_Node(pre_cond), s_Node(body), s_Node(post_cond), s_Node(post) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseFor(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    consume("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    if (tryConsume("id"_fu, "fieldname"_fu, tokens_1, _idx))
    {
        const fu_STR& placeholder = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
        consume("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
        s_Node type = parseTypeAnnot(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
        consume("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
        s_Node body = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        return make("forfieldsof"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(type), s_Node(body) } }, 0, placeholder, modid, _loc);
    };
    s_Node init = (!tryConsume("op"_fu, ";"_fu, tokens_1, _idx) ? parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) : s_Node{});
    if (init && (init.kind != "let"_fu))
        fail((("`for` expects a `let` statement, got a `"_fu + init.kind) + "`."_fu), tokens_1, _loc, _idx, fname_1);

    s_Node pre_cond = (!tryConsume("op"_fu, ";"_fu, tokens_1, _idx) ? parseExpressionStatement(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : s_Node{});
    const s_Token& token = tokens_1[_idx];
    s_Node post = (!((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseParens(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : (consume("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1) ? s_Node{} : s_Node{}));
    s_Node body = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return createLoop(init, pre_cond, body, (*(const s_Node*)fu::NIL), post, modid, _loc);
}

static s_Node parseWhile(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    consume("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    s_Node pre_cond = parseParens(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    s_Node body = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return createLoop((*(const s_Node*)fu::NIL), pre_cond, body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile(int& _loc, fu::view<s_Token> tokens_1, int& _idx, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    s_Node body = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    consume("id"_fu, "while"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    consume("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    s_Node post_cond = parseParens(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    consume("op"_fu, ";"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return createLoop((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, post_cond, (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node createJump(const fu_STR& kind_1, const fu_STR& label, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make(kind_1, (expr ? fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(expr) } } : fu_VEC<s_Node>{}), flags, label, modid, _loc);
}

static s_Node parseJump(const fu_STR& kind_1, int& _fnDepth, int& _idx, fu::view<s_Token> tokens_1, int& _loc, const fu_STR& fname_1, int& _numReturns, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail(fu_STR{}, tokens_1, _loc, _idx, fname_1);
    };
    const fu_STR& label = (tryConsume("op"_fu, ":"_fu, tokens_1, _idx) ? consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value : (*(const fu_STR*)fu::NIL));
    if (kind_1 == "return"_fu)
        _numReturns++;

    s_Node expr {};
    if (!tryConsume("op"_fu, ";"_fu, tokens_1, _idx))
        expr = parseExpressionStatement(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    return createJump(kind_1, label, expr, 0, modid, _loc);
}

static s_Node createLet(const fu_STR& id, const int flags, const s_Node& type, const s_Node& init, const int modid, const int _loc)
{
    return make("let"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(type), s_Node(init) } }, flags, id, modid, _loc);
}

static s_Node createRead(const fu_STR& id, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1, const int modid)
{
    return createCall((id ? id : fail(fu_STR{}, tokens_1, _loc, _idx, fname_1)), F_ID, (*(const fu_VEC<s_Node>*)fu::NIL), modid, _loc);
}

static s_Node parseTryCatch(int& _fnDepth, int& _idx, fu::view<s_Token> tokens_1, int& _loc, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail(fu_STR{}, tokens_1, _loc, _idx, fname_1);
    };
    s_Node tRy = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    consume("id"_fu, "catch"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    consume("op"_fu, "("_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    s_Node err = createLet(consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value, 0, createRead("string"_fu, tokens_1, _loc, _idx, fname_1, modid), s_Node{}, modid, _loc);
    consume("op"_fu, ")"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    s_Node cAtch = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return make("try"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(tRy), s_Node(err), s_Node(cAtch) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseStructDecl(const int flags, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    fu_STR name = tryConsume("id"_fu, fu::view<fu::byte>{}, tokens_1, _idx).value;
    consume("op"_fu, "{"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    fu_VEC<s_Node> items = parseBlockLike("op"_fu, "}"_fu, true, _idx, tokens_1, _col0, warnings, options, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    s_Node sTruct = make("struct"_fu, items, flags, name, modid, _loc);
    return sTruct;
}

static s_Node parseLabelledStatement(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const fu_STR& label = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
    consume("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    s_Node stmt = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    if ((stmt.kind == "loop"_fu) || (stmt.kind == "block"_fu))
    {
        if (stmt.value)
            fail((((("Label `"_fu + label) + "`: statement already labeled as `"_fu) + stmt.value) + "`."_fu), tokens_1, _loc, _idx, fname_1);

        stmt.value = label;
        return stmt;
    };
    return createBlock(fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(stmt) } }, label, modid, _loc);
}

static s_Node parseLetStmt(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    s_Node ret = parseLet(false, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    if (tryConsume("id"_fu, "catch"_fu, tokens_1, _idx))
    {
        s_Node err = createLet(consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value, 0, createRead("string"_fu, tokens_1, _loc, _idx, fname_1, modid), s_Node{}, modid, _loc);
        s_Node cAtch = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
        return make("catch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(ret), s_Node(err), s_Node(cAtch) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
    };
    consume("op"_fu, ";"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return ret;
}

static s_Node parseTypedef(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    const fu_STR& name = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
    consume("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    s_Node annot = parseTypeAnnot(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    consume("op"_fu, ";"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return make("typedef"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(annot) } }, 0, name, modid, _loc);
}

static void set_PUB(int& flags, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1, bool& _hasPUB)
{
    flags |= F_PUB;
    if (flags & F_SHADOW)
        fail("Cannot pub a shadow."_fu, tokens_1, _loc, _idx, fname_1);

    _hasPUB = true;
}

static s_Node parsePub(int& _fnDepth, fu::view<s_Token> tokens_1, int& _loc, int& _idx, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    if (_fnDepth)
        fail("Cannot pub from within a fn."_fu, tokens_1, _loc, _idx, fname_1);

    s_Node out = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    set_PUB(out.flags, tokens_1, _loc, _idx, fname_1, _hasPUB);
    return out;
}

static s_Node parseShadow(int& _loc, fu::view<s_Token> tokens_1, int& _idx, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    s_Node out = parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    out.flags |= F_SHADOW;
    if (out.flags & F_PUB)
        fail("Cannot shadow a pub."_fu, tokens_1, _loc, _idx, fname_1);

    return out;
}

static s_Node parseFixityDecl(const int flags, const bool expr, fu::view<s_Token> tokens_1, int& _loc, int& _idx, const fu_STR& fname_1, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    if ((flags & F_CONVERSION) && (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX)))
        fail("`implicit` functions can't be operators."_fu, tokens_1, _loc, _idx, fname_1);

    consume("id"_fu, "fn"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return parseFnDecl(int(flags), expr, tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node parseInlineDecl(int flags, const int F, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    flags |= F;
    fu::view<fu::byte> v = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
    if (v == "infix"_fu)
        return parseFixityDecl((flags | F_INFIX), bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    if (v == "prefix"_fu)
        return parseFixityDecl((flags | F_PREFIX), bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    if (v == "postfix"_fu)
        return parseFixityDecl((flags | F_POSTFIX), bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    _idx--;
    return parseFixityDecl(flags, bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node parsePureDecl(const int flags, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    return parseInlineDecl(int(flags), F_PURE, tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node parseConversionDecl(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    fu::view<fu::byte> v = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
    if (v == "pure"_fu)
        return parsePureDecl(int(F_CONVERSION), tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    if (v == "inline"_fu)
        return parseInlineDecl(int(F_CONVERSION), F_INLINE, tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    _idx--;
    return parseFixityDecl(F_CONVERSION, bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node parseNoCopy(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    consume("id"_fu, "struct"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return parseStructDecl(F_NOCOPY, tokens_1, _idx, _loc, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

                                #ifndef DEFt_has_H8YI
                                #define DEFt_has_H8YI
inline bool has_H8YI(fu::view<fu_STR> a, fu::view<fu::byte> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR registerImport(fu_STR&& value_1, const fu_STR& fname_1, fu_VEC<fu_STR>& _imports)
{
    if (!path_ext(value_1))
        value_1 += ".fu"_fu;

    fu_STR dir = path_dirname(fname_1);
    value_1 = (fu::lmatch(value_1, "."_fu) ? path_join(dir, value_1) : ((dir + fu::byte('\v')) + value_1));
    if (!has_H8YI(_imports, value_1))
        _imports.push(value_1);

    return static_cast<fu_STR&&>(value_1);
}

static s_Node parseImport(fu::view<s_Token> tokens_1, int& _idx, const int _loc, const fu_STR& fname_1, fu_VEC<fu_STR>& _imports, const int modid)
{
    fu_STR value_1 = tryConsume("id"_fu, fu::view<fu::byte>{}, tokens_1, _idx).value;
    if (value_1)
    {
        while (tryConsume("op"_fu, "::"_fu, tokens_1, _idx))
            value_1 += ("/"_fu + consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value);

    }
    else
        value_1 = consume("str"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;

    consume("op"_fu, ";"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    value_1 = registerImport(fu_STR(value_1), fname_1, _imports);
    return make("import"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value_1, modid, _loc);
}

static s_Node parseCompilerPragma(fu::view<s_Token> tokens_1, int& _idx, const int _loc, fu::view<fu::byte> fname_1, const int modid)
{
    s_Node ret = make("compiler"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value, modid, _loc);
    consume("op"_fu, ";"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return ret;
}

static s_Node parseStatement(int& _loc, fu::view<s_Token> tokens_1, int& _idx, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens_1[(_loc = _idx++)])) ? *_0 : fail(fu_STR{}, tokens_1, _loc, _idx, fname_1));
    if (token.kind == "op"_fu)
    {
        fu::view<fu::byte> v = token.value;
        if (v == "{"_fu)
            return parseBlock(_idx, tokens_1, _col0, warnings, options, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

    }
    else if (token.kind == "id"_fu)
    {
        fu::view<fu::byte> v = token.value;
        const s_Token& peek = tokens_1[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "for"_fu)
                return parseFor(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "while"_fu)
                return parseWhile(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "do"_fu)
                return parseDoWhile(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "return"_fu)
                return parseJump("return"_fu, _fnDepth, _idx, tokens_1, _loc, fname_1, _numReturns, _precedence, modid, _dollars, _dollarAuto, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "break"_fu)
                return parseJump("break"_fu, _fnDepth, _idx, tokens_1, _loc, fname_1, _numReturns, _precedence, modid, _dollars, _dollarAuto, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "continue"_fu)
                return parseJump("continue"_fu, _fnDepth, _idx, tokens_1, _loc, fname_1, _numReturns, _precedence, modid, _dollars, _dollarAuto, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "try"_fu)
                return parseTryCatch(_fnDepth, _idx, tokens_1, _loc, fname_1, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

        };
        if (peek.kind == "op"_fu)
        {
            if ((peek.value == "{"_fu) && (v == "struct"_fu))
                return parseStructDecl(0, tokens_1, _idx, _loc, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (peek.value == ":"_fu)
                return ((void)_idx--, parseLabelledStatement(tokens_1, _idx, _loc, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

        };
        if ((v == "fn"_fu) && ((peek.kind == "id"_fu) || !_fnDepth))
            return parseFnDecl(0, bool{}, tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

        if (peek.kind == "id"_fu)
        {
            if (v == "let"_fu)
                return parseLetStmt(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "lax"_fu)
                return ((void)_idx--, parseLetStmt(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0));

            if (v == "mut"_fu)
                return ((void)_idx--, parseLetStmt(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0));

            if (v == "ref"_fu)
                return ((void)_idx--, parseLetStmt(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0));

            if (v == "struct"_fu)
                return parseStructDecl(0, tokens_1, _idx, _loc, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "type"_fu)
                return parseTypedef(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "pub"_fu)
                return parsePub(_fnDepth, tokens_1, _loc, _idx, fname_1, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "shadow"_fu)
                return parseShadow(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "using"_fu)
                return parseConversionDecl(tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "nocopy"_fu)
                return parseNoCopy(tokens_1, _idx, _loc, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "import"_fu)
                return parseImport(tokens_1, _idx, _loc, fname_1, _imports, modid);

            if (v == "compiler"_fu)
                return parseCompilerPragma(tokens_1, _idx, _loc, fname_1, modid);

            if (v == "pure"_fu)
                return parsePureDecl(0, tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "inline"_fu)
                return parseInlineDecl(0, F_INLINE, tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "infix"_fu)
                return parseFixityDecl(F_INFIX, bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "prefix"_fu)
                return parseFixityDecl(F_PREFIX, bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "postfix"_fu)
                return parseFixityDecl(F_POSTFIX, bool{}, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

        };
    };
    _idx--;
    if (!_fnDepth)
        fail(fu_STR{}, tokens_1, _loc, _idx, fname_1);

    return parseExpressionStatement(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node createReturn(const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return createJump("return"_fu, (*(const fu_STR*)fu::NIL), expr, flags, modid, _loc);
}

static s_Node parseFnBodyBranch(const bool expr, fu::view<s_Token> tokens_1, int& _idx, int& _precedence, int& _loc, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    tryConsume("op"_fu, "="_fu, tokens_1, _idx);
    s_Node body = (expr ? parseExpression(_precedence, 0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));
    if (body.kind == "block"_fu)
        return body;

    if (body.kind == "return"_fu)
        return createBlock(fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(body) } }, (*(const fu_STR*)fu::NIL), modid, _loc);

    if ((body.kind == "call"_fu) && (body.value == "__native"_fu))
        return body;

    return createBlock(fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { createReturn(body, F_SINGLE_STMT, modid, _loc) } }, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static void parseBranch(const bool noCond, int& _precedence, int& _loc, int& _idx, fu::view<s_Token> tokens_1, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0, fu_VEC<s_Node>& branches)
{
    s_Node cond = (!noCond ? parseUnaryExpression(0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : s_Node{});
    s_Node type = tryPopTypeAnnot(tokens_1, _idx, _precedence, _loc, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    s_Node cons = parseFnBodyBranch(bool{}, tokens_1, _idx, _precedence, _loc, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    branches.push(make("fnbranch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(cond), s_Node(type), s_Node(cons) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc));
}

static int parseFnBodyOrPattern(fu_VEC<s_Node>& out_push_body, const bool expr, fu::view<s_Token> tokens_1, int& _idx, int& _precedence, int& _loc, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    const int flags = 0;
    s_Node body {};
    if (!expr && tryConsume("id"_fu, "case"_fu, tokens_1, _idx))
    {
        fu_VEC<s_Node> branches {};
        do
            parseBranch(bool{}, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0, branches);
        while (tryConsume("id"_fu, "case"_fu, tokens_1, _idx));
        if (tryConsume("id"_fu, "default"_fu, tokens_1, _idx))
            parseBranch(true, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0, branches);

        body = make("pattern"_fu, branches, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
    }
    else
        body = parseFnBodyBranch(expr, tokens_1, _idx, _precedence, _loc, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    out_push_body.push(body);
    return flags;
}

static s_Node parseFnDecl_cont(const fu_STR& name, int flags, const bool expr, const fu_STR& endv, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    fu_VEC<s_Node> items {};
    _fnDepth++;
    const int dollars0 = _dollars.size();
    fu_DEFER(
    {
        _fnDepth--;
        _dollars.shrink(dollars0);
    });
    flags |= (endv ? parseArgsDecl(items, "op"_fu, endv, _dollarAuto, _dollars, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : int{});
    s_Node type = tryPopTypeAnnot(tokens_1, _idx, _precedence, _loc, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    const int retIdx = items.size();
    items.push(type);
    const int numReturns0 = _numReturns;
    flags |= parseFnBodyOrPattern(items, expr, tokens_1, _idx, _precedence, _loc, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
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
            items.mutref(retIdx) = (type = createRead("i32"_fu, tokens_1, _loc, _idx, fname_1, modid));
        else if ((type.kind != "call"_fu) || (type.value != "i32"_fu) || type.items.size())
            fail("fn main() must return i32."_fu, tokens_1, _loc, _idx, fname_1);

        set_PUB(flags, tokens_1, _loc, _idx, fname_1, _hasPUB);
    };
    if (_dollars.size() > dollars0)
        flags |= F_TEMPLATE;

    return make("fn"_fu, items, flags, name, modid, _loc);
}

static s_Node parseFnDecl(int flags, const bool expr, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    fu_STR name = tryConsume("id"_fu, fu::view<fu::byte>{}, tokens_1, _idx).value;
    if (!name)
    {
        const int postfix = (flags & F_POSTFIX);
        name = consume("op"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
        if (postfix)
        {
            if (!((name == "++"_fu) || (name == "--"_fu)))
                fail((("No such postfix operator: `"_fu + name) + "`."_fu), tokens_1, _loc, _idx, fname_1);

            name = ("postfix"_fu + name);
        }
        else if (flags & F_INFIX)
        {
            if (!(has_Mcln(BINOP.PRECEDENCE, name)))
                fail((("No such infix operator: `"_fu + name) + "`."_fu), tokens_1, _loc, _idx, fname_1);

        }
        else if (flags & F_PREFIX)
        {
            if (!(has_Bd7d(PREFIX, name)))
                fail((("No such prefix operator: `"_fu + name) + "`."_fu), tokens_1, _loc, _idx, fname_1);

        };
        flags &= ~(F_INFIX | F_PREFIX);
        flags |= F_OPERATOR;
    }
    else if (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX))
        fail((("Not an operator: `"_fu + name) + "`."_fu), tokens_1, _loc, _idx, fname_1);

    fu_STR endv = (tryConsume("op"_fu, "("_fu, tokens_1, _idx) ? ")"_fu : fu_STR{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn(name, flags, modid, _loc);

        consume("op"_fu, "="_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    };
    return parseFnDecl_cont(name, int(flags), expr, endv, _fnDepth, _dollars, _dollarAuto, tokens_1, _idx, _loc, fname_1, _precedence, modid, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static fu_STR getAutoName(const s_Node& expr, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1)
{
    if ((expr.kind == "call"_fu) && hasIdentifierChars(expr.value))
        return fu_STR(expr.value);

    if (expr.items)
    {
        const int i = (((expr.kind == "and"_fu) && (expr.items.size() - 1)) ? ((expr.kind == "if"_fu) ? 1 : int{}) : 0);
        return getAutoName(expr.items[i], tokens_1, _loc, _idx, fname_1);
    };
    fail("Can't :autoname this expression."_fu, tokens_1, _loc, _idx, fname_1);
}

static s_Node createArgID(const fu_STR& id, const s_Node& expr, const int flags, const int modid, const int _loc)
{
    return make("argid"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(expr) } }, flags, id, modid, _loc);
}

static int parseCallArgs(fu::view<fu::byte> endop, fu_VEC<s_Node>& out_args, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    int flags = 0;
    bool first_1 = true;
    for (; ; )
    {
        if (tryConsume("op"_fu, endop, tokens_1, _idx))
            break;

        if (!first_1)
        {
            consume("op"_fu, ","_fu, (("Call expr expected `"_fu + endop) + "` or"_fu), tokens_1, _idx, _loc, fname_1);
            if (tryConsume("op"_fu, endop, tokens_1, _idx))
                break;

        };
        first_1 = false;
        fu_STR name {};
        bool autoName = false;
        bool optional = false;
        const s_Token& tok0 = tokens_1[_idx];
        if ((tok0.kind == "op"_fu) && (tok0.value == ":"_fu))
        {
            autoName = true;
            _idx += 1;
        }
        else if (tok0.kind == "id"_fu)
        {
            const s_Token& tok1 = tokens_1[(_idx + 1)];
            if (tok1.kind == "op"_fu)
            {
                if (tok1.value == ":"_fu)
                {
                    name = tok0.value;
                    _idx += 2;
                }
                else if (tok1.value == "?"_fu)
                {
                    const s_Token& tok2 = tokens_1[(_idx + 2)];
                    if ((tok2.kind == "op"_fu) && (tok2.value == ":"_fu))
                    {
                        optional = true;
                        name = tok0.value;
                        _idx += 3;
                    };
                };
            };
        };
        s_Node expr = parseExpression(P_RESET, 0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
        if (autoName)
            name = getAutoName(expr, tokens_1, _loc, _idx, fname_1);

        if (name)
            flags |= F_NAMED_ARGS;

        out_args.push((name ? createArgID(name, expr, (optional ? F_OPT_ARG : (*(const int*)fu::NIL)), modid, _loc) : s_Node(expr)));
    };
    return flags;
}

static s_Node createArrayLiteral(const int argFlags, const fu_VEC<s_Node>& items, const int modid, const int _loc)
{
    return make("arrlit"_fu, items, argFlags, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parseArrayLiteral(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs("]"_fu, args, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    return createArrayLiteral(argFlags, args, modid, _loc);
}

                                #ifndef DEFt_has_9sek
                                #define DEFt_has_9sek
inline bool has_9sek(fu::view<fu_STR> a, fu::view<fu::byte> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node createTypeParam(const fu_STR& value_1, const int modid, const int _loc)
{
    return make("typeparam"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value_1, modid, _loc);
}

static s_Node parseTypeParam(fu::view<s_Token> tokens_1, int& _idx, const int _loc, fu::view<fu::byte> fname_1, fu_VEC<fu_STR>& _dollars, const int _dollarAuto, const int modid)
{
    const fu_STR& value_1 = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
    if (!has_9sek(_dollars, value_1) && _dollarAuto)
        _dollars.push(value_1);

    return createTypeParam(value_1, modid, _loc);
}

static s_Node createTypeTag(const fu_STR& value_1, const int modid, const int _loc)
{
    return make("typetag"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, value_1, modid, _loc);
}

static s_Node parseTypeTag(fu::view<s_Token> tokens_1, int& _idx, const int _loc, fu::view<fu::byte> fname_1, const int modid)
{
    return createTypeTag(consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value, modid, _loc);
}

static s_Node parseLambda(const bool noArgs_noClosingPipe, int& _precedence, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens_1, int& _loc, int& _idx, const fu_STR& fname_1, const int modid, int& _anonFns, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _col0)
{
    if (noArgs_noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn("Unparenthesized `|| lambda` within a binary expression."_fu, warnings, options, tokens_1, _loc, _idx, fname_1);

    fu_STR name = x7E_OZkl((x7E_OZkl("l_"_fu, fu::i64dec(modid)) + "_"_fu), fu::i64dec(_anonFns++));
    return parseFnDecl_cont(name, ((F_INLINE | F_TEMPLATE) | F_LAMBDA), true, (!noArgs_noClosingPipe ? "|"_fu : fu_STR{}), _fnDepth, _dollars, _dollarAuto, tokens_1, _idx, _loc, fname_1, _precedence, modid, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node createDefinit(const int modid, const int _loc)
{
    return make("definit"_fu, (*(const fu_VEC<s_Node>*)fu::NIL), 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node parsePrefix(fu_STR&& op, int& _idx, fu::view<s_Token> tokens_1, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    if (!(has_Bd7d(PREFIX, op)))
    {
        _idx--;
        fail(fu_STR{}, tokens_1, _loc, _idx, fname_1);
    };
    if ((op == "&"_fu) && tryConsume("id"_fu, "mut"_fu, tokens_1, _idx))
        op = "&mut"_fu;

    const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
    return createPrefix(op, parseUnaryExpression(mode, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0), modid, _loc);
}

static s_Node parseExpressionHead(fu::view<s_Token> tokens_1, int& _idx, const int modid, int& _loc, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _precedence, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    const s_Token& token = tokens_1[_idx++];

    {
        const fu_STR& k = token.kind;
        const fu_STR& v = token.value;
        if ((k == "int"_fu) || (k == "real"_fu) || (k == "str"_fu) || (k == "char"_fu))
            return createLeaf(k, v, modid, _loc);

        if (k == "id"_fu)
        {
            const s_Token& peek = tokens_1[_idx];
            if (peek.kind == "id"_fu)
            {
                if (v == "fn"_fu)
                    return parseFnDecl(0, true, tokens_1, _idx, _loc, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

                if (v == "infix"_fu)
                    return parseFixityDecl(F_INFIX, true, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

                if (v == "prefix"_fu)
                    return parseFixityDecl(F_PREFIX, true, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

                if (v == "postfix"_fu)
                    return parseFixityDecl(F_POSTFIX, true, tokens_1, _loc, _idx, fname_1, modid, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            };
            return createRead(v, tokens_1, _loc, _idx, fname_1, modid);
        };
        if (k == "op"_fu)
        {
            if (v == "("_fu)
                return parseParens(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "{"_fu)
                return parseBlock(_idx, tokens_1, _col0, warnings, options, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);

            if (v == "["_fu)
                return parseArrayLiteral(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

            if (v == "$"_fu)
                return parseTypeParam(tokens_1, _idx, _loc, fname_1, _dollars, _dollarAuto, modid);

            if (v == "@"_fu)
                return parseTypeTag(tokens_1, _idx, _loc, fname_1, modid);

            if (v == "|"_fu)
                return parseLambda(bool{}, _precedence, warnings, options, tokens_1, _loc, _idx, fname_1, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _col0);

            if (v == "||"_fu)
                return parseLambda(true, _precedence, warnings, options, tokens_1, _loc, _idx, fname_1, modid, _anonFns, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _col0);

            if (v == "[]"_fu)
                return createDefinit(modid, _loc);

            if (v == "::"_fu)
            {
                const fu_STR& id = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
                _idx -= 2;
                return createRead(id, tokens_1, _loc, _idx, fname_1, modid);
            };
            if (v == "."_fu)
            {
                const fu_STR& id = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
                return createAddrOfFn(id, F_ACCESS, modid, _loc);
            };
            return parsePrefix(fu_STR(v), _idx, tokens_1, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
        };
    };
    _idx--;
    fail(fu_STR{}, tokens_1, _loc, _idx, fname_1);
}

static s_Node miss()
{
    return s_Node{};
}

static void lint(const int mode, fu_VEC<fu_STR>& warnings, const s_Options& options, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), warnings, options, tokens_1, _loc, _idx, fname_1);

}

static s_Node parseAccessExpression(const s_Node& expr, fu::view<s_Token> tokens_1, int& _idx, const int _loc, fu::view<fu::byte> fname_1, const int modid)
{
    s_Token id = tryConsume("id"_fu, fu::view<fu::byte>{}, tokens_1, _idx);
    if (!id)
    {
        consume("op"_fu, "::"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
        id = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
        _idx -= 2;
    };
    return createCall(id.value, F_ACCESS, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(expr) } }, modid, _loc);
}

static s_Node parseCallExpression(const s_Node& expr, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs(")"_fu, args, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    if ((expr.kind == "call"_fu) && (expr.flags & F_ACCESS))
    {
        const s_Node* _0;
        const s_Node& head = (expr.items && (expr.items.size() == 1) && *(_0 = &(expr.items[0])) ? *_0 : fail(fu_STR{}, tokens_1, _loc, _idx, fname_1));
        args.unshift(head);
        return createCall((expr.value ? expr.value : fail(fu_STR{}, tokens_1, _loc, _idx, fname_1)), ((F_METHOD | argFlags) | (expr.flags & ~F_ACCESS)), args, modid, _loc);
    };
    if ((expr.kind == "call"_fu) && (expr.flags & F_ID))
        return createCall((expr.value ? expr.value : fail(fu_STR{}, tokens_1, _loc, _idx, fname_1)), (argFlags | (expr.flags & ~F_ID)), args, modid, _loc);

    if (expr.kind == "typeparam"_fu)
        return createCall(("$"_fu + (expr.value ? expr.value : fail(fu_STR{}, tokens_1, _loc, _idx, fname_1))), argFlags, args, modid, _loc);

    fail("TODO dynamic call"_fu, tokens_1, _loc, _idx, fname_1);
}

static s_Node parseIndexExpression(const s_Node& expr, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs("]"_fu, args, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    args.unshift(expr);
    return createCall("[]"_fu, argFlags, args, modid, _loc);
}

                                #ifndef DEFt_bfind_VtCz
                                #define DEFt_bfind_VtCz
inline int bfind_VtCz(fu::view<fu_STR> keys_1, const fu_STR& item)
{
    for (int i = 0; i < keys_1.size(); i++)
    {
        if ((keys_1[i] >= item))
        {
            if (keys_1[i] != item)
                return -1;

            return i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_3SNF
                                #define DEFt_get_3SNF
inline int get_3SNF(const s_Map_cb0o& _, const fu_STR& key)
{
    const int idx = bfind_VtCz(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const int*)fu::NIL);
}
                                #endif

static s_Node createOr(const s_Node& left, const s_Node& right, const int modid, const int _loc)
{
    return flattenIfSame("or"_fu, left, right, modid, _loc);
}

static s_Node pipelineRight(const s_Node& left, s_Node&& right, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1)
{
    if (right.kind != "call"_fu)
        fail("Cannot pipeline: not a call expr."_fu, tokens_1, _loc, _idx, fname_1);

    if (right.flags & F_METHOD)
        right.items.insert(1, left);
    else
        right.items.unshift(left);

    return static_cast<s_Node&&>(right);
}

static s_Node pipelineLeft(s_Node&& left, const s_Node& right, fu::view<s_Token> tokens_1, const int _loc, const int _idx, fu::view<fu::byte> fname_1)
{
    if (left.kind != "call"_fu)
        fail("Cannot pipeline: not a call expr."_fu, tokens_1, _loc, _idx, fname_1);

    left.items.push(right);
    return static_cast<s_Node&&>(left);
}

static s_Node typeAssert(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make("typeassert"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(actual), s_Node(expect) } }, 0, (*(const fu_STR*)fu::NIL), modid, _loc);
}

static s_Node tryParseBinary(const s_Node& left, const fu_STR& op, const int p1, int& _precedence, int& _idx, int& _loc, fu::view<s_Token> tokens_1, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss();

    _idx++;
    s_Node mid {};
    if (op == "?"_fu)
    {
        mid = parseExpression(P_RESET, 0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
        consume("op"_fu, ":"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    };
    s_Node right = parseExpression(p1, 0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    if (mid)
        return createIf(left, mid, right, modid, _loc);

    if (op == "||"_fu)
        return createOr(left, right, modid, _loc);

    if (op == "&&"_fu)
        return createAnd(left, right, modid, _loc);

    if ((left.kind == "and"_fu) || (left.kind == "or"_fu))
    {
        if (!(left.flags & F_PARENS))
            warn((((("Unparenthesized `"_fu + left.kind) + "` on the left side of an `"_fu) + op) + "`."_fu), warnings, options, tokens_1, _loc, _idx, fname_1);

    };
    if (op == "|>"_fu)
        return pipelineRight(left, s_Node(right), tokens_1, _loc, _idx, fname_1);

    if (op == "<|"_fu)
        return pipelineLeft(s_Node(left), right, tokens_1, _loc, _idx, fname_1);

    if (op == "->"_fu)
        return typeAssert(left, right, modid, _loc);

    return createCall(op, F_INFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(left), s_Node(right) } }, modid, _loc);
}

                                #ifndef DEFt_has_VtCz
                                #define DEFt_has_VtCz
inline bool has_VtCz(fu::view<fu_STR> a, fu::view<fu::byte> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static s_Node parseQualifierChain(s_Node&& expr, int& _idx, fu::view<s_Token> tokens_1, const int _loc, const fu_STR& fname_1, fu_VEC<fu_STR>& _imports)
{
    if ((expr.kind != "call"_fu) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & F_ACCESS))) || (expr.flags & F_COMPOUND_ID))
    {
        _idx--;
        fail(fu_STR{}, tokens_1, _loc, _idx, fname_1);
    };
    expr.flags |= F_COMPOUND_ID;
    fu_STR path { expr.value };
    for (; ; )
    {
        fu::view<fu::byte> id = consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value;
        if (!tryConsume("op"_fu, "::"_fu, tokens_1, _idx))
        {
            path = registerImport(fu_STR(path), fname_1, _imports);
            expr.value = ((path + "\t"_fu) + id);
            return static_cast<s_Node&&>(expr);
        };
        path += ("/"_fu + id);
    };
}

static s_Node tryParseExpressionTail(const s_Node& head, const int mode, fu::view<s_Token> tokens_1, int& _idx, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, const fu_STR& fname_1, const int modid, int& _precedence, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    const s_Token& token = tokens_1[_idx++];
    if (token.kind == "op"_fu)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
            return ((void)_idx--, miss());

        if (v == "."_fu)
            return ((void)lint(mode, warnings, options, tokens_1, _loc, _idx, fname_1), parseAccessExpression(head, tokens_1, _idx, _loc, fname_1, modid));

        if (v == "("_fu)
            return ((void)lint(mode, warnings, options, tokens_1, _loc, _idx, fname_1), parseCallExpression(head, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0));

        if (v == "["_fu)
            return ((void)lint(mode, warnings, options, tokens_1, _loc, _idx, fname_1), parseIndexExpression(head, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0));

        const int p1 = get_3SNF(BINOP.PRECEDENCE, v);
        if (p1)
            return ((void)_idx--, tryParseBinary(head, v, p1, _precedence, _idx, _loc, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0));

        if (has_VtCz(POSTFIX, v))
            return createCall((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu_STR(v)), F_POSTFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(head) } }, modid, _loc);

        if (v == "::"_fu)
            return parseQualifierChain(s_Node(head), _idx, tokens_1, _loc, fname_1, _imports);

    };
    return ((void)_idx--, miss());
}

static s_Node parseExpression(const int p1, const int mode, int& _precedence, int& _loc, int& _idx, fu::view<s_Token> tokens_1, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    const int p0 = _precedence;
    const int loc0 = _loc;
    _precedence = p1;
    _loc = _idx;
    s_Node head = parseExpressionHead(tokens_1, _idx, modid, _loc, fname_1, _fnDepth, _dollars, _dollarAuto, _precedence, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == "int"_fu) || (head.kind == "real"_fu))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        s_Node out {};
        while ((out = tryParseExpressionTail(head, mode_1, tokens_1, _idx, warnings, options, _loc, fname_1, modid, _precedence, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns, _col0)))
        {
            _loc = _idx;
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc0;
    return head;
}

static s_Node parseUnaryExpression(const int mode, int& _precedence, int& _loc, int& _idx, fu::view<s_Token> tokens_1, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    return parseExpression(P_PREFIX_UNARY, mode, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node parseTypeAnnot(int& _precedence, int& _loc, int& _idx, fu::view<s_Token> tokens_1, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    return parseUnaryExpression(0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
}

static s_Node tryPopTypeAnnot(fu::view<s_Token> tokens_1, int& _idx, int& _precedence, int& _loc, const int modid, const fu_STR& fname_1, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    return (tryConsume("op"_fu, ":"_fu, tokens_1, _idx) ? parseTypeAnnot(_precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : miss());
}

static s_Node parseLet(const bool xqmark, fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    int flags = 0;
    if (tryConsume("id"_fu, "using"_fu, tokens_1, _idx))
        flags |= F_USING;

    if (tryConsume("id"_fu, "implicit"_fu, tokens_1, _idx))
        flags |= F_IMPLICIT;

    if (tryConsume("id"_fu, "lax"_fu, tokens_1, _idx))
        flags |= F_LAX;

    if (tryConsume("id"_fu, "shadow"_fu, tokens_1, _idx))
        flags |= F_SHADOW;

    if (tryConsume("id"_fu, "mut"_fu, tokens_1, _idx))
        flags |= F_MUT;

    if (tryConsume("id"_fu, "ref"_fu, tokens_1, _idx))
        flags |= F_REF;

    fu_STR id { consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value };
    if (id[0] == fu::byte('_'))
        flags |= F_LAX;

    s_Token mustname = (xqmark ? tryConsume("op"_fu, "!"_fu, tokens_1, _idx) : s_Token{});
    if (xqmark && tryConsume("op"_fu, "."_fu, tokens_1, _idx))
    {
        flags |= F_COMPOUND_ID;
        id += ("."_fu + consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value);
        while (tryConsume("op"_fu, "::"_fu, tokens_1, _idx))
            id += ("\t"_fu + consume("id"_fu, fu::view<fu::byte>{}, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1).value);

    };
    if (xqmark && tryConsume("op"_fu, "[]"_fu, tokens_1, _idx))
        flags |= F_REST_ARG;

    s_Token optional = (xqmark ? tryConsume("op"_fu, "?"_fu, tokens_1, _idx) : s_Token{});
    s_Token* _0;
    (*(_0 = &(mustname)) ? *_0 : *_0 = (xqmark ? tryConsume("op"_fu, "!"_fu, tokens_1, _idx) : s_Token{}));
    s_Node type = tryPopTypeAnnot(tokens_1, _idx, _precedence, _loc, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    s_Node init = (optional ? createDefinit(modid, _loc) : (tryConsume("op"_fu, "="_fu, tokens_1, _idx) ? parseExpression(P_RESET, 0, _precedence, _loc, _idx, tokens_1, modid, fname_1, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : s_Node{}));
    if (mustname)
        flags |= F_MUSTNAME;

    return createLet(id, flags, type, init, modid, _loc);
}

static s_Node parseStructItem(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, fu_VEC<fu_STR>& warnings, const s_Options& options, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns, int& _col0)
{
    s_Node member = parseLet(true, tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0);
    consume("op"_fu, ";"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    return member;
}

static s_Node parseDefer(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _fnDepth, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    s_Token _0 {};
    fu_STR value_1 = (tryConsume("op"_fu, ":"_fu, tokens_1, _idx) ? ((_0 = tryConsume("id"_fu, "err"_fu, tokens_1, _idx)) ? static_cast<s_Token&&>(_0) : s_Token(consume("id"_fu, "ok"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1))).value : fu_STR{});
    if (!(_fnDepth > 0))
    {
        _idx--;
        fail(fu_STR{}, tokens_1, _loc, _idx, fname_1);
    };
    return make("defer"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns) } }, 0, value_1, modid, _loc);
}

static s_Node parseStatementOrDefer(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _fnDepth, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const s_Token& peek = tokens_1[_idx];
    if (peek.kind == "id"_fu)
    {
        fu::view<fu::byte> v = peek.value;
        if (v == "defer"_fu)
            return ((void)_idx++, parseDefer(tokens_1, _idx, _loc, fname_1, _fnDepth, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));

    };
    return parseStatement(_loc, tokens_1, _idx, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
}

static fu_VEC<s_Node> parseBlockLike(fu::view<fu::byte> endKind, fu::view<fu::byte> endVal, const bool sTruct, int& _idx, fu::view<s_Token> tokens_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _loc, const fu_STR& fname_1, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    const int line0 = (_idx ? tokens_1[(_idx - 1)].line : (*(const int*)fu::NIL));
    const int col00 = _col0;
    int colNN = -1;
    int lineNN = line0;
    fu_VEC<s_Node> items {};
    for (; ; )
    {
        const s_Token& token = tokens_1[_idx];
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
                warn((x7E_OZkl((x7E_OZkl((x7E_OZkl((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens_1, _loc, _idx, fname_1);

            break;
        };
        _col0 = token.col;
        if (!(_col0 > col00))
            warn((x7E_OZkl((x7E_OZkl((x7E_OZkl((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), warnings, options, tokens_1, _loc, _idx, fname_1);

        if (!((colNN < 0) || (colNN == _col0) || (token.line == lineNN)))
            warn((x7E_OZkl((x7E_OZkl((x7E_OZkl((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), warnings, options, tokens_1, _loc, _idx, fname_1);

        if (colNN < 0)
            colNN = _col0;

        lineNN = token.line;
        s_Node expr = (sTruct ? parseStructItem(tokens_1, _idx, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, warnings, options, _hasPUB, _imports, _anonFns, _col0) : parseStatementOrDefer(tokens_1, _idx, _loc, fname_1, _fnDepth, _col0, warnings, options, _precedence, modid, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns));
        if (!((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.items.size() > 1) || (tokens_1[_idx].value == endVal)))
            warn("Orphan pure-looking expression."_fu, warnings, options, tokens_1, _loc, _idx, fname_1);

        items.push(expr);
    };
    return items;
}

static s_Node parseRoot(fu::view<s_Token> tokens_1, int& _idx, int& _loc, const fu_STR& fname_1, int& _col0, fu_VEC<fu_STR>& warnings, const s_Options& options, int& _precedence, const int modid, int& _fnDepth, fu_VEC<fu_STR>& _dollars, int& _dollarAuto, int& _numReturns, bool& _hasPUB, fu_VEC<fu_STR>& _imports, int& _anonFns)
{
    consume("sof"_fu, "sof"_fu, (*(const fu_STR*)fu::NIL), tokens_1, _idx, _loc, fname_1);
    _loc = _idx;
    s_Node out = make("root"_fu, parseBlockLike("eof"_fu, "eof"_fu, false, _idx, tokens_1, _col0, warnings, options, _loc, fname_1, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns), 0, (*(const fu_STR*)fu::NIL), modid, _loc);
    if (use_AUTOPUB && !_hasPUB)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            fu::view<fu::byte> k = item.kind;
            if (((k == "fn"_fu) || (k == "let"_fu) || (k == "typedef"_fu) || (k == "struct"_fu)) && !(item.flags & F_SHADOW))
                set_PUB(item.flags, tokens_1, _loc, _idx, fname_1, _hasPUB);

        };
    };
    return out;
}

s_ParserOutput parse(const int modid, const fu_STR& fname_1, fu::view<s_Token> tokens_1, const s_Options& options)
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
    if (!(tokens_1[(tokens_1.size() - 1)].kind == "eof"_fu))
        fail("Missing `eof` token."_fu, tokens_1, _loc, _idx, fname_1);

    s_Node root = parseRoot(tokens_1, _idx, _loc, fname_1, _col0, warnings, options, _precedence, modid, _fnDepth, _dollars, _dollarAuto, _numReturns, _hasPUB, _imports, _anonFns);
    return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(_imports), fu_VEC<fu_STR>(warnings) };
}

#endif
