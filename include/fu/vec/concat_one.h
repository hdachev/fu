#pragma once

#include "../vec.h"


// Single item appends (move).

template <typename T>
inline fu::vec<T> operator+(fu::vec<T>&& a, T&& b) noexcept {
    a.push(static_cast<T&&>(b));
    return static_cast<fu::vec<T>&&>(a);
}

template <typename T>
inline fu::vec<T> operator+(T&& a, fu::vec<T>&& b) noexcept {
    b.unshift(static_cast<T&&>(a));
    return static_cast<fu::vec<T>&&>(b);
}

template <typename T>
inline fu::vec<T>& operator+=(fu::vec<T>& a, T&& b) noexcept {
    a.push(static_cast<T&&>(b));
    return a;
}


// Single item appends (copy-one).

template <typename T>
inline fu::vec<T> operator+(fu::vec<T>&& a, const T& b) noexcept {
    a.push(b);
    return static_cast<fu::vec<T>&&>(a);
}

template <typename T>
inline fu::vec<T> operator+(const T& a, fu::vec<T>&& b) noexcept {
    b.unshift(a);
    return static_cast<fu::vec<T>&&>(b);
}

template <typename T, typename X, typename = decltype((*(T*)1)=(*(X*)1))>
inline fu::vec<T>& operator+=(fu::vec<T>& a, const X& b) noexcept {
    a.push(b);
    return a;
}


// Single item appends (copy).

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(const V& a, T&& b) noexcept {
    fu::vec<T> vec;

    vec.reserve(a.size() + 1);
    vec.append(fu_ZERO(), a);
    vec.push(static_cast<T&&>(b));

    return vec;
}

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(T&& a, const V& b) noexcept {
    fu::vec<T> vec;

    vec.reserve(b.size() + 1);
    vec.push(static_cast<T&&>(a));
    vec.append(fu_ZERO(), b);

    return vec;
}

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(const V& a, const T& b) noexcept {
    fu::vec<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), &b, 1);
    return vec;
}

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(const T& a, const V& b) noexcept {
    fu::vec<T> vec;
    vec.UNSAFE__init_copy(&a, 1, b.data(), b.size());
    return vec;
}
