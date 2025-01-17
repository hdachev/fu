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
        assert(n >= 0);
        _size = n > 0 ? n : 0;
    }

    void grow(fu::i n) noexcept {
        assert(n >= _size);
        _size = n > 0 ? n : 0;
    }

    void shrink(fu::i n) noexcept {
        assert(n >= 0 && n <= _size);
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

    void shift_pop(fu::i shift, fu::i pop) noexcept {
        assert(shift >= 0 && pop >= 0);
        shrink(_size - shift - pop);
    }

    void splice([[maybe_unused]] fu::i idx, fu::i del) noexcept {
        assert(idx >= 0 && idx < _size);
        shrink(_size - del);
    }

    void splice([[maybe_unused]] fu::i idx, fu::i del, const void_vec& src) noexcept {
        assert(idx >= 0 && del >= 0 && idx + del <= _size);
        resize(_size - del + src.size());
    }

    void append(fu::i del, const void_vec& src) noexcept {
        assert(del >= 0 && del <= _size);
        resize(_size - del + src.size());
    }

    void reserve([[maybe_unused]] fu::i capa) noexcept {
        assert(capa >= 0);
    }

    void mutref([[maybe_unused]] fu::i idx) noexcept {
        assert((fu::u) idx < (fu::u) size());
    }
};

} // namespace
