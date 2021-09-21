#pragma once

#include "../str.h"


// Stringify.

inline fu_STR fu_TO_STR(long long num) noexcept
{
    fu_STR vec;

    // TODO FIX this doesnt work on min-int + its slow
    int at = 0;
    if (num < 0) {
        vec.push(std::byte('-'));
        num = -num;
        at = 1;
    }

    do {
        int d = num % 10; num /= 10;
        vec.insert(at, std::byte(d + '0'));
    }
    while (num);

    return vec;
}

inline fu_STR fu_TO_STR(int num) noexcept
{
    return fu_TO_STR((long long)num);
}

inline fu_STR fu_TO_STR(unsigned int num) noexcept
{
    return fu_TO_STR((long long)num);
}


//

template <typename T, typename = decltype(fu_TO_STR(T()))>
inline fu_STR operator+(fu_STR&& str, const T& t) noexcept
{
    str.append(fu_ZERO(), fu_TO_STR(t));
    return static_cast<fu_STR&&>(str);
}

template <typename T, typename = decltype(fu_TO_STR(T()))>
inline fu_STR operator+(const T& t, fu_STR&& str) noexcept
{
    str.splice(fu_ZERO(), fu_ZERO(), fu_TO_STR(t));
    return static_cast<fu_STR&&>(str);
}

template <typename T, typename = decltype(fu_TO_STR(T()))>
fu_STR& operator+=(fu_STR& str, const T& t) noexcept
{
    str.append(fu_ZERO(), fu_TO_STR(t));
    return str;
}


// TODO FIX the include

#include "./concat.h"

template <typename T, typename = decltype(fu_TO_STR(T()))>
inline fu_STR operator+(const fu_STR& str, const T& t) noexcept
{
    return str + fu_TO_STR(t);
}

template <typename T, typename = decltype(fu_TO_STR(T()))>
inline fu_STR operator+(const T& t, const fu_STR& str) noexcept
{
    return fu_TO_STR(t) + str;
}
