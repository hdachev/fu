#include "../lib/io.h"
#include "../lib/never.h"
#include "../lib/str.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"
#include <iostream>
#include <utility>

fu_STR path_join(const fu_STR&, const fu_STR&);
void saySomethingNice();
int self_test();
void runTests();
void build(const fu_STR&, const bool&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&);
fu_STR locate_PRJDIR();
                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_STR PRJDIR = locate_PRJDIR();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
inline const fu_STR DEFAULT_WORKSPACE = (PRJDIR + "build.cpp/"_fu);
                                #endif

struct sf_cli_handle
{
    const fu_VEC<fu_STR>& argv;
    fu_STR&& cwd;
    int idx = 0;
    fu_STR next()
    {
        const int i = idx++;
        if ((i < argv.size()))
            return argv[i];

        return fu_STR{};
    };
    fu_STR self = next();
    fu_STR cmd = next();
    int cli_handle_EVAL()
    {
        if (!cmd.size())
        {
            (std::cout << "\n\tHello! "_fu << self << "\n");
            (std::cout << "\tNothing to do, running a quick self test.\n"_fu << "\n");
            self_test();
            (std::cout << "\tEverything checks out."_fu << "\n");
            (std::cout << "\tTry `fu run file.fu`.\n"_fu << "\n");
            return 0;
        };
        const bool run = ((cmd == "build"_fu) ? false : ((cmd == "run"_fu) ? true : fu::fail((((("Bad command: `"_fu + cmd) + "`,"_fu) + "\n\tvalid examples are `fu build file.fu`"_fu) + "\n\tand `fu run file.fu`."_fu))));
        const auto& abs = [&](const fu_STR& path) -> fu_STR
        {
            return ([&]() -> fu_STR { if (path.size() && (fu_TO_STR(path[0]) != "-"_fu)) return path_join(cwd, path); else return fu_STR{}; }());
        };
        const int EMIT_CPP = (1 << 0);
        const int EMIT_OBJ = (1 << 1);
        const int EMIT_BIN = (1 << 2);
        fu_STR dir_src {};
        fu_STR dir_cpp {};
        fu_STR dir_obj {};
        fu_STR bin {};
        int options {};
        fu_STR val = next();
        while (((val.size() > 1) && (fu_TO_STR(val[0]) == "-"_fu)))
        {
            fu_STR opt { val };
            if ((fu_TO_STR(opt[1]) != "-"_fu))
            {
                opt = fu_TO_STR(opt[1]);
                val = ("-"_fu + slice(val, 2));
                if ((val == "-"_fu))
                    val = next();

            }
            else
                val = next();

            const auto& option = [&](const fu_STR& Q_short, const fu_STR& Q_long, const int& o, fu_STR& dir) -> void
            {
                if (((opt == Q_short) || (opt == Q_long)))
                {
                    options |= o;
                    if ((opt == Q_long))
                    {
                        dir = ([&]() -> fu_STR { { fu_STR _ = abs(val); if (_.size()) return _; } fu::fail((((((((("Option "_fu + Q_long) + " expects a path,"_fu) + "\n\tgot `"_fu) + val) + "`,"_fu) + "\n\ttry `"_fu) + Q_long) + " rel/or/abs/dir/`."_fu)); }());
                        val = next();
                    };
                    opt = fu_STR{};
                };
            };
            option("-"_fu, "--src"_fu, 0, dir_src);
            option("c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp);
            option("o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj);
            option("b"_fu, "--bin"_fu, EMIT_BIN, bin);
            if (opt.size())
                fu::fail((("Unknown option: `"_fu + opt) + "`."_fu));

        };
        if ((options & EMIT_CPP))
        {
            if (!dir_src.size())
                dir_src = ([&]() -> const fu_STR& { { const fu_STR& _ = dir_cpp; if (_.size()) return _; } return cwd; }());

            if (!dir_cpp.size())
                dir_cpp = dir_src;

        };
        fu_STR fname = ([&]() -> fu_STR { { fu_STR _ = abs(val); if (_.size()) return _; } fu::fail(((("Missing filename argument, a valid example is:"_fu + "\n\t`fu "_fu) + cmd) + " file.fu`."_fu)); }());
        const fu_STR& dir_wrk = DEFAULT_WORKSPACE;
        if ((options & EMIT_BIN))
            ([&](fu_STR& _) -> fu_STR& { if (!_.size()) _ = (fu::rmatch(fname, ".fu"_fu) ? slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu)); return _; } (bin));

        build(fname, run, dir_wrk, bin, dir_obj, dir_src, dir_cpp);
        return 0;
    };
};
int cli_handle(const fu_VEC<fu_STR>& argv, fu_STR&& cwd)
{
    return (sf_cli_handle { argv, std::move(cwd) }).cli_handle_EVAL();
}


int fu_MAIN(const fu_VEC<fu_STR>& argv)
{
    return cli_handle(argv, fu::fs_cwd());
}

void runTestsAndBuildCompiler()
{
    runTests();
    saySomethingNice();
    cli_handle(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<6> { "fu"_fu, "run"_fu, "--bin"_fu, "bin/fu"_fu, "-c"_fu, "src/cli.fu"_fu } }, fu_STR(PRJDIR));
}


int main(int argc, char* argv[])
{
    fu_VEC<fu_STR> args;
    args.reserve(argc);

    for (int i = 0; i < argc; i++)
        args.push(fu_TO_STR(argv[i]));

    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));
}
