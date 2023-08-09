#include <chrono>


#ifndef fu_NO_fdefs

double hr_CPFg3qvV()
{
    double timestamp {};

        timestamp =
            std::chrono::duration<double>(
                std::chrono::high_resolution_clock::now().time_since_epoch())
                    .count();

    return timestamp;
}

double utc_CPFg3qvV()
{
    double timestamp {};

        timestamp =
            std::chrono::duration<double>(
                std::chrono::system_clock::now().time_since_epoch())
                    .count();

    return timestamp;
}

#endif
