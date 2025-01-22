#define TODO_FIX_REMOVE_copying_push

#include <fu/str.h>
#include <fu/view.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/mem/arc.h>
#include <fu/vec/concat.h>

struct s_ModuleStat;
double hr_0pZhUWR4();

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

s_ModuleStat ModuleStat_now_aKPwC57a()
{
    return s_ModuleStat { hr_0pZhUWR4(), fu_ARC::ALLOC_STAT_COUNT(), fu_ARC::ALLOC_STAT_BYTES() };
}

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

void ModuleStat_print_aKPwC57a(const s_ModuleStat& a, const fu::str& prefix, fu::view<char> suffix)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};

    fu::println((fu::slate<4, fu::str> { fu::str(prefix), static_cast<fu::str&&>((x = fu::f64dec(a.time), x)), static_cast<fu::str&&>((x_1 = "s\t"_fu, x_1)), static_cast<fu::str&&>((x_2 = (a.alloc_count ? ((x7E_3lDd4lqo(x7E_3lDd4lqo(fu::i64dec(a.alloc_count), " allocs\t"_fu), fu::i64dec(a.alloc_bytes)) + " bytes"_fu) + suffix) : ""_fu), x_2)) }));
}

#endif
