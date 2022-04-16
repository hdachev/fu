#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/cmp.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_LexerOutput;
struct s_Token;
enum s_kind: fu::i8;
fu_STR lower_FZjKqN6X(fu_STR&&);
fu_STR bytes_BKZeX3f7(unsigned);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::i8
{
    s_kind_sof = 1,
    s_kind_id = 2,
    s_kind_op = 3,
    s_kind_int = 4,
    s_kind_real = 5,
    s_kind_char = 6,
    s_kind_str = 7,
    s_kind_err = 8,
    s_kind_eof = 9,
    s_kind_root = 10,
    s_kind_block = 11,
    s_kind_argid = 12,
    s_kind_let = 13,
    s_kind_call = 14,
    s_kind_arrlit = 15,
    s_kind_if = 16,
    s_kind_or = 17,
    s_kind_and = 18,
    s_kind_loop = 19,
    s_kind_break = 20,
    s_kind_return = 21,
    s_kind_continue = 22,
    s_kind_bool = 23,
    s_kind_definit = 24,
    s_kind_import = 25,
    s_kind_defer = 26,
    s_kind_try = 27,
    s_kind_typedef = 28,
    s_kind_typecast = 29,
    s_kind_typeassert = 30,
    s_kind_typeparam = 31,
    s_kind_addroffn = 32,
    s_kind_forfieldsof = 33,
    s_kind_pragma = 34,
    s_kind_void = 35,
    s_kind_struct = 36,
    s_kind_primitive = 37,
    s_kind_flags = 38,
    s_kind_enum = 39,
    s_kind_members = 40,
    s_kind_fn = 41,
    s_kind_fnbranch = 42,
    s_kind_pattern = 43,
    s_kind_typeunion = 44,
    s_kind_typetag = 45,
    s_kind_jump = 46,
    s_kind_empty = 47,
    s_kind_letdef = 48,
    s_kind___relaxed = 49,
    s_kind___convert = 50,
    s_kind_fndef = 51,
    s_kind_copy = 52,
    s_kind_move = 53,
    s_kind___far_jump = 54,
    s_kind___no_kind_yet = 55,
    s_kind_type = 56,
    s_kind_var = 57,
    s_kind_field = 58,
    s_kind_enumv = 59,
    s_kind_template = 60,
    s_kind___native = 61,
    s_kind_inline = 62,
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_kind kind;
    fu_STR value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static const fu_STR OPTOKENS fu_INIT_PRIORITY(1001) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;

static const fu_VEC<fu_STR> MBOPS fu_INIT_PRIORITY(1001) = fu_VEC<fu_STR> { fu::slate<41, fu_STR> { "++"_fu, "--"_fu, "**"_fu, "<<"_fu, "<<<"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "<=>"_fu, "<>"_fu, "=>"_fu, "->"_fu, "|>"_fu, "<|"_fu, "??"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu } };

static void token_c_2SUAvfDz(const s_kind kind, const fu_STR& value, const int idx0, const int idx1, const int col, fu_VEC<s_Token>& tokens, const int line)
{
    if (!((col >= 0)))
        fu_ASSERT();

    tokens += s_Token { s_kind(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) };
}

static void token_vNTsqg6e(const s_kind kind, const fu_STR& value, const int idx0, const int idx1, const int lidx, fu_VEC<s_Token>& tokens, const int line)
{
    const int col = (idx0 - lidx);
    token_c_2SUAvfDz(kind, value, idx0, idx1, col, tokens, line);
}

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_str_x2XZ9C2m
                                #define DEF_str_x2XZ9C2m
inline fu_STR str_x2XZ9C2m(const s_kind n)
{

    {
        if (n == s_kind_sof)
            return "sof"_fu;

        if (n == s_kind_id)
            return "id"_fu;

        if (n == s_kind_op)
            return "op"_fu;

        if (n == s_kind_int)
            return "int"_fu;

        if (n == s_kind_real)
            return "real"_fu;

        if (n == s_kind_char)
            return "char"_fu;

        if (n == s_kind_str)
            return "str"_fu;

        if (n == s_kind_err)
            return "err"_fu;

        if (n == s_kind_eof)
            return "eof"_fu;

        if (n == s_kind_root)
            return "root"_fu;

        if (n == s_kind_block)
            return "block"_fu;

        if (n == s_kind_argid)
            return "argid"_fu;

        if (n == s_kind_let)
            return "let"_fu;

        if (n == s_kind_call)
            return "call"_fu;

        if (n == s_kind_arrlit)
            return "arrlit"_fu;

        if (n == s_kind_if)
            return "if"_fu;

        if (n == s_kind_or)
            return "or"_fu;

        if (n == s_kind_and)
            return "and"_fu;

        if (n == s_kind_loop)
            return "loop"_fu;

        if (n == s_kind_break)
            return "break"_fu;

        if (n == s_kind_return)
            return "return"_fu;

        if (n == s_kind_continue)
            return "continue"_fu;

        if (n == s_kind_bool)
            return "bool"_fu;

        if (n == s_kind_definit)
            return "definit"_fu;

        if (n == s_kind_import)
            return "import"_fu;

        if (n == s_kind_defer)
            return "defer"_fu;

        if (n == s_kind_try)
            return "try"_fu;

        if (n == s_kind_typedef)
            return "typedef"_fu;

        if (n == s_kind_typecast)
            return "typecast"_fu;

        if (n == s_kind_typeassert)
            return "typeassert"_fu;

        if (n == s_kind_typeparam)
            return "typeparam"_fu;

        if (n == s_kind_addroffn)
            return "addroffn"_fu;

        if (n == s_kind_forfieldsof)
            return "forfieldsof"_fu;

        if (n == s_kind_pragma)
            return "pragma"_fu;

        if (n == s_kind_void)
            return "void"_fu;

        if (n == s_kind_struct)
            return "struct"_fu;

        if (n == s_kind_primitive)
            return "primitive"_fu;

        if (n == s_kind_flags)
            return "flags"_fu;

        if (n == s_kind_enum)
            return "enum"_fu;

        if (n == s_kind_members)
            return "members"_fu;

        if (n == s_kind_fn)
            return "fn"_fu;

        if (n == s_kind_fnbranch)
            return "fnbranch"_fu;

        if (n == s_kind_pattern)
            return "pattern"_fu;

        if (n == s_kind_typeunion)
            return "typeunion"_fu;

        if (n == s_kind_typetag)
            return "typetag"_fu;

        if (n == s_kind_jump)
            return "jump"_fu;

        if (n == s_kind_empty)
            return "empty"_fu;

        if (n == s_kind_letdef)
            return "letdef"_fu;

        if (n == s_kind___relaxed)
            return "__relaxed"_fu;

        if (n == s_kind___convert)
            return "__convert"_fu;

        if (n == s_kind_fndef)
            return "fndef"_fu;

        if (n == s_kind_copy)
            return "copy"_fu;

        if (n == s_kind_move)
            return "move"_fu;

        if (n == s_kind___far_jump)
            return "__far_jump"_fu;

        if (n == s_kind___no_kind_yet)
            return "__no_kind_yet"_fu;

        if (n == s_kind_type)
            return "type"_fu;

        if (n == s_kind_var)
            return "var"_fu;

        if (n == s_kind_field)
            return "field"_fu;

        if (n == s_kind_enumv)
            return "enumv"_fu;

        if (n == s_kind_template)
            return "template"_fu;

        if (n == s_kind___native)
            return "__native"_fu;

        if (n == s_kind_inline)
            return "inline"_fu;

    };
    return fu::i64dec(int64_t(n));
}
                                #endif

[[noreturn]] static fu::never err_str_7uHF3JsP(const s_kind kind, const int idx0, fu::view<char> reason, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
{
    while ((idx < end) && (src[idx] > ' '))
        idx++;

    const int col = (idx0 - lidx);
    fu_STR value = fu::slice(src, idx0, idx);
    fu::fail((((x7E((((x7E((x7E((("LEX ERROR: "_fu + fname) + "@"_fu), fu::i64dec(line)) + ":"_fu), fu::i64dec(col)) + ":\n\t"_fu) + reason) + "\n\t"_fu), str_x2XZ9C2m(kind)) + ": `"_fu) + value) + "`"_fu));
}

[[noreturn]] static fu::never err_ygtWD6ct(const s_kind kind, const int idx0, const int reason, const fu_STR& src, int& idx, const int end, const int lidx, fu::view<char> fname, const int line)
{
    err_str_7uHF3JsP(kind, idx0, (("`"_fu + src[reason]) + "`"_fu), idx, end, src, lidx, fname, line);
}

static unsigned parseHex_Bg1ItGXc(fu::view<char> topic, fu::view<char> esc, int& i, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
{
    const char c = esc[++i];
    return (((c >= '0') && (c <= '9')) ? (unsigned(fu::u8(c)) - unsigned(fu::u8('0'))) : (((c >= 'A') && (c <= 'F')) ? ((unsigned(fu::u8(c)) - unsigned(fu::u8('A'))) + 10u) : (((c >= 'a') && (c <= 'f')) ? ((unsigned(fu::u8(c)) - unsigned(fu::u8('a'))) + 10u) : err_str_7uHF3JsP(s_kind_str, (i - 1), (((("Non hexadecimal character in "_fu + topic) + ": `"_fu) + c) + "`."_fu), idx, end, src, lidx, fname, line))));
}

static fu_STR UNSAFE_unescapeStr_5LF9vqP6(fu::view<char> esc, const int idx0, const int idx1, const char quot, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
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
                out += char(quot);
            else if (c1 == 'x')
            {
                if ((i >= (n - 2)))
                    err_str_7uHF3JsP(s_kind_str, (i - 1), "Incomplete \\x-escape sequence."_fu, idx, end, src, lidx, fname, line);

                unsigned _0 {};
                out += char((_0 = (parseHex_Bg1ItGXc("\\x-escape sequence"_fu, esc, i, idx, end, src, lidx, fname, line) << 4u), (unsigned(_0) | parseHex_Bg1ItGXc("\\x-escape sequence"_fu, esc, i, idx, end, src, lidx, fname, line))));
            }
            else if (c1 == 'u')
            {
                if ((i == n) || (esc[++i] != '{'))
                    err_str_7uHF3JsP(s_kind_str, (i - 1), "Invalid \\u-escape: no opening `{`."_fu, idx, end, src, lidx, fname, line);

                unsigned unicode {};
                int digits = 0;

                { {
                    while (++i < n)
                    {
                        if (esc[i] == '}')
                            goto BL_19;
                        else if (digits == 6)
                            err_str_7uHF3JsP(s_kind_str, (i - 1), "Invalid \\u-escape: no closing `}` after 6 digits."_fu, idx, end, src, lidx, fname, line);

                        digits++;
                        unicode <<= 4u;
                        i--;
                        unicode |= parseHex_Bg1ItGXc("\\u-escape sequence"_fu, esc, i, idx, end, src, lidx, fname, line);
                    };
                    err_str_7uHF3JsP(s_kind_str, (i - 1), "Incomplete \\u-escape: no closing `}`."_fu, idx, end, src, lidx, fname, line);
                  } BL_19:;
                };
                if (!digits)
                    err_str_7uHF3JsP(s_kind_str, (i - 1), "Empty \\u-escape."_fu, idx, end, src, lidx, fname, line);

                fu_STR _1 {};
                out += ((_1 = bytes_BKZeX3f7(unicode)) ? static_cast<fu_STR&&>(_1) : err_str_7uHF3JsP(s_kind_str, (i - 1), "Invalid \\u-escape: bad code point."_fu, idx, end, src, lidx, fname, line));
            }
            else
                err_str_7uHF3JsP(s_kind_str, (i - 1), "Unknown escape sequence."_fu, idx, end, src, lidx, fname, line);

        }
        else
            out += char(c);

    };
    return /*NRVO*/ out;
}

                                #ifndef DEF_has_cnCAmU7Y
                                #define DEF_has_cnCAmU7Y
inline bool has_cnCAmU7Y(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_has_tkmelWjn
                                #define DEF_has_tkmelWjn
inline bool has_tkmelWjn(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

s_LexerOutput lex_uzLKWC6R(const fu_STR& src, fu::view<char> fname)
{
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    fu_VEC<s_Token> tokens {};
    token_vNTsqg6e(s_kind_sof, "sof"_fu, idx, idx, lidx, tokens, line);
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
            token_vNTsqg6e(s_kind_id, fu::slice(src, idx0, idx1), idx0, idx1, lidx, tokens, line);
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
                    err_str_7uHF3JsP(s_kind_real, idx0, ("Leading `0` in numeric literal,"_fu + " perhaps you meant `0x`, `0b` or `0o`."_fu), idx, end, src, lidx, fname, line);

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
                        err_ygtWD6ct(s_kind_real, idx0, (idx - 1), src, idx, end, lidx, fname, line);

                    dot = true;
                }
                else if ((hex ? ((c_1 == 'p') || (c_1 == 'P')) : ((c_1 == 'e') || (c_1 == 'E'))))
                {
                    if (exp)
                        err_ygtWD6ct(s_kind_real, idx0, (idx - 1), src, idx, end, lidx, fname, line);

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
                err_ygtWD6ct(s_kind_real, idx0, (idx - 1), src, idx, end, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                fu_STR str = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp)
                    err_str_7uHF3JsP(s_kind_real, idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), idx, end, src, lidx, fname, line);
                else
                    token_vNTsqg6e(((dot || exp) ? s_kind_real : s_kind_int), lower_FZjKqN6X(fu_STR(str)), idx0, idx1, lidx, tokens, line);

            };
        }
        else if ((c == '\'') || (c == '"') || (c == '`'))
        {
            bool esc = false;
            bool ok = false;
            const int col = ((idx - lidx) - 1);
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
                err_str_7uHF3JsP(s_kind_str, idx0, "Unterminated string literal."_fu, idx, end, src, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                fu_STR str = (esc ? UNSAFE_unescapeStr_5LF9vqP6(src, idx0, idx1, c, idx, end, src, lidx, fname, line) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == '\'');
                if (cHar && (str.size() != 1))
                    err_str_7uHF3JsP(s_kind_char, idx0, x7E("Char literal len != 1: "_fu, fu::i64dec(str.size())), idx, end, src, lidx, fname, line);
                else
                    token_c_2SUAvfDz((cHar ? s_kind_char : s_kind_str), str, idx0, idx1, col, tokens, line);

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
        else if (has_cnCAmU7Y(OPTOKENS, c))
        {
            fu_STR candidate = fu_STR { fu::slate<1, char> { char(c) } };
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (has_cnCAmU7Y(OPTOKENS, c_1))
                {
                    fu_STR c1 = (candidate + c_1);
                    if (has_tkmelWjn(MBOPS, c1))
                    {
                        candidate = c1;
                        continue;
                    };
                };
                idx--;
                break;
            };
            token_vNTsqg6e(s_kind_op, candidate, idx0, idx, lidx, tokens, line);
        }
        else
            err_ygtWD6ct(s_kind_err, idx0, idx0, src, idx, end, lidx, fname, line);

    };
    line++;
    lidx = (idx + 0);
    token_vNTsqg6e(s_kind_eof, "eof"_fu, idx, idx, lidx, tokens, line);
    return s_LexerOutput { fu_VEC<s_Token>(tokens) };
}

#endif
