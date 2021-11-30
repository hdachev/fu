#include <cstdint>
#include <fu/int.h>
#include <fu/vec.h>
#include <fu/view.h>

struct s_BitSet;

void add(s_BitSet&, int);

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

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_grow_if_oob_DlDj
                                #define DEFt_grow_if_oob_DlDj
inline fu::u8& grow_if_oob_DlDj(fu_VEC<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

bool add_once(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = (fu::u8(1u) << fu::u8(bit));
    fu::u8& entry = grow_if_oob_DlDj(_._data, bucket);
    if (!(entry & mask))
    {
        entry |= mask;
        return true;
    };
    return false;
}

void add(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = (fu::u8(1u) << fu::u8(bit));
    grow_if_oob_DlDj(_._data, bucket) |= mask;
}

bool has(const s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = (fu::u8(1u) << fu::u8(bit));
    return (_._data.size() > bucket) && ((_._data[bucket] & mask) != fu::u8(0u));
}

void rem(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    if (_._data.size() > bucket)
    {
        const int bit = (idx % 8);
        const fu::u8 mask = (fu::u8(1u) << fu::u8(bit));
        _._data.mutref(bucket) &= ~mask;
    };
}

void add_range(s_BitSet& _, const int start, const int end)
{
    for (int i = start; i < end; i++)
        add(_, i);

}

int popcount(const s_BitSet& _)
{
    int sum = 0;
    const int N = (_._data.size() >> 3);
    fu::view<int64_t> i64s = fu::view_of(fu::get_view(_._data, 0, (N << 3)), int64_t{});
    for (int i = 0; i < i64s.size(); i++)
        sum += __builtin_popcountll(i64s[i]);

    int64_t tail {};
    for (int i_1 = (N << 3); i_1 < _._data.size(); i_1++)
    {
        tail <<= 8ll;
        tail |= int64_t(_._data[i_1]);
    };
    sum += __builtin_popcountll(tail);
    return sum;
}

#endif
