#include <errno.h>
#include <fu/str.h>
#include <stdlib.h>
#include <unistd.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <sys/stat.h>
#include <fu/vec/concat_one.h>

typedef int Errno_88RA;

                                #ifndef DEF_RWX_RWX_RWX
                                #define DEF_RWX_RWX_RWX
inline constexpr unsigned RWX_RWX_RWX = (((0x7u << 6u) | (0x7u << 3u)) | (0x7u << 0u));
                                #endif
static Errno_88RA visit_5u3x(fu::view_mut<char>, unsigned);

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
                                #endif
#if defined(__APPLE__)
    #include <mach-o/dyld.h>
    #include <assert.h>

    #else
    #include <limits.h>

    #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_ends_L30JVW8oAb6
                                #define DEF_ends_L30JVW8oAb6
inline bool ends_L30J(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static Errno_88RA visit_5u3x(fu::view_mut<char> path, const unsigned mode)
{
    const int N = (path.size() - 1);
    path.mutref(N) = '\x00';
    fu_DEFER(path.mutref(N) = '/');
    Errno_88RA err {};
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
                if (visit_5u3x(parent, mode) == 0)
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

Errno_88RA mkdir_p_5u3x(fu::str&& path, const unsigned mode)
{
    if (!ends_L30J(path, '/'))
        path += '/';

    return visit_5u3x(path, mode);
}

fu::str cwd_5u3x()
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

fu::str executable_5u3x()
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
