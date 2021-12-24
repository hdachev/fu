cmake_minimum_required(VERSION 3.6)

set(FU_TARGET cli)

set(FU_MAIN cli.fu)

set(FU_INPUTS
    helpers.fu
    set.fu
    options.fu
    ../lib/now.fu
    ../lib/alloc.fu
    ../lib/bit.fu
    ../lib/file.fu
    ../lib/ansi.fu
    ../lib/tea.fu
    ../lib/debug.fu
    ../lib/env.fu
    ../lib/fs.fu
    ../lib/shell.fu
    ../lib/process.fu
    testdiff.fu
    lexer.fu
    map.fu
    stat.fu
    bitset.fu
    intlit.fu
    cpp.fu
    parser.fu
    module.fu
    structs.fu
    quals.fu
    hacks.fu
    build.fu
    context.fu
    fail.fu
    types.fu
    scope.fu
    effects.fu
    addroffn.fu
    solver.fu
    codegen.fu
    prelude.fu
    compiler.fu
    tests.fu
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

