#include "../lib/io.h"
#include "../lib/never.h"
#include "../lib/str.h"
#include "../lib/vec.h"
#include <iostream>

fu_STR path_join(const fu_STR&, const fu_STR&);
int self_test();
fu_STR build(const fu_STR&, const bool&);
struct sf_main
{
    const fu_VEC<fu_STR>& args;
    int idx = 0;
    fu_STR next()
    {
        const int i = idx++;
        if ((i < args.size()))
            return args[i];

        return ""_fu;
    };
    fu_STR arg0 = next();
    fu_STR cmd = next();
    int main_EVAL()
    {
        if (!cmd.size())
        {
            (std::cout << "SELF "_fu << arg0 << "\n");
            self_test();
            (std::cout << "Hello! Try `fu run hello.fu`."_fu << "\n");
            return 0;
        };
        const bool run = ((cmd == "build"_fu) ? false : ((cmd == "run"_fu) ? true : fu::fail((((("Bad command: `"_fu + cmd) + "`,"_fu) + " valid examples are `fu build hello.fu`"_fu) + " and `fu run hello.fu`."_fu))));
        fu_STR cwd = fu::fs_cwd();
        fu_STR relpath = next();
        fu_STR abspath = ([&]() -> fu_STR { if (relpath.size()) { fu_STR _ = path_join(cwd, relpath); if (_.size()) return _; } fu::fail(((("Missing filename argument, a valid example is:"_fu + " `fu "_fu) + cmd) + " main.fu`."_fu)); }());
        fu_STR result = build(abspath, run);
        (std::cout << "BUILT"_fu << result << "\n");
        return 0;
    };
};
int fu_MAIN(const fu_VEC<fu_STR>& args)
{
    return (sf_main { args }).main_EVAL();
}



int main(int argc, char* argv[])
{
    fu_VEC<fu_STR> args;
    args.reserve(argc);

    for (int i = 0; i < argc; i++)
        args.push(fu_TO_STR(argv[i]));

    fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));
}
