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

    int WorkerSet_Create()
    {
        // Number of workers = number of cores,
        //  + main thread.
        //
        int count = std::thread::hardware_concurrency();
            count = count > 1 ? count : 1;

        for (int i = 0; i < count; i++)
            std::thread { TaskStack_Worker_Loop }
                .detach();

        return count;
    }

    static const int TaskStack_Worker_Count = WorkerSet_Create();



    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////

    template <typename Fn>
    void parallel_for(size_t size, size_t per_batch, const Fn& fn)
    {
        /////////////////////////////

        struct parfor_Control
        {
            const Fn& fn;

            std::atomic_int pending;

            #ifndef use_cpp20_ATOMIC_FLAG_WAIT
                char mutex_ANTISHARE[64 - sizeof(std::atomic_int)];

                std::mutex mutex;
                std::condition_variable cv;
            #endif
        };

        struct parfor_Task: Task
        {
            parfor_Control* control;
            size_t start, end;
        };

        const auto parfor_run = [](Task* t)
        {
            parfor_Task* task = (parfor_Task*) t;
            task->control->fn(task->start, task->end);

            // Report done.
            if (task->control->pending.fetch_add(
                -1, std::memory_order_release) == 1)
            {
                #ifndef use_cpp20_ATOMIC_FLAG_WAIT
                    task->control->cv.notify_one();
                #else
                    task->control->pending.notify_one();
                #endif
            }
        };

        /////////////////////////////

        // There may be no point in suspending at all.
        if (size < per_batch * 2) {
            fn(0, size);
            return;
        }

        size_t batches = size / per_batch;
        if (batches > TaskStack_Worker_Count)
            batches = TaskStack_Worker_Count;

        per_batch = size / batches;

        parfor_Control* control = (parfor_Control*) alloca(
            sizeof(parfor_Control)  +
            sizeof(parfor_Task)     * batches);

        //
        parfor_Task* tasks = (parfor_Task*) &control[1];
        new (control) parfor_Control { fn, batches };

        for (int i = 0; i < batches; i++) {
            auto& t = tasks[i];

            t.run                   = parfor_run;
            t.control               = control;

            t.start = size_t(i) * per_batch;
            t.end   = i < batches - 1
                ? t.start + per_batch
                : size;

            TaskStack_Push(&t);
        }

        TaskStack_Notify();

        // Now for the stupid part -
        //  This is pretty horrible, because we might end up sleeping and not working,
        //   and waiting-by-doing-work can lock things up if we pop a big task.

        // Go!
        int pending;
        while ((pending = control->pending.load(std::memory_order_acquire)))
        {
            // In the absence of fibers this is the best we can do.
            if (!TaskStack_TryWork())
            {
                #ifndef use_cpp20_ATOMIC_FLAG_WAIT
                    std::unique_lock<std::mutex> lock(control->mutex);
                    control->cv.wait(lock);
                #else
                    control->pending.wait(pending, std::memory_order_acquire);
                #endif
            }
        }
    }
}
