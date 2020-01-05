#pragma once

#include "std.h"
#include "cfg.h"

typedef   int8_t  i8;
typedef  int16_t i16;
typedef  int32_t i32;
typedef  int64_t i64;

typedef  uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef    float f32;
typedef   double f64;

/////////////////////////////////////////////

const uint8_t fu_EXIT_BadAlloc      =  101;
const int     fu_ERR_UnknownError   = -101;

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

struct fu_ZERO
{
    fu_INL constexpr operator int() const noexcept {
        return 0;
    }

    fu_INL void operator=(int x) noexcept {
        if (x)
            assert(false);
    }
};

struct fu_INT01
{
    bool val = true;

    fu_INL void operator=(int x) noexcept {
        assert(x == 0 || x == 1);
        val = x > 0;
    }

    fu_INL constexpr operator int() const noexcept {
        return val ? 1 : 0;
    }
};

constexpr fu_INT01 fu_ONE { true };

template <typename T>
struct fu_MAYBE_POS {
    static constexpr bool value = true;
};

template <>
struct fu_MAYBE_POS<fu_ZERO> {
    static constexpr bool value = false;
};

#define fu_MAYBE_POS(...) (fu_MAYBE_POS<decltype( __VA_ARGS__ )>::value)

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
