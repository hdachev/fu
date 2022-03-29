#pragma once

#include <task/pool.hpp>

namespace task {


struct PendingBatchCounter
{
    std::atomic_int                 m_pending;

    #ifndef use_cpp20_ATOMIC_FLAG_WAIT
        char mutex_ANTISHARE[64 - sizeof(std::atomic_int)];

        std::mutex                  m_mutex;
        std::condition_variable     m_cv;
    #endif


    //

    inline void init(size_t num_batches)
    {
        m_pending.store((int) num_batches, std::memory_order_relaxed);
    }

    inline void decrement()
    {
        if (m_pending.fetch_add(-1, std::memory_order_release) == 1)
        {
            #ifndef use_cpp20_ATOMIC_FLAG_WAIT
                m_cv.notify_one();
            #else
                m_pending.notify_one();
            #endif
        }
    }

    void wait()
    {
        while (auto expect = m_pending.load(std::memory_order_acquire))
        {
            if (!TaskStack_TryWork())
            {
                #ifndef use_cpp20_ATOMIC_FLAG_WAIT

                    ///////////////////
                    // THIS IS A BUG //
                    (void) expect; ////

                    std::unique_lock<std::mutex> lock(m_mutex);
                    m_cv.wait(lock);
                #else
                    m_pending.wait(expect, std::memory_order_acquire);
                #endif
            }
        }
    }
};


} // namespace
