#pragma once

#ifdef fu_HOTSWAP_server
    #include "./export.h"
    #define fu_HOTSWAP fu_EXPORT
#else
    #define fu_HOTSWAP
#endif

#ifdef fu_HOTSWAP_client
namespace fu {

    const void hotswap_init(const char* id, const void*& fnptr, const void* fallback);

    template <typename T>
    T* hotswap(const char* id, T*& fnptr, T* fallback = nullptr) {
        return (T*) hotswap_init(id, fnptr, fallback);
    }

} // namespace
#endif
