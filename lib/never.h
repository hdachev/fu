#pragma once

#include <stdexcept>

// TODO FIX
#include <string>

namespace fu {

struct never
{
    never(const never&) = delete;
    void operator=(const never&) = delete;

    template<typename T>
    [[noreturn]] operator T() const
    {
        throw std::runtime_error("fu::never");
    }
};

[[noreturn]] inline never fail(const char* what)
{
    throw std::runtime_error(what);
}

template <typename T>
[[noreturn]] never fail(const T& what)
{
    throw std::runtime_error( // TODO FIX
        std::string(
            what.data(), size_t(what.size())));
}

} // namespace
