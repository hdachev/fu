#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/find.h>
#include <fu/view.h>

bool hasPostfix(fu::view<fu::byte>);
fu::byte ascii_upper(fu::byte);

#ifndef FU_NO_FDEFs

static const fu_VEC<fu_VEC<fu_STR>> KEYWORDS = fu_VEC<fu_VEC<fu_STR>> { fu_VEC<fu_VEC<fu_STR>>::INIT<17> { fu_VEC<fu_STR>{}, fu_VEC<fu_STR>{}, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "do"_fu, "if"_fu, "or"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<8> { "and"_fu, "asm"_fu, "for"_fu, "int"_fu, "new"_fu, "not"_fu, "try"_fu, "xor"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<11> { "auto"_fu, "bool"_fu, "case"_fu, "char"_fu, "else"_fu, "enum"_fu, "goto"_fu, "long"_fu, "this"_fu, "true"_fu, "void"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<14> { "bitor"_fu, "break"_fu, "catch"_fu, "class"_fu, "compl"_fu, "const"_fu, "false"_fu, "float"_fu, "or_eq"_fu, "short"_fu, "throw"_fu, "union"_fu, "using"_fu, "while"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<18> { "and_eq"_fu, "bitand"_fu, "delete"_fu, "double"_fu, "export"_fu, "extern"_fu, "friend"_fu, "inline"_fu, "not_eq"_fu, "public"_fu, "return"_fu, "signed"_fu, "sizeof"_fu, "static"_fu, "struct"_fu, "switch"_fu, "typeid"_fu, "xor_eq"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<11> { "alignas"_fu, "alignof"_fu, "char8_t"_fu, "concept"_fu, "default"_fu, "mutable"_fu, "nullptr"_fu, "private"_fu, "typedef"_fu, "virtual"_fu, "wchar_t"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<16> { "char16_t"_fu, "char32_t"_fu, "continue"_fu, "co_await"_fu, "co_yield"_fu, "decltype"_fu, "explicit"_fu, "noexcept"_fu, "operator"_fu, "reflexpr"_fu, "register"_fu, "requires"_fu, "template"_fu, "typename"_fu, "unsigned"_fu, "volatile"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<6> { "consteval"_fu, "constexpr"_fu, "constinit"_fu, "co_return"_fu, "namespace"_fu, "protected"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "const_cast"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "static_cast"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "dynamic_cast"_fu, "synchronized"_fu, "thread_local"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<3> { "atomic_cancel"_fu, "atomic_commit"_fu, "static_assert"_fu } }, fu_VEC<fu_STR>{}, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "atomic_noexcept"_fu } }, fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<1> { "reinterpret_cast"_fu } } } };

                                #ifndef DEFt_find_VtCz
                                #define DEFt_find_VtCz
inline int find_VtCz(fu::view<fu_STR> a, fu::view<fu::byte> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

fu_STR ID(const fu_STR& id)
{
    if (id.size() < KEYWORDS.size())
    {
        const int idx = find_VtCz(KEYWORDS[id.size()], id);
        if ((idx >= 0))
        {
            fu_STR cpy { id };
            cpy.mutref(1) = ascii_upper(cpy[1]);
            return cpy;
        };
    };
    return fu_STR(id);
}

static const fu_STR UNARY = "++--!*&~"_fu;

static const fu_STR BINARY = "+=-=*=/=%=&=|=^=<<=>>==!=<=>=&&||"_fu;

bool hasBinary(fu::view<fu::byte> op)
{
    return fu::has(BINARY, op);
}

bool hasUnary(fu::view<fu::byte> op)
{
    if (op.size() > 2)
        return hasPostfix(op);

    return fu::has(UNARY, op);
}

bool hasPostfix(fu::view<fu::byte> op)
{
    return (op == "postfix++"_fu) || (op == "postfix--"_fu);
}

#endif
