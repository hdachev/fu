#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/LEGACY_slice.h>

enum s_Special: fu::u8;
typedef uint16_t s_BuildScheme;
enum s_RunMode: fu::u8;
struct s_BuildOutput;
struct s_TestOutput;
typedef int s_ExitStatus;
fu::str cwd_5u3xiGA0();
fu::str gcc_version_uGHE7p6t();
void runTests();
static void cli_handle_Dx4mXF43(fu::view<fu::str>, const fu::str&);
fu::str join_qZI0kCzt(fu::view<char>, const fu::str&);
s_BuildScheme tryGetScheme_uGHE7p6t(fu::view<char>);
s_BuildOutput compile_and_build_Tsi8gRTk(const fu::str&, const fu::str&, const fu::str&, const fu::str&, const fu::str&, const fu::str&, s_RunMode, s_BuildScheme, fu::view<fu::str>, fu::view<fu::str>);
fu::str qBAD_e44UlzzA(const fu::str&);

                                #ifndef DEF_s_Special
                                #define DEF_s_Special
enum s_Special: fu::u8
{
    s_Special_Nothing = 1u,
    s_Special_Help = 2u,
    s_Special_Version = 3u,
};
                                #endif

                                #ifndef DEF_s_BuildScheme
                                #define DEF_s_BuildScheme
inline constexpr s_BuildScheme s_BuildScheme_shared = s_BuildScheme(1u);
inline constexpr s_BuildScheme s_BuildScheme_hotswap = s_BuildScheme(2u);
inline constexpr s_BuildScheme s_BuildScheme_nocache = s_BuildScheme(4u);
inline constexpr s_BuildScheme s_BuildScheme_notest = s_BuildScheme(8u);
inline constexpr s_BuildScheme s_BuildScheme_nocache_tests = s_BuildScheme(16u);
inline constexpr s_BuildScheme s_BuildScheme_watch = s_BuildScheme(32u);
inline constexpr s_BuildScheme s_BuildScheme_debuggable = s_BuildScheme(64u);
inline constexpr s_BuildScheme s_BuildScheme_unoptimized = s_BuildScheme(128u);
inline constexpr s_BuildScheme s_BuildScheme_assertions = s_BuildScheme(256u);
inline constexpr s_BuildScheme s_BuildScheme_TODO_FIX_retail = s_BuildScheme(512u);

inline constexpr s_BuildScheme MASK_s_BuildScheme
    = s_BuildScheme_shared
    | s_BuildScheme_hotswap
    | s_BuildScheme_nocache
    | s_BuildScheme_notest
    | s_BuildScheme_nocache_tests
    | s_BuildScheme_watch
    | s_BuildScheme_debuggable
    | s_BuildScheme_unoptimized
    | s_BuildScheme_assertions
    | s_BuildScheme_TODO_FIX_retail;
                                #endif

                                #ifndef DEF_s_RunMode
                                #define DEF_s_RunMode
enum s_RunMode: fu::u8
{
    s_RunMode_None = 0u,
    s_RunMode_Normally = 1u,
    s_RunMode_Testsuite = 2u,
    s_RunMode_CompilerTestcase = 3u,
    s_RunMode_EnsureExecutableButDontRun = 4u,
};
                                #endif

                                #ifndef DEF_s_ExitStatus
                                #define DEF_s_ExitStatus
                                #endif

                                #ifndef DEF_s_TestOutput
                                #define DEF_s_TestOutput
struct s_TestOutput
{
    s_ExitStatus status;
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

                                #ifndef DEF_s_BuildOutput
                                #define DEF_s_BuildOutput
struct s_BuildOutput
{
    fu::str executable;
    fu::vec<fu::str> watch_list;
    s_TestOutput output;
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

#ifndef fu_NO_fdefs

static fu::str next_Dx4mXF43(fu::view<fu::str> argv, int& idx)
{
    const int i = idx++;
    if (i < argv.size())
        return fu::str(argv[i]);
    else
        return ""_fu;

}

