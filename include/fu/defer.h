#pragma once

// defer_if_err & defer_if_ok
#include <exception>

/////////////////////////////////////////////

#define fu_CONCAT_detail(a, b) a##b
#define fu_CONCAT(a, b) fu_CONCAT_detail(a, b)
#define fu_UNIQUE_ID() fu_CONCAT(fu_UNIQUE_ID_, __COUNTER__)

namespace fu {

/////////////////////////////////////////////

template <typename F>
struct defer
{
    F fn;
    ~defer() { fn(); }

    defer(F fn) : fn(fn) {}
    defer(const defer&) = delete;
    void operator=(const defer&) = delete;
};

#define fu_DEFER(...) fu::defer fu_UNIQUE_ID() { [&]() { __VA_ARGS__; } };

/////////////////////////////////////////////

template <typename F>
struct defer_if_err
{
    F fn;
    int ue;
    ~defer_if_err() { if (ue != std::uncaught_exceptions()) fn(); }

    defer_if_err(F fn) : fn(fn), ue(std::uncaught_exceptions()) {}
    defer_if_err(const defer_if_err&) = delete;
    void operator=(const defer_if_err&) = delete;
};

#define fu_DEFER_IF_ERR(...) fu::defer_if_err fu_UNIQUE_ID() { [&]() { __VA_ARGS__; } };

/////////////////////////////////////////////

template <typename F>
struct defer_if_ok
{
    F fn;
    int ue;
    ~defer_if_ok() { if (ue == std::uncaught_exceptions()) fn(); }

    defer_if_ok(F fn) : fn(fn), ue(std::uncaught_exceptions()) {}
    defer_if_ok(const defer_if_ok&) = delete;
    void operator=(const defer_if_ok&) = delete;
};

#define fu_DEFER_IF_OK(...) fu::defer_if_ok fu_UNIQUE_ID() { [&]() { __VA_ARGS__; } };

/////////////////////////////////////////////

} // namespace
