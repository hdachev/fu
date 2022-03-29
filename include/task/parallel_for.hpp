#pragma once

#include <task/batch.hpp>

namespace task {


template <typename Fn>
void parallel_for(size_t size, size_t per_batch, const Fn& fn)
{
    struct parfor_Control
    {
        const Fn& fn;
        PendingBatchCounter pbc;
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
        task->control->pbc.decrement();
    };


    // There may be no point in suspending at all.

    // TODO FIX: this can potentially duplicate the code of `fn`
    //  Perhaps it's smarter to do this in the PushAndWork call,
    //   which also reuses it for a bunch of other things.

    if (size < per_batch * 2) {
        fn(0, size);
        return;
    }


    //

    size_t batches = size / per_batch;

    batches = batches < TaskStack_Worker_Count
            ? batches : TaskStack_Worker_Count;

    batches = batches > 1
            ? batches : 1;

    per_batch = size / batches;


    //

    parfor_Control* control = (parfor_Control*) alloca(
        sizeof(parfor_Control)  +
        sizeof(parfor_Task)     * batches);

    parfor_Task* tasks = (parfor_Task*) &control[1];


    //

    new (control) parfor_Control { fn, {} };


    //

    control->pbc.init(batches);

    for (size_t i = 0; i < batches; i++)
    {
        auto& t     = tasks[i];

        t.run       = parfor_run;
        t.control   = control;

        t.start     = size_t(i) * per_batch;
        t.end       = i < batches - 1
                        ? t.start + per_batch
                        : size;

        t.next_task = &t + 1;
    }

    TaskStack_Push(tasks, tasks + batches - 1);

    TaskStack_Notify();


    // Now for the stupid part -
    //  This is pretty horrible, because we might end up sleeping and not working,
    //   and waiting-by-doing-work can lock things up if we pop a big task.
    //
    // In the absence of fibers this is the best we can do.

    control->pbc.wait();
}


} // namespace
