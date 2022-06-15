#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_LexerOutput;
struct s_Token;
enum s_kind: fu::u8;
fu_STR lower_FZjKqN6X(fu_STR&&);
fu_STR bytes_BKZeX3f7(unsigned);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
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
    s_kind_unwrap = 33,
    s_kind_forfieldsof = 34,
    s_kind_pragma = 35,
    s_kind_void = 36,
    s_kind_struct = 37,
    s_kind_union = 38,
    s_kind_primitive = 39,
    s_kind_flags = 40,
    s_kind_enum = 41,
    s_kind_members = 42,
    s_kind_fn = 43,
    s_kind_fnbranch = 44,
    s_kind_pattern = 45,
    s_kind_typeunion = 46,
    s_kind_typetag = 47,
    s_kind_jump = 48,
    s_kind_empty = 49,
    s_kind_letdef = 50,
    s_kind___relaxed = 51,
    s_kind___convert = 52,
    s_kind_fndef = 53,
    s_kind_copy = 54,
    s_kind_move = 55,
    s_kind___far_jump = 56,
    s_kind___no_kind_yet = 57,
    s_kind_type = 58,
    s_kind_var = 59,
    s_kind_field = 60,
    s_kind_enumv = 61,
    s_kind_template = 62,
    s_kind___native = 63,
    s_kind_inline = 64,
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

static const fu_STR OPTOKENS fu_INIT_PRIORITY(1004) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;

static const fu_VEC<fu_STR> MBOPS fu_INIT_PRIORITY(1004) = fu_VEC<fu_STR> { fu::slate<41, fu_STR> { "++"_fu, "--"_fu, "**"_fu, "<<"_fu, "<<<"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "<=>"_fu, "<>"_fu, "=>"_fu, "->"_fu, "|>"_fu, "<|"_fu, "??"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu } };

static void token_c_mYCRTpDV(const s_kind kind, const fu_STR& value, const int idx0, const int idx1, const int col, fu_VEC<s_Token>& tokens, const int line)
{
    if ((col >= 0))
    {
        tokens += s_Token { s_kind(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) };
    }
    else
        fu_ASSERT();

}

static void token_tVDymypQ(const s_kind kind, const fu_STR& value, const int idx0, const int idx1, const int lidx, fu_VEC<s_Token>& tokens, const int line)
{
    const int col = (idx0 - lidx);
    token_c_mYCRTpDV(kind, value, idx0, idx1, col, tokens, line);
}

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_str_x2XZ9C2mr79
                                #define DEF_str_x2XZ9C2mr79
inline fu_STR str_x2XZ9C2m(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
    else if (n == s_kind_id)
        return "id"_fu;
    else if (n == s_kind_op)
        return "op"_fu;
    else if (n == s_kind_int)
        return "int"_fu;
    else if (n == s_kind_real)
        return "real"_fu;
    else if (n == s_kind_char)
        return "char"_fu;
    else if (n == s_kind_str)
        return "str"_fu;
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_kind_if)
    {
        return "if"_fu;
    }
    else if (n == s_kind_or)
        return "or"_fu;
    else if (n == s_kind_and)
        return "and"_fu;
    else if (n == s_kind_loop)
        return "loop"_fu;
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_typedef)
        return "typedef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
    else if (n == s_kind_struct)
        return "struct"_fu;
    else if (n == s_kind_union)
        return "union"_fu;
    else if (n == s_kind_primitive)
        return "primitive"_fu;
    else if (n == s_kind_flags)
        return "flags"_fu;
    else if (n == s_kind_enum)
        return "enum"_fu;
    else if (n == s_kind_members)
        return "members"_fu;
    else if (n == s_kind_fn)
        return "fn"_fu;
    else if (n == s_kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_kind_pattern)
        return "pattern"_fu;
    else if (n == s_kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_kind_typetag)
        return "typetag"_fu;
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
    else if (n == s_kind_fndef)
        return "fndef"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_kind_type)
        return "type"_fu;
    else if (n == s_kind_var)
        return "var"_fu;
    else if (n == s_kind_field)
        return "field"_fu;
    else if (n == s_kind_enumv)
        return "enumv"_fu;
    else if (n == s_kind_template)
        return "template"_fu;
    else if (n == s_kind___native)
        return "__native"_fu;
    else if (n == s_kind_inline)
        return "inline"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

