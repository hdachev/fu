#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/vec/concat_one.h>

struct s_TEA;

                                #ifndef DEF_s_TEA
                                #define DEF_s_TEA
struct s_TEA
{
    unsigned v0;
    unsigned v1;
    explicit operator bool() const noexcept
    {
        return false
            || v0
            || v1
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

s_TEA& hash_8mrHMg9t(s_TEA& res, fu::view<char> u8view)
{
    const int u32len = (u8view.size() & ~3);
    fu::view<unsigned> u32view = fu::view_of(fu::get_view(u8view, 0, u32len), unsigned{});
    for (int i = 1; i < u32view.size(); (i += 2))
    {
        res.v0 ^= u32view[(i - 1)];
        res.v1 ^= u32view[i];
        unsigned sum {};
        const unsigned delta = 0x9e3779b9u;
        for (int i_1 = 0; i_1 < 16; i_1++)
        {
            sum += delta;
            res.v0 += ((((res.v1 << 4u) + 0xa341316cu) ^ (res.v1 + sum)) ^ ((res.v1 >> 5u) + 0xc8013ea4u));
            res.v1 += ((((res.v0 << 4u) + 0xad90777du) ^ (res.v0 + sum)) ^ ((res.v0 >> 5u) + 0x7e95761eu));
        };
    };
    if (u8view.size() & 7)
    {
        if (u32view.size() & 1)
            res.v0 ^= u32view[(u32view.size() - 1)];


        {
            unsigned last {};
            for (int i_1 = u32len; i_1 < u8view.size(); i_1++)
            {
                last <<= 8u;
                last |= unsigned(fu::u8(u8view[i_1]));
            };
            res.v1 ^= last;
        };
        unsigned sum {};
        const unsigned delta = 0x9e3779b9u;
        for (int i_1 = 0; i_1 < 16; i_1++)
        {
            sum += delta;
            res.v0 += ((((res.v1 << 4u) + 0xa341316cu) ^ (res.v1 + sum)) ^ ((res.v1 >> 5u) + 0xc8013ea4u));
            res.v1 += ((((res.v0 << 4u) + 0xad90777du) ^ (res.v0 + sum)) ^ ((res.v0 >> 5u) + 0x7e95761eu));
        };
    };
    return res;
}

s_TEA hash_gcpjCBM9(fu::view<char> u8view)
{
    s_TEA res {};
    hash_8mrHMg9t(res, u8view);
    return res;
}

fu_STR digest62_WmiG4m67(uint64_t v, int chars)
{
    chars = (((chars > 0) && (chars < 11)) ? int(chars) : 11);
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < chars; i++)
    {
        const uint64_t c = (v % 62ull);
        v = (v / 62ull);
        if (c < 10ull)
            res += char(((c - 0ull) + uint64_t(fu::u8('0'))));
        else if (c < 36ull)
            res += char(((c - 10ull) + uint64_t(fu::u8('a'))));
        else
            res += char(((c - 36ull) + uint64_t(fu::u8('A'))));

    };
    return /*NRVO*/ res;
}

fu_STR digest16_WmiG4m67(uint64_t v, int chars)
{
    chars = (((chars > 0) && (chars < 16)) ? int(chars) : 16);
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < chars; i++)
    {
        const uint64_t c = (v % 16ull);
        v = (v / 16ull);
        if (c < 10ull)
            res += char(((c - 0ull) + uint64_t(fu::u8('0'))));
        else
            res += char(((c - 10ull) + uint64_t(fu::u8('a'))));

    };
    return /*NRVO*/ res;
}

fu_STR hash62_AxN9Pg5L(fu::view<char> str, const int chars)
{
    s_TEA res {};
    hash_8mrHMg9t(res, str);
    uint64_t BL_1_v {};
    return digest62_WmiG4m67((__extension__ (
    {
        const s_TEA& tea = res;
        BL_1_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), uint64_t(BL_1_v)), int(chars));
}

fu_STR hash16_AxN9Pg5L(fu::view<char> str, const int chars)
{
    s_TEA res {};
    hash_8mrHMg9t(res, str);
    uint64_t BL_1_v {};
    return digest16_WmiG4m67((__extension__ (
    {
        const s_TEA& tea = res;
        BL_1_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), uint64_t(BL_1_v)), int(chars));
}

#endif
