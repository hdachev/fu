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

    fu_INL bool big() const {
        if constexpr (small_capa) return big_capa & 0x7000000;
        else                      return big_data;
    }

    fu_INL i32 size() const {
        i32 small_size = big_capa >> 27;
        return big() ? big_size : small_size;
    }

    fu_INL const T* data() const { return big() ? big_data : (T*)this; }
    fu_INL       T* data()       { return big() ? big_data : (T*)this; }

    /////////////////////////////////////////////

    fu_INL i32 unique_capa() const {
        return big() ? big_capa : small_capa;
    }

    fu_INL i32 shared_capa() const {
        i32 shared_capa = big_capa & 0x7fffffff;
        return big() ? shared_capa : small_capa;
    }

    fu_INL void _MarkUnique() {
        assert(big());
        big_capa &= 0x7fffffff;
    }

    fu_INL void _MarkShared() const {
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

    fu_INL fu_ARC* UNSAFE__arc() noexcept {
        return (fu_ARC*)big_data - 1;
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
            _ResRight(min_capa);
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

    template <  typename R,
                typename F0, typename F1,
                typename B0, typename B1,
                typename I,
                typename D0, typename D1  >

    fu_INL /* new_size */ i32 _Realloc(

         R reserve  = 0,
        F0 f_push   = 0, F1 f_pop  = 0,
        B0 b_push   = 0, B1 b_pop  = 0,

         I insert   = 0,
        D0 del_from = 0, D1 del_to = 0)
    {
        i32 old_size = size();

        assert(f_pop    >= 0 && b_pop  >= 0
            && f_push   >= 0 && b_push >= 0
            && insert   >= 0
            && del_from >= 0 && del_to >= del_from && del_to <= old_size);

        // Sanitize.
        f_push = f_push > 0 ? f_push : 0;
        f_pop  = f_pop  > 0 ? f_pop  : 0;
        b_push = b_push > 0 ? b_push : 0;
        b_pop  = b_pop  > 0 ? b_pop  : 0;
        insert = insert > 0 ? insert : 0;

        del_from = del_from > 0        ? del_from : 0;
        del_from = del_from < old_size ? del_from : old_size;
        del_to   = del_to   > del_from ? del_to   : del_from;
        del_to   = del_to   < old_size ? del_to   : old_size;

        //
        i32 size_change = f_push - f_pop
                        + b_push - b_pop
                        + insert - (del_to - del_from);

        i32 new_size = old_size + size_change;
        i32 new_capa = new_size > reserve ? new_size : reserve;




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
