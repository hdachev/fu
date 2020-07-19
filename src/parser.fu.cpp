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
#include <utility>

struct s_Token;
struct s_BINOP;
struct s_Node;
struct s_ParserOutput;
struct s_TokenIdx;
fu_STR path_dirname(const fu_STR&);
fu_STR path_join(const fu_STR&, const fu_STR&);
bool hasIdentifierChars(const fu_STR&);
fu_STR path_ext(const fu_STR&);
inline std::byte only_y0NH(const fu_STR&);
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

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_only_y0NH
                                #define DEFt_only_y0NH
inline std::byte only_y0NH(const fu_STR& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

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

                                #ifndef DEF_F_INDEX
                                #define DEF_F_INDEX
inline const int F_INDEX = (1 << 6);
                                #endif

                                #ifndef DEF_F_QUALIFIED
                                #define DEF_F_QUALIFIED
inline const int F_QUALIFIED = (1 << 7);
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

                                #ifndef DEF_F_UNTYPED_ARGS
                                #define DEF_F_UNTYPED_ARGS
inline const int F_UNTYPED_ARGS = (1 << 24);
                                #endif

                                #ifndef DEF_F_NAMED_ARGS
                                #define DEF_F_NAMED_ARGS
inline const int F_NAMED_ARGS = (1 << 25);
                                #endif

                                #ifndef DEF_F_FULLY_TYPED
                                #define DEF_F_FULLY_TYPED
inline const int F_FULLY_TYPED = (1 << 26);
                                #endif

                                #ifndef DEF_F_CLOSURE
                                #define DEF_F_CLOSURE
inline const int F_CLOSURE = (1 << 27);
                                #endif

                                #ifndef DEF_F_HAS_CLOSURE
                                #define DEF_F_HAS_CLOSURE
inline const int F_HAS_CLOSURE = (1 << 28);
                                #endif

                                #ifndef DEF_F_PATTERN
                                #define DEF_F_PATTERN
inline const int F_PATTERN = (1 << 29);
                                #endif

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline const int F_TEMPLATE = (1 << 30);
                                #endif

                                #ifndef DEF_F_DESTRUCTOR
                                #define DEF_F_DESTRUCTOR
inline const int F_DESTRUCTOR = (1 << 31);
                                #endif

static const int P_RESET = 1000;

static const int P_PREFIX_UNARY = 3;

static const fu_VEC<fu_STR> PREFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<10> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static const fu_VEC<fu_STR> POSTFIX = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "++"_fu, "--"_fu, "[]"_fu } };

namespace {

struct sf_setupOperators
{
    s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    void binop(const fu_VEC<fu_STR>& ops)
    {
        precedence++;
        (out.RIGHT_TO_LEFT.upsert(precedence) = rightToLeft);
        for (int i = 0; (i < ops.size()); i++)
            (out.PRECEDENCE.upsert(ops[i]) = precedence);

    };
    s_BINOP setupOperators()
    {
        rightToLeft = false;
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "*"_fu, "/"_fu, "%"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "+"_fu, "-"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "<<"_fu, ">>"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "&"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "^"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "|"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "~"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "<=>"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "in"_fu, "is"_fu, "as"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<4> { "<"_fu, "<="_fu, ">"_fu, ">="_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<2> { "=="_fu, "!="_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "->"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "&&"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "||"_fu } });
        rightToLeft = true;
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "?"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<16> { "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "<|"_fu } });
        rightToLeft = false;
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "|>"_fu } });
        binop(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { ","_fu } });
        return out;
    };
};

} // namespace

s_BINOP setupOperators()
{
    return (sf_setupOperators {  }).setupOperators();
}


static const s_BINOP BINOP = setupOperators();

static const int P_COMMA = ([]() -> int { { int _ = BINOP.PRECEDENCE[","_fu]; if (_) return _; } fu::fail(); }());

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

