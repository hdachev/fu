#pragma once

#include <task/pool.hpp>

namespace task {


struct PendingBatchCount
{
    std::atomic_int                 pending;

    #ifndef use_cpp20_ATOMIC_FLAG_WAIT
        char mutex_ANTISHARE[64 - sizeof(std::atomic_int)]  {};

        std::mutex                  mutex                   {};
        std::condition_variable     cv                      {};
    #endif

    PendingBatchCount(size_t batches)
        : pending { (int) batches }
    {}
};

void PBC_Decrement(PendingBatchCount& pbc)
{
    if (pbc.pending.fetch_add(-1, std::memory_order_release) == 1)
    {
        #ifndef use_cpp20_ATOMIC_FLAG_WAIT
            pbc.cv.notify_one();
        #else
            pbc.pending.notify_one();
        #endif
    }
}

void PBC_Wait(PendingBatchCount& pbc)
{
    while (auto expect = pbc.pending.load(std::memory_order_acquire))
    {
        if (!TaskStack_TryWork())
        {
            #ifndef use_cpp20_ATOMIC_FLAG_WAIT

                ///////////////////
                // THIS IS A BUG //
                (void) expect; ////

                std::unique_lock<std::mutex> lock(pbc.mutex);
                pbc.cv.wait(lock);
            #else
                pbc.pending.wait(expect, std::memory_order_acquire);
            #endif
        }
    }
}


} // namespace
