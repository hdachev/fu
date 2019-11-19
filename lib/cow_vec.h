#pragma once

#include "arc.h"


//

template <typename T>
struct fu_COW_VEC
{
    T*  m_data = nullptr;
    int m_size = 0;
    int m_capa = 0;

    fu_COW_VEC() = default;


    // Deallocation.

    ~fu_COW_VEC() noexcept
    {
        if (m_data)
        {
            fu_ARC* arc = _unsafe_arc();
            if (arc->decr())
            {
                if constexpr (!std::is_trivially_destructible<T>::value)
                {
                    const T* end = m_data + m_size;
                    for (T* i = m_data; i < end; i++)
                        i->~T();
                }

                arc->dealloc(
                    size_t(m_capa) * sizeof(T));
            }
        }

        #ifndef NDEBUG
        m_data = (T*)1;
        #endif
    }

    fu_ARC* _unsafe_arc() noexcept
    {
        return (fu_ARC*)m_data - 1;
    }

    void _arc_incr() noexcept
    {
        #ifdef NO_COW_VEC_COPY
        static_assert(false, "Bad code emit: unexpected COW_VEC copy.");
        #endif

        if (m_data) _unsafe_arc()->incr();
    }


    // Allocation & reallocation.

    /* pub */ void reserve(int new_capa)
    {
        if (new_capa > m_capa)
            _mut__force__realloc(new_capa);
    }

    void _mut__ensure_unique()
    {
        if (m_size && !_unsafe_arc()->unique())
            _mut__force__realloc(m_capa);
    }

    void _mut__grow_if_needed(int extra)
    {
        assert(extra > 0);
        int min = m_size + extra;

        if (m_capa < min || !_unsafe_arc()->unique())
        {
            int new_capa = m_capa;

            // 2x or more
            new_capa = new_capa << (new_capa < min ? 1 : 0);
            new_capa = new_capa > min ? new_capa : min;

            _mut__force__realloc(new_capa);
        }
    }

    void _mut__force__realloc(int new_capa)
    {
        assert(new_capa > 0);

        T* new_data;
        fu_ARC::alloc(new_data, new_capa);

        // Copy or move decision.
        if (m_size)
        {
            assert(m_data && m_size <= new_capa);

            fu_ARC* arc = _unsafe_arc();
            if (arc->decr())
            {
                // MOVE_BY_MEMCPY
                std::memcpy(new_data, m_data,
                    size_t(m_size) * sizeof(T));

                arc->dealloc(
                    size_t(m_capa) * sizeof(T));
            }
            else
            {
                if constexpr (std::is_trivially_copyable<T>::value)
                {
                    std::memcpy(new_data, m_data,
                        size_t(m_size) * sizeof(T));
                }
                else
                {
                    const T* old = m_data;
                    const T* end = m_data + m_size;

                    for (T* i = new_data; old < end; i++, old++)
                        new (i) T(*old);
                }
            }
        }

        m_data = new_data;
        m_capa = new_capa;
    }

    void shrink(int new_size)
    {
        assert(new_size >= 0 && new_size <= m_size);

        if ((unsigned int)m_size > (unsigned int)new_size)
        {
            // No need to detach when shrinking unless
            //  we have to keep track of destructor calls.
            if constexpr (!std::is_trivially_destructible<T>::value)
            {
                fu_ARC* arc = _unsafe_arc();
                if (arc->unique())
                {
                    const T* end = m_data + m_size;
                    for (T* i = m_data + new_size; i < end; i++)
                        i->~T();
                }
                else
                {
                    T*  new_data;
                    int new_capa;

                    if (new_size <= 0)
                    {
                        new_data = nullptr;
                        new_size = 0;
                        new_capa = 0;
                    }
                    else
                    {
                        new_capa = new_size;

                        fu_ARC::alloc(new_data, new_capa);

                        _copy_construct_range(new_data, m_data, new_size);
                    }

                    // This handles the edge case where
                    //  we still ended up as the unique owner while copying.
                    this->~fu_COW_VEC();

                    m_data = new_data;
                    m_capa = new_capa;
                }
            }

            m_size = new_size;
        }
    }

