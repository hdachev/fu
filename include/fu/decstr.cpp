#include <fu/decstr.h>

// TODO use decstr.fu instead,
//  currently having issues with importing things from prelude.

fu::str fu::u64dec(uint64_t num)
{
    fu::str res;

    do {
        uint64_t d = num % 10;
        num /= 10;
        res.insert(0, fu::byte(d + '0'));
    }
    while (num);

    return res;
}

fu::str fu::i64dec(int64_t num)
{
    if (num < 0)
    {
        if (num == int64_t(0x8000000000000000))
            return "-9223372036854775808"_fu;

        fu::str res = fu::u64dec(uint64_t(-num));
        res.insert(0, fu::byte('-'));
        return  res;
    }

    return fu::u64dec(uint64_t(num));
}


// This is really lame but it'll do for starters.

#include <stdio.h>

fu::str fu::f64dec(double num)
{
    char buffer[64];
    int len = snprintf(buffer, 64, "%f", num);

    fu::str res;
    res.UNSAFE__init_copy(
        buffer,
        len > 0 ? len < 64 ? len : 64 : 0);

    return res;
}


// This is for symmetry ... not sure if it should be true/false or 1/0 or what.
//  Needed to pass the `a ~ (smth && SelfRecursiveCall())` test.
//   Stringifying bools feels off, but everyone does it, so I guess it is fine.

fu::str fu::booldec(bool num)
{
    return num ? "1"_fu : "0"_fu;
}
