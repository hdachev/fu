#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/init_priority.h>

struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
enum s_kind: fu::u8;
struct s_LineColChars;
struct s_ParserOutput;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
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
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
s_Module& getModule_9WEb5JfY(const fu::str&, s_Context&);
s_LexerOutput lex_aPLRBLOl(const fu::str&, const fu::str&);
s_ParserOutput parse_od6Zl77H(int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&);
void setModule_fYGWKsxK(const s_Module&, s_Context&);
s_SolverOutput solve_wxNPSagY(const s_Context&, s_Module&, const s_Options&);

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

                                #ifndef DEF_s_DevOptions
                                #define DEF_s_DevOptions
inline constexpr s_DevOptions s_DevOptions_DEV_PrintAST = s_DevOptions(1u);
inline constexpr s_DevOptions s_DevOptions_DEV_PrintCG = s_DevOptions(2u);
inline constexpr s_DevOptions s_DevOptions_DEV_Parallel = s_DevOptions(4u);
inline constexpr s_DevOptions s_DevOptions_DEV_ExpectFail = s_DevOptions(8u);
inline constexpr s_DevOptions s_DevOptions_DEV_DontFoldLiterals = s_DevOptions(16u);

inline constexpr s_DevOptions MASK_s_DevOptions
    = s_DevOptions_DEV_PrintAST
    | s_DevOptions_DEV_PrintCG
    | s_DevOptions_DEV_Parallel
    | s_DevOptions_DEV_ExpectFail
    | s_DevOptions_DEV_DontFoldLiterals;
                                #endif

                                #ifndef DEF_s_Lint
                                #define DEF_s_Lint