namespace {

struct sf_parse
{
    const int modid;
    const fu_STR& fname;
    const fu_VEC<s_Token>& tokens;
    int _idx = 0;
    int _loc = 0;
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    int _numReturns = 0;
    fu_VEC<fu_STR> _dollars {};
    fu_VEC<fu_STR> _imports {};
    fu_STR registerImport(fu_STR&& value)
    {
        if (!path_ext(value))
            (value += ".fu"_fu);

        fu_STR dir = path_dirname(fname);
        value = (fu::lmatch(value, "."_fu) ? path_join(dir, value) : ((dir + std::byte('\v')) + value));
        if (!fu::has(_imports, value))
            _imports.push(value);

        return std::move(value);
    };
    [[noreturn]] fu::never fail(fu_STR&& reason)
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
    };
    [[noreturn]] fu::never fail_Lint(const fu_STR& reason)
    {
        fail(("Lint: "_fu + reason));
    };
    s_Node make(const fu_STR& kind, const fu_VEC<s_Node>& items, const int flags, const fu_STR& value)
    {
        return s_Node { fu_STR(kind), int(flags), fu_STR(value), fu_VEC<s_Node>(items), s_TokenIdx { int(modid), int(_loc) } };
    };
    s_Node miss()
    {
        return s_Node{};
    };
    s_Token consume(const fu_STR& kind, const fu_STR& value)
    {
        const s_Token& token = tokens[_idx];
        if (((token.kind == kind) && (!value || (token.value == value))))
        {
            _idx++;
            return s_Token(token);
        };
        fail((((("Expected `"_fu + (value ? value : kind)) + "`, got `"_fu) + token.value) + "`."_fu));
    };
    s_Token tryConsume(const fu_STR& kind, const fu_STR& value)
    {
        const s_Token& token = tokens[_idx];
        if (((token.kind == kind) && (!value || (token.value == value))))
        {
            _idx++;
            return s_Token(token);
        };
        return s_Token{};
    };
    s_Node parseRoot()
    {
        _loc = _idx;
        s_Node out = make("root"_fu, parseBlockLike("eof"_fu, "eof"_fu, fu_STR{}), 0, fu_STR{});
        return out;
    };
    s_Node parseBlock()
    {
        return createBlock(parseBlockLike("op"_fu, "}"_fu, fu_STR{}));
    };
    s_Node createBlock(const fu_VEC<s_Node>& items)
    {
        return make("block"_fu, items, 0, fu_STR{});
    };
    s_Node parseTypedef()
    {
        fu_STR name = consume("id"_fu, fu_STR{}).value;
        consume("op"_fu, "="_fu);
        s_Node annot = parseTypeAnnot();
        consume("op"_fu, ";"_fu);
        return make("typedef"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { annot } }, 0, name);
    };
    s_Node parseStructDecl()
    {
        fu_STR name = consume("id"_fu, fu_STR{}).value;
        fu_VEC<s_Node> templateParams {};
        const int templateFlags = ([&]() -> int { if (tryConsume("op"_fu, "("_fu)) return parseArgsDecl(templateParams, "op"_fu, ")"_fu); else return int{}; }());
        consume("op"_fu, "{"_fu);
        fu_VEC<s_Node> items = parseBlockLike("op"_fu, "}"_fu, "struct"_fu);
        s_Node sTruct = make("struct"_fu, items, 0, name);
        if (templateParams)
        {
            (templateParams += sTruct);
            return make("typector"_fu, templateParams, templateFlags, fu_STR{});
        };
        return sTruct;
    };
    s_Node parseStructItem()
    {
        s_Node member = parseLet(true);
        member.flags |= F_FIELD;
        consume("op"_fu, ";"_fu);
        return member;
    };
    fu_VEC<s_Node> parseBlockLike(const fu_STR& endKind, const fu_STR& endVal, const fu_STR& mode)
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
                ((line1 == line0) || (col1 == _col0) || fail_Lint((((((((("Bad closing `"_fu + token.value) + "` indent, expecting "_fu) + (_col0 - 1)) + ", got "_fu) + (col1 - 1)) + ". Block starts on line "_fu) + line0) + "."_fu)));
                break;
            };
            _col0 = token.col;
            ((_col0 > col00) || fail_Lint((((("Bad indent, expecting more than "_fu + col00) + ". Block starts on line "_fu) + line0) + "."_fu)));
            s_Node expr = (mode ? parseStructItem() : parseStatement());
            ((expr.kind != "call"_fu) || ((expr.flags & (F_ID | F_ACCESS)) == 0) || (expr.items.size() > 1) || fail_Lint("Orphan pure-looking expression."_fu));
            if ((expr.kind != "empty"_fu))
                items.push(expr);

        };
        return items;
    };
    s_Node parsePub()
    {
        (_fnDepth && fail("Cannot publish from within a fn."_fu));
        s_Node out = parseStatement();
        out.flags |= F_PUB;
        return out;
    };
    s_Node parseStatement()
    {
        const int loc0 = _loc;
        const s_Token& token = ([&]() -> const s_Token& { { const s_Token& _ = tokens[(_loc = _idx++)]; if (_) return _; } fail(fu_STR{}); }());
        if ((token.kind == "op"_fu))
        {
            const fu_STR& v = token.value;
            if ((v == "{"_fu))
                return parseBlock();

            if ((v == ";"_fu))
                return parseEmpty();

            if ((v == ":"_fu))
                return parseLabelledStatement();

        }
        else if ((token.kind == "id"_fu))
        {
            const fu_STR& v = token.value;
            const s_Token& peek = tokens[_idx];
            if ((!_fnDepth || (peek.kind == "id"_fu)))
            {
                if ((v == "let"_fu))
                    return parseLetStmt();

                if ((v == "mut"_fu))
                    return ((void)_idx--, parseLetStmt());

                if ((v == "struct"_fu))
                    return parseStructDecl();

                if ((v == "pub"_fu))
                    return parsePub();

                if ((v == "typedef"_fu))
                    return parseTypedef();

                if (((v == "inline"_fu) && tryConsume("id"_fu, "fn"_fu)))
                    return parseFnDecl(int(F_TEMPLATE));

                if ((v == "fn"_fu))
                    return parseFnDecl(0);

            };
            if (_fnDepth)
            {
                if ((v == "if"_fu))
                    return parseIf();

                if ((v == "return"_fu))
                    return parseReturn();

                if ((v == "for"_fu))
                    return parseFor();

                if ((v == "while"_fu))
                    return parseWhile();

                if ((v == "do"_fu))
                    return parseDoWhile();

                if ((v == "break"_fu))
                    return parseJump("break"_fu);

                if ((v == "continue"_fu))
                    return parseJump("continue"_fu);

            };
            if (((v == "import"_fu) && ((peek.kind == "id"_fu) || (peek.kind == "str"_fu))))
                return parseImport();

        };
        _idx--;
        _loc = loc0;
        return parseExpressionStatement();
    };
    s_Node parseImport()
    {
        fu_STR value = tryConsume("id"_fu, fu_STR{}).value;
        if (value)
        {
            while (tryConsume("op"_fu, "::"_fu))
                (value += ("/"_fu + consume("id"_fu, fu_STR{}).value));

        }
        else
            value = consume("str"_fu, fu_STR{}).value;

        consume("op"_fu, ";"_fu);
        value = registerImport(fu_STR(value));
        return make("import"_fu, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node parseLabelledStatement()
    {
        s_Token label = consume("id"_fu, fu_STR{});
        s_Node stmt = parseStatement();
        if ((stmt.kind == "loop"_fu))
        {
            (stmt.value && fail(fu_STR{}));
            stmt.value = (label.value ? label.value : fail(fu_STR{}));
            return stmt;
        };
        fail(fu_STR{});
    };
    s_Node parseEmpty()
    {
        return make("empty"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});
    };
    s_Node parseExpressionStatement()
    {
        s_Node expr = parseExpression(int(P_RESET), 0);
        consume("op"_fu, ";"_fu);
        return expr;
    };
    s_Node parseFnDecl(int flags)
    {
        fu_VEC<fu_STR> dollars0 { _dollars };
        const int numReturns0 = _numReturns;
        fu_STR name = tryConsume("id"_fu, fu_STR{}).value;
        if ((!name || !tryConsume("op"_fu, "("_fu)))
        {
            (!name || (name == "infix"_fu) || (name == "prefix"_fu) || (name == "postfix"_fu) || fail((("Unexpected `"_fu + name) + "`."_fu)));
            const bool postfix = (name == "postfix"_fu);
            name = consume("op"_fu, fu_STR{}).value;
            if (postfix)
            {
                ((name == "++"_fu) || (name == "--"_fu) || fail((("No such postfix operator: `"_fu + name) + "`."_fu)));
                (name += "postfix"_fu);
                flags |= F_POSTFIX;
            };
            flags |= F_OPERATOR;
            consume("op"_fu, "("_fu);
        };
        fu_VEC<s_Node> items {};
        flags |= parseArgsDecl(items, "op"_fu, ")"_fu);
        _fnDepth++;
        s_Node type = tryPopTypeAnnot();
        const int retIdx = items.size();
        items.push(type);
        flags |= parseFnBodyOrPattern(items);
        if ((!type && (_numReturns == numReturns0)))
            items.mutref(retIdx) = (type = createRead("void"_fu));

        if (((name == "main"_fu) && (_fnDepth == 1)))
        {
            if (!type)
                items.mutref(retIdx) = (type = createRead("i32"_fu));
            else if (((type.kind != "call"_fu) || (type.value != "i32"_fu) || type.items.size()))
                fail("fn main() must return i32."_fu);

        };
        if (type)
            flags |= F_FULLY_TYPED;

        
        {
            _fnDepth--;
            _numReturns = numReturns0;
            if ((_dollars.size() > dollars0.size()))
                flags |= F_TEMPLATE;

            _dollars = dollars0;
        };
        return make("fn"_fu, items, flags, name);
    };
    int parseFnBodyOrPattern(fu_VEC<s_Node>& out_push_body)
    {
        int flags = 0;
        s_Node body {};
        if (tryConsume("id"_fu, "case"_fu))
        {
            fu_VEC<s_Node> branches {};
            flags |= F_PATTERN;
            do
            {
                s_Node cond = parseUnaryExpression(0);
                s_Node type = tryPopTypeAnnot();
                s_Node body_1 = parseFnBodyBranch();
                branches.push(make("fnbranch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { cond, type, body_1 } }, 0, fu_STR{}));
            }
            while (tryConsume("id"_fu, "case"_fu));
            body = make("pattern"_fu, branches, 0, fu_STR{});
        }
        else
            body = parseFnBodyBranch();

        out_push_body.push(body);
        return flags;
    };
    s_Node parseFnBodyBranch()
    {
        tryConsume("op"_fu, "="_fu);
        s_Node body = parseStatement();
        if ((body.kind == "block"_fu))
            return body;

        if ((body.kind == "return"_fu))
            return createBlock(fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { body } });

        _numReturns++;
        return createBlock(fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { createReturn(body) } });
    };
    s_Node tryPopTypeAnnot()
    {
        return (tryConsume("op"_fu, ":"_fu) ? parseTypeAnnot() : miss());
    };
    s_Node parseTypeAnnot()
    {
        return parseUnaryExpression(0);
    };
    int parseArgsDecl(fu_VEC<s_Node>& outArgs, const fu_STR& endk, const fu_STR& endv)
    {
        bool first = true;
        int outFlags = 0;
        fu_VEC<s_Node> implicit {};
        bool defaults = false;
        for (; ; )
        {
            if (tryConsume(endk, endv))
            {
                break;
            };
            if (!first)
                consume("op"_fu, ","_fu);

            first = false;
            s_Node arg = parseLet(true);
            if (!arg.items.mutref(LET_TYPE))
                outFlags |= F_UNTYPED_ARGS;

            if (arg.items.mutref(LET_INIT))
            {
                if ((arg.flags & F_IMPLICIT))
                    fail("TODO default implicit arguments"_fu);

                defaults = true;
            }
            else if (defaults)
                fail("TODO non-trailing default arguments"_fu);

            arg.flags &= ~F_LOCAL;
            arg.flags |= F_ARG;
            if ((arg.flags & F_IMPLICIT))
                implicit.push(arg);
            else
                outArgs.push(arg);

        };
        if (implicit)
        {
            for (int i = 0; (i < implicit.size()); i++)
                outArgs.push(implicit.mutref(i));

        };
        return outFlags;
    };
    s_Node parseLetStmt()
    {
        s_Node ret = parseLet(false);
        if (tryConsume("id"_fu, "catch"_fu))
        {
            s_Node err = createLet(consume("id"_fu, fu_STR{}).value, 0, createRead("string"_fu), s_Node{});
            s_Node cAtch = parseStatement();
            return make("catch"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { ret, err, cAtch } }, 0, fu_STR{});
        };
        consume("op"_fu, ";"_fu);
        return ret;
    };
    s_Node parseLet(const bool argdecl)
    {
        int flags = F_LOCAL;
        const int numDollars0 = _dollars.size();
        if (tryConsume("id"_fu, "using"_fu))
            flags |= F_USING;

        if (tryConsume("id"_fu, "implicit"_fu))
            flags |= F_IMPLICIT;

        if (tryConsume("id"_fu, "mut"_fu))
            flags |= F_MUT;

        fu_STR id = consume("id"_fu, fu_STR{}).value;
        s_Token mustname = ([&]() -> s_Token { if (argdecl) return tryConsume("op"_fu, "!"_fu); else return s_Token{}; }());
        s_Token optional = ([&]() -> s_Token { if (argdecl) return tryConsume("op"_fu, "?"_fu); else return s_Token{}; }());
        s_Node type = tryPopTypeAnnot();
        s_Node init = (optional ? createDefinit() : ([&]() -> s_Node { if (tryConsume("op"_fu, "="_fu)) return parseExpression(int(P_COMMA), 0); else return s_Node{}; }()));
        if ((numDollars0 != _dollars.size()))
            flags |= F_TEMPLATE;

        if (mustname)
            flags |= F_MUSTNAME;

        return createLet(id, flags, type, init);
    };
    s_Node createLet(const fu_STR& id, const int flags, const s_Node& type, const s_Node& init)
    {
        return make("let"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { type, init } }, flags, id);
    };
    s_Node parseExpression(const int p1, const int mode)
    {
        const int p0 = _precedence;
        const int loc0 = _loc;
        _precedence = p1;
        _loc = _idx;
        s_Node head = parseExpressionHead();
        
        {
            const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == "int"_fu) || (head.kind == "real"_fu))) ? int(mode) : (mode & ~M_LINT_UNARY_PRECEDENCE));
            s_Node out {};
            while ((out = tryParseExpressionTail(head, mode_1)))
            {
                _loc = _idx;
                head = out;
            };
        };
        _precedence = p0;
        _loc = loc0;
        return head;
    };
    s_Node tryParseBinary(const s_Node& left, const fu_STR& op, const int p1)
    {
        if (((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1])))
            return miss();

        _idx++;
        s_Node mid {};
        if ((op == "?"_fu))
        {
            mid = parseExpression(int(_precedence), 0);
            consume("op"_fu, ":"_fu);
        };
        s_Node right = parseExpression(int(p1), 0);
        if (mid)
            return createIf(left, mid, right);

        if ((op == "||"_fu))
            return createOr(left, right);

        if ((op == "&&"_fu))
            return createAnd(left, right);

        if ((op == "|>"_fu))
            return pipelineRight(left, s_Node(right));

        if ((op == "<|"_fu))
            return pipelineLeft(s_Node(left), right);

        return createCall(op, F_INFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { left, right } });
    };
    s_Node pipelineRight(const s_Node& left, s_Node&& right)
    {
        if ((right.kind != "call"_fu))
            fail("Cannot pipeline: not a call expr."_fu);

        if ((right.flags & F_METHOD))
            right.items.insert(1, left);
        else
            right.items.unshift(left);

        return std::move(right);
    };
    s_Node pipelineLeft(s_Node&& left, const s_Node& right)
    {
        if ((left.kind != "call"_fu))
            fail("Cannot pipeline: not a call expr."_fu);

        left.items.push(right);
        return std::move(left);
    };
    s_Node tryParseExpressionTail(const s_Node& head, const int mode)
    {
        const s_Token& token = tokens[_idx++];
        if ((token.kind == "op"_fu))
        {
            const fu_STR& v = token.value;
            const auto& lint = [&]() -> int
            {
                return ([&]() -> int { { int _ = (mode & M_LINT_UNARY_PRECEDENCE); if (!_) return _; } fail_Lint((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu)); }());
            };
            if ((v == ";"_fu))
                return ((void)_idx--, miss());

            if ((v == "."_fu))
                return ((void)lint(), parseAccessExpression(head));

            if ((v == "("_fu))
                return ((void)lint(), parseCallExpression(head));

            if ((v == "["_fu))
                return ((void)lint(), parseIndexExpression(head));

            const int p1 = BINOP.PRECEDENCE[v];
            if (p1)
                return ((void)_idx--, tryParseBinary(head, v, p1));

            if (fu::has(POSTFIX, v))
                return createCall((((v == "++"_fu) || (v == "--"_fu)) ? (v + "postfix"_fu) : fu_STR(v)), F_POSTFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { head } });

            if ((v == "::"_fu))
                return parseQualifierChain(s_Node(head));

        };
        return ((void)_idx--, miss());
    };
    s_Node parseExpressionHead()
    {
        const s_Token& token = tokens[_idx++];
        
        {
            const fu_STR& k = token.kind;
            if (((k == "int"_fu) || (k == "real"_fu) || (k == "str"_fu) || (k == "char"_fu)))
                return createLeaf(token.kind, token.value);

            if ((k == "id"_fu))
                return createRead(token.value);

            if ((k == "op"_fu))
            {
                const fu_STR& v = token.value;
                if ((v == "("_fu))
                    return parseParens();

                if ((v == "["_fu))
                    return parseArrayLiteral();

                if ((v == "$"_fu))
                    return parseTypeParam();

                if ((v == "@"_fu))
                    return parseTypeTag();

                if ((v == "[]"_fu))
                    return createDefinit();

                if ((v == "::"_fu))
                {
                    fu_STR id = consume("id"_fu, fu_STR{}).value;
                    _idx -= 2;
                    return createRead(id);
                };
                return parsePrefix(fu_STR(token.value));
            };
        };
        _idx--;
        fail(fu_STR{});
    };
    s_Node createDefinit()
    {
        return make("definit"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});
    };
    s_Node parseParens()
    {
        fu_VEC<s_Node> items {};
        do
            items.push(parseExpression(int(P_COMMA), 0));
        while (tryConsume("op"_fu, ","_fu));
        consume("op"_fu, ")"_fu);
        return ((items.size() > 1) ? createComma(items) : s_Node(items[0]));
    };
    s_Node createComma(const fu_VEC<s_Node>& nodes)
    {
        return make("comma"_fu, nodes, 0, fu_STR{});
    };
    s_Node parseTypeParam()
    {
        fu_STR value = consume("id"_fu, fu_STR{}).value;
        if (!fu::has(_dollars, value))
            _dollars.push(value);

        return createTypeParam(value);
    };
    s_Node createTypeParam(const fu_STR& value)
    {
        return make("typeparam"_fu, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node parseTypeTag()
    {
        return createTypeTag(consume("id"_fu, fu_STR{}).value);
    };
    s_Node createTypeTag(const fu_STR& value)
    {
        return make("typetag"_fu, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node parsePrefix(fu_STR&& op)
    {
        (fu::has(PREFIX, op) || ((void)_idx--, fail(fu_STR{})));
        if (((op == "&"_fu) && tryConsume("id"_fu, "mut"_fu)))
            op = "&mut"_fu;

        const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? int(M_LINT_UNARY_PRECEDENCE) : 0);
        return createPrefix(op, parseUnaryExpression(mode));
    };
    s_Node parseUnaryExpression(const int mode)
    {
        return parseExpression(int(P_PREFIX_UNARY), mode);
    };
    s_Node createPrefix(const fu_STR& op, s_Node&& expr)
    {
        if ((op == "!"_fu))
            return createNot(expr);

        if ((((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == "int"_fu) || (expr.kind == "real"_fu))))
        {
            const std::byte sign = expr.value[0];
            if (((sign == std::byte('+')) || (sign == std::byte('-'))))
                expr.value.mutref(0) = ((sign == only_y0NH(op)) ? std::byte('+') : std::byte('-'));
            else
                expr.value = (op + expr.value);

            return std::move(expr);
        };
        return createCall(op, F_PREFIX, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } });
    };
    s_Node createNot(const s_Node& expr)
    {
        return make("!"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } }, 0, fu_STR{});
    };
    s_Node parseAccessExpression(const s_Node& expr)
    {
        s_Token id = tryConsume("id"_fu, fu_STR{});
        if (!id)
        {
            consume("op"_fu, "::"_fu);
            id = consume("id"_fu, fu_STR{});
            _idx -= 2;
        };
        return createCall(id.value, F_ACCESS, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { expr } });
    };
    s_Node parseQualifierChain(s_Node&& expr)
    {
        if (((expr.kind != "call"_fu) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & F_ACCESS))) || (expr.flags & F_QUALIFIED)))
        {
            _idx--;
            fail(fu_STR{});
        };
        expr.flags |= F_QUALIFIED;
        fu_STR path { expr.value };
        for (; ; )
        {
            fu_STR id = consume("id"_fu, fu_STR{}).value;
            if (!tryConsume("op"_fu, "::"_fu))
            {
                path = registerImport(fu_STR(path));
                expr.value = ((path + "\t"_fu) + id);
                return std::move(expr);
            };
            (path += ("/"_fu + id));
        };
    };
    int parseCallArgs(const fu_STR& endop, fu_VEC<s_Node>& out_args)
    {
        int flags = 0;
        bool first = true;
        for (; ; )
        {
            if (tryConsume("op"_fu, endop))
            {
                break;
            };
            if (!first)
            {
                consume("op"_fu, ","_fu);
                if (tryConsume("op"_fu, endop))
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
            s_Node expr = parseExpression(int(P_COMMA), 0);
            if (autoName)
                name = getAutoName(expr);

            out_args.push((name ? createLabel(name, expr) : s_Node(expr)));
        };
        return flags;
    };
    fu_STR getAutoName(const s_Node& expr)
    {
        if (((expr.kind == "call"_fu) && hasIdentifierChars(expr.value)))
            return fu_STR(expr.value);

        if (expr.items)
            return getAutoName(expr.items[0]);

        fail("Can't :auto_name this expression."_fu);
    };
    s_Node createLabel(const fu_STR& id, const s_Node& value)
    {
        return make("label"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { value } }, 0, id);
    };
    s_Node parseCallExpression(const s_Node& expr)
    {
        fu_VEC<s_Node> args {};
        const int argFlags = parseCallArgs(")"_fu, args);
        if (((expr.kind == "call"_fu) && (expr.flags & F_ACCESS)))
        {
            const s_Node& head = ([&]() -> const s_Node& { if (expr.items && (expr.items.size() == 1)) { const s_Node& _ = expr.items[0]; if (_) return _; } fail(fu_STR{}); }());
            args.unshift(head);
            return createCall((expr.value ? expr.value : fail(fu_STR{})), (F_METHOD | argFlags), args);
        };
        if (((expr.kind == "call"_fu) && (expr.flags & F_ID)))
            return createCall((expr.value ? expr.value : fail(fu_STR{})), (argFlags | (expr.flags & ~F_ID)), args);

        fail("TODO dynamic call"_fu);
    };
    s_Node parseArrayLiteral()
    {
        fu_VEC<s_Node> args {};
        const int argFlags = parseCallArgs("]"_fu, args);
        return createArrayLiteral(argFlags, args);
    };
    s_Node createArrayLiteral(const int argFlags, const fu_VEC<s_Node>& items)
    {
        return make("arrlit"_fu, items, argFlags, fu_STR{});
    };
    s_Node parseIndexExpression(const s_Node& expr)
    {
        fu_VEC<s_Node> args {};
        const int argFlags = parseCallArgs("]"_fu, args);
        args.unshift(expr);
        return createCall("[]"_fu, (F_INDEX & argFlags), args);
    };
    s_Node createLeaf(const fu_STR& kind, const fu_STR& value)
    {
        return make(kind, fu_VEC<s_Node>{}, 0, value);
    };
    s_Node createCall(const fu_STR& id, const int flags, const fu_VEC<s_Node>& args)
    {
        return make("call"_fu, args, flags, id);
    };
    s_Node createRead(const fu_STR& id)
    {
        return createCall((id ? id : fail(fu_STR{})), F_ID, fu_VEC<s_Node>{});
    };
    s_Node parseReturn()
    {
        ((_fnDepth > 0) || ((void)_idx--, fail(fu_STR{})));
        _numReturns++;
        if (tryConsume("op"_fu, ";"_fu))
            return createReturn(s_Node{});

        return createReturn(parseExpressionStatement());
    };
    s_Node createReturn(const s_Node& node)
    {
        if (!node)
            return make("return"_fu, fu_VEC<s_Node>{}, 0, fu_STR{});

        return make("return"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<1> { node } }, 0, fu_STR{});
    };
    s_Node parseJump(const fu_STR& kind)
    {
        s_Token label = ([&]() -> s_Token { if (tryConsume("op"_fu, ":"_fu)) return consume("id"_fu, fu_STR{}); else return s_Token{}; }());
        s_Node jump = createJump(kind, label.value);
        consume("op"_fu, ";"_fu);
        return jump;
    };
    s_Node createJump(const fu_STR& kind, const fu_STR& label)
    {
        return make(kind, fu_VEC<s_Node>{}, 0, label);
    };
    s_Node parseIf()
    {
        s_Token nOt = tryConsume("op"_fu, "!"_fu);
        consume("op"_fu, "("_fu);
        s_Node cond = parseExpression(int(_precedence), 0);
        if (nOt)
            cond = createNot(cond);

        consume("op"_fu, ")"_fu);
        s_Node cons = parseStatement();
        s_Node alt = ([&]() -> s_Node { if (tryConsume("id"_fu, "else"_fu)) return parseStatement(); else return s_Node{}; }());
        return createIf(cond, cons, alt);
    };
    s_Node createIf(const s_Node& cond, const s_Node& cons, const s_Node& alt)
    {
        return make("if"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<3> { cond, cons, alt } }, 0, fu_STR{});
    };
    s_Node createOr(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame("or"_fu, left, right);
    };
    s_Node createAnd(const s_Node& left, const s_Node& right)
    {
        return flattenIfSame("and"_fu, left, right);
    };
    s_Node flattenIfSame(const fu_STR& kind, const s_Node& left, const s_Node& right)
    {
        const fu_STR& k_left = left.kind;
        const fu_STR& k_right = right.kind;
        fu_VEC<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<2> { left, right } })));
        return make(kind, items, 0, fu_STR{});
    };
    s_Node parseFor()
    {
        consume("op"_fu, "("_fu);
        tryConsume("id"_fu, "let"_fu);
        s_Node init = ([&]() -> s_Node { if (!tryConsume("op"_fu, ";"_fu)) return parseLetStmt(); else return s_Node{}; }());
        s_Node cond = ([&]() -> s_Node { if (!tryConsume("op"_fu, ";"_fu)) return parseExpressionStatement(); else return s_Node{}; }());
        const s_Token& token = tokens[_idx];
        s_Node post = (((token.kind == "op"_fu) && (token.value == ")"_fu)) ? parseEmpty() : parseExpression(int(_precedence), 0));
        consume("op"_fu, ")"_fu);
        s_Node body = parseStatement();
        return createLoop(init, cond, post, body, miss());
    };
    s_Node parseWhile()
    {
        consume("op"_fu, "("_fu);
        s_Node cond = parseExpression(int(_precedence), 0);
        consume("op"_fu, ")"_fu);
        s_Node body = parseStatement();
        return createLoop(miss(), cond, miss(), body, miss());
    };
    s_Node parseDoWhile()
    {
        s_Node body = parseStatement();
        consume("id"_fu, "while"_fu);
        consume("op"_fu, "("_fu);
        s_Node cond = parseExpression(int(_precedence), 0);
        consume("op"_fu, ")"_fu);
        consume("op"_fu, ";"_fu);
        return createLoop(miss(), miss(), miss(), body, cond);
    };
    s_Node createLoop(const s_Node& init, const s_Node& cond, const s_Node& post, const s_Node& body, const s_Node& postcond)
    {
        return make("loop"_fu, fu_VEC<s_Node> { fu_VEC<s_Node>::INIT<5> { init, cond, post, body, postcond } }, 0, fu_STR{});
    };
    s_ParserOutput parse()
    {
        ((tokens[(tokens.size() - 1)].kind == "eof"_fu) || fail("Missing `eof` token."_fu));
        s_Node root = parseRoot();
        return s_ParserOutput { s_Node(root), fu_VEC<fu_STR>(_imports) };
    };
};

} // namespace

s_ParserOutput parse(const int modid, const fu_STR& fname, const fu_VEC<s_Token>& tokens)
{
    return (sf_parse { modid, fname, tokens }).parse();
}


#endif
