#include <cstdint>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/view.h>
#include <utility>

struct s_BINOP;
struct s_Node;
struct s_ParserOutput;
struct s_Token;
struct s_TokenIdx;

bool hasIdentifierChars(const fu_STR&);
fu_STR path_dirname(const fu_STR&);
fu_STR path_ext(const fu_STR&);
fu_STR path_join(const fu_STR&, const fu_STR&);
s_ParserOutput parse(int, const fu_STR&, const fu_VEC<s_Token>&);
static fu_VEC<s_Node> parseBlockLike(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&, const fu_STR&, const fu_STR&, bool);
static s_Node parseExpression(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&, int, int);
static s_Node parseFnDecl(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&, int, bool);
static s_Node parseLet(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&, bool);
static s_Node parseStatement(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&);
static s_Node parseTypeAnnot(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&);
static s_Node parseUnaryExpression(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&, int);
static s_Node tryPopTypeAnnot(int, const fu_STR&, const fu_VEC<s_Token>&, int&, int&, int&, int&, int&, int&, int&, fu_VEC<fu_STR>&, int&, fu_VEC<fu_STR>&);

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    fu_MAP<fu_STR, int> PRECEDENCE;
    fu_MAP<int, bool> RIGHT_TO_LEFT;
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
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
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

#ifndef FU_NO_FDEFs

                                #ifndef DEF_F_METHOD
                                #define DEF_F_METHOD
inline const int F_METHOD = (1 << 0);
                                #endif

                                #ifndef DEF_F_INFIX
                                #define DEF_F_INFIX
inline const int F_INFIX = (1 << 1);
                                #endif

                                #ifndef DEF_F_PREFIX
                                #define DEF_F_PREFIX
inline const int F_PREFIX = (1 << 2);
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline const int F_POSTFIX = (1 << 3);
                                #endif

                                #ifndef DEF_F_ACCESS
                                #define DEF_F_ACCESS
inline const int F_ACCESS = (1 << 4);
                                #endif

                                #ifndef DEF_F_ID
                                #define DEF_F_ID
inline const int F_ID = (1 << 5);
                                #endif

                                #ifndef DEF_F_QUALIFIED
                                #define DEF_F_QUALIFIED
inline const int F_QUALIFIED = (1 << 6);
                                #endif

                                #ifndef DEF_F_LOCAL
                                #define DEF_F_LOCAL
inline const int F_LOCAL = (1 << 8);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEF_F_FIELD
                                #define DEF_F_FIELD
inline const int F_FIELD = (1 << 10);
                                #endif

                                #ifndef DEF_F_NODISCARD
                                #define DEF_F_NODISCARD
inline const int F_NODISCARD = (1 << 11);
                                #endif

                                #ifndef DEF_F_NOCOPY
                                #define DEF_F_NOCOPY
inline const int F_NOCOPY = (1 << 12);
                                #endif

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline const int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_F_USING
                                #define DEF_F_USING
inline const int F_USING = (1 << 18);
                                #endif

                                #ifndef DEF_F_MUSTNAME
                                #define DEF_F_MUSTNAME
inline const int F_MUSTNAME = (1 << 19);
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline const int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline const int F_OPERATOR = (1 << 21);
                                #endif

                                #ifndef DEF_F_REF
                                #define DEF_F_REF
inline const int F_REF = (1 << 22);
                                #endif

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline const int F_SHADOW = (1 << 23);
                                #endif

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline const int F_NAMED_ARGS = (1 << 24);
                                #endif

                                #ifndef DEF_F_PATTERN
                                #define DEF_F_PATTERN
inline const int F_PATTERN = (1 << 27);
                                #endif

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline const int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_INLINE
                                #define DEF_F_INLINE
inline const int F_INLINE = (1 << 29);
                                #endif

static const int P_RESET = 1000;

static const int P_PREFIX_UNARY = 3;

static const fu_VEC<fu_STR> PREFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<10> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static const fu_VEC<fu_STR> POSTFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "++"_fu, "--"_fu, "[]"_fu } };

static void binop(s_BINOP& out_0, int& precedence_0, bool& rightToLeft_0, const fu_VEC<fu_STR>& ops)
{
    precedence_0++;
    (out_0.RIGHT_TO_LEFT.upsert(precedence_0) = bool(rightToLeft_0));
    for (int i = 0; i < ops.size(); i++)
        (out_0.PRECEDENCE.upsert(ops[i]) = int(precedence_0));

}

static s_BINOP setupOperators()
{
    s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    rightToLeft = false;
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "*"_fu, "/"_fu, "%"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "+"_fu, "-"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "<<"_fu, ">>"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "&"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "^"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "|"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "~"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "<=>"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<4> { "in"_fu, "is"_fu, "as"_fu, "->"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<4> { "<"_fu, "<="_fu, ">"_fu, ">="_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "=="_fu, "!="_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "&&"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "||"_fu } });
    rightToLeft = true;
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "?"_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<16> { "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu } });
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "<|"_fu } });
    rightToLeft = false;
    binop(out, precedence, rightToLeft, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "|>"_fu } });
    return out;
}

static const s_BINOP BINOP = setupOperators();

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline const int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline const int FN_ARGS_BACK = FN_RET_BACK;
                                #endif

                                #ifndef DEF_TYPECTOR_BACK
                                #define DEF_TYPECTOR_BACK
inline const int TYPECTOR_BACK = -1;
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline const int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline const int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline const int LOOP_POST = 2;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline const int LOOP_BODY = 3;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline const int LOOP_POST_COND = 4;
                                #endif

static const int M_LINT_UNARY_PRECEDENCE = (1 << 0);

[[noreturn]] static fu::never fail(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, fu_STR&& reason)
{
    const s_Token& loc = tokens_0[_loc_0];
    const s_Token& here = tokens_0[_idx_0];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? ((("@"_fu + l1) + ":"_fu) + c1) : ((((((("@"_fu + l0) + ":"_fu) + c0) + ".."_fu) + l1) + ":"_fu) + c1));
    fu::fail(((((fname_0 + " "_fu) + addr) + ":\n\t"_fu) + reason));
}

