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

                                #ifndef DEF_F_CLOSURE
                                #define DEF_F_CLOSURE
inline const int F_CLOSURE = (1 << 25);
                                #endif

                                #ifndef DEF_F_HAS_CLOSURE
                                #define DEF_F_HAS_CLOSURE
inline const int F_HAS_CLOSURE = (1 << 26);
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

static void binop(s_BINOP& out, int& precedence, bool& rightToLeft, const fu_VEC<fu_STR>& ops)
{
    precedence++;
    (out.RIGHT_TO_LEFT.upsert(precedence) = rightToLeft);
    for (int i = 0; (i < ops.size()); i++)
        (out.PRECEDENCE.upsert(ops[i]) = precedence);

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

[[noreturn]] static fu::never fail(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, fu_STR&& reason)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.line;
    const int c0 = loc.col;
    const int l1 = here.line;
    const int c1 = here.col;
    fu_STR addr = ((l1 == l0) ? ((("@"_fu + l1) + ":"_fu) + c1) : ((((((("@"_fu + l0) + ":"_fu) + c0) + ".."_fu) + l1) + ":"_fu) + c1));
    fu::fail(((((fname + " "_fu) + addr) + ":\n\t"_fu) + reason));
}

[[noreturn]] static fu::never fail_Lint(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, const fu_STR& reason)
{
    fail(fname, tokens, _idx, _loc, ("Lint: "_fu + reason));
}

static s_Token tryConsume(const fu_VEC<s_Token>& tokens, int& _idx, fu::view<std::byte> kind, fu::view<std::byte> value)
{
    const s_Token& token = tokens[_idx];
    if (((token.kind == kind) && (!value || (token.value == value))))
    {
        _idx++;
        return s_Token(token);
    };
    return s_Token{};
}

static s_Token consume(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, fu::view<std::byte> kind, fu::view<std::byte> value)
{
    const s_Token& token = tokens[_idx];
    if (((token.kind == kind) && (!value || (token.value == value))))
    {
        _idx++;
        return s_Token(token);
    };
    fail(fname, tokens, _idx, _loc, (((("Expected `"_fu + (value ? value : kind)) + "`, got `"_fu) + token.value) + "`."_fu));
}

static s_Node make(int modid, int& _loc, const fu_STR& kind, const fu_VEC<s_Node>& items, const int flags, const fu_STR& value)
{
    return s_Node { fu_STR(kind), int(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
}

static s_Node createLeaf(int modid, int& _loc, const fu_STR& kind, const fu_STR& value)
{
    return make(modid, _loc, kind, fu_VEC<s_Node>{}, 0, value);
}

static int parseArgsDecl(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, fu_VEC<s_Node>& outArgs, const fu_STR& endk, const fu_STR& endv)
{
    bool first = true;
    int outFlags = 0;
    fu_VEC<s_Node> implicit {};
    bool defaults = false;
    _dollarAuto++;
    for (; ; )
    {
        if (tryConsume(tokens, _idx, endk, endv))
        {
            break;
        };
        if (!first)
            consume(fname, tokens, _idx, _loc, "op"_fu, ","_fu);

        first = false;
        s_Node arg = parseLet(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, true);
        const bool untyped = !arg.items.mutref(LET_TYPE);
        if (arg.items.mutref(LET_INIT))
        {
            if ((arg.flags & F_IMPLICIT))
                fail(fname, tokens, _idx, _loc, "TODO default implicit arguments"_fu);

            defaults = true;
        }
        else if (defaults)
            fail(fname, tokens, _idx, _loc, "TODO non-trailing default arguments"_fu);
        else if (untyped)
            outFlags |= F_TEMPLATE;

        arg.flags |= F_ARG;
        if ((arg.flags & F_IMPLICIT))
            implicit.push(arg);
        else
            outArgs.push(arg);

    };
    _dollarAuto--;
    if (implicit)
    {
        for (int i = 0; (i < implicit.size()); i++)
            outArgs.push(implicit.mutref(i));

    };
    return outFlags;
}

static s_Node createBlock(int modid, int& _loc, const fu_VEC<s_Node>& items)
{
    return make(modid, _loc, "block"_fu, items, 0, fu_STR{});
}

static s_Node parseBlock(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    return createBlock(modid, _loc, parseBlockLike(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, "op"_fu, "}"_fu, false));
}

static s_Node parseEmpty(int modid, int& _loc)
{
    return make(modid, _loc, "empty"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});
}

static s_Node parseLabelledStatement(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Token label = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{});
    s_Node stmt = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    if ((stmt.kind == "loop"_fu))
    {
        (stmt.value && fail(fname, tokens, _idx, _loc, fu_STR{}));
        stmt.value = (label.value ? label.value : fail(fname, tokens, _idx, _loc, fu_STR{}));
        return stmt;
    };
    fail(fname, tokens, _idx, _loc, fu_STR{});
}

