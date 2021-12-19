
#include <fu/default.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/view.h>

struct s_ArgWrite;
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

bool operator<(const s_ScopeMemo&, const s_ScopeMemo&);
bool operator==(const s_ScopeMemo&, const s_ScopeMemo&);
bool operator>(const s_ScopeMemo&, const s_ScopeMemo&);
fu_STR createStructCanon(int, fu::view<fu::byte>);
s_ScopeItem ScopeItem(const fu_STR&, const s_Target&, bool);
s_Target search(fu::view<s_ScopeItem>, const fu_STR&, int&, fu::view<s_ScopeSkip>, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
void Scope_set(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);

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
inline constexpr short HM_CanBreak = (short(1) << short(0));
                                #endif

                                #ifndef DEF_HM_CanReturn
                                #define DEF_HM_CanReturn
inline constexpr short HM_CanReturn = (short(1) << short(1));
                                #endif

                                #ifndef DEF_HM_Anon
                                #define DEF_HM_Anon
inline constexpr short HM_Anon = (short(1) << short(2));
                                #endif

                                #ifndef DEF_HM_Function
                                #define DEF_HM_Function
inline constexpr short HM_Function = (short(1) << short(3));
                                #endif

                                #ifndef DEF_HM_Lambda
                                #define DEF_HM_Lambda
inline constexpr short HM_Lambda = (short(1) << short(4));
                                #endif

                                #ifndef DEF_HM_Struct
                                #define DEF_HM_Struct
inline constexpr short HM_Struct = (short(1) << short(5));
                                #endif

                                #ifndef DEF_HM_LabelUsed
                                #define DEF_HM_LabelUsed
inline constexpr short HM_LabelUsed = (short(1) << short(6));
                                #endif

s_Target target(const s_ScopeItem& si)
{
    return s_Target { int(si.modid), int((si.packed & ~(0x1u << 31u))) };
}

bool ScopeItem_shadows(const s_ScopeItem& si)
{
    return !!(si.packed & (0x1u << 31u));
}

s_ScopeItem ScopeItem(const fu_STR& id_1, const s_Target& target_4, const bool shadows)
{
    return s_ScopeItem { fu_STR(id_1), int(target_4.modid), (unsigned(target_4.index) | (shadows ? (0x1u << 31u) : unsigned{})) };
}

s_ScopeItem& target_TODOFIX(s_ScopeItem& si, const s_Target& target_4)
{
    si.modid = target_4.modid;
    si.packed = unsigned(target_4.index);
    return si;
}

int MODID(const s_Module& module)
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

s_Type initStruct(const fu_STR& name_3, const int flags_4, const bool SELF_TEST, s_Module& module)
{
    if (!((fu::u8(name_3[0]) - fu::u8(fu::byte('0'))) > fu::u8(unsigned(9))))
        fu::fail((("Bad struct name, leading digit: `"_fu + name_3) + "`."_fu));

    const int index_2 = module.out.types.size();
    fu_STR canon_1 = createStructCanon(index_2, name_3);
    if (SELF_TEST)
    {
        for (int i = 0; i < module.out.types.size(); i++)
        {
            if (module.out.types[i].name == name_3)
                fu::fail((("initStruct/SELF_TEST duplicate: `"_fu + name_3) + "`."_fu));

        };
    };
    module.out.types += s_Struct { fu_STR(name_3), s_Target{}, fu_VEC<s_ScopeItem>{}, fu_VEC<int>{}, fu_VEC<s_Target>{}, 0, bool{} };
    const int specualtive_quals = (!(flags_4 & F_NOCOPY) ? q_rx_copy : (*(const int*)fu::NIL));
    return s_Type { s_ValueType { int(specualtive_quals), int(MODID(module)), fu_STR(canon_1) }, s_Lifetime{} };
}

s_Type despeculateStruct(/*MOV*/ s_Type&& type_3)
{
    type_3.vtype.quals &= ~q_rx_copy;
    return static_cast<s_Type&&>(type_3);
}

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

s_Scope Scope_exports(const s_Scope& scope_1, const int modid_5, const fu_VEC<s_ScopeItem>& field_items)
{
    fu_VEC<s_ScopeItem> result { field_items };
    fu_VEC<s_ScopeItem> pRivate {};
    for (int i = 0; i < scope_1.items.size(); i++)
    {
        const s_ScopeItem& item = scope_1.items[i];
        if (target(item).modid == modid_5)
        {
            const s_Overload& overload = scope_1.overloads[(target(item).index - 1)];
            ((overload.flags & F_PUB) ? result : pRivate).push(item);
        };
    };
    const int pub_count_1 = result.size();
    result += pRivate;
    fu_VEC<int> no_imports {};
    fu_VEC<s_Target> no_usings {};
    return s_Scope { fu_VEC<s_ScopeItem>(result), fu_VEC<s_Overload>(scope_1.overloads), fu_VEC<s_Extended>(scope_1.extended), fu_VEC<int>(no_imports), fu_VEC<s_Target>(no_usings), fu_VEC<s_Target>(scope_1.converts), int(pub_count_1) };
}

static void nextSkip(fu::view<s_ScopeSkip> scope_skip_1, int& scope_iterator, int& skiptrap, fu::view<s_ScopeItem> items_5)
{
    for (int i = scope_skip_1.size(); i-- > 0; )
    {
        const s_ScopeSkip& ss = scope_skip_1[i];
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
    if ((skiptrap >= items_5.size()))
        fu::fail("Scope/search: scope_skip will jump past end of items."_fu);

}

s_Target search(fu::view<s_ScopeItem> items_5, const fu_STR& id_1, int& scope_iterator, fu::view<s_ScopeSkip> scope_skip_1, bool& shadows, const s_Target& dont_search_just_return, fu::view<s_Target> extra_items_1, fu::view<s_ScopeItem> field_items)
{
    if (dont_search_just_return)
    {
        if (scope_iterator)
            return s_Target{};

        scope_iterator--;
        return s_Target(dont_search_just_return);
    };
    const int START = ((items_5.size() + extra_items_1.size()) + field_items.size());
    if (!scope_iterator)
        scope_iterator = START;
    else if ((scope_iterator >= START))
        fu::fail("Scope/search: items shrunk while we iterated."_fu);

    int skiptrap = -1;
    scope_iterator--;
    nextSkip(scope_skip_1, scope_iterator, skiptrap, items_5);
    scope_iterator++;
    s_ScopeItem TODO_FIX = s_ScopeItem{};
    if (extra_items_1)
        TODO_FIX.id = id_1;

    while (scope_iterator-- > 0)
    {
        if (scope_iterator == skiptrap)
            nextSkip(scope_skip_1, scope_iterator, skiptrap, items_5);

        const s_ScopeItem& item = ((scope_iterator >= items_5.size()) ? ((scope_iterator >= (items_5.size() + extra_items_1.size())) ? field_items[((scope_iterator - items_5.size()) - extra_items_1.size())] : target_TODOFIX(TODO_FIX, extra_items_1[(scope_iterator - items_5.size())])) : items_5[scope_iterator]);
        if (item.id == id_1)
        {
            if (!scope_iterator)
                scope_iterator = -1;

            shadows = ScopeItem_shadows(item);
            return target(item);
        };
    };
    return s_Target{};
}

s_ScopeMemo Scope_snap(const s_Scope& scope_1, fu::view<s_Helpers> _helpers)
{
    return s_ScopeMemo { scope_1.items.size(), scope_1.imports.size(), scope_1.usings.size(), scope_1.converts.size(), _helpers.size() };
}

void Scope_pop(s_Scope& scope_1, const s_ScopeMemo& memo, fu_VEC<s_Helpers>& _helpers)
{
    scope_1.items.shrink(memo.items_len);
    scope_1.imports.shrink(memo.imports_len);
    scope_1.usings.shrink(memo.usings_len);
    scope_1.converts.shrink(memo.converts_len);
    _helpers.shrink(memo.helpers_len);
}

static int cmp(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    int _0 {};
    return (_0 = (a.items_len - b.items_len)) ? _0 : (_0 = (a.imports_len - b.imports_len)) ? _0 : (_0 = (a.usings_len - b.usings_len)) ? _0 : (_0 = (a.converts_len - b.converts_len)) ? _0 : (a.helpers_len - b.helpers_len);
}

bool operator>(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp(a, b) > 0;
}

bool operator<(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp(a, b) < 0;
}

bool operator==(const s_ScopeMemo& a, const s_ScopeMemo& b)
{
    return cmp(a, b) == 0;
}

                                #ifndef DEFt_grow_if_oob_ZXR1
                                #define DEFt_grow_if_oob_ZXR1
inline s_Extended& grow_if_oob_ZXR1(fu_VEC<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

s_Target Scope_create(s_Scope& scope_1, const fu_STR& kind_3, const fu_STR& name_3, const s_Type& type_3, const int flags_4, const s_SolvedNode& solved_1, const int local_of_1, const unsigned status_1, const bool nest, const s_Module& module)
{
    fu_VEC<s_Overload>& overloads_1 = ((nest && local_of_1) ? grow_if_oob_ZXR1(scope_1.extended, (local_of_1 - 1)).locals : scope_1.overloads);
    int _0 {};
    /*MOV*/ const s_Target target_4 = s_Target { (nest && (_0 = -local_of_1) ? _0 : int(MODID(module))), (overloads_1.size() + 1) };
    s_Overload item {};
    item.name = name_3;
    item.kind = kind_3;
    item.flags = flags_4;
    item.type = type_3;
    item.solved = solved_1;
    item.local_of = local_of_1;
    item.status = status_1;
    overloads_1.push(item);
    return /*NRVO*/ target_4;
}

void Scope_set(s_Scope& scope_1, const fu_STR& id_1, const s_Target& target_4, const bool shadows)
{
    Scope_set(scope_1.items, id_1, target_4, shadows);
}

void Scope_set(fu_VEC<s_ScopeItem>& items_5, const fu_STR& id_1, const s_Target& target_4, const bool shadows)
{
    items_5.push(ScopeItem(id_1, target_4, shadows));
}

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

s_Target Scope_Typedef(s_Scope& scope_1, const fu_STR& id_1, const s_Type& type_3, const int flags_4, const fu_STR& name_3, const unsigned status_1, const s_Module& module)
{
    /*MOV*/ const s_Target target_4 = Scope_create(scope_1, "type"_fu, name_3, type_3, flags_4, s_SolvedNode{}, 0, status_1, bool{}, module);
    if (id_1)
        Scope_set(scope_1, id_1, target_4, !!(flags_4 & F_SHADOW));

    return /*NRVO*/ target_4;
}

extern const s_Type t_i8;

extern const s_Type t_i16;

extern const s_Type t_i32;

extern const s_Type t_i64;

extern const s_Type t_u8;

extern const s_Type t_u16;

extern const s_Type t_u32;

extern const s_Type t_u64;

extern const s_Type t_f32;

extern const s_Type t_f64;

extern const s_Type t_bool;

extern const s_Type t_byte;

extern const s_Type t_void;

extern const s_Type t_never;

s_Scope listGlobals(const s_Module& module)
{
    /*MOV*/ s_Scope scope_1 {};
    Scope_Typedef(scope_1, "i8"_fu, t_i8, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "i16"_fu, t_i16, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "i32"_fu, t_i32, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "i64"_fu, t_i64, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "u8"_fu, t_u8, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "u16"_fu, t_u16, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "u32"_fu, t_u32, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "u64"_fu, t_u64, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "f32"_fu, t_f32, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "f64"_fu, t_f64, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "bool"_fu, t_bool, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "byte"_fu, t_byte, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "void"_fu, t_void, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    Scope_Typedef(scope_1, "never"_fu, t_never, F_PUB, (*(const fu_STR*)fu::NIL), 0u, module);
    return /*NRVO*/ scope_1;
}

#endif
