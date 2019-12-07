#pragma once

#include "std.h"

namespace fu {

template <typename T>
struct span
{
    T* m_data;
    T* m_end;

    span() = default;

    span(const span&) = default;
    span& operator=(const span&) = default;
    span(span&&) = default;
    span& operator=(span&&) = default;

    template <  typename V,
                typename = decltype(
                    m_data = ((V*)1)->data()
                )>
    inline span(const V& v) {
        m_data = v.data();
        m_end = m_data + v.size();
    }

    template <  typename V,
                typename = decltype(
                    m_data = ((V*)1)->mut_data()
                )>
    inline span(V& v) {
        m_data = v.mut_data();
        m_end = m_data + v.size();
    }

    inline const T* data() const {
        return m_data;
    }

    inline T* mut_data() {
        return m_data;
    }

    inline const T* end() const {
        return m_end;
    }

    inline T* mut_end() {
        return m_end;
    }

    inline int size() const {
        int s = int(m_end - m_data);
        assert(s >= 0);
        return s;
    }

    inline uint64_t u_size() const {
        return m_end - m_data;
    }
};

} // namespace
