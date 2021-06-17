#include <cstdint>
#include <fu/default.h>
#include <fu/io.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>
#include <iostream>

fu_STR path_join(fu::view<std::byte>, const fu_STR&);
int self_test();
static int cli_handle(const fu_VEC<fu_STR>&, const fu_STR&);
void build(const fu_STR&, bool, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, fu::view<std::byte>);
void runTests();

#ifndef FU_NO_FDEFs

static const fu_STR& next(int& idx, const fu_VEC<fu_STR>& argv)
{
    const int i = idx++;
    if (i < argv.size())
        return argv[i];

    return (*(const fu_STR*)fu::NIL);
}

extern const fu_STR PRJDIR;

static void runTestsAndBuildCompiler()
{
    runTests();
    cli_handle(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<5> { "fu"_fu, "--bin"_fu, "bin/fu"_fu, "-c"_fu, "src/cli.fu"_fu } }, PRJDIR);
}

static fu_STR abs(const fu_STR& path, const fu_STR& cwd)
{
    return path && (path[0] != std::byte('-')) ? path_join(cwd, path) : fu_STR{};
}

static void option(fu::view<std::byte> sHort, fu::view<std::byte> lOng, const int o, fu_STR& dir, fu_STR& opt, int& options, fu_STR& val, const fu_STR& cwd, int& idx, const fu_VEC<fu_STR>& argv)
{
    if ((opt == sHort) || (opt == lOng))
    {
        options |= o;
        if (opt == lOng)
        {
            if (dir)
                fu::fail((((opt + ": already set to `"_fu) + dir) + "`."_fu));

            fu_STR _0 {};
            dir = ((_0 = abs(val, cwd)) ? static_cast<fu_STR&&>(_0) : fu::fail((((((((("Option "_fu + lOng) + " expects a path,"_fu) + "\n\tgot `"_fu) + val) + "`,"_fu) + "\n\ttry `"_fu) + lOng) + " rel/or/abs/dir/`."_fu)));
            val = next(idx, argv);
        };
        opt = fu_STR{};
    };
}

extern const fu_STR DEFAULT_WORKSPACE;

static int cli_handle(const fu_VEC<fu_STR>& argv, const fu_STR& cwd)
{
    int idx = 0;
    const fu_STR& self = next(idx, argv);
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
    fu_STR val { next(idx, argv) };
    while ((val.size() > 1) && (val[0] == std::byte('-')))
    {
        fu_STR opt { val };
        if (opt[1] != std::byte('-'))
        {
            opt = fu_STR { fu_STR::INIT<1> { std::byte(opt[1]) } };
            val = (std::byte('-') + fu::slice(val, 2));
            if (val == "-"_fu)
                val = next(idx, argv);

        }
        else
            val = next(idx, argv);

        option("-"_fu, "--src"_fu, 0, dir_src, opt, options, val, cwd, idx, argv);
        option("c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp, opt, options, val, cwd, idx, argv);
        option("o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj, opt, options, val, cwd, idx, argv);
        option("b"_fu, "--bin"_fu, EMIT_BIN, bin, opt, options, val, cwd, idx, argv);
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
    fu_STR fname = ((_0 = abs(val, cwd)) ? static_cast<fu_STR&&>(_0) : fu::fail(("Missing filename argument, a valid example is:"_fu + "\n\t`fu file.fu`."_fu)));
    if (options & EMIT_BIN)
    {
        fu_STR* _1;
        (*(_1 = &(bin)) ? *_1 : *_1 = (fu::rmatch(fname, ".fu"_fu) ? fu::slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu)));
    };

    {
        const fu_STR& val_1 = next(idx, argv);
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
