#pragma once

#include "arc.h"

template <typename T>
struct fu_VEC
{
    /////////////////////////////////////////////
    //
    // Primitives.

    static const bool TRIVIAL   = std::is_trivially_destructible<T>::value;

    static const i32 VEC_SIZE   = 16;
    static const i32 SMALL_CAPA = TRIVIAL && alignof(T) <= 8
                                ? (VEC_SIZE - 1) / sizeof(T)
                                : 0;

    /////////////////////////////////////////////

            T*  _big_data = nullptr;
            i32 _big_size = 0;
    mutable i32 _big_PACK = 0;

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

    fu_INL bool small() const noexcept {
        if constexpr (SMALL_CAPA) return !(_big_PACK & IS_BIG_MASK);
        else                      return false;
    }

    static const i32 SIGN_BIT = 1 << 31;

    fu_INL void UNSAFE__MarkUnique() noexcept {
        i32  capa = UNSAFE__Unpack(_big_PACK) &~ SIGN_BIT;
        _big_PACK = UNSAFE__Pack(capa);
        return capa;
    }

    fu_INL void UNSAFE__MarkShared() const noexcept {
        _big_PACK = UNSAFE__Pack( // Make negative.
                  UNSAFE__Unpack(_big_PACK) | SIGN_BIT);
    }

    fu_INL void UNSAFE__WriteBig(T* data, i32 size, i32 capa) noexcept {
        assert(capa > SMALL_CAPA);
        _big_data = data;
        _big_size = size;
        _big_PACK = UNSAFE__Pack(capa);
    }

    fu_INL void UNSAFE__WriteEmpty() noexcept {
        static_assert(!SMALL_CAPA);
        _big_data = nullptr;
        _big_size = 0;
        _big_PACK = 0;
    }

    fu_INL i32 capa() const noexcept {
        if constexpr (SMALL_CAPA) {
            i32 capa = UNSAFE__Unpack(_big_PACK);
            return small() ? SMALL_CAPA : capa;
        }

        return _big_PACK;
    }

    /////////////////////////////////////////////

    fu_INL i32 UNSAFE__ReadSmallSize() const noexcept {
        if constexpr (SMALL_CAPA)   return (_big_PACK >> SMALL_SIZE_OFFSET) & SMALL_SIZE_MASK;
        else                        return 0;
    }

    fu_INL void UNSAFE__WriteSmall(i32 actual_size) noexcept {
        static_assert(SMALL_CAPA);
        const char s = char(actual_size << 4);
        std::memcpy((char*)this + (VEC_SIZE - 1), &s, 1);
    }

    fu_INL void UNSAFE__WriteSize(i32 actual_size) noexcept {
        if constexpr (SMALL_CAPA)
            if (small()) {
                UNSAFE__WriteSmall(actual_size);
                return;
            }

        _big_size = actual_size;
    }

    fu_INL i32 size() const noexcept {
        if constexpr (SMALL_CAPA) {
            i32 small_size = UNSAFE__ReadSmallSize();
            return small() ? small_size : _big_size;
        }

        return _big_size;
    }

    /////////////////////////////////////////////

    fu_INL const T* data() const noexcept {
        if constexpr (SMALL_CAPA) {
            return small() ? (T*)this : _big_data;
        }

        return _big_data;
    }

    /////////////////////////////////////////////
    //
    // Deallocation.

    #define UNSAFE__arc(data_ptr) ((fu_ARC*)data_ptr - 1)
    #define UNSAFE__unique() (UNSAFE__arc(_big_data)->unique())

