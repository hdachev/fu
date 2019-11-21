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

    #define UNSAFE__MarkUnique() (assert(big()), _big_capa &= 0x7fffffff)
    #define UNSAFE__MarkShared() (assert(big()), _big_capa |= 0x80000000)

    /////////////////////////////////////////////

    static const i32 SMALL_SIZE_OFFSET = 27;

    fu_INL i32 size() const {
        i32 small_size = _big_capa >> SMALL_SIZE_OFFSET;
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

    #define UNSAFE__arc(data_ptr) ((fu_ARC*)data_ptr - 1)
    #define UNSAFE__unique() (UNSAFE__arc(_big_data)->unique())


    /////////////////////////////////////////////
    //
    // Allocation, copies & moves.

    fu_INL void reserve() noexcept {
        if (unique_capa() < 0)
            _Realloc(current_capa);
    }

    fu_INL void reserve(i32 new_capa) noexcept {
        if (new_capa > unique_capa())
            _Realloc(new_capa);
    }

    /////////////////////////////////////////////

    fu_INL void res_right(i32 extra_capa) noexcept {
        assert(extra_capa > 0);

        i32 min_capa = size() + extra_capa;
        if (unique_capa() < min_capa)
            [[unlikely]] _ResRight(min_capa);
    }

    fu_NEVER_INLINE
    void _ResRight(i32 new_capa) noexcept {
        i32 current_capa = shared_capa();
        if (current_capa >= new_capa && UNSAFE__unique())
            UNSAFE__MarkUnique();
        else
            _Realloc(new_capa);
    }

    /////////////////////////////////////////////
    //
    // Let's try to power all basic ops from here.

    template <  typename R,  typename L,

                typename M0, typename M1, typename M2,
                typename P  >

    fu_INL /* new_size */ i32 _Realloc(

        /////////////////////////////////////////////

        // Reserve layout.
        R min_capa = {}, L try_leftroom = {},

        // Replace operator -
        //  clear from-to range, leaving `uninit` uninitialized memory.
        M0 from = {}, M1 to = {}, M2 uninit = {},

        // Pop operator.
        P pop = {}

        /////////////////////////////////////////////

    ) noexcept
    {
        const i32 old_size = size();
        const T* const old_data = data();

        /////////////////////////////////////////////
        //
        // Most of this stuff should compile away -
        //  The pointless looking (u32) casts are intended
        //   to make condition-always-true setups extra obvious.

        assert(min_capa >= 0 && (try_leftroom == 0 || try_leftroom == 1)

            // Splice operator -
            //  erase/insert/splice/shift/unshift and slice(l).
            && from >= 0 && to >= from && to <= old_size
            && uninit >= 0

            // Tail operator -
            //  pop and slice(r).
            && pop >= 0
            && pop + to <= old_size);

        /////////////////////////////////////////////
        //
        // Sanitize.

        from =       from >= 0              ? from : {};
        from = (u32) from <= (u32) old_size ? from : old_size;

        to =       to >=       from      ? to : from;
        to = (u32) to <= (u32) old_size  ? to : old_size;
        {
            i32 max = old_size - to;
            pop = (u32) pop <= (u32) max ? pop : max;
        }
        uninit = uninit >= 0 ? uninit : {};

        // Alloc size.
        i32 new_size = old_size + from - to + uninit - pop;
        i32 new_capa = new_size > min_capa ? new_size : min_capa;

        /////////////////////////////////////////////
        //
        // Small strings.

        if constexpr (small_capa)
        {
            // `small -> small` and `big -> small`.
            if (new_capa <= small_capa)
            {
                // The & 0xf hopefully help the compiler optimize the memmove.
                static_assert(0xf == (vec_size - 1), "o_O");

                const size_t b_dest  = (u32(from + uninit)  * sizeof(T)) & 0xf;
                const size_t b_left  = (u32(from)           * sizeof(T)) & 0xf;
                const size_t b_right = (u32(old_size - pop) * sizeof(T)) & 0xf;

                // Move by memmove -
                //  Here we're optimizing for the `small -> small` case,
                //   `big -> small` is the exception to the rule.
                if (fu_MAYBE_POSITIVE(from))
                    std::memmove(
                        this,
                        old_data,
                        b_left);

                std::memmove(
                    (char*)this + b_dest,
                    old_data + to,
                    b_right);

                // Big -> small.
                if (old_data != (T*)this)
                {
                    fu_ARC* arc = UNSAFE__arc(old_data);
                    if (arc->decr())
                        arc->dealloc();
                }

                // New size.
                ((char*)this)[vec_size - 1] =
                    char(new_size << SMALL_SIZE_OFFSET);

                // Done.
                return;
            }
        }

        /////////////////////////////////////////////
        //
        // Big strings.

        {
            // ...
        }
    }

};

int test(vec<char>& hey)
{
    return hey.unique_capa();
}
