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


// Accel.

inline fu_STR operator+(fu_STR&& x, const char* cstr) noexcept
{
    x.append_copy(fu_ZERO(), (const std::byte*)cstr, i32(strlen(cstr)));
    return static_cast<fu_STR&&>(x);
}

inline fu_STR operator+(const char* cstr, fu_STR&& x) noexcept
{
    x.splice_copy(fu_ZERO(), fu_ZERO(), (const std::byte*)cstr, i32(strlen(cstr)));
    return static_cast<fu_STR&&>(x);
}

inline fu_STR operator+(const fu_STR& c, const char* cstr) noexcept
{
    return fu_STR(c) + cstr;
}

inline fu_STR operator+(const char* cstr, const fu_STR& c) noexcept
{
    return cstr + fu_STR(c);
}

inline fu_STR& operator+=(fu_STR& m, const char* cstr) noexcept
{
    m.append_copy(fu_ZERO(), (const std::byte*)cstr, i32(strlen(cstr)));
    return m;
}


// And once more.

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


// Strcmp.

inline bool operator==(const fu_STR& a, const fu_STR& b) noexcept
{
    int s = a.size();
    return s == b.size()
        && memcmp(a.data(), b.data(), size_t(s)) == 0;
}

inline bool operator==(const fu_STR& a, std::byte b) noexcept
{
    return a.size() == 1 && *a.data() == b;
}

inline bool operator==(std::byte a, const fu_STR& b) noexcept
{
    return b.size() == 1 && *b.data() == a;
}

fu_INL bool operator!=(const fu_STR& a, const fu_STR& b) noexcept
{
    return !(a == b);
}

fu_INL bool operator!=(const fu_STR& a, std::byte b) noexcept
{
    return !(a == b);
}

fu_INL bool operator!=(std::byte a, const fu_STR& b) noexcept
{
    return !(a == b);
}


//

fu_INL int strcmp(const std::byte* d0, int s0, const std::byte* d1, int s1) noexcept
{
    int s   = s0 < s1 ? s0 : s1;
    int cmp = memcmp(d0, d1, size_t(s));
    int dif = s0 - s1;
    return cmp ? cmp : dif;
}


//

fu_INL bool operator<(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) < 0;
}

fu_INL bool operator>(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) > 0;
}

fu_INL bool operator<=(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) <= 0;
}

fu_INL bool operator>=(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) >= 0;
}


//

fu_INL bool operator<(std::byte a, const fu_STR& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) < 0;
}

fu_INL bool operator>(std::byte a, const fu_STR& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) > 0;
}

fu_INL bool operator<=(std::byte a, const fu_STR& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) <= 0;
}

fu_INL bool operator>=(std::byte a, const fu_STR& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) >= 0;
}


//

fu_INL bool operator<(const fu_STR& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) < 0;
}

fu_INL bool operator>(const fu_STR& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) > 0;
}

fu_INL bool operator<=(const fu_STR& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) <= 0;
}

fu_INL bool operator>=(const fu_STR& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) >= 0;
}


//

struct fu_STRLIT
{
    typedef std::byte value_type;
    typedef std::byte fu_VECLIKE_value_type;

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

fu_INL bool operator==(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return a.size() == b.size()
        && memcmp(a.data(), b.data(), (size_t) b.size()) == 0;
}

fu_INL bool operator==(std::byte a, const fu_STRLIT& b) noexcept {
    return b.size() == 1 && a == *b.data();
}

fu_INL bool operator!=(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return !(a == b);
}

fu_INL bool operator!=(std::byte a, const fu_STRLIT& b) noexcept {
    return !(a == b);
}


// Copy/paste & flip.

fu_INL bool operator==(const fu_STRLIT& b, const fu_STR& a) noexcept {
    return a == b;
}

fu_INL bool operator==(const fu_STRLIT& b, std::byte a) noexcept {
    return a == b;
}

fu_INL bool operator!=(const fu_STRLIT& b, const fu_STR& a) noexcept {
    return !(a == b);
}

fu_INL bool operator!=(const fu_STRLIT& b, std::byte a) noexcept {
    return !(a == b);
}


//

fu_INL bool operator<(const fu_STR& a, const fu_STRLIT& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) < 0;
}

fu_INL bool operator>(const fu_STR& a, const fu_STRLIT& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) > 0;
}

fu_INL bool operator<=(const fu_STR& a, const fu_STRLIT& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) <= 0;
}

fu_INL bool operator>=(const fu_STR& a, const fu_STRLIT& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) >= 0;
}


//

fu_INL bool operator<(const fu_STRLIT& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) < 0;
}

fu_INL bool operator>(const fu_STRLIT& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) > 0;
}

fu_INL bool operator<=(const fu_STRLIT& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) <= 0;
}

fu_INL bool operator>=(const fu_STRLIT& a, const fu_STR& b) noexcept
{
    return strcmp(a.data(), a.size(), b.data(), b.size()) >= 0;
}


//

fu_INL bool operator<(std::byte a, const fu_STRLIT& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) < 0;
}

fu_INL bool operator>(std::byte a, const fu_STRLIT& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) > 0;
}

fu_INL bool operator<=(std::byte a, const fu_STRLIT& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) <= 0;
}

fu_INL bool operator>=(std::byte a, const fu_STRLIT& b) noexcept
{
    return strcmp(&a, 1, b.data(), b.size()) >= 0;
}


//

fu_INL bool operator<(const fu_STRLIT& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) < 0;
}

fu_INL bool operator>(const fu_STRLIT& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) > 0;
}

fu_INL bool operator<=(const fu_STRLIT& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) <= 0;
}

fu_INL bool operator>=(const fu_STRLIT& a, std::byte b) noexcept
{
    return strcmp(a.data(), a.size(), &b, 1) >= 0;
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
