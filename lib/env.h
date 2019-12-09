#pragma once

#include <cstdlib>

#include "str.h"

namespace fu {

fu_STRLIT env_get(fu_STR name)
{
    name.push('\0');

    const char* value = getenv(name.data());
    return fu_STRLIT { value, (int) strlen(value) };
}

} // namespace
