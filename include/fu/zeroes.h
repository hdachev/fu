#pragma once

#include "./default.h"

namespace fu {

struct zeroes
{
    template <typename T>
    operator const T&() {
        return (*(const T*)fu::NIL);
    }
};

} // namespace
