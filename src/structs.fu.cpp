
#include <fu/decstr.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Lifetime;
struct s_Region;
struct s_Type;
struct s_ValueType;

int parse10i32(int&, fu::view<fu::byte>);

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

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

fu_STR createStructCanon(const int index_2, fu::view<fu::byte>)
{
    return x7E_OZkl("$"_fu, fu::i64dec(index_2));
}

                                #ifndef DEFt_starts_05eu
                                #define DEFt_starts_05eu
inline bool starts_05eu(fu::view<fu::byte> a, const fu::byte with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isStruct(const s_Type& type_3)
{
    return starts_05eu(type_3.vtype.canon, fu::byte('$'));
}

int structIndex(fu::view<fu::byte> canon_1)
{
    int offset = 1;
    return ((canon_1[0] == fu::byte('$')) ? parse10i32(offset, canon_1) : -1);
}

#endif
