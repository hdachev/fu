#include "./never.h"

#include <stdexcept>

[[noreturn]] fu_EXPORT fu::never fu::fail(const char* what)
{
    throw std::runtime_error(what);
}

[[noreturn]] fu_EXPORT fu::never fu::fail(fu_STR&& what)
{
    what.push('0');
    fu::fail((const char*)what.data());
}
