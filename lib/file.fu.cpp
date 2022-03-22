
#include <cstdint>
#include <errno.h>
#include <fcntl.h>
#include <fu/defer.h>
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#ifndef FU_NO_FDEFs

                                #ifndef DEF_RW_RW_RW
                                #define DEF_RW_RW_RW
inline constexpr unsigned RW_RW_RW = (((0x6u << 6u) | (0x6u << 3u)) | (0x6u << 0u));
                                #endif

int write_hRROHsch(fu_STR&& path, fu::view<char> data, const unsigned mode)
{
    path += '\x00';
    /*MOV*/ int err {};


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
    ;
    return /*NRVO*/ err;
}

int read_rdNIrUmo(fu_STR&& path, fu_STR& output)
{
    path += '\x00';
    /*MOV*/ int err {};


        auto fd = open(path.data(), O_RDONLY);
        if (fd == -1)
            return (err = errno);

        fu_DEFER(
            if (close(fd) && !err)
                err = errno;
        );

        const size_t BUF_SIZE = 64 * 1024;
        fu::byte BUF[BUF_SIZE];

        auto size = output.size();

        for (;;)
        {
            void*  data = BUF;
            size_t capa = BUF_SIZE;

            // Write directly onto the string
            //  if it has more capa than the buffer here.
            //
            auto avail = output.capa() - size;
            if (avail > 0 && size_t(avail) > BUF_SIZE)
            {
                data = output.data_mut() + size;
                capa = size_t(avail);
            }

            auto count = (fu::i) read(fd, data, capa);
            if (count <= 0)
            {
                if (count < 0)
                    err = errno;

                break;
            }

            size += count;

            // Copy if using the local buffer.
            if (data == BUF)
                output.append_copy(fu_ZERO(), BUF, count);
            else
                output.UNSAFE__WriteSize(size);
        }
    ;
    return /*NRVO*/ err;
}

fu_STR read_1WaOntvF(fu_STR&& path)
{
    /*MOV*/ fu_STR output {};
    if (read_rdNIrUmo(fu_STR(path), output))
        output.clear();

    return /*NRVO*/ output;
}

int rename_CY1V5t3K(fu_STR&& from, fu_STR&& to)
{
    from += '\x00';
    to += '\x00';
    /*MOV*/ int err {};


        if (rename(from.data(), to.data()))
            err = errno;
    ;
    return /*NRVO*/ err;
}

int64_t size_1WaOntvF(fu_STR&& path)
{
    path += '\x00';


        struct stat sb;
        if (stat(path.data(), &sb) == 0)
            return (signed long long) sb.st_size;
    ;
    return -1ll;
}

#endif