static s_Node createCall(int modid, int& _loc, const fu_STR& id, const int flags, const fu_VEC<s_Node>& args)
{
    return make(modid, _loc, "call"_fu, args, flags, id);
}

static s_Node createRead(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, const fu_STR& id)
{
    return createCall(modid, _loc, (id ? id : fail(fname, tokens, _idx, _loc, fu_STR{})), F_ID, fu_VEC<s_Node>{});
}

static s_Node createLet(int modid, int& _loc, const fu_STR& id, const int flags, const s_Node& type, const s_Node& init)
{
    return make(modid, _loc, "let"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { type, init } }, flags, id);
}

static s_Node parseLetStmt(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Node ret = parseLet(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, false);
    if (tryConsume(tokens, _idx, "id"_fu, "catch"_fu))
    {
        s_Node err = createLet(modid, _loc, consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value, 0, createRead(modid, fname, tokens, _idx, _loc, "string"_fu), s_Node{});
        s_Node cAtch = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
        return make(modid, _loc, "catch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { ret, err, cAtch } }, 0, fu_STR{});
    };
    consume(fname, tokens, _idx, _loc, "op"_fu, ";"_fu);
    return ret;
}

static s_Node parseStructDecl(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    fu_STR name = tryConsume(tokens, _idx, "id"_fu, fu::view<std::byte>{}).value;
    consume(fname, tokens, _idx, _loc, "op"_fu, "{"_fu);
    fu_VEC<s_Node> items = parseBlockLike(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, "op"_fu, "}"_fu, true);
    s_Node sTruct = make(modid, _loc, "struct"_fu, items, 0, name);
    return sTruct;
}

static s_Node parsePub(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    (_fnDepth && fail(fname, tokens, _idx, _loc, "Cannot pub from within a fn."_fu));
    s_Node out = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    out.flags |= F_PUB;
    ((out.flags & F_SHADOW) && fail(fname, tokens, _idx, _loc, "Cannot pub a shadow."_fu));
    return out;
}

static s_Node parseShadow(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Node out = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    out.flags |= F_SHADOW;
    ((out.flags & F_PUB) && fail(fname, tokens, _idx, _loc, "Cannot shadow a pub."_fu));
    return out;
}

static s_Node parseTypedef(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    fu_STR name = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value;
    consume(fname, tokens, _idx, _loc, "op"_fu, "="_fu);
    s_Node annot = parseTypeAnnot(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    consume(fname, tokens, _idx, _loc, "op"_fu, ";"_fu);
    return make(modid, _loc, "typedef"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { annot } }, 0, name);
}

static s_Node parseFixityDecl(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const int flags, const bool expr)
{
    consume(fname, tokens, _idx, _loc, "id"_fu, "fn"_fu);
    return parseFnDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(flags), expr);
}

static s_Node parseInlineDecl(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    const int flags = (F_INLINE | F_TEMPLATE);
    fu_STR v = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value;
    if ((v == "infix"_fu))
        return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, (flags | F_INFIX), bool{});

    if ((v == "prefix"_fu))
        return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, (flags | F_PREFIX), bool{});

    if ((v == "postfix"_fu))
        return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, (flags | F_POSTFIX), bool{});

    _idx--;
    return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, flags, bool{});
}

static s_Node createNot(int modid, int& _loc, const s_Node& expr)
{
    return make(modid, _loc, "!"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } }, 0, fu_STR{});
}

static s_Node createIf(int modid, int& _loc, const s_Node& cond, const s_Node& cons, const s_Node& alt)
{
    return make(modid, _loc, "if"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { cond, cons, alt } }, 0, fu_STR{});
}

static s_Node parseIf(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Token nOt = tryConsume(tokens, _idx, "op"_fu, "!"_fu);
    consume(fname, tokens, _idx, _loc, "op"_fu, "("_fu);
    s_Node cond = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(_precedence), 0);
    if (nOt)
        cond = createNot(modid, _loc, cond);

    consume(fname, tokens, _idx, _loc, "op"_fu, ")"_fu);
    s_Node cons = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    s_Node alt = ([&]() -> s_Node { if (tryConsume(tokens, _idx, "id"_fu, "else"_fu)) return parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports); else return s_Node{}; }());
    return createIf(modid, _loc, cond, cons, alt);
}

static s_Node createReturn(int modid, int& _loc, const s_Node& node)
{
    if (!node)
        return make(modid, _loc, "return"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});

    return make(modid, _loc, "return"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { node } }, 0, fu_STR{});
}

static s_Node parseExpressionStatement(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Node expr = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(P_RESET), 0);
    const s_Token& peek = tokens[_idx];
    if (((peek.kind == "op"_fu) && (peek.value == "}"_fu)))
        expr.flags |= F_NODISCARD;
    else if (((peek.kind == "op"_fu) && (peek.value == ";"_fu)))
        _idx++;
    else
        fail_Lint(fname, tokens, _idx, _loc, "Missing semicollon."_fu);

    return expr;
}

