#include <algorithm>
#include <cstdint>
#include <fu/default.h>
#include <fu/io.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/replace.h>
#include <fu/vec/slice.h>
#include <fu/vec/split.h>
#include <fu/view.h>

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

bool isStruct(const s_Type&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
fu_STR path_dirname(const fu_STR&);
fu_STR resolveFile(const fu_STR&, s_Context&);
int parse10i32(int&, fu::view<std::byte>);
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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    s_Type type;
    int flags;
    s_SolvedNode solved;
    fu_VEC<s_SolvedNode> callsites;
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
            || callsites
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
    fu_VEC<uint8_t> _data;
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

const s_Token& _token(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].in.lex.tokens[idx.tokidx];
}

const fu_STR& _fname(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].fname;
}

int structIndex(fu::view<std::byte> canon_1)
{
    int offset = 1;
    return ((canon_1[0] == std::byte('$')) ? parse10i32(offset, canon_1) : -1);
}

s_Struct& lookupStruct_mut(fu::view<std::byte> canon_1, s_Module& module)
{
    return module.out.types.mutref(structIndex(canon_1));
}

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

                                #ifndef DEFt_has_qVFp
                                #define DEFt_has_qVFp
inline bool has_qVFp(fu::view<std::byte> a, const std::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR tryResolve(const fu_STR& path, const fu_STR& from, const fu_STR& name_3, s_Context& ctx)
{
    const bool exists = (fu::file_size(path) >= 0);
    if (exists)
        return fu_STR(path);


    {
        fu_STR path_1 = ((from + "lib/"_fu) + name_3);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return path_1;

    };

    {
        fu_STR path_1 = ((from + "vendor/"_fu) + name_3);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return path_1;

    };

    {
        fu_STR path_1 = ((from + "fu/lib/"_fu) + name_3);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return path_1;

    };
    fu_STR fallback = path_dirname(from);
    if (!fallback || (fallback.size() >= from.size()))
        return fu_STR{};

    return resolveFile(fallback, name_3, ctx);
}

static fu_STR resolveFile(const fu_STR& from, const fu_STR& name_3, s_Context& ctx)
{
    fu_STR path = (from + name_3);
    const fu_STR& cached = ctx.fuzzy[path];
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    fu_STR resolve = tryResolve(path, from, name_3, ctx);
    (ctx.fuzzy.upsert(path) = (resolve ? fu_STR(resolve) : "\v"_fu));
    return resolve;
}

fu_STR resolveFile(const fu_STR& path, s_Context& ctx)
{
    const int fuzzy_1 = find_qVFp(path, std::byte('\v'));
    if (fuzzy_1 > 0)
    {
        fu_STR from = fu::slice(path, 0, fuzzy_1);
        fu_STR name_3 = fu::slice(path, (fuzzy_1 + 1));
        if (from && name_3 && !has_qVFp(name_3, std::byte('\v')))
        {
            fu_STR res = resolveFile(from, name_3, ctx);
            if (res)
                return res;

            fu_STR prepopulated = (from + name_3);
            if (fu::has(ctx.files, prepopulated))
                return prepopulated;

        };
    };
    return fu_STR(path);
}

fu_STR resolveFile_x(const fu_STR& path, const s_Context& ctx)
{
    fu_STR clean = fu::replace(path, "\v"_fu, (*(const fu_STR*)fu::NIL));
    const fu_STR& match = ctx.fuzzy[clean];
    return fu_STR(((match && (match != "\v"_fu)) ? match : clean));
}

fu_STR getFile(fu_STR&& path, s_Context& ctx)
{
    const fu_STR& cached = ctx.files[path];
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    fu_STR read = fu::file_read(path);
    (ctx.files.upsert(path) = (read ? fu_STR(read) : "\v"_fu));
    return read;
}

s_Module& getModule(const fu_STR& fname_2, s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname_2)
            return ctx.modules.mutref(i);

    };
    const int i_1 = ctx.modules.size();
    ctx.modules.push(s_Module { int(i_1), fu_STR(fname_2), s_ModuleInputs{}, s_ModuleOutputs{}, s_ModuleStats{} });
    return ctx.modules.mutref(i_1);
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

                                #ifndef DEFt_clone_HsZz
                                #define DEFt_clone_HsZz
inline const s_ModuleInputs& clone_HsZz(const s_ModuleInputs& a)
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

                                #ifndef DEFt_clone_xHty
                                #define DEFt_clone_xHty
