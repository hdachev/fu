#pragma once

#include <type_traits>

#include "./util.h"
#include "./mem/arc.h"

template <typename T>
struct fu_CONFIG
{
    static constexpr bool TRIVIAL =
        std::is_trivially_destructible<T>::value;

    static constexpr bool COPIABLE =
        std::is_copy_constructible<T>::value;

    static constexpr i32 VEC_SIZE = 16;

    static constexpr i32 SMALL_CAPA =
        TRIVIAL && alignof(T) <= alignof(T*)
            ? (VEC_SIZE - 1) / sizeof(T)
            : 0;


    // On little endian, we need the least significant capacity byte
    //  to be the rightmost byte of our struct,
    //   unless item size is >= 4, in which case we don't need aliasing.

    static constexpr bool PACK_CAPA =
        SMALL_CAPA && sizeof(T) < 4 && fu_LITTLE_ENDIAN;

    static constexpr i32 IS_BIG_MASK        = PACK_CAPA ? 0xf << 24 : 0xf;
    static constexpr i32 SMALL_SIZE_OFFSET  = PACK_CAPA ? 24 + 4 : 4;
};

template <typename T>
struct fu_VEC
{
    typedef T value_type;
    typedef T fu_ANY_value_type;

    /////////////////////////////////////////////

    #define COPIABLE            (fu_CONFIG<T>::COPIABLE)
    #define SHAREABLE           (COPIABLE)
    #define TRIVIAL             (fu_CONFIG<T>::TRIVIAL)
    #define VEC_SIZE            (fu_CONFIG<T>::VEC_SIZE)
    #define SMALL_CAPA          (fu_CONFIG<T>::SMALL_CAPA)
    #define HAS_SMALL           (SMALL_CAPA != 0)

    #define PACK_CAPA           (fu_CONFIG<T>::PACK_CAPA)
    #define IS_BIG_MASK         (fu_CONFIG<T>::IS_BIG_MASK)
    #define SMALL_SIZE_OFFSET   (fu_CONFIG<T>::SMALL_SIZE_OFFSET)

    static constexpr i32 SMALL_SIZE_MASK = 0xf;

    /////////////////////////////////////////////

    struct Big {
          const T*  data = nullptr;
                i32 size = 0;
        mutable i32 PACK = 0;
    };

#ifndef NDEBUG
    typedef T    All[1024];
    typedef char AllChars[1024];

    union {
#endif
        Big big = {};

#ifndef NDEBUG
        char  buf[VEC_SIZE];
        i32   i32buf[VEC_SIZE / 4];
        const All*      all;
        const AllChars* all_chars;
    };
#endif

    constexpr fu_VEC() = default;

    /////////////////////////////////////////////

    fu_INL static constexpr i32 UNSAFE__Unpack(i32 packed) noexcept {
        if constexpr (PACK_CAPA) return (packed << 8) | (u32(packed) >> 24);
        else                     return  packed;
    }

