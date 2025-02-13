#define TODO_FIX_REMOVE_copying_push

#include <fu/vec.h>
#include <fu/view.h>


#ifndef fu_NO_fdefs

                                #ifndef DEF_min_O25D0jcUwAc
                                #define DEF_min_O25D0jcUwAc
inline int min_O25D0jcU(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF___SemCoBrYJJ1
                                #define DEF___SemCoBrYJJ1
inline static int _SemCoBrY(const int i)
{
    return i + 1;
}
                                #endif

                                #ifndef DEF_map_eRXMnWkkYf4
                                #define DEF_map_eRXMnWkkYf4
inline fu::vec<int> map_eRXMnWkk(fu::view<char> a)
{
    /*MOV*/ fu::vec<int> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _SemCoBrY(i);

    return /*NRVO*/ res;
}
                                #endif

static int levenshtein_NM_LcwU5p3P(fu::view<char> a, fu::view<char> b)
{
    if (!a.size())
        return b.size();
    else if (!b.size())
        return a.size();
    else
    {
        fu::vec<int> cache = map_eRXMnWkk(a);
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
                result = min_O25D0jcU(min_O25D0jcU((result + 1), (d0 + 1)), d1);
                cache.mutref(ia) = result;
            };
        };
        return result;
    };
}

int levenshtein_LcwU5p3P(fu::view<char> a, fu::view<char> b)
{
    int prefix = 0;
    const int N = min_O25D0jcU(a.size(), b.size());
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
    return levenshtein_NM_LcwU5p3P(a_2, b_2);
}

#endif
