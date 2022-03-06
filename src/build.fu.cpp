
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/int.h>
#include <fu/io.h>
#include <fu/never.h>
#include <fu/now.h>
#include <fu/print.h>
#include <fu/process.h>
#include <fu/shell.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>

struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_Helpers;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Map_EmVtl5Qe;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleSortHelper;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_RWRanges;
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

fu_STR hash16_HxcQaXaI(fu::view<char>, int);
fu_STR path_dirname_85KQkyE0(const fu_STR&);
fu_STR path_filename_85KQkyE0(const fu_STR&);
fu_STR path_join_7wphlfxd(fu::view<char>, const fu_STR&);
fu_STR path_noext_85KQkyE0(const fu_STR&);
fu_STR path_relative_7wphlfxd(fu::view<char>, const fu_STR&);

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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
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
    int signedidx;
    explicit operator bool() const noexcept
    {
        return false
            || signedidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
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
    unsigned status;
    s_SolvedNode solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    int local;
    s_BitSet soft_risk;
    s_BitSet hard_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || soft_risk
            || hard_risk
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int implicits_len;
    int imports_len;
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || implicits_len
            || imports_len
            || privates_len
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
    fu_VEC<s_ScopeSkip> implicits;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || implicits
            || imports
            || privates
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
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

                                #ifndef DEF_s_RWRanges
                                #define DEF_s_RWRanges
struct s_RWRanges
{
    int reads0;
    int reads1;
    int writes0;
    int writes1;
    explicit operator bool() const noexcept
    {
        return false
            || reads0
            || reads1
            || writes0
            || writes1
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    fu_STR kind;
    s_Helpers helpers;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    s_RWRanges rwr;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int local_of;
    int revision;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<int> callers;
    explicit operator bool() const noexcept
    {
        return false
            || local_of
            || revision
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callers
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu_VEC<s_Overload> overloads;
    fu_VEC<s_Extended> extended;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_ScopeItem> implicits;
    fu_VEC<int> imports;
    fu_VEC<int> privates;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_items;
    int pub_cnvrts;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || overloads
            || extended
            || items
            || implicits
            || imports
            || privates
            || usings
            || converts
            || pub_items
            || pub_cnvrts
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
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
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
    int init_prio;
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
            || init_prio
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

                                #ifndef DEF_s_Map_EmVtl5Qe
                                #define DEF_s_Map_EmVtl5Qe
struct s_Map_EmVtl5Qe
{
    fu_VEC<fu_STR> keys;
    fu_VEC<fu_STR> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    s_Map_EmVtl5Qe files;
    s_Map_EmVtl5Qe fuzzy;
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

                                #ifndef DEF_s_ModuleSortHelper
                                #define DEF_s_ModuleSortHelper
struct s_ModuleSortHelper
{
    int compile_index;
    explicit operator bool() const noexcept
    {
        return false
            || compile_index
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_if_last_3iMa5bcs
                                #define DEFt_if_last_3iMa5bcs
inline char if_last_3iMa5bcs(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_grow_if_oob_CXYMgNnb
                                #define DEFt_grow_if_oob_CXYMgNnb
inline fu_VEC<s_ModuleSortHelper>& grow_if_oob_CXYMgNnb(fu_VEC<fu_VEC<s_ModuleSortHelper>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static const s_Module& GET_dASERA71(const s_ModuleSortHelper& _, fu::view<s_Module> modules)
{
    return modules[_.compile_index];
}

                                #ifndef DEFt_grow_if_oob_bXA2BeTH
                                #define DEFt_grow_if_oob_bXA2BeTH
inline fu_STR& grow_if_oob_bXA2BeTH(fu_VEC<fu_STR>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEFt_join_hXY7eLHr
                                #define DEFt_join_hXY7eLHr
inline fu_STR join_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

[[noreturn]] static fu::never ERR_y5EY1IdQ(fu_STR&& cpp, fu::view<fu_STR> Fs, fu::view<char> dir_wrk, fu_STR& stdout, const int code, const fu_STR& onfail, fu::view<s_ModuleSortHelper> modules, fu::view<s_Module> modules_1)
{
    // Hoisted:
    fu_STR x;

    if (!cpp)
    {
        for (int i = Fs.size(); i-- > 0; )
        {
            if (Fs[i])
                cpp += (("#include \""_fu + Fs[i]) + ".cpp\"\n"_fu);

        };
    };
    fu_STR fname = (dir_wrk + "failing-testcase.cpp"_fu);
    const fu_STR* BL_5_v;
    fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
    {
        x = ("  WRITE "_fu + fname);
        BL_5_v = &(x);
    (void)0;}), *BL_5_v)) }));
    fu::file_write(fname, cpp);
    if (!stdout)
        stdout = x7E("Exit code: "_fu, fu::i64dec(code));

    fu_STR explain {};
    if (onfail)
    {
        explain = "\nFailing testcase:\n\n"_fu;
        for (int i = 1; i < modules.size(); i++)
            explain += ((onfail == "print-src"_fu) ? fu_STR(GET_dASERA71(modules[i], modules_1).in.src) : (GET_dASERA71(modules[i], modules_1).fname + "\n"_fu));

        if (onfail == "print-src"_fu)
        {
            explain += "\nSources:\n"_fu;
            for (int i_1 = 1; i_1 < modules.size(); i_1++)
                explain += GET_dASERA71(modules[i_1], modules_1).out.cpp.src;

        };
    };
    fu::fail((stdout + explain));
}

                                #ifndef DEFt_only_80Mq0iZv
                                #define DEFt_only_80Mq0iZv
inline int only_80Mq0iZv(fu::view<int> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

                                #ifndef DEFt_starts_KclJlPSO
                                #define DEFt_starts_KclJlPSO
inline bool starts_KclJlPSO(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEFt_replace_lxKOEoJG
                                #define DEFt_replace_lxKOEoJG
inline fu_STR replace_lxKOEoJG(const fu_STR& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu_STR result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str, all, last)) >= 0))
            {

                {
                    fu_STR substr = fu::slice(str, last, next);
                    const bool first = !last;
                    const bool last_1 = false;
                    if (!first)
                        result += with;
                    else if (last_1)
                        return fu_STR(str);

                    result += substr;
                };
                last = (next + N);
            };
        };
        if (last)
        {
            fu_STR substr = fu::slice(str, last);
            const bool first = false;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += substr;
        }
        else
        {
            const bool first = true;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += str;
        };
    };
    return /*NRVO*/ result;
}
                                #endif

