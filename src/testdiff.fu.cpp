
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_TestDiffs;

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
{
    fu_VEC<fu_STR> keys;
    fu_VEC<fu_STR> vals;
    s_TestDiffs(const s_TestDiffs&) = delete;
    s_TestDiffs(s_TestDiffs&&) = default;
    s_TestDiffs& operator=(const s_TestDiffs&) = delete;
    s_TestDiffs& operator=(s_TestDiffs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

fu_STR serialize(const s_TestDiffs& diffs)
{
    fu_STR res {};
    fu::view<fu_STR> keys_1 = diffs.keys;
    fu::view<fu_STR> vals = diffs.vals;
    for (int i = 0; i < keys_1.size(); i++)
        res += (((keys_1[i] + "\n-----\n"_fu) + vals[i]) + "\n-----\n"_fu);

    return res;
}

void set_next(s_TestDiffs& diffs, const fu_STR& key, const fu_STR& val)
{
    diffs.keys += key;
    diffs.vals += val;
}

#endif
