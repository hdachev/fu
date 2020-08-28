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
    const std::byte sign = ([&]() -> std::byte { if (((c_sign == std::byte('-')) || (c_sign == std::byte('+')))) return c_sign; else return fu::Default<std::byte>::value; }());
    fu::view<std::byte> prefix_value_suffix = fu::get_view(sign_prefix_value_suffix, ([&]() -> int { if ((sign != std::byte{})) return 1; else return int{}; }()), sign_prefix_value_suffix.size());
    const std::byte c_prefix = ([&]() -> std::byte { if ((prefix_value_suffix.size() > 1)) return prefix_value_suffix[1]; else return fu::Default<std::byte>::value; }());
    const std::byte prefix = ([&]() -> std::byte { if (((c_prefix == std::byte('x')) || (c_prefix == std::byte('o')) || (c_prefix == std::byte('b'))) && (prefix_value_suffix[0] == std::byte('0'))) return c_prefix; else return fu::Default<std::byte>::value; }());
    fu::view<std::byte> value_suffix = fu::get_view(prefix_value_suffix, ([&]() -> int { if ((prefix != std::byte{})) return 2; else return int{}; }()), prefix_value_suffix.size());
    const std::byte c_suffix = ([&]() -> std::byte { if (value_suffix.size()) return value_suffix[(value_suffix.size() - 1)]; else return fu::Default<std::byte>::value; }());
    const std::byte suffix = ([&]() -> std::byte { if ((c_suffix == std::byte('u'))) return c_suffix; else return fu::Default<std::byte>::value; }());
    fu::view<std::byte> value = fu::get_view(value_suffix, 0, (value_suffix.size() - ([&]() -> int { if ((suffix != std::byte{})) return 1; else return int{}; }())));
    const uint64_t base = ((prefix == std::byte('x')) ? uint64_t(16) : ((prefix == std::byte('o')) ? uint64_t(8) : ((prefix == std::byte('b')) ? uint64_t(2) : uint64_t(10))));
    fu_STR error {};
    uint64_t absval {};
    for (int i = 0; (i < value.size()); i++)
    {
        const std::byte c = value[i];
        if ((c == std::byte('_')))
        {
            continue;
        };
        const uint64_t ci = (uint64_t(c) - ((c < std::byte('a')) ? uint64_t(std::byte('0')) : uint64_t(std::byte('a'))));
        const uint64_t last = absval;
        absval *= base;
        absval += ci;
        ([&](fu_STR& _) -> fu_STR& { if (!_) _ = ([&]() -> fu_STR { if ((last != (absval / base))) return "Integer literal overflows a u64."_fu; else return fu_STR{}; }()); return _; } (error));
    };
    const bool uNsigned = ((suffix == std::byte('u')) || (base != 10u));
    const bool negative = (sign == std::byte('-'));
    const bool sIgned = (bool(negative) || (suffix == std::byte('i')));
    ([&](fu_STR& _) -> fu_STR& { if (!_) _ = ([&]() -> fu_STR { if (sIgned && uNsigned) return "Ambiguous int literal: cannot decide if signed or unsigned."_fu; else return fu_STR{}; }()); return _; } (error));
    const uint64_t sizeval = ((negative && absval) ? (absval - 1u) : uint64_t(absval));
    const int minsize_i = ((sizeval < 0x80u) ? 8 : ((sizeval < 0x8000u) ? 16 : ((sizeval < 0x80000000u) ? 32 : ((sizeval < 0x8000000000000000u) ? 64 : 128))));
    const int minsize_u = (negative ? 255 : ((absval < 0x100u) ? 8 : ((absval < 0x10000u) ? 16 : ((absval < 0x100000000u) ? 32 : 64))));
    const int minsize_f = ((absval < 0x1000000u) ? 32 : 64);
    ([&](fu_STR& _) -> fu_STR& { if (!_) _ = (sIgned ? ([&]() -> fu_STR { if ((minsize_i > 64)) return "Oversized signed int literal."_fu; else return fu_STR{}; }()) : ([&]() -> fu_STR { if ((minsize_u > 64)) return "Oversized unsigned int literal."_fu; else return fu_STR{}; }())); return _; } (error));
    return s_Intlit { uint8_t(base), uint8_t(minsize_i), uint8_t(minsize_u), uint8_t(minsize_f), bool(sIgned), bool(uNsigned), bool(negative), uint64_t(absval), fu_STR(error) };
}

#endif
