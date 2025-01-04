#include <cstdint>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/LEGACY_slice.h>

fu::str get_O2LhwJOy(fu::str&&);
int64_t size_VWJwj7Fs(fu::str&&);
fu::str executable_5u3xiGA0();
fu::str join_qZI0kCzt(fu::view<char>, const fu::str&);

#ifndef fu_NO_fdefs

                                #ifndef DEF_starts_8EDTwZj1Fm2
                                #define DEF_starts_8EDTwZj1Fm2
inline bool starts_8EDTwZj1(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_if_last_fWHNFvAM0jc
                                #define DEF_if_last_fWHNFvAM0jc
inline char if_last_fWHNFvAM(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str slash_Ff6yHO4Q(const fu::str& a)
{
    if (if_last_fWHNFvAM(a) == '/')
        return fu::str(a);
    else
        return a + '/';

}

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static void consider_Ff6yHO4Q(fu::view<char> topic, /*MOV*/ fu::str&& dir, const bool failOK, fu::str& FU_ROOT)
{
    if (starts_8EDTwZj1(dir, '/'))
    {
        dir = slash_Ff6yHO4Q(dir);
        fu::str compiler_fu = (dir + "src/compiler.fu"_fu);
        const int64_t fs = size_VWJwj7Fs(fu::str(compiler_fu));
        if (fs > 1000ll)
            FU_ROOT = static_cast<fu::str&&>(dir);
        else if (!failOK)
            fu::fail((x7E_3lDd4lqo((((topic + "file("_fu) + compiler_fu) + ") size("_fu), fu::i64dec(fs)) + ") !> 1000"_fu));

    }
    else
        fu::fail((((topic + "candidate("_fu) + dir) + "), no leading slash, does not look like an absolute path."_fu));

}

                                #ifndef DEF_find_yP7FbxFZnZ0
                                #define DEF_find_yP7FbxFZnZ0
inline int find_yP7FbxFZ(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_find_5WUbOXwWxRb
                                #define DEF_find_5WUbOXwWxRb
inline int find_5WUbOXwW(fu::view<char> haystack, fu::view<char> needle)
{
    if ((haystack.size() < needle.size()) || (needle.size() <= 0))
    {
        if (needle.size())
            return -1;
        else
            return 0;

    }
    else if (needle.size() == 1)
        return find_yP7FbxFZ(haystack, needle[0]);
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

                                #ifndef DEF_find_2C20a41o6u3
                                #define DEF_find_2C20a41o6u3
inline int find_2C20a41o(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_5WUbOXwW(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

static const fu::str HOME fu_INIT_PRIORITY(1003) = slash_Ff6yHO4Q(get_O2LhwJOy("HOME"_fu));

static fu::str get_FU_ROOT_Ff6yHO4Q()
{
    /*MOV*/ fu::str FU_ROOT = get_O2LhwJOy("FU_ROOT"_fu);
    if (/*MOV*/ fu::str env_var = get_O2LhwJOy("FU_ROOT"_fu))
        consider_Ff6yHO4Q("Bad $FU_ROOT: "_fu, static_cast<fu::str&&>(env_var), false, FU_ROOT);

    if (!FU_ROOT)
    {
        fu::str exe = executable_5u3xiGA0();
        int start = -1;
        for (; ; )
        {
            const int match = find_2C20a41o(exe, "/bin/"_fu, (start + 1));
            if (match < 0)
                break;
            else
                start = match;

        };
        if (start > 0)
            consider_Ff6yHO4Q("fs::executable: "_fu, fu::slice(exe, 0, (start + 1)), true, FU_ROOT);

        if (!FU_ROOT)
            consider_Ff6yHO4Q("$HOME/fu: "_fu, join_qZI0kCzt(HOME, "fu"_fu), false, FU_ROOT);

    };
    return /*NRVO*/ FU_ROOT;
}

                                #ifndef DEF_FU_ROOT
                                #define DEF_FU_ROOT
extern const fu::str FU_ROOT fu_INIT_PRIORITY(1003) = get_FU_ROOT_Ff6yHO4Q();
                                #endif

                                #ifndef DEF_FU_BIN
                                #define DEF_FU_BIN
extern const fu::str FU_BIN fu_INIT_PRIORITY(1003) = (FU_ROOT + "bin/"_fu);
                                #endif

                                #ifndef DEF_FU_INCLUDE
                                #define DEF_FU_INCLUDE
extern const fu::str FU_INCLUDE fu_INIT_PRIORITY(1003) = (FU_ROOT + "include/"_fu);
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu::str DEFAULT_WORKSPACE fu_INIT_PRIORITY(1003) = (HOME + ".fu/cache/"_fu);
                                #endif

#endif
