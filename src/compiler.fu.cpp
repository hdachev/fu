#include <cstdint>
#include <fu/default.h>
#include <fu/env.h>
#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/now.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/replace.h>
#include <fu/vec/slice.h>
#include <fu/view.h>
#include <iostream>

struct s_Argument;
struct s_CodegenOutput;
struct s_Context;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Lint;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Options;
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
struct s_TestDiffs;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

fu_STR getFile(fu_STR&&, s_Context&);
fu_STR resolveFile(const fu_STR&, s_Context&);
s_CodegenOutput cpp_codegen(const s_SolvedNode&, const s_Module&, const s_Context&);
s_Context FAIL(const fu_STR&, s_TestDiffs&);
s_Context FAIL(const fu_VEC<fu_STR>&, s_TestDiffs&);
s_Context ZERO(const fu_STR&, s_TestDiffs&);
s_LexerOutput lex(const fu_STR&, const fu_STR&);
s_Module& getModule(const fu_STR&, s_Context&);
s_ModuleStat ModuleStat_now();
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
s_ParserOutput parse(int, const fu_STR&, const fu_VEC<s_Token>&, const s_Options&);
s_SolverOutput solve(const s_Options&, const s_Context&, s_Module&);
static void compile(const fu_STR&, fu::view<std::byte>, const s_Options&, s_Context&);
void ModuleStat_print(const s_ModuleStat&, const fu_STR&, fu::view<std::byte>);
void ZERO_SAME(fu::view<fu_STR>, s_TestDiffs&);
void build(bool, fu_STR&&, const fu_STR&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, fu::view<std::byte>, const fu_STR&, const s_Context&);
void build(const fu_STR&, bool, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, fu::view<std::byte>);
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void setModule(const s_Module&, s_Context&);
void set_next(s_TestDiffs&, const fu_STR&, const fu_STR&);

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
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
            || flat_cnt
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
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
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_Type type;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || flags
            || value
            || items
            || type
            || target
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
    s_Template tEmplate;
    s_SolvedNode solved;
    s_Target spec_of;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_SolvedNode> callsites;
    unsigned status;
    int local_of;
    fu_VEC<s_ScopeItem> extra_items;
    s_Overload(const s_Overload&) = default;
    s_Overload(s_Overload&&) = default;
    s_Overload& operator=(s_Overload&&) = default;
    s_Overload& operator=(const s_Overload& selfrec) { return *this = s_Overload(selfrec); }
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
            || tEmplate
            || solved
            || spec_of
            || nodes
            || locals
            || callsites
            || status
            || local_of
            || extra_items
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

                                #ifndef DEF_s_Lint
                                #define DEF_s_Lint
