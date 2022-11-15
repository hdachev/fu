#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

struct s_StructCanon;
struct s_Mi;
enum s_kind: fu::u8;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
int basePrimPrefixLen_9ycokehR(fu::view<char>);
s_Mi parseMi_Tv0KZM6O(int&, fu::view<char>);
void appendMi_bivPeQcS(fu_STR&, int, int);

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

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
{
    s_kind_sof = 1u,
    s_kind_err = 2u,
    s_kind_eof = 3u,
    s_kind_id = 4u,
    s_kind_op = 5u,
    s_kind_int = 6u,
    s_kind_real = 7u,
    s_kind_char = 8u,
    s_kind_str = 9u,
    s_kind_bool = 10u,
    s_kind_copy = 11u,
    s_kind_move = 12u,
    s_kind_arrlit = 13u,
    s_kind_definit = 14u,
    s_kind_empty = 15u,
    s_kind_void = 16u,
    s_kind_not = 17u,
    s_kind_call = 18u,
    s_kind_argid = 19u,
    s_kind_root = 20u,
    s_kind_block = 21u,
    s_kind_if = 22u,
    s_kind_or = 23u,
    s_kind_and = 24u,
    s_kind_loop = 25u,
    s_kind_jump = 26u,
    s_kind___far_jump = 27u,
    s_kind_defer = 28u,
    s_kind_try = 29u,
    s_kind_let = 30u,
    s_kind_letdef = 31u,
    s_kind_typedef = 32u,
    s_kind_typecast = 33u,
    s_kind_typeassert = 34u,
    s_kind_typeparam = 35u,
    s_kind_unwrap = 36u,
    s_kind_pragma = 37u,
    s_kind_break = 38u,
    s_kind_return = 39u,
    s_kind_continue = 40u,
    s_kind_import = 41u,
    s_kind_addroffn = 42u,
    s_kind_forfieldsof = 43u,
    s_kind_struct = 44u,
    s_kind_union = 45u,
    s_kind_primitive = 46u,
    s_kind_flags = 47u,
    s_kind_enum = 48u,
    s_kind_members = 49u,
    s_kind_fndef = 50u,
    s_kind_fn = 51u,
    s_kind_fnbranch = 52u,
    s_kind_pattern = 53u,
    s_kind_typeunion = 54u,
    s_kind_typetag = 55u,
    s_kind___relaxed = 56u,
    s_kind___convert = 57u,
    s_kind___no_kind_yet = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
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

                                #ifndef DEF_ONE_BASED
                                #define DEF_ONE_BASED
inline constexpr int ONE_BASED = 1;
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_StructCanon parseStructCanon_1RM6wwlO(fu::view<char> canon)
{
    int offset = 1;

    {
        const char c = canon[0];
        if (c != '/')
            offset = basePrimPrefixLen_9ycokehR(canon);

    };
    const s_Mi mi = parseMi_Tv0KZM6O(offset, canon);
    if (offset == canon.size())
    {
        return s_StructCanon { int(mi.modid), (mi.index - ONE_BASED) };
    }
    else
        fu::fail(x7E_sTZRmMq1((x7E_sTZRmMq1((("parseStructCanon: trailing garbage in `"_fu + canon) + "`: "_fu), fu::i64dec(offset)) + "|"_fu), fu::i64dec(canon.size())));

}

fu_STR createStructCanon_hZI0W5mG(const s_kind kind, const fu_STR& baseprim, const int modid, const int index, fu::view<char>)
{
    // Hoisted:
    fu_STR x;

    /*MOV*/ fu_STR res = (baseprim ? fu_STR(baseprim) : "/"_fu);
    appendMi_bivPeQcS(res, int(modid), (index + ONE_BASED));
    if (baseprim)
    {
        char& c = res.mutref(0);
        if ((c == 'e') || (c == 'm'))
            fu::fail(("createStructCanon: bad baseprim: "_fu + baseprim));
        else if (kind == s_kind_enum)
            c = 'e';
        else if (kind == s_kind_flags)
            c = 'm';

    };
    const s_StructCanon check = parseStructCanon_1RM6wwlO(res);
    if (!((check.modid == modid) && (check.index == index)))
    {
        fu_STR* BL_6_v;
        fu::println((fu::slate<1, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            x = "NOPE!!!!!"_fu;
            BL_6_v = &(x);
        (void)0;}), *BL_6_v)) }));
        parseStructCanon_1RM6wwlO(res);
        fu::fail("Nope!"_fu);
    }
    else
        return /*NRVO*/ res;

}

                                #ifndef DEF_starts_fjBQS6rrsUk
                                #define DEF_starts_fjBQS6rrsUk
inline bool starts_fjBQS6rr(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isStruct_FNWlOhLB(const s_Type& type)
{
    return starts_fjBQS6rr(type.vtype.canon, '/');
}

int modidOfOrigin_FNWlOhLB(const s_Type& type)
{
    if (type.vtype.canon[0] == '/')
    {
        const s_StructCanon scp = parseStructCanon_1RM6wwlO(type.vtype.canon);
        return scp.modid;
    }
    else
        return 0;

}

#endif
