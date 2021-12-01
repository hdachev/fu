#include <fu/default.h>
#include <fu/int.h>
#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
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

                                #ifndef DEFt_split_VE9q
                                #define DEFt_split_VE9q
inline void split_VE9q(const fu_STR& str_1, fu::view<fu::byte> sep, int, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str_1, sep, last)) >= 0))
        {

            {
                fu_STR substr_1 = fu::slice(str_1, last, next);
                result += substr_1;
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr_1 = fu::slice(str_1, last);
        result += substr_1;
    }
    else
        result += str_1;

}
                                #endif

                                #ifndef DEFt_split_OZkl
                                #define DEFt_split_OZkl
inline fu_VEC<fu_STR> split_OZkl(const fu_STR& str_1, fu::view<fu::byte> sep)
{
    fu_VEC<fu_STR> result {};
    split_VE9q(str_1, sep, 0, result);
    return result;
}
                                #endif

s_TestDiffs parse(const fu_STR& str_1)
{
    fu_VEC<fu_STR> arr = split_OZkl(str_1, "\n-----\n"_fu);
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