[[noreturn]] static fu::never err_str_c5VmVzzr(const s_kind kind, const int idx0, fu::view<char> reason, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
{
    while ((idx < end) && (src[idx] > ' '))
        idx++;

    const int col = (idx0 - lidx);
    fu_STR value = fu::slice(src, idx0, idx);
    fu::fail((((x7E_YP7BiSZZ((((x7E_YP7BiSZZ((x7E_YP7BiSZZ((("LEX ERROR: "_fu + fname) + "@"_fu), fu::i64dec(line)) + ":"_fu), fu::i64dec(col)) + ":\n\t"_fu) + reason) + "\n\t"_fu), str_x2XZ9C2m(kind)) + ": `"_fu) + value) + "`"_fu));
}

[[noreturn]] static fu::never err_xMbFCKxv(const s_kind kind, const int idx0, const int reason, const fu_STR& src, int& idx, const int end, const int lidx, fu::view<char> fname, const int line)
{
    err_str_c5VmVzzr(kind, idx0, (("`"_fu + src[reason]) + "`"_fu), idx, end, src, lidx, fname, line);
}

static unsigned parseHex_I6qr6TOE(fu::view<char> topic, fu::view<char> esc, int& i, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
{
    const char c = esc[++i];
    if ((c >= '0') && (c <= '9'))
        return unsigned(fu::u8(c)) - unsigned(fu::u8('0'));
    else if ((c >= 'A') && (c <= 'F'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('A'))) + 10u;
    else if ((c >= 'a') && (c <= 'f'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('a'))) + 10u;
    else
        return err_str_c5VmVzzr(s_kind_str, (i - 1), (((("Non hexadecimal character in "_fu + topic) + ": `"_fu) + c) + "`."_fu), idx, end, src, lidx, fname, line);

}

static fu_STR UNSAFE_unescapeStr_f93ergEh(fu::view<char> esc, const int idx0, const int idx1, const char quot, int& idx, const int end, const fu_STR& src, const int lidx, fu::view<char> fname, const int line)
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
                    err_str_c5VmVzzr(s_kind_str, (i - 1), "Incomplete \\x-escape sequence."_fu, idx, end, src, lidx, fname, line);
                else
                {
                    unsigned _0 {};
                    out += char((_0 = (parseHex_I6qr6TOE("\\x-escape sequence"_fu, esc, i, idx, end, src, lidx, fname, line) << 4u), (unsigned(_0) | parseHex_I6qr6TOE("\\x-escape sequence"_fu, esc, i, idx, end, src, lidx, fname, line))));
                };
            }
            else if (c1 == 'u')
            {
                if ((i == n) || (esc[++i] != '{'))
                {
                    err_str_c5VmVzzr(s_kind_str, (i - 1), "Invalid \\u-escape: no opening `{`."_fu, idx, end, src, lidx, fname, line);
                }
                else
                {
                    unsigned unicode {};
                    int digits = 0;

                    { {
                        while (++i < n)
                        {
                            if (esc[i] == '}')
                                goto BL_21;
                            else if (digits == 6)
                                err_str_c5VmVzzr(s_kind_str, (i - 1), "Invalid \\u-escape: no closing `}` after 6 digits."_fu, idx, end, src, lidx, fname, line);

                            digits++;
                            unicode <<= 4u;
                            i--;
                            unicode |= parseHex_I6qr6TOE("\\u-escape sequence"_fu, esc, i, idx, end, src, lidx, fname, line);
                        };
                        err_str_c5VmVzzr(s_kind_str, (i - 1), "Incomplete \\u-escape: no closing `}`."_fu, idx, end, src, lidx, fname, line);
                      } BL_21:;
                    };
                    if (!digits)
                        err_str_c5VmVzzr(s_kind_str, (i - 1), "Empty \\u-escape."_fu, idx, end, src, lidx, fname, line);
                    else
                    {
                        fu_STR _1 {};
                        out += ((_1 = bytes_BKZeX3f7(unicode)) ? static_cast<fu_STR&&>(_1) : err_str_c5VmVzzr(s_kind_str, (i - 1), "Invalid \\u-escape: bad code point."_fu, idx, end, src, lidx, fname, line));
                    };
                };
            }
            else
                err_str_c5VmVzzr(s_kind_str, (i - 1), "Unknown escape sequence."_fu, idx, end, src, lidx, fname, line);

        }
        else
        {
            out += char(c);
        };
    };
    return /*NRVO*/ out;
}

                                #ifndef DEF_has_8ObANk7rz5k
                                #define DEF_has_8ObANk7rz5k
