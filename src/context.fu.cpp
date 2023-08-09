#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_Token;
enum s_kind: fu::u8;
struct s_LineColChars;
struct s_TokenIdx;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_ParserOutput;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
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
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_qfSmCKRS93e;
struct s_StructCanon;
typedef fu::u8 s_CodeFmt;
s_StructCanon parseStructCanon_degpQC5i(fu::view<char>);
int64_t size_IIXDOWa5(fu::str&&);
fu::str dirname_BWbYsL34(const fu::str&);
static fu::str resolveFile_ylhZM7pm(const fu::str&, fu::view<char>, s_Context&);
fu::str read_IIXDOWa5(fu::str&&);
bool is_primitive_6bkyMkO3(const s_ValueType&);
bool isStruct_ddyKn6V4(const s_ValueType&);
int basePrimPrefixLen_VyAVtbGI(fu::view<char>);
bool isStructOrUnion_ddyKn6V4(const s_ValueType&);
fu::str ext_BWbYsL34(const fu::str&);
fu::str formatCodeSnippet_M4QtP2oD(fu::vec<s_TokenIdx>&&, int, s_CodeFmt, const s_Context&);

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
    s_kind_typedef = 31u,
    s_kind_typecast = 32u,
    s_kind_typeassert = 33u,
    s_kind_typeparam = 34u,
    s_kind_unwrap = 35u,
    s_kind_pragma = 36u,
    s_kind_break = 37u,
    s_kind_return = 38u,
    s_kind_continue = 39u,
    s_kind_import = 40u,
    s_kind_addroffn = 41u,
    s_kind_forfieldsof = 42u,
    s_kind_struct = 43u,
    s_kind_union = 44u,
    s_kind_primitive = 45u,
    s_kind_flags = 46u,
    s_kind_enum = 47u,
    s_kind_members = 48u,
    s_kind_fndef = 49u,
    s_kind_fn = 50u,
    s_kind_fnbranch = 51u,
    s_kind_pattern = 52u,
    s_kind_typeunion = 53u,
    s_kind_typetag = 54u,
    s_kind___relaxed = 55u,
    s_kind___convert = 56u,
    s_kind___no_kind_yet = 57u,
    s_kind_type = 58u,
    s_kind_var = 59u,
    s_kind_field = 60u,
    s_kind_enumv = 61u,
    s_kind_template = 62u,
    s_kind___native = 63u,
    s_kind_inline = 64u,
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
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = s_ParseSyntax(1u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = s_ParseSyntax(2u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = s_ParseSyntax(4u);
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = s_ParseSyntax(8u);

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_ID
    | s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_SEMI
    | s_ParseSyntax_PS_DISCARD;
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1u;
inline constexpr s_Flags s_Flags_F_OPERATOR = 2u;
inline constexpr s_Flags s_Flags_F_ACCESS = 4u;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 8u;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 16u;
inline constexpr s_Flags s_Flags_F_LAX = 32u;
inline constexpr s_Flags s_Flags_F_ARG = 64u;
inline constexpr s_Flags s_Flags_F_COW_INSIDE = 128u;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 256u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 512u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 1024u;
inline constexpr s_Flags s_Flags_F_MUT = 2048u;
inline constexpr s_Flags s_Flags_F_REF = 4096u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 8192u;
inline constexpr s_Flags s_Flags_F_USING = 16384u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 32768u;
inline constexpr s_Flags s_Flags_F_SHADOW = 65536u;
inline constexpr s_Flags s_Flags_F_PUB = 131072u;
inline constexpr s_Flags s_Flags_F_EXTERN = 262144u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 524288u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 1048576u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 2097152u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 4194304u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 8388608u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 16777216u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 33554432u;
inline constexpr s_Flags s_Flags_F_INLINE = 67108864u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 134217728u;
inline constexpr s_Flags s_Flags_F_INJECTED = 268435456u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
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
inline constexpr s_SolverNotes s_SolverNotes_N_DeadIfCond = 512;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadIfCons = 1024;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadArrlit = 2048;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadLoopInit = 4096;
inline constexpr s_SolverNotes s_SolverNotes_N_DeadConv = 8192;
inline constexpr s_SolverNotes s_SolverNotes_N_NonTrivAutoCopy = 16384;
inline constexpr s_SolverNotes s_SolverNotes_N_RelaxRespec = 32768;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedImplicit = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedCall = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedDefer = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedLet = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_AARMustSeq = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_AARSoftRisk = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 268435456;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 536870912;
inline constexpr s_SolverNotes s_SolverNotes_N_COWRestrict = 1073741824;

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
    | s_SolverNotes_N_DeadIfCond
    | s_SolverNotes_N_DeadIfCons
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

inline constexpr s_CGDefects MASK_s_CGDefects
    = s_CGDefects_GNUStmtExpr
    | s_CGDefects_Goto
    | s_CGDefects_PointlessMustSeq
    | s_CGDefects_LocalConstBool
    | s_CGDefects_ConstCast
    | s_CGDefects_PointlessLocal
    | s_CGDefects_IrrelevantLiteral;
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

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu::vec<s_Region> uni0n;
    explicit operator bool() const noexcept
    {
        return false
            || uni0n
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

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu::str id;
    int modid;
    unsigned packed;
    explicit operator bool() const noexcept
    {
        return false
            || id
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

                                #ifndef DEF_s_Map_qfSmCKRS93e
                                #define DEF_s_Map_qfSmCKRS93e
struct s_Map_qfSmCKRS93e
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
    int pub_cnvrts;
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
            || pub_cnvrts
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

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu::vec<s_Module> modules;
    fu::vec<int> dep_order;
    s_Map_qfSmCKRS93e files;
    s_Map_qfSmCKRS93e fuzzy;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || dep_order
            || files
            || fuzzy
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
    fu::str base;
    int flatCount;
    int declDepth;
    bool all_triv;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || target
            || items
            || imports
            || converts
            || base
            || flatCount
            || declDepth
            || all_triv
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
    fu::vec<fu::str> fuzimports;
    fu::vec<fu::str> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
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
    fu::str sighash;
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
    int local;
    s_BitSet soft_risk;
    s_BitSet hard_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || soft_risk
            || hard_risk
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

                                #ifndef DEF_s_CodeFmt
                                #define DEF_s_CodeFmt
inline constexpr s_CodeFmt s_CodeFmt_FullContext = s_CodeFmt(1u);
inline constexpr s_CodeFmt s_CodeFmt_NoLeadContext = s_CodeFmt(2u);
inline constexpr s_CodeFmt s_CodeFmt_NoTailContext = s_CodeFmt(4u);
inline constexpr s_CodeFmt s_CodeFmt_NoContext = s_CodeFmt(8u);

inline constexpr s_CodeFmt MASK_s_CodeFmt
    = s_CodeFmt_FullContext
    | s_CodeFmt_NoLeadContext
    | s_CodeFmt_NoTailContext
    | s_CodeFmt_NoContext;
                                #endif

#ifndef fu_NO_fdefs

const s_Token& _token_yZ5HaS8S(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].in.lex.tokens[idx.tokidx];
}

const fu::str& _fname_uP3EjQNl(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].fname;
}

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_Struct& lookupUserType_mut_CHFnIcLE(fu::view<char> canon, s_Module& module)
{
    const s_StructCanon scp = parseStructCanon_degpQC5i(canon);
    if (scp.modid == module.modid)
        return module.out.types.mutref(scp.index);
    else
        fu::fail((((x7E_r7bhmB7D("lookupUserType_mut: Not from this module ("_fu, fu::i64dec(module.modid)) + ": "_fu) + canon) + ")"_fu));

}

                                #ifndef DEF_find_POzvwmtfK11
                                #define DEF_find_POzvwmtfK11
inline int find_POzvwmtf(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_POzvwmtfK11
                                #define DEF_has_POzvwmtfK11
inline bool has_POzvwmtf(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_x3Cx3E_AsFD7H8Nlu6
                                #define DEF_x3Cx3E_AsFD7H8Nlu6
inline int x3Cx3E_AsFD7H8N(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_f0RieKMU2n0
                                #define DEF_x3Cx3E_f0RieKMU2n0
inline int x3Cx3E_f0RieKMU(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_r7bhmB7DrQ0
                                #define DEF_x3Cx3E_r7bhmB7DrQ0
inline int x3Cx3E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_AsFD7H8N(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_f0RieKMU(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_get_UrciAYVm9Yj
                                #define DEF_get_UrciAYVm9Yj
inline const fu::str& get_UrciAYVm(fu::view<fu::str> keys, fu::view<char> item, fu::view<fu::str> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(keys[i], item);
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

                                #ifndef DEF_get_5Sqt0JvvDxj
                                #define DEF_get_5Sqt0JvvDxj
inline const fu::str& get_5Sqt0Jvv(const s_Map_qfSmCKRS93e& _, fu::view<char> key)
{
    return get_UrciAYVm(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_x3Dx3D_r7bhmB7DrQ0
                                #define DEF_x3Dx3D_r7bhmB7DrQ0
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

                                #ifndef DEF_ends_1wDddajZEEk
                                #define DEF_ends_1wDddajZEEk
inline bool ends_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static fu::str tryResolve_GtnjLU1C(const fu::str& from, fu::view<char> name, s_Context& ctx, const fu::str& path)
{

    {
        const bool exists = (size_IIXDOWa5(fu::str(path)) >= 0ll);
        if (exists)
            return fu::str(path);

    };

    {
        /*MOV*/ fu::str path_1 = ((from + "lib/"_fu) + name);
        const bool exists = (size_IIXDOWa5(fu::str(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };

    {
        /*MOV*/ fu::str path_1 = ((from + "fu/lib/"_fu) + name);
        const bool exists = (size_IIXDOWa5(fu::str(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };
    if (ends_1wDddajZ(name, ".fu"_fu))
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
            const bool exists = (size_IIXDOWa5(fu::str(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };

        {
            /*MOV*/ fu::str path_1 = ((from + "lib/"_fu) + name_1);
            const bool exists = (size_IIXDOWa5(fu::str(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };
        /*MOV*/ fu::str path_1 = ((from + "fu/lib/"_fu) + name_1);
        const bool exists = (size_IIXDOWa5(fu::str(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };
    fu::str fallback = dirname_BWbYsL34(from);
    if (!fallback || (fallback.size() >= from.size()))
    {
        return fu::str{};
    }
    else
        return resolveFile_ylhZM7pm(fallback, name, ctx);

}

static fu::vec<fu::str>& l_6_0_B6QYEUmi(s_Map_qfSmCKRS93e& _)
{
    return _.keys;
}

static fu::vec<fu::str>& l_6_1_Qx3okPlu(s_Map_qfSmCKRS93e& _)
{
    return _.vals;
}

                                #ifndef DEF_update_MbZssSoNuJh
                                #define DEF_update_MbZssSoNuJh
inline bool update_MbZssSoN(const fu::str& item, const fu::str& extra, s_Map_qfSmCKRS93e& _)
{
    int lo = 0;
    int hi = l_6_0_B6QYEUmi(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(l_6_0_B6QYEUmi(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_Qx3okPlu(_).mutref(i) = fu::str(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_B6QYEUmi(_).insert(lo, fu::str(item));
    l_6_1_Qx3okPlu(_).insert(lo, fu::str(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_jaErudM5jC8
                                #define DEF_set_jaErudM5jC8
inline bool set_jaErudM5(s_Map_qfSmCKRS93e& _, const fu::str& key, const fu::str& value)
{
    return update_MbZssSoN(key, value, _);
}
                                #endif

static fu::str resolveFile_ylhZM7pm(const fu::str& from, fu::view<char> name, s_Context& ctx)
{
    fu::str path = (from + name);
    const fu::str& cached = get_5Sqt0Jvv(ctx.fuzzy, path);
    if (cached)
    {
        if (cached == "\v"_fu)
        {
            return fu::str{};
        }
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str resolve = tryResolve_GtnjLU1C(from, name, ctx, path);
        set_jaErudM5(ctx.fuzzy, path, (resolve ? fu::str(resolve) : "\v"_fu));
        return /*NRVO*/ resolve;
    };
}

                                #ifndef DEF_has_T5fUfc6TeHb
                                #define DEF_has_T5fUfc6TeHb
inline bool has_T5fUfc6T(fu::view<fu::str> keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(keys[i], item);
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

                                #ifndef DEF_has_GtQBpfZYXX1
                                #define DEF_has_GtQBpfZYXX1
inline bool has_GtQBpfZY(const s_Map_qfSmCKRS93e& _, fu::view<char> key)
{
    return has_T5fUfc6T(_.keys, key);
}
                                #endif

fu::str resolveFile_pcP1UVCR(const fu::str& path, s_Context& ctx)
{
    const int fuzzy = find_POzvwmtf(path, '\v');
    if (fuzzy > 0)
    {
        fu::str from = fu::slice(path, 0, fuzzy);
        fu::str name = fu::slice(path, (fuzzy + 1));
        if (from && name && !has_POzvwmtf(name, '\v'))
        {
            /*MOV*/ fu::str res = resolveFile_ylhZM7pm(from, name, ctx);
            if (res)
                return /*NRVO*/ res;
            else
            {
                /*MOV*/ fu::str prepopulated = (from + name);
                if (has_GtQBpfZY(ctx.files, prepopulated))
                    return /*NRVO*/ prepopulated;

            };
        };
    };
    return fu::str(path);
}

                                #ifndef DEF_replace_KFDHCttmOi9
                                #define DEF_replace_KFDHCttmOi9
inline fu::str replace_KFDHCttm(const fu::str& str, fu::view<char> all, fu::view<char> with)
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

                                #ifndef DEF_x21x3D_r7bhmB7DrQ0
                                #define DEF_x21x3D_r7bhmB7DrQ0
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

fu::str resolveFile_x_VkBaqzGv(const fu::str& path, const s_Context& ctx)
{
    /*MOV*/ fu::str clean = replace_KFDHCttm(path, "\v"_fu, fu::view<char>{});
    const fu::str& match = get_5Sqt0Jvv(ctx.fuzzy, clean);
    if (match && (match != "\v"_fu))
        return fu::str(match);
    else
        return /*NRVO*/ clean;

}

fu::str getFile_ILGIGgDT(fu::str&& path, s_Context& ctx)
{
    const fu::str& cached = get_5Sqt0Jvv(ctx.files, path);
    if (cached)
    {
        if (cached == "\v"_fu)
        {
            return fu::str{};
        }
        else
            return fu::str(cached);

    }
    else
    {
        /*MOV*/ fu::str read = read_IIXDOWa5(fu::str(path));
        set_jaErudM5(ctx.files, path, (read ? fu::str(read) : "\v"_fu));
        return /*NRVO*/ read;
    };
}

s_Module& getModule_9WEb5JfY(const fu::str& fname, s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname)
            return ctx.modules.mutref(i);

    };
    const int i_1 = ctx.modules.size();
    ctx.modules.push(s_Module { i_1, fu::str(fname), s_ModuleInputs{}, s_ModuleOrder{}, s_ModuleOutputs{}, s_ModuleStats{} });
    return ctx.modules.mutref(i_1);
}

                                #ifndef DEF_clone_DHH5Baj0nf5
                                #define DEF_clone_DHH5Baj0nf5
inline int clone_DHH5Baj0(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_DcDCLzbwsce
                                #define DEF_clone_DcDCLzbwsce
inline const fu::str& clone_DcDCLzbw(const fu::str& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_cXjT2jIIpdc
                                #define DEF_clone_cXjT2jIIpdc
inline const s_ModuleInputs& clone_cXjT2jII(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_otwjp0Ty2Uc
                                #define DEF_clone_otwjp0Ty2Uc
inline const s_ModuleOrder& clone_otwjp0Ty(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_4EW58o1IPu4
                                #define DEF_clone_4EW58o1IPu4
inline const fu::vec<s_Struct>& clone_4EW58o1I(const fu::vec<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_mJncZhdAp2e
                                #define DEF_clone_mJncZhdAp2e
inline const s_SolvedNode& clone_mJncZhdA(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_24hW9Ytuzm4
                                #define DEF_clone_24hW9Ytuzm4
inline const fu::vec<s_Overload>& clone_24hW9Ytu(const fu::vec<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_kIrmu6DQ4rl
                                #define DEF_clone_kIrmu6DQ4rl
inline const fu::vec<s_Extended>& clone_kIrmu6DQ(const fu::vec<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ESOZciocfl7
                                #define DEF_clone_ESOZciocfl7
inline const fu::vec<s_ScopeItem>& clone_ESOZcioc(const fu::vec<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_kttDaK42hjd
                                #define DEF_clone_kttDaK42hjd
inline const fu::vec<int>& clone_kttDaK42(const fu::vec<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_AfzW5oEvLe7
                                #define DEF_clone_AfzW5oEvLe7
inline const fu::vec<s_Target>& clone_AfzW5oEv(const fu::vec<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_TfbmnLDB9Pe
                                #define DEF_clone_TfbmnLDB9Pe
inline s_Scope clone_TfbmnLDB(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_24hW9Ytu(a.overloads);
        res.extended = clone_kIrmu6DQ(a.extended);
        res.items = clone_ESOZcioc(a.items);
        res.implicits = clone_ESOZcioc(a.implicits);
        res.imports = clone_kttDaK42(a.imports);
        res.privates = clone_kttDaK42(a.privates);
        res.usings = clone_AfzW5oEv(a.usings);
        res.converts = clone_AfzW5oEv(a.converts);
        res.pub_items = clone_DHH5Baj0(a.pub_items);
        res.pub_cnvrts = clone_DHH5Baj0(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_55mLsuleO26
                                #define DEF_clone_55mLsuleO26
inline s_SolverNotes clone_55mLsule(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_7R2wn4vRxyb
                                #define DEF_clone_7R2wn4vRxyb
inline s_SolverOutput clone_7R2wn4vR(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_mJncZhdA(a.root);
        res.scope = clone_TfbmnLDB(a.scope);
        res.notes = clone_55mLsule(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_iygyhUpoYj9
                                #define DEF_clone_iygyhUpoYj9
inline const s_CodegenOutput& clone_iygyhUpo(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_wo58Cdr7rS8
                                #define DEF_clone_wo58Cdr7rS8
inline s_ModuleOutputs clone_wo58Cdr7(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_4EW58o1I(a.types);
        res.solve = clone_7R2wn4vR(a.solve);
        res.cpp = clone_iygyhUpo(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_kBrbPK4ZhK9
                                #define DEF_clone_kBrbPK4ZhK9
inline const s_ModuleStats& clone_kBrbPK4Z(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_mLnIjDzkpRc
                                #define DEF_clone_mLnIjDzkpRc
inline s_Module clone_mLnIjDzk(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_DHH5Baj0(a.modid);
        res.fname = clone_DcDCLzbw(a.fname);
        res.in = clone_cXjT2jII(a.in);
        res.order = clone_otwjp0Ty(a.order);
        res.out = clone_wo58Cdr7(a.out);
        res.stats = clone_kBrbPK4Z(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

void setModule_fYGWKsxK(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (current.fname == module.fname)
        current = clone_mLnIjDzk(module);
    else
        fu_ASSERT();

}

const s_Struct& lookupUserType_kzfZN3HV(const s_StructCanon& scp, const s_Module& module, const s_Context& ctx)
{
    if (scp.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[scp.index])) ? *_0 : fu_ASSERT();
    }
    else
    {
        const s_Struct* _1;
        return *(_1 = &(ctx.modules[scp.modid].out.types[scp.index])) ? *_1 : fu_ASSERT();
    };
}

const s_Struct& lookupUserType_LriKPDIk(const s_ValueType& type, const s_Context& ctx, const s_Module& module)
{
    return lookupUserType_kzfZN3HV(parseStructCanon_degpQC5i(type.canon), module, ctx);
}

bool is_trivial_LriKPDIk(const s_ValueType& type, const s_Context& ctx, const s_Module& module)
{
    return is_primitive_6bkyMkO3(type) || (isStruct_ddyKn6V4(type) ? lookupUserType_LriKPDIk(type, ctx, module).all_triv : false);
}

const s_Struct& tryLookupUserType_LriKPDIk(const s_ValueType& type, const s_Context& ctx, const s_Module& module)
{
    if (isStruct_ddyKn6V4(type) || (is_primitive_6bkyMkO3(type) && (basePrimPrefixLen_VyAVtbGI(type.canon) < type.canon.size())))
        return lookupUserType_LriKPDIk(type, ctx, module);
    else
        return (*(const s_Struct*)fu::NIL);

}

const fu::vec<int>& lookupTypeImports_LriKPDIk(const s_ValueType& type, const s_Context& ctx, const s_Module& module)
{
    return tryLookupUserType_LriKPDIk(type, ctx, module).imports;
}

const fu::vec<s_Target>& lookupTypeConverts_LriKPDIk(const s_ValueType& type, const s_Context& ctx, const s_Module& module)
{
    return tryLookupUserType_LriKPDIk(type, ctx, module).converts;
}

int getFlatCount_LriKPDIk(const s_ValueType& type, const s_Context& ctx, const s_Module& module)
{
    if (!isStructOrUnion_ddyKn6V4(type))
        return 1;
    else
        return tryLookupUserType_LriKPDIk(type, ctx, module).flatCount;

}

const fu::str& getModuleSrc_6HD1N2G2(const int modid, const s_Context& ctx)
{
    return ctx.modules[modid].in.src;
}

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu::str DIM;
                                #endif

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu::str RESET;
                                #endif

fu::str formatTokenCoord_uWl1krws(const fu::str& fname, const s_LineColChars& token)
{
    fu::str lcc = x7E_r7bhmB7D((x7E_r7bhmB7D(x7E_r7bhmB7D(fu::i64dec(token.line), ":"_fu), fu::i64dec(token.col)) + "+"_fu), fu::i64dec(token.chars));
    if (!fname)
        return (DIM + lcc) + RESET;
    else
    {
        fu::str dir = dirname_BWbYsL34(fname);
        fu::str file = fu::slice(fname, dir.size(), fname.size());
        fu::str ext = ext_BWbYsL34(file);
        fu::str noext = fu::slice(file, 0, (file.size() - ext.size()));
        return (((((((DIM + dir) + RESET) + noext) + DIM) + ext) + " "_fu) + lcc) + RESET;
    };
}

fu::str formatTokenCoord_q6gMmquK(const s_TokenIdx& token, const int from, const s_Context& ctx)
{
    return formatTokenCoord_uWl1krws(((from != token.modid) ? _fname_uP3EjQNl(token, ctx) : (*(const fu::str*)fu::NIL)), _token_yZ5HaS8S(token, ctx).lcc);
}

inline static bool l_4_1_xVrjaOUC(const s_LineColChars& a, const s_LineColChars& b)
{
    int _0 {};
    return ((_0 = (a.line - b.line)) ? _0 : (a.col - b.col)) < 0;
}

static void sort_sgWfWnhl(fu::vec<s_LineColChars>& a)
{
    s_LineColChars l {};
    s_LineColChars r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = l_4_1_xVrjaOUC(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_rPyr0EN2jza
                                #define DEF_sort_rPyr0EN2jza
inline void sort_rPyr0EN2(fu::vec<s_LineColChars>& a)
{
    sort_sgWfWnhl(a);
}
                                #endif

inline static fu::vec<fu::str>& l_0_0_qYYdpiVy(const fu::str& substr, fu::vec<fu::str>& result)
{
    return (result += fu::str(substr));
}

                                #ifndef DEF_split_nZ5bsPvK8bf
                                #define DEF_split_nZ5bsPvK8bf
inline void split_nZ5bsPvK(const fu::str& str, fu::view<char> sep, fu::vec<fu::str>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {
            l_0_0_qYYdpiVy(fu::slice(str, last, next), result);
            last = (next + N);
        };
    };
    if (last)
        l_0_0_qYYdpiVy(fu::slice(str, last), result);
    else
        l_0_0_qYYdpiVy(str, result);

}
                                #endif

                                #ifndef DEF_split_KKIz7pog4J6
                                #define DEF_split_KKIz7pog4J6
inline fu::vec<fu::str> split_KKIz7pog(const fu::str& str, fu::view<char> sep)
{
    /*MOV*/ fu::vec<fu::str> result {};
    split_nZ5bsPvK(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_first_UgnqAsf5IG4
                                #define DEF_first_UgnqAsf5IG4
inline const s_LineColChars& first_UgnqAsf5(fu::view<s_LineColChars> s)
{
    if (s.size())
        return s[0];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_last_UgnqAsf5IG4
                                #define DEF_last_UgnqAsf5IG4
inline const s_LineColChars& last_UgnqAsf5(fu::view<s_LineColChars> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

                                #ifndef DEF_min_AsFD7H8Nlu6
                                #define DEF_min_AsFD7H8Nlu6
inline int min_AsFD7H8N(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_max_AsFD7H8Nlu6
                                #define DEF_max_AsFD7H8Nlu6
inline int max_AsFD7H8N(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu::str BAD;
                                #endif

fu::str formatCodeSnippet_AVzbQNfA(const fu::str& src, fu::vec<s_LineColChars>&& highlight, const s_CodeFmt fmt)
{
    sort_rPyr0EN2(highlight);
    for (int i = (highlight.size() - 1); i-- > 0; )
    {
        const s_LineColChars& a = highlight[i];
        const s_LineColChars& b = highlight[(i + 1)];
        if (a.line != b.line)
        {
            if (!(a.line < b.line))
                fu_ASSERT();

        }
        else if ((a.col + a.chars) > b.col)
            highlight.splice(i, 1);

    };
    if (!highlight)
    {
        return fu::str{};
    }
    else
    {
        fu::vec<fu::str> lines = split_KKIz7pog(src, "\n"_fu);
        const s_LineColChars& start = first_UgnqAsf5(highlight);
        const s_LineColChars& end = last_UgnqAsf5(highlight);
        int l_start = (start.line - 1);
        int l_end = end.line;
        l_start = max_AsFD7H8N(min_AsFD7H8N(l_start, lines.size()), 0);
        l_end = max_AsFD7H8N(min_AsFD7H8N(l_end, lines.size()), 0);
        /*MOV*/ fu::str result {};
        const int leadContext = (s_CodeFmt((fmt & s_CodeFmt((s_CodeFmt_NoContext | s_CodeFmt_NoLeadContext)))) ? 0 : 2);
        const int tailContext = (s_CodeFmt((fmt & s_CodeFmt((s_CodeFmt_NoContext | s_CodeFmt_NoTailContext)))) ? 0 : 2);
        for (int i_1 = max_AsFD7H8N(0, (l_start - leadContext)); i_1 < l_start; i_1++)
        {
            result += (DIM + "      | "_fu);
            result += lines[i_1];
            result += (RESET + "\n"_fu);
        };
        for (int i_2 = l_start; i_2 < l_end; i_2++)
        {
            fu::str line { lines[i_2] };
            const int line_no = (i_2 + 1);

            {
                fu::str margin = x7E_r7bhmB7D(fu::i64dec(line_no), " | "_fu);
                while (margin.size() < 8)
                    margin = (" "_fu + margin);

                result += ((DIM + margin) + RESET);
            };
            for (int i_3 = highlight.size(); i_3-- > 0; )
            {
                const s_LineColChars& token = highlight[i_3];
                if (token.line == line_no)
                {
                    const int c0 = max_AsFD7H8N(min_AsFD7H8N((token.col - 1), line.size()), 0);
                    const int c1 = min_AsFD7H8N((c0 + token.chars), line.size());
                    line.splice(c1, 0, RESET);
                    line.splice(c0, 0, BAD);
                };
            };
            result += (line + "\n"_fu);
        };
        for (int i_3 = l_end; i_3 < min_AsFD7H8N(lines.size(), (l_end + tailContext)); i_3++)
        {
            result += (DIM + "      | "_fu);
            result += lines[i_3];
            result += (RESET + "\n"_fu);
        };
        return /*NRVO*/ result;
    };
}

fu::str formatCodeSnippet_2ldmrhJc(const fu::str& src, const s_LineColChars& token, const s_CodeFmt fmt)
{
    return formatCodeSnippet_AVzbQNfA(src, fu::vec<s_LineColChars> { fu::slate<1, s_LineColChars> { s_LineColChars(token) } }, fmt);
}

inline static bool l_4_2_X5KXn1Zo(const s_TokenIdx& a, const s_TokenIdx& b)
{
    return a.modid < b.modid;
}

static void sort_gkZb37uC(fu::vec<s_TokenIdx>& a)
{
    s_TokenIdx l {};
    s_TokenIdx r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = l_4_2_X5KXn1Zo(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_FuMFYq5e7xj
                                #define DEF_sort_FuMFYq5e7xj
inline void sort_FuMFYq5e(fu::vec<s_TokenIdx>& a)
{
    sort_gkZb37uC(a);
}
                                #endif

                                #ifndef DEF_if_first_MudMRkWrRD0
                                #define DEF_if_first_MudMRkWrRD0
inline const s_TokenIdx& if_first_MudMRkWr(fu::view<s_TokenIdx> s)
{
    if (s.size())
        return s[0];
    else
        return (*(const s_TokenIdx*)fu::NIL);

}
                                #endif

fu::str formatCodeSnippet_M4QtP2oD(fu::vec<s_TokenIdx>&& tokens, const int from, const s_CodeFmt fmt, const s_Context& ctx)
{
    sort_FuMFYq5e(tokens);
    /*MOV*/ fu::str append {};
    for (int i = 0; i < (tokens.size() - 1); i++)
    {
        const s_TokenIdx& a = tokens[i];
        const s_TokenIdx& b = tokens[(i + 1)];
        if (a.modid != b.modid)
        {
            append += "\n"_fu;
            append += formatCodeSnippet_M4QtP2oD(fu::slice(tokens, (i + 1)), from, s_CodeFmt{}, ctx);
            tokens.shrink((i + 1));
            break;
        };
    };
    const s_TokenIdx& head = if_first_MudMRkWr(tokens);
    if (!head)
        return /*NRVO*/ append;
    else
    {
        /*MOV*/ fu::str result {};
        result += formatTokenCoord_q6gMmquK(head, from, ctx);
        result += ":\n"_fu;
        if (!s_CodeFmt((fmt & s_CodeFmt((s_CodeFmt_NoContext | s_CodeFmt_NoLeadContext)))))
            result += "\n"_fu;

        /*MOV*/ fu::vec<s_LineColChars> highlight {};
        for (int i_1 = 0; i_1 < tokens.size(); i_1++)
            highlight.push(s_LineColChars(_token_yZ5HaS8S(tokens[i_1], ctx).lcc));

        const fu::str& src = getModuleSrc_6HD1N2G2(head.modid, ctx);
        result += formatCodeSnippet_AVzbQNfA(src, static_cast<fu::vec<s_LineColChars>&&>(highlight), fmt);
        result += append;
        return /*NRVO*/ result;
    };
}

fu::str getShortModuleName_Y2f94oTr(const fu::str& fname)
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
    fu_ASSERT();
}

#endif
