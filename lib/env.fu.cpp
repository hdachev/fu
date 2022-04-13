#include <fu/str.h>
#include <stdlib.h>
#include <fu/vec/concat_one.h>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"


#ifndef fu_NO_fdefs

fu_STR get_1w6Ekz7Y(/*MOV*/ fu_STR&& name)
{
    name += '\x00';

        const char* value = getenv(name.data());
        return fu_STRLIT { value, value ? (fu::i) strlen(value) : 0 };
    ;
    return static_cast<fu_STR&&>(name);
}

#endif

#pragma GCC diagnostic pop
