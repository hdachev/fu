#pragma once

// Expand this in the body of a struct,
//  allows you to implement operator[] as a fu_GET free fn.

#define SUPPORTS_fu_GET()                   \
    template <typename K>                   \
    fu_INL auto operator[](K&& k)           \
            -> decltype(fu_GET(*this, k)) { \
        return          fu_GET(*this, k);   \
    }
