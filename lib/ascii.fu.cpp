#include <fu/int.h>
#include <fu/str.h>


#ifndef fu_NO_fdefs

fu_STR upper_FZjKqN6X(/*MOV*/ fu_STR&& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'a') && (c <= 'z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a')))));

    };
    return static_cast<fu_STR&&>(str);
}

fu_STR lower_FZjKqN6X(/*MOV*/ fu_STR&& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'A') && (c <= 'Z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('a')) - int(fu::u8('A')))));

    };
    return static_cast<fu_STR&&>(str);
}

char upper_3zvN02ND(const char c)
{
    return (((c >= 'a') && (c <= 'z')) ? char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a'))))) : char(c));
}

char lower_3zvN02ND(const char c)
{
    return (((c >= 'A') && (c <= 'Z')) ? char((int(fu::u8(c)) + (int(fu::u8('a')) - int(fu::u8('A'))))) : char(c));
}

#endif
