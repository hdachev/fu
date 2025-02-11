#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec_range.h>
#include <fu/static_ref.h>
#include <fu/init_priority.h>

char upper_KWQn(char);

                                #ifndef STR_jnKGUNaVd6i
                                #define STR_jnKGUNaVd6i
static const fu::str str_jnKGUNaVd6i fu_INIT_PRIORITY(1002) { "reinterpret_cast"_fu };
                                #endif

                                #ifndef STR_HFtqhjKsPz2
                                #define STR_HFtqhjKsPz2
static const fu::str str_HFtqhjKsPz2 fu_INIT_PRIORITY(1002) { "+=-=*=/=%=&=|=^="_fu };
                                #endif

                                #ifndef STR_UtgLGOFPTEj
                                #define STR_UtgLGOFPTEj
static const fu::str str_UtgLGOFPTEj fu_INIT_PRIORITY(1002) { "<<=>>="_fu };
                                #endif

                                #ifndef STR_x0KML3zI838
                                #define STR_x0KML3zI838
static const fu::str str_x0KML3zI838 fu_INIT_PRIORITY(1002) { "+=-=*=/=%=&=|=^=<<=>>==!=&&||"_fu };
                                #endif

                                #ifndef STR_5QeLXSnFYu9
                                #define STR_5QeLXSnFYu9
static const fu::str str_5QeLXSnFYu9 fu_INIT_PRIORITY(1002) { "++--!*&~"_fu };
                                #endif

#ifndef fu_NO_fdefs

static const fu::vec<fu::vec<fu::str>> KEYWORDS fu_INIT_PRIORITY(1002) = fu::vec<fu::vec<fu::str>> {{ fu::vec<fu::str>{}, fu::vec<fu::str>{}, fu::vec<fu::str> {{ fu::str("do"_fu), fu::str("if"_fu), fu::str("or"_fu) }}, fu::vec<fu::str> {{ fu::str("and"_fu), fu::str("asm"_fu), fu::str("for"_fu), fu::str("int"_fu), fu::str("new"_fu), fu::str("not"_fu), fu::str("try"_fu), fu::str("xor"_fu) }}, fu::vec<fu::str> {{ fu::str("auto"_fu), fu::str("bool"_fu), fu::str("case"_fu), fu::str("char"_fu), fu::str("else"_fu), fu::str("enum"_fu), fu::str("goto"_fu), fu::str("long"_fu), fu::str("this"_fu), fu::str("true"_fu), fu::str("void"_fu) }}, fu::vec<fu::str> {{ fu::str("bitor"_fu), fu::str("break"_fu), fu::str("catch"_fu), fu::str("class"_fu), fu::str("compl"_fu), fu::str("const"_fu), fu::str("false"_fu), fu::str("float"_fu), fu::str("or_eq"_fu), fu::str("short"_fu), fu::str("throw"_fu), fu::str("union"_fu), fu::str("using"_fu), fu::str("while"_fu) }}, fu::vec<fu::str> {{ fu::str("and_eq"_fu), fu::str("bitand"_fu), fu::str("delete"_fu), fu::str("double"_fu), fu::str("export"_fu), fu::str("extern"_fu), fu::str("friend"_fu), fu::str("inline"_fu), fu::str("not_eq"_fu), fu::str("public"_fu), fu::str("return"_fu), fu::str("signed"_fu), fu::str("sizeof"_fu), fu::str("static"_fu), fu::str("struct"_fu), fu::str("switch"_fu), fu::str("typeid"_fu), fu::str("xor_eq"_fu) }}, fu::vec<fu::str> {{ fu::str("alignas"_fu), fu::str("alignof"_fu), fu::str("char8_t"_fu), fu::str("concept"_fu), fu::str("default"_fu), fu::str("mutable"_fu), fu::str("nullptr"_fu), fu::str("private"_fu), fu::str("typedef"_fu), fu::str("virtual"_fu), fu::str("wchar_t"_fu) }}, fu::vec<fu::str> {{ fu::str("char16_t"_fu), fu::str("char32_t"_fu), fu::str("continue"_fu), fu::str("co_await"_fu), fu::str("co_yield"_fu), fu::str("decltype"_fu), fu::str("explicit"_fu), fu::str("noexcept"_fu), fu::str("operator"_fu), fu::str("reflexpr"_fu), fu::str("register"_fu), fu::str("requires"_fu), fu::str("template"_fu), fu::str("typename"_fu), fu::str("unsigned"_fu), fu::str("volatile"_fu) }}, fu::vec<fu::str> {{ fu::str("consteval"_fu), fu::str("constexpr"_fu), fu::str("constinit"_fu), fu::str("co_return"_fu), fu::str("namespace"_fu), fu::str("protected"_fu) }}, fu::vec<fu::str> {{ fu::str("const_cast"_fu) }}, fu::vec<fu::str> {{ fu::str("static_cast"_fu) }}, fu::vec<fu::str> {{ fu::str("dynamic_cast"_fu), fu::str("synchronized"_fu), fu::str("thread_local"_fu) }}, fu::vec<fu::str> {{ fu::str("atomic_cancel"_fu), fu::str("atomic_commit"_fu), fu::str("static_assert"_fu) }}, fu::vec<fu::str>{}, fu::vec<fu::str> {{ fu::str("atomic_noexcept"_fu) }}, fu::vec<fu::str> {{ fu::str(str_jnKGUNaVd6i) }} }};

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