struct s_Lint
{
    int maxwarn;
    explicit operator bool() const noexcept
    {
        return false
            || maxwarn
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
{
    s_Lint lint;
    int break_notes;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
{
    fu_MAP<fu_STR, fu_STR> _current;
    fu_MAP<fu_STR, fu_STR> _next;
    explicit operator bool() const noexcept
    {
        return false
            || _current
            || _next
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_if_last_YeU3
                                #define DEFt_if_last_YeU3
inline std::byte if_last_YeU3(fu::view<std::byte> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const std::byte*)fu::NIL);
}
                                #endif

static fu_STR absdir(const fu_STR& a)
{
    return ((if_last_YeU3(a) == std::byte('/')) ? fu_STR(a) : (a + std::byte('/')));
}

static const fu_STR HOME = absdir(fu::env_get("HOME"_fu));

fu_STR locate_PRJDIR()
{
    fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int fs = fu::file_size(fn);
    if (!(fs > 1000))
        fu::fail(((("Bad compiler.fu: "_fu + fn) + ": "_fu) + fs));

    (std::cout << ("PRJDIR: "_fu + dir) << '\n');
    return dir;
}

extern const fu_STR PRJDIR = locate_PRJDIR();

extern const fu_STR DEFAULT_WORKSPACE = (PRJDIR + "build-cpp/"_fu);

extern const fu_STR FULIB = (PRJDIR + "include/fu/_fulib.cpp"_fu);

                                #ifndef DEFt_clone_U3Pf
                                #define DEFt_clone_U3Pf
inline int clone_U3Pf(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_YeU3
                                #define DEFt_clone_YeU3
inline const fu_STR& clone_YeU3(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_MAvM
                                #define DEFt_clone_MAvM
inline const s_ModuleInputs& clone_MAvM(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_I28a
                                #define DEFt_clone_I28a
inline const fu_VEC<int>& clone_I28a(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_mnFp
                                #define DEFt_clone_mnFp
inline const fu_VEC<s_Struct>& clone_mnFp(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_VD7r
                                #define DEFt_clone_VD7r
inline const s_SolvedNode& clone_VD7r(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_T2hh
                                #define DEFt_clone_T2hh
inline const fu_VEC<s_ScopeItem>& clone_T2hh(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_evat
                                #define DEFt_clone_evat
inline const fu_VEC<s_Overload>& clone_evat(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_mnBR
                                #define DEFt_clone_mnBR
inline const fu_VEC<s_Target>& clone_mnBR(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_DhUn
                                #define DEFt_clone_DhUn
inline s_Scope clone_DhUn(const s_Scope& a)
{
    s_Scope res {};

    {
        res.items = clone_T2hh(a.items);
        res.overloads = clone_evat(a.overloads);
        res.imports = clone_I28a(a.imports);
        res.usings = clone_mnBR(a.usings);
        res.converts = clone_mnBR(a.converts);
        res.pub_count = clone_U3Pf(a.pub_count);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_v5Nc
                                #define DEFt_clone_v5Nc
inline s_SolverOutput clone_v5Nc(const s_SolverOutput& a)
{
    s_SolverOutput res {};

    {
        res.root = clone_VD7r(a.root);
        res.scope = clone_DhUn(a.scope);
        res.notes = clone_U3Pf(a.notes);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_Z1e1
                                #define DEFt_clone_Z1e1
inline const s_CodegenOutput& clone_Z1e1(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_1Fpu
                                #define DEFt_clone_1Fpu
inline s_ModuleOutputs clone_1Fpu(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};

    {
        res.deps = clone_I28a(a.deps);
        res.types = clone_mnFp(a.types);
        res.solve = clone_v5Nc(a.solve);
        res.cpp = clone_Z1e1(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_rT76
                                #define DEFt_clone_rT76
inline const s_ModuleStats& clone_rT76(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_PUXh
                                #define DEFt_clone_PUXh
inline s_Module clone_PUXh(const s_Module& a)
{
    s_Module res {};

    {
        res.modid = clone_U3Pf(a.modid);
        res.fname = clone_YeU3(a.fname);
        res.in = clone_MAvM(a.in);
        res.out = clone_1Fpu(a.out);
        res.stats = clone_rT76(a.stats);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_map_j9F3
                                #define DEFt_map_j9F3
inline fu_VEC<s_Module> map_j9F3(fu::view<s_Module> a, int)
{
    fu_VEC<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_PUXh(a[i]);

    return res;
}
                                #endif

                                #ifndef DEFt_clone_vQi3
                                #define DEFt_clone_vQi3
inline fu_VEC<s_Module> clone_vQi3(fu::view<s_Module> a)
{
    return map_j9F3(a, 0);
}
                                #endif

                                #ifndef DEFt_clone_qIfK
                                #define DEFt_clone_qIfK
inline const fu_MAP<fu_STR, fu_STR>& clone_qIfK(const fu_MAP<fu_STR, fu_STR>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_MVIm
                                #define DEFt_clone_MVIm
inline s_Context clone_MVIm(const s_Context& a)
{
    s_Context res {};

    {
        res.modules = clone_vQi3(a.modules);
        res.files = clone_qIfK(a.files);
        res.fuzzy = clone_qIfK(a.fuzzy);
    };
    return res;
}
                                #endif

extern const s_Context CTX_PRELUDE;

                                #ifndef DEFt_clone_J3Oj
                                #define DEFt_clone_J3Oj
inline s_Scope clone_J3Oj(const s_Scope& a)
{
    s_Scope res {};

    {
        res.items = clone_T2hh(a.items);
        res.overloads = clone_evat(a.overloads);
        res.imports = clone_I28a(a.imports);
        res.usings = clone_mnBR(a.usings);
        res.converts = clone_mnBR(a.converts);
        res.pub_count = clone_U3Pf(a.pub_count);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_Pu6M
                                #define DEFt_clone_Pu6M
inline s_SolverOutput clone_Pu6M(const s_SolverOutput& a)
{
    s_SolverOutput res {};

    {
        res.root = clone_VD7r(a.root);
        res.scope = clone_J3Oj(a.scope);
        res.notes = clone_U3Pf(a.notes);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_qwPy
                                #define DEFt_clone_qwPy
inline s_ModuleOutputs clone_qwPy(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};

    {
        res.deps = clone_I28a(a.deps);
        res.types = clone_mnFp(a.types);
        res.solve = clone_Pu6M(a.solve);
        res.cpp = clone_Z1e1(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_NwlG
                                #define DEFt_clone_NwlG
inline s_Module clone_NwlG(const s_Module& a)
{
    s_Module res {};

    {
        res.modid = clone_U3Pf(a.modid);
        res.fname = clone_YeU3(a.fname);
        res.in = clone_MAvM(a.in);
        res.out = clone_qwPy(a.out);
        res.stats = clone_rT76(a.stats);
    };
    return res;
}
                                #endif

static void compile(const fu_STR& fname, fu::view<std::byte> via, const s_Options& options, s_Context& ctx)
{
    s_Module module = clone_NwlG(getModule(fname, ctx));
    if (!module.in)
    {
        module.out = s_ModuleOutputs{};
        fu_STR _0 {};
        fu_STR src = ((_0 = getFile(fu_STR(fname), ctx)) ? static_cast<fu_STR&&>(_0) : fu::fail(((("import badfile: `"_fu + via) + fname) + "`."_fu)));
        const s_ModuleStat stat0 = ModuleStat_now();
        s_LexerOutput lexer_result = lex(src, fname);
        const s_ModuleStat stat1 = ModuleStat_now();
        s_ParserOutput parser_result = parse(module.modid, fname, lexer_result.tokens, options);
        const s_ModuleStat stat2 = ModuleStat_now();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), s_ParserOutput(parser_result) };
        module.stats.lex = (stat1 - stat0);
        module.stats.parse = (stat2 - stat1);
        setModule(module, ctx);
    }
    else
    {
        if (!(module.out))
            fu::fail(((("import circle: `"_fu + via) + fname) + "`."_fu));

    };
    if (!module.out)
    {
        fu::view<fu_STR> fuzimports = module.in.parse.fuzimports;
        for (int i = 0; i < fuzimports.size(); i++)
            compile(resolveFile(fuzimports[i], ctx), ((fname + " <- "_fu) + via), s_Options{}, ctx);

        const s_ModuleStat stat0 = ModuleStat_now();
        module.out.solve = solve(options, ctx, module);
        const s_ModuleStat stat1 = ModuleStat_now();
        module.out.cpp = cpp_codegen(module.out.solve.root, module, ctx);
        const s_ModuleStat stat2 = ModuleStat_now();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
        setModule(module, ctx);
    };
}

void build(const fu_STR& fname, const bool run, const fu_STR& dir_wrk, const fu_STR& bin, const fu_STR& dir_obj, const fu_STR& dir_src, const fu_STR& dir_cpp, fu::view<std::byte> scheme)
{
    s_Context ctx = clone_MVIm(CTX_PRELUDE);

    {
        (std::cout << "COMPILE "_fu << fname << '\n');
        const double t0 = fu::now_hr();
        compile(fname, fu::view<std::byte>{}, s_Options{}, ctx);
        const double t1 = fu::now_hr();
        const double tt = (t1 - t0);
        if ((t1 - t0) > 0.025)
        {
            s_ModuleStat lex {};
            s_ModuleStat parse {};
            s_ModuleStat solve {};
            s_ModuleStat codegen {};
            fu::view<s_Module> m = ctx.modules;
            for (int i = 0; i < m.size(); i++)
            {
                lex += m[i].stats.lex;
                parse += m[i].stats.parse;
                solve += m[i].stats.solve;
                codegen += m[i].stats.codegen;
            };
            ModuleStat_print(lex, "\n    lex "_fu, fu::view<std::byte>{});
            ModuleStat_print(parse, "  parse "_fu, fu::view<std::byte>{});
            ModuleStat_print(solve, "  solve "_fu, fu::view<std::byte>{});
            ModuleStat_print(codegen, "codegen "_fu, "\n"_fu);
        };
        (std::cout << "        "_fu << tt << "s\n"_fu << '\n');
    };
    build(run, fu_STR(dir_wrk), FULIB, fu_STR(bin), fu_STR(dir_obj), fu_STR(dir_src), fu_STR(dir_cpp), fname, scheme, (*(const fu_STR*)fu::NIL), ctx);
}

static const fu_VEC<fu_STR> NOTES = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<13> { "FN_recursion"_fu, "FN_resolve"_fu, "FN_reopen"_fu, "TYPE_recursion"_fu, "TYPE_resolve"_fu, "TYPE_reopen"_fu, "DEAD_code"_fu, "DEAD_call"_fu, "DEAD_let"_fu, "DEAD_if"_fu, "DEAD_if_cons"_fu, "NONTRIV_autocopy"_fu, "RELAX_respec"_fu } };

static fu_STR ensure_main(const fu_STR& src)
{
    return (fu::has(src, "fn main("_fu) ? fu_STR(src) : (("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu));
}

s_Context compile_snippets(fu::view<fu_STR> sources, fu::view<fu_STR> fnames, fu::view<s_Options> options)
{
    s_Context ctx = clone_MVIm(CTX_PRELUDE);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu_STR& snippet = sources[i];
        fu_STR src = ((i == (sources.size() - 1)) ? ensure_main(snippet) : fu_STR(snippet));
        fu_STR fname = ((fnames.size() > i) ? fu_STR(fnames[i]) : (((PRJDIR + "__tests__/_"_fu) + i) + ".fu"_fu));
        (ctx.files.upsert(fname) = fu_STR(src));
        compile(fname, fu::view<std::byte>{}, ((options.size() > i) ? options[i] : (*(const s_Options*)fu::NIL)), ctx);
    };
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        s_Module& module = ctx.modules.mutref(i_1);
        int notes = module.out.solve.notes;
        for (int bit = 0; (bit < NOTES.size()) && notes; bit++)
        {
            const int mask = (1 << bit);
            const int isset = (notes & mask);
            notes &= ~mask;
            if (isset)
                module.out.cpp.src += (("// "_fu + NOTES[bit]) + "\n"_fu);

        };
    };
    return ctx;
}

fu_STR snippet2cpp(const fu_STR& src)
{
    fu_STR fname = "SNIPPET"_fu;
    s_Context ctx = compile_snippets((fu::slate<1, fu_STR> { fu_STR(src) }), (fu::slate<1, fu_STR> { fu_STR(fname) }), fu_VEC<s_Options>{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu_STR(module.out.cpp.src);

    };
    return fu_STR{};
}

                                #ifndef DEFt_find_KWjg
                                #define DEFt_find_KWjg
inline int find_KWjg(fu::view<std::byte> a, const std::byte b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_find_ByEn
                                #define DEFt_find_ByEn
inline int find_ByEn(fu::view<fu_STR> a, fu::view<std::byte> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_grow_if_oob_4ey5
                                #define DEFt_grow_if_oob_4ey5
inline fu_VEC<fu_STR>& grow_if_oob_4ey5(fu_VEC<fu_VEC<fu_STR>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEFt_find_qVFp
                                #define DEFt_find_qVFp
inline int find_qVFp(fu::view<std::byte> a, const std::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

s_Context ZERO(fu_VEC<fu_STR>&& sources, s_TestDiffs& testdiffs)
{
    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i];
            int start0 = fu::lfind(src, "<split/>"_fu, 0);
            if (start0 < 0)
                break;

            const int start00 = start0;
            const int start1 = (start0 + 8);
            while (start0 && (src[(start0 - 1)] == std::byte(' ')))
                start0--;

            fu_STR moduleA = fu::slice(src, 0, start0);
            fu_STR moduleB = ((((fu::get_view(src, start0, start00) + "import _"_fu) + i) + ";"_fu) + fu::get_view(src, start1, src.size()));
            fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
            sources.mutref(i) = without;
            ZERO(fu_VEC<fu_STR>(sources), testdiffs);
            sources.mutref(i) = moduleA;
            sources.insert((i + 1), moduleB);
        };
    };
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        for (; ; )
        {
            fu::view<std::byte> src = sources[i_1];
            int start0 = fu::lfind(src, "<alt>"_fu, 0);
            if (start0 < 0)
                break;

            int end0 = fu::lfind(src, "</alt>"_fu, start0);
            if (!((end0 >= 0)))
                fu::fail("No closing `</alt>` for `<alt>`."_fu);

            const int start1 = (start0 + 5);
            const int end1 = (end0 + 6);
            while (start0 && (src[(start0 - 1)] == std::byte(' ')))
                start0--;

            while (src[(end0 - 1)] == std::byte(' '))
                end0--;

            fu_STR with = ((fu::get_view(src, 0, start0) + fu::get_view(src, start1, end0)) + fu::get_view(src, end1, src.size()));
            fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, end1, src.size()));
            sources.mutref(i_1) = without;
            ZERO(fu_VEC<fu_STR>(sources), testdiffs);
            sources.mutref(i_1) = with;
        };
    };
    fu_VEC<fu_VEC<fu_STR>> expectations {};
    fu_VEC<s_Options> options {};
    for (int i_2 = 0; i_2 < sources.size(); i_2++)
    {
        fu_STR& src = sources.mutref(i_2);

        {
            int end = src.size();
            for (int r = src.size(); (r-- > 0) && (src[r] == std::byte(' ')); )
                end = r;

            src.shrink(end);
        };
        int break_notes_1 {};
        int start = 0;
        while (((start = fu::lfind(src, " ;; "_fu, start)) >= 0))
        {
            int end = find_KWjg(src, std::byte('\n'), (start + 4));
            if (end < 0)
                end = src.size();

            fu_STR annot = fu::slice(src, (start + 4), end);
            if (annot[0] == std::byte('!'))
            {
                const int idx = find_ByEn(NOTES, fu::slice(annot, 1, annot.size()));
                if (!((idx >= 0)))
                    fu::fail((("Bad break_note: `;; "_fu + annot) + "`."_fu));

                break_notes_1 |= (1 << idx);
            }
            else
                grow_if_oob_4ey5(expectations, i_2) += annot;

            src.mutref((start + 1)) = std::byte('/');
            src.mutref((start + 2)) = std::byte('/');
            start = end;
        };
        options += s_Options { s_Lint{}, int(break_notes_1) };
    };
    s_Context ctx = compile_snippets(sources, fu_VEC<fu_STR>{}, options);
    for (int i_3 = 0; i_3 < expectations.size(); i_3++)
    {
        fu::view<fu_STR> arr = expectations[i_3];
        fu::view<std::byte> src = sources[i_3];
        const s_CodegenOutput& cpp = ctx.modules[(i_3 + 1)].out.cpp;
        for (int i_1_1 = 0; i_1_1 < arr.size(); i_1_1++)
        {
            const fu_STR& x = arr[i_1_1];
            const int idx = find_qVFp(x, std::byte(' '));
            fu_STR cmd = fu::slice(x, 0, idx);
            fu_STR rest = fu::slice(x, (idx + 1));
            const bool found = fu::has(cpp.src, rest);
            if (cmd == "EXPECT"_fu)
            {
                if (!(found))
                    fu::fail(((((("EXPECT mismatch: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));

            }
            else if (cmd != "TODO"_fu)
                fu::fail(((("Unknown ;; CHECK: `;; "_fu + x) + "` in:\n"_fu) + src));
            else if (found)
                fu::fail(((((("TODO test is actually passing: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));
            else
                (std::cout << ((("  TODO: `;; "_fu + x) + "` in:\n"_fu) + src) << '\n');

        };
    };
    const bool run = true;
    build(run, fu_STR(DEFAULT_WORKSPACE), FULIB, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), "debug"_fu, "print-src"_fu, ctx);
    build(run, fu_STR(DEFAULT_WORKSPACE), FULIB, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), fu::view<std::byte>{}, "print-src"_fu, ctx);

    {
        fu_STR key {};
        for (int i_4 = 0; i_4 < sources.size(); i_4++)
        {
            key += sources[i_4];
            const s_CodegenOutput& actual = ctx.modules[((i_4 + ctx.modules.size()) - sources.size())].out.cpp;
            set_next(testdiffs, key, actual.src);
        };
    };
    return ctx;
}

static fu_VEC<fu_STR> FAIL_replace(fu_VEC<fu_STR>&& sources)
{
    for (int i = 0; i < sources.size(); i++)
        sources.mutref(i) = fu::replace(sources[i], "//*F"_fu, "/*"_fu);

    return static_cast<fu_VEC<fu_STR>&&>(sources);
}

static fu_STR indent(const fu_STR& src)
{
    return fu::replace(src, "\n"_fu, "\n\t"_fu);
}

s_Context FAIL(const fu_VEC<fu_STR>& sources, s_TestDiffs& testdiffs)
{
    s_Context ctx = {};
    try
    {
        ctx = compile_snippets(sources, fu_VEC<fu_STR>{}, fu_VEC<s_Options>{});
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        fu_STR key {};
        for (int i = 0; i < sources.size(); i++)
        {
            fu::view<std::byte> src = sources[i];
            for (int i_1 = src.size(); i_1-- > 0; )
            {
                if (src[i_1] != std::byte(' '))
                {
                    key += fu::get_view(src, 0, i_1);
                    break;
                };
            };
        };
        int start = 0;
        bool startOK = false;
        for (int i_1 = 0; i_1 < e.size(); i_1++)
        {
            const std::byte c = e[i_1];
            if (c == std::byte('/'))
                start = (i_1 + 1);
            else if (c == std::byte('@'))
                startOK = true;
            else if (c == std::byte('\n'))
                break;

        };
        if (!(startOK))
            fu::fail(("FAIL: Error does not start with an `dir/file.fu@line:col` marker:\n"_fu + e));

        set_next(testdiffs, key, fu::slice(e, start));
        return ZERO(FAIL_replace(fu_VEC<fu_STR>(sources)), testdiffs);
    }
    }
;
    fu_STR bad = "\nDID NOT THROW:\n"_fu;
    for (int i = 1; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        bad += (((("\n#"_fu + i) + ": "_fu) + module.fname) + "\n"_fu);
        bad += (((((((("\nfu  ["_fu + i) + "]:\n\t"_fu) + indent(module.in.src)) + "\ncpp ["_fu) + i) + "]:\n\t"_fu) + indent(module.out.cpp.src)) + "\n"_fu);
    };
    fu::fail(bad);
}

void ZERO_SAME(fu::view<fu_VEC<fu_STR>> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<s_Module> expect = ZERO(fu_VEC<fu_STR>(alts[0]), testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu_VEC<s_Module> actual = compile_snippets(alts[i], fu_VEC<fu_STR>{}, fu_VEC<s_Options>{}).modules;
        if (expect.size() != actual.size())
            fu::fail("ZERO_SAME: expect/actual len mismatch."_fu);

        for (int m = 0; m < actual.size(); m++)
        {
            const fu_STR& x = expect[m].out.cpp.src;
            const fu_STR& a = actual[m].out.cpp.src;
            if (x != a)
                fu::fail(((((((((((("ZERO_SAME: alts["_fu + i) + "] mismatch at:\n"_fu) + "\nexpect["_fu) + m) + "]:\n\t"_fu) + indent(x)) + "\nactual["_fu) + m) + "]:\n\t"_fu) + indent(a)) + "\n"_fu));

        };
    };
}

s_Context ZERO(const fu_STR& src, s_TestDiffs& testdiffs)
{
    return ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(src) } }, testdiffs);
}

s_Context FAIL(const fu_STR& src, s_TestDiffs& testdiffs)
{
    return FAIL(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(src) } }, testdiffs);
}

void ZERO_SAME(fu::view<fu_STR> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<fu_VEC<fu_STR>> wrap {};
    for (int i = 0; i < alts.size(); i++)
        wrap += fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(alts[i]) } };

    ZERO_SAME(wrap, testdiffs);
}

#endif
