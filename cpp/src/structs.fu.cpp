#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct StructCanon_TixV;
enum Kind_Idfg: fu::u8;
struct ValueType_JtNg;
typedef fu::u8 VFacts_xhRf;
struct Type_OiTm;
struct Lifetime_llCF;
int basePrimPrefixLen_hxWW(fu::view<char>);
unsigned parseVarint_V5Iu(int&, fu::view<char>);

                                #ifndef DEF_ONE_BASED
                                #define DEF_ONE_BASED
inline constexpr int ONE_BASED = 1;
                                #endif
void appendVarint_V5Iu(fu::vec_range_mut<char>, unsigned);

                                #ifndef DEF_StructCanon_TixVhPbpah2
                                #define DEF_StructCanon_TixVhPbpah2
struct StructCanon_TixV
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

                                #ifndef DEF_Kind_Idfg
                                #define DEF_Kind_Idfg
enum Kind_Idfg: fu::u8
{
    Kind_Idfg_sof = 1u,
    Kind_Idfg_err = 2u,
    Kind_Idfg_eof = 3u,
    Kind_Idfg_id = 4u,
    Kind_Idfg_op = 5u,
    Kind_Idfg_int = 6u,
    Kind_Idfg_real = 7u,
    Kind_Idfg_char = 8u,
    Kind_Idfg_str = 9u,
    Kind_Idfg_bool = 10u,
    Kind_Idfg_definit = 11u,
    Kind_Idfg_empty = 12u,
    Kind_Idfg_struct = 13u,
    Kind_Idfg_union = 14u,
    Kind_Idfg_primitive = 15u,
    Kind_Idfg_flags = 16u,
    Kind_Idfg_enum = 17u,
    Kind_Idfg_fn = 18u,
    Kind_Idfg_copy = 19u,
    Kind_Idfg_move = 20u,
    Kind_Idfg_arrlit = 21u,
    Kind_Idfg_not = 22u,
    Kind_Idfg_call = 23u,
    Kind_Idfg_call_indir = 24u,
    Kind_Idfg_argid = 25u,
    Kind_Idfg_root = 26u,
    Kind_Idfg_block = 27u,
    Kind_Idfg_if = 28u,
    Kind_Idfg_or = 29u,
    Kind_Idfg_and = 30u,
    Kind_Idfg_loop = 31u,
    Kind_Idfg_jump = 32u,
    Kind_Idfg___far_jump = 33u,
    Kind_Idfg_defer = 34u,
    Kind_Idfg_try = 35u,
    Kind_Idfg_let = 36u,
    Kind_Idfg_letdef = 37u,
    Kind_Idfg_typecast = 38u,
    Kind_Idfg_typeassert = 39u,
    Kind_Idfg_typeparam = 40u,
    Kind_Idfg_unwrap = 41u,
    Kind_Idfg_pragma = 42u,
    Kind_Idfg_break = 43u,
    Kind_Idfg_return = 44u,
    Kind_Idfg_continue = 45u,
    Kind_Idfg_import = 46u,
    Kind_Idfg_addroffn = 47u,
    Kind_Idfg_forfieldsof = 48u,
    Kind_Idfg_members = 49u,
    Kind_Idfg_fnbranch = 50u,
    Kind_Idfg_pattern = 51u,
    Kind_Idfg_typeunion = 52u,
    Kind_Idfg_typetag = 53u,
    Kind_Idfg___relaxed = 54u,
    Kind_Idfg___convert = 55u,
    Kind_Idfg___preceding_ref_arg = 56u,
    Kind_Idfg___serialized_type = 57u,
    Kind_Idfg___serialized_addrof_type_fn = 58u,
    Kind_Idfg___litfix_bound = 59u,
    Kind_Idfg___no_kind_yet = 60u,
    Kind_Idfg___tombstone = 61u,
    Kind_Idfg_type = 62u,
    Kind_Idfg_var = 63u,
    Kind_Idfg_field = 64u,
    Kind_Idfg_enumv = 65u,
    Kind_Idfg_template = 66u,
    Kind_Idfg___native = 67u,
    Kind_Idfg_inline = 68u,
};
                                #endif

                                #ifndef DEF_VFacts_xhRf
                                #define DEF_VFacts_xhRf
