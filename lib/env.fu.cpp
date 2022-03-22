
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <stdlib.h>

#ifndef FU_NO_FDEFs

fu_STR get_k88nYqFr(/*MOV*/ fu_STR&& name)
{
    name += '\x00';


        const char* value = getenv(name.data());
        return fu_STRLIT { value, value ? (fu::i) strlen(value) : 0 };

    ;
    return static_cast<fu_STR&&>(name);
}

#endif
