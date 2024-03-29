#pragma once

#include <cstddef> // size_t
#include <cassert>

#include "./inl.h"
#include "./int.h"

namespace fu {

template <typename T>
struct view
{
    typedef T value_type;
    typedef T fu_VIEW_value_type;
    typedef T fu_ANY_value_type;

    const T*    m_data;
    fu::i       m_size;

    fu_INL constexpr view() noexcept
        : m_data { nullptr }
        , m_size { 0 }
    {}

    fu_INL constexpr view(const T* data, fu::i size) noexcept
        : m_data { data }
        , m_size { size }
    {}

    template <typename V, typename = decltype(*((const T**)1) = (*(V*)1).data())>
    fu_INL constexpr view(const V& vec) noexcept
        : m_data { vec.data() }
        , m_size { vec.size() }
    {}

    fu_INL const T* data() const noexcept {
        return m_data;
    }

    fu_INL fu::i size() const noexcept {
        return m_size;
    }

    fu_INL const T& operator[](fu::i idx) const noexcept
    {
        const T* ok = m_data + idx;

        #ifndef NDEBUG
        assert((fu::u) idx < (fu::u) m_size);
        return *ok;
        #endif

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) m_size
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL explicit operator bool() const noexcept
    {
        return m_size != 0;
    }


    // cpp iteration.

    const T* begin() const noexcept {
        return data();
    }

    const T* end() const noexcept {
        return data() + size();
    }


    // fu::view {{ literals }}

    template<size_t size>
    constexpr view(T(&&data)[size])
        : m_data { data }
        , m_size { (fu::i) size }
    {}


    // Redundant for views, but needed for vec_ranges,
    //  where regular = assignment writes to the underlying array.

    fu_INL view& ptr_reassign(view other) noexcept {
        return *this = other;
    }
};

template <typename T>
struct view_mut
{
    typedef T value_type;
    typedef T fu_VIEW_value_type;
    typedef T fu_ANY_value_type;

    T*          m_data;
    fu::i       m_size;

    fu_INL view_mut() noexcept
        : m_data { nullptr }
        , m_size { 0 }
    {}

    fu_INL view_mut(T* data, fu::i size) noexcept
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

    fu_INL fu::i size() const noexcept {
        return m_size;
    }

    fu_INL const T& operator[](fu::i idx) const noexcept
    {
        const T* ok = m_data + idx;

        #ifndef NDEBUG
        assert((fu::u) idx < (fu::u) m_size);
        return *ok;
        #endif

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) m_size
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL T& mutref(fu::i idx) noexcept
    {
        T* ok = m_data + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) m_size
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL explicit operator bool() const noexcept
    {
        return m_size != 0;
    }


    // cpp iteration.

    T* begin() noexcept {
        return data_mut();
    }

    T* end() noexcept {
        return data_mut() + size();
    }


    // Redundant for views, but needed for vec_ranges,
    //  where regular = assignment writes to the underlying array.

    fu_INL view_mut& ptr_reassign(view_mut other) noexcept {
        return *this = other;
    }
};


// Slice literals -

template <fu::i m_size, typename T>
struct slate
{
    typedef T value_type;
    typedef T fu_VIEW_value_type; // i guess this is how we match non-vecs?
    typedef T fu_ANY_value_type;

    static_assert(m_size > 0);

    T m_data[(size_t) m_size];

    slate(const slate&)             = delete;
    slate(slate&&)                  = delete;
    slate& operator=(const slate&)  = delete;
    slate& operator=(slate&&)       = delete;

    fu_INL const T* data() const noexcept {
        return m_data;
    }

    fu_INL T* data_mut() noexcept {
        return m_data;
    }

    fu_INL fu::i size() const noexcept {
        return m_size;
    }

