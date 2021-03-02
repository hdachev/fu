#include <cstdint>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/view.h>

struct s_Argument;
struct s_Effects;
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
int parse10i32(int&, const fu_STR&);
s_ScopeItem ScopeItem(const fu_STR&, const s_Target&, bool);
s_Target search(fu::view<s_ScopeItem>, const fu_STR&, int&, const fu_VEC<s_ScopeSkip>&, bool&, const s_Target&, fu::view<s_Target>, fu::view<s_ScopeItem>);
void Scope_set(fu_VEC<s_ScopeItem>&, const fu_STR&, const s_Target&, bool);
void Scope_set(s_Scope&, const fu_STR&, const s_Target&, bool);

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

                                #ifndef DEF_s_Helpers
                                #define DEF_s_Helpers
struct s_Helpers
{
    int target;
    fu_STR id;
    short mask;
    int local_of;
    int kills;
    s_Type ret_expect;
    s_Type ret_actual;
    fu_VEC<int> returns;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || id
            || mask
            || local_of
            || kills
            || ret_expect
            || ret_actual
            || returns
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

s_ScopeItem ScopeItem(const fu_STR& id, const s_Target& target, const bool shadows)
{
    return s_ScopeItem { fu_STR(id), int(target.modid), (uint32_t(target.index) | (shadows ? (0x1u << 31u) : unsigned{})) };
}

s_ScopeItem& target_TODOFIX(s_ScopeItem& si, const s_Target& target)
{
    si.modid = target.modid;
    si.packed = uint32_t(target.index);
    return si;
}

int MODID(const s_Module& module)
{
    return int(module.modid);
}

bool isStruct(const s_Type& type)
{
    return fu::lmatch(type.vtype.canon, std::byte('$'));
}

int structIndex(const fu_STR& canon)
{
    int offset = 1;
    return ((canon[0] == std::byte('$')) ? parse10i32(offset, canon) : -1);
}

                                #ifndef DEF_F_NOCOPY
                                #define DEF_F_NOCOPY
inline constexpr int F_NOCOPY = (1 << 12);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline constexpr int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 2);
                                #endif

s_Type initStruct(const fu_STR& name, const int flags, const bool SELF_TEST, s_Module& module)
{
    if (!((uint8_t(name[0]) - uint8_t(std::byte('0'))) > uint8_t(9)))
        fu::fail((("Bad struct name, leading digit: `"_fu + name) + "`."_fu));

    const int index = module.out.types.size();
    fu_STR canon = (("$"_fu + index) + name);
    if (SELF_TEST)
    {
        for (int i = 0; i < module.out.types.size(); i++)
        {
            if (module.out.types.mutref(i).name == name)
                fu::fail((("initStruct/SELF_TEST duplicate: `"_fu + name) + "`."_fu));

        };
    };
    module.out.types += s_Struct { fu_STR(name), s_Target{}, fu_VEC<s_ScopeItem>{}, fu_VEC<int>{}, fu_VEC<s_Target>{} };
    const int specualtive_quals = ((flags & F_NOCOPY) ? int(q_trivial) : (q_rx_copy | q_trivial));
    return s_Type { s_ValueType { int(specualtive_quals), MODID(module), fu_STR(canon) }, s_Lifetime{}, s_Effects{} };
}

s_Type despeculateStruct(s_Type&& type)
{
    type.vtype.quals &= ~(q_rx_copy | q_trivial);
    return static_cast<s_Type&&>(type);
}

s_Struct& lookupStruct_mut(const fu_STR& canon, s_Module& module)
{
    return module.out.types.mutref(structIndex(canon));
}

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

s_Scope Scope_exports(const s_Scope& scope, const int modid, const fu_VEC<s_ScopeItem>& field_items)
{
    fu_VEC<s_ScopeItem> result { field_items };
    for (int i = 0; i < scope.items.size(); i++)
    {
        const s_ScopeItem& item = scope.items[i];
        if (target(item).modid == modid)
        {
            const s_Overload& overload = scope.overloads[(target(item).index - 1)];
            if (!modid || (overload.flags & F_PUB))
                result.push(item);

        };
    };
    fu_VEC<int> no_imports {};
    fu_VEC<s_Target> no_usings {};
    return s_Scope { fu_VEC<s_ScopeItem>(result), fu_VEC<s_Overload>(scope.overloads), fu_VEC<int>(no_imports), fu_VEC<s_Target>(no_usings), fu_VEC<s_Target>(scope.converts) };
}

static void nextSkip(fu::view<s_ScopeItem> items_0, int& scope_iterator_0, const fu_VEC<s_ScopeSkip>& scope_skip_0, int& skiptrap_0)
{
    for (int i = scope_skip_0.size(); i-- > 0; )
    {
        const s_ScopeSkip& ss = scope_skip_0[i];
        const int s1 = (ss.end - 1);
        if (scope_iterator_0 > s1)
        {
            skiptrap_0 = s1;
            break;
        };
        const int s0 = (ss.start - 1);
        if (scope_iterator_0 > s0)
            scope_iterator_0 = s0;

    };
    if ((skiptrap_0 >= items_0.size()))
        fu::fail("Scope/search: scope_skip will jump past end of items."_fu);

}

