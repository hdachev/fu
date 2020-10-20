#pragma once

/////////////////////////////////////////////

#define fu_CONCAT_detail(a, b) a##b
#define fu_CONCAT(a, b) fu_CONCAT_detail(a, b)
#define fu_UNIQUE_ID() fu_CONCAT(fu_UNIQUE_ID_, __COUNTER__)

/////////////////////////////////////////////

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

#define fu_DEFER(x) fu::defer fu_UNIQUE_ID() { [&]() { x; } };

} // namespace
