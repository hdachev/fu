#include <fu/str.h>
#include <fu/view.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/mem/arc.h>
#include <fu/vec/concat.h>

struct s_ModuleStat;
double hr_CPFg3qvV();

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

#ifndef fu_NO_fdefs

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

s_ModuleStat ModuleStat_now_pUbtfzLn()
{
    return s_ModuleStat { hr_CPFg3qvV(), fu_ARC::ALLOC_STAT_COUNT(), fu_ARC::ALLOC_STAT_BYTES() };
}

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

void ModuleStat_print_RpGSEiSe(const s_ModuleStat& a, const fu_STR& prefix, fu::view<char> suffix)
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;

    fu_STR* BL_1_v;
    fu_STR* BL_2_v;
    fu_STR* BL_3_v;
    fu::println((fu::slate<4, fu_STR> { fu_STR(prefix), static_cast<fu_STR&&>((__extension__ (
    {
        x = fu::f64dec(a.time);
        BL_1_v = &(x);
    (void)0;}), *BL_1_v)), static_cast<fu_STR&&>((__extension__ (
    {
        x_1 = "s\t"_fu;
        BL_2_v = &(x_1);
    (void)0;}), *BL_2_v)), static_cast<fu_STR&&>((__extension__ (
    {
        x_2 = (a.alloc_count ? ((x7E_sTZRmMq1(x7E_sTZRmMq1(fu::i64dec(a.alloc_count), " allocs\t"_fu), fu::i64dec(a.alloc_bytes)) + " bytes"_fu) + suffix) : fu_STR{});
        BL_3_v = &(x_2);
    (void)0;}), *BL_3_v)) }));
}

#endif
