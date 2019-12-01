#pragma once

template <typename F>
struct fu_DEFER
{
    F fn;
    ~fu_DEFER() { fn(); }

    fu_DEFER(F fn) : fn(fn) {}
    fu_DEFER(const fu_DEFER&) = delete;
    void operator=(const fu_DEFER&) = delete;
};
