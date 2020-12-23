#include <chrono>
#include <cstdint>
#include <cstdlib>


// Draft.

namespace
{
    typedef int64_t usec_t;

    template <typename clock>
    inline usec_t usec()
    {
        return std::chrono::duration_cast<std::chrono::microseconds>(
            clock::now().time_since_epoch()).count();
    }

    usec_t init_hr_epoch()
    {
        usec_t threshold_usec = 100;

        for (;;)
        {
            auto sys0   = usec<std::chrono::system_clock>();
            auto hires  = usec<std::chrono::high_resolution_clock>();
            auto sys1   = usec<std::chrono::system_clock>();

            auto error  = abs(sys0 - sys1);

            if (error < threshold_usec)
                return ((sys0 + sys1) / 2) - hires;

            threshold_usec *= 2;
        }
    }

    static usec_t hr_epoch = init_hr_epoch();
}

usec_t usec_since_1970()
{
    return hr_epoch + usec<std::chrono::high_resolution_clock>();
}
