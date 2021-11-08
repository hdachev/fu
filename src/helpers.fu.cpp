#include <cstddef>
#include <cstdint>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/join.h>
#include <fu/vec/slice.h>
#include <fu/vec/split.h>
#include <fu/view.h>

#ifndef FU_NO_FDEFs

bool hasIdentifierChars(fu::view<std::byte> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const std::byte c = id[i];
        if ((c == std::byte('_')) || ((c >= std::byte('a')) && (c <= std::byte('z'))) || ((c >= std::byte('A')) && (c <= std::byte('Z'))) || ((c >= std::byte('0')) && (c <= std::byte('9'))))
            return true;

    };
    return false;
}

fu_STR path_ext(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const std::byte c = path[i];
        if (c == std::byte('.'))
            return fu::slice(path, i);

        if (c == std::byte('/'))
            break;

    };
    return fu_STR{};
}

fu_STR path_noext(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        const std::byte c = path[i];
        if (c == std::byte('.'))
            return fu::slice(path, 0, i);

        if (c == std::byte('/'))
            break;

    };
    return fu_STR{};
}

fu_STR path_dirname(const fu_STR& path)
{
    for (int i = (path.size() - 1); i-- > 0; )
    {
        if (path[i] == std::byte('/'))
            return fu::slice(path, 0, (i + 1));

    };
    return "/"_fu;
}

fu_STR path_filename(const fu_STR& path)
{
    for (int i = path.size(); i-- > 0; )
    {
        if (path[i] == std::byte('/'))
            return fu::slice(path, (i + 1));

    };
    return fu_STR(path);
}

fu_STR path_normalize(const fu_STR& p)
{
    fu_VEC<fu_STR> path = fu::split(p, "/"_fu);
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
    return fu::join(path, "/"_fu);
}

fu_STR path_relative(fu::view<std::byte> from, const fu_STR& to)
{
    const int min_1 = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; i < min_1; i++)
    {
        const std::byte a = from[i];
        const std::byte b = to[i];
        if (b != a)
            break;

        if (b == std::byte('/'))
            same = (i + 1);

    };
    fu_STR res {};
    for (int i_1 = same; i_1 < from.size(); i_1++)
    {
        if (from[i_1] == std::byte('/'))
            res += "../"_fu;

    };
    res += fu::slice(to, same);
    return res;
}

fu_STR path_join(fu::view<std::byte> a, const fu_STR& b)
{
    return ((b && (b[0] == std::byte('/'))) ? path_normalize(b) : path_normalize(((a + std::byte('/')) + b)));
}

fu_STR ascii_lower(const fu_STR& a)
{
    const int offset = (int(std::byte('a')) - int(std::byte('A')));
    fu_STR res { a };
    for (int i = 0; i < res.size(); i++)
    {
        std::byte c = res[i];
        if ((c >= std::byte('A')) && (c <= std::byte('Z')))
            res.mutref(i) = std::byte((int(c) + offset));

    };
    return res;
}

std::byte ascii_upper(const std::byte c)
{
    return (((c >= std::byte('a')) && (c <= std::byte('z'))) ? std::byte((int(c) + (int(std::byte('A')) - int(std::byte('a'))))) : std::byte(c));
}

int parse10i32(int& offset, fu::view<std::byte> str)
{
    int result {};
    while (offset < str.size())
    {
        const std::byte c = str[offset];
        if ((c < std::byte('0')) || (c > std::byte('9')))
            break;

        offset++;
        result = ((result * 10) + (int(c) - int(std::byte('0'))));
    };
    return result;
}

#endif
