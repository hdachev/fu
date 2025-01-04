#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/default.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

enum Special_eIIt: fu::u8;
typedef uint16_t BuildScheme_Vgo7;
enum RunMode_n0r3: fu::u8;
struct BuildOutput_zaam;
struct TestOutput_OIXu;
typedef int ExitStatus_iZrm;
fu::str cwd_5u3x();
fu::str gcc_version_uGHE();
void runTests();
static void cli_handle_Dx4m(fu::view<fu::str>, fu::vec_range<char>);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
BuildScheme_Vgo7 tryGetScheme_uGHE(fu::view<char>);
BuildOutput_zaam compile_and_build_Tsi8(fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, fu::vec_range<char>, RunMode_n0r3, BuildScheme_Vgo7, fu::view<fu::str>, fu::view<fu::str>);
fu::str qBAD_e44U(fu::view<char>);

                                #ifndef DEF_Special_eIIt
                                #define DEF_Special_eIIt
enum Special_eIIt: fu::u8
{
    Special_eIIt_Nothing = 1u,
    Special_eIIt_Help = 2u,
    Special_eIIt_Version = 3u,
};
                                #endif

                                #ifndef DEF_BuildScheme_Vgo7
                                #define DEF_BuildScheme_Vgo7
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_shared = BuildScheme_Vgo7(1u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_hotswap = BuildScheme_Vgo7(2u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_nocache = BuildScheme_Vgo7(4u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_notest = BuildScheme_Vgo7(8u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_nocache_tests = BuildScheme_Vgo7(16u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_watch = BuildScheme_Vgo7(32u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_debuggable = BuildScheme_Vgo7(64u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_unoptimized = BuildScheme_Vgo7(128u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_assertions = BuildScheme_Vgo7(256u);
inline constexpr BuildScheme_Vgo7 BuildScheme_Vgo7_TODO_FIX_retail = BuildScheme_Vgo7(512u);

inline constexpr BuildScheme_Vgo7 MASK_BuildScheme_Vgo7
    = BuildScheme_Vgo7_shared
    | BuildScheme_Vgo7_hotswap
    | BuildScheme_Vgo7_nocache
    | BuildScheme_Vgo7_notest
    | BuildScheme_Vgo7_nocache_tests
    | BuildScheme_Vgo7_watch
    | BuildScheme_Vgo7_debuggable
    | BuildScheme_Vgo7_unoptimized
    | BuildScheme_Vgo7_assertions
    | BuildScheme_Vgo7_TODO_FIX_retail;
                                #endif

                                #ifndef DEF_RunMode_n0r3
                                #define DEF_RunMode_n0r3
enum RunMode_n0r3: fu::u8
{
    RunMode_n0r3_None = 0u,
    RunMode_n0r3_Normally = 1u,
    RunMode_n0r3_Testsuite = 2u,
    RunMode_n0r3_CompilerTestcase = 3u,
    RunMode_n0r3_EnsureExecutableButDontRun = 4u,
};
                                #endif

                                #ifndef DEF_ExitStatus_iZrm
                                #define DEF_ExitStatus_iZrm
                                #endif

                                #ifndef DEF_TestOutput_OIXu892afg8
                                #define DEF_TestOutput_OIXu892afg8
struct TestOutput_OIXu
{
    ExitStatus_iZrm status;
    int uniq_bytes;
    int uniq_count;
    int arc_bytes;
    int arc_count;
    explicit operator bool() const noexcept
    {
        return false
            || status
            || uniq_bytes
            || uniq_count
            || arc_bytes
            || arc_count
        ;
    }
};
                                #endif

                                #ifndef DEF_BuildOutput_zaamx5NImnj
                                #define DEF_BuildOutput_zaamx5NImnj
struct BuildOutput_zaam
{
    fu::str executable;
    fu::vec<fu::str> watch_list;
    TestOutput_OIXu output;
    explicit operator bool() const noexcept
    {
        return false
            || executable
            || watch_list
            || output
        ;
    }
};
                                #endif

                                #ifndef STR_49Vgx7sroDk
                                #define STR_49Vgx7sroDk
static const fu::str str_49Vgx7sroDk fu_INIT_PRIORITY(1016) { "        "_fu };
                                #endif

                                #ifndef STR_5wXu5VtWegj
                                #define STR_5wXu5VtWegj
static const fu::str str_5wXu5VtWegj fu_INIT_PRIORITY(1016) { " --help for more options.\n"_fu };
                                #endif

                                #ifndef STR_xrvMG9UNyfb
                                #define STR_xrvMG9UNyfb
static const fu::str str_xrvMG9UNyfb fu_INIT_PRIORITY(1016) { "\nfu-0    The Fu Programming Language"_fu };
                                #endif

                                #ifndef STR_YUYpqvOyHcg
                                #define STR_YUYpqvOyHcg
static const fu::str str_YUYpqvOyHcg fu_INIT_PRIORITY(1016) { "\n        To get started:\n            echo 'fn main() { println(\"Hello world!\"); 0 }' >> hello.fu\n\n        Build it:\n            "_fu };
                                #endif

                                #ifndef STR_fFlN75a90Xc
                                #define STR_fFlN75a90Xc
static const fu::str str_fFlN75a90Xc fu_INIT_PRIORITY(1016) { " -b hello.fu\n\n        Run it:\n            ./hello\n                Hello world!\n"_fu };
                                #endif

                                #ifndef STR_iSu3xyJ0Ik7
                                #define STR_iSu3xyJ0Ik7
static const fu::str str_iSu3xyJ0Ik7 fu_INIT_PRIORITY(1016) { "\nUSAGE   "_fu };
                                #endif

                                #ifndef STR_v2J5btAKThd
                                #define STR_v2J5btAKThd
static const fu::str str_v2J5btAKThd fu_INIT_PRIORITY(1016) { " [options] name.fu\n        Without options, type-check and exit without effect.\n\n        "_fu };
                                #endif

                                #ifndef STR_5i51MhIqVr7
                                #define STR_5i51MhIqVr7
static const fu::str str_5i51MhIqVr7 fu_INIT_PRIORITY(1016) { " -b name.fu\n        Build name.fu, output a binary in the same directory.\n\n        "_fu };
                                #endif

                                #ifndef STR_Q2vzNDxOKX9
                                #define STR_Q2vzNDxOKX9
static const fu::str str_Q2vzNDxOKX9 fu_INIT_PRIORITY(1016) { " --bin ./bin/name name.fu\n        Build name.fu, output a binary at ./bin/name\n\n        "_fu };
                                #endif

                                #ifndef STR_z2wTrdz5Lc7
                                #define STR_z2wTrdz5Lc7
static const fu::str str_z2wTrdz5Lc7 fu_INIT_PRIORITY(1016) { " -r name.fu\n        Run name.fu without outputting a binary.\n\nOPTIONS -b, --bin FILE\n        Emit a binary,\n            -b does not take a FILE argument,\n            and outputs the binary at ./name\n\n        -c, --cpp DIR\n        Emit intermedite c++ source code,\n            -c does not take a DIR argument,\n            and outputs a .cpp file next to each .fu file.\n\n        -o, --obj DIR\n        Emit object files,\n            -o does not take a DIR argument,\n            and outputs an .o file next to each .fu file.\n\n        --debug\n        --release\n        --reldeb\n        --retail\n        Selects build scheme, default is --release.\n\n        -r, --run\n        Run name.fu immediately.\n\n        -w, --watch\n        Watch source files contributing to name.fu\n            and rebuild and/or rerun as per --bin or --run\n            on every source file change.\n\n        -h, --hotswap\n        Useful when combined with --run and --watch,\n            will reload all functions marked `hotswap`\n            instead of killing and restarting the executable.\n"_fu };
                                #endif

                                #ifndef STR_u2B3ssmb9s5
                                #define STR_u2B3ssmb9s5
static const fu::str str_u2B3ssmb9s5 fu_INIT_PRIORITY(1016) { "\n        gcc --version:\n            "_fu };
                                #endif

                                #ifndef STR_jBqF6QCTdxl
                                #define STR_jBqF6QCTdxl
static const fu::str str_jBqF6QCTdxl fu_INIT_PRIORITY(1016) { "\n"_fu };
                                #endif

                                #ifndef STR_bk8COh7mtyf
                                #define STR_bk8COh7mtyf
static const fu::str str_bk8COh7mtyf fu_INIT_PRIORITY(1016) { "\n\tRunning tests ...\n"_fu };
                                #endif

                                #ifndef STR_HyHbtKkhWSb
                                #define STR_HyHbtKkhWSb
static const fu::str str_HyHbtKkhWSb fu_INIT_PRIORITY(1016) { "\n\tRebuilding self ...\n"_fu };
                                #endif

                                #ifndef STR_PG8aWVtaGz9
                                #define STR_PG8aWVtaGz9
static const fu::str str_PG8aWVtaGz9 fu_INIT_PRIORITY(1016) { "\n\tRebuilt self.\n"_fu };
                                #endif

                                #ifndef STR_A5mV79HsLEb
                                #define STR_A5mV79HsLEb
static const fu::str str_A5mV79HsLEb fu_INIT_PRIORITY(1016) { "Both --test and --notest options provided."_fu };
                                #endif

                                #ifndef STR_SDOheza2PJb
                                #define STR_SDOheza2PJb
static const fu::str str_SDOheza2PJb fu_INIT_PRIORITY(1016) { "   HINT Neither --bin nor --run options provided, doing nothing."_fu };
                                #endif

                                #ifndef STR_kH6AvwR68B8
                                #define STR_kH6AvwR68B8
static const fu::str str_kH6AvwR68B8 fu_INIT_PRIORITY(1016) { "   HINT --hotswap is not very useful without both --watch and --run."_fu };
                                #endif

#ifndef fu_NO_fdefs

static fu::vec_range<char> next_Dx4m(fu::view<fu::str> argv, int& idx)
{
    const int i = idx++;
    if (i < argv.size())
        return argv[i];
    else
        return (*(fu::str*)fu::NIL);

}

                                #ifndef DEF_x3Cx3E_odNTdyipeEj
                                #define DEF_x3Cx3E_odNTdyipeEj
inline int x3Cx3E_odNT(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YuqOPxIKAE3
                                #define DEF_x3Cx3E_YuqOPxIKAE3
inline int x3Cx3E_YuqO(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_j5CR7zKytVk
                                #define DEF_x3Cx3E_j5CR7zKytVk
inline int x3Cx3E_j5CR(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_odNT(a.size(), b.size());
    bool quick {};
    quick = a.m_data == b.m_data || cmp;
    if (quick)
        return cmp;
    else
    {
        for (int i = 0; (i < a.size()) && !cmp; i++)
            cmp = x3Cx3E_YuqO(a[i], b[i]);

        return cmp;
    };
}
                                #endif

                                #ifndef DEF_x3Dx3D_oVAS1y5c4ld
                                #define DEF_x3Dx3D_oVAS1y5c4ld
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_j5CR(a, b);
}
                                #endif

                                #ifndef DEF_ends_Z2w9BAXccm7
                                #define DEF_ends_Z2w9BAXccm7
inline bool ends_Z2w9(fu::view<fu::str> a, fu::view<char> with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_find_ZKsG2FXrtpg
                                #define DEF_find_ZKsG2FXrtpg
inline int find_ZKsG(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_find_rkz0SQgq7mk
                                #define DEF_find_rkz0SQgq7mk
inline int find_rkz0(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_ZKsG(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_replace_hjXfxcOXzya
                                #define DEF_replace_hjXfxcOXzya
inline fu::str replace_hjXf(fu::vec_range<char> str, const char all, fu::view<char> with)
{
    /*MOV*/ fu::str result {};

    {
        int last = 0;
        int next = 0;
        const int N = 1;
        while (((next = find_rkz0(str, all, last)) >= 0))
        {

            {
                fu::view<char> substr = fu::get_view(str, last, next);
                const bool first = !last;
                if (!first)
                    result += with;

                result += substr;
            };
            last = (next + N);
        };
        if (last)
        {
            fu::view<char> substr = fu::get_view(str, last);
            result += with;
            result += substr;
        }
        else
            return fu::str(str);

    };
    return /*NRVO*/ result;
}
                                #endif

static void cli_handle_special_Dx4m(fu::vec_range<char> self, const Special_eIIt special)
{
    const fu::str* x;
    fu::println(fu::view<fu::str> {{ fu::str((x = &(str_xrvMG9UNyfb), (*x))) }});
    if (special == Special_eIIt_Nothing)
    {
        const fu::str* x_1;
        const fu::str* x_2;
        fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_YUYpqvOyHcg), (*x_1))), fu::str(self), fu::str((x_2 = &(str_fFlN75a90Xc), (*x_2))) }});
    }
    else if (special == Special_eIIt_Help)
    {
        const fu::str* x_1;
        const fu::str* x_2;
        const fu::str* x_3;
        const fu::str* x_4;
        const fu::str* x_5;
        fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_iSu3xyJ0Ik7), (*x_1))), fu::str(self), fu::str((x_2 = &(str_v2J5btAKThd), (*x_2))), fu::str(self), fu::str((x_3 = &(str_5i51MhIqVr7), (*x_3))), fu::str(self), fu::str((x_4 = &(str_Q2vzNDxOKX9), (*x_4))), fu::str(self), fu::str((x_5 = &(str_z2wTrdz5Lc7), (*x_5))) }});
    }
    else if (special == Special_eIIt_Version)
    {
        const fu::str* x_1;
        fu::str x_2 {};
        const fu::str* x_3;
        fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_u2B3ssmb9s5), (*x_1))), (x_2 = replace_hjXf(gcc_version_uGHE(), '\n', "\n            "_view), x_2).const_cast_mut().destructive_move(), fu::str((x_3 = &(str_jBqF6QCTdxl), (*x_3))) }});
    };
}

