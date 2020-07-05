#pragma once

#include <cstdlib>

#include "./str.h"
#include "./vec/c_str.h"

namespace fu {

inline fu_STRLIT env_get(fu_STR name)
{
    const char* value = getenv(FU_TEMP_CSTR(name));
    return fu_STRLIT { value, (int) strlen(value) };
}

} // namespace
