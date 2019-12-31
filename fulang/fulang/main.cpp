// #define ISOLATE_FAILING_TESTCASE

#ifdef ISOLATE_FAILING_TESTCASE
#include "../../build.cpp/failing-testcase.cpp"
#endif

#ifndef ISOLATE_FAILING_TESTCASE

#define main auto_main
#include "../../src/hello.fu.cpp"
#include "../../src/helpers.fu.cpp"

#include "../../src/lexer.fu.cpp"
#include "../../src/parser.fu.cpp"
#include "../../src/types.fu.cpp"
#include "../../src/solver.fu.cpp"
#include "../../src/codegen.fu.cpp"
#include "../../src/prelude.fu.cpp"
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
