#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/LEGACY_slice.h>

struct s_LexerOutput;
struct s_Token;
enum s_Kind: fu::u8;
struct s_LineColChars;
typedef unsigned s_Codepoint;
[[noreturn]] fu::never FAIL_k53poh8o(const fu::str&, const fu::str&, const s_LineColChars&, fu::view<char>);
fu::str qBAD_e44UlzzA(const fu::str&);
fu::str lower_KPhiKsnb(fu::str&&);
fu::str bytes_QxwWuQiD(s_Codepoint);

                                #ifndef DEF_s_Kind
                                #define DEF_s_Kind
enum s_Kind: fu::u8
{
    s_Kind_sof = 1u,
    s_Kind_err = 2u,
    s_Kind_eof = 3u,
    s_Kind_id = 4u,
    s_Kind_op = 5u,
    s_Kind_int = 6u,
    s_Kind_real = 7u,
    s_Kind_char = 8u,
    s_Kind_str = 9u,
    s_Kind_bool = 10u,
    s_Kind_definit = 11u,
    s_Kind_empty = 12u,
    s_Kind_struct = 13u,
    s_Kind_union = 14u,
    s_Kind_primitive = 15u,
    s_Kind_flags = 16u,
    s_Kind_enum = 17u,
    s_Kind_fn = 18u,
    s_Kind_copy = 19u,
    s_Kind_move = 20u,
    s_Kind_arrlit = 21u,
    s_Kind_not = 22u,
    s_Kind_call = 23u,
    s_Kind_call_indir = 24u,
    s_Kind_argid = 25u,
    s_Kind_root = 26u,
    s_Kind_block = 27u,
    s_Kind_if = 28u,
    s_Kind_or = 29u,
    s_Kind_and = 30u,
    s_Kind_loop = 31u,
    s_Kind_jump = 32u,
    s_Kind___far_jump = 33u,
    s_Kind_defer = 34u,
    s_Kind_try = 35u,
    s_Kind_let = 36u,
    s_Kind_letdef = 37u,
    s_Kind_typecast = 38u,
    s_Kind_typeassert = 39u,
    s_Kind_typeparam = 40u,
    s_Kind_unwrap = 41u,
    s_Kind_pragma = 42u,
    s_Kind_break = 43u,
    s_Kind_return = 44u,
    s_Kind_continue = 45u,
    s_Kind_import = 46u,
    s_Kind_addroffn = 47u,
    s_Kind_forfieldsof = 48u,
    s_Kind_members = 49u,
    s_Kind_fnbranch = 50u,
    s_Kind_pattern = 51u,
    s_Kind_typeunion = 52u,
    s_Kind_typetag = 53u,
    s_Kind___relaxed = 54u,
    s_Kind___convert = 55u,
    s_Kind___preceding_ref_arg = 56u,
    s_Kind___serialized_type = 57u,
    s_Kind___serialized_addrof_type_fn = 58u,
    s_Kind___litfix_bound = 59u,
    s_Kind___no_kind_yet = 60u,
    s_Kind___tombstone = 61u,
    s_Kind_type = 62u,
    s_Kind_var = 63u,
    s_Kind_field = 64u,
    s_Kind_enumv = 65u,
    s_Kind_template = 66u,
    s_Kind___native = 67u,
    s_Kind_inline = 68u,
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
    s_Kind kind;
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

                                #ifndef DEF_s_Codepoint
                                #define DEF_s_Codepoint
                                #endif

#ifndef fu_NO_fdefs

static void token_lc_pnA57tYu(const s_Kind kind, const fu::str& value, const int idx0, const int idx1, const int line, const int col, fu::vec<s_Token>& tokens)
{
    const int chars = (idx1 - idx0);
    if ((col >= 0) && (idx1 >= idx0) && (chars >= value.size()))
    {
        tokens += s_Token { kind, s_LineColChars { line, col, chars }, fu::str(value) };
    }
    else
        fu::fail("lexer: col >= 0 && idx1 >= idx0 && chars >= value.len"_fu);

}

static void token_pnA57tYu(const s_Kind kind, const fu::str& value, const int idx0, const int idx1, const int line, const int lidx, fu::vec<s_Token>& tokens)
{
    const int col = (idx0 - lidx);
    token_lc_pnA57tYu(kind, value, idx0, idx1, line, col, tokens);
}

[[noreturn]] static fu::never err_str_pnA57tYu(const int idx0, const int idx1, fu::view<char> reason, const fu::str& src, const fu::str& fname, const int line, const int lidx)
{
    const int col = (idx0 - lidx);
    const int chars = (idx1 - idx0);
    FAIL_k53poh8o(fname, src, s_LineColChars { line, col, chars }, reason);
}

[[noreturn]] static fu::never err_str_foi67fLD(const int idx0, fu::view<char> reason, const fu::str& src, const fu::str& fname, const int line, const int lidx, const int idx)
{
    err_str_pnA57tYu(idx0, idx, reason, src, fname, line, lidx);
}

