#pragma once

#include "util.h"

namespace fu {

template <typename T>
struct view
{
    typedef const T value_type;
    typedef const T fu_VIEW_value_type;
    typedef const T fu_ANY_value_type;

    const T* m_data;
    int32_t m_size;

    template <typename V>
    view(const V& vec) noexcept
        : m_data { vec.data() }
        , m_size { vec.size() }
    {}

    const T* data() const noexcept {
        return m_data;
    }

    fu_INL int32_t size() const noexcept {
        return m_size;
    }

    fu_INL const T& operator[](int32_t idx) const noexcept
    {
        const T* ok = m_data + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (uint32_t) idx < (uint32_t) m_size
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL T& mutref(i32 idx) noexcept
    {
        T* ok = (T*) data() + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (u32) idx < (u32) size()
             ? *ok
             : *((T*)1);

        #endif
    }
};

template <typename T>
struct view_mut
{
    typedef T value_type;
    typedef T fu_VIEW_value_type;
    typedef T fu_ANY_value_type;

    T* m_data;
    int32_t m_size;

    template <typename V>
    view_mut(V& vec) noexcept
        : m_data { vec.mut_data() }
        , m_size { vec.size() }
    {}

    const T* data() const noexcept {
        return m_data;
    }

    T* mut_data() noexcept {
        return m_data;
    }

    fu_INL int32_t size() const noexcept {
        return m_size;
    }

    fu_INL const T& operator[](int32_t idx) const noexcept
    {
        const T* ok = m_data + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (uint32_t) idx < (uint32_t) m_size
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL T& mutref(i32 idx) noexcept
    {
        T* ok = m_data + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (uint32_t) idx < (uint32_t) m_size
             ? *ok
             : *((T*)1);

        #endif
    }
};

} // namespace
