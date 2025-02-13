                                #ifdef fu_TESTSUITE
#undef NDEBUG
                                #endif
#include <stdio.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/assert.h>

                                #ifdef fu_TESTSUITE
                                #endif
                                #ifdef fu_TESTSUITE
                                #endif
                                #ifdef fu_TESTSUITE
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_min_DbqN29MT8e3
                                #define DEF_min_DbqN29MT8e3
inline int min_DbqN(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF___b0xD9qRiLyl
                                #define DEF___b0xD9qRiLyl
inline static int _b0xD(const int i)
{
    return i + 1;
}
                                #endif

                                #ifndef DEF_map_ijFdt2I8lB8
                                #define DEF_map_ijFdt2I8lB8
inline fu::vec<int> map_ijFd(fu::view<char> a)
{
    /*MOV*/ fu::vec<int> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _b0xD(i);

    return /*NRVO*/ res;
}
                                #endif

static int levenshtein_NM_LcwU(fu::view<char> a, fu::view<char> b)
{
    if (!a.size())
        return b.size();
    else if (!b.size())
        return a.size();
    else
    {
        fu::vec<int> cache = map_ijFd(a);
        int result = 0;
        for (int ib = 0; ib < b.size(); ib++)
        {
            const char code = b[ib];
            int d0 = ib;
            result = d0;
            for (int ia = 0; ia < a.size(); ia++)
            {
                const int d1 = ((code == a[ia]) ? d0 : (d0 + 1));
                d0 = cache[ia];
                result = min_DbqN(min_DbqN((result + 1), (d0 + 1)), d1);
                cache.mutref(ia) = int(result);
            };
        };
        return result;
    };
}

int levenshtein_LcwU(fu::view<char> a, fu::view<char> b)
{
    int prefix = 0;
    const int N = min_DbqN(a.size(), b.size());
    for (; prefix < N; prefix++)
    {
        if (a[prefix] != b[prefix])
            break;

    };
    fu::view<char> a_1 = fu::get_view(a, prefix);
    fu::view<char> b_1 = fu::get_view(b, prefix);
    int a_suffix = a_1.size();
    int b_suffix = b_1.size();
    for (; a_suffix && b_suffix; (a_suffix--, b_suffix--))
    {
        if (a_1[(a_suffix - 1)] != b_1[(b_suffix - 1)])
            break;

    };
    fu::view<char> a_2 = fu::get_view_start0(a_1, a_suffix);
    fu::view<char> b_2 = fu::get_view_start0(b_1, b_suffix);
    return levenshtein_NM_LcwU(a_2, b_2);
}
                                #ifdef fu_TESTSUITE

void basics_LcwU()
{
    fu_ASSERT((levenshtein_LcwU("kitten"_view, "sitten"_view) == 1));
    fu_ASSERT((levenshtein_LcwU("kitten"_view, fu::view<char>{}) == 6));
    fu_ASSERT((levenshtein_LcwU(fu::view<char>{}, "world"_view) == 5));
    fu_ASSERT((levenshtein_LcwU(fu::view<char>{}, fu::view<char>{}) == 0));
    fu_ASSERT((levenshtein_LcwU("hello world"_view, "hello, world!"_view) == 2));
    fu_ASSERT((levenshtein_LcwU("hello world"_view, "Hello, World!"_view) == 4));
}
                                #endif

#endif

                                #ifdef fu_TESTSUITE
int main()
{
    puts("   TEST basics ...");
    basics_LcwU();
    puts("    ... basics OK\n");

    return 0;
}
                                #endif