extern const fu::str FU_ROOT;
void buildCompiler()
{
    cli_handle_Dx4m(fu::view<fu::str> {{ fu::str("fu"_fu), fu::str("--bin"_fu), fu::str("bin/fu"_fu), fu::str("--cpp"_fu), fu::str("cpp"_fu), fu::str("src/cli.fu"_fu) }}, FU_ROOT);
}

static fu::str abs_Dx4m(fu::vec_range<char> path, fu::view<char> cwd)
{
    if (path && (path[0] != '-'))
        return join_qZI0(cwd, path);
    else
    {
        return fu::str{};
    };
}

static void option_Dx4m(fu::view<char> sHort, fu::view<char> lOng, const int o, fu::vec_range_mut<char> dir, fu::view<fu::str> argv, fu::view<char> cwd, int& idx, int& options, fu::vec_range_mut<char> val, fu::vec_range_mut<char> opt)
{
    if ((opt == sHort) || (opt == lOng))
    {
        options |= o;
        if (opt == lOng)
        {
            if (dir)
                fu::fail((((opt + ": already set to `"_view) + dir) + "`."_view));
            else
            {
                fu::str _0 {};
                dir = ((_0 = abs_Dx4m(val, cwd)) ? static_cast<fu::str&&>(_0) : fu::fail((((((((("Option "_view + lOng) + " expects a path,"_view) + "\n\tgot `"_view) + val) + "`,"_view) + "\n\ttry `"_view) + lOng) + " rel/or/abs/dir/`."_view)));
                val = next_Dx4m(argv, idx);
            };
        };
        opt = fu::str{};
    };
}

                                #ifndef DEF_ends_OW45P9GlDid
                                #define DEF_ends_OW45P9GlDid
