#include <cstdint>
#include <fu/int.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec_range.h>

struct BitSet_mmp7;

                                #ifndef DEF_BitSet_mmp7xBZ4kaf
                                #define DEF_BitSet_mmp7xBZ4kaf
struct BitSet_mmp7
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

void clear_ZwXY(BitSet_mmp7& _)
{
    _._data.clear();
}

                                #ifndef DEF_MIN_FUlTBoZvFa3
                                #define DEF_MIN_FUlTBoZvFa3
inline int MIN_FUlT()
{
    return -2147483648;
}
                                #endif

void _shrink_to_fit_ZwXY(BitSet_mmp7& _)
{
    int end = _._data.size();
    while (end-- > 0)
    {
        if (_._data[end])
            break;

    };
    _._data.shrink((end + 1));
}

void clear_Na55(BitSet_mmp7& _, const int idx)
{
    const int no_neg = (idx & MIN_FUlT());
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
    _shrink_to_fit_ZwXY(_);
}

bool add_ZwXY(BitSet_mmp7& _, const int idx)
{
    const int no_neg = (idx & MIN_FUlT());
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

void add_Na55(BitSet_mmp7& _, const BitSet_mmp7& other)
{
    const int N = other._data.size();
    if (_._data.size() < N)
        _._data.grow(N);

    for (int i = 0; i < N; i++)
        _._data.mutref(i) |= other._data[i];

}

BitSet_mmp7& operator|=(BitSet_mmp7& left, const BitSet_mmp7& other)
{
    add_Na55(left, other);
    return left;
}

                                #ifndef DEF_min_DbqN29MT8e3
                                #define DEF_min_DbqN29MT8e3
inline int min_DbqN(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

void remove_ZwXY(BitSet_mmp7& _, const BitSet_mmp7& other)
{
    const int N = min_DbqN(_._data.size(), other._data.size());
    for (int i = 0; i < N; i++)
        _._data.mutref(i) &= fu::u8(~other._data[i]);

    if (N == _._data.size())
        _shrink_to_fit_ZwXY(_);

}

bool has_ZwXY(const BitSet_mmp7& _, const int idx)
{
    const int no_neg = (idx & MIN_FUlT());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    if (_._data.size() > bucket)
        return fu::u8((_._data[bucket] & mask)) != fu::u8(0u);
    else
        return false;

}

bool remove_Na55(BitSet_mmp7& _, const int idx)
{
    const int no_neg = (idx & MIN_FUlT());
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
                _shrink_to_fit_ZwXY(_);

            return true;
        };
    };
    return false;
}

void add_range_ZwXY(BitSet_mmp7& _, const int end)
{
    const int no_neg = (end & MIN_FUlT());
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

int popcount_ZwXY(const BitSet_mmp7& _)
{
    int sum = 0;
    const int N = (_._data.size() >> 3);
    fu::view<uint64_t> u64s = fu::view_of<uint64_t>(fu::get_range_start0(_._data, (N << 3)));
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

BitSet_mmp7 negated_ZwXY(const BitSet_mmp7& bitset, const int end)
{
    /*MOV*/ BitSet_mmp7 result {};
    add_range_ZwXY(result, end);
    remove_ZwXY(result, bitset);
    return /*NRVO*/ result;
}

bool has_inter_ZwXY(const BitSet_mmp7& a, const BitSet_mmp7& b)
{
    const int N = min_DbqN(a._data.size(), b._data.size());
    for (int i = 0; i < N; i++)
    {
        if (a._data[i] & b._data[i])
            return true;

    };
    return false;
}

bool has_missing_ZwXY(const BitSet_mmp7& a, const BitSet_mmp7& b)
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
