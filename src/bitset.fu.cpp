#include <cstdint>
#include <fu/vec.h>

struct s_BitSet;

void add(s_BitSet&, int);

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu_VEC<uint8_t> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_grow_if_oob_oHEp
                                #define DEFt_grow_if_oob_oHEp
inline uint8_t& grow_if_oob_oHEp(fu_VEC<uint8_t>& a, const int i)
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
    const uint8_t mask = (1u << uint8_t(bit));
    uint8_t& entry = grow_if_oob_oHEp(_._data, bucket);
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
    const uint8_t mask = (1u << uint8_t(bit));
    grow_if_oob_oHEp(_._data, bucket) |= mask;
}

bool has(const s_BitSet& _, const int idx)
{
    const int no_neg = ((idx < 0) ? -1 : 0);
    const int bucket = ((idx / 8) | no_neg);
    const int bit = (idx % 8);
    const uint8_t mask = (1u << uint8_t(bit));
    return ((_._data.size() > bucket) && ((_._data[bucket] & mask) != 0u));
}

#endif
