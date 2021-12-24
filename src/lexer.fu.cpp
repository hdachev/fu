
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/init_priority.h>
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

[[noreturn]] static fu::never err(fu::view<char>, int, int, const fu_STR&, int&, int, int, fu::view<char>, int);
fu_STR ascii_lower(const fu_STR&);
static void token(const fu_STR&, const fu_STR&, int, int, int, fu_VEC<s_Token>&, int);

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

static const fu_STR OPTOKENS fu_INIT_PRIORITY(1002) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;

static const fu_VEC<fu_STR> MBOPS fu_INIT_PRIORITY(1002) = fu_VEC<fu_STR> { fu::slate<40, fu_STR> { "++"_fu, "--"_fu, "**"_fu, "<<"_fu, "<<<"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "=>"_fu, "->"_fu, "<=>"_fu, "|>"_fu, "<|"_fu, "??"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu } };

static void token_c(const fu_STR& kind, const fu_STR& value, const int idx0, const int idx1, const int col, fu_VEC<s_Token>& tokens, const int line)
{
    if (!((col >= 0)))
        fu_ASSERT();

    tokens += s_Token { fu_STR(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) };
}

static void token(const fu_STR& kind, const fu_STR& value, const int idx0, const int idx1, const int lidx, fu_VEC<s_Token>& tokens, const int line)
{
    const int col = (idx0 - lidx);
    token_c(kind, value, idx0, idx1, col, tokens, line);
}

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never err_str(fu::view<char> kind, const int idx0, fu::view<char> reason, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
{
    while ((idx < end) && (src[idx] > ' '))
        idx++;

    const int col = (idx0 - lidx);
    fu_STR value = fu::slice(src, idx0, idx);
    fu::fail((((((((x7E_OZkl((x7E_OZkl((("LEX ERROR: "_fu + fname) + "@"_fu), fu::i64dec(line)) + ":"_fu), fu::i64dec(col)) + ":\n\t"_fu) + reason) + "\n\t"_fu) + kind) + ": `"_fu) + value) + "`"_fu));
}

[[noreturn]] static fu::never err(fu::view<char> kind, const int idx0, const int reason, const fu_STR& src, int& idx, const int end, const int lidx, fu::view<char> fname, const int line)
{
    err_str(kind, idx0, (("`"_fu + src[reason]) + "`"_fu), idx, end, src, lidx, fname, line);
}

static int parseHex(fu::view<char> esc, int& i, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
{
    const char c = esc[++i];
    return (((c >= '0') && (c <= '9')) ? (int(fu::u8(c)) - int(fu::u8('0'))) : (((c >= 'A') && (c <= 'F')) ? ((int(fu::u8(c)) - int(fu::u8('A'))) + 10) : (((c >= 'a') && (c <= 'f')) ? ((int(fu::u8(c)) - int(fu::u8('a'))) + 10) : err_str("str"_fu, (i - 1), "Non hexadecimal character in \\x-escape sequence."_fu, idx, end, src, lidx, fname, line))));
}

static fu_STR UNSAFE_unescapeStr(fu::view<char> esc, const int idx0, const int idx1, const char quot, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
{
    /*MOV*/ fu_STR out {};
    const int n = (idx1 - 1);
    for (int i = (idx0 + 1); i < n; i++)
    {
        const char c = esc[i];
        if (c == '\\')
        {
            const char c1 = esc[++i];
            if (c1 == '\\')
                out += '\\';
            else if (c1 == 'n')
                out += '\n';
            else if (c1 == 'r')
                out += '\r';
            else if (c1 == 't')
                out += '\t';
            else if (c1 == 'f')
                out += '\x0C';
            else if (c1 == 'v')
                out += '\v';
            else if (c1 == '0')
                out += '\x00';
            else if (c1 == 'a')
                out += '\x07';
            else if (c1 == 'b')
                out += '\x08';
            else if (c1 == 'e')
                out += '\x1B';
            else if (c1 == quot)
                out += quot;
            else if (c1 == 'x')
            {
                if ((i >= (n - 2)))
                    err_str("str"_fu, (i - 1), "Incomplete \\x-escape sequence."_fu, idx, end, src, lidx, fname, line);

                int _0 {};
                out += char((_0 = (parseHex(esc, i, idx, end, src, lidx, fname, line) << 4), (int(_0) | parseHex(esc, i, idx, end, src, lidx, fname, line))));
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
inline bool has_05eu(fu::view<char> a, const char b)
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
inline bool has_VtCz(fu::view<fu_STR> a, fu::view<char> b)
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
        const char c = src[idx++];
        if ((c <= ' '))
        {
            if (c == '\n')
            {
                line++;
                lidx = (idx - 1);
            };
        }
        else if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || (c == '_'))
        {
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (((c_1 >= 'A') && (c_1 <= 'Z')) || ((c_1 >= 'a') && (c_1 <= 'z')) || (c_1 == '_') || ((c_1 >= '0') && (c_1 <= '9')))
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
        else if ((c >= '0') && (c <= '9'))
        {
            bool hex = false;
            bool dot = false;
            bool exp = false;
            bool ob = false;
            char max = '9';
            if (c == '0')
            {
                const char c_1 = ((idx < end) ? src[idx] : (*(const char*)fu::NIL));
                if ((c_1 == 'x') || (c_1 == 'X'))
                {
                    hex = true;
                    idx++;
                }
                else if ((c_1 == 'o') || (c_1 == 'O'))
                {
                    ob = true;
                    max = '7';
                    idx++;
                }
                else if ((c_1 == 'b') || (c_1 == 'B'))
                {
                    ob = true;
                    max = '1';
                    idx++;
                }
                else if ((c_1 >= '0') && (c_1 <= '9'))
                    err_str("real"_fu, idx0, ("Leading `0` in numeric literal,"_fu + " perhaps you meant `0x`, `0b` or `0o`."_fu), idx, end, src, lidx, fname, line);

            };
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (((c_1 >= '0') && (c_1 <= max)) || (hex && (((c_1 >= 'a') && (c_1 <= 'f')) || ((c_1 >= 'A') && (c_1 <= 'F')))))
                {
                }
                else if (ob)
                {
                    idx--;
                    break;
                }
                else if (c_1 == '.')
                {
                    const char c_2 = ((idx < end) ? src[idx] : (*(const char*)fu::NIL));
                    if (!(((c_2 >= '0') && (c_2 <= '9')) || (hex && (((c_2 >= 'a') && (c_2 <= 'f')) || ((c_2 >= 'A') && (c_2 <= 'F'))))))
                    {
                        idx--;
                        break;
                    };
                    if (dot || exp)
                        err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);

                    dot = true;
                }
                else if ((hex ? ((c_1 == 'p') || (c_1 == 'P')) : ((c_1 == 'e') || (c_1 == 'E'))))
                {
                    if (exp)
                        err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);

                    if ((idx < end) && ((src[idx] == '-') || (src[idx] == '+')))
                        idx++;

                    exp = true;
                }
                else if (c_1 == '_')
                {
                    const char c_2 = ((idx < end) ? src[idx] : (*(const char*)fu::NIL));
                    if (!(((c_2 >= '0') && (c_2 <= '9')) || (hex && (((c_2 >= 'a') && (c_2 <= 'f')) || ((c_2 >= 'A') && (c_2 <= 'F'))))))
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
            const char trail = src[(idx - 1)];
            if (!((trail >= '0') && (trail <= '9')) && !(hex && (((trail >= 'a') && (trail <= 'f')) || ((trail >= 'A') && (trail <= 'F')))))
                err("real"_fu, idx0, (idx - 1), src, idx, end, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                fu_STR str = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp)
                    err_str("real"_fu, idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), idx, end, src, lidx, fname, line);
                else
                    token(((dot || exp) ? "real"_fu : "int"_fu), ascii_lower(str), idx0, idx1, lidx, tokens, line);

            };
        }
        else if ((c == '\'') || (c == '"') || (c == '`'))
        {
            bool esc = false;
            bool ok = false;
            const int col = (idx - lidx);
            while (idx < end)
            {
                const char c1 = src[idx++];
                if (c1 == c)
                {
                    ok = true;
                    break;
                }
                else if (c1 == '\\')
                {
                    esc = true;
                    idx++;
                }
                else if (c1 == '\n')
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
                fu_STR str = (esc ? UNSAFE_unescapeStr(src, idx0, idx1, c, idx, end, src, lidx, fname, line) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == '\'');
                fu_STR kind = (cHar ? "char"_fu : "str"_fu);
                if (cHar && (str.size() != 1))
                    err_str("char"_fu, idx0, x7E_OZkl("Char literal len != 1: "_fu, fu::i64dec(str.size())), idx, end, src, lidx, fname, line);
                else
                    token_c(kind, str, idx0, idx1, col, tokens, line);

            };
        }
        else if ((c == '/') && (idx < end) && (src[idx] == '/'))
        {
            idx++;
            while (idx < end)
            {
                const char c1 = src[idx++];
                if (c1 == '\n')
                {
                    line++;
                    lidx = (idx - 1);
                    break;
                };
            };
        }
        else if ((c == '/') && (idx < end) && (src[idx] == '*'))
        {
            idx++;
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (c_1 == '\n')
                {
                    line++;
                    lidx = (idx - 1);
                }
                else if ((c_1 == '*') && (idx < end) && (src[idx] == '/'))
                {
                    idx++;
                    break;
                };
            };
        }
        else if (has_05eu(OPTOKENS, c))
        {
            fu_STR candidate = fu_STR { fu::slate<1, char> { char(c) } };
            while (idx < end)
            {
                const char c_1 = src[idx++];
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
