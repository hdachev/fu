#pragma once

#include <lockfree/stack.hpp>

#include <thread>
#include <cstdio>


#if __cplusplus > 201703L
#define use_cpp20_ATOMIC_FLAG_WAIT
#endif

#ifndef use_cpp20_ATOMIC_FLAG_WAIT
#include <mutex>
#include <condition_variable>
#endif

namespace
{


    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////

    struct Task;
    typedef void (*Task_Run)(Task* t);

    struct Task
    {
        // Padding for the next-task thing.
        void* LOCKFREE_STACK_next;

        /////////////
        Task_Run run;
        /////////////
    };

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

    inline void TaskStack_Notify()
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

    void TaskStack_Push(Task* task)
    {
        Tasks.stack.push((char*) task);
        TaskStack_Notify();
    }

    void TaskStack_Worker_Loop()
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

    #undef Tasks



    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////

    i32 WorkerSet_Create()
    {
        // Number of workers = number of cores,
        //  + main thread.
        //
        i32 count = std::thread::hardware_concurrency();
            count = count > 1 ? count : 1;

        for (i32 i = 0; i < count; i++)
            std::thread { TaskStack_Worker_Loop }
                .detach();

        printf("Detached %u worker threads.\n", count);

        return count;
    }

    static const i32 TaskStack_Worker_Count = WorkerSet_Create();
}
