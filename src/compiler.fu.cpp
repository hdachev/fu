#include "../lib/env.h"
#include "../lib/io.h"
#include "../lib/map.h"
#include "../lib/never.h"
#include "../lib/now.h"
#include "../lib/shell.h"
#include "../lib/str.h"
#include "../lib/tea.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"
#include "../lib/vec/join.h"
#include <iostream>

struct s_LexerOutput;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Scope;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_TEMP_Context;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
fu_STR last(const fu_STR&);
fu_STR cpp_codegen(const s_SolvedNode&, const s_Scope&, const s_Module&, const s_TEMP_Context&);
void build(const fu_STR&, const bool&, const fu_STR&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&);
int FAIL(const fu_STR&);
fu_STR compile_snippet(const fu_STR&);
s_TEMP_Context solvePrelude();
fu_STR& getFile(const fu_STR&, s_TEMP_Context&);
s_Module& getModule(const fu_STR&, s_TEMP_Context&);
void setModule(const s_Module&, s_TEMP_Context&);
s_SolverOutput solve(const s_Node&, const s_TEMP_Context&, s_Module&);
s_ParserOutput parse(const int&, const fu_STR&, const fu_VEC<s_Token>&);
s_LexerOutput lex(const fu_STR&, const fu_STR&);
                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    fu_STR kind;
    fu_STR value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || value.size()
            || idx0
            || idx1
            || line
            || col
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_STR fname;
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || fname.size()
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TokenIdx
                                #define DEF_s_TokenIdx
struct s_TokenIdx
{
    int modid;
    int tokidx;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || tokidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_Node> items;
    s_TokenIdx token;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || flags
            || value.size()
            || items
            || token
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ParserOutput
                                #define DEF_s_ParserOutput
struct s_ParserOutput
{
    s_Node root;
    fu_VEC<fu_STR> imports;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || imports
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleInputs
                                #define DEF_s_ModuleInputs
struct s_ModuleInputs
{
    fu_STR src;
    s_LexerOutput lex;
    s_ParserOutput parse;
    explicit operator bool() const noexcept
    {
        return false
            || src.size()
            || lex
            || parse
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || canon.size()
            || quals
            || modid
        ;
    }
};
                                #endif

