#include <cstddef>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>

fu_STR ansi(int, int);
fu_STR ansi(int, int, int);

#ifndef FU_NO_FDEFs

static const fu_STR ESC = (std::byte(27) + "["_fu);

fu_STR ansi(const int a)
{
    return (ESC + a) + std::byte('m');
}

fu_STR ansi(const int a, const int b)
{
    return (((ESC + a) + std::byte(';')) + b) + std::byte('m');
}

fu_STR ansi(const int a, const int b, const int c)
{
    return (((((ESC + a) + std::byte(';')) + b) + std::byte(';')) + c) + std::byte('m');
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
