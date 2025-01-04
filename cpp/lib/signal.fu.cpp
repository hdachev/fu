#include <errno.h>
#include <signal.h>
#include <fu/view.h>

typedef int Errno_88RA;
typedef int PID_05b1;
typedef int Signo_6FLP;
struct BlockedSigmask_g3Eo;
typedef unsigned SigMask_aymR;
typedef int FD_q1SK;

                                #ifndef DEF_sizeof_SigMask
                                #define DEF_sizeof_SigMask
inline constexpr int sizeof_SigMask = 4;
                                #endif
Errno_88RA close_iPLv(FD_q1SK);

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
                                #endif

                                #ifndef DEF_PID_05b1
                                #define DEF_PID_05b1
                                #endif

                                #ifndef DEF_Signo_6FLP
                                #define DEF_Signo_6FLP
                                #endif

                                #ifndef DEF_SigMask_aymR
                                #define DEF_SigMask_aymR
                                #endif

                                #ifndef DEF_FD_q1SK
                                #define DEF_FD_q1SK
                                #endif

                                #ifndef DEF_BlockedSigmask_g3EoU17qNk6
                                #define DEF_BlockedSigmask_g3EoU17qNk6
struct BlockedSigmask_g3Eo
{
    SigMask_aymR requested_sigmask;
    SigMask_aymR actually_blocked;
    FD_q1SK signal_fd;
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

Errno_88RA kill_wYYR(const PID_05b1 pid, const Signo_6FLP sig)
{
    Errno_88RA err {};
    if (kill(pid, sig))
        err = errno;

    return err;
}

BlockedSigmask_g3Eo block_wYYR(fu::view<Signo_6FLP> sigmask, Errno_88RA& err)
{
    BlockedSigmask_g3Eo sm {};
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
        return BlockedSigmask_g3Eo{};
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
        FD_q1SK fd {};
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

Errno_88RA unblock_wYYR(const BlockedSigmask_g3Eo& sm)
{
    Errno_88RA err {};
    sigset_t set {};
    sigemptyset(&set);

    for (unsigned i = 0; i < unsigned((sizeof_SigMask * 8)); i++)
        if (sm.actually_blocked & unsigned(1 << i))
            sigaddset(&set, (int) i);

    err = pthread_sigmask(SIG_UNBLOCK, &set, NULL);

    if (sm.signal_fd)
        err = close_iPLv(sm.signal_fd);

    return err;
}

#endif
