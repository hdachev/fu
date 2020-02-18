#pragma once

#include "mem/alloc.h"


//

#if fu_RETAIL
#define fu_ARC__DETECT_MEMORY_LEAKS 0
#define fu_ARC__PROFILE_MEMORY 0

#else
#define fu_ARC__DETECT_MEMORY_LEAKS 1

    #ifndef NDEBUG
    #define fu_ARC__PROFILE_MEMORY 1
    #else
    #define fu_ARC__PROFILE_MEMORY 0
    #endif

#endif


//

#if fu_ARC__DETECT_MEMORY_LEAKS
#include <stdio.h>

struct fu_DEBUG_CNTDWN
{
    std::atomic_int m_cnt;

    const char* topic;
    fu_DEBUG_CNTDWN(const char* topic)
        : topic(topic) {}

    ~fu_DEBUG_CNTDWN()
    {
        if (m_cnt == 0)
            return;

        printf("\n\x1B[31m  FATAL:\n    Debug Countdown != 0:\n      topic: %s\n      m_cnt: %i\x1B[0m\n\n", topic, (int)m_cnt);
        std::abort();
    }
};

#endif

#if fu_ARC__PROFILE_MEMORY

struct fu_DEBUG_COUNTER
{
    std::atomic_int m_cnt;

    const char* topic;
    fu_DEBUG_COUNTER(const char* topic)
        : topic(topic) {}

    ~fu_DEBUG_COUNTER()
    {
        printf("\x1B[36m  STAT: %s\tm_cnt: %i\x1B[0m\n", topic, (int)m_cnt);
    }
};

#endif


// Putting the nasty shit here.

struct alignas(16) fu_ARC
{
    std::atomic_int m_arc;

    #if fu_ARC__DETECT_MEMORY_LEAKS
    int   DEBUG_bytes;
    void* DEBUG_self; // overwrite detector

    inline static fu_DEBUG_CNTDWN CDOWN_count { "Leaked Alloc Count" };
    inline static fu_DEBUG_CNTDWN CDOWN_bytes { "Leaked Alloc Bytes" };
    #endif

    #if fu_ARC__PROFILE_MEMORY
    inline static fu_DEBUG_COUNTER STAT_count { "Total Alloc Count" };
    inline static fu_DEBUG_COUNTER STAT_bytes { "Total Alloc Bytes" };

    inline static int ALLOC_STAT_COUNT() { return STAT_count.m_cnt; }
    inline static int ALLOC_STAT_BYTES() { return STAT_bytes.m_cnt; }
    #else
    inline static int ALLOC_STAT_COUNT() { return 0; }
    inline static int ALLOC_STAT_BYTES() { return 0; }
    #endif

    fu_NEVER_INLINE void dealloc(size_t bytes)
    {
        assert((int)bytes <= DEBUG_bytes
                  && this == DEBUG_self);

        #if fu_ARC__DETECT_MEMORY_LEAKS
        {
            CDOWN_count.m_cnt -= 1;
            CDOWN_bytes.m_cnt -= (int)DEBUG_bytes;

            DEBUG_bytes = -11;
            DEBUG_self  = nullptr;
        }
        #endif

        #ifndef NDEBUG
        {
            char* start = ((char*)this) + sizeof(fu_ARC);
            char* end   = start + bytes;
            for (char* i = start; i < end; i++)
                *i = (char)(long long)i;
        }
        #endif

        fu::pow2mem_free((char*) this, bytes);
    }

    fu_NEVER_INLINE static char* alloc(size_t& inout_bytes)
    {
        size_t bytes = inout_bytes;

        // Round up.
        bytes += sizeof(fu_ARC);
        char* mem = fu::pow2mem_alloc(bytes);
        bytes -= sizeof(fu_ARC);

        // Must fit in i32.
        if (inout_bytes > 0x7fffffffu)
            std::exit(fu_EXIT_BadAlloc);

        fu_ARC* header = (fu_ARC*) mem;
        new (header) fu_ARC();

        #if fu_ARC__DETECT_MEMORY_LEAKS
        {
            header->DEBUG_bytes = (int)bytes;
            header->DEBUG_self  = mem;

            CDOWN_count.m_cnt += 1;
            CDOWN_bytes.m_cnt += (int)bytes;
        }
        #endif

        #if fu_ARC__PROFILE_MEMORY
        STAT_count.m_cnt++;
        STAT_bytes.m_cnt += (int)bytes;
        #endif

        inout_bytes = bytes;
        return mem + sizeof(fu_ARC);
    }

    template <typename T>
    static void alloc(T*& out_ptr, int& inout_cnt)
    {
        assert(inout_cnt > 0);

        int cnt = inout_cnt;
            cnt = cnt > 1
                ? cnt : 1;

        size_t bytes    = cnt * sizeof(T);
        out_ptr         = (T*)  alloc(bytes);
        inout_cnt       = (int) bytes / sizeof(T);
    }

    fu_INL void incr() noexcept {
        m_arc.fetch_add(
            +1, std::memory_order_relaxed );
    }

    fu_INL bool decr() noexcept {
        int prev = m_arc.fetch_add(
            -1, std::memory_order_acq_rel );

        assert(prev >= 0);
        return 0 == prev;
    }

    fu_INL bool unique() const noexcept {
        return 0 == m_arc.load(
            std::memory_order_relaxed );
    }
};


//

static_assert(sizeof(int)    == 4);
static_assert(sizeof(fu_ARC) == 16);
static_assert(sizeof(fu_ARC) < fu::ARC_MIN_ALLOC);
