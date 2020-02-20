#pragma once

#include "vec.h"


// Strings.

typedef fu_VEC<std::byte> fu_STR;

inline fu_STR fu_TO_STR(const char* cstr) noexcept
{
    fu_STR vec;
    vec.UNSAFE__init_copy((const std::byte*)cstr, i32(strlen(cstr)));
    return vec;
}


// Strcmp.

inline int strcmp(const std::byte* d0, int s0, const std::byte* d1, int s1) noexcept
{
    int s   = s0 < s1 ? s0 : s1;
    int cmp = memcmp(d0, d1, size_t(s));
    int dif = s0 - s1;
    return cmp ? cmp : dif;
}

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


//

struct fu_STRLIT
{
    typedef std::byte value_type;
    typedef std::byte fu_VIEW_value_type;
    typedef std::byte fu_ANY_value_type;

    const char* m_data;
    int m_size;

    operator fu_STR() const noexcept {
        fu_STR vec;
        vec.UNSAFE__init_copy((const std::byte*)m_data, m_size);
        return vec;
    }

    fu_INL const std::byte* data() const noexcept {
        return (const std::byte*)m_data;
    }

    fu_INL int size() const noexcept {
        return m_size;
    }

    fu_INL explicit operator bool() const noexcept {
        return m_size;
    }

    fu_INL const std::byte& operator[](i32 idx) const noexcept
    {
        auto* ok = (std::byte*)m_data + idx;
        return (u32) idx < (u32) m_size
             ? *ok
             : *((std::byte*)1);
    }
};

fu_INL constexpr fu_STRLIT operator ""_fu(const char* cstr, size_t len) noexcept {
    return fu_STRLIT { cstr, (int) len };
}


//

template <typename OStream>
auto operator<<(OStream& stream, const fu_STR& str)
    -> decltype(
        stream.write((const char*)str.data(), size_t(str.size())),
        stream << *(const char*)str.data())
{
    stream.write((const char*)str.data(), size_t(str.size()));
    return stream;
}

template <typename OStream>
auto operator<<(OStream& stream, const fu_STRLIT& str)
    -> decltype(
        stream.write((const char*)str.data(), size_t(str.size())),
        stream << *(const char*)str.data())
{
    stream.write((const char*)str.data(), size_t(str.size()));
    return stream;
}
