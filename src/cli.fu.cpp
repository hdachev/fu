
#include <fu/default.h>
#include <fu/init_priority.h>
#include <fu/io.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/str.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

fu_STR path_join_iwa818V1(fu::view<char>, const fu_STR&);
int self_test_n07RecyR();
static int cli_handle_yqAAbyk2(fu::view<fu_STR>, const fu_STR&);
void build_SigNUJl4(const fu_STR&, bool, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, fu::view<char>);
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
    cli_handle_yqAAbyk2((fu::slate<5, fu_STR> { "fu"_fu, "--bin"_fu, "bin/fu"_fu, "-c"_fu, "src/cli.fu"_fu }), PRJDIR);
}

static fu_STR abs_f06I5WiD(const fu_STR& path, fu::view<char> cwd)
{
    return path && (path[0] != '-') ? path_join_iwa818V1(cwd, path) : fu_STR{};
}

static void option_BQa16LRb(fu::view<char> sHort, fu::view<char> lOng, const int o, fu_STR& dir, fu_STR& opt, int& options, fu_STR& val, fu::view<char> cwd, int& idx, fu::view<fu_STR> argv)
{
    if ((opt == sHort) || (opt == lOng))
    {
        options |= o;
        if (opt == lOng)
        {
            if (dir)
                fu::fail((((opt + ": already set to `"_fu) + dir) + "`."_fu));

            fu_STR _0 {};
            dir = ((_0 = abs_f06I5WiD(val, cwd)) ? static_cast<fu_STR&&>(_0) : fu::fail((((((((("Option "_fu + lOng) + " expects a path,"_fu) + "\n\tgot `"_fu) + val) + "`,"_fu) + "\n\ttry `"_fu) + lOng) + " rel/or/abs/dir/`."_fu)));
            val = next_gjrd4WUD(idx, argv);
        };
        opt = fu_STR{};
    };
}

                                #ifndef DEFt_ends_OZkl8S7R
                                #define DEFt_ends_OZkl8S7R
inline bool ends_OZkl8S7R(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE;
                                #endif

static int cli_handle_yqAAbyk2(fu::view<fu_STR> argv, const fu_STR& cwd)
{
    int idx = 0;
    const fu_STR& self = next_gjrd4WUD(idx, argv);
    if (argv.size() == 1)
    {
        fu_STR _0 {};
        fu::println((fu::slate<2, fu_STR> { (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "\n\tHello! "_fu;
            _0 = (x);
        (void)0;}), static_cast<fu_STR&&>(_0)), fu_STR(self) }));
        fu_STR _1 {};
        fu::println((fu::slate<1, fu_STR> { (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "\tNothing to do, running a quick self test.\n"_fu;
            _1 = (x);
        (void)0;}), static_cast<fu_STR&&>(_1)) }));
        self_test_n07RecyR();
        fu_STR _2 {};
        fu::println((fu::slate<1, fu_STR> { (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "\tEverything checks out."_fu;
            _2 = (x);
        (void)0;}), static_cast<fu_STR&&>(_2)) }));
        fu_STR _3 {};
        fu::println((fu::slate<1, fu_STR> { (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "\tTry `fu file.fu`.\n"_fu;
            _3 = (x);
        (void)0;}), static_cast<fu_STR&&>(_3)) }));
        return 0;
    };
    if ((argv.size() == 2) && (argv[1] == "self"_fu))
    {
        fu_STR _4 {};
        fu::println((fu::slate<1, fu_STR> { (__extension__ (
        {
            /*MOV*/ /*RRET*/ fu_STR x = "\n\tRunning test suite and rebuilding self ...\n"_fu;
            _4 = (x);
        (void)0;}), static_cast<fu_STR&&>(_4)) }));
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

        option_BQa16LRb("-"_fu, "--src"_fu, 0, dir_src, opt, options, val, cwd, idx, argv);
        option_BQa16LRb("c"_fu, "--cpp"_fu, EMIT_CPP, dir_cpp, opt, options, val, cwd, idx, argv);
        option_BQa16LRb("o"_fu, "--obj"_fu, EMIT_OBJ, dir_obj, opt, options, val, cwd, idx, argv);
        option_BQa16LRb("b"_fu, "--bin"_fu, EMIT_BIN, bin, opt, options, val, cwd, idx, argv);
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
    fu_STR _5 {};
    fu_STR fname = ((_5 = abs_f06I5WiD(val, cwd)) ? static_cast<fu_STR&&>(_5) : fu::fail(("Missing filename argument, a valid example is:"_fu + "\n\t`fu file.fu`."_fu)));
    if (options & EMIT_BIN)
    {
        if (!(bin))
            bin = (ends_OZkl8S7R(fname, ".fu"_fu) ? fu::slice(fname, 0, (fname.size() - ".fu"_fu.size())) : (fname + ".exe"_fu));

    };

    {
        const fu_STR& val_1 = next_gjrd4WUD(idx, argv);
        if (val_1)
            fu::fail((("Leftover option: `"_fu + val_1) + "`."_fu));

    };
    build_SigNUJl4(fname, run, DEFAULT_WORKSPACE, bin, dir_obj, dir_src, dir_cpp, scheme);
    return 0;
}

int fu_MAIN(fu::view<fu_STR> argv)
{
    return cli_handle_yqAAbyk2(argv, fu::fs_cwd());
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
