#pragma once

namespace fu {

#ifndef NDEBUG
constexpr bool DEBUG = true;
#else
constexpr bool DEBUG = false;
#endif

#ifdef __linux__
constexpr bool LINUX = true;
#else
constexpr bool LINUX = false;
#endif

#ifdef _WIN32
constexpr bool WINDOWS = true;
#else
constexpr bool WINDOWS = false;
#endif

#ifdef __APPLE__
constexpr bool APPLE = true;
#else
constexpr bool APPLE = false;
#endif

} // namespace
