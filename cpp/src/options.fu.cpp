struct Lint_Q9R1;

                                #ifndef DEF_Lint_Q9R1a2Yzb4c
                                #define DEF_Lint_Q9R1a2Yzb4c
struct Lint_Q9R1
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

#ifndef fu_NO_fdefs

Lint_Q9R1 Lint_lax_sZ7n()
{
    return Lint_Q9R1 { 10 };
}

#endif
