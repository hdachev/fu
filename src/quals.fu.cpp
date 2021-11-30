#include <fu/int.h>
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
    s_Type(const s_Type&) = delete;
    s_Type(s_Type&&) = default;
    s_Type& operator=(const s_Type&) = delete;
    s_Type& operator=(s_Type&&) = default;
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

bool is_primitive(const s_Type& t)
{
    const fu::byte c = t.vtype.canon[0];
    return (c == fu::byte('u')) || (c == fu::byte('i')) || (c == fu::byte('f')) || (c == fu::byte('b'));
}

bool is_arithmetic(const s_Type& t)
{
    const fu::byte c = t.vtype.canon[0];
    return (c == fu::byte('u')) || (c == fu::byte('i')) || (c == fu::byte('f'));
}

bool is_integral(const s_Type& t)
{
    const fu::byte c = t.vtype.canon[0];
    return (c == fu::byte('u')) || (c == fu::byte('i'));
}

bool is_unsigned(const s_Type& t)
{
    const fu::byte c = t.vtype.canon[0];
    return c == fu::byte('u');
}

bool is_floating_pt(const s_Type& t)
{
    const fu::byte c = t.vtype.canon[0];
    return c == fu::byte('f');
}

#endif
