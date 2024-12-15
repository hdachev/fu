#include <errno.h>
#include <fu/str.h>
#include <stdlib.h>
#include <unistd.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <sys/stat.h>
#include <fu/vec/concat_one.h>

typedef int s_Errno;
static s_Errno visit_5u3xiGA0(fu::view_mut<char>, unsigned);

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif
#if defined(__APPLE__)
    #include <mach-o/dyld.h>
    #include <assert.h>

    #else
    #include <limits.h>

    #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif

                                #ifndef DEF_ends_AbHOxjqnKH3
                                #define DEF_ends_AbHOxjqnKH3
inline bool ends_AbHOxjqn(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static s_Errno visit_5u3xiGA0(fu::view_mut<char> path, const unsigned mode)
{
    const int N = (path.size() - 1);
    path.mutref(N) = '\x00';
    fu_DEFER(path.mutref(N) = '/');
    s_Errno err {};
    bool is_ENOENT = false;
    if (mkdir(path.data(), mode_t(mode)))
        is_ENOENT = (err = errno) == ENOENT;

    if (is_ENOENT)
    {
        for (int i = N; i-- > 1; )
        {
            if (!(path[i] != '/'))
            {
                fu::view_mut<char> parent = fu::get_view_start0_mut(path, (i + 1));
                if (visit_5u3xiGA0(parent, mode) == 0)
                {

                                        if (mkdir(path.data(), mode_t(mode)))
                                            err = errno;

                };
                break;
            };
        };
    };
    return err;
}

s_Errno mkdir_p_5u3xiGA0(fu::str&& path, const unsigned mode)
{
    if (!ends_AbHOxjqn(path, '/'))
        path += '/';

    return visit_5u3xiGA0(path, mode);
}

fu::str cwd_5u3xiGA0()
{
    /*MOV*/ fu::str cwd {};

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
    
                return fu::to_str(cstr_cwd);
            };
    
            static const fu::str value = init();
    
            cwd = value;

    return /*NRVO*/ cwd;
}

fu::str executable_5u3xiGA0()
{
    /*MOV*/ fu::str executable {};

            const auto& init = []()
            {
                fu::str executable;
    
                #if defined(__APPLE__)
                uint32_t bufsize = 0;
                _NSGetExecutablePath(executable.data_mut(), &bufsize);
                assert(bufsize > 0);
    
                executable.grow(fu::i(bufsize));
                _NSGetExecutablePath(executable.data_mut(), &bufsize);
    
                #elif defined(__linux__)
                char buf[PATH_MAX];
                auto nbytes = readlink("/proc/self/exe", buf, PATH_MAX);
                if (nbytes > 0 && nbytes < PATH_MAX)
                    executable.UNSAFE__init_copy(buf, PATH_MAX);
    
                /*
                    readlink("/proc/self/exe", buf, bufsize) (Linux)
                    readlink("/proc/curproc/file", buf, bufsize) (FreeBSD)
                    readlink("/proc/self/path/a.out", buf, bufsize) (Solaris)
                */
    
                #else
                assert(false && "TODO fs::executable");
    
                #endif
    
                return executable;
            };
    
            static const fu::str value = init();
            executable = value;

    return /*NRVO*/ executable;
}

#endif