static s_Token consume(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, fu::view<std::byte> kind, fu::view<std::byte> value)
{
    const s_Token& token = tokens_0[_idx_0];
    if (((token.kind == kind) && (!value || (token.value == value))))
    {
        _idx_0++;
        return s_Token(token);
    };
    return fail(fname_0, tokens_0, _idx_0, _loc_0, (((("Expected `"_fu + (value ? value : kind)) + "`, got `"_fu) + token.value) + "`."_fu));
}

[[noreturn]] static fu::never fail_Lint(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, const fu_STR& reason)
{
    fail(fname_0, tokens_0, _idx_0, _loc_0, ("Lint: "_fu + reason));
}

static s_Token tryConsume(const fu_VEC<s_Token>& tokens_0, int& _idx_0, fu::view<std::byte> kind, fu::view<std::byte> value)
{
    const s_Token& token = tokens_0[_idx_0];
    if (((token.kind == kind) && (!value || (token.value == value))))
    {
        _idx_0++;
        return s_Token(token);
    };
    return s_Token{};
}

static s_Node make(int modid_0, int& _loc_0, const fu_STR& kind, const fu_VEC<s_Node>& items, const int flags, const fu_STR& value)
{
    return s_Node { fu_STR(kind), int(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid_0), int(_loc_0) } };
}

static s_Node createLeaf(int modid_0, int& _loc_0, const fu_STR& kind, const fu_STR& value)
{
    return make(modid_0, _loc_0, kind, fu_VEC<s_Node>{}, 0, value);
}

static int parseArgsDecl(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, fu_VEC<s_Node>& outArgs, const fu_STR& endk, const fu_STR& endv)
{
    bool first = true;
    int outFlags = 0;
    fu_VEC<s_Node> implicit {};
    bool defaults = false;
    _dollarAuto_0++;
    for (; ; )
    {
        if (tryConsume(tokens_0, _idx_0, endk, endv))
        {
            break;
        };
        if (!first)
            consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ","_fu);

        first = false;
        s_Node arg = parseLet(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, true);
        const bool untyped = !arg.items.mutref(LET_TYPE);
        if (arg.items.mutref(LET_INIT))
        {
            if (arg.flags & F_IMPLICIT)
                fail(fname_0, tokens_0, _idx_0, _loc_0, "TODO default implicit arguments"_fu);

            defaults = true;
        }
        else if (defaults)
            fail(fname_0, tokens_0, _idx_0, _loc_0, "TODO non-trailing default arguments"_fu);
        else if (untyped)
            outFlags |= F_TEMPLATE;

        arg.flags |= F_ARG;
        if (arg.flags & F_IMPLICIT)
            implicit.push(arg);
        else
            outArgs.push(arg);

    };
    _dollarAuto_0--;
    if (implicit)
    {
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(implicit.mutref(i));

    };
    return outFlags;
}

static s_Node createBlock(int modid_0, int& _loc_0, const fu_VEC<s_Node>& items)
{
    return make(modid_0, _loc_0, "block"_fu, items, 0, fu_STR{});
}

static s_Node parseBlock(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    return createBlock(modid_0, _loc_0, parseBlockLike(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, "op"_fu, "}"_fu, false));
}

static s_Node parseEmpty(int modid_0, int& _loc_0)
{
    return make(modid_0, _loc_0, "empty"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});
}

static s_Node parseLabelledStatement(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Token label = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{});
    s_Node stmt = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    if (stmt.kind == "loop"_fu)
    {
        (stmt.value && fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{}));
        stmt.value = (label.value ? label.value : fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{}));
        return stmt;
    };
    return fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{});
}

static s_Node createCall(int modid_0, int& _loc_0, const fu_STR& id, const int flags, const fu_VEC<s_Node>& args)
{
    return make(modid_0, _loc_0, "call"_fu, args, flags, id);
}

static s_Node createRead(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, const fu_STR& id)
{
    return createCall(modid_0, _loc_0, (id ? id : fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{})), F_ID, fu_VEC<s_Node>{});
}

static s_Node createLet(int modid_0, int& _loc_0, const fu_STR& id, const int flags, const s_Node& type, const s_Node& init)
{
    return make(modid_0, _loc_0, "let"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(type), s_Node(init) } }, flags, id);
}

static s_Node parseLetStmt(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Node ret = parseLet(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, false);
    if (tryConsume(tokens_0, _idx_0, "id"_fu, "catch"_fu))
    {
        s_Node err = createLet(modid_0, _loc_0, consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value, 0, createRead(modid_0, fname_0, tokens_0, _idx_0, _loc_0, "string"_fu), s_Node{});
        s_Node cAtch = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
        return make(modid_0, _loc_0, "catch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(ret), s_Node(err), s_Node(cAtch) } }, 0, fu_STR{});
    };
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ";"_fu);
    return ret;
}

static s_Node parseStructDecl(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const int flags)
{
    fu_STR name = tryConsume(tokens_0, _idx_0, "id"_fu, fu::view<std::byte>{}).value;
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "{"_fu);
    fu_VEC<s_Node> items = parseBlockLike(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, "op"_fu, "}"_fu, true);
    s_Node sTruct = make(modid_0, _loc_0, "struct"_fu, items, flags, name);
    return sTruct;
}

static s_Node parsePub(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    (_fnDepth_0 && fail(fname_0, tokens_0, _idx_0, _loc_0, "Cannot pub from within a fn."_fu));
    s_Node out = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    out.flags |= F_PUB;
    ((out.flags & F_SHADOW) && fail(fname_0, tokens_0, _idx_0, _loc_0, "Cannot pub a shadow."_fu));
    return out;
}

