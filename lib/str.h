#pragma once

#include "vec.h"


// Strings.

typedef fu_VEC<char> fu_STR;

inline fu_STR fu_TO_STR(const char* cstr) noexcept
{
    fu_STR vec;
    vec.UNSAFE__init_copy(cstr, i32(strlen(cstr)));
    return vec;
}

inline fu_STR fu_TO_STR(char chr) noexcept
{
    fu_STR vec;
    vec.UNSAFE__init_copy(&chr, 1);
    return vec;
}

inline fu_STR fu_TO_STR(long long num) noexcept
{
    fu_STR vec;

    // TODO FIX this doesnt work on min-int + its slow
    int at = 0;
    if (num < 0) {
        vec.push('-');
        num = -num;
        at = 1;
    }

    do {
        int d = num % 10; num /= 10;
        vec.insert(at, char(d + '0'));
    }
    while (num);

    return vec;
}

inline fu_STR fu_TO_STR(int num) noexcept
{
    return fu_TO_STR((long long)num);
}


// Accel.

inline fu_STR operator+(fu_STR&& x, const char* cstr) noexcept
{
    x.append_copy(fu_ZERO(), cstr, i32(strlen(cstr)));
    return static_cast<fu_STR&&>(x);
}

inline fu_STR operator+(const char* cstr, fu_STR&& x) noexcept
{
    x.splice_copy(fu_ZERO(), fu_ZERO(), cstr, i32(strlen(cstr)));
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
    m.append_copy(fu_ZERO(), cstr, i32(strlen(cstr)));
    return m;
}


// And once more.

template <typename T, typename = decltype(fu_TO_STR(T()))>
fu_STR operator+(const fu_STR& str, const T& t) noexcept
{
    return str + fu_TO_STR(t);
}

template <typename T, typename = decltype(fu_TO_STR(T()))>
fu_STR operator+(const T& t, const fu_STR& str) noexcept
{
    return fu_TO_STR(t) + str;
}

template <typename T, typename = decltype(fu_TO_STR(T()))>
fu_STR operator+(fu_STR&& str, const T& t) noexcept
{
    str.append(fu_ZERO(), fu_TO_STR(t));
    return static_cast<fu_STR&&>(str);
}

template <typename T, typename = decltype(fu_TO_STR(T()))>
fu_STR operator+(const T& t, fu_STR&& str) noexcept
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

inline bool operator!=(const fu_STR& a, const fu_STR& b) noexcept
{
    return !(a == b);
}

inline int strcmp(const fu_STR& a, const fu_STR& b) noexcept
{
    int s0  = a.size();
    int s1  = b.size();
    int s   = s0 < s1 ? s0 : s1;

    int cmp = memcmp(a.data(), b.data(), size_t(s));
    int dif = s0 - s1;
    return cmp ? cmp : dif;
}

inline bool operator<(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a, b) < 0;
}

inline bool operator>(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a, b) > 0;
}

inline bool operator<=(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a, b) <= 0;
}

inline bool operator>=(const fu_STR& a, const fu_STR& b) noexcept
{
    return strcmp(a, b) >= 0;
}


//

struct fu_STRLIT
{
    const char* m_data;
    int m_size;

    operator fu_STR() const noexcept {
        fu_STR vec;
        vec.UNSAFE__init_copy(m_data, m_size);
        return vec;
    }

    // TODO remove: shimming ostream <<
    operator const char*() const noexcept {
        return m_data;
    }

    fu_INL const char* data() const noexcept {
        return m_data;
    }

    fu_INL int size() const noexcept {
        return m_size;
    }


    // TODO remove -
    //  We've got to get rid of these shits.

    // Item search.

    i32 find(char search) const noexcept {
        const char* start = data();
        const char* end   = start + size();

        for (const char* i = start; i < end; i++)
            if (*i == search)
                return i32(i - start);

        return -1;
    }

    fu_INL bool starts_with(char prefix) const noexcept {
        return size() && *data() == prefix;
    }


    // Substring search.

    fu_INL i32 find(const fu_STR& v) const noexcept {
        return find(v.data(), v.size());
    }

    fu_INL i32 find(const char* i0, i32 s) const noexcept {
        return fbstring_lfind(
            data(), size(),
            i0, s,
            fu_ZERO());
    }

    bool starts_with(const char* i0, i32 s) const noexcept {
        i32 my_size = size();
        if (s < 0 || s > my_size)
            return false;

        const char* i1 = i0 + s;
        const char* match = data();
        for (const char* search = i0; search < i1; search++, match++)
            if (*search != *match)
                return false;

        return true;
    }

    bool starts_with(const fu_STR& v) const noexcept {
        return starts_with(v.data(), v.size());
    }
};

fu_INL fu_STRLIT operator ""_fu(const char* cstr, size_t len) noexcept {
    return fu_STRLIT { cstr, (int) len };
}

fu_INL bool operator==(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return a.size() == b.size()
        && memcmp(a.data(), b.data(), (size_t) b.size()) == 0;
}

fu_INL bool operator!=(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return a.size() != b.size()
        || memcmp(a.data(), b.data(), (size_t) b.size()) != 0;
}

fu_INL int strcmp(const fu_STR& a, const fu_STRLIT& b) noexcept
{
    int s0  = a.size();
    int s1  = b.size();
    int s   = s0 < s1 ? s0 : s1;

    int cmp = memcmp(a.data(), b.data(), size_t(s));
    int dif = s0 - s1;
    return cmp ? cmp : dif;
}

fu_INL bool operator<(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return strcmp(a, b) < 0;
}

fu_INL bool operator>(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return strcmp(a, b) > 0;
}

fu_INL bool operator<=(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return strcmp(a, b) <= 0;
}

fu_INL bool operator>=(const fu_STR& a, const fu_STRLIT& b) noexcept {
    return strcmp(a, b) >= 0;
}


//

fu_INL fu_STR operator+(fu_STR&& str, const fu_STRLIT& lit) noexcept {
    str.append_copy(fu_ZERO(), lit.data(), lit.size());
    return static_cast<fu_STR&&>(str);
}

fu_INL fu_STR operator+(const fu_STR& str, const fu_STRLIT& lit) noexcept {
    return fu_STR(str) + lit;
}

fu_INL fu_STR operator+(const fu_STRLIT& lit, fu_STR&& str) noexcept {
    str.splice_copy(fu_ZERO(), fu_ZERO(), lit.data(), lit.size());
    return static_cast<fu_STR&&>(str);
}

fu_INL fu_STR operator+(const fu_STRLIT& lit, const fu_STR& str) noexcept {
    return lit + fu_STR(str);
}

fu_INL fu_STR& operator+=(fu_STR& str, const fu_STRLIT& lit) noexcept {
    str.append_copy(fu_ZERO(), lit.data(), lit.size());
    return str;
}


// Duct tape.

fu_STR operator+(const fu_STRLIT& a, const fu_STRLIT& b) noexcept
{
    // TODO static assert this never happens -
    //  should have been compiled to a single literal.
    return fu_STR(a) + b;
}
