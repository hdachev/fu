#pragma once

#include <type_traits>

#include "./util.h"

namespace fu {

template <typename T>
struct view
{
    typedef const T value_type;
    typedef const T fu_VIEW_value_type;
    typedef const T fu_ANY_value_type;

    const T* m_data;
    int32_t m_size;

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
    auto pd = a.data_mut();
    auto ps = b.data();

    assert((pd >= ps + s || pd + s <= ps)
        && "TODO view_assign: memcpy instead of memmove,"
           " we shouldnt be able to pass in overlapping ranges.");

    if (pd != ps && s)
        std::memmove(pd, ps, s);
}

template <typename V0, typename V1>
fu_INL void view_assign(V0&& a, const V1& b) noexcept
{
    return view_assign(a, b);
}

} // namespace
