#include <cstddef>
#include <cstdint>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/join.h>
#include <fu/vec/slice.h>
#include <fu/vec/sort.h>
#include <fu/view.h>
#include <utility>

struct s_Argument;
struct s_BitSet;
struct s_Context;
struct s_Effects;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_MapFields;
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
struct s_TEMPVAR;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;
struct s_cg_Blockval;
struct s_cg_CurrentFn;

bool add_once(s_BitSet&, int);
bool has(const s_BitSet&, int);
bool hasIdentifierChars(const fu_STR&);
bool isStruct(const s_Type&);
bool is_bool(const s_Type&);
bool is_mutref(const s_Type&);
bool is_never(const s_Type&);
bool is_ref(const s_Type&);
bool is_void(const s_Type&);
bool maybe_nonzero(const s_Type&);
bool operator==(const s_Type&, const s_Type&);
bool type_isArray(const s_Type&);
bool type_isMap(const s_Type&);
bool type_isZST(const s_Type&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
fu_STR ID(const fu_STR&);
int Lifetime_compareToIndex(const s_Lifetime&, int);
s_Intlit Intlit(fu::view<std::byte>);
s_MapFields tryClear_map(const s_Type&);
s_Target target(const s_ScopeItem&);
s_Type clear_refs(s_Type&&);
s_Type tryClear_array(const s_Type&);
s_Type tryClear_sliceable(const s_Type&);
static fu_STR ARG(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const fu_VEC<s_SolvedNode>&, int);
static fu_STR cgAnd(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const s_SolvedNode&, int);
static fu_STR cgAnd(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, fu::view<s_SolvedNode>, const s_Type&, int);
static fu_STR cgAppend(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const s_SolvedNode&, const fu_STR&);
static fu_STR cgBlock(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const s_SolvedNode&, int);
static fu_STR cgFn(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const s_SolvedNode&, int);
static fu_STR cgMoveOrClone(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const s_SolvedNode&, int);
static fu_STR cgNode(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const s_SolvedNode&, int);
static fu_STR cgTryCatch(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, const s_SolvedNode&);
static fu_STR collectDedupes(const fu_MAP<fu_STR, fu_STR>&, bool);
static fu_STR typeAnnot(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_STR&, s_cg_CurrentFn&, const s_Type&, int);
static fu_STR via(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_STR&, s_cg_CurrentFn&, s_TEMPVAR&, const s_Type&, const fu_STR&);
static fu_STR via(const s_Module&, const s_Context&, fu_MAP<fu_STR, fu_STR>&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, fu_STR&, fu_STR&, int&, s_cg_CurrentFn&, s_TEMPVAR&, const s_Type&, const s_SolvedNode&);

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

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu_STR id;
    int modid;
    uint32_t packed;
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
    uint32_t status;
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

                                #ifndef DEF_s_cg_Blockval
                                #define DEF_s_cg_Blockval
struct s_cg_Blockval
{
    int index;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || index
            || ptrflip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_CurrentFn
                                #define DEF_s_cg_CurrentFn
struct s_cg_CurrentFn
{
    s_Target target;
    s_BitSet dupes;
    int numTEMPVARs;
    fu_VEC<fu_STR> TEMPVARs;
    fu_VEC<s_cg_Blockval> blockvals;
    int can_break;
    int can_cont;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || dupes
            || numTEMPVARs
            || TEMPVARs
            || blockvals
            || can_break
            || can_cont
        ;
    }
};
                                #endif

                                #ifndef DEF_s_MapFields
                                #define DEF_s_MapFields
struct s_MapFields
{
    s_Type key;
    s_Type value;
    explicit operator bool() const noexcept
    {
        return false
            || key
            || value
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEMPVAR
                                #define DEF_s_TEMPVAR
struct s_TEMPVAR
{
    fu_STR annot;
    fu_STR id;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || annot
            || id
            || ptrflip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    uint8_t base;
    uint8_t minsize_i;
    uint8_t minsize_u;
    uint8_t minsize_f;
    bool sIgned;
    bool uNsigned;
    bool negative;
    uint64_t absval;
    fu_STR error;
    explicit operator bool() const noexcept
    {
        return false
            || base
            || minsize_i
            || minsize_u
            || minsize_f
            || sIgned
            || uNsigned
            || negative
            || absval
            || error
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const int M_STMT = (1 << 0);

static const int M_RETBOOL = (1 << 1);

static const int M_CONST = (1 << 2);

static const int M_RETVAL = (1 << 3);

static const int M_ARGUMENT = (1 << 4);

static const int M_RETURN = (1 << 5);

static const int M_FWDECL = (1 << 6);

static const int M_PARENS = (1 << 7);

static const int M_OPT_CURLIES = (1 << 8);

static const int M_LOOP_BODY = (1 << 9);

[[noreturn]] static fu::never fail(const fu_STR& reason)
{
    fu::fail(reason);
}

static s_Overload GET(const s_Module& module_0, const s_Context& ctx_0, const s_Target& target)
{
    if (!(target.index > 0))
        fu_ASSERT();

    const s_Module& m = ((target.modid == module_0.modid) ? module_0 : ctx_0.modules[target.modid]);
    return s_Overload(m.out.solve.scope.overloads[(target.index - 1)]);
}

static void include(fu_MAP<fu_STR, fu_STR>& _libs_0, const fu_STR& lib)
{
    if (!fu::has(_libs_0, lib))
        (_libs_0.upsert(lib) = (("#include "_fu + lib) + "\n"_fu));

}

static fu_STR ARG(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const fu_VEC<s_SolvedNode>& items_0, const int i)
{
    return cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items_0[i], 0);
}

static fu_STR REST(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const fu_VEC<s_SolvedNode>& items_0, const int start)
{
    fu_STR src {};
    for (int i = start; i < items_0.size(); i++)
    {
        if (i > start)
            src += ", "_fu;

        src += cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items_0[i], 0);
    };
    return src;
}

                                #ifndef DEFt_last_YeU3
                                #define DEFt_last_YeU3
inline std::byte last_YeU3(const fu_STR& s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static bool binSkipParens(const fu_STR& id, const int mode)
{
    if (mode & M_STMT)
        return true;

    if (mode & M_PARENS)
    {
        if (last_YeU3(id) == std::byte('='))
        {
            if ((id == "=="_fu) || (id == "!="_fu))
                return true;

            return false;
        };
        return true;
    };
    return false;
}

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

static fu_STR annotateNever(fu_MAP<fu_STR, fu_STR>& _libs_0)
{
    include(_libs_0, "<fu/never.h>"_fu);
    return "fu::never"_fu;
}

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline const int q_rx_copy = (1 << 2);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_rx_copy | q_trivial);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), 0, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

static fu_STR annotateString(fu_MAP<fu_STR, fu_STR>& _libs_0)
{
    include(_libs_0, "<fu/str.h>"_fu);
    return "fu_STR"_fu;
}

static fu_STR structId(const s_Type& t)
{
    for (int i = 0; i < t.vtype.canon.size(); i++)
    {
        const std::byte x = t.vtype.canon[i];
        if (((x >= std::byte('a')) && (x <= std::byte('z'))) || ((x >= std::byte('A')) && (x <= std::byte('Z'))) || (x == std::byte('_')))
            return "s_"_fu + fu::slice(t.vtype.canon, i);

    };
    fail((("Bad structId: `"_fu + t.vtype.canon) + "`."_fu));
}

static s_Overload try_GET(const s_Module& module_0, const s_Context& ctx_0, const s_Target& target)
{
    return target ? GET(module_0, ctx_0, target) : s_Overload{};
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline const uint32_t SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

static fu_STR declareStruct(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_Type& t, const s_Struct& s)
{
    fu_STR id = structId(t);
    fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\nstruct "_fu) + id) + "\n{"_fu);
    fu_STR indent = "\n    "_fu;
    const fu_VEC<s_ScopeItem>& fields = s.items;
    for (int i = 0; i < fields.size(); i++)
    {
        s_Overload field = GET(module_0, ctx_0, target(fields[i]));
        if (!(field.kind == "field"_fu))
            fail(((((("Non-field struct item: "_fu + field.name) + " ("_fu) + field.kind) + ") in "_fu) + t.vtype.canon));

        def += ((((indent + typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, field.type, 0)) + " "_fu) + ID(field.name)) + ";"_fu);
    };
    if (!(t.vtype.quals & q_rx_copy))
    {
        def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
    }
    else if (try_GET(module_0, ctx_0, s.target).status & SS_TYPE_RECUR)
    {
        def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = default;"_fu);
        def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
        def += (((((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "& selfrec) { return *this = "_fu) + id) + "(selfrec); }"_fu);
    };
    def += "\n    explicit operator bool() const noexcept"_fu;
    def += "\n    {"_fu;
    def += "\n        return false"_fu;
    for (int i = 0; i < fields.size(); i++)
        def += ("\n            || "_fu + ID(fields[i].id));

    def += "\n        ;"_fu;
    def += "\n    }"_fu;
    return def + "\n};\n                                #endif\n"_fu;
}

static fu_STR typeAnnotBase(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_Type& type)
{
    const fu_STR& c = type.vtype.canon;
    if (type.vtype.quals & q_primitive)
    {
        if (c == "i32"_fu)
            return "int"_fu;

        if (c == "i16"_fu)
            return "short"_fu;

        if (c == "bool"_fu)
            return "bool"_fu;

        if (c == "f32"_fu)
            return "float"_fu;

        if (c == "f64"_fu)
            return "double"_fu;

        include(_libs_0, "<cstdint>"_fu);
        if (c == "i8"_fu)
            return "int8_t"_fu;

        if (c == "i64"_fu)
            return "int64_t"_fu;

        if (c == "u8"_fu)
            return "uint8_t"_fu;

        if (c == "u16"_fu)
            return "uint16_t"_fu;

        if (c == "u32"_fu)
            return "uint32_t"_fu;

        if (c == "u64"_fu)
            return "uint64_t"_fu;

        if (c == "byte"_fu)
            return "std::byte"_fu;

        fail("Unknown primitive."_fu);
    };
    if (c == "void"_fu)
        return "void"_fu;

    if (c == "never"_fu)
        return annotateNever(_libs_0);

    s_Type arrayItem = tryClear_array(type);
    if (arrayItem)
    {
        if (arrayItem == t_byte)
            return annotateString(_libs_0);

        fu_STR itemAnnot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, arrayItem, 0);
        include(_libs_0, "<fu/vec.h>"_fu);
        return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
    };
    s_Type sliceItem = tryClear_sliceable(type);
    if (sliceItem)
    {
        fu_STR itemAnnot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, sliceItem, 0);
        include(_libs_0, "<fu/view.h>"_fu);
        if (is_mutref(type))
            return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
        else
            return ("fu::view<"_fu + itemAnnot) + ">"_fu;

    };
    s_MapFields mapPair = tryClear_map(type);
    if (mapPair)
    {
        fu_STR k = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, mapPair.key, 0);
        fu_STR v = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, mapPair.value, 0);
        include(_libs_0, "<fu/map.h>"_fu);
        return ((("fu_MAP<"_fu + k) + ", "_fu) + v) + ">"_fu;
    };
    const s_Struct* _0;
    const s_Struct& tdef = (*(_0 = &(lookupStruct(type, module_0, ctx_0))) ? *_0 : fail(("TODO: "_fu + type.vtype.canon)));
    fu_STR id = structId(type);
    if (!fu::has(_tfwd_0, c))
    {
        (_tfwd_0.upsert(c) = (("struct "_fu + id) + ";\n"_fu));
        _tdef_0 += declareStruct(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, tdef);
    };
    return id;
}

static fu_STR typeAnnot(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_Type& type, const int mode)
{
    if ((mode & M_ARGUMENT) && type_isZST(type))
        return "int"_fu;

    fu_STR fwd = typeAnnotBase(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type);
    if (is_ref(type))
    {
        if (fu::lmatch(fwd, "fu::view"_fu))
            return fwd;

        if (is_mutref(type))
            return fwd + "&"_fu;

        if (type.vtype.quals & q_primitive)
            return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

        if (!(type.vtype.quals & q_trivial) && !(mode & M_ARGUMENT) && (Lifetime_compareToIndex(type.lifetime, _current_fn_0.target.index) > 0) && (_current_fn_0.target.modid == module_0.modid))
        {
            s_Type fnret = GET(module_0, ctx_0, s_Target { int(module_0.modid), int(_current_fn_0.target.index) }).type;
            if (!((fnret.vtype.quals & q_trivial) || is_ref(fnret)))
                return fwd + "&"_fu;

        };
        return ("const "_fu + fwd) + "&"_fu;
    };
    if ((mode & M_ARGUMENT) && !(type.vtype.quals & q_primitive))
        return fwd + "&&"_fu;

    if ((mode & M_CONST) && (type.vtype.quals & q_trivial))
        return "const "_fu + fwd;

    return fwd;
}

static fu_STR cgDefault(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_Type& type)
{
    if (is_mutref(type))
        fail("Cannot definit mutrefs."_fu);

    if (is_ref(type))
    {
        include(_libs_0, "<fu/default.h>"_fu);
        return ("fu::Default<"_fu + typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, clear_refs(s_Type(type)), 0)) + ">::value"_fu;
    };
    return typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, 0) + "{}"_fu;
}

                                #ifndef DEF_F_GLOBAL
                                #define DEF_F_GLOBAL
