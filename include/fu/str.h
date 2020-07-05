#pragma once

#include "./vec.h"


// Strings.

typedef fu_VEC<std::byte> fu_STR;

inline fu_STR fu_TO_STR(const char* cstr) noexcept
{
    fu_STR vec;
    vec.UNSAFE__init_copy((const std::byte*)cstr, i32(strlen(cstr)));
    return vec;
}


//

struct fu_STRLIT
{
    typedef std::byte value_type;
    typedef std::byte fu_VIEW_value_type;
    typedef std::byte fu_ANY_value_type;

    const char* m_data;
    int m_size;

    operator fu_STR() const noexcept {
        fu_STR vec;
        vec.UNSAFE__init_copy((const std::byte*)m_data, m_size);
        return vec;
    }

    fu_INL const std::byte* data() const noexcept {
        return (const std::byte*)m_data;
    }

    fu_INL int size() const noexcept {
        return m_size;
    }

    fu_INL explicit operator bool() const noexcept {
        return m_size;
    }

    fu_INL const std::byte& operator[](i32 idx) const noexcept
    {
        auto* ok = (std::byte*)m_data + idx;
        return (u32) idx < (u32) m_size
             ? *ok
             : *((std::byte*)1);
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
