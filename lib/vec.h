#pragma once

#include "arc.h"

template <typename T>
struct fu_VEC
{
    /////////////////////////////////////////////

    using i32 = int;

    static const int vec_size       = sizeof(vec);
    static const int small_buf_size = vec_size - 1;
    static const int small_capa     = small_buf_size / sizeof(T);

    /////////////////////////////////////////////

    T*  big_data;
    i32 big_size;
    i32 big_capa;

    /////////////////////////////////////////////

    fu_INLINE bool big() const {
        if constexpr (small_capa) return big_capa & 0x7000000;
        else                      return false;
    }

    fu_INLINE i32 size() const {
        i32 small_size = big_capa >> 27;
        return big() ? big_size : small_size;
    }

    fu_INLINE int unique_capa() const {
        return big() ? big_capa : small_capa;
    }

    fu_INLINE const T* data() const { return big() ? big_data : (T*)this; }
    fu_INLINE       T* data()       { return big() ? big_data : (T*)this; }

    /////////////////////////////////////////////



    /////////////////////////////////////////////
};

int test(vec<char>& hey)
{
    return hey.unique_capa();
}
