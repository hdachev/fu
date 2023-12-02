#pragma once

#include "./vec.h"
#include "./int.h"


// BACKCOMPAT.

typedef fu::vec<fu::byte> fu_STR;

#define fu_TO_STR fu::to_str
#define fu_STRLIT fu::strlit


//

namespace fu {

typedef fu_STR str;

inline fu_STR to_str(const char* cstr) noexcept
{
    cstr = cstr ? cstr : "";
    fu_STR vec;
    vec.UNSAFE__init_copy((const fu::byte*)cstr, fu::i(strlen(cstr)));
    return vec;
}

struct strlit
{
    typedef fu::byte value_type;
    typedef fu::byte fu_VIEW_value_type;
    typedef fu::byte fu_ANY_value_type;

    const char* m_data;
    fu::i m_size;

    operator fu_STR() const noexcept {
        fu_STR vec;
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
auto operator<<(OStream& stream, const fu::strlit& str)
    -> decltype(
        stream.write((const char*)str.data(), size_t(str.size())),
        stream << *(const char*)str.data())
{
    stream.write((const char*)str.data(), size_t(str.size()));
    return stream;
}
