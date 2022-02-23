
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

struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Map_EmVtl5Qe;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
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
struct s_StructCanon;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

bool isStruct_5BOF5uJ9(const s_Type&);
bool is_primitive_KyrTVXnz(const s_Type&);
fu_STR path_dirname_85KQkyE0(const fu_STR&);
fu_STR resolveFile_JdJwrrbj(const fu_STR&, s_Context&);
s_StructCanon parseStructCanon_1WZjPEgG(fu::view<char>);
static fu_STR resolveFile_VHeaw58u(const fu_STR&, const fu_STR&, s_Context&);
static fu_STR tryResolve_Xo3Ascdw(const fu_STR&, const fu_STR&, const fu_STR&, s_Context&);

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
    s_BitSet risk_free;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || risk_free
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
    int helpers;
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

                                #ifndef DEF_s_StructCanon
                                #define DEF_s_StructCanon
struct s_StructCanon
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

#ifndef FU_NO_FDEFs

const s_Token& _token_GF4X2sQy(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].in.lex.tokens[idx.tokidx];
}

const fu_STR& _fname_GF4X2sQy(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].fname;
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_Struct& lookupStruct_mut_MHqzuNPp(fu::view<char> canon, s_Module& module)
{
    const s_StructCanon scp = parseStructCanon_1WZjPEgG(canon);
    if (!(scp.modid == module.modid))
        fu::fail((((x7E("lookupStruct_mut: Not from this module ("_fu, fu::i64dec(module.modid)) + ": "_fu) + canon) + ")"_fu));

    return module.out.types.mutref(scp.index);
}

                                #ifndef DEFt_find_3yRdKyg4
                                #define DEFt_find_3yRdKyg4
inline int find_3yRdKyg4(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_3yRdKyg4
                                #define DEFt_has_3yRdKyg4
inline bool has_3yRdKyg4(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_get_wc8KkiLz
                                #define DEFt_get_wc8KkiLz
inline const fu_STR& get_wc8KkiLz(fu::view<fu_STR> keys, const fu_STR& item, fu::view<fu_STR> extras)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return extras[i];
            };
            N = i;
            break;
        };
    };
    return (*(const fu_STR*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_get_ftii3l3J
                                #define DEFt_get_ftii3l3J
inline const fu_STR& get_ftii3l3J(const s_Map_EmVtl5Qe& _, const fu_STR& key)
{
    return get_wc8KkiLz(_.keys, key, _.vals);
}
                                #endif

static fu_STR tryResolve_Xo3Ascdw(const fu_STR& path, const fu_STR& from, const fu_STR& name, s_Context& ctx)
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
    fu_STR fallback = path_dirname_85KQkyE0(from);
    if (!fallback || (fallback.size() >= from.size()))
        return fu_STR{};

    return resolveFile_VHeaw58u(fallback, name, ctx);
}

                                #ifndef DEFt_update_dPm022Eb
                                #define DEFt_update_dPm022Eb
inline bool update_dPm022Eb(const fu_STR& item, const fu_STR& extra, s_Map_EmVtl5Qe& _)
{
    int N = _.keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = _.keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                _.vals.mutref(i) = extra;
                return false;
            };
            N = i;
            break;
        };
    };
    _.keys.insert(N, fu_STR(item));
    _.vals.insert(N, fu_STR(extra));
    return true;
}
                                #endif

                                #ifndef DEFt_set_491LlKQV
                                #define DEFt_set_491LlKQV
inline bool set_491LlKQV(s_Map_EmVtl5Qe& _, const fu_STR& key, const fu_STR& value)
{
    return update_dPm022Eb(key, value, _);
}
                                #endif

static fu_STR resolveFile_VHeaw58u(const fu_STR& from, const fu_STR& name, s_Context& ctx)
{
    fu_STR path = (from + name);
    const fu_STR& cached = get_ftii3l3J(ctx.fuzzy, path);
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    /*MOV*/ fu_STR resolve = tryResolve_Xo3Ascdw(path, from, name, ctx);
    set_491LlKQV(ctx.fuzzy, path, (resolve ? fu_STR(resolve) : "\v"_fu));
    return /*NRVO*/ resolve;
}

                                #ifndef DEFt_has_n5fL7Bm1
                                #define DEFt_has_n5fL7Bm1
inline bool has_n5fL7Bm1(fu::view<fu_STR> keys, const fu_STR& item)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return true;
            };
            N = i;
            break;
        };
    };
    return false;
}
                                #endif

                                #ifndef DEFt_has_ugH3Frm2
                                #define DEFt_has_ugH3Frm2
