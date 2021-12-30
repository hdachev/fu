
#include <cstdint>
#include <fu/int.h>
#include <fu/vec.h>
#include <fu/view.h>

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

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_grow_if_oob_hUkNCHRW
                                #define DEFt_grow_if_oob_hUkNCHRW
inline fu::u8& grow_if_oob_hUkNCHRW(fu_VEC<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

bool add_once_zoGTyg4u(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    fu::u8& entry = grow_if_oob_hUkNCHRW(_._data, bucket);
    if (!fu::u8((entry & mask)))
    {
        entry |= mask;
        return true;
    };
    return false;
}

void add_zoGTyg4u(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    grow_if_oob_hUkNCHRW(_._data, bucket) |= mask;
}

                                #ifndef DEFt_grow_if_oob_t6j4iwdU
                                #define DEFt_grow_if_oob_t6j4iwdU
inline fu::u8& grow_if_oob_t6j4iwdU(fu_VEC<fu::u8>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

void add_NzPYLR4s(s_BitSet& _, const s_BitSet& other)
{
    for (int i1 = other._data.size(); i1-- > 0; )
    {
        if (other._data[i1])
        {
            grow_if_oob_t6j4iwdU(_._data, i1);
            for (int i = 0; (i <= i1); i++)
                _._data.mutref(i) |= other._data[i];

            break;
        };
    };
}

bool has_asJtcpQm(const s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
    return (_._data.size() > bucket) && (fu::u8((_._data[bucket] & mask)) != fu::u8(0u));
}

void rem_zoGTyg4u(s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    if (_._data.size() > bucket)
    {
        const int bit = (idx % 8);
        const fu::u8 mask = fu::u8((fu::u8(1u) << fu::u8(unsigned(bit))));
        _._data.mutref(bucket) &= fu::u8(~mask);
    };
}

void add_range_mQD1F0il(s_BitSet& _, const int start, const int end)
{
    for (int i = start; i < end; i++)
        add_zoGTyg4u(_, i);

}

int popcount_Btvcdbd3(const s_BitSet& _)
{
    /*MOV*/ int sum = 0;
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
    return /*NRVO*/ sum;
}

#endif
