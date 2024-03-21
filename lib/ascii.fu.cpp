#include <fu/int.h>
#include <fu/str.h>


#ifndef fu_NO_fdefs

fu::str upper_KPhi(/*MOV*/ fu::str&& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'a') && (c <= 'z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a')))));

    };
    return str.destructive_move();
}

fu::str lower_KPhi(/*MOV*/ fu::str&& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'A') && (c <= 'Z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('a')) - int(fu::u8('A')))));

    };
    return str.destructive_move();
}

char upper_KWQn(const char c)
{
    if ((c >= 'a') && (c <= 'z'))
        return char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a')))));
    else
        return c;

}

char lower_KWQn(const char c)
{
    if ((c >= 'A') && (c <= 'Z'))
        return char((int(fu::u8(c)) + (int(fu::u8('a')) - int(fu::u8('A')))));
    else
        return c;

}

#endif
