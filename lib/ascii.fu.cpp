#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

void to_upper_KPhiKsnb(fu::view_mut<char> str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'a') && (c <= 'z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a')))));

    };
}

void to_lower_KPhiKsnb(fu::view_mut<char> str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'A') && (c <= 'Z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('a')) - int(fu::u8('A')))));

    };
}

fu::str upper_KPhiKsnb(/*MOV*/ fu::str&& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'a') && (c <= 'z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a')))));

    };
    return static_cast<fu::str&&>(str);
}

fu::str lower_KPhiKsnb(/*MOV*/ fu::str&& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if ((c >= 'A') && (c <= 'Z'))
            str.mutref(i) = char((int(fu::u8(c)) + (int(fu::u8('a')) - int(fu::u8('A')))));

    };
    return static_cast<fu::str&&>(str);
}

char upper_KWQnGaxV(const char c)
{
    if ((c >= 'a') && (c <= 'z'))
        return char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a')))));
    else
        return c;

}

char lower_KWQnGaxV(const char c)
{
    if ((c >= 'A') && (c <= 'Z'))
        return char((int(fu::u8(c)) + (int(fu::u8('a')) - int(fu::u8('A')))));
    else
        return c;

}

#endif
