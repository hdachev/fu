#include <cstdint>
#include <fu/default.h>
#include <fu/str.h>
#include <fu/view.h>

struct s_Intlit;

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    uint8_t base;
    uint8_t minsize_i;
    uint8_t minsize_u;
    uint8_t minsize_f;
    bool sIgned;
    bool uNsigned;
    bool negative;
    uint64_t absval;
    fu_STR error;
    explicit operator bool() const noexcept
    {
        return false
            || base
            || minsize_i
            || minsize_u
            || minsize_f
            || sIgned
            || uNsigned
            || negative
            || absval
            || error
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_Intlit Intlit(fu::view<std::byte> sign_prefix_value_suffix)
{
    const std::byte c_sign = sign_prefix_value_suffix[0];
    const std::byte sign = (((c_sign == std::byte('-')) || (c_sign == std::byte('+'))) ? c_sign : (*(const std::byte*)fu::NIL));
    fu::view<std::byte> prefix_value_suffix = fu::get_view(sign_prefix_value_suffix, ((sign != std::byte{}) ? 1 : int{}), sign_prefix_value_suffix.size());
    const std::byte c_prefix = ((prefix_value_suffix.size() > 1) ? prefix_value_suffix[1] : (*(const std::byte*)fu::NIL));
    const std::byte prefix = (((c_prefix == std::byte('x')) || (c_prefix == std::byte('o')) || (c_prefix == std::byte('b'))) && (prefix_value_suffix[0] == std::byte('0')) ? c_prefix : (*(const std::byte*)fu::NIL));
    fu::view<std::byte> value_suffix = fu::get_view(prefix_value_suffix, ((prefix != std::byte{}) ? 2 : int{}), prefix_value_suffix.size());
    const std::byte c_suffix = (value_suffix.size() ? value_suffix[(value_suffix.size() - 1)] : (*(const std::byte*)fu::NIL));
    const std::byte suffix = ((c_suffix == std::byte('u')) ? c_suffix : (*(const std::byte*)fu::NIL));
    fu::view<std::byte> value = fu::get_view(value_suffix, 0, (value_suffix.size() - ((suffix != std::byte{}) ? 1 : int{})));
    const uint64_t base = ((prefix == std::byte('x')) ? uint64_t(16) : ((prefix == std::byte('o')) ? uint64_t(8) : ((prefix == std::byte('b')) ? uint64_t(2) : uint64_t(10))));
    fu_STR error {};
    uint64_t absval {};
    for (int i = 0; i < value.size(); i++)
    {
        const std::byte c = value[i];
        if (c == std::byte('_'))
            continue;

        const uint64_t ci = (uint64_t(c) - ((c < std::byte('a')) ? uint64_t(std::byte('0')) : uint64_t(std::byte('a'))));
        const uint64_t last_1 = absval;
        absval *= base;
        absval += ci;
        fu_STR* _0;
        (*(_0 = &(error)) ? *_0 : *_0 = ((last_1 != (absval / base)) ? "Integer literal overflows a u64."_fu : fu_STR{}));
    };
    const bool uNsigned = ((suffix == std::byte('u')) || (base != 10ull));
    const bool negative = (sign == std::byte('-'));
    const bool sIgned = (bool(negative) || (suffix == std::byte('i')));
    fu_STR* _1;
    (*(_1 = &(error)) ? *_1 : *_1 = (sIgned && uNsigned ? "Ambiguous int literal: cannot decide if signed or unsigned."_fu : fu_STR{}));
    const uint64_t sizeval = ((negative && absval) ? (absval - 1ull) : uint64_t(absval));
    const int minsize_i = ((sizeval < 0x80ull) ? 8 : ((sizeval < 0x8000ull) ? 16 : ((sizeval < 0x80000000ull) ? 32 : ((sizeval < 0x8000000000000000ull) ? 64 : 128))));
    const int minsize_u = (negative ? 255 : ((absval < 0x100ull) ? 8 : ((absval < 0x10000ull) ? 16 : ((absval < 0x100000000ull) ? 32 : 64))));
    const int minsize_f = ((absval < 0x1000000ull) ? 32 : 64);
    fu_STR* _2;
    (*(_2 = &(error)) ? *_2 : *_2 = (sIgned ? ((minsize_i > 64) ? "Oversized signed int literal."_fu : fu_STR{}) : ((minsize_u > 64) ? "Oversized unsigned int literal."_fu : fu_STR{})));
    return s_Intlit { uint8_t(base), uint8_t(minsize_i), uint8_t(minsize_u), uint8_t(minsize_f), bool(sIgned), bool(uNsigned), bool(negative), uint64_t(absval), fu_STR(error) };
}

#endif