inline const int F_GLOBAL = (1 << 11);
                                #endif

                                #ifndef DEFt_grow_if_oob_BRC8
                                #define DEFt_grow_if_oob_BRC8
inline s_BitSet& grow_if_oob_BRC8(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once(fu_VEC<s_BitSet>& bs, const s_Target& target)
{
    return add_once(grow_if_oob_BRC8(bs, target.modid), target.index);
}

                                #ifndef DEF_F_MUT
                                #define DEF_F_MUT
inline const int F_MUT = (1 << 16);
                                #endif

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline const int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline const int LET_INIT = 1;
                                #endif

                                #ifndef DEFt_only_XB32
                                #define DEFt_only_XB32
inline const s_SolvedNode& only_XB32(const fu_VEC<s_SolvedNode>& s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(("len != 1: "_fu + s.size())));
}
                                #endif

static fu_STR binding(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const bool doInit, const bool forceMut)
{
    fu_VEC<fu_STR> _tv0 {};
    if (!_current_fn_0.target.index)
        std::swap(_tv0, _current_fn_0.TEMPVARs);

    fu_DEFER(if (!_current_fn_0.target.index)
        std::swap(_tv0, _current_fn_0.TEMPVARs););
    fu_STR annot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node.type, (((((node.flags & F_MUT) == 0) && !forceMut) ? int(M_CONST) : 0) | (((node.flags & F_ARG) == 0) ? 0 : int(M_ARGUMENT))));
    if ((node.flags & F_ARG) && type_isZST(node.type))
        return annot;

    s_Overload overload = GET(module_0, ctx_0, node.target);
    fu_STR& id = (overload.name ? overload.name : fail(fu_STR{}));
    fu_STR head = (((annot ? annot : fail(fu_STR{})) + " "_fu) + ID(id));
    s_SolvedNode init = (node.items ? s_SolvedNode(node.items[LET_INIT]) : s_SolvedNode{});
    if (!doInit || (node.flags & F_ARG))
        return head;

    if (init)
    {
        if ((init.kind == "copy"_fu) && !is_ref(node.type))
        {
            fu_STR expr = cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, only_XB32(init.items), 0);
            if (node.type.vtype.quals & q_primitive)
                return (head + " = "_fu) + expr;

            return ((head + " { "_fu) + expr) + " }"_fu;
        };
        if ((init.kind == "definit"_fu) && !is_ref(init.type))
        {
            if (!(init.type == node.type))
                fail("what's this now"_fu);

            return head + " {}"_fu;
        };
        fu_STR expr = cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, init, 0);
        if (!_current_fn_0.target.index && _current_fn_0.TEMPVARs)
        {
            fu_STR annot_1 = (fu::lmatch(annot, "const "_fu) ? fu::slice(annot, 6) : fu_STR(annot));
            fu_STR init_1 = ((((((" { []() -> "_fu + annot_1) + " {\n    "_fu) + fu::join(_current_fn_0.TEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}() }"_fu);
            _current_fn_0.TEMPVARs.clear();
            return head + init_1;
        };
        return (head + " = "_fu) + expr;
    };
    return head + " {}"_fu;
}

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline const int F_PUB = (1 << 20);
                                #endif

static fu_STR cgLet(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node)
{
    if (type_isZST(node.type))
        return fu_STR{};

    fu_STR src = binding(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, true, false);
    if (!(node.flags & F_GLOBAL))
        return src;

    if (fu::lmatch(src, "const "_fu))
        src = fu::slice(src, 6);

    if (!(node.flags & F_PUB))
        _fdef_0 += (("\nstatic const "_fu + src) + ";\n"_fu);
    else
        _fdef_0 += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);

    return fu_STR{};
}

