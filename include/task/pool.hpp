#pragma once

#include <lockfree/stack.hpp>

#include <thread>

#if __cplusplus > 201703L
#define use_cpp20_ATOMIC_FLAG_WAIT
#endif

#ifndef use_cpp20_ATOMIC_FLAG_WAIT
#include <mutex>
#include <condition_variable>
#endif

namespace task {


    // The task struct has two members -
    //
    //  - a pointer to the next task,
    //  - and a fnptr to how this task is supposed to run.

    struct Task;
    typedef void (*Task_Run)(Task* t);

    struct Task
    {
        Task* next_task;
        void (*run)(Task* task);
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

    void TaskStack_Push(Task* first, Task* last)
    {
        Tasks.stack.push((char*) first, (char*) last);
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

    bool TaskStack_TryWork()
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

    size_t WorkerSet_Create()
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
