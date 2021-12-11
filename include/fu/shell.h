#pragma once

#include <stdio.h>

#include "./util.h"
#include "./str.h"
#include "./vec/c_str.h"
#include "./defer.h"

namespace fu {

int shell_exec(fu_STR&& cmd, fu_STR& stdout)
{
    auto pipe = popen(FU_TEMP_CSTR(cmd), "r");
    fu::defer _pclose { [&]() { if (pipe) pclose(pipe); } };

    if (pipe) {
        fu::byte buffer[FREAD_BUFFER_SIZE];
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
