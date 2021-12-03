#pragma once

#include <cassert>
#include <type_traits>

namespace fu {

template <typename V0, typename V1,
    typename T0 = typename V0::value_type,
    typename T1 = typename V1::value_type>
fu_INL void view_assign(V0& a, const V1& b) noexcept
{
    static_assert(
        std::is_trivially_destructible<T0>::value &&
        std::is_trivially_destructible<T1>::value,
            "TODO view_assign: non-trivial view assign.");

    static_assert(
        sizeof(T0) % sizeof(T1) == 0 ||
        sizeof(T1) % sizeof(T0) == 0,
            "view_assign: neither T0/T1 is size-mod the other.");

    auto s0 = a.size() * sizeof(T0);
    auto s1 = b.size() * sizeof(T1);
    assert(s0 == s1);

    auto s  = s0 < s1 ? s0 : s1;
    auto pd = reinterpret_cast<char*>       (a.data_mut());
    auto ps = reinterpret_cast<const char*> (b.data()    );

    assert((pd <= ps - s || pd >= ps + s) &&
        "view_assign: mutptr aliasing, "
        "TODO use memcpy instead of memmove.");

    if (pd != ps && s)
        std::memmove(pd, ps, s);
}

template <typename V0, typename V1>
fu_INL void view_assign(V0&& a, const V1& b) noexcept
{
    return view_assign(a, b);
}

} // namespace
