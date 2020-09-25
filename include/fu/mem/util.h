#pragma once

namespace fu {

template <typename T>
inline bool ptr_eq(const T& a, const T& b) {
    return &a == &b;
}

} // namespace
