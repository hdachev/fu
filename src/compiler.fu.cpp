#include <cstdint>
#include <fu/default.h>
#include <fu/env.h>
#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/now.h>
#include <fu/shell.h>
#include <fu/str.h>
#include <fu/tea.h>
#include <fu/vec.h>
#include <fu/vec/find.h>
#include <fu/vec/join.h>
#include <fu/vec/slice.h>
#include <iostream>
#include <utility>

struct s_Context;
struct s_Effects;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;
s_Context solvePrelude();
fu_VEC<std::byte> cpp_codegen(const s_SolvedNode&, const s_Scope&, const s_Module&, const s_Context&);
fu_VEC<std::byte> path_dirname(const fu_VEC<std::byte>&);
fu_VEC<std::byte> path_filename(const fu_VEC<std::byte>&);
fu_VEC<std::byte> path_join(const fu_VEC<std::byte>&, const fu_VEC<std::byte>&);
fu_VEC<std::byte> path_relative(const fu_VEC<std::byte>&, const fu_VEC<std::byte>&);
fu_VEC<std::byte> path_noext(const fu_VEC<std::byte>&);
void build(const fu_VEC<std::byte>&, bool, const fu_VEC<std::byte>&, const fu_VEC<std::byte>&, const fu_VEC<std::byte>&, const fu_VEC<std::byte>&, const fu_VEC<std::byte>&, const fu_VEC<std::byte>&);
int FAIL(const fu_VEC<std::byte>&);
fu_VEC<std::byte> compile_snippet(const fu_VEC<std::byte>&);
s_LexerOutput lex(const fu_VEC<std::byte>&, const fu_VEC<std::byte>&);
s_ParserOutput parse(int, const fu_VEC<std::byte>&, const fu_VEC<s_Token>&);
s_SolverOutput solve(const s_Node&, const s_Context&, s_Module&);
fu_VEC<std::byte>& getFile(const fu_VEC<std::byte>&, s_Context&);
s_Module& getModule(const fu_VEC<std::byte>&, s_Context&);
void setModule(const s_Module&, s_Context&);
                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    fu_VEC<std::byte> kind;
    fu_VEC<std::byte> value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || value
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
    fu_VEC<std::byte> fname;
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || fname
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
    fu_VEC<std::byte> kind;
    int flags;
    fu_VEC<std::byte> value;
    fu_VEC<s_Node> items;
    s_TokenIdx token;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || flags
            || value
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
    fu_VEC<fu_VEC<std::byte>> imports;
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
    fu_VEC<std::byte> src;
    s_LexerOutput lex;
    s_ParserOutput parse;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || lex
            || parse
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    int modid;
    fu_VEC<std::byte> canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || modid
            || canon
        ;
    }
};
                                #endif

                                #ifndef DEF_s_StructField
                                #define DEF_s_StructField
