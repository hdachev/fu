#pragma once

/////////////////////////////////////////////

#ifdef _MSC_VER
    #define fu_INL __forceinline
#elif defined(__GNUC__)
    #define fu_INL inline __attribute__((__always_inline__))
#elif defined(__CLANG__)
    #if __has_attribute(__always_inline__)
        #define fu_INL inline __attribute__((__always_inline__))
    #else
        #define fu_INL inline
    #endif
#else
    #define fu_INL inline
#endif

/////////////////////////////////////////////

#ifdef _MSC_VER
    #define fu_NEVER_INLINE __declspec(noinline)
#elif defined(__GNUC__)
    #define fu_NEVER_INLINE __attribute__((noinline))
#elif defined(__CLANG__)
    #if __has_attribute(noinline)
        #define fu_NEVER_INLINE __attribute__((noinline))
    #else
        #define fu_NEVER_INLINE
    #endif
#else
    #define fu_NEVER_INLINE
#endif

/////////////////////////////////////////////

struct fu_ZERO
{
    fu_INL constexpr operator int() const {
        return 0;
    }
};

constexpr bool fu_MAYBE_POSITIVE(int)     noexcept const { return true;  };
constexpr bool fu_MAYBE_POSITIVE(fu_ZERO) noexcept const { return false; };

/////////////////////////////////////////////
