#include "crash.h"

#include <sstream>
#include <iostream>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <TlHelp32.h>
#include <DbgHelp.h>

#include <signal.h>

namespace Crash {

using namespace std;

namespace {
Handler theHandler;

void writeTrace(ostream& out) {
    CONTEXT context;
    RtlCaptureContext(&context);

    STACKFRAME64 frame; // in/out stackframe
    memset(&frame, 0, sizeof(frame));
    DWORD imageType;
#ifdef _M_IX86
    imageType = IMAGE_FILE_MACHINE_I386;
    frame.AddrPC.Offset = context.Eip;
    frame.AddrPC.Mode = AddrModeFlat;
    frame.AddrFrame.Offset = context.Ebp;
    frame.AddrFrame.Mode = AddrModeFlat;
    frame.AddrStack.Offset = context.Esp;
    frame.AddrStack.Mode = AddrModeFlat;
#elif _M_X64
    imageType = IMAGE_FILE_MACHINE_AMD64;
    frame.AddrPC.Offset = context.Rip;
    frame.AddrPC.Mode = AddrModeFlat;
    frame.AddrFrame.Offset = context.Rsp;
    frame.AddrFrame.Mode = AddrModeFlat;
    frame.AddrStack.Offset = context.Rsp;
    frame.AddrStack.Mode = AddrModeFlat;
#elif _M_IA64
    imageType = IMAGE_FILE_MACHINE_IA64;
    frame.AddrPC.Offset = context.StIIP;
    frame.AddrPC.Mode = AddrModeFlat;
    frame.AddrFrame.Offset = context.IntSp;
    frame.AddrFrame.Mode = AddrModeFlat;
    frame.AddrBStore.Offset = context.RsBSP;
    frame.AddrBStore.Mode = AddrModeFlat;
    frame.AddrStack.Offset = context.IntSp;
    frame.AddrStack.Mode = AddrModeFlat;
#else
#error "Platform not supported!"
#endif
    auto symbol = (IMAGEHLP_SYMBOL64*)malloc(sizeof(IMAGEHLP_SYMBOL64) + 1024);
    symbol->SizeOfStruct = sizeof(IMAGEHLP_SYMBOL64);
    symbol->MaxNameLength = 1024;

    auto process = GetCurrentProcess();
    auto thread = GetCurrentThread();
    while (true) {
        if (!StackWalk64(imageType, process, thread, &frame, &context, nullptr, SymFunctionTableAccess64, SymGetModuleBase64, nullptr)) {
            out << "StackWalk64 error: " << GetLastError() << " @ " << frame.AddrPC.Offset << endl;
            break;
        }

        if (frame.AddrPC.Offset == frame.AddrReturn.Offset) {
            out << "Stack overflow @ " << frame.AddrPC.Offset << endl;
            break;
        }

        IMAGEHLP_LINE64 lineData;
        DWORD lineOffset = 0;
        SymGetLineFromAddr64(process, frame.AddrPC.Offset, &lineOffset, &lineData);
        out << lineData.FileName << '(' << lineData.LineNumber << "): ";

        DWORD64 symOffset = 0;
        if (SymGetSymFromAddr64(process, frame.AddrPC.Offset, &symOffset, symbol)) {
            out << symbol->Name << '\n';
        }
        else {
            out << GetLastError() << " Unkown symbol @ " << frame.AddrPC.Offset << endl;
        }

        if (frame.AddrReturn.Offset == 0) {
            break;
        }
    }

    free(symbol);
}

void sigHandler(int signal) {
    ostringstream sout;
    sout << "Signal: " << signal << '\n';
    writeTrace(sout);
    theHandler(sout.str());
}

}

void registerCrashHandler(Handler handler) {
    theHandler = handler;

    SymInitialize(GetCurrentProcess(), nullptr, TRUE);

    signal(SIGSEGV, sigHandler);
    // signal(SIGABRT, sigHandler);
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
        *p = 10;  /* CRASH here!! */

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

void CrashMeBaby()
{
    cout << func_b() << endl;
}

int main()
{
    Crash::registerCrashHandler(custom_handler);
    //EntryPoint();
    //CrashMeBaby();

    Crash::generateReport();

    return 0;
}

#endif