inline bool ends_OW45(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_starts_ojopLVekF87
                                #define DEF_starts_ojopLVekF87
inline bool starts_ojop(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

static void passthrough_Dx4m(fu::view<char> opt, fu::vec_range_mut<fu::str> which, fu::view<fu::str> argv, int& idx)
{
    if (next_Dx4m(argv, idx) == opt)
    {
        for (; ; )
        {
            fu::vec_range<char> val = next_Dx4m(argv, idx);
            if (!val || starts_ojop(val, "--"_view))
                break;
            else
                which += fu::str(val);

        };
    };
    idx--;
}

extern const fu::str DEFAULT_WORKSPACE;
static void cli_handle_Dx4m(fu::view<fu::str> argv, fu::vec_range<char> cwd)
{
    int idx = 0;
    fu::vec_range<char> self = next_Dx4m(argv, idx);
    bool hints = false;
    fu_DEFER(if (hints)
    {
        const fu::str* x;
        const fu::str* x_1;
        fu::println(fu::view<fu::str> {{ fu::str((x = &(str_49Vgx7sroDk), (*x))), fu::str(self), fu::str((x_1 = &(str_5wXu5VtWegj), (*x_1))) }});
    });
    Special_eIIt special {};
    if (argv.size() == 1)
    {
        hints = true;
        special = Special_eIIt_Nothing;
    }
    else if (ends_Z2w9(argv, "--help"_view))
        special = Special_eIIt_Help;
    else if (ends_Z2w9(argv, "--version"_view))
        special = Special_eIIt_Version;

    if (special)
        cli_handle_special_Dx4m(self, special);
    else
    {
        if (argv.size() == 2)
        {
            fu::view<char> cmd = argv[1];
            if (cmd == "self"_view)
            {
                const fu::str* x;
                fu::println(fu::view<fu::str> {{ fu::str((x = &(str_bk8COh7mtyf), (*x))) }});
                runTests();
                const fu::str* x_1;
                fu::println(fu::view<fu::str> {{ fu::str((x_1 = &(str_HyHbtKkhWSb), (*x_1))) }});
                buildCompiler();
                const fu::str* x_2;
                fu::println(fu::view<fu::str> {{ fu::str((x_2 = &(str_PG8aWVtaGz9), (*x_2))) }});
                return;
            };
        };
        const int EMIT_CPP = (1 << 0);
        const int EMIT_OBJ = (1 << 1);
        const int EMIT_BIN = (1 << 2);
        fu::str dir_src {};
        fu::str dir_cpp {};
        fu::str dir_obj {};
        fu::str bin {};
        int options {};
        BuildScheme_Vgo7 bscheme {};
        RunMode_n0r3 runmode {};
        BuildScheme_Vgo7 bflags {};
        fu::vec<fu::str> flags_cc {};
        fu::vec<fu::str> flags_ld {};
        fu::str val = fu::str(next_Dx4m(argv, idx));
        while ((val.size() > 1) && (val[0] == '-'))
        {
            fu::str opt = fu::str(val);
            if (opt[1] != '-')
            {
                opt = fu::vec<char> {{ opt[1] }};
                val = ('-' + fu::get_view(val, 2));
                if (val == "-"_view)
                    val = next_Dx4m(argv, idx);

            }
            else
                val = next_Dx4m(argv, idx);

            option_Dx4m("-"_view, "--src"_view, 0, dir_src, argv, cwd, idx, options, val, opt);
            option_Dx4m("c"_view, "--cpp"_view, EMIT_CPP, dir_cpp, argv, cwd, idx, options, val, opt);
            option_Dx4m("o"_view, "--obj"_view, EMIT_OBJ, dir_obj, argv, cwd, idx, options, val, opt);
            option_Dx4m("b"_view, "--bin"_view, EMIT_BIN, bin, argv, cwd, idx, options, val, opt);
            if (opt == "d"_view)
                opt = fu::str("--debug"_fu);

            if ((opt == "--debug"_view) || (opt == "--reldeb"_view) || (opt == "--retail"_view))
            {
                if (bscheme)
                    fu::fail((((opt + ": Scheme already set to `"_view) + opt) + "`."_view));
                else
                    bscheme = tryGetScheme_uGHE(fu::get_view(opt, 2));

            }
            else if ((opt == "--watch"_view) || (opt == "w"_view))
                bflags |= BuildScheme_Vgo7_watch;
            else if ((opt == "--run"_view) || (opt == "r"_view))
                runmode = RunMode_n0r3_Normally;
            else if ((opt == "--hotswap"_view) || (opt == "h"_view))
                bflags |= BuildScheme_Vgo7_hotswap;
            else if (opt == "--shared"_view)
                bflags |= BuildScheme_Vgo7_shared;
            else if (opt == "--nocache"_view)
                bflags |= BuildScheme_Vgo7_nocache;
            else if (opt == "--notest"_view)
                bflags |= BuildScheme_Vgo7_notest;
            else if ((opt == "--test"_view) || (opt == "t"_view))
                bflags |= BuildScheme_Vgo7_nocache_tests;
            else if (opt)
                fu::fail((("Unknown option: `"_view + opt) + "`."_view));

        };
        if (options & EMIT_CPP)
        {
            if (!dir_src)
                dir_src = cwd;

            if (!dir_cpp)
                dir_cpp = dir_src;

        };
        fu::str _0 {};
        fu::str fname = ((_0 = abs_Dx4m(val, cwd)) ? static_cast<fu::str&&>(_0) : fu::fail(("Missing filename argument, a valid example is:"_view + "\n\t`fu file.fu`."_view)));
        if (options & EMIT_BIN)
        {
            if (!(bin))
                bin = (ends_OW45(fname, ".fu"_view) ? fu::str(fu::get_range(fname, 0, (fname.size() - ".fu"_view.size()))) : (fname + ".exe"_view));

        };
        passthrough_Dx4m("--cflags"_view, flags_cc, argv, idx);
        passthrough_Dx4m("--libs"_view, flags_ld, argv, idx);

        {
            fu::view<char> opt = next_Dx4m(argv, idx);
            if (opt)
                fu::fail((("Leftover option: `"_view + opt) + "`."_view));

        };
        if (BuildScheme_Vgo7((bflags & BuildScheme_Vgo7_notest)) && BuildScheme_Vgo7((bflags & BuildScheme_Vgo7_nocache_tests)))
            fu::fail(fu::str(str_A5mV79HsLEb));
        else
        {
            compile_and_build_Tsi8(fname, DEFAULT_WORKSPACE, bin, dir_obj, dir_src, dir_cpp, runmode, BuildScheme_Vgo7((bscheme | bflags)), flags_cc, flags_ld);
            if (!dir_cpp && !dir_obj && !bin && !runmode)
            {
                hints = true;
                const fu::str* x;
                fu::println(fu::view<fu::str> {{ fu::str((x = &(str_SDOheza2PJb), (*x))) }});
            };
            if (BuildScheme_Vgo7((bflags & BuildScheme_Vgo7_hotswap)) && (!BuildScheme_Vgo7((bflags & BuildScheme_Vgo7_watch)) || !runmode))
            {
                hints = true;
                const fu::str* x;
                fu::println(fu::view<fu::str> {{ fu::str((x = &(str_kH6AvwR68B8), (*x))) }});
            };
        };
    };
}

                                #ifndef DEF___UVScffnvui5
                                #define DEF___UVScffnvui5
inline static void _UVSc(fu::view<fu::str> argv)
{
    cli_handle_Dx4m(argv, cwd_5u3x());
}
                                #endif

                                #ifndef DEF_try_or_print_error_lwlTHiPXnci
                                #define DEF_try_or_print_error_lwlTHiPXnci
inline int try_or_print_error_lwlT(const bool beep, fu::view<fu::str> argv)
{

    try
    {
        _UVSc(argv);
    }
    catch (const std::exception& o_0)
    {
        fu::str e = fu::to_str(o_0.what());

    {
        fu::str x {};
        fu::println(fu::view<fu::str> {{ (x = (((("\n"_view + (beep ? "\x07"_view : fu::view<char>{})) + qBAD_e44U("  ERROR "_view)) + e) + (!ends_OW45(e, "\n"_view) ? "\n"_view : fu::view<char>{})), x).const_cast_mut().destructive_move() }});
        return 1;
    }
    }
;
    return 0;
}
                                #endif

int fu_MAIN(fu::view<fu::str> argv)
{
    return try_or_print_error_lwlT(false, argv);
}

#endif

int main(int argc, char* argv[])
{
    fu::vec<fu::str> args;
    args.reserve(argc);

    for (int i = 0; i < argc; i++)
        args.push(fu::to_str(argv[i]));

    return fu_MAIN(static_cast<fu::vec<fu::str>&&>(args));
}
