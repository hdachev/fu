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

template <typename V, typename T,
    typename Exact = typename V::fu_GROW_value_type,
    typename = decltype( *((Exact**)1) = ((T*)1) )>
inline V& operator+=(V& a, T&& b) noexcept {
    a.push(static_cast<T&&>(b));
    return a;
}

template <typename V, typename T,
    typename Exact = typename V::fu_VIEW_value_type,
    typename = decltype( *((Exact**)1) = ((T*)1) )>
inline V&& operator+=(V&& a, T&& b) noexcept {
    a.push(static_cast<T&&>(b));
    return static_cast<V&&>(a);
}

#ifdef TODO_FIX_REMOVE_copying_push
// Single item appends (copy-one).

template <typename T, typename Conv,
    typename = decltype( *((T*)1) = T(*(Conv*)1) )>
inline fu::vec<T> operator+(fu::vec<T>&& a, const Conv& b) noexcept {
    a.push(T(b));
    return static_cast<fu::vec<T>&&>(a);
}

template <typename T, typename Conv,
    typename = decltype( *((T*)1) = T(*(Conv*)1) )>
inline fu::vec<T> operator+(const Conv& a, fu::vec<T>&& b) noexcept {
    b.unshift(T(a));
    return static_cast<fu::vec<T>&&>(b);
}

template <typename V, typename Conv,
    typename T = typename V::fu_GROW_value_type,
    typename = decltype( *((T*)1) = T(*(Conv*)1) )>
inline V& operator+=(V& a, const Conv& b) noexcept {
    a.push(b);
    return a;
}

template <typename V, typename Conv,
    typename T = typename V::fu_VIEW_value_type,
    typename = decltype( *((T*)1) = T(*(Conv*)1) )>
inline V&& operator+=(V&& a, const Conv& b) noexcept {
    a.push(b);
    return static_cast<V&&>(a);
}
#endif


// Single item appends (copy).

template <typename V, typename T,
    typename Exact = typename V::fu_ANY_value_type,
    typename = decltype( *((Exact**)1) = ((T*)1) )>
inline fu::vec<T> operator+(const V& a, T&& b) noexcept {
    fu::vec<T> vec;

    vec.reserve(a.size() + 1);
    vec.append(fu_ZERO(), a);
    vec.push(static_cast<T&&>(b));

    return vec;
}

template <typename V, typename T,
    typename Exact = typename V::fu_ANY_value_type,
    typename = decltype( *((Exact**)1) = ((T*)1) )>
inline fu::vec<T> operator+(T&& a, const V& b) noexcept {
    fu::vec<T> vec;

    vec.reserve(b.size() + 1);
    vec.push(static_cast<T&&>(a));
    vec.append(fu_ZERO(), b);

    return vec;
}

#ifdef TODO_FIX_REMOVE_copying_push
template <typename V, typename Conv,
    typename T = typename V::fu_ANY_value_type,
    typename = decltype( *((T*)1) = T(*(Conv*)1) )>
inline fu::vec<T> operator+(const V& a, const Conv& b) noexcept {
    fu::vec<T> vec;

    vec.reserve(a.size() + 1);
    vec.append(fu_ZERO(), a);
    vec.push(T(b));

    return vec;
}

template <typename V, typename Conv,
    typename T = typename V::fu_ANY_value_type,
    typename = decltype( *((T*)1) = T(*(Conv*)1) )>
inline fu::vec<T> operator+(const Conv& a, const V& b) noexcept {
    fu::vec<T> vec;

    vec.reserve(b.size() + 1);
    vec.push(T(a));
    vec.append(fu_ZERO(), b);

    return vec;
}
#endif