static void cgForeignGlobal(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_Target& target)
{
    if (!add_once(_ffwd_0, target))
        return;

    s_Overload o = GET(module_0, ctx_0, target);
    cgLet(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, o.solved);
}

static fu_STR localID(const s_Module& module_0, s_cg_CurrentFn& _current_fn_0, const s_Target& target, const s_Overload& overload)
{
    fu_STR ok = ID(overload.name);
    if ((target.modid == module_0.modid) && (overload.local_of == _current_fn_0.target.index))
        return ok;

    if (has(_current_fn_0.dupes, target.index))
        return (ok + "_0"_fu) + target.index;

    return ok + "_0"_fu;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline const int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline const int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline const uint32_t SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline const int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline const int F_OPERATOR = (1 << 21);
                                #endif

static fu_STR valid_operator(const fu_STR& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        const std::byte c = str[i];
        if (((c >= std::byte('a')) && (c <= std::byte('z'))) || ((c >= std::byte('A')) && (c <= std::byte('Z'))) || ((c >= std::byte('0')) && (c <= std::byte('9'))) || (c == std::byte('_')))
            return fu::slice(str, 0, i);

    };
    return fu_STR(str);
}

                                #ifndef DEFt_add_fhrp
                                #define DEFt_add_fhrp
inline bool add_fhrp(fu_VEC<fu_STR>& dest, const fu_STR& item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest.mutref(i) != item)
            {
                dest.insert(i, item);
                return true;
            };
            return false;
        };
    };
    dest.push(item);
    return true;
}
                                #endif

static fu_STR generateLocalID(const s_Module& module_0, s_cg_CurrentFn& _current_fn_0, const s_Target& target, const s_Overload& overload, fu_VEC<fu_STR>& seen)
{
    fu_STR ok = ID(overload.name);
    if ((target.modid == module_0.modid) && (overload.local_of == _current_fn_0.target.index))
        return ok;

    if (!add_fhrp(seen, ok))
    {
        add_once(_current_fn_0.dupes, target.index);
        return (ok + "_0"_fu) + target.index;
    };
    return ok + "_0"_fu;
}

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline const int F_POSTFIX = (1 << 3);
                                #endif

static fu_STR cgFnSignature(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& fn)
{
    s_Overload overload = GET(module_0, ctx_0, fn.target);
    const fu_VEC<s_SolvedNode>& items = fn.items;
    fu_STR annot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, (overload.type ? overload.type : fail(fu_STR{})), M_RETVAL);
    fu_STR id { overload.name };
    if (id == "main"_fu)
    {
        _hasMain_0 = ((fn.items.size() + FN_RET_BACK) ? 2 : 1);
        id = "fu_MAIN"_fu;
    }
    else if (overload.flags & F_OPERATOR)
        id = ("operator"_fu + valid_operator(id));

    fu_STR linkage = (((is_never(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((fn.flags & F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!(fn.flags & F_PUB) ? "static "_fu : fu_STR{}));
    fu_STR src = ((((linkage + annot) + " "_fu) + id) + "("_fu);
    int needComma = 0;

    {
        fu_VEC<fu_STR> seen {};
        for (int i = 0; i < overload.closes_over.size(); i++)
        {
            if (needComma++)
                src += ", "_fu;

            const s_Target t = s_Target { int(module_0.modid), int(overload.closes_over[i]) };
            s_Overload o = GET(module_0, ctx_0, t);
            src += ((typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, o.type, 0) + " "_fu) + generateLocalID(module_0, _current_fn_0, t, o, seen));
        };
    };
    for (int i = 0; i < (items.size() + FN_RET_BACK); i++)
    {
        if (needComma++)
            src += ", "_fu;

        const s_SolvedNode* _0;
        src += binding(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, (*(_0 = &(items[i])) ? *_0 : fail(fu_STR{})), false, false);
    };
    if (overload.flags & F_POSTFIX)
    {
        if (!(overload.flags & F_OPERATOR))
            fu_ASSERT();

        src += ", /*postfix*/int "_fu;
    };
    src += ")"_fu;
    return src;
}

static bool exprOK(fu::view<s_SolvedNode> nodes)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        const fu_STR& k = n.kind;
        if ((k == "jump"_fu) || (k == "loop"_fu) || (k == "try"_fu) || (k == "catch"_fu) || (k == "let"_fu) || (k == "block"_fu))
            return false;

        if (((k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu)) && !exprOK(n.items))
            return false;

    };
    return true;
}

static fu_VEC<fu_STR> cgNodes(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const fu_VEC<s_SolvedNode>& nodes, const int mode, const fu_STR& trail)
{
    fu_VEC<fu_STR> result {};
    fu_VEC<fu_STR> _tv0 {};
    if (mode & M_STMT)
        std::swap(_tv0, _current_fn_0.TEMPVARs);

    fu_DEFER(if (mode & M_STMT)
        std::swap(_tv0, _current_fn_0.TEMPVARs););
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& node = nodes[i];
        const bool isTrail = (trail && (i == (nodes.size() - 1)) && !maybe_nonzero(node.type));
        fu_STR src = (node ? cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, (isTrail ? (mode & ~M_STMT) : int(mode))) : fu_STR{});
        if (!(src || (mode & M_STMT)))
            fail((("cgNodes: empty `"_fu + node.kind) + ".`"_fu));

        if ((mode & M_STMT) && _current_fn_0.TEMPVARs)
        {
            result += _current_fn_0.TEMPVARs;
            _current_fn_0.TEMPVARs.clear();
        };
        if (isTrail)
            src = (((trail + "("_fu) + src) + ")"_fu);

        result.push(src);
    };
    return result;
}

static fu_STR cgComma(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const fu_VEC<s_SolvedNode>& nodes)
{
    fu_VEC<fu_STR> items = cgNodes(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, nodes, 0, fu_STR{});
    if (!items.size())
        return "(false /*empty parens*/)"_fu;

    if (items.size() == 1)
        return fu_STR(items[0]);

    fu_STR src = "("_fu;
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += ", "_fu;

        if (i < (items.size() - 1))
            src += "(void)"_fu;

        src += items[i];
    };
    return src + ")"_fu;
}

