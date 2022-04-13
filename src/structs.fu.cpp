#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>

struct s_StructCanon;
struct s_Mi;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
int basePrimPrefixLen_d7UAjAhk(fu::view<char>);
s_Mi parseMi_mPp6Ulzh(int&, fu::view<char>);
void appendMi_KujYnsPj(fu_STR&, int, int);

                                #ifndef DEF_s_StructCanon
                                #define DEF_s_StructCanon
struct s_StructCanon
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

                                #ifndef DEF_s_Mi
                                #define DEF_s_Mi
struct s_Mi
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

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_StructCanon parseStructCanon_9u6Vl9O2(fu::view<char> canon)
{
    int offset = 1;

    {
        const char c = canon[0];
        if (c != '/')
            offset = basePrimPrefixLen_d7UAjAhk(canon);

    };
    const s_Mi mi = parseMi_mPp6Ulzh(offset, canon);
    if (!(offset == canon.size()))
        fu::fail(x7E((x7E((("parseStructCanon: trailing garbage in `"_fu + canon) + "`: "_fu), fu::i64dec(offset)) + "|"_fu), fu::i64dec(canon.size())));

    return s_StructCanon { int(mi.modid), int(mi.index) };
}

fu_STR createStructCanon_IlCwMNVe(fu::view<char> kind, const fu_STR& baseprim, const int modid, const int index, fu::view<char>)
{
    // Hoisted:
    fu_STR x;

    /*MOV*/ fu_STR res = (baseprim ? fu_STR(baseprim) : "/"_fu);
    appendMi_KujYnsPj(res, int(modid), int(index));
    if (baseprim)
    {
        char& c = res.mutref(0);
        if ((c == 'e') || (c == 'm'))
            fu::fail(("createStructCanon: bad baseprim: "_fu + baseprim));

        if (kind == "enum"_fu)
            c = 'e';
        else if (kind == "flags"_fu)
            c = 'm';

    };
    const s_StructCanon check = parseStructCanon_9u6Vl9O2(res);
    if (!((check.modid == modid) && (check.index == index)))
    {
        const fu_STR* BL_6_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x = "NOPE!!!!!"_fu;
            BL_6_v = &(x);
        (void)0;}), *BL_6_v)) }));
        parseStructCanon_9u6Vl9O2(res);
        fu::fail("Nope!"_fu);
    };
    return /*NRVO*/ res;
}

                                #ifndef DEF_starts_cnCAmU7Y
                                #define DEF_starts_cnCAmU7Y
inline bool starts_cnCAmU7Y(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isStruct_usAEukhR(const s_Type& type)
{
    return starts_cnCAmU7Y(type.vtype.canon, '/');
}

int modidOfOrigin_usAEukhR(const s_Type& type)
{
    if (type.vtype.canon[0] == '/')
    {
        /*MOV*/ const s_StructCanon scp = parseStructCanon_9u6Vl9O2(type.vtype.canon);
        return int(scp.modid);
    };
    return 0;
}

#endif
