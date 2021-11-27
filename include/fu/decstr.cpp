#include <fu/decstr.h>

// TODO use decstr.fu instead,
//  currently having issues with importing things from prelude.

fu_STR fu::u64dec(uint64_t num)
{
    fu_STR res;

    do {
        uint64_t d = num % 10;
        num /= 10;
        res.insert(0, fu::byte(d + '0'));
    }
    while (num);

    return res;
}

fu_STR fu::i64dec(int64_t num)
{
    if (num < 0)
    {
        if (num == int64_t(0x8000000000000000))
            return "-9223372036854775808"_fu;

        fu_STR res = fu::u64dec(uint64_t(-num));
        res.insert(0, fu::byte('-'));
        return  res;
    }

    return fu::u64dec(uint64_t(num));
}
