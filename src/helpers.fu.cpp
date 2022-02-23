
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
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

fu_STR path_ext_85KQkyE0(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const char c = path[i];
        if (c == '.')
            return fu::slice(path, i);

        if (c == '/')
            break;

    };
    return fu_STR{};
}

fu_STR path_noext_85KQkyE0(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const char c = path[i];
        if (c == '.')
            return fu::slice(path, 0, i);

        if (c == '/')
            break;

    };
    return fu_STR{};
}

fu_STR path_dirname_85KQkyE0(const fu_STR& path)
{
    for (int i = (path.size() - 1); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, 0, (i + 1));

    };
    return "/"_fu;
}

fu_STR path_filename_85KQkyE0(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        if (path[i] == '/')
            return fu::slice(path, (i + 1));

    };
    return fu_STR(path);
}

                                #ifndef DEFt_split_5otB8BKh
                                #define DEFt_split_5otB8BKh
inline void split_5otB8BKh(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += fu_STR(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += fu_STR(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_5otB8BKh(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEFt_join_hXY7eLHr
                                #define DEFt_join_hXY7eLHr
inline fu_STR join_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

fu_STR path_normalize_85KQkyE0(const fu_STR& p)
{
    fu_VEC<fu_STR> path = split_KclJlPSO(p, "/"_fu);
    for (int i = path.size(); i-- > 0; )
    {
        const fu_STR& part = path[i];
        if ((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1))))
            path.splice(i, 1);

    };
    for (int i_1 = 1; i_1 < path.size(); i_1++)
    {
        if (path[i_1] == ".."_fu)
            path.splice(--i_1, 2);

    };
    return join_hXY7eLHr(path, "/"_fu);
}

fu_STR path_relative_7wphlfxd(fu::view<char> from, const fu_STR& to)
{
    const int min = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; i < min; i++)
    {
        const char a = from[i];
        const char b = to[i];
        if (b != a)
            break;

        if (b == '/')
            same = (i + 1);

    };
    /*MOV*/ fu_STR res {};
    for (int i_1 = same; i_1 < from.size(); i_1++)
    {
        if (from[i_1] == '/')
            res += "../"_fu;

    };
    res += fu::slice(to, same);
    return /*NRVO*/ res;
}

fu_STR path_join_7wphlfxd(fu::view<char> a, const fu_STR& b)
{
    return ((b && (b[0] == '/')) ? path_normalize_85KQkyE0(b) : path_normalize_85KQkyE0(((a + '/') + b)));
}

fu_STR ascii_lower_85KQkyE0(const fu_STR& a)
{
    const int offset = (int(fu::u8('a')) - int(fu::u8('A')));
    /*MOV*/ fu_STR res { a };
    for (int i = 0; i < res.size(); i++)
    {
        const char c = res[i];
        if ((c >= 'A') && (c <= 'Z'))
            res.mutref(i) = char((int(fu::u8(c)) + offset));

    };
    return /*NRVO*/ res;
}

char ascii_upper_8UxcpLHF(const char c)
{
    return (((c >= 'a') && (c <= 'z')) ? char((int(fu::u8(c)) + (int(fu::u8('A')) - int(fu::u8('a'))))) : char(c));
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
