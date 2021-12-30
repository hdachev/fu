
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

bool has_asJtcpQm(const s_BitSet&, int);
int Region_asIndex_rLDFQf65(const s_Region&);
void ArgsAtRisk_shake_CooqGQ4F(s_Flow&, int, int);
void add_range_mQD1F0il(s_BitSet&, int, int);
void add_zoGTyg4u(s_BitSet&, int);
void rem_zoGTyg4u(s_BitSet&, int);

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
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

void Reference_trackArgument_CooqGQ4F(s_Flow& flow, const int target, const int position)
{
    if (!((flow.arg_targets.size() <= position)))
        fu_ASSERT();

    flow.arg_targets.grow((position + 1));
    flow.arg_targets.mutref(position) = target;
    if (!((flow.arg_positions.size() <= target)))
        fu_ASSERT();

    flow.arg_positions.grow((target + 1));
    flow.arg_positions.mutref(target) = (position + 1);
    add_zoGTyg4u(flow.is_arg, target);
}

                                #ifndef DEFt_add_thBfcIkV
                                #define DEFt_add_thBfcIkV
inline bool add_thBfcIkV(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, int(item));
                return true;
            };
            return false;
        };
    };
    dest.push(int(item));
    return true;
}
                                #endif

                                #ifndef DEFt_unless_oob_py9Y5UMJ
                                #define DEFt_unless_oob_py9Y5UMJ
inline const fu_VEC<int>& unless_oob_py9Y5UMJ(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_add_TFYcR2KX
                                #define DEFt_add_TFYcR2KX
inline void add_TFYcR2KX(fu_VEC<int>& a, fu::view<int> b)
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

                                #ifndef DEFt_unless_oob_rN5NP2j0
                                #define DEFt_unless_oob_rN5NP2j0
inline const fu_VEC<int>& unless_oob_rN5NP2j0(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_rem_thBfcIkV
                                #define DEFt_rem_thBfcIkV
inline bool rem_thBfcIkV(fu_VEC<int>& dest, const int item)
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

                                #ifndef DEFt_grow_if_oob_k9KHuFdm
                                #define DEFt_grow_if_oob_k9KHuFdm
inline fu_VEC<int>& grow_if_oob_k9KHuFdm(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_add_XS7JLwrP
                                #define DEFt_add_XS7JLwrP
inline void add_XS7JLwrP(fu_VEC<int>& a, fu::view<int> b)
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

                                #ifndef DEFt_grow_if_oob_EE7n9Jkc
                                #define DEFt_grow_if_oob_EE7n9Jkc
inline fu_VEC<int>& grow_if_oob_EE7n9Jkc(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

void Reference_trackLocalRef_AADR3Ix2(s_Flow& flow, const int left, const s_Lifetime& right)
{
    fu_VEC<int> parents {};
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asIndex_rLDFQf65(right.uni0n[i]);
        if (!right_1)
            continue;

        add_thBfcIkV(parents, right_1);
        add_TFYcR2KX(parents, unless_oob_py9Y5UMJ(flow.parents, right_1));
        fu_VEC<int> invals { unless_oob_rN5NP2j0(flow.invalidates, right_1) };
        if (!(!rem_thBfcIkV(invals, left) || (i > 0)))
            fu_ASSERT();

        if (invals)
        {
            add_XS7JLwrP(grow_if_oob_k9KHuFdm(flow.invalidates, left), invals);
            for (int i_1 = 0; i_1 < invals.size(); i_1++)
                add_thBfcIkV(flow.invalidates.mutref(invals[i_1]), left);

        };
        if (has_asJtcpQm(flow.is_arg, right_1))
        {
            add_zoGTyg4u(flow.is_arg, left);
            add_thBfcIkV(grow_if_oob_k9KHuFdm(flow.arg_aliases, left), right_1);
        };
    };
    if (parents)
    {
        for (int i_1 = 0; i_1 < parents.size(); i_1++)
            add_thBfcIkV(grow_if_oob_EE7n9Jkc(flow.invalidates, parents[i_1]), left);

        grow_if_oob_k9KHuFdm(flow.parents, left) = parents;
    };
}

                                #ifndef DEFt_try_steal_k9KHuFdm
                                #define DEFt_try_steal_k9KHuFdm
inline fu_VEC<int> try_steal_k9KHuFdm(fu_VEC<fu_VEC<int>>& a, const int i)
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

                                #ifndef DEFt_find_C47D8dNR
                                #define DEFt_find_C47D8dNR
inline int find_C47D8dNR(fu::view<int> a, const int b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

void Reference_untrackLocalRef_AADR3Ix2(s_Flow& flow, const int left, const s_Lifetime& right)
{
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asIndex_rLDFQf65(right.uni0n[i]);
        if (!right_1)
            continue;

        if (!(rem_thBfcIkV(flow.invalidates.mutref(right_1), left)))
            fu_ASSERT();

    };
    fu_VEC<int> invals = try_steal_k9KHuFdm(flow.invalidates, left);
    for (int i_1 = 0; i_1 < invals.size(); i_1++)
    {
        const int idx = find_C47D8dNR(unless_oob_py9Y5UMJ(flow.invalidates, invals[i_1]), left);
        if ((idx >= 0))
            flow.invalidates.mutref(invals[i_1]).splice(idx, 1);

    };
}

static fu_VEC<int>& at_risk_from_DjwGFJ12(s_Flow& flow, const int use)
{
    return flow.args_at_risk.mutref(use);
}

void ArgsAtRisk_shake_9E7k4Ce5(s_Flow& flow)
{
    for (int i = 0; i < flow.args_at_risk.size(); i++)
    {
        const int use = i;
        for (int i_1 = at_risk_from_DjwGFJ12(flow, use).size(); i_1-- > 0; )
        {
            const int write = at_risk_from_DjwGFJ12(flow, use)[i_1];
            at_risk_from_DjwGFJ12(flow, use).splice(i_1, 1);
            ArgsAtRisk_shake_CooqGQ4F(flow, int(use), int(write));
        };
    };
}

                                #ifndef DEFt_add_bmhzXgqs
                                #define DEFt_add_bmhzXgqs
inline bool add_bmhzXgqs(fu_VEC<int>& dest, const int item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, int(item));
                return true;
            };
            return false;
        };
    };
    dest.push(int(item));
    return true;
}
                                #endif

                                #ifndef DEFt_unless_oob_RhFXRcia
                                #define DEFt_unless_oob_RhFXRcia
