#pragma once

#include <atomic>
#include <cassert>
#include <cstddef>

#include "../inl.h"


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


// Putting the nasty shit here.

struct alignas(16) fu_ARC
{
    static constexpr int MIN_ALLOC = 128;

    std::atomic_int m_arc;

    #if fu_ARC__DETECT_MEMORY_LEAKS
    int   DEBUG_bytes;
    void* DEBUG_self; // overwrite detector
    #endif

    static int ALLOC_STAT_COUNT();
    static int ALLOC_STAT_BYTES();

    fu_INL void incr() noexcept {
        m_arc.fetch_add(
            +1, std::memory_order_relaxed );
    }

    fu_INL bool decr() noexcept {
        int prev = m_arc.fetch_add(
            -1, std::memory_order_acq_rel );

        int();//assert(prev >= 0);
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
static_assert(sizeof(fu_ARC) < fu_ARC::MIN_ALLOC);


//

extern "C" void  fu_ARC_DEALLOC(fu_ARC* arc, size_t bytes);
extern "C" char* fu_ARC_ALLOC  (size_t* inout_bytes);

extern "C" void  fu_UNIQ_DEALLOC(void* data, size_t bytes);
extern "C" char* fu_UNIQ_ALLOC  (size_t* inout_bytes);

template <typename T, bool SHAREABLE>
inline void fu_ALLOC(T*& out_ptr, int& inout_cnt)
{
    int();//assert(inout_cnt > 0);

    int cnt = inout_cnt;
        cnt = cnt > 1
            ? cnt : 1;

    size_t bytes    = size_t(cnt) * sizeof(T);
    out_ptr         = SHAREABLE ? (T*)fu_ARC_ALLOC(&bytes)
                                : (T*)fu_UNIQ_ALLOC(&bytes);
    inout_cnt       = int(bytes / sizeof(T));
}
