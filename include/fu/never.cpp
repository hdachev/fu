#include "./never.h"

#include <stdexcept>

[[noreturn]] fu_EXPORT fu::never fu::fail(const char* reason)
{
    throw std::runtime_error(reason);
}

[[noreturn]] fu_EXPORT fu::never fu::fail(fu::str&& reason)
{
    reason.push('\0');
    fu::fail((const char*)reason.data());
}
