#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/vec/concat.h>

struct s_StructCanon;
struct s_Mi;
enum s_kind: fu::i8;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
int basePrimPrefixLen_d7UAjAhk(fu::view<char>);
s_Mi parseMi_mPp6Ulzh(int&, fu::view<char>);
void appendMi_KujYnsPj(fu_STR&, int, int);

                                #ifndef DEF_s_StructCanon
                                #define DEF_s_StructCanon
struct s_StructCanon
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

                                #ifndef DEF_s_Mi
                                #define DEF_s_Mi
struct s_Mi
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

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::i8
{
    s_kind_sof = 1,
    s_kind_id = 2,
    s_kind_op = 3,
    s_kind_int = 4,
    s_kind_real = 5,
    s_kind_char = 6,
    s_kind_str = 7,
    s_kind_err = 8,
    s_kind_eof = 9,
    s_kind_root = 10,
    s_kind_block = 11,
    s_kind_argid = 12,
    s_kind_let = 13,
    s_kind_call = 14,
    s_kind_arrlit = 15,
    s_kind_if = 16,
    s_kind_or = 17,
    s_kind_and = 18,
    s_kind_loop = 19,
    s_kind_break = 20,
    s_kind_return = 21,
    s_kind_continue = 22,
    s_kind_bool = 23,
    s_kind_definit = 24,
    s_kind_import = 25,
    s_kind_defer = 26,
    s_kind_try = 27,
    s_kind_typedef = 28,
    s_kind_typecast = 29,
    s_kind_typeassert = 30,
    s_kind_typeparam = 31,
    s_kind_addroffn = 32,
    s_kind_forfieldsof = 33,
    s_kind_pragma = 34,
    s_kind_void = 35,
    s_kind_struct = 36,
    s_kind_primitive = 37,
    s_kind_flags = 38,
    s_kind_enum = 39,
    s_kind_members = 40,
    s_kind_fn = 41,
    s_kind_fnbranch = 42,
    s_kind_pattern = 43,
    s_kind_typeunion = 44,
    s_kind_typetag = 45,
    s_kind_jump = 46,
    s_kind_empty = 47,
    s_kind_letdef = 48,
    s_kind___relaxed = 49,
    s_kind___convert = 50,
    s_kind_fndef = 51,
    s_kind_copy = 52,
    s_kind_move = 53,
    s_kind___far_jump = 54,
    s_kind___no_kind_yet = 55,
    s_kind_type = 56,
    s_kind_var = 57,
    s_kind_field = 58,
    s_kind_enumv = 59,
    s_kind_template = 60,
    s_kind___native = 61,
    s_kind_inline = 62,
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_ONE_BASED
                                #define DEF_ONE_BASED
inline constexpr int ONE_BASED = 1;
                                #endif

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_StructCanon parseStructCanon_9u6Vl9O2(fu::view<char> canon)
{
    int offset = 1;

    {
        const char c = canon[0];
        if (c != '/')
            offset = basePrimPrefixLen_d7UAjAhk(canon);

    };
    const s_Mi mi = parseMi_mPp6Ulzh(offset, canon);
    if (!(offset == canon.size()))
        fu::fail(x7E((x7E((("parseStructCanon: trailing garbage in `"_fu + canon) + "`: "_fu), fu::i64dec(offset)) + "|"_fu), fu::i64dec(canon.size())));

    return s_StructCanon { int(mi.modid), (mi.index - ONE_BASED) };
}

fu_STR createStructCanon_AFbRJxPd(const s_kind kind, const fu_STR& baseprim, const int modid, const int index, fu::view<char>)
{
    // Hoisted:
    fu_STR x;

    /*MOV*/ fu_STR res = (baseprim ? fu_STR(baseprim) : "/"_fu);
    appendMi_KujYnsPj(res, int(modid), (index + ONE_BASED));
    if (baseprim)
    {
        char& c = res.mutref(0);
        if ((c == 'e') || (c == 'm'))
            fu::fail(("createStructCanon: bad baseprim: "_fu + baseprim));

        if (kind == s_kind_enum)
            c = 'e';
        else if (kind == s_kind_flags)
            c = 'm';

    };
    const s_StructCanon check = parseStructCanon_9u6Vl9O2(res);
    if (!((check.modid == modid) && (check.index == index)))
    {
        const fu_STR* BL_6_v;
        fu::println((fu::slate<1, fu_STR> { fu_STR((__extension__ (
        {
            x = "NOPE!!!!!"_fu;
            BL_6_v = &(x);
        (void)0;}), *BL_6_v)) }));
        parseStructCanon_9u6Vl9O2(res);
        fu::fail("Nope!"_fu);
    };
    return /*NRVO*/ res;
}

                                #ifndef DEF_starts_cnCAmU7Y
                                #define DEF_starts_cnCAmU7Y
inline bool starts_cnCAmU7Y(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isStruct_ZYIX8afu(const s_Type& type)
{
    return starts_cnCAmU7Y(type.vtype.canon, '/');
}

int modidOfOrigin_ZYIX8afu(const s_Type& type)
{
    if (type.vtype.canon[0] == '/')
    {
        /*MOV*/ const s_StructCanon scp = parseStructCanon_9u6Vl9O2(type.vtype.canon);
        return int(scp.modid);
    };
    return 0;
}

#endif
