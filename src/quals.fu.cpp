
#include <fu/str.h>
#include <fu/vec.h>

struct s_Lifetime;
struct s_Region;
struct s_Type;
struct s_ValueType;

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    int modid;
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || modid
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

#ifndef FU_NO_FDEFs

bool is_primitive_jSXMzW5l(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f') || (c == 'b');
}

bool is_arithmetic_jSXMzW5l(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return (c == 'u') || (c == 'i') || (c == 'f');
}

bool is_integral_jSXMzW5l(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return (c == 'u') || (c == 'i');
}

bool is_unsigned_jSXMzW5l(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return c == 'u';
}

bool is_floating_pt_jSXMzW5l(const s_Type& t)
{
    const char c = t.vtype.canon[0];
    return c == 'f';
}

#endif
