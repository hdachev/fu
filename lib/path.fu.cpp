#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/vec/cmp.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

fu_STR normalize_KqRBcvmh(const fu_STR&);
fu_STR join_Lfq50XKd(fu::view<char>, const fu_STR&);

#ifndef fu_NO_fdefs

fu_STR ext_KqRBcvmh(const fu_STR& path)
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

fu_STR noext_KqRBcvmh(const fu_STR& path)
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

fu_STR dirname_KqRBcvmh(const fu_STR& path)
{
    for (int i = (path.size() - 1); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, 0, (i + 1));

    };
    return "/"_fu;
}

fu_STR filename_KqRBcvmh(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, (i + 1));

    };
    return fu_STR(path);
}

                                #ifndef DEF_find_yd8BAtiL
                                #define DEF_find_yd8BAtiL
inline int find_yd8BAtiL(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (/*MOV*/ int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_split_hA7qWWMN
                                #define DEF_split_hA7qWWMN
inline void split_hA7qWWMN(const fu_STR& str, const char sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    if (N)
    {
        while (((next = find_yd8BAtiL(str, sep, int(last))) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += fu_STR(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += fu_STR(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_cnCAmU7Y
                                #define DEF_split_cnCAmU7Y
inline fu_VEC<fu_STR> split_cnCAmU7Y(const fu_STR& str, const char sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_hA7qWWMN(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_join_T10hQzXB
                                #define DEF_join_T10hQzXB
inline fu_STR join_T10hQzXB(fu::view<fu_STR> a, const char sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    const int N = 1;
    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (N + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        res.mutref(size) = sep;
        size += N;
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

fu_STR normalize_KqRBcvmh(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_cnCAmU7Y(p, '/');
    for (int i = path.size(); i-- > 0; )
    {
        const fu_STR& part = path[i];
        if ((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1))))
            path.splice(i, 1);

    };
    for (int i_1 = 1; i_1 < path.size(); i_1++)
    {
        if (path[i_1] == ".."_fu)
        {
            path.splice(--i_1, 2);
            if (i_1)
                i_1--;

        };
    };
    return join_T10hQzXB(path, '/');
}

fu_STR relative_Lfq50XKd(fu::view<char> from, const fu_STR& to)
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

                                #ifndef DEF_starts_cnCAmU7Y
                                #define DEF_starts_cnCAmU7Y
inline bool starts_cnCAmU7Y(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_ends_cnCAmU7Y
                                #define DEF_ends_cnCAmU7Y
inline bool ends_cnCAmU7Y(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

fu_STR join_Lfq50XKd(fu::view<char> a, const fu_STR& b)
{
    return normalize_KqRBcvmh((starts_cnCAmU7Y(b, '/') ? fu_STR(b) : (ends_cnCAmU7Y(a, '/') ? (a + b) : ((a + '/') + b))));
}

#endif
