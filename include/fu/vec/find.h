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

// lfind character
template <  typename V,
            typename T = typename V::value_type,
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

    // memchr for byte sized scalars
    if constexpr (sizeof(T) == 1 && std::is_scalar<T>::value)
    {
        auto* i = (const T*)memchr(
            data ? i0 : (void*)&item, int(item), i1 - i0);

        return i ? S(i - data) : S(-1);
    }
    else
    {
        for (auto* i = i0; i < i1; i++)
            if (*i == item)
                return S(i - data);

        return S(-1);
    }
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

// starts with char
template <  typename V,
            typename S = decltype(((V*)1)->size())
                >
bool rmatch(const V& vec, const typename V::value_type& item, S start = S(0)) noexcept
{
    auto* data = vec.data();
    auto size  = vec.size();
    start = start >= S(0) ? start : S(0);
    start = start <= size ? start : size;

    return size > start && data[size - 1 - start] == item;
}

}
// namespace fu
