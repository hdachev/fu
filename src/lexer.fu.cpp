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
#include <fu/view.h>

struct s_LexerOutput;
struct s_Token;

[[noreturn]] static fu::never err(fu::view<std::byte>, int, int, const fu_STR&, int&, int, int&, const fu_STR&, int&);
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

#ifndef FU_NO_FDEFs

static const fu_STR OPTOKENS = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;

static const fu_VEC<fu_STR> MBOPS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<40> { "++"_fu, "--"_fu, "**"_fu, "<<"_fu, "<<<"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "=>"_fu, "->"_fu, "<=>"_fu, "|>"_fu, "<|"_fu, "??"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu } };

static void token(const fu_STR& kind, const fu_STR& value, const int idx0, const int idx1, int& lidx, fu_VEC<s_Token>& tokens, int& line)
{
    const int col = (idx0 - lidx);
    tokens.push(s_Token { fu_STR(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) });
}

[[noreturn]] static fu::never err_str(fu::view<std::byte> kind, const int idx0, fu::view<std::byte> reason, int& idx, const int end, const fu_STR& src, int& lidx, const fu_STR& fname, int& line)
{
    while ((idx < end) && (src[idx] > std::byte(' ')))
        idx++;

    const int col = (idx0 - lidx);
    fu_STR value = fu::slice(src, idx0, idx);
    fu::fail((((((((((((("LEX ERROR: "_fu + fname) + "@"_fu) + line) + ":"_fu) + col) + ":\n\t"_fu) + reason) + "\n\t"_fu) + kind) + ": `"_fu) + value) + "`"_fu));
}

[[noreturn]] static fu::never err(fu::view<std::byte> kind, const int idx0, const int reason, const fu_STR& src, int& idx, const int end, int& lidx, const fu_STR& fname, int& line)
{
    err_str(kind, idx0, (("`"_fu + src[reason]) + "`"_fu), idx, end, src, lidx, fname, line);
}

static fu_STR unescapeStr(fu::view<std::byte> esc, const int idx0, const int idx1)
{
    fu_STR out {};
    const int n = (idx1 - 1);
    for (int i = (idx0 + 1); i < n; i++)
    {
        const std::byte c = esc[i];
        if (c == std::byte('\\'))
        {
            const std::byte c1 = esc[++i];
            if (c1 == std::byte('n'))
                out += std::byte('\n');
            else if (c1 == std::byte('r'))
                out += std::byte('\r');
            else if (c1 == std::byte('t'))
                out += std::byte('\t');
            else if (c1 == std::byte('v'))
                out += std::byte('\v');
            else
                out += c1;

        }
        else
            out += c;

    };
    return out;
}