                                #ifndef DEF_s_StructField
                                #define DEF_s_StructField
struct s_StructField
{
    fu_STR id;
    s_Type type;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
            || type
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR kind;
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || id.size()
            || fields
            || flags
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    int modid;
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || flags
            || value.size()
            || items
            || token
            || type
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu_STR id;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Partial
                                #define DEF_s_Partial
struct s_Partial
{
    s_Target via;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || via
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    explicit operator bool() const noexcept
    {
        return false
            || node
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    s_Type type;
    int min;
    int max;
    fu_VEC<s_Type> args;
    fu_VEC<fu_STR> names;
    fu_VEC<s_SolvedNode> defaults;
    s_Partial partial;
    s_Template Q_template;
    s_SolvedNode constant;
    explicit operator bool() const noexcept
    {
        return false
            || kind.size()
            || name.size()
            || type
            || min
            || max
            || args
            || names
            || defaults
            || partial
            || Q_template
            || constant
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_Overload> overloads;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolverOutput
                                #define DEF_s_SolverOutput
struct s_SolverOutput
{
    s_SolvedNode root;
    s_Scope scope;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || scope
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_COW_MAP<fu_STR, s_Struct> types;
    fu_COW_MAP<fu_STR, s_SolvedNode> specs;
    s_SolverOutput solve;
    fu_STR cpp;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
            || specs
            || solve
            || cpp.size()
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleStats
                                #define DEF_s_ModuleStats
struct s_ModuleStats
{
    f64 s_lex;
    f64 s_parse;
    f64 s_solve;
    f64 s_cpp;
    explicit operator bool() const noexcept
    {
        return false
            || s_lex
            || s_parse
            || s_solve
            || s_cpp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    int modid;
    fu_STR fname;
    s_ModuleInputs in;
    s_ModuleOutputs out;
    s_ModuleStats stats;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || fname.size()
            || in
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEMP_Context
                                #define DEF_s_TEMP_Context
struct s_TEMP_Context
{
    fu_VEC<s_Module> modules;
    fu_COW_MAP<fu_STR, fu_STR> files;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
        ;
    }
};
                                #endif

void compile(const fu_STR& fname, const fu_STR& via, s_TEMP_Context& ctx)
{
    s_Module module { getModule(fname, ctx) };
    if (!module.in)
    {
        module.out = s_ModuleOutputs { fu_VEC<int>{}, fu_COW_MAP<fu_STR, s_Struct>{}, fu_COW_MAP<fu_STR, s_SolvedNode>{}, s_SolverOutput{}, fu_STR{} };
        fu_STR src { ([&]() -> fu_STR& { { fu_STR& _ = getFile(fname, ctx); if (_.size()) return _; } fu::fail(((("#import badfile: `"_fu + via) + fname) + "`."_fu)); }()) };
        const f64 t0 = fu::now_hr();
        s_LexerOutput lexer_result = lex(src, fname);
        const f64 t1 = fu::now_hr();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), parse(module.modid, fname, lexer_result.tokens) };
        const f64 t2 = fu::now_hr();
        module.stats.s_lex = (t1 - t0);
        module.stats.s_parse = (t2 - t1);
        setModule(module, ctx);
    }
    else
    {
        (module.out || fu::fail(((("#import circle: `"_fu + via) + fname) + "`."_fu)));
    };
    fu_VEC<fu_STR> imports { module.in.parse.imports };
    for (int i = imports.size(); (i-- > 0); )
        compile(imports[i], ((fname + " <- "_fu) + via), ctx);

    if (!module.out)
    {
        const f64 t0 = fu::now_hr();
        module.out.solve = solve(module.in.parse.root, ctx, module);
        const f64 t1 = fu::now_hr();
        module.out.cpp = cpp_codegen(module.out.solve.root, module.out.solve.scope, module, ctx);
        const f64 t2 = fu::now_hr();
        module.stats.s_solve = (t1 - t0);
        module.stats.s_cpp = (t2 - t1);
        setModule(module, ctx);
    };
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
inline const s_TEMP_Context CTX_PRELUDE = solvePrelude();
                                #endif

s_TEMP_Context compile_snippet(fu_STR&& src, const fu_STR& fname)
{
    if (!fu::has(src, "fn main("_fu))
        src = (("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu);

    s_TEMP_Context ctx { CTX_PRELUDE };
    (ctx.files.upsert(fname) = src);
    compile(fname, ""_fu, ctx);
    return ctx;
}

fu_STR compile_snippet(const fu_STR& src)
{
    fu_STR fname = "testcase"_fu;
    s_TEMP_Context ctx = compile_snippet(fu_STR(src), fname);
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        if ((ctx.modules[i].fname == fname))
            return ctx.modules[i].out.cpp;

    };
    fu::fail("Assertion failed.");
}

                                #ifndef DEF_GCC_CMD
                                #define DEF_GCC_CMD
inline const fu_STR GCC_CMD = (("g++ -std=c++1z -O3 "_fu + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wno-parentheses-equality "_fu);
                                #endif

void update_file(const fu_STR& fname, const fu_STR& data)
{
    if ((fu::file_read(fname) == data))
        return;

    fu::file_write(fname, data);
    (std::cout << ("  WROTE "_fu + fname) << "\n");
}

void update_cpp(const s_Module& module, const fu_STR& dir_src, const fu_STR& dir_cpp)
{
    fu_STR fname = (module.fname + ".cpp"_fu);
    if ((dir_src.size() && dir_cpp.size()))
    {
        if (!fu::lmatch(fname, dir_src))
        {
            (std::cout << "NOWRITE "_fu << fname << ": not within "_fu << dir_src << "\n");
            return;
        };
        fname = (dir_cpp + slice(fname, dir_src.size()));
    };
    update_file(fname, module.out.cpp);
}

void build(const s_TEMP_Context& ctx, const bool& run, fu_STR&& dir_wrk, fu_STR&& bin, fu_STR&& dir_obj, fu_STR&& dir_src, fu_STR&& dir_cpp)
{
    if ((last(dir_wrk) != "/"_fu))
    {
        (dir_wrk.size() || fu::fail("No workspace directory provided."_fu));
        dir_wrk += "/"_fu;
    };
    if ((dir_obj.size() && (last(dir_obj) != "/"_fu)))
        dir_obj += "/"_fu;

    if ((dir_src.size() && (last(dir_src) != "/"_fu)))
        dir_src += "/"_fu;

    if ((dir_cpp.size() && (last(dir_cpp) != "/"_fu)))
        dir_cpp += "/"_fu;

    int code {};
    fu_STR stdout {};
    fu_VEC<fu_STR> Fs {};
    int len_all {};
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        const s_Module& module = ctx.modules[i];
        const fu_STR& cpp = module.out.cpp;
        fu_STR F = ((((dir_wrk + "o-"_fu) + fu::hash_tea(cpp)) + "-"_fu) + cpp.size());
        Fs.push(F);
        len_all += cpp.size();
    };
    fu_STR F_exe = ((((((dir_wrk + "b-"_fu) + fu::hash_tea(fu::join(Fs, "/"_fu))) + "-"_fu) + len_all) + "-"_fu) + Fs.size());
    const auto& ERR = [&](fu_STR&& cpp) -> fu::never
    {
        if (!cpp.size())
        {
            for (int i = Fs.size(); (i-- > 0); )
                cpp += (("#include \""_fu + Fs.mutref(i)) + ".cpp\"\n"_fu);

        };
        fu_STR fname = (dir_wrk + "failing-testcase.cpp"_fu);
        (std::cout << ("  WRITE "_fu + fname) << "\n");
        fu::file_write(fname, cpp);
        if (!stdout.size())
            stdout = (("[ EXIT CODE "_fu + code) + " ]"_fu);

        fu::fail(stdout);
    };
    if ((fu::file_size(F_exe) < 1))
    {
        for (int i = 0; (i < Fs.size()); i++)
        {
            fu_STR F { Fs.mutref(i) };
            fu_STR F_cpp = (F + ".cpp"_fu);
            fu_STR F_tmp = (F + ".o.tmp"_fu);
            fu_STR F_obj = (F + ".o"_fu);
            if ((fu::file_size(F_obj) < 1))
            {
                const fu_STR& cpp = ctx.modules[(i + 1)].out.cpp;
                fu::file_write(F_cpp, cpp);
                (std::cout << "  BUILD "_fu << F_cpp << "\n");
                const f64 t0 = fu::now_hr();
                code = ([&]() -> int { { int _ = fu::shell_exec((((((GCC_CMD + "-c -o "_fu) + F_tmp) + " "_fu) + F_cpp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_obj) + " 2>&1"_fu), stdout); }());
                if (code)
                    ERR(fu_STR(cpp));

                const f64 t1 = fu::now_hr();
                (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
            };
        };
        fu_STR F_tmp = (F_exe + ".tmp"_fu);
        fu_STR cmd = (((GCC_CMD + "-o "_fu) + F_tmp) + " "_fu);
        for (int i = Fs.size(); (i-- > 0); )
            cmd += (Fs.mutref(i) + ".o "_fu);

        
        {
            (std::cout << "   LINK "_fu << F_exe << "\n");
            const f64 t0 = fu::now_hr();
            code = ([&]() -> int { { int _ = fu::shell_exec((cmd + " 2>&1"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((("chmod 755 "_fu + F_tmp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_exe) + " 2>&1"_fu), stdout); }());
            if (code)
            {
                (std::cout << ("   FAIL "_fu + fu::join(Fs, ("\n        "_fu + "\n"_fu))) << "\n");
                ERR(""_fu);
            };
            const f64 t1 = fu::now_hr();
            (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
        };
        if ((Fs.size() == 1))
            code = fu::shell_exec((("rm "_fu + Fs.mutref(0)) + ".o 2>&1"_fu), stdout);

        if (code)
            ERR(""_fu);

    };
    if (run)
        code = fu::shell_exec(F_exe, stdout);

    if (code)
        ERR(""_fu);

    if ((dir_cpp.size() && dir_src.size()))
    {
        for (int i = 1; (i < ctx.modules.size()); i++)
            update_cpp(ctx.modules[i], dir_src, dir_cpp);

    };
    if (bin.size())
        code = fu::shell_exec((((("mv "_fu + F_exe) + " "_fu) + bin) + " 2>&1"_fu), stdout);

    if (code)
        ERR(""_fu);

}

void build(const fu_STR& fname, const bool& run, const fu_STR& dir_wrk, fu_STR&& bin, fu_STR&& dir_obj, fu_STR&& dir_src, fu_STR&& dir_cpp)
{
    s_TEMP_Context ctx { CTX_PRELUDE };
    
    {
        (std::cout << "COMPILE "_fu << fname << "\n");
        const f64 t0 = fu::now_hr();
        compile(fname, ""_fu, ctx);
        const f64 t1 = fu::now_hr();
        const f64 tt = (t1 - t0);
        (std::cout << "        "_fu << tt << "s\n"_fu << "\n");
    };
    return build(ctx, run, fu_STR(dir_wrk), fu_STR(bin), fu_STR(dir_obj), fu_STR(dir_src), fu_STR(dir_cpp));
}

fu_STR absdir(const fu_STR& a)
{
    return ((last(a) == "/"_fu) ? fu_STR(a) : (a + "/"_fu));
}

                                #ifndef DEF_HOME
                                #define DEF_HOME
inline const fu_STR HOME = absdir(fu::env_get("HOME"_fu));
                                #endif

fu_STR locate_PRJDIR()
{
    fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int fs = fu::file_size(fn);
    ((fs > 1000) || fu::fail(((("Bad compiler.fu: "_fu + fn) + ": "_fu) + fs)));
    (std::cout << ("PRJDIR: "_fu + dir) << "\n");
    return dir;
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_STR PRJDIR = locate_PRJDIR();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
inline const fu_STR DEFAULT_WORKSPACE = (PRJDIR + "build.cpp/"_fu);
                                #endif

s_TEMP_Context ZERO(const fu_STR& src, fu_STR&& fname)
{
    if (!fname.size())
        fname = "testcase.ZERO"_fu;

    s_TEMP_Context ctx = compile_snippet(fu_STR(src), fname);
    build(ctx, true, fu_STR(DEFAULT_WORKSPACE), ""_fu, ""_fu, ""_fu, ""_fu);
    return ctx;
}

int FAIL(const fu_STR& src)
{
    fu_STR cpp;
    try
    {
        cpp = compile_snippet(src);
    }
    catch (const std::exception& o_0)
    {
        const fu_STR& e = fu_TO_STR(o_0.what());
    
        return e.size();
    }
;
    fu::fail(("DID NOT THROW: "_fu + cpp));
}
