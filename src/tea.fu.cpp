#include <cstddef>
#include <cstdint>
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>
#include <utility>

struct s_TEA;
inline void r16_IvEF(s_TEA&, uint32_t&);
s_TEA hash(fu::view<std::byte>);
inline void r4_IvEF(s_TEA&, uint32_t&);
                                #ifndef DEF_s_TEA
                                #define DEF_s_TEA
struct s_TEA
{
    uint32_t v0;
    uint32_t v1;
    explicit operator bool() const noexcept
    {
        return false
            || v0
            || v1
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_12_8_12_15_12TEA
                                #define DEFt_12_8_12_15_12TEA
inline void r4_ugGK(s_TEA& tea)
{
    uint32_t sum {};
    r4_IvEF(tea, sum);
}
                                #endif

                                #ifndef DEFt_12_5_12_15_12TEA__383u32
                                #define DEFt_12_5_12_15_12TEA__383u32
inline void r4_IvEF(s_TEA& _, uint32_t& sum)
{
    uint32_t delta = 0x9e3779b9u;
    for (int i = 0; (i < 4); i++)
    {
        sum += delta;
        _.v0 += ((((_.v1 << 4u) + 0xa341316cu) ^ (_.v1 + sum)) ^ ((_.v1 >> 5u) + 0xc8013ea4u));
        _.v1 += ((((_.v0 << 4u) + 0xad90777du) ^ (_.v0 + sum)) ^ ((_.v0 >> 5u) + 0x7e95761eu));
    };
}
                                #endif

                                #ifndef DEFt_12_10_12_15_12TEA
                                #define DEFt_12_10_12_15_12TEA
inline void r16_ugGK(s_TEA& tea)
{
    uint32_t sum {};
    r16_IvEF(tea, sum);
}
                                #endif

                                #ifndef DEFt_12_7_12_15_12TEA__383u32
                                #define DEFt_12_7_12_15_12TEA__383u32
inline void r16_IvEF(s_TEA& _, uint32_t& sum)
{
    uint32_t delta = 0x9e3779b9u;
    for (int i = 0; (i < 16); i++)
    {
        sum += delta;
        _.v0 += ((((_.v1 << 4u) + 0xa341316cu) ^ (_.v1 + sum)) ^ ((_.v1 >> 5u) + 0xc8013ea4u));
        _.v1 += ((((_.v0 << 4u) + 0xad90777du) ^ (_.v0 + sum)) ^ ((_.v0 >> 5u) + 0x7e95761eu));
    };
}
                                #endif

                                #ifndef DEFt_12_11_12_12_12TEA
                                #define DEFt_12_11_12_12_12TEA
inline uint64_t u64_3l27(s_TEA&& tea)
{
    return (uint64_t(tea.v0) | (uint64_t(tea.v1) << 32u));
}
                                #endif

s_TEA hash(s_TEA&& res, fu::view<std::byte> u8view)
{
    const int u32len = (u8view.size() & ~3);
    fu::view<uint32_t> u32view = fu::into_view<u32>(fu::get_view(u8view, 0, u32len));
    for (int i = 1; (i < u32view.size()); (i += 2))
    {
        res.v0 ^= u32view[(i - 1)];
        res.v1 ^= u32view[i];
        r4_ugGK(res);
    };
    if ((u32view.size() & 1))
        res.v0 ^= u32view[(u32view.size() - 1)];

    
    {
        uint32_t last {};
        for (int i = u32len; (i < u8view.size()); i++)
        {
            last <<= 8u;
            last |= uint32_t(u8view[i]);
        };
        res.v1 ^= last;
    };
    r16_ugGK(res);
    return std::move(res);
}

s_TEA hash(fu::view<std::byte> u8view)
{
    s_TEA res {};
    res = hash(s_TEA(res), u8view);
    return res;
}

fu_STR hash62(fu::view<std::byte> str)
{
    fu_STR res {};
    uint64_t v = u64_3l27(hash(str));
    for (int i = 0; (i < 4); i++)
    {
        const uint64_t c = (v % 62u);
        v = (v / 62u);
        if ((c < 10u))
            (res += std::byte(((c - 0u) + uint64_t(std::byte('0')))));
        else if ((c < 36u))
            (res += std::byte(((c - 10u) + uint64_t(std::byte('a')))));
        else
            (res += std::byte(((c - 36u) + uint64_t(std::byte('A')))));

    };
    return res;
}

#endif
