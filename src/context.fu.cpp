
#include <algorithm>
#include <fu/decstr.h>
#include <fu/default.h>
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
struct s_Map_OZkl;
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
bool is_primitive(const s_Type&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
fu_STR path_dirname(const fu_STR&);
fu_STR resolveFile(const fu_STR&, s_Context&);
int structIndex(fu::view<fu::byte>);
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

                                #ifndef DEF_s_Map_OZkl
                                #define DEF_s_Map_OZkl
struct s_Map_OZkl
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
    s_Map_OZkl files;
    s_Map_OZkl fuzzy;
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

s_Struct& lookupStruct_mut(fu::view<fu::byte> canon_1, s_Module& module)
{
    return module.out.types.mutref(structIndex(canon_1));
}

                                #ifndef DEFt_find_05eu
                                #define DEFt_find_05eu
inline int find_05eu(fu::view<fu::byte> a, const fu::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_05eu
                                #define DEFt_has_05eu
inline bool has_05eu(fu::view<fu::byte> a, const fu::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_bfind_VtCz
                                #define DEFt_bfind_VtCz
inline int bfind_VtCz(fu::view<fu_STR> keys_3, const fu_STR& item)
{
    for (int i = 0; i < keys_3.size(); i++)
    {
        if ((keys_3[i] >= item))
        {
            if (keys_3[i] != item)
                return -1;

            return i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_bmnP
                                #define DEFt_get_bmnP
inline const fu_STR& get_bmnP(const s_Map_OZkl& _, const fu_STR& key)
{
    const int idx = bfind_VtCz(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const fu_STR*)fu::NIL);
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

                                #ifndef DEFt_update_fvG9
                                #define DEFt_update_fvG9
inline void update_fvG9(int, const fu_STR& item, int, const fu_STR& extra, s_Map_OZkl& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, item);
                _.vals.insert(i, extra);
                return;
            };
            _.vals.mutref(i) = extra;
            return;
        };
    };
    _.keys.push(item);
    _.vals.push(extra);
}
                                #endif

                                #ifndef DEFt_set_ZTZj
                                #define DEFt_set_ZTZj
inline void set_ZTZj(s_Map_OZkl& _, const fu_STR& key, const fu_STR& value_3)
{
    update_fvG9(0, key, 0, value_3, _);
}
                                #endif

static fu_STR resolveFile(const fu_STR& from, const fu_STR& name_3, s_Context& ctx)
{
    fu_STR path = (from + name_3);
    const fu_STR& cached = get_bmnP(ctx.fuzzy, path);
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    fu_STR resolve = tryResolve(path, from, name_3, ctx);
    set_ZTZj(ctx.fuzzy, path, (resolve ? fu_STR(resolve) : "\v"_fu));
    return resolve;
}

                                #ifndef DEFt_bfind_9sek
                                #define DEFt_bfind_9sek
inline int bfind_9sek(fu::view<fu_STR> keys_3, const fu_STR& item)
{
    for (int i = 0; i < keys_3.size(); i++)
    {
        if ((keys_3[i] >= item))
        {
            if (keys_3[i] != item)
                return -1;

            return i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_has_zJcj
                                #define DEFt_has_zJcj
inline bool has_zJcj(const s_Map_OZkl& _, const fu_STR& key)
{
    return (bfind_9sek(_.keys, key) >= 0);
}
                                #endif

fu_STR resolveFile(const fu_STR& path, s_Context& ctx)
{
    const int fuzzy_1 = find_05eu(path, fu::byte('\v'));
    if (fuzzy_1 > 0)
    {
        fu_STR from = fu::slice(path, 0, fuzzy_1);
        fu_STR name_3 = fu::slice(path, (fuzzy_1 + 1));
        if (from && name_3 && !has_05eu(name_3, fu::byte('\v')))
        {
            fu_STR res = resolveFile(from, name_3, ctx);
            if (res)
                return res;

            fu_STR prepopulated = (from + name_3);
            if (has_zJcj(ctx.files, prepopulated))
                return prepopulated;

        };
    };
    return fu_STR(path);
}

                                #ifndef DEFt_replace_Q0b6
                                #define DEFt_replace_Q0b6
inline fu_STR replace_Q0b6(const fu_STR& str_1, fu::view<fu::byte> all, fu::view<fu::byte> with)
{
    fu_STR result {};

    {
        int last_1 = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str_1, all, last_1)) >= 0))
            {

                {
                    fu_STR substr_1 = fu::slice(str_1, last_1, next);
                    const bool first_1 = !last_1;
                    const bool last_2 = false;
                    if (!first_1)
                        result += with;
                    else if (last_2)
                        return fu_STR(str_1);

                    result += substr_1;
                };
                last_1 = (next + N);
            };
        };
        if (last_1)
        {
            fu_STR substr_1 = fu::slice(str_1, last_1);
            const bool first_1 = false;
            const bool last_2 = true;
            if (!first_1)
                result += with;
            else if (last_2)
                return fu_STR(str_1);

            result += substr_1;
        }
        else
        {
            const bool first_1 = true;
            const bool last_2 = true;
            if (!first_1)
                result += with;
            else if (last_2)
                return fu_STR(str_1);

            result += str_1;
        };
    };
    return result;
}
                                #endif

