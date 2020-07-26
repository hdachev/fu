//#define ISOLATE_FAILING_TESTCASE

#ifdef ISOLATE_FAILING_TESTCASE
#include "../build.cpp/failing-testcase.cpp"
#endif

#define fu_UNITY_FULIB
#ifndef ISOLATE_FAILING_TESTCASE

#define main cli_main
#include "../src/cli.fu.unity.cpp"
#undef  main

#include "../include/fu/cow_vec_test.h"


// So lets go.

int main(int argc, const char * argv[])
{
    cow_vec_tests();
    self_test();
    runTestsAndBuildCompiler();

    return 0;
}

#endif
