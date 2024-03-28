#pragma once

#include "./vec.h"
#include "./int.h"

namespace fu {

typedef fu::vec<fu::byte> str;

inline fu::str to_str(const char* cstr) noexcept
{
    cstr = cstr ? cstr : "";
    fu::str vec;
    vec.UNSAFE__init_copy((const fu::byte*)cstr, fu::i(strlen(cstr)));
    return vec;
}


// TODO FIX SKETCH - see fs::readdir -
//  trying to provide a cstr -> vec<byte> path
//   that can relax to cstr -> view<byte> when possible.

fu_INL fu::str& cstr2vec_copy(fu::str& buf, uintptr_t cstr, fu::i size) {
    buf.append_copy(buf.size(), (const char*) cstr, size);
    return buf;
}

fu_INL fu::view<char> cstr2vec_view(const fu::str&, uintptr_t cstr, fu::i size) {
    return fu::view<char> { (const char*) cstr, size };
}


//

struct strlit
{
    typedef fu::byte value_type;
    typedef fu::byte fu_VIEW_value_type;
    typedef fu::byte fu_ANY_value_type;

    const char* m_data;
    fu::i m_size;

    operator fu::str() const noexcept {
        fu::str vec;
        vec.UNSAFE__init_copy((const fu::byte*)m_data, m_size);
        return vec;
    }

    fu_INL const fu::byte* data() const noexcept {
        return (const fu::byte*)m_data;
    }

    fu_INL fu::i size() const noexcept {
        return m_size;
    }

    fu_INL explicit operator bool() const noexcept {
        return m_size;
    }

    fu_INL const fu::byte& operator[](fu::i idx) const noexcept
    {
        auto* ok = (fu::byte*)m_data + idx;
        return (fu::u) idx < (fu::u) m_size
             ? *ok
             : *((fu::byte*)1);
    }
};

} // namespace

fu_INL constexpr fu::strlit operator ""_fu(const char* cstr, size_t len) noexcept {
    return fu::strlit { cstr, (fu::i) len };
}

fu_INL constexpr fu::view<char> operator ""_view(const char* cstr, size_t len) noexcept {
    return fu::view<char> { cstr, (fu::i) len };
}