fu_STR resolveFile_x(const fu_STR& path, const s_Context& ctx)
{
    fu_STR clean = replace_Q0b6(path, "\v"_fu, fu::view<fu::byte>{});
    const fu_STR& match = get_bmnP(ctx.fuzzy, clean);
    return fu_STR(((match && (match != "\v"_fu)) ? match : clean));
}

                                #ifndef DEFt_bfind_Bd7d
                                #define DEFt_bfind_Bd7d
inline int bfind_Bd7d(fu::view<fu_STR> keys_3, const fu_STR& item)
{
    for (int i = 0; i < keys_3.size(); i++)
    {
        if ((keys_3[i] >= item))
        {
            if (keys_3[i] != item)
                return -1;

            return i;
        };
    };
    return -1;
}
                                #endif

                                #ifndef DEFt_get_fKR5
                                #define DEFt_get_fKR5
inline const fu_STR& get_fKR5(const s_Map_OZkl& _, const fu_STR& key)
{
    const int idx = bfind_Bd7d(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const fu_STR*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_update_awUK
                                #define DEFt_update_awUK
inline void update_awUK(int, const fu_STR& item, int, const fu_STR& extra, s_Map_OZkl& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, item);
                _.vals.insert(i, extra);
                return;
            };
            _.vals.mutref(i) = extra;
            return;
        };
    };
    _.keys.push(item);
    _.vals.push(extra);
}
                                #endif

                                #ifndef DEFt_set_pi1h
                                #define DEFt_set_pi1h
inline void set_pi1h(s_Map_OZkl& _, const fu_STR& key, const fu_STR& value_3)
{
    update_awUK(0, key, 0, value_3, _);
}
                                #endif

