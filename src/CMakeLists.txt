cmake_minimum_required(VERSION 3.6)

set(FU_TARGET cli)

set(FU_MAIN cli.fu)

set(FU_INPUTS
    helpers.fu
    lexer.fu
    parser.fu
    lifetimes.fu
    types.fu
    stat.fu
    scope.fu
    context.fu
    intlit.fu
    tea.fu
    solver.fu
    prelude.fu
    codegen.fu
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

target_include_directories(${FU_TARGET} PUBLIC ~/fu/include/)

