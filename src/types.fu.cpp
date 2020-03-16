#include <cstdint>
#include <fu/default.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_str.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <utility>

struct s_Effects;
struct s_MapFields;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
s_Lifetime type_inter(const s_Lifetime&, const s_Lifetime&);
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

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    s_ValueType value;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || value
            || lifetime
            || effects
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

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline const int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_ref
                                #define DEF_q_ref
inline const int q_ref = (1 << 1);
                                #endif

                                #ifndef DEF_q_copy
                                #define DEF_q_copy
inline const int q_copy = (1 << 2);
                                #endif

                                #ifndef DEF_q_trivial
                                #define DEF_q_trivial
inline const int q_trivial = (1 << 3);
                                #endif

                                #ifndef DEF_q_primitive
                                #define DEF_q_primitive
inline const int q_primitive = (1 << 4);
                                #endif

                                #ifndef DEF_q_arithmetic
                                #define DEF_q_arithmetic
inline const int q_arithmetic = (1 << 5);
                                #endif

                                #ifndef DEF_q_integral
                                #define DEF_q_integral
inline const int q_integral = (1 << 6);
                                #endif

                                #ifndef DEF_q_signed
                                #define DEF_q_signed
inline const int q_signed = (1 << 7);
                                #endif

                                #ifndef DEF_q_unsigned
                                #define DEF_q_unsigned
inline const int q_unsigned = (1 << 8);
                                #endif

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 9);
                                #endif

                                #ifndef DEF_TAGS
                                #define DEF_TAGS
inline const fu_VEC<fu_STR> TAGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<10> { "mutref"_fu, "ref"_fu, "copy"_fu, "trivial"_fu, "primitive"_fu, "arithmetic"_fu, "integral"_fu, "signed"_fu, "unsigned"_fu, "floating_point"_fu } };
                                #endif

                                #ifndef DEF_e_exit
                                #define DEF_e_exit
inline const int e_exit = (1 << 0);
                                #endif

                                #ifndef DEF_e_crash
                                #define DEF_e_crash
inline const int e_crash = (1 << 1);
                                #endif

                                #ifndef DEF_e_div0
                                #define DEF_e_div0
inline const int e_div0 = (1 << 2);
                                #endif

                                #ifndef DEF_e_segv
                                #define DEF_e_segv
inline const int e_segv = (1 << 3);
                                #endif

                                #ifndef DEF_e_throw
                                #define DEF_e_throw
inline const int e_throw = (1 << 4);
                                #endif

                                #ifndef DEF_e_io
                                #define DEF_e_io
inline const int e_io = (1 << 8);
                                #endif

                                #ifndef DEF_e_malloc
                                #define DEF_e_malloc
inline const int e_malloc = (1 << 12);
                                #endif

                                #ifndef DEF_e_memcpy
                                #define DEF_e_memcpy
inline const int e_memcpy = (1 << 13);
                                #endif

s_Effects type_inter(const s_Effects& a, const s_Effects& b)
{
    return s_Effects { (a.raw | b.raw) };
}

bool operator==(const s_ValueType& a, const s_ValueType& b)
{
    return ((a.quals == b.quals) && (a.modid == b.modid) && (a.canon == b.canon));
}

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_copy | q_trivial);
                                #endif

                                #ifndef DEF_Primitive
                                #define DEF_Primitive
inline const int Primitive = (Trivial | q_primitive);
                                #endif

                                #ifndef DEF_Arithmetic
                                #define DEF_Arithmetic
inline const int Arithmetic = (Primitive | q_arithmetic);
                                #endif

                                #ifndef DEF_Integral
                                #define DEF_Integral
inline const int Integral = (Arithmetic | q_integral);
                                #endif

                                #ifndef DEF_SignedInt
                                #define DEF_SignedInt
inline const int SignedInt = (Integral | q_signed);
                                #endif

                                #ifndef DEF_UnsignedInt
                                #define DEF_UnsignedInt
