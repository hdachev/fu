
#include <fu/defer.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_Mi;

                                #ifndef DEF_s_Mi
                                #define DEF_s_Mi
struct s_Mi
{
    int modid;
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || index
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

bool hasIdentifierChars_85KQkyE0(fu::view<char> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const char c = id[i];
        if ((c == '_') || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')))
            return true;

    };
    return false;
}

unsigned parse10u32_t6R8uPsY(int& offset, fu::view<char> str)
{
    /*MOV*/ unsigned result {};
    while (offset < str.size())
    {
        const char c = str[offset];
        if ((c < '0') || (c > '9'))
            break;

        offset++;
        result = ((result * 10u) + (unsigned(fu::u8(c)) - unsigned(fu::u8('0'))));
    };
    return /*NRVO*/ result;
}

int parse10s32_t6R8uPsY(int& offset, fu::view<char> str)
{
    if ((offset >= str.size()))
        return 0;

    const int mul = ((str[offset] == '-') ? ((void)offset++, -1) : +1);
    return int(parse10u32_t6R8uPsY(offset, str)) * mul;
}

s_Mi parseMi_t6R8uPsY(int& offset, fu::view<char> str)
{
    if ((offset >= str.size()))
        return s_Mi{};

    int modid = 0;
    int index = 0;
    char c = str[offset++];

    { {
        if ((c >= 'G') && (c <= 'V'))
        {
            fu_DEFER(modid *= -1);
            modid = (int(fu::u8(c)) - int(fu::u8('G')));
            int shift = 4;
            for (; ; )
            {
                if (offset == str.size())
                    goto BL_2;

                c = str[offset++];
                if ((c < 'G') || (c > 'V'))
                    break;

                modid |= ((int(fu::u8(c)) - int(fu::u8('G'))) << shift);
                shift += 4;
            };
        }
        else if ((c >= 'g') && (c <= 'v'))
        {
            modid = (int(fu::u8(c)) - int(fu::u8('g')));
            int shift = 4;
            for (; ; )
            {
                if (offset == str.size())
                    goto BL_2;

                c = str[offset++];
                if ((c < 'g') || (c > 'v'))
                    break;

                modid |= ((int(fu::u8(c)) - int(fu::u8('g'))) << shift);
                shift += 4;
            };
        };
        if (((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'f')))
        {
            index = ((c >= 'a') ? ((int(fu::u8(c)) - int(fu::u8('a'))) + 10) : (int(fu::u8(c)) - int(fu::u8('0'))));
            int shift = 4;
            for (; ; )
            {
                if (offset == str.size())
                    goto BL_2;

                c = str[offset++];
                if ((c >= '0') && (c <= '9'))
                    index |= ((int(fu::u8(c)) - int(fu::u8('0'))) << shift);
                else if ((c >= 'a') && (c <= 'f'))
                    index |= (((int(fu::u8(c)) - int(fu::u8('a'))) + 10) << shift);
                else
                    break;

                shift += 4;
            };
        };
        offset--;
      } BL_2:;
    };
    return s_Mi { int(modid), int(index) };
}

void appendMi_RIPPDRFZ(fu_STR& str, int modid, int index)
{
    if (modid < 0)
    {
        modid *= -1;
        do
        {
            str += char(((modid & 15) + int(fu::u8('G'))));
            modid >>= 4;
        }
        while (modid);
    }
    else
    {
        do
        {
            str += char(((modid & 15) + int(fu::u8('g'))));
            modid >>= 4;
        }
        while (modid);
    };
    do
    {
        const int c = (index & 15);
        index >>= 4;
        str += ((c >= 10) ? char(((c - 10) + int(fu::u8('a')))) : char((c + int(fu::u8('0')))));
    }
    while (index);
}

#endif
