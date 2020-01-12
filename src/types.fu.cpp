#include "../lib/never.h"
#include "../lib/str.h"
#include "../lib/vec.h"
#include "../lib/vec/find.h"

struct s_Type;
                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || canon
            || quals
            || modid
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

                                #ifndef DEF_q_floating_pt
                                #define DEF_q_floating_pt
inline const int q_floating_pt = (1 << 8);
                                #endif

                                #ifndef DEF_TAGS
                                #define DEF_TAGS
inline const fu_VEC<fu_STR> TAGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<9> { "mutref"_fu, "ref"_fu, "copy"_fu, "trivial"_fu, "primitive"_fu, "arithmetic"_fu, "integral"_fu, "signed"_fu, "floating_point"_fu } };
                                #endif

bool operator==(const s_Type& a, const s_Type& b)
{
    return ((a.modid == b.modid) && (a.canon == b.canon) && (a.quals == b.quals));
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
inline const int UnsignedInt = Integral;
                                #endif

                                #ifndef DEF_FloatingPt
                                #define DEF_FloatingPt
inline const int FloatingPt = ((Arithmetic | q_floating_pt) | q_signed);
                                #endif

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
inline const s_Type t_i8 = s_Type { "i8"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
inline const s_Type t_i16 = s_Type { "i16"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
inline const s_Type t_i32 = s_Type { "i32"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
inline const s_Type t_i64 = s_Type { "i64"_fu, int(SignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
inline const s_Type t_u8 = s_Type { "u8"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
inline const s_Type t_u16 = s_Type { "u16"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
inline const s_Type t_u32 = s_Type { "u32"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
inline const s_Type t_u64 = s_Type { "u64"_fu, int(UnsignedInt), 0 };
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
inline const s_Type t_f32 = s_Type { "f32"_fu, int(FloatingPt), 0 };
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
inline const s_Type t_f64 = s_Type { "f64"_fu, int(FloatingPt), 0 };
                                #endif

                                #ifndef DEF_t_void
                                #define DEF_t_void
inline const s_Type t_void = s_Type { "void"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
inline const s_Type t_bool = s_Type { "bool"_fu, int(Primitive), 0 };
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
inline const s_Type t_never = s_Type { "never"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_t_template
                                #define DEF_t_template
inline const s_Type t_template = s_Type { "template"_fu, 0, 0 };
                                #endif

                                #ifndef DEF_t_string
                                #define DEF_t_string
inline const s_Type t_string = s_Type { "string"_fu, int(q_copy), 0 };
                                #endif

bool isAssignable(const s_Type& host, const s_Type& guest)
{
    return (((host.canon == guest.canon) && ((host.quals == guest.quals) || (!(host.quals & q_mutref) && ((host.quals & guest.quals) == host.quals)))) || ((guest == t_never) && (guest.quals == 0)));
}

bool isAssignableAsArgument(const s_Type& host, s_Type&& guest)
{
    guest.quals |= q_ref;
    return isAssignable(host, guest);
}

s_Type qadd(const s_Type& type, const int q)
{
    return s_Type { fu_STR(type.canon), (type.canon ? (type.quals | q) : 0), int(type.modid) };
}

s_Type qsub(const s_Type& type, const int q)
{
    return s_Type { fu_STR(type.canon), (type.quals & ~q), int(type.modid) };
}

bool qhas(const s_Type& type, const int q)
{
    return ((type.quals & q) == q);
}

s_Type tryClear(const s_Type& type, const int q)
{
    if ((!type || !qhas(type, q)))
        return s_Type { fu_STR{}, int{}, int{} };

    return qsub(type, q);
}

s_Type add_ref(const s_Type& type)
{
    return qadd(type, q_ref);
}

s_Type add_mutref(const s_Type& type)
{
    return qadd(type, (q_ref | q_mutref));
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
    return qsub(type, (q_ref | q_mutref));
}

s_Type clear_mutref(const s_Type& type)
{
    return qsub(type, q_mutref);
}

s_Type add_refs_from(const s_Type& src, const s_Type& dest)
{
    return qadd(dest, (src.quals & (q_ref | q_mutref)));
}

fu_STR serializeType(const s_Type& type)
{
    if (type.quals)
        return (((("("_fu + type.canon) + "{"_fu) + type.quals) + "})"_fu);

    return (("("_fu + type.canon) + ")"_fu);
}

bool type_has(const s_Type& type, const fu_STR& tag)
{
    const int idx = fu::lfind(TAGS, tag);
    ((idx >= 0) || fu::fail((("Unknown type tag: `"_fu + tag) + "`."_fu)));
    const int mask = (1 << idx);
    return ((type.quals & mask) == mask);
}

s_Type type_tryInter(const s_Type& a, const s_Type& b)
{
    if ((a.canon != b.canon))
        return ((a == t_never) ? s_Type(b) : ((b == t_never) ? s_Type(a) : s_Type { fu_STR{}, int{}, int{} }));

    return s_Type { fu_STR(a.canon), (a.quals & b.quals), int(a.modid) };
}
