#pragma once

#include <type_traits>

#include "./inl.h"

namespace fu {

template <typename T>
struct view
{
    typedef T value_type;
    typedef T fu_VIEW_value_type;
    typedef T fu_ANY_value_type;

    const T* m_data;
    int32_t m_size;

    fu_INL view() noexcept
        : m_data { nullptr }
        , m_size { 0 }
    {}

    fu_INL view(const T* data, int32_t size) noexcept
        : m_data { data }
        , m_size { size }
    {}

    template <typename V>
    fu_INL view(const V& vec) noexcept
        : m_data { vec.data() }
        , m_size { vec.size() }
    {}

    fu_INL const T* data() const noexcept {
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

    fu_INL explicit operator bool() const noexcept
    {
        return m_size != 0;
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

    fu_INL view_mut(T* data, int32_t size) noexcept
        : m_data { data }
        , m_size { size }
    {}

    template <typename V>
    fu_INL view_mut(V& vec) noexcept
        : m_data { vec.data_mut() }
        , m_size { vec.size() }
    {}

    fu_INL const T* data() const noexcept {
        return m_data;
    }

    fu_INL T* data_mut() noexcept {
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

    fu_INL explicit operator bool() const noexcept
    {
        return m_size != 0;
    }
};


// Slice api -

template <typename V, typename T = typename V::value_type>
view<T> get_view(const V& v, int32_t start, int32_t end) noexcept
{
    auto size = v.size();
    assert(start >= 0 && start <= end && (size_t)end <= (size_t)size);

    end     = end   > 0 ? end   : 0;
    start   = start > 0 ? start : 0;

    end     = (uint32_t)end <= (uint32_t)size ? end : size;
    start   = start < end ? start : end;

    return view<T>(
        v.data() + start,
        end - start);
}

template <typename V, typename T = typename V::value_type>
view_mut<T> get_view_mut(V& v, int32_t start, int32_t end) noexcept
{
    auto size = v.size();
    assert(start >= 0 && start <= end && (size_t)end <= (size_t)size);

    end     = end   > 0 ? end   : 0;
    start   = start > 0 ? start : 0;

    end     = (uint32_t)end <= (uint32_t)size ? end : size;
    start   = start < end ? start : end;

    return view_mut<T>(
        v.data_mut() + start,
        end - start);
}

template <typename T>
fu_INL view_mut<T> get_view_mut(view_mut<T>&& v, int32_t start, int32_t end) noexcept
{
    return get_view_mut(v, start, end);
}


// Experimental -
//  reinterpret cast for views over trivial data.

template <typename Dest, typename V, typename Src = typename V::value_type>
view<Dest> into_view(const V& src) noexcept
{
    char* start = (char*) src.data();

    size_t  src_size = src.size();
    size_t dest_size = src_size * sizeof(Src) / sizeof(Dest);

    // Exact fit.
    assert(size_t(start) % alignof(Dest) == 0
        && dest_size * sizeof(Dest) / sizeof(Src) == src_size);

    return view<Dest>(
        (Dest*) start,
                dest_size);
}

template <typename Dest, typename V, typename Src = typename V::value_type>
view_mut<Dest> into_view_mut(V& src) noexcept
{
    char* start = (char*) src.data_mut();

    size_t  src_size = src.size();
    size_t dest_size = src_size * sizeof(Src) / sizeof(Dest);

    // Exact fit.
    assert(size_t(start) % alignof(Dest) == 0
        && dest_size * sizeof(Dest) / sizeof(Src) == src_size);

    return view_mut<Dest>(
        (Dest*) start,
                dest_size);
}

template <typename Dest, typename V>
fu_INL view_mut<Dest> into_view_mut(V&& src) noexcept
{
    return into_view_mut<Dest>(src);
}


//

template <typename Dest, typename V>
fu_INL view<Dest> view_of(const V& src, const Dest&) noexcept
{
    return into_view<Dest>(src);
}

template <typename Dest, typename V>
fu_INL view_mut<Dest> view_of_mut(V&& src, const Dest&) noexcept
{
    return into_view_mut<Dest>(src);
}


//

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