static s_Node parseShadow(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Node out = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    out.flags |= F_SHADOW;
    ((out.flags & F_PUB) && fail(fname_0, tokens_0, _idx_0, _loc_0, "Cannot shadow a pub."_fu));
    return out;
}

static s_Node parseTypedef(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    fu_STR name = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value;
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "="_fu);
    s_Node annot = parseTypeAnnot(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ";"_fu);
    return make(modid_0, _loc_0, "typedef"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(annot) } }, 0, name);
}

static s_Node parseFixityDecl(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const int flags, const bool expr)
{
    consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, "fn"_fu);
    return parseFnDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(flags), expr);
}

static s_Node parseInlineDecl(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    const int flags = (F_INLINE | F_TEMPLATE);
    fu_STR v = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value;
    if (v == "infix"_fu)
        return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, (flags | F_INFIX), bool{});

    if (v == "prefix"_fu)
        return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, (flags | F_PREFIX), bool{});

    if (v == "postfix"_fu)
        return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, (flags | F_POSTFIX), bool{});

    _idx_0--;
    return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, flags, bool{});
}

static s_Node parseNoCopy(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, "struct"_fu);
    return parseStructDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, F_NOCOPY);
}

static s_Node createNot(int modid_0, int& _loc_0, const s_Node& expr)
{
    return make(modid_0, _loc_0, "!"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(expr) } }, 0, fu_STR{});
}

static s_Node createIf(int modid_0, int& _loc_0, const s_Node& cond, const s_Node& cons, const s_Node& alt)
{
    return make(modid_0, _loc_0, "if"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(cond), s_Node(cons), s_Node(alt) } }, 0, fu_STR{});
}

static s_Node parseIf(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Token nOt = tryConsume(tokens_0, _idx_0, "op"_fu, "!"_fu);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "("_fu);
    s_Node cond = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(_precedence_0), 0);
    if (nOt)
        cond = createNot(modid_0, _loc_0, cond);

    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ")"_fu);
    s_Node cons = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    s_Node alt = ([&]() -> s_Node { if (tryConsume(tokens_0, _idx_0, "id"_fu, "else"_fu)) return parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0); else return s_Node{}; }());
    return createIf(modid_0, _loc_0, cond, cons, alt);
}

static s_Node createReturn(int modid_0, int& _loc_0, const s_Node& node)
{
    if (!node)
        return make(modid_0, _loc_0, "return"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});

    return make(modid_0, _loc_0, "return"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(node) } }, 0, fu_STR{});
}

static s_Node parseExpressionStatement(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Node expr = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(P_RESET), 0);
    const s_Token& peek = tokens_0[_idx_0];
    if (((peek.kind == "op"_fu) && (peek.value == "}"_fu)))
        expr.flags |= F_NODISCARD;
    else if (((peek.kind == "op"_fu) && (peek.value == ";"_fu)))
        _idx_0++;
    else
        fail_Lint(fname_0, tokens_0, _idx_0, _loc_0, "Missing semicollon."_fu);

    return expr;
}

static s_Node parseReturn(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    ((_fnDepth_0 > 0) || ((void)_idx_0--, fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{})));
    _numReturns_0++;
    if (tryConsume(tokens_0, _idx_0, "op"_fu, ";"_fu))
        return createReturn(modid_0, _loc_0, s_Node{});

    return createReturn(modid_0, _loc_0, parseExpressionStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0));
}

static s_Node parseDefer(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    ((_fnDepth_0 > 0) || ((void)_idx_0--, fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{})));
    return make(modid_0, _loc_0, "defer"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(_precedence_0), 0) } }, 0, fu_STR{});
}

static s_Node parseTryCatch(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    ((_fnDepth_0 > 0) || ((void)_idx_0--, fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{})));
    s_Node tRy = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, "catch"_fu);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "("_fu);
    s_Node err = createLet(modid_0, _loc_0, consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value, 0, createRead(modid_0, fname_0, tokens_0, _idx_0, _loc_0, "string"_fu), s_Node{});
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ")"_fu);
    s_Node cAtch = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    return make(modid_0, _loc_0, "try"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(tRy), s_Node(err), s_Node(cAtch) } }, 0, fu_STR{});
}

static s_Node miss()
{
    return s_Node{};
}

static s_Node createLoop(int modid_0, int& _loc_0, const s_Node& init, const s_Node& cond, const s_Node& post, const s_Node& body, const s_Node& postcond)
{
    return make(modid_0, _loc_0, "loop"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<5> { s_Node(init), s_Node(cond), s_Node(post), s_Node(body), s_Node(postcond) } }, 0, fu_STR{});
}

static s_Node parseFor(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "("_fu);
    if (tryConsume(tokens_0, _idx_0, "id"_fu, "fieldname"_fu))
    {
        fu_STR placeholder = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value;
        consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ":"_fu);
        s_Node type = parseTypeAnnot(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
        consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ")"_fu);
        s_Node body = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
        return make(modid_0, _loc_0, "forfieldsof"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(type), s_Node(body) } }, 0, placeholder);
    };
    s_Node init = ([&]() -> s_Node { if (!tryConsume(tokens_0, _idx_0, "op"_fu, ";"_fu)) return parseLetStmt(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0); else return s_Node{}; }());
    s_Node cond = ([&]() -> s_Node { if (!tryConsume(tokens_0, _idx_0, "op"_fu, ";"_fu)) return parseExpressionStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0); else return s_Node{}; }());
    const s_Token& token = tokens_0[_idx_0];
    s_Node post = (((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseEmpty(modid_0, _loc_0) : parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(_precedence_0), 0));
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ")"_fu);
    s_Node body = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    return createLoop(modid_0, _loc_0, init, cond, post, body, miss());
}

static s_Node parseWhile(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "("_fu);
    s_Node cond = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(_precedence_0), 0);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ")"_fu);
    s_Node body = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    return createLoop(modid_0, _loc_0, miss(), cond, miss(), body, miss());
}

