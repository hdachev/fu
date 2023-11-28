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

s_TEA& non_zero_T98svGTs(s_TEA& tea)
{
    if (!tea)
        tea.v0 = 0xffffffffu;

    return tea;
}

void r4_ayNY8hbk(s_TEA& _)
{
    unsigned sum {};
    const unsigned delta = 0x9e3779b9u;
    for (int i = 0; i < 4; i++)
    {
        sum += delta;
        _.v0 += ((((_.v1 << 4u) + 0xa341316cu) ^ (_.v1 + sum)) ^ ((_.v1 >> 5u) + 0xc8013ea4u));
        _.v1 += ((((_.v0 << 4u) + 0xad90777du) ^ (_.v0 + sum)) ^ ((_.v0 >> 5u) + 0x7e95761eu));
    };
}

void r8_ayNY8hbk(s_TEA& _)
{
    unsigned sum {};
    const unsigned delta = 0x9e3779b9u;
    for (int i = 0; i < 8; i++)
    {
        sum += delta;
        _.v0 += ((((_.v1 << 4u) + 0xa341316cu) ^ (_.v1 + sum)) ^ ((_.v1 >> 5u) + 0xc8013ea4u));
        _.v1 += ((((_.v0 << 4u) + 0xad90777du) ^ (_.v0 + sum)) ^ ((_.v0 >> 5u) + 0x7e95761eu));
    };
}

void r16_ayNY8hbk(s_TEA& _)
{
    unsigned sum {};
    const unsigned delta = 0x9e3779b9u;
    for (int i = 0; i < 16; i++)
    {
        sum += delta;
        _.v0 += ((((_.v1 << 4u) + 0xa341316cu) ^ (_.v1 + sum)) ^ ((_.v1 >> 5u) + 0xc8013ea4u));
        _.v1 += ((((_.v0 << 4u) + 0xad90777du) ^ (_.v0 + sum)) ^ ((_.v0 >> 5u) + 0x7e95761eu));
    };
}

void hash_KpbyTrxM(s_TEA& res, const s_TEA& other)
{
    res.v0 ^= other.v1;
    res.v1 ^= other.v0;
    r16_ayNY8hbk(res);
}

void hash_dDLcy6Ao(s_TEA& res, const uint64_t v)
{
    res.v0 ^= unsigned((v >> 32ull));
    res.v1 ^= unsigned(v);
    r16_ayNY8hbk(res);
}

void hash_CwEi37x3(s_TEA& res, const unsigned v)
{
    res.v0 ^= unsigned(v);
    r16_ayNY8hbk(res);
}

void hash_okLTgNyg(s_TEA& res, fu::view<char> u8view)
{
    const int u32len = (u8view.size() & ~3);
    fu::view<unsigned> u32view = fu::view_of<unsigned>(fu::get_view_start0(u8view, u32len));
    for (int i = 1; i < u32view.size(); (i += 2))
    {
        res.v0 ^= u32view[(i - 1)];
        res.v1 ^= u32view[i];
        r16_ayNY8hbk(res);
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
        r16_ayNY8hbk(res);
    };
}

fu::str digest62_NBz0rQPD(uint64_t v, int chars)
{
    chars = (((chars > 0) && (chars < 11)) ? chars : 11);
    /*MOV*/ fu::str res {};
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

fu::str digest16_NBz0rQPD(uint64_t v, int chars)
{
    chars = (((chars > 0) && (chars < 16)) ? chars : 16);
    /*MOV*/ fu::str res {};
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

s_TEA hash_yvYDPKX8(fu::view<char> u8view)
{
    s_TEA res {};
    hash_okLTgNyg(res, u8view);
    return res;
}

fu::str hash62_nHEuzL2I(fu::view<char> str, const int chars)
{
    s_TEA res {};
    hash_okLTgNyg(res, str);
    uint64_t BL_1_v {};
    return digest62_NBz0rQPD((__extension__ (
    {
        const s_TEA& tea = res;
        BL_1_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), BL_1_v), chars);
}

fu::str hash16_nHEuzL2I(fu::view<char> str, const int chars)
{
    s_TEA res {};
    hash_okLTgNyg(res, str);
    uint64_t BL_1_v {};
    return digest16_NBz0rQPD((__extension__ (
    {
        const s_TEA& tea = res;
        BL_1_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
    (void)0;}), BL_1_v), chars);
}

#endif
