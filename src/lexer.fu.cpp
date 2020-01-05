#include "../lib/never.h"
#include "../lib/str.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"

struct s_LexerOutput;
struct s_Token;
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

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_STR fname;
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || fname
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_OPTOKENS
                                #define DEF_OPTOKENS
inline const fu_STR OPTOKENS = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;
                                #endif

                                #ifndef DEF_OPERATORS
                                #define DEF_OPERATORS
inline const fu_VEC<fu_STR> OPERATORS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<61> { "+"_fu, "++"_fu, "-"_fu, "--"_fu, "*"_fu, "**"_fu, "/"_fu, "%"_fu, "<"_fu, "<<"_fu, "<<<"_fu, ">"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "=>"_fu, "->"_fu, "<=>"_fu, "!"_fu, "?"_fu, "??"_fu, "."_fu, ".."_fu, "..."_fu, ":"_fu, "::"_fu, ","_fu, ";"_fu, "&"_fu, "&&"_fu, "|"_fu, "||"_fu, "^"_fu, "~"_fu, "{"_fu, "}"_fu, "["_fu, "]"_fu, "("_fu, ")"_fu, "[]"_fu, "="_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "&&="_fu, "||="_fu, "@"_fu, "#"_fu, "$"_fu } };
                                #endif

struct sf_lex
{
    const fu_STR& src;
    const fu_STR& fname;
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    fu_VEC<s_Token> tokens {};
    void token(const fu_STR& kind, const fu_STR& value, const int& idx0, const int& idx1)
    {
        const int col = (idx0 - lidx);
        tokens.push(s_Token { fu_STR(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) });
    };
    void err_str(const fu_STR& kind, const int& idx0, const fu_STR& reason)
    {
        while (((idx < end) && (fu_TO_STR(src[idx]) > " "_fu)))
            idx++;

        const int col = (idx0 - lidx);
        fu_STR value = slice(src, idx0, idx);
        fu::fail((((((((((((("LEX ERROR: "_fu + fname) + "@"_fu) + line) + ":"_fu) + col) + ":\n\t"_fu) + reason) + "\n\t"_fu) + kind) + ": `"_fu) + value) + "`"_fu));
    };
    void err(const fu_STR& kind, const int& idx0, const int& reason)
    {
        err_str(kind, idx0, fu_TO_STR(src[reason]));
    };
    fu_STR checkNum(const fu_STR& kind, const fu_STR& src)
    {
        if (src)
        {
        };
        return kind;
    };
    fu_STR unescapeStr(const fu_STR& src, const int& idx0, const int& idx1)
    {
        fu_STR out {};
        const int n = (idx1 - 1);
        for (int i = (idx0 + 1); (i < n); i++)
        {
            fu_STR c = fu_TO_STR(src[i]);
            if ((c == "\\"_fu))
            {
                fu_STR c1 = fu_TO_STR(src[++i]);
                if ((c1 == "n"_fu))
                    out += "\n"_fu;
                else if ((c1 == "r"_fu))
                    out += "\r"_fu;
                else if ((c1 == "t"_fu))
                    out += "\t"_fu;
                else if ((c1 == "v"_fu))
                    out += "\v"_fu;
                else
                    out += c1;

            }
            else
                out += c;

        };
        return out;
    };
    s_LexerOutput lex_EVAL()
    {
        while ((idx < end))
        {
            const int idx0 = idx;
            fu_STR c = fu_TO_STR(src[idx++]);
            if ((c <= " "_fu))
            {
                if ((c == "\n"_fu))
                {
                    line++;
                    lidx = (idx - 1);
                };
            }
            else if ((((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "a"_fu) && (c <= "z"_fu)) || (c == "_"_fu)))
            {
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if ((((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "a"_fu) && (c <= "z"_fu)) || (c == "_"_fu) || ((c >= "0"_fu) && (c <= "9"_fu))))
                    {
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                const int idx1 = idx;
                token("id"_fu, slice(src, idx0, idx1), idx0, idx1);
            }
            else if (((c >= "0"_fu) && (c <= "9"_fu)))
            {
                bool hex = false;
                bool dot = false;
                bool exp = false;
                if (((c == "0"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "x"_fu)))
                {
                    hex = true;
                    idx++;
                };
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if (((c >= "0"_fu) && (c <= "9"_fu)))
                    {
                    }
                    else if ((c == "."_fu))
                    {
                        if ((hex || dot || exp))
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                        dot = true;
                    }
                    else if ((((c == "e"_fu) || (c == "E"_fu)) && !hex))
                    {
                        if ((hex || exp))
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                        if (((idx < end) && ((fu_TO_STR(src[idx]) == "-"_fu) || (fu_TO_STR(src[idx]) == "+"_fu))))
                            idx++;

                        exp = true;
                    }
                    else if ((((c >= "a"_fu) && (c <= "f"_fu)) || ((c >= "A"_fu) && (c <= "F"_fu))))
                    {
                        if (!hex)
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                fu_STR trail = fu_TO_STR(src[(idx - 1)]);
                if ((!((trail >= "0"_fu) && (trail <= "9"_fu)) && !(hex && (((trail >= "a"_fu) && (trail <= "f"_fu)) || ((trail >= "A"_fu) && (trail <= "F"_fu))))))
                    err("num"_fu, idx0, (idx - 1));
                else
                {
                    const int idx1 = idx;
                    fu_STR str = slice(src, idx0, idx1);
                    token(checkNum(((dot || exp) ? "num"_fu : "int"_fu), str), str, idx0, idx1);
                };
            }
            else if (((c == "'"_fu) || (c == "\""_fu) || (c == "`"_fu)))
            {
                bool esc = false;
                bool ok = false;
                while ((idx < end))
                {
                    fu_STR c1 = fu_TO_STR(src[idx++]);
                    if ((c1 == c))
                    {
                        ok = true;
                        break;
                    }
                    else if ((c1 == "\\"_fu))
                    {
                        esc = true;
                        idx++;
                    }
                    else if ((c1 == "\n"_fu))
                    {
                        line++;
                        lidx = (idx - 1);
                    };
                };
                if (!ok)
                    err_str("str"_fu, idx0, "Unterminated string literal."_fu);
                else
                {
                    const int idx1 = idx;
                    fu_STR str = (esc ? unescapeStr(src, idx0, idx1) : slice(src, (idx0 + 1), (idx1 - 1)));
                    token("str"_fu, str, idx0, idx1);
                };
            }
            else if (((c == "/"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "/"_fu)))
            {
                idx++;
                while ((idx < end))
                {
                    fu_STR c1 = fu_TO_STR(src[idx++]);
                    if ((c1 == "\n"_fu))
                    {
                        line++;
                        lidx = (idx - 1);
                        break;
                    };
                };
            }
            else if (((c == "/"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "*"_fu)))
            {
                idx++;
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if ((c == "\n"_fu))
                    {
                        line++;
                        lidx = (idx - 1);
                    }
                    else if (((c == "*"_fu) && (idx < end) && (fu_TO_STR(src[idx]) == "/"_fu)))
                    {
                        idx++;
                        break;
                    };
                };
            }
            else if (fu::has(OPTOKENS, c))
            {
                while ((idx < end))
                {
                    fu_STR c = fu_TO_STR(src[idx++]);
                    if (!fu::has(OPTOKENS, c))
                    {
                        idx--;
                        break;
                    };
                };
                
                {
                    int begin = idx0;
                    int end = idx;
                    while ((begin < end))
                    {
                        fu_STR candidate = slice(src, begin, end);
                        const bool ok = fu::has(OPERATORS, candidate);
                        if (((end > (begin + 1)) && !ok))
                        {
                            end--;
                            continue;
                        };
                        if (!ok)
                            err("op"_fu, begin, end);
                        else
                            token("op"_fu, candidate, begin, end);

                        begin = end;
                        end = idx;
                    };
                };
            }
            else
                err("?"_fu, idx0, idx0);

        };
        line++;
        lidx = (idx + 0);
        token("eof"_fu, "eof"_fu, idx, idx);
        return s_LexerOutput { fu_STR(fname), fu_VEC<s_Token>(tokens) };
    };
};
s_LexerOutput lex(const fu_STR& src, const fu_STR& fname)
{
    return (sf_lex { src, fname }).lex_EVAL();
}

