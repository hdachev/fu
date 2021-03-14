#include "./task_stack.hpp"
#include <cstdio>

#include <fu/vec.h>

struct MyTask: Task
{
    int test_number;
};

static std::atomic_int THREAD_ID_COUNTER = 0;
thread_local int THREAD_ID = THREAD_ID_COUNTER.fetch_add(+1);

static void TaskStack_Test()
{
    printf("Detached %u worker threads.\n",
        (int)TaskStack_Worker_Count);

    fu_VEC<int> data;
    data.resize(1024 * 1024);

    int* DATA = data.data_mut();

    parallel_for(1024 * 1024, 1024, [&](size_t start, size_t end)
    {
        for (size_t i = start; i < end; i++)
            DATA[(int)i] = THREAD_ID;

        printf("Task %u ran on thread: %u\n",
            (int)start, (int)THREAD_ID);
    });
}
