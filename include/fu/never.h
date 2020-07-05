#pragma once

#include <stdexcept>

#include "./str.h"
#include "./vec/c_str.h"

namespace fu {

struct never
{
    never(const never&) = delete;
    void operator=(const never&) = delete;

    template<typename T>
    [[noreturn]] operator T&() const
    {
        throw std::runtime_error("fu::never");
    }
};

[[noreturn]] inline never fail(const char* what = "Assertion failed.")
{
    throw std::runtime_error(what);
}

[[noreturn]] never fail(const fu_STR& what)
{
    return fail(FU_TEMP_CSTR(what));
}

[[noreturn]] never fail(fu_STR&& what)
{
    what.push(std::byte(0));
    return fail((const char*)what.data());
}

} // namespace