                                #ifndef DEF_str_WkqQ7QhOMvg
                                #define DEF_str_WkqQ7QhOMvg
inline fu::str str_WkqQ7QhO(const s_Kind n)
{
    if (n == s_Kind_sof)
        return "sof"_fu;
    else if (n == s_Kind_err)
        return "err"_fu;
    else if (n == s_Kind_eof)
        return "eof"_fu;
    else if (n == s_Kind_id)
        return "id"_fu;
    else if (n == s_Kind_op)
        return "op"_fu;
    else if (n == s_Kind_int)
        return "int"_fu;
    else if (n == s_Kind_real)
        return "real"_fu;
    else if (n == s_Kind_char)
        return "char"_fu;
    else if (n == s_Kind_str)
        return "str"_fu;
    else if (n == s_Kind_bool)
        return "bool"_fu;
    else if (n == s_Kind_definit)
        return "definit"_fu;
    else if (n == s_Kind_empty)
        return "empty"_fu;
    else if (n == s_Kind_struct)
        return "struct"_fu;
    else if (n == s_Kind_union)
        return "union"_fu;
    else if (n == s_Kind_primitive)
        return "primitive"_fu;
    else if (n == s_Kind_flags)
        return "flags"_fu;
    else if (n == s_Kind_enum)
        return "enum"_fu;
    else if (n == s_Kind_fn)
        return "fn"_fu;
    else if (n == s_Kind_copy)
        return "copy"_fu;
    else if (n == s_Kind_move)
        return "move"_fu;
    else if (n == s_Kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_Kind_not)
        return "not"_fu;
    else if (n == s_Kind_call)
        return "call"_fu;
    else if (n == s_Kind_call_indir)
        return "call_indir"_fu;
    else if (n == s_Kind_argid)
        return "argid"_fu;
    else if (n == s_Kind_root)
        return "root"_fu;
    else if (n == s_Kind_block)
        return "block"_fu;
    else if (n == s_Kind_if)
    {
        return "if"_fu;
    }
    else if (n == s_Kind_or)
        return "or"_fu;
    else if (n == s_Kind_and)
        return "and"_fu;
    else if (n == s_Kind_loop)
        return "loop"_fu;
    else if (n == s_Kind_jump)
        return "jump"_fu;
    else if (n == s_Kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_Kind_defer)
        return "defer"_fu;
    else if (n == s_Kind_try)
        return "try"_fu;
    else if (n == s_Kind_let)
        return "let"_fu;
    else if (n == s_Kind_letdef)
        return "letdef"_fu;
    else if (n == s_Kind_typecast)
        return "typecast"_fu;
    else if (n == s_Kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_Kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_Kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_Kind_pragma)
        return "pragma"_fu;
    else if (n == s_Kind_break)
        return "break"_fu;
    else if (n == s_Kind_return)
        return "return"_fu;
    else if (n == s_Kind_continue)
        return "continue"_fu;
    else if (n == s_Kind_import)
        return "import"_fu;
    else if (n == s_Kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_Kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_Kind_members)
        return "members"_fu;
    else if (n == s_Kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_Kind_pattern)
        return "pattern"_fu;
    else if (n == s_Kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_Kind_typetag)
        return "typetag"_fu;
    else if (n == s_Kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_Kind___convert)
        return "__convert"_fu;
    else if (n == s_Kind___preceding_ref_arg)
        return "__preceding_ref_arg"_fu;
    else if (n == s_Kind___serialized_type)
        return "__serialized_type"_fu;
    else if (n == s_Kind___serialized_addrof_type_fn)
        return "__serialized_addrof_type_fn"_fu;
    else if (n == s_Kind___litfix_bound)
        return "__litfix_bound"_fu;
    else if (n == s_Kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_Kind___tombstone)
        return "__tombstone"_fu;
    else if (n == s_Kind_type)
        return "type"_fu;
    else if (n == s_Kind_var)
        return "var"_fu;
    else if (n == s_Kind_field)
        return "field"_fu;
    else if (n == s_Kind_enumv)
        return "enumv"_fu;
    else if (n == s_Kind_template)
        return "template"_fu;
    else if (n == s_Kind___native)
        return "__native"_fu;
    else if (n == s_Kind_inline)
        return "inline"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never err_pnA57tYu(const s_Kind kind, const int idx0, const int reason, const fu::str& src, const fu::str& fname, const int line, const int lidx, const int idx)
{
    err_str_foi67fLD(idx0, ((x7E_3lDd4lqo(str_WkqQ7QhO(kind), ": Unexpected "_fu) + qBAD_e44UlzzA(fu::str { fu::slate<1, char> { src[reason] } })) + "."_fu), src, fname, line, lidx, idx);
}

static unsigned parseHex_pnA57tYu(fu::view<char> topic, fu::view<char> esc, int& i, const int idx0, const fu::str& src, const fu::str& fname, const int line, const int lidx)
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
        err_str_pnA57tYu(idx0, (i + 1), (((("Non hexadecimal character in "_fu + topic) + ": `"_fu) + c) + "`."_fu), src, fname, line, lidx);

}

static fu::str UNSAFE_unescapeStr_pnA57tYu(fu::view<char> esc, const int idx0, const int idx1, const char quot, const fu::str& src, const fu::str& fname, const int line, const int lidx)
{
    /*MOV*/ fu::str out = ""_fu;
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
                    err_str_pnA57tYu(idx0_1, n, "Incomplete \\x-escape sequence."_fu, src, fname, line, lidx);
                else
                {
                    unsigned _0 {};
                    out += char((_0 = (parseHex_pnA57tYu("\\x-escape sequence"_fu, esc, i, idx0_1, src, fname, line, lidx) << 4u), (_0 | parseHex_pnA57tYu("\\x-escape sequence"_fu, esc, i, idx0_1, src, fname, line, lidx))));
                };
            }
            else if (c1 == 'u')
            {
                if ((i == n) || (esc[++i] != '{'))
                {
                    err_str_pnA57tYu(idx0_1, i, "Invalid \\u-escape: no opening `{`."_fu, src, fname, line, lidx);
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
                                err_str_pnA57tYu(idx0_1, i, "Invalid \\u-escape: no closing `}` after 6 hex digits."_fu, src, fname, line, lidx);

                            digits++;
                            unicode <<= 4u;
                            i--;
                            unicode |= parseHex_pnA57tYu("\\u-escape sequence"_fu, esc, i, idx0_1, src, fname, line, lidx);
                        };
                        err_str_pnA57tYu(idx0_1, n, "Incomplete \\u-escape: no closing `}`."_fu, src, fname, line, lidx);
                      } BL_21:;
                    };
                    if (!digits)
                        err_str_pnA57tYu(idx0_1, (i + 1), "Empty \\u-escape."_fu, src, fname, line, lidx);
                    else
                    {
                        fu::str _1 {};
                        out += ((_1 = bytes_QxwWuQiD(s_Codepoint(unicode))) ? static_cast<fu::str&&>(_1) : err_str_pnA57tYu(idx0_1, (i + 1), "Invalid \\u-escape: bad code point."_fu, src, fname, line, lidx));
                    };
                };
            }
            else
                err_str_pnA57tYu(idx0_1, (i + 1), "Unknown escape sequence."_fu, src, fname, line, lidx);

        }
        else
            out += c;

    };
    return /*NRVO*/ out;
}

