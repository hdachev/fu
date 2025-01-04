#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>

char upper_KWQnGaxV(char);

#ifndef fu_NO_fdefs

static const fu::vec<fu::vec<fu::str>> KEYWORDS fu_INIT_PRIORITY(1002) = fu::vec<fu::vec<fu::str>> { fu::slate<17, fu::vec<fu::str>> { fu::vec<fu::str>{}, fu::vec<fu::str>{}, fu::vec<fu::str> { fu::slate<3, fu::str> { "do"_fu, "if"_fu, "or"_fu } }, fu::vec<fu::str> { fu::slate<8, fu::str> { "and"_fu, "asm"_fu, "for"_fu, "int"_fu, "new"_fu, "not"_fu, "try"_fu, "xor"_fu } }, fu::vec<fu::str> { fu::slate<11, fu::str> { "auto"_fu, "bool"_fu, "case"_fu, "char"_fu, "else"_fu, "enum"_fu, "goto"_fu, "long"_fu, "this"_fu, "true"_fu, "void"_fu } }, fu::vec<fu::str> { fu::slate<14, fu::str> { "bitor"_fu, "break"_fu, "catch"_fu, "class"_fu, "compl"_fu, "const"_fu, "false"_fu, "float"_fu, "or_eq"_fu, "short"_fu, "throw"_fu, "union"_fu, "using"_fu, "while"_fu } }, fu::vec<fu::str> { fu::slate<18, fu::str> { "and_eq"_fu, "bitand"_fu, "delete"_fu, "double"_fu, "export"_fu, "extern"_fu, "friend"_fu, "inline"_fu, "not_eq"_fu, "public"_fu, "return"_fu, "signed"_fu, "sizeof"_fu, "static"_fu, "struct"_fu, "switch"_fu, "typeid"_fu, "xor_eq"_fu } }, fu::vec<fu::str> { fu::slate<11, fu::str> { "alignas"_fu, "alignof"_fu, "char8_t"_fu, "concept"_fu, "default"_fu, "mutable"_fu, "nullptr"_fu, "private"_fu, "typedef"_fu, "virtual"_fu, "wchar_t"_fu } }, fu::vec<fu::str> { fu::slate<16, fu::str> { "char16_t"_fu, "char32_t"_fu, "continue"_fu, "co_await"_fu, "co_yield"_fu, "decltype"_fu, "explicit"_fu, "noexcept"_fu, "operator"_fu, "reflexpr"_fu, "register"_fu, "requires"_fu, "template"_fu, "typename"_fu, "unsigned"_fu, "volatile"_fu } }, fu::vec<fu::str> { fu::slate<6, fu::str> { "consteval"_fu, "constexpr"_fu, "constinit"_fu, "co_return"_fu, "namespace"_fu, "protected"_fu } }, fu::vec<fu::str> { fu::slate<1, fu::str> { "const_cast"_fu } }, fu::vec<fu::str> { fu::slate<1, fu::str> { "static_cast"_fu } }, fu::vec<fu::str> { fu::slate<3, fu::str> { "dynamic_cast"_fu, "synchronized"_fu, "thread_local"_fu } }, fu::vec<fu::str> { fu::slate<3, fu::str> { "atomic_cancel"_fu, "atomic_commit"_fu, "static_assert"_fu } }, fu::vec<fu::str>{}, fu::vec<fu::str> { fu::slate<1, fu::str> { "atomic_noexcept"_fu } }, fu::vec<fu::str> { fu::slate<1, fu::str> { "reinterpret_cast"_fu } } } };

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

fu::str ID_vRqJr3WR(const fu::str& id)
{
    if (id.size() < KEYWORDS.size())
    {
        const int idx = find_l600OhfD(KEYWORDS[id.size()], id);
        if ((idx >= 0))
        {
            /*MOV*/ fu::str cpy { id };
            cpy.mutref(1) = upper_KWQnGaxV(cpy[1]);
            return /*NRVO*/ cpy;
        };
    };
    return fu::str(id);
}

static const fu::str ASSIGN2 fu_INIT_PRIORITY(1002) = "+=-=*=/=%=&=|=^="_fu;

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

                                #ifndef DEF_find_5WUbOXwWxRb
                                #define DEF_find_5WUbOXwWxRb
inline int find_5WUbOXwW(fu::view<char> haystack, fu::view<char> needle)
{
    if ((haystack.size() < needle.size()) || (needle.size() <= 0))
    {
        if (needle.size())
            return -1;
        else
            return 0;

    }
    else if (needle.size() == 1)
        return find_yP7FbxFZ(haystack, needle[0]);
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

                                #ifndef DEF_has_nst65ofMVk7
                                #define DEF_has_nst65ofMVk7
inline bool has_nst65ofM(fu::view<char> a, fu::view<char> b)
{
    return (find_5WUbOXwW(a, b) >= 0);
}
                                #endif

static const fu::str ASSIGN3 fu_INIT_PRIORITY(1002) = "<<=>>="_fu;

bool hasAssignment_vRqJr3WR(fu::view<char> op)
{
    return (op == "="_fu) || ((op.size() == 2) ? has_nst65ofM(ASSIGN2, op) : false) || ((op.size() == 3) ? has_nst65ofM(ASSIGN3, op) : false);
}

static const fu::str BINARY fu_INIT_PRIORITY(1002) = "+=-=*=/=%=&=|=^=<<=>>==!=&&||"_fu;

bool hasBinary_vRqJr3WR(fu::view<char> op)
{
    return has_nst65ofM(BINARY, op);
}

bool hasPostfix_vRqJr3WR(fu::view<char> op)
{
    return (op == "postfix++"_fu) || (op == "postfix--"_fu);
}

static const fu::str UNARY fu_INIT_PRIORITY(1002) = "++--!*&~"_fu;

bool hasUnary_vRqJr3WR(fu::view<char> op)
{
    if (op.size() > 2)
        return hasPostfix_vRqJr3WR(op);
    else
        return has_nst65ofM(UNARY, op);

}

bool hasOperator_vRqJr3WR(fu::view<char> op)
{
    return hasBinary_vRqJr3WR(op) || hasUnary_vRqJr3WR(op);
}

#endif
