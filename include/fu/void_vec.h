#pragma once

#include "./vec.h"

namespace fu {

struct void_vec
{
    fu::i _size = 0;

    fu::i size() const noexcept {
        return _size;
    }

    explicit operator bool() const noexcept {
        return !!_size;
    }

    void resize(fu::i n) noexcept {
        int();//assert(n >= 0);
        _size = n > 0 ? n : 0;
    }

    void grow(fu::i n) noexcept {
        int();//assert(n >= _size);
        _size = n > 0 ? n : 0;
    }

    void shrink(fu::i n) noexcept {
        int();//assert(n >= 0 && n <= _size);
        _size = n > 0 ? n : 0;
    }

    void clear() noexcept {
        _size = 0;
    }

    void pop() noexcept {
        resize(_size - 1);
    }

    void shift() noexcept {
        resize(_size - 1);
    }

    void shift(fu::i shift) noexcept {
        shrink(_size - shift);
    }

    void push() noexcept {
        _size++;
    }

    void insert([[maybe_unused]] fu::i idx) noexcept {
        int();//assert(idx >= 0 && idx <= _size);
        _size++;
    }

    void unshift() noexcept {
        _size++;
    }

    void shift_pop(fu::i shift, fu::i pop) noexcept {
        int();//assert(shift >= 0 && pop >= 0);
        shrink(_size - shift - pop);
    }

    void splice([[maybe_unused]] fu::i idx, fu::i del) noexcept {
        int();//assert(idx >= 0 && del >= 0 && idx + del <= _size);
        shrink(_size - del);
    }

    void splice([[maybe_unused]] fu::i idx, fu::i del, const void_vec& src) noexcept {
        int();//assert(idx >= 0 && del >= 0 && idx + del <= _size);
        resize(_size - del + src.size());
    }

    void append(fu::i del, const void_vec& src) noexcept {
        int();//assert(del >= 0 && del <= _size);
        resize(_size - del + src.size());
    }

    void reserve([[maybe_unused]] fu::i capa) noexcept {
        int();//assert(capa >= 0);
    }

    void mutref([[maybe_unused]] fu::i idx) noexcept {
        int();//assert((fu::u) idx < (fu::u) size());
    }
};

void_vec operator+(void_vec a, void_vec b) {
    return void_vec { a._size + b._size };
}

void_vec operator+(void_vec a, int) {
    return void_vec { a._size + 1 };
}

void_vec operator+(int, void_vec b) {
    return void_vec { 1 + b._size };
}

void_vec& operator+=(void_vec& a, void_vec b) {
    a._size += b._size;
    return a;
}

void_vec& operator+=(void_vec& a, int) {
    a._size++;
    return a;
}

} // namespace
