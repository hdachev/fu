#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>

struct s_Overload;
enum s_kind: fu::u8;
typedef unsigned s_Flags;
typedef uint16_t s_SolverStatus;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
typedef fu::u8 s_VFacts;
struct s_SolvedNode;
struct s_Helpers;
struct s_TokenIdx;
struct s_Target;
unsigned parseVarint_Fc3p3Wmg(int&, fu::view<char>);
void appendVarint_YxEMA0h9(fu::str&, unsigned);

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
{
    s_kind_sof = 1u,
    s_kind_err = 2u,
    s_kind_eof = 3u,
    s_kind_id = 4u,
    s_kind_op = 5u,
    s_kind_int = 6u,
    s_kind_real = 7u,
    s_kind_char = 8u,
    s_kind_str = 9u,
    s_kind_bool = 10u,
    s_kind_copy = 11u,
    s_kind_move = 12u,
    s_kind_arrlit = 13u,
    s_kind_definit = 14u,
    s_kind_empty = 15u,
    s_kind_not = 16u,
    s_kind_call = 17u,
    s_kind_argid = 18u,
    s_kind_root = 19u,
    s_kind_block = 20u,
    s_kind_if = 21u,
    s_kind_or = 22u,
    s_kind_and = 23u,
    s_kind_loop = 24u,
    s_kind_jump = 25u,
    s_kind___far_jump = 26u,
    s_kind_defer = 27u,
    s_kind_try = 28u,
    s_kind_let = 29u,
    s_kind_letdef = 30u,
    s_kind_typecast = 31u,
    s_kind_typeassert = 32u,
    s_kind_typeparam = 33u,
    s_kind_unwrap = 34u,
    s_kind_pragma = 35u,
    s_kind_break = 36u,
    s_kind_return = 37u,
    s_kind_continue = 38u,
    s_kind_import = 39u,
    s_kind_addroffn = 40u,
    s_kind_forfieldsof = 41u,
    s_kind_struct = 42u,
    s_kind_union = 43u,
    s_kind_primitive = 44u,
    s_kind_flags = 45u,
    s_kind_enum = 46u,
    s_kind_members = 47u,
    s_kind_fndef = 48u,
    s_kind_fn = 49u,
    s_kind_fnbranch = 50u,
    s_kind_pattern = 51u,
    s_kind_typeunion = 52u,
    s_kind_typetag = 53u,
    s_kind___relaxed = 54u,
    s_kind___convert = 55u,
    s_kind___preceding_ref_arg = 56u,
    s_kind___no_kind_yet = 57u,
    s_kind___tombstone = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
};
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 2u;
inline constexpr s_Flags s_Flags_F_ACCESS = 4u;
inline constexpr s_Flags s_Flags_F_TYPENAME = 8u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 16u;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 32u;
inline constexpr s_Flags s_Flags_F_LAX = 64u;
inline constexpr s_Flags s_Flags_F_ARG = 128u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 256u;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 512u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 1024u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 2048u;
inline constexpr s_Flags s_Flags_F_MUT = 4096u;
inline constexpr s_Flags s_Flags_F_REF = 8192u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 16384u;
inline constexpr s_Flags s_Flags_F_USING = 32768u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 65536u;
inline constexpr s_Flags s_Flags_F_SHADOW = 131072u;
inline constexpr s_Flags s_Flags_F_PUB = 262144u;
inline constexpr s_Flags s_Flags_F_EXTERN = 524288u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 1048576u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 2097152u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 4194304u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 8388608u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 16777216u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 33554432u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 67108864u;
inline constexpr s_Flags s_Flags_F_INLINE = 134217728u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 268435456u;
inline constexpr s_Flags s_Flags_F_INJECTED = 536870912u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
    | s_Flags_F_TYPENAME
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
    | s_Flags_F_COW_INSIDE
    | s_Flags_F_MOVED_FROM
    | s_Flags_F_CONVERSION
    | s_Flags_F_OPT_ARG
    | s_Flags_F_MUT
    | s_Flags_F_REF
    | s_Flags_F_IMPLICIT
    | s_Flags_F_USING
    | s_Flags_F_MUSTNAME
    | s_Flags_F_SHADOW
    | s_Flags_F_PUB
    | s_Flags_F_EXTERN
    | s_Flags_F_HOTSWAP
    | s_Flags_F_PREDICATE
    | s_Flags_F_NAMED_ARGS
    | s_Flags_F_OOE_RTL
    | s_Flags_F_REST_ARG
    | s_Flags_F_RELAXABLE_REF
    | s_Flags_F_TEMPLATE
    | s_Flags_F_INLINE
    | s_Flags_F_LAMBDA
    | s_Flags_F_INJECTED;
                                #endif

                                #ifndef DEF_s_SolverStatus
                                #define DEF_s_SolverStatus