inline bool has_ugH3Frm2(const s_Map_EmVtl5Qe& _, const fu_STR& key)
{
    return has_n5fL7Bm1(_.keys, key);
}
                                #endif

fu_STR resolveFile_JdJwrrbj(const fu_STR& path, s_Context& ctx)
{
    const int fuzzy = find_3yRdKyg4(path, '\v');
    if (fuzzy > 0)
    {
        fu_STR from = fu::slice(path, 0, fuzzy);
        fu_STR name = fu::slice(path, (fuzzy + 1));
        if (from && name && !has_3yRdKyg4(name, '\v'))
        {
            /*MOV*/ fu_STR res = resolveFile_VHeaw58u(from, name, ctx);
            if (res)
                return /*NRVO*/ res;

            /*MOV*/ fu_STR prepopulated = (from + name);
            if (has_ugH3Frm2(ctx.files, prepopulated))
                return /*NRVO*/ prepopulated;

        };
    };
    return fu_STR(path);
}

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

fu_STR resolveFile_x_pcVfgwiN(const fu_STR& path, const s_Context& ctx)
{
    fu_STR clean = replace_lxKOEoJG(path, "\v"_fu, fu::view<char>{});
    const fu_STR& match = get_ftii3l3J(ctx.fuzzy, clean);
    return fu_STR(((match && (match != "\v"_fu)) ? match : clean));
}

                                #ifndef DEFt_get_eULe0tbu
                                #define DEFt_get_eULe0tbu
