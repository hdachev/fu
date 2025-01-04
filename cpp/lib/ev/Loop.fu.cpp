#include <cstdint>
#include <errno.h>
#include <fcntl.h>
#include <fu/int.h>
#include <fu/vec.h>
#include <arpa/inet.h>
#include <fu/assert.h>
#include <sys/socket.h>

typedef int Errno_88RA;
struct BlockedSigmask_g3Eo;
typedef unsigned SigMask_aymR;
typedef int FD_q1SK;
struct Loop_UQM7;
struct BitSet_mmp7;
struct Pool_X5U1;
union Meta_igy4;
struct Meta256_GAqO;
enum Kind_2p91: fu::u8;
typedef fu::u8 SocketState_xV3L;
typedef int PID_05b1;
typedef int WriteEnd_aNMe;
typedef int ReadEnd_6NTX;

                                #ifndef DEF_STATE_OFFSET
                                #define DEF_STATE_OFFSET
inline constexpr uint64_t STATE_OFFSET = 4ull;
                                #endif

                                #ifndef DEF_STATE_MASK
                                #define DEF_STATE_MASK
inline constexpr uint64_t STATE_MASK = 0xfull;
                                #endif

                                #ifndef DEF_sizeof_SigMask
                                #define DEF_sizeof_SigMask
inline constexpr int sizeof_SigMask = 4;
                                #endif
bool remove_Na55(BitSet_mmp7&, int);
Errno_88RA close_iPLv(FD_q1SK);

                                #ifndef DEF_Errno_88RA
                                #define DEF_Errno_88RA
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

                                #ifndef DEF_BitSet_mmp7xBZ4kaf
                                #define DEF_BitSet_mmp7xBZ4kaf
struct BitSet_mmp7
{
    fu::vec<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_Pool_X5U1rUuoUC4
                                #define DEF_Pool_X5U1rUuoUC4
struct Pool_X5U1
{
    fu::vec<Meta_igy4> items;
    int first_free;
    int debug;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || first_free
            || debug
        ;
    }
};
                                #endif

                                #ifndef DEF_Meta256_GAqO5maKByg
                                #define DEF_Meta256_GAqO5maKByg
struct Meta256_GAqO
{
    __uint128_t meta_u128;
    uint64_t meta_u64;
    unsigned meta_u32;
    unsigned tail_u32;
    explicit operator bool() const noexcept
    {
        return false
            || meta_u128
            || meta_u64
            || meta_u32
            || tail_u32
        ;
    }
};
                                #endif

                                #ifndef DEF_Meta_igy4Mg7p5Fc
                                #define DEF_Meta_igy4Mg7p5Fc
union Meta_igy4
{
    Meta256_GAqO meta;
    int Pool__next_free;
    explicit operator bool() const noexcept
    {
        return false
            || meta
            || Pool__next_free
        ;
    }
};
                                #endif

                                #ifndef DEF_Loop_UQM7b3lFTL7
                                #define DEF_Loop_UQM7b3lFTL7
struct Loop_UQM7
{
    FD_q1SK loop_fd;
    BitSet_mmp7 must_close;
    BitSet_mmp7 must_sigkill;
    Pool_X5U1 metas;
    Loop_UQM7(const Loop_UQM7&) = delete;
    Loop_UQM7(Loop_UQM7&&) = default;
    Loop_UQM7& operator=(const Loop_UQM7&) = delete;
    Loop_UQM7& operator=(Loop_UQM7&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || loop_fd
            || must_close
            || must_sigkill
            || metas
        ;
    }
};
                                #endif

                                #ifndef DEF_Kind_2p91
                                #define DEF_Kind_2p91
enum Kind_2p91: fu::u8
{
    Kind_2p91_ipv4_server = 1u,
    Kind_2p91_ipv4_server_socket = 2u,
    Kind_2p91_blocked_signals = 3u,
    Kind_2p91_watched_files = 4u,
    Kind_2p91_child_process_pidfd = 5u,
    Kind_2p91_child_process_stdin = 6u,
    Kind_2p91_child_process_stdout = 7u,
    Kind_2p91_child_process_stderr = 8u,
};
                                #endif

                                #ifndef DEF_SocketState_xV3L
                                #define DEF_SocketState_xV3L
