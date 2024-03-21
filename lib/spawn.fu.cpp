#include <poll.h>
#include <errno.h>
#include <fcntl.h>
#include <spawn.h>
#include <stdio.h>
#include <alloca.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <unistd.h>
#include <fu/defer.h>
#include <sys/wait.h>
#include <fu/assert.h>
#include <fu/vec_range.h>

typedef int PID_mnoc;
struct PosixPipe_aZkO;
typedef int ReadEnd_6NTX;
typedef int WriteEnd_aNMe;
struct Child_Ljki;
enum ChildStream_ofm8: fu::u8;

                                #ifndef DEF_PID_mnoc
                                #define DEF_PID_mnoc
                                #endif

                                #ifndef DEF_ReadEnd_6NTX
                                #define DEF_ReadEnd_6NTX
                                #endif

                                #ifndef DEF_WriteEnd_aNMe
                                #define DEF_WriteEnd_aNMe
                                #endif

                                #ifndef DEF_PosixPipe_aZkOFP5F5p0
                                #define DEF_PosixPipe_aZkOFP5F5p0
struct PosixPipe_aZkO
{
    ReadEnd_6NTX r;
    WriteEnd_aNMe w;
    explicit operator bool() const noexcept
    {
        return false
            || r
            || w
        ;
    }
};
                                #endif

                                #ifndef DEF_Child_LjkiD4FzUYi
                                #define DEF_Child_LjkiD4FzUYi
struct Child_Ljki
{
    PID_mnoc pid;
    WriteEnd_aNMe in_fd;
    ReadEnd_6NTX out_fd;
    ReadEnd_6NTX err_fd;
    explicit operator bool() const noexcept
    {
        return false
            || pid
            || in_fd
            || out_fd
            || err_fd
        ;
    }
};
                                #endif

                                #ifndef DEF_ChildStream_ofm8
                                #define DEF_ChildStream_ofm8
enum ChildStream_ofm8: fu::u8
{
    ChildStream_ofm8_Ignore = 0u,
    ChildStream_ofm8_Parent = 1u,
    ChildStream_ofm8_Pipe = 2u,
};
                                #endif
extern char **environ;
typedef int PosixPipe[2];
typedef int Errno;

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
template <typename i32, typename = decltype(*((i32**)1) = (int*)1)>
    i32 pipe2(i32 fildes[2], i32 flags, ...)
    {
        auto err = pipe(fildes);
        if (err)
            return err;

        if (flags & O_CLOEXEC)
            for (int i = 0; i < 2; i++)
                if (fcntl(fildes[i], F_SETFD, FD_CLOEXEC))
                    goto GetErrno_and_Rollback;

        if (flags &= ~O_CLOEXEC)
            for (int i = 0; i < 2; i++)
                if (fcntl(fildes[i], F_SETFL, flags))
                    goto GetErrno_and_Rollback;

        return 0;

        GetErrno_and_Rollback:
        err = errno;
        for (int i = 0; i < 2; i++)
            close(fildes[i]);

        return err;
    }

#ifndef fu_NO_fdefs

int spawn_BXrk(PID_mnoc& pid, fu::vec<fu::str>&& argv, const PosixPipe_aZkO& stdout, const PosixPipe_aZkO& stderr, const PosixPipe_aZkO& stdin)
{
    int err = 0;
    pid = 0;
    if (!argv)
    {

            err = EINVAL;

        return err;
    }
    else
    {
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

        const auto& Pipe =
            [&](const auto& pipe, int which)
        {
            if (pipe) {
                if (which == STDIN_FILENO) {
                    posix_spawn_file_actions_addclose(&file_actions, pipe.w);
                    posix_spawn_file_actions_adddup2 (&file_actions, pipe.r, STDIN_FILENO);
                    posix_spawn_file_actions_addclose(&file_actions, pipe.r);
                }
                else {
                    posix_spawn_file_actions_addclose(&file_actions, pipe.r);
                    posix_spawn_file_actions_adddup2 (&file_actions, pipe.w, which);
                    posix_spawn_file_actions_addclose(&file_actions, pipe.w);
                }
            }
            else {
                posix_spawn_file_actions_addopen(&file_actions, which,
                    "/dev/null", which == STDIN_FILENO
                        ? O_RDONLY                  | O_CLOEXEC
                        : O_WRONLY | O_APPEND       | O_CLOEXEC,
                    0);
            }
        };

        Pipe(stdin,  STDIN_FILENO);
        Pipe(stdout, STDOUT_FILENO);
        Pipe(stderr, STDERR_FILENO);

        //
        err = posix_spawnp(&pid,
            argv_cstr[0],
            &file_actions,
            nullptr,        // posix_spawnattr_t*          attrp
            argv_cstr,
            environ);

        posix_spawn_file_actions_destroy(&file_actions);

        return err;
    };
}

int spawn_nX54(/*MOV*/ fu::vec<fu::str>&& argv, int& status)
{
    PID_mnoc pid {};
    int err = spawn_BXrk(pid, argv.destructive_move(), PosixPipe_aZkO{}, PosixPipe_aZkO{}, PosixPipe_aZkO{});
    if (err)
        return err;
    else
    {

        err = fu_waitpid(pid, status);

        return err;
    };
}

                                #ifndef DEF_close_one_PCEyPBhWZDh
                                #define DEF_close_one_PCEyPBhWZDh
inline static void close_one_PCEy(const ReadEnd_6NTX fd, int& err)
{
    fu_ASSERT((fd != 0));
    if (close(fd) && !err)
        err = errno;

}
                                #endif

                                #ifndef DEF_close_one_6lV3LZhXVNd
                                #define DEF_close_one_6lV3LZhXVNd
