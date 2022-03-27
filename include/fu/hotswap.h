#pragma once

#ifdef fu_HOTSWAP

#include "./export.h"

namespace fu {

    void* hotswap_init(const char* id, void*& fnptr, void* fallback);

    template <typename T>
    T* hotswap(const char* id, T*& fnptr, T* fallback = nullptr) {
        return (T*) hotswap_init(id, (void*&) fnptr, (void*) fallback);
    }

} // namespace

// WORKING HERE FOR NOW
//  dont want to rebuild stdlib for every change
//
#include "./hotswap.cpp"

#endif
