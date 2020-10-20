#pragma once

#ifdef _MSC_VER
    #define fu_INL __forceinline
#else
    #define fu_INL inline __attribute__((__always_inline__))
#endif

#ifdef _MSC_VER
    #define fu_NEVER_INLINE __declspec(noinline)
#else
    #define fu_NEVER_INLINE __attribute__((noinline))
#endif
