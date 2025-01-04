#include <cstdint>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/LEGACY_slice.h>

struct s_TestOutput;
typedef int s_ExitStatus;
int parse10s32_V5IuMsej(int&, fu::view<char>);

                                #ifndef DEF_s_ExitStatus
                                #define DEF_s_ExitStatus
                                #endif

                                #ifndef DEF_s_TestOutput
                                #define DEF_s_TestOutput
struct s_TestOutput
{
    s_ExitStatus status;
    int uniq_bytes;
    int uniq_count;
    int arc_bytes;
    int arc_count;
    explicit operator bool() const noexcept
    {
        return false
            || status
            || uniq_bytes
            || uniq_count
            || arc_bytes
            || arc_count
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_sizeof_TestOutput
                                #define DEF_sizeof_TestOutput
inline constexpr int sizeof_TestOutput = (5 * 4);
                                #endif

bool looks_legit_6GsP67je(const int64_t size)
{
    return (size == 4ll) || (size == int64_t(sizeof_TestOutput));
}

fu::str serialize_6GsP67je(const s_TestOutput& to)
{
    /*MOV*/ fu::str data {};
    data.resize(sizeof_TestOutput);

    {
        fu::view_mut<s_TestOutput> data_1 = fu::view_of_mut<s_TestOutput>(data);
        data_1.mutref(0) = s_TestOutput(to);
    };
    return /*NRVO*/ data;
}

s_TestOutput parse_6GsP67je(fu::view<char> data)
{
    s_TestOutput out {};
    if (data.size() == 4)
        out.status = fu::view_of<s_ExitStatus>(data)[0];
    else if (data.size() == sizeof_TestOutput)
        out = fu::view_of<s_TestOutput>(data)[0];
    else
        out.status = 101;

    return out;
}

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

                                #ifndef DEF_find_2C20a41o6u3
                                #define DEF_find_2C20a41o6u3
inline int find_2C20a41o(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_5WUbOXwW(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF___r0PfTUj3G5c
                                #define DEF___r0PfTUj3G5c
inline static fu::view<fu::str> _r0PfTUj3(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}
                                #endif

                                #ifndef DEF_split_qWczmRa2xVj
                                #define DEF_split_qWczmRa2xVj
inline void split_qWczmRa2(const fu::str& str, fu::view<char> sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = find_2C20a41o(str, sep, last)) >= 0))
        {
            _r0PfTUj3(fu::slice(str, last, next), result);
            last = (next + N);
        };
    };
    if (last)
        _r0PfTUj3(fu::slice(str, last), result);
    else
        _r0PfTUj3(str, result);

}
                                #endif

                                #ifndef DEF_split_pAb7nvu3yla
                                #define DEF_split_pAb7nvu3yla
inline fu::vec<fu::str> split_pAb7nvu3(const fu::str& str, fu::view<char> sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_qWczmRa2(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

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

                                #ifndef DEF_starts_hRi5tkxndc1
                                #define DEF_starts_hRi5tkxndc1
inline bool starts_hRi5tkxn(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_TestOutput from_6GsP67je(const fu::str& stdout, const s_ExitStatus status)
{
    s_TestOutput out {};
    out.status = status;
    fu::vec<fu::str> parts = split_pAb7nvu3(stdout, "  STAT: "_fu);
    for (int i = 1; i < parts.size(); i++)
    {
        const fu::str& part = parts[i];
        int& slot = (starts_hRi5tkxn(part, "UNIQ Total Bytes"_fu) ? out.uniq_bytes : (starts_hRi5tkxn(part, "UNIQ Total Count"_fu) ? out.uniq_count : (starts_hRi5tkxn(part, "ARC  Total Bytes"_fu) ? out.arc_bytes : (starts_hRi5tkxn(part, "ARC  Total Count"_fu) ? out.arc_count : fu::fail(("Unknown stat: "_fu + part))))));
        int firstNewline = part.size();
        for (int i_1 = 0; i_1 < part.size(); i_1++)
        {
            const char c = part[i_1];
            if ((c == '\n') || (c == '\x1B'))
            {
                firstNewline = i_1;
                break;
            };
        };
        /*MOV*/ fu::str part_1 = ((firstNewline > 0) ? fu::slice(part, 0, firstNewline) : fu::str(part));
        int lastSpace = 0;
        for (int i_2 = part_1.size(); i_2-- > 0; )
        {
            if (part_1[i_2] == ' ')
            {
                lastSpace = i_2;
                break;
            };
        };
        fu::str part_2 = ((lastSpace > 0) ? fu::slice(part_1, (lastSpace + 1)) : static_cast<fu::str&&>(part_1));
        int offset = 0;
        slot = parse10s32_V5IuMsej(offset, part_2);
        if (!(offset == part_2.size()))
            fu::fail((((((x7E_3lDd4lqo("Could not parse stat ("_fu, fu::i64dec(offset)) + "): `"_fu) + part_2) + "` in `"_fu) + parts[i]) + "`."_fu));

    };
    return out;
}

fu::str into_testdiff_6GsP67je(const s_TestOutput& td)
{
    /*MOV*/ fu::str out = "[ "_fu;

    {
        out += (x7E_3lDd4lqo(("status"_fu + "("_fu), fu::i64dec(td.status)) + ") "_fu);
        out += (x7E_3lDd4lqo(("uniq_bytes"_fu + "("_fu), fu::i64dec(td.uniq_bytes)) + ") "_fu);
        out += (x7E_3lDd4lqo(("uniq_count"_fu + "("_fu), fu::i64dec(td.uniq_count)) + ") "_fu);
        out += (x7E_3lDd4lqo(("arc_bytes"_fu + "("_fu), fu::i64dec(td.arc_bytes)) + ") "_fu);
        out += (x7E_3lDd4lqo(("arc_count"_fu + "("_fu), fu::i64dec(td.arc_count)) + ") "_fu);
    };
    out += "]"_fu;
    return /*NRVO*/ out;
}

#endif
