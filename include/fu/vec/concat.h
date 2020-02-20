#pragma once

#include "../vec.h"


// String & array concat.

template <typename T>
inline fu_VEC<T> operator+(fu_VEC<T>&& a, fu_VEC<T>&& b) noexcept {
    a.append(fu_ZERO(), static_cast<fu_VEC<T>&&>(b));
    return static_cast<fu_VEC<T>&&>(a);
}

template <typename T>
inline fu_VEC<T>& operator+=(fu_VEC<T>& a, fu_VEC<T>&& b) noexcept {
    a.append(fu_ZERO(), static_cast<fu_VEC<T>&&>(b));
    return a;
}


// Non vec veclike appends.

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu_VEC<T> operator+(fu_VEC<T>&& a, const V& b) noexcept {
    a.append(fu_ZERO(), b);
    return static_cast<fu_VEC<T>&&>(a);
}

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu_VEC<T> operator+(const V& b, fu_VEC<T>&& a) noexcept {
    a.splice(fu_ZERO(), fu_ZERO(), b);
    return static_cast<fu_VEC<T>&&>(a);
}

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu_VEC<T>& operator+=(fu_VEC<T>& a, const V& b) noexcept {
    a.append(fu_ZERO(), b);
    return a;
}


// Fallback - two veclikes.

template <typename V, typename T,
    typename T2 = typename V::fu_VIEW_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu_VEC<T> operator+(const fu_VEC<T>& a, const V& b) noexcept
{
    if (!b.size())
        return fu_VEC<T>(a);

    fu_VEC<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}

template <typename V, typename T,
    typename T2 = typename V::fu_VIEW_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu_VEC<T> operator+(const V& a, const fu_VEC<T>& b) noexcept
{
    if (!a.size())
        return fu_VEC<T>(b);

    fu_VEC<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}

template <typename A, typename B,
    typename T  = typename A::fu_VIEW_value_type,
    typename T2 = typename B::fu_VIEW_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu_VEC<T> operator+(const A& a, const B& b) noexcept
{
    fu_VEC<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}

template <typename T>
inline fu_VEC<T> operator+(const fu_VEC<T>& a, const fu_VEC<T>& b) noexcept
{
    if (!a.size())
        return fu_VEC<T>(b);
    if (!b.size())
        return fu_VEC<T>(a);

    fu_VEC<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}