static fu_STR ensure_local_fname_TALuNyKA(const fu_STR& fname, fu::view<char> dir_src)
{
    if (starts_KclJlPSO(fname, dir_src))
        return fu_STR(fname);

    fu_STR foreign = (dir_src + ".foreign/"_fu);
    fu::fs_mkdir_p(fu_STR(foreign));
    fu_STR rel = replace_lxKOEoJG(replace_lxKOEoJG(path_relative_7wphlfxd(dir_src, fname), "../"_fu, "up__"_fu), "/"_fu, "__"_fu);
    return foreign + rel;
}

static fu_STR update_file_rciCNKpX(const fu_STR& fname, fu::view<char> data, fu::view<char> dir_src, fu::view<char> dir_out)
{
    // Hoisted:
    fu_STR x;

    fu_STR fname_1 = ensure_local_fname_TALuNyKA(fname, dir_src);
    if (!(starts_KclJlPSO(fname_1, dir_src)))
        fu::fail("ensure_local_fname broken"_fu);

    /*MOV*/ fu_STR fname_2 = (dir_out + fu::slice(fname_1, dir_src.size()));
    if (fu::file_read(fname_2) != data)
    {
        const int err = fu::file_write(fname_2, data);
        if (err)
            fu::fail(x7E((("Failed to write `"_fu + fname_2) + "`, error: #"_fu), fu::i64dec(err)));

        const fu_STR* BL_4_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x = ("  WROTE "_fu + fname_2);
            BL_4_v = &(x);
        (void)0;}), *BL_4_v)) }));
    };
    return /*NRVO*/ fname_2;
}

