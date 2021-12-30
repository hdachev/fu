
#include <fu/init_priority.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/find.h>
#include <fu/view.h>

bool hasPostfix_rJbriNRz(fu::view<char>);
char ascii_upper_DzYgSkPo(char);

#ifndef FU_NO_FDEFs

static const fu_VEC<fu_VEC<fu_STR>> KEYWORDS fu_INIT_PRIORITY(1001) = fu_VEC<fu_VEC<fu_STR>> { fu::slate<17, fu_VEC<fu_STR>> { fu_VEC<fu_STR>{}, fu_VEC<fu_STR>{}, fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "do"_fu, "if"_fu, "or"_fu } }, fu_VEC<fu_STR> { fu::slate<8, fu_STR> { "and"_fu, "asm"_fu, "for"_fu, "int"_fu, "new"_fu, "not"_fu, "try"_fu, "xor"_fu } }, fu_VEC<fu_STR> { fu::slate<11, fu_STR> { "auto"_fu, "bool"_fu, "case"_fu, "char"_fu, "else"_fu, "enum"_fu, "goto"_fu, "long"_fu, "this"_fu, "true"_fu, "void"_fu } }, fu_VEC<fu_STR> { fu::slate<14, fu_STR> { "bitor"_fu, "break"_fu, "catch"_fu, "class"_fu, "compl"_fu, "const"_fu, "false"_fu, "float"_fu, "or_eq"_fu, "short"_fu, "throw"_fu, "union"_fu, "using"_fu, "while"_fu } }, fu_VEC<fu_STR> { fu::slate<18, fu_STR> { "and_eq"_fu, "bitand"_fu, "delete"_fu, "double"_fu, "export"_fu, "extern"_fu, "friend"_fu, "inline"_fu, "not_eq"_fu, "public"_fu, "return"_fu, "signed"_fu, "sizeof"_fu, "static"_fu, "struct"_fu, "switch"_fu, "typeid"_fu, "xor_eq"_fu } }, fu_VEC<fu_STR> { fu::slate<11, fu_STR> { "alignas"_fu, "alignof"_fu, "char8_t"_fu, "concept"_fu, "default"_fu, "mutable"_fu, "nullptr"_fu, "private"_fu, "typedef"_fu, "virtual"_fu, "wchar_t"_fu } }, fu_VEC<fu_STR> { fu::slate<16, fu_STR> { "char16_t"_fu, "char32_t"_fu, "continue"_fu, "co_await"_fu, "co_yield"_fu, "decltype"_fu, "explicit"_fu, "noexcept"_fu, "operator"_fu, "reflexpr"_fu, "register"_fu, "requires"_fu, "template"_fu, "typename"_fu, "unsigned"_fu, "volatile"_fu } }, fu_VEC<fu_STR> { fu::slate<6, fu_STR> { "consteval"_fu, "constexpr"_fu, "constinit"_fu, "co_return"_fu, "namespace"_fu, "protected"_fu } }, fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "const_cast"_fu } }, fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "static_cast"_fu } }, fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "dynamic_cast"_fu, "synchronized"_fu, "thread_local"_fu } }, fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "atomic_cancel"_fu, "atomic_commit"_fu, "static_assert"_fu } }, fu_VEC<fu_STR>{}, fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "atomic_noexcept"_fu } }, fu_VEC<fu_STR> { fu::slate<1, fu_STR> { "reinterpret_cast"_fu } } } };

                                #ifndef DEFt_find_VtCzn94C
                                #define DEFt_find_VtCzn94C
inline int find_VtCzn94C(fu::view<fu_STR> a, fu::view<char> b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

fu_STR ID_rJbriNRz(const fu_STR& id)
{
    if (id.size() < KEYWORDS.size())
    {
        const int idx = find_VtCzn94C(KEYWORDS[id.size()], id);
        if ((idx >= 0))
        {
            /*MOV*/ fu_STR cpy { id };
            cpy.mutref(1) = ascii_upper_DzYgSkPo(cpy[1]);
            return /*NRVO*/ cpy;
        };
    };
    return fu_STR(id);
}

static const fu_STR UNARY fu_INIT_PRIORITY(1001) = "++--!*&~"_fu;

static const fu_STR BINARY fu_INIT_PRIORITY(1001) = "+=-=*=/=%=&=|=^=<<=>>==!=&&||"_fu;

static const fu_STR ASSIGN2 fu_INIT_PRIORITY(1001) = "+=-=*=/=%=&=|=^="_fu;

static const fu_STR ASSIGN3 fu_INIT_PRIORITY(1001) = "<<=>>="_fu;

bool hasAssignment_rJbriNRz(fu::view<char> op)
{
    return (op == "="_fu) || ((op.size() == 2) && fu::has(ASSIGN2, op)) || ((op.size() == 3) && fu::has(ASSIGN3, op));
}

bool hasBinary_rJbriNRz(fu::view<char> op)
{
    return fu::has(BINARY, op);
}

bool hasUnary_rJbriNRz(fu::view<char> op)
{
    if (op.size() > 2)
        return hasPostfix_rJbriNRz(op);

    return fu::has(UNARY, op);
}

bool hasPostfix_rJbriNRz(fu::view<char> op)
{
    return (op == "postfix++"_fu) || (op == "postfix--"_fu);
}

#endif
