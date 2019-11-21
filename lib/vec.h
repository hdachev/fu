#pragma once

#include "arc.h"

template <typename T>
struct fu_VEC
{
    /////////////////////////////////////////////
    //
    // Primitives.

    using i32 = int;
    using u32 = unsigned int;

    static const bool TRIVIAL   = std::is_trivially_destructible<T>::value;

    static const i32 VEC_SIZE   = sizeof(vec);
    static const i32 SMALL_CAPA = TRIVIAL && alignof(T) <= 8
                                ? (VEC_SIZE - 1) / sizeof(T)
                                : 0;

    /////////////////////////////////////////////

            T*  _big_data = nullptr;
            i32 _big_size = 0;
    mutable i32 _big_pack = 0;

    /////////////////////////////////////////////

    // On little endian, we need the least significant capacity byte
    //  to be the rightmost byte of our struct,
    //   unless item size is >= 4, in which case we don't need aliasing.
    static const bool PACK_CAPA =
        SMALL_CAPA && sizeof(T) < 4 && fu_LITTLE_ENDIAN;

    fu_INL static i32 UNSAFE__Unpack(i32 packed) noexcept {
        if constexpr (PACK_CAPA) return (packed << 8) | (u32(packed) >> 24);
        else                     return  packed;
    }

    fu_INL static i32 UNSAFE__Pack(i32 actual) noexcept {
        if constexpr (PACK_CAPA) return (actual << 24) | (u32(actual) >> 8);
        else                     return  actual;
    }

    static const i32 IS_BIG_MASK        = PACK_CAPA ? 0xf << 24 : 0xf;
    static const i32 SMALL_SIZE_OFFSET  = PACK_CAPA ? 24 + 4 : 4;
    static const i32 SMALL_SIZE_MASK    = 0xf;

    fu_INL static i32 UNSAFE__EnsureActualLooksBig(i32& actual) noexcept
    {
        // We might need to waste a slot to be able to later tell
        //  the difference between small & big strings/vectors,
        //   shouldn't happen too often in practice because of the allocation headers -
        //    for ^2 sized things it should never happen if allocations are ^2.
        if constexpr (PACK_CAPA)
            if (!(IS_BIG_MASK & UNSAFE__Pack(actual)))
            {
                actual--;
                assert(actual > 0 && (IS_BIG_MASK & UNSAFE__Pack(actual)));
            }
    }

    /////////////////////////////////////////////

    fu_INL bool big() const noexcept {
        if constexpr (SMALL_CAPA) return _big_pack & IS_BIG_MASK;
        else                      return _big_data != nullptr;
    }

    static const i32 SIGN_BIT = 1 << 31;

    fu_INL void UNSAFE__MarkUnique() noexcept {
        _big_pack = UNSAFE__Pack( // Remove sign bit.
                  UNSAFE__Unpack(_big_pack) &~ SIGN_BIT);
    }

    fu_INL void UNSAFE__MarkShared() const noexcept {
        _big_pack = UNSAFE__Pack( // Make negative.
                  UNSAFE__Unpack(_big_pack) | SIGN_BIT);
    }

    /////////////////////////////////////////////

    fu_INL i32 UNSAFE__ReadSmallSize() const noexcept {
        if constexpr (SMALL_CAPA)   return (_big_pack >> SMALL_SIZE_OFFSET) & SMALL_SIZE_MASK;
        else                        return 0;
    }

    fu_INL void UNSAFE__WriteSmallSize(i32 actual_size) const noexcept {
        if constexpr (SMALL_CAPA) {
            const char s = actual_size << 4;
            std::memcpy((char*)this + (vec_size - 1), &s, 1);
        }
        else assert(false);
    }

    fu_INL i32 size() const noexcept {
        i32 small_size = UNSAFE__ReadSmallSize();
        return big() ? _big_size : small_size;
    }

    /////////////////////////////////////////////

    fu_INL const T* data() const { return big() ? _big_data : (T*)this; }
    fu_INL       T* data()       { return big() ? _big_data : (T*)this; }

    /////////////////////////////////////////////

    fu_INL i32 unique_capa() const { // Negative when sharing.
        i32 unique_capa = UNSAFE__Unpack(_big_pack);
        return big() ? unique_capa : SMALL_CAPA;
    }

    fu_INL i32 shared_capa() const { // Ignore sign bit.
        i32 shared_capa = UNSAFE__Unpack(_big_pack) &~ SIGN_BIT;
        return big() ? shared_capa : SMALL_CAPA;
    }

    /////////////////////////////////////////////
    //
    // Deallocation.

