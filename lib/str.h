#pragma once

#include "vec.h"


// Strings.

typedef fu_VEC<char> fu_COW_STR;

inline fu_COW_STR fu_STRING(const char* cstr) {
    fu_COW_STR vec;
    vec.init_copy(cstr, i32(strlen(cstr)));
    return vec;
}

inline fu_COW_STR fu_STRING(char chr) {
    fu_COW_STR vec;
    vec.init_copy(&chr, 1);
    return vec;
}

inline const fu_COW_STR& fu_STRING(const fu_COW_STR& str) {
    return str;
}

inline fu_COW_STR fu_STRING(long long num) {
    fu_COW_STR vec;

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

inline fu_COW_STR fu_STRING(int num) {
    return fu_STRING((long long)num);
}


// Accel.

inline fu_COW_STR operator+(fu_COW_STR&& x, const char* cstr) {
    x.append_copy(fu_ZERO(), cstr, i32(strlen(cstr)));
    return static_cast<fu_COW_STR&&>(x);
}

inline fu_COW_STR operator+(const char* cstr, fu_COW_STR&& x) {
    x.splice_copy(fu_ZERO(), fu_ZERO(), cstr, i32(strlen(cstr)));
    return static_cast<fu_COW_STR&&>(x);
}

inline fu_COW_STR operator+(const fu_COW_STR& c, const char* cstr) {
    return fu_COW_STR(c) + cstr;
}

inline fu_COW_STR operator+(const char* cstr, const fu_COW_STR& c) {
    return cstr + fu_COW_STR(str);
}

inline fu_COW_STR& operator+=(fu_COW_STR& m, const char* cstr) {
    m.append_copy(fu_ZERO(), cstr, i32(strlen(cstr)));
    return m;
}
