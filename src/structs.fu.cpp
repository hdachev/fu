#include <cstdint>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/view.h>

struct s_Lifetime;
struct s_Region;
struct s_Type;
struct s_ValueType;

int parse10i32(int&, fu::view<std::byte>);

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

fu_STR createStructCanon(const int index_2, fu::view<std::byte>)
{
    return "$"_fu + index_2;
}

bool isStruct(const s_Type& type_3)
{
    return fu::lmatch(type_3.vtype.canon, std::byte('$'));
}

int structIndex(fu::view<std::byte> canon_1)
{
    int offset = 1;
    return ((canon_1[0] == std::byte('$')) ? parse10i32(offset, canon_1) : -1);
}

#endif
