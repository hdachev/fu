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
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
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
fu_STR resolveFile(const fu_STR&, s_Context&);
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

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu_VEC<int> imports;
    s_ScopeMemo locals;
    int parent_idx;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
            || locals
            || parent_idx
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
    if ((!fallback || (fallback.size() >= from_0.size())))
        return fu_STR{};

    return resolveFile(fallback, name_0, ctx_0);
}

static fu_STR resolveFile(const fu_STR& from, const fu_STR& name, s_Context& ctx)
{
    fu_STR path = (from + name);
    fu_STR cached { ctx.fuzzy[path] };
    if (cached)
        return std::move(((cached == "\v"_fu) ? fu::Default<fu_STR>::value : cached));

    fu_STR resolve = tryResolve(from, name, ctx, path);
    (ctx.fuzzy.upsert(path) = ([&]() -> fu_STR { { fu_STR _ = fu_STR(resolve); if (_) return _; } return "\v"_fu; }()));
    return resolve;
}

fu_STR resolveFile(const fu_STR& path, s_Context& ctx)
{
    const int fuzzy = fu::lfind(path, std::byte('\v'));
    if (fuzzy > 0)
    {
        fu_STR from = fu::slice(path, 0, fuzzy);
        fu_STR name = fu::slice(path, (fuzzy + 1));
        if ((from && name && !fu::has(name, std::byte('\v'))))
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
    return std::move(((match && (match != "\v"_fu)) ? match : clean));
}

fu_STR getFile(fu_STR&& path, s_Context& ctx)
{
    fu_STR cached { ctx.files[path] };
    if (cached)
        return std::move(((cached == "\v"_fu) ? fu::Default<fu_STR>::value : cached));

    fu_STR read = fu::file_read(path);
    (ctx.files.upsert(path) = ([&]() -> fu_STR { { fu_STR _ = fu_STR(read); if (_) return _; } return "\v"_fu; }()));
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

void setModule(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    ((current.fname == module.fname) || fu_ASSERT());
    current = module;
}

const s_Struct& lookupStruct(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    if (type.vtype.modid == module.modid)
        return ([&]() -> const s_Struct& { { const s_Struct& _ = module.out.types[type.vtype.canon]; if (_) return _; } fu_ASSERT(); }());

    return ([&]() -> const s_Struct& { { const s_Struct& _ = ctx.modules[type.vtype.modid].out.types[type.vtype.canon]; if (_) return _; } fu_ASSERT(); }());
}

#endif
