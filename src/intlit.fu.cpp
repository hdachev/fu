
#include <cstdint>
#include <fu/default.h>
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

s_Intlit Intlit_NbHm0tEz(fu::view<char> sign_prefix_value_suffix)
{
    const char c_sign = sign_prefix_value_suffix[0];
    const char sign = (((c_sign == '-') || (c_sign == '+')) ? c_sign : (*(const char*)fu::NIL));
    fu::view<char> prefix_value_suffix = fu::get_view(sign_prefix_value_suffix, ((sign != char{}) ? 1 : int{}), sign_prefix_value_suffix.size());
    const char c_prefix = ((prefix_value_suffix.size() > 1) ? prefix_value_suffix[1] : (*(const char*)fu::NIL));
    const char prefix = (((c_prefix == 'x') || (c_prefix == 'o') || (c_prefix == 'b')) && (prefix_value_suffix[0] == '0') ? c_prefix : (*(const char*)fu::NIL));
    fu::view<char> value_suffix = fu::get_view(prefix_value_suffix, ((prefix != char{}) ? 2 : int{}), prefix_value_suffix.size());
    const char c_suffix = (value_suffix.size() ? value_suffix[(value_suffix.size() - 1)] : (*(const char*)fu::NIL));
    const char suffix = ((c_suffix == 'u') ? c_suffix : (*(const char*)fu::NIL));
    fu::view<char> value = fu::get_view(value_suffix, 0, (value_suffix.size() - ((suffix != char{}) ? 1 : int{})));
    const uint64_t base = ((prefix == 'x') ? uint64_t(unsigned(16)) : ((prefix == 'o') ? uint64_t(unsigned(8)) : ((prefix == 'b') ? uint64_t(unsigned(2)) : uint64_t(unsigned(10)))));
    fu_STR error {};
    uint64_t absval {};
    for (int i = 0; i < value.size(); i++)
    {
        const char c = value[i];
        if (c == '_')
            continue;

        const uint64_t ci = (uint64_t(fu::u8(c)) - ((c < 'a') ? uint64_t(fu::u8('0')) : uint64_t(fu::u8('a'))));
        const uint64_t last = absval;
        absval *= base;
        absval += ci;
        if (!(error))
            error = ((last != (absval / base)) ? "Integer literal overflows a u64."_fu : fu_STR{});

    };
    const bool uNsigned = ((suffix == 'u') || (base != 10ull));
    const bool negative = (sign == '-');
    const bool sIgned = (negative || (suffix == 'i'));
    if (!(error))
        error = (sIgned && uNsigned ? "Ambiguous int literal: cannot decide if signed or unsigned."_fu : fu_STR{});

    const uint64_t sizeval = ((negative && absval) ? (absval - 1ull) : uint64_t(absval));
    const int minsize_i = ((sizeval < 0x80ull) ? 8 : ((sizeval < 0x8000ull) ? 16 : ((sizeval < 0x80000000ull) ? 32 : ((sizeval < 0x8000000000000000ull) ? 64 : 128))));
    const int minsize_u = (negative ? 255 : ((absval < 0x100ull) ? 8 : ((absval < 0x10000ull) ? 16 : ((absval < 0x100000000ull) ? 32 : 64))));
    const int minsize_f = ((absval < 0x1000000ull) ? 32 : 64);
    if (!(error))
        error = (sIgned ? ((minsize_i > 64) ? "Oversized signed int literal."_fu : fu_STR{}) : ((minsize_u > 64) ? "Oversized unsigned int literal."_fu : fu_STR{}));

    return s_Intlit { fu::u8(base), fu::u8(unsigned(minsize_i)), fu::u8(unsigned(minsize_u)), fu::u8(unsigned(minsize_f)), bool(sIgned), bool(uNsigned), bool(negative), uint64_t(absval), fu_STR(error) };
}

#endif
