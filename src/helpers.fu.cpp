
#include <fu/default.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

bool hasIdentifierChars(fu::view<char> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const char c = id[i];
        if ((c == '_') || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')))
            return true;

    };
    return false;
}

fu_STR path_ext(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const char c = path[i];
        if (c == '.')
            return fu::slice(path, i);

        if (c == '/')
            break;

    };
    return fu_STR{};
}

fu_STR path_noext(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const char c = path[i];
        if (c == '.')
            return fu::slice(path, 0, i);

        if (c == '/')
            break;

    };
    return fu_STR{};
}

fu_STR path_dirname(const fu_STR& path)
{
    for (int i = (path.size() - 1); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, 0, (i + 1));

    };
    return "/"_fu;
}

fu_STR path_filename(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, (i + 1));

    };
    return fu_STR(path);
}

                                #ifndef DEFt_split_mKuv
                                #define DEFt_split_mKuv
inline void split_mKuv(const fu_STR& str, fu::view<char> sep, int, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += substr;
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += substr;
    }
    else
        result += str;

}
                                #endif

                                #ifndef DEFt_split_OZkl
                                #define DEFt_split_OZkl
inline fu_VEC<fu_STR> split_OZkl(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_mKuv(str, sep, 0, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_join_9sek
                                #define DEFt_join_9sek
inline fu_STR join_9sek(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

fu_STR path_normalize(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_OZkl(p, "/"_fu);
    for (int i = path.size(); i-- > 0; )
    {
        const fu_STR& part = path[i];
        if ((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1))))
            path.splice(i, 1);

    };
    for (int i_1 = 1; i_1 < path.size(); i_1++)
    {
        if (path[i_1] == ".."_fu)
            path.splice(--i_1, 2);

    };
    return join_9sek(path, "/"_fu);
}

fu_STR path_relative(fu::view<char> from, const fu_STR& to)
{
    const int min = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; i < min; i++)
    {
        const char a = from[i];
        const char b = to[i];
        if (b != a)
            break;

        if (b == '/')
            same = (i + 1);

    };
    /*MOV*/ fu_STR res {};
    for (int i_1 = same; i_1 < from.size(); i_1++)
    {
        if (from[i_1] == '/')
            res += "../"_fu;

    };
    res += fu::slice(to, same);
    return /*NRVO*/ res;
}

fu_STR path_join(fu::view<char> a, const fu_STR& b)
{
    return ((b && (b[0] == '/')) ? path_normalize(b) : path_normalize(((a + '/') + b)));
}

fu_STR ascii_lower(const fu_STR& a)
{
    const int offset = (int(fu::u8('a')) - int(fu::u8('A')));
    /*MOV*/ fu_STR res { a };
    for (int i = 0; i < res.size(); i++)
    {
        const char c = res[i];
        if ((c >= 'A') && (c <= 'Z'))
            res.mutref(i) = char((int(fu::u8(c)) + offset));

    };
    return /*NRVO*/ res;
}

char ascii_upper(const char c)
{
    return (((c >= 'a') && (c <= 'z')) ? char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a'))))) : char(c));
}

int parse10i32(int& offset, fu::view<char> str)
{
    /*MOV*/ int result {};
    while (offset < str.size())
    {
        const char c = str[offset];
        if ((c < '0') || (c > '9'))
            break;

        offset++;
        result = ((result * 10) + (int(fu::u8(c)) - int(fu::u8('0'))));
    };
    return /*NRVO*/ result;
}

#endif
