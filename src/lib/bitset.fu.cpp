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
    fu_VEC<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

int size_AuAxMCl5(const s_BitSet& _)
{
    return _._data.size() * 8;
}

void clear_eS70UoEC(s_BitSet& _)
{
    _._data.clear();
}

                                #ifndef DEF_MIN_bROiNhN5YRb
                                #define DEF_MIN_bROiNhN5YRb
inline int MIN_bROiNhN5(const int)
{
    return -2147483648;
}
                                #endif

                                #ifndef DEF_grow_if_oob_X2PGX1kxDm6
                                #define DEF_grow_if_oob_X2PGX1kxDm6
inline fu::u8& grow_if_oob_X2PGX1kx(fu_VEC<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

bool add_once_uczByTOp(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5(int{}));
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    fu::u8& entry = grow_if_oob_X2PGX1kx(_._data, bucket);
    if (!fu::u8((entry & mask)))
    {
        entry |= mask;
        return true;
    }
    else
        return false;

}

void add_uczByTOp(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5(int{}));
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    grow_if_oob_X2PGX1kx(_._data, bucket) |= mask;
}

void add_I6kjNu45(s_BitSet& _, const s_BitSet& other)
{
    const int N = other._data.size();
    if (_._data.size() < N)
        _._data.grow(N);

    for (int i = 0; i < N; i++)
        _._data.mutref(i) |= other._data[i];

}

[[noreturn]] fu::never rem_I6kjNu45(s_BitSet& _, const s_BitSet& other)
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

bool has_qNZlwBKS(const s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5(int{}));
    const int bucket = ((idx >> 3) | no_neg);
    const int bit = (idx & 7);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    return (_._data.size() > bucket) && (fu::u8((_._data[bucket] & mask)) != fu::u8(0u));
}

bool rem_uczByTOp(s_BitSet& _, const int idx)
{
    const int no_neg = (idx & MIN_bROiNhN5(int{}));
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

void add_range_7V2wMoqU(s_BitSet& _, const int end)
{
    const int no_neg = (end & MIN_bROiNhN5(int{}));
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
        _._data.mutref(floorBytes) = fu::u8(tail);
    };
}

int popcount_AuAxMCl5(const s_BitSet& _)
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

                                #ifndef DEF_min_F7KakSWb5Tl
                                #define DEF_min_F7KakSWb5Tl
inline int min_F7KakSWb(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

s_BitSet& and_not_assign_30J7m8SX(s_BitSet& a, const s_BitSet& b)
{
    const int N = min_F7KakSWb(a._data.size(), b._data.size());
    for (int i = 0; i < N; i++)
        a._data.mutref(i) &= fu::u8(~b._data[i]);

    return a;
}

#endif