void build_R6741Aeh(const bool run, fu_STR&& dir_wrk, const fu_STR& fulib, const fu_STR& bin, fu_STR&& dir_obj, fu_STR&& dir_src, fu_STR&& dir_cpp, const fu_STR& unity, fu::view<char> scheme, const fu_STR& onfail, const s_Context& ctx)
{
    // Hoisted:
    fu_VEC<s_ModuleSortHelper> result;
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;
    fu_STR x_4;
    fu_STR x_5;
    fu_STR x_6;
    fu_STR x_7;
    fu_STR x_8;
    fu_STR x_9;

    if (if_last_3iMa5bcs(dir_wrk) != '/')
    {
        if (!(dir_wrk))
            fu::fail("No workspace directory provided."_fu);

        dir_wrk += '/';
    };
    if (dir_obj && (if_last_3iMa5bcs(dir_obj) != '/'))
        dir_obj += '/';

    if (dir_src && (if_last_3iMa5bcs(dir_src) != '/'))
        dir_src += '/';

    if (dir_cpp && (if_last_3iMa5bcs(dir_cpp) != '/'))
        dir_cpp += '/';

    fu_STR O_lvl = ((scheme != "debug"_fu) ? "-O3 -DNDEBUG -fno-math-errno "_fu : "-Og "_fu);
    if ((scheme == "debug"_fu) || (scheme == "reldeb"_fu))
        O_lvl += "-g "_fu;

    if (scheme == "retail"_fu)
        O_lvl += "-Dfu_RETAIL "_fu;

    fu_STR INCLUDE = "-I ~/fu/include "_fu;
    fu_STR GCChash = ("g++ -std=c++1z "_fu + O_lvl);
    fu_STR GCC_CMD = ((((GCChash + "-pedantic-errors -Wall -Wextra -Werror "_fu) + "-Wdouble-promotion "_fu) + "-Wconversion -Wsign-conversion "_fu) + "-Wno-float-conversion "_fu);
    s_CodegenOutput fulib_cpp = s_CodegenOutput { fu::file_read(fulib) };
    fu_VEC<int> unit_mapping {};
    fu_VEC<fu_STR> unit_fnames {};
    fu::view<s_Module> modules = ctx.modules;
    fu::view<s_ModuleSortHelper> BL_8_v {};
    fu::view<s_ModuleSortHelper> modules_1 = (__extension__ (
    {
        fu_VEC<fu_VEC<s_ModuleSortHelper>> buckets {};
        for (int i = 0; i < modules.size(); i++)
        {
            const s_Module& module = modules[i];
            grow_if_oob_CXYMgNnb(buckets, module.out.init_prio) += s_ModuleSortHelper { int(i) };
        };
        result =  {};
        for (int i_1 = 0; i_1 < buckets.size(); i_1++)
            result += buckets[i_1];

        BL_8_v = (result);
    (void)0;}), static_cast<fu::view<s_ModuleSortHelper>&&>(BL_8_v));
    for (int i_2 = 0; i_2 < modules_1.size(); i_2++)
    {
        const s_ModuleSortHelper& module = modules_1[i_2];
        const s_CodegenOutput& cpp = (i_2 ? GET_dASERA71(module, modules).out.cpp : fulib_cpp);
        if (!cpp.src)
        {
            unit_mapping += -1;
            continue;
        };
        const int unit = i_2;
        unit_mapping += int(unit);
        grow_if_oob_bXA2BeTH(unit_fnames, unit) = (i_2 ? fu_STR(GET_dASERA71(module, modules).fname) : "fulib runtime"_fu);
    };
    fu_VEC<fu_STR> units {};
    for (int i_3 = 0; i_3 < modules_1.size(); i_3++)
    {
        const s_ModuleSortHelper& module_1 = modules_1[i_3];
        const s_CodegenOutput& cpp_1 = (i_3 ? GET_dASERA71(module_1, modules).out.cpp : fulib_cpp);
        if (cpp_1.src)
            grow_if_oob_bXA2BeTH(units, unit_mapping[i_3]) += cpp_1.src;

    };
    fu_VEC<fu_STR> Fs {};
    int len_all {};
    for (int i_4 = 0; i_4 < units.size(); i_4++)
    {
        const fu_STR& cpp_2 = units[i_4];
        if (!cpp_2)
            continue;

        fu_STR F = x7E((((dir_wrk + "o-"_fu) + hash16_HxcQaXaI((GCChash + cpp_2), 16)) + "-"_fu), fu::i64dec(cpp_2.size()));
        grow_if_oob_bXA2BeTH(Fs, i_4) = F;
        len_all += cpp_2.size();
    };
    fu::fs_mkdir_p(fu_STR(dir_wrk));
    fu_STR F_exe = x7E((x7E((((dir_wrk + "b-"_fu) + hash16_HxcQaXaI(join_hXY7eLHr(Fs, "/"_fu), 16)) + "-"_fu), fu::i64dec(len_all)) + "-"_fu), fu::i64dec(Fs.size()));
    int code {};
    fu_STR stdout {};
    const int exe_size = fu::file_size(F_exe);
    if ((exe_size < 1) && (bin || run))
    {
        for (int i_5 = 0; i_5 < Fs.size(); i_5++)
        {
            const fu_STR& F_1 = Fs[i_5];
            if (!F_1)
                continue;

            fu_STR F_cpp = (F_1 + ".cpp"_fu);
            fu_STR F_tmp = (F_1 + ".o.tmp"_fu);
            fu_STR F_obj = (F_1 + ".o"_fu);
            if (fu::file_size(F_obj) < 1)
            {
                fu_STR human = (i_5 ? path_filename_85KQkyE0(GET_dASERA71(modules_1[i_5], modules).fname) : "fulib runtime"_fu);
                const fu_STR& cpp_3 = units[i_5];
                fu::file_write(F_cpp, cpp_3);
                const fu_STR* BL_27_v;
                const fu_STR* BL_28_v;
                fu::println((fu::slate<4, fu_STR> { fu_STR((__extension__ (
                {
                    x = "  BUILD "_fu;
                    BL_27_v = &(x);
                (void)0;}), *BL_27_v)), fu_STR(((void)void(), human)), fu_STR((__extension__ (
                {
                    x_1 = " "_fu;
                    BL_28_v = &(x_1);
                (void)0;}), *BL_28_v)), fu_STR(((void)void(), F_cpp)) }));
                const double t0 = fu::now_hr();
                int _0 {};
                code = ((_0 = fu::shell_exec(((((((GCC_CMD + INCLUDE) + "-c -o "_fu) + F_tmp) + " "_fu) + F_cpp) + " 2>&1"_fu), stdout)) ? _0 : fu::shell_exec((((("mv "_fu + F_tmp) + " "_fu) + F_obj) + " 2>&1"_fu), stdout));
                if (code)
                    ERR_y5EY1IdQ(fu_STR(cpp_3), Fs, dir_wrk, stdout, code, onfail, modules_1, modules);

                const double t1 = fu::now_hr();
                const fu_STR* BL_30_v;
                const fu_STR* BL_31_v;
                const fu_STR* BL_32_v;
                fu::println((fu::slate<3, fu_STR> { fu_STR((__extension__ (
                {
                    x_2 = "     OK "_fu;
                    BL_30_v = &(x_2);
                (void)0;}), *BL_30_v)), fu_STR((__extension__ (
                {
                    x_3 = fu::f64dec((t1 - t0));
                    BL_31_v = &(x_3);
                (void)0;}), *BL_31_v)), fu_STR((__extension__ (
                {
                    x_4 = "s"_fu;
                    BL_32_v = &(x_4);
                (void)0;}), *BL_32_v)) }));
            };
        };
        fu_STR F_tmp_1 = (F_exe + ".tmp"_fu);
        fu_STR cmd = (((GCC_CMD + "-o "_fu) + F_tmp_1) + " "_fu);
        for (int i_6 = 0; i_6 < Fs.size(); i_6++)
        {
            const fu_STR& F_2 = Fs[i_6];
            if (F_2)
                cmd += (F_2 + ".o "_fu);

        };
        fu_STR LIBS = (fu::LINUX ? " -ldl -pthread"_fu : fu_STR{});

        {
            const fu_STR* BL_37_v;
            fu::println((fu::slate<2, fu_STR> { fu_STR((__extension__ (
            {
                x_5 = "   LINK "_fu;
                BL_37_v = &(x_5);
            (void)0;}), *BL_37_v)), fu_STR(((void)void(), F_exe)) }));
            const double t0_1 = fu::now_hr();
            int _1 {};
            code = ((_1 = fu::shell_exec(((cmd + LIBS) + " 2>&1"_fu), stdout)) ? _1 : (_1 = fu::shell_exec((("chmod 755 "_fu + F_tmp_1) + " 2>&1"_fu), stdout)) ? _1 : fu::shell_exec((((("mv "_fu + F_tmp_1) + " "_fu) + F_exe) + " 2>&1"_fu), stdout));
            if (code)
            {
                const fu_STR* BL_39_v;
                fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
                {
                    x_6 = ("   FAIL "_fu + join_hXY7eLHr(Fs, ("\n        "_fu + "\n"_fu)));
                    BL_39_v = &(x_6);
                (void)0;}), *BL_39_v)) }));
                ERR_y5EY1IdQ(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);
            };
            const double t1_1 = fu::now_hr();
            const fu_STR* BL_40_v;
            const fu_STR* BL_41_v;
            const fu_STR* BL_42_v;
            fu::println((fu::slate<3, fu_STR> { fu_STR((__extension__ (
            {
                x_7 = "     OK "_fu;
                BL_40_v = &(x_7);
            (void)0;}), *BL_40_v)), fu_STR((__extension__ (
            {
                x_8 = fu::f64dec((t1_1 - t0_1));
                BL_41_v = &(x_8);
            (void)0;}), *BL_41_v)), fu_STR((__extension__ (
            {
                x_9 = "s"_fu;
                BL_42_v = &(x_9);
            (void)0;}), *BL_42_v)) }));
        };
        if (code)
            ERR_y5EY1IdQ(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);

    };
    if (run)
    {
        if (exe_size == 4)
            code = only_80Mq0iZv(fu::view_of(fu::file_read(F_exe), int{}));
        else
        {
            code = fu::shell_exec(fu_STR(F_exe), stdout);
            const bool pure = true;
            if (pure)
                fu::file_write(F_exe, fu::view_of((fu::slate<1, int> { int(code) }), char{}));

        };
    };
    if (code)
        ERR_y5EY1IdQ(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);

    if (dir_cpp && dir_src)
    {
        fu::fs_mkdir_p(fu_STR(dir_cpp));
        fu_VEC<fu_STR> cpp_files {};
        for (int i_7 = 1; i_7 < units.size(); i_7++)
        {
            const fu_STR& data = units[i_7];
            fu_STR fname = (data ? (unit_fnames[i_7] + ".cpp"_fu) : fu_STR{});
            fu_STR fname_1 = (fname ? update_file_rciCNKpX(fname, data, dir_src, dir_cpp) : fu_STR{});
            cpp_files.push(fu_STR(fname_1));
        };
        fu_STR CMakeLists = (unity ? path_join_7wphlfxd(path_dirname_85KQkyE0(unity), "CMakeLists.txt"_fu) : fu_STR{});
        if (unity || CMakeLists)
        {
            if (unity)
            {
                fu_STR data_1 = (("#ifdef fu_UNITY_FULIB\n"_fu + "#include <fu/_fulib.cpp>\n"_fu) + "#endif\n\n"_fu);
                for (int i_8 = 0; i_8 < cpp_files.size(); i_8++)
                {
                    const fu_STR& incl = cpp_files[i_8];
                    if (incl)
                        data_1 += (("#include \""_fu + path_relative_7wphlfxd(unity, incl)) + "\"\n"_fu);

                };
                update_file_rciCNKpX((unity + ".unity.cpp"_fu), data_1, dir_src, dir_cpp);
            };
            if (CMakeLists)
            {
                fu_STR data_2 = "cmake_minimum_required(VERSION 3.6)\n\n"_fu;
                fu_VEC<fu_STR> inputs {};
                fu_VEC<fu_STR> outputs {};
                fu_STR main {};
                fu_STR includes {};
                for (int i_9 = 1; i_9 < modules_1.size(); i_9++)
                {
                    const s_ModuleSortHelper& module_2 = modules_1[i_9];
                    fu_STR input = path_relative_7wphlfxd(CMakeLists, GET_dASERA71(module_2, modules).fname);
                    if (module_2.compile_index == 1)
                        main = input;

                    inputs.push(fu_STR(input));
                    fu_STR custom = (GET_dASERA71(module_2, modules).fname + ".cmake"_fu);
                    if (fu::file_size(custom) > 0)
                        includes += (("include("_fu + path_relative_7wphlfxd(CMakeLists, custom)) + ")\n"_fu);

                };
                for (int i_10 = 0; i_10 < cpp_files.size(); i_10++)
                {
                    const fu_STR& cpp_file = cpp_files[i_10];
                    if (cpp_file)
                        outputs.push(("${CMAKE_CURRENT_SOURCE_DIR}/"_fu + path_relative_7wphlfxd(CMakeLists, cpp_file)));

                };
                fu_STR libname = path_noext_85KQkyE0(path_filename_85KQkyE0(main));
                data_2 += (("set(FU_TARGET "_fu + libname) + ")\n\n"_fu);
                data_2 += (("set(FU_MAIN "_fu + main) + ")\n\n"_fu);
                data_2 += (("set(FU_INPUTS\n    "_fu + join_hXY7eLHr(inputs, "\n    "_fu)) + ")\n\n"_fu);
                if (unity)
                    data_2 += ((("set(FU_OUTPUTS\n    "_fu + "${CMAKE_CURRENT_SOURCE_DIR}/"_fu) + path_relative_7wphlfxd(CMakeLists, unity)) + ".unity.cpp)\n\n"_fu);
                else
                    data_2 += (("set(FU_OUTPUTS\n    "_fu + join_hXY7eLHr(outputs, "\n    "_fu)) + ")\n\n"_fu);

                data_2 += (((((("add_custom_command(\n"_fu + "    OUTPUT ${FU_OUTPUTS}\n"_fu) + "    COMMAND $ENV{HOME}/fu/bin/fu\n"_fu) + "    ARGS -c ${FU_MAIN}\n"_fu) + "    DEPENDS ${FU_INPUTS}\n"_fu) + "    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}\n"_fu) + "    VERBATIM)\n\n"_fu);
                data_2 += "add_library(${FU_TARGET} ${FU_OUTPUTS})\n\n"_fu;
                data_2 += (("add_library(fulib SHARED $ENV{HOME}/fu/include/fu/_fulib.cpp)\n"_fu + "target_include_directories(fulib PUBLIC $ENV{HOME}/fu/include/)\n"_fu) + "target_link_libraries(${FU_TARGET} PUBLIC fulib)\n\n"_fu);
                if (includes)
                    data_2 += (includes + "\n"_fu);

                update_file_rciCNKpX(CMakeLists, data_2, dir_src, dir_cpp);
            };
        };
    };
    if (bin)
    {
        fu::fs_mkdir_p(path_dirname_85KQkyE0(bin));
        code = fu::shell_exec((((("mv "_fu + F_exe) + " "_fu) + bin) + " 2>&1"_fu), stdout);
    };
    if (code)
        ERR_y5EY1IdQ(fu_STR{}, Fs, dir_wrk, stdout, code, onfail, modules_1, modules);

}

#endif
