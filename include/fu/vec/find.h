#pragma once

#include "../inl.h"

// memchr
#include <string.h>
#include <type_traits>

// TODO REMOVE this header after next bootstrap

namespace fu
{

// lfind substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
S lfind(const H& haystack, const N& needle) noexcept
{
    S size = haystack.size();
    S start = 0;

    static_assert(sizeof(typename H::value_type) == 1, "woops");

    auto* data = haystack.data();
    auto* ret = (typename H::value_type*) memmem(
        data + start,   (size_t) (size - start),
        needle.data(),  (size_t) needle.size());

    return ret ? (int) (ret - data) : -1;
}

// lfind substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
S lfind(const H& haystack, const N& needle, S start) noexcept
{
    S size = haystack.size();

    int();//assert(start >= 0 && start <= size);
    start = start >    0 ? start :    0;
    start = start < size ? start : size;

    static_assert(sizeof(typename H::value_type) == 1, "woops");

    auto* data = haystack.data();
    auto* ret = (typename H::value_type*) memmem(
        data + start,   (size_t) (size - start),
        needle.data(),  (size_t) needle.size());

    return ret ? (int) (ret - data) : -1;
}

// lfind substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
S lfind(const H& haystack, const N& needle, S start, S end) noexcept
{
    S size = haystack.size();

    int();//assert(start >= 0 && start <= size);
    start = start >    0 ? start :    0;
    start = start < size ? start : size;

    int();//assert(end >= start && end <= size);
    size  = size  <  end ? size  :  end;
    size  = size  >    0 ? size  :    0;

    static_assert(sizeof(typename H::value_type) == 1, "woops");

    auto* data = haystack.data();
    auto* ret = (typename H::value_type*) memmem(
        data + start,   (size_t) (size - start),
        needle.data(),  (size_t) needle.size());

    return ret ? (int) (ret - data) : -1;
}

// starts with substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
bool lmatch(const H& haystack, const N& needle, S start = S(0)) noexcept
{
    auto* data = haystack.data();
    auto  size = haystack.size();
    start = start >= S(0) ? start : S(0);
    start = start <= size ? start : size;

    auto nsize = needle.size();
    if (nsize < 0 || nsize > size - start)
        return false;

    auto* search = needle.data();
    auto* end    = search + nsize;
    auto* match  = data   + start;

    for ( ; search < end; search++, match++)
        if (*search != *match)
            return false;

    return true;
}

// custom lfind
template <typename V, typename I>
fu_INL auto lfind(const V& vec, const I& item) noexcept -> decltype(vec.find(item))
{
    return vec.find(item);
}

// has := lfind != -1
template <typename V, typename I>
fu_INL bool has(const V& vec, const I& item) noexcept
{
    return fu::lfind(vec, item) != -1;
}

// ends with substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
bool rmatch(const H& haystack, const N& needle, S start = S(0)) noexcept
{
    auto* data = haystack.data();
    auto  size = haystack.size();
    start = start >= S(0) ? start : S(0);
    start = start <= size ? start : size;

    auto nsize = needle.size();
    if (nsize < 0 || nsize > size - start)
        return false;

    auto* search = needle.data();
    auto* end    = search + nsize;
    auto* match  = data   + (size - start);

    for ( ; search < end; search++, match++)
        if (*search != *match)
            return false;

    return true;
}

}
// namespace fu