    ~fu_VEC() noexcept
    {
        // clang wont allow using sizeof up there,
        //  incomplete type and all, here works.
        static_assert(sizeof(fu_VEC) == VEC_SIZE);

        i32 old_capa = capa();
        if (old_capa != SMALL_CAPA)
            UNSAFE__Release(
                UNSAFE__arc(_big_data),
                _big_data,
                _big_size,
                old_capa &~ SIGN_BIT);

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

    template <  bool is_Init,
                bool is_Clear,

                typename t_idx, typename t_del, typename t_insert,
                                typename t_pop, typename t_push >
    fu_INL T* _Splice(

        // Out params.
        i32& out_old_size,
        i32& out_new_size,

        // Cursors.
        t_idx idx = {}, t_del del = {}, t_insert insert = {},
                        t_pop pop = {}, t_push   push   = {}

    ) noexcept
    {
        // TODO consider inlining these manually,
        //  there's some risk that common subexpressions
        //   won't eliminate cleanly for small vectors.
        const i32  old_size = op_Init ? 0          : size();
              i32  old_capa = op_Init ? SMALL_CAPA : capa();
        const T*   old_data = op_Init ? (T*)this   : data();

        assert(idx >= 0 && idx <= old_size
            && del >= 0 && pop >= 0 && idx + del + pop <= old_size
            && insert >= 0 && push >= 0);

        // Sanitize.
        idx     = idx    > 0 ? idx    : t_idx();
        del     = del    > 0 ? del    : t_del();
        pop     = pop    > 0 ? pop    : t_pop();
        insert  = insert > 0 ? insert : t_insert();
        push    = push   > 0 ? push   : t_push();

        // <=(u32) hints should compile stuff away.
        idx     = idx <=(u32) old_size ? idx : old_size;

        if constexpr (fu_MAYBE_POS(del)) {
            i32 max = old_size - idx;
            del = del <=(u32) max ? del : max;
        }

        if constexpr (fu_MAYBE_POS(pop)) {
            i32 max = old_size - idx - del;
            pop = pop <=(u32) max ? pop : max;
        }

        const i32 new_size = is_Clear
            ? 0
            : old_size + (insert + push - del - pop);

        out_old_size = old_size; // Out param! ////
        out_new_size = new_size; // Out param! ////

        if constexpr (!is_Init)
        {
            ///////////////////////////////////////////
            //
            CONSIDER_HOLDING_GROUND:
            //
            if (new_size <= old_capa)
            {
                // Call destructors.
                if constexpr (!TRIVIAL)
                {
                    if constexpr (is_Clear)
                    {
                        DESTROY_range(
                            old_data,
                            old_data + old_size);
                    }
                    else
                    {
                        if constexpr (fu_MAYBE_POS(del))
                            DESTROY_range(
                                old_data + (idx      ),
                                old_data + (idx + del));

                        if constexpr (fu_MAYBE_POS(pop))
                            DESTROY_range(
                                old_data + (old_size - pop),
                                old_data + (old_size      ));
                    }
                }

                // Move the middleground around.
                if constexpr (!is_Clear &&
                             (fu_MAYBE_POS(del) || fu_MAYBE_POS(insert)))
                {
                    MEMMOVE_range(
                        old_data + (idx + del),
                        old_data + (idx + insert),
                        old_size - del - pop);
                }

                // Done.
                UNSAFE__WriteSize(new_size);

                return old_data;
            }

            ///////////////////////////////////////////
            //
            // We appear to be sharing -
            //  if we could still fit in the old block,
            //   there's a couple of things we could try.
            //
            if (new_size > SMALL_CAPA &&
                new_size <= (old_capa &~ SIGN_BIT))
            {
                // Do nothing if this is a TRIVIAL shrink -
                //  we can right-slice shared TRIVIAL for free.
                //   Doesn't work for non-TRIVIAL
                //    because we'd lose track of destructors.
                if constexpr (TRIVIAL)
                {
                    if (idx + del + pop == old_size)
                    {
                        _big_size = idx;
                        return nullptr;
                    }
                }

                // Attempt to reacquire ownership.
                if (hard_check_unique())
                {
                    old_capa = UNSAFE__MarkUnique();
                    goto CONSIDER_HOLDING_GROUND;
                }
            }
        }

        ///////////////////////////////////////////
        //
        // We have to reallocate.

        T* new_data;
        if (new_size <= SMALL_CAPA)
        {
            new_data = (T*)this;

            if constexpr (SMALL_CAPA)
                UNSAFE__WriteSmall(new_size);
            else
                UNSAFE__WriteEmpty();
        }
        else
        {
            i32 new_capa = new_size;
            fu_ARC::alloc(new_data, new_capa);
            UNSAFE__EnsureActualLooksBig(new_capa);

            assert(new_capa >= new_size);
            UNSAFE__WriteBig(new_data, new_size, new_capa);
        }

        // Init ends here (no free, no realloc).
        if (is_Init)
            return new_data;

        // Can we relocate the content?
        const i32 shared_capa = old_capa &~ SIGN_BIT;
        if (old_capa    > 0 ||
           (shared_capa > 0 && shared_capa < new_size && hard_check_unique()))
        {
            assert(new_data != old_data);

            // Cheap move by memcpy.
            if constexpr (!is_Clear)
            {
                if constexpr (fu_MAYBE_POS(idx))
                    MEMCPY_range(
                        new_data,
                        old_data,
                        idx);

                MEMCPY_range(
                    new_data + (idx + insert),
                    old_data + (idx + del),
                    old_size - (idx - del - pop));
            }

            // Call destructors (copy-paste from above).
            if constexpr (!TRIVIAL)
            {
                if constexpr (is_Clear)
                {
                    DESTROY_range(
                        old_data,
                        old_data + old_size);
                }
                else
                {
                    if constexpr (fu_MAYBE_POS(del))
                        DESTROY_range(
                            old_data + (idx      ),
                            old_data + (idx + del));

                    if constexpr (fu_MAYBE_POS(pop))
                        DESTROY_range(
                            old_data + (old_size - pop),
                            old_data + (old_size      ));
                }
            }

            // Free old.
            if (old_capa > SMALL_CAPA)
                UNSAFE__Dealloc_DontRunDtors(
                    old_data, old_capa);

            return new_data;
        }

        // Finally, the expensive copy-construct.
        if constexpr (!is_Clear)
        {
            if constexpr (fu_MAYBE_POS(idx))
                CPY_ctor_range(
                    new_data,
                    old_data,
                    idx);

            CPY_ctor_range(
                new_data + (idx + insert),
                old_data + (idx + del),
                old_size - (idx - del - pop));
        }

        // Release the old mem, running destructors
        //  if we somehow ended up as the unique owner in the meantime.
        if (old_capa > SMALL_CAPA)
            UNSAFE__Dealloc(
                old_data, old_size, old_capa);

        return new_data;
    }







    /////////////////////////////////////////////
    //
    // Ctor/dtor utils.

    #define MOV_ctor(dest, item) (new (dest) T(FWD(item)))
    #define CPY_ctor(dest, item) (new (dest) T(    item ))

    #define  MEMCPY_range(d, s, n) if (d != s && n)  std::memcpy(d, s, u32(n) * sizeof(T))
    #define MEMMOVE_range(d, s, n) if (d != s && n) std::memmove(d, s, u32(n) * sizeof(T))

    fu_INL void CPY_ctor_range(T* dest, const T* src, i32 count) noexcept
    {
        if constexpr (TRIVIAL)
            MEMCPY_range(dest, src, count);
        else
            for (*end = dest + count; i < end; i++)
                CPY_ctor(dest, src[i]);
    }

    fu_INL void MOV_ctor_range(T* dest, const T* src, i32 count) noexcept
    {
        if constexpr (TRIVIAL)
            MEMCPY_range(dest, src, count);
        else
            for (*end = dest + count; i < end; i++)
                MOV_ctor(dest, src[i]);
    }

    fu_INL void DEF_initRange(T* start, T* end) noexcept
    {
        if constexpr (!TRIVIAL)
            for (T* i = start; i < end; i++)
                new (i) T();

#ifndef NDEBUG
        // We don't default-initialize trivial types,
        //  it's too stupid.

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
    // High level operator helpers.

    #define FWD(v)  static_cast<T&&>(v)

    #define Zero    fu_ZERO()
    #define One     fu_ONE()

    #define MUT_op(Init, Clear, ...) i32 old_size; i32 new_size;\
        T* new_data = _Splice<Init, Clear>(old_size, new_size,\
            __VA_ARGS__ )

    #define MUT_front(rem, add) MUT_op(false, false, Zero, rem, add, Zero, Zero)
    #define MUT_back(rem, add) MUT_op(false, false, Zero, Zero, Zero, rem, add)
    #define MUT_mid(at, rem, add) MUT_op(false, false, at, rem, add, Zero, Zero)
    #define MUT_trim(shift, pop) MUT_op(false, false, Zero, shift, Zero, pop, Zero)
    #define MUT_init(size) MUT_op(true, false, Zero, Zero, Zero, Zero, size)
    #define MUT_clear() MUT_op(false, true, Zero, Zero, Zero, Zero, Zero)


    //
    // Single insertion.

    void push(T&& item) noexcept {
        MUT_back(Zero, One); MOV_ctor(new_data + old_size, item);
    }

    void push(const T& item) noexcept {
        MUT_back(Zero, One); CPY_ctor(new_data + old_size, item);
    }

    template <typename I>
    void insert(I i, T&& item) noexcept {
        MUT_mid(i, Zero, One); MOV_ctor(new_data + i, item);
    }

    template <typename I>
    void insert(I i, const T& item) noexcept {
        MUT_mid(i, Zero, One); CPY_ctor(new_data + i, item);
    }

    void unshift(T&& item) noexcept {
        MUT_front(Zero, One); MOV_ctor(new_data, item);
    }

    void unshift(const T& item) noexcept {
        MUT_front(Zero, One); CPY_ctor(new_data, item);
    }


    //
    // Resizing.

    void resize(i32 s1) noexcept {
        i32 s0  = size();
        i32 rem = s0 - s1; rem = rem > 0 ? rem : 0;
        i32 add = s1 - s0; add = add > 0 ? add : 0;

        MUT_back(rem, add);
        DEF_initRange(new_data + old_size, new_data + new_size);
    }

    void grow(i32 s1) noexcept {
        MUT_back(Zero, s1 - size());
        DEF_initRange(new_data + old_size, new_data + new_size);
    }

    void clear() noexcept {
        MUT_clear();
    }

    void shrink(i32 s1) noexcept {
        MUT_back(size() - s1, Zero);
    }

    void pop() noexcept {
        MUT_back(One, Zero);
    }

    template <typename I, typename D>
    void splice(I i, D num) noexcept {
        MUT_mid(i, num, Zero);
    }

    void shift() noexcept {
        MUT_front(Zero, One);
    }

    void trim(i32 head) noexcept {
        MUT_front(Zero, head);
    }

    void trim(i32 head, i32 tail) noexcept {
        MUT_trim(head, tail);
    }


    //
    // Splices.

    template <typename I, typename D>
    void splice(I idx, D del, fu_VEC&& src) noexcept
    {
        T*  src_data = src.data();
        i32 src_size = src.size();

        MUT_mid(idx, del, src_size);

        if (!src.hard_check_unique()) {
            CPY_ctor_range(new_data + idx, src_data, src_size);
            src._Dealloc();
        }
        else {
            MEMCPY_range(new_data + idx, src_data, src_size);
            src._Dealloc_DontRunDtors();
        }
    }

    template <typename I, typename D, typename V>
    auto splice(I idx, D del, const V& r) noexcept
        ->  decltype( const_cast<T*>( r.data() + r.size() ), void() )
    {
        assert((void*)&r != (void*)this && "mut alias");

        T*  src_data =       src.data();
        i32 src_size = (i32) src.size();

        MUT_mid(idx, del, src_size);
        CPY_ctor_range(new_data + idx, src_data, src_size);
    }

    template <typename I, typename D>
    void splice_copy(I idx, D del, const T* src_data, i32 src_size) noexcept
    {
        MUT_mid(idx, del, src_size);
        CPY_ctor_range(new_data + idx, src_data, src_size);
    }


    //
    // Appends, same as splices, but MUT_back.

    template <typename D>
    void append(D del, fu_VEC&& src) noexcept
    {
        T*  src_data = src.data();
        i32 src_size = src.size();

        MUT_back(del, src_size);

        if (!src.hard_check_unique()) {
            CPY_ctor_range(new_data + old_size, src_data, src_size);
            src._Dealloc();
        }
        else {
            MEMCPY_range(new_data + old_size, src_data, src_size);
            src._Dealloc_DontRunDtors();
        }
    }

    template <typename D, typename V>
    auto append(D del, const V& r) noexcept
        ->  decltype( const_cast<T*>( r.data() + r.size() ), void() )
    {
        assert((void*)&r != (void*)this && "mut alias");

        T*  src_data =       src.data();
        i32 src_size = (i32) src.size();

        MUT_back(del, src_size);
        CPY_ctor_range(new_data + old_size, src_data, src_size);
    }

    template <typename D>
    void append_copy(D del, const T* src_data, i32 src_size) noexcept
    {
        MUT_back(del, src_size);
        CPY_ctor_range(new_data + old_size, src_data, src_size);
    }


    //
    // Finally, some stuff to power literals.

    void init_copy(T* src_data, i32 src_size) noexcept {
        MUT_init(src_size);
        MOV_ctor_range(new_data, src_data, src_size);
    }

    void init_move(T* src_data, i32 src_size) noexcept {
        MUT_init(src_size);
        MOV_ctor_range(new_data, src_data, src_size);
    }
};


// Slice.

template <typename T>
fu_VEC<T> slice(fu_VEC<T>&& v, i32 start) noexcept
{
    v.trim(start);
    return FWD(v);
}

template <typename T>
fu_VEC<T> slice(fu_VEC<T>&& v, i32 start, i32 end) noexcept
{
    v.trim(start, end);
    return FWD(v);
}

template <typename T>
fu_VEC<T> slice(const fu_VEC<T>& v, i32 start) noexcept {
    i32 end = v.size();
    assert(start >= 0 && start <= end);

    fu_VEC<T> result;

    const T* src = v.data();
    result.append_copy(Zero, Zero,
        src + start, src + end);

    return result;
}

template <typename T>
fu_VEC<T> slice(const fu_VEC<T>& v, i32 start, i32 end) noexcept {
    i32 s = v.size();
    assert(start >= 0 && start <= end && end <= s);

    fu_VEC<T> result;

    const T* src = v.data();
    result.append_copy(Zero, Zero,
        src + start, src + end);

    return result;
}


// String & array concat.

template <typename T>
fu_VEC<T> operator+(fu_VEC<T>&& a, fu_VEC<T>&& b) noexcept {
    a.append(Zero, FWD(b));
    return FWD(a);
}

template <typename T>
fu_VEC<T> operator+(fu_VEC<T>&& a, const fu_VEC<T>& b) noexcept {
    a.append(Zero, b);
    return FWD(a);
}

template <typename T>
fu_VEC<T> operator+(const fu_VEC<T>& b, fu_VEC<T>&& a) noexcept {
    a.splice(Zero, Zero, b);
    return FWD(a);
}


//

#undef MOV_ctor
#undef CPY_ctor
#undef  MEMCPY_range
#undef MEMMOVE_range

#undef FWD
#undef Zero
#undef One

#undef MUT_op
#undef MUT_front
#undef MUT_back
#undef MUT_mid
#undef MUT_trim
#undef MUT_init
#undef MUT_clear