static s_Node parseDoWhile(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Node body = parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, "while"_fu);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "("_fu);
    s_Node cond = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(_precedence_0), 0);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ")"_fu);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ";"_fu);
    return createLoop(modid_0, _loc_0, miss(), miss(), miss(), body, cond);
}

static s_Node createJump(int modid_0, int& _loc_0, const fu_STR& kind, const fu_STR& label)
{
    return make(modid_0, _loc_0, kind, fu_VEC<s_Node>{}, 0, label);
}

static s_Node parseJump(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, const fu_STR& kind)
{
    s_Token label = ([&]() -> s_Token { if (tryConsume(tokens_0, _idx_0, "op"_fu, ":"_fu)) return consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}); else return s_Token{}; }());
    s_Node jump = createJump(modid_0, _loc_0, kind, label.value);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ";"_fu);
    return jump;
}

static fu_STR registerImport(const fu_STR& fname_0, fu_VEC<fu_STR>& _imports_0, fu_STR&& value)
{
    if (!path_ext(value))
        value += ".fu"_fu;

    fu_STR dir = path_dirname(fname_0);
    value = (fu::lmatch(value, "."_fu) ? path_join(dir, value) : ((dir + std::byte('\v')) + value));
    if (!fu::has(_imports_0, value))
        _imports_0.push(value);

    return std::move(value);
}

static s_Node parseImport(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, fu_VEC<fu_STR>& _imports_0)
{
    fu_STR value = tryConsume(tokens_0, _idx_0, "id"_fu, fu::view<std::byte>{}).value;
    if (value)
    {
        while (tryConsume(tokens_0, _idx_0, "op"_fu, "::"_fu))
            value += ("/"_fu + consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value);

    }
    else
        value = consume(fname_0, tokens_0, _idx_0, _loc_0, "str"_fu, fu::view<std::byte>{}).value;

    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ";"_fu);
    value = registerImport(fname_0, _imports_0, fu_STR(value));
    return make(modid_0, _loc_0, "import"_fu, fu_VEC<s_Node>{}, 0, value);
}

static s_Node parseStatement(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    const int loc0 = _loc_0;
    const s_Token& token = ([&]() -> const s_Token& { { const s_Token& _ = tokens_0[(_loc_0 = _idx_0++)]; if (_) return _; } fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{}); }());
    if (token.kind == "op"_fu)
    {
        const fu_STR& v = token.value;
        if (v == "{"_fu)
            return parseBlock(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

        if (v == ";"_fu)
            return parseEmpty(modid_0, _loc_0);

        if (v == ":"_fu)
            return parseLabelledStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

    }
    else if (token.kind == "id"_fu)
    {
        const fu_STR& v = token.value;
        const s_Token& peek = tokens_0[_idx_0];
        if ((!_fnDepth_0 || (peek.kind == "id"_fu)))
        {
            if (v == "let"_fu)
                return parseLetStmt(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "mut"_fu)
                return ((void)_idx_0--, parseLetStmt(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0));

            if (v == "ref"_fu)
                return ((void)_idx_0--, parseLetStmt(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0));

            if (v == "struct"_fu)
                return parseStructDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, 0);

            if (v == "pub"_fu)
                return parsePub(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "shadow"_fu)
                return parseShadow(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "type"_fu)
                return parseTypedef(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "typedef"_fu)
                return parseTypedef(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "fn"_fu)
                return parseFnDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, 0, bool{});

            if (v == "inline"_fu)
                return parseInlineDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "infix"_fu)
                return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, F_INFIX, bool{});

            if (v == "prefix"_fu)
                return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, F_PREFIX, bool{});

            if (v == "postfix"_fu)
                return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, F_POSTFIX, bool{});

            if (v == "nocopy"_fu)
                return parseNoCopy(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

        };
        if (((peek.kind == "op"_fu) && (peek.value == "{"_fu)))
        {
            if (v == "struct"_fu)
                return parseStructDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, 0);

        };
        if (_fnDepth_0)
        {
            if (v == "if"_fu)
                return parseIf(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "return"_fu)
                return parseReturn(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "defer"_fu)
                return parseDefer(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "try"_fu)
                return parseTryCatch(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "for"_fu)
                return parseFor(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "while"_fu)
                return parseWhile(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "do"_fu)
                return parseDoWhile(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "break"_fu)
                return parseJump(modid_0, fname_0, tokens_0, _idx_0, _loc_0, "break"_fu);

            if (v == "continue"_fu)
                return parseJump(modid_0, fname_0, tokens_0, _idx_0, _loc_0, "continue"_fu);

        };
        if (((v == "import"_fu) && ((peek.kind == "id"_fu) || (peek.kind == "str"_fu))))
            return parseImport(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _imports_0);

    };
    _idx_0--;
    _loc_0 = loc0;
    return parseExpressionStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
}

static s_Node parseFnBodyBranch(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const bool expr)
{
    tryConsume(tokens_0, _idx_0, "op"_fu, "="_fu);
    s_Node body = (expr ? parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(_precedence_0), 0) : parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0));
    if (body.kind == "block"_fu)
        return body;

    if (body.kind == "return"_fu)
        return createBlock(modid_0, _loc_0, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(body) } });

    _numReturns_0++;
    if (((body.kind == "call"_fu) && (body.value == "__native"_fu)))
        return body;

    return createBlock(modid_0, _loc_0, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { createReturn(modid_0, _loc_0, body) } });
}

