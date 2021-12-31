#pragma once

#include <utility>

namespace fu {

// Currently there's no clean way to do this,
//  because bck doesn't allow refs to two array elements.

template <typename V>
fu_INL void view_swap(V& a, fu::i x, fu::i y) noexcept
{
    std::swap(a.mutref(x), a.mutref(y));
}

} // namespace