    void _mut__non_empty__erase_range(int from, int to, int num_uninit)
    {
        int old_size = m_size;
        int new_size = old_size - to + from + num_uninit;

        assert(m_data && old_size > 0);

        // If owner -
        //  we destroy & move in place.
        fu_ARC* arc = _unsafe_arc();
        if (arc->unique())
        {
            T* start = m_data + from;
            T* end   = m_data + to;

            // Destroy items if needed.
            if constexpr (!std::is_trivially_destructible<T>::value)
                for (T* i = start; i < end; i++)
                    i->~T();

            if (new_size <= m_capa)
            {
                // MOVE_BY_MEMCPY
                std::memmove(start + num_uninit, end,
                    size_t(old_size - to) * sizeof(T));

                m_size = new_size;
            }
            else
            {
                int new_capa = new_size;
                assert(new_capa > 0);

                T* new_data;
                fu_ARC::alloc(new_data, new_capa);

                if (from > 0)
                    std::memcpy(
                        new_data, m_data, size_t(from) * sizeof(T));

                int rest = to + num_uninit;
                if (rest < new_size)
                    std::memcpy(
                        new_data + rest, m_data + to,
                        size_t(new_size - rest) * sizeof(T));

                arc->dealloc(
                    size_t(m_capa) * sizeof(T));

                m_data = new_data;
                m_size = new_size;
                m_capa = new_capa;
            }
        }

        // Else -
        //  we allocate & copy only the desired subranges.
        else
        {
            int new_capa = new_size;

            T* new_data;
            fu_ARC::alloc(new_data, new_capa);

            if (from > 0)
                _copy_construct_range(
                    new_data, m_data, from);

            int rest = from + num_uninit;
            if (rest < new_size)
                _copy_construct_range(
                    new_data + rest, m_data + to, new_size - rest);

            // This handles the edge case where
            //  we still ended up as the unique owner while copying.
            this->~fu_COW_VEC();

            m_data = new_data;
            m_size = new_size;
            m_capa = new_capa;
        }
    }

    void _copy_construct_range(T* dest, const T* src, int count)
    {
        assert(count > 0);

        if constexpr (std::is_trivially_copyable<T>::value)
        {
            std::memcpy(dest, src,
                size_t(count) * sizeof(T));
        }
        else
        {
            const T* old = src;
            const T* end = src + count;

            for (T* i = dest; old < end; i++, old++)
                new (i) T(*old);
        }
    }

    void _unsafe_first_uninit(int new_size)
    {
        assert(m_data == nullptr && m_capa == 0 && m_size == 0);

        T* new_data;
        int new_capa = new_size;
        fu_ARC::alloc(new_data, new_capa);

        m_data = new_data;
        m_size = new_size;
        m_capa = new_capa;
    }


    // Copy & move.

    inline fu_COW_VEC(fu_COW_VEC&& x) noexcept
        : m_data(x.m_data)
        , m_size(x.m_size)
        , m_capa(x.m_capa)
    {
        assert( x.m_data &&  x.m_size &&  x.m_capa
            || !x.m_data && !x.m_size && !x.m_capa);

        x.m_data = nullptr;
        x.m_size = 0;
        x.m_capa = 0;
    }

    inline fu_COW_VEC& operator=(fu_COW_VEC&& x) noexcept
    {
        assert( x.m_data &&  x.m_size &&  x.m_capa
            || !x.m_data && !x.m_size && !x.m_capa);

        if (&x != this)
        {
            this->~fu_COW_VEC();

            m_data = x.m_data;
            m_size = x.m_size;
            m_capa = x.m_capa;

            x.m_data = nullptr;
            x.m_size = 0;
            x.m_capa = 0;
        }

        return *this;
    }

    inline fu_COW_VEC(const fu_COW_VEC& c) noexcept
        : m_data(c.m_data)
        , m_size(c.m_size)
        , m_capa(c.m_capa)
    {
        assert( c.m_data &&  c.m_size &&  c.m_capa
            || !c.m_data && !c.m_size && !c.m_capa);

        _arc_incr();
    }

    inline fu_COW_VEC& operator=(const fu_COW_VEC& c) noexcept
    {
        assert( c.m_data &&  c.m_size &&  c.m_capa
            || !c.m_data && !c.m_size && !c.m_capa);

        if (&c != this)
        {
            this->~fu_COW_VEC();

            m_data = c.m_data;
            m_size = c.m_size;
            m_capa = c.m_capa;

            _arc_incr();
        }

        return *this;
    }


