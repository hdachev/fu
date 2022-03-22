
#include <fu/default.h>
#include <fu/init_priority.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

fu_STR cwd_OvAHpuKu();
fu_STR join_lq7BzT61(fu::view<char>, const fu_STR&);
int self_test_n07RecyR();
static int cli_handle_JsZC3dIZ(fu::view<fu_STR>, const fu_STR&);
static void runTestsAndBuildCompiler_6GAg88gF();
void build_L8bvuAIR(const fu_STR&, bool, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, fu::view<char>, const fu_VEC<fu_STR>&, const fu_VEC<fu_STR>&);
void runTests_n07RecyR();

#ifndef FU_NO_FDEFs

static const fu_STR& next_gjrd4WUD(int& idx, fu::view<fu_STR> argv)
{
    const int i = idx++;
    if (i < argv.size())
        return argv[i];

    return (*(const fu_STR*)fu::NIL);
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
extern const fu_STR PRJDIR;
                                #endif

static void runTestsAndBuildCompiler_6GAg88gF()
{
    runTests_n07RecyR();
    cli_handle_JsZC3dIZ((fu::slate<5, fu_STR> { "fu"_fu, "--bin"_fu, "bin/fu"_fu, "-c"_fu, "src/cli.fu"_fu }), PRJDIR);
}

static fu_STR abs_tiotU1Mq(const fu_STR& path, fu::view<char> cwd)
{
    return path && (path[0] != '-') ? join_lq7BzT61(cwd, path) : fu_STR{};
}

static void option_5LMf8p34(fu::view<char> sHort, fu::view<char> lOng, const int o, fu_STR& dir, fu_STR& opt, int& options, fu_STR& val, fu::view<char> cwd, int& idx, fu::view<fu_STR> argv)
{
    if ((opt == sHort) || (opt == lOng))
    {
        options |= o;
        if (opt == lOng)
        {
            if (dir)
                fu::fail((((opt + ": already set to `"_fu) + dir) + "`."_fu));

            fu_STR _0 {};
            dir = ((_0 = abs_tiotU1Mq(val, cwd)) ? static_cast<fu_STR&&>(_0) : fu::fail((((((((("Option "_fu + lOng) + " expects a path,"_fu) + "\n\tgot `"_fu) + val) + "`,"_fu) + "\n\ttry `"_fu) + lOng) + " rel/or/abs/dir/`."_fu)));
            val = next_gjrd4WUD(idx, argv);
        };
        opt = fu_STR{};
    };
}

                                #ifndef DEFt_ends_KclJlPSO
                                #define DEFt_ends_KclJlPSO
inline bool ends_KclJlPSO(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEFt_starts_KclJlPSO
                                #define DEFt_starts_KclJlPSO
inline bool starts_KclJlPSO(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE;
                                #endif

static int cli_handle_JsZC3dIZ(fu::view<fu_STR> argv, const fu_STR& cwd)
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;
    fu_STR x_4;

    int idx = 0;
    const fu_STR& self = next_gjrd4WUD(idx, argv);
    if (argv.size() == 1)
    {
        const fu_STR* BL_2_v;
        fu::println((fu::slate<2, fu_STR> { fu_STR((__extension__ (
        {
            x = "\n\tHello! "_fu;
            BL_2_v = &(x);
        (void)0;}), *BL_2_v)), fu_STR(((void)void(), self)) }));
        const fu_STR* BL_3_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x_1 = "\tNothing to do, running a quick self test.\n"_fu;
            BL_3_v = &(x_1);
        (void)0;}), *BL_3_v)) }));
        self_test_n07RecyR();
        const fu_STR* BL_4_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x_2 = "\tEverything checks out."_fu;
            BL_4_v = &(x_2);
        (void)0;}), *BL_4_v)) }));
        const fu_STR* BL_5_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x_3 = "\tTry `fu file.fu`.\n"_fu;
            BL_5_v = &(x_3);
        (void)0;}), *BL_5_v)) }));
        return 0;
    };
    if ((argv.size() == 2) && (argv[1] == "self"_fu))
    {
        const fu_STR* BL_7_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x_4 = "\n\tRunning test suite and rebuilding self ...\n"_fu;
            BL_7_v = &(x_4);
        (void)0;}), *BL_7_v)) }));
        self_test_n07RecyR();
        runTestsAndBuildCompiler_6GAg88gF();
        return 0;
    };
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
    fu_VEC<fu_STR> flags_cc {};
    fu_VEC<fu_STR> flags_ld {};
    fu_STR val { next_gjrd4WUD(idx, argv) };
    while ((val.size() > 1) && (val[0] == '-'))
    {
        fu_STR opt { val };
        if (opt[1] != '-')
        {
            opt = fu_STR { fu::slate<1, char> { char(opt[1]) } };
            val = ('-' + fu::slice(val, 2));
            if (val == "-"_fu)
                val = next_gjrd4WUD(idx, argv);

        }
        else
            val = next_gjrd4WUD(idx, argv);

        option_5LMf8p34("-"_fu, "--src"_fu, 0, dir_src, opt, options, val, cwd, idx, argv);
        option_5LMf8p34("c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp, opt, options, val, cwd, idx, argv);
        option_5LMf8p34("o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj, opt, options, val, cwd, idx, argv);
        option_5LMf8p34("b"_fu, "--bin"_fu, EMIT_BIN, bin, opt, options, val, cwd, idx, argv);
        if ((opt == "--debug"_fu) || (opt == "--reldeb"_fu) || (opt == "--release"_fu) || (opt == "--retail"_fu))
        {
            if (scheme)
                fu::fail((((opt + ": Scheme already set to `"_fu) + opt) + "`."_fu));

            scheme = fu::slice(opt, 2);
            continue;
        };
        if ((opt == "--run"_fu) || (opt == "r"_fu))
        {
            run = true;
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
    fu_STR fname = ((_0 = abs_tiotU1Mq(val, cwd)) ? static_cast<fu_STR&&>(_0) : fu::fail(("Missing filename argument, a valid example is:"_fu + "\n\t`fu file.fu`."_fu)));
    if (options & EMIT_BIN)
    {
        if (!(bin))
            bin = (ends_KclJlPSO(fname, ".fu"_fu) ? fu::slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu));

    };

    {
        fu::view<char> opt_1 = next_gjrd4WUD(idx, argv);
        if (opt_1 == "--cflags"_fu)
        {
            for (; ; )
            {
                const fu_STR& val_1 = next_gjrd4WUD(idx, argv);
                if (!val_1 || starts_KclJlPSO(val_1, "--"_fu))
                    break;

                flags_cc += fu_STR(val_1);
            };
        };
        idx--;
    };

    {
        fu::view<char> opt_2 = next_gjrd4WUD(idx, argv);
        if (opt_2 == "--libs"_fu)
        {
            for (; ; )
            {
                const fu_STR& val_2 = next_gjrd4WUD(idx, argv);
                if (!val_2 || starts_KclJlPSO(val_2, "--"_fu))
                    break;

                flags_ld += fu_STR(val_2);
            };
        };
        idx--;
    };

    {
        const fu_STR& opt_3 = next_gjrd4WUD(idx, argv);
        if (opt_3)
            fu::fail((("Leftover option: `"_fu + opt_3) + "`."_fu));

    };
    build_L8bvuAIR(fname, run, DEFAULT_WORKSPACE, bin, dir_obj, dir_src, dir_cpp, scheme, flags_cc, flags_ld);
    return 0;
}

int fu_MAIN(fu::view<fu_STR> argv)
{
    return cli_handle_JsZC3dIZ(argv, cwd_OvAHpuKu());
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