                                #ifndef DEF_x3Cx3E_XrkW2YUZsRk
                                #define DEF_x3Cx3E_XrkW2YUZsRk
inline int x3Cx3E_XrkW2YUZ(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_OFzwR3BaA9j
                                #define DEF_x3Cx3E_OFzwR3BaA9j
inline int x3Cx3E_OFzwR3Ba(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_bv5nK4Klcs3
                                #define DEF_x3Cx3E_bv5nK4Klcs3
inline int x3Cx3E_bv5nK4Kl(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_XrkW2YUZ(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_OFzwR3Ba(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_KFMeZhJSBE8
                                #define DEF_x3Dx3D_KFMeZhJSBE8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

                                #ifndef DEF_ends_xi9jPc3JTZ1
                                #define DEF_ends_xi9jPc3JTZ1
inline bool ends_xi9jPc3J(fu::view<fu::str> a, fu::view<char> with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_find_yP7FbxFZnZ0
                                #define DEF_find_yP7FbxFZnZ0
inline int find_yP7FbxFZ(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_find_tnDs1wBzL75
                                #define DEF_find_tnDs1wBzL75
inline int find_tnDs1wBz(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_yP7FbxFZ(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_replace_yceGUkFlwZf
                                #define DEF_replace_yceGUkFlwZf
inline fu::str replace_yceGUkFl(const fu::str& str, const char all, fu::view<char> with)
{
    /*MOV*/ fu::str result {};

    {
        int last = 0;
        int next = 0;
        const int N = 1;
        while (((next = find_tnDs1wBz(str, all, last)) >= 0))
        {

            {
                fu::str substr = fu::slice(str, last, next);
                const bool first = !last;
                if (!first)
                    result += with;

                result += substr;
            };
            last = (next + N);
        };
        if (last)
        {
            fu::str substr = fu::slice(str, last);
            result += with;
            result += substr;
        }
        else
            return fu::str(str);

    };
    return /*NRVO*/ result;
}
                                #endif

static void cli_handle_special_Dx4mXF43(const fu::str& self, const s_Special special)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_4 {};
    fu::str x_5 {};
    fu::str x_6 {};
    fu::str x_7 {};
    fu::str x_8 {};
    fu::str x_9 {};
    fu::str x_10 {};

    fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = "\nfu-0    The Fu Programming Language"_fu, x)) }));
    if (special == s_Special_Nothing)
    {
        fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x_1 = "\n        To get started:\n            echo 'fn main() { println(\"Hello world!\"); 0 }' >> hello.fu\n\n        Build it:\n            "_fu, x_1)), fu::str(self), static_cast<fu::str&&>((x_2 = " -b hello.fu\n\n        Run it:\n            ./hello\n                Hello world!\n"_fu, x_2)) }));
    }
    else if (special == s_Special_Help)
    {
        fu::println((fu::slate<9, fu::str> { static_cast<fu::str&&>((x_3 = "\nUSAGE   "_fu, x_3)), fu::str(self), static_cast<fu::str&&>((x_4 = " [options] name.fu\n        Without options, type-check and exit without effect.\n\n        "_fu, x_4)), fu::str(self), static_cast<fu::str&&>((x_5 = " -b name.fu\n        Build name.fu, output a binary in the same directory.\n\n        "_fu, x_5)), fu::str(self), static_cast<fu::str&&>((x_6 = " --bin ./bin/name name.fu\n        Build name.fu, output a binary at ./bin/name\n\n        "_fu, x_6)), fu::str(self), static_cast<fu::str&&>((x_7 = " -r name.fu\n        Run name.fu without outputting a binary.\n\nOPTIONS -b, --bin FILE\n        Emit a binary,\n            -b does not take a FILE argument,\n            and outputs the binary at ./name\n\n        -c, --cpp DIR\n        Emit intermedite c++ source code,\n            -c does not take a DIR argument,\n            and outputs a .cpp file next to each .fu file.\n\n        -o, --obj DIR\n        Emit object files,\n            -o does not take a DIR argument,\n            and outputs an .o file next to each .fu file.\n\n        --debug\n        --release\n        --reldeb\n        --retail\n        Selects build scheme, default is --release.\n\n        -r, --run\n        Run name.fu immediately.\n\n        -w, --watch\n        Watch source files contributing to name.fu\n            and rebuild and/or rerun as per --bin or --run\n            on every source file change.\n\n        -h, --hotswap\n        Useful when combined with --run and --watch,\n            will reload all functions marked `hotswap`\n            instead of killing and restarting the executable.\n"_fu, x_7)) }));
    }
    else if (special == s_Special_Version)
    {
        fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x_8 = "\n        gcc --version:\n            "_fu, x_8)), static_cast<fu::str&&>((x_9 = replace_yceGUkFl(gcc_version_uGHE7p6t(), '\n', "\n            "_fu), x_9)), static_cast<fu::str&&>((x_10 = "\n"_fu, x_10)) }));
    };
}

                                #ifndef DEF_FU_ROOT
                                #define DEF_FU_ROOT
extern const fu::str FU_ROOT;
                                #endif

void buildCompiler()
{
    cli_handle_Dx4mXF43((fu::slate<6, fu::str> { "fu"_fu, "--bin"_fu, "bin/fu"_fu, "--cpp"_fu, "cpp"_fu, "src/cli.fu"_fu }), FU_ROOT);
}