    fu_INL static constexpr i32 UNSAFE__Pack(i32 actual) noexcept {
        if constexpr (PACK_CAPA) return (actual << 24) | (u32(actual) >> 8);
        else                     return  actual;
    }

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
        if constexpr (HAS_SMALL) return !(big.PACK & IS_BIG_MASK);
        else                     return false;
    }

    static constexpr i32 SIGN_BIT = 1 << 31;

    fu_INL i32 capa() const noexcept {
        if constexpr (HAS_SMALL) {
            i32 capa = UNSAFE__Unpack(big.PACK);
            return small() ? SMALL_CAPA : capa;
        }

        return big.PACK;
    }

    fu_INL i32 shared_capa() const noexcept {
        if constexpr (SHAREABLE)
            return capa() &~ SIGN_BIT;
        else
            return capa();
    }

    fu_INL i32 UNSAFE__MarkUnique() const noexcept {
        assert(!small());
        i32  capa = shared_capa();
        big.PACK = UNSAFE__Pack(capa);
        return capa;
    }

    fu_INL void UNSAFE__MarkShared() const noexcept {
        static_assert(SHAREABLE, "Cannot share fu_VECs of this type.");
        assert(!small());
        big.PACK = UNSAFE__Pack( // Make negative.
                  UNSAFE__Unpack(big.PACK) | SIGN_BIT);
    }

    fu_INL void UNSAFE__WriteBig(T* data, i32 size, i32 capa) noexcept {
        assert(capa > SMALL_CAPA);
        big.data = data;
        big.size = size;
        big.PACK = UNSAFE__Pack(capa);
    }

    fu_INL void UNSAFE__Reset() noexcept {
        big.data = nullptr;
        big.size = 0;
        big.PACK = 0;
    }

    /////////////////////////////////////////////

    fu_INL i32 UNSAFE__ReadSmallSize() const noexcept {
        if constexpr (HAS_SMALL) return (big.PACK >> SMALL_SIZE_OFFSET) & SMALL_SIZE_MASK;
        else                     return 0;
    }

    fu_INL void UNSAFE__WriteSmall(i32 actual_size) noexcept {
        static_assert(SMALL_CAPA);

        if constexpr (PACK_CAPA) {
            const char s = char(actual_size << 4);
            std::memcpy((char*)this + (VEC_SIZE - 1), &s, 1);
        }
        else {
            big.PACK = (actual_size & SMALL_SIZE_MASK) << SMALL_SIZE_OFFSET;
        }
    }

    fu_INL void UNSAFE__WriteSize(i32 actual_size) noexcept {
        if constexpr (HAS_SMALL)
            if (small()) {
                UNSAFE__WriteSmall(actual_size);
                return;
            }

        big.size = actual_size;
    }

    fu_INL i32 size() const noexcept {
        if constexpr (HAS_SMALL) {
            i32 small_size = UNSAFE__ReadSmallSize();
            return small() ? small_size : big.size;
        }

        return big.size;
    }

    fu_INL size_t bytesize() const noexcept {
        return size_t(size()) * sizeof(T);
    }

    fu_INL explicit operator bool() const noexcept {
        return size() != 0;
    }

    /////////////////////////////////////////////

    fu_INL i32 unique_size() const noexcept {

        assert(false && "Not tested!");

        if constexpr (!SHAREABLE)
            return size();

        if constexpr (HAS_SMALL) {
            i32 small_size  = UNSAFE__ReadSmallSize();
            i32 capa        = UNSAFE__Unpack(big.PACK);
            return small()  ? small_size
                            : big.size | (capa & SIGN_BIT);
        }

        return big.size;
    }

    /////////////////////////////////////////////

    fu_INL const T* data() const noexcept {
        if constexpr (HAS_SMALL) {
            return small() ? (T*)this : big.data;
        }

        return big.data;
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
        big.data = (T*)1;
        big.size = 1;
        big.PACK = 0x01010101;
        #endif
    }


    // Safe release.

    fu_INL void _SafeDealloc() noexcept
    {
        i32 shared_capa = this->shared_capa();
        if (shared_capa > SMALL_CAPA)
            SHARED__Dealloc(
                (T*)big.data, big.size, shared_capa);

        UNSAFE__Reset();
    }

    fu_INL static void SHARED__Dealloc(
        T* old_data, i32 old_size, i32 old_capa) noexcept
    {
        assert(old_capa > SMALL_CAPA);

        fu_ARC* arc = UNSAFE__arc(old_data);
        if (!SHAREABLE || arc->decr()) {
            DESTROY_range(
                old_data,
                old_data + old_size);

            fu_ARC_DEALLOC(arc, old_capa * sizeof(T));
        }
    }


    // Unsafe release.

    fu_INL void UNIQ__Dealloc_DontRunDtors() noexcept
    {
        i32 unique_capa = capa();
        assert(unique_capa > SMALL_CAPA);

        UNIQ__Dealloc_DontRunDtors(
            (T*)big.data, unique_capa &~ SIGN_BIT);

        UNSAFE__Reset();
    }

    fu_INL static void UNIQ__Dealloc_DontRunDtors(
        T* old_data, i32 old_capa) noexcept
    {
        fu_ARC* arc = UNSAFE__arc(old_data);

        #ifndef NDEBUG
        assert(arc->decr() && "not unique");
        #endif

        fu_ARC_DEALLOC(arc, old_capa * sizeof(T));
    }






    /////////////////////////////////////////////
    //
    // Copy & move constructors.

    fu_INL fu_EXPLICIT fu_VEC(const fu_VEC& c) noexcept
        : big(c.big)
    {
        static_assert(COPIABLE, "Cannot copy fu_VECs of non-copiable types.");

        i32 shared_capa = this->shared_capa();
        if (shared_capa > SMALL_CAPA)
        {
            UNSAFE__MarkShared();

            c.UNSAFE__MarkShared();
            UNSAFE__arc(big.data)->incr();
        }
    }

    fu_INL fu_VEC(fu_VEC&& x) noexcept
        : big(x.big)
    {
        x.UNSAFE__Reset();
    }

    fu_INL fu_VEC& operator=(const fu_VEC& c) noexcept
    {
        static_assert(COPIABLE, "Cannot copy fu_VECs of non-copiable types.");

        if (this != &c)
            *this = fu_VEC(c);

        return *this;
    }

    fu_INL fu_VEC& operator=(fu_VEC&& c) noexcept
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
        if constexpr (!SHAREABLE)
            return true;

        i32 unique_capa = capa();
        if (unique_capa >= SMALL_CAPA)
            return true;

        if (slow_check_unique(big.data)) {
            UNSAFE__MarkUnique();
            return true;
        }

        return false;
    }

    fu_INL static bool slow_check_unique(const T* data) noexcept
    {
        if constexpr (!SHAREABLE)
            return true;

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
        idx     = (u32) idx <= (u32) old_size ? idx : old_size;

        if constexpr (fu_MAYBE_POS(del)) {
            i32 max = old_size - idx;
            del = (u32) del <= (u32) max ? del : max;
        }

        if constexpr (fu_MAYBE_POS(pop)) {
            i32 max = old_size - idx - del;
            pop = (u32) pop <= (u32) max ? pop : max;
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
                        old_size - (idx + del + pop));
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
                        if (push + insert == 0
                            && (idx + del + pop == old_size
                                         || del == 0))
                        {
                            big.size = new_size;
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
            i32 new_capa = new_size + HAS_SMALL;
            fu_ARC_ALLOC(new_data, new_capa);
            UNSAFE__EnsureActualLooksBig(new_capa);
            assert(new_capa >= new_size);

            // Small-to-big needs to move content
            //  BEFORE persisting big size.
            if (is_Init || (TRIVIAL && old_capa == SMALL_CAPA))
            {
                // Relocate before writing size,
                //  else we overwrite content.
                if constexpr (HAS_SMALL && !is_Init)
                    UNSAFE__Relocate(
                        idx, del, insert, pop,
                        new_data, old_data, old_size);

                UNSAFE__WriteBig(new_data, new_size, new_capa);

                // Done.
                return new_data;
            }

            UNSAFE__WriteBig(new_data, new_size, new_capa);
        }

        // Init ends here (no free, no realloc).
        if constexpr (is_Init)
            return new_data;

        // Move or copy?
        const i32 shared_capa = old_capa &~ SIGN_BIT;

        // Move is cheaper for non-trivial - no copy ctors,
        //  but slower for trivial - extra checks & last resort refc hit.
        if constexpr (!TRIVIAL)
        {
            if (old_capa    > 0 ||
               (shared_capa > 0 && shared_capa < new_size && slow_check_unique(old_data)))
            {
                // Cheap move by memcpy.
                assert(new_data != old_data);

                // Call destructors (copy-paste from above).
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

                    UNSAFE__Relocate(
                        idx, del, insert, pop,
                        new_data, old_data, old_size);
                }

                // Free old alloc.
                if (shared_capa > SMALL_CAPA)
                    UNIQ__Dealloc_DontRunDtors(
                        old_data, shared_capa);

                return new_data;
            }
        }

        // Finally, the expensive copy-construct.
        //  It's actually the faster option for trivial data,
        //   because we skip the checks & the refc-hit,
        //    since it's a memcpy anyway.
        if constexpr (!is_Clear && SHAREABLE)
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
        if constexpr (TRIVIAL)
        {
            assert(shared_capa > SMALL_CAPA);

            SHARED__Dealloc(
                old_data, old_size, shared_capa);
        }
        else if (shared_capa > SMALL_CAPA)
        {
            SHARED__Dealloc(
                old_data, old_size, shared_capa);
        }

        return new_data;
    }

    template <typename t_idx, typename t_del, typename t_insert, typename t_pop>
    fu_INL void UNSAFE__Relocate(
        t_idx idx, t_del del, t_insert insert, t_pop pop,
        T* new_data, const T* old_data, i32 old_size
            ) noexcept
    {
        if constexpr (fu_MAYBE_POS(idx))
            MEMCPY_range(
                new_data,
                old_data,
                idx);

        MEMCPY_range(
            new_data + (idx + insert),
            old_data + (idx + del),
            old_size - (idx + del + pop));
    }







    /////////////////////////////////////////////
    //
    // Ctor/dtor utils.

    #define MOV_ctor(dest, item) (new (dest) T(static_cast<T&&>(item)))
    #define CPY_ctor(dest, item) (new (dest) T(                 item ))

    fu_INL static void MEMCPY_range(T* d, const T* s, i32 n) noexcept {
        if (d != s && n)
            std::memcpy((char*)d, s, u32(n) * sizeof(T));
    }

    fu_INL static void MEMMOVE_range(T* d, const T* s, i32 n) noexcept {
        if (d != s && n)
            std::memmove((char*)d, s, u32(n) * sizeof(T));
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

    template <bool ZERO_FILL>
    fu_INL static void DEF_initRange(T* start, T* end) noexcept
    {
        /*
        if constexpr (!TRIVIAL)
        {
            for (T* i = start; i < end; i++)
                new (i) T();
        }
        /*/
        if constexpr (!TRIVIAL || ZERO_FILL)
        {
            if (end > start)
                memset((void*)start, 0, (const char*)end - (const char*)start);
        }
        //*/

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
        (void) start;
        (void) end;
    }

    fu_INL static void DESTROY_range(T* start, T* end) noexcept
    {
        if constexpr (!TRIVIAL)
            for (T* i = start; i < end; i++)
                i->~T();

        (void) start;
        (void) end;
    }








    /////////////////////////////////////////////
    //
    // High level operator helpers.

    #define Zero    fu_ZERO()
    #define One     fu_ONE

    #define MUT_op(Init, Clear, Reserve, ...) i32 old_size; i32 new_size;\
        T* new_data = _Splice<Init, Clear, Reserve>(old_size, new_size,\
            __VA_ARGS__ ); (void)old_size; (void)new_size; (void)new_data;

    #define MUT_front(rem, add) MUT_op(false, false, false, Zero, rem, add, Zero, Zero)
    #define MUT_back(rem, add) MUT_op(false, false, false, Zero, Zero, Zero, rem, add)
    #define MUT_mid(at, rem, add) MUT_op(false, false, false, at, rem, add, Zero, Zero)
    #define MUT_trim(shift, pop) MUT_op(false, false, false, Zero, shift, Zero, pop, Zero)
    #define MUT_init(size) MUT_op(true, false, false, Zero, Zero, Zero, Zero, size)
    #define MUT_clear() MUT_op(false, true, false, Zero, Zero, Zero, Zero, Zero)
    #define MUT_reserve(capa) MUT_op(false, false, true, Zero, Zero, Zero, Zero, capa)


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

    template <bool ZERO_FILL = true>
    void resize(i32 s1) noexcept {
        i32 s0  = size();
        i32 rem = s0 - s1; rem = rem > 0 ? rem : 0;
        i32 add = s1 - s0; add = add > 0 ? add : 0;

        MUT_back(rem, add);
        DEF_initRange<ZERO_FILL>(new_data + old_size, new_data + new_size);
    }

    template <bool ZERO_FILL = true>
    void grow(i32 s1) noexcept {
        MUT_back(Zero, s1 - size());
        DEF_initRange<ZERO_FILL>(new_data + old_size, new_data + new_size);
    }

    void shrink(i32 s1) noexcept {
        MUT_back(size() - s1, Zero);
    }

    void clear() noexcept {
        MUT_clear();
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

    void shift(i32 shift) noexcept {
        MUT_front(shift, Zero);
    }

    void shift_pop(i32 shift, i32 pop) noexcept {
        MUT_trim(shift, pop);
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
        const T*  old_data = data();
              i32 old_size = size();

        if (src_data < old_data || src_data > old_data + old_size) {
            MUT_mid(idx, del, src_size);
            CPY_ctor_range(new_data + idx, src_data, src_size);
        }
        else if (idx || del != old_size || src_data != old_data) {
            UNSAFE__self_splice(
                idx, del, src_data, src_size);
        }
    }


    //
    // Appends, same as splices, but MUT_back.

    template <typename D>
    void append(D del, fu_VEC&& src) noexcept
    {
        assert((void*)&src != (void*)this && "append: rvalref alias");

        const T*  src_data = src.data();
              i32 src_size = src.size();

        MUT_back(del, src_size);

        i32 idx = old_size - del;

        if (!TRIVIAL && src.slow_check_unique()) {
            MEMCPY_range(new_data + idx, src_data, src_size);
            src.UNIQ__Dealloc_DontRunDtors();
        }
        else {
            CPY_ctor_range(new_data + idx, src_data, src_size);
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

        i32 idx = old_size - del;

        if (src_data < old_data || src_data > old_data + old_size) {
            MUT_back(del, src_size);
            CPY_ctor_range(new_data + idx, src_data, src_size);
        }
        else if (del != old_size || src_data != old_data) {
            UNSAFE__self_splice(
                idx, del, src_data, src_size);
        }
    }


    //
    // Self-splice slow path.

    template <typename I, typename D>
    fu_NEVER_INLINE void UNSAFE__self_splice(
        I idx, D del,
        const T* src_data, i32 src_size) noexcept
    {
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

    // Operator +.

    void UNSAFE__init_copy(
        const T* src0, i32 size0,
        const T* src1, i32 size1) noexcept
    {
        MUT_init(size0 + size1);
        CPY_ctor_range(new_data        , src0, size0);
        CPY_ctor_range(new_data + size0, src1, size1);
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
            assert(new_capa > 0);

            i32 grow = new_capa - size();
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


    //

    fu_INL T* data_mut() noexcept {
        reserve();
        return (T*)data();
    }


    // Literal expressions:
    //  TODO use fu_ARR instead.
    //   TODO allow the compiler to optimize case TRIVIAL.

    template <i32 new_size>
    struct INIT
    {
        static_assert(new_size > 0);

        T data[new_size];

        INIT(const INIT&) = delete;
        INIT(INIT&&) /* -MOV-CTOR- */ = default;

        INIT& operator=(const INIT&) = delete;
        INIT& operator=(INIT&&) = delete;
    };

    template <i32 new_size>
    inline fu_VEC(INIT<new_size>&& init) noexcept
    {
        static_assert(new_size > 0);

        UNSAFE__init_move(init.data, new_size);
    }


    // Sepuku bounds-checks,
    //  note these are still costly,
    //   consider removing in fu_RETAIL builds,
    //    static proofs + compiling down to raw ptrs,
    //     and a battery of high-level operators
    //      that lift the checks outside the loop.

    fu_INL const T& operator[](i32 idx) const noexcept
    {
        const T* ok = data() + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (u32) idx < (u32) size()
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL T& mutref(i32 idx) noexcept
    {
        reserve();

        T* ok = (T*) data() + idx;

        #if fu_RETAIL
        return *ok;

        #else
        return (u32) idx < (u32) size()
             ? *ok
             : *((T*)1);

        #endif
    }

    fu_INL T& unique(i32 idx) noexcept
    {
        T* ok = (T*) data() + idx;

        #if fu_RETAIL
        return *ok;             // Assert unique + bounds check.
                                // This is where this differs from the two above.
        #else                   // ----------- //
        return (u32) idx < (u32) unique_size() //
             ? *ok
             : *((T*)1);

        #endif
    }
};


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

//

#undef TRIVIAL
#undef COPIABLE
#undef SHAREABLE
#undef VEC_SIZE
#undef SMALL_CAPA
#undef HAS_SMALL

#undef PACK_CAPA
#undef IS_BIG_MASK
#undef SMALL_SIZE_OFFSET

//