fu_STR getFile(fu_STR&& path, s_Context& ctx)
{
    const fu_STR& cached = get_fKR5(ctx.files, path);
    if (cached)
        return fu_STR(((cached == "\v"_fu) ? (*(const fu_STR*)fu::NIL) : cached));

    fu_STR read = fu::file_read(path);
    set_pi1h(ctx.files, path, (read ? fu_STR(read) : "\v"_fu));
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

                                #ifndef DEFt_clone_6Kad
                                #define DEFt_clone_6Kad
inline int clone_6Kad(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_AwjY
                                #define DEFt_clone_AwjY
inline const fu_STR& clone_AwjY(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Ylnj
                                #define DEFt_clone_Ylnj
inline const s_ModuleInputs& clone_Ylnj(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_xQkU
                                #define DEFt_clone_xQkU
inline const fu_VEC<int>& clone_xQkU(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_O2WC
                                #define DEFt_clone_O2WC
inline const fu_VEC<s_Struct>& clone_O2WC(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_8Z6B
                                #define DEFt_clone_8Z6B
inline const s_SolvedNode& clone_8Z6B(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_sjQW
                                #define DEFt_clone_sjQW
inline const fu_VEC<s_ScopeItem>& clone_sjQW(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_TURz
                                #define DEFt_clone_TURz
inline const fu_VEC<s_Overload>& clone_TURz(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_no8B
                                #define DEFt_clone_no8B
inline const fu_VEC<s_Extended>& clone_no8B(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_ntxL
                                #define DEFt_clone_ntxL
inline const fu_VEC<s_Target>& clone_ntxL(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_nijh
                                #define DEFt_clone_nijh
inline s_Scope clone_nijh(const s_Scope& a)
{
    s_Scope res {};

    {
        res.items = clone_sjQW(a.items);
        res.overloads = clone_TURz(a.overloads);
        res.extended = clone_no8B(a.extended);
        res.imports = clone_xQkU(a.imports);
        res.usings = clone_ntxL(a.usings);
        res.converts = clone_ntxL(a.converts);
        res.pub_count = clone_6Kad(a.pub_count);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_GiFx
                                #define DEFt_clone_GiFx
inline s_SolverOutput clone_GiFx(const s_SolverOutput& a)
{
    s_SolverOutput res {};

    {
        res.root = clone_8Z6B(a.root);
        res.scope = clone_nijh(a.scope);
        res.notes = clone_6Kad(a.notes);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_wg6f
                                #define DEFt_clone_wg6f
inline const s_CodegenOutput& clone_wg6f(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_KKqe
                                #define DEFt_clone_KKqe
inline s_ModuleOutputs clone_KKqe(const s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};

    {
        res.deps = clone_xQkU(a.deps);
        res.types = clone_O2WC(a.types);
        res.solve = clone_GiFx(a.solve);
        res.cpp = clone_wg6f(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_PHyv
                                #define DEFt_clone_PHyv
inline const s_ModuleStats& clone_PHyv(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_P1L6
                                #define DEFt_clone_P1L6
inline s_Module clone_P1L6(const s_Module& a)
{
    s_Module res {};

    {
        res.modid = clone_6Kad(a.modid);
        res.fname = clone_AwjY(a.fname);
        res.in = clone_Ylnj(a.in);
        res.out = clone_KKqe(a.out);
        res.stats = clone_PHyv(a.stats);
    };
    return res;
}
                                #endif

void setModule(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (!(current.fname == module.fname))
        fu_ASSERT();

    current = clone_P1L6(module);
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

bool is_trivial(const s_Type& type_3, const s_Module& module, const s_Context& ctx)
{
    return is_primitive(type_3) || (isStruct(type_3) && lookupStruct(type_3, module, ctx).all_triv);
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

                                #ifndef DEFt_split_Iwpk
                                #define DEFt_split_Iwpk
inline void split_Iwpk(const fu_STR& str_1, fu::view<fu::byte> sep, int, fu_VEC<fu_STR>& result)
{
    int last_1 = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str_1, sep, last_1)) >= 0))
        {

            {
                fu_STR substr_1 = fu::slice(str_1, last_1, next);
                result += substr_1;
            };
            last_1 = (next + N);
        };
    };
    if (last_1)
    {
        fu_STR substr_1 = fu::slice(str_1, last_1);
        result += substr_1;
    }
    else
        result += str_1;

}
                                #endif

                                #ifndef DEFt_split_OZkl
                                #define DEFt_split_OZkl
inline fu_VEC<fu_STR> split_OZkl(const fu_STR& str_1, fu::view<fu::byte> sep)
{
    fu_VEC<fu_STR> result {};
    split_Iwpk(str_1, sep, 0, result);
    return result;
}
                                #endif

extern const fu_STR DIM;

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

extern const fu_STR RESET;

extern const fu_STR BAD;

fu_STR formatCodeSnippet(const s_TokenIdx& to, s_TokenIdx&& from, const int extraLines, const s_Context& ctx)
{
    const fu_STR& src_2 = ctx.modules[to.modid].in.src;
    fu_VEC<fu_STR> lines = split_OZkl(src_2, "\n"_fu);
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
            fu_STR margin = x7E_OZkl(fu::i64dec((i + 1)), " | "_fu);
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
