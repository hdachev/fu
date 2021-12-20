
#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_TEA;

s_TEA hash(fu::view<char>);

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

#ifndef FU_NO_FDEFs

s_TEA hash(/*MOV*/ s_TEA&& res, fu::view<char> u8view)
{
    const int u32len = (u8view.size() & ~3);
    fu::view<unsigned> u32view = fu::view_of(fu::get_view(u8view, 0, u32len), unsigned{});
    for (int i = 1; i < u32view.size(); i += 2)
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
    return s_TEA(res);
}

s_TEA hash(fu::view<char> u8view)
{
    /*MOV*/ s_TEA res {};
    res = hash(s_TEA(res), u8view);
    return /*NRVO*/ res;
}

fu_STR hash62(fu::view<char> str_1, const int chars)
{
    /*MOV*/ fu_STR res {};
    uint64_t _0 {};
    uint64_t v = (__extension__ (
    {
        const s_TEA tea = hash(str_1);
        _0 = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), uint64_t(_0));
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

fu_STR hash16(fu::view<char> str_1, const int chars)
{
    /*MOV*/ fu_STR res {};
    uint64_t _0 {};
    uint64_t v = (__extension__ (
    {
        const s_TEA tea = hash(str_1);
        _0 = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), uint64_t(_0));
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

#endif
