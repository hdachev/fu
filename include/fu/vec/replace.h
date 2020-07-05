#pragma once

#include "../vec.h"
#include "./find.h"

namespace fu {

// Consider having a version that takes replace by && -
//  this would make it possible to make a single replacement without copying anything.

template <typename T, typename S, typename R>
fu_VEC<T> replace(
    fu_VEC<T>&& subject,
    const S& search, const R& replace) noexcept
{
    int ssize   = search.size();
    int rsize   = replace.size();
    int pos     = 0;

    while ((pos = fu::lfind(subject, search, pos)) >= 0)
    {
        subject.splice(pos, ssize, replace);
        pos += rsize;
    }

    return static_cast<fu_VEC<T>&&>(subject);
}

template <  typename V, typename S, typename R,
            typename T = typename V::value_type  >
fu_VEC<T> replace(
    const V& subject,
    const S& s, const R& r) noexcept
{
    return replace(
        fu_VEC<T>(subject),
        s, r);
}

} // namespace