s_Target search(fu::view<s_ScopeItem> items, const fu_STR& id, int& scope_iterator, const fu_VEC<s_ScopeSkip>& scope_skip, bool& shadows, const s_Target& dont_search_just_return, fu::view<s_Target> extra_items, fu::view<s_ScopeItem> field_items)
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
    nextSkip(items, scope_iterator, scope_skip, skiptrap);
    scope_iterator++;
    s_ScopeItem TODO_FIX = s_ScopeItem{};
    if (extra_items)
        TODO_FIX.id = id;

    while (scope_iterator-- > 0)
    {
        if (scope_iterator == skiptrap)
            nextSkip(items, scope_iterator, scope_skip, skiptrap);

        const s_ScopeItem& item = ((scope_iterator >= items.size()) ? ((scope_iterator >= (items.size() + extra_items.size())) ? field_items[((scope_iterator - items.size()) - extra_items.size())] : target_TODOFIX(TODO_FIX, extra_items[(scope_iterator - items.size())])) : items[scope_iterator]);
        if (item.id == id)
        {
            if (!scope_iterator)
                scope_iterator = -1;

            shadows = ScopeItem_shadows(item);
            return target(item);
        };
    };
    return s_Target{};
}

s_ScopeMemo Scope_snap(const s_Scope& scope, const fu_VEC<s_Helpers>& _helpers)
{
    return s_ScopeMemo { scope.items.size(), scope.imports.size(), scope.usings.size(), scope.converts.size(), _helpers.size() };
}

void Scope_pop(s_Scope& scope, const s_ScopeMemo& memo, fu_VEC<s_Helpers>& _helpers)
{
    scope.items.shrink(memo.items_len);
    scope.imports.shrink(memo.imports_len);
    scope.usings.shrink(memo.usings_len);
    scope.converts.shrink(memo.converts_len);
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

                                #ifndef DEF_F_SHADOW
                                #define DEF_F_SHADOW
inline constexpr int F_SHADOW = (1 << 23);
                                #endif

s_Target Scope_add(s_Scope& scope, const fu_STR& kind, const fu_STR& id, const s_Type& type, const int flags, const int min, const int max, const fu_VEC<s_Argument>& args, const s_Template& tEmplate, const s_SolvedNode& solved, const int local_of, const fu_STR& name, const unsigned status, const s_Module& module)
{
    const int modid = MODID(module);
    const s_Target target = s_Target { int(modid), (scope.overloads.size() + 1) };
    s_Overload item = s_Overload { fu_STR(kind), fu_STR((name ? name : id ? id : fu::fail("Falsy Scope_add(id)."_fu))), s_Type(type), int(flags), int(min), int(max), fu_VEC<s_Argument>(args), s_Template(tEmplate), s_SolvedNode(solved), fu_VEC<int>{}, unsigned(status), int(local_of), fu_VEC<int>{}, fu_VEC<s_ScopeItem>{} };
    scope.overloads.push(item);
    if (id)
    {
        const bool shadows = !!(flags & F_SHADOW);
        Scope_set(scope, id, target, shadows);
    };
    return target;
}

s_Target Scope_create(s_Scope& scope, const fu_STR& kind, const fu_STR& name, const s_Type& type, const int flags, const int min, const int max, const fu_VEC<s_Argument>& args, const s_SolvedNode& solved, const int local_of, const unsigned status, const fu_VEC<s_ScopeItem>& extra_items, const s_Module& module)
{
    const int modid = MODID(module);
    const s_Target target = s_Target { int(modid), (scope.overloads.size() + 1) };
    s_Overload item {};
    item.name = name;
    item.kind = kind;
    item.flags = flags;
    item.type = type;
    item.min = min;
    item.max = max;
    item.args = args;
    item.solved = solved;
    item.local_of = local_of;
    item.status = status;
    item.extra_items = extra_items;
    scope.overloads.push(item);
    return target;
}

void Scope_set(s_Scope& scope, const fu_STR& id, const s_Target& target, const bool shadows)
{
    Scope_set(scope.items, id, target, shadows);
}

void Scope_set(fu_VEC<s_ScopeItem>& items, const fu_STR& id, const s_Target& target, const bool shadows)
{
    items.push(ScopeItem(id, target, shadows));
}

s_Target Scope_Typedef(s_Scope& scope, const fu_STR& id, const s_Type& type, const int flags, const s_Template& tEmplate, const fu_STR& name, const unsigned status, const s_Module& module)
{
    return Scope_add(scope, "type"_fu, id, type, flags, 0, 0, fu_VEC<s_Argument>{}, tEmplate, s_SolvedNode{}, 0, name, status, module);
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
    s_Scope scope {};
    Scope_Typedef(scope, "i8"_fu, t_i8, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "i16"_fu, t_i16, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "i32"_fu, t_i32, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "i64"_fu, t_i64, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "u8"_fu, t_u8, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "u16"_fu, t_u16, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "u32"_fu, t_u32, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "u64"_fu, t_u64, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "f32"_fu, t_f32, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "f64"_fu, t_f64, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "bool"_fu, t_bool, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "byte"_fu, t_byte, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "void"_fu, t_void, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    Scope_Typedef(scope, "never"_fu, t_never, F_PUB, s_Template{}, fu_STR{}, 0u, module);
    return scope;
}

#endif