static fu_STR emitTEMPVAR(s_cg_CurrentFn& _current_fn_0, const fu_STR& annot, bool& ptrflip, const fu_STR& id)
{
    ptrflip = (annot[(annot.size() - 1)] == std::byte('&'));
    fu_STR id_1 = (id ? fu_STR(id) : ("_"_fu + _current_fn_0.numTEMPVARs++));
    _current_fn_0.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + " {}"_fu));
    return id_1;
}

static fu_STR cgClone(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_Type& type, const fu_STR& src)
{
    return ((typeAnnotBase(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type) + "("_fu) + src) + ")"_fu;
}

static fu_STR cgMove(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_Type& type, const fu_STR& src)
{
    if (type.vtype.quals & q_trivial)
        return cgClone(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, src);

    return ((("static_cast<"_fu + typeAnnotBase(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type)) + "&&>("_fu) + src) + ")"_fu;
}

                                #ifndef DEFt_if_first_YeU3
                                #define DEFt_if_first_YeU3
inline std::byte if_first_YeU3(const fu_STR& s)
{
    return s.size() ? s[0] : fu::Default<std::byte>::value;
}
                                #endif

                                #ifndef DEFt_if_last_YeU3
                                #define DEFt_if_last_YeU3
inline std::byte if_last_YeU3(const fu_STR& s)
{
    return s.size() ? s[(s.size() - 1)] : fu::Default<std::byte>::value;
}
                                #endif

static fu_STR cgStatements(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const fu_VEC<s_SolvedNode>& nodes, int& count, const fu_STR& trail)
{
    fu_VEC<fu_STR> lines = cgNodes(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, nodes, M_STMT, trail);
    count = lines.size();
    fu_STR src {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
            src += (((if_first_YeU3(line) == std::byte('\n')) ? (std::byte('\n') + line) : (_indent_0 + line)) + ((if_last_YeU3(line) == std::byte(';')) ? std::byte('\n') : std::byte(';')));

    };
    return src;
}

static fu_STR cgBlock(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const fu_VEC<s_SolvedNode>& nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Target& label, const s_Type& type)
{
    fu_STR indent0 { _indent_0 };
    _indent_0 += "    "_fu;
    fu_STR gnuOpen = (gnuStmtExpr ? "(__extension__ ("_fu : fu_STR{});
    fu_STR open = "{"_fu;
    fu_STR close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu_STR trail {};
    s_Overload lbl = (label ? GET(module_0, ctx_0, label) : s_Overload{});
    fu_STR& name = lbl.name;
    const int blockvals0 = _current_fn_0.blockvals.size();
    fu_DEFER(_current_fn_0.blockvals.shrink(blockvals0));
    if (type && !is_void(type))
    {
        bool ptrflip = false;
        fu_STR annot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, 0);
        fu_STR id = emitTEMPVAR(_current_fn_0, annot, ptrflip, (name ? (("L_"_fu + name) + "_v"_fu) : fu_STR{}));
        _current_fn_0.blockvals += s_cg_Blockval { int(label.index), bool(ptrflip) };
        fu_STR out = (ptrflip ? ("*"_fu + id) : cgMove(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, id));
        close = (("}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    int count {};
    fu_STR src = cgStatements(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, nodes, count, trail);
    if (lbl.name)
    {
        fu_STR prefixed_id = ("L_"_fu + name);
        if (fu::has(src, (("goto "_fu + prefixed_id) + ";"_fu)))
        {
            close = (((("  } "_fu + prefixed_id) + ":;"_fu) + indent0) + close);
            open = "{ {"_fu;
        };
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || ((nodes[0].kind != "jump"_fu) && (nodes[0].kind != "call"_fu)))
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);

    _indent_0 = indent0;
    return src;
}

static fu_STR cgBlock(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    fu_VEC<s_SolvedNode> items = ((node.kind == "block"_fu) ? fu_VEC<s_SolvedNode>(node.items) : fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node) } });
    const s_Target& label = ((node.kind == "block"_fu) ? node.target : fu::Default<s_Target>::value);
    if (mode & M_LOOP_BODY)
        _current_fn_0.can_cont = label.index;

    bool expr = !(mode & M_STMT);
    if (expr && !label && exprOK(items))
        return cgComma(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items);

    return cgBlock(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, !!(mode & M_OPT_CURLIES), expr, label, (expr ? node.type : fu::Default<s_Type>::value));
}

static void ensureFwdDecl(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_Target& target)
{
    s_Overload overload = GET(module_0, ctx_0, target);
    if ((overload.kind != "fn"_fu) || (overload.name == "main"_fu))
        return;

    if (!add_once(_ffwd_0, target))
        return;

    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), s_BitSet{}, 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, 0, 0 };
    fu_DEFER(std::swap(_current_fn_0, current_fn0));
    std::swap(_current_fn_0, current_fn0);
    fu_STR& id = (overload.name ? overload.name : fail(fu_STR{}));
    s_Type& ret = (overload.type ? overload.type : fail(fu_STR{}));
    fu_STR annot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, ret, M_RETVAL);
    const int isOp = (overload.flags & F_OPERATOR);
    fu_STR name = (isOp ? ("operator"_fu + valid_operator(id)) : fu_STR(id));
    fu_STR linkage = (((is_never(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!(overload.flags & F_PUB) ? "static "_fu : fu_STR{}));
    fu_STR src = ((((linkage + annot) + " "_fu) + name) + "("_fu);
    int needComma = 0;
    for (int i = 0; i < overload.closes_over.size(); i++)
    {
        if (needComma++)
            src += ", "_fu;

        s_Overload o = GET(module_0, ctx_0, s_Target { int(module_0.modid), int(overload.closes_over[i]) });
        src += typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, o.type, 0);
    };
    fu_VEC<s_Argument>& args = overload.args;
    for (int i = 0; i < args.size(); i++)
    {
        if (needComma++)
            src += ", "_fu;

        src += typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, args[i].type, (M_ARGUMENT | M_FWDECL));
    };
    src += ");\n"_fu;
    _ffwd_src_0 += src;
    return;
}

static std::byte hex(const uint32_t x)
{
    return ((x < 10u) ? std::byte((uint32_t(std::byte('0')) + x)) : std::byte((uint32_t(std::byte('A')) + x)));
}

static fu_STR valid_identifier(fu_STR&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const std::byte c = str[i];
        if (((c >= std::byte('a')) && (c <= std::byte('z'))) || ((c >= std::byte('A')) && (c <= std::byte('Z'))) || ((c >= std::byte('0')) && (c <= std::byte('9'))) || (c == std::byte('_')))
            continue;

        const uint32_t c_1 = uint32_t(c);
        const uint32_t b0 = ((c_1 >> 0u) & 0xfu);
        const uint32_t b1 = ((c_1 >> 4u) & 0xfu);
        str = ((((fu::get_view_mut(str, 0, i) + std::byte('b')) + hex(b0)) + hex(b1)) + fu::get_view_mut(str, (i + 1), str.size()));
    };
    return static_cast<fu_STR&&>(str);
}

