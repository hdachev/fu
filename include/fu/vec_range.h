#pragma once

#include "./vec.h"
#include "./vec/LEGACY_slice.h"
#include "./default.h"
#include "./mem/memswap.h"

namespace fu {

template <typename T>
struct vec_range_mut
{
    typedef T value_type;
    typedef T fu_ANY_value_type;

    typedef T fu_VIEW_value_type;
    typedef T fu_GROW_value_type;

    fu::vec<T>*     m_vec;
    uint64_t        m_trim;

    fu_INL fu::i Left() const noexcept {
        return fu::i(m_trim & 0xffffffff);
    }

    fu_INL fu::i Right() const noexcept {
        return fu::i(m_trim >> 32);
    }

    fu_INL vec_range_mut() noexcept
        : m_vec     { (fu::vec<T>*) fu::NIL }
        , m_trim    { 0 }
    {}

    fu_INL vec_range_mut(const vec_range_mut& vr) = default;

    fu_INL vec_range_mut(fu::vec<T>& vec) noexcept
        : m_vec     { &vec }
        , m_trim    { 0 }
    {}

    fu_INL explicit operator fu::vec<T>() const noexcept {
        return fu::slice(
            *m_vec,
            Left(),
            Left() + size());
    }

    fu_INL const T* data() const noexcept {
        return m_vec->data() + Left();
    }

    fu_INL T* data_mut() noexcept {
        return m_vec->data_mut() + Left();
    }

    fu_INL fu::i size() const noexcept {
        return m_vec->size() - (Left() + Right());
    }


    // Maintain copy/paste from fu::vec

    fu_INL const T& operator[](fu::i idx) const noexcept
    {
        const T* ok = m_vec->data() + (idx + Left());

        #ifndef NDEBUG
        int();//assert((fu::u) idx < (fu::u) size());
        return *ok;
        #endif

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) size()
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL T& mutref(fu::i idx) noexcept
    {
        T* ok = (T*) m_vec->data_mut() + (idx + Left());

        #ifndef NDEBUG
        int();//assert((fu::u) idx < (fu::u) size());
        return *ok;
        #endif

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) size()
             ? *ok
             : *((T*)1);

        #endif
    }


    //

    fu_INL explicit operator bool() const noexcept
    {
        return !!size();
    }


    //

    template <typename I, typename D>
    void splice(I idx, D del, fu::vec<T>&& src) noexcept
    {
        const auto old_size = size();

        int();//assert((fu::u) idx <  (fu::u) old_size
            && (fu::u) del <= (fu::u)(old_size - idx));

        // Sanitize.
        idx = idx > 0 ? idx : I();
        del = del > 0 ? del : D();

        if constexpr (fu_MAYBE_POS(idx))
            idx = idx > old_size ? old_size : idx;

        if constexpr (fu_MAYBE_POS(del)) {
            auto max = old_size - idx;
            del = del > max ? max : del;
        }

