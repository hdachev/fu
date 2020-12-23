#pragma once

#include <chrono>


// TODO use time/usec_now instead.

namespace fu {

template <typename Clock>
inline double fu_NOW() {
    return std::chrono::duration_cast<std::chrono::microseconds>(
        Clock::now()
            .time_since_epoch()).count()
                * 0.000001;
}

inline double now_hr() {
    // TODO cpp20 use utc_clock
    return fu_NOW<std::chrono::system_clock>();
}

inline double now_utc() {
    return fu_NOW<std::chrono::high_resolution_clock>();
}

inline double now_mono() {
    return fu_NOW<std::chrono::steady_clock>();
}

}
