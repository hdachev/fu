#include <poll.h>
#include <errno.h>
#include <fcntl.h>
#include <spawn.h>
#include <stdio.h>
#include <alloca.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <signal.h>
#include <unistd.h>
#include <fu/defer.h>
#include <sys/wait.h>
#include <fu/assert.h>

typedef int s_ExitStatus;
typedef int s_Signo;
typedef int s_Errno;
typedef int s_PID;
struct s_PosixPipe;
typedef int s_ReadEnd;
typedef int s_WriteEnd;
struct s_Child;
enum s_ChildStream: fu::u8;

                                #ifndef DEF_s_ExitStatus
                                #define DEF_s_ExitStatus
                                #endif

                                #ifndef DEF_s_Signo
                                #define DEF_s_Signo
                                #endif

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif

                                #ifndef DEF_s_PID
                                #define DEF_s_PID
                                #endif

                                #ifndef DEF_s_ReadEnd
                                #define DEF_s_ReadEnd
                                #endif

                                #ifndef DEF_s_WriteEnd
                                #define DEF_s_WriteEnd
                                #endif

                                #ifndef DEF_s_PosixPipe
                                #define DEF_s_PosixPipe
struct s_PosixPipe
{
    s_ReadEnd r;
    s_WriteEnd w;
    explicit operator bool() const noexcept
    {
        return false
            || r
            || w
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Child
                                #define DEF_s_Child
struct s_Child
{
    s_PID pid;
    s_WriteEnd in_fd;
    s_ReadEnd out_fd;
    s_ReadEnd err_fd;
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

                                #ifndef DEF_s_ChildStream
                                #define DEF_s_ChildStream
enum s_ChildStream: fu::u8
{
    s_ChildStream_Ignore = 0u,
    s_ChildStream_Parent = 1u,
    s_ChildStream_Pipe = 2u,
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
        #ifdef __linux__
        return void("pipe2 does not require this shim on linux, why is it getting compiled?");
        #endif

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

bool exited_BXrkWTfT(const s_ExitStatus status)
{
    bool ret = bool{};
    ret = WIFEXITED(status);

    return ret;
}

int exit_BXrkWTfT(const s_ExitStatus status)
{
    int ret {};
    ret = WEXITSTATUS(status);

    return ret;
}

bool signalled_BXrkWTfT(const s_ExitStatus status)
{
    bool ret = bool{};
    ret = WIFSIGNALED(status);

    return ret;
}

s_Signo signal_BXrkWTfT(const s_ExitStatus status)
{
    s_Signo ret {};
    ret = WTERMSIG(status);

    return ret;
}

s_Errno spawn_BXrkWTfT(s_PID& pid, fu::vec<fu::str>&& argv, const s_PosixPipe& stdout, const s_PosixPipe& stderr, const s_PosixPipe& stdin)
{
    s_Errno err {};
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
        err = posix_spawn_file_actions_init(&file_actions);

        if (!err)
        {
            posix_spawnattr_t attrs;
            err = posix_spawnattr_init(&attrs);

            if (!err)
            {
                sigset_t signal_set;

                err = posix_spawnattr_setflags(&attrs,
                    POSIX_SPAWN_SETSIGDEF |
                    POSIX_SPAWN_SETSIGMASK);

                if (!err) {
                    sigfillset(&signal_set);
                    err = posix_spawnattr_setsigdefault(&attrs, &signal_set);
                }

                if (!err) {
                    sigemptyset(&signal_set);
                    err = posix_spawnattr_setsigmask(&attrs, &signal_set);
                }

                if (!err)
                {
                    const auto& Pipe =
                        [&](const auto& pipe, int which)
                    {
                        if (pipe) {
                            if (which == STDIN_FILENO) {
                                if (pipe.w)
                                    posix_spawn_file_actions_addclose(&file_actions, pipe.w);

                                posix_spawn_file_actions_adddup2 (&file_actions, pipe.r, STDIN_FILENO);

                                if (pipe.r != STDIN_FILENO)
                                    posix_spawn_file_actions_addclose(&file_actions, pipe.r);
                            }
                            else {
                                if (pipe.r)
                                    posix_spawn_file_actions_addclose(&file_actions, pipe.r);

                                posix_spawn_file_actions_adddup2 (&file_actions, pipe.w, which);

                                if (pipe.w != which)
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

                    err = posix_spawnp(&pid,
                        argv_cstr[0],
                        &file_actions,
                        &attrs,
                        argv_cstr,
                        environ);
                }

                posix_spawnattr_destroy(&attrs);
            }

            posix_spawn_file_actions_destroy(&file_actions);
        };
        return err;
    };
}

s_Errno spawn_nX54wxsG(/*MOV*/ fu::vec<fu::str>&& argv, s_ExitStatus& status)
{
    s_PID pid {};
    s_Errno err = spawn_BXrkWTfT(pid, static_cast<fu::vec<fu::str>&&>(argv), s_PosixPipe{}, s_PosixPipe{}, s_PosixPipe{});
    if (err)
        return err;
    else
    {

        err = fu_waitpid(pid, status);

        return err;
    };
}

                                #ifndef DEF_close_one_LhYKAikLFMk
                                #define DEF_close_one_LhYKAikLFMk
inline static void close_one_LhYKAikL(const s_ReadEnd fd, s_Errno& err)
{
    fu_ASSERT((fd != 0));
    if (close(fd) && !err)
        err = errno;

}
                                #endif

                                #ifndef DEF_close_one_VpeTawUEwll
                                #define DEF_close_one_VpeTawUEwll
inline static void close_one_VpeTawUE(const s_WriteEnd fd, s_Errno& err)
{
    fu_ASSERT((fd != 0));
    if (close(fd) && !err)
        err = errno;

}
                                #endif

s_Errno close_BXrkWTfT(const s_Child& child, s_ExitStatus& status)
{
    s_Errno err {};
    auto e = fu_waitpid(child.pid, status);
    if (!err)
        err = e;

    if (child.out_fd)
        close_one_LhYKAikL(child.out_fd, err);

    if (child.err_fd)
        close_one_LhYKAikL(child.err_fd, err);

    if (child.in_fd)
        close_one_VpeTawUE(child.in_fd, err);

    return err;
}

static s_Errno pipe_BXrkWTfT(s_PosixPipe& p, const bool blocking)
{
    fu_ASSERT(((p.r == 0) ? (p.w == 0) : false));
    s_Errno err {};
    if (pipe2((int*) &p.r, O_CLOEXEC | (blocking ? 0 : O_NONBLOCK)))
    {
        err = errno;
        (p = s_PosixPipe{});
    };
    return err;
}

static void close_both_BXrkWTfT(const s_PosixPipe& pipe, s_Errno& err)
{
    close_one_LhYKAikL(pipe.r, err);
    close_one_VpeTawUE(pipe.w, err);
}

                                #ifndef DEF_close_one_lax_fTohpTrx39h
                                #define DEF_close_one_lax_fTohpTrx39h
inline static void close_one_lax_fTohpTrx(const s_WriteEnd fd)
{
    fu_ASSERT((fd != 0));
    if (close(fd))
        perror("spawn::close_one_lax");

}
                                #endif

                                #ifndef DEF_close_one_lax_9JPjKep0lvk
                                #define DEF_close_one_lax_9JPjKep0lvk
inline static void close_one_lax_9JPjKep0(const s_ReadEnd fd)
{
    fu_ASSERT((fd != 0));
    if (close(fd))
        perror("spawn::close_one_lax");

}
                                #endif

s_Errno spawn_x5m9fZrB(/*MOV*/ fu::vec<fu::str>&& argv, s_Child& child, const bool blocking, const s_ChildStream out_m, const s_ChildStream err_m, const s_ChildStream in_m)
{
    child = s_Child{};
    s_Errno err {};
    s_PosixPipe stdout {};
    if ((out_m == s_ChildStream_Pipe) && (err = pipe_BXrkWTfT(stdout, blocking)))
        return err;
    else
    {
        s_PosixPipe stderr {};
        if ((err_m == s_ChildStream_Pipe) && (err = pipe_BXrkWTfT(stderr, blocking)))
        {
            if (out_m == s_ChildStream_Pipe)
                close_both_BXrkWTfT(stdout, err);

            return err;
        }
        else
        {
            s_PosixPipe stdin {};
            if ((in_m == s_ChildStream_Pipe) && (err = pipe_BXrkWTfT(stdin, blocking)))
            {
                if (out_m == s_ChildStream_Pipe)
                    close_both_BXrkWTfT(stdout, err);

                if (err_m == s_ChildStream_Pipe)
                    close_both_BXrkWTfT(stderr, err);

                return err;
            }
            else
            {
                if (out_m == s_ChildStream_Parent)
                    stdout.w = STDOUT_FILENO;

                if (err_m == s_ChildStream_Parent)
                    stderr.w = STDERR_FILENO;

                if (in_m == s_ChildStream_Parent)
                    stdin.r = STDIN_FILENO;

                s_PID pid {};
                if ((err = spawn_BXrkWTfT(pid, static_cast<fu::vec<fu::str>&&>(argv), stdout, stderr, stdin)))
                {
                    if (out_m == s_ChildStream_Pipe)
                        close_both_BXrkWTfT(stdout, err);

                    if (err_m == s_ChildStream_Pipe)
                        close_both_BXrkWTfT(stderr, err);

                    if (in_m == s_ChildStream_Pipe)
                        close_both_BXrkWTfT(stdin, err);

                    return err;
                }
                else
                {
                    if (out_m == s_ChildStream_Pipe)
                        close_one_lax_fTohpTrx(stdout.w);

                    if (err_m == s_ChildStream_Pipe)
                        close_one_lax_fTohpTrx(stderr.w);

                    if (in_m == s_ChildStream_Pipe)
                        close_one_lax_9JPjKep0(stdin.r);

                    child = s_Child { pid, stdin.w, stdout.r, stderr.r };
                    return 0;
                };
            };
        };
    };
}

s_Errno spawn_0Hw8DqUB(/*MOV*/ fu::vec<fu::str>&& argv, fu::str& stdout_buf, fu::str& stderr_buf, s_ExitStatus& status, const bool passthrough)
{
    const s_ChildStream cs = (passthrough ? s_ChildStream_Parent : s_ChildStream_Pipe);
    s_Errno err {};
    s_Child child {};
    if ((err = spawn_x5m9fZrB(static_cast<fu::vec<fu::str>&&>(argv), child, false, cs, cs, s_ChildStream{})))
        return err;
    else
    {
        fu_DEFER(close_BXrkWTfT(child, status));
        if (!passthrough)
        {
            bool BL_4_v {};
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
                    err = errno;
                    if ((__extension__ (
            {
                const s_Errno err_1 = err;
                BL_4_v = (((err_1 == EINTR) || ((err_1 == EAGAIN) || (err_1 == EWOULDBLOCK))));
            (void)0;}), BL_4_v))
                    {
                        err = 0;
                        continue;
                    }

                    break;
                }

                // Don't short circuit here.
                if (  int(!ReadPollFD(poll_fds[0], stdout_buf))
                    & int(!ReadPollFD(poll_fds[1], stderr_buf)))
                {
                    break;
                }
            };
        };
        return err;
    };
}

#endif
