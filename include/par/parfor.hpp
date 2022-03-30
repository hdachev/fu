#pragma once

#include <fu/export.h>

namespace fu
{

    // The task stack -

    struct Task
    {
        Task* next_task;
        void (*run)(Task* task);
    };


    // The await stuff -

    struct PendingBatchCount;

    extern "C"
        fu_EXPORT
            void PBC_Decrement(
                PendingBatchCount& pbc);


    // parallel_for -

    struct parfor_Task: Task
    {
        void* control;
        size_t start;
        size_t end;
    };

    extern "C"
        fu_EXPORT
            void parallel_for(
                size_t size,
                size_t per_batch,
                void (*parfor_run)(Task*),
                PendingBatchCount*& control);

    template <typename Fn>
    inline void parallel_for(size_t size, size_t per_batch, const Fn& fn)
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

            if (control->pbc)
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
