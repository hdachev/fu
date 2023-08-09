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
struct s_LineColChars;
[[noreturn]] fu::never FAIL_lEtuvlMs(const fu::str&, const fu::str&, const s_LineColChars&, fu::view<char>);
fu::str qBAD_bF2G8fJR(fu::view<char>);
fu::str lower_0ZAZU2Wn(fu::str&&);
fu::str bytes_LBHJUHLu(unsigned);

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
    s_kind_not = 16u,
    s_kind_call = 17u,
    s_kind_argid = 18u,
    s_kind_root = 19u,
    s_kind_block = 20u,
    s_kind_if = 21u,
    s_kind_or = 22u,
    s_kind_and = 23u,
    s_kind_loop = 24u,
    s_kind_jump = 25u,
    s_kind___far_jump = 26u,
    s_kind_defer = 27u,
    s_kind_try = 28u,
    s_kind_let = 29u,
    s_kind_letdef = 30u,
    s_kind_typedef = 31u,
    s_kind_typecast = 32u,
    s_kind_typeassert = 33u,
    s_kind_typeparam = 34u,
    s_kind_unwrap = 35u,
    s_kind_pragma = 36u,
    s_kind_break = 37u,
    s_kind_return = 38u,
    s_kind_continue = 39u,
    s_kind_import = 40u,
    s_kind_addroffn = 41u,
    s_kind_forfieldsof = 42u,
    s_kind_struct = 43u,
    s_kind_union = 44u,
    s_kind_primitive = 45u,
    s_kind_flags = 46u,
    s_kind_enum = 47u,
    s_kind_members = 48u,
    s_kind_fndef = 49u,
    s_kind_fn = 50u,
    s_kind_fnbranch = 51u,
    s_kind_pattern = 52u,
    s_kind_typeunion = 53u,
    s_kind_typetag = 54u,
    s_kind___relaxed = 55u,
    s_kind___convert = 56u,
    s_kind___no_kind_yet = 57u,
    s_kind_type = 58u,
    s_kind_var = 59u,
    s_kind_field = 60u,
    s_kind_enumv = 61u,
    s_kind_template = 62u,
    s_kind___native = 63u,
    s_kind_inline = 64u,
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu::vec<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LineColChars
                                #define DEF_s_LineColChars
