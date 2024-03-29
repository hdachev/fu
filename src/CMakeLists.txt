cmake_minimum_required(VERSION 3.6)

set(FU_TARGET cli)

set(FU_MAIN cli.fu)

set(FU_INPUTS
    helpers.fu
    module.fu
    lib/map.fu
    lib/set.fu
    stat.fu
    ../lib/now.fu
    ../lib/mem.fu
    lib/bitset.fu
    ../lib/bit.fu
    structs.fu
    quals.fu
    ../lib/file.fu
    ../lib/path.fu
    lib/ansi.fu
    options.fu
    lexer.fu
    ../lib/utf8.fu
    ../lib/ascii.fu
    flags.fu
    notes.fu
    hacks.fu
    intlit.fu
    cpp.fu
    ../lib/tea.fu
    lib/debug.fu
    ../lib/env.fu
    ../lib/fs.fu
    ../lib/process.fu
    ../lib/spawn.fu
    ../lib/par.fu
    testdiff.fu
    context.fu
    parser.fu
    fail.fu
    types.fu
    build.fu
    scope.fu
    flow.fu
    effects.fu
    solver.fu
    codegen.fu
    prelude.fu
    compiler.fu
    cli.fu
    tests.fu
    test_utils.fu)

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

