#pragma once

namespace fu {

// New thing.
static const char NIL[1024] {};

// Old thing.
template <typename T>
struct Default {
    static inline const T value {};
};

} // namespace
