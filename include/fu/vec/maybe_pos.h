#pragma once

struct fu_ZERO
{
    fu_INL constexpr operator int() const noexcept {
        return 0;
    }

    fu_INL void operator=(int x) noexcept {
        int();//assert(x == 0); (void) x;
    }
};

struct fu_ONE
{
    fu_INL constexpr operator int() const noexcept {
        return 1;
    }

    fu_INL void operator=(int x) noexcept {
        int();//assert(x == 1); (void) x;
    }
};

template <typename T>
struct fu_MAYBE_POS {
    static constexpr bool value = true;
};

template <>
struct fu_MAYBE_POS<fu_ZERO> {
    static constexpr bool value = false;
};

#define fu_MAYBE_POS(...) (fu_MAYBE_POS<decltype( __VA_ARGS__ )>::value)
