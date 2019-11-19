#pragma once

#include "arc.h"

template <typename T>
struct fu_VEC
{
    /////////////////////////////////////////////
    //
    // Primitives.

    using i32 = int;

    static const bool triv_copy     = std::is_trivially_copyable<T>;
    static const bool triv_destr    = std::is_trivially_destructible<T>;
    static const bool triv_all      = triv_copy && triv_destr;

    static const i32 vec_size       = sizeof(vec);
    static const i32 small_buf_size = vec_size - 1;
    static const i32 small_capa     = triv_all
                                    ? small_buf_size / sizeof(T)
                                    : 0;

    /////////////////////////////////////////////

            T*  big_data;
            i32 big_size;
    mutable i32 big_capa;

    /////////////////////////////////////////////

    fu_INLINE bool big() const {
        if constexpr (small_capa) return big_capa & 0x7000000;
        else                      return big_data;
    }

    fu_INLINE i32 size() const {
        i32 small_size = big_capa >> 27;
        return big() ? big_size : small_size;
    }

    fu_INLINE const T* data() const { return big() ? big_data : (T*)this; }
    fu_INLINE       T* data()       { return big() ? big_data : (T*)this; }

    /////////////////////////////////////////////

    fu_INLINE i32 unique_capa() const {
        return big() ? big_capa : small_capa;
    }

    fu_INLINE i32 shared_capa() const {
        i32 shared_capa = big_capa & 0x7fffffff;
        return big() ? shared_capa : small_capa;
    }

    fu_INLINE void _mark_unique() {
        assert(big());
        big_capa &= 0x7fffffff;
    }

    fu_INLINE void _mark_shared() const {
        assert(big());
        big_capa |= 0x80000000;
    }

    /////////////////////////////////////////////
    //
    // Deallocation.

    ~fu_VEC() noexcept
    {
        if (big())
        {
            fu_ARC* arc = UNSAFE__arc();
            if (arc->decr())
            {
                if constexpr (!triv_destr)
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

    fu_INLINE fu_ARC* UNSAFE__arc() noexcept {
        return (fu_ARC*)big_data - 1;
    }


    /////////////////////////////////////////////
    //
    // Allocation, copies & moves.

    fu_INLINE void reserve()
    {
        i32 current_capa = shared_capa();
        if (current_capa > unique_capa())
            MUT__force__realloc(current_capa);
    }

    fu_INLINE void reserve(i32 new_capa)
    {
        if (new_capa > unique_capa())
            MUT__force__realloc(new_capa);
    }

    fu_INLINE void res_extra(i32 extra_capa)
    {
        assert(extra_capa > 0);

        // This can mean two things -
        //  1. Either we're out of capacity;
        //  2. Or we're sharing ownership of the COW buffer.
        //      We catch both cases here with the same check.

        i32 min_capa = size() + extra_capa;
        if (unique_capa() < min_capa)
            _RES_extra(min_capa);
    }

    fu_NO_INL void _RES_extra(i32 new_capa)
    {
        i32 current_capa = shared_capa();
        if (current_capa >= new_capa && UNSAFE__arc()->unique())
        {
            // All other owners have died out.
            _mark_unique();
        }
        else
        {
            // 2x growth is delegated to the allocator.
            i32 new_capa    = current_capa > new_capa
                            ? current_capa
                            : new_capa;

            MUT__force__realloc(new_capa);
        }
    }


};

int test(vec<char>& hey)
{
    return hey.unique_capa();
}
