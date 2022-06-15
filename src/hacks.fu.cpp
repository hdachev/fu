#include <fu/str.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

struct s_ClosureID;
struct s_Target;
struct s_NativeHacks;
unsigned parse10u32_0HRwKgGk(int&, fu::view<char>);

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

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR serialize_NMBClXQY(const s_ClosureID& _)
{
    if (_.target.modid < 0)
        return x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ("`"_fu, fu::i64dec(_.target.index)) + "-"_fu), fu::i64dec(-_.target.modid)) + "-"_fu), fu::i64dec(_.revision));
    else
        return fu::fail("Not a local."_fu);

}

s_ClosureID tryParseClosureID_QYk3NQTZ(fu::view<char> id)
{
    if ((id.size() > 5) && (id[0] == '`'))
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID: trailing stuff."_fu););
        /*MOV*/ const int index = int(parse10u32_0HRwKgGk(offset, id));
        if (id[offset++] == '-')
        {
            /*MOV*/ const int modid = -int(parse10u32_0HRwKgGk(offset, id));
            if (id[offset++] == '-')
            {
                /*MOV*/ const int revision = int(parse10u32_0HRwKgGk(offset, id));
                int _0 {};
                s_Target _1 {};
                return (_1 = (_0 = int(modid), s_Target { int(_0), int(index) }), s_ClosureID { s_Target(_1), int(revision) });
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

                                #ifndef DEF_x3Cx3E_gcxVH86XFM7
                                #define DEF_x3Cx3E_gcxVH86XFM7
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_hvR4gqODwpa
                                #define DEF_x3Cx3E_hvR4gqODwpa
inline int x3Cx3E_hvR4gqOD(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YP7BiSZZZOd
                                #define DEF_x3Cx3E_YP7BiSZZZOd
inline int x3Cx3E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hvR4gqOD(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_YP7BiSZZZOd
                                #define DEF_x3Dx3D_YP7BiSZZZOd
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

                                #ifndef DEF_starts_YP7BiSZZZOd
                                #define DEF_starts_YP7BiSZZZOd
inline bool starts_YP7BiSZZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

s_NativeHacks NativeHacks_QYk3NQTZ(fu::view<char> name)
{
    if (starts_YP7BiSZZ(name, "\nhacks/soft_risk"_fu))
    {
        return s_NativeHacks { 16, true };
    }
    else
    {
        return s_NativeHacks{};
    };
}

#endif
