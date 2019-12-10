#pragma once

#include "util.h"

namespace fu {

template <typename T>
struct span
{
    const T*  m_data;
          i32 m_size;

    span() = default;

               span(const span&) = default;
    span& operator=(const span&) = default;
               span(span&&) = default;
    span& operator=(span&&) = default;

    template <typename V>
    fu_INL span(const V& v) noexcept
        : m_data { v.data() }
        , m_size { v.size() }
    {}

    fu_INL const T* data() const noexcept {
        return m_data;
    }

    fu_INL const T* end() const noexcept {
        return m_data + m_size;
    }

    fu_INL i32 size() const noexcept {
        return m_size;
    }

    fu_INL explicit operator bool() const noexcept {
        return m_size;
    }

    fu_INL const T& operator[](i32 idx) const noexcept {
        const T* ok = m_data + idx;
        return (u32) idx < (u32) m_size
             ? *ok
             : *((T*)1);
    }
};

} // namespace