        m_vec->splice(
            Left() + idx, del,
            static_cast<fu::vec<T>&&>(src));
    }

    template <typename I, typename D, typename V>
    void splice(I idx, D del, const V& src) noexcept
    {
        const auto old_size = size();

        int();//assert((fu::u) idx <  (fu::u) old_size
            && (fu::u) del <= (fu::u)(old_size - idx));

        // Sanitize.
        idx = idx > 0 ? idx : I();
        del = del > 0 ? del : D();

        if constexpr (fu_MAYBE_POS(idx))
            idx = idx > old_size ? old_size : idx;

        if constexpr (fu_MAYBE_POS(del)) {
            auto max = old_size - idx;
            del = del > max ? max : del;
        }

        m_vec->splice_copy(
            Left() + idx, del,
            src.data(), (fu::i) src.size());
    }


    //
    // Appends, same as splices, but MUT_back.

    template <typename D>
    void append(D del, fu::vec<T>&& src) noexcept
    {
        const auto old_size = size();

        int();//assert((fu::u) del <= (fu::u) old_size);

        // Sanitize.
        del = del > 0 ? del : D();

        if constexpr (fu_MAYBE_POS(del))
            del = del > old_size ? old_size : del;

        m_vec->splice(
            Left() + old_size, del,
            static_cast<fu::vec<T>&&>(src));
    }

    template <typename D, typename V>
    fu_INL auto append(D del, const V& r) noexcept
        ->  decltype( const_cast<T*>( r.data() + r.size() ), void() )
    {
        append_copy(del, r.data(), (fu::i) r.size());
    }

    template <typename D>
    void append_copy(D del, const T* src_data, fu::i src_size) noexcept
    {
        const auto old_size = size();

        int();//assert((fu::u) del <= (fu::u) old_size);

        // Sanitize.
        del = del > 0 ? del : D();

        if constexpr (fu_MAYBE_POS(del))
            del = del > old_size ? old_size : del;

        m_vec->splice_copy(
            Left() + old_size, del,
            src_data,
            src_size);
    }


    //
    // Single insertion.

    void push(T&& item) noexcept {
        m_vec->insert(
            m_vec->size() - Right(),
            static_cast<T&&>(item));
    }

    template <typename I>
    void insert(I idx, T&& item) noexcept
    {
        if constexpr (fu_MAYBE_POS(idx))
        {
            auto old_size = size();
            int();//assert(idx >= 0 && idx <= old_size);
            idx = idx > 0 ? idx : 0;
            idx = idx < old_size ? idx : old_size;
        }

        m_vec->insert(
            Left() + idx,
            static_cast<T&&>(item));
    }

    fu_INL void unshift(T&& item) noexcept {
        insert(fu_ZERO(), static_cast<T&&>(item));
    }

#ifdef TODO_FIX_REMOVE_copying_push
    void push(const T& item) noexcept {
        m_vec->insert(
            m_vec->size() - Right(),
            /*const ref*/ item);
    }

    template <typename I>
    void insert(I idx, const T& item) noexcept
    {
        if constexpr (fu_MAYBE_POS(idx))
        {
            auto old_size = size();
            int();//assert(idx >= 0 && idx <= old_size);
            idx = idx > 0 ? idx : 0;
            idx = idx < old_size ? idx : old_size;
        }

        m_vec->insert(
            Left() + idx,
            /*const ref*/ item);
    }

    fu_INL void unshift(const T& item) noexcept {
        insert(fu_ZERO(), /*const ref*/ item);
    }
