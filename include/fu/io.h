#pragma once

#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>

#include "./defer.h"
#include "./str.h"
#include "./vec/slice.h"
#include "./vec/concat_one.h"
#include "./vec/c_str.h"

namespace fu {

inline int file_write(
    const fu_STR& path, const fu_STR& body)
{
    errno = 0;
    FILE* file = fopen(FU_TEMP_CSTR(path), "w");
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

inline bool file_read(
    const fu_STR& path, fu_STR& output)
{
    auto file = fopen(FU_TEMP_CSTR(path), "r");
    fu::defer _fclose { [&]() { if (file) fclose(file); } };

    if (file) {
        std::byte buffer[FREAD_BUFFER_SIZE];
        size_t count;
        while ((count = fread(buffer, 1, FREAD_BUFFER_SIZE, file)))
            output.append_copy(
                fu_ZERO(), buffer, int(count));

        return true;
    }

    return false;
}

inline int file_size(
    const fu_STR& path)
{
    struct stat sb;
    if (stat(FU_TEMP_CSTR(path), &sb) == 0)
        return int(sb.st_size);

    return -1;
}

inline fu_STR file_read(
    const fu_STR& path)
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
    fu_STR&& path,
    int mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)
{
    // Cstr.
    if (!path.size())
        return fu_ERR_FS_BadPath;

    if (path       [path.size() - 1] == std::byte('/'))
        path.mutref(path.size() - 1) =  std::byte('\0');
    else
        path += std::byte('\0');

    auto cpath = (const char*)path.data();

    //
    struct stat st;

    // Exists?
    if (!stat(cpath, &st) && S_ISDIR(st.st_mode))
        return 0;

    // Create?
    if (!mkdir(cpath, mode_t(mode)))
        return 0;

    int err = errno;
    err = err ? err : fu_ERR_UnknownError;

    // Create parent?
    // TODO no realloc and no recursion.
    for (auto i = path.size() - 2; i --> 0; )
        if (path[i] == std::byte('/'))
        {
            err = fs_mkdir_p( slice(path, 0, i), mode );

            if (err)
                return err;

            // Retry?
            if (!mkdir(cpath, mode_t(mode)))
                return 0;

            err = errno;
            err = err ? err : fu_ERR_UnknownError;

            // Raced with other?
            if (err == EEXIST && !stat(cpath, &st) && S_ISDIR(st.st_mode))
                return 0;

            return err;
        }

    return err;
}

} // namespace