static s_Node parseReturn(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    ((_fnDepth > 0) || ((void)_idx--, fail(fname, tokens, _idx, _loc, fu_STR{})));
    _numReturns++;
    if (tryConsume(tokens, _idx, "op"_fu, ";"_fu))
        return createReturn(modid, _loc, s_Node{});

    return createReturn(modid, _loc, parseExpressionStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports));
}

static s_Node parseDefer(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    ((_fnDepth > 0) || ((void)_idx--, fail(fname, tokens, _idx, _loc, fu_STR{})));
    return make(modid, _loc, "defer"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports) } }, 0, fu_STR{});
}

static s_Node miss()
{
    return s_Node{};
}

static s_Node createLoop(int modid, int& _loc, const s_Node& init, const s_Node& cond, const s_Node& post, const s_Node& body, const s_Node& postcond)
{
    return make(modid, _loc, "loop"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<5> { init, cond, post, body, postcond } }, 0, fu_STR{});
}

static s_Node parseFor(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    consume(fname, tokens, _idx, _loc, "op"_fu, "("_fu);
    s_Node init = ([&]() -> s_Node { if (!tryConsume(tokens, _idx, "op"_fu, ";"_fu)) return parseLetStmt(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports); else return s_Node{}; }());
    s_Node cond = ([&]() -> s_Node { if (!tryConsume(tokens, _idx, "op"_fu, ";"_fu)) return parseExpressionStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports); else return s_Node{}; }());
    const s_Token& token = tokens[_idx];
    s_Node post = (((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseEmpty(modid, _loc) : parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(_precedence), 0));
    consume(fname, tokens, _idx, _loc, "op"_fu, ")"_fu);
    s_Node body = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    return createLoop(modid, _loc, init, cond, post, body, miss());
}

static s_Node parseWhile(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    consume(fname, tokens, _idx, _loc, "op"_fu, "("_fu);
    s_Node cond = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(_precedence), 0);
    consume(fname, tokens, _idx, _loc, "op"_fu, ")"_fu);
    s_Node body = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    return createLoop(modid, _loc, miss(), cond, miss(), body, miss());
}

static s_Node parseDoWhile(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Node body = parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    consume(fname, tokens, _idx, _loc, "id"_fu, "while"_fu);
    consume(fname, tokens, _idx, _loc, "op"_fu, "("_fu);
    s_Node cond = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(_precedence), 0);
    consume(fname, tokens, _idx, _loc, "op"_fu, ")"_fu);
    consume(fname, tokens, _idx, _loc, "op"_fu, ";"_fu);
    return createLoop(modid, _loc, miss(), miss(), miss(), body, cond);
}

static s_Node createJump(int modid, int& _loc, const fu_STR& kind, const fu_STR& label)
{
    return make(modid, _loc, kind, fu_VEC<s_Node>{}, 0, label);
}

static s_Node parseJump(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, const fu_STR& kind)
{
    s_Token label = ([&]() -> s_Token { if (tryConsume(tokens, _idx, "op"_fu, ":"_fu)) return consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}); else return s_Token{}; }());
    s_Node jump = createJump(modid, _loc, kind, label.value);
    consume(fname, tokens, _idx, _loc, "op"_fu, ";"_fu);
    return jump;
}

static fu_STR registerImport(const fu_STR& fname, fu_VEC<fu_STR>& _imports, fu_STR&& value)
{
    if (!path_ext(value))
        (value += ".fu"_fu);

    fu_STR dir = path_dirname(fname);
    value = (fu::lmatch(value, "."_fu) ? path_join(dir, value) : ((dir + std::byte('\v')) + value));
    if (!fu::has(_imports, value))
        _imports.push(value);

    return std::move(value);
}

static s_Node parseImport(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, fu_VEC<fu_STR>& _imports)
{
    fu_STR value = tryConsume(tokens, _idx, "id"_fu, fu::view<std::byte>{}).value;
    if (value)
    {
        while (tryConsume(tokens, _idx, "op"_fu, "::"_fu))
            (value += ("/"_fu + consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value));

    }
    else
        value = consume(fname, tokens, _idx, _loc, "str"_fu, fu::view<std::byte>{}).value;

    consume(fname, tokens, _idx, _loc, "op"_fu, ";"_fu);
    value = registerImport(fname, _imports, fu_STR(value));
    return make(modid, _loc, "import"_fu, fu_VEC<s_Node>{}, 0, value);
}