inline const fu_VEC<s_Struct>& clone_xHty(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_7szj
                                #define DEFt_clone_7szj
inline const s_SolvedNode& clone_7szj(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Ed9B
                                #define DEFt_clone_Ed9B
inline const fu_VEC<s_ScopeItem>& clone_Ed9B(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_PD5w
                                #define DEFt_clone_PD5w
inline const fu_VEC<s_Overload>& clone_PD5w(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_POfp
                                #define DEFt_clone_POfp
inline const fu_VEC<s_Extended>& clone_POfp(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_DGU7
                                #define DEFt_clone_DGU7
inline const fu_VEC<s_Target>& clone_DGU7(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_OtXd
                                #define DEFt_clone_OtXd
inline s_Scope clone_OtXd(const s_Scope& a)
{
    s_Scope res {};

    {
        res.items = clone_Ed9B(a.items);
        res.overloads = clone_PD5w(a.overloads);
        res.extended = clone_POfp(a.extended);
        res.imports = clone_I28a(a.imports);
        res.usings = clone_DGU7(a.usings);
        res.converts = clone_DGU7(a.converts);
        res.pub_count = clone_U3Pf(a.pub_count);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_Um4j
                                #define DEFt_clone_Um4j
inline s_SolverOutput clone_Um4j(const s_SolverOutput& a)
{
    s_SolverOutput res {};

    {
        res.root = clone_7szj(a.root);
        res.scope = clone_OtXd(a.scope);
        res.notes = clone_U3Pf(a.notes);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_p6xY
                                #define DEFt_clone_p6xY
inline const s_CodegenOutput& clone_p6xY(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_zEd3
                                #define DEFt_clone_zEd3
inline s_ModuleOutputs clone_zEd3(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};

    {
        res.deps = clone_I28a(a.deps);
        res.types = clone_xHty(a.types);
        res.solve = clone_Um4j(a.solve);
        res.cpp = clone_p6xY(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_io0N
                                #define DEFt_clone_io0N
inline const s_ModuleStats& clone_io0N(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_PWBa
                                #define DEFt_clone_PWBa
inline s_Module clone_PWBa(const s_Module& a)
{
    s_Module res {};

    {
        res.modid = clone_U3Pf(a.modid);
        res.fname = clone_YeU3(a.fname);
        res.in = clone_HsZz(a.in);
        res.out = clone_zEd3(a.out);
        res.stats = clone_io0N(a.stats);
    };
    return res;
}
                                #endif

void setModule(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (!(current.fname == module.fname))
        fu_ASSERT();

    current = clone_PWBa(module);
}

const s_Struct& lookupStruct(const s_Type& type_3, const s_Module& module, const s_Context& ctx)
{
    if (type_3.vtype.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[structIndex(type_3.vtype.canon)])) ? *_0 : fu_ASSERT();
    };
    const s_Struct* _1;
    return *(_1 = &(ctx.modules[type_3.vtype.modid].out.types[structIndex(type_3.vtype.canon)])) ? *_1 : fu_ASSERT();
}

const s_Struct& tryLookupStruct(const s_Type& type_3, const s_Module& module, const s_Context& ctx)
{
    return isStruct(type_3) ? lookupStruct(type_3, module, ctx) : (*(const s_Struct*)fu::NIL);
}

const fu_VEC<int>& lookupTypeImports(const s_Type& type_3, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct(type_3, module, ctx).imports;
}

const fu_VEC<s_Target>& lookupTypeConverts(const s_Type& type_3, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct(type_3, module, ctx).converts;
}

bool isStruct(const s_Type& type_3)
{
    return fu::lmatch(type_3.vtype.canon, std::byte('$'));
}

extern const fu_STR DIM;

extern const fu_STR RESET;

extern const fu_STR BAD;

fu_STR formatCodeSnippet(const s_TokenIdx& to, s_TokenIdx&& from, const int extraLines, const s_Context& ctx)
{
    const fu_STR& src_2 = ctx.modules[to.modid].in.src;
    fu_VEC<fu_STR> lines = fu::split(src_2, "\n"_fu);
    const s_Token& start_1 = _token((from ? from : to), ctx);
    const s_Token& end_1 = _token(to, ctx);
    int l_start = ((start_1.line - extraLines) - 1);
    int l_end = (end_1.line + extraLines);
    l_start = std::max(l_start, 0);
    l_end = std::min(l_end, lines.size());
    fu_STR result {};
    for (int i = l_start; i < l_end; i++)
    {
        if ((i < (start_1.line - 1)) || (i >= end_1.line))
            result += (DIM + "      | "_fu);
        else
        {
            fu_STR margin = ((i + 1) + " | "_fu);
            while (margin.size() < 8)
                margin = (" "_fu + margin);

            result += margin;
        };
        fu_STR line_1 { lines[i] };
        if (i == (end_1.line - 1))
        {
            const int c0 = std::max((end_1.col - 1), 0);
            const int c1 = (c0 + std::min(end_1.value.size(), line_1.size()));
            line_1.splice(c1, 0, RESET);
            line_1.splice(c0, 0, BAD);
        };
        result += line_1;
        if ((i < (start_1.line - 1)) || (i >= end_1.line))
            result += RESET;

        result += "\n"_fu;
    };
    return result;
}

#endif
