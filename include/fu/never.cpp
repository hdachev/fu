#include "./never.h"

#include <stdexcept>

#include "./vec/c_str.h"

// [[noreturn]] never::operator T&() const
// {
//     throw std::runtime_error("fu::never");
// }

[[noreturn]] fu::never fu::fail(const char* what)
{
    throw std::runtime_error(what);
}

[[noreturn]] fu::never fu::fail(const fu_STR& what)
{
    fu::fail(FU_TEMP_CSTR(what));
}

[[noreturn]] fu::never fu::fail(fu_STR&& what)
{
    what.push(fu::byte(0));
    fu::fail((const char*)what.data());
}
