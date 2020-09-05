#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>

struct s_Argument;
struct s_Effects;
struct s_Lifetime;
struct s_Node;
struct s_Overload;
struct s_Partial;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_SolvedNode;
struct s_Target;
struct s_Template;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

int parse10i32(int&, const fu_STR&);
s_Target search(const s_Scope&, const fu_STR&, int&, const s_ScopeSkip&, const s_Target&, const fu_VEC<s_ScopeItem>&, const fu_VEC<s_ScopeItem>&);

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

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu_VEC<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
            || imports
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

                                #ifndef DEF_s_ScopeSkip
                                #define DEF_s_ScopeSkip
struct s_ScopeSkip
{
    s_ScopeMemo start;
    s_ScopeMemo end;
    explicit operator bool() const noexcept
    {
        return false
            || start
            || end
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

bool type_isAddrOfFn(const s_Type& type)
{
    return fu::lmatch(type.vtype.canon, "@"_fu);
}

bool type_isZST(const s_Type& type)
{
    return type_isAddrOfFn(type);
}

bool type_isCTC(const s_Type& type)
{
    return type_isZST(type);
}

fu_STR packAddrOfFn(const fu_VEC<s_Target>& targets)
{
    fu_STR res {};
    for (int i = 0; (i < targets.size()); i++)
    {
        const s_Target& target = targets[i];
        (res += ((("@"_fu + target.modid) + ":"_fu) + target.index));
    };
    return ([&]() -> fu_STR { { fu_STR _ = fu_STR(res); if (_) return _; } return "@"_fu; }());
}

fu_VEC<s_Target> unpackAddrOfFn(const fu_STR& canon)
{
    fu_VEC<s_Target> res {};
    int i = 0;
    while ((i < canon.size()))
    {
        ((canon[i++] == std::byte('@')) || fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon) + "`."_fu)));
        const int modid = parse10i32(i, canon);
        ((canon[i++] == std::byte(':')) || fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon) + "`."_fu)));
        const int index = parse10i32(i, canon);
        res.push(s_Target { int(modid), int(index) });
    };
    return res;
}

bool X_unpackAddrOfFnBinding(fu_VEC<s_ScopeItem>& out, const fu_STR& id, const s_Type& type)
{
    if (!type_isAddrOfFn(type))
        return false;

    fu_VEC<s_Target> targets = unpackAddrOfFn(type.vtype.canon);
    for (int i = 0; (i < targets.size()); i++)
        out.push(s_ScopeItem { fu_STR(id), s_Target(targets[i]) });

    return true;
}

s_Type X_solveAddrOfFn(const s_Scope& scope, const s_ScopeSkip& scope_skip, const fu_STR& id)
{
    fu_VEC<s_Target> targets {};
    int scope_iterator {};
    s_Target target {};
    while ((target = search(scope, id, scope_iterator, scope_skip, s_Target{}, fu_VEC<s_ScopeItem>{}, fu_VEC<s_ScopeItem>{})))
        targets.push(target);

    return s_Type { s_ValueType { 0, 0, packAddrOfFn(targets) }, s_Lifetime{}, s_Effects{} };
}

s_Type X_addrofTarget(const s_Target& target)
{
    return s_Type { s_ValueType { 0, 0, packAddrOfFn(fu_VEC<s_Target> { fu_VEC<s_Target>::INIT<1> { target } }) }, s_Lifetime{}, s_Effects{} };
}

#endif
