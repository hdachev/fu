#include <chrono>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

double hr_CPFg3qvV()
{
    double timestamp {};

        timestamp =
            std::chrono::duration<double>(
                std::chrono::high_resolution_clock::now().time_since_epoch())
                    .count();
    ;
    return timestamp;
}

double utc_CPFg3qvV()
{
    double timestamp {};

        timestamp =
            std::chrono::duration<double>(
                std::chrono::system_clock::now().time_since_epoch())
                    .count();
    ;
    return timestamp;
}

#endif

#pragma GCC diagnostic pop
