#include <cstdint>
#include <fu/default.h>
#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/now.h>
#include <fu/shell.h>
#include <fu/str.h>
#include <fu/tea.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/join.h>
#include <fu/vec/replace.h>
#include <fu/vec/slice.h>
#include <iostream>

struct s_Argument;
struct s_Context;
struct s_Effects;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
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

fu_STR path_dirname(const fu_STR&);
fu_STR path_filename(const fu_STR&);
fu_STR path_join(const fu_STR&, const fu_STR&);
fu_STR path_noext(const fu_STR&);
fu_STR path_relative(const fu_STR&, const fu_STR&);
fu_STR resolveFile_x(const fu_STR&, const s_Context&);

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
    fu_STR fname;
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
    fu_STR kind;
    int flags;
    fu_STR value;
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
    fu_VEC<fu_STR> fuzimports;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
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
    fu_STR canon;
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
    fu_STR id;
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

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu_STR id;
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    s_Target ctor;
    fu_VEC<s_ScopeItem> items;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || fields
            || flags
            || ctor
            || items
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
    s_ValueType vtype;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
            || effects
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || type
            || dEfault
            || flags
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
    fu_VEC<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
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
    int flags;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Partial partial;
    s_Template tEmplate;
    s_SolvedNode solved;
    fu_VEC<int> used_by;
    int status;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || min
            || max
            || args
            || partial
            || tEmplate
            || solved
            || used_by
            || status
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
    fu_VEC<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || imports
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
    int SLOW_resolve;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || scope
            || SLOW_resolve
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_MAP<fu_STR, s_Struct> types;
    fu_MAP<fu_STR, s_Target> specs;
    s_SolverOutput solve;
    fu_STR cpp;
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

                                #ifndef DEF_s_ModuleStat
                                #define DEF_s_ModuleStat
