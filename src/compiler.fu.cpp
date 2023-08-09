#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <par/parfor.hpp>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

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
struct s_Result;
s_Module& getModule_9WEb5JfY(const fu::str&, s_Context&);
fu::str getFile_ILGIGgDT(fu::str&&, s_Context&);
s_ModuleStat ModuleStat_now_pUbtfzLn();
s_LexerOutput lex_aPLRBLOl(const fu::str&, const fu::str&);
s_ParserOutput parse_od6Zl77H(int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&);
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
void setModule_fYGWKsxK(const s_Module&, s_Context&);
fu::str resolveFile_pcP1UVCR(const fu::str&, s_Context&);
static s_ModuleOrder compile_lexParseDeps_JYBM6eVT(const fu::str&, fu::view<char>, s_Context&, const s_Options&);
s_SolverOutput solve_wxNPSagY(const s_Context&, s_Module&, const s_Options&);
fu::str inspect_66vMeR0m(const s_Module&);
s_CodegenOutput cpp_codegen_jRxn7XMh(const s_Module&, const s_Context&, const s_Options&);
fu::str get_iZKxiafi(fu::str&&);
int64_t size_IIXDOWa5(fu::str&&);
double hr_CPFg3qvV();
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void ModuleStat_print_6JjvJ5tS(const s_ModuleStat&, const fu::str&, fu::view<char>);
void build_Bzn6vtbK(fu::str&&, fu::view<char>, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::str&&, fu::view<char>, fu::view<char>, fu::view<char>, bool, bool, bool, bool, fu::view<fu::str>, fu::view<fu::str>, const s_Context&);

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

                                #ifndef DEF_s_Result
                                #define DEF_s_Result
