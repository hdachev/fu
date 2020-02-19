#pragma once

#include "../vec.h"

namespace fu {


    // Moving.

    template <typename T>
    fu_VEC<T> slice(fu_VEC<T>&& v, i32 start) noexcept {
        v.shift(start);
        return static_cast<fu_VEC<T>&&>(v);
    }

    template <typename T>
    fu_VEC<T> slice(fu_VEC<T>&& v, i32 start, i32 end) noexcept {
        v.shift_pop(start, v.size() - end);
        return static_cast<fu_VEC<T>&&>(v);
    }

    template <typename T>
    fu_INL fu_VEC<T> substr(fu_VEC<T>&& v, i32 start, i32 count) noexcept {
        return slice(static_cast<fu_VEC<T>&&>(v), start, start + count);
    }


    // Copying.

    template <typename T>
    fu_VEC<T> slice(const fu_VEC<T>& v, i32 start, i32 end) noexcept
    {
        // Avoid-alloc for slice(0) strings.
        if constexpr (fu_CONFIG<T>::TRIVIAL)
            if (!start && end > fu_CONFIG<T>::SMALL_CAPA)
                return slice(
                    fu_VEC<T>(v), 0, end);

        // The usual.
        i32 s = v.size();
        assert(start >= 0 && start <= end && end <= s);

        fu_VEC<T> result;

        end         = end < s ? end : s;
        start       = start > 0 ? start : 0;
        i32 count   = end - start;
        count       = count > 0 ? count : 0;

        const T* src = v.data();
        result.UNSAFE__init_copy(src + start, count);

        return result;
    }

    template <typename T>
    fu_INL fu_VEC<T> slice(const fu_VEC<T>& v, i32 start) noexcept {
        return slice(v, start, v.size());
    }

    template <typename T>
    fu_INL fu_VEC<T> substr(const fu_VEC<T>& v, i32 start, i32 count) noexcept {
        return slice(v, start, start + count);
    }

} // namespace
