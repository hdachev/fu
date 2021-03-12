#include "./task_stack.hpp"
#include <cstdlib>
#include <cstdio>
#include <chrono>         // std::chrono::seconds

struct MyTask: Task
{
    int test_number;
};

static std::atomic_int THREAD_ID_COUNTER = 0;
thread_local int THREAD_ID = THREAD_ID_COUNTER.fetch_add(+1);

void MyTask_Run(Task* t)
{
    MyTask* task = (MyTask*)t;
    printf("Task %u ran on thread: %u\n", task->test_number, THREAD_ID);
}

static void TaskStack_Test()
{
    int N = 1 * 128;

    for (int i = 0; i < N; i++)
    {
        auto* task          = new MyTask {};
        task->run           = &MyTask_Run;
        task->test_number   = i;

        TaskStack_Push((Task*) task);
    }

    std::this_thread::sleep_for (std::chrono::seconds(1));
}
