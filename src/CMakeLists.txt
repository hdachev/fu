cmake_minimum_required(VERSION 3.6)

set(FU_MAIN cli.fu)

set(FU_INPUTS
    helpers.fu
    lexer.fu
    parser.fu
    lifetimes.fu
    types.fu
    stat.fu
    scope.fu
    solver.fu
    prelude.fu
    codegen.fu
    compiler.fu
    tests.fu
    hello.fu
    cli.fu)

set(FU_OUTPUTS
    ${CMAKE_CURRENT_SOURCE_DIR}/helpers.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/lexer.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parser.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/lifetimes.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/types.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stat.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/scope.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/solver.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/prelude.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/codegen.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/compiler.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tests.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/hello.fu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/cli.fu.cpp)

add_custom_command(
    OUTPUT ${FU_OUTPUTS}
    COMMAND $ENV{HOME}/fu/bin/fu
    ARGS -c ${FU_MAIN}
    DEPENDS ${FU_INPUTS}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    VERBATIM)

add_library(cli ${FU_OUTPUTS})

target_include_directories(cli PUBLIC ~/fu/include/)
