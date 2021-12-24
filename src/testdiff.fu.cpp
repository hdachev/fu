
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
    /*MOV*/ fu_STR res {};
    fu::view<fu_STR> keys = diffs.keys;
    fu::view<fu_STR> vals = diffs.vals;
    for (int i = 0; i < keys.size(); i++)
        res += (((keys[i] + "\n-----\n"_fu) + vals[i]) + "\n-----\n"_fu);

    return /*NRVO*/ res;
}

void set_next(s_TestDiffs& diffs, const fu_STR& key, const fu_STR& val)
{
    diffs.keys += key;
    diffs.vals += val;
}

#endif
