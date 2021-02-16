#include <cstdint>
#include <fu/io.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <iostream>

fu_STR locate_PRJDIR();
fu_STR path_join(const fu_STR&, const fu_STR&);
int self_test();
static int cli_handle(const fu_VEC<fu_STR>&, const fu_STR&);
void build(const fu_STR&, bool, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&);
void runTests();
void saySomethingNice();

#ifndef FU_NO_FDEFs

static fu_STR next(const fu_VEC<fu_STR>& argv_0, int& idx_0)
{
    const int i = idx_0++;
    if (i < argv_0.size())
        return fu_STR(argv_0[i]);

    return fu_STR{};
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_STR PRJDIR = locate_PRJDIR();
                                #endif

static void runTestsAndBuildCompiler()
{
    runTests();
    saySomethingNice();
    cli_handle(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<5> { "fu"_fu, "--bin"_fu, "bin/fu"_fu, "-c"_fu, "src/cli.fu"_fu } }, PRJDIR);
}

static fu_STR abs(const fu_STR& cwd_0, const fu_STR& path)
{
    return path && (path[0] != std::byte('-')) ? path_join(cwd_0, path) : fu_STR{};
}

static void option(const fu_VEC<fu_STR>& argv_0, const fu_STR& cwd_0, int& idx_0, int& options_0, fu_STR& val_0, fu_STR& opt_0, const fu_STR& sHort, const fu_STR& lOng, const int o, fu_STR& dir)
{
    if ((opt_0 == sHort) || (opt_0 == lOng))
    {
        options_0 |= o;
        if (opt_0 == lOng)
        {
            if (dir)
                fu::fail((((opt_0 + ": already set to `"_fu) + dir) + "`."_fu));

            fu_STR _0 {};
            dir = ((_0 = abs(cwd_0, val_0)) ? static_cast<fu_STR&&>(_0) : fu::fail((((((((("Option "_fu + lOng) + " expects a path,"_fu) + "\n\tgot `"_fu) + val_0) + "`,"_fu) + "\n\ttry `"_fu) + lOng) + " rel/or/abs/dir/`."_fu)));
            val_0 = next(argv_0, idx_0);
        };
        opt_0 = fu_STR{};
    };
}

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
inline const fu_STR DEFAULT_WORKSPACE = (PRJDIR + "build-cpp/"_fu);
                                #endif

static int cli_handle(const fu_VEC<fu_STR>& argv, const fu_STR& cwd)
{
    int idx = 0;
    fu_STR self = next(argv, idx);
    if (argv.size() == 1)
    {
        (std::cout << "\n\tHello! "_fu << self << '\n');
        (std::cout << "\tNothing to do, running a quick self test.\n"_fu << '\n');
        self_test();
        (std::cout << "\tEverything checks out."_fu << '\n');
        (std::cout << "\tTry `fu file.fu`.\n"_fu << '\n');
        return 0;
    };
    if ((argv.size() == 2) && (argv[1] == "self"_fu))
    {
        (std::cout << "\n\tRunning test suite and rebuilding self ...\n"_fu << '\n');
        self_test();
        runTestsAndBuildCompiler();
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
    fu_STR val = next(argv, idx);
    while ((val.size() > 1) && (val.mutref(0) == std::byte('-')))
    {
        fu_STR opt { val };
        if (opt.mutref(1) != std::byte('-'))
        {
            opt = fu_STR { fu_STR::INIT<1> { std::byte(opt[1]) } };
            val = (std::byte('-') + fu::slice(val, 2));
            if (val == "-"_fu)
                val = next(argv, idx);

        }
        else
            val = next(argv, idx);

        option(argv, cwd, idx, options, val, opt, "-"_fu, "--src"_fu, 0, dir_src);
        option(argv, cwd, idx, options, val, opt, "c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp);
        option(argv, cwd, idx, options, val, opt, "o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj);
        option(argv, cwd, idx, options, val, opt, "b"_fu, "--bin"_fu, EMIT_BIN, bin);
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
    fu_STR fname = ((_0 = abs(cwd, val)) ? static_cast<fu_STR&&>(_0) : fu::fail(("Missing filename argument, a valid example is:"_fu + "\n\t`fu file.fu`."_fu)));
    if (options & EMIT_BIN)
    {
        fu_STR* _1;
        (*(_1 = &(bin)) ? *_1 : *_1 = (fu::rmatch(fname, ".fu"_fu) ? fu::slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu)));
    };

    {
        fu_STR val_1 = next(argv, idx);
        if (val_1)
            fu::fail((("Leftover option: `"_fu + val_1) + "`."_fu));

    };
    build(fname, run, DEFAULT_WORKSPACE, bin, dir_obj, dir_src, dir_cpp, scheme);
    return 0;
}

int fu_MAIN(const fu_VEC<fu_STR>& argv)
{
    return cli_handle(argv, fu::fs_cwd());
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
