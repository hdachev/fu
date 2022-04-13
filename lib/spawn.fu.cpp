#include <poll.h>
#include <errno.h>
#include <fcntl.h>
#include <spawn.h>
#include <alloca.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <unistd.h>
#include <fu/defer.h>
#include <sys/wait.h>

#pragma GCC diagnostic push
#ifdef __clang__
#pragma GCC diagnostic warning "-Wunknown-warning-option"
#endif
#pragma GCC diagnostic ignored "-Wmisleading-indentation"



extern char **environ;

typedef int PosixPipe[2];

typedef int Errno;

static Errno fu_spawn(
    fu_VEC<fu_STR>&  argv, int& pid,
    const PosixPipe* stdout,
    const PosixPipe* stderr)
{
    Errno err               = -1;
    pid                     =  0;

    //
    const size_t argv_len   = (size_t) argv.size();
    char** argv_cstr        = (char**) alloca(sizeof(void*) * (1 + argv_len));
    argv_cstr[argv_len]     = 0;

    for (size_t i = 0; i < argv_len; i++)
    {
        auto& arg = argv.mutref(fu::i(i));
              arg.push(0);

        argv_cstr[i]        = (char*) arg.data();
    }

    //
    posix_spawn_file_actions_t file_actions;
    posix_spawn_file_actions_init(&file_actions);

    //
    const auto& Pipe        = [&](const PosixPipe* pipe, int STDOUT_or_STDERR)
    {
        if (pipe)
        {
            const int R     = 0;
            const int W     = 1;

            posix_spawn_file_actions_addclose(&file_actions, (*pipe)[R]);
            posix_spawn_file_actions_adddup2 (&file_actions, (*pipe)[W], STDOUT_or_STDERR);
            posix_spawn_file_actions_addclose(&file_actions, (*pipe)[W]);
        }
        else
        {
            posix_spawn_file_actions_addopen (&file_actions, STDOUT_or_STDERR,
                "/dev/null", O_WRONLY|O_APPEND, 0);
        }
    };

    Pipe(stdout, STDOUT_FILENO);
    Pipe(stderr, STDERR_FILENO);

    //
    err =
        posix_spawnp(&pid,
            argv_cstr[0],
            &file_actions,
            nullptr,        // posix_spawnattr_t*          attrp
            argv_cstr,
            environ);

    posix_spawn_file_actions_destroy(&file_actions);

    //
    return err;
}

static Errno fu_waitpid(
    int pid, int& wstatus)
{
    wstatus     = -1;
    Errno err   = -1;

    for (;;)
    {
        int options {};
        int wait_ret = waitpid(pid, &wstatus, options);

        // if WNOHANG was specified and one or more child(ren)
        //  specified by pid exist, but have not yet changed state,
        //   then 0 is returned.
        //
        if (wait_ret == 0)
            goto YIELD_AND_CONTINUE;

        // On failure, -1 is returned.
        if (wait_ret == -1)
        {
            // On failure, each of these calls sets errno to indicate the error.
            //
            //   EAGAIN The PID file descriptor specified in id is nonblocking and
            //          the process that it refers to has not terminated.
            //
            if ((err = errno) == EAGAIN)
                goto YIELD_AND_CONTINUE;

            return err;
        }

        // waitpid(): on success, returns the process ID
        //  of the child whose state has changed.
        //
        if (wait_ret != pid)
            return -1;

        // The exit code, term sig, etc are all packed in wstatus,
        //  wstatus = 0 means exit-ok, code = 0.
        //
        return 0;

        // Let's not do this for starters,
        //  but we could do a non-blocking wait and then TryWork() here.
        //
        YIELD_AND_CONTINUE:
        {
            // TODO yield(); continue;
            return -1;
        }
    }
}


#ifndef fu_NO_fdefs