inline bool has_8ObANk7r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_x3Cx3E_gcxVH86XFM7
                                #define DEF_x3Cx3E_gcxVH86XFM7
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_hvR4gqODwpa
                                #define DEF_x3Cx3E_hvR4gqODwpa
inline int x3Cx3E_hvR4gqOD(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YP7BiSZZZOd
                                #define DEF_x3Cx3E_YP7BiSZZZOd
inline int x3Cx3E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hvR4gqOD(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_YP7BiSZZZOd
                                #define DEF_x3Dx3D_YP7BiSZZZOd
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

                                #ifndef DEF_has_NaazSXrklU3
                                #define DEF_has_NaazSXrklU3
inline bool has_NaazSXrk(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

s_LexerOutput lex_3z7oWPeJ(const fu_STR& src, fu::view<char> fname)
{
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    /*MOV*/ fu_VEC<s_Token> tokens {};
    token_tVDymypQ(s_kind_sof, "sof"_fu, idx, idx, lidx, tokens, line);
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
            token_tVDymypQ(s_kind_id, fu::slice(src, idx0, idx1), idx0, idx1, lidx, tokens, line);
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
                    err_str_c5VmVzzr(s_kind_real, idx0, ("Leading `0` in numeric literal,"_fu + " perhaps you meant `0x`, `0b` or `0o`."_fu), idx, end, src, lidx, fname, line);

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
                    }
                    else if (dot || exp)
                        err_xMbFCKxv(s_kind_real, idx0, (idx - 1), src, idx, end, lidx, fname, line);
                    else
                        dot = true;

                }
                else if ((hex ? ((c_1 == 'p') || (c_1 == 'P')) : ((c_1 == 'e') || (c_1 == 'E'))))
                {
                    if (exp)
                        err_xMbFCKxv(s_kind_real, idx0, (idx - 1), src, idx, end, lidx, fname, line);
                    else
                    {
                        if ((idx < end) && ((src[idx] == '-') || (src[idx] == '+')))
                            idx++;

                        exp = true;
                    };
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
                err_xMbFCKxv(s_kind_real, idx0, (idx - 1), src, idx, end, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                /*MOV*/ fu_STR str = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp)
                    err_str_c5VmVzzr(s_kind_real, idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), idx, end, src, lidx, fname, line);
                else
                    token_tVDymypQ(((dot || exp) ? s_kind_real : s_kind_int), lower_FZjKqN6X(static_cast<fu_STR&&>(str)), idx0, idx1, lidx, tokens, line);

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
                err_str_c5VmVzzr(s_kind_str, idx0, "Unterminated string literal."_fu, idx, end, src, lidx, fname, line);
            else
            {
                const int idx1 = idx;
                fu_STR str = (esc ? UNSAFE_unescapeStr_f93ergEh(src, idx0, idx1, c, idx, end, src, lidx, fname, line) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == '\'');
                if (cHar && (str.size() != 1))
                    err_str_c5VmVzzr(s_kind_char, idx0, x7E_YP7BiSZZ("Char literal len != 1: "_fu, fu::i64dec(str.size())), idx, end, src, lidx, fname, line);
                else
                    token_c_mYCRTpDV((cHar ? s_kind_char : s_kind_str), str, idx0, idx1, col, tokens, line);

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
        else if (has_8ObANk7r(OPTOKENS, c))
        {
            fu_STR candidate = fu_STR { fu::slate<1, char> { char(c) } };
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (has_8ObANk7r(OPTOKENS, c_1))
                {
                    /*MOV*/ fu_STR c1 = (candidate + c_1);
                    if (has_NaazSXrk(MBOPS, c1))
                    {
                        candidate = static_cast<fu_STR&&>(c1);
                        continue;
                    };
                };
                idx--;
                break;
            };
            token_tVDymypQ(s_kind_op, candidate, idx0, idx, lidx, tokens, line);
        }
        else
            err_xMbFCKxv(s_kind_err, idx0, idx0, src, idx, end, lidx, fname, line);

    };
    line++;
    lidx = (idx + 0);
    token_tVDymypQ(s_kind_eof, "eof"_fu, idx, idx, lidx, tokens, line);
    return s_LexerOutput { static_cast<fu_VEC<s_Token>&&>(tokens) };
}

#endif
