#include <fu/default.h>
#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/find.h>
#include <fu/vec/replace.h>
#include <fu/vec/slice.h>

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
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_ScopeSkipMemos;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

bool isStruct(const s_Type&);
fu_STR path_dirname(const fu_STR&);
fu_STR resolveFile(const fu_STR&, s_Context&);
int structIndex(const fu_STR&);
static fu_STR resolveFile(const fu_STR&, const fu_STR&, s_Context&);

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
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
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
    fu_VEC<int> used_by;
    unsigned status;
    int local_of;
    fu_VEC<int> closes_over;
    fu_VEC<s_ScopeItem> extra_items;
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
            || used_by
            || status
            || local_of
            || closes_over
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

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_VEC<s_Struct> types;
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

s_Token _token(const s_TokenIdx& idx, const s_Context& ctx)
{
    return s_Token(ctx.modules[idx.modid].in.lex.tokens[idx.tokidx]);
}

fu_STR _fname(const s_TokenIdx& idx, const s_Context& ctx)
{
    return fu_STR(ctx.modules[idx.modid].fname);
}

static fu_STR tryResolve(const fu_STR& from_0, const fu_STR& name_0, s_Context& ctx_0, const fu_STR& path_0)
{
    const bool exists = (fu::file_size(path_0) >= 0);
    if (exists)
        return fu_STR(path_0);


    {
        fu_STR path_1 = ((from_0 + "lib/"_fu) + name_0);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return path_1;

    };

    {
        fu_STR path_1 = ((from_0 + "vendor/"_fu) + name_0);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return path_1;

    };

    {
        fu_STR path_1 = ((from_0 + "fu/lib/"_fu) + name_0);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return path_1;

    };
    fu_STR fallback = path_dirname(from_0);
    if (!fallback || (fallback.size() >= from_0.size()))
        return fu_STR{};

    return resolveFile(fallback, name_0, ctx_0);
}

static fu_STR resolveFile(const fu_STR& from, const fu_STR& name, s_Context& ctx)
{
    fu_STR path = (from + name);
    fu_STR cached { ctx.fuzzy[path] };
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    fu_STR resolve = tryResolve(from, name, ctx, path);
    (ctx.fuzzy.upsert(path) = (resolve ? fu_STR(resolve) : "\v"_fu));
    return resolve;
}

fu_STR resolveFile(const fu_STR& path, s_Context& ctx)
{
    const int fuzzy = fu::lfind(path, std::byte('\v'), 0);
    if (fuzzy > 0)
    {
        fu_STR from = fu::slice(path, 0, fuzzy);
        fu_STR name = fu::slice(path, (fuzzy + 1));
        if (from && name && !fu::has(name, std::byte('\v')))
        {
            fu_STR res = resolveFile(from, name, ctx);
            if (res)
                return res;

            fu_STR prepopulated = (from + name);
            if (fu::has(ctx.files, prepopulated))
                return prepopulated;

        };
    };
    return fu_STR(path);
}

fu_STR resolveFile_x(const fu_STR& path, const s_Context& ctx)
{
    fu_STR clean = fu::replace(path, "\v"_fu, fu_STR{});
    const fu_STR& match = ctx.fuzzy[clean];
    return fu_STR(((match && (match != "\v"_fu)) ? match : clean));
}

fu_STR getFile(fu_STR&& path, s_Context& ctx)
{
    fu_STR cached { ctx.files[path] };
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    fu_STR read = fu::file_read(path);
    (ctx.files.upsert(path) = (read ? fu_STR(read) : "\v"_fu));
    return read;
}

s_Module& getModule(const fu_STR& fname, s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules.mutref(i).fname == fname)
            return ctx.modules.mutref(i);

    };
    const int i = ctx.modules.size();
    ctx.modules.push(s_Module { int(i), fu_STR(fname), s_ModuleInputs{}, s_ModuleOutputs{}, s_ModuleStats{} });
    return ctx.modules.mutref(i);
}

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

                                #ifndef DEFt_clone_wTk9
                                #define DEFt_clone_wTk9
inline const s_ModuleInputs& clone_wTk9(const s_ModuleInputs& a)
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

                                #ifndef DEFt_clone_RsM6
                                #define DEFt_clone_RsM6
inline const fu_VEC<s_Struct>& clone_RsM6(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_e505
                                #define DEFt_clone_e505
inline const s_SolvedNode& clone_e505(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_QkHS
                                #define DEFt_clone_QkHS
inline const fu_VEC<s_ScopeItem>& clone_QkHS(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_sKWF
                                #define DEFt_clone_sKWF
inline const fu_VEC<s_Overload>& clone_sKWF(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_DRKs
                                #define DEFt_clone_DRKs
inline const fu_VEC<s_Target>& clone_DRKs(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_NfTs
                                #define DEFt_clone_NfTs
inline s_Scope clone_NfTs(const s_Scope& a)
{
    s_Scope res {};

    {
        res.items = clone_QkHS(a.items);
        res.overloads = clone_sKWF(a.overloads);
        res.imports = clone_I28a(a.imports);
        res.usings = clone_DRKs(a.usings);
        res.converts = clone_DRKs(a.converts);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_7EYp
                                #define DEFt_clone_7EYp
inline s_SolverOutput clone_7EYp(const s_SolverOutput& a)
{
    s_SolverOutput res {};

    {
        res.root = clone_e505(a.root);
        res.scope = clone_NfTs(a.scope);
        res.notes = clone_U3Pf(a.notes);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_KHmT
                                #define DEFt_clone_KHmT
inline s_ModuleOutputs clone_KHmT(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};

    {
        res.deps = clone_I28a(a.deps);
        res.types = clone_RsM6(a.types);
        res.solve = clone_7EYp(a.solve);
        res.cpp = clone_YeU3(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_0nZo
                                #define DEFt_clone_0nZo
inline const s_ModuleStats& clone_0nZo(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_UnoC
                                #define DEFt_clone_UnoC
inline s_Module clone_UnoC(const s_Module& a)
{
    s_Module res {};

    {
        res.modid = clone_U3Pf(a.modid);
        res.fname = clone_YeU3(a.fname);
        res.in = clone_wTk9(a.in);
        res.out = clone_KHmT(a.out);
        res.stats = clone_0nZo(a.stats);
    };
    return res;
}
                                #endif

void setModule(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (!(current.fname == module.fname))
        fu_ASSERT();

    current = clone_UnoC(module);
}

const s_Struct& lookupStruct(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    if (type.vtype.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[structIndex(type.vtype.canon)])) ? *_0 : fu_ASSERT();
    };
    const s_Struct* _1;
    return *(_1 = &(ctx.modules[type.vtype.modid].out.types[structIndex(type.vtype.canon)])) ? *_1 : fu_ASSERT();
}

const fu_VEC<int>& lookupTypeImports(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return isStruct(type) ? lookupStruct(type, module, ctx).imports : (*(const fu_VEC<int>*)fu::NIL);
}

const fu_VEC<s_Target>& lookupTypeConverts(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return isStruct(type) ? lookupStruct(type, module, ctx).converts : (*(const fu_VEC<s_Target>*)fu::NIL);
}

#endif