static s_Node parseStatement(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    const int loc0 = _loc;
    const s_Token& token = ([&]() -> const s_Token& { { const s_Token& _ = tokens[(_loc = _idx++)]; if (_) return _; } fail(fname, tokens, _idx, _loc, fu_STR{}); }());
    if ((token.kind == "op"_fu))
    {
        const fu_STR& v = token.value;
        if ((v == "{"_fu))
            return parseBlock(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

        if ((v == ";"_fu))
            return parseEmpty(modid, _loc);

        if ((v == ":"_fu))
            return parseLabelledStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

    }
    else if ((token.kind == "id"_fu))
    {
        const fu_STR& v = token.value;
        const s_Token& peek = tokens[_idx];
        if ((!_fnDepth || (peek.kind == "id"_fu)))
        {
            if ((v == "let"_fu))
                return parseLetStmt(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "mut"_fu))
                return ((void)_idx--, parseLetStmt(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports));

            if ((v == "ref"_fu))
                return ((void)_idx--, parseLetStmt(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports));

            if ((v == "struct"_fu))
                return parseStructDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "pub"_fu))
                return parsePub(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "shadow"_fu))
                return parseShadow(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "type"_fu))
                return parseTypedef(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "typedef"_fu))
                return parseTypedef(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "fn"_fu))
                return parseFnDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, 0, bool{});

            if ((v == "inline"_fu))
                return parseInlineDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "infix"_fu))
                return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, F_INFIX, bool{});

            if ((v == "prefix"_fu))
                return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, F_PREFIX, bool{});

            if ((v == "postfix"_fu))
                return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, F_POSTFIX, bool{});

        };
        if (((peek.kind == "op"_fu) && (peek.value == "{"_fu)))
        {
            if ((v == "struct"_fu))
                return parseStructDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

        };
        if (_fnDepth)
        {
            if ((v == "if"_fu))
                return parseIf(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "return"_fu))
                return parseReturn(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "defer"_fu))
                return parseDefer(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "for"_fu))
                return parseFor(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "while"_fu))
                return parseWhile(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "do"_fu))
                return parseDoWhile(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "break"_fu))
                return parseJump(modid, fname, tokens, _idx, _loc, "break"_fu);

            if ((v == "continue"_fu))
                return parseJump(modid, fname, tokens, _idx, _loc, "continue"_fu);

        };
        if (((v == "import"_fu) && ((peek.kind == "id"_fu) || (peek.kind == "str"_fu))))
            return parseImport(modid, fname, tokens, _idx, _loc, _imports);

    };
    _idx--;
    _loc = loc0;
    return parseExpressionStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
}

static s_Node parseFnBodyBranch(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const bool expr)
{
    tryConsume(tokens, _idx, "op"_fu, "="_fu);
    s_Node body = (expr ? parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(_precedence), 0) : parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports));
    if ((body.kind == "block"_fu))
        return body;

    if ((body.kind == "return"_fu))
        return createBlock(modid, _loc, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { body } });

    _numReturns++;
    if (((body.kind == "call"_fu) && (body.value == "__native"_fu)))
        return body;

    return createBlock(modid, _loc, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { createReturn(modid, _loc, body) } });
}

