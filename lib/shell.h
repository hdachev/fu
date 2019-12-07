#pragma once

#include <stdio.h>

#include "str.h"
#include "defer.h"

namespace fu {

int exec(fu_STR cmd, fu_STR& stdout) {

    cmd.push('\0');

    auto pipe = popen(cmd.data(), "r");
    fu::defer _pclose { [&]() { if (pipe) pclose(pipe); } };

    if (pipe) {
        char buffer[256];
        size_t count;
        while ((count = fread(buffer, 1, 256, pipe)))
            stdout.append_copy(
                fu_ZERO(), buffer, (int) count);

        int ret = pclose(pipe);
        pipe = nullptr;
        return ret;
    }

    return -1;
}

int exec(const fu_STR& cmd) {
    fu_STR stdout;
    return exec(cmd, stdout);
}

} // namespace
