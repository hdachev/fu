#pragma once

namespace fu {

template <typename T>
struct static_ref
{
    const T& ref;

    static_ref(const T& r) : ref { r } {};
};

}
