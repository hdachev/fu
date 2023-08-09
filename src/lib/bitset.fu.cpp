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

int size_LkpkIIRn(const s_BitSet& _)
{
    return _._data.size() * 8;
}

void clear_rcMo7uZV(s_BitSet& _)
{
    _._data.clear();
}

                                #ifndef DEF_MIN_bROiNhN5YRb
                                #define DEF_MIN_bROiNhN5YRb
inline int MIN_bROiNhN5()
{
    return -2147483648;
}
                                #endif

void clear_5jPCgdrm(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5());
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
}

                                #ifndef DEF_grow_if_oob_KB4AElnoWG4
                                #define DEF_grow_if_oob_KB4AElnoWG4
inline fu::u8& grow_if_oob_KB4AElno(fu::vec<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

bool add_once_mle9fepo(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    fu::u8& entry = grow_if_oob_KB4AElno(_._data, bucket);
    if (!fu::u8((entry & mask)))
    {
        entry |= mask;
        return true;
    }
    else
        return false;

}

void add_mle9fepo(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    grow_if_oob_KB4AElno(_._data, bucket) |= mask;
}

void add_vot6EQuV(s_BitSet& _, const s_BitSet& other)
{
    const int N = other._data.size();
    if (_._data.size() < N)
        _._data.grow(N);

    for (int i = 0; i < N; i++)
        _._data.mutref(i) |= other._data[i];

}

s_BitSet& operator|=(s_BitSet& left, const s_BitSet& other)
{
    add_vot6EQuV(left, other);
    return left;
}

[[noreturn]] fu::never rem_vot6EQuV(s_BitSet& _, const s_BitSet& other)
{
    int N = other._data.size();
    if (N > _._data.size())
        N = _._data.size();

    for (int i = 0; i < N; i++)
        _._data.mutref(i) &= fu::u8(~other._data[i]);

    if (N == _._data.size())
    {
        int end = N;
        while (end-- > 0)
        {
            if (_._data[end])
                break;

        };
        _._data.shrink((end + 1));
    };
    fu::fail("NOT TESTED"_fu);
}

bool has_35mEQu7d(const s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5());
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    if (_._data.size() > bucket)
        return fu::u8((_._data[bucket] & mask)) != fu::u8(0u);
    else
        return false;

}

bool rem_mle9fepo(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5());
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
            {
                int end = bucket;
                while (end-- > 0)
                {
                    if (_._data[end])
                        break;

                };
                _._data.shrink((end + 1));
            };
            return true;
        };
    };
    return false;
}

void add_range_45N7jBpR(s_BitSet& _, const int end)
{
    const int no_neg = (end & MIN_bROiNhN5());
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

int popcount_LkpkIIRn(const s_BitSet& _)
{
    int sum = 0;
    const int N = (_._data.size() >> 3);
    fu::view<uint64_t> u64s = fu::view_of(fu::get_view(_._data, 0, (N << 3)), uint64_t{});
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

                                #ifndef DEF_min_AsFD7H8Nlu6
                                #define DEF_min_AsFD7H8Nlu6
inline int min_AsFD7H8N(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

s_BitSet& and_not_assign_Eu2YEyBH(s_BitSet& a, const s_BitSet& b)
{
    const int N = min_AsFD7H8N(a._data.size(), b._data.size());
    for (int i = 0; i < N; i++)
        a._data.mutref(i) &= fu::u8(~b._data[i]);

    return a;
}

#endif
