#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct TestDiffs_EVlo;
struct Dedupe_5G4g;

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

                                #ifndef DEF_Dedupe_5G4g3SLWlr0
                                #define DEF_Dedupe_5G4g3SLWlr0
struct Dedupe_5G4g
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

                                #ifndef DEF___HO6BfyOe9y4
                                #define DEF___HO6BfyOe9y4
inline static Dedupe_5G4g _HO6B(const int i, fu::vec_range<char> data)
{
    return Dedupe_5G4g { fu::str(data), i };
}
                                #endif

                                #ifndef DEF_map_1HtocLmlLQe
                                #define DEF_map_1HtocLmlLQe
inline fu::vec<Dedupe_5G4g> map_1Hto(fu::view<fu::str> a)
{
    /*MOV*/ fu::vec<Dedupe_5G4g> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _HO6B(i, a[i]);

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

                                #ifndef DEF___LDEGIsOYu4l
                                #define DEF___LDEGIsOYu4l
inline static bool _LDEG(const Dedupe_5G4g& a, const Dedupe_5G4g& b)
{
    int _0;
    return ((_0 = x3Cx3E_j5CR(a.data, b.data)) ? _0 : x3Cx3E_odNT(a.index, b.index)) < 0;
}
                                #endif

                                #ifndef DEF_sort_RKhyPwjJEvh
                                #define DEF_sort_RKhyPwjJEvh
inline static void sort_RKhy(fu::vec_range_mut<Dedupe_5G4g> a)
{
    Dedupe_5G4g l {};
    Dedupe_5G4g r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _LDEG(l, r);
    return lt;
            });

}
                                #endif

                                #ifndef DEF_sort_JIZUD7gi2S5
                                #define DEF_sort_JIZUD7gi2S5
inline void sort_JIZU(fu::vec_range_mut<Dedupe_5G4g> a)
{
    sort_RKhy(a);
}
                                #endif

                                #ifndef DEF_x3Dx3D_oVAS1y5c4ld
                                #define DEF_x3Dx3D_oVAS1y5c4ld
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_j5CR(a, b);
}
                                #endif

                                #ifndef DEF___fBcPIoOF6tl
                                #define DEF___fBcPIoOF6tl
inline static bool _fBcP(const Dedupe_5G4g& a, const Dedupe_5G4g& b)
{
    return a.index < b.index;
}
                                #endif

                                #ifndef DEF_sort_TTRIU0OXxD4
                                #define DEF_sort_TTRIU0OXxD4
inline static void sort_TTRI(fu::vec_range_mut<Dedupe_5G4g> a)
{
    Dedupe_5G4g l {};
    Dedupe_5G4g r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _fBcP(l, r);
    return lt;
            });

}
                                #endif

                                #ifndef DEF_sort_BNA5gPEDP3j
                                #define DEF_sort_BNA5gPEDP3j
inline void sort_BNA5(fu::vec_range_mut<Dedupe_5G4g> a)
{
    sort_TTRI(a);
}
                                #endif

                                #ifndef DEF___K1sw85m2MOa
                                #define DEF___K1sw85m2MOa
inline static const fu::str& _K1sw(const Dedupe_5G4g& _)
{
    return _.data;
}
                                #endif

                                #ifndef DEF_map_8O9fcerYlog
                                #define DEF_map_8O9fcerYlog
inline fu::vec<fu::str> map_8O9f(fu::view<Dedupe_5G4g> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(_K1sw(a[i]));

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
    fu::vec<Dedupe_5G4g> dedupe = map_1Hto(diffs.data);
    sort_JIZU(dedupe);
    for (int i = dedupe.size(); i-- > 1; )
    {
        if (dedupe[(i - 1)].data == dedupe[i].data)
            dedupe.splice(i, 1);

    };
    sort_BNA5(dedupe);
    return join_QbuI(map_8O9f(dedupe));
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