s_LexerOutput lex(const fu_STR& src, const fu_STR& fname)
{
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    fu_VEC<s_Token> tokens {};
    token("sof"_fu, "sof"_fu, idx, idx, lidx, tokens, line);
    while (idx < end)
    {
        const int idx0 = idx;
        const std::byte c = src[idx++];
        if ((c <= std::byte(' ')))
        {
            if (c == std::byte('\n'))
            {
                line++;
                lidx = (idx - 1);
            };
        }
        else if (((c >= std::byte('A')) && (c <= std::byte('Z'))) || ((c >= std::byte('a')) && (c <= std::byte('z'))) || (c == std::byte('_')))
        {
            while (idx < end)
            {
                const std::byte c_1 = src[idx++];
                if (((c_1 >= std::byte('A')) && (c_1 <= std::byte('Z'))) || ((c_1 >= std::byte('a')) && (c_1 <= std::byte('z'))) || (c_1 == std::byte('_')) || ((c_1 >= std::byte('0')) && (c_1 <= std::byte('9'))))
                {
                }
                else
                {
                    idx--;
                    break;
                };
            };
            const int idx1 = idx;
            token("id"_fu, fu::slice(src, idx0, idx1), idx0, idx1, lidx, tokens, line);
        }
        else if ((c >= std::byte('0')) && (c <= std::byte('9')))
        {
            bool hex = false;
            bool dot = false;
            bool exp_1 = false;
            bool ob = false;
            std::byte max_1 = std::byte('9');
            if (c == std::byte('0'))
            {
                const std::byte c_1 = ((idx < end) ? src[idx] : (*(const std::byte*)fu::NIL));
                if ((c_1 == std::byte('x')) || (c_1 == std::byte('X')))
                {
                    hex = true;
                    idx++;
                }
                else if ((c_1 == std::byte('o')) || (c_1 == std::byte('O')))
                {
                    ob = true;
                    max_1 = std::byte('7');
                    idx++;
                }
                else if ((c_1 == std::byte('b')) || (c_1 == std::byte('B')))
                {
                    ob = true;
                    max_1 = std::byte('1');
                    idx++;
                }
                else if ((c_1 >= std::byte('0')) && (c_1 <= std::byte('9')))
                    err_str("real"_fu, idx0, ("Leading `0` in numeric literal,"_fu + " perhaps you meant `0x`, `0b` or `0o`."_fu), idx, end, src, lidx, fname, line);

            };
            while (idx < end)
            {
                const std::byte c_1 = src[idx++];
                if (((c_1 >= std::byte('0')) && (c_1 <= max_1)) || (hex && (((c_1 >= std::byte('a')) && (c_1 <= std::byte('f'))) || ((c_1 >= std::byte('A')) && (c_1 <= std::byte('F'))))))
                {
                }
                else if (ob)
                {
                    idx--;
                    break;
                }
                else if (c_1 == std::byte('.'))
                {
                    const std::byte c_2 = ((idx < end) ? src[idx] : (*(const std::byte*)fu::NIL));
                    if (!(((c_2 >= std::byte('0')) && (c_2 <= std::byte('9'))) || (hex && (((c_2 >= std::byte('a')) && (c_2 <= std::byte('f'))) || ((c_2 >= std::byte('A')) && (c_2 <= std::byte('F')))))))
                    {
                        idx--;
                        break;
                    };
                    if (dot || exp_1)
                        err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);

                    dot = true;
                }
                else if ((hex ? ((c_1 == std::byte('p')) || (c_1 == std::byte('P'))) : ((c_1 == std::byte('e')) || (c_1 == std::byte('E')))))
                {
                    if (exp_1)
                        err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);

                    if ((idx < end) && ((src[idx] == std::byte('-')) || (src[idx] == std::byte('+'))))
                        idx++;

                    exp_1 = true;
                }
                else
                {
                    idx--;
                    break;
                };
            };
            const std::byte trail = src[(idx - 1)];
            if (!((trail >= std::byte('0')) && (trail <= std::byte('9'))) && !(hex && (((trail >= std::byte('a')) && (trail <= std::byte('f'))) || ((trail >= std::byte('A')) && (trail <= std::byte('F'))))))
                err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                fu_STR str = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp_1)
                    err_str("real"_fu, idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), idx, end, src, lidx, fname, line);
                else
                    token(((dot || exp_1) ? "real"_fu : "int"_fu), ascii_lower(str), idx0, idx1, lidx, tokens, line);

            };
        }
        else if ((c == std::byte('\'')) || (c == std::byte('"')) || (c == std::byte('`')))
        {
            bool esc = false;
            bool ok = false;
            while (idx < end)
            {
                const std::byte c1 = src[idx++];
                if (c1 == c)
                {
                    ok = true;
                    break;
                }
                else if (c1 == std::byte('\\'))
                {
                    esc = true;
                    idx++;
                }
                else if (c1 == std::byte('\n'))
                {
                    line++;
                    lidx = (idx - 1);
                };
            };
            if (!ok)
                err_str("str"_fu, idx0, "Unterminated string literal."_fu, idx, end, src, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                fu_STR str = (esc ? unescapeStr(src, idx0, idx1) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == std::byte('\''));
                fu_STR kind = (cHar ? "char"_fu : "str"_fu);
                if (cHar && (str.size() != 1))
                    err_str("char"_fu, idx0, ("Char literal len != 1: "_fu + str.size()), idx, end, src, lidx, fname, line);
                else
                    token(kind, str, idx0, idx1, lidx, tokens, line);

            };
        }
        else if ((c == std::byte('/')) && (idx < end) && (src[idx] == std::byte('/')))
        {
            idx++;
            while (idx < end)
            {
                const std::byte c1 = src[idx++];
                if (c1 == std::byte('\n'))
                {
                    line++;
                    lidx = (idx - 1);
                    break;
                };
            };
        }
        else if ((c == std::byte('/')) && (idx < end) && (src[idx] == std::byte('*')))
        {
            idx++;
            while (idx < end)
            {
                const std::byte c_1 = src[idx++];
                if (c_1 == std::byte('\n'))
                {
                    line++;
                    lidx = (idx - 1);
                }
                else if ((c_1 == std::byte('*')) && (idx < end) && (src[idx] == std::byte('/')))
                {
                    idx++;
                    break;
                };
            };
        }
        else if (fu::has(OPTOKENS, c))
        {
            fu_STR candidate = fu_STR { fu_STR::INIT<1> { std::byte(c) } };
            while (idx < end)
            {
                const std::byte c_1 = src[idx++];
                if (fu::has(OPTOKENS, c_1))
                {
                    fu_STR c1 = (candidate + c_1);
                    if (fu::has(MBOPS, c1))
                    {
                        candidate = c1;
                        continue;
                    };
                };
                idx--;
                break;
            };
            token("op"_fu, candidate, idx0, idx, lidx, tokens, line);
        }
        else
            err("?"_fu, idx0, idx0, src, idx, end, lidx, fname, line);

    };
    line++;
    lidx = (idx + 0);
    token("eof"_fu, "eof"_fu, idx, idx, lidx, tokens, line);
    return s_LexerOutput { fu_STR(fname), fu_VEC<s_Token>(tokens) };
}

#endif