static int parseFnBodyOrPattern(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, fu_VEC<s_Node>& out_push_body, const bool expr)
{
    int flags = 0;
    s_Node body {};
    if ((!expr && tryConsume(tokens_0, _idx_0, "id"_fu, "case"_fu)))
    {
        fu_VEC<s_Node> branches {};
        flags |= F_PATTERN;
        do
        {
            s_Node cond = parseUnaryExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, 0);
            s_Node type = tryPopTypeAnnot(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
            s_Node cons = parseFnBodyBranch(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, bool{});
            branches.push(make(modid_0, _loc_0, "fnbranch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { s_Node(cond), s_Node(type), s_Node(cons) } }, 0, fu_STR{}));
        }
        while (tryConsume(tokens_0, _idx_0, "id"_fu, "case"_fu));
        body = make(modid_0, _loc_0, "pattern"_fu, branches, 0, fu_STR{});
    }
    else
        body = parseFnBodyBranch(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, expr);

    out_push_body.push(body);
    return flags;
}

static s_Node parseFnDecl_cont(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const fu_STR& name, int flags, const bool expr, const fu_STR& endv)
{
    fu_VEC<s_Node> items {};
    _fnDepth_0++;
    fu_VEC<fu_STR> dollars0 { _dollars_0 };
    const int numReturns0 = _numReturns_0;
    flags |= ([&]() -> int { if (endv) return parseArgsDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, items, "op"_fu, endv); else return int{}; }());
    s_Node type = tryPopTypeAnnot(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    const int retIdx = items.size();
    items.push(type);
    flags |= parseFnBodyOrPattern(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, items, expr);
    if ((!type && (_numReturns_0 == numReturns0)))
        items.mutref(retIdx) = (type = createRead(modid_0, fname_0, tokens_0, _idx_0, _loc_0, "void"_fu));

    if (((name == "main"_fu) && (_fnDepth_0 == 1)))
    {
        if (!type)
            items.mutref(retIdx) = (type = createRead(modid_0, fname_0, tokens_0, _idx_0, _loc_0, "i32"_fu));
        else if (((type.kind != "call"_fu) || (type.value != "i32"_fu) || type.items.size()))
            fail(fname_0, tokens_0, _idx_0, _loc_0, "fn main() must return i32."_fu);

        flags |= F_PUB;
    };
    if (_dollars_0.size() > dollars0.size())
        flags |= F_TEMPLATE;

    _fnDepth_0--;
    _dollars_0 = dollars0;
    _numReturns_0 = numReturns0;
    return make(modid_0, _loc_0, "fn"_fu, items, flags, name);
}

static s_Node parseFnDecl(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, int flags, const bool expr)
{
    fu_STR name = tryConsume(tokens_0, _idx_0, "id"_fu, fu::view<std::byte>{}).value;
    if (!name)
    {
        const int postfix = (flags & F_POSTFIX);
        name = consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, fu::view<std::byte>{}).value;
        if (postfix)
        {
            ((name == "++"_fu) || (name == "--"_fu) || fail(fname_0, tokens_0, _idx_0, _loc_0, (("No such postfix operator: `"_fu + name) + "`."_fu)));
            name += "postfix"_fu;
        }
        else if (flags & F_INFIX)
        {
            (fu::has(BINOP.PRECEDENCE, name) || fail(fname_0, tokens_0, _idx_0, _loc_0, (("No such infix operator: `"_fu + name) + "`."_fu)));
        }
        else if (flags & F_PREFIX)
        {
            (fu::has(PREFIX, name) || fail(fname_0, tokens_0, _idx_0, _loc_0, (("No such prefix operator: `"_fu + name) + "`."_fu)));
        };
        flags &= ~(F_INFIX | F_PREFIX);
        flags |= F_OPERATOR;
    }
    else if (flags & ((F_INFIX | F_PREFIX) | F_POSTFIX))
        fail(fname_0, tokens_0, _idx_0, _loc_0, (("Not an operator: `"_fu + name) + "`."_fu));

    if (!expr)
        consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "("_fu);
    else if (!tryConsume(tokens_0, _idx_0, "op"_fu, "("_fu))
        return make(modid_0, _loc_0, "addroffn"_fu, fu_VEC<s_Node>{}, flags, name);

    return parseFnDecl_cont(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, name, int(flags), expr, ")"_fu);
}

static s_Node parseParens(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Node out = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(P_RESET), 0);
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ")"_fu);
    return out;
}

static fu_STR getAutoName(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, const s_Node& expr)
{
    if (((expr.kind == "call"_fu) && hasIdentifierChars(expr.value)))
        return fu_STR(expr.value);

    if (expr.items)
        return getAutoName(fname_0, tokens_0, _idx_0, _loc_0, expr.items[0]);

    return fail(fname_0, tokens_0, _idx_0, _loc_0, "Can't :auto_name this expression."_fu);
}

static s_Node createLabel(int modid_0, int& _loc_0, const fu_STR& id, const s_Node& value)
{
    return make(modid_0, _loc_0, "label"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(value) } }, 0, id);
}

static int parseCallArgs(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const fu_STR& endop, fu_VEC<s_Node>& out_args)
{
    int flags = 0;
    bool first = true;
    for (; ; )
    {
        if (tryConsume(tokens_0, _idx_0, "op"_fu, endop))
        {
            break;
        };
        if (!first)
        {
            consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ","_fu);
            if (tryConsume(tokens_0, _idx_0, "op"_fu, endop))
            {
                break;
            };
        };
        first = false;
        fu_STR name {};
        bool autoName = false;
        if (((tokens_0[_idx_0].kind == "id"_fu) && (tokens_0[(_idx_0 + 1)].kind == "op"_fu) && (tokens_0[(_idx_0 + 1)].value == ":"_fu)))
        {
            name = tokens_0[_idx_0].value;
            _idx_0 += 2;
            flags |= F_NAMED_ARGS;
        }
        else if (((tokens_0[_idx_0].kind == "op"_fu) && (tokens_0[_idx_0].value == ":"_fu)))
        {
            autoName = true;
            _idx_0++;
            flags |= F_NAMED_ARGS;
        };
        s_Node expr = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(P_RESET), 0);
        if (autoName)
            name = getAutoName(fname_0, tokens_0, _idx_0, _loc_0, expr);

        out_args.push((name ? createLabel(modid_0, _loc_0, name, expr) : s_Node(expr)));
    };
    return flags;
}