static fu_STR cgFn(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& fn, const int mode)
{
    fu_STR indent0 { _indent_0 };
    const fu_VEC<s_SolvedNode>& items = fn.items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    s_Overload overload = GET(module_0, ctx_0, fn.target);
    fu_STR& id = overload.name;
    if (!(overload.status & SS_FINALIZED))
        fail(("cgFn: fn not finalized: "_fu + id));

    if (!body)
    {
        if (!(overload.kind == "__native"_fu))
            fail(("cgFn: no body on non-native: "_fu + id));

        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
    };
    _indent_0 = "\n"_fu;
    fu_STR src {};

    {
        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(fn.target), s_BitSet{}, 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, 0, 0 };
        fu_DEFER(std::swap(_current_fn_0, current_fn0));
        std::swap(_current_fn_0, current_fn0);
        src += cgFnSignature(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, fn);
        src += cgBlock(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, body, M_STMT);
    };
    if (fu::has(_fdef_0, (id ? id : fail(fu_STR{}))))
        ensureFwdDecl(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _tdef_0, _current_fn_0, fn.target);

    _indent_0 = indent0;
    fu_STR dedupe = ((fn.flags & F_PUB) && (fn.flags & F_TEMPLATE) ? valid_identifier(fu_STR(overload.name)) : fu_STR{});
    if (dedupe)
        _fdef_0 += ((("\n                                #ifndef DEFt_"_fu + dedupe) + "\n                                #define DEFt_"_fu) + dedupe);

    _fdef_0 += (("\n"_fu + src) + "\n"_fu);
    if (dedupe)
        _fdef_0 += "                                #endif\n"_fu;

    return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
}

static void ensureFnDef(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_Target& target, const s_Overload& overload)
{
    if (!(target.modid == module_0.modid))
        fail((((((((("ensureFnDef: fndef is needed outside of its original scope: "_fu + target.modid) + " vs "_fu) + module_0.modid) + ": `"_fu) + overload.kind) + " "_fu) + overload.name) + "`."_fu));

    if (!add_once(_idef_0, target.index))
        return;

    const s_SolvedNode& node = overload.solved;
    if (!(node.kind == "fn"_fu))
        fail("ensureFnDef non-fn"_fu);

    cgFn(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, M_STMT);
}

static fu_STR via(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, s_TEMPVAR& tv, const s_Type& type, const fu_STR& expr)
{
    if (!tv.id)
        tv.id = emitTEMPVAR(_current_fn_0, (tv.annot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, 0)), tv.ptrflip, fu_STR{});

    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;

    if (type.vtype.quals & q_trivial)
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;

    return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;
}

static bool isFieldChain(const s_Module& module_0, const s_Context& ctx_0, const s_SolvedNode& node)
{
    if (node.kind != "call"_fu)
        return false;

    s_Overload t = GET(module_0, ctx_0, node.target);
    if (t.kind == "field"_fu)
        return isFieldChain(module_0, ctx_0, only_XB32(node.items));

    if (t.kind == "var"_fu)
        return true;

    return false;
}

static void cgAppend_visit(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const fu_STR& canon, const fu_STR& into, const s_SolvedNode& stuff, fu_STR& src)
{
    if ((stuff.kind != "call"_fu) || (stuff.value != "~"_fu) || (stuff.type.vtype.canon != canon) || (stuff.items.size() != 2))
    {
        fu_STR val = cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, stuff, 0);
        if (src.size() > 1)
            src += ", "_fu;

        src += ((into + " += "_fu) + val);
    }
    else
    {
        cgAppend_visit(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, canon, into, stuff.items[0], src);
        cgAppend_visit(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, canon, into, stuff.items[1], src);
    };
}

static fu_STR cgAppend(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const fu_STR& into)
{
    fu_STR src = "("_fu;
    cgAppend_visit(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node.type.vtype.canon, into, node.items[1], src);
    src += ")"_fu;
    return src;
}

static fu_STR cgPrint(fu_MAP<fu_STR, fu_STR>& _libs_0, const fu_VEC<fu_STR>& items)
{
    include(_libs_0, "<iostream>"_fu);
    fu_STR src = "(std::cout"_fu;
    for (int i = 0; i < items.size(); i++)
        src += (" << "_fu + items[i]);

    src += " << '\\n')"_fu;
    return src;
}

static fu_STR cgCall(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    s_Overload _0 {};
    s_Overload target = ((_0 = GET(module_0, ctx_0, node.target)) ? static_cast<s_Overload&&>(_0) : fail(fu_STR{}));
    fu_VEC<fu_STR> _items {};
    const fu_VEC<s_SolvedNode>& items = node.items;
    if ((target.kind == "__native"_fu) && target.tEmplate.node.items)
    {
        fu_STR id { target.tEmplate.node.items[0].value };
        if (target.tEmplate.node.items.size() > 1)
        {
            include(_libs_0, id);
            id = target.tEmplate.node.items[1].value;
        };
        if (id.mutref(0) == std::byte('.'))
        {
            if (items.size() > 1)
                return (((ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0) + id) + "("_fu) + REST(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1)) + ")"_fu;

            return ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0) + id;
        };
        if (items)
        {
            if (hasIdentifierChars(id))
                return ((id + "("_fu) + REST(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0)) + ")"_fu;

            if (binSkipParens(id, mode))
                return (((ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0) + " "_fu) + id) + " "_fu) + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1);

            return ((((("("_fu + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0)) + " "_fu) + id) + " "_fu) + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1)) + ")"_fu;
        };
        return id;
    };
    if (target.kind == "type"_fu)
    {
        if (!items)
            return cgDefault(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, target.type);

        if (!(isStruct(target.type)))
            fail("cgCall: defctor/type not a struct."_fu);

        fu_STR args = REST(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0);
        return ((typeAnnotBase(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, target.type) + " { "_fu) + args) + " }"_fu;
    };
    fu_STR& id = (target.name ? target.name : fail(fu_STR{}));
    if (target.kind == "var"_fu)
    {
        if (target.flags & F_GLOBAL)
        {
            if (node.target.modid != module_0.modid)
                cgForeignGlobal(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node.target);

            return ID(id);
        };
        return localID(module_0, _current_fn_0, node.target, target);
    };
    if (target.kind == "field"_fu)
        return (ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0) + "."_fu) + ID(id);

    if (node.target.modid && (target.kind == "fn"_fu))
    {
        if ((target.solved.flags & F_TEMPLATE) || !(target.solved.flags & F_PUB))
            ensureFnDef(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node.target, target);
        else if (node.target.modid != module_0.modid)
            ensureFwdDecl(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _tdef_0, _current_fn_0, node.target);

    };
    if (target.flags & F_OPERATOR)
    {
        const s_SolvedNode* _1;
        const s_SolvedNode& head = (*(_1 = &(items[0])) ? *_1 : fail(fu_STR{}));
        if (items.size() == 1)
            return ((node.flags & F_POSTFIX) ? (ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0) + valid_operator(id)) : (valid_operator(id) + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0)));

        if (items.size() == 2)
        {
            if (id == "[]"_fu)
            {
                if (is_mutref(node.type))
                    return ((ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0) + ".mutref("_fu) + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1)) + ")"_fu;

                return ((ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0) + "["_fu) + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1)) + "]"_fu;
            };
            if (id == "="_fu)
            {
                if ((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2))
                {
                    const s_SolvedNode* _2;
                    if (type_isMap((*(_2 = &(head.items[0])) ? *_2 : fail(fu_STR{})).type))
                    {
                        const s_SolvedNode* _3;
                        const s_SolvedNode* _4;
                        return ((((("("_fu + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, (*(_3 = &(head.items[0])) ? *_3 : fail(fu_STR{})), 0)) + ".upsert("_fu) + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, (*(_4 = &(head.items[1])) ? *_4 : fail(fu_STR{})), 0)) + ") = "_fu) + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1)) + ")"_fu;
                    };
                };
            };
            if (id == "||="_fu)
            {
                fu_STR arg0 {};
                if ((head.kind == "call"_fu) && (head.value == "[]"_fu) && (head.items.size() == 2))
                {
                    const s_SolvedNode* _5;
                    if (type_isMap((*(_5 = &(head.items[0])) ? *_5 : fail(fu_STR{})).type))
                    {
                        const s_SolvedNode* _6;
                        const s_SolvedNode* _7;
                        arg0 = (((cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, (*(_6 = &(head.items[0])) ? *_6 : fail(fu_STR{})), 0) + ".upsert("_fu) + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, (*(_7 = &(head.items[1])) ? *_7 : fail(fu_STR{})), 0)) + ")"_fu);
                    };
                };
                fu_STR* _8;
                (*(_8 = &(arg0)) ? *_8 : *_8 = ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0));
                s_TEMPVAR tv {};
                fu_STR condcons = via(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, tv, head.type, arg0);
                fu_STR alt = (tv.ptrflip ? ("*"_fu + tv.id) : fu_STR((tv.id ? tv.id : arg0)));
                return (((("("_fu + condcons) + alt) + " = "_fu) + ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1)) + ")"_fu;
            };
            if ((id == "~="_fu) && type_isArray(head.type) && isFieldChain(module_0, ctx_0, node.items[0]) && (node.items[1].value == "~"_fu) && (node.items[1].type.vtype.canon == head.type.vtype.canon))
                return cgAppend(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0));

            fu_STR arg0 = ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0);
            fu_STR arg1 {};
            if (((id == "="_fu) || (id == "||="_fu) || (id == "&&="_fu)) && (items[1].kind == "copy"_fu))
                arg1 = cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, only_XB32(items[1].items), 0);

            fu_STR op = valid_operator(id);
            if (binSkipParens(op, mode))
                return (((arg0 + " "_fu) + op) + " "_fu) + (arg1 ? fu_STR(arg1) : ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1));
            else
                return ((((("("_fu + arg0) + " "_fu) + op) + " "_fu) + (arg1 ? fu_STR(arg1) : ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 1))) + ")"_fu;

        };
    };
    if ((id == "CLONE"_fu) && (items.size() == 1))
        return cgClone(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node.type, ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0));

    if ((id == "STEAL"_fu) && (items.size() == 1))
        return cgMove(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node.type, ARG(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0));

    if (id == "println"_fu)
        return cgPrint(_libs_0, cgNodes(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0, fu_STR{}));

    if (!(id != "__native"_fu))
        fu_ASSERT();

    fu_STR closure {};
    if (target.closes_over)
    {
        for (int i = 0; i < target.closes_over.size(); i++)
        {
            if (i)
                closure += ", "_fu;

            const s_Target t = s_Target { int(module_0.modid), int(target.closes_over[i]) };
            s_Overload o = GET(module_0, ctx_0, t);
            closure += localID(module_0, _current_fn_0, t, o);
        };
        if (items)
            closure += ", "_fu;

    };
    return (((ID(id) + "("_fu) + closure) + REST(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items, 0)) + ")"_fu;
}

                                #ifndef DEF_q_unsigned
                                #define DEF_q_unsigned
