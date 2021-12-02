#pragma once

#ifdef _MSC_VER
    #define fu_EXPORT __declspec(dllexport)
    #define fu_IMPORT __declspec(dllimport)
#else
    #define fu_EXPORT __attribute__((__visibility__("default")))
    #define fu_IMPORT
#endif
