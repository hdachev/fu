#pragma once

#include <new>
#include <atomic>
#include <type_traits>
#include <cstdlib>
#include <cstring>
#include <cassert>


// Strong inline directive.

#ifdef _MSC_VER
    #define fu_INLINE __forceinline
#elif defined(__GNUC__)
    #define fu_INLINE inline __attribute__((__always_inline__))
#elif defined(__CLANG__)
    #if __has_attribute(__always_inline__)
        #define fu_INLINE inline __attribute__((__always_inline__))
    #else
        #define fu_INLINE inline
    #endif
#else
    #define fu_INLINE inline
#endif


// Anti-bloat.

#ifdef _MSC_VER
    #define fu_NO_INL __declspec(noinline)
#elif defined(__GNUC__)
    #define fu_NO_INL __attribute__((noinline))
#elif defined(__CLANG__)
    #if __has_attribute(noinline)
        #define fu_NO_INL __attribute__((noinline))
    #else
        #define fu_NO_INL
    #endif
#else
    #define fu_NO_INL
#endif


//

#ifndef NDEBUG

struct fu_DEBUG_CNTDWN
{
    std::atomic_int m_cnt;

    ~fu_DEBUG_CNTDWN() {
        assert(m_cnt == 0);
    }
};

#endif


// Putting the nasty shit here.

struct alignas(16) fu_ARC
{
    std::atomic_int m_arc;

    #ifndef NDEBUG
    int   DEBUG_bytes;
    void* DEBUG_self; // overwrite detector

    inline static fu_DEBUG_CNTDWN DEBUG_total;
    #endif

    fu_NO_INL void dealloc(size_t bytes)
    {
        assert((int)bytes <= DEBUG_bytes
                  && this == DEBUG_self);

        #ifndef NDEBUG
        DEBUG_total.m_cnt -= (int)DEBUG_bytes;

        DEBUG_bytes = -11;
        DEBUG_self  = nullptr;

        char* start = ((char*)this) + sizeof(fu_ARC);
        char* end   = start + bytes;
        for (char* i = start; i < end; i++) *i = 0xfe;
        #endif

        std::free((void*)this);
    }

    fu_NO_INL static char* alloc(size_t& inout_bytes)
    {
        size_t bytes = inout_bytes;

        //////////////////////////////////////////////////
        // Let's try reporting more mem than requested. //
        if (bytes < 128 - sizeof(fu_ARC))
            bytes = 128 - sizeof(fu_ARC);
        // -------------------------------------------- //
        //////////////////////////////////////////////////

        char* mem = (char*)
            std::malloc(bytes
                + sizeof(fu_ARC));

        fu_ARC* header = (fu_ARC*)mem;
        header->m_arc.store(
            0, std::memory_order_relaxed);

        #ifndef NDEBUG
        header->DEBUG_bytes = (int)bytes;
        header->DEBUG_self  = mem;

        DEBUG_total.m_cnt  += (int)bytes;
        #endif

        inout_bytes = bytes;
        return mem + sizeof(fu_ARC);
    }

    template <typename T>
    static void alloc(T*& out_ptr, int& inout_count)
    {
        assert(inout_count > 0);

        int count       = inout_count;
            count       = count < 1 ? 1 : count;

        size_t bytes    = count * sizeof(T);
        out_ptr         = (T*) alloc(bytes);
        inout_count     = bytes / sizeof(T);
    }

    void incr() {
        m_arc.fetch_add(
            +1, std::memory_order_relaxed );
    }

    bool decr() {
        int prev = m_arc.fetch_add(
            -1, std::memory_order_acq_rel );

        assert(prev >= 0);
        return 0 == prev;
    }

    fu_INLINE bool unique() const {
        return 0 == m_arc.load(
            std::memory_order_relaxed );
    }
};

static_assert(sizeof(fu_ARC) == 16);
