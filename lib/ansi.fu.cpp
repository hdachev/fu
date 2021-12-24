
#include <fu/decstr.h>
#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

fu_STR ansi(int, int);
fu_STR ansi(int, int, int);

#ifndef FU_NO_FDEFs

static const fu_STR ESC fu_INIT_PRIORITY(1001) = (char(27) + "["_fu);

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR ansi(const int a)
{
    return x7E_OZkl(ESC, fu::i64dec(a)) + 'm';
}

fu_STR ansi(const int a, const int b)
{
    return x7E_OZkl((x7E_OZkl(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + 'm';
}

fu_STR ansi(const int a, const int b, const int c)
{
    return x7E_OZkl((x7E_OZkl((x7E_OZkl(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + ';'), fu::i64dec(c)) + 'm';
}

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu_STR RESET fu_INIT_PRIORITY(1001) = ansi(0);
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu_STR DIM fu_INIT_PRIORITY(1001) = ansi(2);
                                #endif

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu_STR BAD fu_INIT_PRIORITY(1001) = ansi(31, 1);
                                #endif

static const fu_STR cID fu_INIT_PRIORITY(1001) = ansi(34, 1);

static const fu_STR cKW fu_INIT_PRIORITY(1001) = ansi(35, 1);

fu_STR qBAD(const fu_STR& id)
{
    return (BAD + (id ? fu_STR(id) : "``"_fu)) + RESET;
}

fu_STR qID(const fu_STR& id)
{
    return (cID + (id ? fu_STR(id) : "``"_fu)) + RESET;
}

fu_STR qKW(const fu_STR& id)
{
    return (cKW + (id ? fu_STR(id) : "``"_fu)) + RESET;
}

#endif
