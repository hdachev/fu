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
fu_STR lower_hmGcUNDy(fu_STR&&);
fu_STR bytes_WWiM9Iuu(unsigned);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
{
    s_kind_sof = 1u,
    s_kind_err = 2u,
    s_kind_eof = 3u,
    s_kind_id = 4u,
    s_kind_op = 5u,
    s_kind_int = 6u,
    s_kind_real = 7u,
    s_kind_char = 8u,
    s_kind_str = 9u,
    s_kind_bool = 10u,
    s_kind_copy = 11u,
    s_kind_move = 12u,
    s_kind_arrlit = 13u,
    s_kind_definit = 14u,
    s_kind_empty = 15u,
    s_kind_void = 16u,
    s_kind_not = 17u,
    s_kind_call = 18u,
    s_kind_argid = 19u,
    s_kind_root = 20u,
    s_kind_block = 21u,
    s_kind_if = 22u,
    s_kind_or = 23u,
    s_kind_and = 24u,
    s_kind_loop = 25u,
    s_kind_jump = 26u,
    s_kind___far_jump = 27u,
    s_kind_defer = 28u,
    s_kind_try = 29u,
    s_kind_let = 30u,
    s_kind_letdef = 31u,
    s_kind_typedef = 32u,
    s_kind_typecast = 33u,
    s_kind_typeassert = 34u,
    s_kind_typeparam = 35u,
    s_kind_unwrap = 36u,
    s_kind_pragma = 37u,
    s_kind_break = 38u,
    s_kind_return = 39u,
    s_kind_continue = 40u,
    s_kind_import = 41u,
    s_kind_addroffn = 42u,
    s_kind_forfieldsof = 43u,
    s_kind_struct = 44u,
    s_kind_union = 45u,
    s_kind_primitive = 46u,
    s_kind_flags = 47u,
    s_kind_enum = 48u,
    s_kind_members = 49u,
    s_kind_fndef = 50u,
    s_kind_fn = 51u,
    s_kind_fnbranch = 52u,
    s_kind_pattern = 53u,
    s_kind_typeunion = 54u,
    s_kind_typetag = 55u,
    s_kind___relaxed = 56u,
    s_kind___convert = 57u,
    s_kind___no_kind_yet = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
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

static void token_c_dMi8KHrJ(const s_kind kind, const fu_STR& value, const int idx0, const int idx1, const int col, const int line, fu_VEC<s_Token>& tokens)
{
    if ((col >= 0))
    {
        tokens += s_Token { s_kind(kind), fu_STR(value), int(idx0), int(idx1), int(line), int(col) };
    }
    else
        fu_ASSERT();

}

static void token_8XNpOfPR(const s_kind kind, const fu_STR& value, const int idx0, const int idx1, const int line, const int lidx, fu_VEC<s_Token>& tokens)
{
    const int col = (idx0 - lidx);
    token_c_dMi8KHrJ(kind, value, idx0, idx1, col, line, tokens);
}

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_str_v3b7EcLtghl
                                #define DEF_str_v3b7EcLtghl
inline fu_STR str_v3b7EcLt(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
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
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
    else if (n == s_kind_not)
        return "not"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
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
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind_typedef)
        return "typedef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
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
    else if (n == s_kind_fndef)
        return "fndef"_fu;
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
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
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

[[noreturn]] static fu::never err_str_cmGzdY04(const s_kind kind, const int idx0, fu::view<char> reason, const fu_STR& src, fu::view<char> fname, const int end, const int line, const int lidx, int& idx)
{
    while ((idx < end) && (src[idx] > ' '))
        idx++;

    const int col = (idx0 - lidx);
    fu_STR value = fu::slice(src, idx0, idx);
    fu::fail((((x7E_sTZRmMq1((((x7E_sTZRmMq1((x7E_sTZRmMq1((("LEX ERROR: "_fu + fname) + "@"_fu), fu::i64dec(line)) + ":"_fu), fu::i64dec(col)) + ":\n\t"_fu) + reason) + "\n\t"_fu), str_v3b7EcLt(kind)) + ": `"_fu) + value) + "`"_fu));
}

[[noreturn]] static fu::never err_O4IgeC8t(const s_kind kind, const int idx0, const int reason, const fu_STR& src, fu::view<char> fname, const int end, const int line, const int lidx, int& idx)
{
    err_str_cmGzdY04(kind, idx0, (("`"_fu + src[reason]) + "`"_fu), src, fname, end, line, lidx, idx);
}

static unsigned parseHex_bZ9aOHa7(fu::view<char> topic, fu::view<char> esc, int& i, const fu_STR& src, fu::view<char> fname, const int end, const int line, const int lidx, int& idx)
{
    const char c = esc[++i];
    if ((c >= '0') && (c <= '9'))
        return unsigned(fu::u8(c)) - unsigned(fu::u8('0'));
    else if ((c >= 'A') && (c <= 'F'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('A'))) + 10u;
    else if ((c >= 'a') && (c <= 'f'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('a'))) + 10u;
    else
        return err_str_cmGzdY04(s_kind_str, (i - 1), (((("Non hexadecimal character in "_fu + topic) + ": `"_fu) + c) + "`."_fu), src, fname, end, line, lidx, idx);

}

static fu_STR UNSAFE_unescapeStr_gb3HVVYw(fu::view<char> esc, const int idx0, const int idx1, const char quot, const fu_STR& src, fu::view<char> fname, const int end, const int line, const int lidx, int& idx)
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
                    err_str_cmGzdY04(s_kind_str, (i - 1), "Incomplete \\x-escape sequence."_fu, src, fname, end, line, lidx, idx);
                else
                {
                    unsigned _0 {};
                    out += char((_0 = (parseHex_bZ9aOHa7("\\x-escape sequence"_fu, esc, i, src, fname, end, line, lidx, idx) << 4u), (unsigned(_0) | parseHex_bZ9aOHa7("\\x-escape sequence"_fu, esc, i, src, fname, end, line, lidx, idx))));
                };
            }
            else if (c1 == 'u')
            {
                if ((i == n) || (esc[++i] != '{'))
                {
                    err_str_cmGzdY04(s_kind_str, (i - 1), "Invalid \\u-escape: no opening `{`."_fu, src, fname, end, line, lidx, idx);
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
                                err_str_cmGzdY04(s_kind_str, (i - 1), "Invalid \\u-escape: no closing `}` after 6 digits."_fu, src, fname, end, line, lidx, idx);

                            digits++;
                            unicode <<= 4u;
                            i--;
                            unicode |= parseHex_bZ9aOHa7("\\u-escape sequence"_fu, esc, i, src, fname, end, line, lidx, idx);
                        };
                        err_str_cmGzdY04(s_kind_str, (i - 1), "Incomplete \\u-escape: no closing `}`."_fu, src, fname, end, line, lidx, idx);
                      } BL_21:;
                    };
                    if (!digits)
                        err_str_cmGzdY04(s_kind_str, (i - 1), "Empty \\u-escape."_fu, src, fname, end, line, lidx, idx);
                    else
                    {
                        fu_STR _1 {};
                        out += ((_1 = bytes_WWiM9Iuu(unicode)) ? static_cast<fu_STR&&>(_1) : err_str_cmGzdY04(s_kind_str, (i - 1), "Invalid \\u-escape: bad code point."_fu, src, fname, end, line, lidx, idx));
                    };
                };
            }
            else
                err_str_cmGzdY04(s_kind_str, (i - 1), "Unknown escape sequence."_fu, src, fname, end, line, lidx, idx);

        }
        else
            out += char(c);

    };
    return /*NRVO*/ out;
}

