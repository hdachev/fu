#pragma once

namespace fu {

template <typename F>
struct defer
{
    F fn;
    ~defer() { fn(); }

    defer(F fn) : fn(fn) {}
    defer(const defer&) = delete;
    void operator=(const defer&) = delete;
};

#define fu_DEFER(x) fu::defer fu_UNIQUE_ID { [&]() { x; } };

} // namespace
