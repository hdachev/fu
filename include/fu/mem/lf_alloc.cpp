#include <cstdint>
#include <atomic>
#include <cassert>
#include <stdlib.h>

/*  TODO study jemalloc's mmap usage here:
        https://github.com/jemalloc/jemalloc/
            mmap stuff is in pages.c
*/

namespace
{
    typedef uint32_t u32;


    //

    template <
        u32 log2_MinAlloc  =  7 /* 128 bytes */,
        u32 log2_MaxAlloc  = 31 /*   2 gb    */,
        u32 log2_GrowAlloc = 26 /*  64 mb    */>

    struct LockFree_Pow2Heap
    {
        static constexpr u32 MAX_CACHELINE_bytes = 128;
        static constexpr u32          PAGE_bytes = 4096;

        static constexpr u32 NUM_BUCKETS = log2_MaxAlloc - log2_MinAlloc + 1u;

        static constexpr u32 MIN_ALLOC = 1u << log2_MinAlloc;
        static constexpr u32 MAX_ALLOC = 1u << log2_MaxAlloc;

        static constexpr u32 MIN_LOG2 = log2_MinAlloc;
        static constexpr u32 MAX_LOG2 = log2_MaxAlloc;


        //

        struct alignas(MAX_CACHELINE_bytes) Bucket
        {
            lockfree::stack<4 /*alignas(16)*/> m_stack;
        };

        Bucket m_buckets[NUM_BUCKETS];


        //

        inline char* try_alloc(const u32 log2_bytes)
        {
            // Fast path.
            u32 start = log2_bytes - log2_MinAlloc;
            char* mem = m_buckets[start].m_stack.try_pop();
            if (mem)
                return mem;

            // Start falling back.
            return fallback(start);
        }

        inline void free(char* mem, const u32 log2_bytes)
        {
            u32 start = log2_bytes - log2_MinAlloc;
            m_buckets[start].m_stack.push(mem);
        }


        //

        char* fallback(const u32 start)
        {
            // Try fragmenting what we currently have,
            //  without resorting to breaking down much bigger chunks.
            {
                u32 end = start + 3; // no more than 8x the size

                const u32   i_grow = log2_GrowAlloc - log2_MinAlloc;
                end = end > i_grow
                    ? end : i_grow;

                end = end < NUM_BUCKETS
                    ? end : NUM_BUCKETS;

                char* mem = try_fallback_split(start + 1, end);
                if (mem)
                    return mem;
            }

            // OS-allocate.
            return fallback_allocate(start);
        }

        char* fallback_allocate(const u32 start)
        {
            u32 log2_bytes = start + log2_MinAlloc;

            log2_bytes = log2_bytes > log2_GrowAlloc
                       ? log2_bytes : log2_GrowAlloc;

            // Allocate.
            u32 bytes = 1u << log2_bytes;
            char* mem = (char*)std::malloc(bytes);

            // In case we're out of memory,
            //  we might try to free up some of our bigger slots.
            if (!mem)
                return mem;

            // Return if exact match (>= growsize).
            u32 index = log2_bytes - log2_MinAlloc;
            if (index == start)
                return mem;

            // Else store on the heap and try again.
            m_buckets[index].m_stack.push(mem);
            return try_alloc(start);
        }


        //

        char* try_fallback_split(const u32 i, const u32 end)
        {
            if (i >= end)
                return nullptr;

            char* mem = m_buckets[i].m_stack.try_pop();
            if (!mem)
                mem = try_fallback_split(i + 1, end);

            if (mem)
            {
                // Chop off and link up the right half of the alloc.
                u32 log2 = i + log2_MinAlloc;
                u32 size = 1u << log2;
                u32 half = (size >> 1);

                char* right = mem + half;
                m_buckets[i - 1].m_stack.push(right);
            }

            return mem;
        }

    };
}


// Diagnostics.

#ifndef NDEBUG
#define SELF_TEST

namespace
{
    struct ZeroOnExit
    {
        std::atomic_int m_cnt;
        const char* topic;
        ZeroOnExit(const char* topic) : topic(topic) {}

        ~ZeroOnExit() {
            if (m_cnt == 0) return;
            printf("\n\x1B[31m  FATAL:\n    Debug Countdown != 0:\n      topic: %s\n      m_cnt: %i\x1B[0m\n\n", topic, (int)m_cnt);
            std::abort();
        }

        inline void incr(int amount = 1) {
            m_cnt.fetch_add(amount, std::memory_order_relaxed);
        }

        inline void decr(int amount = 1) {
            m_cnt.fetch_sub(amount, std::memory_order_relaxed);
        }
    };

    static ZeroOnExit dbg_OutstandingBytes  ("POW2_Alloc: Outstanding Bytes"      );
    static ZeroOnExit dbg_OutstandingAllocs ("POW2_Alloc: Outstanding Allocations");
}

#endif


// Allocation sizing.

#ifdef _MSC_VER
#include <intrin.h>
#pragma intrinsic(_BitScanReverse)
#endif

namespace
{
    static LockFree_Pow2Heap s_heap;

    static inline u32 next_log2(u32 a) // a must be >= 2
    {
    #ifdef _MSC_VER
        u32 bit;
        _BitScanReverse(&bit, a - 1);
        return bit + 1;
    #else
        return 32 - u32( __builtin_clz(a - 1));
    #endif
    }

    static inline u32 log2_coerce(u32 bytes)
    {
        u32 log2 = next_log2(u32(bytes));
        log2 = log2 > s_heap.MIN_LOG2
             ? log2 : s_heap.MIN_LOG2;

        return log2;
    }
}


// Long story short, we use malloc/free directly for oversized allocations,
//  and otherwise round up to the nearest power of two and hit the lock free heap.

char* POW2_Alloc(size_t* out_bytes)
{
    #ifdef SELF_TEST
    dbg_OutstandingAllocs.incr();
    #endif

    size_t bytes = *out_bytes;

    // malloc if too big.
    if (bytes > s_heap.MAX_ALLOC)
        return (char*)std::malloc(bytes);

    //
    u32 log2_bytes = log2_coerce(u32(bytes));
    *out_bytes = 1u << log2_bytes;

    #ifdef SELF_TEST
    dbg_OutstandingBytes.incr(int(1 << log2_bytes));
    #endif

    return s_heap.try_alloc(log2_bytes);
}

void POW2_Free(char* mem, size_t bytes)
{
    #ifdef SELF_TEST
    dbg_OutstandingAllocs.decr();
    #endif

    // free oversized.
    if (bytes > s_heap.MAX_ALLOC)
        return std::free(mem);

    //
    u32 log2_bytes = log2_coerce(u32(bytes));

    #ifdef SELF_TEST
    dbg_OutstandingBytes.decr(int(1 << log2_bytes));
    #endif

    return s_heap.free(mem, log2_bytes);
}
