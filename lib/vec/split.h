#pragma once

#include "../str.h"
#include "find.h"

namespace fu {

template <  typename H, typename S,
            typename T = typename H::value_type
                >
inline fu_VEC<fu_VEC<T>> split(const H& str, const S& sep)
{
    fu_VEC<fu_VEC<T>> result;

    int last = 0;
    int next;
    while ((next = fu::lfind(str, sep, last)) >= 0)
    {
        result.push(
            slice(str, last, next));

        last = next + sep.size();
    }

    result.push(
        slice(str, last));

    return result;
}

}
