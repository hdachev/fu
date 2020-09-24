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
#include <fu/view.h>
#include <utility>

struct s_Effects;
struct s_Lifetime;
struct s_MapFields;
struct s_Target;
struct s_Type;
struct s_ValueType;

bool operator==(const s_Effects&, const s_Effects&);
bool operator==(const s_Lifetime&, const s_Lifetime&);
bool operator==(const s_Type&, const s_Type&);
bool operator==(const s_ValueType&, const s_ValueType&);
s_Type add_ref(s_Type&&, const s_Lifetime&);
uint64_t u64(const s_Target&);

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<int> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
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

#ifndef FU_NO_FDEFs

static const int q_mutref = (1 << 0);

static const int q_ref = (1 << 1);

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline const int q_rx_copy = (1 << 2);
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

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
inline const int q_rx_resize = (1 << 10);
                                #endif

static const fu_VEC<fu_STR> TAGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<11> { "mutref"_fu, "ref"_fu, "copy"_fu, "trivial"_fu, "primitive"_fu, "arithmetic"_fu, "integral"_fu, "signed"_fu, "unsigned"_fu, "floating_point"_fu, "resize"_fu } };

                                #ifndef DEF_q_REF_EXTENSIONS
                                #define DEF_q_REF_EXTENSIONS
inline const int q_REF_EXTENSIONS = (q_rx_copy | q_rx_resize);
                                #endif

                                #ifndef DEF_q_MUTINVAR
                                #define DEF_q_MUTINVAR
inline const int q_MUTINVAR = ~q_REF_EXTENSIONS;
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

                                #ifndef DEFt_union_pOV0
                                #define DEFt_union_pOV0
inline fu_VEC<int> union_pOV0(const fu_VEC<int>& a, const fu_VEC<int>& b)
{
    if (a.size() < b.size())
        return union_pOV0(b, a);

    fu_VEC<int> a_1 { a };
    int x = 0;
    int y = 0;
    while (((x < a_1.size()) && (y < b.size())))
    {
        const int X = a_1[x];
        const int Y = b[y];
        if (X > Y)
        {
            a_1.insert(x, Y);
            y++;
        }
        else if (X == Y)
            y++;

        x++;
    };
    if (y < b.size())
        a_1 += fu::get_view(b, y, b.size());

    return a_1;
}
                                #endif

s_Lifetime Lifetime_union(const s_Lifetime& a, const s_Lifetime& b)
{
    fu_VEC<int> uni0n = union_pOV0(a.uni0n, b.uni0n);
    if (((uni0n.size() >= 2) && (uni0n.mutref((uni0n.size() - 2)) >= 0)))
        uni0n.splice((uni0n.size() - 2), 1);

    return s_Lifetime { fu_VEC<int>(uni0n) };
}

bool operator==(const s_ValueType& a, const s_ValueType& b)
{
    return ((a.quals == b.quals) && (a.modid == b.modid) && (a.canon == b.canon));
}

bool operator==(const s_Lifetime& a, const s_Lifetime& b)
{
    return (a.uni0n == b.uni0n);
}

bool operator==(const s_Effects& a, const s_Effects& b)
{
    return (a.raw == b.raw);
}

bool operator==(const s_Type& a, const s_Type& b)
{
    return ((a.vtype == b.vtype) && (a.lifetime == b.lifetime) && (a.effects == b.effects));
}

                                #ifndef DEF_Trivial
                                #define DEF_Trivial
