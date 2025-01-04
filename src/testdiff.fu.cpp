#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct s_TestDiffs;
struct s_Dedupe;

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
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

                                #ifndef DEF_s_Dedupe
                                #define DEF_s_Dedupe
struct s_Dedupe
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

                                #ifndef DEF___26vPWLfxG18
                                #define DEF___26vPWLfxG18
inline static s_Dedupe _26vPWLfx(const int i, const fu::str& data)
{
    return s_Dedupe { fu::str(data), i };
}
                                #endif

                                #ifndef DEF_map_NKLmTXSLAl0
                                #define DEF_map_NKLmTXSLAl0
inline fu::vec<s_Dedupe> map_NKLmTXSL(fu::view<fu::str> a)
{
    /*MOV*/ fu::vec<s_Dedupe> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _26vPWLfx(i, a[i]);

    return /*NRVO*/ res;
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

                                #ifndef DEF___8W9EyRT66ne
                                #define DEF___8W9EyRT66ne
inline static bool _8W9EyRT6(const s_Dedupe& a, const s_Dedupe& b)
{
    int _0 {};
    return ((_0 = x3Cx3E_bv5nK4Kl(a.data, b.data)) ? _0 : x3Cx3E_XrkW2YUZ(a.index, b.index)) < 0;
}
                                #endif

static void sort_pXriHDvy(fu::vec<s_Dedupe>& a)
{
    s_Dedupe l {};
    s_Dedupe r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _8W9EyRT6(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_ZMaORhfpRa3
                                #define DEF_sort_ZMaORhfpRa3
inline void sort_ZMaORhfp(fu::vec<s_Dedupe>& a)
{
    sort_pXriHDvy(a);
}
                                #endif

                                #ifndef DEF_x3Dx3D_KFMeZhJSBE8
                                #define DEF_x3Dx3D_KFMeZhJSBE8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

                                #ifndef DEF___1p33jUW4eYh
                                #define DEF___1p33jUW4eYh
inline static bool _1p33jUW4(const s_Dedupe& a, const s_Dedupe& b)
{
    return a.index < b.index;
}
                                #endif

static void sort_MHRoN3gq(fu::vec<s_Dedupe>& a)
{
    s_Dedupe l {};
    s_Dedupe r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _1p33jUW4(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_xp6Ri6ggH0k
                                #define DEF_sort_xp6Ri6ggH0k
inline void sort_xp6Ri6gg(fu::vec<s_Dedupe>& a)
{
    sort_MHRoN3gq(a);
}
                                #endif

                                #ifndef DEF___OwRa1Er5PSd
                                #define DEF___OwRa1Er5PSd
inline static const fu::str& _OwRa1Er5(const s_Dedupe& _)
{
    return _.data;
}
                                #endif

                                #ifndef DEF_map_X3I6sCtTVf4
                                #define DEF_map_X3I6sCtTVf4
inline fu::vec<fu::str> map_X3I6sCtT(fu::view<s_Dedupe> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = fu::str(_OwRa1Er5(a[i]));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_P3W3QNXygla
                                #define DEF_join_P3W3QNXygla
inline fu::str join_P3W3QNXy(fu::view<fu::str> a)
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

fu::str serialize_pXriHDvy(const s_TestDiffs& diffs)
{
    fu::vec<s_Dedupe> dedupe = map_NKLmTXSL(diffs.data);
    sort_ZMaORhfp(dedupe);
    for (int i = dedupe.size(); i-- > 1; )
    {
        if (dedupe[(i - 1)].data == dedupe[i].data)
            dedupe.splice(i, 1);

    };
    sort_xp6Ri6gg(dedupe);
    return join_P3W3QNXy(map_X3I6sCtT(dedupe));
}

void set_next_pXriHDvy(s_TestDiffs& diffs, fu::view<char> item)
{
    diffs.data += (item + "\n========\n"_fu);
}

void append_pXriHDvy(s_TestDiffs& diffs, const s_TestDiffs& other)
{
    diffs.data += other.data;
}

#endif
