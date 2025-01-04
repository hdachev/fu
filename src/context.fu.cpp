#include <cstdint>
#include <errno.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/LEGACY_slice.h>

struct s_Struct;
enum s_Kind: fu::u8;
struct s_Target;
struct s_ScopeItem;
struct s_Set_95BJOojOc45;
struct s_Shape;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_LineColChars;
struct s_ParserOutput;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_Import;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Type;
struct s_ValueType;
typedef fu::u8 s_VFacts;
struct s_Lifetime;
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
struct s_Context;
struct s_NukeOnRebuild;
struct s_Map_cUwKMz9CPyg;
struct s_StructCanon;
struct s_Map_cUwKMz9CPyg;
struct s_Set_6ARmtH0K78f;
typedef int s_Errno;
s_StructCanon parseStructCanon_p1TNFlvR(fu::view<char>);
[[noreturn]] fu::never BUG_u9Gbkniv(fu::str&&, const s_TokenIdx&, const s_Context&);
int64_t size_VWJwj7Fs(fu::str&&);
fu::str dirname_qZI0kCzt(const fu::str&);
fu::str resolveFile(const fu::str&, fu::view<char>, s_Context&);
fu::str lower_KPhiKsnb(fu::str&&);
s_Errno read_VWJwj7Fs(fu::str&&, fu::str&, int64_t);
bool is_primitive_hxWWgdZ1(const s_ValueType&);
bool isStruct_p1TNFlvR(const s_ValueType&);
int basePrimPrefixLen_hxWWgdZ1(fu::view<char>);
bool is_sliceable_hxWWgdZ1(const s_ValueType&);
unsigned parseVarint_V5IuMsej(int&, fu::view<char>);
unsigned getMaxUsage_CaGDtmWo(int);
s_Shape getShape_1qjplDUo(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
void appendVarint_V5IuMsej(fu::str&, unsigned);

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

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_Struct& lookupUserType_mut_1qjplDUo(fu::view<char> canon, s_Module& module, const s_TokenIdx& _here, const s_Context& ctx)
{
    const s_StructCanon scp = parseStructCanon_p1TNFlvR(canon);
    if (scp.modid == module.modid)
        return module.out.types.mutref(scp.index);
    else
        BUG_u9Gbkniv((((x7E_3lDd4lqo("lookupUserType_mut: Not from this module ("_fu, fu::i64dec(module.modid)) + ": "_fu) + canon) + ")"_fu), _here, ctx);

}

                                #ifndef DEF_find_yP7FbxFZnZ0
                                #define DEF_find_yP7FbxFZnZ0
inline int find_yP7FbxFZ(fu::view<char> haystack, const char needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_find_tnDs1wBzL75
                                #define DEF_find_tnDs1wBzL75
inline int find_tnDs1wBz(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_yP7FbxFZ(slice, needle);
    return res + ((res < 0) ? 0 : start);
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

                                #ifndef DEF_ends_JkFJYOhRS8a
                                #define DEF_ends_JkFJYOhRS8a
inline bool ends_JkFJYOhR(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

                                #ifndef DEF_has_J81b5Q24qw3
                                #define DEF_has_J81b5Q24qw3
inline bool has_J81b5Q24(fu::view<char> a, const char b)
{
    return (find_yP7FbxFZ(a, b) >= 0);
}
                                #endif

                                #ifndef DEF_get_N5lOqAsgVj8
                                #define DEF_get_N5lOqAsgVj8
inline const fu::str& get_N5lOqAsg(const s_Set_6ARmtH0K78f& _, fu::view<char> key, fu::view<fu::str> values)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
            return values[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return (*(const fu::str*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_tGlvVLoj3Ta
                                #define DEF_get_tGlvVLoj3Ta
inline const fu::str& get_tGlvVLoj(const s_Map_cUwKMz9CPyg& _, fu::view<char> key)
{
    return get_N5lOqAsg(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_ends_AbHOxjqnKH3
                                #define DEF_ends_AbHOxjqnKH3
inline bool ends_AbHOxjqn(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static fu::str tryResolve_1qjplDUo(const fu::str& from, fu::view<char> name, const fu::str& path, s_Context& ctx)
{

    {
        const bool exists = (size_VWJwj7Fs(fu::str(path)) >= 0ll);
        if (exists)
            return fu::str(path);

    };
    fu::str fallback = dirname_qZI0kCzt(from);
    if (!fallback || (fallback.size() >= from.size()))
    {
        if (ends_AbHOxjqn(ctx.fudir, '/'))
        {
            /*MOV*/ fu::str path_1 = ((ctx.fudir + "lib/"_fu) + name);
            const bool exists = (size_VWJwj7Fs(fu::str(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };
        return ""_fu;
    }
    else
        return resolveFile(fallback, name, ctx);

}

                                #ifndef DEF_update_YOXwSOfLHu4
                                #define DEF_update_YOXwSOfLHu4
inline bool update_YOXwSOfL(s_Set_6ARmtH0K78f& _, const fu::str& key, fu::vec<fu::str>& values, const fu::str& value)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
        {
            values.mutref(i) = fu::str(value);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, fu::str(key));
    values.insert(i, fu::str(value));
    return true;
}
                                #endif

                                #ifndef DEF_set_uJ97urEXI1l
                                #define DEF_set_uJ97urEXI1l
inline bool set_uJ97urEX(s_Map_cUwKMz9CPyg& _, const fu::str& key, const fu::str& value)
{
    return update_YOXwSOfL(_.keys, key, _.vals, value);
}
                                #endif

fu::str resolveFile(const fu::str& from, fu::view<char> name, s_Context& ctx)
{
    fu::str path = (from + name);
    const fu::str& cached = get_tGlvVLoj(ctx.nuke.fuzzy, path);
    if (cached)
    {
        if (cached == "\v"_fu)
            return ""_fu;
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str resolve = tryResolve_1qjplDUo(from, name, path, ctx);
        set_uJ97urEX(ctx.nuke.fuzzy, path, (resolve ? fu::str(resolve) : "\v"_fu));
        return /*NRVO*/ resolve;
    };
}

                                #ifndef DEF_run_0ZaEJ1TW8j0
                                #define DEF_run_0ZaEJ1TW8j0
inline static fu::str run_0ZaEJ1TW(const fu::str& from, fu::view<char> name, fu::view<char> alt, fu::view<char> nested, s_Context& ctx)
{
    fu::str _0 {};
    return (_0 = resolveFile(from, name, ctx)) ? static_cast<fu::str&&>(_0) : (_0 = (nested ? resolveFile(from, nested, ctx) : fu::str{})) ? static_cast<fu::str&&>(_0) : (alt ? resolveFile(from, alt, ctx) : fu::str{});
}
                                #endif

                                #ifndef DEF_has_fdEaTHNUjS8
                                #define DEF_has_fdEaTHNUjS8
inline bool has_fdEaTHNU(const s_Set_6ARmtH0K78f& _, fu::view<char> key)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
            return true;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return false;
}
                                #endif

                                #ifndef DEF_has_isDPls5ktWl
                                #define DEF_has_isDPls5ktWl
inline bool has_isDPls5k(const s_Map_cUwKMz9CPyg& _, fu::view<char> key)
{
    return has_fdEaTHNU(_.keys, key);
}
                                #endif

fu::str testSuite_resolvePrepopulatedFile(fu::view<char> from, fu::view<char> name, const s_Context& ctx)
{
    /*MOV*/ fu::str prepopulated = (from + name);
    if (has_isDPls5k(ctx.nuke.files, prepopulated))
        return /*NRVO*/ prepopulated;
    else
    {
        return fu::str{};
    };
}

                                #ifndef DEF_run_JwYxY06GMDf
                                #define DEF_run_JwYxY06GMDf
inline static fu::str run_JwYxY06G(fu::view<char> from, fu::view<char> name, fu::view<char> alt, fu::view<char> nested, const s_Context& ctx)
{
    fu::str _0 {};
    return (_0 = testSuite_resolvePrepopulatedFile(from, name, ctx)) ? static_cast<fu::str&&>(_0) : (_0 = (nested ? testSuite_resolvePrepopulatedFile(from, nested, ctx) : fu::str{})) ? static_cast<fu::str&&>(_0) : (alt ? testSuite_resolvePrepopulatedFile(from, alt, ctx) : fu::str{});
}
                                #endif

fu::str resolveFile_SqDqFcFw(const fu::str& path, s_Context& ctx)
{
    const int fuz_idx = find_yP7FbxFZ(path, '\v');
    if ((fuz_idx > 0) && (fuz_idx < (path.size() - 1)) && (find_tnDs1wBz(path, '\v', (fuz_idx + 1)) < 0))
    {
        fu::str from = fu::slice(path, 0, fuz_idx);
        fu::str name = fu::slice(path, (fuz_idx + 1));
        fu::str alt = ""_fu;
        fu::str nested = ""_fu;
        if (!ends_JkFJYOhR(name, ".fu"_fu))
        {
            const int alt_idx = find_yP7FbxFZ(name, '\t');
            if ((alt_idx > 0) && (alt_idx < (name.size() - 1)) && (find_tnDs1wBz(name, '\t', (alt_idx + 1)) < 0))
            {
                alt = (((fu::get_view_start0(name, alt_idx) + '/') + fu::get_view(name, (alt_idx + 1))) + ".fu"_fu);
                name.shrink(alt_idx);
            };
            nested = (((name + '/') + name) + ".fu"_fu);
            name += ".fu"_fu;
        };
        fu_ASSERT(((from && name) ? !has_J81b5Q24(name, '\v') : false));
        fu::str _0 {};
        /*MOV*/ fu::str file = ((_0 = run_0ZaEJ1TW(from, name, alt, nested, ctx)) ? static_cast<fu::str&&>(_0) : run_JwYxY06G(from, name, alt, nested, ctx));
        if (file)
            return /*NRVO*/ file;

    };
    return fu::str(path);
}

void setFile_1qjplDUo(s_Map_cUwKMz9CPyg& files, const fu::str& path, const fu::str& data)
{
    if (data)
    {
        fu::str caseless = (lower_KPhiKsnb(fu::str(path)) + '\x00');
        fu::view<char> exists = get_tGlvVLoj(files, caseless);
        if (exists)
        {
            fu::fail(((((("Two paths differing only in capitalization were accessed:"_fu + "\n\n\t"_fu) + path) + "\n\n\t"_fu) + exists) + "\n\n\tThis creates confusion on case insensitive file systems."_fu));
        }
        else
            set_uJ97urEX(files, caseless, path);

    };
    set_uJ97urEX(files, path, (data ? fu::str(data) : "\v"_fu));
}

fu::str getFile_1qjplDUo(const fu::str& path, s_Context& ctx)
{
    const fu::str& cached = get_tGlvVLoj(ctx.nuke.files, path);
    if (cached)
    {
        if (cached == "\v"_fu)
            return ""_fu;
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str data {};
        const s_Errno err = read_VWJwj7Fs(fu::str(path), data, 0ll);
        if (err && (err != ENOENT))
            fu::fail((x7E_3lDd4lqo((("getFile: path("_fu + path) + ") err("_fu), fu::i64dec(err)) + ")"_fu));
        else
        {
            setFile_1qjplDUo(ctx.nuke.files, path, data);
            return /*NRVO*/ data;
        };
    };
}

s_Module& getModule_1qjplDUo(const fu::str& fname, s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname)
            return ctx.modules.mutref(i);

    };
    const int i_1 = ctx.modules.size();
    ctx.modules.push(s_Module { i_1, fu::str(fname), s_ModuleInputs{}, s_ModuleOrder{}, s_ModuleOutputs{}, s_ModuleStats{}, s_Profile{} });
    return ctx.modules.mutref(i_1);
}

                                #ifndef DEF_clone_WYOmMh16nBd
                                #define DEF_clone_WYOmMh16nBd
inline int clone_WYOmMh16(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_MQq1QmEfRcl
                                #define DEF_clone_MQq1QmEfRcl
inline const fu::str& clone_MQq1QmEf(const fu::str& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_zar60R7Er6l
                                #define DEF_clone_zar60R7Er6l
inline const s_ModuleInputs& clone_zar60R7E(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_BW5ZEuMhKol
                                #define DEF_clone_BW5ZEuMhKol
inline const s_ModuleOrder& clone_BW5ZEuMh(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_SER9a4o1mFd
                                #define DEF_clone_SER9a4o1mFd
inline const fu::vec<s_Struct>& clone_SER9a4o1(const fu::vec<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_CW5VJZd6CKc
                                #define DEF_clone_CW5VJZd6CKc
inline const s_SolvedNode& clone_CW5VJZd6(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_u3cG3iHTJyg
                                #define DEF_clone_u3cG3iHTJyg
inline const fu::vec<s_Overload>& clone_u3cG3iHT(const fu::vec<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TjGdMugi3U1
                                #define DEF_clone_TjGdMugi3U1
inline const fu::vec<s_Extended>& clone_TjGdMugi(const fu::vec<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_X0vyWrZMCGf
                                #define DEF_clone_X0vyWrZMCGf
inline const fu::vec<s_ScopeItem>& clone_X0vyWrZM(const fu::vec<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_UiVOHRvKu27
                                #define DEF_clone_UiVOHRvKu27
inline const fu::vec<int>& clone_UiVOHRvK(const fu::vec<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_gjeoYDys8kd
                                #define DEF_clone_gjeoYDys8kd
inline const fu::vec<s_Target>& clone_gjeoYDys(const fu::vec<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_2FTYIoAyz2l
                                #define DEF_clone_2FTYIoAyz2l
inline s_Scope clone_2FTYIoAy(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_u3cG3iHT(a.overloads);
        res.extended = clone_TjGdMugi(a.extended);
        res.items = clone_X0vyWrZM(a.items);
        res.implicits = clone_X0vyWrZM(a.implicits);
        res.globals = clone_X0vyWrZM(a.globals);
        res.imports = clone_UiVOHRvK(a.imports);
        res.privates = clone_UiVOHRvK(a.privates);
        res.usings = clone_gjeoYDys(a.usings);
        res.converts = clone_gjeoYDys(a.converts);
        res.pub_items = clone_WYOmMh16(a.pub_items);
        res.pub_implicits = clone_WYOmMh16(a.pub_implicits);
        res.pub_globals = clone_WYOmMh16(a.pub_globals);
        res.pub_converts = clone_WYOmMh16(a.pub_converts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_C1Qhlqa3BD4
                                #define DEF_clone_C1Qhlqa3BD4
inline s_SolverNotes clone_C1Qhlqa3(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TxoZPH7qSZ2
                                #define DEF_clone_TxoZPH7qSZ2
inline s_SolverOutput clone_TxoZPH7q(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_CW5VJZd6(a.root);
        res.scope = clone_2FTYIoAy(a.scope);
        res.notes = clone_C1Qhlqa3(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_nZUtjGKtjak
                                #define DEF_clone_nZUtjGKtjak
inline const s_CodegenOutput& clone_nZUtjGKt(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_lx6X2qShYG3
                                #define DEF_clone_lx6X2qShYG3
inline s_ModuleOutputs clone_lx6X2qSh(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_SER9a4o1(a.types);
        res.solve = clone_TxoZPH7q(a.solve);
        res.cpp = clone_nZUtjGKt(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_YIb6BDdZkpj
                                #define DEF_clone_YIb6BDdZkpj
inline const s_ModuleStats& clone_YIb6BDdZ(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_HRvYlzuk3vb
                                #define DEF_clone_HRvYlzuk3vb
inline const s_Profile& clone_HRvYlzuk(const s_Profile& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_YKwHcLQlQLh
                                #define DEF_clone_YKwHcLQlQLh
inline s_Module clone_YKwHcLQl(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_WYOmMh16(a.modid);
        res.fname = clone_MQq1QmEf(a.fname);
        res.in = clone_zar60R7E(a.in);
        res.order = clone_BW5ZEuMh(a.order);
        res.out = clone_lx6X2qSh(a.out);
        res.stats = clone_YIb6BDdZ(a.stats);
        res.profile = clone_HRvYlzuk(a.profile);
    };
    return /*NRVO*/ res;
}
                                #endif

void setModule_1qjplDUo(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (current.fname == module.fname)
        current = clone_YKwHcLQl(module);
    else
        fu::fail("setModule: module.fname mismatch"_fu);

}

                                #ifndef DEF_x21x3D_ExVC00HnUgl
                                #define DEF_x21x3D_ExVC00HnUgl
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

bool updateFile_1qjplDUo(const fu::str& fname, const s_NukeOnRebuild& old, s_Context& ctx)
{
    fu::view<char> expect = get_tGlvVLoj(old.files, fname);
    fu::str _0 {};
    fu::str actual = ((_0 = getFile_1qjplDUo(fname, ctx)) ? static_cast<fu::str&&>(_0) : "\v"_fu);
    return expect != actual;
}

const s_Struct& lookupUserType_1qjplDUo(const s_StructCanon& scp, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (scp.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[scp.index])) ? *_0 : BUG_u9Gbkniv(fu::str{}, _here, ctx);
    }
    else
    {
        const s_Struct* _1;
        return *(_1 = &(ctx.modules[scp.modid].out.types[scp.index])) ? *_1 : BUG_u9Gbkniv(fu::str{}, _here, ctx);
    };
}

const s_Struct& lookupUserType_SqDqFcFw(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return lookupUserType_1qjplDUo(parseStructCanon_p1TNFlvR(type.canon), module, ctx, _here);
}

bool is_trivial_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return is_primitive_hxWWgdZ1(type) || (isStruct_p1TNFlvR(type) ? !lookupUserType_SqDqFcFw(type, _here, ctx, module).shape.non_triv_mask : false);
}

bool is_reinterpretable_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return is_trivial_1qjplDUo(type, _here, ctx, module);
}

s_StructCanon tryParseStructCanon_1qjplDUo(const s_ValueType& type)
{
    if (isStruct_p1TNFlvR(type) || (is_primitive_hxWWgdZ1(type) ? (basePrimPrefixLen_hxWWgdZ1(type.canon) < type.canon.size()) : false))
        return parseStructCanon_p1TNFlvR(type.canon);
    else
    {
        return s_StructCanon{};
    };
}

const s_Struct& tryLookupUserType_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (isStruct_p1TNFlvR(type) || (is_primitive_hxWWgdZ1(type) ? (basePrimPrefixLen_hxWWgdZ1(type.canon) < type.canon.size()) : false))
        return lookupUserType_SqDqFcFw(type, _here, ctx, module);
    else
        return (*(const s_Struct*)fu::NIL);

}

const s_Set_95BJOojOc45& lookupTypeImports_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return tryLookupUserType_1qjplDUo(type, _here, ctx, module).imports;
}

const fu::vec<s_Target>& lookupTypeConverts_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return tryLookupUserType_1qjplDUo(type, _here, ctx, module).converts;
}

                                #ifndef DEF_clone_gcCEYKiSRO4
                                #define DEF_clone_gcCEYKiSRO4
inline char clone_gcCEYKiS(const char a)
{
    return a;
}
                                #endif

                                #ifndef DEF_map_cwTr87dzEv3
                                #define DEF_map_cwTr87dzEv3
inline fu::str map_cwTr87dz(fu::view<char> a)
{
    /*MOV*/ fu::str res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_gcCEYKiS(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_JEmhYJmC6x1
                                #define DEF_clone_JEmhYJmC6x1
inline fu::str clone_JEmhYJmC(fu::view<char> a)
{
    return map_cwTr87dz(a);
}
                                #endif

int getFlatCount_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Struct& s = tryLookupUserType_1qjplDUo(type, _here, ctx, module);
    if (s)
        return s.shape.flatCount;
    else if (is_primitive_hxWWgdZ1(type) || is_sliceable_hxWWgdZ1(type))
        return 1;
    else
        return 0;

}

s_ValueType parseType_1qjplDUo(fu::view<char> str, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int offset {};
    const unsigned quals = unsigned(parseVarint_V5IuMsej(offset, str));
    /*MOV*/ fu::str canon = clone_JEmhYJmC(fu::get_view(str, offset));
    /*MOV*/ s_ValueType type = s_ValueType { quals, s_VFacts{}, static_cast<fu::str&&>(canon) };
    type.quals |= getMaxUsage_CaGDtmWo(getFlatCount_1qjplDUo(type, _here, ctx, module));
    if (is_primitive_hxWWgdZ1(type))
    {
        if (!(__builtin_popcount(type.quals) == 2))
            BUG_u9Gbkniv((x7E_3lDd4lqo((x7E_3lDd4lqo("parseType: Primitive.quals("_fu, fu::u64dec(quals)) + ").popcount("_fu), fu::i64dec(__builtin_popcount(quals))) + ") != 2"_fu), _here, ctx);

    };
    return /*NRVO*/ type;
}

s_Shape getShape_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    uint64_t hash;
    uint64_t x;

    const s_Struct& s = tryLookupUserType_1qjplDUo(type, _here, ctx, module);
    if (s)
        return s_Shape(s.shape);
    else if (is_primitive_hxWWgdZ1(type))
    {
        uint64_t BL_3_v {};
        return s_Shape { fu::str(type.canon), 0ull, (__extension__ (
        {
            hash =  {};
            for (int i = type.canon.size(); i-- > 0; )
                (hash <<= 8ull) |= uint64_t(fu::u8(type.canon[i]));

            BL_3_v = (hash);
        (void)0;}), BL_3_v), 1, 0 };
    }
    else if (is_sliceable_hxWWgdZ1(type))
    {
        s_ValueType arrT = parseType_1qjplDUo(fu::slice(type.canon, 1, (type.canon.size() - 1)), _here, ctx, module);
        s_Shape item_shape = getShape_1qjplDUo(arrT, _here, ctx, module);
        const uint64_t hash_1 = (x = item_shape.hash, (x ^= (x << 13ull)), (x ^= (x >> 7ull)), (x ^= (x << 17ull)), x);
        return s_Shape { ""_fu, (item_shape.non_triv_mask | (1ull << (hash_1 & 63ull))), hash_1, 1, 0 };
    }
    else
    {
        return s_Shape{};
    };
}

bool is_zst_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return !getFlatCount_1qjplDUo(type, _here, ctx, module);
}

fu::str getShortModuleName_1qjplDUo(const fu::str& fname, const s_TokenIdx& _here, const s_Context& ctx)
{
    const int end = (fname.size() - 3);
    bool found = false;
    for (int i = end; i-- > 0; )
    {
        const char c = fname[i];
        if (!(c != '/'))
        {
            if (found)
                return fu::slice(fname, (i + 1), end);
            else
                found = true;

        };
    };
    BUG_u9Gbkniv(fu::str{}, _here, ctx);
}

                                #ifndef DEF_q_TAGS
                                #define DEF_q_TAGS
extern const unsigned q_TAGS;
                                #endif

fu::str serializeType_1qjplDUo(const s_ValueType& type, fu::view<char> debug)
{
    if (type)
    {
        /*MOV*/ fu::str result {};
        appendVarint_V5IuMsej(result, unsigned((type.quals & q_TAGS)));
        result += (type.canon ? type.canon : fu::fail(("COMPILER BUG: serializeType: No type.canon in: "_fu + debug)));
        return /*NRVO*/ result;
    }
    else
        fu::fail(("COMPILER BUG: serializeType: Falsy type in: "_fu + debug));

}

s_Type tryClear_sliceable_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_sliceable_hxWWgdZ1(type))
    {
        /*MOV*/ s_ValueType vtype = parseType_1qjplDUo(fu::slice(type.canon, 1, (type.canon.size() - 1)), _here, ctx, module);
        return s_Type { static_cast<s_ValueType&&>(vtype), s_Lifetime{} };
    }
    else
    {
        return s_Type{};
    };
}

s_Type clear_sliceable_1qjplDUo(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_sliceable_hxWWgdZ1(type))
    {
        /*MOV*/ s_ValueType vtype = parseType_1qjplDUo(fu::slice(type.canon, 1, (type.canon.size() - 1)), _here, ctx, module);
        return s_Type { static_cast<s_ValueType&&>(vtype), s_Lifetime{} };
    }
    else
        fu::fail(("COMPILER BUG: Not sliceable: "_fu + type.canon));

}

#endif
