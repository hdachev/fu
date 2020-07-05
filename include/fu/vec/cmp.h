#pragma once


// Eq.

#define A_B_VECLIKE() template <typename A, typename B, \
    typename A1 = typename A::fu_ANY_value_type, \
    typename B1 = typename A::fu_ANY_value_type, \
    typename = decltype(*((A1**)1)=((B1*)2))>

A_B_VECLIKE()
inline bool operator==(const A& a, const B& b) noexcept
{
    int s = a.size();
    return s == b.size()
        && memcmp(a.data(), b.data(), size_t(s)) == 0;
}

A_B_VECLIKE()
fu_INL bool operator!=(const A& a, const B& b) noexcept
{
    int s = a.size();
    return s != b.size()
        || memcmp(a.data(), b.data(), size_t(s)) != 0;
}


// Cmp.

#define A_B_STRINGLIKE() template <typename A, typename B, \
    typename A1 = typename A::fu_ANY_value_type, \
    typename B1 = typename A::fu_ANY_value_type, \
    typename = decltype(*((A1**)1)=((B1*)2)), \
    typename = decltype(*((std::byte**)1)=((A1*)2))>

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