inline const int Trivial = (q_rx_copy | q_trivial);
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
inline const s_Type t_i8 = s_Type { s_ValueType { int(SignedInt), 0, "i8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { s_ValueType { int(SignedInt), 0, "i16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
inline const s_Type t_i32 = s_Type { s_ValueType { int(SignedInt), 0, "i32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { s_ValueType { int(SignedInt), 0, "i64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { s_ValueType { int(UnsignedInt), 0, "u8"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { s_ValueType { int(UnsignedInt), 0, "u16"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
inline const s_Type t_u32 = s_Type { s_ValueType { int(UnsignedInt), 0, "u32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { s_ValueType { int(UnsignedInt), 0, "u64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
inline const s_Type t_f32 = s_Type { s_ValueType { int(FloatingPt), 0, "f32"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
inline const s_Type t_f64 = s_Type { s_ValueType { int(FloatingPt), 0, "f64"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { s_ValueType { 0, 0, "void"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { s_ValueType { int(Primitive), 0, "bool"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { s_ValueType { 0, 0, "never"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
inline const s_Type t_byte = s_Type { s_ValueType { int(Primitive), 0, "byte"_fu }, s_Lifetime{}, s_Effects{} };
                                #endif

bool is_never(const s_Type& t)
{
    return (t.vtype == t_never.vtype);
}

bool is_void(const s_Type& t)
{
    return (t.vtype == t_void.vtype);
}

bool is_bool(const s_Type& t)
{
    return (t.vtype == t_bool.vtype);
}

bool isAssignable(const s_Type& host, const s_Type& guest)
{
    return (((host.vtype.canon == guest.vtype.canon) && (host.vtype.modid == guest.vtype.modid) && ((host.vtype.quals & guest.vtype.quals) == host.vtype.quals) && (!(host.vtype.quals & q_mutref) || ((host.vtype.quals & q_MUTINVAR) == (guest.vtype.quals & q_MUTINVAR)))) || is_never(guest));
}

s_Lifetime Lifetime_static()
{
    return s_Lifetime { fu_VEC<int> { fu_VEC<int>::INIT<1> { 0 } } };
}

s_Lifetime Lifetime_temporary()
{
    return s_Lifetime { fu_VEC<int> { fu_VEC<int>::INIT<1> { int(0x7fffffffu) } } };
}

bool isAssignableAsArgument(const s_Type& host, const s_Type& guest)
{
    return isAssignable(host, (((guest.vtype.quals & q_ref) || !(host.vtype.quals & q_ref)) ? s_Type(guest) : add_ref(s_Type(guest), Lifetime_temporary())));
}

bool is_ref(const s_Type& type)
{
    return ((type.vtype.quals & q_ref) != 0);
}

bool is_mutref(const s_Type& type)
{
    return ((type.vtype.quals & q_mutref) != 0);
}

s_Type add_ref(s_Type&& type, const s_Lifetime& lifetime)
{
    type.vtype.quals |= q_ref;
    type.lifetime = ([&]() -> s_Lifetime { { s_Lifetime _ = Lifetime_union(type.lifetime, lifetime); if (_) return _; } fu::fail("add_ref: falsy lifetime"_fu); }());
    return std::move(type);
}

s_Type add_mutref(s_Type&& type, const s_Lifetime& lifetime)
{
    type.vtype.quals |= (q_mutref | q_ref);
    type.lifetime = ([&]() -> s_Lifetime { { s_Lifetime _ = Lifetime_union(type.lifetime, lifetime); if (_) return _; } fu::fail("add_mutref: falsy lifetime"_fu); }());
    return std::move(type);
}

s_Type clear_refs(s_Type&& type)
{
    type.vtype.quals &= ~(q_ref | q_mutref);
    type.lifetime = s_Lifetime{};
    return std::move(type);
}

s_Type clear_mutref(s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    ((type.vtype.quals & q_ref) || !type.lifetime || fu_ASSERT());
    return std::move(type);
}

static s_Type tryClearRefs(const s_Type& type, const bool mutref)
{
    const int refs = (type.vtype.quals & (q_ref | q_mutref));
    return ([&]() -> s_Type { if ((mutref ? (refs == (q_ref | q_mutref)) : !!refs)) return clear_refs(s_Type(type)); else return s_Type{}; }());
}

s_Type tryClear_mutref(const s_Type& type)
{
    return tryClearRefs(type, true);
}

s_Type tryClear_ref(const s_Type& type)
{
    return tryClearRefs(type, bool{});
}

s_Type add_refs(const s_Type& from, s_Type&& to)
{
    to.vtype.quals |= (from.vtype.quals & (q_ref | q_mutref));
    to.lifetime = Lifetime_union(from.lifetime, to.lifetime);
    (to.lifetime || !(to.vtype.quals & (q_ref | q_mutref)) || fu::fail("add_refs: falsy lifetime"_fu));
    return std::move(to);
}

fu_STR serializeType(const s_Type& type)
{
    fu_STR prefix {};
    if (type.vtype.modid)
        prefix += type.vtype.modid;

    if (type.vtype.quals)
        prefix += ("+"_fu + type.vtype.quals);

    return (prefix + type.vtype.canon);
}

fu_STR humanizeType(const s_Type& type)
{
    fu_STR result { type.vtype.canon };
    if (type.vtype.modid)
        result = ((type.vtype.modid + ":"_fu) + result);

    if (type.vtype.quals)
    {
        result += ":"_fu;
        for (int i = 0; i < TAGS.size(); i++)
        {
            if (type.vtype.quals & (1 << i))
                result += (" "_fu + TAGS[i]);

        };
    };
    return result;
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
    if (str[offset] == std::byte('+'))
    {
        offset++;
        quals = parse10i32(offset, str);
    };
    fu_STR canon = fu::slice(str, offset);
    return s_ValueType { int(quals), int(modid), fu_STR(canon) };
}

bool type_isArray(const s_Type& type)
{
    return ((type.vtype.quals & q_rx_resize) && fu::lmatch(type.vtype.canon, "[]"_fu));
}

s_Type createArray(const s_Type& item)
{
    fu_STR canon = ("[]"_fu + serializeType(item));
    const int quals = ((item.vtype.quals & q_rx_copy) | q_rx_resize);
    const int modid = 0;
    return s_Type { s_ValueType { int(quals), int(modid), fu_STR(canon) }, s_Lifetime(item.lifetime), s_Effects{} };
}

s_Type tryClear_array(const s_Type& type)
{
    if (!type_isArray(type))
        return s_Type{};

    s_ValueType vtype = parseType(fu::slice(type.vtype.canon, 2));
    return s_Type { s_ValueType(vtype), s_Lifetime(type.lifetime), s_Effects{} };
}

bool type_isSlice(const s_Type& type)
{
    return ((type.vtype.quals & q_ref) && fu::lmatch(type.vtype.canon, "[]"_fu));
}

s_Type createSlice(const s_Type& item, const s_Lifetime& lifetime)
{
    s_Type out = createArray(item);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref(s_Type(out), lifetime);
}

s_Type tryClear_slice(const s_Type& type)
{
    if (!type_isSlice(type))
        return s_Type{};

    s_ValueType vtype = parseType(fu::slice(type.vtype.canon, 2));
    return s_Type { s_ValueType(vtype), s_Lifetime(type.lifetime), s_Effects{} };
}

bool type_isMap(const s_Type& type)
{
    return fu::lmatch(type.vtype.canon, std::byte('{'));
}

s_Type createMap(const s_Type& key, const s_Type& vtype)
{
    fu_STR canon = ((("{"_fu + serializeType(key)) + "}"_fu) + serializeType(vtype));
    const int quals = ((key.vtype.quals & vtype.vtype.quals) & q_rx_copy);
    const int modid = 0;
    return s_Type { s_ValueType { int(quals), int(modid), fu_STR(canon) }, Lifetime_union(key.lifetime, vtype.lifetime), s_Effects{} };
}

s_MapFields tryClear_map(const s_Type& type)
{
    if (!type_isMap(type))
        return s_MapFields{};

    int depth = 0;
    for (int i = 1; i < type.vtype.canon.size(); i++)
    {
        const std::byte c = type.vtype.canon[i];
        if (c == std::byte('{'))
            depth++;
        else if (c == std::byte('}'))
        {
            if (depth--)
            {
                continue;
            };
            fu_STR ckey = fu::slice(type.vtype.canon, 1, i);
            fu_STR cval = fu::slice(type.vtype.canon, (i + 1));
            return s_MapFields { s_Type { parseType(ckey), s_Lifetime(type.lifetime), s_Effects{} }, s_Type { parseType(cval), s_Lifetime(type.lifetime), s_Effects{} } };
        };
    };
    fu_ASSERT();
}

bool type_has(const s_Type& type, const fu_STR& tag)
{
    const int idx = fu::lfind(TAGS, tag);
    ((idx >= 0) || fu::fail((("Unknown type tag: `"_fu + tag) + "`."_fu)));
    const int mask = (1 << idx);
    return ((type.vtype.quals & mask) == mask);
}

static s_Effects type_inter(const s_Effects& a, const s_Effects& b)
{
    return s_Effects { (a.raw | b.raw) };
}

s_Type type_trySuper(const s_Type& a, const s_Type& b)
{
    if (((a.vtype.canon != b.vtype.canon) || (a.vtype.modid != b.vtype.modid)))
        return (is_never(a) ? s_Type(b) : (is_never(b) ? s_Type(a) : s_Type{}));

    const int quals = (a.vtype.quals & b.vtype.quals);
    return s_Type { s_ValueType { int(quals), int(a.vtype.modid), fu_STR(a.vtype.canon) }, ([&]() -> s_Lifetime { if ((quals & q_ref)) return Lifetime_union(a.lifetime, b.lifetime); else return s_Lifetime{}; }()), type_inter(a.effects, b.effects) };
}

uint64_t u64(const s_Target& t)
{
    return ((uint64_t(t.modid) << 32ull) | uint64_t(t.index));
}

#endif
