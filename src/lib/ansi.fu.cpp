#include <fu/str.h>
#include <fu/view.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

static const fu_STR ESC fu_INIT_PRIORITY(1001) = (char(27) + "["_fu);

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR ansi_YXfqSvWX(const int a)
{
    return x7E_sTZRmMq1(ESC, fu::i64dec(a)) + 'm';
}

fu_STR ansi_nqJIqckH(const int a, const int b)
{
    return x7E_sTZRmMq1((x7E_sTZRmMq1(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + 'm';
}

fu_STR ansi_gpxzAkIc(const int a, const int b, const int c)
{
    return x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1(ESC, fu::i64dec(a)) + ';'), fu::i64dec(b)) + ';'), fu::i64dec(c)) + 'm';
}

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu_STR RESET fu_INIT_PRIORITY(1001) = ansi_YXfqSvWX(0);
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu_STR DIM fu_INIT_PRIORITY(1001) = ansi_YXfqSvWX(2);
                                #endif

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu_STR BAD fu_INIT_PRIORITY(1001) = ansi_nqJIqckH(31, 1);
                                #endif

fu_STR qBAD_9QQZAztz(const fu_STR& id)
{
    return (BAD + (id ? fu_STR(id) : "``"_fu)) + RESET;
}

static const fu_STR cID fu_INIT_PRIORITY(1001) = ansi_nqJIqckH(34, 1);

fu_STR qID_9QQZAztz(const fu_STR& id)
{
    return (cID + (id ? fu_STR(id) : "``"_fu)) + RESET;
}

static const fu_STR cKW fu_INIT_PRIORITY(1001) = ansi_nqJIqckH(35, 1);

fu_STR qKW_9QQZAztz(const fu_STR& id)
{
    return (cKW + (id ? fu_STR(id) : "``"_fu)) + RESET;
}

static const fu_STR cLT fu_INIT_PRIORITY(1001) = ansi_nqJIqckH(32, 1);

fu_STR qLT_9QQZAztz(const fu_STR& id)
{
    return (cLT + (id ? fu_STR(id) : "``"_fu)) + RESET;
}

fu_STR qCODE_9QQZAztz(const fu_STR& id)
{
    return qID_9QQZAztz(id);
}

#endif
