#include <cstdint>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

fu::str get_O2Lh(fu::str&&);
int64_t size_VWJw(fu::str&&);
fu::str executable_5u3x();
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);

                                #ifndef STR_fDUHOAvuy0b
                                #define STR_fDUHOAvuy0b
static const fu::str str_fDUHOAvuy0b fu_INIT_PRIORITY(1003) { "fu"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_starts_SfbfOAVfSee
                                #define DEF_starts_SfbfOAVfSee
inline bool starts_Sfbf(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_if_last_0CThtiA13q7
                                #define DEF_if_last_0CThtiA13q7
inline char if_last_0CTh(fu::view<char> a)
{
    if (a.size())
        return a[(a.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str slash_Ff6y(fu::vec_range<char> a)
{
    if (if_last_0CTh(a) == '/')
        return fu::str(a);
    else
        return a + '/';

}

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static void consider_Ff6y(fu::view<char> topic, /*MOV*/ fu::str&& dir, const bool failOK, fu::vec_range_mut<char> FU_ROOT)
{
    if (starts_Sfbf(dir, '/'))
    {
        dir = slash_Ff6y(dir);
        fu::str compiler_fu = (dir + "src/compiler.fu"_view);
        const int64_t fs = size_VWJw(fu::str(compiler_fu));
        if (fs > 1000ll)
            FU_ROOT = dir.destructive_move();
        else if (!failOK)
            fu::fail((x7E_rA00((((topic + "file("_view) + compiler_fu) + ") size("_view), fu::i64dec(fs)) + ") !> 1000"_view));

    }
    else
        fu::fail((((topic + "candidate("_view) + dir) + "), no leading slash, does not look like an absolute path."_view));

}

                                #ifndef DEF_find_ZKsG2FXrtpg
                                #define DEF_find_ZKsG2FXrtpg
inline int find_ZKsG(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_find_7SLcWgAQSl4
                                #define DEF_find_7SLcWgAQSl4
inline int find_7SLc(fu::view<char> haystack, fu::view<char> needle)
{
    if ((haystack.size() < needle.size()) || (needle.size() <= 0))
    {
        if (needle.size())
            return -1;
        else
            return 0;

    }
    else if (needle.size() == 1)
        return find_ZKsG(haystack, needle[0]);
    else
    {
        const int needle_len_m1 = (needle.size() - 1);
        const char needle_last_char = needle[needle_len_m1];
        int skip = 0;
        for (int i = needle_len_m1; i < haystack.size(); )
        {
            while (haystack[i] != needle_last_char)
            {
                if (++i == haystack.size())
                    return -1;

            };
            for (int j = 0; ; )
            {
                if (haystack[((i - needle_len_m1) + j)] != needle[j])
                {
                    if (!skip)
                    {
                        skip = needle.size();
                        for (int j_1 = needle_len_m1; j_1-- > 0; )
                        {
                            if (needle[j_1] == needle_last_char)
                            {
                                skip = (needle_len_m1 - j_1);
                                break;
                            };
                        };
                    };
                    i += skip;
                    break;
                }
                else if (++j == needle_len_m1)
                    return i - needle_len_m1;

            };
        };
        return -1;
    };
}
                                #endif

                                #ifndef DEF_find_BNNwXhPzgU8
                                #define DEF_find_BNNwXhPzgU8
inline int find_BNNw(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_7SLc(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

static const fu::str HOME fu_INIT_PRIORITY(1003) = slash_Ff6y(get_O2Lh(fu::str("HOME"_fu)));

static fu::str get_FU_ROOT_Ff6y()
{
    /*MOV*/ fu::str FU_ROOT = get_O2Lh(fu::str("FU_ROOT"_fu));
    fu::str env_var {};
    if ((env_var = get_O2Lh(fu::str("FU_ROOT"_fu))))
        consider_Ff6y("Bad $FU_ROOT: "_view, env_var.destructive_move(), false, FU_ROOT);

    if (!FU_ROOT)
    {
        /*MOV*/ fu::str exe = executable_5u3x();
        int start = -1;
        for (; ; )
        {
            const int match = find_BNNw(exe, "/bin/"_view, (start + 1));
            if (match < 0)
                break;
            else
                start = match;

        };
        if (start > 0)
            consider_Ff6y("fs::executable: "_view, fu::get_range(exe, 0, (start + 1)).const_cast_mut().destructive_move(), true, FU_ROOT);

        if (!FU_ROOT)
            consider_Ff6y("$HOME/fu: "_view, join_qZI0(HOME, str_fDUHOAvuy0b), false, FU_ROOT);

    };
    return /*NRVO*/ FU_ROOT;
}

extern const fu::str FU_ROOT fu_INIT_PRIORITY(1003) = get_FU_ROOT_Ff6y();
extern const fu::str FU_BIN fu_INIT_PRIORITY(1003) = (FU_ROOT + "bin/"_view);
extern const fu::str FU_INCLUDE fu_INIT_PRIORITY(1003) = (FU_ROOT + "include/"_view);
extern const fu::str DEFAULT_WORKSPACE fu_INIT_PRIORITY(1003) = (HOME + ".fu/cache/"_view);
#endif
