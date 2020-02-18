#pragma once

#include <cstdlib>

#include "str.h"

namespace fu {

fu_STRLIT env_get(fu_STR name)
{
    name.push(std::byte('\0'));
    auto cname = (const char*)name.data();

    const char* value = getenv(cname);
    return fu_STRLIT { value, (int) strlen(value) };
}

} // namespace
