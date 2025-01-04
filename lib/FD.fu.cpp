#include <errno.h>
#include <fu/str.h>
#include <unistd.h>
#include <fu/view.h>
#include <fu/assert.h>

typedef int s_Errno;
typedef int s_FD;

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif

                                #ifndef DEF_s_FD
                                #define DEF_s_FD
                                #endif

#ifndef fu_NO_fdefs

s_Errno close_iPLv8aef(const s_FD fd)
{
    fu_ASSERT((fd > 2));
    s_Errno err {};
    if (close(fd) < 0)
        err = errno;

    return err;
}

s_Errno write_iPLv8aef(const s_FD fd, fu::view<char> data, int& bytes_written)
{
    fu_ASSERT((fd > 0));
    bytes_written = 0;
    s_Errno err {};

        bytes_written = (fu::i) write(fd,
            data.data(), size_t(data.size()));

        if (bytes_written < 0) {
            bytes_written = 0;
            err = errno;
        };
    return err;
}

s_Errno read_iPLv8aef(const s_FD fd, fu::str& buffer, int& bytes_read, bool& maybe_more)
{
    s_Errno err {};
    char  temp_buffer[64 * 1024];
    char* out_data = temp_buffer;
    fu::i out_capa = (fu::i) sizeof(temp_buffer);

    // Try to output directly into the provided user buffer if possible.
    auto current_size   = buffer.size();
    auto available_capa = buffer.capa() - current_size;
    if (available_capa > 1024)
    {
        out_data = buffer.data_mut() + current_size;
        out_capa = available_capa;
    }

    //
    bytes_read = (fu::i) read(fd, out_data, (size_t) out_capa);
    maybe_more = bytes_read == out_capa;
    if (bytes_read > 0)
    {
        if (out_data == temp_buffer)
            buffer.append_copy(
                fu_ZERO(), out_data, bytes_read);
        else
            buffer.UNSAFE__WriteSize(
                current_size + bytes_read);
    }
    else if (bytes_read < 0)
    {
        bytes_read = 0;
        err = errno;
    };
    return err;
}

s_Errno read_exhaustive_iPLv8aef(const s_FD fd, fu::str& buffer, int& total_bytes_read)
{
    for (; ; )
    {
        int bytes_read = 0;
        bool maybe_more = false;
        const s_Errno err = read_iPLv8aef(fd, buffer, bytes_read, maybe_more);
        if (err)
        {
            if (!(err == EINTR))
                return err;

        }
        else
        {
            total_bytes_read += bytes_read;
            if (!maybe_more)
                return 0;

        };
    };
}

s_Errno read_discard_iPLv8aef(const s_FD fd, int& bytes_discarded)
{
    s_Errno err {};
    char  temp_buffer[64 * 1024];
    char* out_data = temp_buffer;
    fu::i out_capa = (fu::i) sizeof(temp_buffer);

    for (;;) {
        auto bytes_read = (fu::i) read(fd, out_data, (size_t) out_capa);
        if (bytes_read < 0) {
            err = errno;
            break;
        }

        auto maybe_more = bytes_read == out_capa;
        bytes_discarded += bytes_read;

        if (!maybe_more)
            break;
    };
    return err;
}

#endif
