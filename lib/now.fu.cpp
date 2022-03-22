
#include <chrono>

#ifndef FU_NO_FDEFs

double hr_CPFg3qvV()
{
    /*MOV*/ double timestamp {};


        timestamp =
            std::chrono::duration<double>(
                std::chrono::high_resolution_clock::now().time_since_epoch())
                    .count();
    ;
    return /*NRVO*/ timestamp;
}

double utc_CPFg3qvV()
{
    /*MOV*/ double timestamp {};


        timestamp =
            std::chrono::duration<double>(
                std::chrono::system_clock::now().time_since_epoch())
                    .count();
    ;
    return /*NRVO*/ timestamp;
}

#endif
