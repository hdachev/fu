#include "./arc.h"
#include "../util.h"
#include "../int/next_pow2.h"

static inline size_t fu_POW2MEM_RoundUp(size_t bytes) noexcept
{
    uint32_t rnd = fu::next_pow2(uint32_t(bytes));

    // Node re 0x8: it'll fit in an i32
    //  after we sub the header size.
    if (rnd < bytes || rnd > 0x80000000u)
        std::exit(fu_EXIT_BadAlloc);

    rnd = rnd > fu::ARC_MIN_ALLOC
        ? rnd : fu::ARC_MIN_ALLOC;

    return rnd;
}

static inline char* fu_POW2MEM_ALLOC(size_t& bytes) noexcept
{
    bytes = fu_POW2MEM_RoundUp(bytes);
    return (char*) std::malloc(bytes);
}

static inline void fu_POW2MEM_FREE(char* memory, size_t bytes) noexcept
{
    bytes = fu::next_pow2(uint32_t(bytes));

    #ifndef NDEBUG
    {
        // Poisoning.
        uintptr_t* POLLUTE      = (uintptr_t*) memory;
        uintptr_t* POLLUTE_END  = (uintptr_t*)(memory + bytes);

        while (POLLUTE < POLLUTE_END)
        {
            *POLLUTE = ~(uintptr_t) POLLUTE;
            POLLUTE++;
        }
    }
    #endif

    std::free((void*)memory);
}


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


//

#if fu_ARC__DETECT_MEMORY_LEAKS
static fu_DEBUG_CNTDWN fu_ARC__CDOWN_count  { "ARC  Leak Count" };
static fu_DEBUG_CNTDWN fu_ARC__CDOWN_bytes  { "ARC  Leak Bytes" };

static fu_DEBUG_CNTDWN fu_UNIQ__CDOWN_count { "UNIQ Leak Count" };
static fu_DEBUG_CNTDWN fu_UNIQ__CDOWN_bytes { "UNIQ Leak Bytes" };
#endif

#if fu_ARC__PROFILE_MEMORY
static fu_DEBUG_COUNTER fu_ARC__STAT_count  { "ARC  Total Count" };
static fu_DEBUG_COUNTER fu_ARC__STAT_bytes  { "ARC  Total Bytes" };

static fu_DEBUG_COUNTER fu_UNIQ__STAT_count { "UNIQ Total Count" };
static fu_DEBUG_COUNTER fu_UNIQ__STAT_bytes { "UNIQ Total Bytes" };

int fu_ARC::ALLOC_STAT_COUNT() { return fu_ARC__STAT_count.m_cnt; }
int fu_ARC::ALLOC_STAT_BYTES() { return fu_ARC__STAT_bytes.m_cnt; }
#else
int fu_ARC::ALLOC_STAT_COUNT() { return 0; }
int fu_ARC::ALLOC_STAT_BYTES() { return 0; }
#endif

extern "C" fu_EXPORT void fu_ARC_DEALLOC(fu_ARC* arc, size_t bytes)
{
    assert((int)bytes <= arc->DEBUG_bytes
               && arc == arc->DEBUG_self);

    #if fu_ARC__DETECT_MEMORY_LEAKS
    {
        fu_ARC__CDOWN_count.m_cnt -= 1;
        fu_ARC__CDOWN_bytes.m_cnt -= (int)arc->DEBUG_bytes;

        arc->DEBUG_bytes = -11;
        arc->DEBUG_self  = nullptr;
    }
    #endif

    fu_POW2MEM_FREE((char*) arc, bytes);
}

extern "C" fu_EXPORT char* fu_ARC_ALLOC(size_t* inout_bytes)
{
    size_t bytes = *inout_bytes;

    // Round up.
    bytes += sizeof(fu_ARC);
    char* mem = fu_POW2MEM_ALLOC(bytes);
    bytes -= sizeof(fu_ARC);

    // Must fit in i32.
    if (bytes > 0x7fffffffu)
        std::exit(fu_EXIT_BadAlloc);

    fu_ARC* header = (fu_ARC*) mem;
    new (header) fu_ARC();

    #if fu_ARC__DETECT_MEMORY_LEAKS
    {
        header->DEBUG_bytes = (int)bytes;
        header->DEBUG_self  = mem;

        fu_ARC__CDOWN_count.m_cnt += 1;
        fu_ARC__CDOWN_bytes.m_cnt += (int)bytes;
    }
    #endif

    #if fu_ARC__PROFILE_MEMORY
    {
        fu_ARC__STAT_count.m_cnt += 1;
        fu_ARC__STAT_bytes.m_cnt += (int)bytes;
    }
    #endif

    *inout_bytes = bytes;
    return mem + sizeof(fu_ARC);
}


// Same as above but without the 16 byte padding
//  and without the reference counting, non-copiers rejoice.

extern "C" fu_EXPORT void fu_UNIQ_DEALLOC(void* mem, size_t bytes)
{
    #if fu_ARC__DETECT_MEMORY_LEAKS
    {
        fu_UNIQ__CDOWN_count.m_cnt -= 1;
        fu_UNIQ__CDOWN_bytes.m_cnt -= (int)fu_POW2MEM_RoundUp(bytes);
    }
    #endif

    fu_POW2MEM_FREE((char*) mem, bytes);
}

extern "C" fu_EXPORT char* fu_UNIQ_ALLOC(size_t* inout_bytes)
{
    size_t bytes = *inout_bytes;

    // Round up.
    char* mem = fu_POW2MEM_ALLOC(bytes);

    // Must fit in i32.
    if (bytes > 0x7fffffffu)
        std::exit(fu_EXIT_BadAlloc);

    #if fu_ARC__DETECT_MEMORY_LEAKS
    {
        fu_UNIQ__CDOWN_count.m_cnt += 1;
        fu_UNIQ__CDOWN_bytes.m_cnt += (int)bytes;
    }
    #endif

    #if fu_ARC__PROFILE_MEMORY
    {
        fu_UNIQ__STAT_count.m_cnt += 1;
        fu_UNIQ__STAT_bytes.m_cnt += (int)bytes;
    }
    #endif

    *inout_bytes = bytes;
    return mem;
}
