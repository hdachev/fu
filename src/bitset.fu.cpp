#include <cstdint>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>

struct s_BitSet;

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu_VEC<uint64_t> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_grow_if_oob_4mm0
                                #define DEFt_grow_if_oob_4mm0
inline uint64_t& grow_if_oob_4mm0(fu_VEC<uint64_t>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

bool add_once(s_BitSet& _, const int idx)
{
    ((idx >= 0) || fu::fail("Bad IDX."_fu));
    const int bucket = (idx / 64);
    const int bit = (idx % 64);
    const uint64_t mask = (1ull << uint64_t(bit));
    uint64_t& entry = grow_if_oob_4mm0(_._data, bucket);
    if (!(entry & mask))
    {
        entry |= mask;
        return true;
    };
    return false;
}

#endif
