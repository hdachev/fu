
#include <errno.h>
#include <fu/defer.h>
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

static int visit_6Iq4hZXp(fu::view_mut<char>, unsigned);

#ifndef FU_NO_FDEFs

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif

                                #ifndef DEFt_ends_hCEGPwyG
                                #define DEFt_ends_hCEGPwyG
inline bool ends_hCEGPwyG(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static int visit_6Iq4hZXp(fu::view_mut<char> path, const unsigned mode)
{
    const int N = (path.size() - 1);
    path.mutref(N) = '\x00';
    fu_DEFER(path.mutref(N) = '/');
    /*MOV*/ int err {};
    bool is_ENOENT = false;


            if (mkdir(path.data(), mode_t(mode)))
                is_ENOENT = (err = errno) == ENOENT;
        ;
    if (is_ENOENT)
    {
        for (int i = N; i-- > 1; )
        {
            if (path[i] != '/')
                continue;

            fu::view_mut<char> parent = fu::get_view_mut(path, 0, (i + 1));
            if (visit_6Iq4hZXp(parent, mode) == 0)
            {


                    if (mkdir(path.data(), mode_t(mode)))
                        err = errno;
                ;
            };
            break;
        };
    };
    return /*NRVO*/ err;
}

int mkdir_p_GHMYB2ew(fu_STR&& path, const unsigned mode)
{
    if (!ends_hCEGPwyG(path, '/'))
        path += '/';

    return visit_6Iq4hZXp(path, mode);
}

fu_STR cwd_OvAHpuKu()
{
    /*MOV*/ fu_STR cwd {};


        const auto& init = []()
        {
            // As an extension to the POSIX.1-2001 standard, glibc's getcwd()
            //  allocates the buffer dynamically using malloc(3) if buf is NULL.
            //
            // In this case, the allocated buffer has the length size unless
            //  size is zero, when buf is allocated as big as necessary.
            //
            // The caller should free(3) the returned buffer.
            //
            char* cstr_cwd  = getcwd(/*buf*/NULL, /*size*/0);
            fu_DEFER( free(cstr_cwd); );

            return fu_TO_STR(cstr_cwd);
        };

        static const fu_STR value = init();

        cwd = value;
    ;
    return /*NRVO*/ cwd;
}

#endif
