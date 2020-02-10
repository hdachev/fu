#pragma once

#include "../vec.h"

namespace fu {


    // Moving.

    template <typename T>
    fu_VEC<T> slice(fu_VEC<T>&& v, i32 start) noexcept {
        v.trim(start);
        return static_cast<fu_VEC<T>&&>(v);
    }

    template <typename T>
    fu_VEC<T> slice(fu_VEC<T>&& v, i32 start, i32 end) noexcept {
        v.trim(start, end);
        return static_cast<fu_VEC<T>&&>(v);
    }

    template <typename T>
    fu_INL fu_VEC<T> substr(fu_VEC<T>&& v, i32 start, i32 count) noexcept {
        return slice(static_cast<fu_VEC<T>&&>(v), start, start + count);
    }


    // Copying.

    template <typename T>
    fu_VEC<T> slice(const fu_VEC<T>& v, i32 start, i32 end) noexcept {
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
