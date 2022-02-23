
#include <algorithm>
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
int Region_asIndex_4X1iL0ll(const s_Region&);
int size_pXOENYsj(const s_BitSet&);
static void ArgsAtRisk_shake_VniSYxaW(s_Flow&, int, int);
void add_range_8iwsu9xD(s_BitSet&, int, int);
void add_yDyCXbrU(s_BitSet&, int);
void rem_yDyCXbrU(s_BitSet&, int);

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

                                #ifndef DEFt_add_Ze6DW20r
                                #define DEFt_add_Ze6DW20r
inline bool add_Ze6DW20r(fu_VEC<int>& keys, const int item)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const int k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return false;
            };
            N = i;
            break;
        };
    };
    keys.insert(N, int(item));
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
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const int k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                keys.splice(i, 1);
                return true;
            };
            N = i;
            break;
        };
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

                                #ifndef DEFt_grow_if_oob_qOlBkKup
                                #define DEFt_grow_if_oob_qOlBkKup
inline fu_VEC<int>& grow_if_oob_qOlBkKup(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

void Reference_trackLocalRef_fiZRfh4j(s_Flow& flow, const int left, const s_Lifetime& right)
{
    fu_VEC<int> parents {};
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asIndex_4X1iL0ll(right.uni0n[i]);
        if (!right_1)
            continue;

        add_Ze6DW20r(parents, right_1);
        add_XzWcy3Df(parents, unless_oob_4Cjh8wBB(flow.parents, right_1));
        fu_VEC<int> invals { unless_oob_8OCWoKZd(flow.invalidates, right_1) };
        if (!(!rem_Ze6DW20r(invals, left) || (i > 0)))
            fu_ASSERT();

        if (invals)
        {
            add_imMSkaAH(grow_if_oob_eq5Lu6Hw(flow.invalidates, left), invals);
            for (int i_1 = 0; i_1 < invals.size(); i_1++)
                add_Ze6DW20r(flow.invalidates.mutref(invals[i_1]), left);

        };
        if (has_CoC0247n(flow.is_arg, right_1))
        {
            add_yDyCXbrU(flow.is_arg, left);
            add_Ze6DW20r(grow_if_oob_eq5Lu6Hw(flow.arg_aliases, left), right_1);
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

void Reference_untrackLocalRef_fiZRfh4j(s_Flow& flow, const int left, const s_Lifetime& right)
{
    for (int i = 0; i < right.uni0n.size(); i++)
    {
        const int right_1 = Region_asIndex_4X1iL0ll(right.uni0n[i]);
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

static fu_VEC<int>& at_risk_from_duMO18Nl(s_Flow& flow, const int use)
{
    return flow.args_at_risk.mutref(use);
}

                                #ifndef DEFt_add_zCNdZfJO
                                #define DEFt_add_zCNdZfJO
inline bool add_zCNdZfJO(fu_VEC<int>& keys, const int item)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const int k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return false;
            };
            N = i;
            break;
        };
    };
    keys.insert(N, int(item));
    return true;
}
                                #endif

                                #ifndef DEFt_unless_oob_16stXBRy
                                #define DEFt_unless_oob_16stXBRy
inline const fu_VEC<int>& unless_oob_16stXBRy(fu::view<fu_VEC<int>> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const fu_VEC<int>*)fu::NIL);
}
                                #endif

static void ArgsAtRisk_shake_VniSYxaW(s_Flow& flow, int high, int low)
{
    for (; ; )
    {
        if (high == low)
            return;

        if (high < low)
            std::swap(high, low);

        add_zCNdZfJO(grow_if_oob_qOlBkKup(flow.args_at_risk, high), low);

        {

            {
                fu_VEC<int> highs { unless_oob_16stXBRy(flow.arg_aliases, high) };
                if (highs)
                {
                    const int last = (highs.size() - 1);
                    for (int i = 0; i < last; i++)
                        ArgsAtRisk_shake_VniSYxaW(flow, int(highs[i]), int(low));

                    high = highs[last];
                    continue;
                };
            };
            fu_VEC<int> lows { unless_oob_16stXBRy(flow.arg_aliases, low) };
            if (lows)
            {
                const int last = (lows.size() - 1);
                for (int i = 0; i < last; i++)
                    ArgsAtRisk_shake_VniSYxaW(flow, int(high), int(lows[i]));

                low = lows[last];
                continue;
            };
        };
        break;
    };
}

void ArgsAtRisk_shake_bZZfza4U(s_Flow& flow)
{
    for (int i = 0; i < flow.args_at_risk.size(); i++)
    {
        const int use = i;
        for (int i_1 = at_risk_from_duMO18Nl(flow, use).size(); i_1-- > 0; )
        {
            const int write = at_risk_from_duMO18Nl(flow, use)[i_1];
            at_risk_from_duMO18Nl(flow, use).splice(i_1, 1);
            ArgsAtRisk_shake_VniSYxaW(flow, int(use), int(write));
        };
    };
}

                                #ifndef DEFt_unless_oob_MnkZvni5
                                #define DEFt_unless_oob_MnkZvni5
inline int unless_oob_MnkZvni5(fu::view<int> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const int*)fu::NIL);
}
                                #endif

s_BitSet ArgsAtRisk_listRiskFree_w6iboJyg(const s_Flow& flow, const int position)
{
    /*MOV*/ s_BitSet risk_free {};
    if (position)
    {
        add_range_8iwsu9xD(risk_free, 0, position);
        const int target = unless_oob_MnkZvni5(flow.arg_targets, position);
        fu::view<int> at_risk_from = unless_oob_4Cjh8wBB(flow.args_at_risk, target);
        for (int i = 0; i < at_risk_from.size(); i++)
        {
            const int other = at_risk_from[i];
            if (other > target)
                break;

            const int other_position = (unless_oob_MnkZvni5(flow.arg_positions, other) - 1);
            if ((other_position >= 0))
                rem_yDyCXbrU(risk_free, other_position);

        };
    };
    return /*NRVO*/ risk_free;
}

void ArgsWritten_shake_2MlTalrh(const s_Flow& flow, s_BitSet& args)
{
    for (int i = std::min(size_pXOENYsj(args), flow.arg_aliases.size()); i-- > 0; )
    {
        if (!has_CoC0247n(args, i))
            continue;

        fu::view<int> aliases = flow.arg_aliases[i];
        for (int i_1 = 0; i_1 < aliases.size(); i_1++)
            add_yDyCXbrU(args, aliases[i_1]);

    };
}

#endif