static s_Node createArrayLiteral(int modid_0, int& _loc_0, const int argFlags, const fu_VEC<s_Node>& items)
{
    return make(modid_0, _loc_0, "arrlit"_fu, items, argFlags, fu_STR{});
}

static s_Node parseArrayLiteral(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, "]"_fu, args);
    return createArrayLiteral(modid_0, _loc_0, argFlags, args);
}

static s_Node createTypeParam(int modid_0, int& _loc_0, const fu_STR& value)
{
    return make(modid_0, _loc_0, "typeparam"_fu, fu_VEC<s_Node>{}, 0, value);
}

static s_Node parseTypeParam(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0)
{
    fu_STR value = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value;
    if ((!fu::has(_dollars_0, value) && _dollarAuto_0))
        _dollars_0.push(value);

    return createTypeParam(modid_0, _loc_0, value);
}

static s_Node createTypeTag(int modid_0, int& _loc_0, const fu_STR& value)
{
    return make(modid_0, _loc_0, "typetag"_fu, fu_VEC<s_Node>{}, 0, value);
}

static s_Node parseTypeTag(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0)
{
    return createTypeTag(modid_0, _loc_0, consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value);
}

static s_Node parseLambda(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const bool noArgs)
{
    fu_STR name = ((("l_"_fu + modid_0) + "_"_fu) + _anonFns_0++);
    return parseFnDecl_cont(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, name, (F_INLINE | F_TEMPLATE), true, ([&]() -> fu_STR { if (!noArgs) return "|"_fu; else return fu_STR{}; }()));
}

static s_Node createDefinit(int modid_0, int& _loc_0)
{
    return make(modid_0, _loc_0, "definit"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});
}

                                #ifndef DEFt_only_qVFp
                                #define DEFt_only_qVFp
inline std::byte only_qVFp(const fu_STR& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_Node createPrefix(int modid_0, int& _loc_0, const fu_STR& op, s_Node&& expr)
{
    if (op == "!"_fu)
        return createNot(modid_0, _loc_0, expr);

    if ((((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == "int"_fu) || (expr.kind == "real"_fu))))
    {
        const std::byte sign = expr.value[0];
        if (((sign == std::byte('+')) || (sign == std::byte('-'))))
            expr.value.mutref(0) = ((sign == only_qVFp(op)) ? std::byte('+') : std::byte('-'));
        else
            expr.value = (op + expr.value);

        return std::move(expr);
    };
    return createCall(modid_0, _loc_0, op, F_PREFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(expr) } });
}

static s_Node parsePrefix(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, fu_STR&& op)
{
    (fu::has(PREFIX, op) || ((void)_idx_0--, fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{})));
    if (((op == "&"_fu) && tryConsume(tokens_0, _idx_0, "id"_fu, "mut"_fu)))
        op = "&mut"_fu;

    const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
    return createPrefix(modid_0, _loc_0, op, parseUnaryExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, mode));
}

static s_Node parseExpressionHead(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    const s_Token& token = tokens_0[_idx_0++];
    
    {
        const fu_STR& k = token.kind;
        const fu_STR& v = token.value;
        if (((k == "int"_fu) || (k == "real"_fu) || (k == "str"_fu) || (k == "char"_fu)))
            return createLeaf(modid_0, _loc_0, k, v);

        if (k == "id"_fu)
        {
            const s_Token& peek = tokens_0[_idx_0];
            if (peek.kind == "id"_fu)
            {
                if (v == "fn"_fu)
                    return parseFnDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, 0, true);

                if (v == "infix"_fu)
                    return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, F_INFIX, true);

                if (v == "prefix"_fu)
                    return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, F_PREFIX, true);

                if (v == "postfix"_fu)
                    return parseFixityDecl(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, F_POSTFIX, true);

            };
            return createRead(modid_0, fname_0, tokens_0, _idx_0, _loc_0, v);
        };
        if (k == "op"_fu)
        {
            if (v == "("_fu)
                return parseParens(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "{"_fu)
                return parseBlock(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "["_fu)
                return parseArrayLiteral(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);

            if (v == "$"_fu)
                return parseTypeParam(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _dollarAuto_0, _dollars_0);

            if (v == "@"_fu)
                return parseTypeTag(modid_0, fname_0, tokens_0, _idx_0, _loc_0);

            if (v == "|"_fu)
                return parseLambda(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, bool{});

            if (v == "||"_fu)
                return parseLambda(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, true);

            if (v == "[]"_fu)
                return createDefinit(modid_0, _loc_0);

            if (v == "::"_fu)
            {
                fu_STR id = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value;
                _idx_0 -= 2;
                return createRead(modid_0, fname_0, tokens_0, _idx_0, _loc_0, id);
            };
            return parsePrefix(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, fu_STR(v));
        };
    };
    _idx_0--;
    return fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{});
}

static int lint(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int mode_0)
{
    return ([&]() -> int { { int _ = (mode_0 & M_LINT_UNARY_PRECEDENCE); if (!_) return _; } fail_Lint(fname_0, tokens_0, _idx_0, _loc_0, (("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu)); }());
}

static s_Node parseAccessExpression(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, const s_Node& expr)
{
    s_Token id = tryConsume(tokens_0, _idx_0, "id"_fu, fu::view<std::byte>{});
    if (!id)
    {
        consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, "::"_fu);
        id = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{});
        _idx_0 -= 2;
    };
    return createCall(modid_0, _loc_0, id.value, F_ACCESS, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(expr) } });
}

static s_Node parseCallExpression(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const s_Node& expr)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, ")"_fu, args);
    if (((expr.kind == "call"_fu) && (expr.flags & F_ACCESS)))
    {
        const s_Node& head = ([&]() -> const s_Node& { if (expr.items && (expr.items.size() == 1)) { const s_Node& _ = expr.items[0]; if (_) return _; } fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{}); }());
        args.unshift(head);
        return createCall(modid_0, _loc_0, (expr.value ? expr.value : fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{})), ((F_METHOD | argFlags) | (expr.flags & ~F_ACCESS)), args);
    };
    if (((expr.kind == "call"_fu) && (expr.flags & F_ID)))
        return createCall(modid_0, _loc_0, (expr.value ? expr.value : fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{})), (argFlags | (expr.flags & ~F_ID)), args);

    if (expr.kind == "typeparam"_fu)
        return createCall(modid_0, _loc_0, ("$"_fu + (expr.value ? expr.value : fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{}))), argFlags, args);

    return fail(fname_0, tokens_0, _idx_0, _loc_0, "TODO dynamic call"_fu);
}

