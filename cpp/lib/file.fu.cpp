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
#include <fu/vec_range.h>
#include <fu/vec/concat_one.h>

typedef int Errno_88RA;
struct Stat_EQWk;
struct Timespec_RdAp;

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
                                #endif

                                #ifndef DEF_Timespec_RdAp1SOrifg
                                #define DEF_Timespec_RdAp1SOrifg
struct Timespec_RdAp
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

                                #ifndef DEF_Stat_EQWkITIAK82
                                #define DEF_Stat_EQWkITIAK82
struct Stat_EQWk
{
    int64_t size;
    Timespec_RdAp atime;
    Timespec_RdAp mtime;
    Timespec_RdAp ctime;
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

Errno_88RA write_VWJw(fu::str&& path, fu::view<char> data, const unsigned mode)
{
    path += '\x00';
    Errno_88RA err {};
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

                                #ifndef DEF_MAX_GzC5uMH53i1
                                #define DEF_MAX_GzC5uMH53i1
inline int MAX_GzC5()
{
    return 2147483647;
}
                                #endif

Errno_88RA read_VWJw(fu::str&& path, fu::vec_range_mut<char> output, int64_t size)
{
    path += '\x00';
    Errno_88RA err {};

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
        if (len1 > (int64_t(MAX_GzC5()) - 16ll))
        {
            return (err = EFBIG);

        };
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

Errno_88RA chmod_VWJw(fu::str&& path, const unsigned mode)
{
    path += '\x00';
    Errno_88RA err {};
    if (chmod(path.data(), mode_t(mode)))
        err = errno;

    return err;
}

Errno_88RA unlink_VWJw(fu::str&& path)
{
    path += '\x00';
    Errno_88RA err {};
    if (unlink(path.data()))
        err = errno;

    return err;
}

Errno_88RA rename_VWJw(fu::str&& from, fu::str&& to)
{
    from += '\x00';
    to += '\x00';
    Errno_88RA err {};
    if (rename(from.data(), to.data()))
        err = errno;

    return err;
}

int64_t size_VWJw(fu::str&& path)
{
    path += '\x00';
    struct stat sb;
    if (stat(path.data(), &sb) == 0)
        return (signed long long) sb.st_size;

    return -1ll;
}

Errno_88RA stat_VWJw(fu::str&& path, Stat_EQWk& out)
{
    path += '\x00';
    Errno_88RA err {};
    out = Stat_EQWk{};
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
