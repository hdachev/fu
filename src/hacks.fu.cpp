#include <cstdint>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_str.h>
#include <fu/view.h>

struct s_Target;

int parse10i32(int&, fu::view<std::byte>);

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

fu_STR ClosureID(const s_Target& target_3)
{
    return ((target_3.modid < 0) ? ((("`"_fu + target_3.index) + "-"_fu) + -target_3.modid) : ("`"_fu + target_3.index));
}

s_Target tryParseClosureID(fu::view<std::byte> id_1, const int MODID)
{
    if (id_1[0] == std::byte('`'))
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
    int a = 5;
    return a;
}

#endif
