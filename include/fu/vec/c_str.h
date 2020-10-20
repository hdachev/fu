#pragma once

#include "./concat_one.h"

#define FU_TEMP_CSTR(str) reinterpret_cast<const char*>((str + std::byte('\0')).data())