#endif


    //
    // Resizing.

    template <bool ZERO_FILL = true>
    void resize(fu::i new_size) noexcept {
        auto old_size = size();

        int();//assert(new_size >= 0);
        new_size = new_size > 0 ? new_size : 0;

        auto dif = new_size - old_size;
        auto del = dif > 0 ? 0 : -dif;
        auto add = dif < 0 ? 0 : +dif;

        m_vec->template splice_empty<ZERO_FILL>(
            (Left() + old_size) - del,
            del,
            add);
    }

    template <bool ZERO_FILL = true>
    void grow(fu::i new_size) noexcept {
        auto old_size = size();

        int();//assert(new_size >= old_size);
        new_size = new_size > old_size ? new_size : old_size;

        auto add = new_size - old_size;

        m_vec->template splice_empty<ZERO_FILL>(
            (Left() + old_size),
            fu_ZERO(),
            add);
    }

    template <typename I>
    void shrink(I new_size) noexcept
    {
        auto old_size = size();

        if constexpr (fu_MAYBE_POS(new_size))
        {
            int();//assert(new_size >= 0 && new_size <= old_size);
            new_size = new_size > 0 ? new_size : 0;
            new_size = new_size < old_size ? new_size : old_size;
        }

        auto del = old_size - new_size;

        m_vec->splice(
            (Left() + old_size) - del,
            del);
    }

    fu_INL void clear() noexcept {
        shrink(fu_ZERO());
    }

    fu_INL void pop() noexcept {
        auto old_size = size();

        int();//assert(old_size > 0);

        if (old_size)
            m_vec->splice(
                (Left() + old_size) - 1,
                fu_ONE());
    }

    template <typename I, typename D>
    void splice(I idx, D del) noexcept
    {
        auto old_size = size();

        if constexpr (fu_MAYBE_POS(idx))
        {
            int();//assert(idx >= 0 && idx < old_size);
            idx = idx > 0 ? idx : 0;
            idx = idx < old_size ? idx : old_size;
        }

        if constexpr (fu_MAYBE_POS(del))
        {
            auto del_max = old_size - idx;

            int();//assert(del >= 0 && del <= del_max);
            del = del > 0 ? del : 0;
            del = del < del_max ? del : del_max;
        }

        m_vec->splice(
            Left() + idx,
            del);
    }

    // void shift() noexcept {
    //     MUT_front(One, Zero);
    // }

    // void shift(fu::i shift) noexcept {
    //     MUT_front(shift, Zero);
    // }

    // void shift_pop(fu::i shift, fu::i pop) noexcept {
    //     MUT_trim(shift, pop);
    // }


    // Assignment through ref.

    fu_INL vec_range_mut& operator=(fu::vec<T>&& src) noexcept
    {
        if (m_trim)
            m_vec->splice(Left(), size(), static_cast<fu::vec<T>&&>(src));
        else
            (*m_vec) = static_cast<fu::vec<T>&&>(src);

        return *this;
    }

    fu_INL vec_range_mut& operator=(const fu::vec<T>& src) noexcept
    {
        if (m_trim)
            m_vec->splice(Left(), size(), /*const ref*/ src);
        else
            (*m_vec) = /*const ref*/ src;

        return *this;
    }

    // Can't use the template below,
    //  can't get around a defaulted/deleted operator=.
    //
    fu_INL vec_range_mut& operator=(const vec_range_mut& src) noexcept
    {
        if (m_trim)
            m_vec->splice_copy(
                Left(), size(),
                src.data(), src.size());
        else
            (*m_vec) = fu::vec<T>(src);

        return *this;
    }

    template <typename V, typename = typename V::fu_VIEW_value_type
        /* vec_range */ , typename = typename V::fu_GROW_value_type>
    fu_INL vec_range_mut& operator=(const V& src) noexcept
    {
        if (m_trim)
            m_vec->splice_copy(
                Left(), size(),
                src.data(), src.size());
        else
            (*m_vec) = fu::vec<T>(src);

        return *this;
    }


    // Move interop.

    fu_INL vec_range_mut& const_cast_mut() const noexcept {
        return const_cast<vec_range_mut&>(*this);
    }

    fu_INL fu::vec<T>&& destructive_move() noexcept {
        m_vec->shift_pop(Left(), Right());
        #ifndef NDEBUG
        m_trim  = 0xffffffffffffffff;
        #endif
        return m_vec->destructive_move();
    }

    fu::vec<T> destructive_move_or_default() noexcept {
        if (!m_vec->big.PACK)
            return {};

        return destructive_move();
    }


    // Pointer-reassignment.

    fu_INL vec_range_mut& ptr_reassign(vec_range_mut other) noexcept {
        this->m_vec = other.m_vec;
        this->m_trim = other.m_trim;
        return *this;
    }


    // fu::vec swap interop.

    fu_INL void swap(fu::vec<T>& other) noexcept
    {
        if (m_trim)
            swap_ranges(other);
        else
            m_vec->swap(other);
    }

    fu_INL void swap(vec_range_mut& other) noexcept
    {
        if (m_trim | other.m_trim)
            swap_ranges(other);
        else
            m_vec->swap(*other.m_vec);
    }

    fu_INL void swap(vec_range_mut&& other) noexcept
    {
        if (m_trim | other.m_trim)
            swap_ranges(other);
        else
            m_vec->swap(*other.m_vec);
    }

    void swap_ranges(vec_range_mut b) noexcept
    {
        auto size_a     =   size();
        auto size_b     = b.size();

        bool a_shorter  = size_a < size_b;
        auto size_short = a_shorter ? size_a : size_b;
        auto size_long  = a_shorter ? size_b : size_a;

        auto& shorter   = a_shorter ? *this : b;
        auto& longer    = a_shorter ? b : *this;

        // Grow shorter.
        if (size_long > size_short)
        {
            shorter.template grow</*ZEROFILL*/false>(size_long);
        }

        // AFTER GROW ///////////////////////
        T* data_short   = shorter.data_mut();
        T* data_long    = longer.data_mut();
        // AFTER GROW ///////////////////////

        // Swap up to size_short.
        fu::memswap(
            (unsigned char*)data_short,
            (unsigned char*)data_long,
                size_t(size_short) * sizeof(T));

        if (size_long > size_short)
        {
            // Move up to size_long.
            std::memcpy(
                (      unsigned char*)(data_short + size_short),
                (const unsigned char*)(data_long  + size_short),
                    size_t(size_long - size_short) * sizeof(T));

            auto right_long = longer.Right();
            if (right_long)
            {
                // Move longer tail back.
                std::memmove(
                    (      unsigned char*)(data_long + size_short),
                    (const unsigned char*)(data_long + size_long),
                        size_t(right_long) * sizeof(T));
            }

            // Trim longer.
            longer.m_vec->UNSAFE__WriteSize(
                longer.Left() + size_short + right_long);
        }
    }


    // TODO FORMALIZE //////////////////////////////////////////////
    //  fu::spawn & co use spare capacity for buffered IO,
    //   it's a neat trick, which is worth supporting,
    //    interesting how we can expose this in-language.
    //
    fu::i capa() noexcept {
        if (Right())
            return 0;

        return m_vec->capa() - Left();
    }

    void UNSAFE__WriteSize(fu::i new_size) noexcept {
        int();//assert(!Right());
        m_vec->UNSAFE__WriteSize(new_size + Left());
    }
    //
    // TODO FORMALIZE //////////////////////////////////////////////

};


