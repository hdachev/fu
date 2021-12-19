
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

struct s_LexerOutput;
struct s_Token;

[[noreturn]] static fu::never err(fu::view<fu::byte>, int, int, const fu_STR&, int&, int, int, fu::view<fu::byte>, int);
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

static const fu_VEC<fu_STR> MBOPS = fu_VEC<fu_STR> { fu::slate<40, fu_STR> { "++"_fu, "--"_fu, "**"_fu, "<<"_fu, "<<<"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "=>"_fu, "->"_fu, "<=>"_fu, "|>"_fu, "<|"_fu, "??"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu } };

static void token(const fu_STR& kind, const fu_STR& value, const int idx0, const int idx1, const int lidx, fu_VEC<s_Token>& tokens, const int line)
{
    const int col = (idx0 - lidx);
    tokens.push(s_Token { fu_STR(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) });
}

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never err_str(fu::view<fu::byte> kind, const int idx0, fu::view<fu::byte> reason, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<fu::byte> fname, const int line)
{
    while ((idx < end) && (src[idx] > fu::byte(' ')))
        idx++;

    const int col = (idx0 - lidx);
    fu_STR value = fu::slice(src, idx0, idx);
    fu::fail((((((((x7E_OZkl((x7E_OZkl((("LEX ERROR: "_fu + fname) + "@"_fu), fu::i64dec(line)) + ":"_fu), fu::i64dec(col)) + ":\n\t"_fu) + reason) + "\n\t"_fu) + kind) + ": `"_fu) + value) + "`"_fu));
}

[[noreturn]] static fu::never err(fu::view<fu::byte> kind, const int idx0, const int reason, const fu_STR& src, int& idx, const int end, const int lidx, fu::view<fu::byte> fname, const int line)
{
    err_str(kind, idx0, (("`"_fu + src[reason]) + "`"_fu), idx, end, src, lidx, fname, line);
}

static int parseHex(fu::view<fu::byte> esc, int& i, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<fu::byte> fname, const int line)
{
    const fu::byte c_1 = esc[++i];
    return (((c_1 >= fu::byte('0')) && (c_1 <= fu::byte('9'))) ? (int(c_1) - int(fu::byte('0'))) : (((c_1 >= fu::byte('A')) && (c_1 <= fu::byte('F'))) ? ((int(c_1) - int(fu::byte('A'))) + 10) : (((c_1 >= fu::byte('a')) && (c_1 <= fu::byte('f'))) ? ((int(c_1) - int(fu::byte('a'))) + 10) : err_str("str"_fu, (i - 1), "Non hexadecimal character in \\x-escape sequence."_fu, idx, end, src, lidx, fname, line))));
}

static fu_STR UNSAFE_unescapeStr(fu::view<fu::byte> esc, const int idx0, const int idx1, const fu::byte quot, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<fu::byte> fname, const int line)
{
    /*MOV*/ fu_STR out {};
    const int n = (idx1 - 1);
    for (int i = (idx0 + 1); i < n; i++)
    {
        const fu::byte c = esc[i];
        if (c == fu::byte('\\'))
        {
            const fu::byte c1 = esc[++i];
            if (c1 == fu::byte('\\'))
                out += fu::byte('\\');
            else if (c1 == fu::byte('n'))
                out += fu::byte('\n');
            else if (c1 == fu::byte('r'))
                out += fu::byte('\r');
            else if (c1 == fu::byte('t'))
                out += fu::byte('\t');
            else if (c1 == fu::byte('f'))
                out += fu::byte('\x0C');
            else if (c1 == fu::byte('v'))
                out += fu::byte('\v');
            else if (c1 == fu::byte('0'))
                out += fu::byte('\x00');
            else if (c1 == fu::byte('a'))
                out += fu::byte('\x07');
            else if (c1 == fu::byte('b'))
                out += fu::byte('\x08');
            else if (c1 == fu::byte('e'))
                out += fu::byte('\x1B');
            else if (c1 == quot)
                out += quot;
            else if (c1 == fu::byte('x'))
            {
                if ((i >= (n - 2)))
                    err_str("str"_fu, (i - 1), "Incomplete \\x-escape sequence."_fu, idx, end, src, lidx, fname, line);

                int _0 {};
                out += fu::byte((_0 = (parseHex(esc, i, idx, end, src, lidx, fname, line) << 4), (int(_0) | parseHex(esc, i, idx, end, src, lidx, fname, line))));
            }
            else
                err_str("str"_fu, (i - 1), "Unknown escape sequence."_fu, idx, end, src, lidx, fname, line);

        }
        else
            out += c;

    };
    return /*NRVO*/ out;
}

                                #ifndef DEFt_has_05eu
                                #define DEFt_has_05eu