    fu_INL const T& operator[](fu::i idx) const noexcept
    {
        const T* ok = m_data + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) m_size
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL T& mutref(fu::i idx) noexcept
    {
        T* ok = m_data + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) m_size
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL explicit operator bool() const noexcept {
        return m_size != 0;
    }
};


// Slice api -

template <typename V, typename T = typename V::value_type>
view<T> get_view(const V& v, fu::i start) noexcept
{
    auto end = v.size();
    assert(start >= 0 && start <= end);

    start   = start > 0   ? start : 0;
    start   = start < end ? start : end;

    return view<T>(
        v.data() + start,
        end - start);
}

template <typename V, typename T = typename V::value_type>
view<T> get_view_start0(const V& v, fu::i end) noexcept
{
    auto size = v.size();
    assert(end >= 0 && (size_t)end <= (size_t)size);

    end     = end > 0 ? end : 0;
    end     = (fu::u)end <= (fu::u)size ? end : size;

    return view<T>(
        v.data(),
        end);
}

template <typename V, typename T = typename V::value_type>
view<T> get_view(const V& v, fu::i start, fu::i end) noexcept
{
    auto size = v.size();
    assert(start >= 0 && start <= end && (size_t)end <= (size_t)size);

    end     = end   > 0 ? end   : 0;
    start   = start > 0 ? start : 0;

    end     = (fu::u)end <= (fu::u)size ? end : size;
    start   = start < end ? start : end;

    return view<T>(
        v.data() + start,
        end - start);
}

template <typename V, typename T = typename V::value_type>
view_mut<T> get_view_mut(V& v, fu::i start) noexcept
{
    auto end = v.size();
    assert(start >= 0 && start <= end);

    start   = start > 0   ? start : 0;
    start   = start < end ? start : end;

    return view_mut<T>(
        v.data_mut() + start,
        end - start);
}

template <typename V, typename T = typename V::value_type>
view_mut<T> get_view_start0_mut(V& v, fu::i end) noexcept
{
    auto size = v.size();
    assert(end >= 0 && (size_t)end <= (size_t)size);

    end     = end > 0 ? end : 0;
    end     = (fu::u)end <= (fu::u)size ? end : size;

    return view_mut<T>(
        v.data_mut(),
        end);
}

template <typename V, typename T = typename V::value_type>
view_mut<T> get_view_mut(V& v, fu::i start, fu::i end) noexcept
{
    auto size = v.size();
    assert(start >= 0 && start <= end && (size_t)end <= (size_t)size);

    end     = end   > 0 ? end   : 0;
    start   = start > 0 ? start : 0;

    end     = (fu::u)end <= (fu::u)size ? end : size;
    start   = start < end ? start : end;

    return view_mut<T>(
        v.data_mut() + start,
        end - start);
}

template <typename T>
fu_INL view_mut<T> get_view_mut(view_mut<T>&& v, fu::i start) noexcept
{
    return get_view_mut(v, start);
}

template <typename T>
fu_INL view_mut<T> get_view_mut(view_mut<T>&& v, fu::i start, fu::i end) noexcept
{
    return get_view_mut(v, start, end);
}


// Experimental -
//  reinterpret cast for views over trivial data.

template <typename Dest, typename V, typename Src = typename V::value_type>
view<Dest> into_view(const V& src) noexcept
{
    char* start = (char*) src.data();

    size_t  src_size = (size_t) src.size();
    size_t dest_size = src_size * sizeof(Src) / sizeof(Dest);

    // Exact fit.
    assert(size_t(start) % alignof(Dest) == 0
        && dest_size * sizeof(Dest) / sizeof(Src) == src_size);

    return view<Dest>(
        (Dest*) start,
        (fu::i) dest_size);
}

template <typename Dest, typename V, typename Src = typename V::value_type>
view_mut<Dest> into_view_mut(V& src) noexcept
{
    char* start = (char*) src.data_mut();

    size_t  src_size = (size_t) src.size();
    size_t dest_size = src_size * sizeof(Src) / sizeof(Dest);

    // Exact fit.
    assert(size_t(start) % alignof(Dest) == 0
        && dest_size * sizeof(Dest) / sizeof(Src) == src_size);

    return view_mut<Dest>(
        (Dest*) start,
        (fu::i) dest_size);
}

template <typename Dest, typename V>
fu_INL view_mut<Dest> into_view_mut(V&& src) noexcept
{
    return into_view_mut<Dest>(src);
}



template <typename Dest, typename V>
fu_INL view<Dest> view_of(const V& src) noexcept
{
    return into_view<Dest>(src);
}

template <typename Dest, typename V>
fu_INL view_mut<Dest> view_of_mut(V&& src) noexcept
{
    return into_view_mut<Dest>(src);
}


// TODO REMOVE //
template <typename Dest, typename V>
fu_INL view<Dest> view_of(const V& src, const Dest&) noexcept {
    return into_view<Dest>(src);
}
// TODO REMOVE //
template <typename Dest, typename V>
fu_INL view_mut<Dest> view_of_mut(V&& src, const Dest&) noexcept {
    return into_view_mut<Dest>(src);
}
// TODO REMOVE //


} // namespace
