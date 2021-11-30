#include <fu/decstr.h>
#include <fu/defer.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

struct s_Target;

int parse10i32(int&, fu::view<fu::byte>);

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
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

fu_STR ClosureID(const s_Target& target_3)
{
    return ((target_3.modid < 0) ? x7E_OZkl((x7E_OZkl("`"_fu, fu::i64dec(target_3.index)) + "-"_fu), fu::i64dec(-target_3.modid)) : x7E_OZkl("`"_fu, fu::i64dec(target_3.index)));
}

s_Target tryParseClosureID(fu::view<fu::byte> id_1, const int MODID)
{
    if (id_1[0] == fu::byte('`'))
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id_1.size()))
            fu::fail("Bad ClosureID."_fu););
        const int index_2 = parse10i32(offset, id_1);
        const int modid_4 = ((id_1.size() > offset) ? -parse10i32(++offset, id_1) : int(MODID));
        return s_Target { int(modid_4), int(index_2) };
    };
    return s_Target{};
}

int compilerBreak()
{
    const int a = 5;
    return a;
}

#endif
