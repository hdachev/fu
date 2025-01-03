#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec_range.h>
#include <fu/static_ref.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct LexerOutput_DN4p;
struct Token_6M7a;
enum Kind_Idfg: fu::u8;
struct LineColChars_6JiM;
typedef unsigned Codepoint_MOzb;
[[noreturn]] fu::never FAIL_k53p(fu::vec_range<char>, fu::vec_range<char>, const LineColChars_6JiM&, fu::view<char>);
fu::str qBAD_e44U(fu::view<char>);
fu::str lower_KPhi(fu::str&&);
fu::str bytes_QxwW(Codepoint_MOzb);

                                #ifndef DEF_MBOPS_maxLen
                                #define DEF_MBOPS_maxLen
inline constexpr int MBOPS_maxLen = 4;
                                #endif

                                #ifndef DEF_Kind_Idfg
                                #define DEF_Kind_Idfg
enum Kind_Idfg: fu::u8
{
    Kind_Idfg_sof = 1u,
    Kind_Idfg_err = 2u,
    Kind_Idfg_eof = 3u,
    Kind_Idfg_id = 4u,
    Kind_Idfg_op = 5u,
    Kind_Idfg_int = 6u,
    Kind_Idfg_real = 7u,
    Kind_Idfg_char = 8u,
    Kind_Idfg_str = 9u,
    Kind_Idfg_bool = 10u,
    Kind_Idfg_definit = 11u,
    Kind_Idfg_empty = 12u,
    Kind_Idfg_struct = 13u,
    Kind_Idfg_union = 14u,
    Kind_Idfg_primitive = 15u,
    Kind_Idfg_flags = 16u,
    Kind_Idfg_enum = 17u,
    Kind_Idfg_fn = 18u,
    Kind_Idfg_copy = 19u,
    Kind_Idfg_move = 20u,
    Kind_Idfg_arrlit = 21u,
    Kind_Idfg_not = 22u,
    Kind_Idfg_call = 23u,
    Kind_Idfg_call_indir = 24u,
    Kind_Idfg_argid = 25u,
    Kind_Idfg_root = 26u,
    Kind_Idfg_block = 27u,
    Kind_Idfg_if = 28u,
    Kind_Idfg_or = 29u,
    Kind_Idfg_and = 30u,
    Kind_Idfg_loop = 31u,
    Kind_Idfg_jump = 32u,
    Kind_Idfg___far_jump = 33u,
    Kind_Idfg_defer = 34u,
    Kind_Idfg_try = 35u,
    Kind_Idfg_let = 36u,
    Kind_Idfg_letdef = 37u,
    Kind_Idfg_typecast = 38u,
    Kind_Idfg_typeassert = 39u,
    Kind_Idfg_typeparam = 40u,
    Kind_Idfg_unwrap = 41u,
    Kind_Idfg_pragma = 42u,
    Kind_Idfg_break = 43u,
    Kind_Idfg_return = 44u,
    Kind_Idfg_continue = 45u,
    Kind_Idfg_import = 46u,
    Kind_Idfg_addroffn = 47u,
    Kind_Idfg_forfieldsof = 48u,
    Kind_Idfg_members = 49u,
    Kind_Idfg_fnbranch = 50u,
    Kind_Idfg_pattern = 51u,
    Kind_Idfg_typeunion = 52u,
    Kind_Idfg_typetag = 53u,
    Kind_Idfg___relaxed = 54u,
    Kind_Idfg___convert = 55u,
    Kind_Idfg___preceding_ref_arg = 56u,
    Kind_Idfg___serialized_type = 57u,
    Kind_Idfg___serialized_addrof_type_fn = 58u,
    Kind_Idfg___litfix_bound = 59u,
    Kind_Idfg___no_kind_yet = 60u,
    Kind_Idfg___tombstone = 61u,
    Kind_Idfg_type = 62u,
    Kind_Idfg_var = 63u,
    Kind_Idfg_field = 64u,
    Kind_Idfg_enumv = 65u,
    Kind_Idfg_template = 66u,
    Kind_Idfg___native = 67u,
    Kind_Idfg_inline = 68u,
};
                                #endif

                                #ifndef DEF_LexerOutput_DN4p6bz8JN7
                                #define DEF_LexerOutput_DN4p6bz8JN7
