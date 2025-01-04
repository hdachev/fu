#include <fu/int.h>
#include <fu/str.h>

struct Type_OiTm;
struct ValueType_JtNg;
typedef fu::u8 VFacts_xhRf;
struct Lifetime_llCF;
struct RWQuals_ELUY;

                                #ifndef DEF_q_TAGS_bitsize
                                #define DEF_q_TAGS_bitsize
inline constexpr int q_TAGS_bitsize = 3;
                                #endif

                                #ifndef DEF_Quals_bitsize
                                #define DEF_Quals_bitsize
inline constexpr int Quals_bitsize = 32;
                                #endif

                                #ifndef DEF_q_USAGE_bitsize
                                #define DEF_q_USAGE_bitsize
inline constexpr int q_USAGE_bitsize = (Quals_bitsize - q_TAGS_bitsize);
                                #endif

                                #ifndef DEF_q_USAGE_offset
                                #define DEF_q_USAGE_offset
inline constexpr int q_USAGE_offset = q_TAGS_bitsize;
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

                                #ifndef DEF_RWQuals_ELUYKV31mz2
                                #define DEF_RWQuals_ELUYKV31mz2
struct RWQuals_ELUY
{
    unsigned usage;
    unsigned written_to;
    explicit operator bool() const noexcept
    {
        return false
            || usage
            || written_to
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

extern const unsigned q_mutref = (unsigned(1) << 0u);
extern const unsigned q_rx_copy = (unsigned(1) << 1u);
extern const unsigned q_rx_resize = (unsigned(1) << 2u);
extern const unsigned q_TAGS = ((q_mutref | q_rx_copy) | q_rx_resize);
extern const unsigned q_USAGE = ~q_TAGS;
unsigned getMaxUsage_CaGD(const int flatCount)
{
    if ((flatCount >= q_USAGE_bitsize))
        return q_USAGE;
    else
        return unsigned((q_USAGE >> unsigned((q_USAGE_bitsize - flatCount)))) & q_USAGE;

}

static unsigned USAGE_shiftLeft_CaGD(const unsigned quals, int offset)
{
    const unsigned keep = (quals & q_TAGS);
    unsigned usage = (quals & q_USAGE);
    while ((offset >= q_USAGE_bitsize))
        offset -= q_USAGE_bitsize;

    usage = ((usage << unsigned(offset)) | (usage >> unsigned((q_USAGE_bitsize - offset))));
    return keep | (usage & q_USAGE);
}

unsigned getRegionUsage_CaGD(const int flatOffset, const int flatCount)
{
    return USAGE_shiftLeft_CaGD(getMaxUsage_CaGD(flatCount), flatOffset);
}

void USAGE_setMaxUsage_CaGD(Type_OiTm& type, const int flatCount)
{
    type.vtype.quals = ((type.vtype.quals & q_TAGS) | getMaxUsage_CaGD(flatCount));
}

unsigned USAGE_structUsageFromFieldUsage_CaGD(const unsigned quals, const int memberFlatOffset)
{
    return USAGE_shiftLeft_CaGD(quals, memberFlatOffset);
}

static unsigned USAGE_shiftRight_CaGD(const unsigned quals, int offset)
{
    const unsigned keep = (quals & q_TAGS);
    unsigned usage = (quals & q_USAGE);
    while ((offset >= q_USAGE_bitsize))
        offset -= q_USAGE_bitsize;

    usage = ((usage >> unsigned(offset)) | (usage << unsigned((q_USAGE_bitsize - offset))));
    return keep | (usage & q_USAGE);
}

unsigned USAGE_fieldUsageFromStructUsage_CaGD(unsigned quals, const unsigned structUsage, const int memberFlatOffset, const int memberFlatCount)
{
    quals &= ~q_USAGE;
    quals |= structUsage;
    quals = USAGE_shiftRight_CaGD(quals, memberFlatOffset);
    quals &= (q_TAGS | getMaxUsage_CaGD(memberFlatCount));
    return quals;
}

Type_OiTm USAGE_structUsageFromFieldUsage_GgXY(/*MOV*/ Type_OiTm&& slot, const int memberFlatOffset)
{
    slot.vtype.quals = USAGE_structUsageFromFieldUsage_CaGD(slot.vtype.quals, memberFlatOffset);
    return static_cast<Type_OiTm&&>(slot);
}

Type_OiTm USAGE_fieldUsageFromStructUsage_GgXY(/*MOV*/ Type_OiTm&& slot, const unsigned structUsage, const int memberFlatOffset, const int memberFlatCount)
{
    slot.vtype.quals = USAGE_fieldUsageFromStructUsage_CaGD(slot.vtype.quals, structUsage, memberFlatOffset, memberFlatCount);
    return static_cast<Type_OiTm&&>(slot);
}

RWQuals_ELUY USAGE_structUsageFromFieldUsage_z5tF(const RWQuals_ELUY& rw, const int memberFlatOffset)
{
    return RWQuals_ELUY { USAGE_structUsageFromFieldUsage_CaGD(rw.usage, memberFlatOffset), USAGE_structUsageFromFieldUsage_CaGD(rw.written_to, memberFlatOffset) };
}

#endif