static fu::str abs_Dx4mXF43(const fu::str& path, fu::view<char> cwd)
{
    if (path && (path[0] != '-'))
        return join_qZI0kCzt(cwd, path);
    else
    {
        return fu::str{};
    };
}

static void option_Dx4mXF43(fu::view<char> sHort, fu::view<char> lOng, const int o, fu::str& dir, fu::view<fu::str> argv, fu::view<char> cwd, int& idx, int& options, fu::str& val, fu::str& opt)
{
    if ((opt == sHort) || (opt == lOng))
    {
        options |= o;
        if (opt == lOng)
        {
            if (dir)
                fu::fail((((opt + ": already set to `"_fu) + dir) + "`."_fu));
            else
            {
                fu::str _0 {};
                dir = ((_0 = abs_Dx4mXF43(val, cwd)) ? static_cast<fu::str&&>(_0) : fu::fail((((((((("Option "_fu + lOng) + " expects a path,"_fu) + "\n\tgot `"_fu) + val) + "`,"_fu) + "\n\ttry `"_fu) + lOng) + " rel/or/abs/dir/`."_fu)));
                val = next_Dx4mXF43(argv, idx);
            };
        };
        opt = ""_fu;
    };
}

                                #ifndef DEF_ends_JkFJYOhRS8a
                                #define DEF_ends_JkFJYOhRS8a