fu::str ID_vRqJ(fu::vec_range<char> id)
{
    if (id.size() < KEYWORDS.size())
    {
        const int idx = find_cVsz(KEYWORDS[id.size()], id);
        if ((idx >= 0))
        {
            /*MOV*/ fu::str cpy = fu::str(id);
            cpy.mutref(1) = upper_KWQn(cpy[1]);
            return /*NRVO*/ cpy;
        };
    };
    return fu::str(id);
}

static const fu::static_ref<fu::str> ASSIGN2 fu_INIT_PRIORITY(1002) = str_HFtqhjKsPz2;

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

                                #ifndef DEF_find_7SLcWgAQSl4
                                #define DEF_find_7SLcWgAQSl4
inline int find_7SLc(fu::view<char> haystack, fu::view<char> needle)
{
    if ((haystack.size() < needle.size()) || (needle.size() <= 0))
    {
        if (needle.size())
            return -1;
        else
            return 0;

    }
    else if (needle.size() == 1)
        return find_ZKsG(haystack, needle[0]);
    else
    {
        const int needle_len_m1 = (needle.size() - 1);
        const char needle_last_char = needle[needle_len_m1];
        int skip = 0;
        for (int i = needle_len_m1; i < haystack.size(); )
        {
            while (haystack[i] != needle_last_char)
            {
                if (++i == haystack.size())
                    return -1;

            };
            for (int j = 0; ; )
            {
                if (haystack[((i - needle_len_m1) + j)] != needle[j])
                {
                    if (!skip)
                    {
                        skip = needle.size();
                        for (int j_1 = needle_len_m1; j_1-- > 0; )
                        {
                            if (needle[j_1] == needle_last_char)
                            {
                                skip = (needle_len_m1 - j_1);
                                break;
                            };
                        };
                    };
                    i += skip;
                    break;
                }
                else if (++j == needle_len_m1)
                    return i - needle_len_m1;

            };
        };
        return -1;
    };
}
                                #endif

                                #ifndef DEF_has_YIf6pzpE4yj
                                #define DEF_has_YIf6pzpE4yj
inline bool has_YIf6(fu::view<char> a, fu::view<char> b)
{
    return (find_7SLc(a, b) >= 0);
}
                                #endif

static const fu::static_ref<fu::str> ASSIGN3 fu_INIT_PRIORITY(1002) = str_UtgLGOFPTEj;

bool hasAssignment_vRqJ(fu::view<char> op)
{
    return (op == "="_view) || ((op.size() == 2) ? has_YIf6(ASSIGN2.ref, op) : false) || ((op.size() == 3) ? has_YIf6(ASSIGN3.ref, op) : false);
}

static const fu::static_ref<fu::str> BINARY fu_INIT_PRIORITY(1002) = str_x0KML3zI838;

bool hasBinary_vRqJ(fu::view<char> op)
{
    return has_YIf6(BINARY.ref, op);
}

bool hasPostfix_vRqJ(fu::view<char> op)
{
    return (op == "postfix++"_view) || (op == "postfix--"_view);
}

static const fu::static_ref<fu::str> UNARY fu_INIT_PRIORITY(1002) = str_5QeLXSnFYu9;

bool hasUnary_vRqJ(fu::view<char> op)
{
    if (op.size() > 2)
        return hasPostfix_vRqJ(op);
    else
        return has_YIf6(UNARY.ref, op);

}

bool hasOperator_vRqJ(fu::view<char> op)
{
    return hasBinary_vRqJ(op) || hasUnary_vRqJ(op);
}

#endif
