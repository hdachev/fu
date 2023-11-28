#include <fu/str.h>
#include <fu/view.h>
#include <fu/print.h>


#ifndef fu_NO_fdefs

void bReak_DX6KImTN()
{
    // Hoisted:
    fu::str x {};

    fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = "[[[ BREAKPOINT HERE ]]]"_fu, x)) }));
}

#endif
