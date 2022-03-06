
#include <fu/never.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Lifetime;
struct s_Mi;
struct s_Region;
struct s_StructCanon;
struct s_Type;
struct s_ValueType;

s_Mi parseMi_t6R8uPsY(int&, fu::view<char>);
void appendMi_RIPPDRFZ(fu_STR&, int, int);

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

#ifndef FU_NO_FDEFs

s_StructCanon parseStructCanon_1WZjPEgG(fu::view<char> canon)
{
    if (!(canon[0] == '/'))
        fu::fail((("parseStructCanon: no `/` in "_fu + canon) + "`."_fu));

    int offset = 1;
    const s_Mi mi = parseMi_t6R8uPsY(offset, canon);
    if (!(offset == canon.size()))
        fu::fail((("parseStructCanon: trailing garbage in `"_fu + canon) + "`."_fu));

    return s_StructCanon { int(mi.modid), int(mi.index) };
}

fu_STR createStructCanon_b7S4k2GX(const int modid, const int index, fu::view<char>)
{
    // Hoisted:
    fu_STR x;

    /*MOV*/ fu_STR res = "/"_fu;
    appendMi_RIPPDRFZ(res, int(modid), int(index));
    const s_StructCanon check = parseStructCanon_1WZjPEgG(res);
    if (!((check.modid == modid) && (check.index == index)))
    {
        const fu_STR* BL_2_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x = "NOPE!!!!!"_fu;
            BL_2_v = &(x);
        (void)0;}), *BL_2_v)) }));
        parseStructCanon_1WZjPEgG(res);
        fu::fail("Nope!"_fu);
    };
    return /*NRVO*/ res;
}

                                #ifndef DEFt_starts_3yRdKyg4
                                #define DEFt_starts_3yRdKyg4
inline bool starts_3yRdKyg4(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isStruct_ZYIX8afu(const s_Type& type)
{
    return starts_3yRdKyg4(type.vtype.canon, '/');
}

int modidOfOrigin_ZYIX8afu(const s_Type& type)
{
    if (type.vtype.canon[0] == '/')
    {
        /*MOV*/ const s_StructCanon scp = parseStructCanon_1WZjPEgG(type.vtype.canon);
        return int(scp.modid);
    };
    return 0;
}

#endif
