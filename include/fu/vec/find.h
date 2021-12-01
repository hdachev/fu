#pragma once

#include "./cmp.h"
#include "../inl.h"
#include "../algo/fbstring_lfind.h"

// memchr
#include <string.h>
#include <type_traits>

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

    return fbstring_lfind(
        haystack.data(), size,
        needle.data(), needle.size(), start);
}

// lfind substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
S lfind(const H& haystack, const N& needle, S start) noexcept
{
    S size = haystack.size();

    assert(start >= 0 && start <= size);
    start = start >    0 ? start :    0;
    start = start < size ? start : size;

    return fbstring_lfind(
        haystack.data(), size,
        needle.data(), needle.size(), start);
}

// lfind substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
S lfind(const H& haystack, const N& needle, S start, S end) noexcept
{
    S size = haystack.size();

    assert(start >= 0 && start <= size);
    start = start >    0 ? start :    0;
    start = start < size ? start : size;

    assert(end >= start && end <= size);
    size  = size  <  end ? size  :  end;
    size  = size  >    0 ? size  :    0;

    return fbstring_lfind(
        haystack.data(), size,
        needle.data(), needle.size(), start);
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
