#include <fu/arc.h>
#include <fu/now.h>
#include <fu/str.h>
#include <iostream>

struct s_ModuleStat;
                                #ifndef DEF_s_ModuleStat
                                #define DEF_s_ModuleStat
struct s_ModuleStat
{
    double time;
    int alloc_count;
    int alloc_bytes;
    explicit operator bool() const noexcept
    {
        return false
            || time
            || alloc_count
            || alloc_bytes
        ;
    }
};
                                #endif

s_ModuleStat operator+(const s_ModuleStat& a, const s_ModuleStat& b)
{
    return s_ModuleStat { (a.time + b.time), (a.alloc_count + b.alloc_count), (a.alloc_bytes + b.alloc_bytes) };
}

s_ModuleStat operator-(const s_ModuleStat& a, const s_ModuleStat& b)
{
    return s_ModuleStat { (a.time - b.time), (a.alloc_count - b.alloc_count), (a.alloc_bytes - b.alloc_bytes) };
}

void operator+=(s_ModuleStat& a, const s_ModuleStat& b)
{
    a.time += b.time;
    a.alloc_count += b.alloc_count;
    a.alloc_bytes += b.alloc_bytes;
}

s_ModuleStat ModuleStat_now()
{
    return s_ModuleStat { fu::now_hr(), fu_ARC::ALLOC_STAT_COUNT(), fu_ARC::ALLOC_STAT_BYTES() };
}

void ModuleStat_print(const s_ModuleStat& a, const fu_STR& prefix, const fu_STR& suffix)
{
    (std::cout << prefix << a.time << " s\t"_fu << ((((a.alloc_count + " allocs\t"_fu) + a.alloc_bytes) + " bytes"_fu) + suffix) << "\n");
}