static int parseFnBodyOrPattern(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, fu_VEC<s_Node>& out_push_body, const bool expr)
{
    int flags = 0;
    s_Node body {};
    if ((!expr && tryConsume(tokens, _idx, "id"_fu, "case"_fu)))
    {
        fu_VEC<s_Node> branches {};
        flags |= F_PATTERN;
        do
        {
            s_Node cond = parseUnaryExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, 0);
            s_Node type = tryPopTypeAnnot(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
            s_Node cons = parseFnBodyBranch(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, bool{});
            branches.push(make(modid, _loc, "fnbranch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { cond, type, cons } }, 0, fu_STR{}));
        }
        while (tryConsume(tokens, _idx, "id"_fu, "case"_fu));
        body = make(modid, _loc, "pattern"_fu, branches, 0, fu_STR{});
    }
    else
        body = parseFnBodyBranch(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, expr);

    out_push_body.push(body);
    return flags;
}

static s_Node parseFnDecl_cont(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const fu_STR& name, int flags, const bool expr, const fu_STR& endv)
{
    fu_VEC<s_Node> items {};
    _fnDepth++;
    fu_VEC<fu_STR> dollars0 { _dollars };
    const int numReturns0 = _numReturns;
    flags |= parseArgsDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, items, "op"_fu, endv);
    s_Node type = tryPopTypeAnnot(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    const int retIdx = items.size();
    items.push(type);
    flags |= parseFnBodyOrPattern(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, items, expr);
    if ((!type && (_numReturns == numReturns0)))
        items.mutref(retIdx) = (type = createRead(modid, fname, tokens, _idx, _loc, "void"_fu));

    if (((name == "main"_fu) && (_fnDepth == 1)))
    {
        if (!type)
            items.mutref(retIdx) = (type = createRead(modid, fname, tokens, _idx, _loc, "i32"_fu));
        else if (((type.kind != "call"_fu) || (type.value != "i32"_fu) || type.items.size()))
            fail(fname, tokens, _idx, _loc, "fn main() must return i32."_fu);

        flags |= F_PUB;
    };
    if ((_dollars.size() > dollars0.size()))
        flags |= F_TEMPLATE;

    _fnDepth--;
    _dollars = dollars0;
    _numReturns = numReturns0;
    return make(modid, _loc, "fn"_fu, items, flags, name);
}

static s_Node parseFnDecl(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, int flags, const bool expr)
{
    fu_STR name = tryConsume(tokens, _idx, "id"_fu, fu::view<std::byte>{}).value;
    if (!name)
    {
        const int postfix = (flags & F_POSTFIX);
        name = consume(fname, tokens, _idx, _loc, "op"_fu, fu::view<std::byte>{}).value;
        if (postfix)
        {
            ((name == "++"_fu) || (name == "--"_fu) || fail(fname, tokens, _idx, _loc, (("No such postfix operator: `"_fu + name) + "`."_fu)));
            (name += "postfix"_fu);
        }
        else if ((flags & F_INFIX))
        {
            (fu::has(BINOP.PRECEDENCE, name) || fail(fname, tokens, _idx, _loc, (("No such infix operator: `"_fu + name) + "`."_fu)));
        }
        else if ((flags & F_PREFIX))
        {
            (fu::has(PREFIX, name) || fail(fname, tokens, _idx, _loc, (("No such prefix operator: `"_fu + name) + "`."_fu)));
        };
        flags &= ~(F_INFIX | F_PREFIX);
        flags |= F_OPERATOR;
    }
    else if ((flags & ((F_INFIX | F_PREFIX) | F_POSTFIX)))
        fail(fname, tokens, _idx, _loc, (("Not an operator: `"_fu + name) + "`."_fu));

    if (!expr)
        consume(fname, tokens, _idx, _loc, "op"_fu, "("_fu);
    else if (!tryConsume(tokens, _idx, "op"_fu, "("_fu))
        return make(modid, _loc, "addroffn"_fu, fu_VEC<s_Node>{}, flags, name);

    return parseFnDecl_cont(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, name, int(flags), expr, ")"_fu);
}

static s_Node parseParens(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Node out = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(P_RESET), 0);
    consume(fname, tokens, _idx, _loc, "op"_fu, ")"_fu);
    return out;
}

static fu_STR getAutoName(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, const s_Node& expr)
{
    if (((expr.kind == "call"_fu) && hasIdentifierChars(expr.value)))
        return fu_STR(expr.value);

    if (expr.items)
        return getAutoName(fname, tokens, _idx, _loc, expr.items[0]);

    fail(fname, tokens, _idx, _loc, "Can't :auto_name this expression."_fu);
}

static s_Node createLabel(int modid, int& _loc, const fu_STR& id, const s_Node& value)
{
    return make(modid, _loc, "label"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { value } }, 0, id);
}

static int parseCallArgs(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const fu_STR& endop, fu_VEC<s_Node>& out_args)
{
    int flags = 0;
    bool first = true;
    for (; ; )
    {
        if (tryConsume(tokens, _idx, "op"_fu, endop))
        {
            break;
        };
        if (!first)
        {
            consume(fname, tokens, _idx, _loc, "op"_fu, ","_fu);
            if (tryConsume(tokens, _idx, "op"_fu, endop))
            {
                break;
            };
        };
        first = false;
        fu_STR name {};
        bool autoName = false;
        if (((tokens[_idx].kind == "id"_fu) && (tokens[(_idx + 1)].kind == "op"_fu) && (tokens[(_idx + 1)].value == ":"_fu)))
        {
            name = tokens[_idx].value;
            _idx += 2;
            flags |= F_NAMED_ARGS;
        }
        else if (((tokens[_idx].kind == "op"_fu) && (tokens[_idx].value == ":"_fu)))
        {
            autoName = true;
            _idx++;
            flags |= F_NAMED_ARGS;
        };
        s_Node expr = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(P_RESET), 0);
        if (autoName)
            name = getAutoName(fname, tokens, _idx, _loc, expr);

        out_args.push((name ? createLabel(modid, _loc, name, expr) : s_Node(expr)));
    };
    return flags;
}

static s_Node createArrayLiteral(int modid, int& _loc, const int argFlags, const fu_VEC<s_Node>& items)
{
    return make(modid, _loc, "arrlit"_fu, items, argFlags, fu_STR{});
}

static s_Node parseArrayLiteral(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, "]"_fu, args);
    return createArrayLiteral(modid, _loc, argFlags, args);
}

static s_Node createTypeParam(int modid, int& _loc, const fu_STR& value)
{
    return make(modid, _loc, "typeparam"_fu, fu_VEC<s_Node>{}, 0, value);
}

static s_Node parseTypeParam(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _dollarAuto, fu_VEC<fu_STR>& _dollars)
{
    fu_STR value = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value;
    if ((!fu::has(_dollars, value) && _dollarAuto))
        _dollars.push(value);

    return createTypeParam(modid, _loc, value);
}

static s_Node createTypeTag(int modid, int& _loc, const fu_STR& value)
{
    return make(modid, _loc, "typetag"_fu, fu_VEC<s_Node>{}, 0, value);
}

