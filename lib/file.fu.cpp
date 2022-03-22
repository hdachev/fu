
#include <cstdint>
#include <errno.h>
#include <fu/defer.h>
#include <fu/str.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>
#include <stdio.h>
#include <sys/stat.h>

#ifndef FU_NO_FDEFs

int write_mwfGe7o8(fu_STR&& path, fu::view<char> data)
{
    path += '\x00';
    /*MOV*/ int err {};


        FILE* file = fopen(path.data(), "w");
        if (!file)
            return (err) = errno;

        fu_DEFER( fclose(file) );

        size_t expect = (size_t) data.size();
        size_t actual = fwrite(data.data(), 1, expect, file);

        if (actual == expect)
            err = -1;

    ;
    return /*NRVO*/ err;
}

int read_rdNIrUmo(fu_STR&& path, fu_STR& output)
{
    path += '\x00';
    /*MOV*/ int err {};


        auto file = fopen(path.data(), "r");
        if (!file)
            return (err = errno);

        fu_DEFER( fclose(file); );

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

            auto count = fu::i(fread(data, 1, capa, file));
            if (!count)
                break;

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
    read_rdNIrUmo(fu_STR(path), output);
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
