#pragma once

#include "../vec.h"

namespace fu {


    // Moving.

    template <typename T>
    fu_VEC<T> slice(fu_VEC<T>&& v, fu::i start) noexcept {
        v.shift(start);
        return static_cast<fu_VEC<T>&&>(v);
    }

    template <typename T>
    fu_VEC<T> slice(fu_VEC<T>&& v, fu::i start, fu::i end) noexcept {
        v.shift_pop(start, v.size() - end);
        return static_cast<fu_VEC<T>&&>(v);
    }

    template <typename T>
    fu_INL fu_VEC<T> substr(fu_VEC<T>&& v, fu::i start, fu::i count) noexcept {
        return slice(static_cast<fu_VEC<T>&&>(v), start, start + count);
    }


    // Copying.

    template <typename T>
    fu_VEC<T> slice(const fu_VEC<T>& v, fu::i start, fu::i end) noexcept
    {
        // Avoid-alloc for slice(0) strings.
        if constexpr (fu_VEC<T>::TRIVIAL)
            if (!start && end > fu_VEC<T>::SMALL_CAPA)
                return slice(
                    fu_VEC<T>(v), 0, end);

        // The usual.
        fu::i s = v.size();
        assert(start >= 0 && start <= end && end <= s);

        fu_VEC<T> result;

        end         = end < s ? end : s;
        start       = start > 0 ? start : 0;
        fu::i count = end - start;
        count       = count > 0 ? count : 0;

        const T* src = v.data();
        result.UNSAFE__init_copy(src + start, count);

        return result;
    }

    template <typename T>
    fu_INL fu_VEC<T> slice(const fu_VEC<T>& v, fu::i start) noexcept {
        return slice(v, start, v.size());
    }

    template <typename T>
    fu_INL fu_VEC<T> substr(const fu_VEC<T>& v, fu::i start, fu::i count) noexcept {
        return slice(v, start, start + count);
    }

} // namespace
