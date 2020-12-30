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
#include <iostream>
#include <utility>

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
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

fu_STR FAIL(const fu_STR&);
fu_STR FAIL(const fu_VEC<fu_STR>&);
fu_STR cpp_codegen(const s_SolvedNode&, const s_Module&, const s_Context&);
fu_STR getFile(fu_STR&&, s_Context&);
fu_STR resolveFile(const fu_STR&, s_Context&);
s_Context ZERO(const fu_STR&);
s_Context solvePrelude();
s_LexerOutput lex(const fu_STR&, const fu_STR&);
s_Module& getModule(const fu_STR&, s_Context&);
s_ModuleStat ModuleStat_now();
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
s_ParserOutput parse(int, const fu_STR&, const fu_VEC<s_Token>&);
s_SolverOutput solve(const s_Node&, const s_Context&, s_Module&);
static void compile(const fu_STR&, const fu_STR&, s_Context&);
void ModuleStat_print(const s_ModuleStat&, const fu_STR&, const fu_STR&);
void ZERO_SAME(const fu_VEC<fu_STR>&);
void build(bool, fu_STR&&, const fu_STR&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, const fu_STR&, bool, const s_Context&);
void build(const fu_STR&, bool, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, const fu_STR&, bool);
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void setModule(const s_Module&, s_Context&);

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
    s_Target target;
    fu_VEC<s_ScopeItem> items;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || items
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

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<int> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
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
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
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

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int imports_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || imports_len
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

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu_VEC<int> imports;
    s_ScopeMemo scope_memo;
    fu_VEC<s_ScopeSkip> ss_items;
    fu_VEC<s_ScopeSkip> ss_imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
            || scope_memo
            || ss_items
            || ss_imports
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
    uint32_t status;
    int local_of;
    fu_VEC<int> closes_over;
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
            || local_of
            || closes_over
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
    s_SolverOutput(const s_SolverOutput&) = delete;
    s_SolverOutput(s_SolverOutput&&) = default;
    s_SolverOutput& operator=(const s_SolverOutput&) = delete;
    s_SolverOutput& operator=(s_SolverOutput&&) = default;
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
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
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

                                #ifndef DEFt_if_last_YeU3
                                #define DEFt_if_last_YeU3
