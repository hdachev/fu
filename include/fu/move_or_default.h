#pragma once

namespace fu {

template <typename T>
T move_or_default(T& v)
{
    if ((char*) &v >= NIL && (char*) &v < NIL + sizeof(NIL))
        return {};

    return static_cast<T&&>(v);
}

}
