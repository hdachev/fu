#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>

struct s_BitSet;

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu::vec<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

void clear_gNKGEQWi(s_BitSet& _)
{
    _._data.clear();
}

                                #ifndef DEF_MIN_5Mxm22OPs0k
                                #define DEF_MIN_5Mxm22OPs0k
inline int MIN_5Mxm22OP()
{
    return -2147483648;
}
                                #endif

void _shrink_to_fit(s_BitSet& _)
{
    int end = _._data.size();
    while (end-- > 0)
    {
        if (_._data[end])
            break;

    };
    _._data.shrink((end + 1));
}

void clear_quDuppI6(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_5Mxm22OP());
    const int bucket = ((idx >> 3) | no_neg);
    const int idx_flr = (bucket << 3);
    const int shrink = ((idx > idx_flr) ? (bucket + 1) : bucket);
    if (_._data.size() > shrink)
        _._data.resize(shrink);

    if (_._data.size() > bucket)
    {
        const int rem = (idx - idx_flr);
        _._data.mutref(bucket) &= fu::u8(~fu::u8((fu::u8(0xffu) << fu::u8(unsigned(rem)))));
    };
    _shrink_to_fit(_);
}

                                #ifndef DEF_grow_if_oob_nVfgghdvSV8
                                #define DEF_grow_if_oob_nVfgghdvSV8
inline fu::u8& grow_if_oob_nVfgghdv(fu::vec<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

bool add_once_U5p6nLOf(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_5Mxm22OP());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    fu::u8& entry = grow_if_oob_nVfgghdv(_._data, bucket);
    const bool ret = !fu::u8((entry & mask));
    entry |= mask;
    return ret;
}

void add_U5p6nLOf(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_5Mxm22OP());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    grow_if_oob_nVfgghdv(_._data, bucket) |= mask;
}

void add_m8tOEF8Q(s_BitSet& _, const s_BitSet& other)
{
    const int N = other._data.size();
    if (_._data.size() < N)
        _._data.grow(N);

    for (int i = 0; i < N; i++)
        _._data.mutref(i) |= other._data[i];

}

s_BitSet& operator|=(s_BitSet& left, const s_BitSet& other)
{
    add_m8tOEF8Q(left, other);
    return left;
}

[[noreturn]] fu::never rem_m8tOEF8Q(s_BitSet& _, const s_BitSet& other)
{
    int N = other._data.size();
    if (N > _._data.size())
        N = _._data.size();

    for (int i = 0; i < N; i++)
        _._data.mutref(i) &= fu::u8(~other._data[i]);

    if (N == _._data.size())
        _shrink_to_fit(_);

    fu::fail("NOT TESTED"_fu);
}

bool has_QTGTghRU(const s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_5Mxm22OP());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    if (_._data.size() > bucket)
        return fu::u8((_._data[bucket] & mask)) != fu::u8(0u);
    else
        return false;

}

bool rem_U5p6nLOf(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_5Mxm22OP());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    if (_._data.size() > bucket)
    {
        const fu::u8 item = _._data[bucket];
        if (item & mask)
        {
            _._data.mutref(bucket) &= fu::u8(~mask);
            if ((item == mask) && (_._data.size() == (bucket + 1)))
                _shrink_to_fit(_);

            return true;
        };
    };
    return false;
}

void add_range_y5kfkU4t(s_BitSet& _, const int end)
{
    const int no_neg = (end & MIN_5Mxm22OP());
    const int floorBytes = ((end >> 3) | no_neg);
    const int ceilBytes = (((end + 7) >> 3) | no_neg);
    _._data.grow(ceilBytes);
    for (int i = 0; i < floorBytes; i++)
        _._data.mutref(i) = fu::u8(0xffu);

    if (ceilBytes > floorBytes)
    {
        fu::u8 tail {};
        int i_1 = (floorBytes << 3);
        do
            tail |= fu::u8((fu::u8(1u) << fu::u8(unsigned((i_1 & 7)))));
        while ((i_1++ < end));
        _._data.mutref(floorBytes) = tail;
    };
}

int popcount_5BwgL1Pz(const s_BitSet& _)
{
    int sum = 0;
    const int N = (_._data.size() >> 3);
    fu::view<uint64_t> u64s = fu::view_of<uint64_t>(fu::get_view_start0(_._data, (N << 3)));
    for (int i = 0; i < u64s.size(); i++)
        sum += __builtin_popcountll(u64s[i]);

    uint64_t tail {};
    for (int i_1 = (N << 3); i_1 < _._data.size(); i_1++)
    {
        tail <<= 8ull;
        tail |= uint64_t(_._data[i_1]);
    };
    sum += __builtin_popcountll(tail);
    return sum;
}

                                #ifndef DEF_min_mJGU9byOmI4
                                #define DEF_min_mJGU9byOmI4
inline int min_mJGU9byO(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

s_BitSet& and_not_assign_Brhxxkwh(s_BitSet& a, const s_BitSet& b)
{
    const int N = min_mJGU9byO(a._data.size(), b._data.size());
    for (int i = 0; i < N; i++)
        a._data.mutref(i) &= fu::u8(~b._data[i]);

    return a;
}

s_BitSet negated_zHKqtB3x(const s_BitSet& bitset, const int end)
{
    /*MOV*/ s_BitSet result {};
    add_range_y5kfkU4t(result, end);
    and_not_assign_Brhxxkwh(result, bitset);
    return /*NRVO*/ result;
}

bool has_inter_gae63pSm(const s_BitSet& a, const s_BitSet& b)
{
    const int N = min_mJGU9byO(a._data.size(), b._data.size());
    for (int i = 0; i < N; i++)
    {
        if (a._data[i] & b._data[i])
            return true;

    };
    return false;
}

#endif
