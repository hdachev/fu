#pragma once

#include <stdio.h>

#include "str.h"
#include "defer.h"

namespace fu {

int shell_exec(fu_STR&& cmd, fu_STR& stdout)
{
    cmd.push(std::byte('\0'));
    auto ccmd = (const char*)cmd.data();

    auto pipe = popen(ccmd, "r");
    fu::defer _pclose { [&]() { if (pipe) pclose(pipe); } };

    if (pipe) {
        std::byte buffer[FREAD_BUFFER_SIZE];
        size_t count;
        while ((count = fread(buffer, 1, FREAD_BUFFER_SIZE, pipe)))
            stdout.append_copy(
                fu_ZERO(), buffer, int(count));

        int ret = pclose(pipe);
        pipe = nullptr;
        return ret;
    }

    return -1;
}

int shell_exec(fu_STR&& cmd)
{
    fu_STR stdout;
    return shell_exec(
        static_cast<fu_STR&&>(cmd),
        stdout);
}

} // namespace
