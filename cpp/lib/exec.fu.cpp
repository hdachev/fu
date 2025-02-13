#include <errno.h>
#include <stdio.h>
#include <fu/str.h>
#include <fu/defer.h>
#include <fu/vec_range.h>
#include <fu/vec/concat_one.h>

typedef int Errno_88RA;
typedef int ExitStatus_iZrm;

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
                                #endif

                                #ifndef DEF_ExitStatus_iZrm
                                #define DEF_ExitStatus_iZrm
                                #endif

#ifndef fu_NO_fdefs

Errno_88RA exec_G82R(fu::str&& cmd, ExitStatus_iZrm& status, fu::vec_range_mut<char> stdout)
{
    Errno_88RA err {};
    status = -1;
    cmd += '\x00';
    const auto pipe = popen(cmd.data(), /*rb triggers EINVAL*/"r");
    if (!pipe)
    {
        err = err ? err : errno;
    }
    else
    {
        fu_DEFER(
        {
            status = pclose(pipe);
            if (status == -1)
                err = err ? err : errno;
        });

        const size_t BUF_SIZE = 64 * 1024;
        fu::byte BUF[BUF_SIZE];

        auto size = stdout.size();

        for (;;)
        {
            void*  data = BUF;
            size_t capa = BUF_SIZE;

            // Write directly onto the string
            //  if it has more capa than the buffer here.
            //
            auto avail = stdout.capa() - size;
            if (avail > 0 && size_t(avail) > BUF_SIZE)
            {
                data = stdout.data_mut() + size;
                capa = size_t(avail);
            }

            auto count = fu::i(fread(data, 1, capa, pipe));
            if (!count)
                break;

            size += count;

            // Copy if using the local buffer.
            if (data == BUF)
                stdout.append_copy(fu_ZERO(), BUF, count);
            else
                stdout.UNSAFE__WriteSize(size);
        }
    };
    return err;
}

#endif