inline bool ends_JkFJYOhR(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_starts_hRi5tkxndc1
                                #define DEF_starts_hRi5tkxndc1
inline bool starts_hRi5tkxn(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

static void passthrough_Dx4mXF43(fu::view<char> opt, fu::vec<fu::str>& which, fu::view<fu::str> argv, int& idx)
{
    if (next_Dx4mXF43(argv, idx) == opt)
    {
        for (; ; )
        {
            /*MOV*/ fu::str val = next_Dx4mXF43(argv, idx);
            if (!val || starts_hRi5tkxn(val, "--"_fu))
                break;
            else
                which += static_cast<fu::str&&>(val);

        };
    };
    idx--;
}

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu::str DEFAULT_WORKSPACE;
                                #endif

static void cli_handle_Dx4mXF43(fu::view<fu::str> argv, const fu::str& cwd)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};
    fu::str x_4 {};
    fu::str x_5 {};
    fu::str x_6 {};

    int idx = 0;
    /*MOV*/ fu::str self = next_Dx4mXF43(argv, idx);
    bool hints = false;
    fu_DEFER(if (hints)
    {
        fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x = "        "_fu, x)), static_cast<fu::str&&>(self), static_cast<fu::str&&>((x_1 = " --help for more options.\n"_fu, x_1)) }));
    });
    s_Special special {};
    if (argv.size() == 1)
    {
        hints = true;
        special = s_Special_Nothing;
    }
    else if (ends_xi9jPc3J(argv, "--help"_fu))
        special = s_Special_Help;
    else if (ends_xi9jPc3J(argv, "--version"_fu))
        special = s_Special_Version;

    if (special)
        cli_handle_special_Dx4mXF43(self, special);
    else
    {
        if (argv.size() == 2)
        {
            fu::view<char> cmd = argv[1];
            if (cmd == "self"_fu)
            {
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_2 = "\n\tRunning tests ...\n"_fu, x_2)) }));
                runTests();
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_3 = "\n\tRebuilding self ...\n"_fu, x_3)) }));
                buildCompiler();
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_4 = "\n\tRebuilt self.\n"_fu, x_4)) }));
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
        s_BuildScheme bscheme {};
        s_RunMode runmode {};
        s_BuildScheme bflags {};
        fu::vec<fu::str> flags_cc {};
        fu::vec<fu::str> flags_ld {};
        fu::str val = next_Dx4mXF43(argv, idx);
        while ((val.size() > 1) && (val[0] == '-'))
        {
            fu::str opt { val };
            if (opt[1] != '-')
            {
                opt = fu::str { fu::slate<1, char> { opt[1] } };
                val = ('-' + fu::slice(val, 2));
                if (val == "-"_fu)
                    val = next_Dx4mXF43(argv, idx);

            }
            else
                val = next_Dx4mXF43(argv, idx);

            option_Dx4mXF43("-"_fu, "--src"_fu, 0, dir_src, argv, cwd, idx, options, val, opt);
            option_Dx4mXF43("c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp, argv, cwd, idx, options, val, opt);
            option_Dx4mXF43("o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj, argv, cwd, idx, options, val, opt);
            option_Dx4mXF43("b"_fu, "--bin"_fu, EMIT_BIN, bin, argv, cwd, idx, options, val, opt);
            if (opt == "d"_fu)
                opt = "--debug"_fu;

            if ((opt == "--debug"_fu) || (opt == "--reldeb"_fu) || (opt == "--retail"_fu))
            {
                if (bscheme)
                    fu::fail((((opt + ": Scheme already set to `"_fu) + opt) + "`."_fu));
                else
                    bscheme = tryGetScheme_uGHE7p6t(fu::slice(opt, 2));

            }
            else if ((opt == "--watch"_fu) || (opt == "w"_fu))
                bflags |= s_BuildScheme_watch;
            else if ((opt == "--run"_fu) || (opt == "r"_fu))
                runmode = s_RunMode_Normally;
            else if ((opt == "--hotswap"_fu) || (opt == "h"_fu))
                bflags |= s_BuildScheme_hotswap;
            else if (opt == "--shared"_fu)
                bflags |= s_BuildScheme_shared;
            else if (opt == "--nocache"_fu)
                bflags |= s_BuildScheme_nocache;
            else if (opt == "--notest"_fu)
                bflags |= s_BuildScheme_notest;
            else if ((opt == "--test"_fu) || (opt == "t"_fu))
                bflags |= s_BuildScheme_nocache_tests;
            else if (opt)
                fu::fail((("Unknown option: `"_fu + opt) + "`."_fu));

        };
        if (options & EMIT_CPP)
        {
            if (!dir_src)
                dir_src = cwd;

            if (!dir_cpp)
                dir_cpp = dir_src;

        };
        fu::str _0 {};
        fu::str fname = ((_0 = abs_Dx4mXF43(val, cwd)) ? static_cast<fu::str&&>(_0) : fu::fail(("Missing filename argument, a valid example is:"_fu + "\n\t`fu file.fu`."_fu)));
        if (options & EMIT_BIN)
        {
            if (!(bin))
                bin = (ends_JkFJYOhR(fname, ".fu"_fu) ? fu::slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu));

        };
        passthrough_Dx4mXF43("--cflags"_fu, flags_cc, argv, idx);
        passthrough_Dx4mXF43("--libs"_fu, flags_ld, argv, idx);

        {
            fu::str opt_1 = next_Dx4mXF43(argv, idx);
            if (opt_1)
                fu::fail((("Leftover option: `"_fu + opt_1) + "`."_fu));

        };
        if (s_BuildScheme((bflags & s_BuildScheme_notest)) && s_BuildScheme((bflags & s_BuildScheme_nocache_tests)))
            fu::fail("Both --test and --notest options provided."_fu);
        else
        {
            compile_and_build_Tsi8gRTk(fname, DEFAULT_WORKSPACE, bin, dir_obj, dir_src, dir_cpp, runmode, s_BuildScheme((bscheme | bflags)), flags_cc, flags_ld);
            if (!dir_cpp && !dir_obj && !bin && !runmode)
            {
                hints = true;
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_5 = "   HINT Neither --bin nor --run options provided, doing nothing."_fu, x_5)) }));
            };
            if (s_BuildScheme((bflags & s_BuildScheme_hotswap)) && (!s_BuildScheme((bflags & s_BuildScheme_watch)) || !runmode))
            {
                hints = true;
                fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x_6 = "   HINT --hotswap is not very useful without both --watch and --run."_fu, x_6)) }));
            };
        };
    };
}

                                #ifndef DEF___nE7tAGdOC58
                                #define DEF___nE7tAGdOC58
inline static void _nE7tAGdO(fu::view<fu::str> argv)
{
    cli_handle_Dx4mXF43(argv, cwd_5u3xiGA0());
}
                                #endif

                                #ifndef DEF_try_or_print_error_rrhCObQhmn4
                                #define DEF_try_or_print_error_rrhCObQhmn4
inline int try_or_print_error_rrhCObQh(const bool beep, fu::view<fu::str> argv)
{
    // Hoisted:
    fu::str x {};


    try
    {
        _nE7tAGdO(argv);
    }
    catch (const std::exception& o_0)
    {
        fu::str e = fu::to_str(o_0.what());

    {
        fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = (((("\n"_fu + (beep ? "\x07"_fu : fu::str{})) + qBAD_e44UlzzA("  ERROR "_fu)) + e) + (!ends_JkFJYOhR(e, "\n"_fu) ? "\n"_fu : fu::str{})), x)) }));
        return 1;
    }
    }
;
    return 0;
}
                                #endif

int fu_MAIN(fu::view<fu::str> argv)
{
    return try_or_print_error_rrhCObQh(false, argv);
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