int spawn_oC1HzM4Z(fu_VEC<fu_STR>&& argv, int& status)
{
    if (!argv)
        return -1;

    /*MOV*/ int err = 0;
    int pid {};

        err =
            fu_spawn(
                argv, pid,
                /*stdout*/ nullptr,
                /*stderr*/ nullptr)
    ;
    if (err)
        return /*NRVO*/ err;


        err =
            fu_waitpid(
                pid, status);
    ;
    return /*NRVO*/ err;
}

int spawn_udHzgmR4(fu_VEC<fu_STR>&& argv, fu_STR& stdout, fu_STR& stderr, int& status)
{
    if (!argv)
        return -1;

    /*MOV*/ int err = 0;

    {

            const auto& Close = [&](int& fd)
            {
                const int DID_CLOSE = -1;
                if (fd == DID_CLOSE)
                    return;

                if (close(fd))
                    err = err ? err : errno;

                fd = DID_CLOSE;
            };
        ;

            PosixPipe stdout_pipe;
            if (pipe(stdout_pipe))
                return errno;
        ;
        fu_DEFER(
            Close(stdout_pipe[0]);
            Close(stdout_pipe[1]);
        );

            PosixPipe stderr_pipe;
            if (pipe(stderr_pipe))
                return errno;
        ;
        fu_DEFER(
            Close(stderr_pipe[0]);
            Close(stderr_pipe[1]);
        );
        if (err)
            return /*NRVO*/ err;

        int pid {};

            err =
                fu_spawn(
                    argv, pid,
                    &stdout_pipe,
                    &stderr_pipe)
        ;
        if (err)
            return /*NRVO*/ err;

        fu_DEFER(
                auto e =
                    fu_waitpid(
                        pid, status);

                if (!err)
                    err = e;
            );

            Close(stdout_pipe[1]);
            Close(stderr_pipe[1]);
        ;
        if (err)
            return /*NRVO*/ err;


            const size_t BUF_SIZE = 64 * 1024;
            fu::byte BUF[BUF_SIZE];

            const auto& ReadFD = [&](int fd, fu_STR& out)
            {
                void*  data = BUF;
                size_t capa = BUF_SIZE;

                // Write directly into the string
                //  if it has more capa than the buffer here.
                //
                auto size   = out.size();
                auto avail  = out.capa() - size;

                if (avail > 0 && size_t(avail) > BUF_SIZE)
                {
                    data = out.data_mut() + size;
                    capa = size_t(avail);
                }

                //
                auto bytes  = read(fd, data, size_t(capa));

                if (bytes < 0 && !err)
                {
                    err = errno;
                }
                else if (bytes > 0)
                {
                    auto count  = (decltype(size)) bytes;
                    size += count;

                    // Copy if using the local buffer.
                    if (data == BUF)
                        out.append_copy(fu_ZERO(), BUF, count);
                    else
                        out.UNSAFE__WriteSize(size);

                    return true;
                }

                //
                return false;
            };

            const auto& ReadPollFD = [&](pollfd& pfd, fu_STR& out)
            {
                return pfd.revents & POLLIN
                    && ReadFD(pfd.fd, out);
            };

            const size_t N = 2;
            pollfd poll_fds[N] =
            {
                { stdout_pipe[0], POLLIN, {/* revents */} },
                { stderr_pipe[0], POLLIN, {/* revents */} },
            };

            int poll_ret;
            while (!err && (poll_ret = poll(&poll_fds[0], N, /*timeout*/-1)))
            {
                if (poll_ret < 0)
                {
                    auto e = errno;
                    if (e == EINTR || e == EAGAIN)
                        continue;

                    err = e;
                    break;
                }

                // Don't short circuit here.
                if (  !ReadPollFD(poll_fds[0], stdout)
                    & !ReadPollFD(poll_fds[1], stderr))
                {
                    break;
                }
            }
        ;
    };
    return /*NRVO*/ err;
}

#endif

#pragma GCC diagnostic pop