    // Public, const.

    inline T*       data()  const { return m_data;          }
    inline size_t   size()  const { return size_t(m_size);  }
    inline const T* begin() const { return m_data;          }
    inline const T* end()   const { return m_data + m_size; }

    inline explicit operator bool() const
    {
        return m_size > 0;
    }

    inline int find(const T& item) const
    {
        const T* end = m_data + m_size;
        for (const T* i = m_data; i < end; i++)
            if (*i == item)
                return int(i - m_data);

        return -1;
    }

    inline int find(const fu_COW_VEC<T>& substr) const
    {
        const T* i0 = substr.m_data;
        const int s = substr.m_size;
        const T* i1 = substr.m_data + s;

        if (i1 <= i0 || s > m_size)
            return i1 == i0 ? 0 : -1;

        const T* last = m_data + (m_size - s);
        const T& head = *i0;

        const T* back = 0;

        for (const T* i = m_data; i <= last; i++)
        {
            if (*i != head)
                continue;

            // Head matches, search rest.
            back = i++;

            for (const T* search = i0 + 1; search < i1; i++, search++)
            {
                if (*i != *search)
                {
                    i = back;
                    goto HEAD_SEARCH;
                }
            }

            // Found.
            return int(back - m_data);

            HEAD_SEARCH:;
        }

        return -1;
    }

    inline bool starts_with(const fu_COW_VEC<T>& substr) const
    {
        const T* i0 = substr.m_data;
        const int s = substr.m_size;
        const T* i1 = substr.m_data + s;

        if (i1 <= i0 || s > m_size)
            return i1 == i0 ? 0 : -1;

        for (const T* i = m_data; i0 < i1; i++, i0++)
            if (*i != *i0)
                return false;

        return true;
    }


    // Equality & comparison.

    inline int memcmp(const fu_COW_VEC<T>& other) const
    {
        static_assert(T(1),
            "memcmp for primitives & numerics only.");

        // Empty/broken/refequal ?
        int size = m_size > other.m_size ? m_size : other.m_size;
        if (size <= 0 || m_data == other.m_data)
            return 0;

        //
        int cmp = std::memcmp(
            m_data, other.m_data,
            size_t(size) * sizeof(T));

        int sdiff = m_size - other.m_size;
        return cmp ? cmp : sdiff;
    }

    inline bool operator>(const fu_COW_VEC<T>& other) const
    {
        return memcmp(other) > 0;
    }

    inline bool operator<(const fu_COW_VEC<T>& other) const
    {
        return memcmp(other) < 0;
    }

    inline bool operator>=(const fu_COW_VEC<T>& other) const
    {
        return memcmp(other) >= 0;
    }

    inline bool operator<=(const fu_COW_VEC<T>& other) const
    {
        return memcmp(other) <= 0;
    }

    inline bool operator==(const fu_COW_VEC<T>& other) const
    {
        return other.m_size == m_size && memcmp(other) == 0;
    }

    inline bool operator!=(const fu_COW_VEC<T>& other) const
    {
        return other.m_size != m_size || memcmp(other) != 0;
    }


    // Public, mutating.

    inline void push(T&& a)
    {
        _mut__grow_if_needed(1);
        T* ptr = m_data + m_size;

        new (ptr) T(a);

        m_size += 1;
    }

    inline void push(T&& a, T&& b)
    {
        _mut__grow_if_needed(2);
        T* ptr = m_data + m_size;

        new (ptr) T(a); ptr++;
        new (ptr) T(b);

        m_size += 2;
    }

    inline void push(T&& a, T&& b, T&& c)
    {
        _mut__grow_if_needed(3);
        T* ptr = m_data + m_size;

        new (ptr) T(a); ptr++;
        new (ptr) T(b); ptr++;
        new (ptr) T(c);

        m_size += 3;
    }

    inline void push(T&& a, T&& b, T&& c, T&& d)
    {
        _mut__grow_if_needed(4);
        T* ptr = m_data + m_size;

        new (ptr) T(a); ptr++;
        new (ptr) T(b); ptr++;
        new (ptr) T(c); ptr++;
        new (ptr) T(d);

        m_size += 4;
    }