inline const int UnsignedInt = (Integral | q_unsigned);
                                #endif

                                #ifndef DEF_FloatingPt
                                #define DEF_FloatingPt
inline const int FloatingPt = ((Arithmetic | q_floating_pt) | q_signed);
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
inline const s_Type t_i8 = s_Type { s_ValueType { int(SignedInt), int{}, "i8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { s_ValueType { int(SignedInt), int{}, "i16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
inline const s_Type t_i32 = s_Type { s_ValueType { int(SignedInt), int{}, "i32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { s_ValueType { int(SignedInt), int{}, "i64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
inline const s_Type t_u32 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { s_ValueType { int(UnsignedInt), int{}, "u64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
inline const s_Type t_f32 = s_Type { s_ValueType { int(FloatingPt), int{}, "f32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
inline const s_Type t_f64 = s_Type { s_ValueType { int(FloatingPt), int{}, "f64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, int{}, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), int{}, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { s_ValueType { 0, int{}, "never"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), int{}, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

bool is_never(const s_Type& t)
{
    return (t.value == t_never.value);
}

bool is_void(const s_Type& t)
{
    return (t.value == t_void.value);
}

bool is_bool(const s_Type& t)
{
    return (t.value == t_bool.value);
}

bool isAssignable(const s_Type& host, const s_Type& guest)
{
    return (((host.value.canon == guest.value.canon) && (host.value.modid == guest.value.modid) && ((host.value.quals == guest.value.quals) || (!(host.value.quals & q_mutref) && ((host.value.quals & guest.value.quals) == host.value.quals)))) || is_never(guest));
}

bool isAssignableAsArgument(const s_Type& host, s_Type&& guest)
{
    guest.value.quals |= q_ref;
    return isAssignable(host, guest);
}

s_Type qsub(const s_Type& type, const int q)
{
    s_Type t { type };
    t.value.quals &= ~q;
    return t;
}

bool qhas(const s_Type& type, const int q)
{
    return ((type.value.quals & q) == q);
}

s_Type tryClear(const s_Type& type, const int q)
{
    if ((!type || !qhas(type, q)))
        return s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} };

    return qsub(type, q);
}

s_Type add_ref(const s_Type& type, const s_Lifetime& lifetime)
{
    s_Type t { (type ? type : fu::fail("falsy type"_fu)) };
    t.value.quals |= q_ref;
    t.lifetime = type_inter(lifetime, t.lifetime);
    return t;
}

s_Type add_mutref(const s_Type& type, const s_Lifetime& lifetime)
{
    s_Type t { (type ? type : fu::fail("falsy type"_fu)) };
    t.value.quals |= (q_mutref | q_ref);
    t.lifetime = type_inter(t.lifetime, lifetime);
    return t;
}

s_Type tryClear_mutref(const s_Type& type)
{
    return tryClear(type, (q_ref | q_mutref));
}

s_Type tryClear_ref(const s_Type& type)
{
    s_Type t = tryClear(type, q_ref);
    return (t ? qsub(t, q_mutref) : s_Type(t));
}

s_Type clear_refs(const s_Type& type)
{
    s_Type t { type };
    t.value.quals &= ~q_ref;
    t.value.quals &= ~q_mutref;
    return t;
}

s_Type clear_mutref(const s_Type& type)
{
    s_Type t { type };
    t.value.quals &= ~q_mutref;
    return t;
}

s_Type add_refs(const s_Type& from, s_Type&& to)
{
    to.value.quals |= (from.value.quals & (q_ref | q_mutref));
    to.lifetime = type_inter(from.lifetime, to.lifetime);
    return std::move(to);
}

fu_STR serializeType(const s_Type& type)
{
    fu_STR prefix {};
    if (type.value.modid)
        (prefix += type.value.modid);

    if (type.value.quals)
        (prefix += ("+"_fu + type.value.quals));

    return (prefix + type.value.canon);
}

int parse10i32(int& offset, const fu_STR& str)
{
    int result {};
    for (; ; )
    {
        const std::byte c = ([&]() -> std::byte { if ((offset < str.size())) return str[offset]; else return fu::Default<std::byte>::value; }());
        if (((c < std::byte('0')) || (c > std::byte('9'))))
        {
            break;
        };
        offset++;
        result = ((result * 10) + (int(c) - int(std::byte('0'))));
    };
    return result;
}

s_ValueType parseType(const fu_STR& str)
{
    int offset {};
    const int modid = parse10i32(offset, str);
    int quals = 0;
    if ((str[offset] == std::byte('+')))
    {
        offset++;
        quals = parse10i32(offset, str);
    };
    fu_STR canon = fu::slice(str, offset);
    return s_ValueType { int(quals), int(modid), fu_STR(canon) };
}

bool type_isArray(const s_Type& type)
{
    return fu::lmatch(type.value.canon, "[]"_fu);
}

s_Type createArray(const s_Type& item)
{
    fu_STR canon = ("[]"_fu + serializeType(item));
    const int quals = (item.value.quals & q_copy);
    const int modid = 0;
    return s_Type { s_ValueType { int(quals), int(modid), fu_STR(canon) }, s_Lifetime(item.lifetime), s_Effects{} };
}

s_Type tryClear_array(const s_Type& type)
{
    if (!type_isArray(type))
        return s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} };

    s_ValueType value = parseType(fu::slice(type.value.canon, 2));
    return s_Type { s_ValueType(value), s_Lifetime(type.lifetime), s_Effects{} };
}

bool type_isMap(const s_Type& type)
{
    return fu::lmatch(type.value.canon, std::byte('{'));
}

s_Type createMap(const s_Type& key, const s_Type& value)
{
    fu_STR canon = ((("{"_fu + serializeType(key)) + "}"_fu) + serializeType(value));
    const int quals = ((key.value.quals & value.value.quals) & q_copy);
    const int modid = 0;
    return s_Type { s_ValueType { int(quals), int(modid), fu_STR(canon) }, type_inter(key.lifetime, value.lifetime), s_Effects{} };
}

s_MapFields tryClear_map(const s_Type& type)
{
    if (!type_isMap(type))
        return s_MapFields { s_Type{}, s_Type{} };

    int depth = 0;
    for (int i = 1; (i < type.value.canon.size()); i++)
    {
        const std::byte c = type.value.canon[i];
        if ((c == std::byte('{')))
            depth++;
        else if ((c == std::byte('}')))
        {
            if (depth--)
            {
                continue;
            };
            fu_STR ckey = fu::slice(type.value.canon, 1, i);
            fu_STR cval = fu::slice(type.value.canon, (i + 1));
            return s_MapFields { s_Type { parseType(ckey), s_Lifetime(type.lifetime), s_Effects{} }, s_Type { parseType(cval), s_Lifetime(type.lifetime), s_Effects{} } };
        };
    };
    fu::fail();
}

bool type_has(const s_Type& type, const fu_STR& tag)
{
    const int idx = fu::lfind(TAGS, tag);
    ((idx >= 0) || fu::fail((("Unknown type tag: `"_fu + tag) + "`."_fu)));
    const int mask = (1 << idx);
    return ((type.value.quals & mask) == mask);
}

s_Type type_tryInter(const s_Type& a, const s_Type& b)
{
    if (((a.value.canon != b.value.canon) || (a.value.modid != b.value.modid)))
        return (is_never(a) ? s_Type(b) : (is_never(b) ? s_Type(a) : s_Type { s_ValueType{}, s_Lifetime{}, s_Effects{} }));

    return s_Type { s_ValueType { (a.value.quals & b.value.quals), int(a.value.modid), fu_STR(a.value.canon) }, type_inter(a.lifetime, b.lifetime), type_inter(a.effects, b.effects) };
}
