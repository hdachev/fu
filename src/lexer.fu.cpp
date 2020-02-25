#include <cstdint>
#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>

struct s_LexerOutput;
struct s_Token;
fu_STR ascii_lower(const fu_STR&);
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
inline const fu_VEC<fu_STR> OPERATORS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<63> { "+"_fu, "++"_fu, "-"_fu, "--"_fu, "*"_fu, "**"_fu, "/"_fu, "%"_fu, "<"_fu, "<<"_fu, "<<<"_fu, ">"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "=>"_fu, "->"_fu, "<=>"_fu, "|>"_fu, "<|"_fu, "!"_fu, "?"_fu, "??"_fu, "."_fu, ".."_fu, "..."_fu, ":"_fu, "::"_fu, ","_fu, ";"_fu, "&"_fu, "&&"_fu, "|"_fu, "||"_fu, "^"_fu, "~"_fu, "{"_fu, "}"_fu, "["_fu, "]"_fu, "("_fu, ")"_fu, "[]"_fu, "="_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "&&="_fu, "||="_fu, "@"_fu, "#"_fu, "$"_fu } };
                                #endif

namespace {

struct sf_lex
{
    const fu_STR& src;
    const fu_STR& fname;
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    fu_VEC<s_Token> tokens {};
    void token(const fu_STR& kind, const fu_STR& value, const int idx0, const int idx1)
    {
        const int col = (idx0 - lidx);
        tokens.push(s_Token { fu_STR(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) });
    };
    void err_str(const fu_STR& kind, const int idx0, const fu_STR& reason)
    {
        while (((idx < end) && (src[idx] > std::byte(' '))))
            idx++;

        const int col = (idx0 - lidx);
        fu_STR value = fu::slice(src, idx0, idx);
        fu::fail((((((((((((("LEX ERROR: "_fu + fname) + "@"_fu) + line) + ":"_fu) + col) + ":\n\t"_fu) + reason) + "\n\t"_fu) + kind) + ": `"_fu) + value) + "`"_fu));
    };
    void err(const fu_STR& kind, const int idx0, const int reason)
    {
        err_str(kind, idx0, (("`"_fu + src[reason]) + "`"_fu));
    };
    fu_STR unescapeStr(const fu_STR& src, const int idx0, const int idx1)
    {
        fu_STR out {};
        const int n = (idx1 - 1);
        for (int i = (idx0 + 1); (i < n); i++)
        {
            const std::byte c = src[i];
            if ((c == std::byte('\\')))
            {
                const std::byte c1 = src[++i];
                if ((c1 == std::byte('n')))
                    (out += std::byte('\n'));
                else if ((c1 == std::byte('r')))
                    (out += std::byte('\r'));
                else if ((c1 == std::byte('t')))
                    (out += std::byte('\t'));
                else if ((c1 == std::byte('v')))
                    (out += std::byte('\v'));
                else
                    (out += c1);

            }
            else
                (out += c);

        };
        return out;
    };
    s_LexerOutput lex_EVAL()
    {
        while ((idx < end))
        {
            const int idx0 = idx;
            const std::byte c = src[idx++];
            if ((c <= std::byte(' ')))
            {
                if ((c == std::byte('\n')))
                {
                    line++;
                    lidx = (idx - 1);
                };
            }
            else if ((((c >= std::byte('A')) && (c <= std::byte('Z'))) || ((c >= std::byte('a')) && (c <= std::byte('z'))) || (c == std::byte('_'))))
            {
                while ((idx < end))
                {
                    const std::byte c = src[idx++];
                    if ((((c >= std::byte('A')) && (c <= std::byte('Z'))) || ((c >= std::byte('a')) && (c <= std::byte('z'))) || (c == std::byte('_')) || ((c >= std::byte('0')) && (c <= std::byte('9')))))
                    {
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                const int idx1 = idx;
                token("id"_fu, fu::slice(src, idx0, idx1), idx0, idx1);
            }
            else if (((c >= std::byte('0')) && (c <= std::byte('9'))))
            {
                bool hex = false;
                bool dot = false;
                bool exp = false;
                bool ob = false;
                std::byte max = std::byte('9');
                if ((c == std::byte('0')))
                {
                    const std::byte c = ([&]() -> std::byte { if ((idx < end)) return src[idx]; else return fu::Default<std::byte>::value; }());
                    if (((c == std::byte('x')) || (c == std::byte('X'))))
                    {
                        hex = true;
                        idx++;
                    }
                    else if (((c == std::byte('o')) || (c == std::byte('O'))))
                    {
                        ob = true;
                        max = std::byte('7');
                        idx++;
                    }
                    else if (((c == std::byte('b')) || (c == std::byte('B'))))
                    {
                        ob = true;
                        max = std::byte('1');
                        idx++;
                    }
                    else if (((c >= std::byte('0')) && (c <= std::byte('9'))))
                        err_str("num"_fu, idx0, ("Leading `0` in numeric literal,"_fu + " perhaps you meant `0x`, `0b` or `0o`."_fu));

                };
                while ((idx < end))
                {
                    const std::byte c = src[idx++];
                    if ((((c >= std::byte('0')) && (c <= max)) || (hex && (((c >= std::byte('a')) && (c <= std::byte('f'))) || ((c >= std::byte('A')) && (c <= std::byte('F')))))))
                    {
                    }
                    else if (ob)
                    {
                        idx--;
                        break;
                    }
                    else if ((c == std::byte('.')))
                    {
                        const std::byte c = ([&]() -> std::byte { if ((idx < end)) return src[idx]; else return fu::Default<std::byte>::value; }());
                        if (!(((c >= std::byte('0')) && (c <= std::byte('9'))) || (hex && (((c >= std::byte('a')) && (c <= std::byte('f'))) || ((c >= std::byte('A')) && (c <= std::byte('F')))))))
                        {
                            idx--;
                            break;
                        };
                        if ((dot || exp))
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                        dot = true;
                    }
                    else if ((hex ? ((c == std::byte('p')) || (c == std::byte('P'))) : ((c == std::byte('e')) || (c == std::byte('E')))))
                    {
                        if (exp)
                        {
                            err("num"_fu, idx0, (idx - 1));
                            break;
                        };
                        if (((idx < end) && ((src[idx] == std::byte('-')) || (src[idx] == std::byte('+')))))
                            idx++;

                        exp = true;
                    }
                    else
                    {
                        idx--;
                        break;
                    };
                };
                const std::byte trail = src[(idx - 1)];
                if ((!((trail >= std::byte('0')) && (trail <= std::byte('9'))) && !(hex && (((trail >= std::byte('a')) && (trail <= std::byte('f'))) || ((trail >= std::byte('A')) && (trail <= std::byte('F')))))))
                    err("num"_fu, idx0, (idx - 1));
                else
                {
                    const int idx1 = idx;
                    fu_STR str = fu::slice(src, idx0, idx1);
                    if ((hex && dot && !exp))
                        err_str("num"_fu, idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu));
                    else
                        token(((dot || exp) ? "num"_fu : "int"_fu), ascii_lower(str), idx0, idx1);

                };
            }
            else if (((c == std::byte('\'')) || (c == std::byte('"')) || (c == std::byte('`'))))
            {
                bool esc = false;
                bool ok = false;
                while ((idx < end))
                {
                    const std::byte c1 = src[idx++];
                    if ((c1 == c))
                    {
                        ok = true;
                        break;
                    }
                    else if ((c1 == std::byte('\\')))
                    {
                        esc = true;
                        idx++;
                    }
                    else if ((c1 == std::byte('\n')))
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
                    fu_STR str = (esc ? unescapeStr(src, idx0, idx1) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                    const bool cHar = (c == std::byte('\''));
                    fu_STR kind = (cHar ? "char"_fu : "str"_fu);
                    if ((cHar && (str.size() != 1)))
                        err_str("char"_fu, idx0, ("Char literal len != 1: "_fu + str.size()));
                    else
                        token(kind, str, idx0, idx1);

                };
            }
            else if (((c == std::byte('/')) && (idx < end) && (src[idx] == std::byte('/'))))
            {
                idx++;
                while ((idx < end))
                {
                    const std::byte c1 = src[idx++];
                    if ((c1 == std::byte('\n')))
                    {
                        line++;
                        lidx = (idx - 1);
                        break;
                    };
                };
            }
            else if (((c == std::byte('/')) && (idx < end) && (src[idx] == std::byte('*'))))
            {
                idx++;
                while ((idx < end))
                {
                    const std::byte c = src[idx++];
                    if ((c == std::byte('\n')))
                    {
                        line++;
                        lidx = (idx - 1);
                    }
                    else if (((c == std::byte('*')) && (idx < end) && (src[idx] == std::byte('/'))))
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
                    const std::byte c = src[idx++];
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
                        fu_STR candidate = fu::slice(src, begin, end);
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

} // namespace

s_LexerOutput lex(const fu_STR& src, const fu_STR& fname)
{
    return (sf_lex { src, fname }).lex_EVAL();
}

