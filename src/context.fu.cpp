
#include <algorithm>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/init_priority.h>
#include <fu/int.h>
#include <fu/io.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/view.h>

struct s_ArgWrite;
struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Map_tcbzgxDC;
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

bool isStruct_C02JG8Ye(const s_Type&);
bool is_primitive_dtjgvDEj(const s_Type&);
fu_STR formatCodeSnippet_cfqkTxjB(const fu_STR&, const s_Token&, const s_Token&, int);
fu_STR path_dirname_rOVPWlZS(const fu_STR&);
int structIndex_j5f0QjYP(fu::view<char>);
static fu_STR resolveFile_h10wFLwP(const fu_STR&, const fu_STR&, s_Context&);

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
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
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
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
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
    fu_VEC<s_ScopeSkip> declash;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || declash
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
            || items
            || overloads
            || extended
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

                                #ifndef DEF_s_Map_tcbzgxDC
                                #define DEF_s_Map_tcbzgxDC
struct s_Map_tcbzgxDC
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
    s_Map_tcbzgxDC files;
    s_Map_tcbzgxDC fuzzy;
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

const s_Token& _token_4nLgxTnv(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].in.lex.tokens[idx.tokidx];
}

const fu_STR& _fname_4nLgxTnv(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].fname;
}

s_Struct& lookupStruct_mut_r6N0n0Dx(fu::view<char> canon, s_Module& module)
{
    return module.out.types.mutref(structIndex_j5f0QjYP(canon));
}

                                #ifndef DEFt_find_05euw4KZ
                                #define DEFt_find_05euw4KZ
inline int find_05euw4KZ(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_05euw4KZ
                                #define DEFt_has_05euw4KZ
inline bool has_05euw4KZ(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_bfind_nPNQURov
                                #define DEFt_bfind_nPNQURov
inline int bfind_nPNQURov(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_S7Yw1nNG
                                #define DEFt_get_S7Yw1nNG
inline const fu_STR& get_S7Yw1nNG(const s_Map_tcbzgxDC& _, const fu_STR& key)
{
    const int idx = bfind_nPNQURov(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const fu_STR*)fu::NIL);
}
                                #endif

static fu_STR tryResolve_JEf8AdjF(const fu_STR& path, const fu_STR& from, const fu_STR& name, s_Context& ctx)
{
    const bool exists = (fu::file_size(path) >= 0);
    if (exists)
        return fu_STR(path);


    {
        /*MOV*/ fu_STR path_1 = ((from + "lib/"_fu) + name);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return /*NRVO*/ path_1;

    };

    {
        /*MOV*/ fu_STR path_1 = ((from + "vendor/"_fu) + name);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return /*NRVO*/ path_1;

    };

    {
        /*MOV*/ fu_STR path_1 = ((from + "fu/lib/"_fu) + name);
        const bool exists_1 = (fu::file_size(path_1) >= 0);
        if (exists_1)
            return /*NRVO*/ path_1;

    };
    fu_STR fallback = path_dirname_rOVPWlZS(from);
    if (!fallback || (fallback.size() >= from.size()))
        return fu_STR{};

    return resolveFile_h10wFLwP(fallback, name, ctx);
}

                                #ifndef DEFt_update_FCBYfBxB
                                #define DEFt_update_FCBYfBxB
inline void update_FCBYfBxB(int, const fu_STR& item, int, const fu_STR& extra, s_Map_tcbzgxDC& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, fu_STR(extra));
                return;
            };
            _.vals.mutref(i) = extra;
            return;
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(fu_STR(extra));
}
                                #endif

                                #ifndef DEFt_set_zwkdaU4e
                                #define DEFt_set_zwkdaU4e
inline void set_zwkdaU4e(s_Map_tcbzgxDC& _, const fu_STR& key, const fu_STR& value)
{
    update_FCBYfBxB(0, key, 0, value, _);
}
                                #endif

