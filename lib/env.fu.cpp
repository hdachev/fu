#define TODO_FIX_REMOVE_copying_push

#include <fu/str.h>
#include <stdlib.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

fu::str get_O2LhwJOy(/*MOV*/ fu::str&& name)
{
    name += '\x00';
    const char* value = getenv(name.data());
    return fu::strlit { value, value ? (fu::i) strlen(value) : 0 };

    return static_cast<fu::str&&>(name);
}

#endif
