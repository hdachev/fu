#pragma once

#include "../util.h"
#include "../algo/fbstring_lfind.h"

namespace fu
{

// lfind substr
template <  typename H, typename N,
            typename S = decltype(((H*)1)->size() + ((N*)1)->size()),
            typename D = decltype(((H*)1)->data() - ((N*)1)->data())
                >
S lfind(const H& haystack, const N& needle, S start = S(0)) noexcept
{
    return fbstring_lfind(
        haystack.data(), haystack.size(),
        needle.data(), needle.size(), start);
}

// lfind character
template <  typename V,
            typename S = decltype(((V*)1)->size())
                >
S lfind(const V& vec, const typename V::value_type& item, S start = S(0)) noexcept
{
    auto* data = vec.data();
    auto size  = vec.size();

    start = start >= S(0) ? start : S(0);
    start = start <= size ? start : size;

    auto* i0 = data + start;
    auto* i1 = data + size;
    for (auto* i = i0; i < i1; i++)
        if (*i == item)
            return S(i - i0);

    return S(-1);
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

// starts with char
template <  typename V,
            typename S = decltype(((V*)1)->size())
                >
bool lmatch(const V& vec, const typename V::value_type& item, S start = S(0)) noexcept
{
    auto* data = vec.data();
    auto size  = vec.size();
    start = start >= S(0) ? start : S(0);
    start = start <= size ? start : size;

    return size > start && data[start] == item;
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