static fu_STR resolveFile_h10wFLwP(const fu_STR& from, const fu_STR& name, s_Context& ctx)
{
    fu_STR path = (from + name);
    const fu_STR& cached = get_S7Yw1nNG(ctx.fuzzy, path);
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    /*MOV*/ fu_STR resolve = tryResolve_JEf8AdjF(path, from, name, ctx);
    set_zwkdaU4e(ctx.fuzzy, path, (resolve ? fu_STR(resolve) : "\v"_fu));
    return /*NRVO*/ resolve;
}

                                #ifndef DEFt_bfind_BkH1otAl
                                #define DEFt_bfind_BkH1otAl
inline int bfind_BkH1otAl(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_hODVmoZP
                                #define DEFt_has_hODVmoZP
inline bool has_hODVmoZP(const s_Map_tcbzgxDC& _, const fu_STR& key)
{
    return (bfind_BkH1otAl(_.keys, key) >= 0);
}
                                #endif

fu_STR resolveFile_TvkTxTi1(const fu_STR& path, s_Context& ctx)
{
    const int fuzzy = find_05euw4KZ(path, '\v');
    if (fuzzy > 0)
    {
        fu_STR from = fu::slice(path, 0, fuzzy);
        fu_STR name = fu::slice(path, (fuzzy + 1));
        if (from && name && !has_05euw4KZ(name, '\v'))
        {
            /*MOV*/ fu_STR res = resolveFile_h10wFLwP(from, name, ctx);
            if (res)
                return /*NRVO*/ res;

            /*MOV*/ fu_STR prepopulated = (from + name);
            if (has_hODVmoZP(ctx.files, prepopulated))
                return /*NRVO*/ prepopulated;

        };
    };
    return fu_STR(path);
}

                                #ifndef DEFt_replace_Q0b6Gw5m
                                #define DEFt_replace_Q0b6Gw5m
inline fu_STR replace_Q0b6Gw5m(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

fu_STR resolveFile_x_RXR5ZSRM(const fu_STR& path, const s_Context& ctx)
{
    fu_STR clean = replace_Q0b6Gw5m(path, "\v"_fu, fu::view<char>{});
    const fu_STR& match = get_S7Yw1nNG(ctx.fuzzy, clean);
    return fu_STR(((match && (match != "\v"_fu)) ? match : clean));
}

                                #ifndef DEFt_bfind_hRkmNIbO
                                #define DEFt_bfind_hRkmNIbO
inline int bfind_hRkmNIbO(fu::view<fu_STR> keys, const fu_STR& item)
{
    for (/*MOV*/ int i = 0; i < keys.size(); i++)
    {
        if ((keys[i] >= item))
        {
            if (keys[i] != item)
                return -1;

            return /*NRVO*/ i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_Z0eCn1q2
                                #define DEFt_get_Z0eCn1q2
inline const fu_STR& get_Z0eCn1q2(const s_Map_tcbzgxDC& _, const fu_STR& key)
{
    const int idx = bfind_hRkmNIbO(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const fu_STR*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_update_BMPRyY92
                                #define DEFt_update_BMPRyY92
inline void update_BMPRyY92(int, const fu_STR& item, int, const fu_STR& extra, s_Map_tcbzgxDC& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, fu_STR(item));
                _.vals.insert(i, fu_STR(extra));
                return;
            };
            _.vals.mutref(i) = extra;
            return;
        };
    };
    _.keys.push(fu_STR(item));
    _.vals.push(fu_STR(extra));
}
                                #endif

                                #ifndef DEFt_set_iA5TPI5d
                                #define DEFt_set_iA5TPI5d
inline void set_iA5TPI5d(s_Map_tcbzgxDC& _, const fu_STR& key, const fu_STR& value)
{
    update_BMPRyY92(0, key, 0, value, _);
}
                                #endif

fu_STR getFile_TvkTxTi1(fu_STR&& path, s_Context& ctx)
{
    const fu_STR& cached = get_Z0eCn1q2(ctx.files, path);
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    /*MOV*/ fu_STR read = fu::file_read(path);
    set_iA5TPI5d(ctx.files, path, (read ? fu_STR(read) : "\v"_fu));
    return /*NRVO*/ read;
}

s_Module& getModule_TvkTxTi1(const fu_STR& fname, s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname)
            return ctx.modules.mutref(i);

    };
    const int i_1 = ctx.modules.size();
    ctx.modules.push(s_Module { int(i_1), fu_STR(fname), s_ModuleInputs{}, s_ModuleOutputs{}, s_ModuleStats{} });
    return ctx.modules.mutref(i_1);
}

                                #ifndef DEFt_clone_eabe9idx
                                #define DEFt_clone_eabe9idx
inline int clone_eabe9idx(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_rOVPWlZS
                                #define DEFt_clone_rOVPWlZS
inline const fu_STR& clone_rOVPWlZS(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_C7TEVOlR
                                #define DEFt_clone_C7TEVOlR
inline const s_ModuleInputs& clone_C7TEVOlR(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Z5oQfAXT
                                #define DEFt_clone_Z5oQfAXT
inline const fu_VEC<int>& clone_Z5oQfAXT(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_TyHd3cFd
                                #define DEFt_clone_TyHd3cFd
inline const fu_VEC<s_Struct>& clone_TyHd3cFd(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Ga719jiI
                                #define DEFt_clone_Ga719jiI
inline const s_SolvedNode& clone_Ga719jiI(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_KgMAn1pX
                                #define DEFt_clone_KgMAn1pX
inline const fu_VEC<s_ScopeItem>& clone_KgMAn1pX(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_QHG5KFZs
                                #define DEFt_clone_QHG5KFZs
inline const fu_VEC<s_Overload>& clone_QHG5KFZs(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_vHWyh2kA
                                #define DEFt_clone_vHWyh2kA
inline const fu_VEC<s_Extended>& clone_vHWyh2kA(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_g4Ujnafl
                                #define DEFt_clone_g4Ujnafl
inline const fu_VEC<s_Target>& clone_g4Ujnafl(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_VlstfTrM
                                #define DEFt_clone_VlstfTrM
inline s_Scope clone_VlstfTrM(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.items = clone_KgMAn1pX(a.items);
        res.overloads = clone_QHG5KFZs(a.overloads);
        res.extended = clone_vHWyh2kA(a.extended);
        res.imports = clone_Z5oQfAXT(a.imports);
        res.privates = clone_Z5oQfAXT(a.privates);
        res.usings = clone_g4Ujnafl(a.usings);
        res.converts = clone_g4Ujnafl(a.converts);
        res.pub_items = clone_eabe9idx(a.pub_items);
        res.pub_cnvrts = clone_eabe9idx(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_ALGAdvIN
                                #define DEFt_clone_ALGAdvIN
inline s_SolverOutput clone_ALGAdvIN(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_Ga719jiI(a.root);
        res.scope = clone_VlstfTrM(a.scope);
        res.notes = clone_eabe9idx(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_CTYCPNAe
                                #define DEFt_clone_CTYCPNAe
inline const s_CodegenOutput& clone_CTYCPNAe(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_mer3UxL3
                                #define DEFt_clone_mer3UxL3
inline s_ModuleOutputs clone_mer3UxL3(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_Z5oQfAXT(a.deps);
        res.types = clone_TyHd3cFd(a.types);
        res.solve = clone_ALGAdvIN(a.solve);
        res.cpp = clone_CTYCPNAe(a.cpp);
        res.init_prio = clone_eabe9idx(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_Ea67s1xd
                                #define DEFt_clone_Ea67s1xd
inline const s_ModuleStats& clone_Ea67s1xd(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_xKmoTKtA
                                #define DEFt_clone_xKmoTKtA
inline s_Module clone_xKmoTKtA(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_eabe9idx(a.modid);
        res.fname = clone_rOVPWlZS(a.fname);
        res.in = clone_C7TEVOlR(a.in);
        res.out = clone_mer3UxL3(a.out);
        res.stats = clone_Ea67s1xd(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

void setModule_2YVZZZ5V(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (!(current.fname == module.fname))
        fu_ASSERT();

    current = clone_xKmoTKtA(module);
}

const s_Struct& lookupStruct_5FUAmY77(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    if (type.vtype.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[structIndex_j5f0QjYP(type.vtype.canon)])) ? *_0 : fu_ASSERT();
    };
    const s_Struct* _1;
    return *(_1 = &(ctx.modules[type.vtype.modid].out.types[structIndex_j5f0QjYP(type.vtype.canon)])) ? *_1 : fu_ASSERT();
}

bool is_trivial_lcHUdEZy(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return is_primitive_dtjgvDEj(type) || (isStruct_C02JG8Ye(type) ? lookupStruct_5FUAmY77(type, module, ctx).all_triv : (*(const bool*)fu::NIL));
}

const s_Struct& tryLookupStruct_lcHUdEZy(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return isStruct_C02JG8Ye(type) ? lookupStruct_5FUAmY77(type, module, ctx) : (*(const s_Struct*)fu::NIL);
}

const fu_VEC<int>& lookupTypeImports_lcHUdEZy(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct_lcHUdEZy(type, module, ctx).imports;
}

const fu_VEC<s_Target>& lookupTypeConverts_lcHUdEZy(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct_lcHUdEZy(type, module, ctx).converts;
}

const fu_STR& getModuleSrc_cpJJ4QKY(const int modid, const s_Context& ctx)
{
    return ctx.modules[modid].in.src;
}

fu_STR formatCodeSnippet_EjSh40rn(const s_TokenIdx& to, s_TokenIdx&& from, const s_Context& ctx)
{
    const fu_STR& src = getModuleSrc_cpJJ4QKY(to.modid, ctx);
    const s_Token& start = _token_4nLgxTnv((from ? from : to), ctx);
    const s_Token& end = _token_4nLgxTnv(to, ctx);
    return formatCodeSnippet_cfqkTxjB(src, start, end, 2);
}

                                #ifndef DEFt_split_zDDLOL4o
                                #define DEFt_split_zDDLOL4o
inline void split_zDDLOL4o(const fu_STR& str, fu::view<char> sep, int, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                fu_STR substr = fu::slice(str, last, next);
                result += fu_STR(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        fu_STR substr = fu::slice(str, last);
        result += fu_STR(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEFt_split_OZkl8S7R
                                #define DEFt_split_OZkl8S7R
inline fu_VEC<fu_STR> split_OZkl8S7R(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_zDDLOL4o(str, sep, 0, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu_STR DIM;
                                #endif

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu_STR RESET;
                                #endif

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu_STR BAD;
                                #endif

fu_STR formatCodeSnippet_cfqkTxjB(const fu_STR& src, const s_Token& start, const s_Token& end, const int extraLines)
{
    fu_VEC<fu_STR> lines = split_OZkl8S7R(src, "\n"_fu);
    int l_start = ((start.line - extraLines) - 1);
    int l_end = (end.line + extraLines);
    l_start = std::max(l_start, 0);
    l_end = std::min(l_end, lines.size());
    /*MOV*/ fu_STR result {};
    for (int i = l_start; i < l_end; i++)
    {
        if ((i < (start.line - 1)) || (i >= end.line))
            result += (DIM + "      | "_fu);
        else
        {
            fu_STR margin = x7E(fu::i64dec((i + 1)), " | "_fu);
            while (margin.size() < 8)
                margin = (" "_fu + margin);

            result += margin;
        };
        fu_STR line { lines[i] };
        if (i == (end.line - 1))
        {
            const int c0 = std::max((end.col - 1), 0);
            const int c1 = (c0 + std::min(end.value.size(), line.size()));
            line.splice(c1, 0, RESET);
            line.splice(c0, 0, BAD);
        };
        result += line;
        if ((i < (start.line - 1)) || (i >= end.line))
            result += RESET;

        result += "\n"_fu;
    };
    return /*NRVO*/ result;
}

fu_STR getShortModuleName_zQFrD65V(const fu_STR& fname)
{
    const int end = (fname.size() - 3);
    bool found = false;
    for (int i = end; i-- > 0; )
    {
        const char c = fname[i];
        if (c != '/')
            continue;

        if (found)
            return fu::slice(fname, (i + 1), end);

        found = true;
    };
    fu_ASSERT();
}

#endif
