#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static const fu::str ESC fu_INIT_PRIORITY(1001) = (char(27) + "["_fu);

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu::str ansi_fGhFENRP(const int a)
{
    return x7E_gCeFmDFw(ESC, fu::i64dec(a)) + 'm';
}

fu::str ansi_3SUko5fX(const int a, const int b)
{
    return x7E_gCeFmDFw((x7E_gCeFmDFw(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + 'm';
}

fu::str ansi_94ITVFhH(const int a, const int b, const int c)
{
    return x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + ';'), fu::i64dec(c)) + 'm';
}

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu::str RESET fu_INIT_PRIORITY(1001) = ansi_fGhFENRP(0);
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu::str DIM fu_INIT_PRIORITY(1001) = ansi_fGhFENRP(2);
                                #endif

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu::str BAD fu_INIT_PRIORITY(1001) = ansi_3SUko5fX(31, 1);
                                #endif

fu::str qBAD_3PsDzMvu(const fu::str& id)
{
    return (BAD + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cID fu_INIT_PRIORITY(1001) = ansi_3SUko5fX(34, 1);

fu::str qID_3PsDzMvu(const fu::str& id)
{
    return (cID + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cKW fu_INIT_PRIORITY(1001) = ansi_3SUko5fX(35, 1);

fu::str qKW_3PsDzMvu(const fu::str& id)
{
    return (cKW + (id ? fu::str(id) : "?"_fu)) + RESET;
}

static const fu::str cLT fu_INIT_PRIORITY(1001) = ansi_3SUko5fX(32, 1);

fu::str qLT_3PsDzMvu(const fu::str& id)
{
    return (cLT + (id ? fu::str(id) : "?"_fu)) + RESET;
}

fu::str qCODE_3PsDzMvu(const fu::str& id)
{
    return qID_3PsDzMvu(id);
}

fu::str strip_MUF5RZQ8(fu::view<char> str)
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
