#define TODO_FIX_REMOVE_copying_push

#include <chrono>


#ifndef fu_NO_fdefs

double hr_0pZhUWR4()
{
    double timestamp {};

        timestamp =
            std::chrono::duration<double>(
                std::chrono::high_resolution_clock::now().time_since_epoch())
                    .count();

    return timestamp;
}

double utc_0pZhUWR4()
{
    double timestamp {};

        timestamp =
            std::chrono::duration<double>(
                std::chrono::system_clock::now().time_since_epoch())
                    .count();

    return timestamp;
}

#endif
