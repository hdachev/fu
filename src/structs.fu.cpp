#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

struct s_StructCanon;
enum s_Kind: fu::u8;
struct s_ValueType;
typedef fu::u8 s_VFacts;
struct s_Type;
struct s_Lifetime;
int basePrimPrefixLen_hxWWgdZ1(fu::view<char>);
unsigned parseVarint_V5IuMsej(int&, fu::view<char>);
void appendVarint_V5IuMsej(fu::str&, unsigned);

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

                                #ifndef DEF_s_Kind
                                #define DEF_s_Kind
enum s_Kind: fu::u8
{
    s_Kind_sof = 1u,
    s_Kind_err = 2u,
    s_Kind_eof = 3u,
    s_Kind_id = 4u,
    s_Kind_op = 5u,
    s_Kind_int = 6u,
    s_Kind_real = 7u,
    s_Kind_char = 8u,
    s_Kind_str = 9u,
    s_Kind_bool = 10u,
    s_Kind_definit = 11u,
    s_Kind_empty = 12u,
    s_Kind_struct = 13u,
    s_Kind_union = 14u,
    s_Kind_primitive = 15u,
    s_Kind_flags = 16u,
    s_Kind_enum = 17u,
    s_Kind_fn = 18u,
    s_Kind_copy = 19u,
    s_Kind_move = 20u,
    s_Kind_arrlit = 21u,
    s_Kind_not = 22u,
    s_Kind_call = 23u,
    s_Kind_call_indir = 24u,
    s_Kind_argid = 25u,
    s_Kind_root = 26u,
    s_Kind_block = 27u,
    s_Kind_if = 28u,
    s_Kind_or = 29u,
    s_Kind_and = 30u,
    s_Kind_loop = 31u,
    s_Kind_jump = 32u,
    s_Kind___far_jump = 33u,
    s_Kind_defer = 34u,
    s_Kind_try = 35u,
    s_Kind_let = 36u,
    s_Kind_letdef = 37u,
    s_Kind_typecast = 38u,
    s_Kind_typeassert = 39u,
    s_Kind_typeparam = 40u,
    s_Kind_unwrap = 41u,
    s_Kind_pragma = 42u,
    s_Kind_break = 43u,
    s_Kind_return = 44u,
    s_Kind_continue = 45u,
    s_Kind_import = 46u,
    s_Kind_addroffn = 47u,
    s_Kind_forfieldsof = 48u,
    s_Kind_members = 49u,
    s_Kind_fnbranch = 50u,
    s_Kind_pattern = 51u,
    s_Kind_typeunion = 52u,
    s_Kind_typetag = 53u,
    s_Kind___relaxed = 54u,
    s_Kind___convert = 55u,
    s_Kind___preceding_ref_arg = 56u,
    s_Kind___serialized_type = 57u,
    s_Kind___serialized_addrof_type_fn = 58u,
    s_Kind___litfix_bound = 59u,
    s_Kind___no_kind_yet = 60u,
    s_Kind___tombstone = 61u,
    s_Kind_type = 62u,
    s_Kind_var = 63u,
    s_Kind_field = 64u,
    s_Kind_enumv = 65u,
    s_Kind_template = 66u,
    s_Kind___native = 67u,
    s_Kind_inline = 68u,
};
                                #endif

                                #ifndef DEF_s_VFacts
                                #define DEF_s_VFacts
inline constexpr s_VFacts s_VFacts_AlwaysTrue = s_VFacts(1u);
inline constexpr s_VFacts s_VFacts_AlwaysFalse = s_VFacts(2u);
inline constexpr s_VFacts s_VFacts_Typename = s_VFacts(4u);
inline constexpr s_VFacts s_VFacts_LeftAligned = s_VFacts(8u);
inline constexpr s_VFacts s_VFacts_RightAligned = s_VFacts(16u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename
    | s_VFacts_LeftAligned
    | s_VFacts_RightAligned;
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    unsigned quals;
    s_VFacts vfacts;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || vfacts
            || canon
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu::str uni0n;
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

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_StructCanon parseStructCanon_p1TNFlvR(fu::view<char> canon)
{
    int offset = 1;

    {
        const char c = canon[0];
        if (fu::u8(fu::u8(c)) < fu::u8(128u))
            offset = (basePrimPrefixLen_hxWWgdZ1(canon) + 1);

    };
    const int modid = int(parseVarint_V5IuMsej(offset, canon));
    const int globid = int(parseVarint_V5IuMsej(offset, canon));
    if ((offset == canon.size()) || (canon[offset] == '('))
    {
        return s_StructCanon { modid, (globid - ONE_BASED) };
    }
    else
        fu::fail(x7E_3lDd4lqo((x7E_3lDd4lqo((("parseStructCanon: trailing garbage in `"_fu + canon) + "`: "_fu), fu::i64dec(offset)) + "|"_fu), fu::i64dec(canon.size())));

}

fu::str createStructCanon_p1TNFlvR(const s_Kind kind, fu::view<char> basePrim, const int modid, const int index, fu::view<char> specPat, uint64_t hash)
{
    hash ^= (hash >> 32ull);
    hash ^= (hash >> 16ull);
    hash ^= (hash >> 8ull);
    const char sigil = char((hash | 128ull));
    /*MOV*/ fu::str res = (basePrim + sigil);
    if ((modid >= 0) && (index >= 0))
    {
        appendVarint_V5IuMsej(res, unsigned(modid));
        appendVarint_V5IuMsej(res, unsigned((index + ONE_BASED)));
        if (basePrim)
        {
            char& c = res.mutref(0);
            if ((c == 'e') || (c == 'm'))
                fu::fail(("createStructCanon: bad basePrim: "_fu + basePrim));
            else if (kind == s_Kind_enum)
                c = 'e';
            else if (kind == s_Kind_flags)
                c = 'm';

        };
        res += specPat;
        return /*NRVO*/ res;
    }
    else
        fu::fail("createStructCanon: bad modid/index"_fu);

}

bool isStruct_p1TNFlvR(const s_ValueType& type)
{
    const char c = type.canon[0];
    return (fu::u8(fu::u8(c)) >= fu::u8(128u));
}

bool isStructOrUnion_p1TNFlvR(const s_ValueType& type)
{
    return isStruct_p1TNFlvR(type);
}

int modidOfOrigin_p1TNFlvR(const s_Type& type)
{
    if (isStruct_p1TNFlvR(type.vtype))
    {
        const s_StructCanon scp = parseStructCanon_p1TNFlvR(type.vtype.canon);
        return scp.modid;
    }
    else
        return 0;

}

#endif
