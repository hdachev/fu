
#include <fu/default.h>
#include <fu/init_priority.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Extended;
struct s_Helpers;
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
struct s_RWRanges;
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

fu_STR createStructCanon_b7S4k2GX(int, int, fu::view<char>);

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
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
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

#ifndef FU_NO_FDEFs

                                #ifndef DEF_SS_LAZY
                                #define DEF_SS_LAZY
inline constexpr unsigned SS_LAZY = (0x1u << 0u);
                                #endif

                                #ifndef DEF_SS_DID_START
                                #define DEF_SS_DID_START
inline constexpr unsigned SS_DID_START = (0x1u << 1u);
                                #endif

                                #ifndef DEF_SS_DIRTY
                                #define DEF_SS_DIRTY
inline constexpr unsigned SS_DIRTY = (0x1u << 2u);
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_SS_UPDATED
                                #define DEF_SS_UPDATED
inline constexpr unsigned SS_UPDATED = (0x1u << 4u);
                                #endif

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

                                #ifndef DEF_HM_CanBreak
                                #define DEF_HM_CanBreak
extern const short HM_CanBreak = short((short(1) << short(0)));
                                #endif

                                #ifndef DEF_HM_CanReturn
                                #define DEF_HM_CanReturn
extern const short HM_CanReturn = short((short(1) << short(1)));
                                #endif

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
extern const short HM_Anon = short((short(1) << short(2)));
                                #endif

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
extern const short HM_Function = short((short(1) << short(3)));
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
extern const short HM_Lambda = short((short(1) << short(4)));
                                #endif

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
extern const short HM_Struct = short((short(1) << short(5)));
                                #endif

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
extern const short HM_LabelUsed = short((short(1) << short(6)));
                                #endif

                                #ifndef DEF_HM_KeepBlock
                                #define DEF_HM_KeepBlock
extern const short HM_KeepBlock = short((short(1) << short(7)));
                                #endif

s_Target target_e3eS1o6f(const s_ScopeItem& si)
{
    return s_Target { int(si.modid), int((si.packed & ~(0x1u << 31u))) };
}

bool ScopeItem_shadows_e3eS1o6f(const s_ScopeItem& si)
{
    return !!(si.packed & (0x1u << 31u));
}

s_ScopeItem ScopeItem_52GMMWwq(const fu_STR& id, const s_Target& target, const bool shadows)
{
    return s_ScopeItem { fu_STR(id), int(target.modid), (unsigned(target.index) | (shadows ? (0x1u << 31u) : unsigned{})) };
}

s_ScopeItem& target_TODOFIX_MVBFLiMx(s_ScopeItem& si, const s_Target& target)
{
    si.modid = target.modid;
    si.packed = unsigned(target.index);
    return si;
}

int MODID_6iVz8n7c(const s_Module& module)
{
    return module.modid;
}

                                #ifndef DEF_F_NOCOPY
                                #define DEF_F_NOCOPY
inline constexpr int F_NOCOPY = (1 << 12);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 1);
                                #endif

s_Type initStruct_afXwHDbN(const fu_STR& name, const int flags, const bool SELF_TEST, s_Module& module)
{
    if (!(fu::u8((fu::u8(fu::u8(name[0])) - fu::u8(fu::u8('0')))) > fu::u8(unsigned(9))))
        fu::fail((("Bad struct name, leading digit: `"_fu + name) + "`."_fu));

    const int index = module.out.types.size();
    fu_STR canon = createStructCanon_b7S4k2GX(module.modid, index, name);
    if (SELF_TEST)
    {
        for (int i = 0; i < module.out.types.size(); i++)
        {
            if (module.out.types[i].name == name)
                fu::fail((("initStruct/SELF_TEST duplicate: `"_fu + name) + "`."_fu));

        };
    };
    module.out.types += s_Struct { fu_STR(name), s_Target{}, fu_VEC<s_ScopeItem>{}, fu_VEC<int>{}, fu_VEC<s_Target>{}, 0, bool{} };
    const int specualtive_quals = (!(flags & F_NOCOPY) ? q_rx_copy : (*(const int*)fu::NIL));
    return s_Type { s_ValueType { int(specualtive_quals), fu_STR(canon) }, s_Lifetime{} };
}

