
#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

fu_STR join_lq7BzT61(fu::view<char>, const fu_STR&);
fu_STR normalize_9EcF53rc(const fu_STR&);

#ifndef FU_NO_FDEFs

fu_STR ext_9EcF53rc(const fu_STR& path)
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

fu_STR noext_9EcF53rc(const fu_STR& path)
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

fu_STR dirname_9EcF53rc(const fu_STR& path)
{
    for (int i = (path.size() - 1); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, 0, (i + 1));

    };
    return "/"_fu;
}

fu_STR filename_9EcF53rc(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, (i + 1));

    };
    return fu_STR(path);
}

                                #ifndef DEFt_find_G4nAwoCx
                                #define DEFt_find_G4nAwoCx
inline int find_G4nAwoCx(fu::view<char> a, const char b, int start)
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

                                #ifndef DEFt_split_01AlOXDY
                                #define DEFt_split_01AlOXDY
inline void split_01AlOXDY(const fu_STR& str, const char sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    while (((next = find_G4nAwoCx(str, sep, int(last))) >= 0))
    {

        {
            fu_STR substr = fu::slice(str, last, next);
            result += fu_STR(substr);
        };
        last = (next + 1);
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

                                #ifndef DEFt_split_3yRdKyg4
                                #define DEFt_split_3yRdKyg4
inline fu_VEC<fu_STR> split_3yRdKyg4(const fu_STR& str, const char sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_01AlOXDY(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_join_YMBOk1E0
                                #define DEFt_join_YMBOk1E0
inline fu_STR join_YMBOk1E0(fu::view<fu_STR> a, const char sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (1 + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        res.mutref(size) = sep;
        size += 1;
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

fu_STR normalize_9EcF53rc(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_3yRdKyg4(p, '/');
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
    return join_YMBOk1E0(path, '/');
}

fu_STR relative_lq7BzT61(fu::view<char> from, const fu_STR& to)
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

                                #ifndef DEFt_starts_3yRdKyg4
                                #define DEFt_starts_3yRdKyg4
inline bool starts_3yRdKyg4(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEFt_ends_3yRdKyg4
                                #define DEFt_ends_3yRdKyg4
inline bool ends_3yRdKyg4(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

fu_STR join_lq7BzT61(fu::view<char> a, const fu_STR& b)
{
    return normalize_9EcF53rc((starts_3yRdKyg4(b, '/') ? fu_STR(b) : (ends_3yRdKyg4(a, '/') ? (a + b) : ((a + '/') + b))));
}

#endif
