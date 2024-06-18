#include <fu/str.h>
#include <fu/vec.h>


#ifndef fu_NO_fdefs

fu::str bytes_QxwW(const unsigned unicode)
{
    if ((unicode <= 0x7fu))
    {
        return fu::vec<char> {{ char(unicode) }};
    }
    else if ((unicode <= 0x07ffu))
    {
        return fu::vec<char> {{ char((((unicode >> 6u) & 0x1fu) | 0xc0u)), char((((unicode >> 0u) & 0x3fu) | 0x80u)) }};
    }
    else if ((unicode <= 0xffffu))
    {
        return fu::vec<char> {{ char((((unicode >> 12u) & 0x0fu) | 0xe0u)), char((((unicode >> 6u) & 0x3fu) | 0x80u)), char((((unicode >> 0u) & 0x3fu) | 0x80u)) }};
    }
    else if ((unicode <= 0x10ffffu))
    {
        return fu::vec<char> {{ char((((unicode >> 18u) & 0x07u) | 0xf0u)), char((((unicode >> 12u) & 0x3fu) | 0x80u)), char((((unicode >> 6u) & 0x3fu) | 0x80u)), char((((unicode >> 0u) & 0x3fu) | 0x80u)) }};
    }
    else
    {
        return fu::str{};
    };
}

#endif