inline std::byte if_last_YeU3(const fu_STR& s)
{
    return ([&]() -> std::byte { if (s.size()) return s[(s.size() - 1)]; else return fu::Default<std::byte>::value; }());
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
    ((fs > 1000) || fu::fail(((("Bad compiler.fu: "_fu + fn) + ": "_fu) + fs)));
    (std::cout << ("PRJDIR: "_fu + dir) << '\n');
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

                                #ifndef DEF_FULIB
                                #define DEF_FULIB
inline const fu_STR FULIB = (PRJDIR + "include/fu/_fulib.cpp"_fu);
                                #endif

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
inline const s_Context CTX_PRELUDE = solvePrelude();
                                #endif

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

                                #ifndef DEFt_clone_U5ax
                                #define DEFt_clone_U5ax
inline const s_ModuleInputs& clone_U5ax(const s_ModuleInputs& a)
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

                                #ifndef DEFt_clone_16if
                                #define DEFt_clone_16if
inline const fu_MAP<fu_STR, s_Struct>& clone_16if(const fu_MAP<fu_STR, s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_9jjq
                                #define DEFt_clone_9jjq
inline const fu_MAP<fu_STR, s_Target>& clone_9jjq(const fu_MAP<fu_STR, s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_1zar
                                #define DEFt_clone_1zar
inline const s_SolvedNode& clone_1zar(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_gcpC
                                #define DEFt_clone_gcpC
inline const fu_VEC<s_ScopeItem>& clone_gcpC(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_S0T5
                                #define DEFt_clone_S0T5
inline const fu_VEC<s_Overload>& clone_S0T5(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_ZUD3
                                #define DEFt_clone_ZUD3
inline s_Scope clone_ZUD3(const s_Scope& a)
{
    s_Scope res {};
    
    {
        res.items = clone_gcpC(a.items);
        res.overloads = clone_S0T5(a.overloads);
        res.imports = clone_I28a(a.imports);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_pdlp
                                #define DEFt_clone_pdlp
inline s_SolverOutput clone_pdlp(const s_SolverOutput& a)
{
    s_SolverOutput res {};
    
    {
        res.root = clone_1zar(a.root);
        res.scope = clone_ZUD3(a.scope);
        res.SLOW_resolve = clone_U3Pf(a.SLOW_resolve);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_YCuZ
                                #define DEFt_clone_YCuZ
inline s_ModuleOutputs clone_YCuZ(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};
    
    {
        res.deps = clone_I28a(a.deps);
        res.types = clone_16if(a.types);
        res.specs = clone_9jjq(a.specs);
        res.solve = clone_pdlp(a.solve);
        res.cpp = clone_YeU3(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_LVxi
                                #define DEFt_clone_LVxi
inline const s_ModuleStats& clone_LVxi(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_uIHZ
                                #define DEFt_clone_uIHZ
inline s_Module clone_uIHZ(const s_Module& a)
{
    s_Module res {};
    
    {
        res.modid = clone_U3Pf(a.modid);
        res.fname = clone_YeU3(a.fname);
        res.in = clone_U5ax(a.in);
        res.out = clone_YCuZ(a.out);
        res.stats = clone_LVxi(a.stats);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_map_qxyY
                                #define DEFt_map_qxyY
inline fu_VEC<s_Module> map_qxyY(const fu_VEC<s_Module>& a, int)
{
    fu_VEC<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_uIHZ(a[i]);

    return res;
}
                                #endif

                                #ifndef DEFt_clone_qDEl
                                #define DEFt_clone_qDEl
inline fu_VEC<s_Module> clone_qDEl(const fu_VEC<s_Module>& a)
{
    return map_qxyY(a, 0);
}
                                #endif

                                #ifndef DEFt_clone_qIfK
                                #define DEFt_clone_qIfK
inline const fu_MAP<fu_STR, fu_STR>& clone_qIfK(const fu_MAP<fu_STR, fu_STR>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_rmLR
                                #define DEFt_clone_rmLR
inline s_Context clone_rmLR(const s_Context& a)
{
    s_Context res {};
    
    {
        res.modules = clone_qDEl(a.modules);
        res.files = clone_qIfK(a.files);
        res.fuzzy = clone_qIfK(a.fuzzy);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_cBw5
                                #define DEFt_clone_cBw5
inline int& clone_cBw5(int& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_jB4B
                                #define DEFt_clone_jB4B
inline fu_STR& clone_jB4B(fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_BcpF
                                #define DEFt_clone_BcpF
inline s_ModuleInputs& clone_BcpF(s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_mrln
                                #define DEFt_clone_mrln
inline fu_VEC<int>& clone_mrln(fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_gAOS
                                #define DEFt_clone_gAOS
inline fu_MAP<fu_STR, s_Struct>& clone_gAOS(fu_MAP<fu_STR, s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_PVau
                                #define DEFt_clone_PVau
inline fu_MAP<fu_STR, s_Target>& clone_PVau(fu_MAP<fu_STR, s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_6CIV
                                #define DEFt_clone_6CIV
inline s_SolvedNode& clone_6CIV(s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_PkOZ
                                #define DEFt_clone_PkOZ
inline fu_VEC<s_ScopeItem>& clone_PkOZ(fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_fbrw
                                #define DEFt_clone_fbrw
inline fu_VEC<s_Overload>& clone_fbrw(fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_pXFl
                                #define DEFt_clone_pXFl
inline s_Scope clone_pXFl(s_Scope& a)
{
    s_Scope res {};
    
    {
        res.items = clone_PkOZ(a.items);
        res.overloads = clone_fbrw(a.overloads);
        res.imports = clone_mrln(a.imports);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_ujnW
                                #define DEFt_clone_ujnW
inline s_SolverOutput clone_ujnW(s_SolverOutput& a)
{
    s_SolverOutput res {};
    
    {
        res.root = clone_6CIV(a.root);
        res.scope = clone_pXFl(a.scope);
        res.SLOW_resolve = clone_cBw5(a.SLOW_resolve);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_RkY3
                                #define DEFt_clone_RkY3
inline s_ModuleOutputs clone_RkY3(s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};
    
    {
        res.deps = clone_mrln(a.deps);
        res.types = clone_gAOS(a.types);
        res.specs = clone_PVau(a.specs);
        res.solve = clone_ujnW(a.solve);
        res.cpp = clone_jB4B(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_fxCh
                                #define DEFt_clone_fxCh
inline s_ModuleStats& clone_fxCh(s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_7yFN
                                #define DEFt_clone_7yFN
inline s_Module clone_7yFN(s_Module& a)
{
    s_Module res {};
    
    {
        res.modid = clone_cBw5(a.modid);
        res.fname = clone_jB4B(a.fname);
        res.in = clone_BcpF(a.in);
        res.out = clone_RkY3(a.out);
        res.stats = clone_fxCh(a.stats);
    };
    return res;
}
                                #endif

static void compile(const fu_STR& fname, const fu_STR& via, s_Context& ctx)
{
    s_Module module = clone_7yFN(getModule(fname, ctx));
    if (!module.in)
    {
        module.out = s_ModuleOutputs{};
        fu_STR src = ([&]() -> fu_STR { { fu_STR _ = getFile(fu_STR(fname), ctx); if (_) return _; } fu::fail(((("import badfile: `"_fu + via) + fname) + "`."_fu)); }());
        const s_ModuleStat stat0 = ModuleStat_now();
        s_LexerOutput lexer_result = lex(src, fname);
        const s_ModuleStat stat1 = ModuleStat_now();
        s_ParserOutput parser_result = parse(module.modid, fname, lexer_result.tokens);
        const s_ModuleStat stat2 = ModuleStat_now();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), s_ParserOutput(parser_result) };
        module.stats.lex = (stat1 - stat0);
        module.stats.parse = (stat2 - stat1);
        setModule(module, ctx);
    }
    else
    {
        (module.out || fu::fail(((("import circle: `"_fu + via) + fname) + "`."_fu)));
    };
    if (!module.out)
    {
        fu_VEC<fu_STR> fuzimports { module.in.parse.fuzimports };
        for (int i = 0; i < fuzimports.size(); i++)
            compile(resolveFile(fuzimports[i], ctx), ((fname + " <- "_fu) + via), ctx);

        const s_ModuleStat stat0 = ModuleStat_now();
        module.out.solve = solve(module.in.parse.root, ctx, module);
        const s_ModuleStat stat1 = ModuleStat_now();
        module.out.cpp = cpp_codegen(module.out.solve.root, module, ctx);
        const s_ModuleStat stat2 = ModuleStat_now();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
        setModule(module, ctx);
    };
}

void build(const fu_STR& fname, const bool run, const fu_STR& dir_wrk, const fu_STR& bin, const fu_STR& dir_obj, const fu_STR& dir_src, const fu_STR& dir_cpp, const fu_STR& scheme, const bool nowrite)
{
    s_Context ctx = clone_rmLR(CTX_PRELUDE);
    
    {
        (std::cout << "COMPILE "_fu << fname << '\n');
        const double t0 = fu::now_hr();
        compile(fname, fu_STR{}, ctx);
        const double t1 = fu::now_hr();
        const double tt = (t1 - t0);
        if ((t1 - t0) > 0.025)
        {
            s_ModuleStat lex {};
            s_ModuleStat parse {};
            s_ModuleStat solve {};
            s_ModuleStat codegen {};
            fu_VEC<s_Module>& m = ctx.modules;
            for (int i = 0; i < m.size(); i++)
            {
                lex += m.mutref(i).stats.lex;
                parse += m.mutref(i).stats.parse;
                solve += m.mutref(i).stats.solve;
                codegen += m.mutref(i).stats.codegen;
            };
            ModuleStat_print(lex, "\n    lex "_fu, fu_STR{});
            ModuleStat_print(parse, "  parse "_fu, fu_STR{});
            ModuleStat_print(solve, "  solve "_fu, fu_STR{});
            ModuleStat_print(codegen, "codegen "_fu, "\n"_fu);
        };
        (std::cout << "        "_fu << tt << "s\n"_fu << '\n');
    };
    return build(run, fu_STR(dir_wrk), FULIB, fu_STR(bin), fu_STR(dir_obj), fu_STR(dir_src), fu_STR(dir_cpp), fname, scheme, nowrite, ctx);
}

static fu_STR ensure_main(const fu_STR& src)
{
    return (fu::has(src, "fn main("_fu) ? fu_STR(src) : (("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu));
}

s_Context compile_snippets(const fu_VEC<fu_STR>& sources, const fu_VEC<fu_STR>& fnames)
{
    s_Context ctx = clone_rmLR(CTX_PRELUDE);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu_STR& snippet = sources[i];
        fu_STR src = ((i == (sources.size() - 1)) ? ensure_main(snippet) : fu_STR(snippet));
        fu_STR fname = ((fnames.size() > i) ? fu_STR(fnames[i]) : (((PRJDIR + "__tests__/_"_fu) + i) + ".fu"_fu));
        (ctx.files.upsert(fname) = fu_STR(src));
        compile(fname, fu_STR{}, ctx);
    };
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        s_Module& module = ctx.modules.mutref(i);
        if (module.out.solve.SLOW_resolve)
        {
            (fu::has(module.in.src, "//! SLOW_resolve"_fu) || fu::fail("SLOW: unexpected SLOW_resolve."_fu));
        };
    };
    return ctx;
}

fu_STR snippet2cpp(const fu_STR& src)
{
    fu_STR fname = "SNIPPET"_fu;
    s_Context ctx = compile_snippets(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(src) } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(fname) } });
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return std::move(module.out.cpp);

    };
    return fu_STR{};
}

                                #ifndef DEFt_last_FGX6
                                #define DEFt_last_FGX6
inline const fu_STR& last_FGX6(const fu_VEC<fu_STR>& s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

s_Context ZERO(const fu_VEC<fu_STR>& sources)
{
    s_Context ctx = compile_snippets(sources, fu_VEC<fu_STR>{});
    const bool run = true;
    const fu_STR& fulib = FULIB;
    const fu_STR& dir_wrk = DEFAULT_WORKSPACE;
    const bool nowrite = false;
    build(run, fu_STR(dir_wrk), fulib, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, "debug"_fu, nowrite, ctx);
    build(run, fu_STR(dir_wrk), fulib, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, nowrite, ctx);
    return ctx;
}

static fu_VEC<fu_STR> FAIL_replace(fu_VEC<fu_STR>&& sources)
{
    for (int i = 0; i < sources.size(); i++)
        sources.mutref(i) = fu::replace(sources[i], "//*F"_fu, "/*"_fu);

    return std::move(sources);
}

static fu_STR indent(const fu_STR& src)
{
    return fu::replace(src, "\n"_fu, "\n\t"_fu);
}

fu_STR FAIL(const fu_VEC<fu_STR>& sources)
{
    s_Context ctx = {};
    try
    {
        ctx = compile_snippets(sources, fu_VEC<fu_STR>{});
    }
    catch (const std::exception& o_0)
    {
        const fu_STR& e = fu_TO_STR(o_0.what());
    
        return std::move(([&]() -> const fu_STR& { if (ZERO(FAIL_replace(fu_VEC<fu_STR>(sources)))) return e; else return fu::Default<fu_STR>::value; }()));
    }
;
    fu_STR bad = "\nDID NOT THROW:\n"_fu;
    for (int i = 1; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        bad += (((("\n#"_fu + i) + ": "_fu) + module.fname) + "\n"_fu);
        bad += (((((((("\nfu  ["_fu + i) + "]:\n\t"_fu) + indent(module.in.src)) + "\ncpp ["_fu) + i) + "]:\n\t"_fu) + indent(module.out.cpp)) + "\n"_fu);
    };
    return fu::fail(bad);
}

void ZERO_SAME(const fu_VEC<fu_VEC<fu_STR>>& alts)
{
    fu_VEC<s_Module> expect = ZERO(alts[0]).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu_VEC<s_Module> actual = compile_snippets(alts[i], fu_VEC<fu_STR>{}).modules;
        if (expect.size() != actual.size())
            fu::fail("ZERO_SAME: expect/actual len mismatch."_fu);

        for (int m = 0; m < actual.size(); m++)
        {
            const fu_STR& x = expect[m].out.cpp;
            const fu_STR& a = actual[m].out.cpp;
            if (x != a)
                fu::fail(((((((((((("ZERO_SAME: alts["_fu + i) + "] mismatch at:\n"_fu) + "\nexpect["_fu) + m) + "]:\n\t"_fu) + indent(x)) + "\nactual["_fu) + m) + "]:\n\t"_fu) + indent(a)) + "\n"_fu));

        };
    };
}

s_Context ZERO(const fu_STR& src)
{
    return ZERO(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(src) } });
}

fu_STR FAIL(const fu_STR& src)
{
    return FAIL(fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(src) } });
}

void ZERO_SAME(const fu_VEC<fu_STR>& alts)
{
    fu_VEC<fu_VEC<fu_STR>> wrap {};
    for (int i = 0; i < alts.size(); i++)
        wrap += fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { fu_STR(alts[i]) } };

    return ZERO_SAME(wrap);
}

#endif
