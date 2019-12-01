#pragma once

#include <stdio.h>
#include <errno.h>
#include <unistd.h>

#include "span.h"
#include "str.h"
#include "defer.h"

namespace fu {


// I need a better way to provide null terminators.
//  Perhaps we were a bit early here with these spans,
//   a memory-steal append nullterm on the string would be better.

struct c_str
{
    static constexpr size_t BUF_SIZE = 256;

    // Kinda super stupid, no?
    char buf[BUF_SIZE];
    fu_STR dyn;
    const char* ptr;

    inline c_str(span<const char> what)
    {
        size_t len = (size_t) what.size();

        char* dest = buf;
        if (len >= BUF_SIZE) {
            dyn.UNSAFE__init_copy(what.data(), len);
            dest = dyn.mut_data();
        }
        else {
            memcpy(buf, what.data(), len);
            dest = buf;
        }

        dest[len] = 0;
        ptr = dest;
    }

    inline operator const char*() {
        return ptr;
    }
};

int file_write(span<const char> path, span<const char> body)
{
    // Error code is best effort,
    //  global state & all that jazz.
    int err;

    errno = 0;
    FILE* file = fopen(c_str(path), "w");
    err = errno;
    err = err ? err : fu_ERR_UnknownError;

    if (file) {
        size_t expect = body.u_size();
        size_t actual = fwrite(body.data(), 1, expect, file);
        if (actual == expect)
            err = 0;

        fclose(file);
    }

    return err;
}

fu_STR file_read(span<const char> path, fu_STR& output)
{
    FILE* file = fopen(c_str(path), "r");
    fu_DEFER _fclose { [&]() { fclose(file); } };

    if (file) {
        char buffer[256];
        while (fgets(buffer, 256, file) != nullptr)
            output += buffer;
    }

    return output;
}

fu_STR file_read(span<const char> path)
{
    fu_STR output;
    file_read(path, output);
    return output;
}

int file_size(span<const char> path)
{
    struct stat sb;
    if (stat(c_str(path), &sb) == 0)
        return int(sb.st_size);

    return -1;
}

} // namespace
