cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJECT_NAME playground)
project(${PROJECT_NAME})

file(GLOB playground_exe_src ./*.cpp)
include_directories(../include/)

# -pthread
find_package(Threads REQUIRED)
link_libraries(Threads::Threads)

# dlopen
if (UNIX)
  link_libraries(dl)
endif ()

add_executable(playground_exe ${playground_exe_src})

set_target_properties(playground_exe
  PROPERTIES
  OUTPUT_NAME playground)
