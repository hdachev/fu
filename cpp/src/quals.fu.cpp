#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat.h>

struct ValueType_JtNg;
typedef fu::u8 VFacts_xhRf;

                                #ifndef DEF_VFacts_xhRf
                                #define DEF_VFacts_xhRf
inline constexpr VFacts_xhRf VFacts_xhRf_AlwaysTrue = VFacts_xhRf(1u);
inline constexpr VFacts_xhRf VFacts_xhRf_AlwaysFalse = VFacts_xhRf(2u);
inline constexpr VFacts_xhRf VFacts_xhRf_Typename = VFacts_xhRf(4u);
inline constexpr VFacts_xhRf VFacts_xhRf_LeftAligned = VFacts_xhRf(8u);
inline constexpr VFacts_xhRf VFacts_xhRf_RightAligned = VFacts_xhRf(16u);

inline constexpr VFacts_xhRf MASK_VFacts_xhRf
    = VFacts_xhRf_AlwaysTrue
    | VFacts_xhRf_AlwaysFalse
    | VFacts_xhRf_Typename
    | VFacts_xhRf_LeftAligned
    | VFacts_xhRf_RightAligned;
                                #endif

                                #ifndef DEF_ValueType_JtNg3Yu4fH2
                                #define DEF_ValueType_JtNg3Yu4fH2
struct ValueType_JtNg
{
    unsigned quals;
    VFacts_xhRf vfacts;
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

bool is_primitive_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f') || (c == 'b') || (c == 'c') || (c == 'm') || (c == 'e');
}

bool is_arithmetic_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f');
}

bool is_bitfield_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'm');
}

bool is_integral_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return (c == 'u') || (c == 'i');
}

bool is_unsigned_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return c == 'u';
}

bool is_floating_pt_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return c == 'f';
}

bool is_boolean_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return c == 'b';
}

bool is_enum_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return c == 'e';
}

bool is_flags_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return c == 'm';
}

bool is_sliceable_hxWW(const ValueType_JtNg& t)
{
    const char c = t.canon[0];
    return c == '[';
}

bool isPassByValue_hxWW(const ValueType_JtNg& t)
{
    return is_primitive_hxWW(t);
}

int basePrimPrefixLen_hxWW(fu::view<char> canon)
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
        fu::fail(("basePrimPrefix: bad char0: "_view + canon));

}

#endif
