#include <cstdint>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <fu/str.h>
#include <limits.h>
#include <unistd.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <sys/stat.h>
#include <fu/vec/concat_one.h>

typedef int s_Errno;
struct s_Stat;
struct s_Timespec;

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif

                                #ifndef DEF_s_Timespec
                                #define DEF_s_Timespec
struct s_Timespec
{
    unsigned sec;
    unsigned nsec;
    explicit operator bool() const noexcept
    {
        return false
            || sec
            || nsec
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Stat
                                #define DEF_s_Stat
struct s_Stat
{
    int64_t size;
    s_Timespec atime;
    s_Timespec mtime;
    s_Timespec ctime;
    explicit operator bool() const noexcept
    {
        return false
            || size
            || atime
            || mtime
            || ctime
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif

s_Errno write_VWJwj7Fs(fu::str&& path, fu::view<char> data, const unsigned mode)
{
    path += '\x00';
    s_Errno err {};
    auto fd = open(path.data(), O_WRONLY | O_CREAT | O_TRUNC, mode_t(mode));
    if (fd == -1)
        return (err = errno);

    auto* buf = data.data();
    auto size = size_t(data.size());

    while (size > 0)
    {
        auto written = write(fd, buf, size);
        if (written <= 0)
        {
            if (written < 0)
                err = errno;

            break;
        }

        buf  +=        written;
        size -= size_t(written);
    }

    if (close(fd) && !err)
        err = errno;

    return err;
}

                                #ifndef DEF_MAX_u3ymTS2igIk
                                #define DEF_MAX_u3ymTS2igIk
inline int MAX_u3ymTS2i()
{
    return 2147483647;
}
                                #endif

s_Errno read_VWJwj7Fs(fu::str&& path, fu::str& output, int64_t size)
{
    path += '\x00';
    s_Errno err {};

    {
        if ((size <= 0ll))
        {
            struct stat sb;
            if (stat(path.data(), &sb))
                return (err = errno);

            size = sb.st_size;

        };
        int len0 = output.size();
        const int64_t len1 = (int64_t(len0) + size);
        if (len1 > (int64_t(MAX_u3ymTS2i()) - 16ll))
            return (err = EFBIG);
;
        auto fd = open(path.data(), O_RDONLY);
        if (fd == -1)
            return (err = errno);

        fu_DEFER(if (close(fd) && !err)
            err = errno;

        if (len0 != len1)
        {
            output.UNSAFE__WriteSize(len0);
            err = ERANGE;
        });
        output.grow(int(len1));
        auto* buf = output.data_mut() + len0;

        ssize_t check = output.capa() > len1 ? 1 : 0;
        ssize_t request;
        while ((request = len1 - len0) > 0)
        {
            request += check;
            request = request < SSIZE_MAX ? request : SSIZE_MAX;

            auto count = read(fd, buf, size_t(request));
            if (count <= 0)
            {
                if (count < 0)
                    err = errno;

                break;
            }

            len0 += (decltype(len0)) count;
        };
    };
    return err;
}

s_Errno chmod_VWJwj7Fs(fu::str&& path, const unsigned mode)
{
    path += '\x00';
    s_Errno err {};
    if (chmod(path.data(), mode_t(mode)))
        err = errno;

    return err;
}

s_Errno unlink_VWJwj7Fs(fu::str&& path)
{
    path += '\x00';
    s_Errno err {};
    if (unlink(path.data()))
        err = errno;

    return err;
}

s_Errno rename_VWJwj7Fs(fu::str&& from, fu::str&& to)
{
    from += '\x00';
    to += '\x00';
    s_Errno err {};
    if (rename(from.data(), to.data()))
        err = errno;

    return err;
}

int64_t size_VWJwj7Fs(fu::str&& path)
{
    path += '\x00';
    struct stat sb;
    if (stat(path.data(), &sb) == 0)
        return (signed long long) sb.st_size;

    return -1ll;
}

s_Errno stat_VWJwj7Fs(fu::str&& path, s_Stat& out)
{
    path += '\x00';
    s_Errno err {};
    out = s_Stat{};
    struct stat sb;
    if (stat(path.data(), &sb) != 0)
    {
        err = errno;
    }
    else
    {
        out.size         = (signed long long) sb.st_size;

    #ifdef __APPLE__
        out.atime.sec    = (unsigned) sb.st_atimespec.tv_sec;
        out.atime.nsec   = (unsigned) sb.st_atimespec.tv_nsec;

        out.mtime.sec    = (unsigned) sb.st_mtimespec.tv_sec;
        out.mtime.nsec   = (unsigned) sb.st_mtimespec.tv_nsec;

        out.ctime.sec    = (unsigned) sb.st_ctimespec.tv_sec;
        out.ctime.nsec   = (unsigned) sb.st_ctimespec.tv_nsec;
    #else
        out.atime.sec    = (unsigned) sb.st_atim.tv_sec;
        out.atime.nsec   = (unsigned) sb.st_atim.tv_nsec;

        out.mtime.sec    = (unsigned) sb.st_mtim.tv_sec;
        out.mtime.nsec   = (unsigned) sb.st_mtim.tv_nsec;

        out.ctime.sec    = (unsigned) sb.st_ctim.tv_sec;
        out.ctime.nsec   = (unsigned) sb.st_ctim.tv_nsec;
    #endif
    };
    return err;
}

#endif
