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
    static const i32 SMALL_CAPA = TRIVIAL && alignof(T) <= alignof(T*)
                                ? (VEC_SIZE - 1) / sizeof(T)
                                : 0;

    static const bool HAS_SMALL = SMALL_CAPA > 0;

    /////////////////////////////////////////////

            T*  _big_data = nullptr;
            i32 _big_size = 0;
    mutable i32 _big_PACK = 0;

    fu_VEC() = default;

    /////////////////////////////////////////////

    // On little endian, we need the least significant capacity byte
    //  to be the rightmost byte of our struct,
    //   unless item size is >= 4, in which case we don't need aliasing.
    static const bool PACK_CAPA =
        SMALL_CAPA && sizeof(T) < 4 && fu_LITTLE_ENDIAN;

    fu_INL static constexpr i32 UNSAFE__Unpack(i32 packed) noexcept {
        if constexpr (PACK_CAPA) return (packed << 8) | (u32(packed) >> 24);
        else                     return  packed;
    }

    fu_INL static constexpr i32 UNSAFE__Pack(i32 actual) noexcept {
        if constexpr (PACK_CAPA) return (actual << 24) | (u32(actual) >> 8);
        else                     return  actual;
    }

    static const i32 IS_BIG_MASK        = PACK_CAPA ? 0xf << 24 : 0xf;
    static const i32 SMALL_SIZE_OFFSET  = PACK_CAPA ? 24 + 4 : 4;
    static const i32 SMALL_SIZE_MASK    = 0xf;

    fu_INL static void UNSAFE__EnsureActualLooksBig(i32& actual) noexcept
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
        if constexpr (HAS_SMALL) return !(_big_PACK & IS_BIG_MASK);
        else                     return false;
    }

    static const i32 SIGN_BIT = 1 << 31;

    fu_INL i32 capa() const noexcept {
        if constexpr (HAS_SMALL) {
            i32 capa = UNSAFE__Unpack(_big_PACK);
            return small() ? SMALL_CAPA : capa;
        }

        return _big_PACK;
    }

    fu_INL i32 shared_capa() const noexcept {
        return capa() &~ SIGN_BIT;
    }

    fu_INL i32 UNSAFE__MarkUnique() const noexcept {
        assert(!small());
        i32  capa = shared_capa();
        _big_PACK = UNSAFE__Pack(capa);
        return capa;
    }

    fu_INL void UNSAFE__MarkShared() const noexcept {
        assert(!small());
        _big_PACK = UNSAFE__Pack( // Make negative.
                  UNSAFE__Unpack(_big_PACK) | SIGN_BIT);
    }

    fu_INL void UNSAFE__WriteBig(T* data, i32 size, i32 capa) noexcept {
        assert(capa > SMALL_CAPA);
        _big_data = data;
        _big_size = size;
        _big_PACK = UNSAFE__Pack(capa);
    }

    fu_INL void UNSAFE__Reset() noexcept {
        _big_data = nullptr;
        _big_size = 0;
        _big_PACK = 0;
    }

    /////////////////////////////////////////////

    fu_INL i32 UNSAFE__ReadSmallSize() const noexcept {
        if constexpr (HAS_SMALL) return (_big_PACK >> SMALL_SIZE_OFFSET) & SMALL_SIZE_MASK;
        else                     return 0;
    }

    fu_INL void UNSAFE__WriteSmall(i32 actual_size) noexcept {
        static_assert(SMALL_CAPA);

        if constexpr (PACK_CAPA) {
            const char s = char(actual_size << 4);
            std::memcpy((char*)this + (VEC_SIZE - 1), &s, 1);
        }
        else {
            _big_PACK = (actual_size & SMALL_SIZE_MASK) << SMALL_SIZE_OFFSET;
        }
    }

    fu_INL void UNSAFE__WriteSize(i32 actual_size) noexcept {
        if constexpr (HAS_SMALL)
            if (small()) {
                UNSAFE__WriteSmall(actual_size);
                return;
            }

        _big_size = actual_size;
    }

    fu_INL i32 size() const noexcept {
        if constexpr (HAS_SMALL) {
            i32 small_size = UNSAFE__ReadSmallSize();
            return small() ? small_size : _big_size;
        }

        return _big_size;
    }

    /////////////////////////////////////////////

    fu_INL const T* data() const noexcept {
        if constexpr (HAS_SMALL) {
            return small() ? (T*)this : _big_data;
        }

        return _big_data;
    }





    /////////////////////////////////////////////
    //
    // Deallocation.

    #define UNSAFE__arc(data_ptr) ((fu_ARC*)data_ptr - 1)

    ~fu_VEC() noexcept
    {
        // clang wont allow using sizeof up there,
        //  incomplete type and all, here works.
        static_assert(sizeof(fu_VEC) == VEC_SIZE);

        _SafeDealloc();

        // Ensure things break badly in debug.
        #ifndef NDEBUG
        _big_data = (T*)1;
        _big_size = 1;
        _big_PACK = 0x01010101;
        #endif
    }


    // Safe release.

    fu_INL void _SafeDealloc() noexcept
    {
        i32 shared_capa = this->shared_capa();
        if (shared_capa > SMALL_CAPA)
            SHARED__Dealloc(
                _big_data, _big_size, shared_capa);

        UNSAFE__Reset();
    }

    fu_INL static void SHARED__Dealloc(
        T* old_data, i32 old_size, i32 old_capa) noexcept
    {
        assert(old_capa > SMALL_CAPA);

        fu_ARC* arc = UNSAFE__arc(old_data);
        if (arc->decr()) {
            DESTROY_range(
                old_data,
                old_data + old_size);

            arc->dealloc(old_capa * sizeof(T));
        }
    }


    // Unsafe release.

    fu_INL void UNIQ__Dealloc_DontRunDtors() noexcept
    {
        i32 unique_capa = capa();
        assert(unique_capa > SMALL_CAPA);

        i32 shared_capa = unique_capa &~ SIGN_BIT;
        if (shared_capa > SMALL_CAPA) {
            UNIQ__Dealloc_DontRunDtors(
                _big_data, shared_capa);
        }
        else {
            assert(false);
        }
    }

    fu_INL static void UNIQ__Dealloc_DontRunDtors(
        T* old_data, i32 old_capa) noexcept
    {
        fu_ARC* arc = UNSAFE__arc(old_data);

        #ifndef NDEBUG
        assert(arc->decr() && "not unique");
        #endif

        arc->dealloc(old_capa * sizeof(T));
    }






    /////////////////////////////////////////////
    //
    // Copy & move constructors.

    fu_INL fu_VEC(const fu_VEC& c)
        : _big_data(c._big_data)
        , _big_size(c._big_size)
        , _big_PACK(c._big_PACK)
    {
        i32 shared_capa = this->shared_capa();
        if (shared_capa > SMALL_CAPA)
        {
            UNSAFE__MarkShared();

            c.UNSAFE__MarkShared();
            UNSAFE__arc(_big_data)->incr();
        }
    }

    fu_INL fu_VEC(fu_VEC&& x)
        : _big_data(x._big_data)
        , _big_size(x._big_size)
        , _big_PACK(x._big_PACK)
    {
        x.UNSAFE__Reset();
    }

    fu_INL fu_VEC& operator=(const fu_VEC& c)
    {
        if (this != &c)
            *this = fu_VEC(c);

        return *this;
    }

    fu_INL fu_VEC& operator=(fu_VEC&& c)
    {
        this->~fu_VEC();
        new (this) fu_VEC(
            static_cast<fu_VEC&&>(c));

        return *this;
    }




    /////////////////////////////////////////////
    //
    // Re-acquiring ownership.

    fu_INL bool slow_check_unique() const noexcept
    {
        i32 unique_capa = capa();
        if (unique_capa >= SMALL_CAPA)
            return true;

        if (slow_check_unique(_big_data)) {
            UNSAFE__MarkUnique();
            return true;
        }

        return false;
    }

    fu_INL static bool slow_check_unique(const T* data) noexcept
    {
        return UNSAFE__arc(data)->unique();
    }




    /////////////////////////////////////////////
    //
    // Let's try to power all basic ops from here.

    template <  bool is_Init,
                bool is_Clear,
                bool is_Reserve,

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
        const i32  old_size = is_Init ? 0          : size();
              i32  old_capa = is_Init ? SMALL_CAPA : capa();
              T*   old_data = is_Init ? (T*)this   : (T*)data();

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
                        old_data + (idx + insert),
                        old_data + (idx + del),
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
                if constexpr (!is_Reserve)
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
                }

                // Attempt to reacquire ownership.
                if (slow_check_unique(old_data))
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

            if constexpr (HAS_SMALL)
                UNSAFE__WriteSmall(new_size);
            else
                UNSAFE__Reset();
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
        if constexpr (is_Init)
            return new_data;

        // Can we relocate the content?
        const i32 shared_capa = old_capa &~ SIGN_BIT;
        if (old_capa    > 0 ||
           (shared_capa > 0 && shared_capa < new_size && slow_check_unique(old_data)))
        {
            // Cheap move by memcpy.
            assert(new_data != old_data);

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
            if (shared_capa > SMALL_CAPA)
                UNIQ__Dealloc_DontRunDtors(
                    old_data, shared_capa);

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
                old_size - (idx + del + pop));
        }

        // Release the old mem, running destructors
        //  if we somehow ended up as the unique owner in the meantime.
        if (shared_capa > SMALL_CAPA)
            SHARED__Dealloc(
                old_data, old_size, shared_capa);

        return new_data;
    }







    /////////////////////////////////////////////
    //
    // Ctor/dtor utils.

    #define MOV_ctor(dest, item) (new (dest) T(static_cast<T&&>(item)))
    #define CPY_ctor(dest, item) (new (dest) T(                 item ))

    fu_INL static void MEMCPY_range(T* d, const T* s, i32 n) noexcept {
        if (d != s && n)
            std::memcpy(d, s, u32(n) * sizeof(T));
    }

    fu_INL static void MEMMOVE_range(T* d, const T* s, i32 n) noexcept {
        if (d != s && n)
            std::memmove(d, s, u32(n) * sizeof(T));
    }

    fu_INL static void CPY_ctor_range(T* dest, const T* src, i32 count) noexcept
    {
        if constexpr (TRIVIAL)
            MEMCPY_range(dest, src, count);
        else
            for (const T* end = dest + count; dest < end; dest++, src++)
                CPY_ctor(dest, *src);
    }

    fu_INL static void MOV_ctor_range(T* dest, T* src, i32 count) noexcept
    {
        if constexpr (TRIVIAL)
            MEMCPY_range(dest, src, count);
        else
            for (const T* end = dest + count; dest < end; dest++, src++)
                MOV_ctor(dest, *src);
    }

    fu_INL static void DEF_initRange(T* start, T* end) noexcept
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

    fu_INL static void DESTROY_range(T* start, T* end) noexcept
    {
        if constexpr (!TRIVIAL)
            for (T* i = start; i < end; i++)
                i->~T();
    }








    /////////////////////////////////////////////
    //
    // High level operator helpers.

    #define Zero    fu_ZERO()
    #define One     fu_ONE

    #define MUT_op(Init, Clear, Reserve, ...) i32 old_size; i32 new_size;\
        T* new_data = _Splice<Init, Clear, Reserve>(old_size, new_size,\
            __VA_ARGS__ )

    #define MUT_front(rem, add) MUT_op(false, false, false, Zero, rem, add, Zero, Zero)
    #define MUT_back(rem, add) MUT_op(false, false, false, Zero, Zero, Zero, rem, add)
    #define MUT_mid(at, rem, add) MUT_op(false, false, false, at, rem, add, Zero, Zero)
    #define MUT_trim(shift, pop) MUT_op(false, false, false, Zero, shift, Zero, pop, Zero)
    #define MUT_init(size) MUT_op(true, false, false, Zero, Zero, Zero, Zero, size)
    #define MUT_clear() MUT_op(false, true, false, Zero, Zero, Zero, Zero, Zero)
    #define MUT_reserve(capa) MUT_op(false, false, true, Zero, Zero, Zero, Zero, Zero)


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
        MUT_front(One, Zero);
    }

    void trim(i32 head) noexcept {
        MUT_front(head, Zero);
    }

    void trim(i32 head, i32 tail) noexcept {
        MUT_trim(head, tail);
    }


    //
    // Splices.

    template <typename I, typename D>
    void splice(I idx, D del, fu_VEC&& src) noexcept
    {
        assert((void*)&src != (void*)this && "splice: rvalref alias");

        T*  src_data = (T*) src.data();
        i32 src_size =      src.size();

        MUT_mid(idx, del, src_size);

        if (!TRIVIAL && src.slow_check_unique()) {
            MEMCPY_range(new_data + idx, src_data, src_size);
            src.UNIQ__Dealloc_DontRunDtors();
        }
        else {
            CPY_ctor_range(new_data + idx, src_data, src_size);
            src._SafeDealloc();
        }
    }

    template <typename I, typename D, typename V>
    auto splice(I idx, D del, const V& r) noexcept
        ->  decltype( const_cast<T*>( r.data() + r.size() ), void() )
    {
        splice_copy(idx, del, r.data(), (i32) r.size());
    }

    template <typename I, typename D>
    void splice_copy(I idx, D del, const T* src_data, i32 src_size) noexcept
    {
        T*  old_data = data();
        i32 old_size = size();

        if (src_data < old_data || src_data > old_data + old_size) {
            MUT_mid(idx, del, src_size);
            CPY_ctor_range(new_data + idx, src_data, src_size);
        }
        else if (idx || del != old_size || src_data != old_data) {
            UNSAFE__self_splice(
                idx, del, Zero, src_data, src_size);
        }
    }


    //
    // Appends, same as splices, but MUT_back.

    template <typename D>
    void append(D del, fu_VEC&& src) noexcept
    {
        assert((void*)&src != (void*)this && "append: rvalref alias");

        T*  src_data = src.data();
        i32 src_size = src.size();
        MUT_back(del, src_size);

        if (!TRIVIAL && src.slow_check_unique()) {
            MEMCPY_range(new_data + old_size, src_data, src_size);
            src.UNIQ__Dealloc_DontRunDtors();
        }
        else {
            CPY_ctor_range(new_data + old_size, src_data, src_size);
            src._SafeDealloc();
        }
    }

    template <typename D, typename V>
    auto append(D del, const V& r) noexcept
        ->  decltype( const_cast<T*>( r.data() + r.size() ), void() )
    {
        append_copy(del, r.data(), (i32) r.size());
    }

    template <typename D>
    void append_copy(D del, const T* src_data, i32 src_size) noexcept
    {
        const T*  old_data = data();
              i32 old_size = size();

        if (src_data < old_data || src_data > old_data + old_size) {
            MUT_back(del, src_size);
            CPY_ctor_range(new_data + old_size, src_data, src_size);
        }
        else if (del != old_size || src_data != old_data) {
            UNSAFE__self_splice(
                Zero, Zero, del, src_data, src_size);
        }
    }


    //
    // Self-splice slow path.

    template <typename I, typename D, typename P>
    fu_NEVER_INLINE void UNSAFE__self_splice(
        I idx, D del, P pop,
        const T* src_data, i32 src_size) noexcept
    {
        assert(false && "Untested.");

        // TODO fix mostly useless copying,
        //  although it's just extra memcpy work it's silly.
        fu_VEC tmpbuf;
        tmpbuf.UNSAFE__init_copy(src_data, src_size);
        splice(idx, del, static_cast<fu_VEC&&>(tmpbuf));
    }


    //
    // Finally, some stuff to power literals.

    void UNSAFE__init_copy(const T* src_data, i32 src_size) noexcept {
        MUT_init(src_size);
        CPY_ctor_range(new_data, src_data, src_size);
    }

    void UNSAFE__init_move(T* src_data, i32 src_size) noexcept {
        MUT_init(src_size);
        MOV_ctor_range(new_data, src_data, src_size);
    }


    //
    // Pure reads.

    i32 find(const T& search) const {
        const T* start = data();
        const T* end   = start + size();

        for (T* i = start; i < end; i++)
            if (i == search)
                return (i32) i - start;

        return -1;
    }

    fu_INL const T* begin() const {
        return data();
    }

    fu_INL const T* end() const {
        return data() + size();
    }

    fu_INL const T& operator[](i32 idx) const {
        auto s = (u32) size();

        // Hopefully compiles away.
        assert(idx >= 0 && idx < s);
        if (idx >= 0 && idx < s)
            return data()[idx];

        // Failsafe.
        static const T Default {};
        return Default;
    }


    //
    // Acquire unique.

    template <typename C>
    fu_INL void reserve(C new_capa) noexcept {
        if (new_capa > capa() || new_capa < 0)
            _DoReserve(new_capa);
    }

    fu_NEVER_INLINE void _DoReserve(i32 new_capa) noexcept {
        if (new_capa) {
            assert(new_capa >= 0);

            int grow = new_capa - size();
                grow = grow > 0
                     ? grow : 0;

            MUT_reserve(grow);
            UNSAFE__WriteSize(old_size);
        }
        else {
            MUT_reserve(Zero);
        }
    }

    fu_INL void reserve() noexcept {
        return reserve(Zero);
    }

    fu_INL T& mutref(i32 idx) noexcept {
        reserve();

        auto s = (u32) size();
        assert(idx >= 0 && idx < s);

        // Sepuku bounds check.
        idx = idx >= 0 && idx < s ? idx : 0xffffffff;
        return data()[idx];
    }


};


