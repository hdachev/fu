#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/default.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

fu_STR cwd_OvAHpuKu();
void runTests();
int buildCompiler();
fu_STR join_rMAWYyxW(fu::view<char>, const fu_STR&);
void compile_and_build_WldqJVVw(const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, fu::view<char>, bool, bool, bool, bool, const fu_VEC<fu_STR>&, const fu_VEC<fu_STR>&, unsigned);
static int cli_handle_M3oNHile(fu::view<fu_STR>, const fu_STR&);

#ifndef fu_NO_fdefs

static const fu_STR& next_zAcMuoZ2(fu::view<fu_STR> argv, int& idx)
{
    const int i = idx++;
    if (i < argv.size())
        return argv[i];
    else
        return (*(const fu_STR*)fu::NIL);

}

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_FUDIR
                                #define DEF_FUDIR
extern const fu_STR FUDIR;
                                #endif

int buildCompiler()
{
    return cli_handle_M3oNHile((fu::slate<5, fu_STR> { "fu"_fu, "--bin"_fu, "bin/fu"_fu, "-c"_fu, "src/cli.fu"_fu }), FUDIR);
}

static fu_STR abs_JjVQF13u(const fu_STR& path, fu::view<char> cwd)
{
    return path && (path[0] != '-') ? join_rMAWYyxW(cwd, path) : fu_STR{};
}

static void option_s9ZVVPmn(fu::view<char> sHort, fu::view<char> lOng, const int o, fu_STR& dir, fu::view<fu_STR> argv, fu::view<char> cwd, int& idx, int& options, fu_STR& val, fu_STR& opt)
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
                fu_STR _0 {};
                dir = ((_0 = abs_JjVQF13u(val, cwd)) ? static_cast<fu_STR&&>(_0) : fu::fail((((((((("Option "_fu + lOng) + " expects a path,"_fu) + "\n\tgot `"_fu) + val) + "`,"_fu) + "\n\ttry `"_fu) + lOng) + " rel/or/abs/dir/`."_fu)));
                val = next_zAcMuoZ2(argv, idx);
            };
        };
        opt = fu_STR{};
    };
}

                                #ifndef DEF_ends_Nz2mqu34wT8
                                #define DEF_ends_Nz2mqu34wT8
inline bool ends_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_starts_Nz2mqu34wT8
                                #define DEF_starts_Nz2mqu34wT8
inline bool starts_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE;
                                #endif

