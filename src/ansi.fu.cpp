#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static const fu::str ESC fu_INIT_PRIORITY(1001) = (char(27) + "["_view);

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu::str ansi_e44U(const int a)
{
    return x7E_rA00(ESC, fu::i64dec(a)) + 'm';
}

extern const fu::str RESET fu_INIT_PRIORITY(1001) = ansi_e44U(0);
extern const fu::str DIM fu_INIT_PRIORITY(1001) = ansi_e44U(2);
fu::str ansi_rmEe(const int a, const int b)
{
    return x7E_rA00((x7E_rA00(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + 'm';
}

extern const fu::str BAD fu_INIT_PRIORITY(1001) = ansi_rmEe(31, 1);
fu::str ansi_3xBm(const int a, const int b, const int c)
{
    return x7E_rA00((x7E_rA00((x7E_rA00(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + ';'), fu::i64dec(c)) + 'm';
}

fu::str qBAD_e44U(fu::view<char> id)
{
    return (BAD + (id ? id : "?"_view)) + RESET;
}

static const fu::str cBAD_KW fu_INIT_PRIORITY(1001) = ansi_rmEe(31, 3);

fu::str qBAD_KW_e44U(fu::view<char> id)
{
    return (cBAD_KW + (id ? id : "?"_view)) + RESET;
}

static const fu::str cID fu_INIT_PRIORITY(1001) = ansi_rmEe((60 + 34), 1);

fu::str qID_e44U(fu::view<char> id)
{
    return (cID + (id ? id : "?"_view)) + RESET;
}

static const fu::str cKW fu_INIT_PRIORITY(1001) = ansi_rmEe(35, 3);

fu::str qKW_e44U(fu::view<char> id)
{
    return (cKW + (id ? id : "?"_view)) + RESET;
}

static const fu::str cLT fu_INIT_PRIORITY(1001) = ansi_rmEe(32, 3);

fu::str qLT_e44U(fu::view<char> id)
{
    return (cLT + (id ? id : "?"_view)) + RESET;
}

static const fu::str cQUALS fu_INIT_PRIORITY(1001) = ansi_rmEe(35, 3);

fu::str qQUALS_e44U(fu::view<char> id)
{
    return (cQUALS + (id ? id : "?"_view)) + RESET;
}

static const fu::str cVFACTS fu_INIT_PRIORITY(1001) = ansi_rmEe(35, 3);

fu::str qVFACTS_e44U(fu::view<char> id)
{
    return (cVFACTS + (id ? id : "?"_view)) + RESET;
}

fu::str qDIM_e44U(fu::view<char> str)
{
    return (DIM + str) + RESET;
}

fu::str strip_e44U(fu::view<char> str)
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
