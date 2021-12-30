
#include <fu/decstr.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

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

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR ClosureID_62RVWOkg(const s_Target& target)
{
    return ((target.modid < 0) ? x7E((x7E("`"_fu, fu::i64dec(target.index)) + "-"_fu), fu::i64dec(-target.modid)) : x7E("`"_fu, fu::i64dec(target.index)));
}

s_Target tryParseClosureID_ZIuKfopV(fu::view<char> id, const int MODID)
{
    if (id[0] == '`')
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID."_fu););
        const int index = parse10i32_g2vqWUwe(offset, id);
        const int modid = ((id.size() > offset) ? -parse10i32_g2vqWUwe(++offset, id) : int(MODID));
        return s_Target { int(modid), int(index) };
    };
    return s_Target{};
}

#endif
