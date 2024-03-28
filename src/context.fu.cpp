#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/LEGACY_find.h>
#include <fu/vec/LEGACY_slice.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

struct s_Struct;
enum s_kind: fu::u8;
struct s_Target;
struct s_ScopeItem;
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
struct s_Lifetime;
typedef fu::u8 s_VFacts;
struct s_Scope;
struct s_Overload;
typedef uint16_t s_SolverStatus;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_COWInside;
typedef fu::u8 s_ExitPaths;
struct s_Template;
struct s_TEA;
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
struct s_Context;
struct s_Map_iIYL7rECCBg;
struct s_StructCanon;
s_StructCanon parseStructCanon_9HOct2P6(fu::view<char>);
[[noreturn]] fu::never BUG_9SZtRVJ0(fu::str&&, const s_TokenIdx&, const s_Context&);
int64_t size_zTt3fZzW(fu::str&&);
fu::str dirname_8Oo0Zp26(const fu::str&);
fu::str resolveFile(const fu::str&, fu::view<char>, s_Context&);
fu::str read_zTt3fZzW(fu::str&&);
bool is_primitive_3t4EwFeQ(const s_ValueType&);
bool isStruct_jSb6u57z(const s_ValueType&);
int basePrimPrefixLen_OaQVyIZB(fu::view<char>);
bool is_sliceable_3t4EwFeQ(const s_ValueType&);
unsigned parseVarint_Fc3p3Wmg(int&, fu::view<char>);
unsigned getMaxUsage_YfHAfesl(int);
s_Shape getShape_EA8Wup3K(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
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
    s_kind_definit = 11u,
    s_kind_empty = 12u,
    s_kind_struct = 13u,
    s_kind_union = 14u,
    s_kind_primitive = 15u,
    s_kind_flags = 16u,
    s_kind_enum = 17u,
    s_kind_fn = 18u,
    s_kind_copy = 19u,
    s_kind_move = 20u,
    s_kind_arrlit = 21u,
    s_kind_not = 22u,
    s_kind_call = 23u,
    s_kind_argid = 24u,
    s_kind_root = 25u,
    s_kind_block = 26u,
    s_kind_if = 27u,
    s_kind_or = 28u,
    s_kind_and = 29u,
    s_kind_loop = 30u,
    s_kind_jump = 31u,
    s_kind___far_jump = 32u,
    s_kind_defer = 33u,
    s_kind_try = 34u,
    s_kind_let = 35u,
    s_kind_letdef = 36u,
    s_kind_typecast = 37u,
    s_kind_typeassert = 38u,
    s_kind_typeparam = 39u,
    s_kind_unwrap = 40u,
    s_kind_pragma = 41u,
    s_kind_break = 42u,
    s_kind_return = 43u,
    s_kind_continue = 44u,
    s_kind_import = 45u,
    s_kind_addroffn = 46u,
    s_kind_forfieldsof = 47u,
    s_kind_members = 48u,
    s_kind_fnbranch = 49u,
    s_kind_pattern = 50u,
    s_kind_typeunion = 51u,
    s_kind_typetag = 52u,
    s_kind___relaxed = 53u,
    s_kind___convert = 54u,
    s_kind___preceding_ref_arg = 55u,
    s_kind___no_kind_yet = 56u,
    s_kind___tombstone = 57u,
    s_kind_type = 58u,
    s_kind_var = 59u,
    s_kind_field = 60u,
    s_kind_enumv = 61u,
    s_kind_template = 62u,
    s_kind___native = 63u,
    s_kind_inline = 64u,
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
    s_kind kind;
    fu::str name;
    s_Target target;
    fu::vec<s_ScopeItem> items;
    fu::vec<int> imports;
    fu::vec<s_Target> converts;
    s_Shape shape;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || target
            || items
            || imports
            || converts
            || shape
        ;
    }
};
                                #endif

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = s_DeclAsserts(1u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = s_DeclAsserts(2u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_TRIVIAL = s_DeclAsserts(4u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = s_DeclAsserts(8u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = s_DeclAsserts(16u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_FX = s_DeclAsserts(32u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = s_DeclAsserts(64u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOTHROW = s_DeclAsserts(128u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCRASH = s_DeclAsserts(256u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOIO = s_DeclAsserts(512u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_FAST = s_DeclAsserts(1024u);
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOINLINE = s_DeclAsserts(2048u);

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_TRIVIAL
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

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL
    | s_ParseSyntax_PS_ALWAYS_DISCARD
    | s_ParseSyntax_PS_NOT_AN_EXPRESSION;
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
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 1024u;
inline constexpr s_Flags s_Flags_F_MUT = 2048u;
inline constexpr s_Flags s_Flags_F_CONST = 4096u;
inline constexpr s_Flags s_Flags_F_VAL = 8192u;
inline constexpr s_Flags s_Flags_F_REF = 16384u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 32768u;
inline constexpr s_Flags s_Flags_F_USING = 65536u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 131072u;
inline constexpr s_Flags s_Flags_F_PUB = 262144u;
inline constexpr s_Flags s_Flags_F_EXTERN = 524288u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 1048576u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 2097152u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 4194304u;
inline constexpr s_Flags s_Flags_F_INJECTED = 8388608u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 16777216u;
inline constexpr s_Flags s_Flags_F_INLINE = 33554432u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 67108864u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 134217728u;

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
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_MUT
    | s_Flags_F_CONST
    | s_Flags_F_VAL
    | s_Flags_F_REF
    | s_Flags_F_IMPLICIT
    | s_Flags_F_USING
    | s_Flags_F_CONVERSION
    | s_Flags_F_PUB
    | s_Flags_F_EXTERN
    | s_Flags_F_HOTSWAP
    | s_Flags_F_PREDICATE
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

inline constexpr s_VFacts MASK_s_VFacts
    = s_VFacts_AlwaysTrue
    | s_VFacts_AlwaysFalse
    | s_VFacts_Typename;
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
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = s_SolverStatus(256u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(512u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MATCHED = s_SolverStatus(1024u);
inline constexpr s_SolverStatus s_SolverStatus_SS_MOVED_FROM = s_SolverStatus(2048u);
inline constexpr s_SolverStatus s_SolverStatus_SS_ARGUMENT = s_SolverStatus(4096u);
inline constexpr s_SolverStatus s_SolverStatus_SS_Debug_AllPassesComplete = s_SolverStatus(8192u);

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_FN_OOE_RTL
    | s_SolverStatus_SS_HOIST
    | s_SolverStatus_SS_UNUSED
    | s_SolverStatus_SS_MATCHED
    | s_SolverStatus_SS_MOVED_FROM
    | s_SolverStatus_SS_ARGUMENT
    | s_SolverStatus_SS_Debug_AllPassesComplete;
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
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_COWRestrict = 268435456;

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

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu::str src;
    fu::vec<fu::str> link;
    fu::vec<fu::str> include_dirs;
    fu::vec<fu::str> extra_sources;
    fu::vec<int> live;
    s_CGDefects defects;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
            || live
            || defects
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
    fu::vec<int> imports;
    fu::vec<int> privates;
    fu::vec<s_Target> usings;
    fu::vec<s_Target> converts;
    int pub_items;
    int pub_implicits;
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
            || imports
            || privates
            || usings
            || converts
            || pub_items
            || pub_implicits
            || pub_converts
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_kind kind;
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

                                #ifndef DEF_s_Import
                                #define DEF_s_Import
struct s_Import
{
    s_TokenIdx token;
    fu::str value;
    explicit operator bool() const noexcept
    {
        return false
            || token
            || value
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
    int mayEscapeVia;
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
    s_kind kind;
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

                                #ifndef DEF_s_Profile
                                #define DEF_s_Profile
struct s_Profile
{
    double now;
    explicit operator bool() const noexcept
    {
        return false
            || now
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
    fu::vec<s_Overload> locals;
    s_TEA sighash;
    s_FxMask fx_mask;
    explicit operator bool() const noexcept
    {
        return false
            || tEmplate
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
    s_Flags flags;
    s_Target target;
    s_BitSet may_invalidate;
    s_BitSet may_alias;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || target
            || may_invalidate
            || may_alias
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

                                #ifndef DEF_s_Map_iIYL7rECCBg
                                #define DEF_s_Map_iIYL7rECCBg
struct s_Map_iIYL7rECCBg
{
    fu::vec<fu::str> keys;
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

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu::str base_dir;
    fu::vec<s_Module> modules;
    fu::vec<int> dep_order;
    s_Map_iIYL7rECCBg files;
    s_Map_iIYL7rECCBg fuzzy;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || base_dir
            || modules
            || dep_order
            || files
            || fuzzy
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_Struct& lookupUserType_mut_qsx9vYdk(fu::view<char> canon, s_Module& module, const s_TokenIdx& _here, const s_Context& ctx)
{
    const s_StructCanon scp = parseStructCanon_9HOct2P6(canon);
    if (scp.modid == module.modid)
        return module.out.types.mutref(scp.index);
    else
        BUG_9SZtRVJ0((((x7E_gCeFmDFw("lookupUserType_mut: Not from this module ("_fu, fu::i64dec(module.modid)) + ": "_fu) + canon) + ")"_fu), _here, ctx);

}

                                #ifndef DEF_x3Cx3E_mJGU9byOmI4
                                #define DEF_x3Cx3E_mJGU9byOmI4
inline int x3Cx3E_mJGU9byO(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sOVQcK2JOH3
                                #define DEF_x3Cx3E_sOVQcK2JOH3
inline int x3Cx3E_sOVQcK2J(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_gCeFmDFw0L8
                                #define DEF_x3Cx3E_gCeFmDFw0L8
inline int x3Cx3E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_mJGU9byO(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_sOVQcK2J(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_get_IttJCuZChl6
                                #define DEF_get_IttJCuZChl6
inline const fu::str& get_IttJCuZC(fu::view<fu::str> keys, fu::view<char> item, fu::view<fu::str> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return (*(const fu::str*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_uQvCQT2o0Gd
                                #define DEF_get_uQvCQT2o0Gd
inline const fu::str& get_uQvCQT2o(const s_Map_iIYL7rECCBg& _, fu::view<char> key)
{
    return get_IttJCuZC(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

                                #ifndef DEF_ends_t2TApdnqRc8
                                #define DEF_ends_t2TApdnqRc8
inline bool ends_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static fu::str tryResolve_sTYbQwzS(const fu::str& from, fu::view<char> name, const fu::str& path, s_Context& ctx)
{

    {
        const bool exists = (size_zTt3fZzW(fu::str(path)) >= 0ll);
        if (exists)
            return fu::str(path);

    };

    {
        /*MOV*/ fu::str path_1 = ((from + "lib/"_fu) + name);
        const bool exists = (size_zTt3fZzW(fu::str(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };

    {
        /*MOV*/ fu::str path_1 = ((from + "fu/lib/"_fu) + name);
        const bool exists = (size_zTt3fZzW(fu::str(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };
    if (ends_t2TApdnq(name, ".fu"_fu))
    {
        const int ext = (name.size() - 3);
        int dir = 0;
        for (int i = ext; i-- > 0; )
        {
            if (name[i] == '/')
            {
                dir = (i + 1);
                break;
            };
        };
        fu::str name_1 = (((fu::get_view(name, 0, dir) + fu::get_view(name, dir, ext)) + '/') + fu::get_view(name, dir, name.size()));

        {
            /*MOV*/ fu::str path_1 = (from + name_1);
            const bool exists = (size_zTt3fZzW(fu::str(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };

        {
            /*MOV*/ fu::str path_1 = ((from + "lib/"_fu) + name_1);
            const bool exists = (size_zTt3fZzW(fu::str(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };
        /*MOV*/ fu::str path_1 = ((from + "fu/lib/"_fu) + name_1);
        const bool exists = (size_zTt3fZzW(fu::str(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };
    fu::str fallback = dirname_8Oo0Zp26(from);
    if (!fallback || (fallback.size() >= from.size()))
        return ""_fu;
    else
        return resolveFile(fallback, name, ctx);

}

static fu::vec<fu::str>& l_6_0_pyZi4CVx(s_Map_iIYL7rECCBg& _)
{
    return _.keys;
}

static fu::vec<fu::str>& l_6_1_ZKlcvBYC(s_Map_iIYL7rECCBg& _)
{
    return _.vals;
}

                                #ifndef DEF_update_vo0on6GFcof
                                #define DEF_update_vo0on6GFcof
inline bool update_vo0on6GF(const fu::str& item, const fu::str& extra, s_Map_iIYL7rECCBg& _)
{
    int lo = 0;
    int hi = l_6_0_pyZi4CVx(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_0_pyZi4CVx(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_ZKlcvBYC(_).mutref(i) = fu::str(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_pyZi4CVx(_).insert(lo, fu::str(item));
    l_6_1_ZKlcvBYC(_).insert(lo, fu::str(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_1ffKFGH8Pfd
                                #define DEF_set_1ffKFGH8Pfd
inline bool set_1ffKFGH8(s_Map_iIYL7rECCBg& _, const fu::str& key, const fu::str& value)
{
    return update_vo0on6GF(key, value, _);
}
                                #endif

fu::str resolveFile(const fu::str& from, fu::view<char> name, s_Context& ctx)
{
    fu::str path = (from + name);
    const fu::str& cached = get_uQvCQT2o(ctx.fuzzy, path);
    if (cached)
    {
        if (cached == "\v"_fu)
            return ""_fu;
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str resolve = tryResolve_sTYbQwzS(from, name, path, ctx);
        set_1ffKFGH8(ctx.fuzzy, path, (resolve ? fu::str(resolve) : "\v"_fu));
        return /*NRVO*/ resolve;
    };
}

                                #ifndef DEF_find_KonMQ4KBuu5
                                #define DEF_find_KonMQ4KBuu5
inline int find_KonMQ4KB(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_KonMQ4KBuu5
                                #define DEF_has_KonMQ4KBuu5
inline bool has_KonMQ4KB(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_has_03SseD2ZkOf
                                #define DEF_has_03SseD2ZkOf
inline bool has_03SseD2Z(fu::view<fu::str> keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
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

                                #ifndef DEF_has_uQvCQT2o0Gd
                                #define DEF_has_uQvCQT2o0Gd
inline bool has_uQvCQT2o(const s_Map_iIYL7rECCBg& _, fu::view<char> key)
{
    return has_03SseD2Z(_.keys, key);
}
                                #endif

fu::str resolveFile_F2wCJLDv(const fu::str& path, s_Context& ctx)
{
    const int fuzzy = find_KonMQ4KB(path, '\v');
    if (fuzzy > 0)
    {
        fu::str from = fu::slice(path, 0, fuzzy);
        fu::str name = fu::slice(path, (fuzzy + 1));
        if (from && name && !has_KonMQ4KB(name, '\v'))
        {
            /*MOV*/ fu::str res = resolveFile(from, name, ctx);
            if (res)
                return /*NRVO*/ res;
            else
            {
                /*MOV*/ fu::str prepopulated = (from + name);
                if (has_uQvCQT2o(ctx.files, prepopulated))
                    return /*NRVO*/ prepopulated;

            };
        };
    };
    return fu::str(path);
}

                                #ifndef DEF_replace_t9kb9bFxF28
                                #define DEF_replace_t9kb9bFxF28
inline fu::str replace_t9kb9bFx(const fu::str& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu::str result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str, all, last)) >= 0))
            {

                {
                    fu::str substr = fu::slice(str, last, next);
                    const bool first = !last;
                    if (!first)
                        result += with;

                    result += substr;
                };
                last = (next + N);
            };
        };
        if (last)
        {
            fu::str substr = fu::slice(str, last);
            result += with;
            result += substr;
        }
        else
            return fu::str(str);

    };
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_x21x3D_gCeFmDFw0L8
                                #define DEF_x21x3D_gCeFmDFw0L8
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

fu::str resolveFile_x_aHG8xqFm(const fu::str& path, const s_Context& ctx)
{
    /*MOV*/ fu::str clean = replace_t9kb9bFx(path, "\v"_fu, ""_fu);
    const fu::str& match = get_uQvCQT2o(ctx.fuzzy, clean);
    if (match && (match != "\v"_fu))
        return fu::str(match);
    else
        return /*NRVO*/ clean;

}

fu::str getFile_F2wCJLDv(fu::str&& path, s_Context& ctx)
{
    const fu::str& cached = get_uQvCQT2o(ctx.files, path);
    if (cached)
    {
        if (cached == "\v"_fu)
            return ""_fu;
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str read = read_zTt3fZzW(fu::str(path));
        set_1ffKFGH8(ctx.files, path, (read ? fu::str(read) : "\v"_fu));
        return /*NRVO*/ read;
    };
}

s_Module& getModule_vqSYGHjE(const fu::str& fname, s_Context& ctx)
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

                                #ifndef DEF_clone_dD3H4GX6AP2
                                #define DEF_clone_dD3H4GX6AP2
inline int clone_dD3H4GX6(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_T1Jf1Z0KiR2
                                #define DEF_clone_T1Jf1Z0KiR2
inline const fu::str& clone_T1Jf1Z0K(const fu::str& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_BpjaAqZzaaa
                                #define DEF_clone_BpjaAqZzaaa
inline const s_ModuleInputs& clone_BpjaAqZz(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_CDer1pfRaKl
                                #define DEF_clone_CDer1pfRaKl
inline const s_ModuleOrder& clone_CDer1pfR(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_yUzRV7AncM9
                                #define DEF_clone_yUzRV7AncM9
inline const fu::vec<s_Struct>& clone_yUzRV7An(const fu::vec<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Q1UUsXjhPGl
                                #define DEF_clone_Q1UUsXjhPGl
inline const s_SolvedNode& clone_Q1UUsXjh(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_YgFd2lJf7Gh
                                #define DEF_clone_YgFd2lJf7Gh
inline const fu::vec<s_Overload>& clone_YgFd2lJf(const fu::vec<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_h2eJ8vfftjk
                                #define DEF_clone_h2eJ8vfftjk
inline const fu::vec<s_Extended>& clone_h2eJ8vff(const fu::vec<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_2gILMhVaICb
                                #define DEF_clone_2gILMhVaICb
inline const fu::vec<s_ScopeItem>& clone_2gILMhVa(const fu::vec<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_KE4Ju1yDYU9
                                #define DEF_clone_KE4Ju1yDYU9
inline const fu::vec<int>& clone_KE4Ju1yD(const fu::vec<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_lmGNhJZgGsc
                                #define DEF_clone_lmGNhJZgGsc
inline const fu::vec<s_Target>& clone_lmGNhJZg(const fu::vec<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_u3AUYy1Feof
                                #define DEF_clone_u3AUYy1Feof
inline s_Scope clone_u3AUYy1F(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_YgFd2lJf(a.overloads);
        res.extended = clone_h2eJ8vff(a.extended);
        res.items = clone_2gILMhVa(a.items);
        res.implicits = clone_2gILMhVa(a.implicits);
        res.imports = clone_KE4Ju1yD(a.imports);
        res.privates = clone_KE4Ju1yD(a.privates);
        res.usings = clone_lmGNhJZg(a.usings);
        res.converts = clone_lmGNhJZg(a.converts);
        res.pub_items = clone_dD3H4GX6(a.pub_items);
        res.pub_implicits = clone_dD3H4GX6(a.pub_implicits);
        res.pub_converts = clone_dD3H4GX6(a.pub_converts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_HWuJXO1jEAi
                                #define DEF_clone_HWuJXO1jEAi
inline s_SolverNotes clone_HWuJXO1j(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_NfKDlKSyerj
                                #define DEF_clone_NfKDlKSyerj
inline s_SolverOutput clone_NfKDlKSy(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_Q1UUsXjh(a.root);
        res.scope = clone_u3AUYy1F(a.scope);
        res.notes = clone_HWuJXO1j(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_x0DVJAtWpqh
                                #define DEF_clone_x0DVJAtWpqh
inline const s_CodegenOutput& clone_x0DVJAtW(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TzGdNpjoLWe
                                #define DEF_clone_TzGdNpjoLWe
inline s_ModuleOutputs clone_TzGdNpjo(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_yUzRV7An(a.types);
        res.solve = clone_NfKDlKSy(a.solve);
        res.cpp = clone_x0DVJAtW(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_Iv4I43NBh01
                                #define DEF_clone_Iv4I43NBh01
inline const s_ModuleStats& clone_Iv4I43NB(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_aAoyWZ00Mtb
                                #define DEF_clone_aAoyWZ00Mtb
inline const s_Profile& clone_aAoyWZ00(const s_Profile& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_G5fNGz6vaZ6
                                #define DEF_clone_G5fNGz6vaZ6
inline s_Module clone_G5fNGz6v(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_dD3H4GX6(a.modid);
        res.fname = clone_T1Jf1Z0K(a.fname);
        res.in = clone_BpjaAqZz(a.in);
        res.order = clone_CDer1pfR(a.order);
        res.out = clone_TzGdNpjo(a.out);
        res.stats = clone_Iv4I43NB(a.stats);
        res.profile = clone_aAoyWZ00(a.profile);
    };
    return /*NRVO*/ res;
}
                                #endif

void setModule_0FYNSelM(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (current.fname == module.fname)
        current = clone_G5fNGz6v(module);
    else
        fu::fail("setModule: module.fname mismatch"_fu);

}

const s_Struct& lookupUserType_hlbT3GcY(const s_StructCanon& scp, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    if (scp.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[scp.index])) ? *_0 : BUG_9SZtRVJ0(fu::str{}, _here, ctx);
    }
    else
    {
        const s_Struct* _1;
        return *(_1 = &(ctx.modules[scp.modid].out.types[scp.index])) ? *_1 : BUG_9SZtRVJ0(fu::str{}, _here, ctx);
    };
}

const s_Struct& lookupUserType_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return lookupUserType_hlbT3GcY(parseStructCanon_9HOct2P6(type.canon), module, ctx, _here);
}

bool is_trivial_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return is_primitive_3t4EwFeQ(type) || (isStruct_jSb6u57z(type) ? !lookupUserType_QHDuaMIF(type, _here, ctx, module).shape.non_triv_mask : false);
}

bool is_reinterpretable_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return is_trivial_QHDuaMIF(type, _here, ctx, module);
}

const s_Struct& tryLookupUserType_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (isStruct_jSb6u57z(type) || (is_primitive_3t4EwFeQ(type) && (basePrimPrefixLen_OaQVyIZB(type.canon) < type.canon.size())))
        return lookupUserType_QHDuaMIF(type, _here, ctx, module);
    else
        return (*(const s_Struct*)fu::NIL);

}

const fu::vec<int>& lookupTypeImports_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return tryLookupUserType_QHDuaMIF(type, _here, ctx, module).imports;
}

const fu::vec<s_Target>& lookupTypeConverts_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return tryLookupUserType_QHDuaMIF(type, _here, ctx, module).converts;
}

                                #ifndef DEF_clone_z7cvvzgxm5d
                                #define DEF_clone_z7cvvzgxm5d
inline char clone_z7cvvzgx(const char a)
{
    return a;
}
                                #endif

                                #ifndef DEF_map_Se1swOyeiO0
                                #define DEF_map_Se1swOyeiO0
inline fu::str map_Se1swOye(fu::view<char> a)
{
    /*MOV*/ fu::str res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_z7cvvzgx(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_9IL064wQMu8
                                #define DEF_clone_9IL064wQMu8
inline fu::str clone_9IL064wQ(fu::view<char> a)
{
    return map_Se1swOye(a);
}
                                #endif

int getFlatCount_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Struct& s = tryLookupUserType_QHDuaMIF(type, _here, ctx, module);
    if (s)
        return s.shape.flatCount;
    else if (is_primitive_3t4EwFeQ(type) || is_sliceable_3t4EwFeQ(type))
        return 1;
    else
        return 0;

}

s_ValueType parseType_rxBOPBNl(fu::view<char> str, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    int offset {};
    const unsigned quals = unsigned(parseVarint_Fc3p3Wmg(offset, str));
    /*MOV*/ fu::str canon = clone_9IL064wQ(fu::get_view(str, offset));
    /*MOV*/ s_ValueType type = s_ValueType { quals, static_cast<fu::str&&>(canon) };
    type.quals |= getMaxUsage_YfHAfesl(getFlatCount_QHDuaMIF(type, _here, ctx, module));
    if (is_primitive_3t4EwFeQ(type))
    {
        if (!(__builtin_popcount(type.quals) == 2))
            BUG_9SZtRVJ0((x7E_gCeFmDFw((x7E_gCeFmDFw("parseType: Primitive.quals("_fu, fu::u64dec(quals)) + ").popcount("_fu), fu::i64dec(__builtin_popcount(quals))) + ") != 2"_fu), _here, ctx);

    };
    return /*NRVO*/ type;
}

s_Shape getShape_EA8Wup3K(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    // Hoisted:
    uint64_t hash;
    uint64_t x;

    const s_Struct& s = tryLookupUserType_QHDuaMIF(type, _here, ctx, module);
    if (s)
        return s_Shape(s.shape);
    else if (is_primitive_3t4EwFeQ(type))
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
    else if (is_sliceable_3t4EwFeQ(type))
    {
        s_ValueType arrT = parseType_rxBOPBNl(fu::slice(type.canon, 1, (type.canon.size() - 1)), _here, ctx, module);
        s_Shape item_shape = getShape_EA8Wup3K(arrT, _here, ctx, module);
        const uint64_t hash_1 = (x = item_shape.hash, (x ^= (x << 13ull)), (x ^= (x >> 7ull)), (x ^= (x << 17ull)), x);
        return s_Shape { ""_fu, (item_shape.non_triv_mask | (1ull << (hash_1 & 63ull))), hash_1, 1, 0 };
    }
    else
    {
        return s_Shape{};
    };
}

bool is_zst_QHDuaMIF(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return !getFlatCount_QHDuaMIF(type, _here, ctx, module);
}

fu::str getShortModuleName_dn61tipl(const fu::str& fname, const s_TokenIdx& _here, const s_Context& ctx)
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
    BUG_9SZtRVJ0(fu::str{}, _here, ctx);
}

                                #ifndef DEF_q_TAGS
                                #define DEF_q_TAGS
extern const unsigned q_TAGS;
                                #endif

fu::str serializeType_Eouw2usb(const s_ValueType& type, fu::view<char> debug)
{
    if (type)
    {
        /*MOV*/ fu::str result {};
        appendVarint_YxEMA0h9(result, unsigned((type.quals & q_TAGS)));
        result += (type.canon ? type.canon : fu::fail(("COMPILER BUG: serializeType: No type.canon in: "_fu + debug)));
        return /*NRVO*/ result;
    }
    else
        fu::fail(("COMPILER BUG: serializeType: Falsy type in: "_fu + debug));

}

s_Type tryClear_sliceable_EA8Wup3K(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_sliceable_3t4EwFeQ(type))
    {
        /*MOV*/ s_ValueType vtype = parseType_rxBOPBNl(fu::slice(type.canon, 1, (type.canon.size() - 1)), _here, ctx, module);
        return s_Type { static_cast<s_ValueType&&>(vtype), s_Lifetime{}, s_VFacts{} };
    }
    else
    {
        return s_Type{};
    };
}

s_Type clear_sliceable_EA8Wup3K(const s_ValueType& type, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_sliceable_3t4EwFeQ(type))
    {
        /*MOV*/ s_ValueType vtype = parseType_rxBOPBNl(fu::slice(type.canon, 1, (type.canon.size() - 1)), _here, ctx, module);
        return s_Type { static_cast<s_ValueType&&>(vtype), s_Lifetime{}, s_VFacts{} };
    }
    else
        fu::fail(("COMPILER BUG: Not sliceable: "_fu + type.canon));

}

#endif
