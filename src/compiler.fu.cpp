#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_ParserOutput;
struct s_Node;
struct s_TokenIdx;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
struct s_RWRanges;
struct s_Scope;
struct s_Overload;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_Template;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_gb6sFwC7;
struct s_Options;
struct s_Lint;
s_Module& getModule_Itjm8oks(const fu_STR&, s_Context&);
fu_STR getFile_Itjm8oks(fu_STR&&, s_Context&);
s_ModuleStat ModuleStat_now_pUbtfzLn();
s_LexerOutput lex_uzLKWC6R(const fu_STR&, fu::view<char>);
s_ParserOutput parse_J0V9lDrD(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&);
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
void setModule_IgtJxUnL(const s_Module&, s_Context&);
fu_STR resolveFile_Itjm8oks(const fu_STR&, s_Context&);
s_SolverOutput solve_j5ptKWox(const s_Context&, s_Module&, const s_Options&);
s_CodegenOutput cpp_codegen_2xq2c97A(const s_Module&, const s_Context&);
int compile_5FHmfbMN(const fu_STR&, const fu_STR&, s_Context&, const s_Options&);
fu_STR get_1w6Ekz7Y(fu_STR&&);
int64_t size_ny0gyQ9a(fu_STR&&);
double hr_CPFg3qvV();
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void ModuleStat_print_r32T5l7J(const s_ModuleStat&, const fu_STR&, fu::view<char>);
void build_FI2mnMFN(fu_STR&&, fu::view<char>, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, fu::view<char>, const fu_STR&, bool, bool, bool, const fu_VEC<fu_STR>&, const fu_VEC<fu_STR>&, const s_Context&);

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
    fu_STR base;
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
            || base
            || flat_cnt
            || all_triv
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

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
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
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
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
    fu_STR sighash;
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
    fu_VEC<fu_STR> link;
    fu_VEC<fu_STR> include_dirs;
    fu_VEC<fu_STR> extra_sources;
    fu_VEC<int> live;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
            || live
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

                                #ifndef DEF_s_Map_gb6sFwC7
                                #define DEF_s_Map_gb6sFwC7
struct s_Map_gb6sFwC7
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
    s_Map_gb6sFwC7 files;
    s_Map_gb6sFwC7 fuzzy;
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
    unsigned dev;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_clone_uFTeeyF6
                                #define DEF_clone_uFTeeyF6
