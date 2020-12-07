#pragma once

#include <functional>
#include <string>

namespace Crash {

typedef std::function<void(std::string)> Handler;

void registerCrashHandler(Handler handler);

void generateReport(Handler handler = Handler());

std::string getReport();

}
