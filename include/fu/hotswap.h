#pragma once

#ifdef fu_HOTSWAP_server
    #include "./export.h"
    #define fu_HOTSWAP fu_EXPORT
#else
    #define fu_HOTSWAP
#endif

// #ifdef fu_HOTSWAP_client
namespace fu {

    void* hotswap_init(const char* id, void*& fnptr, void* fallback);

    template <typename T>
    T* hotswap(const char* id, T*& fnptr, T* fallback = nullptr) {
        return (T*) hotswap_init(id, (void*&) fnptr, (void*) fallback);
    }

} // namespace
// #endif

// WORKING HERE FOR NOW
//  we dont want to rebuild stdlib for every tiny change
//
#include "./hotswap.cpp"
