#pragma once

#include "std.h"
#include "str.h"

namespace fu {

// TODO FIX this is complete bullshit,
//  i just need some kind of hash to get going.

struct TEA
{
    static constexpr int ROUNDS = 16;

    uint32_t v0 = 0;
    uint32_t v1 = 0;

    void encrypt() noexcept
    {
        uint32_t sum    = 0u;
        uint32_t delta  = 0x9e3779b9u;

        for (int i = 0; i < ROUNDS; i++)
        {
            sum += delta;
            v0 += ((v1<<4) + 0xA341316Cu) ^ (v1 + sum) ^ ((v1>>5) + 0xC8013EA4u);
            v1 += ((v0<<4) + 0xAD90777Du) ^ (v0 + sum) ^ ((v0>>5) + 0x7E95761Eu);
        }
    }

    template <typename V, typename = decltype(*((char*)1) = ((V*)1)->data()[0])>
    void string(const V& str) noexcept
    {
        const char* start   = str.data();
        const char* end     = start + str.size();

        for (auto* i = start; i < end; )
        {
            auto* end4 = i + 4; end4 = end4 > end ? end : end4;
            auto* end8 = i + 8; end8 = end8 > end ? end : end8;

            {
                int byte = 0;
                for (; i < end4; ) {
                    v0 ^= uint32_t(*(i++)) << byte;
                    byte += 8;
                }
            }

            {
                int byte = 0;
                for (; i < end8; ) {
                    v1 ^= uint32_t(*(i++)) << byte;
                    byte += 8;
                }
            }

            encrypt();
        }
    }
};

template <typename T>
fu_STR hash_tea(const T& str)
{
    TEA hash;
    hash.string(str);

    fu_STR res;

    res += hash.v0;
    res += '-';
    res += hash.v1;

    return res;
}

} // namespace