inline static void close_one_6lV3(const WriteEnd_aNMe fd, int& err)
{
    fu_ASSERT((fd != 0));
    if (close(fd) && !err)
        err = errno;

}
                                #endif

int close_BXrk(const Child_Ljki& child, int& status)
{
    int err = 0;
    auto e = fu_waitpid(child.pid, status);
    if (!err)
        err = e;

    if (child.out_fd)
        close_one_PCEy(child.out_fd, err);

    if (child.err_fd)
        close_one_PCEy(child.err_fd, err);

    if (child.in_fd)
        close_one_6lV3(child.in_fd, err);

    return err;
}

static int pipe_BXrk(PosixPipe_aZkO& p, const bool blocking)
{
    fu_ASSERT(((p.r == 0) ? (p.w == 0) : false));
    int err = 0;
    if (pipe2((int*) &p.r, O_CLOEXEC | (blocking ? 0 : O_NONBLOCK)))
    {
        err = errno;
        (p = PosixPipe_aZkO{});
    };
    return err;
}

static void close_both_BXrk(const PosixPipe_aZkO& pipe, int& err)
{
    close_one_PCEy(pipe.r, err);
    close_one_6lV3(pipe.w, err);
}

                                #ifndef DEF_close_one_lax_zXiw0nGtT3i
                                #define DEF_close_one_lax_zXiw0nGtT3i
inline static void close_one_lax_zXiw(const WriteEnd_aNMe fd)
{
    fu_ASSERT((fd != 0));
    if (close(fd))
        perror("spawn::close_one_lax");

}
                                #endif

                                #ifndef DEF_close_one_lax_75YrbU1mDU4
                                #define DEF_close_one_lax_75YrbU1mDU4
inline static void close_one_lax_75Yr(const ReadEnd_6NTX fd)
{
    fu_ASSERT((fd != 0));
    if (close(fd))
        perror("spawn::close_one_lax");

}
                                #endif

int spawn_x5m9(/*MOV*/ fu::vec<fu::str>&& argv, Child_Ljki& child, const bool blocking, const ChildStream_ofm8 out_m, const ChildStream_ofm8 err_m, const ChildStream_ofm8 in_m)
{
    child = Child_Ljki{};
    int err = 0;
    PosixPipe_aZkO stdout {};
    if ((out_m == ChildStream_ofm8_Pipe) && (err = pipe_BXrk(stdout, blocking)))
        return err;
    else
    {
        PosixPipe_aZkO stderr {};
        if ((err_m == ChildStream_ofm8_Pipe) && (err = pipe_BXrk(stderr, blocking)))
        {
            if (out_m == ChildStream_ofm8_Pipe)
                close_both_BXrk(stdout, err);

            return err;
        }
        else
        {
            PosixPipe_aZkO stdin {};
            if ((in_m == ChildStream_ofm8_Pipe) && (err = pipe_BXrk(stdin, blocking)))
            {
                if (out_m == ChildStream_ofm8_Pipe)
                    close_both_BXrk(stdout, err);

                if (err_m == ChildStream_ofm8_Pipe)
                    close_both_BXrk(stderr, err);

                return err;
            }
            else
            {
                if (out_m == ChildStream_ofm8_Parent)
                    stdout.w = STDOUT_FILENO;

                if (err_m == ChildStream_ofm8_Parent)
                    stderr.w = STDERR_FILENO;

                if (in_m == ChildStream_ofm8_Parent)
                    stdin.r = STDIN_FILENO;

                PID_mnoc pid {};
                if ((err = spawn_BXrk(pid, argv.destructive_move(), stdout, stderr, stdin)))
                {
                    if (out_m == ChildStream_ofm8_Pipe)
                        close_both_BXrk(stdout, err);

                    if (err_m == ChildStream_ofm8_Pipe)
                        close_both_BXrk(stderr, err);

                    if (in_m == ChildStream_ofm8_Pipe)
                        close_both_BXrk(stdin, err);

                    return err;
                }
                else
                {
                    if (out_m == ChildStream_ofm8_Pipe)
                        close_one_lax_zXiw(stdout.w);

                    if (err_m == ChildStream_ofm8_Pipe)
                        close_one_lax_zXiw(stderr.w);

                    if (in_m == ChildStream_ofm8_Pipe)
                        close_one_lax_75Yr(stdin.r);

                    child = Child_Ljki { pid, stdin.w, stdout.r, stderr.r };
                    return 0;
                };
            };
        };
    };
}

int spawn_0Hw8(/*MOV*/ fu::vec<fu::str>&& argv, fu::vec_range_mut<char> stdout_buf, fu::vec_range_mut<char> stderr_buf, int& status)
{
    int err = 0;
    Child_Ljki child {};
    if ((err = spawn_x5m9(argv.destructive_move(), child, true, ChildStream_ofm8_Pipe, ChildStream_ofm8_Pipe, ChildStream_ofm8{})))
        return err;
    else
    {
        fu_DEFER(close_BXrk(child, status));
        const size_t BUF_SIZE = 64 * 1024;
        fu::byte BUF[BUF_SIZE];

        const auto& ReadFD = [&](int fd, auto&& out)
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

        const auto& ReadPollFD = [&](pollfd& pfd, auto&& out)
        {
            return pfd.revents & POLLIN
                && ReadFD(pfd.fd, out);
        };

        const size_t N = 2;
        pollfd poll_fds[N] =
        {
            { child.out_fd, POLLIN, {/* revents */} },
            { child.err_fd, POLLIN, {/* revents */} },
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
            if (  int(!ReadPollFD(poll_fds[0], stdout_buf))
                & int(!ReadPollFD(poll_fds[1], stderr_buf)))
            {
                break;
            }
        };
        return err;
    };
}

#endif
