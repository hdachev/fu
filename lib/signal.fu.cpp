#include <errno.h>
#include <signal.h>
#include <fu/view.h>

typedef int s_Errno;
typedef int s_PID;
typedef int s_Signo;
struct s_BlockedSigmask;
typedef unsigned s_SigMask;
typedef int s_FD;
s_Errno close_iPLv8aef(s_FD);

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif

                                #ifndef DEF_s_PID
                                #define DEF_s_PID
                                #endif

                                #ifndef DEF_s_Signo
                                #define DEF_s_Signo
                                #endif

                                #ifndef DEF_s_SigMask
                                #define DEF_s_SigMask
                                #endif

                                #ifndef DEF_s_FD
                                #define DEF_s_FD
                                #endif

                                #ifndef DEF_s_BlockedSigmask
                                #define DEF_s_BlockedSigmask
struct s_BlockedSigmask
{
    s_SigMask requested_sigmask;
    s_SigMask actually_blocked;
    s_FD signal_fd;
    explicit operator bool() const noexcept
    {
        return false
            || requested_sigmask
            || actually_blocked
            || signal_fd
        ;
    }
};
                                #endif
#ifdef __linux__
        #include <sys/signalfd.h>
        #endif //

#ifndef fu_NO_fdefs

                                #ifndef DEF_sizeof_SigMask
                                #define DEF_sizeof_SigMask
inline constexpr int sizeof_SigMask = 4;
                                #endif

s_Errno kill_wYYRQbuV(const s_PID pid, const s_Signo sig)
{
    s_Errno err {};
    if (kill(pid, sig))
        err = errno;

    return err;
}

s_BlockedSigmask block_wYYRQbuV(fu::view<s_Signo> sigmask, s_Errno& err)
{
    s_BlockedSigmask sm {};
    sigset_t set {};
    sigemptyset(&set);

    for (fu::i i = 0; i < sigmask.size(); i++)
    {
        auto signo = sigmask[i];
        sigaddset(&set, signo);
        sm.requested_sigmask |= 1 << signo;
    }

    sigset_t old_set {};
    err = pthread_sigmask(SIG_BLOCK, &set, &old_set);

    if (err)
    {
        return s_BlockedSigmask{};
    }
    else
    {
        for (fu::i i = 0; i < sigmask.size(); i++)
        {
            auto signo = sigmask[i];
            int was_set = sigismember(&old_set, signo);
            if (was_set < 0)
                err = errno;
            else if (was_set == 0)
                sm.actually_blocked |= 1 << signo;
        };
        s_FD fd {};
        #ifdef __linux__
        fd = signalfd(-1, &set, SFD_NONBLOCK | SFD_CLOEXEC);
        if (fd < 0) {
            err = errno;
            fd  = 0;
        }
        #endif //;
        sm.signal_fd = fd;
        return sm;
    };
}

s_Errno unblock_wYYRQbuV(const s_BlockedSigmask& sm)
{
    s_Errno err {};
    sigset_t set {};
    sigemptyset(&set);

    for (unsigned i = 0; i < unsigned((sizeof_SigMask * 8)); i++)
        if (sm.actually_blocked & unsigned(1 << i))
            sigaddset(&set, (int) i);

    err = pthread_sigmask(SIG_UNBLOCK, &set, NULL);

    if (sm.signal_fd)
        err = close_iPLv8aef(sm.signal_fd);

    return err;
}

#endif
