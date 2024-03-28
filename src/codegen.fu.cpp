#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/LEGACY_find.h>
#include <fu/vec/LEGACY_slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
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
struct s_Import;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_Shape;
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
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
struct s_Context;
struct s_Map_iIYL7rECCBg;
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
struct s_Outputs;
struct s_StructCanon;
struct s_StructDecl;
struct s_cg_CurrentFn;
struct s_cg_Block;
struct s_NativeHacks;
struct s_ClosureID;
struct s_Intlit;
struct s_TEMPVAR;
bool is_never_FfV8Zuj5(const s_Type&);
[[noreturn]] fu::never FAIL_lTxCw5lL(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool isIrrelevant_40rRB6L8(const s_Type&);
void HERE_hEi2PUi5(const s_TokenIdx&, s_TokenIdx&);
static fu::str cgNode_5IJ88bTK(const s_SolvedNode&, int, const s_Type&, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
static bool isFieldChain_XQp5TZNw(const s_SolvedNode&, const s_Context&, const s_Module&);
bool isRTL_N4q4L7uF(const s_Overload&);
bool is_mutref_hoadAQC0(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_sliceable_3t4EwFeQ(const s_ValueType&);
bool is_ref_gBx1AgSx(const s_Type&);
bool TODO_FIX_isArray_40rRB6L8(const s_Type&);
fu::str qBAD_3PsDzMvu(const fu::str&);
bool is_primitive_3t4EwFeQ(const s_ValueType&);
s_Type tryClear_sliceable_EA8Wup3K(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
static fu::str typeAnnot_FRf6N05C(const s_Type&, int, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
const s_Struct& lookupUserType_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
s_StructCanon parseStructCanon_9HOct2P6(fu::view<char>);
s_Target target_NWTdzsfF(const s_ScopeItem&);
fu::str ID_h1RjsQth(const fu::str&);
bool is_rx_copy_GSunVkiW(const s_Type&);
bool isPassByValue_3t4EwFeQ(const s_ValueType&);
bool is_trivial_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
s_NativeHacks NativeHacks_aylVahSQ(fu::view<char>);
bool is_bitfield_3t4EwFeQ(const s_ValueType&);
bool is_integral_3t4EwFeQ(const s_ValueType&);
bool is_unsigned_3t4EwFeQ(const s_ValueType&);
bool hasIdentifierChars_pZLkTusf(fu::view<char>);
s_Type clear_refs_40rRB6L8(s_Type&&);
const s_Struct& tryLookupUserType_QHDuaMIF(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool hasBinary_nLKt53sX(fu::view<char>);
bool hasUnary_nLKt53sX(fu::view<char>);
fu::str digest62_NBz0rQPD(uint64_t, int);
bool hasPostfix_nLKt53sX(fu::view<char>);
static bool isConstexpr_LTwogSxw(const s_SolvedNode&, const s_Context&, const s_Module&);
static bool globalVar_isConstexpr_DiSieRy8(const s_Overload&, const s_Context&, const s_Module&);
s_ClosureID tryParseClosureID_54NQWyOV(fu::view<char>, const s_TokenIdx&, const s_Context&);
unsigned parse7bit(fu::view<char>, int&);
s_Target Target_2jgCJZJY(int, int, int);
static bool exprOK_lu3buVDP(fu::view<s_SolvedNode>, const s_Context&, const s_Module&);
static fu::vec<fu::str> cgNodes_c3WidZcs(fu::view<s_SolvedNode>, int, fu::view<char>, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
static void TEST_noDanglingRefs_EjPG4jL4(fu::view<int>, const s_SolvedNode&, const s_cg_CurrentFn&, const s_TokenIdx&, const s_Context&, const s_Module&);
static void TEST_noDanglingRefs_f2ypQYd8(fu::view<int>, const s_Lifetime&, const s_cg_CurrentFn&, const s_TokenIdx&, const s_Context&, const s_Module&);
static fu::str cgStatements_5NLNdYe4(fu::view<s_SolvedNode>, int&, fu::view<char>, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
s_Intlit Intlit_sNwIFkW3(fu::view<char>);
bool is_enum_3t4EwFeQ(const s_ValueType&);
bool is_flags_3t4EwFeQ(const s_ValueType&);
s_Type clear_sliceable_EA8Wup3K(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_rx_resize_GSunVkiW(const s_Type&);
static bool mayNeedConstCast_XhLPSYgk(const s_SolvedNode&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool isAddrOfFn_gBx1AgSx(const s_Type&);
s_Target parseLocalOrGlobal_qtvefzpE(fu::view<char>, int&);
fu::str dirname_8Oo0Zp26(const fu::str&);
fu::str join_8GxtVDhD(fu::view<char>, const fu::str&);
fu::str read_zTt3fZzW(fu::str&&);

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

                                #ifndef DEF_s_DevOptions
                                #define DEF_s_DevOptions
inline constexpr s_DevOptions s_DevOptions_DEV_Print = s_DevOptions(1u);
inline constexpr s_DevOptions s_DevOptions_DEV_Parallel = s_DevOptions(2u);
inline constexpr s_DevOptions s_DevOptions_DEV_ExpectFail = s_DevOptions(4u);
inline constexpr s_DevOptions s_DevOptions_DEV_DontFoldLiterals = s_DevOptions(8u);
inline constexpr s_DevOptions s_DevOptions_DEV_CG_LifetimeAnnots = s_DevOptions(16u);

inline constexpr s_DevOptions MASK_s_DevOptions
    = s_DevOptions_DEV_Print
    | s_DevOptions_DEV_Parallel
    | s_DevOptions_DEV_ExpectFail
    | s_DevOptions_DEV_DontFoldLiterals
    | s_DevOptions_DEV_CG_LifetimeAnnots;
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

                                #ifndef DEF_s_StructDecl
                                #define DEF_s_StructDecl
struct s_StructDecl
{
    fu::str def;
    int declDepth;
    explicit operator bool() const noexcept
    {
        return false
            || def
            || declDepth
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Outputs
                                #define DEF_s_Outputs
struct s_Outputs
{
    fu::vec<fu::str> _libs;
    fu::vec<fu::str> _gcc_ignore;
    fu::str _top_emits;
    fu::vec<s_StructCanon> _tfwd;
    fu::str _tfwd_src;
    fu::vec<s_Target> _ffwd;
    fu::str _ffwd_src;
    fu::str _ffwd_live_client;
    fu::str _ffwd_live_nclient;
    fu::str _tdef;
    fu::vec<s_StructDecl> _tdef_stack;
    fu::vec<s_Target> _fdef_started;
    fu::vec<s_Target> _fdef_complete;
    fu::str _fdef;
    fu::str _indent;
    int _hasMain;
    fu::vec<fu::str> HACK_link;
    fu::vec<fu::str> HACK_include_dirs;
    fu::vec<fu::str> HACK_extra_sources;
    fu::vec<int> _live_targets;
    s_CGDefects _defects;
    fu::vec<fu::str> _TODO_FIX_seenFns;
    s_Outputs(const s_Outputs&) = delete;
    s_Outputs(s_Outputs&&) = default;
    s_Outputs& operator=(const s_Outputs&) = delete;
    s_Outputs& operator=(s_Outputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || _libs
            || _gcc_ignore
            || _top_emits
            || _tfwd
            || _tfwd_src
            || _ffwd
            || _ffwd_src
            || _ffwd_live_client
            || _ffwd_live_nclient
            || _tdef
            || _tdef_stack
            || _fdef_started
            || _fdef_complete
            || _fdef
            || _indent
            || _hasMain
            || HACK_link
            || HACK_include_dirs
            || HACK_extra_sources
            || _live_targets
            || _defects
            || _TODO_FIX_seenFns
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_Block
                                #define DEF_s_cg_Block
struct s_cg_Block
{
    fu::str name;
    s_Helpers helpers;
    bool has_val;
    bool ptrflip;
    fu::vec<int> surviving_locals;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || helpers
            || has_val
            || ptrflip
            || surviving_locals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_CurrentFn
                                #define DEF_s_cg_CurrentFn
struct s_cg_CurrentFn
{
    s_Target target;
    int numTEMPVARs;
    fu::vec<fu::str> TEMPVARs;
    fu::vec<s_cg_Block> blocks;
    int num_labels;
    s_Helpers can_return;
    s_Helpers can_break;
    s_Helpers can_cont;
    fu::vec<fu::str> _ids_used;
    fu::vec<int> _ids_dedupe;
    fu::vec<fu::str> _hoist;
    fu::vec<int> _live_locals;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || numTEMPVARs
            || TEMPVARs
            || blocks
            || num_labels
            || can_return
            || can_break
            || can_cont
            || _ids_used
            || _ids_dedupe
            || _hoist
            || _live_locals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_NativeHacks
                                #define DEF_s_NativeHacks
struct s_NativeHacks
{
    int name_start_idx;
    bool soft_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || soft_risk
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ClosureID
                                #define DEF_s_ClosureID
struct s_ClosureID
{
    s_Target target;
    unsigned revision;
    explicit operator bool() const noexcept
    {
        return false
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    fu::u8 base;
    fu::u8 minsize_i;
    fu::u8 minsize_u;
    fu::u8 minsize_f;
    bool sIgned;
    bool uNsigned;
    bool negative;
    uint64_t absval;
    fu::str error;
    explicit operator bool() const noexcept
    {
        return false
            || base
            || minsize_i
            || minsize_u
            || minsize_f
            || sIgned
            || uNsigned
            || negative
            || absval
            || error
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEMPVAR
                                #define DEF_s_TEMPVAR
struct s_TEMPVAR
{
    fu::str annot;
    fu::str id;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || annot
            || id
            || ptrflip
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_M_STMT
                                #define DEF_M_STMT
inline constexpr int M_STMT = (1 << 0);
                                #endif

                                #ifndef DEF_M_CHECK_NEVER_LTR
                                #define DEF_M_CHECK_NEVER_LTR
inline constexpr int M_CHECK_NEVER_LTR = (1 << 14);
                                #endif

[[noreturn]] static fu::never BUG_V0Wmrkof(const fu::str& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL_lTxCw5lL(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu::str(reason) : "Assertion failed."_fu)), _here, ctx);
}

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_only_GN4mikiykv7
                                #define DEF_only_GN4mikiykv7
inline const s_SolvedNode& only_GN4mikiy(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static fu::str cgNot_f2JZoaGG(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return "!"_fu + cgNode_5IJ88bTK(only_GN4mikiy(node.items), 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF_unless_oob_V6ixZvDgVTl
                                #define DEF_unless_oob_V6ixZvDgVTl
inline const s_Extended& unless_oob_V6ixZvDg(fu::view<s_Extended> a, const int i)
{
    if (i < a.size())
        return a[i];
    else
        return (*(const s_Extended*)fu::NIL);

}
                                #endif

static const s_Extended& EXT_pSZrIRcS(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    const int locid = int(unsigned((target._packed & 0xfffffull)));
    if (locid)
        return (*(const s_Extended*)fu::NIL);
    else
    {
        const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
        const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
        const s_Module& m = ((modid == module.modid) ? module : ctx.modules[modid]);
        return unless_oob_V6ixZvDg(m.out.solve.scope.extended, globid);
    };
}

static const s_Overload& GET_xYfAGayT(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    const int locid = int(unsigned((target._packed & 0xfffffull)));
    const s_Module& m = ((modid == module.modid) ? module : ctx.modules[modid]);
    if (locid)
        return m.out.solve.scope.extended[globid].locals[(locid - 1)];
    else
        return m.out.solve.scope.overloads[(globid - 1)];

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

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

static bool isFieldChain_XQp5TZNw(const s_SolvedNode& node, const s_Context& ctx, const s_Module& module)
{
    if (node.kind != s_kind_call)
        return false;
    else
    {
        const s_Overload& t = GET_xYfAGayT(node.target, ctx, module);
        if (t.kind == s_kind_field)
            return isFieldChain_XQp5TZNw(only_GN4mikiy(node.items), ctx, module);
        else if (t.kind == s_kind_var)
            return true;
        else
            return false;

    };
}

                                #ifndef DEF_M_ARG_TO_NATIVE
                                #define DEF_M_ARG_TO_NATIVE
inline constexpr int M_ARG_TO_NATIVE = (1 << 12);
                                #endif

static bool arrayType_annotateAsVec_Lbgf5WLs(const s_Type& type)
{
    return !is_ref_gBx1AgSx(type) || TODO_FIX_isArray_40rRB6L8(type);
}

static bool isPointlessMustSeq_FKf7UXd0(const s_SolvedNode& arg, const s_Argument& host_arg, const s_Context& ctx, const s_Module& module)
{
    if (is_sliceable_3t4EwFeQ(host_arg.type.vtype) && !arrayType_annotateAsVec_Lbgf5WLs(host_arg.type))
        return false;
    else
        return isFieldChain_XQp5TZNw(arg, ctx, module);

}

static bool rest_isPointlessMustSeq_XL74d4gU(const int seqIdx, fu::view<s_SolvedNode> args, const bool RTL, fu::view<s_Argument> host_args, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const int seqIdx_start = (seqIdx + 1);
        const s_TokenIdx& _here_1 = _here;
        int seqIdx_1 = 0;
        int lastPass = 1;
        for (int pass = 0; pass < lastPass; pass++)
        {
            for (int i = 0; i < host_args.size(); i++)
            {
                const s_Argument& host_arg = host_args[i];
                if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_hoadAQC0(host_arg.type, _here_1, ctx))))
                    lastPass = 2;
                else
                {
                    if ((seqIdx_start <= seqIdx_1))
                    {
                        const s_SolvedNode& arg = args[i];
                        if (!isPointlessMustSeq_FKf7UXd0(arg, host_arg, ctx, module))
                            return false;

                    };
                    seqIdx_1++;
                };
            };
        };
    };
    return true;
}

                                #ifndef DEF_str_s4ven7yysl4
                                #define DEF_str_s4ven7yysl4
inline fu::str str_s4ven7yy(const s_CGDefects n)
{
    /*MOV*/ fu::str res {};

    {
        if (n & s_CGDefects_GNUStmtExpr)
            res += ("GNUStmtExpr"_fu + ", "_fu);

        if (n & s_CGDefects_Goto)
            res += ("Goto"_fu + ", "_fu);

        if (n & s_CGDefects_PointlessMustSeq)
            res += ("PointlessMustSeq"_fu + ", "_fu);

        if (n & s_CGDefects_LocalConstBool)
            res += ("LocalConstBool"_fu + ", "_fu);

        if (n & s_CGDefects_ConstCast)
            res += ("ConstCast"_fu + ", "_fu);

        if (n & s_CGDefects_PointlessLocal)
            res += ("PointlessLocal"_fu + ", "_fu);

        if (n & s_CGDefects_IrrelevantLiteral)
            res += ("IrrelevantLiteral"_fu + ", "_fu);

        if (n & s_CGDefects_DuplicateFunctions)
            res += ("DuplicateFunctions"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

static void noteDefect_9iN0Zkq1(const s_CGDefects defects, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Options& options)
{
    if (defects & options.break_defects)
        BUG_V0Wmrkof(("CGDefect break: "_fu + qBAD_3PsDzMvu(str_s4ven7yy(defects))), _here, ctx);
    else
        outputs._defects |= defects;

}

                                #ifndef DEF_add_mts1NXJ4Qz0
                                #define DEF_add_mts1NXJ4Qz0
inline bool add_mts1NXJ4(fu::vec<fu::str>& keys, const fu::str& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu::str(item));
    return true;
}
                                #endif

static void include_BSU6mjdP(const fu::str& lib, s_Outputs& outputs)
{
    add_mts1NXJ4(outputs._libs, lib);
}

static fu::str primAnnotBase_YchO22ij(fu::view<char> c, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (c == "i32"_fu)
        return "int"_fu;
    else if (c == "i16"_fu)
        return "short"_fu;
    else if (c == "u32"_fu)
        return "unsigned"_fu;
    else if (c == "b8"_fu)
        return "bool"_fu;
    else if (c == "c8"_fu)
        return "char"_fu;
    else if (c == "f32"_fu)
        return "float"_fu;
    else if (c == "f64"_fu)
        return "double"_fu;
    else if ((c == "i8"_fu) || (c == "u8"_fu))
    {
        include_BSU6mjdP("<fu/int.h>"_fu, outputs);
        return "fu::"_fu + c;
    }
    else
    {
        include_BSU6mjdP("<cstdint>"_fu, outputs);
        if (c == "i64"_fu)
            return "int64_t"_fu;
        else if (c == "i128"_fu)
            return "__int128_t"_fu;
        else if (c == "u16"_fu)
            return "uint16_t"_fu;
        else if (c == "u32"_fu)
            return "uint32_t"_fu;
        else if (c == "u64"_fu)
            return "uint64_t"_fu;
        else if (c == "u128"_fu)
            return "__uint128_t"_fu;
        else
            BUG_V0Wmrkof((("Unknown primitive: `"_fu + c) + "`."_fu), _here, ctx);

    };
}

static fu::str annotateNever_ICC8tDSF(s_Outputs& outputs)
{
    include_BSU6mjdP("<fu/never.h>"_fu, outputs);
    return "fu::never"_fu;
}

static fu::str annotateZST_CuuB3k6n()
{
    return "void"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEF_x3Cx3E_JhsazzkjAA1
                                #define DEF_x3Cx3E_JhsazzkjAA1
inline int x3Cx3E_Jhsazzkj(const s_VFacts a, const s_VFacts b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_6K8lyb3JRba
                                #define DEF_x3Cx3E_6K8lyb3JRba
inline int x3Cx3E_6K8lyb3J(const unsigned a, const unsigned b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_s8jaxngdfJ9
                                #define DEF_x3Cx3E_s8jaxngdfJ9
inline int x3Cx3E_s8jaxngd(const s_ValueType& a, const s_ValueType& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_6K8lyb3J(a.quals, b.quals)))
        return cmp;
    else if ((cmp = x3Cx3E_gCeFmDFw(a.canon, b.canon)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YBtWEgFnAid
                                #define DEF_x3Cx3E_YBtWEgFnAid
inline int x3Cx3E_YBtWEgFn(const s_Lifetime& a, const s_Lifetime& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_gCeFmDFw(a.uni0n, b.uni0n)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_JfI1olDoSg3
                                #define DEF_x3Cx3E_JfI1olDoSg3
inline int x3Cx3E_JfI1olDo(const s_Type& a, const s_Type& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_Jhsazzkj(a.vfacts, b.vfacts)))
        return cmp;
    else
    {
        if ((cmp = x3Cx3E_s8jaxngd(a.vtype, b.vtype)))
            return cmp;
        else if ((cmp = x3Cx3E_YBtWEgFn(a.lifetime, b.lifetime)))
            return cmp;

        return 0;
    };
}
                                #endif

                                #ifndef DEF_x3Dx3D_JfI1olDoSg3
                                #define DEF_x3Dx3D_JfI1olDoSg3
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_JfI1olDo(a, b);
}
                                #endif

static fu::str annotateString_I9zlJd3r(s_Outputs& outputs)
{
    include_BSU6mjdP("<fu/str.h>"_fu, outputs);
    return "fu::str"_fu;
}

                                #ifndef DEF_M_MUTVAR
                                #define DEF_M_MUTVAR
inline constexpr int M_MUTVAR = (1 << 10);
                                #endif

                                #ifndef DEF_x3Cx3E_f6ZUelrTG99
                                #define DEF_x3Cx3E_f6ZUelrTG99
inline int x3Cx3E_f6ZUelrT(const s_StructCanon& a, const s_StructCanon& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_mJGU9byO(a.modid, b.modid)))
        return cmp;
    else if ((cmp = x3Cx3E_mJGU9byO(a.index, b.index)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_add_p4YxMLtOoT2
                                #define DEF_add_p4YxMLtOoT2
inline bool add_p4YxMLtO(fu::vec<s_StructCanon>& keys, const s_StructCanon& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_f6ZUelrT(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, s_StructCanon(item));
    return true;
}
                                #endif

inline static fu::str& l_40_1_OxpgS4Xr(const s_Target& member, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str _0 {};
    return (def += ((_0 = (((((("\ninline constexpr "_fu + id) + " "_fu) + id) + "_"_fu) + GET_xYfAGayT(member, ctx, module).name) + " = "_fu), (static_cast<fu::str&&>(_0) + cgNode_5IJ88bTK(GET_xYfAGayT(member, ctx, module).solved, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options))) + ";"_fu));
}

                                #ifndef DEF_each_kC5UZhW4ZA1
                                #define DEF_each_kC5UZhW4ZA1
inline void each_kC5UZhW4(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
        l_40_1_OxpgS4Xr(target_NWTdzsfF(a[i]), id, def, outputs, _current_fn, _here, ctx, module, options);

}
                                #endif

inline static void l_40_2_zu12vShp(const s_Target& member, fu::view<char> id, fu::str& mask, const s_Context& ctx, const s_Module& module)
{
    if (!mask)
        mask = (((("\n\ninline constexpr "_fu + id) + " MASK_"_fu) + id) + "\n    = "_fu);
    else
        mask += "\n    | "_fu;

    mask += ((id + "_"_fu) + GET_xYfAGayT(member, ctx, module).name);
}

                                #ifndef DEF_each_IbVS9AlIL88
                                #define DEF_each_IbVS9AlIL88
inline void each_IbVS9AlI(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& mask, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_40_2_zu12vShp(target_NWTdzsfF(a[i]), id, mask, ctx, module);

}
                                #endif

                                #ifndef DEF_M_ENUM_DECL
                                #define DEF_M_ENUM_DECL
inline constexpr int M_ENUM_DECL = (1 << 13);
                                #endif

inline static fu::str& l_40_3_38pfnmgW(const s_Target& member, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str _0 {};
    return (def += ((_0 = (((("\n    "_fu + id) + "_"_fu) + GET_xYfAGayT(member, ctx, module).name) + " = "_fu), (static_cast<fu::str&&>(_0) + cgNode_5IJ88bTK(GET_xYfAGayT(member, ctx, module).solved, M_ENUM_DECL, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options))) + ","_fu));
}

                                #ifndef DEF_each_dnITHRZBxFj
                                #define DEF_each_dnITHRZBxFj
inline void each_dnITHRZB(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
        l_40_3_38pfnmgW(target_NWTdzsfF(a[i]), id, def, outputs, _current_fn, _here, ctx, module, options);

}
                                #endif

static void declarePrimitive_fJWeB1US(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str basePrim = primAnnotBase_YchO22ij(s.shape.basePrim, outputs, _here, ctx);
    fu::view<s_ScopeItem> members = s.items;
    fu::str def = ((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id);
    if ((s.kind != s_kind_enum) || !members)
    {
        outputs._tfwd_src += (((("typedef "_fu + basePrim) + " "_fu) + id) + ";\n"_fu);
        each_kC5UZhW4(members, id, def, outputs, _current_fn, _here, ctx, module, options);
        if (s.kind == s_kind_flags)
        {
            fu::str mask = ""_fu;
            each_IbVS9AlI(members, id, mask, ctx, module);
            if (mask)
            {
                mask += ";"_fu;
                def += mask;
            };
        };
    }
    else
    {
        fu::str header = ((("enum "_fu + id) + ": "_fu) + basePrim);
        outputs._tfwd_src += (header + ";\n"_fu);
        def += (("\n"_fu + header) + "\n{"_fu);
        each_dnITHRZB(members, id, def, outputs, _current_fn, _here, ctx, module, options);
        def += "\n};"_fu;
    };
    def += "\n                                #endif\n"_fu;
    outputs._tdef += def;
}

                                #ifndef DEF_str_n4lV73pjzGh
                                #define DEF_str_n4lV73pjzGh
inline fu::str str_n4lV73pj(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
    else if (n == s_kind_id)
        return "id"_fu;
    else if (n == s_kind_op)
        return "op"_fu;
    else if (n == s_kind_int)
        return "int"_fu;
    else if (n == s_kind_real)
        return "real"_fu;
    else if (n == s_kind_char)
        return "char"_fu;
    else if (n == s_kind_str)
        return "str"_fu;
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_struct)
        return "struct"_fu;
    else if (n == s_kind_union)
        return "union"_fu;
    else if (n == s_kind_primitive)
        return "primitive"_fu;
    else if (n == s_kind_flags)
        return "flags"_fu;
    else if (n == s_kind_enum)
        return "enum"_fu;
    else if (n == s_kind_fn)
        return "fn"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_kind_not)
        return "not"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
    else if (n == s_kind_if)
    {
        return "if"_fu;
    }
    else if (n == s_kind_or)
        return "or"_fu;
    else if (n == s_kind_and)
        return "and"_fu;
    else if (n == s_kind_loop)
        return "loop"_fu;
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_kind_members)
        return "members"_fu;
    else if (n == s_kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_kind_pattern)
        return "pattern"_fu;
    else if (n == s_kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_kind_typetag)
        return "typetag"_fu;
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
    else if (n == s_kind___preceding_ref_arg)
        return "__preceding_ref_arg"_fu;
    else if (n == s_kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_kind___tombstone)
        return "__tombstone"_fu;
    else if (n == s_kind_type)
        return "type"_fu;
    else if (n == s_kind_var)
        return "var"_fu;
    else if (n == s_kind_field)
        return "field"_fu;
    else if (n == s_kind_enumv)
        return "enumv"_fu;
    else if (n == s_kind_template)
        return "template"_fu;
    else if (n == s_kind___native)
        return "__native"_fu;
    else if (n == s_kind_inline)
        return "inline"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::str hex64_lower_KIZNrvjc(const uint64_t v)
{
    /*MOV*/ fu::str str = ""_fu;
    for (int i = 0; i < 16; i++)
    {
        const uint64_t c = ((v >> (uint64_t(unsigned(i)) * 4ull)) & 0xfull);
        str += char(((c < 10ull) ? (uint64_t(fu::u8('0')) + c) : ((uint64_t(fu::u8('a')) + c) - 10ull)));
    };
    return /*NRVO*/ str;
}

                                #ifndef DEF_x21x3D_gCeFmDFw0L8
                                #define DEF_x21x3D_gCeFmDFw0L8
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

inline static bool l_40_0_TDKpW9JG(const s_StructDecl& a, const s_StructDecl& b)
{
    return (a.declDepth < b.declDepth) || ((a.declDepth == b.declDepth) ? (x3Cx3E_gCeFmDFw(a.def, b.def) < 0) : false);
}

static void sort_OR8GOFi6(fu::vec<s_StructDecl>& a)
{
    s_StructDecl l {};
    s_StructDecl r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = l_40_0_TDKpW9JG(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_dZ8kBEGcOPi
                                #define DEF_sort_dZ8kBEGcOPi
inline void sort_dZ8kBEGc(fu::vec<s_StructDecl>& a)
{
    sort_OR8GOFi6(a);
}
                                #endif

static void declareStruct_hx58gUwr(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (s.shape.basePrim)
        declarePrimitive_fJWeB1US(id, s, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        const int tdef_stack0 = outputs._tdef_stack.size();
        outputs._tdef_stack += s_StructDecl{};
        fu::str header = (x7E_gCeFmDFw(str_n4lV73pj(s.kind), " "_fu) + id);
        outputs._tfwd_src += (header + ";\n"_fu);
        const s_Type& t = GET_xYfAGayT(s.target, ctx, module).type;
        /*MOV*/ fu::str def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\n"_fu) + header) + "\n{"_fu);
        if (options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)
            def += ((("\n                                // shape_hash:    "_fu + hex64_lower_KIZNrvjc(s.shape.hash)) + "\n                                // non_triv_mask: "_fu) + hex64_lower_KIZNrvjc(s.shape.non_triv_mask));

        fu::str indent = "\n    "_fu;
        fu::str xOpBool = ""_fu;
        fu::view<s_ScopeItem> fields = s.items;
        for (int i = 0; i < fields.size(); i++)
        {
            const s_Overload& field = GET_xYfAGayT(target_NWTdzsfF(fields[i]), ctx, module);
            if (field.kind == s_kind_field)
            {
                fu::str annot = typeAnnot_FRf6N05C(field.type, 0, outputs, _current_fn, _here, ctx, module, options);
                if (annot != "void"_fu)
                {
                    fu::str id_1 = ID_h1RjsQth(field.name);
                    def += ((((indent + annot) + " "_fu) + id_1) + ";"_fu);
                    if (field.flags & s_Flags_F_PREDICATE)
                        xOpBool += ("\n            || "_fu + id_1);

                };
            }
            else
                BUG_V0Wmrkof(((x7E_gCeFmDFw((("Non-field struct item: "_fu + field.name) + " ("_fu), str_n4lV73pj(field.kind)) + ") in "_fu) + t.vtype.canon), _here, ctx);

        };
        if (!is_rx_copy_GSunVkiW(t))
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
        }
        else if (GET_xYfAGayT(s.target, ctx, module).status & s_SolverStatus_SS_TYPE_RECUR)
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = default;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
            def += (((((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "& selfrec) { return *this = "_fu) + id) + "(selfrec); }"_fu);
        };
        def += "\n    explicit operator bool() const noexcept"_fu;
        def += "\n    {"_fu;
        def += "\n        return false"_fu;
        def += xOpBool;
        def += "\n        ;"_fu;
        def += "\n    }"_fu;
        def += "\n};\n                                #endif\n"_fu;
        outputs._tdef_stack.mutref(tdef_stack0) = s_StructDecl { static_cast<fu::str&&>(def), s.shape.declDepth };
        if (!tdef_stack0)
        {
            sort_dZ8kBEGc(outputs._tdef_stack);
            for (int i_1 = 0; i_1 < outputs._tdef_stack.size(); i_1++)
                outputs._tdef += fu::str(outputs._tdef_stack[i_1].def);

            outputs._tdef_stack.clear();
        };
    };
}

static fu::str typeAnnotBase_ohy3XkPx(const s_Type& type, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_3t4EwFeQ(type.vtype) && ((c.size() < 4) || ((c.size() == 4) && (fu::get_view(c, 1, 4) == "128"_fu))))
        return primAnnotBase_YchO22ij(c, outputs, _here, ctx);
    else if (c == "never"_fu)
        return annotateNever_ICC8tDSF(outputs);
    else if (isIrrelevant_40rRB6L8(type))
        return annotateZST_CuuB3k6n();
    else
    {
        s_Type arrayItem = tryClear_sliceable_EA8Wup3K(type.vtype, _here, ctx, module);
        if (arrayItem)
        {
            if (isIrrelevant_40rRB6L8(arrayItem))
                BUG_V0Wmrkof("cg: We generate invalid c++ for void[]"_fu, _here, ctx);
            else if (arrayType_annotateAsVec_Lbgf5WLs(type))
            {
                if (arrayItem == t_byte)
                    return annotateString_I9zlJd3r(outputs);
                else
                {
                    fu::str itemAnnot = typeAnnot_FRf6N05C(arrayItem, 0, outputs, _current_fn, _here, ctx, module, options);
                    include_BSU6mjdP("<fu/vec.h>"_fu, outputs);
                    return ("fu::vec<"_fu + itemAnnot) + ">"_fu;
                };
            }
            else
            {
                fu::str itemAnnot = typeAnnot_FRf6N05C(arrayItem, 0, outputs, _current_fn, _here, ctx, module, options);
                include_BSU6mjdP("<fu/view.h>"_fu, outputs);
                if (is_mutref_hoadAQC0(type, _here, ctx) || (mode & M_MUTVAR))
                    return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
                else
                    return ("fu::view<"_fu + itemAnnot) + ">"_fu;

            };
        }
        else
        {
            const s_Struct& s = lookupUserType_QHDuaMIF(type.vtype, _here, ctx, module);
            /*MOV*/ fu::str id = ("s_"_fu + s.name);
            const s_StructCanon scp = parseStructCanon_9HOct2P6(type.vtype.canon);
            if (add_p4YxMLtO(outputs._tfwd, scp))
                declareStruct_hx58gUwr(id, s, outputs, _current_fn, _here, ctx, module, options);

            return /*NRVO*/ id;
        };
    };
}

                                #ifndef DEF_M_STATIC_REF
                                #define DEF_M_STATIC_REF
inline constexpr int M_STATIC_REF = (1 << 15);
                                #endif

static bool refType_annotateAsSlice_tvN3zxCr(const s_Type& type)
{
    if (is_sliceable_3t4EwFeQ(type.vtype))
        return !arrayType_annotateAsVec_Lbgf5WLs(type);
    else
        return false;

}

                                #ifndef DEF_M_ARGUMENT
                                #define DEF_M_ARGUMENT
inline constexpr int M_ARGUMENT = (1 << 4);
                                #endif

                                #ifndef DEF_M_CONST
                                #define DEF_M_CONST
inline constexpr int M_CONST = (1 << 2);
                                #endif

                                #ifndef DEF_M_FWDECL
                                #define DEF_M_FWDECL
inline constexpr int M_FWDECL = (1 << 6);
                                #endif

                                #ifndef DEF_M_MOVABLE
                                #define DEF_M_MOVABLE
inline constexpr int M_MOVABLE = (1 << 11);
                                #endif

static fu::str typeAnnot_FRf6N05C(const s_Type& type, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::str fwd = typeAnnotBase_ohy3XkPx(type, mode, outputs, _current_fn, _here, ctx, module, options);
    if (is_ref_gBx1AgSx(type))
    {
        if (mode & M_STATIC_REF)
        {
            include_BSU6mjdP("<fu/static_ref.h>"_fu, outputs);
            return ("fu::static_ref<"_fu + fwd) + ">"_fu;
        }
        else if (refType_annotateAsSlice_tvN3zxCr(type) || (fwd == "void"_fu))
            return /*NRVO*/ fwd;
        else if (is_mutref_hoadAQC0(type, _here, ctx))
            return fwd + "&"_fu;
        else if (isPassByValue_3t4EwFeQ(type.vtype))
        {
            if (((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL))
                return "const "_fu + fwd;
            else
                return /*NRVO*/ fwd;

        }
        else if ((mode & M_MOVABLE) && !is_trivial_QHDuaMIF(type.vtype, _here, ctx, module))
            return fwd + "&"_fu;
        else
            return ("const "_fu + fwd) + "&"_fu;

    }
    else if ((mode & M_ARGUMENT) && !isPassByValue_3t4EwFeQ(type.vtype))
        return fwd + "&&"_fu;
    else if ((mode & M_CONST) && is_trivial_QHDuaMIF(type.vtype, _here, ctx, module))
        return "const "_fu + fwd;
    else
        return /*NRVO*/ fwd;

}

static fu::str emitTEMPVAR_QdcDhO52(fu::view<char> annot, bool& ptrflip, const fu::str& id, fu::view<char> expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu::str id_1 = (id ? fu::str(id) : x7E_gCeFmDFw("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view_start0(annot, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu::str cgCopy_gJD9Ln0O(const s_Type& type, const fu::str& src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isPassByValue_3t4EwFeQ(type.vtype))
        return fu::str(src);
    else
        return ((typeAnnotBase_ohy3XkPx(type, 0, outputs, _current_fn, _here, ctx, module, options) + "("_fu) + src) + ")"_fu;

}

static fu::str cgMove_KoDQXSTR(const s_Type& type, const fu::str& src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isPassByValue_3t4EwFeQ(type.vtype))
        return cgCopy_gJD9Ln0O(type, src, outputs, _current_fn, _here, ctx, module, options);
    else
        return ((("static_cast<"_fu + typeAnnotBase_ohy3XkPx(type, 0, outputs, _current_fn, _here, ctx, module, options)) + "&&>("_fu) + src) + ")"_fu;

}

inline static void l_40_8_BCyDwdMu(const int i, const s_Argument& host_arg, const int seqIdx, const s_Extended& ext, const s_Overload& target, fu::view<s_SolvedNode> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::view_mut<fu::str> item_src, const bool RTL, fu::view<s_Argument> host_args, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& arg = args[i];
    const s_SolvedNode& arg_1 = ((isSimpleCpyMovAssign && (i == 1) && (arg.kind == s_kind_copy)) ? only_GN4mikiy(arg.items) : arg);
    bool junk = false;
    const bool mustDiscard = isIrrelevant_40rRB6L8(arg_1.type);
    if (mustDiscard)
        junk = ((arg_1.kind == s_kind_empty) || ((arg_1.kind == s_kind_call) ? ((GET_xYfAGayT(arg_1.target, ctx, module).kind == s_kind_var) || ((GET_xYfAGayT(arg_1.target, ctx, module).kind == s_kind_type) ? !arg_1.items : false) || (GET_xYfAGayT(arg_1.target, ctx, module).kind == s_kind_enumv)) : false));
    else if (is_never_FfV8Zuj5(arg_1.type))
        BUG_V0Wmrkof("cgCall: arg.is_never"_fu, _here, ctx);

    fu::str _0 {};
    /*MOV*/ fu::str src = (junk ? ""_fu : ((_0 = cgNode_5IJ88bTK(arg_1, (isNative ? M_ARG_TO_NATIVE : 0), host_arg.type, outputs, _current_fn, _here, ctx, module, options)) ? static_cast<fu::str&&>(_0) : BUG_V0Wmrkof("Empty arg src."_fu, _here, ctx)));
    const int MUSTSEQ_bit = (1 << (i & 31));
    if (mustDiscard && src)
    {
        ooe_crosscheck |= MUSTSEQ_bit;
        if (ooe_header)
            ooe_header += ", "_fu;

        ooe_header += "(void) "_fu;
        ooe_header += src;
        src = ""_fu;
    };
    if (mustDiscard && (target.kind == s_kind_type))
    {
        src = "{}"_fu;
    };
    if (MUSTSEQ_mask & MUSTSEQ_bit)
    {
        if (junk)
            BUG_V0Wmrkof("Trying to MUSTSEQ a discarded argument, shouldnt happen."_fu, _here, ctx);
        else
        {
            ooe_crosscheck |= MUSTSEQ_bit;
            if (isPointlessMustSeq_FKf7UXd0(arg_1, ext.args[i], ctx, module) || (((MUSTSEQ_mask & ~MUSTSEQ_bit) < MUSTSEQ_mask) && rest_isPointlessMustSeq_XL74d4gU(seqIdx, args, RTL, host_args, _here, ctx, module)))
                noteDefect_9iN0Zkq1(s_CGDefects_PointlessMustSeq, outputs, _here, ctx, options);
            else
            {
                if (ooe_header)
                    ooe_header += ", "_fu;

                bool ptrflip = false;
                fu::str annot = typeAnnot_FRf6N05C(arg_1.type, 0, outputs, _current_fn, _here, ctx, module, options);
                fu::str id = emitTEMPVAR_QdcDhO52(annot, ptrflip, (*(const fu::str*)fu::NIL), fu::view<char>{}, _current_fn);
                ooe_header += id;
                ooe_header += " = "_fu;
                ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu::str(src));
                src = (ptrflip ? ("*"_fu + id) : cgMove_KoDQXSTR(arg_1.type, id, outputs, _current_fn, _here, ctx, module, options));
            };
        };
    };
    item_src.mutref(i) = static_cast<fu::str&&>(src);
}

                                #ifndef DEF_argsForward_tW8wCptSKn8
                                #define DEF_argsForward_tW8wCptSKn8
inline void argsForward_tW8wCptS(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, const s_Extended& ext, const s_Overload& target, fu::view<s_SolvedNode> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::view_mut<fu::str> item_src, const bool RTL_1, fu::view<s_Argument> host_args_1, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_hoadAQC0(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    l_40_8_BCyDwdMu(i, host_arg, seqIdx, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL_1, host_args_1, outputs, _current_fn, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

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

static fu::str& ARG_Cxujcevn(const int i, fu::view_mut<fu::str> item_src)
{
    return item_src.mutref(i);
}

static fu::str REST_DAdKxOCJ(const int start, fu::view<fu::str> item_src)
{
    /*MOV*/ fu::str src = ""_fu;
    for (int i = start; i < item_src.size(); i++)
    {
        fu::view<char> item = item_src[i];
        if (!(!item))
        {
            if (src)
                src += ", "_fu;

            src += item_src[i];
        };
    };
    return /*NRVO*/ src;
}

static fu::str ooeWrap_kd0vaEUP(const fu::str& src, fu::view<char> ooe_header)
{
    if (ooe_header)
        return ((("("_fu + ooe_header) + ", "_fu) + src) + ")"_fu;
    else
        return fu::str(src);

}

static fu::str emitMethodCall_b7Itvaan(fu::view<char> id, fu::view<char> ooe_header, fu::view_mut<fu::str> item_src)
{
    fu::str _0 {};
    fu::str _1 {};
    return (_1 = ((_0 = ((ARG_Cxujcevn(0, item_src) + id) + "("_fu), (static_cast<fu::str&&>(_0) + REST_DAdKxOCJ(1, item_src))) + ")"_fu), ooeWrap_kd0vaEUP(static_cast<fu::str&&>(_1), ooe_header));
}

static bool affectedByIntegerPromotions_4FhY3hJy(const s_Type& type)
{
    if (is_ref_gBx1AgSx(type) || !is_bitfield_3t4EwFeQ(type.vtype))
        return false;
    else
    {
        fu::view<char> c = type.vtype.canon;
        return ((c.size() >= 2) && (c[1] == '8')) || ((c.size() >= 3) && (fu::get_view(c, 1, 3) == "16"_fu));
    };
}

static fu::str unpromote_SD7gweiB(const fu::str& expr, const s_SolvedNode& node, const bool isNative, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isNative && affectedByIntegerPromotions_4FhY3hJy(node.type))
        return ((typeAnnotBase_ohy3XkPx(node.type, 0, outputs, _current_fn, _here, ctx, module, options) + "("_fu) + expr) + ")"_fu;
    else
        return fu::str(expr);

}

static fu::str emitPostfixOp_fr8lLDvs(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view_mut<fu::str> item_src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return unpromote_SD7gweiB((ARG_Cxujcevn(0, item_src) + op), node, isNative, outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF_only_dHu5rBA1qqg
                                #define DEF_only_dHu5rBA1qqg
inline const fu::str& only_dHu5rBA1(fu::view<fu::str> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu::str emitBuiltin_uQYtnRmm(fu::view<char> id, fu::view<fu::str> args, const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = node.type;
        const s_Type& input = only_GN4mikiy(node.items).type;
        fu::str cast = typeAnnotBase_ohy3XkPx(output, 0, outputs, _current_fn, _here, ctx, module, options);
        if (is_integral_3t4EwFeQ(input.vtype) && is_integral_3t4EwFeQ(output.vtype) && (is_unsigned_3t4EwFeQ(input.vtype) != is_unsigned_3t4EwFeQ(output.vtype)))
        {
            s_Type mid_t { (is_unsigned_3t4EwFeQ(input.vtype) ? output : input) };
            if (mid_t.vtype.canon[0] == 'i')
            {
                mid_t.vtype.canon.mutref(0) = 'u';
                if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
                {
                    fu::str inner = typeAnnotBase_ohy3XkPx(mid_t, 0, outputs, _current_fn, _here, ctx, module, options);
                    return ((((cast + '(') + inner) + '(') + only_dHu5rBA1(args)) + "))"_fu;
                };
            }
            else
                BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx);

        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu::str inner = typeAnnotBase_ohy3XkPx(t_u8, 0, outputs, _current_fn, _here, ctx, module, options);
            return ((((cast + '(') + inner) + '(') + only_dHu5rBA1(args)) + "))"_fu;
        };
        return ((cast + '(') + only_dHu5rBA1(args)) + ')';
    }
    else
        BUG_V0Wmrkof(("Unknown builtin: "_fu + id), _here, ctx);

}

                                #ifndef DEF_q_USAGE
                                #define DEF_q_USAGE
extern const unsigned q_USAGE;
                                #endif

inline static void l_40_11_JuIDCJy5(const int i, const s_Argument& host_arg, fu::str& angle_brackets, fu::view<s_Argument> host_args, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_40rRB6L8(host_arg.type))
    {
        if (angle_brackets)
            angle_brackets += ", "_fu;

        s_Type slot { host_args[i].type };
        slot.vtype.quals |= q_USAGE;
        angle_brackets += typeAnnotBase_ohy3XkPx(slot, 0, outputs, _current_fn, _here, ctx, module, options);
    };
}

                                #ifndef DEF_argsForward_BIdaS5FjDG4
                                #define DEF_argsForward_BIdaS5FjDG4
inline void argsForward_BIdaS5Fj(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, fu::str& angle_brackets, fu::view<s_Argument> host_args_1, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_hoadAQC0(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    l_40_11_JuIDCJy5(i, host_arg, angle_brackets, host_args_1, outputs, _current_fn, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

                                #ifndef DEF_ends_Db9eGFmCKDj
                                #define DEF_ends_Db9eGFmCKDj
inline bool ends_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static fu::str emitFunctionCall_WbNsfqvf(/*MOV*/ fu::str&& id, fu::view<char> open, fu::view<char> close, fu::view<char> ooe_header, fu::view<fu::str> item_src, const bool RTL, fu::view<s_Argument> host_args, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const int tEmplate = fu::lfind(id, "<>"_fu);
    if (tEmplate > 0)
    {
        fu::str angle_brackets = ""_fu;
        argsForward_BIdaS5Fj(RTL, host_args, 0, angle_brackets, host_args, outputs, _current_fn, _here, ctx, module, options);
        id = ((((fu::get_view_start0(id, tEmplate) + '<') + angle_brackets) + '>') + fu::get_view(id, (tEmplate + 2)));
    };
    fu::str args = ((open + REST_DAdKxOCJ(0, item_src)) + close);
    if ((args == "()"_fu) && ends_Db9eGFmC(id, ')'))
        return static_cast<fu::str&&>(id);
    else
        return ooeWrap_kd0vaEUP((id + args), ooe_header);

}

                                #ifndef DEF_M_PARENS
                                #define DEF_M_PARENS
inline constexpr int M_PARENS = (1 << 7);
                                #endif

                                #ifndef DEF_last_uwKwzsvZqOh
                                #define DEF_last_uwKwzsvZqOh
inline char last_uwKwzsvZ(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static bool binSkipParens_QmDYHduD(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;
    else if (mode & M_PARENS)
    {
        if (last_uwKwzsvZ(id) == '=')
        {
            if ((id == "=="_fu) || (id == "!="_fu))
                return true;
            else
                return false;

        }
        else
            return true;

    }
    else
        return false;

}

static fu::str emitBinaryOp_ebL3OTdR(fu::view<char> op, const s_SolvedNode& node, const int mode, fu::view<s_SolvedNode> args, const bool isNative, fu::view<char> ooe_header, fu::view_mut<fu::str> item_src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (args.size() == 2)
    {
        if (binSkipParens_QmDYHduD(op, mode) && !ooe_header)
        {
            fu::str _0 {};
            return (_0 = (((ARG_Cxujcevn(0, item_src) + " "_fu) + op) + " "_fu), (static_cast<fu::str&&>(_0) + ARG_Cxujcevn(1, item_src)));
        }
        else
        {
            fu::str _1 {};
            fu::str _2 {};
            return (_2 = unpromote_SD7gweiB(((_1 = (((("("_fu + ARG_Cxujcevn(0, item_src)) + " "_fu) + op) + " "_fu), (static_cast<fu::str&&>(_1) + ARG_Cxujcevn(1, item_src))) + ")"_fu), node, isNative, outputs, _current_fn, _here, ctx, module, options), ooeWrap_kd0vaEUP(static_cast<fu::str&&>(_2), ooe_header));
        };
    }
    else
        BUG_V0Wmrkof("args.len != 2"_fu, _here, ctx);

}

static fu::str cgDefault_HNnKuITr(const s_Type& type, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (is_mutref_hoadAQC0(type, _here, ctx))
        BUG_V0Wmrkof("Cannot definit mutrefs."_fu, _here, ctx);
    else if (isIrrelevant_40rRB6L8(type))
    {
        noteDefect_9iN0Zkq1(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);
        return "void()"_fu;
    }
    else
    {
        if (is_ref_gBx1AgSx(type) && !isPassByValue_3t4EwFeQ(type.vtype))
        {
            if (!is_sliceable_3t4EwFeQ(type.vtype) || arrayType_annotateAsVec_Lbgf5WLs(type))
            {
                include_BSU6mjdP("<fu/default.h>"_fu, outputs);
                if (is_primitive_3t4EwFeQ(type.vtype))
                    BUG_V0Wmrkof("cgDefault: Genering NIL refs to primitives."_fu, _here, ctx);
                else
                    return ("(*(const "_fu + typeAnnot_FRf6N05C(clear_refs_40rRB6L8(s_Type(type)), 0, outputs, _current_fn, _here, ctx, module, options)) + "*)fu::NIL)"_fu;

            };
        };
        return typeAnnot_FRf6N05C(type, 0, outputs, _current_fn, _here, ctx, module, options) + "{}"_fu;
    };
}

static bool isInlLinked_I9l4bhSn(const s_Overload& overload)
{
    return !!(overload.flags & s_Flags_F_TEMPLATE);
}

                                #ifndef DEF_x3Cx3E_62dxnA0Dbb1
                                #define DEF_x3Cx3E_62dxnA0Dbb1
inline int x3Cx3E_62dxnA0D(const uint64_t a, const uint64_t b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_LngZZmWAHm3
                                #define DEF_x3Cx3E_LngZZmWAHm3
inline int x3Cx3E_LngZZmWA(const s_Target& a, const s_Target& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_62dxnA0D(a._packed, b._packed)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_add_eY6ht47hj1l
                                #define DEF_add_eY6ht47hj1l
inline bool add_eY6ht47h(fu::vec<s_Target>& keys, const s_Target& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_LngZZmWA(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, s_Target(item));
    return true;
}
                                #endif

static bool isExtLinked_DiXs7xj7(const s_Overload& overload)
{
    if (overload.flags & (s_Flags_F_PUB | s_Flags_F_EXTERN))
        return overload.kind != s_kind_inline;
    else
        return false;

}

static fu::str fnLinkage_kq0TRCgD(const s_Overload& overload)
{
    return ((is_never_FfV8Zuj5(overload.type) ? "[[noreturn]] "_fu : fu::str{}) + (isInlLinked_I9l4bhSn(overload) ? "inline "_fu : fu::str{})) + (!isExtLinked_DiXs7xj7(overload) ? "static "_fu : fu::str{});
}

                                #ifndef DEF_M_RETVAL
                                #define DEF_M_RETVAL
inline constexpr int M_RETVAL = (1 << 3);
                                #endif

static bool isOp_KXqdW387(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    const s_Flags flags = GET_xYfAGayT(target, ctx, module).flags;
    if (!(flags & s_Flags_F_OPERATOR))
        return false;
    else if (GET_xYfAGayT(target, ctx, module).kind == s_kind___native)
        return true;
    else
    {
        int numArgs {};
        bool primsOnly = true;
        fu::view<s_Argument> args = EXT_pSZrIRcS(target, ctx, module).args;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& argType = args[i].type;
            if (!isIrrelevant_40rRB6L8(argType))
            {
                numArgs++;
                if (!is_primitive_3t4EwFeQ(argType.vtype))
                    primsOnly = false;

            };
        };
        if (!numArgs || (numArgs > 2) || primsOnly)
            return false;
        else
        {
            fu::view<char> name = GET_xYfAGayT(target, ctx, module).name;
            if (numArgs > 1)
                return hasBinary_nLKt53sX(name);
            else
                return hasUnary_nLKt53sX(name);

        };
    };
}

static fu::str valid_operator_fEDwkyOx(const fu::str& str)
{
    int start = 0;
    bool some = false;
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
        {
            if (!some)
                start = (i + 1);
            else
                return fu::slice(str, start, i);

        }
        else
            some = true;

    };
    if (start)
        return fu::slice(str, start);
    else
        return fu::str(str);

}

static char hex_mNODQdlh(const unsigned x)
{
    if (x < 10u)
        return char((unsigned(fu::u8('0')) + x));
    else
        return char((unsigned(fu::u8('A')) + (x - 10u)));

}

static fu::str xHH_ADWRJzhb(const unsigned c)
{
    return ("x"_fu + hex_mNODQdlh(((c >> 4u) & 0xfu))) + hex_mNODQdlh(((c >> 0u) & 0xfu));
}

static fu::str valid_identifier_bY9BgWb2(fu::str&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (!(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_')))
            str = ((fu::get_view_start0(str, i) + xHH_ADWRJzhb(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1)));

    };
    return ID_h1RjsQth(str);
}

static fu::str fnID_CAXAygVl(const s_Target& target, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Overload& overload = GET_xYfAGayT(target, ctx, module);
    const fu::str& id = (overload.name ? overload.name : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx));
    if (isOp_KXqdW387(target, ctx, module))
        return "operator"_fu + valid_operator_fEDwkyOx(id);
    else
    {
        /*MOV*/ fu::str ret = valid_identifier_bY9BgWb2(fu::str(id));
        if (EXT_pSZrIRcS(target, ctx, module).sighash && !(GET_xYfAGayT(target, ctx, module).flags & s_Flags_F_EXTERN))
        {
            uint64_t BL_4_v {};
            ((ret == "_"_fu) ? ret : (ret += "_"_fu)) += digest62_NBz0rQPD((__extension__ (
            {
                const s_TEA& tea = EXT_pSZrIRcS(target, ctx, module).sighash;
                BL_4_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
            (void)0;}), BL_4_v), 8);
        };
        return /*NRVO*/ ret;
    };
}

static fu::str cgFnPrototype_kd4MCFON(const s_Target& target, const bool fnptr, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu::vec<fu::str>{}, fu::vec<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<fu::str>{}, fu::vec<int>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    /*MOV*/ fu::str src = ""_fu;
    const s_Overload& overload = GET_xYfAGayT(target, ctx, module);
    if (!fnptr)
    {
        fu::str linkage = fnLinkage_kq0TRCgD(overload);
        src += linkage;
        if ((int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid) && !isExtLinked_DiXs7xj7(overload) && !isInlLinked_I9l4bhSn(overload))
            BUG_V0Wmrkof("cgFnPrototype: !isExtLinked but off-module"_fu, _here, ctx);

    };

    {
        const s_Type& ret = (overload.type ? overload.type : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx));
        fu::str annot = typeAnnot_FRf6N05C(ret, M_RETVAL, outputs, _current_fn, _here, ctx, module, options);
        src += (annot + " "_fu);
    };

    {
        /*MOV*/ fu::str name = fnID_CAXAygVl(target, _here, ctx, module);
        src += (fnptr ? (("(*"_fu + name) + ")"_fu) : static_cast<fu::str&&>(name));
    };

    {
        src += "("_fu;
        fu::view<s_Argument> args = EXT_pSZrIRcS(target, ctx, module).args;
        bool first = true;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& arg = args[i].type;
            if (!(isIrrelevant_40rRB6L8(arg)))
            {
                if (first)
                    first = false;
                else
                    src += ", "_fu;

                src += typeAnnot_FRf6N05C(arg, (M_ARGUMENT | M_FWDECL), outputs, _current_fn, _here, ctx, module, options);
            };
        };
        if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_nLKt53sX(overload.name))
            src += ", /*postfix*/int"_fu;

        src += ")"_fu;
    };
    return /*NRVO*/ src;
}

static void ensureFwdDecl_BXSQQwHL(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& overload = GET_xYfAGayT(target, ctx, module);
    if (!((overload.kind != s_kind_fn) || (overload.name == "main"_fu)))
    {
        if (!(!add_eY6ht47h(outputs._ffwd, target)))
        {
            fu::str fwdDecl = (cgFnPrototype_kd4MCFON(target, false, outputs, _current_fn, _here, ctx, module, options) + ";\n"_fu);
            if (overload.flags & s_Flags_F_HOTSWAP)
            {
                fu::str fnPtr = (("extern "_fu + cgFnPrototype_kd4MCFON(target, true, outputs, _current_fn, _here, ctx, module, options)) + ";\n"_fu);
                outputs._ffwd_live_client += fnPtr;
                outputs._ffwd_live_nclient += fwdDecl;
            }
            else
                outputs._ffwd_src += fwdDecl;

        };
    };
}

                                #ifndef DEF_x3Dx3D_LngZZmWAHm3
                                #define DEF_x3Dx3D_LngZZmWAHm3
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_LngZZmWA(a, b);
}
                                #endif

                                #ifndef DEF_has_P9xEJb6w1f3
                                #define DEF_has_P9xEJb6w1f3
inline bool has_P9xEJb6w(fu::view<s_Target> a, const s_Target& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_MAIN_needed
                                #define DEF_MAIN_needed
inline constexpr int MAIN_needed = (1 << 0);
                                #endif

                                #ifndef DEF_MAIN_argv
                                #define DEF_MAIN_argv
inline constexpr int MAIN_argv = (1 << 1);
                                #endif

                                #ifndef DEF_MAIN_zst
                                #define DEF_MAIN_zst
inline constexpr int MAIN_zst = (1 << 2);
                                #endif

static void prefix_0KU5O4Mw(const s_BitSet& bitset, fu::str& prefix)
{
    for (int i = 0; i < bitset._data.size(); i++)
    {
        unsigned v = unsigned(bitset._data[i]);
        prefix += hex_mNODQdlh((v & 0xfu));
        if ((v >>= 4u))
            prefix += hex_mNODQdlh(v);

    };
}

                                #ifndef DEF_use_STATIC_REF
                                #define DEF_use_STATIC_REF
inline constexpr bool use_STATIC_REF = true;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static bool isConstexpr_LTwogSxw(const s_SolvedNode& expr, const s_Context& ctx, const s_Module& module)
{
    if ((expr.kind == s_kind_int) || (expr.kind == s_kind_char) || (expr.kind == s_kind_real) || (expr.kind == s_kind_bool))
        return true;
    else
    {
        if (expr.kind == s_kind_call)
        {
            const s_Overload& o = GET_xYfAGayT(expr.target, ctx, module);
            if ((o.kind == s_kind___native) && (o.flags & s_Flags_F_OPERATOR))
            {
                for (int i = 0; i < expr.items.size(); i++)
                {
                    if (!isConstexpr_LTwogSxw(expr.items[i], ctx, module))
                        return false;

                };
                return true;
            }
            else if (o.kind == s_kind_var)
                return globalVar_isConstexpr_DiSieRy8(o, ctx, module);

        };
        return false;
    };
}

static bool globalVar_isConstexpr_DiSieRy8(const s_Overload& o, const s_Context& ctx, const s_Module& module)
{
    return isConstexpr_LTwogSxw(o.solved.items[LET_INIT], ctx, module);
}

static bool TODO_FIX_useStaticRef_Kmufbh3H(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    if (int(unsigned((target._packed & 0xfffffull))) || !use_STATIC_REF)
        return false;
    else
    {
        const s_Type& place_type = GET_xYfAGayT(target, ctx, module).solved.type;
        return is_ref_gBx1AgSx(place_type) && !isPassByValue_3t4EwFeQ(place_type.vtype) && !refType_annotateAsSlice_tvN3zxCr(place_type) && !globalVar_isConstexpr_DiSieRy8(GET_xYfAGayT(target, ctx, module), ctx, module);
    };
}

static fu::vec<fu::str>& _ids_used_bhZ2bagm(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu::vec<int>& _ids_dedupe_nJwtpTW3(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEF_grow_if_oob_yq7gHTQsrb1
                                #define DEF_grow_if_oob_yq7gHTQsrb1
inline int& grow_if_oob_yq7gHTQs(fu::vec<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::str localID_O7Lepk1W(const s_Target& target, const bool dedupe, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Overload& o = GET_xYfAGayT(target, ctx, module);
    /*MOV*/ fu::str id { o.name };
    const s_ClosureID cid = tryParseClosureID_54NQWyOV(id, _here, ctx);
    if (cid.target)
        id = GET_xYfAGayT(cid.target, ctx, module).name;

    id = valid_identifier_bY9BgWb2(ID_h1RjsQth(id));
    const int locid = int(unsigned((target._packed & 0xfffffull)));
    if (locid)
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                /*MOV*/ fu::str candidate = (dupes ? x7E_gCeFmDFw((id + '_'), fu::i64dec(dupes)) : fu::str(id));
                for (int i = 0; i < _ids_used_bhZ2bagm(_current_fn).size(); i++)
                {
                    if (_ids_used_bhZ2bagm(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_5;
                    };
                };
                _ids_used_bhZ2bagm(_current_fn) += static_cast<fu::str&&>(candidate);
                break;
              } BL_5:;
            };
            if (dupes)
            {
                grow_if_oob_yq7gHTQs(_ids_dedupe_nJwtpTW3(_current_fn), locid) = dupes;
            };
        };
        const int dupes = ((_ids_dedupe_nJwtpTW3(_current_fn).size() > locid) ? _ids_dedupe_nJwtpTW3(_current_fn)[locid] : 0);
        if (dupes)
            return x7E_gCeFmDFw((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

                                #ifndef DEF_starts_t2TApdnqRc8
                                #define DEF_starts_t2TApdnqRc8
inline bool starts_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

static bool F_HOIST_asPtr_PvC3HzCO(const s_Target& target, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!s_SolverStatus((GET_xYfAGayT(target, ctx, module).status & s_SolverStatus_SS_HOIST)))
        return false;
    else
    {
        const s_Type& t = GET_xYfAGayT(target, ctx, module).solved.type;
        if (!is_mutref_hoadAQC0(t, _here, ctx) && isPassByValue_3t4EwFeQ(t.vtype))
            return false;
        else
            return is_ref_gBx1AgSx(t) && (!is_sliceable_3t4EwFeQ(t.vtype) || arrayType_annotateAsVec_Lbgf5WLs(t));

    };
}

static s_Target nested_WnJVjQz8(const int index, const s_cg_CurrentFn& _current_fn)
{
    if (index)
    {
        int BL_2_v {};
        int BL_3_v {};
        return Target_2jgCJZJY((__extension__ (
        {
            const s_Target& t = _current_fn.target;
            BL_2_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_2_v), (__extension__ (
        {
            const s_Target& t = _current_fn.target;
            BL_3_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_3_v), index);
    }
    else
    {
        return s_Target{};
    };
}

inline static void l_40_5_abcbQ9rB(const int locid, const bool isTemp, const bool isStatic, const bool isArgIdx, fu::str& lt, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (lt)
        lt += "|"_fu;

    if (isTemp)
        lt += "temp"_fu;
    else if (isStatic)
        lt += "static"_fu;
    else if (isArgIdx)
        BUG_V0Wmrkof("WTF"_fu, _here, ctx);
    else
        lt += localID_O7Lepk1W(nested_WnJVjQz8(locid, _current_fn), false, _current_fn, _here, ctx, module);

}

                                #ifndef DEF_Lifetime_each_OKj1dFe3xJ2
                                #define DEF_Lifetime_each_OKj1dFe3xJ2
inline void Lifetime_each_OKj1dFe3(const s_Lifetime& lifetime, fu::str& lt, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
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
        l_40_5_abcbQ9rB(int(((r & 1u) ? 0u : (r >> 1u))), (r == 1u), (r == 0u), ((r & 3u) == 3u), lt, _current_fn, _here, ctx, module);
    };
}
                                #endif

static fu::str binding_qAd8Ik5B(const s_Target& target, const bool forceValue, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& o = GET_xYfAGayT(target, ctx, module);
    const s_Type& place_type = o.solved.type;
    const s_SolverStatus isArg = s_SolverStatus((o.status & s_SolverStatus_SS_ARGUMENT));
    s_Type place_type_1 = (forceValue ? clear_refs_40rRB6L8(s_Type(place_type)) : s_Type(place_type));
    /*MOV*/ fu::str annot = typeAnnot_FRf6N05C(place_type_1, (((((!is_mutref_hoadAQC0(o.type, _here, ctx) ? M_CONST : 0) | (isArg ? M_ARGUMENT : 0)) | (is_mutref_hoadAQC0(o.type, _here, ctx) ? M_MUTVAR : 0)) | (s_SolverStatus((o.status & s_SolverStatus_SS_MOVED_FROM)) ? M_MOVABLE : 0)) | (TODO_FIX_useStaticRef_Kmufbh3H(target, ctx, module) ? M_STATIC_REF : 0)), outputs, _current_fn, _here, ctx, module, options);
    const s_SolverStatus isUnused = s_SolverStatus((o.status & s_SolverStatus_SS_UNUSED));
    if (isArg && isUnused)
        return /*NRVO*/ annot;
    else
    {
        /*MOV*/ fu::str id = localID_O7Lepk1W(target, true, _current_fn, _here, ctx, module);
        if (GET_xYfAGayT(target, ctx, module).status & s_SolverStatus_SS_HOIST)
        {
            if (_current_fn.target)
            {
                fu::str hoistDecl = (starts_t2TApdnq(annot, "const "_fu) ? fu::slice(annot, 6) : static_cast<fu::str&&>(annot));
                if (F_HOIST_asPtr_PvC3HzCO(target, _here, ctx, module))
                {
                    if (hoistDecl[(hoistDecl.size() - 1)] == '&')
                        hoistDecl.mutref((hoistDecl.size() - 1)) = '*';
                    else
                        BUG_V0Wmrkof(("F_HOIST_asPtr: Decl not a ref: "_fu + hoistDecl), _here, ctx);

                };
                _current_fn._hoist += (((hoistDecl + " "_fu) + id) + (!is_trivial_QHDuaMIF(place_type_1.vtype, _here, ctx, module) ? " {}"_fu : fu::str{}));
                return /*NRVO*/ id;
            }
            else
                BUG_V0Wmrkof("TODO: hoisting for global variables."_fu, _here, ctx);

        }
        else
            _current_fn._live_locals += int(unsigned((target._packed & 0xfffffull)));

        /*MOV*/ fu::str head = static_cast<fu::str&&>((annot ? annot : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx)));
        if (!isArg && is_ref_gBx1AgSx(place_type_1) && s_DevOptions((options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)))
        {
            fu::str lt = ""_fu;
            Lifetime_each_OKj1dFe3(place_type_1.lifetime, lt, _current_fn, _here, ctx, module);
            head += ((" /*"_fu + lt) + "*/"_fu);
        };
        head += (" "_fu + id);
        if (isUnused)
            head = ("[[maybe_unused]] "_fu + head);

        if (GET_xYfAGayT(target, ctx, module).status & s_SolverStatus_SS_MOVED_FROM)
            head = ("/*MOV*/ "_fu + head);

        return /*NRVO*/ head;
    };
}

static fu::str binding_iscNy7LC(const s_Argument& arg, const bool forceValue, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str prefix = ""_fu;
    if (s_DevOptions((options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)) && is_ref_gBx1AgSx(arg.type) && (arg.may_alias || arg.may_invalidate))
    {
        prefix += "/*"_fu;
        prefix_0KU5O4Mw(arg.may_alias, prefix);
        prefix += ":"_fu;
        prefix_0KU5O4Mw(arg.may_invalidate, prefix);
        prefix += "*/ "_fu;
    };
    return prefix + binding_qAd8Ik5B(arg.target, forceValue, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgFnSignature_HtgyTx3F(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& overload = GET_xYfAGayT(target, ctx, module);
    fu::view<s_Argument> host_args = EXT_pSZrIRcS(target, ctx, module).args;
    fu::str annot = typeAnnot_FRf6N05C((overload.type ? overload.type : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx)), M_RETVAL, outputs, _current_fn, _here, ctx, module, options);
    fu::str id { overload.name };
    if (id == "main"_fu)
    {
        outputs._hasMain = MAIN_needed;
        id = "fu_MAIN"_fu;
        if (host_args)
            outputs._hasMain |= MAIN_argv;

        if (isIrrelevant_40rRB6L8(overload.type))
            outputs._hasMain |= MAIN_zst;

    }
    else
        id = fnID_CAXAygVl(target, _here, ctx, module);

    /*MOV*/ fu::str src = ((((fnLinkage_kq0TRCgD(overload) + annot) + " "_fu) + id) + "("_fu);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (!(isIrrelevant_40rRB6L8(host_args[i].type)))
        {
            if (some)
                src += ", "_fu;

            some = true;
            src += binding_iscNy7LC(host_args[i], false, outputs, _current_fn, _here, ctx, module, options);
        };
    };
    if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_nLKt53sX(overload.name))
        src += ", /*postfix*/int"_fu;

    src += ")"_fu;
    return /*NRVO*/ src;
}

                                #ifndef DEF_M_LOOP_BODY
                                #define DEF_M_LOOP_BODY
inline constexpr int M_LOOP_BODY = (1 << 9);
                                #endif

                                #ifndef DEF_if_last_GN4mikiykv7
                                #define DEF_if_last_GN4mikiykv7
inline const s_SolvedNode& if_last_GN4mikiy(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_SolvedNode*)fu::NIL);

}
                                #endif

static bool exprOK_lu3buVDP(fu::view<s_SolvedNode> nodes, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        const s_kind k = n.kind;
        if ((k == s_kind_jump) || (k == s_kind_loop) || (k == s_kind_try) || (k == s_kind_defer) || (k == s_kind_pragma))
            return false;
        else if ((k == s_kind_letdef) && !s_SolverStatus((GET_xYfAGayT(n.target, ctx, module).status & s_SolverStatus_SS_HOIST)))
            return false;
        else if (!exprOK_lu3buVDP(n.items, ctx, module))
            return false;

    };
    return true;
}

static fu::str cgComma_v5rIO1Cg(fu::view<s_SolvedNode> nodes, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<fu::str> items = cgNodes_c3WidZcs(nodes, M_CHECK_NEVER_LTR, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
    if (!items.size())
    {
        noteDefect_9iN0Zkq1(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);
        return "void()"_fu;
    }
    else if (items.size() == 1)
        return fu::str(items[0]);
    else
    {
        fu::str src = "("_fu;
        for (int i = 0; i < items.size(); i++)
        {
            if (i)
                src += ", "_fu;

            src += items[i];
        };
        return src + ")"_fu;
    };
}

                                #ifndef DEF_M_OPT_CURLIES
                                #define DEF_M_OPT_CURLIES
inline constexpr int M_OPT_CURLIES = (1 << 8);
                                #endif

                                #ifndef DEF_Lifetime_each_7DyZBdEkVn0
                                #define DEF_Lifetime_each_7DyZBdEkVn0
inline void Lifetime_each_7DyZBdEk(const s_Lifetime& lifetime, bool& force_mut, const s_cg_CurrentFn& _current_fn, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
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
        const int locid = int(((r & 1u) ? 0u : (r >> 1u)));
        if (!locid || !s_SolverStatus((GET_xYfAGayT(nested_WnJVjQz8(locid, _current_fn), ctx, module).status & s_SolverStatus_SS_MOVED_FROM)))
        {
            force_mut = false;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF_last_GN4mikiykv7
                                #define DEF_last_GN4mikiykv7
inline const s_SolvedNode& last_GN4mikiy(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

inline static void l_40_6_F97F6BNb(const s_SolvedNode& item, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    TEST_noDanglingRefs_EjPG4jL4(surviving_locals, item, _current_fn, _here, ctx, module);
}

                                #ifndef DEF_each_7sIZjNt5g5g
                                #define DEF_each_7sIZjNt5g5g
inline void each_7sIZjNt5(fu::view<s_SolvedNode> a, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        l_40_6_F97F6BNb(a[i], surviving_locals, _current_fn, _here, ctx, module);

}
                                #endif

                                #ifndef DEF_has_wxSKDW5VMoc
                                #define DEF_has_wxSKDW5VMoc
inline bool has_wxSKDW5V(fu::view<int> a, const int b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

inline static void l_40_7_cAa9HyNF(const int locid, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!locid || has_wxSKDW5V(surviving_locals, locid)))
    {
        const s_Overload& o = GET_xYfAGayT(nested_WnJVjQz8(locid, _current_fn), ctx, module);
        if (!(o.status & s_SolverStatus((s_SolverStatus_SS_HOIST | s_SolverStatus_SS_ARGUMENT))))
        {
            if (o.solved.type.lifetime)
            {
                TEST_noDanglingRefs_f2ypQYd8(surviving_locals, o.solved.type.lifetime, _current_fn, _here, ctx, module);
            }
            else
                BUG_V0Wmrkof(("TEST_noDanglingRefs: returning a dangling reference to "_fu + qBAD_3PsDzMvu(o.name)), _here, ctx);

        };
    };
}

                                #ifndef DEF_Lifetime_each_DcaghXHEBee
                                #define DEF_Lifetime_each_DcaghXHEBee
inline void Lifetime_each_DcaghXHE(const s_Lifetime& lifetime, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
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
        l_40_7_cAa9HyNF(int(((r & 1u) ? 0u : (r >> 1u))), surviving_locals, _current_fn, _here, ctx, module);
    };
}
                                #endif

static void TEST_noDanglingRefs_f2ypQYd8(fu::view<int> surviving_locals, const s_Lifetime& lifetime, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_DcaghXHE(lifetime, surviving_locals, _current_fn, _here, ctx, module);
}

static void TEST_noDanglingRefs_EjPG4jL4(fu::view<int> surviving_locals, const s_SolvedNode& node, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!is_ref_gBx1AgSx(node.type)))
    {
        if ((node.kind == s_kind_if) || (node.kind == s_kind_and) || (node.kind == s_kind_or))
        {
            each_7sIZjNt5(fu::get_view(node.items, ((node.kind == s_kind_if) ? 0 : 1)), surviving_locals, _current_fn, _here, ctx, module);
        };
        TEST_noDanglingRefs_f2ypQYd8(surviving_locals, node.type.lifetime, _current_fn, _here, ctx, module);
    };
}

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

static fu::str cgBlock_WxTjQDdt(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Helpers& helpers, const s_Type& type, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::str indent0 { outputs._indent };
    const int ids_used0 = _current_fn._ids_used.size();
    const int live_locals0 = _current_fn._live_locals.size();
    fu_DEFER(
    {
        outputs._indent = static_cast<fu::str&&>(indent0);
        if (!_current_fn._hoist)
            _current_fn._ids_used.shrink(ids_used0);

        _current_fn._live_locals.shrink(live_locals0);
    });
    outputs._indent += "    "_fu;
    fu::str open = "{"_fu;
    fu::str close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu::str trail = ""_fu;
    fu::str name = x7E_gCeFmDFw("BL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const bool has_val = !isIrrelevant_40rRB6L8(type);
    bool ptrflip = false;
    if (has_val)
    {
        bool force_mut = is_ref_gBx1AgSx(type);
        Lifetime_each_7DyZBdEk(type.lifetime, force_mut, _current_fn, ctx, module);
        fu::str annot = typeAnnot_FRf6N05C(type, (force_mut ? M_MOVABLE : 0), outputs, _current_fn, _here, ctx, module, options);
        fu::str id = emitTEMPVAR_QdcDhO52(annot, ptrflip, (name ? (name + "_v"_fu) : fu::str{}), fu::view<char>{}, _current_fn);
        fu::str out = (ptrflip ? ("*"_fu + id) : cgMove_KoDQXSTR(type, id, outputs, _current_fn, _here, ctx, module, options));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    fu::vec<int> surviving_locals { _current_fn._live_locals };
    _current_fn.blocks += s_cg_Block { fu::str(name), s_Helpers(helpers), has_val, ptrflip, fu::vec<int>(surviving_locals) };
    if (has_val)
        TEST_noDanglingRefs_EjPG4jL4(surviving_locals, last_GN4mikiy(nodes), _current_fn, _here, ctx, module);

    int count {};
    /*MOV*/ fu::str src = cgStatements_5NLNdYe4(nodes, count, trail, outputs, _current_fn, _here, ctx, module, options);
    const bool labelUsed = fu::has(src, (("goto "_fu + name) + ";"_fu));
    if (labelUsed)
    {
        close = (((("  } "_fu + name) + ":;"_fu) + indent0) + close);
        open = "{ {"_fu;
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || labelUsed || has_KonMQ4KB(src, '{') || fu::has(src, "if"_fu))
    {
        fu::str gnuOpen = ""_fu;
        if (gnuStmtExpr)
        {
            noteDefect_9iN0Zkq1(s_CGDefects_GNUStmtExpr, outputs, _here, ctx, options);
            gnuOpen = "(__extension__ ("_fu;
        };
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);
    };
    return /*NRVO*/ src;
}

static fu::str cgBlock_K86xab4i(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<s_SolvedNode> items = ((node.kind == s_kind_block) ? fu::vec<s_SolvedNode>(node.items) : fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Helpers& helpers = ((node.kind == s_kind_block) ? node.helpers : (*(const s_Helpers*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = helpers;


    {
        const s_SolvedNode& tail = if_last_GN4mikiy(items);
        if ((tail.kind == s_kind_let) || (tail.kind == s_kind_letdef) || (tail.kind == s_kind_struct) || (tail.kind == s_kind_fn) || (tail.kind == s_kind_defer))
            BUG_V0Wmrkof(x7E_gCeFmDFw("cgBlock: tailing "_fu, str_n4lV73pj(tail.kind)), _here, ctx);

    };
    if (!(mode & M_STMT))
    {
        if ((items.size() >= 2))
        {
            const s_SolvedNode& last = items[(items.size() - 1)];
            const s_SolvedNode& expr = (((last.kind == s_kind_return) && last.items) ? last.items[0] : last);
            if (expr.kind == s_kind_call)
            {
                const s_Target& target = expr.target;
                const s_SolvedNode& prev = items[(items.size() - 2)];
                if ((prev.kind == s_kind_letdef) && (prev.target == target))
                    noteDefect_9iN0Zkq1(s_CGDefects_PointlessLocal, outputs, _here, ctx, options);

            };
        };
    };
    const bool expr = !(mode & M_STMT);
    if (expr && exprOK_lu3buVDP(items, ctx, module))
        return cgComma_v5rIO1Cg(items, outputs, _current_fn, _here, ctx, module, options);
    else
        return cgBlock_WxTjQDdt(items, !!(mode & M_OPT_CURLIES), expr, helpers, (expr ? node.type : (*(const s_Type*)fu::NIL)), outputs, _current_fn, _here, ctx, module, options);

}

static void cgFn_c4bkINLW(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& node = GET_xYfAGayT(target, ctx, module).solved;
    if (node.kind == s_kind_fn)
    {
        /*MOV*/ fu::str indent0 { outputs._indent };
        fu_DEFER(outputs._indent = static_cast<fu::str&&>(indent0));
        fu::view<s_SolvedNode> items = node.items;
        const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
        const s_Overload& overload = GET_xYfAGayT(target, ctx, module);
        fu::view<char> id = overload.name;
        if (overload.status & s_SolverStatus_SS_FINALIZED)
        {
            if (!body)
            {
                if (!((overload.kind == s_kind___native) || (overload.kind == s_kind_inline)))
                    BUG_V0Wmrkof(((x7E_gCeFmDFw("cgFn: no body on non-native: "_fu, str_n4lV73pj(overload.kind)) + " "_fu) + id), _here, ctx);

            }
            else if (overload.status & s_SolverStatus_SS_Debug_AllPassesComplete)
            {
                outputs._indent = "\n"_fu;
                /*MOV*/ fu::str dedupe = ((overload.flags & s_Flags_F_TEMPLATE) ? valid_identifier_bY9BgWb2(fu::str(overload.name)) : fu::str{});
                const s_TEA& sighash = EXT_pSZrIRcS(target, ctx, module).sighash;
                fu::str dedupe_1 = ((dedupe && sighash) ? ((dedupe + '_') + digest62_NBz0rQPD((uint64_t(sighash.v0) | (uint64_t(sighash.v1) << 32ull)), 0)) : static_cast<fu::str&&>(dedupe));
                if (dedupe_1 && !add_mts1NXJ4(outputs._TODO_FIX_seenFns, dedupe_1))
                    noteDefect_9iN0Zkq1(s_CGDefects_DuplicateFunctions, outputs, _here, ctx, options);
                else
                {
                    fu::str src {};

                    {
                        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu::vec<fu::str>{}, fu::vec<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<fu::str>{}, fu::vec<int>{} };
                        fu_DEFER(std::swap(_current_fn, current_fn0));
                        std::swap(_current_fn, current_fn0);
                        _current_fn.can_return = body.helpers;
                        src += cgFnSignature_HtgyTx3F(target, outputs, _current_fn, _here, ctx, module, options);
                        fu::str body_src = cgBlock_K86xab4i(body, M_STMT, outputs, _current_fn, _here, ctx, module, options);
                        if (_current_fn._hoist)
                        {
                            fu::str hoist = "\n    // Hoisted:"_fu;
                            for (int i = 0; i < _current_fn._hoist.size(); i++)
                                hoist += (("\n    "_fu + _current_fn._hoist[i]) + ";"_fu);

                            const int idx = (fu::lfind(body_src, "{"_fu) + 1);
                            if (idx > 0)
                                body_src.splice(idx, 0, (hoist + "\n"_fu));

                        };
                        src += body_src;
                    };
                    if (!dedupe_1 && !add_mts1NXJ4(outputs._TODO_FIX_seenFns, src))
                        noteDefect_9iN0Zkq1(s_CGDefects_DuplicateFunctions, outputs, _here, ctx, options);
                    else
                    {
                        if (overload.flags & s_Flags_F_HOTSWAP)
                        {
                            if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
                            {
                                outputs._live_targets += int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
                                fu::str fnID = fnID_CAXAygVl(target, _here, ctx, module);
                                fu::str fnID_local = (fnID + "_local"_fu);
                                fu::str fnPtrAnnot = cgFnPrototype_kd4MCFON(target, true, outputs, _current_fn, _here, ctx, module, options);
                                include_BSU6mjdP("<dl/hotswap.hpp>"_fu, outputs);
                                ensureFwdDecl_BXSQQwHL(target, outputs, _current_fn, _here, ctx, module, options);
                                src = (((((((((((((((((((((("                                #ifdef fu_HOTSWAP\n"_fu + "                                #define "_fu) + fnID) + " "_fu) + fnID_local) + "\n"_fu) + "extern \"C\" fu_EXPORT\n"_fu) + "                                #endif\n"_fu) + src) + "\n"_fu) + "                                #ifdef fu_HOTSWAP\n"_fu) + "                                #undef "_fu) + fnID) + "\n"_fu) + fnPtrAnnot) + " =\n    fu::hotswap(\""_fu) + fnID_local) + "\",\n                 "_fu) + fnID) + ",\n                &"_fu) + fnID_local) + ");\n"_fu) + "                                #endif"_fu);
                            }
                            else
                                BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx);

                        };
                        if (dedupe_1)
                        {
                            outputs._fdef += ((("\n                                #ifndef DEF_"_fu + dedupe_1) + "\n                                #define DEF_"_fu) + dedupe_1);
                        };
                        outputs._fdef += (("\n"_fu + src) + "\n"_fu);
                        if (dedupe_1)
                        {
                            outputs._fdef += "                                #endif\n"_fu;
                        };
                    };
                };
            }
            else
                BUG_V0Wmrkof(("cgFn: SS_Debug_AllPassesComplete not set: "_fu + id), _here, ctx);

        }
        else
            BUG_V0Wmrkof(("cgFn: SS_FINALIZED not set: "_fu + id), _here, ctx);

    }
    else
        BUG_V0Wmrkof("cgFn: target.solved.kind != 'fn'"_fu, _here, ctx);

}

static void ensureFnDef_68YaH5hY(const s_Target& target, const bool offtarget, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if ((int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid) || offtarget)
    {
        if (!add_eY6ht47h(outputs._fdef_started, target))
        {
            if (!has_P9xEJb6w(outputs._fdef_complete, target))
            {
                if (!s_SolverStatus((GET_xYfAGayT(target, ctx, module).status & s_SolverStatus_SS_FN_RECUR)))
                    BUG_V0Wmrkof("ensureFnDef: Function without SS_FN_RECUR appears to be recursive."_fu, _here, ctx);
                else
                    ensureFwdDecl_BXSQQwHL(target, outputs, _current_fn, _here, ctx, module, options);

            };
        }
        else
        {
            cgFn_c4bkINLW(target, outputs, _current_fn, _here, ctx, module, options);
            if (!(add_eY6ht47h(outputs._fdef_complete, target)))
                BUG_V0Wmrkof(("ensureFnDef: _fdef_complete twice: "_fu + GET_xYfAGayT(target, ctx, module).name), _here, ctx);

        };
    }
    else
        BUG_V0Wmrkof((((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(int(unsigned(((target._packed >> 40ull) & 0xfffffull))))) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu), str_n4lV73pj(GET_xYfAGayT(target, ctx, module).kind)) + " "_fu) + GET_xYfAGayT(target, ctx, module).name) + "`."_fu), _here, ctx);

}

static void ensureFnUsable_bQ5KzEQA(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    const bool offtarget = (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid);
    if (offtarget && !isInlLinked_I9l4bhSn(GET_xYfAGayT(target, ctx, module)))
        ensureFwdDecl_BXSQQwHL(target, outputs, _current_fn, _here, ctx, module, options);
    else
        ensureFnDef_68YaH5hY(target, offtarget, outputs, _current_fn, _here, ctx, module, options);

}

                                #ifndef DEF_join_jCe9HYtvP9c
                                #define DEF_join_jCe9HYtvP9c
inline fu::str join_jCe9HYtv(fu::view<fu::str> a, fu::view<char> sep)
{
    if (a.size() < 2)
    {
        if (a.size())
            return fu::str(a[0]);
        else
        {
            return fu::str{};
        };
    }
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu::str res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_start0_mut(res, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<char> range = a[i_1];
            fu::view_assign(fu::get_view_mut(res, size, (size + N)), sep);
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static fu::str binding_QbLwR94k(const s_Target& target, const s_SolvedNode& init, const bool doInit, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::str head = binding_qAd8Ik5B(target, false, outputs, _current_fn, _here, ctx, module, options);
    if (!doInit)
        return /*NRVO*/ head;
    else
    {
        if (GET_xYfAGayT(target, ctx, module).status & s_SolverStatus_SS_HOIST)
            head += " = "_fu;

        if (!init || ((init.kind == s_kind_empty) && !is_ref_gBx1AgSx(init.type)))
        {
            return head + " {}"_fu;
        }
        else
        {
            const bool isCopy = ((init.kind == s_kind_copy) ? !is_ref_gBx1AgSx(GET_xYfAGayT(target, ctx, module).solved.type) : false);
            const s_SolvedNode& init_1 = (isCopy ? only_GN4mikiy(init.items) : init);
            if ((init_1.kind == s_kind_bool) && !(GET_xYfAGayT(target, ctx, module).flags & s_Flags_F_PUB) && !is_mutref_hoadAQC0(GET_xYfAGayT(target, ctx, module).type, _here, ctx))
                noteDefect_9iN0Zkq1(s_CGDefects_LocalConstBool, outputs, _here, ctx, options);

            int BL_7_v {};
            const bool use_initTEMPVARs = !(__extension__ (
            {
                const s_Target& t = _current_fn.target;
                BL_7_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_7_v);
            fu::vec<fu::str> initTEMPVARs {};
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            fu::str expr = cgNode_5IJ88bTK(init_1, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            if (initTEMPVARs)
            {
                expr = (((((("[]() -> "_fu + typeAnnot_FRf6N05C(init_1.type, 0, outputs, _current_fn, _here, ctx, module, options)) + " {\n    "_fu) + join_jCe9HYtv(initTEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}()"_fu);
            };
            if (isCopy && !is_primitive_3t4EwFeQ(init_1.type.vtype))
            {
                return ((head + " { "_fu) + expr) + " }"_fu;
            }
            else if (GET_xYfAGayT(target, ctx, module).status & s_SolverStatus_SS_HOIST)
            {
                if (F_HOIST_asPtr_PvC3HzCO(target, _here, ctx, module))
                    return ((head + "&("_fu) + expr) + ")"_fu;
                else
                    return head + expr;

            }
            else
                return (head + " = "_fu) + expr;

        };
    };
}

static fu::str binding_BSXoUpcq(const s_SolvedNode& node, const bool doInit, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Target& target = node.target;
    const s_SolvedNode& init = ((doInit && node.items) ? node.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
    return binding_QbLwR94k(target, init, doInit, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgLet_aWWcBEZG(const s_SolvedNode& node, const bool global, const bool foreign, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_40rRB6L8(node.type))
        return ""_fu;
    else
    {
        const bool cOnstexpr = (global ? globalVar_isConstexpr_DiSieRy8(GET_xYfAGayT(node.target, ctx, module), ctx, module) : false);
        /*MOV*/ fu::str src = binding_BSXoUpcq(node, (!foreign || cOnstexpr), outputs, _current_fn, _here, ctx, module, options);
        if (!global)
            return /*NRVO*/ src;
        else
        {
            if (starts_t2TApdnq(src, "const "_fu))
                src = fu::slice(src, 6);

            if (cOnstexpr)
            {
                outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                return ""_fu;
            }
            else
            {
                int BL_8_v {};
                int BL_9_v {};
                const int prio = (is_primitive_3t4EwFeQ(node.type.vtype) ? 0 : (((__extension__ (
                {
                    const s_Target& t = node.target;
                    BL_8_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
                (void)0;}), BL_8_v) == module.modid) ? module.order.dep_depth : ctx.modules[(__extension__ (
                {
                    const s_Target& t = node.target;
                    BL_9_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
                (void)0;}), BL_9_v)].order.dep_depth));
                if (prio)
                {
                    include_BSU6mjdP("<fu/init_priority.h>"_fu, outputs);
                    fu::str attr = (x7E_gCeFmDFw("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ")"_fu);
                    const int eq = find_KonMQ4KB(src, '=');
                    if (eq > 0)
                        src = (((fu::get_view_start0(src, eq) + attr) + " "_fu) + fu::get_view(src, eq));

                };
                if (!isExtLinked_DiXs7xj7(GET_xYfAGayT(node.target, ctx, module)))
                {
                    if (!foreign)
                        outputs._fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
                    else
                        BUG_V0Wmrkof(("Cannot codegen, relies on an external static: "_fu + GET_xYfAGayT(node.target, ctx, module).name), _here, ctx);

                }
                else
                {
                    outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\nextern const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                };
                return ""_fu;
            };
        };
    };
}

static fu::str cgGlobal_xAC1fdWt(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (!add_eY6ht47h(outputs._ffwd, target))
        return ""_fu;
    else
        return cgLet_aWWcBEZG(GET_xYfAGayT(target, ctx, module).solved, true, (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid), outputs, _current_fn, _here, ctx, module, options);

}

                                #ifndef DEF_has_g5ZsWtbdNfi
                                #define DEF_has_g5ZsWtbdNfi
inline bool has_g5ZsWtbd(fu::view<fu::str> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu::str rootNS_oy06h8jx(const fu::str& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_g5ZsWtbd(_current_fn._ids_used, id))
        return "::"_fu + id;
    else
        return fu::str(id);

}

static fu::str cgEnumv_9UkF6RtP(const s_Type& type, fu::view<char> id, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str base = typeAnnotBase_ohy3XkPx(type, 0, outputs, _current_fn, _here, ctx, module, options);
    return (base + "_"_fu) + id;
}

static fu::str emitPrefixOp_SXNesK7s(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view_mut<fu::str> item_src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return unpromote_SD7gweiB((op + ARG_Cxujcevn(0, item_src)), node, isNative, outputs, _current_fn, _here, ctx, module, options);
}

inline static fu::str l_40_10_WQCvhlPe(const s_SolvedNode& x)
{
    return str_n4lV73pj(x.kind);
}

                                #ifndef DEF_map_UDeLfV20TQe
                                #define DEF_map_UDeLfV20TQe
inline fu::vec<fu::str> map_UDeLfV20(fu::view<s_SolvedNode> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = l_40_10_WQCvhlPe(a[i]);

    return /*NRVO*/ res;
}
                                #endif

static fu::str cgCall_aaciDiJb(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Extended& ext = EXT_pSZrIRcS(node.target, ctx, module);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_xYfAGayT(node.target, ctx, module))) ? *_0 : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx));
    fu::view<s_SolvedNode> args = node.items;
    const bool isNative = (target.kind == s_kind___native);
    const bool isSimpleCpyMovAssign = (((args.size() == 2) && isNative && (target.name == "="_fu)) ? isFieldChain_XQp5TZNw(args[0], ctx, module) : false);
    const int MUSTSEQ_mask = node.helpers.index;
    int ooe_crosscheck = 0;
    fu::str ooe_header = ""_fu;
    fu::vec<fu::str> item_src {};
    item_src.resize(args.size());
    const bool RTL = isRTL_N4q4L7uF(target);
    fu::view<s_Argument> host_args = ext.args;
    if (args)
        argsForward_tW8wCptS(RTL, host_args, 0, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);

    if ((ooe_crosscheck & MUSTSEQ_mask) == MUSTSEQ_mask)
    {
        if (isNative && (target.name[0] == '\n'))
        {
            /*MOV*/ fu::str id = fu::slice(target.name, (NativeHacks_aylVahSQ(target.name).name_start_idx + 1));
            const int idx = find_KonMQ4KB(id, '\n');
            if (idx > -1)
            {
                include_BSU6mjdP(fu::slice(id, 0, idx), outputs);
                id = fu::slice(id, (idx + 1));
            };
            if (id[0] == '.')
            {
                if (args.size() > 1)
                    return emitMethodCall_b7Itvaan(id, ooe_header, item_src);
                else
                    return emitPostfixOp_fr8lLDvs(id, node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);

            }
            else if (id[0] == '/')
                return ooeWrap_kd0vaEUP(emitBuiltin_uQYtnRmm(id, item_src, node, outputs, _current_fn, _here, ctx, module, options), ooe_header);
            else if (args)
            {
                if (hasIdentifierChars_pZLkTusf(id))
                    return emitFunctionCall_WbNsfqvf(static_cast<fu::str&&>(id), "("_fu, ")"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                else
                    return emitBinaryOp_ebL3OTdR(id, node, mode, args, isNative, ooe_header, item_src, outputs, _current_fn, _here, ctx, module, options);

            }
            else
                return /*NRVO*/ id;

        }
        else
        {
            const s_kind kind = target.kind;
            int BL_21_v {};
            if (kind == s_kind_type)
            {
                if (!args)
                    return cgDefault_HNnKuITr(target.type, outputs, _current_fn, _here, ctx, module, options);
                else
                {
                    const s_Struct* _1;
                    const s_Struct& t = (*(_1 = &(tryLookupUserType_QHDuaMIF(target.type.vtype, _here, ctx, module))) ? *_1 : BUG_V0Wmrkof("cgCall: defctor/type not a struct nor a user primitive."_fu, _here, ctx));
                    /*MOV*/ fu::str base = typeAnnotBase_ohy3XkPx(target.type, 0, outputs, _current_fn, _here, ctx, module, options);
                    if (t.kind == s_kind_flags)
                        return emitFunctionCall_WbNsfqvf(fu::str(base), "(("_fu, ((") & MASK_"_fu + base) + ")"_fu), ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    else if ((t.kind == s_kind_primitive) || (t.kind == s_kind_enum))
                        return emitFunctionCall_WbNsfqvf(static_cast<fu::str&&>(base), "("_fu, ")"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    else if ((t.kind == s_kind_struct) || (t.kind == s_kind_union))
                    {
                        return emitFunctionCall_WbNsfqvf(static_cast<fu::str&&>(base), " { "_fu, " }"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    }
                    else
                        BUG_V0Wmrkof(x7E_gCeFmDFw("Unknown usertype kind: "_fu, str_n4lV73pj(t.kind)), _here, ctx);

                };
            }
            else if ((kind == s_kind_fn) && (__extension__ (
            {
                const s_Target& t = node.target;
                BL_21_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
            (void)0;}), BL_21_v))
                ensureFnUsable_bQ5KzEQA(node.target, outputs, _current_fn, _here, ctx, module, options);
            else if (kind == s_kind_inline)
                BUG_V0Wmrkof(("cgCall: found a call to an inline fn: "_fu + GET_xYfAGayT(node.target, ctx, module).name), _here, ctx);

            const fu::str& id = (target.name ? target.name : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx));
            if ((args.size() <= 2))
            {
                if (target.kind == s_kind_var)
                {
                    int BL_27_v {};
                    if (isIrrelevant_40rRB6L8(target.type))
                        return cgDefault_HNnKuITr(target.type, outputs, _current_fn, _here, ctx, module, options);
                    else if (!(__extension__ (
                    {
                        const s_Target& t = node.target;
                        BL_27_v = (int(unsigned((t._packed & 0xfffffull))));
                    (void)0;}), BL_27_v))
                    {
                        cgGlobal_xAC1fdWt(node.target, outputs, _current_fn, _here, ctx, module, options);
                        /*MOV*/ fu::str ret = rootNS_oy06h8jx(ID_h1RjsQth(id), _current_fn);
                        if (TODO_FIX_useStaticRef_Kmufbh3H(node.target, ctx, module))
                            ret += ".ref"_fu;

                        return /*NRVO*/ ret;
                    }
                    else
                    {
                        /*MOV*/ fu::str id_1 = localID_O7Lepk1W(node.target, false, _current_fn, _here, ctx, module);
                        if (F_HOIST_asPtr_PvC3HzCO(node.target, _here, ctx, module))
                            return ("(*"_fu + id_1) + ")"_fu;
                        else
                            return /*NRVO*/ id_1;

                    };
                }
                else if (target.kind == s_kind_field)
                {
                    fu::view<char> _2 {};
                    fu::view<char> head = ((_2 = ARG_Cxujcevn(0, item_src)) ? static_cast<fu::view<char>&&>(_2) : BUG_V0Wmrkof("cgField: about to emit a [nothing].field sequence."_fu, _here, ctx));
                    return (head + "."_fu) + ID_h1RjsQth(id);
                }
                else if (target.kind == s_kind_enumv)
                    return cgEnumv_9UkF6RtP(target.type, id, outputs, _current_fn, _here, ctx, module, options);
                else
                {
                    if (isOp_KXqdW387(node.target, ctx, module))
                    {
                        if (args.size() == 1)
                        {
                            if (hasPostfix_nLKt53sX(id))
                                return emitPostfixOp_fr8lLDvs(valid_operator_fEDwkyOx(id), node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);
                            else
                                return emitPrefixOp_SXNesK7s(valid_operator_fEDwkyOx(id), node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);

                        }
                        else if (args.size() == 2)
                        {
                            if (id == "[]"_fu)
                            {
                                fu::str _3 {};
                                return ooeWrap_kd0vaEUP(((_3 = (ARG_Cxujcevn(0, item_src) + "["_fu), (static_cast<fu::str&&>(_3) + ARG_Cxujcevn(1, item_src))) + "]"_fu), ooe_header);
                            }
                            else
                                return emitBinaryOp_ebL3OTdR(valid_operator_fEDwkyOx(id), node, mode, args, isNative, ooe_header, item_src, outputs, _current_fn, _here, ctx, module, options);

                        };
                    };
                    if ((id == "STEAL"_fu) && (args.size() == 1))
                        return cgMove_KoDQXSTR(node.type, ARG_Cxujcevn(0, item_src), outputs, _current_fn, _here, ctx, module, options);

                };
            };
            if (isNative)
                BUG_V0Wmrkof((("Unknown __native: `"_fu + id) + "`."_fu), _here, ctx);
            else
                return emitFunctionCall_WbNsfqvf(rootNS_oy06h8jx(fnID_CAXAygVl(node.target, _here, ctx, module), _current_fn), "("_fu, ")"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);

        };
    }
    else
        BUG_V0Wmrkof(((x7E_gCeFmDFw((x7E_gCeFmDFw("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(MUSTSEQ_mask)) + ": "_fu) + join_jCe9HYtv(map_UDeLfV20(args), "|"_fu)), _here, ctx);

}

                                #ifndef DEF_find_T9i966y9wQg
                                #define DEF_find_T9i966y9wQg
inline int find_T9i966y9(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? start : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_starts_Db9eGFmCKDj
                                #define DEF_starts_Db9eGFmCKDj
inline bool starts_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static fu::str cgLiteral_fwZRNfzp(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_40rRB6L8(node.type))
        noteDefect_9iN0Zkq1(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    /*MOV*/ fu::str src { node.value };
    int idx {};
    while (((idx = find_T9i966y9(src, '_', idx)) >= 0))
        src.splice(idx, 1);

    fu::view<char> _0 {};
    fu::view<char> base = ((_0 = tryLookupUserType_QHDuaMIF(node.type.vtype, _here, ctx, module).shape.basePrim) ? static_cast<fu::view<char>&&>(_0) : node.type.vtype.canon);
    if (starts_Db9eGFmC(base, 'u') && !has_KonMQ4KB(src, 'u'))
        src += 'u';

    if (starts_Db9eGFmC(base, 'f'))
    {
        if (!has_KonMQ4KB(src, '.') && !has_KonMQ4KB(src, (has_KonMQ4KB(src, 'x') ? 'p' : 'e')))
            src += ".0"_fu;

        if (base == "f32"_fu)
        {
            if (has_KonMQ4KB(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (base != "f64"_fu)
            BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx);

    };
    if (starts_t2TApdnq(src, "0o"_fu))
        src.splice(1, 1);

    if (starts_Db9eGFmC(base, 'i') || starts_Db9eGFmC(base, 'u'))
    {
        if (src.size() > 16)
        {
            s_Intlit parse = Intlit_sNwIFkW3(src);
            if (parse.negative && (parse.absval == 0x8000000000000000ull))
                return "(-9223372036854775807-1)"_fu;

        };
        if ((base == "u64"_fu) || (base == "i64"_fu))
        {
            if (!has_KonMQ4KB(src, 'l'))
                return src + "ll"_fu;

        }
        else if ((base != "u32"_fu) && (base != "i32"_fu))
        {
            if (!(mode & M_ENUM_DECL))
                return ((typeAnnotBase_ohy3XkPx(node.type, 0, outputs, _current_fn, _here, ctx, module, options) + "("_fu) + src) + ")"_fu;

        };
    };
    return /*NRVO*/ src;
}

static fu::str escapeStringLiteral_AOu9VlPa(fu::view<char> str, const char quot)
{
    /*MOV*/ fu::str esc = fu::str { fu::slate<1, char> { quot } };
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (c == '\n')
            esc += "\\n"_fu;
        else if (c == '\r')
            esc += "\\r"_fu;
        else if (c == '\t')
            esc += "\\t"_fu;
        else if (c == '\v')
            esc += "\\v"_fu;
        else if (c == '\\')
            esc += "\\\\"_fu;
        else if (fu::i8(fu::u8(c)) < fu::i8(32))
            esc += ("\\"_fu + xHH_ADWRJzhb(unsigned(fu::u8(c))));
        else
        {
            if (c == quot)
                esc += '\\';

            esc += c;
        };
    };
    esc += quot;
    return /*NRVO*/ esc;
}

static fu::str cgCharLiteral_87jj6ekL(const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Options& options)
{
    if (isIrrelevant_40rRB6L8(node.type))
        noteDefect_9iN0Zkq1(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    return escapeStringLiteral_AOu9VlPa(node.value, '\'');
}

static fu::str cgStringLiteral_h74WntHi(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_40rRB6L8(node.type))
        noteDefect_9iN0Zkq1(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    if (is_enum_3t4EwFeQ(node.type.vtype) || is_flags_3t4EwFeQ(node.type.vtype))
        return cgEnumv_9UkF6RtP(node.type, node.value, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        annotateString_I9zlJd3r(outputs);
        /*MOV*/ fu::str esc = escapeStringLiteral_AOu9VlPa(node.value, '"');
        esc += "_fu"_fu;
        return /*NRVO*/ esc;
    };
}

static bool arrayType_annotateAsView_JWNMt6zw(const s_Type& type)
{
    if (is_ref_gBx1AgSx(type))
        return !(is_rx_copy_GSunVkiW(type) || is_rx_resize_GSunVkiW(type));
    else
        return false;

}

static fu::str cgArrayLiteral_h4vnsL1p(const s_SolvedNode& node, const int mode, const s_Type& callarg, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_40rRB6L8(node.type))
        noteDefect_9iN0Zkq1(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    if (node.target)
        return cgCall_aaciDiJb(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        fu::vec<fu::str> items = cgNodes_c3WidZcs(node.items, M_CHECK_NEVER_LTR, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
        if (!items.size())
            return cgDefault_HNnKuITr(node.type, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            fu::str curly = (("{ "_fu + join_jCe9HYtv(items, ", "_fu)) + " }"_fu);
            fu::str itemT = typeAnnotBase_ohy3XkPx(clear_sliceable_EA8Wup3K(node.type.vtype, _here, ctx, module), 0, outputs, _current_fn, _here, ctx, module, options);
            fu::str slate = ((((x7E_gCeFmDFw("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
            if (arrayType_annotateAsView_JWNMt6zw(callarg))
            {
                include_BSU6mjdP("<fu/view.h>"_fu, outputs);
                return ("("_fu + slate) + ")"_fu;
            }
            else
            {
                return ((typeAnnotBase_ohy3XkPx(node.type, 0, outputs, _current_fn, _here, ctx, module, options) + " { "_fu) + slate) + " }"_fu;
            };
        };
    };
}

                                #ifndef DEF_M_RETURN
                                #define DEF_M_RETURN
inline constexpr int M_RETURN = (1 << 5);
                                #endif

inline static bool l_40_18_EiHkGGNu(const int locid, const bool isTemp, const s_TokenIdx& _here, const s_Context& ctx)
{
    return locid || isTemp || BUG_V0Wmrkof("cgCopyOrMove: Considering a move from non-local lifetime."_fu, _here, ctx);
}

                                #ifndef DEF_Lifetime_each_EAQpk1qysA4
                                #define DEF_Lifetime_each_EAQpk1qysA4
inline void Lifetime_each_EAQpk1qy(const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
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
        l_40_18_EiHkGGNu(int(((r & 1u) ? 0u : (r >> 1u))), (r == 1u), _here, ctx);
    };
}
                                #endif

static void sanityCheck_dH6nxPa8(const s_Lifetime& lt, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (lt)
    {
        Lifetime_each_EAQpk1qy(lt, _here, ctx);
    }
    else
    {
        BUG_V0Wmrkof("cgCopyOrMove: Considering a move from an empty lifetime."_fu, _here, ctx);
    };
}

static bool supportsNRVO_WvFZaVET(const s_Target& t, const s_Context& ctx, const s_Module& module)
{
    if ((GET_xYfAGayT(t, ctx, module).kind == s_kind_var) && !s_SolverStatus((GET_xYfAGayT(t, ctx, module).status & s_SolverStatus_SS_ARGUMENT)))
        return !is_ref_gBx1AgSx(GET_xYfAGayT(t, ctx, module).solved.type);
    else
        return false;

}

static bool mayNeedConstCast_ZMhqWeaR(fu::view<s_SolvedNode> items, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < items.size(); i++)
    {
        if (mayNeedConstCast_XhLPSYgk(items[i], _here, ctx, module))
            return true;

    };
    return false;
}

inline static bool l_40_19_Z9SmXVtv(const bool isArgIdx, const s_TokenIdx& _here, const s_Context& ctx)
{
    return isArgIdx ? isArgIdx : BUG_V0Wmrkof("About to return mayNeedConstCast, but fn returns non-arg refs."_fu, _here, ctx);
}

                                #ifndef DEF_Lifetime_each_CC1hbWgVhd4
                                #define DEF_Lifetime_each_CC1hbWgVhd4
inline void Lifetime_each_CC1hbWgV(const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    fu::view<char> chars = lifetime.uni0n;
    int offset = 0;
    while (offset < chars.size())
    {
        const unsigned r = parse7bit(chars, offset);
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
        l_40_19_Z9SmXVtv(((r & 3u) == 3u), _here, ctx);
    };
}
                                #endif

static bool mayNeedConstCast_XhLPSYgk(const s_SolvedNode& expr, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_mutref_hoadAQC0(expr.type, _here, ctx) || !is_ref_gBx1AgSx(expr.type))
        return false;
    else if ((expr.kind == s_kind_and) || (expr.kind == s_kind_or))
        return mayNeedConstCast_ZMhqWeaR(expr.items, _here, ctx, module);
    else if (expr.kind == s_kind_if)
        return mayNeedConstCast_ZMhqWeaR(fu::get_view(expr.items, 1, 3), _here, ctx, module);
    else if (expr.kind == s_kind_block)
        return (expr.items.size() > 0) && mayNeedConstCast_XhLPSYgk(expr.items[(expr.items.size() - 1)], _here, ctx, module);
    else if (expr.kind == s_kind_call)
    {
        const s_kind k = GET_xYfAGayT(expr.target, ctx, module).kind;
        if (k == s_kind_field)
            return mayNeedConstCast_ZMhqWeaR(expr.items, _here, ctx, module);
        else if (k == s_kind_var)
            return false;
        else
        {
            const s_Type& t = GET_xYfAGayT(expr.target, ctx, module).type;
            const bool mayNeedConstCast = (is_ref_gBx1AgSx(t) ? !is_mutref_hoadAQC0(t, _here, ctx) : false);
            if (mayNeedConstCast)
            {
                sanityCheck_dH6nxPa8(expr.type.lifetime, _here, ctx);
                Lifetime_each_CC1hbWgV(t.lifetime, _here, ctx);
            };
            return mayNeedConstCast;
        };
    }
    else
        return true;

}

static fu::str cgCopyOrMove_S172DNhY(const s_kind kind, const s_Type& type, const fu::str& src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (kind == s_kind_move)
        return cgMove_KoDQXSTR(type, src, outputs, _current_fn, _here, ctx, module, options);
    else
        return cgCopy_gJD9Ln0O(type, src, outputs, _current_fn, _here, ctx, module, options);

}

static fu::str cgCopyOrMove_9Dpij3DJ(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& expr = only_GN4mikiy(node.items);
    if (is_ref_gBx1AgSx(expr.type))
    {
        if ((mode & M_RETURN) && is_trivial_QHDuaMIF(node.type.vtype, _here, ctx, module))
            return cgNode_5IJ88bTK(expr, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        else
        {
            if (node.kind == s_kind_move)
            {
                sanityCheck_dH6nxPa8(expr.type.lifetime, _here, ctx);
                if (mode & M_RETURN)
                {
                    const bool nrvo = (((expr.kind == s_kind_call) && (expr.items.size() == 0)) ? supportsNRVO_WvFZaVET(expr.target, ctx, module) : false);
                    if (nrvo)
                        return "/*NRVO*/ "_fu + cgNode_5IJ88bTK(expr, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);

                };
                if (!is_trivial_QHDuaMIF(node.type.vtype, _here, ctx, module))
                {
                    if (mayNeedConstCast_XhLPSYgk(expr, _here, ctx, module))
                    {
                        noteDefect_9iN0Zkq1(s_CGDefects_ConstCast, outputs, _here, ctx, options);
                        fu::str annot = typeAnnotBase_ohy3XkPx(node.type, 0, outputs, _current_fn, _here, ctx, module, options);
                        return ((((("static_cast<"_fu + annot) + "&&>(const_cast<"_fu) + annot) + "&>("_fu) + cgNode_5IJ88bTK(expr, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) + "))"_fu;
                    };
                };
            };
            fu::str src = cgNode_5IJ88bTK(expr, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (node.value && s_DevOptions((options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)))
                src = ((("/*"_fu + node.value) + "*/ "_fu) + src);

            return cgCopyOrMove_S172DNhY(node.kind, node.type, src, outputs, _current_fn, _here, ctx, module, options);
        };
    }
    else
        BUG_V0Wmrkof("cgCopyOrMove: !expr.is_ref"_fu, _here, ctx);

}

                                #ifndef DEF_M_RETBOOL
                                #define DEF_M_RETBOOL
inline constexpr int M_RETBOOL = (1 << 1);
                                #endif

static fu::str blockWrapSubstatement_AaRqmxei(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return cgBlock_K86xab4i(node, ((M_STMT | M_OPT_CURLIES) | mode), outputs, _current_fn, _here, ctx, module, options);
}

static fu::str blockWrap_unlessIf_3qtiRwSp(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if ((node.kind == s_kind_if) || (node.kind == s_kind_and))
        return " "_fu + cgNode_5IJ88bTK(node, M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
    else
        return blockWrapSubstatement_AaRqmxei(node, 0, outputs, _current_fn, _here, ctx, module, options);

}

static fu::str cgIf_ifbtOM7h(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& n0 = node.items[0];
    if (is_never_FfV8Zuj5(n0.type))
        BUG_V0Wmrkof("cgIf: cond.is_never"_fu, _here, ctx);
    else
    {
        const s_SolvedNode& n1 = node.items[1];
        const s_SolvedNode& n2 = node.items[2];
        const bool stmt = !!(mode & M_STMT);
        fu::str cond = (n0 ? cgNode_5IJ88bTK(n0, (M_RETBOOL | (stmt ? M_PARENS : 0)), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str cons = (n1 ? (stmt ? blockWrapSubstatement_AaRqmxei(n1, 0, outputs, _current_fn, _here, ctx, module, options) : cgNode_5IJ88bTK(n1, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) : fu::str{});
        fu::str alt = (n2 ? (stmt ? blockWrap_unlessIf_3qtiRwSp(n2, outputs, _current_fn, _here, ctx, module, options) : cgNode_5IJ88bTK(n2, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) : fu::str{});
        if (stmt)
        {
            return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((outputs._indent + "else"_fu) + alt) : ""_fu);
        }
        else
            return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;

    };
}

static void cgAndOr_concat_QbNPIJN2(fu::str& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, const bool last_never_ok, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const int mode = (M_RETBOOL | ((parens && (items.size() == 1)) ? M_PARENS : 0));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const s_SolvedNode& item = items[i];
        if (is_never_FfV8Zuj5(item.type) && !(last_never_ok && (i == (items.size() - 1))))
            BUG_V0Wmrkof("cgAndOr_concat: item.is_never"_fu, _here, ctx);
        else
        {
            fu::str term = cgNode_5IJ88bTK(item, mode, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (isIrrelevant_40rRB6L8(item.type))
                src += (("("_fu + term) + ", 0)"_fu);
            else
                src += term;

        };
    };
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool acceptsBools_fromAndOr_Vorohx6n(const s_Type& type)
{
    if (!is_ref_gBx1AgSx(type))
        return type.vtype.canon == t_bool.vtype.canon;
    else
        return false;

}

static fu::str via_BuJqyWgh(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (!tv.id)
    {
        fu::str _0 {};
        tv.id = (_0 = fu::str((tv.annot = typeAnnot_FRf6N05C(type, 0, outputs, _current_fn, _here, ctx, module, options))), emitTEMPVAR_QdcDhO52(static_cast<fu::str&&>(_0), tv.ptrflip, (*(const fu::str*)fu::NIL), fu::view<char>{}, _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;
    else if (is_trivial_QHDuaMIF(type.vtype, _here, ctx, module))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;
    else
        return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;

}

static fu::str via_Dj1boviO(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isFieldChain_XQp5TZNw(expr, ctx, module))
    {
        fu::str trivial = cgNode_5IJ88bTK(expr, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    }
    else
    {
        if ((expr.kind == s_kind_copy) || (expr.kind == s_kind_move))
        {
            const s_kind kind = expr.kind;
            const s_SolvedNode& expr_1 = only_GN4mikiy(expr.items);
            if (isFieldChain_XQp5TZNw(expr_1, ctx, module))
            {
                fu::str trivial = cgNode_5IJ88bTK(expr_1, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
                return ((trivial + " ? "_fu) + cgCopyOrMove_S172DNhY(kind, type, trivial, outputs, _current_fn, _here, ctx, module, options)) + " : "_fu;
            };
        };
        return via_BuJqyWgh(tv, type, cgNode_5IJ88bTK(expr, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options), outputs, _current_fn, _here, ctx, module, options);
    };
}

static fu::str cgOr_jYgTb7vK(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Type& type = node.type;
    fu::view<s_SolvedNode> items = node.items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = "if (!("_fu;
        cgAndOr_concat_QbNPIJN2(src, " || "_fu, fu::get_view_start0(items, (items.size() - 1)), true, false, outputs, _current_fn, _here, ctx, module, options);
        src += "))"_fu;
        src += blockWrapSubstatement_AaRqmxei(items[(items.size() - 1)], 0, outputs, _current_fn, _here, ctx, module, options);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = (!(mode & M_PARENS) ? "("_fu : fu::str{});
        if (acceptsBools_fromAndOr_Vorohx6n(type))
            cgAndOr_concat_QbNPIJN2(src, " || "_fu, items, true, true, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < (items.size() - 1); i++)
            {
                const s_SolvedNode* _0;
                const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx));
                s_SolvedNode tail { item };
                if (item.kind == s_kind_and)
                {
                    fu::view<s_SolvedNode> items_1 = item.items;
                    const s_SolvedNode* _1;
                    tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx));
                    cgAndOr_concat_QbNPIJN2(src, " && "_fu, fu::get_view_start0(items_1, (items_1.size() - 1)), false, false, outputs, _current_fn, _here, ctx, module, options);
                    src += " && "_fu;
                };
                src += via_Dj1boviO(tv, type, tail, outputs, _current_fn, _here, ctx, module, options);
            };
            const s_SolvedNode* _2;
            const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx));
            src += cgNode_5IJ88bTK(tail, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_znmPwW4Q(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = "if ("_fu;
        cgAndOr_concat_QbNPIJN2(src, " && "_fu, fu::get_view_start0(items, (items.size() - 1)), true, false, outputs, _current_fn, _here, ctx, module, options);
        src += ")"_fu;
        src += blockWrapSubstatement_AaRqmxei(items[(items.size() - 1)], 0, outputs, _current_fn, _here, ctx, module, options);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = (!(mode & M_PARENS) ? "("_fu : fu::str{});
        if (acceptsBools_fromAndOr_Vorohx6n(type))
            cgAndOr_concat_QbNPIJN2(src, " && "_fu, items, true, true, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via_Dj1boviO(tv, type, item, outputs, _current_fn, _here, ctx, module, options));
                else
                    src += cgNode_5IJ88bTK(item, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);

            };
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_uWwF3qqj(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return cgAnd_znmPwW4Q(node.items, node.type, mode, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgLetDef_lEJ5IFYI(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int BL_1_v {};
    if (!(__extension__ (
    {
        const s_Target& t = _current_fn.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v))
    {
        if (isExtLinked_DiXs7xj7(GET_xYfAGayT(node.target, ctx, module)))
            return cgGlobal_xAC1fdWt(node.target, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            return fu::str{};
        };
    }
    else
        return cgLet_aWWcBEZG(GET_xYfAGayT(node.target, ctx, module).solved, false, false, outputs, _current_fn, _here, ctx, module, options);

}

inline static void l_40_12_CRJO17bm(const s_Target& target, s_Target& last, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (last)
        BUG_V0Wmrkof(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_xYfAGayT(last, ctx, module).name) + " vs "_fu) + GET_xYfAGayT(target, ctx, module).name), _here, ctx);
    else
    {
        last = target;
        if (GET_xYfAGayT(target, ctx, module).kind == s_kind_fn)
        {
            fu::view<s_Argument> args = EXT_pSZrIRcS(target, ctx, module).args;
            for (int i = 0; i < args.size(); i++)
            {
                if (args[i].flags & s_Flags_F_IMPLICIT)
                    BUG_V0Wmrkof("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, _here, ctx);

            };
            ensureFnUsable_bQ5KzEQA(target, outputs, _current_fn, _here, ctx, module, options);
        }
        else
            BUG_V0Wmrkof(((x7E_gCeFmDFw("Cannot codegen a non-fn: "_fu, str_n4lV73pj(GET_xYfAGayT(target, ctx, module).kind)) + " "_fu) + GET_xYfAGayT(target, ctx, module).name), _here, ctx);

    };
}

                                #ifndef DEF_unpackAddrOfFn_wayaBiogpt2
                                #define DEF_unpackAddrOfFn_wayaBiogpt2
inline void unpackAddrOfFn_wayaBiog(fu::view<char> canon, s_Target& last, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Target mi = parseLocalOrGlobal_qtvefzpE(canon, offset);
            l_40_12_CRJO17bm(Target_2jgCJZJY(int(unsigned(((mi._packed >> 40ull) & 0xfffffull))), int(unsigned(((mi._packed >> 20ull) & 0xfffffull))), int(unsigned((mi._packed & 0xfffffull)))), last, outputs, _current_fn, _here, ctx, module, options);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static fu::str cgEmpty_4S8MA32O(const s_SolvedNode& node, const int mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (node.type)
    {
        if (mode & M_STMT)
            return ""_fu;
        else if ((mode & M_ARG_TO_NATIVE) && isAddrOfFn_gBx1AgSx(node.type))
        {
            s_Target last {};
            unpackAddrOfFn_wayaBiog(node.type.vtype.canon, last, outputs, _current_fn, _here, ctx, module, options);
            return "&"_fu + fnID_CAXAygVl(last, _here, ctx, module);
        }
        else
            return cgDefault_HNnKuITr(node.type, outputs, _current_fn, _here, ctx, module, options);

    }
    else
        BUG_V0Wmrkof("cgEmpty: !node.type"_fu, _here, ctx);

}

                                #ifndef DEF_x3Cx3E_nAYlOzUfJni
                                #define DEF_x3Cx3E_nAYlOzUfJni
inline int x3Cx3E_nAYlOzUf(const s_Helpers& a, const s_Helpers& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_mJGU9byO(a.index, b.index)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Dx3D_nAYlOzUfJni
                                #define DEF_x3Dx3D_nAYlOzUfJni
inline bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return !x3Cx3E_nAYlOzUf(a, b);
}
                                #endif

static const s_cg_Block& findBlock_D95nYdHN(const s_Helpers& helpers, const s_SolvedNode& expr, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const s_cg_Block& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
        {
            TEST_noDanglingRefs_EjPG4jL4(block.surviving_locals, expr, _current_fn, _here, ctx, module);
            return block;
        };
    };
    BUG_V0Wmrkof(x7E_gCeFmDFw("No such block in scope: "_fu, fu::i64dec(helpers.index)), _here, ctx);
}

static fu::str cgGoto_Mv1J8OfT(const s_cg_Block& block, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Options& options)
{
    noteDefect_9iN0Zkq1(s_CGDefects_Goto, outputs, _here, ctx, options);
    return "goto "_fu + block.name;
}

static fu::str cgJump_b4ef0bhr(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Helpers& helpers = node.helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    const s_SolvedNode& expr = only_GN4mikiy(node.items);
    s_cg_Block block { (!use_return ? findBlock_D95nYdHN(helpers, expr, _current_fn, _here, ctx, module) : (*(const s_cg_Block*)fu::NIL)) };
    if ((expr.kind != s_kind_empty) || !isIrrelevant_40rRB6L8(expr.type))
    {
        if (!use_return)
        {
            fu::str assign = (block.has_val ? (block.name + "_v = "_fu) : fu::str{});
            fu::str value = cgNode_5IJ88bTK(expr, (!assign ? M_STMT : 0), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (block.ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            return (((("{ "_fu + assign) + value) + "; "_fu) + cgGoto_Mv1J8OfT(block, outputs, _here, ctx, options)) + "; }"_fu;
        }
        else
            return "return "_fu + cgNode_5IJ88bTK(expr, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);

    }
    else if (use_return)
        return "return"_fu;
    else if (helpers == _current_fn.can_break)
        return "break"_fu;
    else if (helpers == _current_fn.can_cont)
        return "continue"_fu;
    else
        return cgGoto_Mv1J8OfT(block, outputs, _here, ctx, options);

}

                                #ifndef DEF_LOOP_PRE
                                #define DEF_LOOP_PRE
inline constexpr int LOOP_PRE = 2;
                                #endif

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_PRE_COND
                                #define DEF_LOOP_PRE_COND
inline constexpr int LOOP_PRE_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 5;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static fu::str cgLoop_ad3loJgx(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& n_pre = node.items[LOOP_PRE];
    if (n_pre)
    {
        s_SolvedNode pre { n_pre };
        if (pre.kind != s_kind_block)
        {
            pre.kind = s_kind_block;
            pre.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(n_pre) } };
        };
        /*MOV*/ s_SolvedNode loop { node };
        loop.items.mutref(LOOP_INIT) = s_SolvedNode{};
        loop.items.mutref(LOOP_PRE) = s_SolvedNode{};
        /*MOV*/ s_SolvedNode n_pre_cond { loop.items[LOOP_PRE_COND] };
        if (n_pre_cond)
        {
            if (loop.items[LOOP_POST_COND])
                BUG_V0Wmrkof("TODO: cgLoop with pre, pre_cond & post_cond."_fu, _here, ctx);
            else
            {
                loop.items.mutref(LOOP_POST_COND) = s_SolvedNode(n_pre_cond);
                loop.items.mutref(LOOP_PRE_COND) = s_SolvedNode{};
            };
        };
        pre.items += static_cast<s_SolvedNode&&>(loop);
        if (n_pre_cond)
        {
            /*MOV*/ s_SolvedNode guard { n_pre };
            guard.kind = s_kind_and;
            guard.items = fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { static_cast<s_SolvedNode&&>(n_pre_cond), s_SolvedNode(pre) } };
            pre = n_pre;
            pre.kind = s_kind_block;
            pre.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(guard) } };
        };
        const s_SolvedNode& n_init = node.items[LOOP_INIT];
        if (n_init)
        {
            pre.items.unshift(s_SolvedNode(n_init));
        };
        return cgNode_5IJ88bTK(pre, M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
    }
    else
    {
        const s_Helpers can_cont0 { _current_fn.can_cont };
        const s_Helpers can_break0 { _current_fn.can_break };
        fu_DEFER(
        {
            _current_fn.can_cont = can_cont0;
            _current_fn.can_break = can_break0;
        });
        _current_fn.can_cont = s_Helpers{};
        _current_fn.can_break = s_Helpers{};
        fu::view<s_SolvedNode> items = node.items;
        const s_SolvedNode& n_init = items[LOOP_INIT];
        const s_SolvedNode& n_pre_cond = items[LOOP_PRE_COND];
        const s_SolvedNode& n_body = items[LOOP_BODY];
        const s_SolvedNode& n_post = items[LOOP_POST];
        const s_SolvedNode& n_post_cond = items[LOOP_POST_COND];
        fu::str init = (n_init ? cgNode_5IJ88bTK(n_init, M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str pre_cond = (n_pre_cond ? cgNode_5IJ88bTK(n_pre_cond, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str post = (n_post ? cgNode_5IJ88bTK(n_post, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        /*MOV*/ fu::str post_cond = (n_post_cond ? cgNode_5IJ88bTK(n_post_cond, M_RETBOOL, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str name = x7E_gCeFmDFw("LL_"_fu, fu::i64dec(_current_fn.num_labels++));
        const s_Helpers& helpers = node.helpers;
        _current_fn.can_break = helpers;
        const int blocks0 = _current_fn.blocks.size();
        fu_DEFER(_current_fn.blocks.shrink(blocks0));
        _current_fn.blocks += s_cg_Block { fu::str(name), s_Helpers(helpers), false, false, fu::vec<int>{} };
        fu::str body = (n_body ? blockWrapSubstatement_AaRqmxei(n_body, M_LOOP_BODY, outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        const bool labelUsed = fu::has(body, (("goto "_fu + name) + ";"_fu));
        fu::str breakLabel = (labelUsed ? ((" "_fu + name) + ":;"_fu) : fu::str{});
        if (post_cond)
        {
            if (init || pre_cond)
                BUG_V0Wmrkof("TODO: cgLoop with post_cond & init/pre_cond."_fu, _here, ctx);
            else
            {
                fu::str post_cond_1 = (post ? ((post + ", "_fu) + post_cond) : static_cast<fu::str&&>(post_cond));
                return ((((("do"_fu + body) + outputs._indent) + "while ("_fu) + post_cond_1) + ")"_fu) + breakLabel;
            };
        }
        else if (init || post || !pre_cond)
            return ((((((("for ("_fu + init) + "; "_fu) + pre_cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;
        else
            return ((("while ("_fu + pre_cond) + ")"_fu) + body) + breakLabel;

    };
}

                                #ifndef DEF_TRY_TRY
                                #define DEF_TRY_TRY
inline constexpr int TRY_TRY = 0;
                                #endif

                                #ifndef DEF_TRY_ERR
                                #define DEF_TRY_ERR
inline constexpr int TRY_ERR = 1;
                                #endif

                                #ifndef DEF_TRY_CATCH
                                #define DEF_TRY_CATCH
inline constexpr int TRY_CATCH = 2;
                                #endif

static fu::str cgTryCatch_OtAhOVBU(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view<s_SolvedNode> items = node.items;
    fu::str tRy = blockWrapSubstatement_AaRqmxei(items[TRY_TRY], 0, outputs, _current_fn, _here, ctx, module, options);
    const s_SolvedNode& err_let = items[TRY_ERR];
    if ((err_let.kind == s_kind_letdef) || (err_let.kind == s_kind_empty))
    {
        const s_Target& err_trg = err_let.target;
        fu::str err = (err_trg ? localID_O7Lepk1W(err_trg, true, _current_fn, _here, ctx, module) : fu::str{});
        fu::str cAtch = blockWrapSubstatement_AaRqmxei(items[TRY_CATCH], 0, outputs, _current_fn, _here, ctx, module, options);
        /*MOV*/ fu::str res {};
        res += (outputs._indent + "try"_fu);
        res += (outputs._indent + "{"_fu);
        res += tRy;
        res += (outputs._indent + "}"_fu);
        res += (outputs._indent + "catch (const std::exception& o_0)"_fu);
        res += (outputs._indent + "{"_fu);
        if (err)
            res += (((outputs._indent + "    fu::str "_fu) + err) + " = fu::to_str(o_0.what());\n"_fu);

        res += cAtch;
        res += (outputs._indent + "}\n"_fu);
        return /*NRVO*/ res;
    }
    else
        BUG_V0Wmrkof("TRY_ERR not a letdef/empty"_fu, _here, ctx);

}

static fu::str cgDefer_48aOQZvQ(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    include_BSU6mjdP("<fu/defer.h>"_fu, outputs);
    fu::str which = ((node.value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((node.value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_5IJ88bTK(only_GN4mikiy(node.items), M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) + ")"_fu;
}

                                #ifndef DEF_if_first_uwKwzsvZqOh
                                #define DEF_if_first_uwKwzsvZqOh
inline char if_first_uwKwzsvZ(fu::view<char> s)
{
    if (s.size())
        return s[0];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str inferIndentation_PcS7YFfg(const fu::str& v)
{
    if (if_first_uwKwzsvZ(v) == '\n')
    {
        for (int i = 1; i < v.size(); i++)
        {
            const char c = v[i];
            if ((c != ' ') && (c != '\t'))
                return fu::slice(v, 0, i);

        };
    };
    return ""_fu;
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

inline static bool l_40_14_av7dea29(const fu::str& i, s_Outputs& outputs)
{
    return add_mts1NXJ4(outputs.HACK_link, i);
}

inline static bool l_40_15_C4Pssq2s(const fu::str& i, s_Outputs& outputs)
{
    return add_mts1NXJ4(outputs.HACK_include_dirs, i);
}

inline static bool l_40_16_GgQhmkfL(const fu::str& i, s_Outputs& outputs)
{
    return add_mts1NXJ4(outputs.HACK_extra_sources, i);
}

inline static void l_40_17_zAmDi5mS(const fu::str& i, s_Outputs& outputs)
{
    include_BSU6mjdP((starts_Db9eGFmC(i, '<') ? fu::str(i) : (('"' + i) + '"')), outputs);
}

static fu::str cgCompilerPragma_RYR98PLq(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view<char> cmd = node.value;
    if ((cmd == "emit"_fu) || (cmd == "emit_top"_fu) || (cmd == "input"_fu) || (cmd == "output"_fu) || (cmd == "clock"_fu))
    {
        /*MOV*/ fu::str result = ""_fu;
        fu::str indent = ""_fu;
        if (node.items)
        {
            const s_SolvedNode& node_1 = node.items[0];
            if (node_1.kind == s_kind_str)
                indent = inferIndentation_PcS7YFfg(node_1.value);

        };
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& node_1 = node.items[i];
            if (node_1.kind == s_kind_str)
                result += replace_t9kb9bFx(fu::slice(node_1.value, ((i == 0) ? indent.size() : 0)), indent, outputs._indent);
            else if (!isIrrelevant_40rRB6L8(node_1.type))
                result += cgNode_5IJ88bTK(node_1, 0, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);

        };
        for (int i_1 = result.size(); i_1-- > 0; )
        {
            const char c = result[i_1];
            if (c > ' ')
            {
                result.shrink((i_1 + 1));
                break;
            };
        };
        if (_current_fn && cmd != "emit_top"_fu)
            return /*NRVO*/ result;
        else
        {
            outputs._top_emits += result;
            outputs._top_emits += '\n';
            return ""_fu;
        };
    }
    else if (cmd == "link"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_V0Wmrkof((x7E_gCeFmDFw("compiler link: All arguments must be string literals, got a `"_fu, str_n4lV73pj(item.kind)) + "`."_fu), _here, ctx);
            else
                l_40_14_av7dea29(item.value, outputs);

        };
        return ""_fu;
    }
    else if (cmd == "include_dirs"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_V0Wmrkof((x7E_gCeFmDFw("compiler link: All arguments must be string literals, got a `"_fu, str_n4lV73pj(item.kind)) + "`."_fu), _here, ctx);
            else
                l_40_15_C4Pssq2s(item.value, outputs);

        };
        return ""_fu;
    }
    else if (cmd == "sources"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_V0Wmrkof((x7E_gCeFmDFw("compiler link: All arguments must be string literals, got a `"_fu, str_n4lV73pj(item.kind)) + "`."_fu), _here, ctx);
            else
                l_40_16_GgQhmkfL(item.value, outputs);

        };
        return ""_fu;
    }
    else if (cmd == "include"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                BUG_V0Wmrkof((x7E_gCeFmDFw("compiler link: All arguments must be string literals, got a `"_fu, str_n4lV73pj(item.kind)) + "`."_fu), _here, ctx);
            else
                l_40_17_zAmDi5mS(item.value, outputs);

        };
        return ""_fu;
    }
    else
        BUG_V0Wmrkof(("Unknown compiler pragma: "_fu + cmd), _here, ctx);

}

static fu::str cgNode_5IJ88bTK(const s_SolvedNode& node, const int mode, const s_Type& callarg, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_kind k = (node.kind ? node.kind : BUG_V0Wmrkof("cgNode: No node.kind."_fu, _here, ctx));
    HERE_hEi2PUi5(node.token, _here);
    if (k == s_kind_not)
        return cgNot_f2JZoaGG(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_call)
        return cgCall_aaciDiJb(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_int)
        return cgLiteral_fwZRNfzp(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_real)
        return cgLiteral_fwZRNfzp(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_char)
        return cgCharLiteral_87jj6ekL(node, outputs, _here, ctx, options);
    else if (k == s_kind_str)
        return cgStringLiteral_h74WntHi(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_arrlit)
        return cgArrayLiteral_h4vnsL1p(node, mode, callarg, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_bool)
        return fu::str(node.value);
    else if (k == s_kind_copy)
        return cgCopyOrMove_9Dpij3DJ(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_move)
        return cgCopyOrMove_9Dpij3DJ(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_if)
    {
        return cgIf_ifbtOM7h(node, mode, outputs, _current_fn, _here, ctx, module, options);
    }
    else if (k == s_kind_or)
        return cgOr_jYgTb7vK(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_and)
        return cgAnd_uWwF3qqj(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_letdef)
        return cgLetDef_lEJ5IFYI(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_block)
        return cgBlock_K86xab4i(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_empty)
        return cgEmpty_4S8MA32O(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (!(mode & M_STMT))
        return cgBlock_K86xab4i(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_jump)
        return cgJump_b4ef0bhr(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_loop)
        return cgLoop_ad3loJgx(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_try)
        return cgTryCatch_OtAhOVBU(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_defer)
        return cgDefer_48aOQZvQ(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_kind_pragma)
        return cgCompilerPragma_RYR98PLq(node, outputs, _current_fn, _here, ctx, module, options);
    else
        BUG_V0Wmrkof(x7E_gCeFmDFw("cg: Unexpected "_fu, str_n4lV73pj(k)), _here, ctx);

}

static fu::vec<fu::str> cgNodes_c3WidZcs(fu::view<s_SolvedNode> nodes, const int mode, fu::view<char> trail, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<fu::str> result {};
    fu::vec<fu::str> _tv0 {};
    if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs););
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& node = nodes[i];
        if ((mode & M_CHECK_NEVER_LTR) && is_never_FfV8Zuj5(node.type) && (i < (nodes.size() - 1)))
            BUG_V0Wmrkof("M_CHECK_NEVER_LTR: non-trailing node.is_never"_fu, _here, ctx);
        else
        {
            const bool isTrail = ((trail && (i == (nodes.size() - 1)) && !is_never_FfV8Zuj5(node.type)) ? !isIrrelevant_40rRB6L8(node.type) : false);
            /*MOV*/ fu::str src = (node ? cgNode_5IJ88bTK(node, (isTrail ? (mode & ~M_STMT) : mode), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
            if (src || (mode & M_STMT))
            {
                if ((mode & M_STMT) && _current_fn.TEMPVARs)
                {
                    result += _current_fn.TEMPVARs;
                    _current_fn.TEMPVARs.clear();
                };
                if (isTrail)
                    src = (((trail + "("_fu) + src) + ")"_fu);

                result.push(static_cast<fu::str&&>(src));
            }
            else
                BUG_V0Wmrkof((((x7E_gCeFmDFw("cgNodes: empty output for Node(kind=`"_fu, str_n4lV73pj(node.kind)) + "` value=`"_fu) + node.value) + "`)."_fu), _here, ctx);

        };
    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_if_last_uwKwzsvZqOh
                                #define DEF_if_last_uwKwzsvZqOh
inline char if_last_uwKwzsvZ(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str cgStatements_5NLNdYe4(fu::view<s_SolvedNode> nodes, int& count, fu::view<char> trail, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<fu::str> lines = cgNodes_c3WidZcs(nodes, (M_STMT | M_CHECK_NEVER_LTR), trail, outputs, _current_fn, _here, ctx, module, options);
    count = lines.size();
    /*MOV*/ fu::str src = ""_fu;
    for (int i = 0; i < lines.size(); i++)
    {
        fu::view<char> line = lines[i];
        if (line)
        {
            src += (((if_first_uwKwzsvZ(line) == '\n') ? ('\n' + line) : (outputs._indent + line)) + ((if_last_uwKwzsvZ(line) == ';') ? '\n' : ';'));
        };
    };
    return /*NRVO*/ src;
}

static fu::str cgMain_KWSBYxMf(s_Outputs& outputs)
{
    if (!outputs._hasMain)
        return ""_fu;
    else
    {
        fu::str zst = ""_fu;
        if (outputs._hasMain & MAIN_zst)
            zst = ", 0"_fu;

        /*MOV*/ fu::str src = (("\nint main() { return fu_MAIN()"_fu + zst) + "; }"_fu);
        if (outputs._hasMain & MAIN_argv)
        {
            annotateString_I9zlJd3r(outputs);
            src = ((((((((((("\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu::vec<fu::str> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu::to_str(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu::vec<fu::str>&&>(args))"_fu) + zst) + ";"_fu) + "\n}"_fu);
        };
        src += "\n"_fu;
        return /*NRVO*/ src;
    };
}

static fu::str collectDedupes_zWGcFub7(fu::vec<fu::str>&& values, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> header, fu::view<char> footer)
{
    /*MOV*/ fu::str out = ""_fu;
    if (values)
        out += header;

    for (int i = 0; i < values.size(); i++)
        out += ((prefix + values[i]) + suffix);

    if (out)
        out += footer;

    return /*NRVO*/ out;
}

static fu::str cgRoot_wqUAdgK9(const s_SolvedNode& root, fu::view<s_ScopeItem> scope, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int count {};
    fu::str src = cgStatements_5NLNdYe4(root.items, count, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
    for (int i = 0; i < scope.size(); i++)
    {
        const s_Target t = target_NWTdzsfF(scope[i]);
        if ((int(unsigned(((t._packed >> 40ull) & 0xfffffull))) == module.modid) && (GET_xYfAGayT(t, ctx, module).kind == s_kind_fn) && isExtLinked_DiXs7xj7(GET_xYfAGayT(t, ctx, module)))
            ensureFnDef_68YaH5hY(t, false, outputs, _current_fn, _here, ctx, module, options);

    };
    fu::str main = cgMain_KWSBYxMf(outputs);
    return (((((((((((((((collectDedupes_zWGcFub7(fu::vec<fu::str>(outputs._libs), "#include "_fu, "\n"_fu, fu::view<char>{}, "\n"_fu) + outputs._tfwd_src) + outputs._ffwd_src) + (outputs._ffwd_live_client ? "\n                                #ifdef fu_HOTSWAP\n"_fu : fu::str{})) + outputs._ffwd_live_client) + (outputs._ffwd_live_client ? "                                #else\n"_fu : fu::str{})) + outputs._ffwd_live_nclient) + (outputs._ffwd_live_client ? "                                #endif\n"_fu : fu::str{})) + outputs._tdef) + collectDedupes_zWGcFub7(fu::vec<fu::str>(outputs._gcc_ignore), "#pragma GCC diagnostic ignored \""_fu, "\"\n"_fu, "#pragma GCC diagnostic push\n"_fu, "\n"_fu)) + outputs._top_emits) + (outputs._fdef ? "\n#ifndef fu_NO_fdefs\n"_fu : fu::str{})) + outputs._fdef) + (outputs._fdef ? "\n#endif\n"_fu : fu::str{})) + src) + main) + (outputs._gcc_ignore ? "\n#pragma GCC diagnostic pop\n"_fu : fu::str{});
}

static fu::str localPath_IOntfHwF(const fu::str& path, const s_Module& module)
{
    if (starts_Db9eGFmC(path, '.'))
        return join_8GxtVDhD(dirname_8Oo0Zp26(module.fname), path);
    else
        return fu::str(path);

}

s_CodegenOutput cpp_codegen_RSs3vpiZ(const s_Module& module, const s_Context& ctx, const s_Options& options)
{
    s_TokenIdx _here {};
    s_Outputs outputs {};
    outputs._indent = "\n"_fu;
    s_cg_CurrentFn _current_fn {};
    const s_SolvedNode& root = module.out.solve.root;
    if (root.kind == s_kind_root)
    {
        /*MOV*/ fu::str src = cgRoot_wqUAdgK9(root, module.out.solve.scope.items, outputs, _current_fn, _here, ctx, module, options);
        for (int i = 0; i < outputs.HACK_extra_sources.size(); i++)
        {
            const fu::str& orig = outputs.HACK_extra_sources[i];
            /*MOV*/ fu::str file = localPath_IOntfHwF(orig, module);
            src += (("\n// "_fu + orig) + "\n"_fu);
            src += read_zTt3fZzW(static_cast<fu::str&&>(file));
        };
        return s_CodegenOutput { static_cast<fu::str&&>(src), fu::vec<fu::str>(outputs.HACK_link), fu::vec<fu::str>(outputs.HACK_include_dirs), fu::vec<fu::str>(outputs.HACK_extra_sources), fu::vec<int>{}, outputs._defects };
    }
    else
        BUG_V0Wmrkof((*(const fu::str*)fu::NIL), _here, ctx);

}

#endif
