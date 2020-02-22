#pragma once

#include "../str.h"


// Eq.

#define A_B_STRINGLIKE() template <typename A, typename B, \
    typename A1 = typename A::fu_ANY_value_type, \
    typename B1 = typename A::fu_ANY_value_type, \
    typename = decltype(*((A1**)1)=((B1*)2)), \
    typename = decltype(*((std::byte**)1)=((A1*)2))>

A_B_STRINGLIKE()
inline bool operator==(const A& a, const B& b) noexcept
{
    int s = a.size();
    return s == b.size()
        && memcmp(a.data(), b.data(), size_t(s)) == 0;
}

A_B_STRINGLIKE()
fu_INL bool operator!=(const A& a, const B& b) noexcept
{
    int s = a.size();
    return s != b.size()
        || memcmp(a.data(), b.data(), size_t(s)) != 0;
}


// Cmp.

inline int strcmp(const std::byte* d0, int s0, const std::byte* d1, int s1) noexcept
{
    int s   = s0 < s1 ? s0 : s1;
    int cmp = memcmp(d0, d1, size_t(s));
    int dif = s0 - s1;
    return cmp ? cmp : dif;
}

A_B_STRINGLIKE()
fu_INL bool operator<(const A& a, const B& b) noexcept {
    return strcmp(a.data(), a.size(), b.data(), b.size()) < 0;
}

A_B_STRINGLIKE()
fu_INL bool operator>(const A& a, const B& b) noexcept {
    return strcmp(a.data(), a.size(), b.data(), b.size()) > 0;
}

A_B_STRINGLIKE()
fu_INL bool operator<=(const A& a, const B& b) noexcept {
    return strcmp(a.data(), a.size(), b.data(), b.size()) <= 0;
}

A_B_STRINGLIKE()
fu_INL bool operator>=(const A& a, const B& b) noexcept {
    return strcmp(a.data(), a.size(), b.data(), b.size()) >= 0;
}


//

#define V_STRINGLIKE() template <typename V, \
    typename T = typename V::fu_ANY_value_type, \
    typename = decltype(*((std::byte**)1)=((T*)2))>

V_STRINGLIKE()
fu_INL bool operator==(std::byte a, const V& b) noexcept {
    return b.size() == 1 && a == *b.data();
}

V_STRINGLIKE()
fu_INL bool operator!=(std::byte a, const V& b) noexcept {
    return !(a == b);
}

V_STRINGLIKE()
fu_INL bool operator==(const V& b, std::byte a) noexcept {
    return a == b;
}

V_STRINGLIKE()
fu_INL bool operator!=(const V& b, std::byte a) noexcept {
    return !(a == b);
}


// Charcmp.

V_STRINGLIKE()
fu_INL bool operator<(std::byte a, const V& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) < 0;
}

V_STRINGLIKE()
fu_INL bool operator>(std::byte a, const V& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) > 0;
}

V_STRINGLIKE()
fu_INL bool operator<=(std::byte a, const V& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) <= 0;
}

V_STRINGLIKE()
fu_INL bool operator>=(std::byte a, const V& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) >= 0;
}


//

V_STRINGLIKE()
fu_INL bool operator<(const V& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) < 0;
}

V_STRINGLIKE()
fu_INL bool operator>(const V& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) > 0;
}

V_STRINGLIKE()
fu_INL bool operator<=(const V& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) <= 0;
}

V_STRINGLIKE()
fu_INL bool operator>=(const V& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) >= 0;
}