inline const int q_unsigned = (1 << 8);
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 9);
                                #endif

                                #ifndef DEF_q_integral
                                #define DEF_q_integral
inline const int q_integral = (1 << 6);
                                #endif

static fu_STR cgLiteral(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node)
{
    fu_STR src { node.value };
    if ((node.type.vtype.quals & q_unsigned) && !fu::has(src, std::byte('u')))
        src += std::byte('u');

    if (node.type.vtype.quals & q_floating_pt)
    {
        if (!fu::has(src, std::byte('.')))
            src += ".0"_fu;

        if (node.type.vtype.canon == "f32"_fu)
        {
            if (fu::has(src, std::byte('x')))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (node.type.vtype.canon != "f64"_fu)
            fu_ASSERT();

    };
    if (fu::lmatch(src, "0o"_fu))
        src.splice(1, 1);

    if (src.size() > 16)
    {
        s_Intlit parse = Intlit(src);
        if (parse.negative && (parse.absval == 0x8000000000000000ull))
            return "(-9223372036854775807-1)"_fu;

    };
    if ((node.type.vtype.quals & q_integral) && (node.type.vtype.canon != "u32"_fu) && (node.type.vtype.canon != "i32"_fu))
    {
        if ((node.type.vtype.canon == "u64"_fu) || (node.type.vtype.canon == "i64"_fu))
        {
            if (!fu::has(src, std::byte('l')))
                return src + "ll"_fu;

        }
        else
            return ((typeAnnotBase(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node.type) + "("_fu) + src) + ")"_fu;

    };
    return src;
}

static fu_STR cgCharLiteral(const s_SolvedNode& node)
{
    fu_STR esc {};
    for (int i = 0; i < node.value.size(); i++)
    {
        const std::byte c = node.value[i];
        if (c == std::byte('\n'))
            esc += "\\n"_fu;
        else if (c == std::byte('\r'))
            esc += "\\r"_fu;
        else if (c == std::byte('\t'))
            esc += "\\t"_fu;
        else if (c == std::byte('\v'))
            esc += "\\v"_fu;
        else if (c == std::byte('\\'))
            esc += "\\\\"_fu;
        else if (c == std::byte('\''))
            esc += "\\'"_fu;
        else
            esc += c;

    };
    return ("std::byte('"_fu + esc) + "')"_fu;
}

static fu_STR cgStringLiteral(fu_MAP<fu_STR, fu_STR>& _libs_0, const s_SolvedNode& node)
{
    annotateString(_libs_0);
    fu_STR esc {};
    for (int i = 0; i < node.value.size(); i++)
    {
        const std::byte c = node.value[i];
        if (c == std::byte('\n'))
            esc += "\\n"_fu;
        else if (c == std::byte('\r'))
            esc += "\\r"_fu;
        else if (c == std::byte('\t'))
            esc += "\\t"_fu;
        else if (c == std::byte('\v'))
            esc += "\\v"_fu;
        else if (c == std::byte('\\'))
            esc += "\\\\"_fu;
        else if (c == std::byte('"'))
            esc += "\\\""_fu;
        else
            esc += c;

    };
    return ("\""_fu + esc) + "\"_fu"_fu;
}

static fu_STR cgArrayLiteral(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    if (node.target)
        return cgCall(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    fu_VEC<fu_STR> items = cgNodes(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node.items, 0, fu_STR{});
    if (!items.size())
        return cgDefault(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node.type);

    s_Type _0 {};
    s_Type itemType = ((_0 = tryClear_array(node.type)) ? static_cast<s_Type&&>(_0) : fail(fu_STR{}));
    fu_STR itemAnnot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, itemType, 0);
    fu_STR arrayAnnot = typeAnnot(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node.type, 0);
    return ((((((arrayAnnot + " { "_fu) + arrayAnnot) + "::INIT<"_fu) + items.size()) + "> { "_fu) + fu::join(items, ", "_fu)) + " } }"_fu;
}

static fu_STR cgDefaultInit(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    return cgArrayLiteral(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);
}

static bool supportsNRVO(s_cg_CurrentFn& _current_fn_0, const s_Overload& o)
{
    return (o.kind == "var"_fu) && !(o.flags & F_ARG) && (o.local_of == _current_fn_0.target.index);
}

static fu_STR cgMoveOrClone(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_STR& _tdef_0, s_cg_CurrentFn& _current_fn_0, const fu_STR& kind, const s_Type& type, const fu_STR& src)
{
    if (kind == "move"_fu)
        return cgMove(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, src);

    return cgClone(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type, src);
}

static fu_STR cgMoveOrClone(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    const s_SolvedNode& expr = only_XB32(node.items);
    if ((mode & M_RETURN) && (node.kind == "move"_fu))
    {
        const bool nrvo = ((expr.kind == "call"_fu) && (expr.items.size() == 0) && supportsNRVO(_current_fn_0, GET(module_0, ctx_0, expr.target)));
        if (nrvo)
            return cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, expr, 0);

    };
    return cgMoveOrClone(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node.kind, node.type, cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, expr, 0));
}

