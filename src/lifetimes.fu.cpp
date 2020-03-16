#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat_str.h>
#include <utility>

struct s_Lifetime;
struct s_Region;
const s_Region& only(const fu_VEC<s_Region>&);
s_Lifetime type_inter(const s_Lifetime&, const s_Region&);
                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    int relax;
    explicit operator bool() const noexcept
    {
        return false
            || index
            || relax
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> regions;
    explicit operator bool() const noexcept
    {
        return false
            || regions
        ;
    }
};
                                #endif

                                #ifndef DEFt_2_4__6__9_12_9Region
                                #define DEFt_2_4__6__9_12_9Region
inline const s_Region& if_only(const fu_VEC<s_Region>& s)
{
    return ([&]() -> const s_Region& { if ((s.size() == 1)) return s[0]; else return fu::Default<s_Region>::value; }());
}
                                #endif

                                #ifndef DEFt_2_5__6__9_12_9Region
                                #define DEFt_2_5__6__9_12_9Region
inline const s_Region& if_first(const fu_VEC<s_Region>& s)
{
    return ([&]() -> const s_Region& { if (s.size()) return s[0]; else return fu::Default<s_Region>::value; }());
}
                                #endif

                                #ifndef DEFt_2_1__6__9_12_9Region
                                #define DEFt_2_1__6__9_12_9Region
inline const s_Region& only(const fu_VEC<s_Region>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

bool isStatic(const s_Lifetime& l)
{
    return !l.regions;
}

bool isLocal(const s_Lifetime& l)
{
    return (if_only(l.regions).index > 0);
}

bool isArgument(const s_Region& r)
{
    return (r.index < 0);
}

bool isArgumentUnion(const s_Lifetime& l)
{
    return isArgument(if_first(l.regions));
}

s_Region Region_fromArgIndex(const int argIdx)
{
    return s_Region { (-1 - argIdx), int{} };
}

int Region_toArgIndex(const s_Region& r)
{
    return (-1 - r.index);
}

const s_Lifetime& inter_locals(const s_Lifetime& a, const s_Lifetime& b)
{
    const s_Region& ar = only(a.regions);
    const s_Region& br = only(b.regions);
    return (((ar.index > br.index) || ((ar.index == br.index) && (ar.relax <= br.relax))) ? a : b);
}

s_Lifetime inter_args(s_Lifetime&& a, const s_Lifetime& b)
{
    for (int i = 0; (i < b.regions.size()); i++){
    {
        const s_Region& br = b.regions[i];
        for (int i = 0; (i < a.regions.size()); i++)
        {
            const s_Region ar { a.regions[i] };
            if ((ar.index == br.index))
            {
                if ((ar.relax > br.relax))
                    a.regions.mutref(i) = br;

                goto L_OUTER_c;
            };
            if ((ar.index > br.index))
            {
                a.regions.insert(i, br);
                goto L_OUTER_c;
            };
        };
        a.regions.push(br);
    
        }L_OUTER_c:;};
    return std::move(a);
}

s_Lifetime type_inter(const s_Lifetime& a, const s_Lifetime& b)
{
    return (isStatic(a) ? s_Lifetime(b) : (isStatic(b) ? s_Lifetime(a) : (isArgumentUnion(a) ? (isArgumentUnion(b) ? inter_args(s_Lifetime(a), b) : s_Lifetime(b)) : s_Lifetime((isArgumentUnion(b) ? a : inter_locals(a, b))))));
}

s_Lifetime type_inter(const s_Lifetime& a, const s_Region& b)
{
    return type_inter(a, s_Lifetime { fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { b } } });
}

s_Lifetime Lifetime_static()
{
    return s_Lifetime { fu_VEC<s_Region>{} };
}

s_Lifetime Lifetime_fromArgIndex(const int argIdx)
{
    return s_Lifetime { fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { Region_fromArgIndex(argIdx) } } };
}

s_Lifetime Lifetime_fromScopeIdx(const int index)
{
    return s_Lifetime { fu_VEC<s_Region> { fu_VEC<s_Region>::INIT<1> { s_Region { int(index), int{} } } } };
}

bool killedBy(const s_Lifetime& lifetime, const int returnIdx)
{
    return (isLocal(lifetime) && (only(lifetime.regions).index > returnIdx));
}

s_Lifetime Lifetime_relaxCallArg(s_Lifetime&& lifetime, const int relax)
{
    if ((relax > 0))
    {
        for (int i = 0; (i < lifetime.regions.size()); i++)
            lifetime.regions.mutref(i).relax += relax;

    };
    return std::move(lifetime);
}
