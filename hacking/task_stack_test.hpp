#include "./task_stack.hpp"
#include <cstdlib>
#include <cstdio>
#include <chrono>         // std::chrono::seconds

struct MyTask: Task
{
    int test_number;

    std::atomic_int slices;
    std::atomic_int worker_mask;
};


//

static std::atomic_int THREAD_ID_COUNTER = 0;
thread_local int THREAD_ID = THREAD_ID_COUNTER.fetch_add(+1);

void MyTask_Run(TaskSlice_Data* slice)
{
    MyTask* task = (MyTask*)slice->a;

    task->worker_mask.fetch_or(1 << THREAD_ID);

    if (!slice->b)
        printf("Task %u done! worker_mask: %u, finished_by: %u\n",
           task->test_number,
           task->worker_mask.load(),
           THREAD_ID);
}

bool MyTask_TrySlice(Task* _task,   TaskSlice_Run*  run,
                                    TaskSlice_Data* data)
{
    MyTask* task = (MyTask*) _task;
    const int  sliceIndex   = 1 + task->slices.fetch_add(-1, std::memory_order_relaxed);
    const bool notDone      = sliceIndex != 0;

    *run    = &MyTask_Run;
    *data   = {};
    data->a = task;
    data->b = (void*)(size_t)sliceIndex;

    return notDone;
}


//

static void TaskStack_Test()
{
    int N = 1024;

    for (int i = 0; i < N; i++)
    {
        auto* task = new MyTask {};

        task->try_slice     = &MyTask_TrySlice;

        task->test_number   = i;
        task->slices        = TaskStack_Worker_Count;

        TaskStack_Push((Task*) task);
    }

    std::this_thread::sleep_for (std::chrono::seconds(1));
}
