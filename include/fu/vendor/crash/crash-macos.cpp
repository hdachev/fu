#include "crash.h"
#include <signal.h>
#include <execinfo.h>
#include <unistd.h>
#include <dlfcn.h>
#include <sstream>
#include <iostream>
#include <cstring>

//#define ADDR2LINE "/usr/bin/addr2line"

namespace Crash {

using namespace std;

namespace {
Handler theHandler;

void writeTrace(ostringstream& out) {
    void* trace[128];
    auto traceSize = backtrace(trace, 128);
    char** messages = backtrace_symbols(trace, traceSize);

    out << "Trace:\n";

    for (int i = 0; i<traceSize; ++i) {
        auto msg = messages[i];
        out << msg << '\n';
    }
}

void sigHandler(int signal, siginfo_t* info, void* /*context*/) {
    ostringstream sout;
    sout << "Signal: " << signal;

    if (signal == SIGSEGV) {
        sout << " at addr: " << info->si_addr;
    }
    sout << '\n';

    writeTrace(sout);

    theHandler(sout.str());
}

}

void registerCrashHandler(Handler handler) {
    theHandler = handler;

    struct sigaction sa;
    sa.sa_sigaction = sigHandler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_RESTART | SA_SIGINFO;

    sigaction(SIGSEGV, &sa, nullptr);
    sigaction(SIGABRT, &sa, nullptr);
}

void generateReport(Handler handler) {
    if (!handler) handler = theHandler;

    ostringstream sout;
    writeTrace(sout);

    handler(sout.str());
}

}

#if defined(TEST_CRASH)

class Baba
{
public:
    static int func_a(int a, char b)
    {
        char *p = (char *)0xdeadbeef;

        a = a + b;
        *p = 10;    /* CRASH here!! */

        return 2 * a;
    }
};


int func_b()
{
    int res, a = 5;

    res = 5 + Baba::func_a(a, 't');
    return res;
}

void custom_handler(string s)
{
    cout << "OOOOPS!!!\n" << s;
    exit(1);
}

extern "C"
{
    __attribute__((__visibility__("default")))
        void EntryPoint()
    {
        crash::registerCrashHandler(custom_handler);
    }

    __attribute__((__visibility__("default")))
        void CrashMeBaby()
    {
        cout << func_b() << endl;
    }
}

#if !defined(DLL)
int main()
{
    EntryPoint();
    CrashMeBaby();

    return 0;
}
#endif

#endif
