#pragma once

#include "./str.h"

namespace fu {

struct never
{
    never(const never&) = delete;
    void operator=(const never&) = delete;

    template<typename T>
    [[noreturn]] operator T&() const;
};

[[noreturn]] never fail(const char* what = "Assertion failed.");
[[noreturn]] never fail(fu::str&& what);

extern never unreachable;

} // namespace
