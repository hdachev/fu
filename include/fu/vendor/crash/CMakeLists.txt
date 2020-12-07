if(OS_LINUX)
    set(src crash-linux.cpp)
elseif(OS_WINDOWS)
    set(src crash-windows.cpp)
elseif(OS_MACOSX)
    set(src crash-macos.cpp)
else()
    set(src crash-noop.cpp)
endif()

add_library(crash STATIC
    ${src}
    crash.h
    crash.cpp
)

target_include_directories(crash PUBLIC
    .
)

target_link_libraries(crash PUBLIC
    ${CMAKE_DL_LIBS}
)

if(OS_WINDOWS)
    target_link_libraries(crash PUBLIC DbgHelp)
endif()