static fu_STR blockWrapSubstatement(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    return cgBlock(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, ((M_STMT | M_OPT_CURLIES) | mode));
}

static fu_STR blockWrap_unlessIf(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node_1)
{
    return (((node_1.kind == "if"_fu) || (node_1.kind == "and"_fu)) ? (" "_fu + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node_1, M_STMT)) : blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node_1, 0));
}

static fu_STR cgIf(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    const s_SolvedNode& n0 = node.items[0];
    const s_SolvedNode& n1 = node.items[1];
    const s_SolvedNode& n2 = node.items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n0, (M_RETBOOL | (stmt ? M_PARENS : fu::Default<int>::value))) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n1, 0) : cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n1, 0)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n2) : cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n2, 0)) : fu_STR{});
    if (stmt)
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((_indent_0 + "else"_fu) + alt) : fu_STR{});

    return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;
}

static void cgAndOr_concat(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, fu_STR& src, const fu_STR& op, fu::view<s_SolvedNode> items, const bool parens)
{
    const int mode = (M_RETBOOL | (parens && (items.size() == 1) ? M_PARENS : fu::Default<int>::value));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        src += cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[i], mode);
    };
}

static fu_STR via(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr)
{
    if (isFieldChain(module_0, ctx_0, expr))
    {
        fu_STR trivial = cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, expr, 0);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    };
    if ((expr.kind == "copy"_fu) || (expr.kind == "move"_fu))
    {
        const fu_STR& kind = expr.kind;
        const s_SolvedNode& expr_1 = only_XB32(expr.items);
        if (isFieldChain(module_0, ctx_0, expr_1))
        {
            fu_STR trivial = cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, expr_1, 0);
            return ((trivial + " ? "_fu) + cgMoveOrClone(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, kind, type, trivial)) + " : "_fu;
        };
    };
    return via(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, tv, type, cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, expr, 0));
}

static fu_STR cgOr(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    const s_Type& type = node.type;
    const fu_VEC<s_SolvedNode>& items = node.items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        fu_STR src = "if (!("_fu;
        cgAndOr_concat(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true);
        src += "))"_fu;
        src += blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[(items.size() - 1)], 0);
        return src;
    };
    fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (is_bool(type))
        cgAndOr_concat(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, src, " || "_fu, items, true);
    else
    {
        s_TEMPVAR tv {};
        for (int i = 0; i < (items.size() - 1); i++)
        {
            const s_SolvedNode* _0;
            const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : fail(fu_STR{}));
            s_SolvedNode tail { item };
            if (item.kind == "and"_fu)
            {
                const fu_VEC<s_SolvedNode>& items_1 = item.items;
                const s_SolvedNode* _1;
                tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : fail(fu_STR{}));
                cgAndOr_concat(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), bool{});
                src += " && "_fu;
            };
            src += via(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, tv, type, tail);
        };
        const s_SolvedNode* _2;
        const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : fail(fu_STR{}));
        src += cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, tail, 0);
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return src;
}

static fu_STR cgAnd(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, fu::view<s_SolvedNode> items, const s_Type& type, const int mode)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        fu_STR src = "if ("_fu;
        cgAndOr_concat(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true);
        src += ")"_fu;
        src += blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[(items.size() - 1)], 0);
        return src;
    };
    fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (is_bool(type))
        cgAndOr_concat(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, src, " && "_fu, items, true);
    else
    {
        s_TEMPVAR tv {};
        if (is_mutref(type))
        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, tv, type, item));
                else
                    src += cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, item, 0);

            };
        }
        else
        {
            const int N = items.size();
            const bool retSecondLast = is_never(items[(N - 1)].type);
            const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
            cgAndOr_concat(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, src, " && "_fu, fu::get_view(items, 0, condEnd), bool{});
            if (retSecondLast)
            {
                if (condEnd)
                    src += " && "_fu;

                src += ("!"_fu + via(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, tv, type, items[(N - 2)]));
                src += cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[(N - 1)], 0);
            }
            else
            {
                src += (" ? "_fu + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[(N - 1)], 0));
                src += (" : "_fu + cgDefault(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, type));
            };
        };
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return src;
}

static fu_STR cgAnd(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    return cgAnd(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node.items, node.type, mode);
}

