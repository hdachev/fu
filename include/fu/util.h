#pragma once

#include "./std.h"
#include "./inl.h"

/////////////////////////////////////////////
//
// TODO remove all of these wtf

typedef  int32_t i32;
typedef uint32_t u32;

namespace fu {

constexpr int FS_MAX_PATH       =  4 * 1024;
constexpr int FREAD_BUFFER_SIZE = 16 * 1024;
constexpr int ARC_MIN_ALLOC     = 128;

} // namespace

const uint8_t fu_EXIT_BadAlloc      =  101;

const int     fu_ERR_UnknownError   = -101;
const int     fu_ERR_FS_BadPath     = -102;

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
        assert(x == 0); (void) x;
    }
};

struct fu_ONE
{
    fu_INL constexpr operator int() const noexcept {
        return 1;
    }

    fu_INL void operator=(int x) noexcept {
        assert(x == 1); (void) x;
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

/////////////////////////////////////////////

#ifdef _WIN32
    #define fu_LITTLE_ENDIAN (0)
#else
    #define fu_LITTLE_ENDIAN (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#endif
