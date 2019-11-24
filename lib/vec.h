#pragma once

#include "arc.h"

template <typename T>
struct fu_VEC
{
    /////////////////////////////////////////////
    //
    // Primitives.

    static const bool TRIVIAL   = std::is_trivially_destructible<T>::value;

    static const i32 VEC_SIZE   = sizeof(fu_VEC);
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
            std::memcpy((char*)this + (VEC_SIZE - 1), &s, 1);
        }
        else assert(false);
    }

    fu_INL i32 size() const noexcept {
        i32 small_size = UNSAFE__ReadSmallSize();
        return big() ? _big_size : small_size;
    }

    /////////////////////////////////////////////

    fu_INL const T* data() const { return big() ? _big_data : (T*)this; }

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

    #define UNSAFE__arc(data_ptr) ((fu_ARC*)data_ptr - 1)
    #define UNSAFE__unique() (UNSAFE__arc(_big_data)->unique())

    ~fu_VEC() noexcept
    {
        if (big())
            UNSAFE__Release(
                UNSAFE__arc(_big_data),
                _big_data,
                _big_size,
                _big_pack &~ SIGN_BIT);

        #ifndef NDEBUG
        _big_data = (T*)1;
        #endif
    }

    fu_INL static void UNSAFE__Release(
        fu_ARC* old_arc,
        T* old_data, i32 old_size, i32 old_capa) noexcept
    {
        if (old_arc->decr())
        {
            // Destroy if needed.
            if constexpr (!TRIVIAL)
                for (T *src = old_data
                    ,  *end = old_data + old_size
                            ; src < end; src++
                            ) src->~T();

            old_arc->dealloc(old_capa * sizeof(T));
        }
    }

    /////////////////////////////////////////////
    //
    // Let's try to power all basic ops from here.

    template <  bool Init, bool Clear,
                typename t_from, typename t_to, typename t_insert,
                typename t_pop, typename t_push >

    fu_INL void _Mutate(
        t_from from = {}, t_to to = {}, t_insert insert = {},
        t_pop pop = {}, t_push push = {}

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

        assert(from   >= 0 && to >= from && to <= old_size
            && insert >= 0

            && pop  >= 0 && pop + to <= old_size
            && push >= 0);

        // Sanitize.

        from =       from >= 0              ? from : t_from();
        from = (u32) from <= (u32) old_size ? from : old_size;

        to =       to >=       from      ? to : from;
        to = (u32) to <= (u32) old_size  ? to : old_size;
        {
            i32 max = old_size - to;
            pop = (u32) pop <= (u32) max ? pop : max;
        }

        insert = insert >= 0 ? insert : t_insert();
        push   =   push >= 0 ? push   :   t_push();

        // Alloc size.
        i32 new_size = old_size + from - to + insert - pop;
        i32 new_capa = new_size > min_capa ? new_size : min_capa;

        // Some addressing info.
        const size_t b_dest  = u32(from + insert)  * sizeof(T);
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
                    if (old_big)
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
            if (new_capa > old_capa || !old_unique)
            {
                T* new_data;
                {
                    fu_ARC::alloc(new_data, new_capa);
                    UNSAFE__EnsureActualLooksBig(new_capa);

                    // Writing out the correct size
                    //  is the responsibility of the caller.
                    _big_data = new_data;
                    _big_pack = new_capa;
                }

                // Inits end here.
                if constexpr (Init)
                    return;

                // Unique move-grow & trivial copy-grow.
                if (TRIVIAL || old_unique)
                {
                    if constexpr (fu_MAYBE_POSITIVE(from))
                        std::memcpy(
                            new_data,
                            old_data,
                            b_left);

                    std::memcpy(
                        (char*)new_data + b_dest,
                        old_data + to,
                        b_right);

                    // Move-grow destroy leftovers.
                    if (old_unique)
                    {
                        if constexpr (!TRIVIAL)
                        {
                            if constexpr (fu_MAYBE_POSITIVE(to))
                                for (T *src = old_data + from
                                    ,  *end = old_data + to
                                            ; src < end; src++
                                            ) src->~T();

                            if constexpr (fu_MAYBE_POSITIVE(pop))
                                for (T *src = old_size - pop
                                    ,  *end = old_size
                                            ; src < end; src++
                                            ) src->~T();
                        }

                        // Cross-check.
                        old_arc->dealloc(old_capa * sizeof(T));

                        // Move grows end here.
                        return;
                    }
                }

                // Non-trivial copy-grow.
                else
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

                // Either copy-grow -
                //  While copying, we might have ended up
                //   as the unique owner in the meantime.
                if (old_arc) UNSAFE__Release(
                    old_arc, old_data, old_size, old_capa);

                // Done.
                return;
            }
        }
    }

    /////////////////////////////////////////////
    //
    // High level operator helpers.

    #define FWD(v) static_cast<T&&>(v)

    #define ZERO fu_ZERO()

    #define _One fu_ONE()

    #define MUTATE(...) T* new_data; i32 new_size; i32 old_size;\
        _Mutate<false, false>(new_data, new_size, old_size,\
            __VA_ARGS__ )

    #define UNSAFE__MoveConstructOne(dest, item) new (dest) (FWD(item))

    /////////////////////////////////////////////
    //
    // Single insertion.

    void push(T&& item) noexcept
    {
        MUTATE(
            ZERO, ZERO, ZERO,
                  ZERO, _One);

        UNSAFE__MoveConstructOne(
            new_data + old_size, item);
    }

    template <typename I>
    void insert(I i, T&& item) noexcept
    {
        MUTATE(
            i, ZERO, _One,
               ZERO, ZERO);

        UNSAFE__MoveConstructOne(
            new_data + i, item);
    }

    fu_INL void unshift(T&& item) noexcept
    {
        insert(ZERO, FWD(item));
    }

    /////////////////////////////////////////////
    //
    // Multiple insertion.

    template <typename I, typename D, typename V>
    auto splice(I idx, D del, const V& r) noexcept
        ->  decltype( const_cast<T*>( r.data() + r.size() )
                    , void() )
    {
        return splice_copy(idx, del,
            r.data(), (i32) r.size());
    }

    template <typename I, typename D>
    void splice(I idx, D del, fu_VEC&& src) noexcept
    {
        // Trivial if we're empty.
        if (!size()) {
            assert(!idx && !del);
            (*this) = static_cast<T&&>( src );
        }

        // Unless unique, we copy & free other.
        //  Other will free itself anyway, but doing it early
        //   might help someone else become unique in time.
        if (!src.unique_capa_hard()) {
            splice_copy(idx, del,
                src.data(), src.size());

            return src._Dealloc();
        }

        // MOVE-BY-MEMCPY -
        //  unique, non-trivial owner -
        //   means we can't be aliasing each other.
        assert(false && "TODO TEST");

        MUTATE(
            idx, del,  src.size(),
                 ZERO, ZERO);

        UNSAFE__MemCopyRange(
            new_data + idx, src.data(),
            src.size());

        // See above.
        src._Dealloc_DontRunDtors();
    }

    //

    template <typename I, typename D>
    void splice_copy(I idx, D del, const T* src, i32 count) noexcept
    {
        MUTATE(
            idx, del,  count,
                 ZERO, ZERO);

        return UNSAFE__CopyConstructRange(
            new_data + idx, src, count);
    }

    template <typename I, typename D>
    void splice_move(I idx, D del, T* src, i32 count) noexcept
    {
        MUTATE(
            idx, del,  count,
                 ZERO, ZERO);

        return UNSAFE__MoveConstructRange(
            new_data + idx, src, count);
    }

    /////////////////////////////////////////////
    //
    // Resizing.

    fu_NEVER_INLINE void resize(i32 s1) noexcept
    {
        i32 s0 = size();
        if (s1 > s0)    grow(s1);
        else            shrink(s1);
    }

    void grow(i32 s1) noexcept
    {
        i32 s0 = size();

        MUTATE(
            ZERO, ZERO, ZERO,
                  ZERO, s1 - s0);

        // Trivial ranges are not zero-initialized,
        //  it's such a waste.
        UNSAFE__DefaultInitRange(
            new_data + old_size,
            new_data + new_size);
    }

    void UNSAFE__DefaultInitRange(T* start, T* end)
    {
        if constexpr (!TRIVIAL)
            for (T* i = start; i < end; i++)
                new (i) T();
#ifndef NDEBUG
        else
        {
            // Ensure first X bytes are full of rubbish,
            //  we'll seed with the pointer
            //   to get some extra noises going.
            char* p0 = (char*)start;
            char* p1 = (char*)end;
            char* pN = p0 + 256;

            p1  = p1 < pN
                ? p1 : pN;

            for (char* i = p0; i < p1; i++)
                *i = (char) (uintptr_t) i;
        }
#endif
    }

    /////////////////////////////////////////////
    //
    // Deletion.

    void shrink(i32 s1) noexcept
    {
        i32 s0 = size();

        MUTATE(
            ZERO, ZERO,    ZERO,
                  s0 - s1, ZERO);
    }

    void pop() noexcept
    {
        MUTATE(
            ZERO, ZERO, ZERO,
                  _One, ZERO);
    }

    template <typename I, typename D>
    void erase(I i, D num) noexcept
    {
        MUTATE(
            i, num,  ZERO,
               ZERO, ZERO);
    }

    fu_INL void shift() noexcept
    {
        erase(ZERO, _One);
    }

    fu_INL void trim(i32 head) noexcept
    {
        erase(ZERO, head);
    }

    fu_INL void trim(i32 head, i32 tail) noexcept
    {
        MUTATE(
            ZERO, head, ZERO,
                  tail, ZERO);
    }

    /////////////////////////////////////////////
    //
    // TODO FIX OPTI
    //  The ones that call T() would perform better
    //   if they copy-initialized at the final location,
    //    the once that index @ size() will perform better
    //     if they use the tail insertion api.

    void push(const T& v) {
        push( T(v) );
    }

    void unshift(const T& v) {
        unshift( T(v) );
    }

    void insert(i32 idx, const T& v) {
        insert( idx, T(v) );
    }

    fu_INL void append(T&& t) noexcept {
        return splice(size(), ZERO, FWD(t));
    }

    fu_INL void append(const T& t) noexcept {
        return splice(size(), ZERO, t);
    }
};