s_Type despeculateStruct_c5L0jVYk(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_rx_copy;
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

s_Scope Scope_exports_lbD2qaob(const s_Scope& scope, const int modid, const fu_VEC<s_ScopeItem>& field_items)
{
    fu_VEC<s_ScopeItem> items { field_items };
    fu_VEC<s_ScopeItem> prv_items {};
    fu_VEC<s_Target> converts {};
    fu_VEC<s_Target> prv_converts {};
    for (int i = 0; i < scope.items.size(); i++)
    {
        const s_ScopeItem& item = scope.items[i];
        if (target_e3eS1o6f(item).modid == modid)
        {
            const s_Overload& overload = scope.overloads[(target_e3eS1o6f(item).index - 1)];
            ((overload.flags & F_PUB) ? items : prv_items) += s_ScopeItem(item);
        };
    };
    for (int i_1 = 0; i_1 < scope.converts.size(); i_1++)
    {
        const s_Target& item = scope.converts[i_1];
        if (item.modid == modid)
        {
            const s_Overload& overload = scope.overloads[(item.index - 1)];
            ((overload.flags & F_PUB) ? converts : prv_converts) += s_Target(item);
        };
    };
    const int pub_items = items.size();
    items += prv_items;
    const int pub_cnvrts = converts.size();
    converts += prv_converts;
    return s_Scope { fu_VEC<s_Overload>(scope.overloads), fu_VEC<s_Extended>(scope.extended), fu_VEC<s_ScopeItem>(items), fu_VEC<s_ScopeItem>{}, fu_VEC<int>{}, fu_VEC<int>{}, fu_VEC<s_Target>{}, fu_VEC<s_Target>(converts), int(pub_items), int(pub_cnvrts) };
}

static void nextSkip_3evJgP9V(fu::view<s_ScopeSkip> scope_skip, int& scope_iterator, int& skiptrap, fu::view<s_ScopeItem> items)
{
    for (int i = scope_skip.size(); i-- > 0; )
    {
        const s_ScopeSkip& ss = scope_skip[i];
        const int s1 = (ss.end - 1);
        if (scope_iterator > s1)
        {
            skiptrap = s1;
            break;
        };
        const int s0 = (ss.start - 1);
        if (scope_iterator > s0)
            scope_iterator = s0;

    };
    if ((skiptrap >= items.size()))
        fu::fail("Scope/search: scope_skip will jump past end of items."_fu);

}

s_Target search_qV63L7fS(fu::view<s_ScopeItem> items, const fu_STR& id, int& scope_iterator, fu::view<s_ScopeSkip> scope_skip, bool& shadows, const s_Target& dont_search_just_return, fu::view<s_Target> extra_items, fu::view<s_ScopeItem> field_items)
{
    if (dont_search_just_return)
    {
        if (scope_iterator)
            return s_Target{};

        scope_iterator--;
        return s_Target(dont_search_just_return);
    };
    const int START = ((items.size() + extra_items.size()) + field_items.size());
    if (!scope_iterator)
        scope_iterator = START;
    else if ((scope_iterator >= START))
        fu::fail("Scope/search: items shrunk while we iterated."_fu);

    int skiptrap = -1;
    scope_iterator--;
    nextSkip_3evJgP9V(scope_skip, scope_iterator, skiptrap, items);
    scope_iterator++;
    s_ScopeItem TODO_FIX = s_ScopeItem{};
    if (extra_items)
        TODO_FIX.id = id;

    while (scope_iterator-- > 0)
    {
        if (scope_iterator == skiptrap)
            nextSkip_3evJgP9V(scope_skip, scope_iterator, skiptrap, items);

        const s_ScopeItem& item = ((scope_iterator >= items.size()) ? ((scope_iterator >= (items.size() + extra_items.size())) ? field_items[((scope_iterator - items.size()) - extra_items.size())] : target_TODOFIX_MVBFLiMx(TODO_FIX, extra_items[(scope_iterator - items.size())])) : items[scope_iterator]);
        if (item.id == id)
        {
            if (!scope_iterator)
                scope_iterator = -1;

            shadows = ScopeItem_shadows_e3eS1o6f(item);
            return target_e3eS1o6f(item);
        };
    };
    return s_Target{};
}

s_ScopeMemo Scope_snap_xL8BbLPe(const s_Scope& scope, fu::view<s_Helpers> _helpers)
{
    return s_ScopeMemo { scope.items.size(), scope.implicits.size(), scope.imports.size(), scope.privates.size(), scope.usings.size(), scope.converts.size(), _helpers.size() };
}

void Scope_pop_GvGeMzm4(s_Scope& scope, const s_ScopeMemo& memo, fu_VEC<s_Helpers>& _helpers)
{
    scope.items.shrink(memo.items_len);
    scope.implicits.shrink(memo.implicits_len);
    scope.imports.shrink(memo.imports_len);
    scope.privates.shrink(memo.privates_len);
    scope.usings.shrink(memo.usings_len);
    scope.converts.shrink(memo.converts_len);
    _helpers.shrink(memo.helpers_len);
}

int cmp_x94nMfq3(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    int _0 {};
    return (_0 = (a.items_len - b.items_len)) ? _0 : (_0 = (a.implicits_len - b.implicits_len)) ? _0 : (_0 = (a.imports_len - b.imports_len)) ? _0 : (_0 = (a.privates_len - b.privates_len)) ? _0 : (_0 = (a.usings_len - b.usings_len)) ? _0 : (_0 = (a.converts_len - b.converts_len)) ? _0 : (a.helpers_len - b.helpers_len);
}

bool operator>(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp_x94nMfq3(a, b) > 0;
}

bool operator<(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp_x94nMfq3(a, b) < 0;
}

bool operator==(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp_x94nMfq3(a, b) == 0;
}

                                #ifndef DEFt_grow_if_oob_5lGz9ZEs
                                #define DEFt_grow_if_oob_5lGz9ZEs
inline s_Extended& grow_if_oob_5lGz9ZEs(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

s_Target Scope_create_ogkrG8By(s_Scope& scope, const fu_STR& kind, const fu_STR& name, const s_Type& type, const int flags, const unsigned status, const int nest, const s_Module& module)
{
    fu_VEC<s_Overload>& overloads = (nest ? grow_if_oob_5lGz9ZEs(scope.extended, nest).locals : scope.overloads);
    /*MOV*/ const s_Target target = s_Target { (nest ? -nest : int(MODID_6iVz8n7c(module))), (overloads.size() + 1) };
    s_Overload item {};
    item.name = name;
    item.kind = kind;
    item.flags = flags;
    item.type = type;
    item.status = status;
    overloads.push(s_Overload(item));
    return /*NRVO*/ target;
}

void Scope_set_dXgzwdCQ(fu_VEC<s_ScopeItem>& items, const fu_STR& id, const s_Target& target, const bool shadows)
{
    items.push(ScopeItem_52GMMWwq(id, target, shadows));
}

void Scope_set_CN2X3aNb(s_Scope& scope, const fu_STR& id, const s_Target& target, const bool shadows)
{
    Scope_set_dXgzwdCQ(scope.items, id, target, shadows);
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

s_Target Scope_Typedef_CUDLzI5V(s_Scope& scope, const fu_STR& id, const s_Type& type, const int flags, const fu_STR& name, const unsigned status, const s_Module& module)
{
    /*MOV*/ const s_Target target = Scope_create_ogkrG8By(scope, "type"_fu, name, type, flags, status, 0, module);
    if (id)
        Scope_set_CN2X3aNb(scope, id, target, !!(flags & F_SHADOW));

    return /*NRVO*/ target;
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8;
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16;
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32;
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64;
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16;
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32;
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64;
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32;
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64;
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void;
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never;
                                #endif

s_Scope listGlobals_6iVz8n7c(const s_Module& module)
{
    /*MOV*/ s_Scope scope {};
    Scope_Typedef_CUDLzI5V(scope, "i8"_fu, t_i8, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "i16"_fu, t_i16, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "i32"_fu, t_i32, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "i64"_fu, t_i64, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "u8"_fu, t_u8, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "u16"_fu, t_u16, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "u32"_fu, t_u32, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "u64"_fu, t_u64, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "f32"_fu, t_f32, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "f64"_fu, t_f64, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "bool"_fu, t_bool, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "byte"_fu, t_byte, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "void"_fu, t_void, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef_CUDLzI5V(scope, "never"_fu, t_never, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    return /*NRVO*/ scope;
}

#endif
