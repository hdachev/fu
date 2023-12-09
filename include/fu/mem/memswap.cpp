#include "memswap.h"

void fu::memswap(unsigned char* a, unsigned char* b, size_t bytes)
{
    for (decltype(bytes) i = 0; i < bytes; i++)
    {
        unsigned char temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