static fu_STR cgMain(fu_MAP<fu_STR, fu_STR>& _libs_0, int& _hasMain_0)
{
    if (!_hasMain_0)
        return fu_STR{};

    if (_hasMain_0 != 2)
        return "\n\nint main() { return fu_MAIN(); }\n"_fu;

    annotateString(_libs_0);
    return (((((((("\n\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));"_fu) + "\n}\n"_fu;
}

static fu_STR collectDedupes(fu_VEC<fu_STR>&& values, const bool leadingNewline)
{
    if (!values.size())
        return fu_STR{};

    fu_STR out = (leadingNewline ? "\n"_fu : fu_STR{});
    fu::sort(values);
    for (int i = 0; i < values.size(); i++)
        out += values.mutref(i);

    return out;
}

static fu_STR collectDedupes(const fu_MAP<fu_STR, fu_STR>& dedupes, const bool leadingNewline)
{
    return collectDedupes(fu_VEC<fu_STR>(dedupes.m_values), leadingNewline);
}

static fu_STR cgRoot(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& root_1)
{
    int count {};
    fu_STR src = cgStatements(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, root_1.items, count, fu_STR{});
    fu_STR main = cgMain(_libs_0, _hasMain_0);
    fu_STR header = ((((collectDedupes(_libs_0, bool{}) + collectDedupes(_tfwd_0, true)) + collectDedupes(fu_VEC<fu_STR>(_ffwd_src_0), true)) + _tdef_0) + (_fdef_0 ? (("\n#ifndef FU_NO_FDEFs\n"_fu + _fdef_0) + "\n#endif\n"_fu) : fu_STR{}));
    return (header + src) + main;
}

static fu_STR cgFnDef(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& fndef, const int mode)
{
    s_Overload o = GET(module_0, ctx_0, fndef.target);
    s_SolvedNode& n = o.solved;
    if (!(n.flags & F_PUB))
        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);

    if (!(n.kind == "fn"_fu))
        fail("cgFnDef non-fn"_fu);

    return cgFn(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n, mode);
}

static fu_STR cgEmpty(const int mode)
{
    return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
}

static int left(const s_Target& target)
{
    return target.modid;
}

static int right(const s_Target& target)
{
    return target.index;
}

static fu_STR cgJump(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node)
{
    const int dest_idx = left(node.target);
    const int expr_idx = right(node.target);
    const bool use_return = (dest_idx == _current_fn_0.target.index);
    s_Overload dest = GET(module_0, ctx_0, s_Target { int(module_0.modid), int(dest_idx) });
    if (expr_idx)
    {
        s_Overload o = GET(module_0, ctx_0, s_Target { int(module_0.modid), int(expr_idx) });
        s_SolvedNode& head = (o.solved ? o.solved : fail(fu_STR{}));
        if (!use_return)
        {
            bool hasval = false;
            bool ptrflip = false;
            for (int i = _current_fn_0.blockvals.size(); i-- > 0; )
            {
                const s_cg_Blockval bv { _current_fn_0.blockvals[i] };
                if (bv.index == dest_idx)
                {
                    hasval = true;
                    ptrflip = bv.ptrflip;
                    break;
                };
            };
            fu_STR assign = (hasval ? (("L_"_fu + dest.name) + "_v = "_fu) : fu_STR{});
            fu_STR value = cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, head, (!assign ? M_STMT : fu::Default<int>::value));
            if (ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            return (((("{ "_fu + assign) + value) + "; goto L_"_fu) + dest.name) + "; }"_fu;
        };
        if (is_never(head.type))
        {
            if (is_never(dest.type))
                return cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, head, M_STMT);

            if (is_void(dest.type))
                return "return (void) "_fu + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, head, M_RETURN);

        };
        return "return "_fu + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, head, (M_PARENS | M_RETURN));
    };
    if (use_return)
        return "return"_fu;

    if (dest_idx == _current_fn_0.can_break)
        return "break"_fu;

    if (dest_idx == _current_fn_0.can_cont)
        return "continue"_fu;

    return "goto L_"_fu + dest.name;
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline const int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline const int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline const int LOOP_BODY = 2;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline const int LOOP_POST_COND = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline const int LOOP_POST = 4;
                                #endif

static fu_STR cgLoop(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node)
{
    const int can_cont0 = _current_fn_0.can_cont;
    const int can_break0 = _current_fn_0.can_break;
    fu_DEFER(
    {
        _current_fn_0.can_cont = can_cont0;
        _current_fn_0.can_break = can_break0;
    });
    _current_fn_0.can_cont = 0;
    _current_fn_0.can_break = 0;
    const fu_VEC<s_SolvedNode>& items = node.items;
    const s_SolvedNode& n_init = items[LOOP_INIT];
    const s_SolvedNode& n_cond = items[LOOP_COND];
    const s_SolvedNode& n_body = items[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
    const s_SolvedNode& n_post = items[LOOP_POST];
    fu_STR init = (n_init ? cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n_init, M_STMT) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n_cond, (M_RETBOOL | M_PARENS)) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n_pcnd, M_RETBOOL) : fu_STR{});
    fu_STR post = (n_post ? cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n_post, M_STMT) : fu_STR{});
    const s_Target& label = node.target;
    _current_fn_0.can_break = label.index;
    fu_STR body = (n_body ? blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, n_body, M_LOOP_BODY) : fu_STR{});
    fu_STR breakLabel {};
    s_Overload lbl = (label ? GET(module_0, ctx_0, label) : s_Overload{});
    fu_STR& name = lbl.name;
    if (body && name)
    {
        fu_STR brk = ("L_"_fu + name);
        if (fu::has(body, (("goto "_fu + brk) + ";"_fu)))
            breakLabel = ((" "_fu + brk) + ":;"_fu);

    };
    if (pcnd)
    {
        if (init || post || cond)
            fail("TODO extended loop."_fu);

        return ((((("do"_fu + body) + _indent_0) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel;
    };
    if (init || post || !cond)
        return ((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;

    return ((("while ("_fu + cond) + ")"_fu) + body) + breakLabel;
}

static fu_STR cgTryCatch(fu_STR& _indent_0, const fu_STR& tRy, const fu_STR& err, const fu_STR& cAtch)
{
    return ((((((((((((((((_indent_0 + "try"_fu) + _indent_0) + "{"_fu) + tRy) + _indent_0) + "}"_fu) + _indent_0) + "catch (const std::exception& o_0)"_fu) + _indent_0) + "{"_fu) + _indent_0) + "    fu_STR "_fu) + ID(err)) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + _indent_0) + "}\n"_fu;
}

static fu_STR cgTryCatch(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node)
{
    const fu_VEC<s_SolvedNode>& items = node.items;
    fu_STR tRy = blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[0], 0);
    fu_STR err = GET(module_0, ctx_0, items[1].target).name;
    fu_STR cAtch = blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[2], 0);
    return cgTryCatch(_indent_0, tRy, err, cAtch);
}

static fu_STR cgCatch(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node)
{
    const fu_VEC<s_SolvedNode>& items = node.items;
    const s_SolvedNode& var_name = items[0];
    fu_STR try_init = (cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[0].items[LET_INIT], 0) + ";"_fu);
    fu_STR err = GET(module_0, ctx_0, items[1].target).name;
    fu_STR cAtch = blockWrapSubstatement(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, items[2], 0);
    fu_STR vardecl = (!is_never(var_name.type) ? (binding(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, var_name, false, true) + " = {};"_fu) : fu_STR{});
    return vardecl + cgTryCatch(_indent_0, (is_never(var_name.type) ? ((_indent_0 + "    "_fu) + try_init) : ((((_indent_0 + "    "_fu) + var_name.value) + " = "_fu) + try_init)), err, cAtch);
}

static fu_STR cgDefer(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node)
{
    include(_libs_0, "<fu/defer.h>"_fu);
    fu_STR which = ((node.value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((node.value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, only_XB32(node.items), M_STMT)) + ")"_fu;
}

static fu_STR cgNode(const s_Module& module_0, const s_Context& ctx_0, fu_MAP<fu_STR, fu_STR>& _libs_0, fu_MAP<fu_STR, fu_STR>& _tfwd_0, fu_VEC<s_BitSet>& _ffwd_0, fu_VEC<fu_STR>& _ffwd_src_0, s_BitSet& _idef_0, fu_STR& _tdef_0, fu_STR& _fdef_0, fu_STR& _indent_0, int& _hasMain_0, s_cg_CurrentFn& _current_fn_0, const s_SolvedNode& node, const int mode)
{
    const fu_STR& k = node.kind;
    if (k == "call"_fu)
        return cgCall(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "int"_fu)
        return cgLiteral(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node);

    if (k == "real"_fu)
        return cgLiteral(module_0, ctx_0, _libs_0, _tfwd_0, _tdef_0, _current_fn_0, node);

    if (k == "char"_fu)
        return cgCharLiteral(node);

    if (k == "str"_fu)
        return cgStringLiteral(_libs_0, node);

    if (k == "arrlit"_fu)
        return cgArrayLiteral(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "definit"_fu)
        return cgDefaultInit(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "copy"_fu)
        return cgMoveOrClone(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "move"_fu)
        return cgMoveOrClone(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "nrvo"_fu)
        return cgMoveOrClone(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "if"_fu)
        return cgIf(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "or"_fu)
        return cgOr(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "and"_fu)
        return cgAnd(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "let"_fu)
        return cgLet(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node);

    if (k == "root"_fu)
        return cgRoot(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node);

    if (k == "block"_fu)
        return cgBlock(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "argid"_fu)
        return cgComma(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node.items);

    if (k == "fndef"_fu)
        return cgFnDef(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "struct"_fu)
        return cgEmpty(mode);

    if (k == "empty"_fu)
        return cgEmpty(mode);

    if (!(mode & M_STMT))
        return cgBlock(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node, mode);

    if (k == "jump"_fu)
        return cgJump(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node);

    if (k == "loop"_fu)
        return cgLoop(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node);

    if (k == "try"_fu)
        return cgTryCatch(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node);

    if (k == "catch"_fu)
        return cgCatch(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node);

    if (k == "defer"_fu)
        return cgDefer(module_0, ctx_0, _libs_0, _tfwd_0, _ffwd_0, _ffwd_src_0, _idef_0, _tdef_0, _fdef_0, _indent_0, _hasMain_0, _current_fn_0, node);

    fail(("TODO: "_fu + k));
}

fu_STR cpp_codegen(const s_SolvedNode& root, const s_Module& module, const s_Context& ctx)
{
    fu_MAP<fu_STR, fu_STR> _libs {};
    fu_MAP<fu_STR, fu_STR> _tfwd {};
    fu_VEC<s_BitSet> _ffwd {};
    fu_VEC<fu_STR> _ffwd_src {};
    s_BitSet _idef {};
    fu_STR _tdef {};
    fu_STR _fdef {};
    fu_STR _indent = "\n"_fu;
    int _hasMain {};
    s_cg_CurrentFn _current_fn {};
    if (!(root.kind == "root"_fu))
        fail(fu_STR{});

    fu_STR src = cgNode(module, ctx, _libs, _tfwd, _ffwd, _ffwd_src, _idef, _tdef, _fdef, _indent, _hasMain, _current_fn, root, 0);
    return src;
}

#endif