struct s_ModuleStat
{
    double time;
    int alloc_count;
    int alloc_bytes;
    explicit operator bool() const noexcept
    {
        return false
            || time
            || alloc_count
            || alloc_bytes
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleStats
                                #define DEF_s_ModuleStats
struct s_ModuleStats
{
    s_ModuleStat lex;
    s_ModuleStat parse;
    s_ModuleStat solve;
    s_ModuleStat codegen;
    explicit operator bool() const noexcept
    {
        return false
            || lex
            || parse
            || solve
            || codegen
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
    fu_MAP<fu_STR, fu_STR> files;
    fu_MAP<fu_STR, fu_STR> fuzzy;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
            || fuzzy
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static fu_STR ensure_local_fname(const fu_STR& fname, const fu_STR& dir_src)
{
    if (fu::lmatch(fname, dir_src))
        return fu_STR(fname);

    fu_STR foreign = (dir_src + ".foreign/"_fu);
    fu::fs_mkdir_p(fu_STR(foreign));
    fu_STR rel = fu::replace(fu::replace(path_relative(dir_src, fname), "../"_fu, "up__"_fu), "/"_fu, "__"_fu);
    return (foreign + rel);
}

static fu_STR update_file(const fu_STR& fname, const fu_STR& data, const fu_STR& dir_src, const fu_STR& dir_out, const bool nowrite)
{
    fu_STR fname_1 = ensure_local_fname(fname, dir_src);
    (fu::lmatch(fname_1, dir_src) || fu::fail("ensure_local_fname broken"_fu));
    fu_STR fname_2 = (dir_out + fu::slice(fname_1, dir_src.size()));
    if ((fu::file_read(fname_2) != data))
    {
        if (nowrite)
            fu::fail((((("NOWRITE: About to write `"_fu + fname_2) + "`:\n\n"_fu) + data) + "\n"_fu));

        const int err = fu::file_write(fname_2, data);
        if (err)
            fu::fail(((("Failed to write `"_fu + fname_2) + "`, error: #"_fu) + err));

        (std::cout << ("  WROTE "_fu + fname_2) << '\n');
    };
    return fname_2;
}

namespace {

struct sf_getLinkOrder
{
    const fu_VEC<s_Module>& modules;
    const s_Context& ctx {};
    fu_VEC<int> link_order = fu_VEC<int> { fu_VEC<int>::INIT<1> { 0 } };
    void visit(const s_Module& module, const s_Context& ctx)
    {
        const int link_id = module.modid;
        if (fu::has(link_order, link_id))
            return;

        const fu_VEC<fu_STR>& fuzimports = module.in.parse.fuzimports;
        for (int i = 0; (i < fuzimports.size()); i++)
        {
            fu_STR fname = resolveFile_x(fuzimports[i], ctx);
            for (int i_1 = 1; (i_1 < modules.size()); i_1++)
            {
                const s_Module& m = modules[i_1];
                if ((m.fname == fname))
                {
                    visit(m, ctx);
                    break;
                };
            };
        };
        (fu::has(link_order, link_id) && fu::fail("link order broken"_fu));
        link_order.push(link_id);
    };
    fu_VEC<int> getLinkOrder()
    {
        for (int i = 1; (i < modules.size()); i++)
            visit(modules[i], ctx);

        return link_order;
    };
};

} // namespace

fu_VEC<int> getLinkOrder(const fu_VEC<s_Module>& modules, const s_Context& ctx)
{
    return (sf_getLinkOrder { modules, ctx }).getLinkOrder();
}


                                #ifndef DEFt_if_last_bcSl
                                #define DEFt_if_last_bcSl
inline std::byte if_last_bcSl(fu_STR& s)
{
    return ([&]() -> std::byte { if (s.size()) return s.mutref((s.size() - 1)); else return fu::Default<std::byte>::value; }());
}
                                #endif

void build(const bool run, fu_STR&& dir_wrk, const fu_STR& fulib, fu_STR&& bin, fu_STR&& dir_obj, fu_STR&& dir_src, fu_STR&& dir_cpp, const fu_STR& unity, const fu_STR& scheme, const bool nowrite, const s_Context& ctx)
{
    if ((if_last_bcSl(dir_wrk) != std::byte('/')))
    {
        (dir_wrk || fu::fail("No workspace directory provided."_fu));
        (dir_wrk += std::byte('/'));
    };
    if ((dir_obj && (if_last_bcSl(dir_obj) != std::byte('/'))))
        (dir_obj += std::byte('/'));

    if ((dir_src && (if_last_bcSl(dir_src) != std::byte('/'))))
        (dir_src += std::byte('/'));

    if ((dir_cpp && (if_last_bcSl(dir_cpp) != std::byte('/'))))
        (dir_cpp += std::byte('/'));

    fu_STR O_lvl = ((scheme != "debug"_fu) ? "-O3 -DNDEBUG -fno-math-errno "_fu : "-Og "_fu);
    if (((scheme == "debug"_fu) || (scheme == "reldeb"_fu)))
        (O_lvl += "-g "_fu);

    if ((scheme == "retail"_fu))
        (O_lvl += "-Dfu_RETAIL "_fu);

    fu_STR INCLUDE = "-I ~/fu/include "_fu;
    fu_STR GCChash = ("g++ -std=c++1z "_fu + O_lvl);
    fu_STR GCC_CMD = ((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wno-parentheses-equality "_fu);
    fu_VEC<fu_STR> Fs {};
    int len_all {};
    fu_STR fulib_cpp = fu::file_read(fulib);
    for (int i = 0; (i < ctx.modules.size()); i++)
    {
        const s_Module& module = ctx.modules[i];
        const fu_STR& cpp = (i ? module.out.cpp : fulib_cpp);
        fu_STR F = ([&]() -> fu_STR { if (cpp) return ((((dir_wrk + "o-"_fu) + fu::hash_tea((GCChash + cpp))) + "-"_fu) + cpp.size()); else return fu_STR{}; }());
        Fs.push(F);
        len_all += cpp.size();
    };
    fu::fs_mkdir_p(fu_STR(dir_wrk));
    fu_STR F_exe = ((((((dir_wrk + "b-"_fu) + fu::hash_tea(fu::join(Fs, "/"_fu))) + "-"_fu) + len_all) + "-"_fu) + Fs.size());
    int code {};
    fu_STR stdout {};
    const auto& ERR = [&](fu_STR&& cpp) -> fu::never
    {
        if (!cpp)
        {
            for (int i = Fs.size(); (i-- > 0); )
            {
                if (Fs.mutref(i))
                    (cpp += (("#include \""_fu + Fs.mutref(i)) + ".cpp\"\n"_fu));

            };
        };
        fu_STR fname = (dir_wrk + "failing-testcase.cpp"_fu);
        (std::cout << ("  WRITE "_fu + fname) << '\n');
        fu::file_write(fname, cpp);
        if (!stdout)
            stdout = (("[ EXIT CODE "_fu + code) + " ]"_fu);

        fu::fail(("Smth broke: "_fu + stdout));
    };
    fu_VEC<int> link_order = getLinkOrder(ctx.modules, ctx);
    if (((fu::file_size(F_exe) < 1) && (bin || run)))
    {
        for (int i = 0; (i < Fs.size()); i++)
        {
            fu_STR F { Fs[i] };
            if (!F)
            {
                continue;
            };
            fu_STR F_cpp = (F + ".cpp"_fu);
            fu_STR F_tmp = (F + ".o.tmp"_fu);
            fu_STR F_obj = (F + ".o"_fu);
            if ((fu::file_size(F_obj) < 1))
            {
                fu_STR human = (i ? path_filename(ctx.modules[i].fname) : "fulib runtime"_fu);
                const fu_STR& cpp = (i ? ctx.modules[i].out.cpp : fulib_cpp);
                if (nowrite)
                    fu::fail((((("NOWRITE: About to write `"_fu + F_cpp) + "`:\n\n"_fu) + cpp) + "\n"_fu));
                else
                    fu::file_write(F_cpp, cpp);

                (std::cout << "  BUILD "_fu << human << " "_fu << F_cpp << '\n');
                const double t0 = fu::now_hr();
                code = ([&]() -> int { { int _ = fu::shell_exec(((((((GCC_CMD + INCLUDE) + "-c -o "_fu) + F_tmp) + " "_fu) + F_cpp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_obj) + " 2>&1"_fu), stdout); }());
                if (code)
                    ERR(fu_STR(cpp));

                const double t1 = fu::now_hr();
                (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << '\n');
            };
        };
        fu_STR F_tmp = (F_exe + ".tmp"_fu);
        fu_STR cmd = (((GCC_CMD + "-o "_fu) + F_tmp) + " "_fu);
        for (int i = 0; (i < link_order.size()); i++)
        {
            fu_STR F { Fs[link_order[i]] };
            if (F)
                (cmd += (F + ".o "_fu));

        };
        
        {
            (std::cout << "   LINK "_fu << F_exe << '\n');
            const double t0 = fu::now_hr();
            code = ([&]() -> int { { int _ = fu::shell_exec((cmd + " 2>&1"_fu), stdout); if (_) return _; } { int _ = fu::shell_exec((("chmod 755 "_fu + F_tmp) + " 2>&1"_fu), stdout); if (_) return _; } return fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_exe) + " 2>&1"_fu), stdout); }());
            if (code)
            {
                (std::cout << ("   FAIL "_fu + fu::join(Fs, ("\n        "_fu + "\n"_fu))) << '\n');
                ERR(fu_STR{});
            };
            const double t1 = fu::now_hr();
            (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << '\n');
        };
        if (((Fs.size() == 2) && Fs.mutref(1)))
            code = fu::shell_exec((("rm "_fu + Fs.mutref(1)) + ".o 2>&1"_fu), stdout);

        if (code)
            ERR(fu_STR{});

    };
    if (run)
        code = fu::shell_exec(fu_STR(F_exe), stdout);

    if (code)
        ERR(fu_STR{});

    if ((dir_cpp && dir_src))
    {
        fu::fs_mkdir_p(fu_STR(dir_cpp));
        fu_VEC<fu_STR> cpp_files {};
        for (int i = 0; (i < ctx.modules.size()); i++)
        {
            const s_Module& module = ctx.modules[i];
            const fu_STR& data = ([&]() -> const fu_STR& { if (i) return module.out.cpp; else return fu::Default<fu_STR>::value; }());
            fu_STR fname = ([&]() -> fu_STR { if (data) return (module.fname + ".cpp"_fu); else return fu_STR{}; }());
            fu_STR fname_1 = ([&]() -> fu_STR { if (fname) return update_file(fname, data, dir_src, dir_cpp, nowrite); else return fu_STR{}; }());
            cpp_files.push(fname_1);
        };
        fu_STR CMakeLists = ([&]() -> fu_STR { if (unity) return path_join(path_dirname(unity), "CMakeLists.txt"_fu); else return fu_STR{}; }());
        if ((unity || CMakeLists))
        {
            if (unity)
            {
                fu_STR data = "#pragma once\n\n"_fu;
                (data += (("#ifdef fu_UNITY_FULIB\n"_fu + "#include <fu/_fulib.cpp>\n"_fu) + "#endif\n\n"_fu));
                ((link_order.size() == cpp_files.size()) || fu::fail("lo.len != cf.len"_fu));
                for (int i = 0; (i < link_order.size()); i++)
                {
                    fu_STR incl { cpp_files[link_order[i]] };
                    if (incl)
                        (data += (("#include \""_fu + path_relative(unity, incl)) + "\"\n"_fu));

                };
                update_file((unity + ".unity.cpp"_fu), data, dir_src, dir_cpp, nowrite);
            };
            if (CMakeLists)
            {
                fu_STR data = "cmake_minimum_required(VERSION 3.6)\n\n"_fu;
                fu_VEC<fu_STR> inputs {};
                fu_VEC<fu_STR> outputs {};
                ((link_order.size() == cpp_files.size()) || fu::fail("lo.len != cf.len (2)"_fu));
                fu_STR main {};
                fu_STR includes {};
                for (int i = 1; (i < link_order.size()); i++)
                {
                    const int moduleIdx = link_order[i];
                    const s_Module& module = ctx.modules[moduleIdx];
                    fu_STR input = path_relative(CMakeLists, module.fname);
                    if ((moduleIdx == 1))
                        main = input;

                    inputs.push(input);
                    fu_STR custom = (module.fname + ".cmake"_fu);
                    if ((fu::file_size(custom) > 0))
                        (includes += (("include("_fu + path_relative(CMakeLists, custom)) + ")\n"_fu));

                    fu_STR cpp_file { cpp_files[moduleIdx] };
                    if (cpp_file)
                        outputs.push(("${CMAKE_CURRENT_SOURCE_DIR}/"_fu + path_relative(CMakeLists, cpp_file)));

                };
                fu_STR libname = path_noext(path_filename(main));
                (data += (("set(FU_TARGET "_fu + libname) + ")\n\n"_fu));
                (data += (("set(FU_MAIN "_fu + main) + ")\n\n"_fu));
                (data += (("set(FU_INPUTS\n    "_fu + fu::join(inputs, "\n    "_fu)) + ")\n\n"_fu));
                if (unity)
                    (data += ((("set(FU_OUTPUTS\n    "_fu + "${CMAKE_CURRENT_SOURCE_DIR}/"_fu) + path_relative(CMakeLists, unity)) + ".unity.cpp)\n\n"_fu));
                else
                    (data += (("set(FU_OUTPUTS\n    "_fu + fu::join(outputs, "\n    "_fu)) + ")\n\n"_fu));

                (data += (((((("add_custom_command(\n"_fu + "    OUTPUT ${FU_OUTPUTS}\n"_fu) + "    COMMAND $ENV{HOME}/fu/bin/fu\n"_fu) + "    ARGS -c ${FU_MAIN}\n"_fu) + "    DEPENDS ${FU_INPUTS}\n"_fu) + "    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}\n"_fu) + "    VERBATIM)\n\n"_fu));
                (data += "add_library(${FU_TARGET} ${FU_OUTPUTS})\n\n"_fu);
                (data += (("add_library(fulib SHARED $ENV{HOME}/fu/include/fu/_fulib.cpp)\n"_fu + "target_include_directories(fulib PUBLIC $ENV{HOME}/fu/include/)\n"_fu) + "target_link_libraries(${FU_TARGET} PUBLIC fulib)\n\n"_fu));
                if (includes)
                    (data += (includes + "\n"_fu));

                update_file(CMakeLists, data, dir_src, dir_cpp, nowrite);
            };
        };
    };
    if (bin)
    {
        fu::fs_mkdir_p(path_dirname(bin));
        code = fu::shell_exec((((("mv "_fu + F_exe) + " "_fu) + bin) + " 2>&1"_fu), stdout);
    };
    if (code)
        ERR(fu_STR{});

}

#endif
