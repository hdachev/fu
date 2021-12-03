#pragma once

#include <cstdint>

#include "./inl.h"

namespace fu {

constexpr int FS_MAX_PATH       =  4 * 1024;
constexpr int FREAD_BUFFER_SIZE = 16 * 1024;
constexpr int ARC_MIN_ALLOC     = 128;

} // namespace
