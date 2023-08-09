#include <fu/int.h>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

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

#ifndef fu_NO_fdefs

bool hasIdentifierChars_j1t51HgV(fu::view<char> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const char c = id[i];
        if ((c == '_') || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')))
            return true;

    };
    return false;
}

bool hasNonIdentifierChars_j1t51HgV(fu::view<char> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const char c = id[i];
        if (!((c == '_') || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9'))))
            return true;

    };
    return false;
}

unsigned parse10u32_Uqhjg5wd(int& offset, fu::view<char> str)
{
    unsigned result {};
    while (offset < str.size())
    {
        const char c = str[offset];
        if ((c < '0') || (c > '9'))
            break;
        else
        {
            offset++;
            result = ((result * 10u) + (unsigned(fu::u8(c)) - unsigned(fu::u8('0'))));
        };
    };
    return result;
}

int parse10s32_Uqhjg5wd(int& offset, fu::view<char> str)
{
    if ((offset >= str.size()))
        return 0;
    else
    {
        const int mul = ((str[offset] == '-') ? (offset++, -1) : +1);
        return int(parse10u32_Uqhjg5wd(offset, str)) * mul;
    };
}

s_Mi parseMi_Uqhjg5wd(int& offset, fu::view<char> str)
{
    if ((offset >= str.size()))
    {
        return s_Mi{};
    }
    else
    {
        int modid = 0;
        int index = 0;
        fu::view<char> _0 {};
        char c = (_0 = str, static_cast<fu::view<char>&&>(_0)[offset++]);

        { {
            if ((c >= 'G') && (c <= 'V'))
            {
                fu_DEFER(modid *= -1);
                modid = (int(fu::u8(c)) - int(fu::u8('G')));
                int shift = 4;
                for (; ; )
                {
                    if (offset == str.size())
                        goto BL_3;
                    else
                    {
                        fu::view<char> _1 {};
                        c = (_1 = str, static_cast<fu::view<char>&&>(_1)[offset++]);
                        if ((c < 'G') || (c > 'V'))
                            break;
                        else
                        {
                            modid |= ((int(fu::u8(c)) - int(fu::u8('G'))) << shift);
                            shift += 4;
                        };
                    };
                };
            }
            else if ((c >= 'g') && (c <= 'v'))
            {
                modid = (int(fu::u8(c)) - int(fu::u8('g')));
                int shift = 4;
                for (; ; )
                {
                    if (offset == str.size())
                        goto BL_3;
                    else
                    {
                        fu::view<char> _2 {};
                        c = (_2 = str, static_cast<fu::view<char>&&>(_2)[offset++]);
                        if ((c < 'g') || (c > 'v'))
                            break;
                        else
                        {
                            modid |= ((int(fu::u8(c)) - int(fu::u8('g'))) << shift);
                            shift += 4;
                        };
                    };
                };
            };
            if (((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'f')))
            {
                index = ((c >= 'a') ? ((int(fu::u8(c)) - int(fu::u8('a'))) + 10) : (int(fu::u8(c)) - int(fu::u8('0'))));
                int shift = 4;
                for (; ; )
                {
                    if (offset == str.size())
                        goto BL_3;
                    else
                    {
                        fu::view<char> _3 {};
                        c = (_3 = str, static_cast<fu::view<char>&&>(_3)[offset++]);
                        if ((c >= '0') && (c <= '9'))
                        {
                            index |= ((int(fu::u8(c)) - int(fu::u8('0'))) << shift);
                        }
                        else if ((c >= 'a') && (c <= 'f'))
                        {
                            index |= (((int(fu::u8(c)) - int(fu::u8('a'))) + 10) << shift);
                        }
                        else
                            break;

                        shift += 4;
                    };
                };
            };
            offset--;
          } BL_3:;
        };
        return s_Mi { modid, index };
    };
}

void appendMi_Pd5VM6Hx(fu::str& str, int modid, int index)
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

unsigned parse09AV_Uqhjg5wd(int& offset, fu::view<char> str)
{
    unsigned shift {};
    unsigned result {};
    while (offset < str.size())
    {
        const char c = str[offset];
        fu::never BL_3_v {};
        const unsigned v = (((c >= '0') && (c <= '9')) ? (unsigned(fu::u8(c)) - unsigned(fu::u8('0'))) : (((c >= 'A') && (c <= 'V')) ? ((unsigned(fu::u8(c)) - unsigned(fu::u8('A'))) + 10u) : (__extension__ (
        {
            break;
        (void)0;}), static_cast<fu::never&&>(BL_3_v))));
        result |= (v << shift);
        shift += 5u;
        offset++;
    };
    return result;
}

void append09AV_PSduX30A(fu::str& str, unsigned v)
{
    do
    {
        const unsigned c = (v & 31u);
        v >>= 5u;
        str += ((c >= 10u) ? char(((c - 10u) + unsigned(fu::u8('A')))) : char((c + unsigned(fu::u8('0')))));
    }
    while (v);
}

                                #ifndef DEF_join_9dTc0Ds4535
                                #define DEF_join_9dTc0Ds4535
inline fu::str join_9dTc0Ds4(fu::view<fu::str> a, fu::view<char> sep)
{
    if (a.size() < 2)
    {
        if (a.size())
            return fu::str(a[0]);
        else
        {
            return fu::str{};
        };
    }
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::str res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

fu::str str_XVTTt9iy(fu::view<fu::str> arr)
{
    if (arr)
        return ("[ \""_fu + join_9dTc0Ds4(arr, "\", \""_fu)) + "\" ]"_fu;
    else
        return "[]"_fu;

}

fu::str trim_UiSEgboz(const fu::str& str)
{
    for (int first = 0; first < str.size(); first++)
    {
        if (str[first] > ' ')
        {
            for (int last = str.size(); (last-- >= first); )
            {
                if (str[last] > ' ')
                    return fu::slice(str, first, (last + 1));

            };
        };
    };
    return fu::str{};
}

#endif
