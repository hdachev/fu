//#define ISOLATE_FAILING_TESTCASE

#define fu_NUM_WORKER_THREADS 0

#ifdef ISOLATE_FAILING_TESTCASE
#include "../build-cpp/failing-testcase.cpp"
#endif

#define fu_UNITY_FULIB
#ifndef ISOLATE_FAILING_TESTCASE

#define main cli_main
#include "../src/cli.fu.unity.cpp"
#undef  main


//

#include "./cow_vec_test.hpp"
#include "./parfor_test.hpp"


// So lets go.

int main(int argc, const char * argv[])
{
    cow_vec_tests();
    runTestsAndBuildCompiler_6GAg88gF();

    // TaskStack_Test();

    return 0;
}

#endif
