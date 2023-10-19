#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

struct s_TestDiffs;

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
{
    fu::vec<fu::str> keys;
    fu::vec<fu::str> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

fu::str serialize_pma6HIQy(const s_TestDiffs& diffs)
{
    /*MOV*/ fu::str res {};
    fu::view<fu::str> keys = diffs.keys;
    fu::view<fu::str> vals = diffs.vals;
    for (int i = 0; i < keys.size(); i++)
        res += (((keys[i] + "\n-----\n"_fu) + vals[i]) + "\n-----\n"_fu);

    return /*NRVO*/ res;
}

void set_next_lHORuDVk(s_TestDiffs& diffs, const fu::str& key, const fu::str& val)
{
    diffs.keys += fu::str(key);
    diffs.vals += fu::str(val);
}

void append_JNUBnj3w(s_TestDiffs& diffs, const s_TestDiffs& other)
{
    diffs.keys += other.keys;
    diffs.vals += other.vals;
}

#endif
