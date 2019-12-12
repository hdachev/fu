#pragma once

#include "mem/alloc.h"


//

#ifndef NDEBUG

struct fu_DEBUG_CNTDWN {
    std::atomic_int m_cnt;

    const char* topic;
    fu_DEBUG_CNTDWN(const char* topic) : topic(topic) {}

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

    inline static fu_DEBUG_CNTDWN DEBUG_count { "DEBUG_count" };
    inline static fu_DEBUG_CNTDWN DEBUG_total { "DEBUG_total" };
    #endif

    fu_NEVER_INLINE void dealloc(size_t bytes)
    {
        assert((int)bytes <= DEBUG_bytes
                  && this == DEBUG_self);

        #ifndef NDEBUG
        {
            DEBUG_total.m_cnt -= 1;
            DEBUG_total.m_cnt -= (int)DEBUG_bytes;

            DEBUG_bytes = -11;
            DEBUG_self  = nullptr;

            char* start = ((char*)this) + sizeof(fu_ARC);
            char* end   = start + bytes;
            for (char* i = start; i < end; i++)
                *i = 0xfe;
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

        #ifndef NDEBUG
        {
            header->DEBUG_bytes = (int)bytes;
            header->DEBUG_self  = mem;

            DEBUG_total.m_cnt += 1;
            DEBUG_total.m_cnt += (int)bytes;
        }
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