struct s_StructField
{
    fu_VEC<std::byte> id;
    s_ValueType type;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || type
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_VEC<std::byte> kind;
    fu_VEC<std::byte> id;
    fu_VEC<s_StructField> fields;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || id
            || fields
            || flags
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    int relax;
    explicit operator bool() const noexcept
    {
        return false
            || index
            || relax
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> regions;
    explicit operator bool() const noexcept
    {
        return false
            || regions
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Effects
                                #define DEF_s_Effects
struct s_Effects
{
    int raw;
    explicit operator bool() const noexcept
    {
        return false
            || raw
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    s_ValueType value;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || value
            || lifetime
            || effects
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
    fu_VEC<std::byte> kind;
    int flags;
    fu_VEC<std::byte> value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || flags
            || value
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
    fu_VEC<std::byte> id;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || id
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
    fu_VEC<std::byte> kind;
    fu_VEC<std::byte> name;
    s_Type type;
    int min;
    int max;
    fu_VEC<s_Type> args;
    fu_VEC<fu_VEC<std::byte>> names;
    fu_VEC<s_SolvedNode> defaults;
    s_Partial partial;
    s_Template Q_template;
    s_SolvedNode constant;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
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
    fu_COW_MAP<fu_VEC<std::byte>, s_Struct> types;
    fu_COW_MAP<fu_VEC<std::byte>, s_SolvedNode> specs;
    s_SolverOutput solve;
    fu_VEC<std::byte> cpp;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
            || specs
            || solve
            || cpp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleStats
                                #define DEF_s_ModuleStats
struct s_ModuleStats
{
    double s_lex;
    double s_parse;
    double s_solve;
    double s_cpp;
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
    fu_VEC<std::byte> fname;
    s_ModuleInputs in;
    s_ModuleOutputs out;
    s_ModuleStats stats;
    explicit operator bool() const noexcept
    {
        return false
            || modid
            || fname
            || in
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    fu_COW_MAP<fu_VEC<std::byte>, fu_VEC<std::byte>> files;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
        ;
    }
};
                                #endif

                                #ifndef DEFt_2_4v_byte_28__7
                                #define DEFt_2_4v_byte_28__7
inline std::byte if_last(fu_VEC<std::byte>& s)
{
    return ([&]() -> std::byte { if (s.size()) return s.mutref((s.size() - 1)); else return fu::Default<std::byte>::value; }());
}
                                #endif

                                #ifndef DEFt_2_4v_byte_28__6
                                #define DEFt_2_4v_byte_28__6
inline std::byte if_last(const fu_VEC<std::byte>& s)
{
    return ([&]() -> std::byte { if (s.size()) return s[(s.size() - 1)]; else return fu::Default<std::byte>::value; }());
}
                                #endif

void compile(const fu_VEC<std::byte>& fname, const fu_VEC<std::byte>& via, s_Context& ctx)
{
    s_Module module { getModule(fname, ctx) };
    if (!module.in)
    {
        module.out = s_ModuleOutputs { fu_VEC<int>{}, fu_COW_MAP<fu_VEC<std::byte>, s_Struct>{}, fu_COW_MAP<fu_VEC<std::byte>, s_SolvedNode>{}, s_SolverOutput{}, fu_VEC<std::byte>{} };
        fu_VEC<std::byte> src { ([&]() -> const fu_VEC<std::byte>& { { const fu_VEC<std::byte>& _ = getFile(fname, ctx); if (_) return _; } fu::fail(((("#import badfile: `"_fu + via) + fname) + "`."_fu)); }()) };
        const double t0 = fu::now_hr();
        s_LexerOutput lexer_result = lex(src, fname);
        const double t1 = fu::now_hr();
        s_ParserOutput parser_result = parse(module.modid, fname, lexer_result.tokens);
        module.in = s_ModuleInputs { fu_VEC<std::byte>(src), s_LexerOutput(lexer_result), s_ParserOutput(parser_result) };
        const double t2 = fu::now_hr();
        module.stats.s_lex = (t1 - t0);
        module.stats.s_parse = (t2 - t1);
        setModule(module, ctx);
    }
    else
    {
        (module.out || fu::fail(((("#import circle: `"_fu + via) + fname) + "`."_fu)));
    };
    fu_VEC<fu_VEC<std::byte>> imports { module.in.parse.imports };
    for (int i = 0; (i < imports.size()); i++)
        compile(imports[i], ((fname + " <- "_fu) + via), ctx);

    if (!module.out)
    {
        const double t0 = fu::now_hr();
        module.out.solve = solve(module.in.parse.root, ctx, module);
        const double t1 = fu::now_hr();
        module.out.cpp = cpp_codegen(module.out.solve.root, module.out.solve.scope, module, ctx);
        const double t2 = fu::now_hr();
        module.stats.s_solve = (t1 - t0);
        module.stats.s_cpp = (t2 - t1);
        setModule(module, ctx);
    };
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
inline const s_Context CTX_PRELUDE = solvePrelude();
                                #endif

s_Context compile_snippet(fu_VEC<std::byte>&& src, const fu_VEC<std::byte>& fname)
{
    if (!fu::has(src, "fn main("_fu))
        src = (("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu);

    s_Context ctx { CTX_PRELUDE };
    (ctx.files.upsert(fname) = src);
    compile(fname, fu_VEC<std::byte>{}, ctx);
    return ctx;
}

fu_VEC<std::byte> compile_snippet(const fu_VEC<std::byte>& src)
{
    fu_VEC<std::byte> fname = "testcase"_fu;
    s_Context ctx = compile_snippet(fu_VEC<std::byte>(src), fname);
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        if ((ctx.modules[i].fname == fname))
            return std::move(ctx.modules[i].out.cpp);

    };
    fu::fail();
}

namespace {

struct sf_getLinkOrder
{
    const fu_VEC<s_Module>& modules;
    fu_VEC<int> link_order {};
    void visit(const s_Module& module)
    {
        const int link_id = (module.modid - 1);
        if (fu::has(link_order, link_id))
            return;

        const fu_VEC<fu_VEC<std::byte>>& imports = module.in.parse.imports;
        for (int i = 0; (i < imports.size()); i++)
        {
            const fu_VEC<std::byte>& fname = imports[i];
            for (int i = 1; (i < modules.size()); i++)
            {
                const s_Module& module = modules[i];
                if ((module.fname == fname))
                {
                    visit(module);
                    break;
                };
            };
        };
        (fu::has(link_order, link_id) && fu::fail());
        link_order.push(link_id);
    };
    fu_VEC<int> getLinkOrder_EVAL()
    {
        for (int i = 1; (i < modules.size()); i++)
            visit(modules[i]);

        return link_order;
    };
};

} // namespace

fu_VEC<int> getLinkOrder(const fu_VEC<s_Module>& modules)
{
    return (sf_getLinkOrder { modules }).getLinkOrder_EVAL();
}


void update_file(fu_VEC<std::byte>&& fname, const fu_VEC<std::byte>& data, const fu_VEC<std::byte>& dir_src, const fu_VEC<std::byte>& dir_out)
{
    if ((dir_src && dir_out))
    {
        if (!fu::lmatch(fname, dir_src))
        {
            (std::cout << "NOWRITE "_fu << fname << ": not within "_fu << dir_src << "\n");
            return;
        };
        fname = (dir_out + fu::slice(fname, dir_src.size()));
    };
    if ((fu::file_read(fname) == data))
        return;

    const int err = fu::file_write(fname, data);
    if (err)
        fu::fail(((("Failed to write `"_fu + fname) + "`, error: #"_fu) + err));

    (std::cout << ("  WROTE "_fu + fname) << "\n");
}

void build(const s_Context& ctx, const bool run, fu_VEC<std::byte>&& dir_wrk, fu_VEC<std::byte>&& bin, fu_VEC<std::byte>&& dir_obj, fu_VEC<std::byte>&& dir_src, fu_VEC<std::byte>&& dir_cpp, const fu_VEC<std::byte>& unity, const fu_VEC<std::byte>& scheme)
{
    if ((if_last(dir_wrk) != "/"_fu))
    {
        (dir_wrk || fu::fail("No workspace directory provided."_fu));
        dir_wrk += "/"_fu;
    };
    if ((dir_obj && (if_last(dir_obj) != "/"_fu)))
        dir_obj += "/"_fu;

    if ((dir_src && (if_last(dir_src) != "/"_fu)))
        dir_src += "/"_fu;

    if ((dir_cpp && (if_last(dir_cpp) != "/"_fu)))
        dir_cpp += "/"_fu;

    int code {};
    fu_VEC<std::byte> stdout {};
    fu_VEC<fu_VEC<std::byte>> Fs {};
    int len_all {};
    fu_VEC<std::byte> O_lvl = ((scheme != "debug"_fu) ? "-O3 -DNDEBUG "_fu : "-Og "_fu);
    if (((scheme == "debug"_fu) || (scheme == "reldeb"_fu)))
        O_lvl += "-g "_fu;

    if ((scheme == "retail"_fu))
        O_lvl += "-Dfu_RETAIL "_fu;

    fu_VEC<std::byte> INCLUDE = "-I ~/fu/include "_fu;
    fu_VEC<std::byte> GCC_CMD = ((("g++ -std=c++1z "_fu + O_lvl) + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wno-parentheses-equality "_fu);
    for (int i = 1; (i < ctx.modules.size()); i++)
    {
        const s_Module& module = ctx.modules[i];
        const fu_VEC<std::byte>& cpp = module.out.cpp;
        fu_VEC<std::byte> F = ((((dir_wrk + "o-"_fu) + fu::hash_tea((GCC_CMD + cpp))) + "-"_fu) + cpp.size());
        Fs.push(F);
        len_all += cpp.size();
    };
    fu::fs_mkdir_p(dir_wrk);
    fu_VEC<std::byte> F_exe = ((((((dir_wrk + "b-"_fu) + fu::hash_tea(fu::join(Fs, "/"_fu))) + "-"_fu) + len_all) + "-"_fu) + Fs.size());
    const auto& ERR = [&](fu_VEC<std::byte>&& cpp) -> fu::never
    {
        if (!cpp)
        {
            for (int i = Fs.size(); (i-- > 0); )
                (cpp += "#include \""_fu, cpp += Fs.mutref(i), cpp += ".cpp\"\n"_fu);

        };
        fu_VEC<std::byte> fname = (dir_wrk + "failing-testcase.cpp"_fu);
        (std::cout << ("  WRITE "_fu + fname) << "\n");
        fu::file_write(fname, cpp);
        if (!stdout)
            stdout = (("[ EXIT CODE "_fu + code) + " ]"_fu);

        fu::fail(stdout);
    };
    fu_VEC<int> link_order = getLinkOrder(ctx.modules);
    if (((fu::file_size(F_exe) < 1) && (bin || run)))
    {
        for (int i = 0; (i < Fs.size()); i++)
        {
            fu_VEC<std::byte> F { Fs[i] };
            fu_VEC<std::byte> F_cpp = (F + ".cpp"_fu);
            fu_VEC<std::byte> F_tmp = (F + ".o.tmp"_fu);
            fu_VEC<std::byte> F_obj = (F + ".o"_fu);
            if ((fu::file_size(F_obj) < 1))
            {
                const s_Module& module = ctx.modules[(i + 1)];
                const fu_VEC<std::byte>& cpp = module.out.cpp;
                fu::file_write(F_cpp, cpp);
                (std::cout << "  BUILD "_fu << path_filename(module.fname) << " "_fu << F_cpp << "\n");
                const double t0 = fu::now_hr();
                code = ([&]() -> int { { int _ = fu::shell_exec(((((((GCC_CMD + INCLUDE) + "-c -o "_fu) + F_tmp) + " "_fu) + F_cpp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_obj) + " 2>&1"_fu), stdout); }());
                if (code)
                    ERR(fu_VEC<std::byte>(cpp));

                const double t1 = fu::now_hr();
                (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
            };
        };
        fu_VEC<std::byte> F_tmp = (F_exe + ".tmp"_fu);
        fu_VEC<std::byte> cmd = (((GCC_CMD + "-o "_fu) + F_tmp) + " "_fu);
        for (int i = 0; (i < link_order.size()); i++)
            (cmd += Fs.mutref(link_order[i]), cmd += ".o "_fu);

        
        {
            (std::cout << "   LINK "_fu << F_exe << "\n");
            const double t0 = fu::now_hr();
            code = ([&]() -> int { { int _ = fu::shell_exec((cmd + " 2>&1"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((("chmod 755 "_fu + F_tmp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_exe) + " 2>&1"_fu), stdout); }());
            if (code)
            {
                (std::cout << ("   FAIL "_fu + fu::join(Fs, ("\n        "_fu + "\n"_fu))) << "\n");
                ERR(fu_VEC<std::byte>{});
            };
            const double t1 = fu::now_hr();
            (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << "\n");
        };
        if ((Fs.size() == 1))
            code = fu::shell_exec((("rm "_fu + Fs.mutref(0)) + ".o 2>&1"_fu), stdout);

        if (code)
            ERR(fu_VEC<std::byte>{});

    };
    if (run)
        code = fu::shell_exec(F_exe, stdout);

    if (code)
        ERR(fu_VEC<std::byte>{});

    if ((dir_cpp && dir_src))
    {
        fu::fs_mkdir_p(dir_cpp);
        fu_VEC<fu_VEC<std::byte>> cpp_files {};
        for (int i = 1; (i < ctx.modules.size()); i++)
        {
            const s_Module& module = ctx.modules[i];
            fu_VEC<std::byte> fname = (module.fname + ".cpp"_fu);
            const fu_VEC<std::byte>& data = module.out.cpp;
            update_file(fu_VEC<std::byte>(fname), data, dir_src, dir_cpp);
            cpp_files.push(fname);
        };
        fu_VEC<std::byte> CMakeLists = ([&]() -> fu_VEC<std::byte> { if (unity) return path_join(path_dirname(unity), "CMakeLists.txt"_fu); else return fu_VEC<std::byte>{}; }());
        if ((unity || CMakeLists))
        {
            if (unity)
            {
                fu_VEC<std::byte> data = "#pragma once\n\n"_fu;
                ((link_order.size() == cpp_files.size()) || fu::fail());
                for (int i = 0; (i < link_order.size()); i++)
                {
                    fu_VEC<std::byte> incl { cpp_files[link_order[i]] };
                    fu_VEC<std::byte> rel = path_relative(unity, incl);
                    (data += "#include \""_fu, data += rel, data += "\"\n"_fu);
                };
                update_file((unity + ".unity.cpp"_fu), data, dir_src, dir_cpp);
            };
            if (CMakeLists)
            {
                fu_VEC<std::byte> data = "cmake_minimum_required(VERSION 3.6)\n\n"_fu;
                fu_VEC<fu_VEC<std::byte>> inputs {};
                fu_VEC<fu_VEC<std::byte>> outputs {};
                ((link_order.size() == cpp_files.size()) || fu::fail());
                fu_VEC<std::byte> main {};
                for (int i = 0; (i < link_order.size()); i++)
                {
                    const int moduleIdx = (link_order[i] + 1);
                    const s_Module& module = ctx.modules[moduleIdx];
                    fu_VEC<std::byte> input = path_relative(CMakeLists, module.fname);
                    if ((moduleIdx == 1))
                        main = input;

                    inputs.push(input);
                    outputs.push(("${CMAKE_CURRENT_SOURCE_DIR}/"_fu + path_relative(CMakeLists, cpp_files[link_order[i]])));
                };
                (data += "set(FU_MAIN "_fu, data += main, data += ")\n\n"_fu);
                (data += "set(FU_INPUTS\n    "_fu, data += fu::join(inputs, "\n    "_fu), data += ")\n\n"_fu);
                (data += "set(FU_OUTPUTS\n    "_fu, data += fu::join(outputs, "\n    "_fu), data += ")\n\n"_fu);
                data += "include_directories (~/fu/include/)\n\n"_fu;
                (data += "add_custom_command(\n"_fu, data += "    OUTPUT ${FU_OUTPUTS}\n"_fu, data += "    COMMAND $ENV{HOME}/fu/bin/fu\n"_fu, data += "    ARGS -c ${FU_MAIN}\n"_fu, data += "    DEPENDS ${FU_INPUTS}\n"_fu, data += "    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}\n"_fu, data += "    VERBATIM)\n\n"_fu);
                fu_VEC<std::byte> libname = path_noext(path_filename(main));
                (data += "add_library("_fu, data += libname, data += " ${FU_OUTPUTS})\n"_fu);
                update_file(fu_VEC<std::byte>(CMakeLists), data, dir_src, dir_cpp);
            };
        };
    };
    if (bin)
    {
        fu::fs_mkdir_p(path_dirname(bin));
        code = fu::shell_exec((((("mv "_fu + F_exe) + " "_fu) + bin) + " 2>&1"_fu), stdout);
    };
    if (code)
        ERR(fu_VEC<std::byte>{});

}

void build(const fu_VEC<std::byte>& fname, const bool run, const fu_VEC<std::byte>& dir_wrk, const fu_VEC<std::byte>& bin, const fu_VEC<std::byte>& dir_obj, const fu_VEC<std::byte>& dir_src, const fu_VEC<std::byte>& dir_cpp, const fu_VEC<std::byte>& scheme)
{
    s_Context ctx { CTX_PRELUDE };
    
    {
        (std::cout << "COMPILE "_fu << fname << "\n");
        const double t0 = fu::now_hr();
        compile(fname, fu_VEC<std::byte>{}, ctx);
        const double t1 = fu::now_hr();
        const double tt = (t1 - t0);
        if (((t1 - t0) > 0.025))
        {
            double lex {};
            double parse {};
            double solve {};
            double cpp {};
            fu_VEC<s_Module> m { ctx.modules };
            for (int i = 0; (i < m.size()); i++)
            {
                lex += m[i].stats.s_lex;
                parse += m[i].stats.s_parse;
                solve += m[i].stats.s_solve;
                cpp += m[i].stats.s_cpp;
            };
            (std::cout << "\n    lex "_fu << lex << "s"_fu << "\n");
            (std::cout << "  parse "_fu << parse << "s"_fu << "\n");
            (std::cout << "  solve "_fu << solve << "s"_fu << "\n");
            (std::cout << "    cpp "_fu << cpp << "s\n"_fu << "\n");
        };
        (std::cout << "        "_fu << tt << "s\n"_fu << "\n");
    };
    return build(ctx, run, fu_VEC<std::byte>(dir_wrk), fu_VEC<std::byte>(bin), fu_VEC<std::byte>(dir_obj), fu_VEC<std::byte>(dir_src), fu_VEC<std::byte>(dir_cpp), fname, scheme);
}

fu_VEC<std::byte> absdir(const fu_VEC<std::byte>& a)
{
    return ((if_last(a) == "/"_fu) ? fu_VEC<std::byte>(a) : (a + "/"_fu));
}

                                #ifndef DEF_HOME
                                #define DEF_HOME
inline const fu_VEC<std::byte> HOME = absdir(fu::env_get("HOME"_fu));
                                #endif

fu_VEC<std::byte> locate_PRJDIR()
{
    fu_VEC<std::byte> dir = (HOME + "fu/"_fu);
    fu_VEC<std::byte> fn = (dir + "src/compiler.fu"_fu);
    const int fs = fu::file_size(fn);
    ((fs > 1000) || fu::fail(((("Bad compiler.fu: "_fu + fn) + ": "_fu) + fs)));
    (std::cout << ("PRJDIR: "_fu + dir) << "\n");
    return dir;
}

                                #ifndef DEF_PRJDIR
                                #define DEF_PRJDIR
inline const fu_VEC<std::byte> PRJDIR = locate_PRJDIR();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
inline const fu_VEC<std::byte> DEFAULT_WORKSPACE = (PRJDIR + "build.cpp/"_fu);
                                #endif

s_Context ZERO(const fu_VEC<std::byte>& src)
{
    fu_VEC<std::byte> fname = "testcase.ZERO"_fu;
    s_Context ctx = compile_snippet(fu_VEC<std::byte>(src), fname);
    build(ctx, true, fu_VEC<std::byte>(DEFAULT_WORKSPACE), fu_VEC<std::byte>{}, fu_VEC<std::byte>{}, fu_VEC<std::byte>{}, fu_VEC<std::byte>{}, fu_VEC<std::byte>{}, fu_VEC<std::byte>{});
    return ctx;
}

int FAIL(const fu_VEC<std::byte>& src)
{
    fu_VEC<std::byte> cpp;
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