    ~fu_VEC() noexcept
    {
        assert(false);
    }

    #define UNSAFE__arc(data_ptr) ((fu_ARC*)data_ptr - 1)
    #define UNSAFE__unique() (UNSAFE__arc(_big_data)->unique())


    /////////////////////////////////////////////
    //
    // Allocation, copies & moves.

    fu_INL void reserve() noexcept {
        if (unique_capa() < 0)
            _Realloc<false, false> (current_capa);
    }

    fu_INL void reserve(i32 new_capa) noexcept {
        if (new_capa > unique_capa())
            _Realloc<false, false> (new_capa);
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
            _Realloc<false, false> (new_capa);
    }

    /////////////////////////////////////////////
    //
    // Let's try to power all basic ops from here.

    template <  bool Init,
                bool Clear,

                typename R,  typename L,
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
        const bool old_big      = big();
        const i32 old_size      = size();
        const i32 old_capa      = shared_capa();
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

        // Some addressing info.
        const size_t b_dest  = u32(from + uninit)  * sizeof(T);
        const size_t b_left  = u32(from)           * sizeof(T);
        const size_t b_right = u32(old_size - pop) * sizeof(T);

        /////////////////////////////////////////////
        //
        // Small strings, and trivial clear.

        if constexpr (SMALL_CAPA)
        {
            // `small -> small` and `big -> small`.
            if (new_capa <= SMALL_CAPA || Clear)
            {
                // Explicit compile away for clears & inits.
                if constexpr (!Clear && !Init)
                {
                    // Move by memmove -
                    //  Here we're optimizing for the `small -> small` case,
                    //   `big -> small` is the exception to the rule.
                    if constexpr (fu_MAYBE_POSITIVE(from))
                        std::memmove(
                            this,
                            old_data,
                            b_left & SMALL_SIZE_MASK);

                    std::memmove(
                        (char*)this + b_dest,
                        old_data + to,
                        b_right & SMALL_SIZE_MASK);
                }

                // `big -> small`
                if constexpr (!Init)
                {
                    if (old_data != (T*)this)
                    {
                        // Ensure we have a valid small-tag.
                        UNSAFE__WriteSmallSize(new_size);

                        // Free.
                        fu_ARC* arc = UNSAFE__arc(old_data);
                        if (arc->decr())
                            arc->dealloc(old_capa * sizeof(T));
                    }
                }

                // Done.
                return;
            }
        }

        /////////////////////////////////////////////
        //
        // Big vectors.

        fu_ARC* old_arc = nullptr;
        const bool old_unique = old_big && (
            old_arc = UNSAFE__arc(this),
            old_arc->unique());

        // Growing copy or move.
        if constexpr (!Clear)
        {
            T* new_data = nullptr;
            if (new_capa > old_capa || !old_unique)
            {
                {
                    fu_ARC::alloc(new_data, new_capa);
                    UNSAFE__EnsureActualLooksBig(new_capa);

                    // Writing out the correct size
                    //  is the responsibility of the caller.
                    _big_data = new_data;
                    _big_capa = new_capa;
                }

                // Either one of two things will happen here -
                //  - either we move-self by memcpy.
                //  - or we're copying trivial content from somewhere else.
                if (TRIVIAL || old_unique)
                {
                    if constexpr (fu_MAYBE_POSITIVE(from))
                        std::memcpy(
                            new_data,
                            old_data,
                            b_left & SMALL_SIZE_MASK);

                    std::memcpy(
                        (char*)new_data + b_dest,
                        old_data + to,
                        b_right & SMALL_SIZE_MASK);
                }
                else if constexpr (!TRIVIAL)
                {
                    if constexpr (fu_MAYBE_POSITIVE(from))
                        for (T *src = old_data
                            ,  *end = old_data + from
                            , *dest = new_data
                                    ; src < end; src++, dest++
                                    ) new (dest) T(*src);

                    for (T *src = old_data + to
                        ,  *end = old_data + (old_size - pop)
                        , *dest = new_data + to
                                ; src < end; src++, dest++
                                ) new (dest) T(*src);
                }

                // Free if unique.
                if (old_arc && old_arc->decr())
                {
                    // Destroy if needed.
                    if constexpr (!TRIVIAL)
                        for (T *src = old_data
                            ,  *end = old_data + old_size
                                    ; src < end; src++
                                    ) src->~T();

                    old_arc->dealloc(old_capa * sizeof(T));
                }

                // Done.
                return;
            }
        }
    }
};

int test(vec<char>& hey)
{
    return hey.unique_capa();
}
