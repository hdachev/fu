
#include <fu/decstr.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

fu_STR ansi(int, int);
fu_STR ansi(int, int, int);

#ifndef FU_NO_FDEFs

static const fu_STR ESC = (fu::byte(27) + "["_fu);

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

fu_STR ansi(const int a)
{
    return x7E_OZkl(ESC, fu::i64dec(a)) + fu::byte('m');
}

fu_STR ansi(const int a, const int b)
{
    return x7E_OZkl((x7E_OZkl(ESC, fu::i64dec(a)) + fu::byte(';')), fu::i64dec(b)) + fu::byte('m');
}

fu_STR ansi(const int a, const int b, const int c)
{
    return x7E_OZkl((x7E_OZkl((x7E_OZkl(ESC, fu::i64dec(a)) + fu::byte(';')), fu::i64dec(b)) + fu::byte(';')), fu::i64dec(c)) + fu::byte('m');
}

extern const fu_STR RESET = ansi(0);

extern const fu_STR DIM = ansi(2);

extern const fu_STR BAD = ansi(31, 1);

static const fu_STR cID = ansi(34, 1);

static const fu_STR cKW = ansi(35, 1);

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
