#include <new>
#include <atomic>
#include <type_traits>
#include <cstdlib>
#include <cstring>
#include <cassert>


// Putting the nasty shit here.

struct alignas(16) fu_ARC
{
    std::atomic_int m_arc;

    #ifndef NDEBUG
    int   DEBUG_bytes;
    void* DEBUG_self; // overwrite detector
    #endif

    void dealloc(size_t bytes)
    {
        assert((int)bytes <= DEBUG_bytes
                  && this == DEBUG_self);

        std::free((void*)this);
    }

    static char* alloc(size_t& inout_bytes)
    {
        size_t bytes = inout_bytes;

        //////////////////////////////////////////////////
        // Let's try reporting more mem than requested. //
        if (bytes < 128 - sizeof(fu_ARC))
            bytes = 128 - sizeof(fu_ARC);
        // -------------------------------------------- //
        //////////////////////////////////////////////////

        char* mem = (char*)
            std::malloc(bytes
                + sizeof(fu_ARC));

        fu_ARC* header = (fu_ARC*)mem;
        header->m_arc.store(
            0, std::memory_order_relaxed);

        #ifndef NDEBUG
        header->DEBUG_bytes = (int)bytes;
        header->DEBUG_self  = mem;
        #endif

        inout_bytes = bytes;
        return mem + sizeof(fu_ARC);
    }

    template <typename T>
    static void alloc(T*& out_ptr, int& inout_count)
    {
        assert(inout_count > 0);

        int count       = inout_count;
            count       = count < 1 ? 1 : count;

        size_t bytes    = count * sizeof(T);
        out_ptr         = (T*) alloc(bytes);
        inout_count     = bytes / sizeof(T);
    }

    void incr()
    {
        m_arc.fetch_add(
            +1, std::memory_order_relaxed );
    }

    bool decr()
    {
        return 0 == m_arc.fetch_add(
            -1, std::memory_order_acq_rel );
    }

    bool unique()
    {
        return 0 == m_arc.load(
            std::memory_order_relaxed);
    }
};

static_assert(sizeof(fu_ARC) == 16);


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


    // Copy & move.

    inline fu_COW_VEC(fu_COW_VEC&& x) noexcept
        : m_data(x.m_data)
        , m_size(x.m_size)
        , m_capa(x.m_capa)
    {
        x.m_data = nullptr;
        x.m_size = 0;
        x.m_capa = 0;
    }

    inline fu_COW_VEC& operator=(fu_COW_VEC&& x) noexcept
    {
        this->~fu_COW_VEC();

        m_data = x.m_data;
        m_size = x.m_size;
        m_capa = x.m_capa;

        x.m_data = nullptr;
        x.m_size = 0;
        x.m_capa = 0;

        return *this;
    }

    inline fu_COW_VEC(const fu_COW_VEC& c) noexcept
        : m_data(c.m_data)
        , m_size(c.m_size)
        , m_capa(c.m_capa)
    {
        _arc_incr();
    }

    inline fu_COW_VEC& operator=(const fu_COW_VEC& c) noexcept
    {
        this->~fu_COW_VEC();

        m_data = c.m_data;
        m_size = c.m_size;
        m_capa = c.m_capa;

        _arc_incr();

        return *this;
    }


    // Public, const.

    inline T*       data()  const { return m_data;          }
    inline size_t   size()  const { return size_t(m_size);  }
    inline const T* begin() const { return m_data;          }
    inline const T* end()   const { return m_data + m_size; }

    inline int find(const T& item) const
    {
        const T* end = m_data + m_size;
        for (const T* i = m_data; i < end; i++)
            if (*i == item)
                return int(i - m_data);

        return -1;
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
        T data[new_size];

        INIT(const INIT&) = delete;
        INIT(INIT&&) = default;
    };

    template <int new_size>
    inline fu_COW_VEC(INIT<new_size>&& array) noexcept
    {
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


    // A lame ass copy constructor to meet the current fu_SLICE impl,
    //  we really don't want to slice like this,
    //   pretty terrible.

    fu_COW_VEC(const T* begin, const T* end)
    {
        size_t len = end - begin;
        int new_size = int(len);
        assert(end >= begin && begin + len == end && size_t(new_size) == len);

        int new_capa = new_size;

        T* new_data;
        fu_ARC::alloc(new_data, new_capa);

        _copy_construct_range(new_data, begin, new_size);

        m_data = new_data;
        m_size = new_size;
        m_capa = new_capa;
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
