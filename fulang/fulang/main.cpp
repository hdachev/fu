// #define ISOLATE_FAILING_TESTCASE

#ifdef ISOLATE_FAILING_TESTCASE
#include "../../build.cpp/failing-testcase.cpp"
#endif

#ifndef ISOLATE_FAILING_TESTCASE

#include "../../src/hello.fu.cpp"
#include "../../src/helpers.fu.cpp"

#include "../../src/lexer.fu.cpp"
#include "../../src/parser.fu.cpp"
#include "../../src/types.fu.cpp"
#include "../../src/solver.fu.cpp"
#include "../../src/codegen.fu.cpp"
#include "../../src/prelude.fu.cpp"

#include "../../src/compiler.fu.cpp"
#include "../../src/tests.fu.cpp"

#define main cli_main
#include "../../src/cli.fu.cpp"
#undef  main

#include "../../lib/cow_vec_test.h"


// So lets go.

int main(int argc, const char * argv[])
{
    cow_vec_tests();
    self_test();
    runTestsAndBuildCompiler();

    return 0;
}

#endif
