#pragma once

#include "../vec.h"

namespace fu {


    // Moving.

    template <typename T>
    fu::vec<T> slice(fu::vec<T>&& v, fu::i start) noexcept {
        v.shift(start);
        return static_cast<fu::vec<T>&&>(v);
    }

    template <typename T>
    fu::vec<T> slice(fu::vec<T>&& v, fu::i start, fu::i end) noexcept {
        v.shift_pop(start, v.size() - end);
        return static_cast<fu::vec<T>&&>(v);
    }

    template <typename T>
    fu_INL fu::vec<T> substr(fu::vec<T>&& v, fu::i start, fu::i count) noexcept {
        return slice(static_cast<fu::vec<T>&&>(v), start, start + count);
    }


    // Copying.

    template <typename T>
    fu::vec<T> slice(const fu::vec<T>& v, fu::i start, fu::i end) noexcept
    {
        // Avoid-alloc for slice(0) strings.
        if constexpr (fu::vec<T>::TRIVIAL)
            if (!start && end > fu::vec<T>::SMALL_CAPA)
                return slice(
                    fu::vec<T>(v), 0, end);

        // The usual.
        fu::i s = v.size();
        assert(start >= 0 && start <= end && end <= s);

        fu::vec<T> result;

        end         = end < s ? end : s;
        start       = start > 0 ? start : 0;
        fu::i count = end - start;
        count       = count > 0 ? count : 0;

        const T* src = v.data();
        result.UNSAFE__init_copy(src + start, count);

        return result;
    }

    template <typename T>
    fu_INL fu::vec<T> slice(const fu::vec<T>& v, fu::i start) noexcept {
        return slice(v, start, v.size());
    }

    template <typename T>
    fu_INL fu::vec<T> substr(const fu::vec<T>& v, fu::i start, fu::i count) noexcept {
        return slice(v, start, start + count);
    }

} // namespace