// Slice.

template <typename T>
fu_VEC<T> fu_SLICE(fu_VEC<T>&& v, i32 start) noexcept
{
    v.trim(start);
    return FWD(v);
}

template <typename T>
fu_VEC<T> fu_SLICE(fu_VEC<T>&& v, i32 start, i32 end) noexcept
{
    v.trim(start, end);
    return FWD(v);
}

template <typename T>
fu_VEC<T> fu_SLICE(const fu_VEC<T>& v, i32 start) noexcept {
    i32 end = v.size();
    assert(start >= 0 && start <= end);

    fu_VEC<T> result;

    const T* src = v.data();
    result.splice_copy(ZERO, ZERO,
        src + start, src + end);

    return result;
}

template <typename T>
fu_VEC<T> fu_SLICE(const fu_VEC<T>& v, i32 start, i32 end) noexcept {
    i32 s = v.size();
    assert(start >= 0 && start <= end && end <= s);

    fu_VEC<T> result;

    const T* src = v.data();
    result.splice_copy(ZERO, ZERO,
        src + start, src + end);

    return result;
}


// String & array concat.

template <typename T>
fu_VEC<T> operator+(fu_VEC<T>&& a, fu_VEC<T>&& b) noexcept {
    a.append(ZERO, FWD(b));
    return FWD(a);
}

template <typename T>
fu_VEC<T> operator+(fu_VEC<T>&& a, const fu_VEC<T>& b) noexcept {
    a.append(ZERO, b);
    return FWD(a);
}

template <typename T>
fu_VEC<T> operator+(const fu_VEC<T>& b, fu_VEC<T>&& a) noexcept {
    a.splice(ZERO, ZERO, b);
    return FWD(a);
}