inline constexpr s_SolverStatus s_SolverStatus_SS_LAZY = s_SolverStatus(1u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DID_START = s_SolverStatus(2u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DIRTY = s_SolverStatus(4u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FINALIZED = s_SolverStatus(8u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UPDATED = s_SolverStatus(16u);
inline constexpr s_SolverStatus s_SolverStatus_SS_TYPE_RECUR = s_SolverStatus(32u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_RECUR = s_SolverStatus(64u);
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = s_SolverStatus(128u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(256u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MATCHED = s_SolverStatus(512u);
inline constexpr s_SolverStatus s_SolverStatus_SS_Debug_AllPassesComplete = s_SolverStatus(1024u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_HOIST
    | s_SolverStatus_SS_UNUSED
    | s_SolverStatus_SS_MATCHED
    | s_SolverStatus_SS_Debug_AllPassesComplete;
                                #endif

                                #ifndef DEF_s_VFacts
                                #define DEF_s_VFacts
inline constexpr s_VFacts s_VFacts_AlwaysTrue = s_VFacts(1u);
inline constexpr s_VFacts s_VFacts_AlwaysFalse = s_VFacts(2u);
inline constexpr s_VFacts s_VFacts_Typename = s_VFacts(4u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename;
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

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    uint64_t _packed;
    explicit operator bool() const noexcept
    {
        return false
            || _packed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu::str uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
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

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    unsigned quals;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || canon
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
    s_VFacts vfacts;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
            || vfacts
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_kind kind;
    s_Helpers helpers;
    s_Flags flags;
    int _loop_start;
    fu::str value;
    fu::vec<s_SolvedNode> items;
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
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    s_kind kind;
    s_Flags flags;
    s_SolverStatus status;
    fu::str name;
    s_Type type;
    s_SolvedNode solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_Quals_bitsize
                                #define DEF_Quals_bitsize
inline constexpr int Quals_bitsize = 32;
                                #endif

bool isRTL_N4q4L7uF(const s_Overload& o)
{
    return !!(o.flags & s_Flags_F_OOE_RTL);
}

void isRTL_set_Dys3hpLB(s_Overload& o, const bool rtl)
{
    if (rtl)
        o.flags |= s_Flags_F_OOE_RTL;
    else
        o.flags &= ~s_Flags_F_OOE_RTL;

}

s_Target Target_2jgCJZJY(const int modid, const int globid, const int locid)
{
    if ((modid >= 0) && (globid > 0) && (locid >= 0))
    {
        return s_Target { ((uint64_t(unsigned(modid)) | (uint64_t(unsigned(globid)) << 20ull)) | (uint64_t(unsigned(locid)) << 40ull)) };
    }
    else
        fu::fail("Target: bad modid/index/locid"_fu);

}

s_Target parseLocalOrGlobal_qtvefzpE(fu::view<char> str, int& offset)
{
    const int modid = int(parseVarint_Fc3p3Wmg(offset, str));
    const int globid = int(parseVarint_Fc3p3Wmg(offset, str));
    const int locid = int(parseVarint_Fc3p3Wmg(offset, str));
    return Target_2jgCJZJY(modid, globid, locid);
}

void appendLocalOrGlobal_bpRG0scY(fu::str& str, const s_Target& target)
{
    if ((int(unsigned((target._packed & 0xfffffull))) >= 0) && (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) > 0) && (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) >= 0))
    {
        appendVarint_YxEMA0h9(str, unsigned(int(unsigned((target._packed & 0xfffffull)))));
        appendVarint_YxEMA0h9(str, unsigned(int(unsigned(((target._packed >> 20ull) & 0xfffffull)))));
        appendVarint_YxEMA0h9(str, unsigned(int(unsigned(((target._packed >> 40ull) & 0xfffffull)))));
    }
    else
        fu::fail("appendLocalOrGlobal: bad modid/globid/locid"_fu);

}

s_Target parseGlobal_qtvefzpE(fu::view<char> str, int& offset)
{
    const int modid = int(parseVarint_Fc3p3Wmg(offset, str));
    const int globid = int(parseVarint_Fc3p3Wmg(offset, str));
    return Target_2jgCJZJY(modid, globid, 0);
}

void appendGlobal_bpRG0scY(fu::str& str, const s_Target& target)
{
    if ((int(unsigned((target._packed & 0xfffffull))) >= 0) && (int(unsigned(((target._packed >> 20ull) & 0xfffffull))) > 0) && !int(unsigned(((target._packed >> 40ull) & 0xfffffull))))
    {
        appendVarint_YxEMA0h9(str, unsigned(int(unsigned((target._packed & 0xfffffull)))));
        appendVarint_YxEMA0h9(str, unsigned(int(unsigned(((target._packed >> 20ull) & 0xfffffull)))));
    }
    else
        fu::fail("appendGlobal: bad modid/globid/locid"_fu);

}

#endif
