#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>


#ifndef fu_NO_fdefs

fu::str ext_BWbYsL34(const fu::str& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const char c = path[i];
        if (c == '.')
            return fu::slice(path, i);
        else if (c == '/')
            break;

    };
    return fu::str{};
}

fu::str noext_BWbYsL34(const fu::str& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const char c = path[i];
        if (c == '.')
            return fu::slice(path, 0, i);
        else if (c == '/')
            break;

    };
    return fu::str{};
}

fu::str dirname_BWbYsL34(const fu::str& path)
{
    for (int i = (path.size() - 1); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, 0, (i + 1));

    };
    return fu::str{};
}

fu::str filename_BWbYsL34(const fu::str& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, (i + 1));

    };
    return fu::str(path);
}

                                #ifndef DEF_find_OIHcVRad6D9
                                #define DEF_find_OIHcVRad6D9
inline int find_OIHcVRad(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? start : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

inline static fu::vec<fu::str>& l_0_0_OhcX1T4I(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}

                                #ifndef DEF_split_ctAUHAHEaL4
                                #define DEF_split_ctAUHAHEaL4
inline void split_ctAUHAHE(const fu::str& str, const char sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = 1;
    while (((next = find_OIHcVRad(str, sep, last)) >= 0))
    {
        l_0_0_OhcX1T4I(fu::slice(str, last, next), result);
        last = (next + N);
    };
    if (last)
        l_0_0_OhcX1T4I(fu::slice(str, last), result);
    else
        l_0_0_OhcX1T4I(str, result);

}
                                #endif

                                #ifndef DEF_split_yF8Ik9LFRBa
                                #define DEF_split_yF8Ik9LFRBa
inline fu::vec<fu::str> split_yF8Ik9LF(const fu::str& str, const char sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_ctAUHAHE(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_x3Cx3E_AsFD7H8Nlu6
                                #define DEF_x3Cx3E_AsFD7H8Nlu6
inline int x3Cx3E_AsFD7H8N(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_f0RieKMU2n0
                                #define DEF_x3Cx3E_f0RieKMU2n0
inline int x3Cx3E_f0RieKMU(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_r7bhmB7DrQ0
                                #define DEF_x3Cx3E_r7bhmB7DrQ0
inline int x3Cx3E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_AsFD7H8N(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_f0RieKMU(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_r7bhmB7DrQ0
                                #define DEF_x3Dx3D_r7bhmB7DrQ0
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

                                #ifndef DEF_join_00JgDCHCEE2
                                #define DEF_join_00JgDCHCEE2
inline fu::str join_00JgDCHC(fu::view<fu::str> a, const char sep)
{
    if (a.size() < 2)
    {
        if (a.size())
            return fu::str(a[0]);
        else
        {
            return fu::str{};
        };
    }
    else
    {
        const int N = 1;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::str res {};
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
    };
}
                                #endif

fu::str normalize_0HadKtoW(const fu::str& p)
{
    fu::vec<fu::str> path = split_yF8Ik9LF(p, '/');
    for (int i = path.size(); i-- > 0; )
    {
        fu::view<char> part = path[i];
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
    return join_00JgDCHC(path, '/');
}

fu::str relative_BXjxjqDS(fu::view<char> from, const fu::str& to)
{
    const int min = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; i < min; i++)
    {
        const char a = from[i];
        const char b = to[i];
        if (b != a)
            break;
        else if (b == '/')
            same = (i + 1);

    };
    /*MOV*/ fu::str res {};
    for (int i_1 = same; i_1 < from.size(); i_1++)
    {
        if (from[i_1] == '/')
            res += "../"_fu;

    };
    res += fu::slice(to, same);
    return /*NRVO*/ res;
}

                                #ifndef DEF_starts_90iSu77lC9e
                                #define DEF_starts_90iSu77lC9e
inline bool starts_90iSu77l(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_ends_90iSu77lC9e
                                #define DEF_ends_90iSu77lC9e
inline bool ends_90iSu77l(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

fu::str join_By06Vz3F(fu::view<char> a, const fu::str& b)
{
    return normalize_0HadKtoW((starts_90iSu77l(b, '/') ? fu::str(b) : (ends_90iSu77l(a, '/') ? (a + b) : ((a + '/') + b))));
}

#endif
