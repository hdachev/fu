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
[[noreturn]] never fail(const fu_STR& what);
[[noreturn]] never fail(fu_STR&& what);


//

#define fu_ASSERT_cstr_detail(x) #x
#define fu_ASSERT_cstr(x) fu_ASSERT_cstr_detail(x)
#define fu_ASSERT() fu::fail("Assertion failed: " __FILE__ ":" fu_ASSERT_cstr(__LINE__))

} // namespace