static const fu::str OPTOKENS fu_INIT_PRIORITY(1007) = "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu;

                                #ifndef DEF_find_yP7FbxFZnZ0
                                #define DEF_find_yP7FbxFZnZ0
inline int find_yP7FbxFZ(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_J81b5Q24qw3
                                #define DEF_has_J81b5Q24qw3
inline bool has_J81b5Q24(fu::view<char> a, const char b)
{
    return (find_yP7FbxFZ(a, b) >= 0);
}
                                #endif

                                #ifndef DEF_MBOPS_maxLen
                                #define DEF_MBOPS_maxLen
inline constexpr int MBOPS_maxLen = 4;
                                #endif

static const fu::vec<fu::str> MBOPS fu_INIT_PRIORITY(1007) = fu::vec<fu::str> { fu::slate<44, fu::str> { "++"_fu, "--"_fu, "<<"_fu, ">>"_fu, "=="_fu, "!="_fu, "<="_fu, ">="_fu, "=>"_fu, "->"_fu, "|>"_fu, "<|"_fu, "??"_fu, "?:"_fu, ".."_fu, "..."_fu, "::"_fu, "&&"_fu, "||"_fu, "[]"_fu, "[..]"_fu, "+="_fu, "-="_fu, "*="_fu, "/="_fu, "%="_fu, "&="_fu, "|="_fu, "^="_fu, "<<="_fu, ">>="_fu, "~="_fu, "&&="_fu, "||="_fu, ".="_fu, ":="_fu, "+%"_fu, "-%"_fu, "*%"_fu, "+%="_fu, "-%="_fu, "*%="_fu, "<>"_fu, "!<>"_fu } };

                                #ifndef DEF_x3Cx3E_XrkW2YUZsRk
                                #define DEF_x3Cx3E_XrkW2YUZsRk
inline int x3Cx3E_XrkW2YUZ(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_OFzwR3BaA9j
                                #define DEF_x3Cx3E_OFzwR3BaA9j
inline int x3Cx3E_OFzwR3Ba(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_bv5nK4Klcs3
                                #define DEF_x3Cx3E_bv5nK4Klcs3
inline int x3Cx3E_bv5nK4Kl(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_XrkW2YUZ(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_OFzwR3Ba(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_KFMeZhJSBE8
                                #define DEF_x3Dx3D_KFMeZhJSBE8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

                                #ifndef DEF_find_l600OhfD9ua
                                #define DEF_find_l600OhfD9ua
inline int find_l600OhfD(fu::view<fu::str> haystack, fu::view<char> needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_JcV6lPAxKV5
                                #define DEF_has_JcV6lPAxKV5
inline bool has_JcV6lPAx(fu::view<fu::str> a, fu::view<char> b)
{
    return (find_l600OhfD(a, b) >= 0);
}
                                #endif

s_LexerOutput lex_pnA57tYu(const fu::str& src, const fu::str& fname)
{
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    /*MOV*/ fu::vec<s_Token> tokens {};
    token_pnA57tYu(s_Kind_sof, ""_fu, idx, idx, line, lidx, tokens);
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
            token_pnA57tYu(s_Kind_id, fu::slice(src, idx0, idx1), idx0, idx1, line, lidx, tokens);
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
                    err_str_foi67fLD(idx0, ("Leading zero in numeric literal,"_fu + " perhaps you meant 0x, 0b or 0o."_fu), src, fname, line, lidx, idx);

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
                            err_pnA57tYu(s_Kind_real, idx0, (idx - 1), src, fname, line, lidx, idx);
                        else
                            dot = true;

                    }
                    else if ((hex ? ((c_1 == 'p') || (c_1 == 'P')) : ((c_1 == 'e') || (c_1 == 'E'))))
                    {
                        if (exp)
                            err_pnA57tYu(s_Kind_real, idx0, (idx - 1), src, fname, line, lidx, idx);
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
                err_pnA57tYu(s_Kind_real, idx0, (idx - 1), src, fname, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                /*MOV*/ fu::str str = fu::slice(src, idx0, idx1);
                if (hex && dot && !exp)
                    err_str_foi67fLD(idx0, ("The exponent is never optional"_fu + " for hexadecimal floating-point literals."_fu), src, fname, line, lidx, idx);
                else
                    token_pnA57tYu(((dot || exp) ? s_Kind_real : s_Kind_int), lower_KPhiKsnb(static_cast<fu::str&&>(str)), idx0, idx1, line, lidx, tokens);

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
                        err_str_foi67fLD(idx0, ((c == '\'') ? "Unterminated char literal."_fu : "Unterminated double-quote string literal.\n\n\tUse backticks around multiline strings."_fu), src, fname, line, lidx, idx);
                    }
                    else
                    {
                        line++;
                        lidx = (idx - 1);
                    };
                };
            };
            if (!ok)
                err_str_foi67fLD(idx0, "Unterminated string literal."_fu, src, fname, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                fu::str str = (esc ? UNSAFE_unescapeStr_pnA57tYu(src, idx0, idx1, c, src, fname, line, lidx) : fu::slice(src, (idx0 + 1), (idx1 - 1)));
                const bool cHar = (c == '\'');
                if (cHar && (str.size() != 1))
                    err_str_foi67fLD(idx0, (x7E_3lDd4lqo("Invalid char literal, not single byte: "_fu, fu::i64dec(str.size())) + " bytes long."_fu), src, fname, line, lidx, idx);
                else
                    token_lc_pnA57tYu((cHar ? s_Kind_char : s_Kind_str), str, idx0, idx1, line0, col, tokens);

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
        else if (has_J81b5Q24(OPTOKENS, c))
        {
            int maxLookahead = (idx0 + MBOPS_maxLen);
            if (maxLookahead > end)
                maxLookahead = end;

            while (idx < maxLookahead)
            {
                const char c_1 = src[idx++];
                if (!has_J81b5Q24(OPTOKENS, c_1))
                {
                    idx--;
                    break;
                };
            };
            for (; ; )
            {
                fu::str candidate = fu::slice(src, idx0, idx);
                if ((candidate.size() == 1) || has_JcV6lPAx(MBOPS, candidate))
                {
                    token_pnA57tYu(s_Kind_op, candidate, idx0, idx, line, lidx, tokens);
                    break;
                }
                else
                    idx--;

            };
        }
        else
            err_pnA57tYu(s_Kind_err, idx0, idx0, src, fname, line, lidx, idx);

    };
    line++;
    lidx = (idx + 0);
    token_pnA57tYu(s_Kind_eof, ""_fu, idx, idx, line, lidx, tokens);
    return s_LexerOutput { static_cast<fu::vec<s_Token>&&>(tokens) };
}

#endif
