
#include <fu/decstr.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Lifetime;
struct s_Region;
struct s_ScopeItem;
struct s_Target;
struct s_Type;
struct s_ValueType;

int parse10i32_g2vqWUwe(int&, fu::view<char>);
void Scope_set_ebsiWNpD(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);

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

                                #ifndef DEFt_starts_OZkl8S7R
                                #define DEFt_starts_OZkl8S7R
inline bool starts_OZkl8S7R(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

bool type_isAddrOfFn_5vhU4AHS(const s_Type& type)
{
    return starts_OZkl8S7R(type.vtype.canon, "@"_fu);
}

bool type_isZST_5vhU4AHS(const s_Type& type)
{
    return type_isAddrOfFn_5vhU4AHS(type);
}

bool type_isCTC_5vhU4AHS(const s_Type& type)
{
    return type_isZST_5vhU4AHS(type);
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR packAddrOfFn_i4cXBxfC(fu::view<s_Target> targets)
{
    /*MOV*/ fu_STR res {};
    for (int i = 0; i < targets.size(); i++)
    {
        const s_Target& target = targets[i];
        res += x7E((x7E("@"_fu, fu::i64dec(target.modid)) + ":"_fu), fu::i64dec(target.index));
    };
    return /*NRVO*/ res;
}

                                #ifndef DEFt_unpackAddrOfFn_79rlA6Yb
                                #define DEFt_unpackAddrOfFn_79rlA6Yb
inline void unpackAddrOfFn_79rlA6Yb(fu::view<char> canon, int, fu_VEC<s_ScopeItem>& out, const fu_STR& id, const bool shadows)
{
    int i = 0;
    while (i < canon.size())
    {
        if (!(canon[i++] == '@'))
            fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon) + "`."_fu));

        const int modid = parse10i32_g2vqWUwe(i, canon);
        if (!(canon[i++] == ':'))
            fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon) + "`."_fu));

        const int index = parse10i32_g2vqWUwe(i, canon);
        const s_Target target = s_Target { int(modid), int(index) };
        Scope_set_ebsiWNpD(out, id, target, shadows);
    };
}
                                #endif

bool X_unpackAddrOfFnBinding_PsLoxX6P(fu_VEC<s_ScopeItem>& out, const fu_STR& id, const s_Type& type, const bool shadows)
{
    if (!type_isAddrOfFn_5vhU4AHS(type))
        return false;

    unpackAddrOfFn_79rlA6Yb(type.vtype.canon, 0, out, id, shadows);
    return true;
}

s_Type X_addrofTarget_m0G5bAnB(const s_Target& target)
{
    return s_Type { s_ValueType { 0, 0, packAddrOfFn_i4cXBxfC((fu::slate<1, s_Target> { s_Target(target) })) }, s_Lifetime{} };
}

#endif
