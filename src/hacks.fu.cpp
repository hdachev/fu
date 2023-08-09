#include <fu/str.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

struct s_ClosureID;
struct s_Target;
struct s_NativeHacks;
unsigned parse10u32_Uqhjg5wd(int&, fu::view<char>);

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
    unsigned revision;
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

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu::str serialize_LOriaAgo(const s_ClosureID& _)
{
    if (_.target.modid < 0)
        return x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D("`"_fu, fu::i64dec(_.target.index)) + "-"_fu), fu::i64dec(-_.target.modid)) + "-"_fu), fu::u64dec(_.revision));
    else
        fu::fail("Not a local."_fu);

}

s_ClosureID tryParseClosureID_WIMP5mdY(fu::view<char> id)
{
    if ((id.size() > 5) && (id[0] == '`'))
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID: trailing stuff."_fu););
        const int index = int(parse10u32_Uqhjg5wd(offset, id));
        if (id[offset++] == '-')
        {
            const int modid = -int(parse10u32_Uqhjg5wd(offset, id));
            if (id[offset++] == '-')
            {
                const unsigned revision = parse10u32_Uqhjg5wd(offset, id);
                return s_ClosureID { s_Target { modid, index }, revision };
            }
            else
                fu::fail("Bad ClosureID: no rev-dash."_fu);

        }
        else
            fu::fail("Bad ClosureID: no modid-dash."_fu);

    }
    else
    {
        return s_ClosureID{};
    };
}

                                #ifndef DEF_x3Cx3E_AsFD7H8Nlu6
                                #define DEF_x3Cx3E_AsFD7H8Nlu6
inline int x3Cx3E_AsFD7H8N(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_f0RieKMU2n0
                                #define DEF_x3Cx3E_f0RieKMU2n0
inline int x3Cx3E_f0RieKMU(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_r7bhmB7DrQ0
                                #define DEF_x3Cx3E_r7bhmB7DrQ0
inline int x3Cx3E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_AsFD7H8N(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_f0RieKMU(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_r7bhmB7DrQ0
                                #define DEF_x3Dx3D_r7bhmB7DrQ0
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

                                #ifndef DEF_starts_1wDddajZEEk
                                #define DEF_starts_1wDddajZEEk
inline bool starts_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

s_NativeHacks NativeHacks_o6l3osDy(fu::view<char> name)
{
    if (starts_1wDddajZ(name, "\nhacks/soft_risk"_fu))
    {
        return s_NativeHacks { 16, true };
    }
    else
    {
        return s_NativeHacks{};
    };
}

#endif