inline constexpr VFacts_xhRf VFacts_xhRf_AlwaysTrue = VFacts_xhRf(1u);
inline constexpr VFacts_xhRf VFacts_xhRf_AlwaysFalse = VFacts_xhRf(2u);
inline constexpr VFacts_xhRf VFacts_xhRf_Typename = VFacts_xhRf(4u);
inline constexpr VFacts_xhRf VFacts_xhRf_LeftAligned = VFacts_xhRf(8u);
inline constexpr VFacts_xhRf VFacts_xhRf_RightAligned = VFacts_xhRf(16u);

inline constexpr VFacts_xhRf MASK_VFacts_xhRf
    = VFacts_xhRf_AlwaysTrue
    | VFacts_xhRf_AlwaysFalse
    | VFacts_xhRf_Typename
    | VFacts_xhRf_LeftAligned
    | VFacts_xhRf_RightAligned;
                                #endif

                                #ifndef DEF_ValueType_JtNg3Yu4fH2
                                #define DEF_ValueType_JtNg3Yu4fH2
struct ValueType_JtNg
{
    unsigned quals;
    VFacts_xhRf vfacts;
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

                                #ifndef DEF_Lifetime_llCFAn7rdDl
                                #define DEF_Lifetime_llCFAn7rdDl
struct Lifetime_llCF
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

                                #ifndef DEF_Type_OiTmZNVtrhg
                                #define DEF_Type_OiTmZNVtrhg
struct Type_OiTm
{
    ValueType_JtNg vtype;
    Lifetime_llCF lifetime;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
        ;
    }
};
                                #endif

                                #ifndef STR_xbNmtxM9Iig
                                #define STR_xbNmtxM9Iig
static const fu::str str_xbNmtxM9Iig fu_INIT_PRIORITY(1007) { "createStructCanon: bad modid/index"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

StructCanon_TixV parseStructCanon_p1TN(fu::view<char> canon)
{
    int offset = 1;

    {
        const char c = canon[0];
        if (fu::u8(fu::u8(c)) < fu::u8(128u))
            offset = (basePrimPrefixLen_hxWW(canon) + 1);

    };
    const int modid = int(parseVarint_V5Iu(offset, canon));
    const int globid = int(parseVarint_V5Iu(offset, canon));
    if ((offset == canon.size()) || (canon[offset] == '('))
    {
        return StructCanon_TixV { modid, (globid - ONE_BASED) };
    }
    else
        fu::fail(x7E_rA00((x7E_rA00((("parseStructCanon: trailing garbage in `"_view + canon) + "`: "_view), fu::i64dec(offset)) + "|"_view), fu::i64dec(canon.size())));

}

fu::str createStructCanon_p1TN(const Kind_Idfg kind, fu::view<char> basePrim, const int modid, const int index, fu::view<char> specPat, uint64_t hash)
{
    hash ^= (hash >> 32ull);
    hash ^= (hash >> 16ull);
    hash ^= (hash >> 8ull);
    const char sigil = char((hash | 128ull));
    /*MOV*/ fu::str res = (basePrim + sigil);
    if ((modid >= 0) && (index >= 0))
    {
        appendVarint_V5Iu(res, unsigned(modid));
        appendVarint_V5Iu(res, unsigned((index + ONE_BASED)));
        if (basePrim)
        {
            char& c = res.mutref(0);
            if ((c == 'e') || (c == 'm'))
                fu::fail(("createStructCanon: bad basePrim: "_view + basePrim));
            else if (kind == Kind_Idfg_enum)
                c = 'e';
            else if (kind == Kind_Idfg_flags)
                c = 'm';

        };
        res += specPat;
        return /*NRVO*/ res;
    }
    else
        fu::fail(fu::str(str_xbNmtxM9Iig));

}

bool isStruct_p1TN(const ValueType_JtNg& type)
{
    const char c = type.canon[0];
    return (fu::u8(fu::u8(c)) >= fu::u8(128u));
}

bool isStructOrUnion_p1TN(const ValueType_JtNg& type)
{
    return isStruct_p1TN(type);
}

int modidOfOrigin_p1TN(const Type_OiTm& type)
{
    if (isStruct_p1TN(type.vtype))
    {
        const StructCanon_TixV scp = parseStructCanon_p1TN(type.vtype.canon);
        return scp.modid;
    }
    else
        return 0;

}

#endif
