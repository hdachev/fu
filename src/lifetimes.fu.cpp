
struct s_Lifetime;
                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    int raw;
    explicit operator bool() const noexcept
    {
        return false
            || raw
        ;
    }
};
                                #endif

s_Lifetime Lifetime_static()
{
    return s_Lifetime { int{} };
}

s_Lifetime Lifetime_fromArgIndex(const int argIdx)
{
    return s_Lifetime { (-1 - argIdx) };
}

int Lifetime_toArgIndex(const s_Lifetime& lifetime)
{
    return (-1 - lifetime.raw);
}

const s_Lifetime& type_inter(const s_Lifetime& a, const s_Lifetime& b)
{
    return ((a.raw > b.raw) ? a : b);
}
