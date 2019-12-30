#pragma once

#include "../util.h"

// #define fu_TEST_FREE_LIST

#ifdef fu_TEST_FREE_LIST
#include "lf_free_list.h"
#endif

namespace fu {

////////////////////////////

#ifdef fu_TEST_FREE_LIST
LF_FreeList g_lffl_MIN_ALLOC;
#endif

inline char* pow2mem_alloc(size_t& inout_bytes) noexcept
{
    size_t bytes = inout_bytes;
    {
        uint32_t rnd = fu_NEXT_POW2(uint32_t(bytes));

        // Node re 0x8: it'll fit in an i32
        //  after we sub the header size.
        if (rnd < bytes || rnd > 0x80000000u)
            std::exit(fu_EXIT_BadAlloc);

        rnd = rnd > ARC_MIN_ALLOC
            ? rnd : ARC_MIN_ALLOC;

        bytes = rnd;
    }

    inout_bytes = bytes;

    ////////////////////////
    #ifdef fu_TEST_FREE_LIST

    if (bytes == ARC_MIN_ALLOC)
    {
        char* chunk = g_lffl_MIN_ALLOC.try_alloc();
        if (chunk)
            return chunk;
    }

    #endif
    ////////////////////////

    return (char*) std::malloc(bytes);
}

////////////////////////////

inline void pow2mem_free(char* memory, size_t bytes)
{
    bytes = fu_NEXT_POW2(uint32_t(bytes));

    ////////////////////////
    #ifdef fu_TEST_FREE_LIST

    if (bytes == ARC_MIN_ALLOC)
        return g_lffl_MIN_ALLOC.dealloc(memory);

    #endif
    ////////////////////////

    std::free((void*)memory);
}

////////////////////////////

} // namespace
