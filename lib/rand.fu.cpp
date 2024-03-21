#include <atomic>
#include <cstdint>
#include <stdint.h>
#include <sys/time.h>

static uint64_t rand_u64_seed()
{
    struct timeval tv;
    gettimeofday(&tv, nullptr);

    uint64_t next = 1
        |  uint64_t(tv.tv_usec)
        | (uint64_t(tv.tv_sec) << 32);

    for (int i = 0; i < 16; i++)
    {
        next ^= next >> 12;
        next ^= next << 25;
        next ^= next >> 27;
    }

    return next;
}

static std::atomic_uint64_t rand_u64_state { rand_u64_seed() };

#ifndef fu_NO_fdefs

uint64_t next_u64_qB1H()
{
    uint64_t next {};
    auto prev = rand_u64_state.load(std::memory_order_relaxed);

    for (;;)
    {
        next = prev;

        next ^= next >> 12;
        next ^= next << 25;
        next ^= next >> 27;

        if (rand_u64_state.compare_exchange_weak(
                prev, next,
                std::memory_order_relaxed,
                std::memory_order_relaxed))
        {
            break;
        }
    };
    return next * 0x2545f4914f6cdd1dull;
}

#endif