//

template <typename T>
struct vec_range
{
    typedef T value_type;
    typedef T fu_ANY_value_type;

    typedef T fu_VIEW_value_type;
    typedef T fu_GROW_value_type;

    const fu::vec<T>*   m_vec;
    uint64_t            m_trim;

    fu_INL fu::i Left() const noexcept {
        return fu::i(m_trim & 0xffffffff);
    }

    fu_INL fu::i Right() const noexcept {
        return fu::i(m_trim >> 32);
    }

    fu_INL vec_range() noexcept
        : m_vec     { (const fu::vec<T>*) fu::NIL }
        , m_trim    { 0 }
    {}

    fu_INL vec_range(const vec_range& vr) = default;

    fu_INL vec_range(const fu::vec_range_mut<T>& vr) noexcept
        : m_vec     { vr.m_vec }
        , m_trim    { vr.m_trim }
    {}

    fu_INL vec_range(const fu::vec<T>& vec) noexcept
        : m_vec     { &vec }
        , m_trim    { 0 }
    {}

    fu_INL explicit operator fu::vec<T>() const noexcept {
        return fu::slice(
            *m_vec,
            Left(),
            Left() + size());
    }

    fu_INL const T* data() const noexcept {
        return m_vec->data() + Left();
    }

    fu_INL fu::i size() const noexcept {
        return m_vec->size() - (Left() + Right());
    }


    // Maintain copy/paste from fu::vec

    fu_INL const T& operator[](fu::i idx) const noexcept
    {
        const T* ok = m_vec->data() + (idx + Left());

        #ifndef NDEBUG
        int();//assert((fu::u) idx < (fu::u) size());
        return *ok;
        #endif

        #if fu_RETAIL
        return *ok;

        #else
        return (fu::u) idx < (fu::u) size()
             ? *ok
             : *((T*)1);

        #endif
    }


    //

    fu_INL explicit operator bool() const noexcept
    {
        return !!size();
    }


    // Move interop.

    fu_INL vec_range_mut<T>& const_cast_mut() const noexcept {
        return (vec_range_mut<T>&) *this;
    }


    // Pointer-reassignment.

    fu_INL vec_range& ptr_reassign(vec_range other) noexcept {
        this->m_vec = other.m_vec;
        this->m_trim = other.m_trim;
        return *this;
    }
};


// Const slicing - (start ..), (.. end) and (start .. end)

template <typename T>
fu::vec_range<T> get_range(fu::vec_range<T> v, fu::i start) noexcept
{
    auto end = v.size();
    int();//assert(start >= 0 && start <= end);

    start   = start > 0   ? start : 0;
    start   = start < end ? start : end;

    v.m_trim += uint64_t(start);
    return v;
}

