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

fu_STR ClosureID(const s_Target& target)
{
    return ((target.modid < 0) ? ((("`"_fu + target.index) + "-"_fu) + -target.modid) : ("`"_fu + target.index));
}

s_Target tryParseClosureID(fu::view<std::byte> id, const int MODID)
{
    if (id[0] == std::byte('`'))
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID."_fu););
        const int index_2 = parse10i32(offset, id);
        const int modid_2 = ((id.size() > offset) ? -parse10i32(++offset, id) : int(MODID));
        return s_Target { int(modid_2), int(index_2) };
    };
    return s_Target{};
}

int compilerBreak()
{
    int a = 5;
    return a;
}

#endif
