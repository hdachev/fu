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

[[noreturn]] inline never fail(const fu_STR& what)
{
    fail(FU_TEMP_CSTR(what));
}

[[noreturn]] inline never fail(fu_STR&& what)
{
    what.push(fu::byte(0));
    fail((const char*)what.data());
}


//

#define fu_ASSERT_cstr_detail(x) #x
#define fu_ASSERT_cstr(x) fu_ASSERT_cstr_detail(x)
#define fu_ASSERT() fu::fail("Assertion failed: " __FILE__ ":" fu_ASSERT_cstr(__LINE__))

} // namespace
