cmake_minimum_required(VERSION 3.6)

set(FU_TARGET cli)

set(FU_MAIN cli.fu)

set(FU_INPUTS
    helpers.fu
    lexer.fu
    parser.fu
    set.fu
    types.fu
    ../lib/now.fu
    ../lib/alloc.fu
    stat.fu
    scope.fu
    file.fu
    context.fu
    intlit.fu
    addroffn.fu
    ../lib/tea.fu
    bitset.fu
    solver.fu
    cpp.fu
    codegen.fu
    ../lib/env.fu
    prelude.fu
    ../lib/fs.fu
    ../lib/shell.fu
    build.fu
    compiler.fu
    tests.fu
    hello.fu
    cli.fu)

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

