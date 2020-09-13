#include <cstddef>
#include <cstdint>
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>
#include <utility>

struct s_TEA;

s_TEA hash(fu::view<std::byte>);

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

                                #ifndef DEFt_r4_ZIoe
                                #define DEFt_r4_ZIoe
inline void r4_ZIoe(s_TEA& _, uint32_t& sum)
{
    uint32_t delta = 0x9e3779b9u;
    for (int i = 0; i < 4; i++)
    {
        sum += delta;
        _.v0 += ((((_.v1 << 4u) + 0xa341316cu) ^ (_.v1 + sum)) ^ ((_.v1 >> 5u) + 0xc8013ea4u));
        _.v1 += ((((_.v0 << 4u) + 0xad90777du) ^ (_.v0 + sum)) ^ ((_.v0 >> 5u) + 0x7e95761eu));
    };
}
                                #endif

                                #ifndef DEFt_r4_PThh
                                #define DEFt_r4_PThh
inline void r4_PThh(s_TEA& tea)
{
    uint32_t sum {};
    r4_ZIoe(tea, sum);
}
                                #endif

                                #ifndef DEFt_r16_ZIoe
                                #define DEFt_r16_ZIoe
inline void r16_ZIoe(s_TEA& _, uint32_t& sum)
{
    uint32_t delta = 0x9e3779b9u;
    for (int i = 0; i < 16; i++)
    {
        sum += delta;
        _.v0 += ((((_.v1 << 4u) + 0xa341316cu) ^ (_.v1 + sum)) ^ ((_.v1 >> 5u) + 0xc8013ea4u));
        _.v1 += ((((_.v0 << 4u) + 0xad90777du) ^ (_.v0 + sum)) ^ ((_.v0 >> 5u) + 0x7e95761eu));
    };
}
                                #endif

                                #ifndef DEFt_r16_PThh
                                #define DEFt_r16_PThh
inline void r16_PThh(s_TEA& tea)
{
    uint32_t sum {};
    r16_ZIoe(tea, sum);
}
                                #endif

s_TEA hash(s_TEA&& res, fu::view<std::byte> u8view)
{
    const int u32len = (u8view.size() & ~3);
    fu::view<uint32_t> u32view = fu::view_of(fu::get_view(u8view, 0, u32len), uint32_t{});
    for (int i = 1; i < u32view.size(); i += 2)
    {
        res.v0 ^= u32view[(i - 1)];
        res.v1 ^= u32view[i];
        r4_PThh(res);
    };
    if (u32view.size() & 1)
        res.v0 ^= u32view[(u32view.size() - 1)];

    
    {
        uint32_t last {};
        for (int i = u32len; i < u8view.size(); i++)
        {
            last <<= 8u;
            last |= uint32_t(u8view[i]);
        };
        res.v1 ^= last;
    };
    r16_PThh(res);
    return std::move(res);
}

s_TEA hash(fu::view<std::byte> u8view)
{
    s_TEA res {};
    res = hash(s_TEA(res), u8view);
    return res;
}

                                #ifndef DEFt_u64_F9TO
                                #define DEFt_u64_F9TO
inline uint64_t u64_F9TO(s_TEA&& tea)
{
    return (uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull));
}
                                #endif

fu_STR hash62(fu::view<std::byte> str, const int chars)
{
    fu_STR res {};
    uint64_t v = u64_F9TO(hash(str));
    for (int i = 0; i < chars; i++)
    {
        const uint64_t c = (v % 62ull);
        v = (v / 62ull);
        if (c < 10ull)
            res += std::byte(((c - 0ull) + uint64_t(std::byte('0'))));
        else if (c < 36ull)
            res += std::byte(((c - 10ull) + uint64_t(std::byte('a'))));
        else
            res += std::byte(((c - 36ull) + uint64_t(std::byte('A'))));

    };
    return res;
}

#endif