inline bool has_05eu(fu::view<fu::byte> a, const fu::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

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
        const fu::byte c = src[idx++];
        if ((c <= fu::byte(' ')))
        {
            if (c == fu::byte('\n'))
            {
                line++;
                lidx = (idx - 1);
            };
        }
        else if (((c >= fu::byte('A')) && (c <= fu::byte('Z'))) || ((c >= fu::byte('a')) && (c <= fu::byte('z'))) || (c == fu::byte('_')))
        {
            while (idx < end)
            {
                const fu::byte c_1 = src[idx++];
                if (((c_1 >= fu::byte('A')) && (c_1 <= fu::byte('Z'))) || ((c_1 >= fu::byte('a')) && (c_1 <= fu::byte('z'))) || (c_1 == fu::byte('_')) || ((c_1 >= fu::byte('0')) && (c_1 <= fu::byte('9'))))
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
        else if ((c >= fu::byte('0')) && (c <= fu::byte('9')))
        {
            bool hex = false;
            bool dot = false;
            bool exp_1 = false;
            bool ob = false;
            fu::byte max_1 = fu::byte('9');
            if (c == fu::byte('0'))
            {
                const fu::byte c_1 = ((idx < end) ? src[idx] : (*(const fu::byte*)fu::NIL));
                if ((c_1 == fu::byte('x')) || (c_1 == fu::byte('X')))
                {
                    hex = true;
                    idx++;
                }
                else if ((c_1 == fu::byte('o')) || (c_1 == fu::byte('O')))
                {
                    ob = true;
                    max_1 = fu::byte('7');
                    idx++;
                }
                else if ((c_1 == fu::byte('b')) || (c_1 == fu::byte('B')))
                {
                    ob = true;
                    max_1 = fu::byte('1');
                    idx++;
                }
                else if ((c_1 >= fu::byte('0')) && (c_1 <= fu::byte('9')))
                    err_str("real"_fu, idx0, ("Leading `0` in numeric literal,"_fu + " perhaps you meant `0x`, `0b` or `0o`."_fu), idx, end, src, lidx, fname, line);

            };
            while (idx < end)
            {
                const fu::byte c_1 = src[idx++];
                if (((c_1 >= fu::byte('0')) && (c_1 <= max_1)) || (hex && (((c_1 >= fu::byte('a')) && (c_1 <= fu::byte('f'))) || ((c_1 >= fu::byte('A')) && (c_1 <= fu::byte('F'))))))
                {
                }
                else if (ob)
                {
                    idx--;
                    break;
                }
                else if (c_1 == fu::byte('.'))
                {
                    const fu::byte c_2 = ((idx < end) ? src[idx] : (*(const fu::byte*)fu::NIL));
                    if (!(((c_2 >= fu::byte('0')) && (c_2 <= fu::byte('9'))) || (hex && (((c_2 >= fu::byte('a')) && (c_2 <= fu::byte('f'))) || ((c_2 >= fu::byte('A')) && (c_2 <= fu::byte('F')))))))
                    {
                        idx--;
                        break;
                    };
                    if (dot || exp_1)
                        err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);

                    dot = true;
                }
                else if ((hex ? ((c_1 == fu::byte('p')) || (c_1 == fu::byte('P'))) : ((c_1 == fu::byte('e')) || (c_1 == fu::byte('E')))))
                {
                    if (exp_1)
                        err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);

                    if ((idx < end) && ((src[idx] == fu::byte('-')) || (src[idx] == fu::byte('+'))))
                        idx++;

                    exp_1 = true;
                }
                else if (c_1 == fu::byte('_'))
                {
                    const fu::byte c_2 = ((idx < end) ? src[idx] : (*(const fu::byte*)fu::NIL));
                    if (!(((c_2 >= fu::byte('0')) && (c_2 <= fu::byte('9'))) || (hex && (((c_2 >= fu::byte('a')) && (c_2 <= fu::byte('f'))) || ((c_2 >= fu::byte('A')) && (c_2 <= fu::byte('F')))))))
                    {
                        idx--;
                        break;
                    };
                }
                else
                {
                    idx--;
                    break;
                };
            };
            const fu::byte trail = src[(idx - 1)];
            if (!((trail >= fu::byte('0')) && (trail <= fu::byte('9'))) && !(hex && (((trail >= fu::byte('a')) && (trail <= fu::byte('f'))) || ((trail >= fu::byte('A')) && (trail <= fu::byte('F'))))))
                err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                fu_STR str_1 = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp_1)
                    err_str("real"_fu, idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), idx, end, src, lidx, fname, line);
                else
                    token(((dot || exp_1) ? "real"_fu : "int"_fu), ascii_lower(str_1), idx0, idx1, lidx, tokens, line);

            };
        }
        else if ((c == fu::byte('\'')) || (c == fu::byte('"')) || (c == fu::byte('`')))
        {
            bool esc = false;
            bool ok = false;
            while (idx < end)
            {
                const fu::byte c1 = src[idx++];
                if (c1 == c)
                {
                    ok = true;
                    break;
                }
                else if (c1 == fu::byte('\\'))
                {
                    esc = true;
                    idx++;
                }
                else if (c1 == fu::byte('\n'))
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
                fu_STR str_1 = (esc ? UNSAFE_unescapeStr(src, idx0, idx1, c, idx, end, src, lidx, fname, line) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == fu::byte('\''));
                fu_STR kind = (cHar ? "char"_fu : "str"_fu);
                if (cHar && (str_1.size() != 1))
                    err_str("char"_fu, idx0, x7E_OZkl("Char literal len != 1: "_fu, fu::i64dec(str_1.size())), idx, end, src, lidx, fname, line);
                else
                    token(kind, str_1, idx0, idx1, lidx, tokens, line);

            };
        }
        else if ((c == fu::byte('/')) && (idx < end) && (src[idx] == fu::byte('/')))
        {
            idx++;
            while (idx < end)
            {
                const fu::byte c1 = src[idx++];
                if (c1 == fu::byte('\n'))
                {
                    line++;
                    lidx = (idx - 1);
                    break;
                };
            };
        }
        else if ((c == fu::byte('/')) && (idx < end) && (src[idx] == fu::byte('*')))
        {
            idx++;
            while (idx < end)
            {
                const fu::byte c_1 = src[idx++];
                if (c_1 == fu::byte('\n'))
                {
                    line++;
                    lidx = (idx - 1);
                }
                else if ((c_1 == fu::byte('*')) && (idx < end) && (src[idx] == fu::byte('/')))
                {
                    idx++;
                    break;
                };
            };
        }
        else if (has_05eu(OPTOKENS, c))
        {
            fu_STR candidate = fu_STR { fu::slate<1, fu::byte> { fu::byte(c) } };
            while (idx < end)
            {
                const fu::byte c_1 = src[idx++];
                if (has_05eu(OPTOKENS, c_1))
                {
                    fu_STR c1 = (candidate + c_1);
                    if (has_VtCz(MBOPS, c1))
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
