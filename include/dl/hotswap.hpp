#pragma once

#ifdef fu_HOTSWAP

#include <fu/export.h>

namespace fu
{

    extern "C"
        fu_EXPORT
            void* hotswap_init(const char* id, void*& fnptr, void* fallback);

    template <typename T>
    T* hotswap(const char* id, T*& fnptr, T* fallback = nullptr)
    {
        return (T*) hotswap_init(id, (void*&) fnptr, (void*) fallback);
    }


} // namespace


#endif
