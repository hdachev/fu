#include <cstdint>
#include <errno.h>
#include <fcntl.h>
#include <fu/int.h>
#include <fu/vec.h>
#include <arpa/inet.h>
#include <fu/assert.h>
#include <sys/socket.h>

typedef int s_Errno;
struct s_BlockedSigmask;
typedef unsigned s_SigMask;
typedef int s_FD;
struct s_Loop;
struct s_BitSet;
struct s_Pool_XXvEDg2hqPd;
union s_Meta;
struct s_Meta256;
enum s_Kind: fu::u8;
typedef fu::u8 s_SocketState;
typedef int s_PID;
typedef int s_WriteEnd;
typedef int s_ReadEnd;
bool remove_Na55O4zv(s_BitSet&, int);
s_Errno close_iPLv8aef(s_FD);

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
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

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
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

                                #ifndef DEF_s_Pool_XXvEDg2hqPd
                                #define DEF_s_Pool_XXvEDg2hqPd
struct s_Pool_XXvEDg2hqPd
{
    fu::vec<s_Meta> items;
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

                                #ifndef DEF_s_Meta256
                                #define DEF_s_Meta256
struct s_Meta256
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

                                #ifndef DEF_s_Meta
                                #define DEF_s_Meta
union s_Meta
{
    s_Meta256 meta;
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

                                #ifndef DEF_s_Loop
                                #define DEF_s_Loop
struct s_Loop
{
    s_FD loop_fd;
    s_BitSet must_close;
    s_BitSet must_sigkill;
    s_Pool_XXvEDg2hqPd metas;
    s_Loop(const s_Loop&) = delete;
    s_Loop(s_Loop&&) = default;
    s_Loop& operator=(const s_Loop&) = delete;
    s_Loop& operator=(s_Loop&&) = default;
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

                                #ifndef DEF_s_Kind
                                #define DEF_s_Kind
enum s_Kind: fu::u8
{
    s_Kind_ipv4_server = 1u,
    s_Kind_ipv4_server_socket = 2u,
    s_Kind_blocked_signals = 3u,
    s_Kind_watched_files = 4u,
    s_Kind_child_process_pidfd = 5u,
    s_Kind_child_process_stdin = 6u,
    s_Kind_child_process_stdout = 7u,
    s_Kind_child_process_stderr = 8u,
};
                                #endif

                                #ifndef DEF_s_SocketState
                                #define DEF_s_SocketState
inline constexpr s_SocketState s_SocketState_Readable = s_SocketState(1u);
inline constexpr s_SocketState s_SocketState_Writeable = s_SocketState(2u);
inline constexpr s_SocketState s_SocketState_ReadEOF = s_SocketState(4u);
inline constexpr s_SocketState s_SocketState_WriteEOF = s_SocketState(8u);
inline constexpr s_SocketState s_SocketState_WantsReadASAP = s_SocketState(16u);
inline constexpr s_SocketState s_SocketState_WantsWriteASAP = s_SocketState(32u);
inline constexpr s_SocketState s_SocketState_WillReadLater = s_SocketState(64u);
inline constexpr s_SocketState s_SocketState_WillWriteLater = s_SocketState(128u);

inline constexpr s_SocketState MASK_s_SocketState
    = s_SocketState_Readable
    | s_SocketState_Writeable
    | s_SocketState_ReadEOF
    | s_SocketState_WriteEOF
    | s_SocketState_WantsReadASAP
    | s_SocketState_WantsWriteASAP
    | s_SocketState_WillReadLater
    | s_SocketState_WillWriteLater;
                                #endif

                                #ifndef DEF_s_PID
                                #define DEF_s_PID
                                #endif

                                #ifndef DEF_s_WriteEnd
                                #define DEF_s_WriteEnd
                                #endif

                                #ifndef DEF_s_ReadEnd
                                #define DEF_s_ReadEnd
                                #endif
#ifdef __linux__
            #include <sys/epoll.h>
        #else
            #include <sys/event.h>
        #endif
#ifdef __linux__
            #include <sys/epoll.h>
        #else
            #include <sys/event.h>
        #endif
#ifdef __linux__
            #include <sys/epoll.h>
        #else
            #include <sys/event.h>
        #endif

#ifndef fu_NO_fdefs

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

s_Errno sig_listen(const s_BlockedSigmask& sm, s_Loop& event_loop)
{
    uint64_t BL_1_v {};
    const uint64_t user_data = (__extension__ (
    {
        const s_Kind kind = s_Kind_blocked_signals;
        const s_FD fd = sm.signal_fd;
        const s_SocketState state = s_SocketState{};
        const unsigned user32 = 0u;
        fu_ASSERT(((fd >= 0) ? (fd <= 0xffffff) : false));
        BL_1_v = ((((uint64_t(kind) | (uint64_t(s_FD(fd)) << 8ull)) | ((uint64_t(state) & STATE_MASK) << STATE_OFFSET)) | (uint64_t(user32) << 32ull)));
    (void)0;}), BL_1_v);
    s_Errno err {};
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

s_Errno unsubscribeAndClose(const s_FD fd, s_Loop& event_loop)
{
    const bool exists = remove_Na55O4zv(event_loop.must_close, int(fd));
    fu_ASSERT(exists);
    if (!exists)
        return EBADF;
    else
        return close_iPLv8aef(fd);

}

s_Errno createSocketAndListen_doesntCloseOnError(const uint16_t port, s_FD& server_fd)
{
    server_fd = -1;
    s_Errno err {};
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

s_Errno acceptSocket_doesntCloseOnError(const int server_fd, s_FD& socket_fd)
{
    s_Errno err {};
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

s_Errno wakeUp_forRecvOrWrite(const s_FD fd, const uint64_t user_data, const bool initial, const bool wakeUp_forRecv, const bool wakeUp_forWrite, const s_Loop& event_loop)
{

    {
    };
    s_Errno err {};
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

s_Errno wakeUp_forAccept(const s_FD fd, const uint64_t user_data, const s_Loop& event_loop)
{

    {
    };
    s_Errno err {};
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

s_Errno wakeUp_forChild(const s_PID pid, const s_FD pid_fd, const s_WriteEnd in_fd, const s_ReadEnd out_fd, const s_ReadEnd err_fd, const int event_id, const unsigned wants_streams, const bool initial, s_Loop& event_loop)
{

    {
    };
    uint64_t BL_2_v {};
    const uint64_t user_data_pid = (__extension__ (
    {
        const s_Kind kind = s_Kind_child_process_pidfd;
        const s_FD fd = s_FD(event_id);
        const s_SocketState state = s_SocketState{};
        const unsigned user32 = 0u;
        fu_ASSERT(((fd >= 0) ? (fd <= 0xffffff) : false));
        BL_2_v = ((((uint64_t(kind) | (uint64_t(s_FD(fd)) << 8ull)) | ((uint64_t(state) & STATE_MASK) << STATE_OFFSET)) | (uint64_t(user32) << 32ull)));
    (void)0;}), BL_2_v);
    fu_ASSERT((!initial || (wants_streams == 7u)));
    s_Errno err {};
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
