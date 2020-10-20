#include "./arc.h"
#include "../util.h"
#include "../int/next_pow2.h"

static inline char* fu_POW2MEM_ALLOC(size_t& inout_bytes) noexcept
{
    size_t bytes = inout_bytes;
    {
        uint32_t rnd = fu::next_pow2(uint32_t(bytes));

        // Node re 0x8: it'll fit in an i32
        //  after we sub the header size.
        if (rnd < bytes || rnd > 0x80000000u)
            std::exit(fu_EXIT_BadAlloc);

        rnd = rnd > fu::ARC_MIN_ALLOC
            ? rnd : fu::ARC_MIN_ALLOC;

        bytes = rnd;
    }

    inout_bytes = bytes;

    return (char*) std::malloc(bytes);
}

static inline void fu_POW2MEM_FREE(char* memory, size_t bytes) noexcept
{
    bytes = fu::next_pow2(uint32_t(bytes));

    std::free((void*)memory);
}


//

extern "C" fu_EXPORT void fu_ARC_DEALLOC(fu_ARC* arc, size_t bytes)
{
    assert((int)bytes <= arc->DEBUG_bytes
               && arc == arc->DEBUG_self);

    #if fu_ARC__DETECT_MEMORY_LEAKS
    {
        fu_ARC::CDOWN_count.m_cnt -= 1;
        fu_ARC::CDOWN_bytes.m_cnt -= (int)arc->DEBUG_bytes;

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

        fu_ARC::CDOWN_count.m_cnt += 1;
        fu_ARC::CDOWN_bytes.m_cnt += (int)bytes;
    }
    #endif

    #if fu_ARC__PROFILE_MEMORY
    fu_ARC::STAT_count.m_cnt++;
    fu_ARC::STAT_bytes.m_cnt += (int)bytes;
    #endif

    *inout_bytes = bytes;
    return mem + sizeof(fu_ARC);
}
