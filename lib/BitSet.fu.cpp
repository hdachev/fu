#include <cstdint>
#include <fu/int.h>
#include <fu/vec.h>
#include <fu/view.h>

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

void clear_ZwXYCruz(s_BitSet& _)
{
    _._data.clear();
}

                                #ifndef DEF_MIN_ZAEwNkBFmia
                                #define DEF_MIN_ZAEwNkBFmia
inline int MIN_ZAEwNkBF()
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

void clear_Na55O4zv(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_ZAEwNkBF());
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

bool add_ZwXYCruz(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_ZAEwNkBF());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    if ((_._data.size() <= bucket))
        _._data.grow((bucket + 1));

    fu::u8& entry = _._data.mutref(bucket);
    const bool ret = !fu::u8((entry & mask));
    entry |= mask;
    return ret;
}

void add_Na55O4zv(s_BitSet& _, const s_BitSet& other)
{
    const int N = other._data.size();
    if (_._data.size() < N)
        _._data.grow(N);

    for (int i = 0; i < N; i++)
        _._data.mutref(i) |= other._data[i];

}

s_BitSet& operator|=(s_BitSet& left, const s_BitSet& other)
{
    add_Na55O4zv(left, other);
    return left;
}

                                #ifndef DEF_min_O25D0jcUwAc
                                #define DEF_min_O25D0jcUwAc
inline int min_O25D0jcU(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

void remove_ZwXYCruz(s_BitSet& _, const s_BitSet& other)
{
    const int N = min_O25D0jcU(_._data.size(), other._data.size());
    for (int i = 0; i < N; i++)
        _._data.mutref(i) &= fu::u8(~other._data[i]);

    if (N == _._data.size())
        _shrink_to_fit(_);

}

bool has_ZwXYCruz(const s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_ZAEwNkBF());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    if (_._data.size() > bucket)
        return fu::u8((_._data[bucket] & mask)) != fu::u8(0u);
    else
        return false;

}

bool remove_Na55O4zv(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_ZAEwNkBF());
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

void add_range_ZwXYCruz(s_BitSet& _, const int end)
{
    const int no_neg = (end & MIN_ZAEwNkBF());
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
        while ((++i_1 < end));
        _._data.mutref(floorBytes) = tail;
    };
}

int popcount_ZwXYCruz(const s_BitSet& _)
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

s_BitSet negated_ZwXYCruz(const s_BitSet& bitset, const int end)
{
    /*MOV*/ s_BitSet result {};
    add_range_ZwXYCruz(result, end);
    remove_ZwXYCruz(result, bitset);
    return /*NRVO*/ result;
}

bool has_inter_ZwXYCruz(const s_BitSet& a, const s_BitSet& b)
{
    const int N = min_O25D0jcU(a._data.size(), b._data.size());
    for (int i = 0; i < N; i++)
    {
        if (a._data[i] & b._data[i])
            return true;

    };
    return false;
}

bool has_missing_ZwXYCruz(const s_BitSet& a, const s_BitSet& b)
{
    if (a._data.size() < b._data.size())
        return true;
    else
    {
        for (int i = 0; i < a._data.size(); i++)
        {
            if (fu::u8(~a._data[i]) & b._data[i])
                return true;

        };
        return false;
    };
}

#endif
