#pragma once

#include "std.h"

namespace fu {

template <typename T>
struct span
{
    typedef char value_type;

    T*  m_data;
    int m_size;
    // int m_capa; // could enable some weird tricks

    span() = default;

    span(const span&) = default;
    span& operator=(const span&) = default;
    span(span&&) = default;
    span& operator=(span&&) = default;

    template <  typename V,
                typename = decltype(
                    m_data = ((V*)1)->data()
                )>
    inline span(const V& v) noexcept
    {
        m_data = v.data();
        m_size = v.size();
    }

    template <  typename V,
                typename = decltype(
                    m_data = ((V*)1)->mut_data()
                )>
    inline span(V& v)
    {
        m_data = v.mut_data();
        m_size = v.size();
    }

    inline const T* data() const noexcept {
        return m_data;
    }

    inline T* mut_data() noexcept {
        return m_data;
    }

    inline const T* end() const noexcept {
        return m_data + m_size;
    }

    inline T* mut_end() noexcept {
        return m_data + m_size;
    }

    inline int size() const noexcept {
        return m_size;
    }
};

} // namespace