    inline void resize(int new_size)
    {
        if (new_size > m_size)
        {
            _mut__grow_if_needed(new_size - m_size);

            T* end = m_data + new_size;
            for (T* i = m_data + m_size; i < end; i++)
                new (i) T();

            m_size = new_size;
        }
        else
        {
            shrink(new_size);
        }
    }


    // Public, shrinking.

    inline void clear()
    {
        shrink(0);
    }

    inline void pop()
    {
        shrink(m_size - 1);
    }


    // Public, splice variants.

    inline void splice(int start, int count)
    {
        return erase_range(start, start + count);
    }

    inline void erase_range(int start, int end)
    {
        assert(start >= 0 && end >= start && end <= m_size);

        start = start > 0     ? start : 0;
        end   = end <= m_size ? end   : m_size;
        if (end <= start)
            return; // m_data:null & dont-detach on noop.

        _mut__non_empty__erase_range(start, end, 0);
    }

    inline void erase_range_insert(int start, int end, T&& item)
    {
        assert(start >= 0 && end >= start && end <= m_size);

        start = start > 0     ? start : 0;
        end   = end <= m_size ? end   : m_size;
        if (end <= start)
            return push(std::move(item));

        _mut__non_empty__erase_range(start, end, 1);

        new (m_data + start) T(item);
    }

    inline void insert(int idx, T&& item)
    {
        assert(idx >= 0 && idx <= m_size);

        idx = idx > 0 ? idx : 0;
        if (idx >= m_size)
            return push(std::move(item));

        _mut__non_empty__erase_range(idx, idx, 1);

        new (m_data + idx) T(item);
    }

    inline void unshift(T&& item)
    {
        if (m_size <= 0)
            return push(std::move(item));

        _mut__non_empty__erase_range(0, 0, 1);
        new (m_data) T(item);
    }

    inline void shift()
    {
        assert(m_size > 0);

        if (m_size > 0)
            _mut__non_empty__erase_range(0, 1, 0);
    }

    inline void append(const fu_COW_VEC& v)
    {
        if (v.m_size <= 0)
            return;

        _mut__grow_if_needed(v.m_size);
        _copy_construct_range(m_data + m_size, v.m_data, v.m_size);

        m_size += v.m_size;
    }

    // inline void append(fu_COW_VEC&& v)
    // {
    //     if (v.m_size <= 0)
    //         return;

    //     // TODO here we should move-by-memcpy instead
    //     assert(false);
    // }


    //

    inline T* mut_begin()
    {
        _mut__ensure_unique();
        return m_data;
    }

    inline T* mut_end()
    {
        return m_data + m_size;
    }


    //

    inline const T& operator[](int idx) const
    {
        assert(idx >= 0 && idx < m_size);

        return m_data[idx];
    }

    inline T& mutref(int idx)
    {
        assert(idx >= 0 && idx < m_size);

        _mut__ensure_unique();
        return m_data[idx];
    }


    // ------------------------------------------------

    template <int new_size>
    struct INIT
    {
        static_assert(new_size > 0);

        T data[new_size];

        INIT(const INIT&) = delete;
        INIT(INIT&&) /* -MOV-CTOR- */ = default;

        INIT& operator=(const INIT&) = delete;
        INIT& operator=(INIT&&) = delete;
    };

    template <int new_size>
    inline fu_COW_VEC(INIT<new_size>&& array) noexcept
    {
        static_assert(new_size > 0);
        int new_capa = new_size;

        T* new_data;
        fu_ARC::alloc(new_data, new_capa);

        // Move over.
        new ((INIT<new_size>*)new_data)
            INIT<new_size>(static_cast<INIT<new_size>&&>(array));

        m_data = new_data;
        m_size = new_size;
        m_capa = new_capa;
    }


    //

