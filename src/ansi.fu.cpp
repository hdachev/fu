#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static const fu::str ESC fu_INIT_PRIORITY(1001) = (char(27) + "["_fu);

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu::str ansi_e44UlzzA(const int a)
{
    return x7E_3lDd4lqo(ESC, fu::i64dec(a)) + 'm';
}

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu::str RESET fu_INIT_PRIORITY(1001) = ansi_e44UlzzA(0);
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu::str DIM fu_INIT_PRIORITY(1001) = ansi_e44UlzzA(2);
                                #endif

fu::str ansi_rmEeZFxu(const int a, const int b)
{
    return x7E_3lDd4lqo((x7E_3lDd4lqo(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + 'm';
}

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu::str BAD fu_INIT_PRIORITY(1001) = ansi_rmEeZFxu(31, 1);
                                #endif

fu::str ansi_3xBmKJbv(const int a, const int b, const int c)
{
    return x7E_3lDd4lqo((x7E_3lDd4lqo((x7E_3lDd4lqo(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + ';'), fu::i64dec(c)) + 'm';
}

fu::str qBAD_e44UlzzA(const fu::str& id)
{
    return (BAD + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cBAD_KW fu_INIT_PRIORITY(1001) = ansi_rmEeZFxu(31, 3);

fu::str qBAD_KW_e44UlzzA(const fu::str& id)
{
    return (cBAD_KW + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cID fu_INIT_PRIORITY(1001) = ansi_rmEeZFxu((60 + 34), 1);

fu::str qID_e44UlzzA(const fu::str& id)
{
    return (cID + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cKW fu_INIT_PRIORITY(1001) = ansi_rmEeZFxu(35, 3);

fu::str qKW_e44UlzzA(const fu::str& id)
{
    return (cKW + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cLT fu_INIT_PRIORITY(1001) = ansi_rmEeZFxu(32, 3);

fu::str qLT_e44UlzzA(const fu::str& id)
{
    return (cLT + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cQUALS fu_INIT_PRIORITY(1001) = ansi_rmEeZFxu(35, 3);

fu::str qQUALS_e44UlzzA(const fu::str& id)
{
    return (cQUALS + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cVFACTS fu_INIT_PRIORITY(1001) = ansi_rmEeZFxu(35, 3);

fu::str qVFACTS_e44UlzzA(const fu::str& id)
{
    return (cVFACTS + (id ? fu::str(id) : "?"_fu)) + RESET;
}

fu::str qDIM_e44UlzzA(fu::view<char> str)
{
    return (DIM + str) + RESET;
}

fu::str strip_e44UlzzA(fu::view<char> str)
{
    /*MOV*/ fu::str out = ""_fu;
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
