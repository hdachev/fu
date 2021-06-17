
struct s_Lint;

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

#ifndef FU_NO_FDEFs

s_Lint Lint_lax()
{
    return s_Lint { 10 };
}

#endif
