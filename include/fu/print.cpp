#include <stdio.h>

#include "./print.h"

fu_EXPORT void fu::println(fu::view<fu_STR> parts)
{
    for (int i = 0; i < parts.size(); i++)
    {
        const auto& part = parts[i];
        fwrite(part.data(), 1, (size_t) part.size(), stdout);
    }

    putc('\n', stdout);
}