static s_Node parseTypeTag(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc)
{
    return createTypeTag(modid, _loc, consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value);
}

static s_Node parseLambda(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    fu_STR name = ((("l_"_fu + modid) + "_"_fu) + _anonFns++);
    return parseFnDecl_cont(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, name, (F_INLINE | F_TEMPLATE), true, "|"_fu);
}

static s_Node createDefinit(int modid, int& _loc)
{
    return make(modid, _loc, "definit"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});
}

                                #ifndef DEFt_only_y0NH
                                #define DEFt_only_y0NH
inline std::byte only_y0NH(const fu_STR& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static s_Node createPrefix(int modid, int& _loc, const fu_STR& op, s_Node&& expr)
{
    if ((op == "!"_fu))
        return createNot(modid, _loc, expr);

    if ((((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == "int"_fu) || (expr.kind == "real"_fu))))
    {
        const std::byte sign = expr.value[0];
        if (((sign == std::byte('+')) || (sign == std::byte('-'))))
            expr.value.mutref(0) = ((sign == only_y0NH(op)) ? std::byte('+') : std::byte('-'));
        else
            expr.value = (op + expr.value);

        return std::move(expr);
    };
    return createCall(modid, _loc, op, F_PREFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } });
}

static s_Node parsePrefix(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, fu_STR&& op)
{
    (fu::has(PREFIX, op) || ((void)_idx--, fail(fname, tokens, _idx, _loc, fu_STR{})));
    if (((op == "&"_fu) && tryConsume(tokens, _idx, "id"_fu, "mut"_fu)))
        op = "&mut"_fu;

    const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
    return createPrefix(modid, _loc, op, parseUnaryExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, mode));
}

static s_Node parseExpressionHead(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    const s_Token& token = tokens[_idx++];
    
    {
        const fu_STR& k = token.kind;
        const fu_STR& v = token.value;
        if (((k == "int"_fu) || (k == "real"_fu) || (k == "str"_fu) || (k == "char"_fu)))
            return createLeaf(modid, _loc, k, v);

        if ((k == "id"_fu))
        {
            const s_Token& peek = tokens[_idx];
            if ((peek.kind == "id"_fu))
            {
                if ((v == "fn"_fu))
                    return parseFnDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, 0, true);

                if ((v == "infix"_fu))
                    return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, F_INFIX, true);

                if ((v == "prefix"_fu))
                    return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, F_PREFIX, true);

                if ((v == "postfix"_fu))
                    return parseFixityDecl(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, F_POSTFIX, true);

            };
            return createRead(modid, fname, tokens, _idx, _loc, v);
        };
        if ((k == "op"_fu))
        {
            if ((v == "("_fu))
                return parseParens(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "{"_fu))
                return parseBlock(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "["_fu))
                return parseArrayLiteral(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "$"_fu))
                return parseTypeParam(modid, fname, tokens, _idx, _loc, _dollarAuto, _dollars);

            if ((v == "@"_fu))
                return parseTypeTag(modid, fname, tokens, _idx, _loc);

            if ((v == "|"_fu))
                return parseLambda(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);

            if ((v == "[]"_fu))
                return createDefinit(modid, _loc);

            if ((v == "::"_fu))
            {
                fu_STR id = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value;
                _idx -= 2;
                return createRead(modid, fname, tokens, _idx, _loc, id);
            };
            return parsePrefix(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, fu_STR(v));
        };
    };
    _idx--;
    fail(fname, tokens, _idx, _loc, fu_STR{});
}

static int lint(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int mode)
{
    return ([&]() -> int { { int _ = (mode & M_LINT_UNARY_PRECEDENCE); if (!_) return _; } fail_Lint(fname, tokens, _idx, _loc, (("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu)); }());
}

static s_Node parseAccessExpression(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, const s_Node& expr)
{
    s_Token id = tryConsume(tokens, _idx, "id"_fu, fu::view<std::byte>{});
    if (!id)
    {
        consume(fname, tokens, _idx, _loc, "op"_fu, "::"_fu);
        id = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{});
        _idx -= 2;
    };
    return createCall(modid, _loc, id.value, F_ACCESS, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } });
}

static s_Node parseCallExpression(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const s_Node& expr)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, ")"_fu, args);
    if (((expr.kind == "call"_fu) && (expr.flags & F_ACCESS)))
    {
        const s_Node& head = ([&]() -> const s_Node& { if (expr.items && (expr.items.size() == 1)) { const s_Node& _ = expr.items[0]; if (_) return _; } fail(fname, tokens, _idx, _loc, fu_STR{}); }());
        args.unshift(head);
        return createCall(modid, _loc, (expr.value ? expr.value : fail(fname, tokens, _idx, _loc, fu_STR{})), ((F_METHOD | argFlags) | (expr.flags & ~F_ACCESS)), args);
    };
    if (((expr.kind == "call"_fu) && (expr.flags & F_ID)))
        return createCall(modid, _loc, (expr.value ? expr.value : fail(fname, tokens, _idx, _loc, fu_STR{})), (argFlags | (expr.flags & ~F_ID)), args);

    if ((expr.kind == "typeparam"_fu))
        return createCall(modid, _loc, ("$"_fu + (expr.value ? expr.value : fail(fname, tokens, _idx, _loc, fu_STR{}))), argFlags, args);

    fail(fname, tokens, _idx, _loc, "TODO dynamic call"_fu);
}