static s_Node parseIndexExpression(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const s_Node& expr)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, "]"_fu, args);
    args.unshift(expr);
    return createCall(modid_0, _loc_0, "[]"_fu, argFlags, args);
}

static s_Node flattenIfSame(int modid_0, int& _loc_0, const fu_STR& kind, const s_Node& left, const s_Node& right)
{
    const fu_STR& k_left = left.kind;
    const fu_STR& k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(left), s_Node(right) } })));
    return make(modid_0, _loc_0, kind, items, 0, fu_STR{});
}

static s_Node createOr(int modid_0, int& _loc_0, const s_Node& left, const s_Node& right)
{
    return flattenIfSame(modid_0, _loc_0, "or"_fu, left, right);
}

static s_Node createAnd(int modid_0, int& _loc_0, const s_Node& left, const s_Node& right)
{
    return flattenIfSame(modid_0, _loc_0, "and"_fu, left, right);
}

static s_Node pipelineRight(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, const s_Node& left, s_Node&& right)
{
    if (right.kind != "call"_fu)
        return fail(fname_0, tokens_0, _idx_0, _loc_0, "Cannot pipeline: not a call expr."_fu);

    if (right.flags & F_METHOD)
        right.items.insert(1, left);
    else
        right.items.unshift(left);

    return std::move(right);
}

static s_Node pipelineLeft(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, s_Node&& left, const s_Node& right)
{
    if (left.kind != "call"_fu)
        return fail(fname_0, tokens_0, _idx_0, _loc_0, "Cannot pipeline: not a call expr."_fu);

    left.items.push(right);
    return std::move(left);
}

static s_Node typeAssert(int modid_0, int& _loc_0, const s_Node& actual, const s_Node& expect)
{
    return make(modid_0, _loc_0, "typeassert"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(actual), s_Node(expect) } }, 0, fu_STR{});
}

static s_Node tryParseBinary(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const s_Node& left, const fu_STR& op, const int p1)
{
    if (((p1 > _precedence_0) || ((p1 == _precedence_0) && !BINOP.RIGHT_TO_LEFT[p1])))
        return miss();

    _idx_0++;
    s_Node mid {};
    if (op == "?"_fu)
    {
        mid = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(_precedence_0), 0);
        consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ":"_fu);
    };
    s_Node right = parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(p1), 0);
    if (mid)
        return createIf(modid_0, _loc_0, left, mid, right);

    if (op == "||"_fu)
        return createOr(modid_0, _loc_0, left, right);

    if (op == "&&"_fu)
        return createAnd(modid_0, _loc_0, left, right);

    if (op == "|>"_fu)
        return pipelineRight(fname_0, tokens_0, _idx_0, _loc_0, left, s_Node(right));

    if (op == "<|"_fu)
        return pipelineLeft(fname_0, tokens_0, _idx_0, _loc_0, s_Node(left), right);

    if (op == "->"_fu)
        return typeAssert(modid_0, _loc_0, left, right);

    return createCall(modid_0, _loc_0, op, F_INFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { s_Node(left), s_Node(right) } });
}

static s_Node parseQualifierChain(const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, fu_VEC<fu_STR>& _imports_0, s_Node&& expr)
{
    if (((expr.kind != "call"_fu) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & F_ACCESS))) || (expr.flags & F_QUALIFIED)))
    {
        _idx_0--;
        fail(fname_0, tokens_0, _idx_0, _loc_0, fu_STR{});
    };
    expr.flags |= F_QUALIFIED;
    fu_STR path { expr.value };
    for (; ; )
    {
        fu_STR id = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value;
        if (!tryConsume(tokens_0, _idx_0, "op"_fu, "::"_fu))
        {
            path = registerImport(fname_0, _imports_0, fu_STR(path));
            expr.value = ((path + "\t"_fu) + id);
            return std::move(expr);
        };
        path += ("/"_fu + id);
    };
}

static s_Node tryParseExpressionTail(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const s_Node& head, const int mode)
{
    const s_Token& token = tokens_0[_idx_0++];
    if (token.kind == "op"_fu)
    {
        const fu_STR& v = token.value;
        if (v == ";"_fu)
            return ((void)_idx_0--, miss());

        if (v == "."_fu)
            return ((void)lint(fname_0, tokens_0, _idx_0, _loc_0, mode), parseAccessExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, head));

        if (v == "("_fu)
            return ((void)lint(fname_0, tokens_0, _idx_0, _loc_0, mode), parseCallExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, head));

        if (v == "["_fu)
            return ((void)lint(fname_0, tokens_0, _idx_0, _loc_0, mode), parseIndexExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, head));

        const int p1 = BINOP.PRECEDENCE[v];
        if (p1)
            return ((void)_idx_0--, tryParseBinary(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, head, v, p1));

        if (fu::has(POSTFIX, v))
            return createCall(modid_0, _loc_0, (((v == "++"_fu) || (v == "--"_fu)) ? (v + "postfix"_fu) : fu_STR(v)), F_POSTFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { s_Node(head) } });

        if (v == "::"_fu)
            return parseQualifierChain(fname_0, tokens_0, _idx_0, _loc_0, _imports_0, s_Node(head));

    };
    return ((void)_idx_0--, miss());
}

