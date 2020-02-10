#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/join.h>
#include <fu/vec/slice.h>
#include <fu/vec/split.h>

fu_STR last(const fu_STR& s)
{
    return (s.size() ? fu_TO_STR(s[(s.size() - 1)]) : fu_STR{});
}

bool hasIdentifierChars(const fu_STR& id)
{
    for (int i = 0; (i < id.size()); i++)
    {
        fu_STR c = fu_TO_STR(id[i]);
        if (((c == "_"_fu) || ((c >= "a"_fu) && (c <= "z"_fu)) || ((c >= "A"_fu) && (c <= "Z"_fu)) || ((c >= "0"_fu) && (c <= "9"_fu))))
            return true;

    };
    return false;
}

fu_STR path_ext(const fu_STR& path)
{
    for (int i = path.size(); (i-- > 0); )
    {
        fu_STR c = fu_TO_STR(path[i]);
        if ((c == "."_fu))
            return fu::slice(path, i);

        if ((c == "/"_fu))
        {
            break;
        };
    };
    return fu_STR{};
}

fu_STR path_dirname(const fu_STR& path)
{
    for (int i = path.size(); (i-- > 0); )
    {
        if ((fu_TO_STR(path[i]) == "/"_fu))
            return fu::slice(path, 0, (i + 1));

    };
    return fu_STR{};
}

fu_STR path_filename(const fu_STR& path)
{
    for (int i = path.size(); (i-- > 0); )
    {
        if ((fu_TO_STR(path[i]) == "/"_fu))
            return fu::slice(path, (i + 1));

    };
    return path;
}

fu_STR path_normalize(const fu_STR& p)
{
    fu_VEC<fu_STR> path = fu::split(p, "/"_fu);
    for (int i = path.size(); (i-- > 0); )
    {
        fu_STR part { path[i] };
        if (((part == "."_fu) || (!part && (i > 0) && (i < (path.size() - 1)))))
            path.splice(i, 1);

    };
    for (int i = 1; (i < path.size()); i++)
    {
        if ((path[i] == ".."_fu))
            path.splice(--i, 2);

    };
    return fu::join(path, "/"_fu);
}

fu_STR path_relative(const fu_STR& from, const fu_STR& to)
{
    const int min = ((from.size() < to.size()) ? from.size() : to.size());
    int same = 0;
    for (int i = 0; (i < min); i++)
    {
        fu_STR a = fu_TO_STR(from[i]);
        fu_STR b = fu_TO_STR(to[i]);
        if ((b != a))
        {
            break;
        };
        if ((b == "/"_fu))
            same = (i + 1);

    };
    fu_STR res {};
    for (int i = same; (i < from.size()); i++)
    {
        if ((fu_TO_STR(from[i]) == "/"_fu))
            res += "../"_fu;

    };
    res += fu::slice(to, same);
    return res;
}

fu_STR path_join(const fu_STR& a, const fu_STR& b)
{
    return ((b && (fu_TO_STR(b[0]) == "/"_fu)) ? path_normalize(b) : path_normalize(((a + "/"_fu) + b)));
}
