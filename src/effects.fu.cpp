
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

bool has(const s_BitSet&, int);
int Region_asIndex(const s_Region&);
void ArgsAtRisk_shake(s_Flow&);
void add(s_BitSet&, int);
void add_range(s_BitSet&, int, int);
void rem(s_BitSet&, int);

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
    s_BitSet is_arg;
    fu_VEC<int> arg_targets;
    fu_VEC<int> arg_positions;
    fu_VEC<fu_VEC<int>> arg_aliases;
    fu_VEC<fu_VEC<int>> args_at_risk;
    explicit operator bool() const noexcept
    {
        return false
            || parents
            || invalidates
            || is_arg
            || arg_targets
            || arg_positions
            || arg_aliases
            || args_at_risk
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
    s_Lifetime(const s_Lifetime&) = delete;
    s_Lifetime(s_Lifetime&&) = default;
    s_Lifetime& operator=(const s_Lifetime&) = delete;
    s_Lifetime& operator=(s_Lifetime&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

void Reference_trackArgument(s_Flow& flow, const int target_3, const int position)
{
    if (!((flow.arg_targets.size() <= position)))
        fu_ASSERT();

    flow.arg_targets.grow((position + 1));
    flow.arg_targets.mutref(position) = target_3;
    if (!((flow.arg_positions.size() <= target_3)))
        fu_ASSERT();

    flow.arg_positions.grow((target_3 + 1));
    flow.arg_positions.mutref(target_3) = (position + 1);
    add(flow.is_arg, target_3);
}

                                #ifndef DEFt_add_xJq8
                                #define DEFt_add_xJq8
inline bool add_xJq8(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, item);
                return true;
            };
            return false;
        };
    };
    dest.push(item);
    return true;
}
                                #endif

                                #ifndef DEFt_unless_oob_HoLq
                                #define DEFt_unless_oob_HoLq
inline const fu_VEC<int>& unless_oob_HoLq(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_add_p8Tz
                                #define DEFt_add_p8Tz
inline void add_p8Tz(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
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

                                #ifndef DEFt_unless_oob_kedP
                                #define DEFt_unless_oob_kedP
inline const fu_VEC<int>& unless_oob_kedP(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_rem_xJq8
                                #define DEFt_rem_xJq8
inline bool rem_xJq8(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] == item)
            {
                dest.splice(i, 1);
                return true;
            };
            return false;
        };
    };
    return false;
}
                                #endif

                                #ifndef DEFt_grow_if_oob_aIXs
                                #define DEFt_grow_if_oob_aIXs
