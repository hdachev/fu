#pragma once

#include "arc.h"

template <typename T>
struct fu_VEC
{
    /////////////////////////////////////////////
    //
    // Primitives.

    using i32 = int;
    using u32 = int;

    static const bool triv_copy     = std::is_trivially_copyable<T>;
    static const bool triv_destr    = std::is_trivially_destructible<T>;
    static const bool triv_all      = triv_copy && triv_destr;

    static const i32 vec_size       = sizeof(vec);
    static const i32 small_buf_size = vec_size - 1;
    static const i32 small_capa     = triv_all
                                    ? small_buf_size / sizeof(T)
                                    : 0;

    /////////////////////////////////////////////

            T*  _big_data;
            i32 _big_size;
    mutable i32 _big_capa;

    /////////////////////////////////////////////

    fu_INL bool big() const {
        if constexpr (small_capa) return _big_capa & 0x7000000;
        else                      return _big_data;
    }

    fu_INL i32 size() const {
        i32 small_size = _big_capa >> 27;
        return big() ? _big_size : small_size;
    }

    fu_INL const T* data() const { return big() ? _big_data : (T*)this; }
    fu_INL       T* data()       { return big() ? _big_data : (T*)this; }

    /////////////////////////////////////////////

    fu_INL i32 unique_capa() const {
        return big() ? _big_capa : small_capa;
    }

    fu_INL i32 shared_capa() const {
        i32 shared_capa = _big_capa & 0x7fffffff;
        return big() ? shared_capa : small_capa;
    }

    fu_INL void _MarkUnique() {
        assert(big());
        _big_capa &= 0x7fffffff;
    }

    fu_INL void _MarkShared() const {
        assert(big());
        _big_capa |= 0x80000000;
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

    fu_INL fu_ARC* UNSAFE__arc() noexcept {
        return (fu_ARC*)_big_data - 1;
    }


    /////////////////////////////////////////////
    //
    // Allocation, copies & moves.

    fu_INL void reserve() {
        if (unique_capa() < 0)
            _Realloc(current_capa);
    }

    fu_INL void reserve(i32 new_capa) {
        if (new_capa > unique_capa())
            _Realloc(new_capa);
    }

    /////////////////////////////////////////////

    fu_INL void res_right(i32 extra_capa) {
        assert(extra_capa > 0);

        i32 min_capa = size() + extra_capa;
        if (unique_capa() < min_capa)
            [[unlikely]] _ResRight(min_capa);
    }

    fu_NEVER_INLINE
    void _ResRight(i32 new_capa) {
        i32 current_capa = shared_capa();
        if (current_capa >= new_capa && UNSAFE__arc()->unique())
            _MarkUnique();
        else
            _Realloc(new_capa);
    }

    /////////////////////////////////////////////
    //
    // Let's try to power all basic ops from here.

    template <  typename R,  typename L,

                typename M0, typename M1, typename M2,
                typename T0, typename T1  >

    fu_INL /* new_size */ i32 _Realloc(

        /////////////////////////////////////////////

        // Reserve capacity.
        R min_capa = {}, L try_leftroom = {},

        // Insert/delete at index.
        M0 mid_start = {}, M1 mid_end = {}, M2 mid_add = {},

        // Pop/push at tail.
        T0 tail_pop = {}, T1 = tail_push = {})

        /////////////////////////////////////////////
    {
        const i32 old_size = size();

        // Most of this stuff should compile away -
        //  The pointless looking (u32) casts are intended
        //   to make condition-always-true setups extra obvious.

        assert(min_capa >= 0 && (try_leftroom == 0 || try_leftroom == 1)

            // Splice operator -
            // Erase/insert/splice/shift/unshift and slice(l).
            && mid_start >= 0 && mid_end >= mid_start && mid_end <= old_size
            && mid_add >= 0

            // Tail operator -
            // Push/pop and slice(r).
            && tail_pop >= 0 && tail_push >= 0
            && old_size >= mid_end + tail_pop);

        // Sanitize.
        mid_start =       mid_start >= 0              ? mid_start : {};
        mid_start = (u32) mid_start <= (u32) old_size ? mid_start : old_size;

        mid_end =       mid_end >=       mid_start ? mid_end : mid_start;
        mid_end = (u32) mid_end <= (u32) old_size  ? mid_end : old_size;

        i32 tp_max = old_size - mid_end;
        tail_pop = (u32) tail_pop <= (u32) tp_max ? tail_pop : tp_max;

        mid_add   = mid_add   >= 0 ? mid_add   : 0;
        tail_push = tail_push >= 0 ? tail_push : 0;

        // Alloc size.
        i32 new_size = old_size
                     + mid_start - mid_end + mid_add
                     + tail_push - tail_pop;

        i32 new_capa = new_size > min_capa ? new_size : min-capa;

        //


        //
        if (new_capa > small_capa) {

            fu_ARC::alloc(new_data, new_capa);
        }

        // Else
        else {
            // ...
        }

        assert(false);
    }

};

int test(vec<char>& hey)
{
    return hey.unique_capa();
}
