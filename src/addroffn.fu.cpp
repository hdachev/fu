#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>

struct s_Effects;
struct s_Lifetime;
struct s_ScopeItem;
struct s_Target;
struct s_Type;
struct s_ValueType;

int parse10i32(int&, const fu_STR&);

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

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<int> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Effects
                                #define DEF_s_Effects
struct s_Effects
{
    int raw;
    explicit operator bool() const noexcept
    {
        return false
            || raw
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
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
            || effects
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
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || target
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

bool type_isAddrOfFn(const s_Type& type)
{
    return fu::lmatch(type.vtype.canon, "@"_fu);
}

bool type_isZST(const s_Type& type)
{
    return type_isAddrOfFn(type);
}

bool type_isCTC(const s_Type& type)
{
    return type_isZST(type);
}

fu_STR packAddrOfFn(const fu_VEC<s_Target>& targets)
{
    fu_STR res {};
    for (int i = 0; i < targets.size(); i++)
    {
        const s_Target& target = targets[i];
        res += ((("@"_fu + target.modid) + ":"_fu) + target.index);
    };
    return res;
}

fu_VEC<s_Target> unpackAddrOfFn(const fu_STR& canon)
{
    fu_VEC<s_Target> res {};
    int i = 0;
    while (i < canon.size())
    {
        ((canon[i++] == std::byte('@')) || fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon) + "`."_fu)));
        const int modid = parse10i32(i, canon);
        ((canon[i++] == std::byte(':')) || fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon) + "`."_fu)));
        const int index = parse10i32(i, canon);
        res.push(s_Target { int(modid), int(index) });
    };
    return res;
}

bool X_unpackAddrOfFnBinding(fu_VEC<s_ScopeItem>& out, const fu_STR& id, const s_Type& type)
{
    if (!type_isAddrOfFn(type))
        return false;

    fu_VEC<s_Target> targets = unpackAddrOfFn(type.vtype.canon);
    for (int i = 0; i < targets.size(); i++)
        out.push(s_ScopeItem { fu_STR(id), s_Target(targets[i]) });

    return true;
}

s_Type X_addrofTarget(const s_Target& target)
{
    return s_Type { s_ValueType { 0, 0, packAddrOfFn(fu_VEC<s_Target> { fu_VEC<s_Target>::INIT<1> { s_Target(target) } }) }, s_Lifetime{}, s_Effects{} };
}

#endif
