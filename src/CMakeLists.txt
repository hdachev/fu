cmake_minimum_required(VERSION 3.6)

set(FU_TARGET cli)

set(FU_MAIN cli.fu)

set(FU_INPUTS
    cli.fu
    helpers.fu
    compiler.fu
    context.fu
    lexer.fu
    parser.fu
    options.fu
    types.fu
    set.fu
    scope.fu
    stat.fu
    ../lib/now.fu
    ../lib/alloc.fu
    ../lib/file.fu
    solver.fu
    bitset.fu
    ../lib/bit.fu
    intlit.fu
    addroffn.fu
    ../lib/tea.fu
    codegen.fu
    cpp.fu
    ../lib/env.fu
    prelude.fu
    build.fu
    ../lib/fs.fu
    ../lib/shell.fu
    ../lib/process.fu
    testdiff.fu
    tests.fu)

set(FU_OUTPUTS
    ${CMAKE_CURRENT_SOURCE_DIR}/cli.fu.unity.cpp)

add_custom_command(
    OUTPUT ${FU_OUTPUTS}
    COMMAND $ENV{HOME}/fu/bin/fu
    ARGS -c ${FU_MAIN}
    DEPENDS ${FU_INPUTS}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM)

add_library(${FU_TARGET} ${FU_OUTPUTS})

add_library(fulib SHARED $ENV{HOME}/fu/include/fu/_fulib.cpp)
target_include_directories(fulib PUBLIC $ENV{HOME}/fu/include/)
target_link_libraries(${FU_TARGET} PUBLIC fulib)

