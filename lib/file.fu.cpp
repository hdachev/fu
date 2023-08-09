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


#ifndef fu_NO_fdefs

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

                                #ifndef DEF_RWX_RX_RX
                                #define DEF_RWX_RX_RX
inline constexpr unsigned RWX_RX_RX = (((0x7u << 6u) | (0x5u << 3u)) | (0x5u << 0u));
                                #endif

int write_l2QLWLgK(fu::str&& path, fu::view<char> data, const unsigned mode)
{
    path += '\x00';
    int err {};
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

                                #ifndef DEF_MAX_bROiNhN5YRb
                                #define DEF_MAX_bROiNhN5YRb
inline int MAX_bROiNhN5()
{
    return 2147483647;
}
                                #endif

int read_MtnlPN8n(fu::str&& path, fu::str& output, int64_t size)
{
    path += '\x00';
    int err {};

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
        if (len1 > (int64_t(MAX_bROiNhN5()) - 16ll))
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
        auto* buf = output.data_mut();

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

fu::str read_IIXDOWa5(/*MOV*/ fu::str&& path)
{
    /*MOV*/ fu::str output {};
    if (read_MtnlPN8n(static_cast<fu::str&&>(path), output, 0ll))
        output.clear();

    return /*NRVO*/ output;
}

int chmod_ePFhawpV(fu::str&& path, const unsigned mode)
{
    path += '\x00';
    int err {};
    if (chmod(path.data(), mode_t(mode)))
        err = errno;

    return err;
}

int unlink_IIXDOWa5(fu::str&& path)
{
    path += '\x00';
    int err {};
    if (unlink(path.data()))
        err = errno;

    return err;
}

int rename_mAw1WpED(fu::str&& from, fu::str&& to)
{
    from += '\x00';
    to += '\x00';
    int err {};
    if (rename(from.data(), to.data()))
        err = errno;

    return err;
}

int64_t size_IIXDOWa5(fu::str&& path)
{
    path += '\x00';
    struct stat sb;
    if (stat(path.data(), &sb) == 0)
        return (signed long long) sb.st_size;

    return -1ll;
}

#endif
