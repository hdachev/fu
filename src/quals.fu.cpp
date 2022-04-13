#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/default.h>
#include <fu/vec/concat.h>

struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || canon
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    s_ValueType vtype;
    s_Lifetime lifetime;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

bool is_primitive_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f') || (c == 'b') || (c == 'c') || (c == 'm') || (c == 'e');
}

bool is_arithmetic_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f');
}

bool is_bitfield_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'm');
}

bool is_integral_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return (c == 'u') || (c == 'i');
}

bool is_unsigned_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return c == 'u';
}

bool is_floating_pt_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return c == 'f';
}

bool is_boolean_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return c == 'f';
}

bool is_enum_oPp5yWwB(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return c == 'e';
}

int basePrimPrefixLen_d7UAjAhk(fu::view<char> canon)
{
    char c = canon[0];
    if (!((c == 'i') || (c == 'u') || (c == 'f') || (c == 'b') || (c == 'c') || (c == 'e') || (c == 'm')))
        fu::fail(("basePrimPrefix: bad char0: "_fu + canon));

    for (/*MOV*/ int offset = 1; ; offset++)
    {
        c = ((offset < canon.size()) ? canon[offset] : (*(const char*)fu::NIL));
        if ((c < '0') || (c > '9'))
            return /*NRVO*/ offset;

    };
}

#endif