static s_Node parseExpression(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const int p1, const int mode)
{
    const int p0 = _precedence_0;
    const int loc0 = _loc_0;
    _precedence_0 = p1;
    _loc_0 = _idx_0;
    s_Node head = parseExpressionHead(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == "int"_fu) || (head.kind == "real"_fu))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        s_Node out {};
        while ((out = tryParseExpressionTail(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, head, mode_1)))
        {
            _loc_0 = _idx_0;
            head = out;
        };
    };
    _precedence_0 = p0;
    _loc_0 = loc0;
    return head;
}

static s_Node parseUnaryExpression(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const int mode)
{
    return parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(P_PREFIX_UNARY), mode);
}

static s_Node parseTypeAnnot(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    return parseUnaryExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, 0);
}

static s_Node tryPopTypeAnnot(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    return (tryConsume(tokens_0, _idx_0, "op"_fu, ":"_fu) ? parseTypeAnnot(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0) : miss());
}

static s_Node parseLet(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const bool xqmark)
{
    int flags = 0;
    if (tryConsume(tokens_0, _idx_0, "id"_fu, "using"_fu))
        flags |= F_USING;

    if (tryConsume(tokens_0, _idx_0, "id"_fu, "implicit"_fu))
        flags |= F_IMPLICIT;

    if (tryConsume(tokens_0, _idx_0, "id"_fu, "shadow"_fu))
        flags |= F_SHADOW;

    if (tryConsume(tokens_0, _idx_0, "id"_fu, "mut"_fu))
        flags |= F_MUT;

    if (tryConsume(tokens_0, _idx_0, "id"_fu, "ref"_fu))
        flags |= F_REF;

    fu_STR id = consume(fname_0, tokens_0, _idx_0, _loc_0, "id"_fu, fu::view<std::byte>{}).value;
    s_Token optional = ([&]() -> s_Token { if (xqmark) return tryConsume(tokens_0, _idx_0, "op"_fu, "?"_fu); else return s_Token{}; }());
    s_Token mustname = ([&]() -> s_Token { if (xqmark) return tryConsume(tokens_0, _idx_0, "op"_fu, "!"_fu); else return s_Token{}; }());
    s_Node type = tryPopTypeAnnot(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0);
    s_Node init = (optional ? createDefinit(modid_0, _loc_0) : ([&]() -> s_Node { if (tryConsume(tokens_0, _idx_0, "op"_fu, "="_fu)) return parseExpression(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, int(P_RESET), 0); else return s_Node{}; }()));
    if (mustname)
        flags |= F_MUSTNAME;

    return createLet(modid_0, _loc_0, id, flags, type, init);
}

static s_Node parseStructItem(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    s_Node member = parseLet(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, true);
    member.flags |= F_FIELD;
    consume(fname_0, tokens_0, _idx_0, _loc_0, "op"_fu, ";"_fu);
    return member;
}

static fu_VEC<s_Node> parseBlockLike(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0, const fu_STR& endKind, const fu_STR& endVal, const bool sTruct)
{
    const int line0 = tokens_0[_idx_0].line;
    const int col00 = _col0_0;
    fu_VEC<s_Node> items {};
    for (; ; )
    {
        const s_Token& token = tokens_0[_idx_0];
        if (((token.kind == endKind) && (token.value == endVal)))
        {
            _col0_0 = col00;
            _idx_0++;
            const int line1 = token.line;
            const int col1 = token.col;
            ((line1 == line0) || (col1 == _col0_0) || fail_Lint(fname_0, tokens_0, _idx_0, _loc_0, (((((((("Bad closing `"_fu + token.value) + "` indent, expecting "_fu) + (_col0_0 - 1)) + ", got "_fu) + (col1 - 1)) + ". Block starts on line "_fu) + line0) + "."_fu)));
            break;
        };
        _col0_0 = token.col;
        ((_col0_0 > col00) || fail_Lint(fname_0, tokens_0, _idx_0, _loc_0, (((("Bad indent, expecting more than "_fu + col00) + ". Block starts on line "_fu) + line0) + "."_fu)));
        s_Node expr = (sTruct ? parseStructItem(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0) : parseStatement(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0));
        ((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.flags & F_NODISCARD) || (expr.items.size() > 1) || fail_Lint(fname_0, tokens_0, _idx_0, _loc_0, "Orphan pure-looking expression."_fu));
        if (expr.kind != "empty"_fu)
            items.push(expr);

    };
    return items;
}

static s_Node parseRoot(int modid_0, const fu_STR& fname_0, const fu_VEC<s_Token>& tokens_0, int& _idx_0, int& _loc_0, int& _col0_0, int& _precedence_0, int& _fnDepth_0, int& _numReturns_0, int& _dollarAuto_0, fu_VEC<fu_STR>& _dollars_0, int& _anonFns_0, fu_VEC<fu_STR>& _imports_0)
{
    consume(fname_0, tokens_0, _idx_0, _loc_0, "sof"_fu, "sof"_fu);
    _loc_0 = _idx_0;
    s_Node out = make(modid_0, _loc_0, "root"_fu, parseBlockLike(modid_0, fname_0, tokens_0, _idx_0, _loc_0, _col0_0, _precedence_0, _fnDepth_0, _numReturns_0, _dollarAuto_0, _dollars_0, _anonFns_0, _imports_0, "eof"_fu, "eof"_fu, false), 0, fu_STR{});
    return out;
}

s_ParserOutput parse(const int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens)
{
    int _idx = 0;
    int _loc = 0;
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    int _numReturns = 0;
    int _dollarAuto = 0;
    fu_VEC<fu_STR> _dollars {};
    int _anonFns = 0;
    fu_VEC<fu_STR> _imports {};
    ((tokens[(tokens.size() - 1)].kind == "eof"_fu) || fail(fname, tokens, _idx, _loc, "Missing `eof` token."_fu));
    s_Node root = parseRoot(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(_imports) };
}

#endif
