#pragma once

#include <par/parfor.hpp>


// The task stack -

#include <lockfree/stack.hpp>


// The worker pool -

#include <thread>


// Wait & notify -

#if __cplusplus > 201703L
#define use_cpp20_ATOMIC_FLAG_WAIT
#endif

#ifndef use_cpp20_ATOMIC_FLAG_WAIT
#include <mutex>
#include <condition_variable>
#endif


////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////
////////  The task stack.

namespace fu
{

    // The task struct has two members -
    //
    //  - a pointer to the next task,
    //  - and a fnptr to how this task is supposed to run.

    struct alignas(64) TaskStack
    {
        lockfree::stack< 3/* = alignof 8*/ > stack;

        #ifndef use_cpp20_ATOMIC_FLAG_WAIT
            char mutex_ANTISHARE[64 - sizeof(stack)];

            std::mutex mutex;
            std::condition_variable cv;
        #endif
    };

    struct alignas(TaskStack) TaskStack_NoDtor
    {
        char buf[sizeof(TaskStack)];
        TaskStack_NoDtor() { new (buf) TaskStack(); }
    };

    static TaskStack_NoDtor s_Tasks {};
    #define Tasks (*(TaskStack*)(&s_Tasks))




    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////

    static inline void TaskStack_Notify()
    {
        // Notifications are best effort,
        //  we totally can fail to wake up a worker.
        //
        #ifndef use_cpp20_ATOMIC_FLAG_WAIT
            Tasks.cv.notify_one();
        #else
            Tasks.stack.head.notify_one();
        #endif
    }

    static inline void TaskStack_Push(Task* first, Task* last)
    {
        Tasks.stack.push((char*) first, (char*) last);
    }

    static void TaskStack_Worker_Loop()
    {
        bool notify_another = false;

        for (;;)
        {
            Task* task = (Task*) Tasks.stack.try_pop();
            if (!task)
            {
                // Both styles of waiting are unreliable,
                //  we could wake up for no reason or not wake up at all.
                //
                #ifndef use_cpp20_ATOMIC_FLAG_WAIT
                    std::unique_lock<std::mutex> lock(Tasks.mutex);
                    Tasks.cv.wait(lock);
                #else
                    auto head = Task.stack.head.load(std::memory_order_relaxed);
                    if (Task.stack.untag(head) == nullptr)
                        Tasks.stack.head.wait(head, std::memory_order_acquire);
                #endif

                notify_another = true;
                continue;
            }

            // Notify another worker if we just found work.
            if (notify_another)
            {
                notify_another = false;
                TaskStack_Notify();
            }

            // Finally, do the work.
            task->run(task);
        }
    }

    static bool TaskStack_TryWork()
    {
        Task* task = (Task*) Tasks.stack.try_pop();
        if (task)
        {
            task->run(task);
            return true;
        }

        return false;
    }

    #undef Tasks



    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////

    static size_t WorkerSet_Create()
    {
        size_t cores = std::thread::hardware_concurrency();

        // TODO getenv("MAX_THREADS") here
        // TODO all of this in a cpp, not here

        cores   = cores >= 64 ? cores - 4   // leave three cores to the OS, ~ 5% breathing room
                : cores >= 32 ? cores - 3   // leave two cores to the OS,   ~ 6% breathing room
                : cores >= 16 ? cores - 2   // leave one core to the OS,    ~ 6% breathing room
                : cores >=  8 ? cores - 1   // there's also the main thread here, so threads=cores
                : cores >=  1 ? cores       // oversubscribe 1 core
                : 1;

        // Number of workers = cores - 1,
        //                   + main thread.
        //
        for (size_t i = 1; i < cores; i++)
            std::thread { TaskStack_Worker_Loop }
                .detach();

        return cores;
    }

    static const size_t TaskStack_Worker_Count = WorkerSet_Create();
}



////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////
////////  The await thing.

namespace fu
{

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

    /*export*/ void PBC_Decrement(PendingBatchCount& pbc)
    {
        if (pbc.pending.fetch_add(-1, std::memory_order_release) == 1)
        {
            #ifndef use_cpp20_ATOMIC_FLAG_WAIT

                // We don't hit the mutex for every decrement
                //  so without this the following can happen:
                //
                //  THREAD A            THREAD B
                //
                //                      check counter
                //  decrement
                //  notify
                //                      wait
                //
                // This is why PBC_Wait does the final check
                //  inside the mutex, and we also hit the mutex here.
                //
                std::unique_lock<std::mutex> lock(pbc.mutex);
                //
                // We don't need to hold the lock during the notify,
                //  we just need to make sure the decr+notify
                //   can't squeeze in between the check and the wait there.
                //
                lock.unlock();
                //
                // We don't have these problems with the atomic variant.

                pbc.cv.notify_one();
            #else
                pbc.pending.notify_one();
            #endif
        }
    }

    static void PBC_Wait(PendingBatchCount& pbc)
    {
        while (auto expect = pbc.pending.load(std::memory_order_acquire))
        {
            if (!TaskStack_TryWork())
            {
                #ifndef use_cpp20_ATOMIC_FLAG_WAIT

                    std::unique_lock<std::mutex> lock(pbc.mutex);

                    // Repeat the check while holding the mutex.
                    //
                    // See the comment in PBC_Decrement -
                    //  it acquires the mutex after decrementing the counter
                    //   and before the notify, so it can't squeeze in
                    //    between the check and the wait here.
                    //
                    (void) expect;
                    if (!pbc.pending.load(std::memory_order_acquire))
                        return;

                    pbc.cv.wait(lock);
                #else
                    pbc.pending.wait(expect, std::memory_order_acquire);
                #endif
            }
        }
    }


} // namespace



////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////
////////  The type-erased parfor.

namespace fu
{

    /*export*/ void parallel_for(
        size_t size,
        size_t per_batch,
        void (*parfor_run)(Task*),
        PendingBatchCount*& control)
    {
        using namespace fu;


        // TODO add log2(size) instead of the 1 at the end.

        size_t max_batches = TaskStack_Worker_Count + 1;


        // Enforce max_batches.

        size_t batches = size / per_batch;

        batches = batches < max_batches
                ? batches : max_batches;

        batches = batches > 1
                ? batches : 1;

        per_batch = size / batches;


        // Allocate & link up all tasks -
        //  note the last task has the wrong 'end' index -
        //   we don't submit it, we fix it up and run it here.

        parfor_Task* tasks = (parfor_Task*) alloca(
            sizeof(parfor_Task) * batches);

        for (size_t i = 0; i < batches; i++)
        {
            auto& t     = tasks[i];

            t.run       = parfor_run;
            t.control   = &control;

            t.start     =  i      * per_batch;
            t.end       = (i + 1) * per_batch;

            t.next_task = &t + 1;
        }

        auto& last = tasks[batches - 1];
        last.end = size;


        // Skip over the counter, decr & check if possible.

        if (batches == 1)
        {
            last.run(&last); // DUPLICATED //
            return;
        }


        // Control must start with a pbc*.

        PendingBatchCount pbc(batches);
        control = &pbc;


        // Submit everything but the last task.

        TaskStack_Push(tasks, tasks + batches - 2);
        TaskStack_Notify();

        last.run(&last); // DUPLICATED //

        PBC_Wait(pbc);
    }


} // namespace

