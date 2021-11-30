#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/int.h>
#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/now.h>
#include <fu/shell.h>
#include <fu/str.h>
#include <fu/util.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/join.h>
#include <fu/vec/replace.h>
#include <fu/vec/slice.h>
#include <fu/view.h>
#include <iostream>

struct s_ArgWrite;
struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
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
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_ScopeSkipMemos;
struct s_SolvedNode;
struct s_SolvedNodeData;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

fu_STR hash16(fu::view<fu::byte>, int);
fu_STR path_dirname(const fu_STR&);
fu_STR path_filename(const fu_STR&);
fu_STR path_join(fu::view<fu::byte>, const fu_STR&);
fu_STR path_noext(const fu_STR&);
fu_STR path_relative(fu::view<fu::byte>, const fu_STR&);

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
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
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
    fu_VEC<fu_STR> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
            || warnings
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
    int modid;
    unsigned packed;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || modid
            || packed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR name;
    s_Target target;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<int> imports;
    fu_VEC<s_Target> converts;
    int flat_cnt;
    bool all_triv;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
            || flat_cnt
            || all_triv
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_Target nodeown;
    int nodeidx;
    explicit operator bool() const noexcept
    {
        return false
            || nodeown
            || nodeidx
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

                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    explicit operator bool() const noexcept
    {
        return false
            || index
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
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
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
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
    s_SolvedNode solved;
    unsigned status;
    int local_of;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || solved
            || status
            || local_of
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu_VEC<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ArgWrite
                                #define DEF_s_ArgWrite
struct s_ArgWrite
{
    int nodeidx;
    int arg_position;
    explicit operator bool() const noexcept
    {
        return false
            || nodeidx
            || arg_position
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    s_BitSet risk_free;
    s_ArgWrite written_via;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || risk_free
            || written_via
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int imports_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || imports_len
            || usings_len
            || converts_len
            || helpers_len
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkip
                                #define DEF_s_ScopeSkip
struct s_ScopeSkip
{
    int start;
    int end;
    explicit operator bool() const noexcept
    {
        return false
            || start
            || end
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkipMemos
                                #define DEF_s_ScopeSkipMemos
struct s_ScopeSkipMemos
{
    fu_VEC<s_ScopeSkip> items;
    fu_VEC<s_ScopeSkip> declash;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || declash
            || imports
            || usings
            || converts
            || helpers
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
    s_ScopeMemo scope_memo;
    s_ScopeSkipMemos scope_skip;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
            || scope_memo
            || scope_skip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    fu_STR kind;
    int helpers;
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
            || helpers
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

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<s_SolvedNode> callsites;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callsites
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
    fu_VEC<s_Extended> extended;
    fu_VEC<int> imports;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_count;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || extended
            || imports
            || usings
            || converts
            || pub_count
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
    int notes;
    s_SolverOutput(const s_SolverOutput&) = delete;
    s_SolverOutput(s_SolverOutput&&) = default;
    s_SolverOutput& operator=(const s_SolverOutput&) = delete;
    s_SolverOutput& operator=(s_SolverOutput&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || scope
            || notes
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu_VEC<int> unity;
    fu_VEC<int> unity_because;
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
            || unity
            || unity_because
            || src
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_VEC<s_Struct> types;
    s_SolverOutput solve;
    s_CodegenOutput cpp;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
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
    s_Module(const s_Module&) = delete;
    s_Module(s_Module&&) = default;
    s_Module& operator=(const s_Module&) = delete;
    s_Module& operator=(s_Module&&) = default;
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
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
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

                                #ifndef DEFt_if_last_SzE9
                                #define DEFt_if_last_SzE9
inline fu::byte if_last_SzE9(fu::view<fu::byte> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const fu::byte*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_snLz
                                #define DEFt_grow_if_oob_snLz
inline fu_STR& grow_if_oob_snLz(fu_VEC<fu_STR>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

[[noreturn]] static fu::never ERR(fu_STR&& cpp_1, fu::view<fu_STR> Fs, fu::view<fu::byte> dir_wrk, fu_STR& stdout, const int code, const fu_STR& onfail, const s_Context& ctx)
{
    if (!cpp_1)
    {
        for (int i = Fs.size(); i-- > 0; )
        {
            if (Fs[i])
                cpp_1 += (("#include \""_fu + Fs[i]) + ".cpp\"\n"_fu);

        };
    };
    fu_STR fname_1 = (dir_wrk + "failing-testcase.cpp"_fu);
    (std::cout << ("  WRITE "_fu + fname_1) << '\n');
    fu::file_write(fname_1, cpp_1);
    if (!stdout)
        stdout = x7E_OZkl("Exit code: "_fu, fu::i64dec(code));

    fu_STR explain {};
    if (onfail)
    {
        explain = "\nFailing testcase:\n\n"_fu;
        for (int i = 1; i < ctx.modules.size(); i++)
            explain += ((onfail == "print-src"_fu) ? fu_STR(ctx.modules[i].in.src) : (ctx.modules[i].fname + "\n"_fu));

        if (onfail == "print-src"_fu)
        {
            explain += "\nSources:\n"_fu;
            for (int i_1 = 1; i_1 < ctx.modules.size(); i_1++)
                explain += ctx.modules[i_1].out.cpp.src;

        };
    };
    fu::fail((stdout + explain));
}

                                #ifndef DEFt_only_VAhQ
                                #define DEFt_only_VAhQ
inline int only_VAhQ(fu::view<int> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static fu_STR ensure_local_fname(const fu_STR& fname_1, fu::view<fu::byte> dir_src)
{
    if (fu::lmatch(fname_1, dir_src))
        return fu_STR(fname_1);

    fu_STR foreign = (dir_src + ".foreign/"_fu);
    fu::fs_mkdir_p(fu_STR(foreign));
    fu_STR rel = fu::replace(fu::replace(path_relative(dir_src, fname_1), "../"_fu, "up__"_fu), "/"_fu, "__"_fu);
    return foreign + rel;
}

static fu_STR update_file(const fu_STR& fname_1, fu::view<fu::byte> data, fu::view<fu::byte> dir_src, fu::view<fu::byte> dir_out)
{
    fu_STR fname_2 = ensure_local_fname(fname_1, dir_src);
    if (!(fu::lmatch(fname_2, dir_src)))
        fu::fail("ensure_local_fname broken"_fu);

    fu_STR fname_3 = (dir_out + fu::slice(fname_2, dir_src.size()));
    if (fu::file_read(fname_3) != data)
    {
        const int err = fu::file_write(fname_3, data);
        if (err)
            fu::fail(x7E_OZkl((("Failed to write `"_fu + fname_3) + "`, error: #"_fu), fu::i64dec(err)));

        (std::cout << ("  WROTE "_fu + fname_3) << '\n');
    };
    return fname_3;
}

void build(const bool run, fu_STR&& dir_wrk, const fu_STR& fulib, fu_STR&& bin, fu_STR&& dir_obj, fu_STR&& dir_src, fu_STR&& dir_cpp, const fu_STR& unity_1, fu::view<fu::byte> scheme, const fu_STR& onfail, const s_Context& ctx)
{
    if (if_last_SzE9(dir_wrk) != fu::byte('/'))
    {
        if (!(dir_wrk))
            fu::fail("No workspace directory provided."_fu);

        dir_wrk += fu::byte('/');
    };
    if (dir_obj && (if_last_SzE9(dir_obj) != fu::byte('/')))
        dir_obj += fu::byte('/');

    if (dir_src && (if_last_SzE9(dir_src) != fu::byte('/')))
        dir_src += fu::byte('/');

    if (dir_cpp && (if_last_SzE9(dir_cpp) != fu::byte('/')))
        dir_cpp += fu::byte('/');

    fu_STR O_lvl = ((scheme != "debug"_fu) ? "-O3 -DNDEBUG -fno-math-errno "_fu : "-Og "_fu);
    if ((scheme == "debug"_fu) || (scheme == "reldeb"_fu))
        O_lvl += "-g "_fu;

    if (scheme == "retail"_fu)
        O_lvl += "-Dfu_RETAIL "_fu;

    fu_STR INCLUDE = "-I ~/fu/include "_fu;
    fu_STR GCChash = ("g++ -std=c++1z "_fu + O_lvl);
    fu_STR GCC_CMD = ((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wdouble-promotion "_fu);
    s_CodegenOutput fulib_cpp = s_CodegenOutput { fu_VEC<int>{}, fu_VEC<int>{}, fu::file_read(fulib) };
    fu_VEC<int> unit_mapping {};
    fu_VEC<fu_STR> unit_fnames {};
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        const s_CodegenOutput& cpp_1 = (i ? module.out.cpp : fulib_cpp);
        if (!cpp_1.src)
        {
            unit_mapping += -1;
            continue;
        };
        int unit = i;
        for (int i_1 = 0; i_1 < cpp_1.unity.size(); i_1++)
        {
            const int u = unit_mapping[cpp_1.unity[i_1]];
            if (unit > u)
                unit = u;

        };
        for (int i_1_1 = 0; i_1_1 < cpp_1.unity.size(); i_1_1++)
        {
            const int m = cpp_1.unity[i_1_1];
            const int u = unit_mapping[m];
            if (u != unit)
            {
                for (int i_2 = u; i_2 < unit_mapping.size(); i_2++)
                {
                    if (unit_mapping[i_2] == u)
                        unit_mapping.mutref(i_2) = unit;

                };
            };
        };
        unit_mapping += unit;
        grow_if_oob_snLz(unit_fnames, unit) = (i ? fu_STR(module.fname) : "fulib runtime"_fu);
    };
    fu_VEC<fu_STR> units {};
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        const s_Module& module = ctx.modules[i_1];
        const s_CodegenOutput& cpp_1 = (i_1 ? module.out.cpp : fulib_cpp);
        if (cpp_1.src)
            grow_if_oob_snLz(units, unit_mapping[i_1]) += cpp_1.src;

    };
    fu_VEC<fu_STR> Fs {};
    int len_all {};
    for (int i_2 = 0; i_2 < units.size(); i_2++)
    {
        const fu_STR& cpp_1 = units[i_2];
        if (!cpp_1)
            continue;

        fu_STR F = x7E_OZkl((((dir_wrk + "o-"_fu) + hash16((GCChash + cpp_1), 16)) + "-"_fu), fu::i64dec(cpp_1.size()));
        grow_if_oob_snLz(Fs, i_2) = F;
        len_all += cpp_1.size();
    };
    fu::fs_mkdir_p(fu_STR(dir_wrk));
    fu_STR F_exe = x7E_OZkl((x7E_OZkl((((dir_wrk + "b-"_fu) + hash16(fu::join(Fs, "/"_fu), 16)) + "-"_fu), fu::i64dec(len_all)) + "-"_fu), fu::i64dec(Fs.size()));
    int code {};
    fu_STR stdout {};
    const int exe_size = fu::file_size(F_exe);
    if ((exe_size < 1) && (bin || run))
    {
        for (int i_3 = 0; i_3 < Fs.size(); i_3++)
        {
            const fu_STR& F = Fs[i_3];
            if (!F)
                continue;

            fu_STR F_cpp = (F + ".cpp"_fu);
            fu_STR F_tmp = (F + ".o.tmp"_fu);
            fu_STR F_obj = (F + ".o"_fu);
            if (fu::file_size(F_obj) < 1)
            {
                fu_STR human = (i_3 ? path_filename(ctx.modules[i_3].fname) : "fulib runtime"_fu);
                const fu_STR& cpp_1 = units[i_3];
                fu::file_write(F_cpp, cpp_1);
                (std::cout << "  BUILD "_fu << human << " "_fu << F_cpp << '\n');
                const double t0 = fu::now_hr();
                int _0 {};
                code = ((_0 = fu::shell_exec(((((((GCC_CMD + INCLUDE) + "-c -o "_fu) + F_tmp) + " "_fu) + F_cpp) + " 2>&1"_fu), stdout)) ? _0 : fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_obj) + " 2>&1"_fu), stdout));
                if (code)
                    ERR(fu_STR(cpp_1), Fs, dir_wrk, stdout, code, onfail, ctx);

                const double t1 = fu::now_hr();
                (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << '\n');
            };
        };
        fu_STR F_tmp = (F_exe + ".tmp"_fu);
        fu_STR cmd = (((GCC_CMD + "-o "_fu) + F_tmp) + " "_fu);
        for (int i_4 = 0; i_4 < Fs.size(); i_4++)
        {
            const fu_STR& F = Fs[i_4];
            if (F)
                cmd += (F + ".o "_fu);

        };
        fu_STR LIBS = (fu_LINUX ? " -ldl -pthread"_fu : fu_STR{});

        {
            (std::cout << "   LINK "_fu << F_exe << '\n');
            const double t0 = fu::now_hr();
            int _1 {};
            code = ((_1 = fu::shell_exec(((cmd + LIBS) + " 2>&1"_fu), stdout)) ? _1 : (_1 = fu::shell_exec((("chmod 755 "_fu + F_tmp) + " 2>&1"_fu), stdout)) ? _1 : fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_exe) + " 2>&1"_fu), stdout));
            if (code)
            {
                (std::cout << ("   FAIL "_fu + fu::join(Fs, ("\n        "_fu + "\n"_fu))) << '\n');
                ERR(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, ctx);
            };
            const double t1 = fu::now_hr();
            (std::cout << "     OK "_fu << (t1 - t0) << "s"_fu << '\n');
        };
        if (code)
            ERR(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, ctx);

    };
    if (run)
    {
        if (exe_size == 4)
            code = only_VAhQ(fu::view_of(fu::file_read(F_exe), int{}));
        else
        {
            code = fu::shell_exec(fu_STR(F_exe), stdout);
            const bool pure = true;
            if (pure)
                fu::file_write(F_exe, fu::view_of((fu::slate<1, int> { int(code) }), fu::byte{}));

        };
    };
    if (code)
        ERR(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, ctx);

    if (dir_cpp && dir_src)
    {
        fu::fs_mkdir_p(fu_STR(dir_cpp));
        fu_VEC<fu_STR> cpp_files {};
        for (int i_3 = 1; i_3 < units.size(); i_3++)
        {
            const fu_STR& data = units[i_3];
            fu_STR fname_1 = (data ? (unit_fnames[i_3] + ".cpp"_fu) : fu_STR{});
            fu_STR fname_2 = (fname_1 ? update_file(fname_1, data, dir_src, dir_cpp) : fu_STR{});
            cpp_files.push(fname_2);
        };
        fu_STR CMakeLists = (unity_1 ? path_join(path_dirname(unity_1), "CMakeLists.txt"_fu) : fu_STR{});
        if (unity_1 || CMakeLists)
        {
            if (unity_1)
            {
                fu_STR data = "#pragma once\n\n"_fu;
                data += (("#ifdef fu_UNITY_FULIB\n"_fu + "#include <fu/_fulib.cpp>\n"_fu) + "#endif\n\n"_fu);
                for (int i_4 = 0; i_4 < cpp_files.size(); i_4++)
                {
                    const fu_STR& incl = cpp_files[i_4];
                    if (incl)
                        data += (("#include \""_fu + path_relative(unity_1, incl)) + "\"\n"_fu);

                };
                update_file((unity_1 + ".unity.cpp"_fu), data, dir_src, dir_cpp);
            };
            if (CMakeLists)
            {
                fu_STR data = "cmake_minimum_required(VERSION 3.6)\n\n"_fu;
                fu_VEC<fu_STR> inputs {};
                fu_VEC<fu_STR> outputs {};
                fu_STR main {};
                fu_STR includes {};
                for (int i_4 = 1; i_4 < ctx.modules.size(); i_4++)
                {
                    const s_Module& module = ctx.modules[i_4];
                    fu_STR input = path_relative(CMakeLists, module.fname);
                    if (i_4 == 1)
                        main = input;

                    inputs.push(input);
                    fu_STR custom = (module.fname + ".cmake"_fu);
                    if (fu::file_size(custom) > 0)
                        includes += (("include("_fu + path_relative(CMakeLists, custom)) + ")\n"_fu);

                };
                for (int i_5 = 0; i_5 < cpp_files.size(); i_5++)
                {
                    const fu_STR& cpp_file = cpp_files[i_5];
                    if (cpp_file)
                        outputs.push(("${CMAKE_CURRENT_SOURCE_DIR}/"_fu + path_relative(CMakeLists, cpp_file)));

                };
                fu_STR libname = path_noext(path_filename(main));
                data += (("set(FU_TARGET "_fu + libname) + ")\n\n"_fu);
                data += (("set(FU_MAIN "_fu + main) + ")\n\n"_fu);
                data += (("set(FU_INPUTS\n    "_fu + fu::join(inputs, "\n    "_fu)) + ")\n\n"_fu);
                if (unity_1)
                    data += ((("set(FU_OUTPUTS\n    "_fu + "${CMAKE_CURRENT_SOURCE_DIR}/"_fu) + path_relative(CMakeLists, unity_1)) + ".unity.cpp)\n\n"_fu);
                else
                    data += (("set(FU_OUTPUTS\n    "_fu + fu::join(outputs, "\n    "_fu)) + ")\n\n"_fu);

                data += (((((("add_custom_command(\n"_fu + "    OUTPUT ${FU_OUTPUTS}\n"_fu) + "    COMMAND $ENV{HOME}/fu/bin/fu\n"_fu) + "    ARGS -c ${FU_MAIN}\n"_fu) + "    DEPENDS ${FU_INPUTS}\n"_fu) + "    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}\n"_fu) + "    VERBATIM)\n\n"_fu);
                data += "add_library(${FU_TARGET} ${FU_OUTPUTS})\n\n"_fu;
                data += (("add_library(fulib SHARED $ENV{HOME}/fu/include/fu/_fulib.cpp)\n"_fu + "target_include_directories(fulib PUBLIC $ENV{HOME}/fu/include/)\n"_fu) + "target_link_libraries(${FU_TARGET} PUBLIC fulib)\n\n"_fu);
                if (includes)
                    data += (includes + "\n"_fu);

                update_file(CMakeLists, data, dir_src, dir_cpp);
            };
        };
    };
    if (bin)
    {
        fu::fs_mkdir_p(path_dirname(bin));
        code = fu::shell_exec((((("mv "_fu + F_exe) + " "_fu) + bin) + " 2>&1"_fu), stdout);
    };
    if (code)
        ERR(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, ctx);

}

#endif
