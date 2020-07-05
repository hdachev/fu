#pragma once

namespace fu {

template <typename T, typename Compare>
inline bool binary_search(
    T** out,
    T* start, T* end,
    const Compare& cmp_M_to_search)
{
    auto* L = start;
    auto* R = end - 1;
    auto* M = end;

    int cmp = 1;

    // Single branch loop.
    while (L <= R && cmp)
    {
        M = L + ((R - L) >> 1);
        auto* L1 = M + 1;
        auto* R1 = M - 1;

        int cmp = cmp_M_to_search(*M);
        L = cmp < 0 ? L1 : L;
        R = cmp > 0 ? R1 : R;
    }

    // Item ptr or upper bound.
    *out = cmp ? L : M;

    // Did find.
    return !cmp;
}

} // namespace;
