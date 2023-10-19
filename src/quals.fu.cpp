#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat.h>

struct s_ValueType;

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    unsigned quals;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || canon
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

bool is_primitive_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f') || (c == 'b') || (c == 'c') || (c == 'm') || (c == 'e');
}

bool is_arithmetic_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f');
}

bool is_bitfield_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'm');
}

bool is_integral_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i');
}

bool is_unsigned_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'u';
}

bool is_floating_pt_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'f';
}

bool is_boolean_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'b';
}

bool is_enum_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'e';
}

bool is_flags_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'm';
}

bool is_sliceable_3t4EwFeQ(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == '[';
}

bool isPassByValue_3t4EwFeQ(const s_ValueType& t)
{
    return is_primitive_3t4EwFeQ(t);
}

int basePrimPrefixLen_OaQVyIZB(fu::view<char> canon)
{
    char c = canon[0];
    if ((c == 'i') || (c == 'u') || (c == 'f') || (c == 'b') || (c == 'c') || (c == 'e') || (c == 'm'))
    {
        for (int offset = 1; ; offset++)
        {
            c = ((offset < canon.size()) ? canon[offset] : char{});
            if ((c < '0') || (c > '9'))
                return offset;

        };
    }
    else
        fu::fail(("basePrimPrefix: bad char0: "_fu + canon));

}

#endif