struct LexerOutput_DN4p
{
    fu::vec<Token_6M7a> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_LineColChars_6JiMQvLXJS2
                                #define DEF_LineColChars_6JiMQvLXJS2
struct LineColChars_6JiM
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

                                #ifndef DEF_Token_6M7a5ObuiN2
                                #define DEF_Token_6M7a5ObuiN2
struct Token_6M7a
{
    Kind_Idfg kind;
    LineColChars_6JiM lcc;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_Codepoint_MOzb
                                #define DEF_Codepoint_MOzb
                                #endif

                                #ifndef STR_q6JoXJtPU0l
                                #define STR_q6JoXJtPU0l
static const fu::str str_q6JoXJtPU0l fu_INIT_PRIORITY(1007) { "lexer: col >= 0 && idx1 >= idx0 && chars >= value.len"_fu };
                                #endif

                                #ifndef STR_onytfN8TIli
                                #define STR_onytfN8TIli
static const fu::str str_onytfN8TIli fu_INIT_PRIORITY(1007) { "__preceding_ref_arg"_fu };
                                #endif

                                #ifndef STR_QeWEBnJGbog
                                #define STR_QeWEBnJGbog
static const fu::str str_QeWEBnJGbog fu_INIT_PRIORITY(1007) { "__serialized_type"_fu };
                                #endif

                                #ifndef STR_QiuEJjR3RB9
                                #define STR_QiuEJjR3RB9
static const fu::str str_QiuEJjR3RB9 fu_INIT_PRIORITY(1007) { "__serialized_addrof_type_fn"_fu };
                                #endif

                                #ifndef STR_kjRm9m5SAE6
                                #define STR_kjRm9m5SAE6
static const fu::str str_kjRm9m5SAE6 fu_INIT_PRIORITY(1007) { "{}[]()!?~@#$%^&*/-+<=>,.;:|"_fu };
                                #endif

#ifndef fu_NO_fdefs

static void token_lc_pnA5(const Kind_Idfg kind, fu::vec_range<char> value, const int idx0, const int idx1, const int line, const int col, fu::vec<Token_6M7a>& tokens)
{
    const int chars = (idx1 - idx0);
    if ((col >= 0) && (idx1 >= idx0) && (chars >= value.size()))
    {
        tokens += Token_6M7a { kind, LineColChars_6JiM { line, col, chars }, fu::str(value) };
    }
    else
        fu::fail(fu::str(str_q6JoXJtPU0l));

}

static void token_pnA5(const Kind_Idfg kind, fu::vec_range<char> value, const int idx0, const int idx1, const int line, const int lidx, fu::vec<Token_6M7a>& tokens)
{
    const int col = (idx0 - lidx);
    token_lc_pnA5(kind, value, idx0, idx1, line, col, tokens);
}

[[noreturn]] static fu::never err_str_pnA5(const int idx0, const int idx1, fu::view<char> reason, fu::vec_range<char> src, fu::vec_range<char> fname, const int line, const int lidx)
{
    const int col = (idx0 - lidx);
    const int chars = (idx1 - idx0);
    FAIL_k53p(fname, src, LineColChars_6JiM { line, col, chars }, reason);
}

[[noreturn]] static fu::never err_str_foi6(const int idx0, fu::view<char> reason, fu::vec_range<char> src, fu::vec_range<char> fname, const int line, const int lidx, const int idx)
{
    err_str_pnA5(idx0, idx, reason, src, fname, line, lidx);
}

