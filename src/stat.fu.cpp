
#include <fu/decstr.h>
#include <fu/mem/arc.h>
#include <fu/now.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec/concat.h>
#include <fu/view.h>

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

#ifndef FU_NO_FDEFs

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
    return s_ModuleStat { fu::now_hr(), fu_ARC::ALLOC_STAT_COUNT(), fu_ARC::ALLOC_STAT_BYTES() };
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

void ModuleStat_print_2JzWOtmi(const s_ModuleStat& a, const fu_STR& prefix, fu::view<char> suffix)
{
    fu_STR _0 {};
    fu_STR _1 {};
    fu_STR _2 {};
    fu::println((fu::slate<4, fu_STR> { fu_STR(prefix), (__extension__ (
    {
        /*MOV*/ /*RRET*/ fu_STR x = fu::f64dec(a.time);
        _0 = (x);
    (void)0;}), static_cast<fu_STR&&>(_0)), (__extension__ (
    {
        /*MOV*/ /*RRET*/ fu_STR x = " s\t"_fu;
        _1 = (x);
    (void)0;}), static_cast<fu_STR&&>(_1)), (__extension__ (
    {
        /*MOV*/ /*RRET*/ fu_STR x = (a.alloc_count ? ((x7E(x7E(fu::i64dec(a.alloc_count), " allocs\t"_fu), fu::i64dec(a.alloc_bytes)) + " bytes"_fu) + suffix) : fu_STR{});
        _2 = (x);
    (void)0;}), static_cast<fu_STR&&>(_2)) }));
}

#endif