    inline fu_COW_VEC<T> slice(int start, int end) const
    {
        assert(start >= 0 && end >= start && end <= m_size);

        start = start > 0      ? start : 0;
        end   = end   < m_size ? end   : m_size;

        fu_COW_VEC<T> res;

        // Empty.
        if (end <= start)
            return res;

        // Trivial slices.
        if constexpr (std::is_trivially_destructible<T>::value)
        {
            if (start == 0)
            {
                res = *this;
                res.m_size = end;
                return res;
            }
        }

        // Non-slices.
        else if (start == 0 && end == m_size)
        {
            res = *this;
            res.m_size = end;
            return res;
        }

        // Copy.
        int new_size = end - start;

        res._unsafe_first_uninit(new_size);
        res._copy_construct_range(res.m_data, m_data + start, new_size);

        return res;
    }

    inline fu_COW_VEC<T> slice(int start) const
    {
        return slice(start, m_size);
    }

    inline fu_COW_VEC<T> slice() const
    {
        return *this;
    }

    inline fu_COW_VEC<T> substr(int start, int count) const
    {
        return slice(start, start + count);
    }


    // TEMP !!!!
    // Get rid of this, we shouldn't need this
    //  but we're broken by the way we do templating now,
    //   remove to see where shit goes wrong.

    inline void push(const T& a)
    {
        return push(T(a));
    }

    inline void unshift(const T& a)
    {
        return unshift(T(a));
    }

    inline void insert(int idx, const T& a)
    {
        return insert(idx, T(a));
    }
};


//

template <typename K, typename V>
struct fu_COW_MAP
{
    fu_COW_VEC<K> m_keys;
    fu_COW_VEC<V> m_values;


    // Const API.

    int find(const K& key) const
    {
        for (int i = 0; i < m_keys.m_size; i++)
            if (m_keys[i] == key)
                return i;

        return -1;
    }

    const V& operator[](const K& key) const
    {
        for (int i = 0; i < m_keys.m_size; i++)
            if (m_keys[i] == key)
                return m_values[i];

        static const V def {};
        return def;
    }

    inline size_t size() const
    {
        return m_keys.size();
    }

    inline explicit operator bool() const
    {
        return m_keys.m_size > 0;
    }


    // Mut API.

    V& upsert(const K& key)
    {
        // Update?
        for (int i = 0; i < m_keys.m_size; i++)
            if (m_keys[i] == key)
                return m_values.mutref(i);

        // Insert.
        {
            int i = m_values.m_size;

            m_keys  .push(key);
            m_values.push(V {});

            return m_values.mutref(i);
        }
    }

    V& mutref(const K& key)
    {
        for (int i = 0; i < m_keys.m_size; i++)
            if (m_keys[i] == key)
                return m_values.mutref(i);

        assert(false);
        return *((V*)1);
    }
};


// Strings.

typedef fu_COW_VEC<char> fu_COW_STR;

inline fu_COW_STR fu_STRING(const char* cstr)
{
    fu_COW_STR vec;

    auto u_size = strlen(cstr);
    if (u_size)
    {
        vec._unsafe_first_uninit(int(u_size));
        std::memcpy(vec.m_data, cstr, u_size);
    }

    return vec;
}

inline fu_COW_STR fu_STRING(char chr)
{
    fu_COW_STR vec;

    vec._unsafe_first_uninit(1);
    vec.m_data[0] = chr;

    return vec;
}

inline const fu_COW_STR& fu_STRING(const fu_COW_STR& str)
{
    return str;
}

inline fu_COW_STR fu_STRING(long long num)
{
    fu_COW_STR vec;

    // TODO FIX this doesnt work on min-int + its slow
    int at = 0;
    if (num < 0)
    {
        vec.push('-');
        num = -num;
        at = 1;
    }

    do
    {
        int d = num % 10; num /= 10;
        vec.insert(at, char(d + '0'));
    }
    while (num);

    return vec;
}

inline fu_COW_STR fu_STRING(int num)
{
    return fu_STRING((long long)num);
}

template <typename T>
inline fu_COW_STR operator+(fu_COW_STR&& a, T b)
{
    a.append( fu_STRING(b) );
    return static_cast<fu_COW_STR&&>(a);
}

template <typename T>
inline fu_COW_STR operator+(const fu_COW_STR& a0, T b)
{
    auto a = a0;
    a.append( fu_STRING(b) );
    return a;
}

template <typename T>
inline fu_COW_STR& operator+=(fu_COW_STR& a, T b)
{
    a.append( fu_STRING(b) );
    return a;
}
