#include <errno.h>
#include <stdio.h>
#include <fu/str.h>
#include <fu/defer.h>
#include <fu/vec/concat_one.h>


#ifndef fu_NO_fdefs

int exec_sounLutz(fu::str&& cmd, int& status, fu::str& stdout)
{
    int err = 0;
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
