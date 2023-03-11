#pragma once

#include <par/parfor.hpp>

#ifdef __APPLE__
#define use_PTHREAD
#endif


// The task stack -

#include <lockfree/stack.hpp>


// The worker pool -

#include <thread>

#ifdef use_PTHREAD
#include <pthread.h>
#include <stdio.h>
#endif


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

    struct alignas(128) PBC_MCV
    {
        std::mutex mutex;
        std::condition_variable cv;
    };

    struct alignas(128) TaskStack
    {
        lockfree::stack< 3/* = alignof 8*/ > stack;

        #ifndef use_cpp20_ATOMIC_FLAG_WAIT

        PBC_MCV stack_MCV;

        #define PBC_MCV_len 99
        PBC_MCV PBC_MCV_array[PBC_MCV_len];

        #endif
    };

    struct alignas(TaskStack) TaskStack_NoDtor
    {
        char buf[sizeof(TaskStack)];
        TaskStack_NoDtor() { new (buf) TaskStack(); }
    };

    static TaskStack_NoDtor s_Tasks {};
    #define Tasks (*(TaskStack*)(&s_Tasks))


    //

    #ifndef use_cpp20_ATOMIC_FLAG_WAIT

    static_assert(  sizeof(PBC_MCV)   >= 128, "PBC_MCV size < 128");
    static_assert( alignof(PBC_MCV)   >= 128, "PBC_MCV alignment < 128");
    static_assert( alignof(TaskStack) >= 128, "TaskStack alignment < 128");

    static_assert(
        sizeof(TaskStack) == 128 + sizeof(PBC_MCV) * (PBC_MCV_len + 1),
        "TaskStack: something doesn't align right.");

    static inline PBC_MCV& PBC_MCV_get(std::atomic_int& pending)
    {
        return Tasks.PBC_MCV_array[((uintptr_t) &pending) % PBC_MCV_len];
    }

    #undef PBC_MCV_len

    #endif




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
            Tasks.stack_MCV.cv.notify_one();
        #else
            Tasks.stack.head.notify_one();
        #endif
    }

    static inline void TaskStack_Push(Task* first, Task* last)
    {
        Tasks.stack.push((char*) first, (char*) last);
    }

    #ifdef use_PTHREAD
    static void* TaskStack_Worker_Loop(void*)
    #else
    static void TaskStack_Worker_Loop()
    #endif
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
                    std::unique_lock<std::mutex> lock(Tasks.stack_MCV.mutex);
                    Tasks.stack_MCV.cv.wait(lock);
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

        return nullptr;
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

    #ifdef fu_NUM_WORKER_THREADS

        size_t workers = fu_NUM_WORKER_THREADS;

    #else

        size_t workers = std::thread::hardware_concurrency();

        // TODO getenv("fu_NUM_WORKER_THREADS") here
        // TODO all of this in a cpp, not here

        workers = workers >= 64 ? workers - 4   // leave three cores to the OS, ~ 5% breathing room
                : workers >= 32 ? workers - 3   // leave two cores to the OS,   ~ 6% breathing room
                : workers >= 16 ? workers - 2   // leave one core to the OS,    ~ 6% breathing room
                : workers >=  8 ? workers - 1   // there's also the main thread here, so threads=cores
                : workers >=  1 ? workers       // oversubscribe 1 core
                : 1;

    #endif

        if (!workers)
            return 0;

    #ifdef use_PTHREAD

        pthread_attr_t tattr;

        int error = pthread_attr_init(&tattr);
        if (error)
        {
            puts("  ERROR pthread_attr_init failed.");
            return 0;
        }

        // Ignore error here.
        error = pthread_attr_setdetachstate(&tattr, PTHREAD_CREATE_DETACHED);
        if (error)
            puts("  ERROR pthread_attr_setdetachstate failed.");

        size_t stacksize = 8 * 1024 * 1024;
               stacksize = stacksize > PTHREAD_STACK_MIN
                         ? stacksize : PTHREAD_STACK_MIN;

        // Ignore error here.
        error = pthread_attr_setstacksize(&tattr, stacksize);
        if (error)
            puts("  ERROR pthread_attr_setstacksize failed.");

        for (size_t i = workers; i --> 0; )
        {
            pthread_t thread;
            error = pthread_create(&thread, &tattr, TaskStack_Worker_Loop, nullptr);
            if (error)
            {
                puts("  ERROR pthread_create failed.");
                workers--;
            }
        }

        error = pthread_attr_destroy(&tattr);
        if (error)
            puts("  ERROR pthread_attr_destroy failed.");

    #else

        // Number of threads = workers + 1 main thread.
        //
        // printf("Spawning %i worker threads, for a total of %i threads ...\n",
        //        int(workers), int(workers + 1));
        //
        for (size_t i = workers; i --> 0; )
            std::thread { TaskStack_Worker_Loop }
                .detach();

    #endif

        return workers;
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
        std::atomic_int pending;

        PendingBatchCount(size_t batches)
            : pending { (int) batches }
        {}
    };


    /*export*/ void PBC_Decrement(PendingBatchCount& pbc)
    {
        if (pbc.pending.fetch_add(-1, std::memory_order_release) == 1)
        {
            #ifndef use_cpp20_ATOMIC_FLAG_WAIT

                auto& mcv = PBC_MCV_get(pbc.pending);

                // Without this the following can happen:
                //
                //  (1) Master checks counter, sees it has to wait.
                //  (2) Last worker decrements counter.
                //  (3) Last worker notifies.
                //  (4) Master waits, will never wake up.
                {
                    // We don't need to hold the lock during the notify,
                    //  we just need to make sure the decr+notify in PBC_Wait
                    //   can't squeeze in between the check and the wait in PBC_Wait.
                    //
                    std::unique_lock<std::mutex> lock(mcv.mutex);
                }

                // Can't be notify_one -
                //  we're reusing a fixed size array of PBC_MCV mutex/cv pairs,
                //   so it's possible for two unrelated threads to be waiting on the same cv.
                //
                mcv.cv.notify_all();

            #else

                // Previously -
                // pbc.pending.notify_one();

                // See this here -
                // https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2616r0.html
                std::atomic_notify_one(&pbc.pending);

                // The original mutex/cv impl had this problem,
                //  where you'd occassionally try to notify_one on a cv/mutex that were just destroyed -
                //
                //  (1) worker would decrement the wait-count here,
                //  (2) the master thread (not waiting) would arrive at the wait-count check and see a zero-wait-count,
                //  (3) the master thread would destroy the cv/mutex pair,
                //  (4) worker would try to notify_one on the destroyed ct/mutex.

                // The problem wasn't observable with atomic-waits,
                //  probably because of how they implement them with a global fixed-length array of mutexes,
                //   where they only use the address of the atomic as an integer in notify_one.

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

                    auto& mcv = PBC_MCV_get(pbc.pending);

                    std::unique_lock<std::mutex> lock(mcv.mutex);

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

                    mcv.cv.wait(lock);
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

            //*
            // Originally,
            //  but clang's thread sanitizer complains:
            //
            t.next_task = &t + 1;
            /*/
            // This silences the error but looks pointless,
            //  haven't looked at resulting code [might be the same].
            //
            ((std::atomic<Task*>&) t.next_task)
                .store(&t + 1, std::memory_order_relaxed);
            //*/
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