inline constexpr SocketState_xV3L SocketState_xV3L_Readable = SocketState_xV3L(1u);
inline constexpr SocketState_xV3L SocketState_xV3L_Writeable = SocketState_xV3L(2u);
inline constexpr SocketState_xV3L SocketState_xV3L_ReadEOF = SocketState_xV3L(4u);
inline constexpr SocketState_xV3L SocketState_xV3L_WriteEOF = SocketState_xV3L(8u);
inline constexpr SocketState_xV3L SocketState_xV3L_WantsReadASAP = SocketState_xV3L(16u);
inline constexpr SocketState_xV3L SocketState_xV3L_WantsWriteASAP = SocketState_xV3L(32u);
inline constexpr SocketState_xV3L SocketState_xV3L_WillReadLater = SocketState_xV3L(64u);
inline constexpr SocketState_xV3L SocketState_xV3L_WillWriteLater = SocketState_xV3L(128u);

inline constexpr SocketState_xV3L MASK_SocketState_xV3L
    = SocketState_xV3L_Readable
    | SocketState_xV3L_Writeable
    | SocketState_xV3L_ReadEOF
    | SocketState_xV3L_WriteEOF
    | SocketState_xV3L_WantsReadASAP
    | SocketState_xV3L_WantsWriteASAP
    | SocketState_xV3L_WillReadLater
    | SocketState_xV3L_WillWriteLater;
                                #endif

                                #ifndef DEF_PID_05b1
                                #define DEF_PID_05b1
                                #endif

                                #ifndef DEF_WriteEnd_aNMe
                                #define DEF_WriteEnd_aNMe
                                #endif

                                #ifndef DEF_ReadEnd_6NTX
                                #define DEF_ReadEnd_6NTX
                                #endif
#ifdef __linux__
            #include <sys/epoll.h>
        #else
            #include <sys/event.h>
        #endif

#ifndef fu_NO_fdefs

Errno_88RA sig_listen_m5Wn(const BlockedSigmask_g3Eo& sm, Loop_UQM7& event_loop)
{
    Kind_2p91 kind;
    FD_q1SK fd;
    SocketState_xV3L state;
    unsigned user32;
    const uint64_t user_data = (kind = Kind_2p91_blocked_signals, fd = sm.signal_fd, state = {}, user32 = 0u, fu_ASSERT(((fd >= 0) ? (fd <= 0xffffff) : false)), (((uint64_t(kind) | (uint64_t(FD_q1SK(fd)) << 8ull)) | ((uint64_t(state) & STATE_MASK) << STATE_OFFSET)) | (uint64_t(user32) << 32ull)));
    Errno_88RA err {};
    #ifdef __linux__
        if (sm.signal_fd > 0) {
            struct epoll_event ev {};
            ev.data.u64 = user_data;
            ev.events = EPOLLIN;
            if (epoll_ctl(event_loop.loop_fd, EPOLL_CTL_ADD, sm.signal_fd, &ev))
                err = errno;
        }
    #else
        struct kevent evts[(sizeof_SigMask * 8)];
        int N = 0;
        for (int signo = 0; signo < (sizeof_SigMask * 8); signo++)
            if (sm.requested_sigmask & unsigned(1 << signo))
                EV_SET(&evts[N++], signo, EVFILT_SIGNAL, EV_ADD, 0, 0, (void*) user_data);

        if (N && kevent(event_loop.loop_fd, evts, N, NULL, 0, NULL))
            err = errno;
    #endif //;
    return err;
}

Errno_88RA unsubscribeAndClose_m5Wn(const FD_q1SK fd, Loop_UQM7& event_loop)
{
    const bool exists = remove_Na55(event_loop.must_close, int(fd));
    fu_ASSERT(exists);
    if (!exists)
        return EBADF;
    else
        return close_iPLv(fd);

}

