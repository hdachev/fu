#include <stdio.h>
#include <errno.h>
#include <unistd.h>

#include <iostream>
#include <string>

#include <time.h>

#include "../../lib/io.h"
#include "../../lib/now.h"
#include "../../lib/env.h"
#include "../../lib/tea.h"
#include "../../lib/shell.h"

#include "../../lib/vec/find.h"
#include "../../lib/vec/replace.h"


// #define ISOLATE_FAILING_TESTCASE

#ifdef ISOLATE_FAILING_TESTCASE
#include "build.cpp/failing-testcase.cpp"
#endif

#ifndef ISOLATE_FAILING_TESTCASE

#define main auto_main
#include "../../src/compiler.fu.cpp"
#undef  main

#include "../../lib/cow_vec_test.h"


// So lets go.

void RUN()
{
    runTestSuite();
    saySomethingNice();
    FU_FILE("compiler.fu"_fu);
}

int main(int argc, const char * argv[])
{
    cow_vec_tests();
    auto_main();
    RUN();
    return 0;
}

#endif
