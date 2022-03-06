
#include <fu/default.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>
#include <utility>

struct s_BitSet;
struct s_Flow;
struct s_Lifetime;
struct s_Region;

bool has_CoC0247n(const s_BitSet&, int);
int Region_asLocal_L0YJBnz6(const s_Region&);
void add_yDyCXbrU(s_BitSet&, int);

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu_VEC<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Flow
                                #define DEF_s_Flow
struct s_Flow
{
    fu_VEC<fu_VEC<int>> parents;
    fu_VEC<fu_VEC<int>> invalidates;
    fu_VEC<fu_VEC<int>> arg_parents;
    fu_VEC<fu_VEC<int>> at_soft_risk;
    fu_VEC<fu_VEC<int>> at_hard_risk;
    s_BitSet is_arg;
    fu_VEC<int> arg_targets;
    fu_VEC<int> arg_positions;
    explicit operator bool() const noexcept
    {
        return false
            || parents
            || invalidates
            || arg_parents
            || at_soft_risk
            || at_hard_risk
            || is_arg
            || arg_targets
            || arg_positions
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

void Reference_trackArgument_VniSYxaW(s_Flow& flow, const int target, const int position)
{
    if (!((flow.arg_targets.size() <= position)))
        fu_ASSERT();

    flow.arg_targets.grow((position + 1));
    flow.arg_targets.mutref(position) = target;
    if (!((flow.arg_positions.size() <= target)))
        fu_ASSERT();

    flow.arg_positions.grow((target + 1));
    flow.arg_positions.mutref(target) = (position + 1);
    add_yDyCXbrU(flow.is_arg, target);
}

                                #ifndef DEFt_x3Cx3E_yxV5QT4l
                                #define DEFt_x3Cx3E_yxV5QT4l
inline int x3Cx3E_yxV5QT4l(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_add_Ze6DW20r
                                #define DEFt_add_Ze6DW20r
inline bool add_Ze6DW20r(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_yxV5QT4l(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, int(item));
    return true;
}
                                #endif

                                #ifndef DEFt_unless_oob_4Cjh8wBB
                                #define DEFt_unless_oob_4Cjh8wBB
inline const fu_VEC<int>& unless_oob_4Cjh8wBB(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_x3Cx3E_gcxVH86X
                                #define DEFt_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_add_XzWcy3Df
                                #define DEFt_add_XzWcy3Df
inline void add_XzWcy3Df(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        const int cmp = x3Cx3E_gcxVH86X(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, int(Y));
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

                                #ifndef DEFt_unless_oob_8OCWoKZd
                                #define DEFt_unless_oob_8OCWoKZd
inline const fu_VEC<int>& unless_oob_8OCWoKZd(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_rem_Ze6DW20r
                                #define DEFt_rem_Ze6DW20r
inline bool rem_Ze6DW20r(fu_VEC<int>& keys, const int item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_yxV5QT4l(keys[i], item);
        if (cmp == 0)
        {
            keys.splice(i, 1);
            return true;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_grow_if_oob_eq5Lu6Hw
                                #define DEFt_grow_if_oob_eq5Lu6Hw
inline fu_VEC<int>& grow_if_oob_eq5Lu6Hw(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_add_imMSkaAH
                                #define DEFt_add_imMSkaAH
inline void add_imMSkaAH(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        const int cmp = x3Cx3E_gcxVH86X(X, Y);
        if ((cmp >= 0))
        {
            if (cmp != 0)
            {
                a.insert(x, int(Y));
                y++;
            }
            else
                y++;

        };
        x++;
    };
    if (y < b.size())
        a += fu::get_view(b, y, b.size());

}
                                #endif

                                #ifndef DEFt_grow_if_oob_qOlBkKup
                                #define DEFt_grow_if_oob_qOlBkKup
inline fu_VEC<int>& grow_if_oob_qOlBkKup(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

void Reference_trackLocalRef_xqfOb7U6(s_Flow& flow, const int left, const s_Lifetime& right)
{
    fu_VEC<int> parents {};
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asLocal_L0YJBnz6(right.uni0n[i]);
        if (!right_1)
            continue;

        add_Ze6DW20r(parents, right_1);
        add_XzWcy3Df(parents, unless_oob_4Cjh8wBB(flow.parents, right_1));
        fu_VEC<int> siblings { unless_oob_8OCWoKZd(flow.invalidates, right_1) };
        if (!(!rem_Ze6DW20r(siblings, left) || (i > 0)))
            fu_ASSERT();

        if (siblings)
        {
            add_imMSkaAH(grow_if_oob_eq5Lu6Hw(flow.invalidates, left), siblings);
            for (int i_1 = 0; i_1 < siblings.size(); i_1++)
            {
                const int sibling = siblings[i_1];
                add_Ze6DW20r(grow_if_oob_eq5Lu6Hw(flow.invalidates, sibling), left);
            };
        };
        if (has_CoC0247n(flow.is_arg, right_1))
        {
            add_yDyCXbrU(flow.is_arg, left);
            add_Ze6DW20r(grow_if_oob_eq5Lu6Hw(flow.arg_parents, left), right_1);
        };
    };
    if (parents)
    {
        for (int i_1 = 0; i_1 < parents.size(); i_1++)
            add_Ze6DW20r(grow_if_oob_qOlBkKup(flow.invalidates, parents[i_1]), left);

        grow_if_oob_eq5Lu6Hw(flow.parents, left) = parents;
    };
}

                                #ifndef DEFt_try_steal_eq5Lu6Hw
                                #define DEFt_try_steal_eq5Lu6Hw
inline fu_VEC<int> try_steal_eq5Lu6Hw(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if (i < a.size())
    {
        /*MOV*/ fu_VEC<int> slot {};
        std::swap(slot, a.mutref(i));
        return /*NRVO*/ slot;
    };
    return fu_VEC<int>{};
}
                                #endif

                                #ifndef DEFt_find_P563x6wB
                                #define DEFt_find_P563x6wB
inline int find_P563x6wB(fu::view<int> a, const int b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

void Reference_untrackLocalRef_xqfOb7U6(s_Flow& flow, const int left, const s_Lifetime& right)
{
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asLocal_L0YJBnz6(right.uni0n[i]);
        if (!right_1)
            continue;

        if (!(rem_Ze6DW20r(flow.invalidates.mutref(right_1), left)))
            fu_ASSERT();

    };
    fu_VEC<int> invals = try_steal_eq5Lu6Hw(flow.invalidates, left);
    for (int i_1 = 0; i_1 < invals.size(); i_1++)
    {
        const int idx = find_P563x6wB(unless_oob_4Cjh8wBB(flow.invalidates, invals[i_1]), left);
        if ((idx >= 0))
            flow.invalidates.mutref(invals[i_1]).splice(idx, 1);

    };
}

                                #ifndef DEFt_unless_oob_MnkZvni5
                                #define DEFt_unless_oob_MnkZvni5
inline int unless_oob_MnkZvni5(fu::view<int> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const int*)fu::NIL);
}
                                #endif

void ArgsAtRisk_list_FCnCgwb4(s_BitSet& out, const s_Flow& flow, const int position, fu::view<fu_VEC<int>> at_risk)
{
    const int target = unless_oob_MnkZvni5(flow.arg_targets, position);
    fu::view<int> at_risk_from = unless_oob_4Cjh8wBB(at_risk, target);
    for (int i = 0; i < at_risk_from.size(); i++)
    {
        const int other = at_risk_from[i];
        const int other_position = (unless_oob_MnkZvni5(flow.arg_positions, other) - 1);
        if ((other_position >= 0))
            add_yDyCXbrU(out, other_position);

    };
}

#endif
