#pragma once

#include "../str.h"
#include "./concat.h"

namespace fu {

inline fu_STR join(
    const fu_VEC<fu_STR>& vec,
    const fu_STR& sep)
{
    int len = sep.size() *
            ( vec.size() ? vec.size() - 1 : 0 );

    for (int i = 0; i < vec.size(); i++)
        len += vec[i].size();

    fu_STR result;
    result.reserve(len);
    for (int i = 0; i < vec.size(); i++) {
        if (i)
            result += sep;

        result += vec[i];
    }

    return result;
}

} // namespace