static s_Node parseIndexExpression(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const s_Node& expr)
{
    fu_VEC<s_Node> args {};
    const int argFlags = parseCallArgs(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, "]"_fu, args);
    args.unshift(expr);
    return createCall(modid, _loc, "[]"_fu, argFlags, args);
}

static s_Node flattenIfSame(int modid, int& _loc, const fu_STR& kind, const s_Node& left, const s_Node& right)
{
    const fu_STR& k_left = left.kind;
    const fu_STR& k_right = right.kind;
    fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { left, right } })));
    return make(modid, _loc, kind, items, 0, fu_STR{});
}

static s_Node createOr(int modid, int& _loc, const s_Node& left, const s_Node& right)
{
    return flattenIfSame(modid, _loc, "or"_fu, left, right);
}

static s_Node createAnd(int modid, int& _loc, const s_Node& left, const s_Node& right)
{
    return flattenIfSame(modid, _loc, "and"_fu, left, right);
}

static s_Node pipelineRight(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, const s_Node& left, s_Node&& right)
{
    if ((right.kind != "call"_fu))
        fail(fname, tokens, _idx, _loc, "Cannot pipeline: not a call expr."_fu);

    if ((right.flags & F_METHOD))
        right.items.insert(1, left);
    else
        right.items.unshift(left);

    return std::move(right);
}

static s_Node pipelineLeft(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, s_Node&& left, const s_Node& right)
{
    if ((left.kind != "call"_fu))
        fail(fname, tokens, _idx, _loc, "Cannot pipeline: not a call expr."_fu);

    left.items.push(right);
    return std::move(left);
}

static s_Node typeAssert(int modid, int& _loc, const s_Node& actual, const s_Node& expect)
{
    return make(modid, _loc, "typeassert"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { actual, expect } }, 0, fu_STR{});
}

static s_Node tryParseBinary(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const s_Node& left, const fu_STR& op, const int p1)
{
    if (((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1])))
        return miss();

    _idx++;
    s_Node mid {};
    if ((op == "?"_fu))
    {
        mid = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(_precedence), 0);
        consume(fname, tokens, _idx, _loc, "op"_fu, ":"_fu);
    };
    s_Node right = parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(p1), 0);
    if (mid)
        return createIf(modid, _loc, left, mid, right);

    if ((op == "||"_fu))
        return createOr(modid, _loc, left, right);

    if ((op == "&&"_fu))
        return createAnd(modid, _loc, left, right);

    if ((op == "|>"_fu))
        return pipelineRight(fname, tokens, _idx, _loc, left, s_Node(right));

    if ((op == "<|"_fu))
        return pipelineLeft(fname, tokens, _idx, _loc, s_Node(left), right);

    if ((op == "->"_fu))
        return typeAssert(modid, _loc, left, right);

    return createCall(modid, _loc, op, F_INFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { left, right } });
}

static s_Node parseQualifierChain(const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, fu_VEC<fu_STR>& _imports, s_Node&& expr)
{
    if (((expr.kind != "call"_fu) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & F_ACCESS))) || (expr.flags & F_QUALIFIED)))
    {
        _idx--;
        fail(fname, tokens, _idx, _loc, fu_STR{});
    };
    expr.flags |= F_QUALIFIED;
    fu_STR path { expr.value };
    for (; ; )
    {
        fu_STR id = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value;
        if (!tryConsume(tokens, _idx, "op"_fu, "::"_fu))
        {
            path = registerImport(fname, _imports, fu_STR(path));
            expr.value = ((path + "\t"_fu) + id);
            return std::move(expr);
        };
        (path += ("/"_fu + id));
    };
}

static s_Node tryParseExpressionTail(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const s_Node& head, const int mode)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == "op"_fu))
    {
        const fu_STR& v = token.value;
        if ((v == ";"_fu))
            return ((void)_idx--, miss());

        if ((v == "."_fu))
            return ((void)lint(fname, tokens, _idx, _loc, mode), parseAccessExpression(modid, fname, tokens, _idx, _loc, head));

        if ((v == "("_fu))
            return ((void)lint(fname, tokens, _idx, _loc, mode), parseCallExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, head));

        if ((v == "["_fu))
            return ((void)lint(fname, tokens, _idx, _loc, mode), parseIndexExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, head));

        const int p1 = BINOP.PRECEDENCE[v];
        if (p1)
            return ((void)_idx--, tryParseBinary(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, head, v, p1));

        if (fu::has(POSTFIX, v))
            return createCall(modid, _loc, (((v == "++"_fu) || (v == "--"_fu)) ? (v + "postfix"_fu) : fu_STR(v)), F_POSTFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { head } });

        if ((v == "::"_fu))
            return parseQualifierChain(fname, tokens, _idx, _loc, _imports, s_Node(head));

    };
    return ((void)_idx--, miss());
}