inline const fu_STR& get_eULe0tbu(fu::view<fu_STR> keys, const fu_STR& item, fu::view<fu_STR> extras)
{
    int N = keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                return extras[i];
            };
            N = i;
            break;
        };
    };
    return (*(const fu_STR*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_get_C4TBazuB
                                #define DEFt_get_C4TBazuB
inline const fu_STR& get_C4TBazuB(const s_Map_EmVtl5Qe& _, const fu_STR& key)
{
    return get_eULe0tbu(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEFt_update_8n33qfRB
                                #define DEFt_update_8n33qfRB
inline bool update_8n33qfRB(const fu_STR& item, const fu_STR& extra, s_Map_EmVtl5Qe& _)
{
    int N = _.keys.size();
    for (int i = 0; i < N; i++)
    {
        const fu_STR& k = _.keys[i];
        if ((k >= item))
        {
            if (k == item)
            {
                _.vals.mutref(i) = extra;
                return false;
            };
            N = i;
            break;
        };
    };
    _.keys.insert(N, fu_STR(item));
    _.vals.insert(N, fu_STR(extra));
    return true;
}
                                #endif

                                #ifndef DEFt_set_4UAEU96y
                                #define DEFt_set_4UAEU96y
inline bool set_4UAEU96y(s_Map_EmVtl5Qe& _, const fu_STR& key, const fu_STR& value)
{
    return update_8n33qfRB(key, value, _);
}
                                #endif

fu_STR getFile_JdJwrrbj(fu_STR&& path, s_Context& ctx)
{
    const fu_STR& cached = get_C4TBazuB(ctx.files, path);
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    /*MOV*/ fu_STR read = fu::file_read(path);
    set_4UAEU96y(ctx.files, path, (read ? fu_STR(read) : "\v"_fu));
    return /*NRVO*/ read;
}

s_Module& getModule_JdJwrrbj(const fu_STR& fname, s_Context& ctx)
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

                                #ifndef DEFt_clone_uFTeeyF6
                                #define DEFt_clone_uFTeeyF6
inline int clone_uFTeeyF6(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_85KQkyE0
                                #define DEFt_clone_85KQkyE0
inline const fu_STR& clone_85KQkyE0(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_av5PxtCI
                                #define DEFt_clone_av5PxtCI
inline const s_ModuleInputs& clone_av5PxtCI(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_krBIyjUl
                                #define DEFt_clone_krBIyjUl
inline const fu_VEC<int>& clone_krBIyjUl(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_RKBsevnx
                                #define DEFt_clone_RKBsevnx
inline const fu_VEC<s_Struct>& clone_RKBsevnx(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_UQGL6wZn
                                #define DEFt_clone_UQGL6wZn
inline const s_SolvedNode& clone_UQGL6wZn(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_rwE7iqMq
                                #define DEFt_clone_rwE7iqMq
inline const fu_VEC<s_Overload>& clone_rwE7iqMq(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_bjZCjfhl
                                #define DEFt_clone_bjZCjfhl
inline const fu_VEC<s_Extended>& clone_bjZCjfhl(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_cCrdPZ3P
                                #define DEFt_clone_cCrdPZ3P
inline const fu_VEC<s_ScopeItem>& clone_cCrdPZ3P(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_fnMFgrK3
                                #define DEFt_clone_fnMFgrK3
inline const fu_VEC<s_Target>& clone_fnMFgrK3(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_6gS0ED9F
                                #define DEFt_clone_6gS0ED9F
inline s_Scope clone_6gS0ED9F(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_rwE7iqMq(a.overloads);
        res.extended = clone_bjZCjfhl(a.extended);
        res.items = clone_cCrdPZ3P(a.items);
        res.implicits = clone_cCrdPZ3P(a.implicits);
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

                                #ifndef DEFt_clone_zyxQCvJi
                                #define DEFt_clone_zyxQCvJi
inline s_SolverOutput clone_zyxQCvJi(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_UQGL6wZn(a.root);
        res.scope = clone_6gS0ED9F(a.scope);
        res.notes = clone_uFTeeyF6(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_G6pqsUn1
                                #define DEFt_clone_G6pqsUn1
inline const s_CodegenOutput& clone_G6pqsUn1(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_M6x1M0Mx
                                #define DEFt_clone_M6x1M0Mx
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

                                #ifndef DEFt_clone_plfOxjBD
                                #define DEFt_clone_plfOxjBD
inline const s_ModuleStats& clone_plfOxjBD(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_eixx2GVS
                                #define DEFt_clone_eixx2GVS
inline s_Module clone_eixx2GVS(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_uFTeeyF6(a.modid);
        res.fname = clone_85KQkyE0(a.fname);
        res.in = clone_av5PxtCI(a.in);
        res.out = clone_M6x1M0Mx(a.out);
        res.stats = clone_plfOxjBD(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

void setModule_IgtJxUnL(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (!(current.fname == module.fname))
        fu_ASSERT();

    current = clone_eixx2GVS(module);
}

const s_Struct& lookupStruct_jCnOT4Df(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    const s_StructCanon scp = parseStructCanon_1WZjPEgG(type.vtype.canon);
    if (scp.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[scp.index])) ? *_0 : fu_ASSERT();
    };
    const s_Struct* _1;
    return *(_1 = &(ctx.modules[scp.modid].out.types[scp.index])) ? *_1 : fu_ASSERT();
}

bool is_trivial_qcjLQIhC(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return is_primitive_KyrTVXnz(type) || (isStruct_5BOF5uJ9(type) ? lookupStruct_jCnOT4Df(type, module, ctx).all_triv : (*(const bool*)fu::NIL));
}

const s_Struct& tryLookupStruct_qcjLQIhC(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return isStruct_5BOF5uJ9(type) ? lookupStruct_jCnOT4Df(type, module, ctx) : (*(const s_Struct*)fu::NIL);
}

const fu_VEC<int>& lookupTypeImports_qcjLQIhC(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct_qcjLQIhC(type, module, ctx).imports;
}

const fu_VEC<s_Target>& lookupTypeConverts_qcjLQIhC(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct_qcjLQIhC(type, module, ctx).converts;
}

const fu_STR& getModuleSrc_7k0snHP1(const int modid, const s_Context& ctx)
{
    return ctx.modules[modid].in.src;
}

                                #ifndef DEFt_split_eTAXjqyR
                                #define DEFt_split_eTAXjqyR
inline void split_eTAXjqyR(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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

                                #ifndef DEFt_split_KclJlPSO
                                #define DEFt_split_KclJlPSO
inline fu_VEC<fu_STR> split_KclJlPSO(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_eTAXjqyR(str, sep, result);
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

fu_STR formatCodeSnippet_tVfuVdgh(const fu_STR& src, const s_Token& start, const s_Token& end, const int extraLines)
{
    fu_VEC<fu_STR> lines = split_KclJlPSO(src, "\n"_fu);
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

fu_STR formatCodeSnippet_LnIzFNvj(const s_TokenIdx& to, s_TokenIdx&& from, const s_Context& ctx)
{
    const fu_STR& src = getModuleSrc_7k0snHP1(to.modid, ctx);
    const s_Token& start = _token_GF4X2sQy((from ? from : to), ctx);
    const s_Token& end = _token_GF4X2sQy(to, ctx);
    return formatCodeSnippet_tVfuVdgh(src, start, end, 2);
}

fu_STR getShortModuleName_bB04eegu(const fu_STR& fname)
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
