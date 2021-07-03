#include <cstdint>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/view.h>

struct s_Lifetime;
struct s_Region;
struct s_ScopeItem;
struct s_Target;
struct s_Type;
struct s_ValueType;

int parse10i32(int&, fu::view<std::byte>);
void Scope_set(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);

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

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    int modid;
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu_STR id;
    int modid;
    unsigned packed;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || modid
            || packed
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

bool type_isAddrOfFn(const s_Type& type_3)
{
    return fu::lmatch(type_3.vtype.canon, "@"_fu);
}

bool type_isZST(const s_Type& type_3)
{
    return type_isAddrOfFn(type_3);
}

bool type_isCTC(const s_Type& type_3)
{
    return type_isZST(type_3);
}

fu_STR packAddrOfFn(fu::view<s_Target> targets)
{
    fu_STR res {};
    for (int i = 0; i < targets.size(); i++)
    {
        const s_Target& target_5 = targets[i];
        res += ((("@"_fu + target_5.modid) + ":"_fu) + target_5.index);
    };
    return res;
}

                                #ifndef DEFt_unpackAddrOfFn_4JZ8
                                #define DEFt_unpackAddrOfFn_4JZ8
inline void unpackAddrOfFn_4JZ8(fu::view<std::byte> canon_1, int, fu_VEC<s_ScopeItem>& out_1, const fu_STR& id_2, const bool shadows)
{
    int i = 0;
    while (i < canon_1.size())
    {
        if (!(canon_1[i++] == std::byte('@')))
            fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon_1) + "`."_fu));

        const int modid_4 = parse10i32(i, canon_1);
        if (!(canon_1[i++] == std::byte(':')))
            fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon_1) + "`."_fu));

        const int index_2 = parse10i32(i, canon_1);
        const s_Target target_5 = s_Target { int(modid_4), int(index_2) };
        Scope_set(out_1, id_2, target_5, shadows);
    };
}
                                #endif

bool X_unpackAddrOfFnBinding(fu_VEC<s_ScopeItem>& out_1, const fu_STR& id_2, const s_Type& type_3, const bool shadows)
{
    if (!type_isAddrOfFn(type_3))
        return false;

    unpackAddrOfFn_4JZ8(type_3.vtype.canon, 0, out_1, id_2, shadows);
    return true;
}

s_Type X_addrofTarget(const s_Target& target_5)
{
    return s_Type { s_ValueType { 0, 0, packAddrOfFn((fu::slate<1, s_Target> { s_Target(target_5) })) }, s_Lifetime{} };
}

#endif
