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
struct s_ValueType;
struct s_Type;
struct s_Lifetime;
struct s_Region;
typedef fu::u8 s_VFacts;
int basePrimPrefixLen_VyAVtbGI(fu::view<char>);
s_Mi parseMi_Uqhjg5wd(int&, fu::view<char>);
void appendMi_Pd5VM6Hx(fu::str&, int, int);

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
    s_kind_not = 16u,
    s_kind_call = 17u,
    s_kind_argid = 18u,
    s_kind_root = 19u,
    s_kind_block = 20u,
    s_kind_if = 21u,
    s_kind_or = 22u,
    s_kind_and = 23u,
    s_kind_loop = 24u,
    s_kind_jump = 25u,
    s_kind___far_jump = 26u,
    s_kind_defer = 27u,
    s_kind_try = 28u,
    s_kind_let = 29u,
    s_kind_letdef = 30u,
    s_kind_typedef = 31u,
    s_kind_typecast = 32u,
    s_kind_typeassert = 33u,
    s_kind_typeparam = 34u,
    s_kind_unwrap = 35u,
    s_kind_pragma = 36u,
    s_kind_break = 37u,
    s_kind_return = 38u,
    s_kind_continue = 39u,
    s_kind_import = 40u,
    s_kind_addroffn = 41u,
    s_kind_forfieldsof = 42u,
    s_kind_struct = 43u,
    s_kind_union = 44u,
    s_kind_primitive = 45u,
    s_kind_flags = 46u,
    s_kind_enum = 47u,
    s_kind_members = 48u,
    s_kind_fndef = 49u,
    s_kind_fn = 50u,
    s_kind_fnbranch = 51u,
    s_kind_pattern = 52u,
    s_kind_typeunion = 53u,
    s_kind_typetag = 54u,
    s_kind___relaxed = 55u,
    s_kind___convert = 56u,
    s_kind___no_kind_yet = 57u,
    s_kind_type = 58u,
    s_kind_var = 59u,
    s_kind_field = 60u,
    s_kind_enumv = 61u,
    s_kind_template = 62u,
    s_kind___native = 63u,
    s_kind_inline = 64u,
};
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    unsigned quals;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || canon
        ;
    }
};
                                #endif

                                #ifndef DEF_s_VFacts
                                #define DEF_s_VFacts
inline constexpr s_VFacts s_VFacts_AlwaysTrue = s_VFacts(1u);
inline constexpr s_VFacts s_VFacts_AlwaysFalse = s_VFacts(2u);
inline constexpr s_VFacts s_VFacts_Typename = s_VFacts(4u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename;
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
    fu::vec<s_Region> uni0n;
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
    s_VFacts vfacts;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
            || vfacts
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_ONE_BASED
                                #define DEF_ONE_BASED
inline constexpr int ONE_BASED = 1;
                                #endif

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_StructCanon parseStructCanon_degpQC5i(fu::view<char> canon)
{
    int offset = 1;

    {
        const char c = canon[0];
        if (c != '/')
            offset = basePrimPrefixLen_VyAVtbGI(canon);

    };
    const s_Mi mi = parseMi_Uqhjg5wd(offset, canon);
    if (offset == canon.size())
    {
        return s_StructCanon { mi.modid, (mi.index - ONE_BASED) };
    }
    else
        fu::fail(x7E_r7bhmB7D((x7E_r7bhmB7D((("parseStructCanon: trailing garbage in `"_fu + canon) + "`: "_fu), fu::i64dec(offset)) + "|"_fu), fu::i64dec(canon.size())));

}

fu::str createStructCanon_BwHGTTCS(const s_kind kind, const fu::str& baseprim, const int modid, const int index)
{
    // Hoisted:
    fu::str x {};

    /*MOV*/ fu::str res = (baseprim ? fu::str(baseprim) : "/"_fu);
    appendMi_Pd5VM6Hx(res, modid, (index + ONE_BASED));
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
    const s_StructCanon check = parseStructCanon_degpQC5i(res);
    if (!((check.modid == modid) && (check.index == index)))
    {
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = "NOPE!!!!!"_fu, x)) }));
        parseStructCanon_degpQC5i(res);
        fu::fail("Nope!"_fu);
    }
    else
        return /*NRVO*/ res;

}

                                #ifndef DEF_starts_90iSu77lC9e
                                #define DEF_starts_90iSu77lC9e
inline bool starts_90iSu77l(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isStruct_ddyKn6V4(const s_ValueType& type)
{
    return starts_90iSu77l(type.canon, '/');
}

bool isStructOrUnion_ddyKn6V4(const s_ValueType& type)
{
    return isStruct_ddyKn6V4(type);
}

int modidOfOrigin_u8EynJdr(const s_Type& type)
{
    if (type.vtype.canon[0] == '/')
    {
        const s_StructCanon scp = parseStructCanon_degpQC5i(type.vtype.canon);
        return scp.modid;
    }
    else
        return 0;

}

#endif