// Slice.

template <typename T>
fu_VEC<T> slice(fu_VEC<T>&& v, i32 start) noexcept
{
    v.trim(start);
    return static_cast<fu_VEC<T>&&>(v);
}

template <typename T>
fu_VEC<T> slice(fu_VEC<T>&& v, i32 start, i32 end) noexcept
{
    v.trim(start, end);
    return static_cast<fu_VEC<T>&&>(v);
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
    a.append(Zero, static_cast<fu_VEC<T>&&>(b));
    return static_cast<fu_VEC<T>&&>(a);
}

template <typename T>
fu_VEC<T> operator+(fu_VEC<T>&& a, const fu_VEC<T>& b) noexcept {
    a.append(Zero, b);
    return static_cast<fu_VEC<T>&&>(a);
}

template <typename T>
fu_VEC<T> operator+(const fu_VEC<T>& b, fu_VEC<T>&& a) noexcept {
    a.splice(Zero, Zero, b);
    return static_cast<fu_VEC<T>&&>(a);
}

template <typename T>
fu_VEC<T>& operator+=(fu_VEC<T>& a, const fu_VEC<T>& b) noexcept {
    a.append(Zero, b);
    return a;
}


//

#undef MOV_ctor
#undef CPY_ctor

#undef Zero
#undef One

#undef MUT_op
#undef MUT_front
#undef MUT_back
#undef MUT_mid
#undef MUT_trim
#undef MUT_init
#undef MUT_clear
