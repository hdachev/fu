#include <fu/default.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

bool hasIdentifierChars(fu::view<fu::byte> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const fu::byte c = id[i];
        if ((c == fu::byte('_')) || ((c >= fu::byte('a')) && (c <= fu::byte('z'))) || ((c >= fu::byte('A')) && (c <= fu::byte('Z'))) || ((c >= fu::byte('0')) && (c <= fu::byte('9'))))
            return true;

    };
    return false;
}

fu_STR path_ext(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const fu::byte c = path[i];
        if (c == fu::byte('.'))
            return fu::slice(path, i);

        if (c == fu::byte('/'))
            break;

    };
    return fu_STR{};
}

fu_STR path_noext(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const fu::byte c = path[i];
        if (c == fu::byte('.'))
            return fu::slice(path, 0, i);

        if (c == fu::byte('/'))
            break;

    };
    return fu_STR{};
}

fu_STR path_dirname(const fu_STR& path)
{
    for (int i = (path.size() - 1); i-- > 0; )
    {
        if (path[i] == fu::byte('/'))
            return fu::slice(path, 0, (i + 1));

    };
    return "/"_fu;
}

fu_STR path_filename(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        if (path[i] == fu::byte('/'))
            return fu::slice(path, (i + 1));

    };
    return fu_STR(path);
}

                                #ifndef DEFt_split_mKuv
                                #define DEFt_split_mKuv
inline void split_mKuv(const fu_STR& str_1, fu::view<fu::byte> sep, int, fu_VEC<fu_STR>& result)
{
    int last_1 = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str_1, sep, last_1)) >= 0))
        {

            {
                fu_STR substr_1 = fu::slice(str_1, last_1, next);
                result += substr_1;
            };
            last_1 = (next + N);
        };
    };
    if (last_1)
    {
        fu_STR substr_1 = fu::slice(str_1, last_1);
        result += substr_1;
    }
    else
        result += str_1;

}
                                #endif

                                #ifndef DEFt_split_OZkl
                                #define DEFt_split_OZkl
inline fu_VEC<fu_STR> split_OZkl(const fu_STR& str_1, fu::view<fu::byte> sep)
{
    fu_VEC<fu_STR> result {};
    split_mKuv(str_1, sep, 0, result);
    return result;
}
                                #endif

                                #ifndef DEFt_join_9sek
                                #define DEFt_join_9sek
inline fu_STR join_9sek(fu::view<fu_STR> a, fu::view<fu::byte> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    fu_STR res {};
    res.grow<false>(size);
    fu::view<fu::byte> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<fu::byte> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return res;
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

fu_STR path_relative(fu::view<fu::byte> from, const fu_STR& to)
{
    const int min_1 = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; i < min_1; i++)
    {
        const fu::byte a = from[i];
        const fu::byte b = to[i];
        if (b != a)
            break;

        if (b == fu::byte('/'))
            same = (i + 1);

    };
    fu_STR res {};
    for (int i_1 = same; i_1 < from.size(); i_1++)
    {
        if (from[i_1] == fu::byte('/'))
            res += "../"_fu;

    };
    res += fu::slice(to, same);
    return res;
}

fu_STR path_join(fu::view<fu::byte> a, const fu_STR& b)
{
    return ((b && (b[0] == fu::byte('/'))) ? path_normalize(b) : path_normalize(((a + fu::byte('/')) + b)));
}

fu_STR ascii_lower(const fu_STR& a)
{
    const int offset = (int(fu::byte('a')) - int(fu::byte('A')));
    fu_STR res { a };
    for (int i = 0; i < res.size(); i++)
    {
        const fu::byte c = res[i];
        if ((c >= fu::byte('A')) && (c <= fu::byte('Z')))
            res.mutref(i) = fu::byte((int(c) + offset));

    };
    return res;
}

fu::byte ascii_upper(const fu::byte c)
{
    return (((c >= fu::byte('a')) && (c <= fu::byte('z'))) ? fu::byte((int(c) + (int(fu::byte('A')) - int(fu::byte('a'))))) : fu::byte(c));
}

int parse10i32(int& offset, fu::view<fu::byte> str_1)
{
    int result {};
    while (offset < str_1.size())
    {
        const fu::byte c = str_1[offset];
        if ((c < fu::byte('0')) || (c > fu::byte('9')))
            break;

        offset++;
        result = ((result * 10) + (int(c) - int(fu::byte('0'))));
    };
    return result;
}

#endif
