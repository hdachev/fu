#include <fu/default.h>
#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/split.h>
#include <fu/view.h>

struct s_TestDiffs;

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
{
    fu_MAP<fu_STR, fu_STR> _current;
    fu_MAP<fu_STR, fu_STR> _next;
    explicit operator bool() const noexcept
    {
        return false
            || _current
            || _next
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_TestDiffs parse(const fu_STR& str)
{
    fu_VEC<fu_STR> arr = fu::split(str, "\n-----\n"_fu);
    s_TestDiffs res {};
    for (int i = 1; i < arr.size(); i += 2)
        (res._current.upsert(arr[(i - 1)]) = fu_STR(arr[i]));

    return res;
}

fu_STR serialize(const s_TestDiffs& diffs)
{
    fu_STR res {};
    fu::view<fu_STR> keys_1 = diffs._next.m_keys;
    fu::view<fu_STR> values_1 = diffs._next.m_values;
    for (int i = 0; i < keys_1.size(); i++)
        res += (((keys_1[i] + "\n-----\n"_fu) + values_1[i]) + "\n-----\n"_fu);

    return res;
}

void set_next(s_TestDiffs& diffs, const fu_STR& key, const fu_STR& actual)
{
    (diffs._next.upsert(key) = fu_STR(actual));
}

const fu_STR& get_current(const s_TestDiffs& diffs, const fu_STR& key)
{
    const fu_STR* _0;
    return *(_0 = &(diffs._current[key])) ? *_0 : (*(const fu_STR*)fu::NIL);
}

#endif
