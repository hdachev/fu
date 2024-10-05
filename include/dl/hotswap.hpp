#pragma once

#ifdef fu_HOTSWAP
#include <fu/export.h>
#endif

namespace fu
{

    typedef void (*OnHotswap)(void*);

#ifdef fu_HOTSWAP

    extern "C" fu_EXPORT void* hotswap_init(const char* id, void*& fnptr, void* fallback);

    template <typename T>
    T* hotswap(const char* id, T*& fnptr, T* fallback = nullptr)
    {
        return (T*) hotswap_init(id, (void*&) fnptr, (void*) fallback);
    }


    //

    extern "C" fu_EXPORT void hotswap_here();
    extern "C" fu_EXPORT void hotswap_callback_add(OnHotswap callback, void* udata);
    extern "C" fu_EXPORT void hotswap_callback_remove(OnHotswap callback, void* udata);

#else

    inline void hotswap_here() {}
    inline void hotswap_callback_add(OnHotswap, void*) {}
    inline void hotswap_callback_remove(OnHotswap, void*) {}

#endif

} // namespace