static s_Node parseExpression(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const int p1, const int mode)
{
    const int p0 = _precedence;
    const int loc0 = _loc;
    _precedence = p1;
    _loc = _idx;
    s_Node head = parseExpressionHead(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == "int"_fu) || (head.kind == "real"_fu))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
        s_Node out {};
        while ((out = tryParseExpressionTail(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, head, mode_1)))
        {
            _loc = _idx;
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc0;
    return head;
}

static s_Node parseUnaryExpression(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const int mode)
{
    return parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(P_PREFIX_UNARY), mode);
}

static s_Node parseTypeAnnot(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    return parseUnaryExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, 0);
}

static s_Node tryPopTypeAnnot(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    return (tryConsume(tokens, _idx, "op"_fu, ":"_fu) ? parseTypeAnnot(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports) : miss());
}

static s_Node parseLet(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const bool xqmark)
{
    int flags = 0;
    if (tryConsume(tokens, _idx, "id"_fu, "using"_fu))
        flags |= F_USING;

    if (tryConsume(tokens, _idx, "id"_fu, "implicit"_fu))
        flags |= F_IMPLICIT;

    if (tryConsume(tokens, _idx, "id"_fu, "shadow"_fu))
        flags |= F_SHADOW;

    if (tryConsume(tokens, _idx, "id"_fu, "mut"_fu))
        flags |= F_MUT;

    if (tryConsume(tokens, _idx, "id"_fu, "ref"_fu))
        flags |= F_REF;

    fu_STR id = consume(fname, tokens, _idx, _loc, "id"_fu, fu::view<std::byte>{}).value;
    s_Token optional = ([&]() -> s_Token { if (xqmark) return tryConsume(tokens, _idx, "op"_fu, "?"_fu); else return s_Token{}; }());
    s_Token mustname = ([&]() -> s_Token { if (xqmark) return tryConsume(tokens, _idx, "op"_fu, "!"_fu); else return s_Token{}; }());
    s_Node type = tryPopTypeAnnot(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports);
    s_Node init = (optional ? createDefinit(modid, _loc) : ([&]() -> s_Node { if (tryConsume(tokens, _idx, "op"_fu, "="_fu)) return parseExpression(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, int(P_RESET), 0); else return s_Node{}; }()));
    if (mustname)
        flags |= F_MUSTNAME;

    return createLet(modid, _loc, id, flags, type, init);
}

static s_Node parseStructItem(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    s_Node member = parseLet(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, true);
    member.flags |= F_FIELD;
    consume(fname, tokens, _idx, _loc, "op"_fu, ";"_fu);
    return member;
}

static fu_VEC<s_Node> parseBlockLike(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports, const fu_STR& endKind, const fu_STR& endVal, const bool sTruct)
{
    const int line0 = tokens[_idx].line;
    const int col00 = _col0;
    fu_VEC<s_Node> items {};
    for (; ; )
    {
        const s_Token& token = tokens[_idx];
        if (((token.kind == endKind) && (token.value == endVal)))
        {
            _col0 = col00;
            _idx++;
            const int line1 = token.line;
            const int col1 = token.col;
            ((line1 == line0) || (col1 == _col0) || fail_Lint(fname, tokens, _idx, _loc, (((((((("Bad closing `"_fu + token.value) + "` indent, expecting "_fu) + (_col0 - 1)) + ", got "_fu) + (col1 - 1)) + ". Block starts on line "_fu) + line0) + "."_fu)));
            break;
        };
        _col0 = token.col;
        ((_col0 > col00) || fail_Lint(fname, tokens, _idx, _loc, (((("Bad indent, expecting more than "_fu + col00) + ". Block starts on line "_fu) + line0) + "."_fu)));
        s_Node expr = (sTruct ? parseStructItem(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports) : parseStatement(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports));
        ((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.flags & F_NODISCARD) || (expr.items.size() > 1) || fail_Lint(fname, tokens, _idx, _loc, "Orphan pure-looking expression."_fu));
        if ((expr.kind != "empty"_fu))
            items.push(expr);

    };
    return items;
}

static s_Node parseRoot(int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _numReturns, int& _dollarAuto, fu_VEC<fu_STR>& _dollars, int& _anonFns, fu_VEC<fu_STR>& _imports)
{
    _loc = _idx;
    s_Node out = make(modid, _loc, "root"_fu, parseBlockLike(modid, fname, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _numReturns, _dollarAuto, _dollars, _anonFns, _imports, "eof"_fu, "eof"_fu, false), 0, fu_STR{});
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