static const fu_STR OPTOKENS fu_INIT_PRIORITY(1004) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;

                                #ifndef DEF_has_ODCLAe2r9ig
                                #define DEF_has_ODCLAe2r9ig
inline bool has_ODCLAe2r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static const fu_VEC<fu_STR> MBOPS fu_INIT_PRIORITY(1004) = fu_VEC<fu_STR> { fu::slate<41, fu_STR> { "++"_fu, "--"_fu, "**"_fu, "<<"_fu, "<<<"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "<=>"_fu, "<>"_fu, "=>"_fu, "->"_fu, "|>"_fu, "<|"_fu, "??"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu } };

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_has_51aX1qKygWk
                                #define DEF_has_51aX1qKygWk
inline bool has_51aX1qKy(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

s_LexerOutput lex_uk2ULxHb(const fu_STR& src, fu::view<char> fname)
{
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    /*MOV*/ fu_VEC<s_Token> tokens {};
    token_8XNpOfPR(s_kind_sof, "sof"_fu, idx, idx, line, lidx, tokens);
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
                if (!(((c_1 >= 'A') && (c_1 <= 'Z')) || ((c_1 >= 'a') && (c_1 <= 'z')) || (c_1 == '_') || ((c_1 >= '0') && (c_1 <= '9'))))
                {
                    idx--;
                    break;
                };
            };
            const int idx1 = idx;
            token_8XNpOfPR(s_kind_id, fu::slice(src, idx0, idx1), idx0, idx1, line, lidx, tokens);
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
                    err_str_cmGzdY04(s_kind_real, idx0, ("Leading `0` in numeric literal,"_fu + " perhaps you meant `0x`, `0b` or `0o`."_fu), src, fname, end, line, lidx, idx);

            };
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (!(((c_1 >= '0') && (c_1 <= max)) || (hex && (((c_1 >= 'a') && (c_1 <= 'f')) || ((c_1 >= 'A') && (c_1 <= 'F'))))))
                {
                    if (ob)
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
                            err_O4IgeC8t(s_kind_real, idx0, (idx - 1), src, fname, end, line, lidx, idx);
                        else
                            dot = true;

                    }
                    else if ((hex ? ((c_1 == 'p') || (c_1 == 'P')) : ((c_1 == 'e') || (c_1 == 'E'))))
                    {
                        if (exp)
                            err_O4IgeC8t(s_kind_real, idx0, (idx - 1), src, fname, end, line, lidx, idx);
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
            };
            const char trail = src[(idx - 1)];
            if (!((trail >= '0') && (trail <= '9')) && !(hex && (((trail >= 'a') && (trail <= 'f')) || ((trail >= 'A') && (trail <= 'F')))))
                err_O4IgeC8t(s_kind_real, idx0, (idx - 1), src, fname, end, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                /*MOV*/ fu_STR str = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp)
                    err_str_cmGzdY04(s_kind_real, idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), src, fname, end, line, lidx, idx);
                else
                    token_8XNpOfPR(((dot || exp) ? s_kind_real : s_kind_int), lower_hmGcUNDy(static_cast<fu_STR&&>(str)), idx0, idx1, line, lidx, tokens);

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
                err_str_cmGzdY04(s_kind_str, idx0, "Unterminated string literal."_fu, src, fname, end, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                fu_STR str = (esc ? UNSAFE_unescapeStr_gb3HVVYw(src, idx0, idx1, c, src, fname, end, line, lidx, idx) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == '\'');
                if (cHar && (str.size() != 1))
                    err_str_cmGzdY04(s_kind_char, idx0, x7E_sTZRmMq1("Char literal len != 1: "_fu, fu::i64dec(str.size())), src, fname, end, line, lidx, idx);
                else
                    token_c_dMi8KHrJ((cHar ? s_kind_char : s_kind_str), str, idx0, idx1, col, line, tokens);

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
        else if (has_ODCLAe2r(OPTOKENS, c))
        {
            fu_STR candidate = fu_STR { fu::slate<1, char> { char(c) } };
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (has_ODCLAe2r(OPTOKENS, c_1))
                {
                    /*MOV*/ fu_STR c1 = (candidate + c_1);
                    if (has_51aX1qKy(MBOPS, c1))
                    {
                        candidate = static_cast<fu_STR&&>(c1);
                        continue;
                    };
                };
                idx--;
                break;
            };
            token_8XNpOfPR(s_kind_op, candidate, idx0, idx, line, lidx, tokens);
        }
        else
            err_O4IgeC8t(s_kind_err, idx0, idx0, src, fname, end, line, lidx, idx);

    };
    line++;
    lidx = (idx + 0);
    token_8XNpOfPR(s_kind_eof, "eof"_fu, idx, idx, line, lidx, tokens);
    return s_LexerOutput { static_cast<fu_VEC<s_Token>&&>(tokens) };
}

#endif
