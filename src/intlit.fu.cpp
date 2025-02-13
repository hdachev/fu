#define TODO_FIX_REMOVE_copying_push

#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>

struct s_Intlit;

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    fu::u8 base;
    fu::u8 minsize_i;
    fu::u8 minsize_u;
    fu::u8 minsize_f;
    bool sIgned;
    bool uNsigned;
    bool negative;
    uint64_t absval;
    fu::str error;
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

#ifndef fu_NO_fdefs

s_Intlit Intlit_MpuZ8TbN(const uint64_t absval, const bool negative, /*MOV*/ fu::str&& error, const bool uNsigned, const bool sIgned, const uint64_t base)
{
    if (!(error))
    {
        error = ((sIgned && uNsigned) ? "Ambiguous int literal: cannot decide if signed or unsigned."_fu : fu::str{});
    };
    const uint64_t sizeval = ((negative && absval) ? (absval - 1ull) : absval);
    const int minsize_i = ((sizeval < 0x80ull) ? 8 : ((sizeval < 0x8000ull) ? 16 : ((sizeval < 0x80000000ull) ? 32 : ((sizeval < 0x8000000000000000ull) ? 64 : 128))));
    const int minsize_u = (negative ? 255 : ((absval < 0x100ull) ? 8 : ((absval < 0x10000ull) ? 16 : ((absval < 0x100000000ull) ? 32 : 64))));
    const int minsize_f = ((absval < 0x1000000ull) ? 32 : 64);
    if (!(error))
    {
        error = (sIgned ? ((minsize_i > 64) ? "Oversized signed int literal."_fu : fu::str{}) : ((minsize_u > 64) ? "Oversized unsigned int literal."_fu : fu::str{}));
    };
    return s_Intlit { fu::u8(base), fu::u8(unsigned(minsize_i)), fu::u8(unsigned(minsize_u)), fu::u8(unsigned(minsize_f)), sIgned, uNsigned, negative, absval, static_cast<fu::str&&>(error) };
}

s_Intlit Intlit_u8re8TwO(fu::view<char> sign_prefix_value_suffix)
{
    const char c_sign = sign_prefix_value_suffix[0];
    const char sign = (((c_sign == '-') || (c_sign == '+')) ? c_sign : char{});
    fu::view<char> prefix_value_suffix = fu::get_view(sign_prefix_value_suffix, ((sign != char{}) ? 1 : 0));
    const char c_prefix = ((prefix_value_suffix.size() > 1) ? prefix_value_suffix[1] : char{});
    const char prefix = ((((c_prefix == 'x') || (c_prefix == 'o') || (c_prefix == 'b')) && (prefix_value_suffix[0] == '0')) ? c_prefix : char{});
    fu::view<char> value_suffix = fu::get_view(prefix_value_suffix, ((prefix != char{}) ? 2 : 0));
    const char c_suffix = (value_suffix.size() ? value_suffix[(value_suffix.size() - 1)] : char{});
    const char suffix = ((c_suffix == 'u') ? c_suffix : char{});
    fu::view<char> value = fu::get_view_start0(value_suffix, (value_suffix.size() - ((suffix != char{}) ? 1 : 0)));
    const uint64_t base = ((prefix == 'x') ? uint64_t(unsigned(16)) : ((prefix == 'o') ? uint64_t(unsigned(8)) : ((prefix == 'b') ? uint64_t(unsigned(2)) : uint64_t(unsigned(10)))));
    /*MOV*/ fu::str error {};
    uint64_t absval {};
    for (int i = 0; i < value.size(); i++)
    {
        const char c = value[i];
        if (!(c == '_'))
        {
            const uint64_t ci = ((c < 'a') ? (uint64_t(fu::u8(c)) - uint64_t(fu::u8('0'))) : ((uint64_t(fu::u8(c)) - uint64_t(fu::u8('a'))) + 10ull));
            const uint64_t last = absval;
            absval *= base;
            absval += ci;
            if (last != (absval / base))
            {
                if (!(error))
                    error = "Integer literal overflows a u64."_fu;

            };
        };
    };
    const bool uNsigned = (suffix == 'u');
    const bool negative = (sign == '-');
    const bool sIgned = (negative || (suffix == 'i'));
    return Intlit_MpuZ8TbN(absval, negative, static_cast<fu::str&&>(error), uNsigned, sIgned, base);
}

#endif
