#pragma once

#include "std.h"

using i32 = int;
using u32 = unsigned int;

/////////////////////////////////////////////

const uint8_t fu_EXIT_BadAlloc = 101;

/////////////////////////////////////////////

#ifdef _MSC_VER
    #define fu_INL __forceinline
#else
    #define fu_INL inline __attribute__((__always_inline__))
#endif

/////////////////////////////////////////////

#ifdef _MSC_VER
    #define fu_NEVER_INLINE __declspec(noinline)
#else
    #define fu_NEVER_INLINE __attribute__((noinline))
#endif

/////////////////////////////////////////////

struct fu_ZERO {
    fu_INL constexpr operator int() const noexcept {
        return 0;
    }
};

struct fu_ONE {
    fu_INL constexpr operator int() const noexcept {
        return 1;
    }
};

fu_INL constexpr bool fu_MAYBE_POSITIVE(fu_ZERO) noexcept {
    return false;
}

fu_INL constexpr bool fu_MAYBE_POSITIVE(fu_ONE) noexcept {
    return true;
}

fu_INL constexpr bool fu_MAYBE_POSITIVE(int) noexcept {
    return true;
}

/////////////////////////////////////////////

#ifdef _WIN32
    #define fu_LITTLE_ENDIAN (0)
#else
    #define fu_LITTLE_ENDIAN (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#endif

/////////////////////////////////////////////

inline uint32_t fu_NEXT_POW2(uint32_t v) noexcept
{
    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v++;

    return v;
}

/////////////////////////////////////////////

inline uint32_t fu_NEXT_LOG2(uint32_t a) // a must be >= 2
{
#ifdef _MSC_VER
    unsigned long bit;
    _BitScanReverse(&bit, a - 1);
    return uint32_t(bit + 1);
#else
    return 32 - uint32_t( __builtin_clz(a - 1));
#endif
}

/////////////////////////////////////////////