template <typename T>
fu::vec_range<T> get_range_start0(fu::vec_range<T> v, fu::i end) noexcept
{
    auto size = v.size();
    int();//assert((fu::u) end <= (fu::u) size);

    end     = end   > 0 ? end   : 0;
    end     = (fu::u)end <= (fu::u)size ? end : size;

    v.m_trim += uint64_t(size - end) << 32;
    return v;
}

template <typename T>
fu::vec_range<T> get_range(fu::vec_range<T> v, fu::i start, fu::i end) noexcept
{
    auto size = v.size();
    int();//assert(start >= 0 && start <= end && (fu::u) end <= (fu::u) size);

    end     = end   > 0 ? end   : 0;
    start   = start > 0 ? start : 0;

    end     = (fu::u)end <= (fu::u)size ? end : size;
    start   = start < end ? start : end;

    v.m_trim += uint64_t(start) | uint64_t(size - end) << 32;
    return v;
}


// Mut slicing - (start ..), (.. end) and (start .. end)

template <typename T>
fu::vec_range_mut<T> get_range_mut(fu::vec_range_mut<T> v, fu::i start) noexcept
{
    auto end = v.size();
    int();//assert(start >= 0 && start <= end);

    start   = start > 0   ? start : 0;
    start   = start < end ? start : end;

    v.m_trim += uint64_t(start);
    return v;
}

template <typename T>
fu::vec_range_mut<T> get_range_start0_mut(fu::vec_range_mut<T> v, fu::i end) noexcept
{
    auto size = v.size();
    int();//assert((fu::u) end <= (fu::u) size);

    end     = end   > 0 ? end   : 0;
    end     = (fu::u)end <= (fu::u)size ? end : size;

    v.m_trim += uint64_t(size - end) << 32;
    return v;
}

template <typename T>
fu::vec_range_mut<T> get_range_mut(fu::vec_range_mut<T> v, fu::i start, fu::i end) noexcept
{
    auto size = v.size();
    int();//assert(start >= 0 && start <= end && (fu::u) end <= (fu::u) size);

    end     = end   > 0 ? end   : 0;
    start   = start > 0 ? start : 0;

    end     = (fu::u)end <= (fu::u)size ? end : size;
    start   = start < end ? start : end;

    v.m_trim += uint64_t(start) | uint64_t(size - end) << 32;
    return v;
}


// Couldn't work around these :(

template <typename T>
fu_INL fu::vec_range_mut<T> get_range_mut(fu::vec<T>& v, fu::i start) noexcept {
    return get_range_mut(fu::vec_range_mut<T>(v), start);
}

template <typename T>
fu_INL fu::vec_range_mut<T> get_range_mut(fu::vec<T>& v, fu::i start, fu::i end) noexcept {
    return get_range_mut(fu::vec_range_mut<T>(v), start, end);
}

template <typename T>
fu_INL fu::vec_range_mut<T> get_range_start0_mut(fu::vec<T>& v, fu::i end) noexcept {
    return get_range_start0_mut(fu::vec_range_mut<T>(v), end);
}


//

template <typename T>
fu_INL fu::vec_range<T> get_range(const fu::vec<T>& v, fu::i start) noexcept {
    return get_range(fu::vec_range<T>(v), start);
}

template <typename T>
fu_INL fu::vec_range<T> get_range(const fu::vec<T>& v, fu::i start, fu::i end) noexcept {
    return get_range(fu::vec_range<T>(v), start, end);
}

template <typename T>
fu_INL fu::vec_range<T> get_range_start0(const fu::vec<T>& v, fu::i end) noexcept {
    return get_range_start0(fu::vec_range<T>(v), end);
}


//

template <typename T>
fu_INL fu::vec_range<T> get_range(const fu::vec_range_mut<T>& v, fu::i start) noexcept {
    return get_range((const fu::vec_range<T>&) v, start);
}

template <typename T>
fu_INL fu::vec_range<T> get_range(const fu::vec_range_mut<T>& v, fu::i start, fu::i end) noexcept {
    return get_range((const fu::vec_range<T>&) v, start, end);
}

template <typename T>
fu_INL fu::vec_range<T> get_range_start0(const fu::vec_range_mut<T>& v, fu::i end) noexcept {
    return get_range_start0((const fu::vec_range<T>&) v, end);
}


} // namespace