struct s_LineColChars
{
    int line;
    int col;
    int chars;
    explicit operator bool() const noexcept
    {
        return false
            || line
            || col
            || chars
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_kind kind;
    s_LineColChars lcc;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

static void token_lc_JNvI37v1(const s_kind kind, const fu::str& value, const int idx0, const int idx1, const int line, const int col, fu::vec<s_Token>& tokens)
{
    const int chars = (idx1 - idx0);
    if ((col >= 0) && (idx1 >= idx0) && (chars >= value.size()))
    {
        tokens += s_Token { kind, s_LineColChars { line, col, chars }, fu::str(value) };
    }
    else
        fu_ASSERT();

}

static void token_OwaFLlvV(const s_kind kind, const fu::str& value, const int idx0, const int idx1, const int line, const int lidx, fu::vec<s_Token>& tokens)
{
    const int col = (idx0 - lidx);
    token_lc_JNvI37v1(kind, value, idx0, idx1, line, col, tokens);
}

[[noreturn]] static fu::never err_str_DLbcZ1zV(const int idx0, const int idx1, fu::view<char> reason, const fu::str& src, const fu::str& fname, const int line, const int lidx)
{
    const int col = (idx0 - lidx);
    const int chars = (idx1 - idx0);
    FAIL_lEtuvlMs(fname, src, s_LineColChars { line, col, chars }, reason);
}

[[noreturn]] static fu::never err_str_adWAt5mv(const int idx0, fu::view<char> reason, const fu::str& src, const fu::str& fname, const int line, const int lidx, const int idx)
{
    err_str_DLbcZ1zV(idx0, idx, reason, src, fname, line, lidx);
}

                                #ifndef DEF_str_k2hK9UHjiD5
                                #define DEF_str_k2hK9UHjiD5
inline fu::str str_k2hK9UHj(const s_kind n)
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

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never err_NHMZK8Ut(const s_kind kind, const int idx0, const int reason, const fu::str& src, const fu::str& fname, const int line, const int lidx, const int idx)
{
    err_str_adWAt5mv(idx0, ((x7E_r7bhmB7D(str_k2hK9UHj(kind), ": Unexpected "_fu) + qBAD_bF2G8fJR((fu::slate<1, char> { src[reason] }))) + "."_fu), src, fname, line, lidx, idx);
}

static unsigned parseHex_IXRIOVuC(fu::view<char> topic, fu::view<char> esc, int& i, const int idx0, const fu::str& src, const fu::str& fname, const int line, const int lidx)
{
    fu::view<char> _0 {};
    const char c = (_0 = esc, static_cast<fu::view<char>&&>(_0)[++i]);
    if ((c >= '0') && (c <= '9'))
        return unsigned(fu::u8(c)) - unsigned(fu::u8('0'));
    else if ((c >= 'A') && (c <= 'F'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('A'))) + 10u;
    else if ((c >= 'a') && (c <= 'f'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('a'))) + 10u;
    else
        err_str_DLbcZ1zV(idx0, (i + 1), (((("Non hexadecimal character in "_fu + topic) + ": `"_fu) + c) + "`."_fu), src, fname, line, lidx);

}

static fu::str UNSAFE_unescapeStr_xIp8qzQb(fu::view<char> esc, const int idx0, const int idx1, const char quot, const fu::str& src, const fu::str& fname, const int line, const int lidx)
{
    /*MOV*/ fu::str out {};
    const int n = (idx1 - 1);
    for (int i = (idx0 + 1); i < n; i++)
    {
        const char c = esc[i];
        if (c == '\\')
        {
            const int idx0_1 = i;
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
                    err_str_DLbcZ1zV(idx0_1, n, "Incomplete \\x-escape sequence."_fu, src, fname, line, lidx);
                else
                {
                    unsigned _0 {};
                    out += char((_0 = (parseHex_IXRIOVuC("\\x-escape sequence"_fu, esc, i, idx0_1, src, fname, line, lidx) << 4u), (_0 | parseHex_IXRIOVuC("\\x-escape sequence"_fu, esc, i, idx0_1, src, fname, line, lidx))));
                };
            }
            else if (c1 == 'u')
            {
                if ((i == n) || (esc[++i] != '{'))
                {
                    err_str_DLbcZ1zV(idx0_1, i, "Invalid \\u-escape: no opening `{`."_fu, src, fname, line, lidx);
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
                                err_str_DLbcZ1zV(idx0_1, i, "Invalid \\u-escape: no closing `}` after 6 hex digits."_fu, src, fname, line, lidx);

                            digits++;
                            unicode <<= 4u;
                            i--;
                            unicode |= parseHex_IXRIOVuC("\\u-escape sequence"_fu, esc, i, idx0_1, src, fname, line, lidx);
                        };
                        err_str_DLbcZ1zV(idx0_1, n, "Incomplete \\u-escape: no closing `}`."_fu, src, fname, line, lidx);
                      } BL_21:;
                    };
                    if (!digits)
                        err_str_DLbcZ1zV(idx0_1, (i + 1), "Empty \\u-escape."_fu, src, fname, line, lidx);
                    else
                    {
                        fu::str _1 {};
                        out += ((_1 = bytes_LBHJUHLu(unicode)) ? static_cast<fu::str&&>(_1) : err_str_DLbcZ1zV(idx0_1, (i + 1), "Invalid \\u-escape: bad code point."_fu, src, fname, line, lidx));
                    };
                };
            }
            else
                err_str_DLbcZ1zV(idx0_1, (i + 1), "Unknown escape sequence."_fu, src, fname, line, lidx);

        }
        else
            out += c;

    };
    return /*NRVO*/ out;
}

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const fu::str OPTOKENS fu_INIT_PRIORITY(1008) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;

                                #ifndef DEF_has_POzvwmtfK11
                                #define DEF_has_POzvwmtfK11
