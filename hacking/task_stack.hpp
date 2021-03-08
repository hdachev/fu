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
    struct TaskSlice_Data;

    typedef void (*TaskSlice_Run)(TaskSlice_Data* ts);
    typedef bool (*Task_TrySlice)(Task* t, TaskSlice_Run*  run,
                                           TaskSlice_Data* data);
    struct Task
    {
        // Padding for the next-task thing.
        void* LOCKFREE_STACK_next;

        ////////////////////////
        Task_TrySlice try_slice;
        ////////////////////////
    };

    struct TaskSlice_Data { void* a; void* b; void* c; void* d; };

    struct TaskStack
    {
        lockfree::stack</* default align of 8 */> stack;

        #ifndef use_cpp20_ATOMIC_FLAG_WAIT
            std::mutex mutex;
            std::condition_variable cv;
        #else
            std::atomic_flag wake_up;
        #endif
    };

    static TaskStack Tasks {};




    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////

    void TaskStack_Push(Task* task)
    {
        Tasks.stack.push((char*) task);

        // Notifications are best effort,
        //  we totally can fail to wake up a worker.
        //
        #ifndef use_cpp20_ATOMIC_FLAG_WAIT
            Tasks.cv.notify_one();
        #else
            if (Tasks.wake_up.test_and_set(std::memory_order_relaxed) == false)
                Tasks.wake_up.notify_one();
        #endif
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
                    // Clearing the flag after sleeping:
                    //  - we'll make one more attempt to find work;
                    //  - helps someone else wake up if we block;
                    //  - when all workers wake up this will stay set.
                    //
                    Tasks.wake_up.wait(false, std::memory_order_acquire);
                    Tasks.wake_up.clear(std::memory_order_release);
                #endif

                notify_another = true;
                continue;
            }

            TaskSlice_Run  run  = nullptr;
            TaskSlice_Data data = {};

            bool can_be_sliced_further = task->try_slice(task, &run, &data);
            if (!run)
                continue;

            // We'll put the task back on the stack
            //  only if this isn't the final slice.
            //
            if (can_be_sliced_further)
                Tasks.stack.push((char*) task);

            // Notify another worker if we just found work.
            if (notify_another)
            {
                notify_another = false;

                #ifndef use_cpp20_ATOMIC_FLAG_WAIT
                    Tasks.cv.notify_one();
                #else
                    Tasks.wake_up.notify_one();
                #endif
            }

            // Finally, do the work.
            run(&data);
        }
    }



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
