#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static const fu::str ESC fu_INIT_PRIORITY(1001) = (char(27) + "["_fu);

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu::str ansi_SJ4TeVuY(const int a)
{
    return x7E_r7bhmB7D(ESC, fu::i64dec(a)) + 'm';
}

fu::str ansi_ThZ5IOos(const int a, const int b)
{
    return x7E_r7bhmB7D((x7E_r7bhmB7D(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + 'm';
}

fu::str ansi_jR54aMxJ(const int a, const int b, const int c)
{
    return x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + ';'), fu::i64dec(c)) + 'm';
}

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu::str RESET fu_INIT_PRIORITY(1001) = ansi_SJ4TeVuY(0);
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu::str DIM fu_INIT_PRIORITY(1001) = ansi_SJ4TeVuY(2);
                                #endif

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu::str BAD fu_INIT_PRIORITY(1001) = ansi_ThZ5IOos(31, 1);
                                #endif

fu::str qBAD_bF2G8fJR(fu::view<char> id)
{
    if (id)
        return (BAD + id) + RESET;
    else
        fu::fail("COMPILER BUG: empty qBAD(id)"_fu);

}

static const fu::str cID fu_INIT_PRIORITY(1001) = ansi_ThZ5IOos(34, 1);

fu::str qID_bF2G8fJR(fu::view<char> id)
{
    if (id)
        return (cID + id) + RESET;
    else
        fu::fail("COMPILER BUG: empty qID(id)"_fu);

}

static const fu::str cKW fu_INIT_PRIORITY(1001) = ansi_ThZ5IOos(35, 1);

fu::str qKW_bF2G8fJR(fu::view<char> id)
{
    if (id)
        return (cKW + id) + RESET;
    else
        fu::fail("COMPILER BUG: empty qKW(id)"_fu);

}

static const fu::str cLT fu_INIT_PRIORITY(1001) = ansi_ThZ5IOos(32, 1);

fu::str qLT_bF2G8fJR(fu::view<char> id)
{
    if (id)
        return (cLT + id) + RESET;
    else
        fu::fail("COMPILER BUG: empty qLT(id)"_fu);

}

fu::str qCODE_bF2G8fJR(fu::view<char> id)
{
    return qID_bF2G8fJR(id);
}

fu::str strip_XUYqGlVW(fu::view<char> str)
{
    /*MOV*/ fu::str out {};
    for (int i = 0; i < (str.size() - 1); i++)
    {
        const char c = str[i];
        if ((c == char(27)) && (str[(i + 1)] == '['))
        {
            i += 2;
            while (i < str.size())
            {
                if (str[i] == 'm')
                    break;
                else
                    i++;

            };
        }
        else
            out += c;

    };
    return /*NRVO*/ out;
}

#endif
