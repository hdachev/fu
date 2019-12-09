#pragma once

#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>

#include "span.h"
#include "str.h"
#include "defer.h"

namespace fu {

int file_write(fu_STR path, span<const char> body)
{
    path.push('\0');

    errno = 0;
    FILE* file = fopen(path.data(), "w");
    int err = errno;
    err = err ? err : fu_ERR_UnknownError;

    if (file) {
        size_t expect = (size_t) body.size();
        size_t actual = fwrite(body.data(), 1, expect, file);
        if (actual == expect)
            err = 0;

        fclose(file);
    }

    return err;
}

fu_STR file_read(fu_STR path, fu_STR& output)
{
    path.push('\0');

    auto file = fopen(path.data(), "r");
    fu::defer _fclose { [&]() { if (file) fclose(file); } };

    if (file) {
        char buffer[FREAD_BUFFER_SIZE];
        size_t count;
        while ((count = fread(buffer, 1, FREAD_BUFFER_SIZE, file)))
            output.append_copy(
                fu_ZERO(), buffer, (int) count);
    }

    return output;
}

int file_size(fu_STR path)
{
    path.push('\0');

    struct stat sb;
    if (stat(path.data(), &sb) == 0)
        return int(sb.st_size);

    return -1;
}

fu_STR file_read(const fu_STR& path)
{
    fu_STR output;
    file_read(path, output);
    return output;
}

} // namespace