struct s_Lint
{
    int maxwarn;
    explicit operator bool() const noexcept
    {
        return false
            || maxwarn
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Options
                                #define DEF_s_Options
struct s_Options
{
    s_Lint lint;
    s_SolverNotes break_notes;
    s_CGDefects break_defects;
    s_DevOptions dev;
    unsigned shuffle;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || break_defects
            || dev
            || shuffle
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

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

static const fu::str PRELUDE_SRC fu_INIT_PRIORITY(1011) = "\n\n\n// Arithmetics.\n\nprefix fn + !T(a: T) case (T.is::arithmetic): T __native;\nprefix fn - !T(a: T) case (T.is::arithmetic): T __native;\n\ninfix fn + !T(a: T, b: T) case (T.is::arithmetic): T __native;\ninfix fn - !T(a: T, b: T) case (T.is::arithmetic): T __native;\ninfix fn * !T(a: T, b: T) case (T.is::arithmetic): T __native;\ninfix fn / !T(a: T, b: T) case (T.is::arithmetic): T __native;\n\ninfix fn % !T(a: T, b: T)\n    case (T.is::integral): T __native;\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmod\");\n\nprefix fn ++ !T(ref a: T) case (T.is::arithmetic): &mut T __native;\nprefix fn -- !T(ref a: T) case (T.is::arithmetic): &mut T __native;\n\npostfix fn ++ !T(ref a: T) case (T.is::arithmetic): T __native;\npostfix fn -- !T(ref a: T) case (T.is::arithmetic): T __native;\n\ninfix fn += !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn -= !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn *= !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\ninfix fn /= !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\n\ninfix fn >  !T(a: T, b: T) case (T.is::primitive): bool __native;\ninfix fn <  !T(a: T, b: T) case (T.is::primitive): bool __native;\ninfix fn >= !T(a: T, b: T) case (T.is::primitive): bool __native;\ninfix fn <= !T(a: T, b: T) case (T.is::primitive): bool __native;\n\n\n// Bitwise.\n\nprefix fn ~ !T(a: T) case (T.is::bitfield): T __native;\n\ninfix fn & !T(a: T, b: T) case (T.is::bitfield): T __native;\ninfix fn | !T(a: T, b: T) case (T.is::bitfield): T __native;\ninfix fn ^ !T(a: T, b: T) case (T.is::bitfield): T __native;\n\ninfix fn &= !T(ref a: T, b: T) case (T.is::bitfield): &mut T __native;\ninfix fn |= !T(ref a: T, b: T) case (T.is::bitfield): &mut T __native;\ninfix fn ^= !T(ref a: T, b: T) case (T.is::bitfield): &mut T __native;\n\ninfix fn << !T(a: T, b: T) case (T.is::integral): T __native;\ninfix fn >> !T(a: T, b: T) case (T.is::integral): T __native;\n\ninfix fn <<= !T(ref a: T, b: T) case (T.is::integral): &mut T __native;\ninfix fn >>= !T(ref a: T, b: T) case (T.is::integral): &mut T __native;\n\n\n// Numeric conversions.\n\nfn   i8 !T(v: T) case (T.is::primitive):   i8 __native(\"/prim/convert\");\nfn  i16 !T(v: T) case (T.is::primitive):  i16 __native(\"/prim/convert\");\nfn  i32 !T(v: T) case (T.is::primitive):  i32 __native(\"/prim/convert\");\nfn  i64 !T(v: T) case (T.is::primitive):  i64 __native(\"/prim/convert\");\nfn i128 !T(v: T) case (T.is::primitive): i128 __native(\"/prim/convert\");\n\nfn   u8 !T(v: T) case (T.is::primitive):   u8 __native(\"/prim/convert\");\nfn  u16 !T(v: T) case (T.is::primitive):  u16 __native(\"/prim/convert\");\nfn  u32 !T(v: T) case (T.is::primitive):  u32 __native(\"/prim/convert\");\nfn  u64 !T(v: T) case (T.is::primitive):  u64 __native(\"/prim/convert\");\nfn u128 !T(v: T) case (T.is::primitive): u128 __native(\"/prim/convert\");\n\nfn  f32 !T(v: T) case (T.is::primitive): f32 __native(\"/prim/convert\");\nfn  f64 !T(v: T) case (T.is::primitive): f64 __native(\"/prim/convert\");\n\nfn byte !T(v: T) case (T.is::primitive): byte __native(\"/prim/convert\");\n\nfn unsigned !T(v: T)\n    case (T -> i8)     v.u8;\n    case (T -> i16)    v.u16;\n    case (T -> i32)    v.u32;\n    case (T -> i64)    v.u64;\n    case (T -> i128)   v.u128;\n    case (T.is::integral && T.is::unsigned) v;\n\nfn signed !T(v: T)\n    case (T -> u8)     v.i8;\n    case (T -> u16)    v.i16;\n    case (T -> u32)    v.i32;\n    case (T -> u64)    v.i64;\n    case (T -> u128)   v.i128;\n    case (T.is::integral && !T.is::unsigned) v;\n\nfn MIN !T(_: T)\n    case (T -> i8 )        -128;\n    case (T -> i16)        -32768;\n    case (T -> i32)        -2147483648;\n    case (T -> i64)        -9223372036854775808;\n    case (T.is::unsigned)  T(0);\n\nfn MAX !T(_: T)\n    case (T -> i8 )        127;\n    case (T -> i16)        32767;\n    case (T -> i32)        2147483647;\n    case (T -> i64)        9223372036854775807;\n    case (T.is::unsigned)  T(-1);\n\ntype  int   = i32; // These may become separate types\ntype uint   = u32; //  with a user-selectable size.\n\n\n// Math.\n\nfn abs !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::abs\");\n\nfn max !T(a: T, b: T)\n    case (T.is::floating_point) a >= b || b != b ? a : b;\n    case (T.is::arithmetic)     a >= b           ? a : b;\n\nfn min !T(a: T, b: T)\n    case (T.is::floating_point) a <= b || b != b ? a : b;\n    case (T.is::arithmetic)     a <= b           ? a : b;\n\nfn exp   !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp\");\nfn exp2  !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp2\");\nfn log   !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log\");\nfn log10 !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log10\");\nfn log2  !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log2\");\n\nfn pow   !T(a: T, b: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::pow\");\nfn sqrt  !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt  !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil  !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::ceil\");\nfn floor !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::floor\");\nfn trunc !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::trunc\");\nfn round !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::round\");\n\nfn sin !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sin\");\nfn cos !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cos\");\nfn tan !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::tan\");\n\nfn asin !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::asin\");\nfn acos !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::acos\");\nfn atan !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2 !T(y: T, x: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI():  f64 __native(\"<math.h>\", \"M_PI\");\nfn E():   f64 __native(\"<math.h>\", \"M_E\");\nfn INF(): f64 __native(\"<math.h>\", \"INFINITY\");\nfn NAN(): f64 __native(\"<math.h>\", \"NAN\");\n\nfn nan    !T(v: T) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf    !T(v: T) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite !T(v: T) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Assignment.\n\ninfix fn   = !T(ref a: T,    mut b: T): &mut T __native;\ninfix fn ||= !T(ref a: T, inline b: T): &mut T = a || (a = b);\ninfix fn &&= !T(ref a: T, inline b: T): &mut T = a && (a = b);\n\nfn swap !T(ref a: T, ref b: T): void __native(\n    \"hacks/soft_risk\",\n    \"<utility>\", \"std::swap\");\n\n\n\n// Arrays.\n//\n// TODO mutval .=,\n//  just like the assignments and splice.\n\nnovec fn len !T(a: [T;]): int __native(\".size()\");\n\nnovec fn [] !T(a: [T;], i: int)\n    case ($a -> &mut [T;]): &mut T __native(\".mutref\");\n    default               : &    T __native;\n\nnovec fn [] !T(a: [T;], start!: int)\n    case ($a -> &mut [T;]): &mut [T;] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default               : &    [T;] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nnovec fn [] !T(a: [T;], end!: int)\n    case ($a -> &mut [T;]): &mut [T;] __native(\"<fu/view.h>\", \"fu::get_view_start0_mut\");\n    default               : &    [T;] __native(\"<fu/view.h>\", \"fu::get_view_start0\");\n\nnovec fn [] !T(a: [T;], start: int, end: int)\n    case ($a -> &mut [T;]): &mut [T;] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default               : &    [T;] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push !T(ref a: T[], mut b: T): void __native(\".push\");\nfn unshift !T(ref a: T[], mut b: T): void __native(\".unshift\");\nfn  insert !T(ref a: T[], i: int, mut b: T): void __native(\".insert\");\n\nfn slice !T(a: [T;], start: int, end: int)\n    case ($a -> T[]):  T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\n    default         : [T;] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn slice !T(a: [T;], start: int)\n    case ($a -> T[]):  T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\n    default         : [T;] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn substr !T(a: T[], start: int, end: int): T[] __native(\"<fu/vec/slice.h>\", \"fu::substr\");\n\nfn splice !T(ref a: T[], start: int, count: int): void  __native(\".splice\");\nfn splice !T(ref a: T[], start: int, count: int, /*TODO FIX*/b: [T]): void  __native(\".splice\");\n\nfn    pop !T(ref a: T[]): void __native(\".pop()\");\nfn  shift !T(ref a: T[]): void __native(\".shift()\");\n\nfn  clear !T(ref a: T[]): void __native(\".clear()\");\nfn shrink !T(ref a: T[], len: int): void __native(\".shrink\");\n\nfn resize !T(ref a: T[], len: int): void __native(\".resize\");\nfn   grow !T(ref a: T[], len: int): void __native(\".grow\");\n\nfn resize_junk !T(ref a: T[], len: int): void __native(\".resize<false>\");\nfn   grow_junk !T(ref a: T[], len: int): void __native(\".grow<false>\");\n\n\n// Sorts, via std::sort - fnptrs.\n\nfn sort !T(ref a: [T;]): void\n{\n    pragma include(\"<algorithm>\");\n    pragma emit(\n    `\n        auto* data = `a`.data_mut();\n        std::sort(data, data + `a`.size());\n    `);\n}\n\nfn sort !T(ref a: [T;], less/*: fn(a: T, b: T): bool*/): void\n{\n    noflow fn sort()\n    {\n        mut l: T;\n        mut r: T;\n        pragma include(\"<algorithm>\");\n        pragma emit(\n        `\n            (void) `l`;\n            (void) `r`;\n            auto* data = `a`.data_mut();\n            std::sort(data, data + `a`.size(), [&](auto& `l`, auto& `r`)\n            {\n        `);\n\n        mut lt: bool = less(l, r);\n        pragma emit(\n        `\n                return `lt`;\n            });\n        `);\n    }\n\n    sort();\n}\n\n\n// String likes.\n\nfn find !T(a: [T;], b: [T;], start: int, end: int) case (T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find !T(a: [T;], b: [T;], start: int)           case (T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find !T(a: [T;], b: [T;])                       case (T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\n\nfn has  !T(a: [T;], b: [T;]) case (T.is::primitive): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Find char.\n\nfn starts !T(a: [T;], with: T): bool\n{\n    return a.len && a[0] == with;\n}\n\nfn ends !T(a: [T;], with: T): bool\n{\n    return a.len && a[a.len - 1] == with;\n}\n\nfn starts !T(a: [T;], with: [T;]): bool\n{\n    return a.len >= with.len\n        && a[0, with.len] == with;\n}\n\nfn ends !T(a: [T;], with: [T;]): bool\n{\n    return a.len >= with.len\n        && a[a.len - with.len, a.len] == with;\n}\n\nfn find !T(a: [T;], b: T, mut start: int): int\n{\n    start = start > 0 ? start : 0;\n    for (mut i = start; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn find !T(a: [T;], b: T): int\n{\n    for (mut i = 0; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn has !T(a: [T;], b: T): bool\n{\n    for (mut i = 0; i < a.len; i++)\n        if (a[i] == b)\n            return true;\n\n    return false;\n}\n\n\n// Strings.\n\ntype string = byte[];\n\ninfix fn  >(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \">\");\ninfix fn  <(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \"<\");\ninfix fn >=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \">=\");\ninfix fn <=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \"<=\");\n\n\n// D-style concats.\n//\n// TODO FIX these concats hide copies\n//  which also means they dont work correctly for nocopy stuff\n//\ninfix fn ~ !T(a: [T;], b: [T;]): T[] __native(\"<fu/vec/concat.h>\",     \"+\");\ninfix fn ~ !T(a: [T;], b:  T  ): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\ninfix fn ~ !T(a:  T  , b: [T;]): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\ninfix fn ~= !T(ref a: T[],     b: [T;]): &mut T[] __native(\"<fu/vec/concat.h>\",     \"+=\");\ninfix fn ~= !T(ref a: T[], mut b:  T  ): &mut T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\n\n// Fun with views.\n\nfn view!<T, U>(a: [T;], of: U)\n    case ($a -> &mut [T;] && T.is::trivial && U.is::trivial): &mut [U] __native(\"<fu/view.h>\", \"fu::view_of_mut\");\n    case (                    T.is::trivial && U.is::trivial):      [U] __native(\"<fu/view.h>\", \"fu::view_of\");\n\ninfix fn .= !T(ref a: [T;], b: [T;]) case (T.is::copy): void __native(\"<fu/vec/view_assign.h>\", \"fu::view_assign\");\n\n// TODO not needed if swap(x, y) alias-ok's its two arguments:\nfn swap !T(ref a: [T;], i: int, j: int): void __native(\"<fu/vec/view_swap.h>\", \"fu::view_swap\");\n\n\n// Stringifiables.\n\ninfix fn ~  !T(    a: [byte], b.str) a ~ b;\ninfix fn ~  !T(    a.str, b: [byte]) a ~ b;\ninfix fn ~= !T(ref a: string, b.str) a ~= b;\n\nfn str !T(n: T)\n    case (T.is::unsigned       ): string __native(\"<fu/decstr.h>\", \"fu::u64dec\");\n    case (T.is::integral       ): string __native(\"<fu/decstr.h>\", \"fu::i64dec\");\n    case (T -> bool            ): string __native(\"<fu/decstr.h>\", \"fu::booldec\");\n    case (T -> f32             ): string __native(\"<fu/decstr.h>\", \"fu::f32dec\");\n    case (T -> f64             ): string __native(\"<fu/decstr.h>\", \"fu::f64dec\");\n    case (T.is::enum)\n{\n    for (fieldname i: T)\n        if (n == \"i\")\n            return \"i\";\n\n    return n.i64.str; // TODO FIX use .integer or .arithmetic when we get these\n}\n    case (T.is::flags)\n{\n    mut res: string;\n    for (fieldname i: T)\n        if (n & \"i\")\n            res ~= \"i\" ~ \", \";\n\n    if (res)\n        res.shrink(res.len - 2);\n\n    return res;\n}\n\n\n// Assertions, bugs & fails.\n//  TODO i dont actually think we want to have nullary stuff in prelude,\n//   so TODO needs to take an arg, same with assert - perhaps a pass-through argument.\n\nfn throw(mut reason: string): never __native(\"<fu/never.h>\", \"fu::fail\",\n    \"|Fx_NotDeadCode\", \"|Fx_DontMoveDown\", \"|Fx_Throws\");\n\nfn assert(): never __native(\"<fu/never.h>\", \"fu_ASSERT()\",\n    \"|Fx_NotDeadCode\", \"|Fx_DontMoveDown\", \"|Fx_Crashes\");\n\n\n// Printifiables = anything that implements print.\n\ninline fn print(x: string): string = x;\ninline fn print(x.str)    : string = x;\n\nfn println(parts.print[]: [string]): void __native(\"<fu/print.h>\", \"fu::println\",\n    \"|output\");\n\n\n// String commons.\n\nfn join !T(a: [T[];], sep?: T or [T;] or [])\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    let N = typeof(sep) -> [T;] ? sep.len\n          : typeof(sep) ->  T   ? 1\n                                : 0;\n\n    mut size = a[0].len;\n    for (mut i = 1; i < a.len; i++)\n        size += N + a[i].len;\n\n    mut res: T[];\n    res.grow_junk(size);\n\n    let head = a[0];\n    size = head.len;\n    res[0, head.len] .= head;\n    for (mut i = 1; i < a.len; i++)\n    {\n        let range = a[i];\n        if (typeof(sep) -> [T;])\n            res[size, size + N] .= sep;\n        else if (typeof(sep) -> T)\n            res[size] = sep;\n\n        size += N;\n        res[size, size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn split !T(str: T[] or [T;], sep: T or [T;], each)\n{\n    mut last = 0;\n    mut next = 0;\n\n    let N = typeof(sep) -> [T;] ? sep.len : 1;\n    if (N) while ((next = str.find(sep, start: last)) >= 0)\n    {\n        each(str.slice(last, next), first?: !last, last?: false);\n        last = next + N;\n    }\n\n    if (last)\n        each(str.slice(last), first?: false, last?: true);\n    else\n        each(str, first?: true, last?: true);\n}\n\nfn split !T(str: T[], sep: T or [T;])\n{\n    mut result: T[][];\n    split(str, :sep, |substr| result ~= substr);\n    return result;\n}\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn replace !T(str: T[], all: T or [T;], with: T or [T;] or [])\n{\n    mut result: T[];\n    split(str, sep: all, |substr, lax first, lax last|\n    {\n        if (!first)\n            typeof(with) -> [] ? with() : result ~= with;\n        else if (last)\n            return str;\n\n        result ~= substr;\n    });\n\n    return result;\n}\n\n\n//\n\ninfix fn <> !<T, U>(a: T, b: T)\ncase (T.is::primitive) = a < b ? -1 : a > b ? +1 : 0;\ncase (T -> [U;]) {\n    mut cmp = a.len <> b.len;\n    for (mut i = 0; i < a.len && !cmp; i++)\n        cmp = a[i] <> b[i];\n\n    return cmp;\n}\ndefault {\n    // TODO this would be better if it went through each member doing the trivial work first -\n    //  only then going through them again and looking at e.g. array contents etc.\n    for (fieldname i: T) {\n        let cmp = a.i <> b.i;\n        if (cmp)\n            return cmp;\n    }\n\n    return 0;\n}\n\ninfix fn == !T(a: T, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !(a <> b);\n\ninfix fn != !T(a: T, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !!(a <> b);\n\n\n//\n\nfn map !T(a: [T;], fn)\n{\n    mut res: typeof( fn(T, i?: a.len) )[];\n    res.grow_junk(a.len);\n    for (mut i = 0; i < a.len; i++)\n        res[i] = fn(a[i], i?: i);\n\n    return res;\n}\n\nfn each !T(a: [T;], fn)\n    for (mut i = 0; i < a.len; i++)\n        fn(a[i], i?: i);\n\nfn reverse !T(ref a: [T;])\n{\n    let n1 = a.len - 1;\n    let n2 = a.len >> 1;\n    for (mut i = 0; i < n2; i++)\n        a.swap(i, n1 - i);\n}\n\nfn all !T(a: [T;], pred)\n{\n    a.each: |item, i|\n        if !(pred(item, i?: i))\n            return false;\n\n    return true;\n}\n\nfn some !T(a: [T;], pred)\n{\n    a.each: |item, i|\n        if (pred(item, i?: i))\n            return true;\n\n    return false;\n}\n\n"_fu;

s_Context solvePrelude_eRdBm7hX()
{
    fu::str fname = "prelude"_fu;
    /*MOV*/ s_Context ctx {};
    s_Module module = clone_mLnIjDzk(getModule_9WEb5JfY(fname, ctx));
    const s_Options options {};
    /*MOV*/ s_LexerOutput lex = lex_aPLRBLOl(PRELUDE_SRC, fname);
    /*MOV*/ s_ParserOutput parse = parse_od6Zl77H(0, fname, PRELUDE_SRC, lex.tokens, options);
    module.in = s_ModuleInputs { fu::str(PRELUDE_SRC), static_cast<s_LexerOutput&&>(lex), static_cast<s_ParserOutput&&>(parse) };
    setModule_fYGWKsxK(module, ctx);
    module.out.solve = solve_wxNPSagY(ctx, module, options);
    setModule_fYGWKsxK(module, ctx);
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE fu_INIT_PRIORITY(1011) = solvePrelude_eRdBm7hX();
                                #endif

#endif
