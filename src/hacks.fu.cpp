#include <cstdint>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec/concat_str.h>
#include <fu/view.h>

int parse10i32(int&, fu::view<std::byte>);

#ifndef FU_NO_FDEFs

fu_STR ClosureID(const int index)
{
    return "`"_fu + index;
}

int tryParseClosureID(fu::view<std::byte> id)
{
    if (id[0] == std::byte('`'))
    {
        int offset = 1;
        fu_DEFER(if (!(offset == id.size()))
            fu::fail("Bad ClosureID."_fu););
        return parse10i32(offset, id);
    };
    return 0;
}

#endif
