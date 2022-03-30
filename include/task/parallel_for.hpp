#pragma once

#include <task/pool.hpp>
#include <fu/export.h>

namespace task {


//

struct PendingBatchCount;

extern "C" fu_EXPORT void PBC_Decrement(
    PendingBatchCount& pbc);


//

struct parfor_Task: Task
{
    void* control;
    size_t start;
    size_t end;
};

extern "C" fu_EXPORT void parallel_for(
    size_t size,
    size_t per_batch,
    void (*parfor_run)(Task*),
    PendingBatchCount*& control);


//

template <typename Fn>
void parallel_for(size_t size, size_t per_batch, const Fn& fn)
{
    struct parfor_Control
    {
        // Must begin with a pbc*,
        //  so pbc* == control*.
        //
        PendingBatchCount* pbc;
        const Fn& fn;
    };

    const auto parfor_run   = [](Task* t)
    {
        parfor_Task* task   = (parfor_Task*) t;
        auto control        = (parfor_Control*) task->control;

        control->fn(task->start, task->end);

        PBC_Decrement(*control->pbc);
    };

    parfor_Control control { nullptr, fn };

    parallel_for(
        size,
        per_batch,
        parfor_run,
        control.pbc);
}


} // namespace


// This goes in the cpp.

#include <task/batch.hpp>

void task::parallel_for(
    size_t size,
    size_t per_batch,
    void (*parfor_run)(task::Task*),
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


    // Control must start with a pbc*.

    PendingBatchCount pbc(batches);
    control = &pbc;


    // Submit everything but the last task.

    if (batches > 1)
    {
        TaskStack_Push(tasks, tasks + batches - 2);
        TaskStack_Notify();
    }


    // Fixup & run the last task right here.

    {
        auto& last = tasks[batches - 1];
        last.end = size;
        last.run(&last);
    }


    //

    PBC_Wait(pbc);
}
