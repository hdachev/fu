#pragma once

#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>

#include "str.h"
#include "defer.h"
#include "vec/slice.h"

namespace fu {

inline int file_write(fu_STR path, const fu_STR& body)
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

inline fu_STR file_read(fu_STR path, fu_STR& output)
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

inline int file_size(fu_STR path)
{
    path.push('\0');

    struct stat sb;
    if (stat(path.data(), &sb) == 0)
        return int(sb.st_size);

    return -1;
}

inline fu_STR file_read(const fu_STR& path)
{
    fu_STR output;
    file_read(path, output);
    return output;
}

inline fu_STR fs_cwd()
{
    char buf[FS_MAX_PATH];

    auto*  cwd  = getcwd(buf, FS_MAX_PATH);
    return cwd  ? fu_TO_STR(buf)
                : fu_STR();
}

inline int fs_mkdir_p(
    fu_STR path,
    int mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)
{
    // Cstr.
    if (!path.size())
        return fu_ERR_FS_BadPath;

    if (path       [path.size() - 1] == '/')
        path.mutref(path.size() - 1) = '\0';
    else
        path += '\0';

    const char* c_str = path.data();

    //
    struct stat st;

    // Exists?
    if (!stat(c_str, &st) && S_ISDIR(st.st_mode))
        return 0;

    // Create?
    if (!mkdir(c_str, (mode_t) mode))
        return 0;

    int err = errno;
    err = err ? err : fu_ERR_UnknownError;

    // Create parent?
    // TODO no realloc and no recursion.
    for (auto i = path.size() - 2; i --> 0; )
        if (path[i] == '/')
        {
            err = fs_mkdir_p( slice(path, 0, i), mode );

            if (err)
                return err;

            // Retry?
            if (!mkdir(c_str, (mode_t) mode))
                return 0;

            err = errno;
            err = err ? err : fu_ERR_UnknownError;

            // Raced with other?
            if (err == EEXIST && !stat(c_str, &st) && S_ISDIR(st.st_mode))
                return 0;

            return err;
        }

    return err;
}

} // namespace
