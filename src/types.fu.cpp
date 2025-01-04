#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_Type;
struct s_ValueType;
typedef fu::u8 s_VFacts;
struct s_Lifetime;
struct s_TokenIdx;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
enum s_Kind: fu::u8;
struct s_LineColChars;
struct s_ParserOutput;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_Import;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_Set_95BJOojOc45;
struct s_Shape;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Scope;
struct s_Overload;
typedef uint16_t s_SolverStatus;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_COWInside;
typedef unsigned s_MayEscapeVia;
typedef fu::u8 s_ExitPaths;
struct s_Template;
struct s_TEA;
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_CodegenOutput;
struct s_Set_6ARmtH0K78f;
struct s_BuildHacks;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
struct s_Sample_Time;
struct s_NukeOnRebuild;
struct s_Map_cUwKMz9CPyg;
fu::str serializeType_1qjplDUo(const s_ValueType&, fu::view<char>);
[[noreturn]] fu::never BUG_u9Gbkniv(fu::str&&, const s_TokenIdx&, const s_Context&);
bool isCanonAssignable_Ot6wT82z(fu::view<char>, fu::view<char>, const s_TokenIdx&, const s_Context&);
void Lifetime_add_7Yz9ezW2(s_Lifetime&, const s_Lifetime&, bool, const s_TokenIdx&, const s_Context&);
bool is_sliceable_hxWWgdZ1(const s_ValueType&);
s_Lifetime Lifetime_op_field_7Yz9ezW2(const s_Lifetime&, int, int, const s_TokenIdx&, const s_Context&);
fu::str qQUALS_e44UlzzA(const fu::str&);
fu::str qVFACTS_e44UlzzA(const fu::str&);
s_Type tryClear_sliceable_1qjplDUo(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
const fu::str& canon_trySuper_Ot6wT82z(const fu::str&, const fu::str&, const s_TokenIdx&, const s_Context&);
s_Type type_trySuper_9CJmuVSD(const s_Type&, const s_Type&, bool, const s_TokenIdx&, const s_Context&);
s_Lifetime Lifetime_union_7Yz9ezW2(const s_Lifetime&, const s_Lifetime&, bool, const s_TokenIdx&, const s_Context&);
const fu::str& canon_tryIntersect_Ot6wT82z(const fu::str&, const fu::str&, const s_TokenIdx&, const s_Context&);
s_Lifetime Lifetime_inter_7Yz9ezW2(const s_Lifetime&, const s_Lifetime&, const s_TokenIdx&, const s_Context&);
void appendLocalOrGlobal_xQNS19Zn(fu::str&, const s_Target&);
void trimPattern_Ot6wT82z(fu::str&);
unsigned parse7bit(fu::view<char>, int&);

                                #ifndef DEF_s_VFacts
                                #define DEF_s_VFacts
inline constexpr s_VFacts s_VFacts_AlwaysTrue = s_VFacts(1u);
inline constexpr s_VFacts s_VFacts_AlwaysFalse = s_VFacts(2u);
inline constexpr s_VFacts s_VFacts_Typename = s_VFacts(4u);
inline constexpr s_VFacts s_VFacts_LeftAligned = s_VFacts(8u);
inline constexpr s_VFacts s_VFacts_RightAligned = s_VFacts(16u);

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename
    | s_VFacts_LeftAligned
    | s_VFacts_RightAligned;
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

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    unsigned quals;
    s_VFacts vfacts;
    fu::str canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || vfacts
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
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
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

                                #ifndef DEF_s_Kind
                                #define DEF_s_Kind
enum s_Kind: fu::u8
{
    s_Kind_sof = 1u,
    s_Kind_err = 2u,
    s_Kind_eof = 3u,
    s_Kind_id = 4u,
    s_Kind_op = 5u,
    s_Kind_int = 6u,
    s_Kind_real = 7u,
    s_Kind_char = 8u,
    s_Kind_str = 9u,
    s_Kind_bool = 10u,
    s_Kind_definit = 11u,
    s_Kind_empty = 12u,
    s_Kind_struct = 13u,
    s_Kind_union = 14u,
    s_Kind_primitive = 15u,
    s_Kind_flags = 16u,
    s_Kind_enum = 17u,
    s_Kind_fn = 18u,
    s_Kind_copy = 19u,
    s_Kind_move = 20u,
    s_Kind_arrlit = 21u,
    s_Kind_not = 22u,
    s_Kind_call = 23u,
    s_Kind_call_indir = 24u,
    s_Kind_argid = 25u,
    s_Kind_root = 26u,
    s_Kind_block = 27u,
    s_Kind_if = 28u,
    s_Kind_or = 29u,
    s_Kind_and = 30u,
    s_Kind_loop = 31u,
    s_Kind_jump = 32u,
    s_Kind___far_jump = 33u,
    s_Kind_defer = 34u,
    s_Kind_try = 35u,
    s_Kind_let = 36u,
    s_Kind_letdef = 37u,
    s_Kind_typecast = 38u,
    s_Kind_typeassert = 39u,
    s_Kind_typeparam = 40u,
    s_Kind_unwrap = 41u,
    s_Kind_pragma = 42u,
    s_Kind_break = 43u,
    s_Kind_return = 44u,
    s_Kind_continue = 45u,
    s_Kind_import = 46u,
    s_Kind_addroffn = 47u,
    s_Kind_forfieldsof = 48u,
    s_Kind_members = 49u,
    s_Kind_fnbranch = 50u,
    s_Kind_pattern = 51u,
    s_Kind_typeunion = 52u,
    s_Kind_typetag = 53u,
    s_Kind___relaxed = 54u,
    s_Kind___convert = 55u,
    s_Kind___preceding_ref_arg = 56u,
    s_Kind___serialized_type = 57u,
    s_Kind___serialized_addrof_type_fn = 58u,
    s_Kind___litfix_bound = 59u,
    s_Kind___no_kind_yet = 60u,
    s_Kind___tombstone = 61u,
    s_Kind_type = 62u,
    s_Kind_var = 63u,
    s_Kind_field = 64u,
    s_Kind_enumv = 65u,
    s_Kind_template = 66u,
    s_Kind___native = 67u,
    s_Kind_inline = 68u,
};
                                #endif

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = s_DeclAsserts(1u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = s_DeclAsserts(2u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_TRIVIAL = s_DeclAsserts(4u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NODISCARD = s_DeclAsserts(8u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = s_DeclAsserts(16u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = s_DeclAsserts(32u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_FX = s_DeclAsserts(64u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = s_DeclAsserts(128u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOTHROW = s_DeclAsserts(256u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCRASH = s_DeclAsserts(512u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOIO = s_DeclAsserts(1024u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_FAST = s_DeclAsserts(2048u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOINLINE = s_DeclAsserts(4096u);

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_TRIVIAL
    | s_DeclAsserts_A_NODISCARD
    | s_DeclAsserts_A_PURE
    | s_DeclAsserts_A_PURE_CTX
    | s_DeclAsserts_A_PURE_FX
    | s_DeclAsserts_A_NOFLOW
    | s_DeclAsserts_A_NOTHROW
    | s_DeclAsserts_A_NOCRASH
    | s_DeclAsserts_A_NOIO
    | s_DeclAsserts_A_FAST
    | s_DeclAsserts_A_NOINLINE;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = s_ParseSyntax(1u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL = s_ParseSyntax(2u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ALWAYS_DISCARD = s_ParseSyntax(4u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_NOT_AN_EXPRESSION = s_ParseSyntax(8u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_USING_EXPRESSION = s_ParseSyntax(16u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL
    | s_ParseSyntax_PS_ALWAYS_DISCARD
    | s_ParseSyntax_PS_NOT_AN_EXPRESSION
    | s_ParseSyntax_PS_USING_EXPRESSION;
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_CALL_HAS_DOT = 1u;
inline constexpr s_Flags s_Flags_F_CALL_HAS_ARGPARENS = 2u;
inline constexpr s_Flags s_Flags_F_CALL_HAS_NAMED_ARGS = 4u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 8u;
inline constexpr s_Flags s_Flags_F_TYPENAME = 16u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 32u;
inline constexpr s_Flags s_Flags_F_ARGID_IS_OPTIONAL = 64u;
inline constexpr s_Flags s_Flags_F_LAX = 128u;
inline constexpr s_Flags s_Flags_F_SHADOW = 256u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 512u;
inline constexpr s_Flags s_Flags_F_MUT = 1024u;
inline constexpr s_Flags s_Flags_F_CONST = 2048u;
inline constexpr s_Flags s_Flags_F_VAL = 4096u;
inline constexpr s_Flags s_Flags_F_REF = 8192u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 16384u;
inline constexpr s_Flags s_Flags_F_USING = 32768u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 65536u;
inline constexpr s_Flags s_Flags_F_TEST_painted = 131072u;
inline constexpr s_Flags s_Flags_F_PUB = 262144u;
inline constexpr s_Flags s_Flags_F_EXTERN = 524288u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 1048576u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 2097152u;
inline constexpr s_Flags s_Flags_F_LT_RETURNED = 4194304u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 8388608u;
inline constexpr s_Flags s_Flags_F_INJECTED = 16777216u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 33554432u;
inline constexpr s_Flags s_Flags_F_INLINE = 67108864u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 134217728u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 268435456u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_CALL_HAS_DOT
    | s_Flags_F_CALL_HAS_ARGPARENS
    | s_Flags_F_CALL_HAS_NAMED_ARGS
    | s_Flags_F_OPERATOR
    | s_Flags_F_TYPENAME
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_ARGID_IS_OPTIONAL
    | s_Flags_F_LAX
    | s_Flags_F_SHADOW
    | s_Flags_F_MUSTNAME
    | s_Flags_F_MUT
    | s_Flags_F_CONST
    | s_Flags_F_VAL
    | s_Flags_F_REF
    | s_Flags_F_IMPLICIT
    | s_Flags_F_USING
    | s_Flags_F_CONVERSION
    | s_Flags_F_TEST_painted
    | s_Flags_F_PUB
    | s_Flags_F_EXTERN
    | s_Flags_F_HOTSWAP
    | s_Flags_F_PREDICATE
    | s_Flags_F_LT_RETURNED
    | s_Flags_F_REST_ARG
    | s_Flags_F_INJECTED
    | s_Flags_F_TEMPLATE
    | s_Flags_F_INLINE
    | s_Flags_F_LAMBDA
    | s_Flags_F_COW_INSIDE;
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
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_OOE_RTL = s_SolverStatus(128u);
inline constexpr s_SolverStatus s_SolverStatus_SS_NAME_UNUSED = s_SolverStatus(256u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(512u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MATCHED = s_SolverStatus(1024u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MOVED_FROM = s_SolverStatus(2048u);
inline constexpr s_SolverStatus s_SolverStatus_SS_EXTERNAL_LINKAGE = s_SolverStatus(4096u);
inline constexpr s_SolverStatus s_SolverStatus_SS_OBSERVED_BY_CONV_CACHE = s_SolverStatus(8192u);
inline constexpr s_SolverStatus s_SolverStatus_SS_TODO_FIX_was_rx_resize = s_SolverStatus(16384u);
inline constexpr s_SolverStatus s_SolverStatus_SS_Debug_AllPassesComplete = s_SolverStatus(32768u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_FN_OOE_RTL
    | s_SolverStatus_SS_NAME_UNUSED
    | s_SolverStatus_SS_UNUSED
    | s_SolverStatus_SS_MATCHED
    | s_SolverStatus_SS_MOVED_FROM
    | s_SolverStatus_SS_EXTERNAL_LINKAGE
    | s_SolverStatus_SS_OBSERVED_BY_CONV_CACHE
    | s_SolverStatus_SS_TODO_FIX_was_rx_resize
    | s_SolverStatus_SS_Debug_AllPassesComplete;
                                #endif

                                #ifndef DEF_s_MayEscapeVia
                                #define DEF_s_MayEscapeVia
                                #endif

                                #ifndef DEF_s_ExitPaths
                                #define DEF_s_ExitPaths
inline constexpr s_ExitPaths s_ExitPaths_XP_NonEmptyReturn = s_ExitPaths(1u);
inline constexpr s_ExitPaths s_ExitPaths_XP_EmptyReturn = s_ExitPaths(2u);
inline constexpr s_ExitPaths s_ExitPaths_XP_NoReturn = s_ExitPaths(4u);

inline constexpr s_ExitPaths MASK_s_ExitPaths
    = s_ExitPaths_XP_NonEmptyReturn
    | s_ExitPaths_XP_EmptyReturn
    | s_ExitPaths_XP_NoReturn;
                                #endif

                                #ifndef DEF_s_FxMask
                                #define DEF_s_FxMask
inline constexpr s_FxMask s_FxMask_Fx_NotDeadCode = s_FxMask(1u);
inline constexpr s_FxMask s_FxMask_Fx_NonDeterministic = s_FxMask(2u);
inline constexpr s_FxMask s_FxMask_Fx_DontMoveUp = s_FxMask(4u);
inline constexpr s_FxMask s_FxMask_Fx_DontMoveDown = s_FxMask(8u);
inline constexpr s_FxMask s_FxMask_Fx_Input = s_FxMask(16u);
inline constexpr s_FxMask s_FxMask_Fx_Output = s_FxMask(32u);
inline constexpr s_FxMask s_FxMask_Fx_Throws = s_FxMask(64u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes = s_FxMask(128u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Div0 = s_FxMask(256u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_OOB = s_FxMask(512u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Assert = s_FxMask(1024u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Exit = s_FxMask(2048u);
inline constexpr s_FxMask s_FxMask_Fx_Syscall = s_FxMask(4096u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks = s_FxMask(8192u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks_Alloc = s_FxMask(16384u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks_Await = s_FxMask(32768u);

inline constexpr s_FxMask MASK_s_FxMask
    = s_FxMask_Fx_NotDeadCode
    | s_FxMask_Fx_NonDeterministic
    | s_FxMask_Fx_DontMoveUp
    | s_FxMask_Fx_DontMoveDown
    | s_FxMask_Fx_Input
    | s_FxMask_Fx_Output
    | s_FxMask_Fx_Throws
    | s_FxMask_Fx_Crashes
    | s_FxMask_Fx_Crashes_Div0
    | s_FxMask_Fx_Crashes_OOB
    | s_FxMask_Fx_Crashes_Assert
    | s_FxMask_Fx_Crashes_Exit
    | s_FxMask_Fx_Syscall
    | s_FxMask_Fx_Blocks
    | s_FxMask_Fx_Blocks_Alloc
    | s_FxMask_Fx_Blocks_Await;
                                #endif

                                #ifndef DEF_s_SolverNotes
                                #define DEF_s_SolverNotes
inline constexpr s_SolverNotes s_SolverNotes_N_FnRecursion = 1;
inline constexpr s_SolverNotes s_SolverNotes_N_FnResolve = 2;
inline constexpr s_SolverNotes s_SolverNotes_N_FnReopen = 4;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeRecursion = 8;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeResolve = 16;
inline constexpr s_SolverNotes s_SolverNotes_N_TypeReopen = 32;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCode = 64;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadCall = 128;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLet = 256;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadArrlit = 512;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLoopInit = 1024;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadConv = 2048;
inline constexpr s_SolverNotes s_SolverNotes_N_NonTrivAutoCopy = 4096;
inline constexpr s_SolverNotes s_SolverNotes_N_RelaxRespec = 8192;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedImplicit = 16384;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedCall = 32768;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedDefer = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedLet = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_AARMustSeq = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_AARSoftRisk = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_McomUnwrapsLetdef = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 268435456;
inline constexpr s_SolverNotes s_SolverNotes_N_COWRestrict = 536870912;

inline constexpr s_SolverNotes MASK_s_SolverNotes
    = s_SolverNotes_N_FnRecursion
    | s_SolverNotes_N_FnResolve
    | s_SolverNotes_N_FnReopen
    | s_SolverNotes_N_TypeRecursion
    | s_SolverNotes_N_TypeResolve
    | s_SolverNotes_N_TypeReopen
    | s_SolverNotes_N_DeadCode
    | s_SolverNotes_N_DeadCall
    | s_SolverNotes_N_DeadLet
    | s_SolverNotes_N_DeadArrlit
    | s_SolverNotes_N_DeadLoopInit
    | s_SolverNotes_N_DeadConv
    | s_SolverNotes_N_NonTrivAutoCopy
    | s_SolverNotes_N_RelaxRespec
    | s_SolverNotes_N_UnusedImplicit
    | s_SolverNotes_N_UnusedCall
    | s_SolverNotes_N_UnusedDefer
    | s_SolverNotes_N_UnusedTry
    | s_SolverNotes_N_UnusedAndOr
    | s_SolverNotes_N_UnusedIfElse
    | s_SolverNotes_N_UnusedArrlit
    | s_SolverNotes_N_UnusedLet
    | s_SolverNotes_N_BckMustSeq
    | s_SolverNotes_N_AARMustSeq
    | s_SolverNotes_N_AARSoftRisk
    | s_SolverNotes_N_MoveMustSeq
    | s_SolverNotes_N_McomUnwrapsLetdef
    | s_SolverNotes_N_SD_HasStaticInit
    | s_SolverNotes_N_SD_ExternPrivates
    | s_SolverNotes_N_COWRestrict;
                                #endif

                                #ifndef DEF_s_CGDefects
                                #define DEF_s_CGDefects
inline constexpr s_CGDefects s_CGDefects_GNUStmtExpr = s_CGDefects(1u);
inline constexpr s_CGDefects s_CGDefects_Goto = s_CGDefects(2u);
inline constexpr s_CGDefects s_CGDefects_PointlessMustSeq = s_CGDefects(4u);
inline constexpr s_CGDefects s_CGDefects_LocalConstBool = s_CGDefects(8u);
inline constexpr s_CGDefects s_CGDefects_ConstCast = s_CGDefects(16u);
inline constexpr s_CGDefects s_CGDefects_PointlessLocal = s_CGDefects(32u);
inline constexpr s_CGDefects s_CGDefects_IrrelevantLiteral = s_CGDefects(64u);
inline constexpr s_CGDefects s_CGDefects_DuplicateFunctions = s_CGDefects(128u);

inline constexpr s_CGDefects MASK_s_CGDefects
    = s_CGDefects_GNUStmtExpr
    | s_CGDefects_Goto
    | s_CGDefects_PointlessMustSeq
    | s_CGDefects_LocalConstBool
    | s_CGDefects_ConstCast
    | s_CGDefects_PointlessLocal
    | s_CGDefects_IrrelevantLiteral
    | s_CGDefects_DuplicateFunctions;
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

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu::vec<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Sample_Time
                                #define DEF_s_Sample_Time
struct s_Sample_Time
{
    double time;
    explicit operator bool() const noexcept
    {
        return false
            || time
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOrder
                                #define DEF_s_ModuleOrder
struct s_ModuleOrder
{
    int dep_depth;
    explicit operator bool() const noexcept
    {
        return false
            || dep_depth
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEA
                                #define DEF_s_TEA
struct s_TEA
{
    unsigned v0;
    unsigned v1;
    explicit operator bool() const noexcept
    {
        return false
            || v0
            || v1
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu::str id;
    uint64_t _packed;
    explicit operator bool() const noexcept
    {
        return false
            || id
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu::vec<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Set_95BJOojOc45
                                #define DEF_s_Set_95BJOojOc45
struct s_Set_95BJOojOc45
{
    fu::vec<int> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Set_6ARmtH0K78f
                                #define DEF_s_Set_6ARmtH0K78f
struct s_Set_6ARmtH0K78f
{
    fu::vec<fu::str> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LineColChars
                                #define DEF_s_LineColChars
struct s_LineColChars
{
    int line;
    int col;
    int chars;
    explicit operator bool() const noexcept
    {
        return false
            || line
            || col
            || chars
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

                                #ifndef DEF_s_Shape
                                #define DEF_s_Shape
struct s_Shape
{
    fu::str basePrim;
    uint64_t non_triv_mask;
    uint64_t hash;
    int flatCount;
    int declDepth;
    explicit operator bool() const noexcept
    {
        return false
            || basePrim
            || non_triv_mask
            || hash
            || flatCount
            || declDepth
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu::vec<s_Overload> overloads;
    fu::vec<s_Extended> extended;
    fu::vec<s_ScopeItem> items;
    fu::vec<s_ScopeItem> implicits;
    fu::vec<s_ScopeItem> globals;
    fu::vec<int> imports;
    fu::vec<int> privates;
    fu::vec<s_Target> usings;
    fu::vec<s_Target> converts;
    int pub_items;
    int pub_implicits;
    int pub_globals;
    int pub_converts;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || overloads
            || extended
            || items
            || implicits
            || globals
            || imports
            || privates
            || usings
            || converts
            || pub_items
            || pub_implicits
            || pub_globals
            || pub_converts
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Profile
                                #define DEF_s_Profile
struct s_Profile
{
    s_Sample_Time now;
    explicit operator bool() const noexcept
    {
        return false
            || now
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_Kind kind;
    s_LineColChars lcc;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_cUwKMz9CPyg
                                #define DEF_s_Map_cUwKMz9CPyg
struct s_Map_cUwKMz9CPyg
{
    s_Set_6ARmtH0K78f keys;
    fu::vec<fu::str> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Import
                                #define DEF_s_Import
struct s_Import
{
    s_TokenIdx token;
    fu::str pattern;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || token
            || pattern
            || modid
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BuildHacks
                                #define DEF_s_BuildHacks
struct s_BuildHacks
{
    s_Set_6ARmtH0K78f link;
    s_Set_6ARmtH0K78f include_dirs;
    s_Set_6ARmtH0K78f extra_sources;
    explicit operator bool() const noexcept
    {
        return false
            || link
            || include_dirs
            || extra_sources
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    s_Kind kind;
    fu::str name;
    s_Target target;
    fu::vec<s_ScopeItem> items;
    fu::vec<s_ScopeItem> implicits;
    s_Set_95BJOojOc45 imports;
    fu::vec<s_Target> converts;
    s_Shape shape;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_COWInside
                                #define DEF_s_COWInside
struct s_COWInside
{
    s_ValueType vtype;
    s_TokenIdx token;
    int argTarget;
    s_MayEscapeVia mayEscapeVia;
    s_ExitPaths exitPaths;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || token
            || argTarget
            || mayEscapeVia
            || exitPaths
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    s_Kind kind;
    s_DeclAsserts asserts;
    s_ParseSyntax syntax;
    s_Flags flags;
    fu::str value;
    fu::vec<s_Node> items;
    s_TokenIdx token;
    s_Node(const s_Node&) = default;
    s_Node(s_Node&&) = default;
    s_Node& operator=(s_Node&&) = default;
    s_Node& operator=(const s_Node& selfrec) { return *this = s_Node(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu::vec<int> imports;
    explicit operator bool() const noexcept
    {
        return false
            || node
        ;
    }
};
                                #endif

                                #ifndef DEF_s_NukeOnRebuild
                                #define DEF_s_NukeOnRebuild
struct s_NukeOnRebuild
{
    s_Map_cUwKMz9CPyg files;
    s_Map_cUwKMz9CPyg fuzzy;
    explicit operator bool() const noexcept
    {
        return false
            || files
            || fuzzy
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ParserOutput
                                #define DEF_s_ParserOutput
struct s_ParserOutput
{
    s_Node root;
    fu::vec<s_Import> imports;
    fu::vec<fu::str> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || imports
            || warnings
        ;
    }
};
                                #endif

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu::str src;
    s_Set_6ARmtH0K78f includes_headers;
    s_BuildHacks hacks;
    s_Set_95BJOojOc45 testsuite_modids;
    s_CGDefects defects;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || includes_headers
            || hacks
            || testsuite_modids
            || defects
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_Kind kind;
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

                                #ifndef DEF_s_ModuleInputs
                                #define DEF_s_ModuleInputs
struct s_ModuleInputs
{
    fu::str src;
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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    s_Kind kind;
    s_Flags flags;
    s_SolverStatus status;
    s_DeclAsserts asserts;
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

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int min;
    int max;
    fu::vec<s_Argument> args;
    fu::vec<s_COWInside> cows_inside;
    s_Target spec_of;
    s_Template tEmplate;
    fu::vec<s_Overload> args_n_locals;
    s_TEA sighash;
    s_FxMask fx_mask;
    int args_neg;
    explicit operator bool() const noexcept
    {
        return false
            || tEmplate
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
    s_SolverNotes notes;
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu::str name;
    fu::str autocall;
    s_Type type;
    s_SolvedNode dEfault;
    s_Target target;
    s_Flags flags;
    unsigned written_to;
    s_BitSet may_invalidate;
    s_BitSet may_alias;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || target
            || flags
            || written_to
            || may_invalidate
            || may_alias
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu::str fudir;
    fu::str base_dir;
    fu::vec<s_Module> modules;
    fu::vec<int> dep_order;
    s_NukeOnRebuild nuke;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || fudir
            || base_dir
            || modules
            || dep_order
            || nuke
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu::vec<s_Struct> types;
    s_SolverOutput solve;
    s_CodegenOutput cpp;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || types
            || solve
            || cpp
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    int modid;
    fu::str fname;
    s_ModuleInputs in;
    s_ModuleOrder order;
    s_ModuleOutputs out;
    s_ModuleStats stats;
    s_Profile profile;
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
            || order
            || out
            || stats
            || profile
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_q_TAGS_bitsize
                                #define DEF_q_TAGS_bitsize
inline constexpr int q_TAGS_bitsize = 3;
                                #endif

                                #ifndef DEF_q_non_compund
                                #define DEF_q_non_compund
extern const unsigned q_non_compund = (unsigned(1) << unsigned(q_TAGS_bitsize));
                                #endif

                                #ifndef DEF_TAGS
                                #define DEF_TAGS
extern const fu::vec<fu::str> TAGS fu_INIT_PRIORITY(1009) = fu::vec<fu::str> { fu::slate<3, fu::str> { "mutref"_fu, "copy"_fu, "resize"_fu } };
                                #endif

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
extern const unsigned q_mutref;
                                #endif

                                #ifndef DEF_q_USAGE
                                #define DEF_q_USAGE
extern const unsigned q_USAGE;
                                #endif

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const unsigned RELAX_before_bck = (q_mutref | q_USAGE);
                                #endif

                                #ifndef DEF_q_TAGS
                                #define DEF_q_TAGS
extern const unsigned q_TAGS;
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const unsigned RELAX_all = (q_TAGS | q_USAGE);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
extern const unsigned q_rx_copy;
                                #endif

s_Type Primitive(const fu::str& canon)
{
    return s_Type { s_ValueType { (q_rx_copy | q_non_compund), s_VFacts{}, fu::str(canon) }, s_Lifetime{} };
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8 fu_INIT_PRIORITY(1009) = Primitive("i8"_fu);
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16 fu_INIT_PRIORITY(1009) = Primitive("i16"_fu);
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32 fu_INIT_PRIORITY(1009) = Primitive("i32"_fu);
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64 fu_INIT_PRIORITY(1009) = Primitive("i64"_fu);
                                #endif

                                #ifndef DEF_t_i128
                                #define DEF_t_i128
extern const s_Type t_i128 fu_INIT_PRIORITY(1009) = Primitive("i128"_fu);
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8 fu_INIT_PRIORITY(1009) = Primitive("u8"_fu);
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16 fu_INIT_PRIORITY(1009) = Primitive("u16"_fu);
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32 fu_INIT_PRIORITY(1009) = Primitive("u32"_fu);
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64 fu_INIT_PRIORITY(1009) = Primitive("u64"_fu);
                                #endif

                                #ifndef DEF_t_u128
                                #define DEF_t_u128
extern const s_Type t_u128 fu_INIT_PRIORITY(1009) = Primitive("u128"_fu);
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32 fu_INIT_PRIORITY(1009) = Primitive("f32"_fu);
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64 fu_INIT_PRIORITY(1009) = Primitive("f64"_fu);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool fu_INIT_PRIORITY(1009) = Primitive("b8"_fu);
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte fu_INIT_PRIORITY(1009) = Primitive("c8"_fu);
                                #endif

                                #ifndef DEF_t_proposition
                                #define DEF_t_proposition
extern const s_Type t_proposition fu_INIT_PRIORITY(1009) = s_Type { s_ValueType { q_USAGE, s_VFacts{}, fu::str(t_bool.vtype.canon) }, s_Lifetime{} };
                                #endif

s_Type NotSure(const fu::str& canon, const unsigned quals)
{
    return s_Type { s_ValueType { quals, s_VFacts{}, fu::str(canon) }, s_Lifetime{} };
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void fu_INIT_PRIORITY(1009) = NotSure("void"_fu, 0u);
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never fu_INIT_PRIORITY(1009) = NotSure("never"_fu, 0u);
                                #endif

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes fu_INIT_PRIORITY(1009) = NotSure("zeroes"_fu, 0u);
                                #endif

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
extern const unsigned q_rx_resize;
                                #endif

                                #ifndef DEF_t_AssumeNever_WhileSolvingRecursion
                                #define DEF_t_AssumeNever_WhileSolvingRecursion
extern const s_Type t_AssumeNever_WhileSolvingRecursion fu_INIT_PRIORITY(1009) = NotSure("never"_fu, q_rx_resize);
                                #endif

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
inline constexpr bool CANNOT_definit_mutrefs = true;
                                #endif

s_Type createArray_9CJmuVSD(const s_Type& item)
{
    /*MOV*/ fu::str canon = (("["_fu + serializeType_1qjplDUo(item.vtype, "createArray"_fu)) + "]"_fu);
    const unsigned quals = (((item.vtype.quals & q_rx_copy) | q_rx_resize) | q_non_compund);
    return s_Type { s_ValueType { quals, s_VFacts{}, static_cast<fu::str&&>(canon) }, s_Lifetime(item.lifetime) };
}

                                #ifndef DEF_t_string
                                #define DEF_t_string
extern const s_Type t_string fu_INIT_PRIORITY(1009) = createArray_9CJmuVSD(t_byte);
                                #endif

                                #ifndef DEF_Lifetime_static_immoveable
                                #define DEF_Lifetime_static_immoveable
extern const s_Lifetime Lifetime_static_immoveable;
                                #endif

s_Type set_lifetime(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime)
{
    type.lifetime = lifetime;
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_t_string_literal
                                #define DEF_t_string_literal
extern const s_Type t_string_literal fu_INIT_PRIORITY(1009) = set_lifetime(s_Type(t_string), Lifetime_static_immoveable);
                                #endif

                                #ifndef DEF_str_5sbFsJUspf0
                                #define DEF_str_5sbFsJUspf0
inline fu::str str_5sbFsJUs(const s_VFacts n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & s_VFacts_AlwaysTrue)
            res += ("AlwaysTrue"_fu + ", "_fu);

        if (n & s_VFacts_AlwaysFalse)
            res += ("AlwaysFalse"_fu + ", "_fu);

        if (n & s_VFacts_Typename)
            res += ("Typename"_fu + ", "_fu);

        if (n & s_VFacts_LeftAligned)
            res += ("LeftAligned"_fu + ", "_fu);

        if (n & s_VFacts_RightAligned)
            res += ("RightAligned"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_x3Cx3E_XrkW2YUZsRk
                                #define DEF_x3Cx3E_XrkW2YUZsRk
inline int x3Cx3E_XrkW2YUZ(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_OFzwR3BaA9j
                                #define DEF_x3Cx3E_OFzwR3BaA9j
inline int x3Cx3E_OFzwR3Ba(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_bv5nK4Klcs3
                                #define DEF_x3Cx3E_bv5nK4Klcs3
inline int x3Cx3E_bv5nK4Kl(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_XrkW2YUZ(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_OFzwR3Ba(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_KFMeZhJSBE8
                                #define DEF_x3Dx3D_KFMeZhJSBE8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

bool propositionOK_9CJmuVSD(const s_Type& type, const bool vfactsOK, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!vfactsOK && type.vtype.vfacts)
        BUG_u9Gbkniv(x7E_3lDd4lqo("propositionOK seeing vfacts: "_fu, str_5sbFsJUs(type.vtype.vfacts)), _here, ctx);
    else if (!type.lifetime)
        return type.vtype.canon == t_bool.vtype.canon;
    else
        return false;

}

bool is_void_9CJmuVSD(const s_ValueType& t)
{
    return t.canon == t_void.vtype.canon;
}

bool is_never_9CJmuVSD(const s_ValueType& t)
{
    return t.canon == t_never.vtype.canon;
}

bool is_zeroes_9CJmuVSD(const s_ValueType& t)
{
    return t.canon == t_zeroes.vtype.canon;
}

bool is_void_or_propositionOK_9CJmuVSD(const s_Type& type, const bool vfactsOK, const s_TokenIdx& _here, const s_Context& ctx)
{
    return propositionOK_9CJmuVSD(type, vfactsOK, _here, ctx) || is_void_9CJmuVSD(type.vtype);
}

unsigned is_AssumeNever_WhileSolvingRecursion_9CJmuVSD(const s_ValueType& t)
{
    if (t.canon == "never"_fu)
        return t.quals & q_rx_resize;
    else
        return 0u;

}

bool is_rx_copy_9CJmuVSD(const s_ValueType& t)
{
    return !!(t.quals & q_rx_copy);
}

bool is_rx_resize_9CJmuVSD(const s_ValueType& t)
{
    return !!(t.quals & q_rx_copy);
}

bool areVFactsAssignable(const s_VFacts host, const s_VFacts guest, const s_TokenIdx& _here, const s_Context& ctx)
{

    {
        const s_VFacts h = s_VFacts((host & s_VFacts(~s_VFacts_Typename)));
        const s_VFacts g = s_VFacts((guest & s_VFacts(~s_VFacts_Typename)));
        if (!(s_VFacts((h & g)) == h))
            BUG_u9Gbkniv(x7E_3lDd4lqo((x7E_3lDd4lqo("areVFactsAssignable: vfacts mismatch: "_fu, str_5sbFsJUs(host)) + " != "_fu), str_5sbFsJUs(guest)), _here, ctx);

    };
    return s_VFacts((host & guest)) == host;
}

bool areQualsAssignable(const unsigned host, const unsigned guest)
{
    return (host & guest) == host;
}

bool isAssignableAsArgument_9CJmuVSD(const s_ValueType& host, const s_ValueType& guest, const bool DONT_match_zeroes, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (host && guest)
        return areVFactsAssignable(host.vfacts, guest.vfacts, _here, ctx) && ((areQualsAssignable(host.quals, guest.quals) && isCanonAssignable_Ot6wT82z(host.canon, guest.canon, _here, ctx)) || (!DONT_match_zeroes && is_zeroes_9CJmuVSD(guest) && !(host.quals & q_mutref) && !is_never_9CJmuVSD(host)));
    else
        BUG_u9Gbkniv("isAssignableAsArgument: !host || !guest"_fu, _here, ctx);

}

bool isLifetimeAssignable(const s_Lifetime& host, const s_Lifetime& guest)
{
    return !host || !!guest;
}

bool isAssignable_9CJmuVSD(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes, const bool asArgument, const s_TokenIdx& _here, const s_Context& ctx)
{
    return isAssignableAsArgument_9CJmuVSD(host.vtype, guest.vtype, DONT_match_zeroes, _here, ctx) && (asArgument || isLifetimeAssignable(host.lifetime, guest.lifetime));
}

bool is_ref_9CJmuVSD(const s_Type& type)
{
    return !!type.lifetime;
}

bool is_mutref_9CJmuVSD(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    const bool is_mutref = !!(type.vtype.quals & q_mutref);
    if (is_mutref && !is_ref_9CJmuVSD(type))
    {
        BUG_u9Gbkniv("is_mutref: Empty lifetime, but q_mutref set"_fu, _here, ctx);
    }
    else
        return is_mutref;

}

s_Type add_ref_9CJmuVSD(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    Lifetime_add_7Yz9ezW2(type.lifetime, lifetime, false, _here, ctx);
    if (type.lifetime)
        return static_cast<s_Type&&>(type);
    else
    {
        BUG_u9Gbkniv("add_ref: Empty lifetime"_fu, _here, ctx);
    };
}

s_Type add_mutref_9CJmuVSD(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    type.vtype.quals |= q_mutref;
    Lifetime_add_7Yz9ezW2(type.lifetime, lifetime, false, _here, ctx);
    if (type.lifetime)
        return static_cast<s_Type&&>(type);
    else
    {
        BUG_u9Gbkniv("add_mutref: Empty lifetime"_fu, _here, ctx);
    };
}

                                #ifndef DEF_Lifetime_temporary
                                #define DEF_Lifetime_temporary
extern const s_Lifetime Lifetime_temporary;
                                #endif

void ref_anonymize_9CJmuVSD(s_Type& type)
{
    if (is_ref_9CJmuVSD(type))
    {
        type.lifetime = Lifetime_temporary;
    };
}

s_Type clear_vfacts_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type.vtype.vfacts = s_VFacts{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_refs_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    type.lifetime = s_Lifetime{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_mutref_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_Lifetime_static_moveable
                                #define DEF_Lifetime_static_moveable
extern const s_Lifetime Lifetime_static_moveable;
                                #endif

s_Type definitType_9CJmuVSD(/*MOV*/ s_Type&& type, const bool asTypename, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!type || is_never_9CJmuVSD(type.vtype))
        type = t_zeroes;

    type.vtype.quals &= ~q_mutref;
    if (is_ref_9CJmuVSD(type))
    {
        type.lifetime = Lifetime_static_moveable;
    };
    if (is_never_9CJmuVSD(type.vtype))
        BUG_u9Gbkniv("Cannot definit type never."_fu, _here, ctx);
    else
    {
        type.vtype.vfacts = s_VFacts((s_VFacts_AlwaysFalse | (asTypename ? s_VFacts_Typename : s_VFacts{})));
        if (is_sliceable_hxWWgdZ1(type.vtype))
            type.vtype.vfacts |= s_VFacts((s_VFacts_LeftAligned | s_VFacts_RightAligned));

        return static_cast<s_Type&&>(type);
    };
}

s_Type tryClearRefs(const s_Type& type, const bool mutref, const s_TokenIdx& _here, const s_Context& ctx)
{
    if ((mutref ? is_mutref_9CJmuVSD(type, _here, ctx) : is_ref_9CJmuVSD(type)))
        return clear_refs_9CJmuVSD(s_Type(type));
    else
    {
        return s_Type{};
    };
}

s_Type tryClear_mutref_9CJmuVSD(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, true, _here, ctx);
}

s_Type tryClear_ref_9CJmuVSD(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, false, _here, ctx);
}

s_Type make_field_reference_9CJmuVSD(const unsigned quals, const s_Lifetime& lifetime, /*MOV*/ s_Type&& to, const int memberFlatOffset, const int memberFlatCount, const s_TokenIdx& _here, const s_Context& ctx)
{
    to.vtype.quals |= (quals & q_mutref);
    Lifetime_add_7Yz9ezW2(to.lifetime, Lifetime_op_field_7Yz9ezW2(lifetime, memberFlatCount, memberFlatOffset, _here, ctx), false, _here, ctx);
    if (is_sliceable_hxWWgdZ1(to.vtype))
        to.vtype.vfacts |= s_VFacts((s_VFacts_LeftAligned | s_VFacts_RightAligned));

    return static_cast<s_Type&&>(to);
}

s_Type make_copyable_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type.vtype.quals |= q_rx_copy;
    return static_cast<s_Type&&>(type);
}

s_Type make_non_copyable_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_rx_copy;
    return static_cast<s_Type&&>(type);
}

bool is_rx_move_9CJmuVSD(const s_Type& type)
{
    if (is_sliceable_hxWWgdZ1(type.vtype))
        return !!(type.vtype.quals & q_rx_resize);
    else
        return true;

}

s_Type make_moveable_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    if (is_sliceable_hxWWgdZ1(type.vtype))
        type.vtype.quals |= q_rx_resize;

    return static_cast<s_Type&&>(type);
}

fu::str explainQuals_9CJmuVSD(const unsigned quals, const s_Lifetime& lifetime)
{
    /*MOV*/ fu::str result {};
    if (!(quals & q_rx_copy))
        result += (qQUALS_e44UlzzA("nocopy"_fu) + ' ');

    if (quals & q_mutref)
        result += (qQUALS_e44UlzzA("mut"_fu) + ' ');
    else if (lifetime)
        result += (qQUALS_e44UlzzA("const"_fu) + ' ');

    if (lifetime || (quals & q_mutref))
        result += (qQUALS_e44UlzzA("ref"_fu) + ' ');

    return /*NRVO*/ result;
}

fu::str explainVFacts_9CJmuVSD(const s_VFacts vfacts)
{
    /*MOV*/ fu::str result {};
    if (vfacts & s_VFacts_AlwaysTrue)
        result += (qVFACTS_e44UlzzA("always-true"_fu) + ' ');

    if (vfacts & s_VFacts_AlwaysFalse)
        result += (qVFACTS_e44UlzzA("always-false"_fu) + ' ');

    if (vfacts & s_VFacts_Typename)
        result += (qVFACTS_e44UlzzA("type"_fu) + ' ');

    return /*NRVO*/ result;
}

s_Type createSlice_9CJmuVSD(const s_Type& item, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ s_Type out = createArray_9CJmuVSD(item);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref_9CJmuVSD(static_cast<s_Type&&>(out), lifetime, _here, ctx);
}

s_Type tryClear_array_9CJmuVSD(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if ((type.vtype.quals & q_rx_resize) != q_rx_resize)
    {
        return s_Type{};
    }
    else
        return tryClear_sliceable_1qjplDUo(type.vtype, _here, ctx, module);

}

bool TODO_FIX_isArray_9CJmuVSD(const s_Type& type)
{
    return (type.vtype.quals & (q_rx_resize | q_rx_copy)) && is_sliceable_hxWWgdZ1(type.vtype);
}

s_Type type_trySuper_9CJmuVSD(const s_Type& a, const s_Type& b, const bool DONT_match_zeroes, const s_TokenIdx& _here, const s_Context& ctx)
{
    const fu::str& canon = canon_trySuper_Ot6wT82z(a.vtype.canon, b.vtype.canon, _here, ctx);
    if (!canon)
    {
        if (is_zeroes_9CJmuVSD(a.vtype) && !DONT_match_zeroes)
            return type_trySuper_9CJmuVSD(b, definitType_9CJmuVSD(s_Type(b), true, _here, ctx), false, _here, ctx);
        else if (is_zeroes_9CJmuVSD(b.vtype) && !DONT_match_zeroes)
            return type_trySuper_9CJmuVSD(a, definitType_9CJmuVSD(s_Type(a), true, _here, ctx), false, _here, ctx);
        else
        {
            return s_Type{};
        };
    }
    else
    {
        const unsigned quals = (a.vtype.quals & b.vtype.quals);
        const s_VFacts vfacts = s_VFacts((a.vtype.vfacts & b.vtype.vfacts));
        /*MOV*/ s_Lifetime lifetime = ((a.lifetime && b.lifetime) ? Lifetime_union_7Yz9ezW2(a.lifetime, b.lifetime, false, _here, ctx) : s_Lifetime{});
        return s_Type { s_ValueType { quals, vfacts, fu::str(canon) }, static_cast<s_Lifetime&&>(lifetime) };
    };
}

s_Type type_tryIntersect_9CJmuVSD(const s_Type& a, const s_Type& b, const s_TokenIdx& _here, const s_Context& ctx)
{
    const fu::str& canon = canon_tryIntersect_Ot6wT82z(a.vtype.canon, b.vtype.canon, _here, ctx);
    if (!canon)
    {
        return s_Type{};
    }
    else
    {
        const unsigned quals = (a.vtype.quals | b.vtype.quals);
        const s_VFacts vfacts = s_VFacts((a.vtype.vfacts | b.vtype.vfacts));
        /*MOV*/ s_Lifetime lifetime = Lifetime_inter_7Yz9ezW2(a.lifetime, b.lifetime, _here, ctx);
        if (!lifetime && (a.lifetime || b.lifetime))
        {
            return s_Type{};
        }
        else
        {
            return s_Type { s_ValueType { quals, vfacts, fu::str(canon) }, static_cast<s_Lifetime&&>(lifetime) };
        };
    };
}

                                #ifndef DEF_starts_8EDTwZj1Fm2
                                #define DEF_starts_8EDTwZj1Fm2
inline bool starts_8EDTwZj1(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool isAddrOfFn_9CJmuVSD(const s_Type& type)
{
    return starts_8EDTwZj1(type.vtype.canon, '@');
}

fu::str packAddrOfFn_9CJmuVSD(fu::view<s_Target> targets)
{
    /*MOV*/ fu::str res = "@"_fu;
    for (int i = 0; i < targets.size(); i++)
        appendLocalOrGlobal_xQNS19Zn(res, targets[i]);

    return /*NRVO*/ res;
}

unsigned speculateStruct_9CJmuVSD(const s_DeclAsserts asserts, const int flatCount)
{
    return (!s_DeclAsserts((asserts & s_DeclAsserts_A_NOCOPY)) ? q_rx_copy : 0u) | ((flatCount != -1) ? q_non_compund : 0u);
}

s_Type despeculateStruct_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~(q_rx_copy | q_USAGE);
    type.vtype.vfacts = s_VFacts{};
    trimPattern_Ot6wT82z(type.vtype.canon);
    return static_cast<s_Type&&>(type);
}

unsigned will_relax_9CJmuVSD(const s_Type& type, const s_Type& slot, const unsigned relax_mask)
{
    return (type.vtype.quals & ~slot.vtype.quals) & relax_mask;
}

unsigned try_relax_9CJmuVSD(s_Type& type, const s_Type& slot, const unsigned relax_mask)
{
    const unsigned will_relax = will_relax_9CJmuVSD(type, slot, relax_mask);
    type.vtype.quals &= ~will_relax;
    return will_relax;
}

void force_relax_9CJmuVSD(s_Type& type, const unsigned relax_mask)
{
    type.vtype.quals &= ~relax_mask;
}

unsigned mask_retval_relaxable_9CJmuVSD(const s_Type& type, const unsigned relaxed_quals, const s_TokenIdx& _here, const s_Context& ctx)
{
    // Hoisted:
    int offset0;

    bool returnsFromArgument = false;
    bool withoutDereferences = false;

    { {

        {
            const s_Lifetime& lifetime = type.lifetime;
            fu::view<char> chars = lifetime.uni0n;
            int offset = 0;
            while (offset < chars.size())
            {
                const unsigned r = parse7bit(chars, offset);
                int BL_5_v {};
                const int sr = (__extension__ (
                {
                    offset0 = (offset + 0);
                    for (; ; )
                    {
                        bool isLastPath = false;
                        bool isFirstSubRegion = true;
                        for (; ; )
                        {
                            const unsigned raw_flatOffset = parse7bit(chars, offset);
                            const bool isLastSubRegion = !(raw_flatOffset & 1u);
                            const unsigned raw_flatCount = (isLastSubRegion ? parse7bit(chars, offset) : 3u);
                            isLastPath = !(raw_flatCount & 1u);
                            if (isLastSubRegion)
                                break;
                            else
                                isFirstSubRegion = false;

                        };
                        if (isLastPath)
                            break;

                    };
                    BL_5_v = (offset0);
                (void)0;}), BL_5_v);
                const bool isArgIdx = ((r & 3u) == 3u);
                fu::view<char> paths = fu::get_view(chars, sr, offset);
                if (!(!isArgIdx))
                {
                    returnsFromArgument = true;
                    int offset_1 = 0;
                    for (; ; )
                    {
                        bool isLastPath_1 = false;
                        bool isFirstSubRegion_1 = true;
                        for (; ; )
                        {
                            const unsigned raw_flatOffset_1 = parse7bit(paths, offset_1);
                            const bool isLastSubRegion_1 = !(raw_flatOffset_1 & 1u);
                            const unsigned raw_flatCount_1 = (isLastSubRegion_1 ? parse7bit(paths, offset_1) : 3u);
                            isLastPath_1 = !(raw_flatCount_1 & 1u);
                            if (isLastSubRegion_1)
                            {

                                {
                                    const bool isFirstSubRegion_2 = isFirstSubRegion_1;
                                    if (!(!isFirstSubRegion_2))
                                    {
                                        withoutDereferences = true;
                                        goto BL_1;
                                    };
                                };
                                break;
                            }
                            else
                                isFirstSubRegion_1 = false;

                        };
                        if (isLastPath_1)
                            break;

                    };
                    if (!(offset_1 == paths.size()))
                        BUG_u9Gbkniv("walkPaths(!tailOK): excess bytes"_fu, _here, ctx);

                };
            };
        };
        if (!returnsFromArgument)
            return 0u;

      } BL_1:;
    };
    const unsigned decay = (withoutDereferences ? (type.vtype.quals & (q_rx_copy | q_rx_resize)) : 0u);
    return (relaxed_quals & q_mutref) | (((relaxed_quals & decay) == decay) ? decay : 0u);
}

s_Type into_Typename_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type = clear_refs_9CJmuVSD(s_Type(type));
    type.vtype.vfacts = s_VFacts_Typename;
    return static_cast<s_Type&&>(type);
}

s_Type relax_typeParam_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    return into_Typename_9CJmuVSD(static_cast<s_Type&&>(type));
}

s_Type clear_Typename_9CJmuVSD(/*MOV*/ s_Type&& type, const bool clearAlwaysFalse)
{
    type.vtype.vfacts &= s_VFacts(~s_VFacts((s_VFacts_Typename | (clearAlwaysFalse ? s_VFacts_AlwaysFalse : s_VFacts{}))));
    return static_cast<s_Type&&>(type);
}

bool is_Typename_9CJmuVSD(const s_Type& type)
{
    return !!s_VFacts((type.vtype.vfacts & s_VFacts_Typename));
}

s_Type clear_all_9CJmuVSD(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_TAGS;
    type.vtype.vfacts = s_VFacts{};
    return static_cast<s_Type&&>(type);
}

bool isIrrelevantOrNever_9CJmuVSD(const s_Type& type)
{
    unsigned BL_1_v {};
    return !(__extension__ (
    {
        const s_ValueType& type_1 = type.vtype;
        BL_1_v = ((type_1.quals & q_USAGE));
    (void)0;}), BL_1_v);
}

bool isIrrelevant_9CJmuVSD(const s_Type& type)
{
    unsigned BL_1_v {};
    if (!(__extension__ (
    {
        const s_ValueType& type_1 = type.vtype;
        BL_1_v = ((type_1.quals & q_USAGE));
    (void)0;}), BL_1_v))
        return !is_never_9CJmuVSD(type.vtype);
    else
        return false;

}

                                #ifndef DEF_q_USAGE_bitsize
                                #define DEF_q_USAGE_bitsize
extern const int q_USAGE_bitsize;
                                #endif

bool USAGE_justOneThing_9CJmuVSD(const unsigned usage, const int flatCount)
{
    if ((flatCount <= q_USAGE_bitsize))
        return __builtin_popcount(usage) == 1;
    else
        return false;

}

#endif
