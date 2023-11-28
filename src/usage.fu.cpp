#include <fu/int.h>
#include <fu/str.h>

struct s_Type;
struct s_ValueType;
struct s_Lifetime;
typedef fu::u8 s_VFacts;

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

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
extern const unsigned q_mutref = (unsigned(1) << 0u);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
extern const unsigned q_rx_copy = (unsigned(1) << 1u);
                                #endif

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
extern const unsigned q_rx_resize = (unsigned(1) << 2u);
                                #endif

                                #ifndef DEF_q_TAGS
                                #define DEF_q_TAGS
extern const unsigned q_TAGS = ((q_mutref | q_rx_copy) | q_rx_resize);
                                #endif

                                #ifndef DEF_q_USAGE
                                #define DEF_q_USAGE
extern const unsigned q_USAGE = ~q_TAGS;
                                #endif

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
extern const int q_USAGE_bitsize = (Quals_bitsize - q_TAGS_bitsize);
                                #endif

unsigned getMaxUsage_YfHAfesl(const int flatCount)
{
    if ((flatCount >= q_USAGE_bitsize))
        return q_USAGE;
    else
        return unsigned((q_USAGE >> unsigned((q_USAGE_bitsize - flatCount)))) & q_USAGE;

}

void USAGE_setMaxUsage_TB5Kkwh9(s_Type& type, const int flatCount)
{
    type.vtype.quals = ((type.vtype.quals & q_TAGS) | getMaxUsage_YfHAfesl(flatCount));
}

static unsigned USAGE_shiftLeft_L39cSlw5(const unsigned quals, int offset)
{
    const unsigned keep = (quals & q_TAGS);
    unsigned usage = (quals & q_USAGE);
    while ((offset >= q_USAGE_bitsize))
        offset -= q_USAGE_bitsize;

    usage = ((usage << unsigned(offset)) | (usage >> unsigned((q_USAGE_bitsize - offset))));
    return keep | (usage & q_USAGE);
}

s_Type USAGE_structUsageFromFieldUsage_ngdSJBk9(/*MOV*/ s_Type&& slot, const int memberFlatOffset)
{
    slot.vtype.quals = USAGE_shiftLeft_L39cSlw5(slot.vtype.quals, memberFlatOffset);
    return static_cast<s_Type&&>(slot);
}

static unsigned USAGE_shiftRight_L39cSlw5(const unsigned quals, int offset)
{
    const unsigned keep = (quals & q_TAGS);
    unsigned usage = (quals & q_USAGE);
    while ((offset >= q_USAGE_bitsize))
        offset -= q_USAGE_bitsize;

    usage = ((usage >> unsigned(offset)) | (usage << unsigned((q_USAGE_bitsize - offset))));
    return keep | (usage & q_USAGE);
}

s_Type USAGE_fieldUsageFromStructUsage_nUuDM8fi(/*MOV*/ s_Type&& slot, const unsigned structUsage, const int memberFlatOffset, const int memberFlatCount)
{
    slot.vtype.quals &= ~q_USAGE;
    slot.vtype.quals |= structUsage;
    slot.vtype.quals = USAGE_shiftRight_L39cSlw5(slot.vtype.quals, memberFlatOffset);
    slot.vtype.quals &= (q_TAGS | getMaxUsage_YfHAfesl(memberFlatCount));
    return static_cast<s_Type&&>(slot);
}

#endif
