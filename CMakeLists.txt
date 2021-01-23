cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJECT_NAME HackingFU)
project(${PROJECT_NAME})

file(GLOB hacking_exe_src hacking/*.cpp)
include_directories(include/)

if (UNIX)
    link_libraries(dl)
endif (UNIX)

add_executable(hacking_exe ${hacking_exe_src})

set_target_properties(hacking_exe
  PROPERTIES
  OUTPUT_NAME hacking)
