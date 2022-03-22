#pragma once

namespace fu {

inline uint32_t next_log2(uint32_t a /* must be >= 2 */) noexcept
{
#ifdef _MSC_VER
    unsigned long bit;
    _BitScanReverse(&bit, a - 1);
    return uint32_t(bit + 1);
#else
    return 32 - uint32_t( __builtin_clz(a - 1));
#endif
}

} // namespace
