#include "crash.h"

namespace Crash {

std::string getReport() {
    std::string data;
    generateReport([&data](std::string s) { data = std::move(s); });
    return data;
}

}
