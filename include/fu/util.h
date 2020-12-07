#pragma once

#include "./std.h"
#include "./cfg.h"
#include "./inl.h"

/////////////////////////////////////////////
//
// TODO remove all of these, not good style.

typedef   int8_t  i8;
typedef  int16_t i16;
typedef  int32_t i32;
typedef  int64_t i64;

typedef  uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
// typedef uint64_t u64;

typedef    float f32;
typedef   double f64;

/////////////////////////////////////////////

const uint8_t fu_EXIT_BadAlloc      =  101;

const int     fu_ERR_UnknownError   = -101;
const int     fu_ERR_FS_BadPath     = -102;

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

#ifdef _MSC_VER
    #define fu_EXPORT __declspec(dllexport)
    #define fu_IMPORT __declspec(dllimport)
#else
    #define fu_EXPORT __attribute__((__visibility__("default")))
    #define fu_IMPORT
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

#ifndef NDEBUG
const bool fu_DEBUG = true;
#else
const bool fu_DEBUG = false;
#endif

#ifdef __linux__
const bool fu_LINUX = true;
#else
const bool fu_LINUX = false;
#endif

#ifdef _WIN32
const bool fu_WINDOWS = true;
#else
const bool fu_WINDOWS = false;
#endif

#ifdef __APPLE__
const bool fu_APPLE = true;
#else
const bool fu_APPLE = false;
#endif

/////////////////////////////////////////////