inline const fu_VEC<int>& unless_oob_RhFXRcia(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

void ArgsAtRisk_shake_CooqGQ4F(s_Flow& flow, int high, int low)
{
    for (; ; )
    {
        if (high == low)
            return;

        if (high < low)
            std::swap(high, low);

        add_bmhzXgqs(grow_if_oob_EE7n9Jkc(flow.args_at_risk, high), low);

        {

            {
                fu_VEC<int> highs { unless_oob_RhFXRcia(flow.arg_aliases, high) };
                if (highs)
                {
                    const int last = (highs.size() - 1);
                    for (int i = 0; i < last; i++)
                        ArgsAtRisk_shake_CooqGQ4F(flow, int(highs[i]), int(low));

                    high = highs[last];
                    continue;
                };
            };
            fu_VEC<int> lows { unless_oob_RhFXRcia(flow.arg_aliases, low) };
            if (lows)
            {
                const int last = (lows.size() - 1);
                for (int i = 0; i < last; i++)
                    ArgsAtRisk_shake_CooqGQ4F(flow, int(high), int(lows[i]));

                low = lows[last];
                continue;
            };
        };
        break;
    };
}

                                #ifndef DEFt_unless_oob_HMyQV5gI
                                #define DEFt_unless_oob_HMyQV5gI
inline int unless_oob_HMyQV5gI(fu::view<int> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const int*)fu::NIL);
}
                                #endif

s_BitSet ArgsAtRisk_listRiskFree_VUCqjTi1(const s_Flow& flow, const int position)
{
    /*MOV*/ s_BitSet risk_free {};
    if (position)
    {
        add_range_mQD1F0il(risk_free, 0, position);
        const int target = unless_oob_HMyQV5gI(flow.arg_targets, position);
        fu::view<int> at_risk_from = unless_oob_py9Y5UMJ(flow.args_at_risk, target);
        for (int i = 0; i < at_risk_from.size(); i++)
        {
            const int other = at_risk_from[i];
            if (other > target)
                break;

            const int other_position = (unless_oob_HMyQV5gI(flow.arg_positions, other) - 1);
            if ((other_position >= 0))
                rem_zoGTyg4u(risk_free, other_position);

        };
    };
    return /*NRVO*/ risk_free;
}

#endif
