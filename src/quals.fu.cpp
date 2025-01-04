#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat.h>

struct s_ValueType;
typedef fu::u8 s_VFacts;

                                #ifndef DEF_s_VFacts
                                #define DEF_s_VFacts
inline constexpr s_VFacts s_VFacts_AlwaysTrue = s_VFacts(1u);
inline constexpr s_VFacts s_VFacts_AlwaysFalse = s_VFacts(2u);
inline constexpr s_VFacts s_VFacts_Typename = s_VFacts(4u);
inline constexpr s_VFacts s_VFacts_LeftAligned = s_VFacts(8u);
inline constexpr s_VFacts s_VFacts_RightAligned = s_VFacts(16u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename
    | s_VFacts_LeftAligned
    | s_VFacts_RightAligned;
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    unsigned quals;
    s_VFacts vfacts;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || vfacts
            || canon
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

bool is_primitive_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f') || (c == 'b') || (c == 'c') || (c == 'm') || (c == 'e');
}

bool is_arithmetic_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f');
}

bool is_bitfield_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'm');
}

bool is_integral_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i');
}

bool is_unsigned_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'u';
}

bool is_floating_pt_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'f';
}

bool is_boolean_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'b';
}

bool is_enum_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'e';
}

bool is_flags_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == 'm';
}

bool is_sliceable_hxWWgdZ1(const s_ValueType& t)
{
    const char c = t.canon[0];
    return c == '[';
}

bool isPassByValue_hxWWgdZ1(const s_ValueType& t)
{
    return is_primitive_hxWWgdZ1(t);
}

int basePrimPrefixLen_hxWWgdZ1(fu::view<char> canon)
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