                                #ifndef DEF_str_eN8kTaMKJA9
                                #define DEF_str_eN8kTaMKJA9
inline fu::str str_eN8k(const Kind_Idfg n)
{
    if (n == Kind_Idfg_sof)
        return fu::str("sof"_fu);
    else if (n == Kind_Idfg_err)
        return fu::str("err"_fu);
    else if (n == Kind_Idfg_eof)
        return fu::str("eof"_fu);
    else if (n == Kind_Idfg_id)
        return fu::str("id"_fu);
    else if (n == Kind_Idfg_op)
        return fu::str("op"_fu);
    else if (n == Kind_Idfg_int)
        return fu::str("int"_fu);
    else if (n == Kind_Idfg_real)
        return fu::str("real"_fu);
    else if (n == Kind_Idfg_char)
        return fu::str("char"_fu);
    else if (n == Kind_Idfg_str)
        return fu::str("str"_fu);
    else if (n == Kind_Idfg_bool)
        return fu::str("bool"_fu);
    else if (n == Kind_Idfg_definit)
        return fu::str("definit"_fu);
    else if (n == Kind_Idfg_empty)
        return fu::str("empty"_fu);
    else if (n == Kind_Idfg_struct)
        return fu::str("struct"_fu);
    else if (n == Kind_Idfg_union)
        return fu::str("union"_fu);
    else if (n == Kind_Idfg_primitive)
        return fu::str("primitive"_fu);
    else if (n == Kind_Idfg_flags)
        return fu::str("flags"_fu);
    else if (n == Kind_Idfg_enum)
        return fu::str("enum"_fu);
    else if (n == Kind_Idfg_fn)
        return fu::str("fn"_fu);
    else if (n == Kind_Idfg_copy)
        return fu::str("copy"_fu);
    else if (n == Kind_Idfg_move)
        return fu::str("move"_fu);
    else if (n == Kind_Idfg_arrlit)
        return fu::str("arrlit"_fu);
    else if (n == Kind_Idfg_not)
        return fu::str("not"_fu);
    else if (n == Kind_Idfg_call)
        return fu::str("call"_fu);
    else if (n == Kind_Idfg_call_indir)
        return fu::str("call_indir"_fu);
    else if (n == Kind_Idfg_argid)
        return fu::str("argid"_fu);
    else if (n == Kind_Idfg_root)
        return fu::str("root"_fu);
    else if (n == Kind_Idfg_block)
        return fu::str("block"_fu);
    else if (n == Kind_Idfg_if)
    {
        return fu::str("if"_fu);
    }
    else if (n == Kind_Idfg_or)
        return fu::str("or"_fu);
    else if (n == Kind_Idfg_and)
        return fu::str("and"_fu);
    else if (n == Kind_Idfg_loop)
        return fu::str("loop"_fu);
    else if (n == Kind_Idfg_jump)
        return fu::str("jump"_fu);
    else if (n == Kind_Idfg___far_jump)
        return fu::str("__far_jump"_fu);
    else if (n == Kind_Idfg_defer)
        return fu::str("defer"_fu);
    else if (n == Kind_Idfg_try)
        return fu::str("try"_fu);
    else if (n == Kind_Idfg_let)
        return fu::str("let"_fu);
    else if (n == Kind_Idfg_letdef)
        return fu::str("letdef"_fu);
    else if (n == Kind_Idfg_typecast)
        return fu::str("typecast"_fu);
    else if (n == Kind_Idfg_typeassert)
        return fu::str("typeassert"_fu);
    else if (n == Kind_Idfg_typeparam)
        return fu::str("typeparam"_fu);
    else if (n == Kind_Idfg_unwrap)
        return fu::str("unwrap"_fu);
    else if (n == Kind_Idfg_pragma)
        return fu::str("pragma"_fu);
    else if (n == Kind_Idfg_break)
        return fu::str("break"_fu);
    else if (n == Kind_Idfg_return)
        return fu::str("return"_fu);
    else if (n == Kind_Idfg_continue)
        return fu::str("continue"_fu);
    else if (n == Kind_Idfg_import)
        return fu::str("import"_fu);
    else if (n == Kind_Idfg_addroffn)
        return fu::str("addroffn"_fu);
    else if (n == Kind_Idfg_forfieldsof)
        return fu::str("forfieldsof"_fu);
    else if (n == Kind_Idfg_members)
        return fu::str("members"_fu);
    else if (n == Kind_Idfg_fnbranch)
        return fu::str("fnbranch"_fu);
    else if (n == Kind_Idfg_pattern)
        return fu::str("pattern"_fu);
    else if (n == Kind_Idfg_typeunion)
        return fu::str("typeunion"_fu);
    else if (n == Kind_Idfg_typetag)
        return fu::str("typetag"_fu);
    else if (n == Kind_Idfg___relaxed)
        return fu::str("__relaxed"_fu);
    else if (n == Kind_Idfg___convert)
        return fu::str("__convert"_fu);
    else if (n == Kind_Idfg___preceding_ref_arg)
        return fu::str(str_onytfN8TIli);
    else if (n == Kind_Idfg___serialized_type)
        return fu::str(str_QeWEBnJGbog);
    else if (n == Kind_Idfg___serialized_addrof_type_fn)
        return fu::str(str_QiuEJjR3RB9);
    else if (n == Kind_Idfg___litfix_bound)
        return fu::str("__litfix_bound"_fu);
    else if (n == Kind_Idfg___no_kind_yet)
        return fu::str("__no_kind_yet"_fu);
    else if (n == Kind_Idfg___tombstone)
        return fu::str("__tombstone"_fu);
    else if (n == Kind_Idfg_type)
        return fu::str("type"_fu);
    else if (n == Kind_Idfg_var)
        return fu::str("var"_fu);
    else if (n == Kind_Idfg_field)
        return fu::str("field"_fu);
    else if (n == Kind_Idfg_enumv)
        return fu::str("enumv"_fu);
    else if (n == Kind_Idfg_template)
        return fu::str("template"_fu);
    else if (n == Kind_Idfg___native)
        return fu::str("__native"_fu);
    else if (n == Kind_Idfg_inline)
        return fu::str("inline"_fu);

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never err_pnA5(const Kind_Idfg kind, const int idx0, const int reason, fu::vec_range<char> src, fu::vec_range<char> fname, const int line, const int lidx, const int idx)
{
    err_str_foi6(idx0, ((x7E_rA00(str_eN8k(kind), ": Unexpected "_view) + qBAD_e44U(fu::view<char> {{ src[reason] }})) + "."_view), src, fname, line, lidx, idx);
}

static unsigned parseHex_pnA5(fu::view<char> topic, fu::view<char> esc, int& i, const int idx0, fu::vec_range<char> src, fu::vec_range<char> fname, const int line, const int lidx)
{
    fu::view<char> _0 {};
    const char c = (_0.ptr_reassign(esc), _0[++i]);
    if ((c >= '0') && (c <= '9'))
        return unsigned(fu::u8(c)) - unsigned(fu::u8('0'));
    else if ((c >= 'A') && (c <= 'F'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('A'))) + 10u;
    else if ((c >= 'a') && (c <= 'f'))
        return (unsigned(fu::u8(c)) - unsigned(fu::u8('a'))) + 10u;
    else
        err_str_pnA5(idx0, (i + 1), (((("Non hexadecimal character in "_view + topic) + ": `"_view) + c) + "`."_view), src, fname, line, lidx);

}

static fu::str UNSAFE_unescapeStr_pnA5(fu::view<char> esc, const int idx0, const int idx1, const char quot, fu::vec_range<char> src, fu::vec_range<char> fname, const int line, const int lidx)
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
                    err_str_pnA5(idx0_1, n, "Incomplete \\x-escape sequence."_view, src, fname, line, lidx);
                else
                {
                    unsigned _0;
                    out += char((_0 = (parseHex_pnA5("\\x-escape sequence"_view, esc, i, idx0_1, src, fname, line, lidx) << 4u), (_0 | parseHex_pnA5("\\x-escape sequence"_view, esc, i, idx0_1, src, fname, line, lidx))));
                };
            }
            else if (c1 == 'u')
            {
                if ((i == n) || (esc[++i] != '{'))
                {
                    err_str_pnA5(idx0_1, i, "Invalid \\u-escape: no opening `{`."_view, src, fname, line, lidx);
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
                                err_str_pnA5(idx0_1, i, "Invalid \\u-escape: no closing `}` after 6 hex digits."_view, src, fname, line, lidx);

                            digits++;
                            unicode <<= 4u;
                            i--;
                            unicode |= parseHex_pnA5("\\u-escape sequence"_view, esc, i, idx0_1, src, fname, line, lidx);
                        };
                        err_str_pnA5(idx0_1, n, "Incomplete \\u-escape: no closing `}`."_view, src, fname, line, lidx);
                      } BL_21:;
                    };
                    if (!digits)
                        err_str_pnA5(idx0_1, (i + 1), "Empty \\u-escape."_view, src, fname, line, lidx);
                    else
                    {
                        fu::str _1 {};
                        out += ((_1 = bytes_QxwW(Codepoint_MOzb(unicode))) ? static_cast<fu::str&&>(_1) : err_str_pnA5(idx0_1, (i + 1), "Invalid \\u-escape: bad code point."_view, src, fname, line, lidx));
                    };
                };
            }
            else
                err_str_pnA5(idx0_1, (i + 1), "Unknown escape sequence."_view, src, fname, line, lidx);

        }
        else
            out += c;

    };
    return /*NRVO*/ out;
}