Errno_88RA createSocketAndListen_doesntCloseOnError_m5Wn(const uint16_t port, FD_q1SK& server_fd)
{
    server_fd = -1;
    Errno_88RA err {};
    struct sockaddr_in serv_addr {};

    if ((server_fd = socket(AF_INET,
            #ifdef SOCK_NONBLOCK
                SOCK_NONBLOCK |
            #endif
            #ifdef SOCK_CLOEXEC
                SOCK_CLOEXEC |
            #endif
                SOCK_STREAM, 0)) < 0

        // MacOS fallbacks.
        #ifndef SOCK_NONBLOCK
        ||  fcntl(server_fd, F_SETFL, O_NONBLOCK) < 0
        #endif
        #ifndef SOCK_CLOEXEC
        ||  fcntl(server_fd, F_SETFD, FD_CLOEXEC) < 0
        #endif
    ) {
        err = errno;
        goto DONE;
    }

    // Create socket structure and bind to ip address.
    serv_addr.sin_family        = AF_INET;
    serv_addr.sin_addr.s_addr   = INADDR_ANY;
    serv_addr.sin_port          = htons(port);

    if (bind(server_fd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        err = errno;
        goto DONE;
    }

    // Start listening.
    if (listen(server_fd, 128) < 0) {
        err = errno;
        goto DONE;
    }

    DONE:;
    return err;
}

Errno_88RA acceptSocket_doesntCloseOnError_m5Wn(const int server_fd, FD_q1SK& socket_fd)
{
    Errno_88RA err {};
    struct sockaddr_in client_addr;
    int client_addr_len = sizeof(client_addr);

    // Incoming socket connection on the listening socket.
    if ((socket_fd =

        #ifdef SOCK_NONBLOCK
            accept4
        #else
            accept
        #endif
            (
                server_fd
                , (struct sockaddr*)  &client_addr
                , (socklen_t*)        &client_addr_len

        #ifdef SOCK_NONBLOCK
                , SOCK_NONBLOCK | SOCK_CLOEXEC
        #endif
            )) < 0

        // Macos & BSD - accepted sockets inherit NONBLOCK from listener,
        //  see https://github.com/dotnet/runtime/issues/25069.
        //
        // #ifndef SOCK_NONBLOCK
        // ||  fcntl(socket_fd, F_SETFL, O_NONBLOCK) < 0
        // #endif

        // MacOS fallback.
        #ifndef SOCK_CLOEXEC
        ||  fcntl(socket_fd, F_SETFD, FD_CLOEXEC) < 0
        #endif
    ) {
        err = errno;
        goto DONE;
    }

    #ifndef NDEBUG
    {
    #ifndef SOCK_NONBLOCK
        auto flags_fl = fcntl(socket_fd, F_GETFL);
        assert(flags_fl & O_NONBLOCK);
    #endif
    #ifndef SOCK_CLOEXEC
        auto flags_fd = fcntl(socket_fd, F_GETFD);
        assert(flags_fd & FD_CLOEXEC);
    #endif
    }
    #endif

    DONE:;
    return err;
}

Errno_88RA wakeUp_forRecvOrWrite_m5Wn(const FD_q1SK fd, const uint64_t user_data, const bool initial, const bool wakeUp_forRecv, const bool wakeUp_forWrite, const Loop_UQM7& event_loop)
{

    {
    };
    Errno_88RA err {};
    #ifdef __linux__
        struct epoll_event ev {};
        ev.data.u64 = user_data;

        ev.events = EPOLLONESHOT
                  | EPOLLRDHUP;

        ev.events |= wakeUp_forRecv  ? EPOLLIN  : (decltype(ev.events)) 0;
        ev.events |= wakeUp_forWrite ? EPOLLOUT : (decltype(ev.events)) 0;

        if (epoll_ctl(event_loop.loop_fd, initial ? EPOLL_CTL_ADD : EPOLL_CTL_MOD, fd, &ev))
            err = errno;
    #else
        struct kevent evts[2];

        auto add = EV_ADD | EV_ENABLE |
            #ifdef EV_DISPATCH
                   EV_DISPATCH;     // Should be cheaper, no other considerations.
            #else
                   EV_ONESHOT;
            #endif

        (void) initial;
        auto rem = EV_ADD | EV_DISABLE;

        auto ev_READ  = wakeUp_forRecv  ? add : rem;
        auto ev_WRITE = wakeUp_forWrite ? add : rem;

        EV_SET(&evts[0], fd, EVFILT_READ,  ev_READ,  0, 0, (void*) user_data);
        EV_SET(&evts[1], fd, EVFILT_WRITE, ev_WRITE, 0, 0, (void*) user_data);

        const int N = sizeof(evts) / sizeof(struct kevent);
        if (kevent(event_loop.loop_fd, evts, N, nullptr, 0, nullptr) < 0)
            err = errno;
    #endif //;
    return err;
}

Errno_88RA wakeUp_forAccept_m5Wn(const FD_q1SK fd, const uint64_t user_data, const Loop_UQM7& event_loop)
{

    {
    };
    Errno_88RA err {};
    #ifdef __linux__
        struct epoll_event ev {};
        ev.data.u64 = user_data;

        ev.events   = EPOLLEXCLUSIVE
                    | EPOLLIN;

        if (epoll_ctl(event_loop.loop_fd, EPOLL_CTL_ADD, fd, &ev))
            err = errno;
    #else
        struct kevent evts[1];

        EV_SET(&evts[0], fd, EVFILT_READ,  EV_ADD, 0, 0, (void*) user_data);

        const int N = sizeof(evts) / sizeof(struct kevent);
        if (kevent(event_loop.loop_fd, evts, N, nullptr, 0, nullptr) < 0)
            err = errno;
    #endif //;
    return err;
}

Errno_88RA wakeUp_forChild_m5Wn(const PID_05b1 pid, const FD_q1SK pid_fd, const WriteEnd_aNMe in_fd, const ReadEnd_6NTX out_fd, const ReadEnd_6NTX err_fd, const int event_id, const unsigned wants_streams, const bool initial, Loop_UQM7& event_loop)
{

    {
    };
    Kind_2p91 kind;
    FD_q1SK fd;
    SocketState_xV3L state;
    unsigned user32;
    const uint64_t user_data_pid = (kind = Kind_2p91_child_process_pidfd, fd = FD_q1SK(event_id), state = {}, user32 = 0u, fu_ASSERT(((fd >= 0) ? (fd <= 0xffffff) : false)), (((uint64_t(kind) | (uint64_t(FD_q1SK(fd)) << 8ull)) | ((uint64_t(state) & STATE_MASK) << STATE_OFFSET)) | (uint64_t(user32) << 32ull)));
    fu_ASSERT((!initial || (wants_streams == 7u)));
    Errno_88RA err {};
    #ifdef __linux__
        struct epoll_event ev {};

        auto add = initial ? EPOLL_CTL_ADD : EPOLL_CTL_MOD;

        (void) pid;

        if (pid_fd) {
            ev.data.u64 = user_data_pid;
            ev.events = EPOLLONESHOT | EPOLLIN;
            if (epoll_ctl(event_loop.loop_fd, add, pid_fd, &ev))
                err = errno;
        }

        if (in_fd && wants_streams & 1) {
            ev.data.u64 = (user_data_pid + 1ull);
            ev.events = EPOLLONESHOT | EPOLLOUT;
            if (epoll_ctl(event_loop.loop_fd, add, in_fd, &ev))
                err = errno;
        }

        if (out_fd && wants_streams & 2) {
            ev.data.u64 = (user_data_pid + 2ull);
            ev.events = EPOLLONESHOT | EPOLLIN;
            if (epoll_ctl(event_loop.loop_fd, add, out_fd, &ev))
                err = errno;
        }

        if (err_fd && wants_streams & 4) {
            ev.data.u64 = (user_data_pid + 3ull);
            ev.events = EPOLLONESHOT | EPOLLIN;
            if (epoll_ctl(event_loop.loop_fd, add, err_fd, &ev))
                err = errno;
        }
    #else
        auto add = EV_ADD | EV_ENABLE |
            #ifdef EV_DISPATCH
                   EV_DISPATCH;     // Should be cheaper, no other considerations.
            #else
                   EV_ONESHOT;
            #endif

        struct kevent evts[4];
        int N = 0;

        (void) pid_fd;

        if (initial)
            EV_SET(&evts[N++], pid, EVFILT_PROC, EV_ADD | EV_ONESHOT, NOTE_EXIT, 0,
                (void*) user_data_pid);

        if (in_fd && wants_streams & 1)
            EV_SET(&evts[N++], in_fd, EVFILT_WRITE, add, 0, 0,
                (void*) (user_data_pid + 1ull));

        if (out_fd && wants_streams & 2)
            EV_SET(&evts[N++], out_fd, EVFILT_READ, add, 0, 0,
                (void*) (user_data_pid + 2ull));

        if (err_fd && wants_streams & 4)
            EV_SET(&evts[N++], err_fd, EVFILT_READ, add, 0, 0,
                (void*) (user_data_pid + 3ull));

        if (N && kevent(event_loop.loop_fd, evts, N, nullptr, 0, nullptr) < 0)
            err = errno;
    #endif //;
    return err;
}

#endif
