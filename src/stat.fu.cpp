#include <fu/str.h>
#include <fu/view.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/mem/arc.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>

struct ModuleStat_sTmh;
double hr_0pZh();

                                #ifndef DEF_ModuleStat_sTmhPzQmjMb
                                #define DEF_ModuleStat_sTmhPzQmjMb
struct ModuleStat_sTmh
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

                                #ifndef STR_OlhusvNYeug
                                #define STR_OlhusvNYeug
static const fu::str str_OlhusvNYeug fu_INIT_PRIORITY(1002) { "s\t"_fu };
                                #endif

#ifndef fu_NO_fdefs

ModuleStat_sTmh operator+(const ModuleStat_sTmh& a, const ModuleStat_sTmh& b)
{
    return ModuleStat_sTmh { (a.time + b.time), (a.alloc_count + b.alloc_count), (a.alloc_bytes + b.alloc_bytes) };
}

ModuleStat_sTmh operator-(const ModuleStat_sTmh& a, const ModuleStat_sTmh& b)
{
    return ModuleStat_sTmh { (a.time - b.time), (a.alloc_count - b.alloc_count), (a.alloc_bytes - b.alloc_bytes) };
}

void operator+=(ModuleStat_sTmh& a, const ModuleStat_sTmh& b)
{
    a.time += b.time;
    a.alloc_count += b.alloc_count;
    a.alloc_bytes += b.alloc_bytes;
}

ModuleStat_sTmh ModuleStat_now_aKPw()
{
    return ModuleStat_sTmh { hr_0pZh(), fu_ARC::ALLOC_STAT_COUNT(), fu_ARC::ALLOC_STAT_BYTES() };
}

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

void ModuleStat_print_aKPw(const ModuleStat_sTmh& a, fu::vec_range<char> prefix, fu::view<char> suffix)
{
    fu::str x {};
    const fu::str* x_1;
    fu::str x_2 {};
    fu::println(fu::view<fu::str> {{ fu::str(prefix), (x = fu::f64dec(a.time), x).const_cast_mut().destructive_move(), fu::str((x_1 = &(str_OlhusvNYeug), (*x_1))), (x_2 = (a.alloc_count ? ((x7E_rA00(x7E_rA00(fu::i64dec(a.alloc_count), " allocs\t"_view), fu::i64dec(a.alloc_bytes)) + " bytes"_view) + suffix) : fu::str{}), x_2).const_cast_mut().destructive_move() }});
}

#endif