inline int clone_uFTeeyF6(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ZCtM7908
                                #define DEF_clone_ZCtM7908
inline const fu_STR& clone_ZCtM7908(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_av5PxtCI
                                #define DEF_clone_av5PxtCI
inline const s_ModuleInputs& clone_av5PxtCI(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_krBIyjUl
                                #define DEF_clone_krBIyjUl
inline const fu_VEC<int>& clone_krBIyjUl(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_RKBsevnx
                                #define DEF_clone_RKBsevnx
inline const fu_VEC<s_Struct>& clone_RKBsevnx(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_qVCYkPgh
                                #define DEF_clone_qVCYkPgh
inline const s_SolvedNode& clone_qVCYkPgh(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_bjZCjfhl
                                #define DEF_clone_bjZCjfhl
inline const fu_VEC<s_Overload>& clone_bjZCjfhl(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_fx1SDBUT
                                #define DEF_clone_fx1SDBUT
inline const fu_VEC<s_Extended>& clone_fx1SDBUT(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_vOYHP1IT
                                #define DEF_clone_vOYHP1IT
inline const fu_VEC<s_ScopeItem>& clone_vOYHP1IT(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_fnMFgrK3
                                #define DEF_clone_fnMFgrK3
inline const fu_VEC<s_Target>& clone_fnMFgrK3(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_VGha2dKA
                                #define DEF_clone_VGha2dKA
inline s_Scope clone_VGha2dKA(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_bjZCjfhl(a.overloads);
        res.extended = clone_fx1SDBUT(a.extended);
        res.items = clone_vOYHP1IT(a.items);
        res.implicits = clone_vOYHP1IT(a.implicits);
        res.imports = clone_krBIyjUl(a.imports);
        res.privates = clone_krBIyjUl(a.privates);
        res.usings = clone_fnMFgrK3(a.usings);
        res.converts = clone_fnMFgrK3(a.converts);
        res.pub_items = clone_uFTeeyF6(a.pub_items);
        res.pub_cnvrts = clone_uFTeeyF6(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_xQX8ydH9
                                #define DEF_clone_xQX8ydH9
inline s_SolverOutput clone_xQX8ydH9(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_qVCYkPgh(a.root);
        res.scope = clone_VGha2dKA(a.scope);
        res.notes = clone_uFTeeyF6(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_G6pqsUn1
                                #define DEF_clone_G6pqsUn1
inline const s_CodegenOutput& clone_G6pqsUn1(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_aK06JrSd
                                #define DEF_clone_aK06JrSd
inline s_ModuleOutputs clone_aK06JrSd(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_krBIyjUl(a.deps);
        res.types = clone_RKBsevnx(a.types);
        res.solve = clone_xQX8ydH9(a.solve);
        res.cpp = clone_G6pqsUn1(a.cpp);
        res.init_prio = clone_uFTeeyF6(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_plfOxjBD
                                #define DEF_clone_plfOxjBD
inline const s_ModuleStats& clone_plfOxjBD(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_MVzrYodk
                                #define DEF_clone_MVzrYodk
inline s_Module clone_MVzrYodk(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_uFTeeyF6(a.modid);
        res.fname = clone_ZCtM7908(a.fname);
        res.in = clone_av5PxtCI(a.in);
        res.out = clone_aK06JrSd(a.out);
        res.stats = clone_plfOxjBD(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_N_SD_HasStaticInit
                                #define DEF_N_SD_HasStaticInit
inline constexpr int N_SD_HasStaticInit = (1 << 30);
                                #endif

int compile_5FHmfbMN(const fu_STR& fname, const fu_STR& via, s_Context& ctx, const s_Options& options)
{
    s_Module module = clone_MVzrYodk(getModule_Itjm8oks(fname, ctx));
    if (!module.in)
    {
        module.out = s_ModuleOutputs{};
        fu_STR _0 {};
        fu_STR src = ((_0 = getFile_Itjm8oks(fu_STR(fname), ctx)) ? static_cast<fu_STR&&>(_0) : fu::fail(((("import badfile: `"_fu + via) + fname) + "`."_fu)));
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        s_LexerOutput lexer_result = lex_uzLKWC6R(src, fname);
        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        s_ParserOutput parser_result = parse_J0V9lDrD(module.modid, fname, src, lexer_result.tokens, options);
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.in = s_ModuleInputs { fu_STR(src), s_LexerOutput(lexer_result), s_ParserOutput(parser_result) };
        module.stats.lex = (stat1 - stat0);
        module.stats.parse = (stat2 - stat1);
        setModule_IgtJxUnL(module, ctx);
    }
    else
    {
        if (!(module.out))
            fu::fail((((("import circle: `"_fu + fname) + "\n\t<- "_fu) + via) + "`."_fu));

    };
    if (!module.out)
    {
        module.out.init_prio = 1;
        fu_VEC<fu_STR> fuzimports { module.in.parse.fuzimports };
        for (int i = 0; i < fuzimports.size(); i++)
        {
            const int prio = compile_5FHmfbMN(resolveFile_Itjm8oks(fuzimports[i], ctx), (fname + (via ? ("\n\t<- "_fu + via) : fu_STR{})), ctx, options);
            if (module.out.init_prio < prio)
                module.out.init_prio = prio;

        };
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        module.out.solve = solve_j5ptKWox(ctx, module, options);
        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        module.out.cpp = cpp_codegen_2xq2c97A(module, ctx);
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
        setModule_IgtJxUnL(module, ctx);
    };
    return module.out.init_prio + ((module.out.solve.notes & N_SD_HasStaticInit) ? 1 : int{});
}

                                #ifndef DEF_if_last_ZCtM7908
                                #define DEF_if_last_ZCtM7908
inline char if_last_ZCtM7908(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR absdir_0ex5iJt8(const fu_STR& a)
{
    return ((if_last_ZCtM7908(a) == '/') ? fu_STR(a) : (a + '/'));
}

static const fu_STR HOME fu_INIT_PRIORITY(1006) = absdir_0ex5iJt8(get_1w6Ekz7Y("HOME"_fu));

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR locate_FUDIR_LI96RGZs()
{
    // Hoisted:
    fu_STR x;

    /*MOV*/ fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int64_t fs = size_ny0gyQ9a(fu_STR(fn));
    if (!(fs > 1000ll))
        fu::fail(x7E((("Bad compiler.fu: "_fu + fn) + ": "_fu), fu::i64dec(fs)));

    const fu_STR* BL_2_v;
    fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
    {
        x = ("FUDIR: "_fu + dir);
        BL_2_v = &(x);
    (void)0;}), *BL_2_v)) }));
    return /*NRVO*/ dir;
}

                                #ifndef DEF_FUDIR
                                #define DEF_FUDIR
extern const fu_STR FUDIR fu_INIT_PRIORITY(1006) = locate_FUDIR_LI96RGZs();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE fu_INIT_PRIORITY(1006) = (FUDIR + "build-cpp/"_fu);
                                #endif

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEF_clone_Aj8LNizZ
                                #define DEF_clone_Aj8LNizZ
inline s_Scope clone_Aj8LNizZ(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_bjZCjfhl(a.overloads);
        res.extended = clone_fx1SDBUT(a.extended);
        res.items = clone_vOYHP1IT(a.items);
        res.implicits = clone_vOYHP1IT(a.implicits);
        res.imports = clone_krBIyjUl(a.imports);
        res.privates = clone_krBIyjUl(a.privates);
        res.usings = clone_fnMFgrK3(a.usings);
        res.converts = clone_fnMFgrK3(a.converts);
        res.pub_items = clone_uFTeeyF6(a.pub_items);
        res.pub_cnvrts = clone_uFTeeyF6(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_zyxQCvJi
                                #define DEF_clone_zyxQCvJi
inline s_SolverOutput clone_zyxQCvJi(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_qVCYkPgh(a.root);
        res.scope = clone_Aj8LNizZ(a.scope);
        res.notes = clone_uFTeeyF6(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_M6x1M0Mx
                                #define DEF_clone_M6x1M0Mx
inline s_ModuleOutputs clone_M6x1M0Mx(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_krBIyjUl(a.deps);
        res.types = clone_RKBsevnx(a.types);
        res.solve = clone_zyxQCvJi(a.solve);
        res.cpp = clone_G6pqsUn1(a.cpp);
        res.init_prio = clone_uFTeeyF6(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_eixx2GVS
                                #define DEF_clone_eixx2GVS
inline s_Module clone_eixx2GVS(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_uFTeeyF6(a.modid);
        res.fname = clone_ZCtM7908(a.fname);
        res.in = clone_av5PxtCI(a.in);
        res.out = clone_M6x1M0Mx(a.out);
        res.stats = clone_plfOxjBD(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_map_wOraaDyR
                                #define DEF_map_wOraaDyR
inline fu_VEC<s_Module> map_wOraaDyR(fu::view<s_Module> a)
{
    /*MOV*/ fu_VEC<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_eixx2GVS(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_4RNMgCNW
                                #define DEF_clone_4RNMgCNW
inline fu_VEC<s_Module> clone_4RNMgCNW(fu::view<s_Module> a)
{
    return map_wOraaDyR(a);
}
                                #endif

                                #ifndef DEF_clone_Ap8Zdan6
                                #define DEF_clone_Ap8Zdan6
inline const s_Map_gb6sFwC7& clone_Ap8Zdan6(const s_Map_gb6sFwC7& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_5I3jTllN
                                #define DEF_clone_5I3jTllN
inline s_Context clone_5I3jTllN(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.modules = clone_4RNMgCNW(a.modules);
        res.files = clone_Ap8Zdan6(a.files);
        res.fuzzy = clone_Ap8Zdan6(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

void compile_and_build_KnN2eIVB(const fu_STR& fname, const fu_STR& dir_wrk, const fu_STR& bin, const fu_STR& dir_obj, const fu_STR& dir_src, const fu_STR& dir_cpp, fu::view<char> scheme, const bool run, const bool shared, const bool hotswap, const fu_VEC<fu_STR>& flags_cc, const fu_VEC<fu_STR>& flags_ld)
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;

    s_Context ctx = clone_5I3jTllN(CTX_PRELUDE);
    const s_Options options {};

    {
        const fu_STR* BL_2_v;
        fu::println((fu::slate<2, fu_STR> { fu_STR((__extension__ (
        {
            x = "COMPILE "_fu;
            BL_2_v = &(x);
        (void)0;}), *BL_2_v)), fu_STR(((void)void(), fname)) }));
        const double t0 = hr_CPFg3qvV();
        compile_5FHmfbMN(fname, (*(const fu_STR*)fu::NIL), ctx, options);
        const double t1 = hr_CPFg3qvV();
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
            ModuleStat_print_r32T5l7J(lex, "\n    lex "_fu, fu::view<char>{});
            ModuleStat_print_r32T5l7J(parse, "  parse "_fu, fu::view<char>{});
            ModuleStat_print_r32T5l7J(solve, "  solve "_fu, fu::view<char>{});
            ModuleStat_print_r32T5l7J(codegen, "codegen "_fu, "\n"_fu);
        };
        const fu_STR* BL_6_v;
        const fu_STR* BL_7_v;
        const fu_STR* BL_8_v;
        fu::println((fu::slate<3, fu_STR> { fu_STR((__extension__ (
        {
            x_1 = "        "_fu;
            BL_6_v = &(x_1);
        (void)0;}), *BL_6_v)), fu_STR((__extension__ (
        {
            x_2 = fu::f64dec(tt);
            BL_7_v = &(x_2);
        (void)0;}), *BL_7_v)), fu_STR((__extension__ (
        {
            x_3 = "s\n"_fu;
            BL_8_v = &(x_3);
        (void)0;}), *BL_8_v)) }));
    };
    build_FI2mnMFN(fu_STR(dir_wrk), FUDIR, fu_STR{}, fu_STR(bin), fu_STR(dir_obj), fu_STR(dir_src), fu_STR(dir_cpp), fname, scheme, (*(const fu_STR*)fu::NIL), run, shared, hotswap, flags_cc, flags_ld, ctx);
}

#endif
