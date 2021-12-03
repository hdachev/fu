#pragma once

#include "./vec.h"
#include "./int.h"


// Strings.

typedef fu_VEC<fu::byte> fu_STR;

inline fu_STR fu_TO_STR(const char* cstr) noexcept
{
    fu_STR vec;
    vec.UNSAFE__init_copy((const fu::byte*)cstr, fu::i(strlen(cstr)));
    return vec;
}


//

struct fu_STRLIT
{
    typedef fu::byte value_type;
    typedef fu::byte fu_VIEW_value_type;
    typedef fu::byte fu_ANY_value_type;

    const char* m_data;
    int m_size;

    operator fu_STR() const noexcept {
        fu_STR vec;
        vec.UNSAFE__init_copy((const fu::byte*)m_data, m_size);
        return vec;
    }

    fu_INL const fu::byte* data() const noexcept {
        return (const fu::byte*)m_data;
    }

    fu_INL int size() const noexcept {
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

fu_INL constexpr fu_STRLIT operator ""_fu(const char* cstr, size_t len) noexcept {
    return fu_STRLIT { cstr, (int) len };
}


//

template <typename OStream>
auto operator<<(OStream& stream, const fu_STR& str)
    -> decltype(
        stream.write((const char*)str.data(), size_t(str.size())),
        stream << *(const char*)str.data())
{
    stream.write((const char*)str.data(), size_t(str.size()));
    return stream;
}

template <typename OStream>
auto operator<<(OStream& stream, const fu_STRLIT& str)
    -> decltype(
        stream.write((const char*)str.data(), size_t(str.size())),
        stream << *(const char*)str.data())
{
    stream.write((const char*)str.data(), size_t(str.size()));
    return stream;
}
