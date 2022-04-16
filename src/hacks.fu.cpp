#include <fu/str.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>

struct s_ClosureID;
struct s_Target;
struct s_NativeHacks;
unsigned parse10u32_mPp6Ulzh(int&, fu::view<char>);

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

                                #ifndef DEF_s_ClosureID
                                #define DEF_s_ClosureID
struct s_ClosureID
{
    s_Target target;
    int revision;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || revision
        ;
    }
};
                                #endif

                                #ifndef DEF_s_NativeHacks
                                #define DEF_s_NativeHacks
struct s_NativeHacks
{
    int name_start_idx;
    bool soft_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || soft_risk
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

fu_STR serialize_5msm411l(const s_ClosureID& _)
{
    return ((_.target.modid < 0) ? x7E((x7E((x7E("`"_fu, fu::i64dec(_.target.index)) + "-"_fu), fu::i64dec(-_.target.modid)) + "-"_fu), fu::i64dec(_.revision)) : fu::fail("Not a local."_fu));
}

s_ClosureID tryParseClosureID_1FBeX0Ih(fu::view<char> id)
{
    if ((id.size() > 5) && (id[0] == '`'))
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID: trailing stuff."_fu););
        const int index = int(parse10u32_mPp6Ulzh(offset, id));
        if (!(id[offset++] == '-'))
            fu::fail("Bad ClosureID: no modid-dash."_fu);

        const int modid = -int(parse10u32_mPp6Ulzh(offset, id));
        if (!(id[offset++] == '-'))
            fu::fail("Bad ClosureID: no rev-dash."_fu);

        const int revision = int(parse10u32_mPp6Ulzh(offset, id));
        return s_ClosureID { s_Target { int(modid), int(index) }, int(revision) };
    };
    return s_ClosureID{};
}

                                #ifndef DEF_starts_PEYL9mMA
                                #define DEF_starts_PEYL9mMA
inline bool starts_PEYL9mMA(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

s_NativeHacks NativeHacks_1FBeX0Ih(fu::view<char> name)
{
    if (starts_PEYL9mMA(name, "\nhacks/soft_risk"_fu))
        return s_NativeHacks { 16, true };

    return s_NativeHacks{};
}

#endif
