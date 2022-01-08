
#include <fu/decstr.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Lifetime;
struct s_Region;
struct s_Type;
struct s_ValueType;

int parse10i32_g2vqWUwe(int&, fu::view<char>);

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

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR createStructCanon_bjRZEcOr(const int index, fu::view<char>)
{
    return x7E("$"_fu, fu::i64dec(index));
}

                                #ifndef DEFt_starts_05euw4KZ
                                #define DEFt_starts_05euw4KZ
inline bool starts_05euw4KZ(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isStruct_2z3reG8b(const s_Type& type)
{
    return starts_05euw4KZ(type.vtype.canon, '$');
}

int structIndex_j5f0QjYP(fu::view<char> canon)
{
    int offset = 1;
    return ((canon[0] == '$') ? parse10i32_g2vqWUwe(offset, canon) : -1);
}

#endif