inline bool has_POzvwmtf(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static const fu::vec<fu::str> MBOPS fu_INIT_PRIORITY(1008) = fu::vec<fu::str> { fu::slate<41, fu::str> { "++"_fu, "--"_fu, "**"_fu, "<<"_fu, "<<<"_fu, ">>"_fu, ">>>"_fu, "==="_fu, "=="_fu, "!="_fu, "!=="_fu, "<="_fu, ">="_fu, "<=>"_fu, "<>"_fu, "=>"_fu, "->"_fu, "|>"_fu, "<|"_fu, "??"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "+="_fu, "-="_fu, "*="_fu, "**="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu } };

                                #ifndef DEF_x3Cx3E_AsFD7H8Nlu6
                                #define DEF_x3Cx3E_AsFD7H8Nlu6
inline int x3Cx3E_AsFD7H8N(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_f0RieKMU2n0
                                #define DEF_x3Cx3E_f0RieKMU2n0
inline int x3Cx3E_f0RieKMU(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_r7bhmB7DrQ0
                                #define DEF_x3Cx3E_r7bhmB7DrQ0
inline int x3Cx3E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_AsFD7H8N(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_f0RieKMU(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_r7bhmB7DrQ0
                                #define DEF_x3Dx3D_r7bhmB7DrQ0
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

                                #ifndef DEF_has_E59mf3XC9N1
                                #define DEF_has_E59mf3XC9N1
inline bool has_E59mf3XC(fu::view<fu::str> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

s_LexerOutput lex_aPLRBLOl(const fu::str& src, const fu::str& fname)
{
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    /*MOV*/ fu::vec<s_Token> tokens {};
    token_OwaFLlvV(s_kind_sof, (*(const fu::str*)fu::NIL), idx, idx, line, lidx, tokens);
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
            token_OwaFLlvV(s_kind_id, fu::slice(src, idx0, idx1), idx0, idx1, line, lidx, tokens);
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
                const char c_1 = ((idx < end) ? src[idx] : char{});
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
                    err_str_adWAt5mv(idx0, ("Leading zero in numeric literal,"_fu + " perhaps you meant 0x, 0b or 0o."_fu), src, fname, line, lidx, idx);

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
                        const char c_2 = ((idx < end) ? src[idx] : char{});
                        if (!(((c_2 >= '0') && (c_2 <= '9')) || (hex && (((c_2 >= 'a') && (c_2 <= 'f')) || ((c_2 >= 'A') && (c_2 <= 'F'))))))
                        {
                            idx--;
                            break;
                        }
                        else if (dot || exp)
                            err_NHMZK8Ut(s_kind_real, idx0, (idx - 1), src, fname, line, lidx, idx);
                        else
                            dot = true;

                    }
                    else if ((hex ? ((c_1 == 'p') || (c_1 == 'P')) : ((c_1 == 'e') || (c_1 == 'E'))))
                    {
                        if (exp)
                            err_NHMZK8Ut(s_kind_real, idx0, (idx - 1), src, fname, line, lidx, idx);
                        else
                        {
                            if ((idx < end) && ((src[idx] == '-') || (src[idx] == '+')))
                                idx++;

                            exp = true;
                        };
                    }
                    else if (c_1 == '_')
                    {
                        const char c_2 = ((idx < end) ? src[idx] : char{});
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
                err_NHMZK8Ut(s_kind_real, idx0, (idx - 1), src, fname, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                /*MOV*/ fu::str str = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp)
                    err_str_adWAt5mv(idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), src, fname, line, lidx, idx);
                else
                    token_OwaFLlvV(((dot || exp) ? s_kind_real : s_kind_int), lower_0ZAZU2Wn(static_cast<fu::str&&>(str)), idx0, idx1, line, lidx, tokens);

            };
        }
        else if ((c == '\'') || (c == '"') || (c == '`'))
        {
            bool esc = false;
            bool ok = false;
            const int col = ((idx - lidx) - 1);
            const int line0 = line;
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
                    if (c != '`')
                    {
                        while ((src[--idx] <= ' '));
                        idx++;
                        err_str_adWAt5mv(idx0, ((c == '\'') ? "Unterminated char literal."_fu : "Unterminated double-quote string literal.\n\n\tUse backticks around multiline strings."_fu), src, fname, line, lidx, idx);
                    }
                    else
                    {
                        line++;
                        lidx = (idx - 1);
                    };
                };
            };
            if (!ok)
                err_str_adWAt5mv(idx0, "Unterminated string literal."_fu, src, fname, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                fu::str str = (esc ? UNSAFE_unescapeStr_xIp8qzQb(src, idx0, idx1, c, src, fname, line, lidx) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == '\'');
                if (cHar && (str.size() != 1))
                    err_str_adWAt5mv(idx0, (x7E_r7bhmB7D("Invalid char literal, not single byte: "_fu, fu::i64dec(str.size())) + " bytes long."_fu), src, fname, line, lidx, idx);
                else
                    token_lc_JNvI37v1((cHar ? s_kind_char : s_kind_str), str, idx0, idx1, line0, col, tokens);

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
        else if (has_POzvwmtf(OPTOKENS, c))
        {
            fu::str candidate = fu::str { fu::slate<1, char> { c } };
            while (idx < end)
            {
                const char c_1 = src[idx++];
                if (has_POzvwmtf(OPTOKENS, c_1))
                {
                    /*MOV*/ fu::str c1 = (candidate + c_1);
                    if (has_E59mf3XC(MBOPS, c1))
                    {
                        candidate = static_cast<fu::str&&>(c1);
                        continue;
                    };
                };
                idx--;
                break;
            };
            token_OwaFLlvV(s_kind_op, candidate, idx0, idx, line, lidx, tokens);
        }
        else
            err_NHMZK8Ut(s_kind_err, idx0, idx0, src, fname, line, lidx, idx);

    };
    line++;
    lidx = (idx + 0);
    token_OwaFLlvV(s_kind_eof, (*(const fu::str*)fu::NIL), idx, idx, line, lidx, tokens);
    return s_LexerOutput { static_cast<fu::vec<s_Token>&&>(tokens) };
}

#endif
