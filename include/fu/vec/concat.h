#pragma once

#include "../vec.h"


// String & array concat.

template <typename T>
inline fu::vec<T> operator+(fu::vec<T>&& a, fu::vec<T>&& b) noexcept {
    a.append(fu_ZERO(), static_cast<fu::vec<T>&&>(b));
    return static_cast<fu::vec<T>&&>(a);
}

template <typename A, typename B,
    typename T  = typename A::fu_GROW_value_type,
    typename T2 = typename B::fu_OWN_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline A& operator+=(A& a, B&& b) noexcept {
    a.append(fu_ZERO(), static_cast<B&&>(b));
    return a;
}

template <typename A, typename B,
    typename T  = typename A::fu_VIEW_value_type,
    typename T2 = typename B::fu_OWN_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline A&& operator+=(A&& a, B&& b) noexcept {
    a.append(fu_ZERO(), static_cast<B&&>(b));
    return static_cast<A&&>(a);
}


// Non vec veclike appends.

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(fu::vec<T>&& a, const V& b) noexcept {
    a.append(fu_ZERO(), b);
    return static_cast<fu::vec<T>&&>(a);
}

template <typename V, typename T,
    typename T2 = typename V::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(const V& b, fu::vec<T>&& a) noexcept {
    a.splice(fu_ZERO(), fu_ZERO(), b);
    return static_cast<fu::vec<T>&&>(a);
}

template <typename A, typename B,
    typename T  = typename A::fu_GROW_value_type,
    typename T2 = typename B::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline A& operator+=(A& a, const B& b) noexcept {
    a.append(fu_ZERO(), b);
    return a;
}

template <typename A, typename B,
    typename T  = typename A::fu_VIEW_value_type,
    typename T2 = typename B::fu_ANY_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline A&& operator+=(A&& a, const B& b) noexcept {
    a.append(fu_ZERO(), b);
    return static_cast<A&&>(a);
}


// Fallback - two veclikes.

template <typename V, typename T,
    typename T2 = typename V::fu_VIEW_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(const fu::vec<T>& a, const V& b) noexcept
{
    if (!b.size())
        return fu::vec<T>(a);

    fu::vec<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}

template <typename V, typename T,
    typename T2 = typename V::fu_VIEW_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(const V& a, const fu::vec<T>& b) noexcept
{
    if (!a.size())
        return fu::vec<T>(b);

    fu::vec<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}

template <typename A, typename B,
    typename T  = typename A::fu_VIEW_value_type,
    typename T2 = typename B::fu_VIEW_value_type,
    typename = decltype(*((T**)1)=((T2*)2))>
inline fu::vec<T> operator+(const A& a, const B& b) noexcept
{
    fu::vec<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}

template <typename T>
inline fu::vec<T> operator+(const fu::vec<T>& a, const fu::vec<T>& b) noexcept
{
    if (!a.size())
        return fu::vec<T>(b);
    if (!b.size())
        return fu::vec<T>(a);

    fu::vec<T> vec;
    vec.UNSAFE__init_copy(a.data(), a.size(), b.data(), b.size());
    return vec;
}