static const fu::static_ref<fu::str> OPTOKENS fu_INIT_PRIORITY(1007) = str_kjRm9m5SAE6;

                                #ifndef DEF_find_ZKsG2FXrtpg
                                #define DEF_find_ZKsG2FXrtpg
inline int find_ZKsG(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_Mnu2KTFEuhg
                                #define DEF_has_Mnu2KTFEuhg
inline bool has_Mnu2(fu::view<char> a, const char b)
{
    return (find_ZKsG(a, b) >= 0);
}
                                #endif

static const fu::vec<fu::str> MBOPS fu_INIT_PRIORITY(1007) = fu::vec<fu::str> {{ fu::str("++"_fu), fu::str("--"_fu), fu::str("<<"_fu), fu::str(">>"_fu), fu::str("=="_fu), fu::str("!="_fu), fu::str("<="_fu), fu::str(">="_fu), fu::str("=>"_fu), fu::str("->"_fu), fu::str("|>"_fu), fu::str("<|"_fu), fu::str("??"_fu), fu::str("?:"_fu), fu::str(".."_fu), fu::str("..."_fu), fu::str("::"_fu), fu::str("&&"_fu), fu::str("||"_fu), fu::str("[]"_fu), fu::str("[..]"_fu), fu::str("+="_fu), fu::str("-="_fu), fu::str("*="_fu), fu::str("/="_fu), fu::str("%="_fu), fu::str("&="_fu), fu::str("|="_fu), fu::str("^="_fu), fu::str("<<="_fu), fu::str(">>="_fu), fu::str("~="_fu), fu::str("&&="_fu), fu::str("||="_fu), fu::str(".="_fu), fu::str(":="_fu), fu::str("+%"_fu), fu::str("-%"_fu), fu::str("*%"_fu), fu::str("+%="_fu), fu::str("-%="_fu), fu::str("*%="_fu), fu::str("<>"_fu), fu::str("!<>"_fu) }};

                                #ifndef DEF_x3Cx3E_odNTdyipeEj
                                #define DEF_x3Cx3E_odNTdyipeEj
inline int x3Cx3E_odNT(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YuqOPxIKAE3
                                #define DEF_x3Cx3E_YuqOPxIKAE3
inline int x3Cx3E_YuqO(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_j5CR7zKytVk
                                #define DEF_x3Cx3E_j5CR7zKytVk
inline int x3Cx3E_j5CR(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_odNT(a.size(), b.size());
    bool quick {};
    quick = a.m_data == b.m_data || cmp;
    if (quick)
        return cmp;
    else
    {
        for (int i = 0; (i < a.size()) && !cmp; i++)
            cmp = x3Cx3E_YuqO(a[i], b[i]);

        return cmp;
    };
}
                                #endif

                                #ifndef DEF_x3Dx3D_oVAS1y5c4ld
                                #define DEF_x3Dx3D_oVAS1y5c4ld
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_j5CR(a, b);
}
                                #endif

                                #ifndef DEF_find_cVszpoH03s0
                                #define DEF_find_cVszpoH03s0
inline int find_cVsz(fu::view<fu::str> haystack, fu::view<char> needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_FZWi63CdGZ7
                                #define DEF_has_FZWi63CdGZ7
inline bool has_FZWi(fu::view<fu::str> a, fu::view<char> b)
{
    return (find_cVsz(a, b) >= 0);
}
                                #endif

LexerOutput_DN4p lex_pnA5(fu::vec_range<char> src, fu::vec_range<char> fname)
{
    const int end = src.size();
    int line = 1;
    int lidx = -1;
    int idx = 0;
    /*MOV*/ fu::vec<Token_6M7a> tokens {};
    token_pnA5(Kind_Idfg_sof, (*(fu::str*)fu::NIL), idx, idx, line, lidx, tokens);
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
            token_pnA5(Kind_Idfg_id, fu::get_range(src, idx0, idx1), idx0, idx1, line, lidx, tokens);
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
                    err_str_foi6(idx0, ("Leading zero in numeric literal,"_view + " perhaps you meant 0x, 0b or 0o."_view), src, fname, line, lidx, idx);

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
                            err_pnA5(Kind_Idfg_real, idx0, (idx - 1), src, fname, line, lidx, idx);
                        else
                            dot = true;

                    }
                    else if ((hex ? ((c_1 == 'p') || (c_1 == 'P')) : ((c_1 == 'e') || (c_1 == 'E'))))
                    {
                        if (exp)
                            err_pnA5(Kind_Idfg_real, idx0, (idx - 1), src, fname, line, lidx, idx);
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
                err_pnA5(Kind_Idfg_real, idx0, (idx - 1), src, fname, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                fu::vec_range<char> str = fu::get_range(src, idx0, idx1);
                if (hex && dot && !exp)
                    err_str_foi6(idx0, ("The exponent is never optional"_view + " for hexadecimal floating-point literals."_view), src, fname, line, lidx, idx);
                else
                    token_pnA5(((dot || exp) ? Kind_Idfg_real : Kind_Idfg_int), lower_KPhi(fu::str(str)), idx0, idx1, line, lidx, tokens);

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
                        err_str_foi6(idx0, ((c == '\'') ? "Unterminated char literal."_view : "Unterminated double-quote string literal.\n\n\tUse backticks around multiline strings."_view), src, fname, line, lidx, idx);
                    }
                    else
                    {
                        line++;
                        lidx = (idx - 1);
                    };
                };
            };
            if (!ok)
                err_str_foi6(idx0, "Unterminated string literal."_view, src, fname, line, lidx, idx);
            else
            {
                const int idx1 = idx;
                fu::str str = (esc ? UNSAFE_unescapeStr_pnA5(src, idx0, idx1, c, src, fname, line, lidx) : fu::str(fu::get_range(src, (idx0 + 1), (idx1 - 1))));
                const bool cHar = (c == '\'');
                if (cHar && (str.size() != 1))
                    err_str_foi6(idx0, (x7E_rA00("Invalid char literal, not single byte: "_view, fu::i64dec(str.size())) + " bytes long."_view), src, fname, line, lidx, idx);
                else
                    token_lc_pnA5((cHar ? Kind_Idfg_char : Kind_Idfg_str), str, idx0, idx1, line0, col, tokens);

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
        else if (has_Mnu2(OPTOKENS.ref, c))
        {
            int maxLookahead = (idx0 + MBOPS_maxLen);
            if (maxLookahead > end)
                maxLookahead = end;

            while (idx < maxLookahead)
            {
                const char c_1 = src[idx++];
                if (!has_Mnu2(OPTOKENS.ref, c_1))
                {
                    idx--;
                    break;
                };
            };
            for (; ; )
            {
                fu::vec_range<char> candidate = fu::get_range(src, idx0, idx);
                if ((candidate.size() == 1) || has_FZWi(MBOPS, candidate))
                {
                    token_pnA5(Kind_Idfg_op, candidate, idx0, idx, line, lidx, tokens);
                    break;
                }
                else
                    idx--;

            };
        }
        else
            err_pnA5(Kind_Idfg_err, idx0, idx0, src, fname, line, lidx, idx);

    };
    line++;
    lidx = (idx + 0);
    token_pnA5(Kind_Idfg_eof, (*(fu::str*)fu::NIL), idx, idx, line, lidx, tokens);
    return LexerOutput_DN4p { static_cast<fu::vec<Token_6M7a>&&>(tokens) };
}

#endif
