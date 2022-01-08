
#include <fu/decstr.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_ClosureID;
struct s_NativeOpts;
struct s_Target;

int parse10i32_g2vqWUwe(int&, fu::view<char>);

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

                                #ifndef DEF_s_NativeOpts
                                #define DEF_s_NativeOpts
struct s_NativeOpts
{
    int name_start_idx;
    bool no_AAR;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || no_AAR
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR serialize_RzDpXp73(const s_ClosureID& _)
{
    return ((_.target.modid < 0) ? x7E((x7E((x7E("`"_fu, fu::i64dec(_.target.index)) + "-"_fu), fu::i64dec(-_.target.modid)) + "-"_fu), fu::i64dec(_.revision)) : fu::fail("Not a local."_fu));
}

s_ClosureID tryParseClosureID_3jVozxZ2(fu::view<char> id)
{
    if (id[0] == '`')
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID: trailing stuff."_fu););
        const int index = parse10i32_g2vqWUwe(offset, id);
        if (!(id[offset++] == '-'))
            fu::fail("Bad ClosureID: no modid-dash."_fu);

        const int modid = -parse10i32_g2vqWUwe(offset, id);
        if (!(id[offset++] == '-'))
            fu::fail("Bad ClosureID: no rev-dash."_fu);

        const int revision = parse10i32_g2vqWUwe(offset, id);
        return s_ClosureID { s_Target { int(modid), int(index) }, int(revision) };
    };
    return s_ClosureID{};
}

                                #ifndef DEFt_starts_OZkl8S7R
                                #define DEFt_starts_OZkl8S7R
inline bool starts_OZkl8S7R(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

s_NativeOpts NativeOpts_3jVozxZ2(fu::view<char> name)
{
    if (starts_OZkl8S7R(name, "\nno_AAR"_fu))
        return s_NativeOpts { 7, true };

    return s_NativeOpts{};
}

#endif
