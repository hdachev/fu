#include <cstdint>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

struct TestOutput_OIXu;
typedef int ExitStatus_iZrm;

                                #ifndef DEF_sizeof_TestOutput
                                #define DEF_sizeof_TestOutput
inline constexpr int sizeof_TestOutput = (5 * 4);
                                #endif
int parse10s32_V5Iu(int&, fu::view<char>);

                                #ifndef DEF_ExitStatus_iZrm
                                #define DEF_ExitStatus_iZrm
                                #endif

                                #ifndef DEF_TestOutput_OIXu892afg8
                                #define DEF_TestOutput_OIXu892afg8
struct TestOutput_OIXu
{
    ExitStatus_iZrm status;
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

bool looks_legit_6GsP(const int64_t size)
{
    return (size == 4ll) || (size == int64_t(sizeof_TestOutput));
}

fu::str serialize_6GsP(const TestOutput_OIXu& to)
{
    /*MOV*/ fu::str data {};
    data.resize(sizeof_TestOutput);

    {
        fu::view_mut<TestOutput_OIXu> data_1 = fu::view_of_mut<TestOutput_OIXu>(data);
        data_1.mutref(0) = TestOutput_OIXu(to);
    };
    return /*NRVO*/ data;
}

TestOutput_OIXu parse_6GsP(fu::vec_range<char> data)
{
    TestOutput_OIXu out {};
    if (data.size() == 4)
        out.status = fu::view_of<ExitStatus_iZrm>(data)[0];
    else if (data.size() == sizeof_TestOutput)
        out = fu::view_of<TestOutput_OIXu>(data)[0];
    else
        out.status = 101;

    return out;
}

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

                                #ifndef DEF_find_BNNwXhPzgU8
                                #define DEF_find_BNNwXhPzgU8
inline int find_BNNw(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_7SLc(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF___eQwyLf8GPl6
                                #define DEF___eQwyLf8GPl6
inline static fu::view<fu::str> _eQwy(fu::vec_range<char> substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}
                                #endif

                                #ifndef DEF_split_yvvq0ZGoCfa
                                #define DEF_split_yvvq0ZGoCfa
inline void split_yvvq(fu::vec_range<char> str, fu::view<char> sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = find_BNNw(str, sep, last)) >= 0))
        {
            _eQwy(fu::get_range(str, last, next), result);
            last = (next + N);
        };
    };
    if (last)
        _eQwy(fu::get_range(str, last), result);
    else
        _eQwy(str, result);

}
                                #endif

                                #ifndef DEF_split_t3LL2OMc5xa
                                #define DEF_split_t3LL2OMc5xa
inline fu::vec<fu::str> split_t3LL(fu::vec_range<char> str, fu::view<char> sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_yvvq(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

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

                                #ifndef DEF_starts_ojopLVekF87
                                #define DEF_starts_ojopLVekF87
inline bool starts_ojop(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

TestOutput_OIXu from_6GsP(fu::vec_range<char> stdout, const ExitStatus_iZrm status)
{
    TestOutput_OIXu out {};
    out.status = status;
    fu::vec<fu::str> parts = split_t3LL(stdout, "  STAT: "_view);
    for (int i = 1; i < parts.size(); i++)
    {
        fu::view<char> part = parts[i];
        int& slot = (starts_ojop(part, "UNIQ Total Bytes"_view) ? out.uniq_bytes : (starts_ojop(part, "UNIQ Total Count"_view) ? out.uniq_count : (starts_ojop(part, "ARC  Total Bytes"_view) ? out.arc_bytes : (starts_ojop(part, "ARC  Total Count"_view) ? out.arc_count : fu::fail(("Unknown stat: "_view + part))))));
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
        fu::view<char> part_1 = ((firstNewline > 0) ? fu::get_view(part, 0, firstNewline) : part);
        int lastSpace = 0;
        for (int i_2 = part_1.size(); i_2-- > 0; )
        {
            if (part_1[i_2] == ' ')
            {
                lastSpace = i_2;
                break;
            };
        };
        fu::view<char> part_2 = ((lastSpace > 0) ? fu::get_view(part_1, (lastSpace + 1)) : part_1);
        int offset = 0;
        slot = parse10s32_V5Iu(offset, part_2);
        if (!(offset == part_2.size()))
            fu::fail((((((x7E_rA00("Could not parse stat ("_view, fu::i64dec(offset)) + "): `"_view) + part_2) + "` in `"_view) + parts[i]) + "`."_view));

    };
    return out;
}

fu::str into_testdiff_6GsP(const TestOutput_OIXu& td)
{
    /*MOV*/ fu::str out = fu::str("[ "_fu);

    {
        out += (x7E_rA00(("status"_view + "("_view), fu::i64dec(td.status)) + ") "_view);
        out += (x7E_rA00(("uniq_bytes"_view + "("_view), fu::i64dec(td.uniq_bytes)) + ") "_view);
        out += (x7E_rA00(("uniq_count"_view + "("_view), fu::i64dec(td.uniq_count)) + ") "_view);
        out += (x7E_rA00(("arc_bytes"_view + "("_view), fu::i64dec(td.arc_bytes)) + ") "_view);
        out += (x7E_rA00(("arc_count"_view + "("_view), fu::i64dec(td.arc_count)) + ") "_view);
    };
    out += "]"_view;
    return /*NRVO*/ out;
}

#endif
