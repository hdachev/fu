#include <cstdio>

#include "../vendor/crash/crash.cpp"

#ifdef __linux__
#include "../vendor/crash/crash-linux.cpp"
#endif

#ifdef _WIN32
#include "../vendor/crash/crash-windows.cpp"
#endif

#ifdef __APPLE__
#include "../vendor/crash/crash-macos.cpp"
#endif

namespace {

void fu_Crash_handler(std::string s)
{
    printf("%s", s.c_str());
}

int setup()
{
    Crash::registerCrashHandler(fu_Crash_handler);
    return 0;
}

static int NONSENSE = setup();

} // namespace

