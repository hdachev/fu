#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct TestDiffs_EVlo;
struct Dedupe_VlTQ;

                                #ifndef DEF_TestDiffs_EVloQngEKM1
                                #define DEF_TestDiffs_EVloQngEKM1
struct TestDiffs_EVlo
{
    fu::vec<fu::str> data;
    explicit operator bool() const noexcept
    {
        return false
            || data
        ;
    }
};
                                #endif

                                #ifndef DEF_Dedupe_VlTQLwmXKp1
                                #define DEF_Dedupe_VlTQLwmXKp1
struct Dedupe_VlTQ
{
    fu::str data;
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || data
            || index
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF___0Va3JEBBSX4
                                #define DEF___0Va3JEBBSX4
inline static Dedupe_VlTQ _0Va3(const int i, fu::vec_range<char> data)
{
    return Dedupe_VlTQ { fu::str(data), i };
}
                                #endif

                                #ifndef DEF_map_isR9D3ch448
                                #define DEF_map_isR9D3ch448
inline fu::vec<Dedupe_VlTQ> map_isR9(fu::view<fu::str> a)
{
    /*MOV*/ fu::vec<Dedupe_VlTQ> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _0Va3(i, a[i]);

    return /*NRVO*/ res;
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

                                #ifndef DEF_x3Cx3E_erT9abBVjC1
                                #define DEF_x3Cx3E_erT9abBVjC1
inline int x3Cx3E_erT9(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_odNT(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_YuqO(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF___a4GXFVrCzCd
                                #define DEF___a4GXFVrCzCd
inline static bool _a4GX(const Dedupe_VlTQ& a, const Dedupe_VlTQ& b)
{
    int _0;
    return ((_0 = x3Cx3E_erT9(a.data, b.data)) ? _0 : x3Cx3E_odNT(a.index, b.index)) < 0;
}
                                #endif

static void sort_pXri(fu::vec_range_mut<Dedupe_VlTQ> a)
{
    Dedupe_VlTQ l {};
    Dedupe_VlTQ r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _a4GX(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_iKSMIOVF2af
                                #define DEF_sort_iKSMIOVF2af
inline void sort_iKSM(fu::vec_range_mut<Dedupe_VlTQ> a)
{
    sort_pXri(a);
}
                                #endif

                                #ifndef DEF_x3Dx3D_xqw8ga5OCp4
                                #define DEF_x3Dx3D_xqw8ga5OCp4
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_erT9(a, b);
}
                                #endif

                                #ifndef DEF___CmVWYM41O66
                                #define DEF___CmVWYM41O66
inline static bool _CmVW(const Dedupe_VlTQ& a, const Dedupe_VlTQ& b)
{
    return a.index < b.index;
}
                                #endif

static void sort_MHRo(fu::vec_range_mut<Dedupe_VlTQ> a)
{
    Dedupe_VlTQ l {};
    Dedupe_VlTQ r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _CmVW(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_FRghucakcN1
                                #define DEF_sort_FRghucakcN1
inline void sort_FRgh(fu::vec_range_mut<Dedupe_VlTQ> a)
{
    sort_MHRo(a);
}
                                #endif

                                #ifndef DEF___sFbUViA7P33
                                #define DEF___sFbUViA7P33
inline static const fu::str& _sFbU(const Dedupe_VlTQ& _)
{
    return _.data;
}
                                #endif

                                #ifndef DEF_map_Tl0bLyhpiBl
                                #define DEF_map_Tl0bLyhpiBl
inline fu::vec<fu::str> map_Tl0b(fu::view<Dedupe_VlTQ> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(_sFbU(a[i]));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_QbuIaIZczPf
                                #define DEF_join_QbuIaIZczPf
inline fu::str join_QbuI(fu::view<fu::str> a)
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
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::str res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_start0_mut(res, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

fu::str serialize_pXri(const TestDiffs_EVlo& diffs)
{
    fu::vec<Dedupe_VlTQ> dedupe = map_isR9(diffs.data);
    sort_iKSM(dedupe);
    for (int i = dedupe.size(); i-- > 1; )
    {
        if (dedupe[(i - 1)].data == dedupe[i].data)
            dedupe.splice(i, 1);

    };
    sort_FRgh(dedupe);
    return join_QbuI(map_Tl0b(dedupe));
}

void set_next_pXri(TestDiffs_EVlo& diffs, fu::view<char> item)
{
    diffs.data += (item + "\n========\n"_view);
}

void append_pXri(TestDiffs_EVlo& diffs, const TestDiffs_EVlo& other)
{
    diffs.data += other.data;
}

#endif
