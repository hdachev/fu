#include <fu/str.h>
#include <fu/never.h>


#ifndef fu_NO_fdefs

void bReak_DX6KImTN()
{
    fu::str a = ((2 > 1) ? "Breakpoint here"_fu : fu::str{});
    if (!(a))
        fu_ASSERT();

}

#endif
