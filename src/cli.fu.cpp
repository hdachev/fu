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
#include <utility>

static void runTestsAndBuildCompiler();
int self_test();
void runTests();
void saySomethingNice();
fu_STR path_join(const fu_STR&, const fu_STR&);
void build(const fu_STR&, bool, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&);
fu_STR locate_PRJDIR();
#ifndef FU_NO_FDEFs

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_STR PRJDIR = locate_PRJDIR();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
inline const fu_STR DEFAULT_WORKSPACE = (PRJDIR + "build.cpp/"_fu);
                                #endif

namespace {

struct sf_cli_handle
{
    const fu_VEC<fu_STR>& argv;
    fu_STR&& cwd;
    int idx = 0;
    fu_STR next()
    {
        const int i = idx++;
        if ((i < argv.size()))
            return fu_STR(argv[i]);

        return fu_STR{};
    };
    fu_STR self = next();
    int cli_handle_EVAL()
    {
        if ((argv.size() == 1))
        {
            (std::cout << "\n\tHello! "_fu << self << '\n');
            (std::cout << "\tNothing to do, running a quick self test.\n"_fu << '\n');
            self_test();
            (std::cout << "\tEverything checks out."_fu << '\n');
            (std::cout << "\tTry `fu file.fu`.\n"_fu << '\n');
            return 0;
        };
        if (((argv.size() == 2) && (argv[1] == "self"_fu)))
        {
            (std::cout << "\n\tRunning test suite and rebuilding self ...\n"_fu << '\n');
            self_test();
            runTestsAndBuildCompiler();
            return 0;
        };
        const auto& abs = [&](const fu_STR& path) -> fu_STR
        {
            return ([&]() -> fu_STR { if (path && (path[0] != std::byte('-'))) return path_join(cwd, path); else return fu_STR{}; }());
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
        fu_STR val = next();
        while (((val.size() > 1) && (val.mutref(0) == std::byte('-'))))
        {
            fu_STR opt { val };
            if ((opt.mutref(1) != std::byte('-')))
            {
                opt = fu_STR { fu_STR::INIT<1> { opt.mutref(1) } };
                val = (std::byte('-') + fu::slice(val, 2));
                if ((val == "-"_fu))
                    val = next();

            }
            else
                val = next();

            const auto& option = [&](const fu_STR& sHort, const fu_STR& lOng, const int o, fu_STR& dir) -> void
            {
                if (((opt == sHort) || (opt == lOng)))
                {
                    options |= o;
                    if ((opt == lOng))
                    {
                        (dir && fu::fail((((opt + ": already set to `"_fu) + dir) + "`."_fu)));
                        dir = ([&]() -> fu_STR { { fu_STR _ = abs(val); if (_) return _; } fu::fail((((((((("Option "_fu + lOng) + " expects a path,"_fu) + "\n\tgot `"_fu) + val) + "`,"_fu) + "\n\ttry `"_fu) + lOng) + " rel/or/abs/dir/`."_fu)); }());
                        val = next();
                    };
                    opt = fu_STR{};
                };
            };
            option("-"_fu, "--src"_fu, 0, dir_src);
            option("c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp);
            option("o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj);
            option("b"_fu, "--bin"_fu, EMIT_BIN, bin);
            if (((opt == "--debug"_fu) || (opt == "--reldeb"_fu) || (opt == "--release"_fu) || (opt == "--retail"_fu)))
            {
                (scheme && fu::fail((((opt + ": Scheme already set to `"_fu) + opt) + "`."_fu)));
                scheme = fu::slice(opt, 2);
                continue;
            };
            if (((opt == "--run"_fu) || (opt == "r"_fu)))
            {
                run = true;
                continue;
            }
            else if (opt)
                fu::fail((("Unknown option: `"_fu + opt) + "`."_fu));

        };
        if ((options & EMIT_CPP))
        {
            if (!dir_src)
                dir_src = (dir_cpp ? dir_cpp : cwd);

            if (!dir_cpp)
                dir_cpp = dir_src;

        };
        fu_STR fname = ([&]() -> fu_STR { { fu_STR _ = abs(val); if (_) return _; } fu::fail(("Missing filename argument, a valid example is:"_fu + "\n\t`fu file.fu`."_fu)); }());
        const fu_STR& dir_wrk = DEFAULT_WORKSPACE;
        if ((options & EMIT_BIN))
            ([&](fu_STR& _) -> fu_STR& { if (!_) _ = (fu::rmatch(fname, ".fu"_fu) ? fu::slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu)); return _; } (bin));

        
        {
            fu_STR val = next();
            if (val)
                fu::fail((("Leftover option: `"_fu + val) + "`."_fu));

        };
        build(fname, run, dir_wrk, bin, dir_obj, dir_src, dir_cpp, scheme);
        return 0;
    };
};

} // namespace

int cli_handle(const fu_VEC<fu_STR>& argv, fu_STR&& cwd)
{
    return (sf_cli_handle { argv, std::move(cwd) }).cli_handle_EVAL();
}


static int fu_MAIN(const fu_VEC<fu_STR>& argv)
{
    return cli_handle(argv, fu::fs_cwd());
}

static void runTestsAndBuildCompiler()
{
    runTests();
    saySomethingNice();
    cli_handle(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<5> { "fu"_fu, "--bin"_fu, "bin/fu"_fu, "-c"_fu, "src/cli.fu"_fu } }, fu_STR(PRJDIR));
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