inline fu_VEC<int>& grow_if_oob_aIXs(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_add_9KMC
                                #define DEFt_add_9KMC
inline void add_9KMC(fu_VEC<int>& a, fu::view<int> b)
{
    int x = 0;
    int y = 0;
    while ((x < a.size()) && (y < b.size()))
    {
        const int X = a[x];
        const int Y = b[y];
        if ((X >= Y))
        {
            if (X != Y)
            {
                a.insert(x, Y);
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

                                #ifndef DEFt_grow_if_oob_xvHU
                                #define DEFt_grow_if_oob_xvHU
inline fu_VEC<int>& grow_if_oob_xvHU(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

void Reference_trackLocalRef(s_Flow& flow, const int left, const s_Lifetime& right)
{
    fu_VEC<int> parents {};
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asIndex(right.uni0n[i]);
        if (!right_1)
            continue;

        add_xJq8(parents, right_1);
        add_p8Tz(parents, unless_oob_HoLq(flow.parents, right_1));
        fu_VEC<int> invals { unless_oob_kedP(flow.invalidates, right_1) };
        if (!(!rem_xJq8(invals, left) || (i > 0)))
            fu_ASSERT();

        if (invals)
        {
            add_9KMC(grow_if_oob_aIXs(flow.invalidates, left), invals);
            for (int i_1 = 0; i_1 < invals.size(); i_1++)
                add_xJq8(flow.invalidates.mutref(invals[i_1]), left);

        };
        if (has(flow.is_arg, right_1))
        {
            add(flow.is_arg, left);
            add_xJq8(grow_if_oob_aIXs(flow.arg_aliases, left), right_1);
        };
    };
    if (parents)
    {
        for (int i_1 = 0; i_1 < parents.size(); i_1++)
            add_xJq8(grow_if_oob_xvHU(flow.invalidates, parents[i_1]), left);

        grow_if_oob_aIXs(flow.parents, left) = parents;
    };
}

                                #ifndef DEFt_try_steal_aIXs
                                #define DEFt_try_steal_aIXs
inline fu_VEC<int> try_steal_aIXs(fu_VEC<fu_VEC<int>>& a, const int i)
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

                                #ifndef DEFt_find_C47D
                                #define DEFt_find_C47D
inline int find_C47D(fu::view<int> a, const int b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

void Reference_untrackLocalRef(s_Flow& flow, const int left, const s_Lifetime& right)
{
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asIndex(right.uni0n[i]);
        if (!right_1)
            continue;

        if (!(rem_xJq8(flow.invalidates.mutref(right_1), left)))
            fu_ASSERT();

    };
    fu_VEC<int> invals = try_steal_aIXs(flow.invalidates, left);
    for (int i_1 = 0; i_1 < invals.size(); i_1++)
    {
        const int idx = find_C47D(unless_oob_HoLq(flow.invalidates, invals[i_1]), left);
        if ((idx >= 0))
            flow.invalidates.mutref(invals[i_1]).splice(idx, 1);

    };
}

static fu_VEC<int>& at_risk_from(s_Flow& flow, const int use)
{
    return flow.args_at_risk.mutref(use);
}

                                #ifndef DEFt_add_zs1w
                                #define DEFt_add_zs1w
inline bool add_zs1w(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, item);
                return true;
            };
            return false;
        };
    };
    dest.push(item);
    return true;
}
                                #endif

                                #ifndef DEFt_unless_oob_luLQ
                                #define DEFt_unless_oob_luLQ
inline const fu_VEC<int>& unless_oob_luLQ(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static void ArgsAtRisk_shake(s_Flow& flow, int high, int low)
{
    for (; ; )
    {
        if (high == low)
            return;

        if (high < low)
            std::swap(high, low);

        add_zs1w(grow_if_oob_xvHU(flow.args_at_risk, high), low);

        {

            {
                fu_VEC<int> highs { unless_oob_luLQ(flow.arg_aliases, high) };
                if (highs)
                {
                    const int last_1 = (highs.size() - 1);
                    for (int i = 0; i < last_1; i++)
                        ArgsAtRisk_shake(flow, int(highs[i]), int(low));

                    high = highs[last_1];
                    continue;
                };
            };
            fu_VEC<int> lows { unless_oob_luLQ(flow.arg_aliases, low) };
            if (lows)
            {
                const int last_1 = (lows.size() - 1);
                for (int i = 0; i < last_1; i++)
                    ArgsAtRisk_shake(flow, int(high), int(lows[i]));

                low = lows[last_1];
                continue;
            };
        };
        break;
    };
}

void ArgsAtRisk_shake(s_Flow& flow)
{
    for (int i = 0; i < flow.args_at_risk.size(); i++)
    {
        const int use = i;
        for (int i_1 = at_risk_from(flow, use).size(); i_1-- > 0; )
        {
            const int write = at_risk_from(flow, use)[i_1];
            at_risk_from(flow, use).splice(i_1, 1);
            ArgsAtRisk_shake(flow, int(use), int(write));
        };
    };
}

                                #ifndef DEFt_unless_oob_dhMB
                                #define DEFt_unless_oob_dhMB
inline int unless_oob_dhMB(fu::view<int> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const int*)fu::NIL);
}
                                #endif

s_BitSet ArgsAtRisk_listRiskFree(const s_Flow& flow, const int position)
{
    /*MOV*/ s_BitSet risk_free_1 {};
    if (position)
    {
        add_range(risk_free_1, 0, position);
        const int target_3 = unless_oob_dhMB(flow.arg_targets, position);
        fu::view<int> at_risk_from = unless_oob_HoLq(flow.args_at_risk, target_3);
        for (int i = 0; i < at_risk_from.size(); i++)
        {
            const int other = at_risk_from[i];
            if (other > target_3)
                break;

            const int other_position = (unless_oob_dhMB(flow.arg_positions, other) - 1);
            if ((other_position >= 0))
                rem(risk_free_1, other_position);

        };
    };
    return /*NRVO*/ risk_free_1;
}

#endif
