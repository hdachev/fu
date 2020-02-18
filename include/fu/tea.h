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

    void string(const char* start, size_t size) noexcept
    {
        const char* end = start + size;
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

fu_STR hash_tea(const fu_STR& str)
{
    TEA hash;
    hash.string((const char*)str.data(), size_t(str.size()));

    fu_STR res;

    res += hash.v0;
    res += std::byte('-');
    res += hash.v1;

    return res;
}

} // namespace
