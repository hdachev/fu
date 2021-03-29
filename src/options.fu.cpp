
struct s_Lint;
struct s_Options;

                                #ifndef DEF_s_Lint
                                #define DEF_s_Lint
struct s_Lint
{
    int maxwarn;
    explicit operator bool() const noexcept
    {
        return false
            || maxwarn
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
{
    s_Lint lint;
    explicit operator bool() const noexcept
    {
        return false
            || lint
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

s_Lint Lint_lax()
{
    return s_Lint { 10 };
}

s_Lint Lint_strict()
{
    return s_Lint{};
}

s_Options Options_default()
{
    return s_Options { Lint_strict() };
}

#endif