struct s_Result
{
    s_Module module;
    fu::str error;
    s_Result(const s_Result&) = delete;
    s_Result(s_Result&&) = default;
    s_Result& operator=(const s_Result&) = delete;
    s_Result& operator=(s_Result&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || module
            || error
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

static s_ModuleOrder compile_lexParseDeps_JYBM6eVT(const fu::str& fname, fu::view<char> via, s_Context& ctx, const s_Options& options)
{
    const s_Module& module = getModule_9WEb5JfY(fname, ctx);
    if (module.in)
    {
        if (module.order)
            return (module.order ? module.order : fu::fail("BUG: !!module.in but !module.order"_fu));
        else
            fu::fail((((("import circle: `"_fu + fname) + "\n\t<- "_fu) + via) + "`."_fu));

    }
    else
    {
        s_Module module_1 = clone_mLnIjDzk(module);
        if (module_1.out)
            fu::fail("BUG: !!module.out"_fu);
        else
        {
            fu::str _0 {};
            /*MOV*/ fu::str src = ((_0 = getFile_ILGIGgDT(fu::str(fname), ctx)) ? static_cast<fu::str&&>(_0) : fu::fail(((("import badfile: `"_fu + via) + fname) + "`."_fu)));
            const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
            /*MOV*/ s_LexerOutput lexer_result = lex_aPLRBLOl(src, fname);
            const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
            /*MOV*/ s_ParserOutput parser_result = parse_od6Zl77H(module_1.modid, fname, src, lexer_result.tokens, options);
            const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
            module_1.in = s_ModuleInputs { static_cast<fu::str&&>(src), static_cast<s_LexerOutput&&>(lexer_result), static_cast<s_ParserOutput&&>(parser_result) };
            module_1.stats.lex = (stat1 - stat0);
            module_1.stats.parse = (stat2 - stat1);
            setModule_fYGWKsxK(module_1, ctx);
            if (!module_1.order)
            {
                module_1.order.dep_depth = 1;
                fu::vec<fu::str> fuzimports { module_1.in.parse.fuzimports };
                for (int i = 0; i < fuzimports.size(); i++)
                {
                    fu::str _1 {};
                    const s_ModuleOrder order = (_1 = resolveFile_pcP1UVCR(fuzimports[i], ctx), compile_lexParseDeps_JYBM6eVT(static_cast<fu::str&&>(_1), (fname + (via ? ("\n\t<- "_fu + via) : fu::str{})), ctx, options));
                    if ((module_1.order.dep_depth <= order.dep_depth))
                        module_1.order.dep_depth = (order.dep_depth + 1);

                };
                setModule_fYGWKsxK(module_1, ctx);
            }
            else
                fu::fail("BUG: !!module.order"_fu);

            return (module_1.order ? module_1.order : fu::fail("BUG: !module.order after lexParseDeps."_fu));
        };
    };
}

                                #ifndef DEF_grow_if_oob_rttDpjXHlnf
                                #define DEF_grow_if_oob_rttDpjXHlnf
inline fu::vec<int>& grow_if_oob_rttDpjXH(fu::vec<fu::vec<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_join_NazccvwqHlg
                                #define DEF_join_NazccvwqHlg
inline fu::vec<int> join_Nazccvwq(fu::view<fu::vec<int>> a)
{
    if (a.size() < 2)
    {
        if (a.size())
            return fu::vec<int>(a[0]);
        else
        {
            return fu::vec<int>{};
        };
    }
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::vec<int> res {};
        res.grow<false>(size);
        fu::view<int> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<int> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static void compile_solveCodegen_nzH0noS3(s_Module& module, const s_Options& options, const s_Context& ctx)
{
    // Hoisted:
    fu::str x {};

    if (module.out)
        fu::fail("compile_solveCodegen: !!module.out"_fu);
    else
    {
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        module.out.solve = solve_wxNPSagY(ctx, module, options);
        if (options.dev & s_DevOptions_DEV_PrintAST)
        {
            fu::println((fu::slate<1, fu::str> { static_cast<fu::str&&>((x = inspect_66vMeR0m(module), x)) }));
        };
        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        module.out.cpp = cpp_codegen_jRxn7XMh(module, ctx, options);
        if (options.dev & s_DevOptions_DEV_PrintCG)
        {
            const fu::str* BL_5_v;
            fu::println((fu::slate<1, fu::str> { fu::str((__extension__ (
            {
                const fu::str& x_1 = module.out.cpp.src;
                BL_5_v = &(x_1);
            (void)0;}), *BL_5_v)) }));
        };
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
    };
}

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

inline static s_Result l_3_0_Xmq9QYza(const int modid, const s_Context& ctx, const s_Options& options)
{

    try
    {
    {
        const s_Module& module = ctx.modules[modid];
        if (module.out)
        {
            return s_Result{};
        }
        else
        {
            /*MOV*/ s_Module module_1 = clone_mLnIjDzk(module);
            compile_solveCodegen_nzH0noS3(module_1, options, ctx);
            return s_Result { static_cast<s_Module&&>(module_1), fu::str{} };
        };
    }
    }
    catch (const std::exception& o_0)
    {
        fu::str error = fu::to_str(o_0.what());

    {
        return s_Result { s_Module{}, (error ? static_cast<fu::str&&>(error) : x7E_r7bhmB7D("COMPILER BUG: Empty error string, modid="_fu, fu::i64dec(modid))) };
    }
    }
;
}

inline static s_Result& l_38_2_CfGpOYC8(const int i, fu::view<int> arr, fu::view_mut<s_Result> result, const s_Context& ctx, const s_Options& options)
{
    return (result.mutref(i) = l_3_0_Xmq9QYza(arr[i], ctx, options));
}

inline static void parallel_for_r5vLlUOA(const int min, int end, fu::view<int> arr, fu::view_mut<s_Result> result, const s_Context& ctx, const s_Options& options)
{
    int start = (end & 0);
    (void) start;

    typedef decltype(start) start_t;
    typedef decltype(end) end_t;

    fu::parallel_for(size_t(end), size_t(min > 1 ? min : 1), [&](size_t Start, size_t End)
    {
        auto start = (start_t) Start;
        auto end   = (end_t  ) End;

    for (int i = start; i < end; i++)
        l_38_2_CfGpOYC8(i, arr, result, ctx, options);

    });

}

                                #ifndef DEF_map_PuVPOc05w3f
                                #define DEF_map_PuVPOc05w3f
inline fu::vec<s_Result> map_PuVPOc05(fu::view<int> arr, const int min, const s_Context& ctx, const s_Options& options)
{
    /*MOV*/ fu::vec<s_Result> result {};
    result.grow<false>(arr.size());
    parallel_for_r5vLlUOA(min, arr.size(), arr, result, ctx, options);
    return /*NRVO*/ result;
}
                                #endif

inline static void l_3_1_NPEVhDvH(const s_Result& result, s_Context& ctx)
{
    if (result.error)
        fu::fail(fu::str(result.error));
    else if (result.module.out)
        setModule_fYGWKsxK(result.module, ctx);

}

                                #ifndef DEF_each_bxNrT8VDHUe
                                #define DEF_each_bxNrT8VDHUe
inline void each_bxNrT8VD(fu::view<s_Result> a, s_Context& ctx)
{
    for (int i = 0; i < a.size(); i++)
        l_3_1_NPEVhDvH(a[i], ctx);

}
                                #endif

inline static void l_3_2_N1TfqJEh(const int modid, s_Context& ctx, const s_Options& options)
{
    const s_Module& module = ctx.modules[modid];
    if (!module.out)
    {
        s_Module module_1 = clone_mLnIjDzk(module);
        compile_solveCodegen_nzH0noS3(module_1, options, ctx);
        setModule_fYGWKsxK(module_1, ctx);
    };
}

                                #ifndef DEF_each_w6YY4Y9jwp6
                                #define DEF_each_w6YY4Y9jwp6
inline void each_w6YY4Y9j(fu::view<int> a, s_Context& ctx, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
        l_3_2_N1TfqJEh(a[i], ctx, options);

}
                                #endif

void compile_BH9o2u0I(const fu::str& fname, fu::view<char> via, s_Context& ctx, const s_Options& options)
{
    compile_lexParseDeps_JYBM6eVT(fname, via, ctx, options);
    fu::vec<fu::vec<int>> dep_order {};
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        grow_if_oob_rttDpjXH(dep_order, module.order.dep_depth) += module.modid;
    };
    ctx.dep_order = join_Nazccvwq(dep_order);
    for (int i_1 = 0; i_1 < dep_order.size(); i_1++)
    {
        fu::view<int> modids = dep_order[i_1];
        if (options.dev & s_DevOptions_DEV_Parallel)
        {
            fu::vec<s_Result> results = map_PuVPOc05(modids, 0, ctx, options);
            each_bxNrT8VD(results, ctx);
        }
        else
            each_w6YY4Y9j(modids, ctx, options);

    };
}

                                #ifndef DEF_if_last_HTJeFkMmZC7
                                #define DEF_if_last_HTJeFkMmZC7
inline char if_last_HTJeFkMm(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str absdir_CN1WPKuB(const fu::str& a)
{
    if (if_last_HTJeFkMm(a) == '/')
        return fu::str(a);
    else
        return a + '/';

}

static const fu::str HOME fu_INIT_PRIORITY(1012) = absdir_CN1WPKuB(get_iZKxiafi("HOME"_fu));

fu::str locate_FUDIR_LI96RGZs()
{
    /*MOV*/ fu::str dir = (HOME + "fu/"_fu);
    fu::str fn = (dir + "src/compiler.fu"_fu);
    const int64_t fs = size_IIXDOWa5(fu::str(fn));
    if (fs > 1000ll)
        return /*NRVO*/ dir;
    else
        fu::fail(x7E_r7bhmB7D((("Bad compiler.fu: "_fu + fn) + ": "_fu), fu::i64dec(fs)));

}

                                #ifndef DEF_FUDIR
                                #define DEF_FUDIR
extern const fu::str FUDIR fu_INIT_PRIORITY(1012) = locate_FUDIR_LI96RGZs();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu::str DEFAULT_WORKSPACE fu_INIT_PRIORITY(1012) = (FUDIR + "build-cpp/"_fu);
                                #endif

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEF_map_uXnvsVx1UHd
                                #define DEF_map_uXnvsVx1UHd
inline fu::vec<s_Module> map_uXnvsVx1(fu::view<s_Module> a)
{
    /*MOV*/ fu::vec<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_mLnIjDzk(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_mmo21ZBMRNf
                                #define DEF_clone_mmo21ZBMRNf
inline fu::vec<s_Module> clone_mmo21ZBM(fu::view<s_Module> a)
{
    return map_uXnvsVx1(a);
}
                                #endif

                                #ifndef DEF_clone_r8XweoGlSE0
                                #define DEF_clone_r8XweoGlSE0
inline const s_Map_qfSmCKRS93e& clone_r8XweoGl(const s_Map_qfSmCKRS93e& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ZlBdBfUR1la
                                #define DEF_clone_ZlBdBfUR1la
inline s_Context clone_ZlBdBfUR(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.modules = clone_mmo21ZBM(a.modules);
        res.dep_order = clone_kttDaK42(a.dep_order);
        res.files = clone_r8XweoGl(a.files);
        res.fuzzy = clone_r8XweoGl(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

void compile_and_build_wRodeEgF(const fu::str& fname, const fu::str& dir_wrk, const fu::str& bin, const fu::str& dir_obj, const fu::str& dir_src, const fu::str& dir_cpp, fu::view<char> scheme, const bool run, const bool shared, const bool hotswap, const bool nocache, fu::view<fu::str> flags_cc, fu::view<fu::str> flags_ld)
{
    // Hoisted:
    fu::str x {};
    fu::str x_1 {};
    fu::str x_2 {};
    fu::str x_3 {};

    s_Context ctx = clone_ZlBdBfUR(CTX_PRELUDE);
    const s_Options options = s_Options { s_Lint{}, s_SolverNotes{}, s_CGDefects{}, s_DevOptions_DEV_Parallel, {} };

    {
        fu::println((fu::slate<2, fu::str> { static_cast<fu::str&&>((x = "COMPILE "_fu, x)), fu::str(fname) }));
        const double t0 = hr_CPFg3qvV();
        compile_BH9o2u0I(fname, fu::view<char>{}, ctx, options);
        const double t1 = hr_CPFg3qvV();
        const double tt = (t1 - t0);
        if ((t1 - t0) > 0.025)
        {
            s_ModuleStat lex {};
            s_ModuleStat parse {};
            s_ModuleStat solve {};
            s_ModuleStat codegen {};
            fu::view<s_Module> m = ctx.modules;
            for (int i = 0; i < m.size(); i++)
            {
                lex += m[i].stats.lex;
                parse += m[i].stats.parse;
                solve += m[i].stats.solve;
                codegen += m[i].stats.codegen;
            };
            ModuleStat_print_6JjvJ5tS(lex, "\n    lex "_fu, fu::view<char>{});
            ModuleStat_print_6JjvJ5tS(parse, "  parse "_fu, fu::view<char>{});
            ModuleStat_print_6JjvJ5tS(solve, "  solve "_fu, fu::view<char>{});
            ModuleStat_print_6JjvJ5tS(codegen, "codegen "_fu, "\n"_fu);
        };
        fu::println((fu::slate<3, fu::str> { static_cast<fu::str&&>((x_1 = "        "_fu, x_1)), static_cast<fu::str&&>((x_2 = fu::f64dec(tt), x_2)), static_cast<fu::str&&>((x_3 = "s\n"_fu, x_3)) }));
    };
    build_Bzn6vtbK(fu::str(dir_wrk), FUDIR, fu::str{}, fu::str(bin), fu::str(dir_obj), fu::str(dir_src), fu::str(dir_cpp), fname, scheme, fu::view<char>{}, run, shared, hotswap, nocache, flags_cc, flags_ld, ctx);
}

#endif