static int cli_handle_M3oNHile(fu::view<fu_STR> argv, const fu_STR& cwd)
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;
    fu_STR x_4;

    int idx = 0;
    const fu_STR& self = next_zAcMuoZ2(argv, idx);
    if (argv.size() == 1)
    {
        fu_STR* BL_2_v;
        fu_STR* BL_3_v;
        fu::println((fu::slate<3, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            x = "\tTry `"_fu;
            BL_2_v = &(x);
        (void)0;}), *BL_2_v)), fu_STR(self), static_cast<fu_STR&&>((__extension__ (
        {
            x_1 = " file.fu`.\n"_fu;
            BL_3_v = &(x_1);
        (void)0;}), *BL_3_v)) }));
        return 0;
    }
    else if ((argv.size() == 2) && (argv[1] == "self"_fu))
    {
        fu_STR* BL_5_v;
        fu::println((fu::slate<1, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            x_2 = "\n\tRunning tests ...\n"_fu;
            BL_5_v = &(x_2);
        (void)0;}), *BL_5_v)) }));
        runTests();
        fu_STR* BL_6_v;
        fu::println((fu::slate<1, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            x_3 = "\n\tRebuilding self ...\n"_fu;
            BL_6_v = &(x_3);
        (void)0;}), *BL_6_v)) }));
        buildCompiler();
        fu_STR* BL_7_v;
        fu::println((fu::slate<1, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            x_4 = "\n\tRebuilt self.\n"_fu;
            BL_7_v = &(x_4);
        (void)0;}), *BL_7_v)) }));
        return 0;
    }
    else
    {
        const int EMIT_CPP = (1 << 0);
        const int EMIT_OBJ = (1 << 1);
        const int EMIT_BIN = (1 << 2);
        fu_STR dir_src {};
        fu_STR dir_cpp {};
        fu_STR dir_obj {};
        fu_STR bin {};
        int options {};
        fu_STR scheme {};
        bool run {};
        bool shared {};
        bool hotswap {};
        bool nocache {};
        fu_VEC<fu_STR> flags_cc {};
        fu_VEC<fu_STR> flags_ld {};
        fu_STR val { next_zAcMuoZ2(argv, idx) };
        while ((val.size() > 1) && (val[0] == '-'))
        {
            fu_STR opt { val };
            if (opt[1] != '-')
            {
                opt = fu_STR { fu::slate<1, char> { char(opt[1]) } };
                val = ('-' + fu::slice(val, 2));
                if (val == "-"_fu)
                    val = next_zAcMuoZ2(argv, idx);

            }
            else
                val = next_zAcMuoZ2(argv, idx);

            option_s9ZVVPmn("-"_fu, "--src"_fu, 0, dir_src, argv, cwd, idx, options, val, opt);
            option_s9ZVVPmn("c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp, argv, cwd, idx, options, val, opt);
            option_s9ZVVPmn("o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj, argv, cwd, idx, options, val, opt);
            option_s9ZVVPmn("b"_fu, "--bin"_fu, EMIT_BIN, bin, argv, cwd, idx, options, val, opt);
            if ((opt == "--debug"_fu) || (opt == "--reldeb"_fu) || (opt == "--release"_fu) || (opt == "--retail"_fu))
            {
                if (scheme)
                    fu::fail((((opt + ": Scheme already set to `"_fu) + opt) + "`."_fu));
                else
                {
                    scheme = fu::slice(opt, 2);
                    continue;
                };
            }
            else if ((opt == "--run"_fu) || (opt == "r"_fu))
            {
                run = true;
                continue;
            }
            else if (opt == "--hotswap"_fu)
            {
                hotswap = true;
                continue;
            }
            else if (opt == "--shared"_fu)
            {
                shared = true;
                continue;
            }
            else if (opt == "--nocache"_fu)
            {
                nocache = true;
                continue;
            }
            else if (opt)
                fu::fail((("Unknown option: `"_fu + opt) + "`."_fu));

        };
        if (options & EMIT_CPP)
        {
            if (!dir_src)
                dir_src = (dir_cpp ? dir_cpp : cwd);

            if (!dir_cpp)
                dir_cpp = dir_src;

        };
        fu_STR _0 {};
        fu_STR fname = ((_0 = abs_JjVQF13u(val, cwd)) ? static_cast<fu_STR&&>(_0) : fu::fail(("Missing filename argument, a valid example is:"_fu + "\n\t`fu file.fu`."_fu)));
        if (options & EMIT_BIN)
        {
            if (!(bin))
                bin = (ends_Nz2mqu34(fname, ".fu"_fu) ? fu::slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu));

        };

        {
            fu::view<char> opt_1 = next_zAcMuoZ2(argv, idx);
            if (opt_1 == "--cflags"_fu)
            {
                for (; ; )
                {
                    const fu_STR& val_1 = next_zAcMuoZ2(argv, idx);
                    if (!val_1 || starts_Nz2mqu34(val_1, "--"_fu))
                        break;
                    else
                        flags_cc += fu_STR(val_1);

                };
            };
            idx--;
        };

        {
            fu::view<char> opt_2 = next_zAcMuoZ2(argv, idx);
            if (opt_2 == "--libs"_fu)
            {
                for (; ; )
                {
                    const fu_STR& val_2 = next_zAcMuoZ2(argv, idx);
                    if (!val_2 || starts_Nz2mqu34(val_2, "--"_fu))
                        break;
                    else
                        flags_ld += fu_STR(val_2);

                };
            };
            idx--;
        };

        {
            const fu_STR& opt_3 = next_zAcMuoZ2(argv, idx);
            if (opt_3)
                fu::fail((("Leftover option: `"_fu + opt_3) + "`."_fu));

        };
        compile_and_build_WldqJVVw(fname, DEFAULT_WORKSPACE, bin, dir_obj, dir_src, dir_cpp, scheme, run, shared, hotswap, nocache, flags_cc, flags_ld, 0u);
        return 0;
    };
}

int fu_MAIN(fu::view<fu_STR> argv)
{
    return cli_handle_M3oNHile(argv, cwd_OvAHpuKu());
}

#endif

int main(int argc, char* argv[])
{
    fu_VEC<fu_STR> args;
    args.reserve(argc);

    for (int i = 0; i < argc; i++)
        args.push(fu_TO_STR(argv[i]));

    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));
}
