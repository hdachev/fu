
#include <fu/decstr.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Target;

int parse10i32(int&, fu::view<char>);

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

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR ClosureID(const s_Target& target)
{
    return ((target.modid < 0) ? x7E_OZkl((x7E_OZkl("`"_fu, fu::i64dec(target.index)) + "-"_fu), fu::i64dec(-target.modid)) : x7E_OZkl("`"_fu, fu::i64dec(target.index)));
}

s_Target tryParseClosureID(fu::view<char> id, const int MODID)
{
    if (id[0] == '`')
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID."_fu););
        const int index = parse10i32(offset, id);
        const int modid = ((id.size() > offset) ? -parse10i32(++offset, id) : int(MODID));
        return s_Target { int(modid), int(index) };
    };
    return s_Target{};
}

#endif
