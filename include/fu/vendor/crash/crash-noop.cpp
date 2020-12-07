#include "crash.h"

namespace Crash {

namespace {
Handler theHandler;
}

void registerCrashHandler(Handler handler) {
    theHandler = handler;
}

void generateReport(Handler handler) {
    if (!handler) handler = theHandler;

    handler("Crash report not available for this platform.");
}

}
