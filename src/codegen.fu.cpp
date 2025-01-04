#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <algorithm>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>
#include <fu/vec/LEGACY_slice.h>

struct s_CodegenOutput;
struct s_Set_6ARmtH0K78f;
struct s_BuildHacks;
struct s_Set_95BJOojOc45;
typedef fu::u8 s_CGDefects;
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
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
struct s_Sample_Time;
struct s_Context;
struct s_NukeOnRebuild;
struct s_Map_cUwKMz9CPyg;
struct s_Options;
struct s_Lint;
typedef fu::u8 s_DevOptions;
struct s_Outputs;
struct s_Set_6ARmtH0K78f;
struct s_Set_630QiFMbj14;
struct s_StructCanon;
struct s_Set_aQNJhbMknMf;
struct s_StructDecl;
struct s_Set_5e8gOOeJ71a;
struct s_Map_CIvvfLLMMzl;
struct s_cg_CurrentFn;
struct s_cg_Block;
enum s_PointerFlip: fu::u8;
typedef unsigned s_Mode;
struct s_NativeQualities;
struct s_ClosureID;
struct s_Intlit;
struct s_TEMPVAR;
typedef int s_Errno;
struct s_Set_95BJOojOc45;
bool is_never_9CJmuVSD(const s_ValueType&);
[[noreturn]] fu::never FAIL_u9Gbkniv(fu::view<char>, const fu::vec<s_TokenIdx>&, const s_Context&);
bool isIrrelevant_9CJmuVSD(const s_Type&);
static fu::str cgNode_i4S3ctpP(const s_SolvedNode&, s_Mode, const s_Type&, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
static bool isFieldChain_i4S3ctpP(const s_SolvedNode&, const s_Context&, const s_Module&);
bool isRTL_xQNS19Zn(const s_Overload&);
bool is_mutref_9CJmuVSD(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_sliceable_hxWWgdZ1(const s_ValueType&);
bool is_zst_1qjplDUo(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool is_ref_9CJmuVSD(const s_Type&);
fu::str qBAD_e44UlzzA(const fu::str&);
bool is_primitive_hxWWgdZ1(const s_ValueType&);
s_Type tryClear_sliceable_1qjplDUo(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
static fu::str typeAnnot_i4S3ctpP(const s_Type&, s_Mode, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
const s_Struct& lookupUserType_SqDqFcFw(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
fu::str digest62_lweHUmk8(uint64_t, int);
s_StructCanon parseStructCanon_p1TNFlvR(fu::view<char>);
s_Target target_z0QqoZ5t(const s_ScopeItem&);
fu::str ID_vRqJr3WR(const fu::str&);
bool is_rx_copy_9CJmuVSD(const s_ValueType&);
bool isPassByValue_hxWWgdZ1(const s_ValueType&);
bool is_trivial_1qjplDUo(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
static fu::str TEMPVAR_init_i4S3ctpP(fu::view<char>, s_PointerFlip, fu::view<char>, bool);
unsigned parse7bit(fu::view<char>, int&);
s_Target Target_xQNS19Zn(int, int, int);
static bool hasZeroes_i4S3ctpP(const s_Lifetime&, const s_cg_CurrentFn&, const s_Context&, const s_Module&);
s_NativeQualities NativeQualities_UvH3gYAB(fu::view<char>);
bool is_bitfield_hxWWgdZ1(const s_ValueType&);
bool is_integral_hxWWgdZ1(const s_ValueType&);
bool is_unsigned_hxWWgdZ1(const s_ValueType&);
bool hasIdentifierChars_V5IuMsej(fu::view<char>);
const s_Struct& tryLookupUserType_1qjplDUo(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool hasBinary_vRqJr3WR(fu::view<char>);
bool hasUnary_vRqJr3WR(fu::view<char>);
bool hasPostfix_vRqJr3WR(fu::view<char>);
static void ensureFnUsable_i4S3ctpP(const s_Target&, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
s_Type clear_refs_9CJmuVSD(s_Type&&);
bool add_ZwXYCruz(s_BitSet&, int);
s_ClosureID tryParseClosureID_UvH3gYAB(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool has_ZwXYCruz(const s_BitSet&, int);
static bool isConstexpr_i4S3ctpP(const s_SolvedNode&, const s_Context&, const s_Module&);
static bool globalVar_isConstexpr_i4S3ctpP(const s_Overload&, const s_Context&, const s_Module&);
static bool exprOK_i4S3ctpP(fu::view<s_SolvedNode>);
static fu::vec<fu::str> cgNodes_i4S3ctpP(fu::view<s_SolvedNode>, s_Mode, fu::view<char>, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
static void TEST_noDanglingRefs_i4S3ctpP(fu::view<int>, const s_SolvedNode&, const s_cg_CurrentFn&, const s_TokenIdx&, const s_Context&, const s_Module&);
static void TEST_noDanglingRefs_cqSTVt8D(fu::view<int>, const s_Lifetime&, const s_cg_CurrentFn&, const s_TokenIdx&, const s_Context&, const s_Module&);
static fu::str cgStatements_i4S3ctpP(fu::view<s_SolvedNode>, int&, fu::view<char>, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, const s_Options&);
bool is_arithmetic_hxWWgdZ1(const s_ValueType&);
s_Intlit Intlit_u8re8TwO(fu::view<char>);
bool is_boolean_hxWWgdZ1(const s_ValueType&);
bool hasStatic_7Yz9ezW2(const s_Lifetime&);
void hash_l6RUR9Sz(s_TEA&, fu::view<char>);
s_Type clear_sliceable_1qjplDUo(const s_ValueType&, const s_TokenIdx&, const s_Context&, const s_Module&);
static bool mayNeedConstCast_i4S3ctpP(const s_SolvedNode&, const s_TokenIdx&, const s_Context&, const s_Module&);
bool propositionOK_9CJmuVSD(const s_Type&, bool, const s_TokenIdx&, const s_Context&);
bool isAddrOfFn_9CJmuVSD(const s_Type&);
s_Target parseLocalOrGlobal_xQNS19Zn(fu::view<char>, int&);
fu::str dirname_qZI0kCzt(const fu::str&);
fu::str join_qZI0kCzt(fu::view<char>, const fu::str&);
s_Errno read_VWJwj7Fs(fu::str&&, fu::str&, int64_t);
static void visit_i4S3ctpP(const s_Module&, s_Set_95BJOojOc45&, const s_Context&);

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

                                #ifndef DEF_s_DevOptions
                                #define DEF_s_DevOptions
inline constexpr s_DevOptions s_DevOptions_DEV_Print = s_DevOptions(1u);
inline constexpr s_DevOptions s_DevOptions_DEV_Parallel = s_DevOptions(2u);
inline constexpr s_DevOptions s_DevOptions_DEV_ExpectFail = s_DevOptions(4u);
inline constexpr s_DevOptions s_DevOptions_DEV_HappyPathOnly = s_DevOptions(8u);
inline constexpr s_DevOptions s_DevOptions_DEV_DontFoldLiterals = s_DevOptions(16u);
inline constexpr s_DevOptions s_DevOptions_DEV_IgnoreDefects = s_DevOptions(32u);
inline constexpr s_DevOptions s_DevOptions_DEV_CG_LifetimeAnnots = s_DevOptions(64u);

inline constexpr s_DevOptions MASK_s_DevOptions
    = s_DevOptions_DEV_Print
    | s_DevOptions_DEV_Parallel
    | s_DevOptions_DEV_ExpectFail
    | s_DevOptions_DEV_HappyPathOnly
    | s_DevOptions_DEV_DontFoldLiterals
    | s_DevOptions_DEV_IgnoreDefects
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

                                #ifndef DEF_s_Set_5e8gOOeJ71a
                                #define DEF_s_Set_5e8gOOeJ71a
struct s_Set_5e8gOOeJ71a
{
    fu::vec<uint64_t> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Set_aQNJhbMknMf
                                #define DEF_s_Set_aQNJhbMknMf
struct s_Set_aQNJhbMknMf
{
    fu::vec<s_Target> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
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

                                #ifndef DEF_s_Set_630QiFMbj14
                                #define DEF_s_Set_630QiFMbj14
struct s_Set_630QiFMbj14
{
    fu::vec<s_StructCanon> keys_asc;
    explicit operator bool() const noexcept
    {
        return false
            || keys_asc
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

                                #ifndef DEF_s_Map_CIvvfLLMMzl
                                #define DEF_s_Map_CIvvfLLMMzl
struct s_Map_CIvvfLLMMzl
{
    s_Set_6ARmtH0K78f keys;
    fu::vec<s_Target> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Outputs
                                #define DEF_s_Outputs
struct s_Outputs
{
    s_Set_6ARmtH0K78f _libs;
    s_Set_6ARmtH0K78f _gcc_ignore;
    fu::vec<fu::str> _top_emits;
    s_Set_630QiFMbj14 _tfwd;
    fu::str _tfwd_src;
    s_Set_aQNJhbMknMf _ffwd;
    fu::str _ffwd_src;
    fu::str _ifdef_hotswap;
    fu::str _ifndef_hotswap;
    fu::str _tdef_src;
    fu::vec<s_StructDecl> _tdef_stack;
    s_Set_aQNJhbMknMf _fdef_started;
    s_Set_aQNJhbMknMf _fdef_complete;
    fu::str _fdef_src;
    fu::str _indent;
    int _hasMain;
    fu::str _testsuite;
    s_Set_5e8gOOeJ71a _static_strings;
    fu::str _static_string_src;
    s_BuildHacks _build_hacks;
    s_CGDefects _defects;
    s_Map_CIvvfLLMMzl _TODO_FIX_seenFns;
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
            || _ifdef_hotswap
            || _ifndef_hotswap
            || _tdef_src
            || _tdef_stack
            || _fdef_started
            || _fdef_complete
            || _fdef_src
            || _indent
            || _hasMain
            || _testsuite
            || _static_strings
            || _static_string_src
            || _build_hacks
            || _defects
            || _TODO_FIX_seenFns
        ;
    }
};
                                #endif

                                #ifndef DEF_s_PointerFlip
                                #define DEF_s_PointerFlip
enum s_PointerFlip: fu::u8
{
    s_PointerFlip_None = 0u,
    s_PointerFlip_VecRangeOrView = 1u,
    s_PointerFlip_RawPointer = 2u,
};
                                #endif

                                #ifndef DEF_s_cg_Block
                                #define DEF_s_cg_Block
struct s_cg_Block
{
    fu::str name;
    s_Helpers helpers;
    bool has_val;
    s_PointerFlip ptr_flip;
    fu::vec<int> surviving_locals;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || helpers
            || has_val
            || ptr_flip
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
    fu::vec<int> _ids_dedupe_p;
    fu::vec<int> _ids_dedupe_n;
    s_BitSet _hoisted;
    s_BitSet _declared;
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
            || _ids_dedupe_p
            || _ids_dedupe_n
            || _hoisted
            || _declared
            || _live_locals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Mode
                                #define DEF_s_Mode
inline constexpr s_Mode s_Mode_M_STMT = 1u;
inline constexpr s_Mode s_Mode_M_RETBOOL = 2u;
inline constexpr s_Mode s_Mode_M_CONST = 4u;
inline constexpr s_Mode s_Mode_M_RETVAL = 8u;
inline constexpr s_Mode s_Mode_M_ARGUMENT = 16u;
inline constexpr s_Mode s_Mode_M_RETURN = 32u;
inline constexpr s_Mode s_Mode_M_FWDECL = 64u;
inline constexpr s_Mode s_Mode_M_PARENS = 128u;
inline constexpr s_Mode s_Mode_M_OPT_CURLIES = 256u;
inline constexpr s_Mode s_Mode_M_LOOP_BODY = 512u;
inline constexpr s_Mode s_Mode_M_MUTVAR = 1024u;
inline constexpr s_Mode s_Mode_M_MOVABLE = 2048u;
inline constexpr s_Mode s_Mode_M_ARG_TO_NATIVE = 4096u;
inline constexpr s_Mode s_Mode_M_ENUM_DECL = 8192u;
inline constexpr s_Mode s_Mode_M_CHECK_NEVER_LTR = 16384u;
inline constexpr s_Mode s_Mode_M_STATIC_REF = 32768u;
inline constexpr s_Mode s_Mode_M_VOID_EXPR = 65536u;
inline constexpr s_Mode s_Mode_M_FN_BODY = 131072u;
inline constexpr s_Mode s_Mode_M_IGNORE_REFERENCE = 262144u;

inline constexpr s_Mode MASK_s_Mode
    = s_Mode_M_STMT
    | s_Mode_M_RETBOOL
    | s_Mode_M_CONST
    | s_Mode_M_RETVAL
    | s_Mode_M_ARGUMENT
    | s_Mode_M_RETURN
    | s_Mode_M_FWDECL
    | s_Mode_M_PARENS
    | s_Mode_M_OPT_CURLIES
    | s_Mode_M_LOOP_BODY
    | s_Mode_M_MUTVAR
    | s_Mode_M_MOVABLE
    | s_Mode_M_ARG_TO_NATIVE
    | s_Mode_M_ENUM_DECL
    | s_Mode_M_CHECK_NEVER_LTR
    | s_Mode_M_STATIC_REF
    | s_Mode_M_VOID_EXPR
    | s_Mode_M_FN_BODY
    | s_Mode_M_IGNORE_REFERENCE;
                                #endif

                                #ifndef DEF_s_NativeQualities
                                #define DEF_s_NativeQualities
struct s_NativeQualities
{
    int name_start_idx;
    bool MayAlias;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || MayAlias
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
    s_PointerFlip ptr_flip;
    explicit operator bool() const noexcept
    {
        return false
            || annot
            || id
            || ptr_flip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Errno
                                #define DEF_s_Errno
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

#ifndef fu_NO_fdefs

[[noreturn]] static fu::never BUG_i4S3ctpP(const fu::str& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL_u9Gbkniv(("COMPILER BUG:\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu::str(reason) : "Assertion failed."_fu)), fu::vec<s_TokenIdx> { fu::slate<1, s_TokenIdx> { s_TokenIdx(_here) } }, ctx);
}

                                #ifndef DEF_only_LqU08rcLVAb
                                #define DEF_only_LqU08rcLVAb
inline const s_SolvedNode& only_LqU08rcL(fu::view<s_SolvedNode> s)
{
    fu_ASSERT((s.size() == 1));
    return s[0];
}
                                #endif

static fu::str cgNot_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return "!"_fu + cgNode_i4S3ctpP(only_LqU08rcL(node.items), s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF_uNsigned_fAw9WufW9A7
                                #define DEF_uNsigned_fAw9WufW9A7
inline unsigned uNsigned_fAw9WufW(const int v)
{
    return unsigned(v);
}
                                #endif

                                #ifndef DEF_iF_72gH62eA3C2
                                #define DEF_iF_72gH62eA3C2
inline const s_Extended& iF_72gH62eA(fu::view<s_Extended> a, const int i)
{
    if (uNsigned_fAw9WufW(i) < uNsigned_fAw9WufW(a.size()))
        return a[i];
    else
        return (*(const s_Extended*)fu::NIL);

}
                                #endif

static const s_Extended& EXT_i4S3ctpP(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    const int locid = (__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_1_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_1_v);
    if (locid)
        return (*(const s_Extended*)fu::NIL);
    else
    {
        const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
        const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
        const s_Module& m = ((modid == module.modid) ? module : ctx.modules[modid]);
        return iF_72gH62eA(m.out.solve.scope.extended, globid);
    };
}

static const s_Overload& GET_i4S3ctpP(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    const int modid = int(unsigned(((target._packed >> 40ull) & 0xfffffull)));
    const int globid = int(unsigned(((target._packed >> 20ull) & 0xfffffull)));
    int BL_1_v {};
    const int locid = (__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_1_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_1_v);
    const s_Module& m = ((modid == module.modid) ? module : ctx.modules[modid]);
    if (locid)
    {
        const s_Extended& ext = m.out.solve.scope.extended[globid];
        return ext.args_n_locals[((ext.args_neg - ((locid > 0) ? 1 : 0)) + locid)];
    }
    else
        return m.out.solve.scope.overloads[(globid - 1)];

}

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

static bool isFieldChain_i4S3ctpP(const s_SolvedNode& node, const s_Context& ctx, const s_Module& module)
{
    if (node.kind != s_Kind_call)
        return false;
    else
    {
        const s_Overload& t = GET_i4S3ctpP(node.target, ctx, module);
        if (t.kind == s_Kind_field)
            return isFieldChain_i4S3ctpP(only_LqU08rcL(node.items), ctx, module);
        else if (t.kind == s_Kind_var)
            return true;
        else
            return false;

    };
}

static bool isAbbreviatedCopy_i4S3ctpP(const s_SolvedNode& n, const bool sliceOK)
{
    if (n.kind == s_Kind_copy)
        return !is_sliceable_hxWWgdZ1(n.type.vtype) || sliceOK;
    else
        return false;

}

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
extern const unsigned q_rx_resize;
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
extern const unsigned q_rx_copy;
                                #endif

static bool ifArrayRef_annotateAsSlice_i4S3ctpP(const s_Type& type)
{
    return !(type.vtype.quals & (q_rx_resize | q_rx_copy));
}

static s_VFacts ifArrayRef_annotateAsVec_i4S3ctpP(const s_Type& type)
{
    if (!ifArrayRef_annotateAsSlice_i4S3ctpP(type) && s_VFacts((type.vtype.vfacts & s_VFacts_LeftAligned)))
        return type.vtype.vfacts & s_VFacts_RightAligned;
    else
    {
        return s_VFacts{};
    };
}

static bool ifArray_annotateAsVec_i4S3ctpP(const s_Type& type)
{
    return !is_ref_9CJmuVSD(type) || ifArrayRef_annotateAsVec_i4S3ctpP(type);
}

static bool isPointlessMustSeq_i4S3ctpP(const s_SolvedNode& arg, const s_Argument& host_arg, const s_Context& ctx, const s_Module& module)
{
    if (is_sliceable_hxWWgdZ1(host_arg.type.vtype) && !ifArray_annotateAsVec_i4S3ctpP(host_arg.type))
        return false;
    else
        return isFieldChain_i4S3ctpP(arg, ctx, module);

}

static bool rest_isPointlessMustSeq_i4S3ctpP(const int seqIdx, fu::view<s_SolvedNode> args, const bool RTL, fu::view<s_Argument> host_args, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{

    {
        const int seqIdx_start = (seqIdx + 1);
        int seqIdx_1 = 0;
        int lastPass = 1;
        for (int pass = 0; pass < lastPass; pass++)
        {
            for (int i = 0; i < host_args.size(); i++)
            {
                const s_Argument& host_arg = host_args[i];
                if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_9CJmuVSD(host_arg.type, _here, ctx))))
                    lastPass = 2;
                else
                {
                    if ((seqIdx_start <= seqIdx_1))
                    {
                        const int i_1 = i;
                        const s_SolvedNode& arg = args[i_1];
                        if (!isPointlessMustSeq_i4S3ctpP(arg, host_arg, ctx, module))
                            return false;

                    };
                    seqIdx_1++;
                };
            };
        };
    };
    return true;
}

                                #ifndef DEF_str_9xCQw8Q9KPh
                                #define DEF_str_9xCQw8Q9KPh
inline fu::str str_9xCQw8Q9(const s_CGDefects n)
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

static void noteDefect_i4S3ctpP(const s_CGDefects defects, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Options& options)
{
    if (defects & options.break_defects)
        BUG_i4S3ctpP(("CGDefect break: "_fu + qBAD_e44UlzzA(str_9xCQw8Q9(defects))), _here, ctx);
    else
        outputs._defects |= defects;

}

                                #ifndef DEF_add_eHVOG4piV4k
                                #define DEF_add_eHVOG4piV4k
inline bool add_eHVOG4pi(s_Set_6ARmtH0K78f& _, const fu::str& key)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, fu::str(key));
    return true;
}
                                #endif

static void include_i4S3ctpP(const fu::str& lib, s_Outputs& outputs)
{
    add_eHVOG4pi(outputs._libs, lib);
}

static fu::str primAnnotBase_i4S3ctpP(fu::view<char> c, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx)
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
        include_i4S3ctpP("<fu/int.h>"_fu, outputs);
        return "fu::"_fu + c;
    }
    else
    {
        include_i4S3ctpP("<cstdint>"_fu, outputs);
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
            BUG_i4S3ctpP((("Unknown primitive: `"_fu + c) + "`."_fu), _here, ctx);

    };
}

static fu::str annotateNever_i4S3ctpP(s_Outputs& outputs)
{
    include_i4S3ctpP("<fu/never.h>"_fu, outputs);
    return "fu::never"_fu;
}

static fu::str annotateZST_i4S3ctpP()
{
    return "void"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEF_x3Cx3E_F82w14kIpjk
                                #define DEF_x3Cx3E_F82w14kIpjk
inline int x3Cx3E_F82w14kI(const unsigned a, const unsigned b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_Si1HLHsuLXe
                                #define DEF_x3Cx3E_Si1HLHsuLXe
inline int x3Cx3E_Si1HLHsu(const s_VFacts a, const s_VFacts b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_VHap4TnOou0
                                #define DEF_x3Cx3E_VHap4TnOou0
inline int x3Cx3E_VHap4TnO(const s_ValueType& a, const s_ValueType& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_F82w14kI(a.quals, b.quals)))
        return cmp;
    else if ((cmp = x3Cx3E_Si1HLHsu(a.vfacts, b.vfacts)))
        return cmp;

    if ((cmp = x3Cx3E_bv5nK4Kl(a.canon, b.canon)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_imrGV5eVAvi
                                #define DEF_x3Cx3E_imrGV5eVAvi
inline int x3Cx3E_imrGV5eV(const s_Lifetime& a, const s_Lifetime& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_bv5nK4Kl(a.uni0n, b.uni0n)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_BJ686ShoLva
                                #define DEF_x3Cx3E_BJ686ShoLva
inline int x3Cx3E_BJ686Sho(const s_Type& a, const s_Type& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_VHap4TnO(a.vtype, b.vtype)))
        return cmp;
    else if ((cmp = x3Cx3E_imrGV5eV(a.lifetime, b.lifetime)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_tUaLhVGEZ55
                                #define DEF_x3Dx3D_tUaLhVGEZ55
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_BJ686Sho(a, b);
}
                                #endif

static fu::str annotateString_i4S3ctpP(s_Outputs& outputs)
{
    include_i4S3ctpP("<fu/str.h>"_fu, outputs);
    return "fu::str"_fu;
}

static bool ifArrayRef_annotateAsVecRange_i4S3ctpP(const s_Type& type)
{
    if (!ifArrayRef_annotateAsSlice_i4S3ctpP(type))
    {
        return !ifArrayRef_annotateAsVec_i4S3ctpP(type);
    }
    else
        return false;

}

                                #ifndef DEF_SIGHASH_CHARS
                                #define DEF_SIGHASH_CHARS
inline constexpr int SIGHASH_CHARS = 4;
                                #endif

static fu::str structID_i4S3ctpP(const s_Struct& s, const s_Context& ctx, const s_Module& module)
{
    if (s.shape.hash && !(GET_i4S3ctpP(s.target, ctx, module).flags & s_Flags_F_EXTERN))
        return (s.name + "_"_fu) + digest62_lweHUmk8(uint64_t(s.shape.hash), SIGHASH_CHARS);
    else
        return fu::str(s.name);

}

                                #ifndef DEF_x3Cx3E_ZkHrVpkO4h8
                                #define DEF_x3Cx3E_ZkHrVpkO4h8
inline int x3Cx3E_ZkHrVpkO(const s_StructCanon& a, const s_StructCanon& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_XrkW2YUZ(a.modid, b.modid)))
        return cmp;
    else if ((cmp = x3Cx3E_XrkW2YUZ(a.index, b.index)))
        return cmp;

    return 0;
}
                                #endif

                                #ifndef DEF_add_zi3DZWwEoN9
                                #define DEF_add_zi3DZWwEoN9
inline bool add_zi3DZWwE(s_Set_630QiFMbj14& _, const s_StructCanon& key)
{
    fu::view<s_StructCanon> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_ZkHrVpkO(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, s_StructCanon(key));
    return true;
}
                                #endif

                                #ifndef DEF___1i1n07xwI80
                                #define DEF___1i1n07xwI80
inline static fu::view<char> _1i1n07xw(const s_Target& member, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str _0 {};
    return (def += ((_0 = (((((("\ninline constexpr "_fu + id) + " "_fu) + id) + "_"_fu) + GET_i4S3ctpP(member, ctx, module).name) + " = "_fu), (static_cast<fu::str&&>(_0) + cgNode_i4S3ctpP(GET_i4S3ctpP(member, ctx, module).solved, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options))) + ";"_fu));
}
                                #endif

                                #ifndef DEF_each_9vGncHokntg
                                #define DEF_each_9vGncHokntg
inline void each_9vGncHok(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
        _1i1n07xw(target_z0QqoZ5t(a[i]), id, def, outputs, _current_fn, _here, ctx, module, options);

}
                                #endif

                                #ifndef DEF___zF8GazLKP7g
                                #define DEF___zF8GazLKP7g
inline static void _zF8GazLK(const s_Target& member, fu::view<char> id, fu::str& mask, const s_Context& ctx, const s_Module& module)
{
    if (!mask)
        mask = (((("\n\ninline constexpr "_fu + id) + " MASK_"_fu) + id) + "\n    = "_fu);
    else
        mask += "\n    | "_fu;

    mask += ((id + "_"_fu) + GET_i4S3ctpP(member, ctx, module).name);
}
                                #endif

                                #ifndef DEF_each_VaUbEJnAXYj
                                #define DEF_each_VaUbEJnAXYj
inline void each_VaUbEJnA(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& mask, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        _zF8GazLK(target_z0QqoZ5t(a[i]), id, mask, ctx, module);

}
                                #endif

                                #ifndef DEF___Q99Jyv0cPbh
                                #define DEF___Q99Jyv0cPbh
inline static fu::view<char> _Q99Jyv0c(const s_Target& member, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str _0 {};
    return (def += ((_0 = (((("\n    "_fu + id) + "_"_fu) + GET_i4S3ctpP(member, ctx, module).name) + " = "_fu), (static_cast<fu::str&&>(_0) + cgNode_i4S3ctpP(GET_i4S3ctpP(member, ctx, module).solved, s_Mode_M_ENUM_DECL, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options))) + ","_fu));
}
                                #endif

                                #ifndef DEF_each_p2uOBdl5ae0
                                #define DEF_each_p2uOBdl5ae0
inline void each_p2uOBdl5(fu::view<s_ScopeItem> a, fu::view<char> id, fu::str& def, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
        _Q99Jyv0c(target_z0QqoZ5t(a[i]), id, def, outputs, _current_fn, _here, ctx, module, options);

}
                                #endif

static void declarePrimitive_i4S3ctpP(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str basePrim = primAnnotBase_i4S3ctpP(s.shape.basePrim, outputs, _here, ctx);
    fu::view<s_ScopeItem> members = s.items;
    fu::str def = ((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id);
    if ((s.kind != s_Kind_enum) || !members)
    {
        outputs._tfwd_src += (((("typedef "_fu + basePrim) + " "_fu) + id) + ";\n"_fu);
        each_9vGncHok(members, id, def, outputs, _current_fn, _here, ctx, module, options);
        if (s.kind == s_Kind_flags)
        {
            fu::str mask = ""_fu;
            each_VaUbEJnA(members, id, mask, ctx, module);
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
        each_p2uOBdl5(members, id, def, outputs, _current_fn, _here, ctx, module, options);
        def += "\n};"_fu;
    };
    def += "\n                                #endif\n"_fu;
    outputs._tdef_src += def;
}

                                #ifndef DEF_str_WkqQ7QhOMvg
                                #define DEF_str_WkqQ7QhOMvg
inline fu::str str_WkqQ7QhO(const s_Kind n)
{
    if (n == s_Kind_sof)
        return "sof"_fu;
    else if (n == s_Kind_err)
        return "err"_fu;
    else if (n == s_Kind_eof)
        return "eof"_fu;
    else if (n == s_Kind_id)
        return "id"_fu;
    else if (n == s_Kind_op)
        return "op"_fu;
    else if (n == s_Kind_int)
        return "int"_fu;
    else if (n == s_Kind_real)
        return "real"_fu;
    else if (n == s_Kind_char)
        return "char"_fu;
    else if (n == s_Kind_str)
        return "str"_fu;
    else if (n == s_Kind_bool)
        return "bool"_fu;
    else if (n == s_Kind_definit)
        return "definit"_fu;
    else if (n == s_Kind_empty)
        return "empty"_fu;
    else if (n == s_Kind_struct)
        return "struct"_fu;
    else if (n == s_Kind_union)
        return "union"_fu;
    else if (n == s_Kind_primitive)
        return "primitive"_fu;
    else if (n == s_Kind_flags)
        return "flags"_fu;
    else if (n == s_Kind_enum)
        return "enum"_fu;
    else if (n == s_Kind_fn)
        return "fn"_fu;
    else if (n == s_Kind_copy)
        return "copy"_fu;
    else if (n == s_Kind_move)
        return "move"_fu;
    else if (n == s_Kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_Kind_not)
        return "not"_fu;
    else if (n == s_Kind_call)
        return "call"_fu;
    else if (n == s_Kind_call_indir)
        return "call_indir"_fu;
    else if (n == s_Kind_argid)
        return "argid"_fu;
    else if (n == s_Kind_root)
        return "root"_fu;
    else if (n == s_Kind_block)
        return "block"_fu;
    else if (n == s_Kind_if)
    {
        return "if"_fu;
    }
    else if (n == s_Kind_or)
        return "or"_fu;
    else if (n == s_Kind_and)
        return "and"_fu;
    else if (n == s_Kind_loop)
        return "loop"_fu;
    else if (n == s_Kind_jump)
        return "jump"_fu;
    else if (n == s_Kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_Kind_defer)
        return "defer"_fu;
    else if (n == s_Kind_try)
        return "try"_fu;
    else if (n == s_Kind_let)
        return "let"_fu;
    else if (n == s_Kind_letdef)
        return "letdef"_fu;
    else if (n == s_Kind_typecast)
        return "typecast"_fu;
    else if (n == s_Kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_Kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_Kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_Kind_pragma)
        return "pragma"_fu;
    else if (n == s_Kind_break)
        return "break"_fu;
    else if (n == s_Kind_return)
        return "return"_fu;
    else if (n == s_Kind_continue)
        return "continue"_fu;
    else if (n == s_Kind_import)
        return "import"_fu;
    else if (n == s_Kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_Kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_Kind_members)
        return "members"_fu;
    else if (n == s_Kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_Kind_pattern)
        return "pattern"_fu;
    else if (n == s_Kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_Kind_typetag)
        return "typetag"_fu;
    else if (n == s_Kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_Kind___convert)
        return "__convert"_fu;
    else if (n == s_Kind___preceding_ref_arg)
        return "__preceding_ref_arg"_fu;
    else if (n == s_Kind___serialized_type)
        return "__serialized_type"_fu;
    else if (n == s_Kind___serialized_addrof_type_fn)
        return "__serialized_addrof_type_fn"_fu;
    else if (n == s_Kind___litfix_bound)
        return "__litfix_bound"_fu;
    else if (n == s_Kind___no_kind_yet)
        return "__no_kind_yet"_fu;
    else if (n == s_Kind___tombstone)
        return "__tombstone"_fu;
    else if (n == s_Kind_type)
        return "type"_fu;
    else if (n == s_Kind_var)
        return "var"_fu;
    else if (n == s_Kind_field)
        return "field"_fu;
    else if (n == s_Kind_enumv)
        return "enumv"_fu;
    else if (n == s_Kind_template)
        return "template"_fu;
    else if (n == s_Kind___native)
        return "__native"_fu;
    else if (n == s_Kind_inline)
        return "inline"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::str hex64_lower_i4S3ctpP(const uint64_t v)
{
    /*MOV*/ fu::str str = ""_fu;
    for (int i = 0; i < 16; i++)
    {
        const uint64_t c = ((v >> (uint64_t(unsigned(i)) * 4ull)) & 0xfull);
        str += char(((c < 10ull) ? (uint64_t(fu::u8('0')) + c) : ((uint64_t(fu::u8('a')) + c) - 10ull)));
    };
    return /*NRVO*/ str;
}

                                #ifndef DEF_x21x3D_ExVC00HnUgl
                                #define DEF_x21x3D_ExVC00HnUgl
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

                                #ifndef DEF___P0tTQWTtF61
                                #define DEF___P0tTQWTtF61
inline static bool _P0tTQWTt(const s_StructDecl& a, const s_StructDecl& b)
{
    return (a.declDepth < b.declDepth) || ((a.declDepth == b.declDepth) ? (x3Cx3E_bv5nK4Kl(a.def, b.def) < 0) : false);
}
                                #endif

static void sort_i4S3ctpP(fu::vec<s_StructDecl>& a)
{
    s_StructDecl l {};
    s_StructDecl r {};
    (void) l;
    (void) r;
    auto* data = a.data_mut();
    std::sort(data, data + a.size(), [&](auto& l, auto& r)
    {;
    bool lt = _P0tTQWTt(l, r);
    return lt;
            });

}

                                #ifndef DEF_sort_KveMe5sb6d2
                                #define DEF_sort_KveMe5sb6d2
inline void sort_KveMe5sb(fu::vec<s_StructDecl>& a)
{
    sort_i4S3ctpP(a);
}
                                #endif

static void declareStruct_i4S3ctpP(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (s.shape.basePrim)
        declarePrimitive_i4S3ctpP(id, s, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        const int tdef_stack0 = outputs._tdef_stack.size();
        outputs._tdef_stack += s_StructDecl{};
        fu::str header = (x7E_3lDd4lqo(str_WkqQ7QhO(s.kind), " "_fu) + id);
        outputs._tfwd_src += (header + ";\n"_fu);
        const s_Type& t = GET_i4S3ctpP(s.target, ctx, module).type;
        fu::str dedupe = ((s.name + "_"_fu) + digest62_lweHUmk8(uint64_t(s.shape.hash), 0));
        /*MOV*/ fu::str def = (((((("\n                                #ifndef DEF_"_fu + dedupe) + "\n                                #define DEF_"_fu) + dedupe) + "\n"_fu) + header) + "\n{"_fu);
        if (options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)
            def += ((("\n                                // shape_hash:    "_fu + hex64_lower_i4S3ctpP(s.shape.hash)) + "\n                                // non_triv_mask: "_fu) + hex64_lower_i4S3ctpP(s.shape.non_triv_mask));

        fu::str indent = "\n    "_fu;
        fu::str xOpBool = ""_fu;
        fu::view<s_ScopeItem> fields = s.items;
        for (int i = 0; i < fields.size(); i++)
        {
            const s_Overload& field = GET_i4S3ctpP(target_z0QqoZ5t(fields[i]), ctx, module);
            if (field.kind == s_Kind_field)
            {
                fu::str annot = typeAnnot_i4S3ctpP(field.type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
                if (annot != "void"_fu)
                {
                    fu::str id_1 = ID_vRqJr3WR(field.name);
                    def += ((((indent + annot) + " "_fu) + id_1) + ";"_fu);
                    if (field.flags & s_Flags_F_PREDICATE)
                        xOpBool += ("\n            || "_fu + id_1);

                };
            }
            else
                BUG_i4S3ctpP(((x7E_3lDd4lqo((("Non-field struct item: "_fu + field.name) + " ("_fu), str_WkqQ7QhO(field.kind)) + ") in "_fu) + t.vtype.canon), _here, ctx);

        };
        if (!is_rx_copy_9CJmuVSD(t.vtype))
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
        }
        else if (GET_i4S3ctpP(s.target, ctx, module).status & s_SolverStatus_SS_TYPE_RECUR)
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
            sort_KveMe5sb(outputs._tdef_stack);
            for (int i_1 = 0; i_1 < outputs._tdef_stack.size(); i_1++)
                outputs._tdef_src += outputs._tdef_stack[i_1].def;

            outputs._tdef_stack.clear();
        };
    };
}

static fu::str typeAnnotBase_i4S3ctpP(const s_Type& type, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_hxWWgdZ1(type.vtype) && ((c.size() < 4) || ((c.size() == 4) && (fu::get_view(c, 1, 4) == "128"_fu))))
        return primAnnotBase_i4S3ctpP(c, outputs, _here, ctx);
    else if (c == "never"_fu)
        return annotateNever_i4S3ctpP(outputs);
    else if (isIrrelevant_9CJmuVSD(type))
        return annotateZST_i4S3ctpP();
    else
    {
        s_Type arrayItem = tryClear_sliceable_1qjplDUo(type.vtype, _here, ctx, module);
        if (arrayItem)
        {
            if (isIrrelevant_9CJmuVSD(arrayItem))
                BUG_i4S3ctpP("cg: We generate invalid c++ for void[]"_fu, _here, ctx);
            else if (ifArray_annotateAsVec_i4S3ctpP(type) || (mode & s_Mode_M_IGNORE_REFERENCE))
            {
                if (arrayItem == t_byte)
                    return annotateString_i4S3ctpP(outputs);
                else
                {
                    fu::str itemAnnot = typeAnnot_i4S3ctpP(arrayItem, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
                    include_i4S3ctpP("<fu/vec.h>"_fu, outputs);
                    return ("fu::vec<"_fu + itemAnnot) + ">"_fu;
                };
            }
            else
            {
                fu::str itemAnnot = typeAnnot_i4S3ctpP(arrayItem, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
                if (is_ref_9CJmuVSD(type))
                {
                    if (ifArrayRef_annotateAsVecRange_i4S3ctpP(type))
                    {
                        include_i4S3ctpP("<fu/vec_range.h>"_fu, outputs);
                        if (is_mutref_9CJmuVSD(type, _here, ctx) || (mode & s_Mode_M_MUTVAR))
                            return ("fu::vec_range_mut<"_fu + itemAnnot) + ">"_fu;
                        else
                            return ("fu::vec_range<"_fu + itemAnnot) + ">"_fu;

                    }
                    else if (ifArrayRef_annotateAsSlice_i4S3ctpP(type))
                    {
                        include_i4S3ctpP("<fu/view.h>"_fu, outputs);
                        if (is_mutref_9CJmuVSD(type, _here, ctx) || (mode & s_Mode_M_MUTVAR))
                            return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
                        else
                            return ("fu::view<"_fu + itemAnnot) + ">"_fu;

                    }
                    else
                    {
                        BUG_i4S3ctpP("!ifArrayRef_annotateAsSlice"_fu, _here, ctx);
                    };
                }
                else
                {
                    BUG_i4S3ctpP("!type.ifArray_annotateAsVec but !ref"_fu, _here, ctx);
                };
            };
        }
        else
        {
            const s_Struct& s = lookupUserType_SqDqFcFw(type.vtype, _here, ctx, module);
            /*MOV*/ fu::str id = structID_i4S3ctpP(s, ctx, module);
            const s_StructCanon scp = parseStructCanon_p1TNFlvR(type.vtype.canon);
            if (add_zi3DZWwE(outputs._tfwd, scp))
                declareStruct_i4S3ctpP(id, s, outputs, _current_fn, _here, ctx, module, options);

            return /*NRVO*/ id;
        };
    };
}

static fu::str typeAnnot_i4S3ctpP(const s_Type& type, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::str fwd = typeAnnotBase_i4S3ctpP(type, mode, outputs, _current_fn, _here, ctx, module, options);
    if (is_ref_9CJmuVSD(type))
    {
        if (mode & s_Mode_M_STATIC_REF)
        {
            include_i4S3ctpP("<fu/static_ref.h>"_fu, outputs);
            return ("fu::static_ref<"_fu + fwd) + ">"_fu;
        }
        else if ((is_sliceable_hxWWgdZ1(type.vtype) && !ifArrayRef_annotateAsVec_i4S3ctpP(type)) || (fwd == "void"_fu))
            return /*NRVO*/ fwd;
        else if (is_mutref_9CJmuVSD(type, _here, ctx))
            return fwd + "&"_fu;
        else if (isPassByValue_hxWWgdZ1(type.vtype))
        {
            if (((mode & s_Mode_M_ARGUMENT) | (mode & s_Mode_M_CONST)) && !(mode & s_Mode_M_FWDECL))
                return "const "_fu + fwd;
            else
                return /*NRVO*/ fwd;

        }
        else if ((mode & s_Mode_M_MOVABLE) && !is_trivial_1qjplDUo(type.vtype, _here, ctx, module))
            return fwd + "&"_fu;
        else
            return ("const "_fu + fwd) + "&"_fu;

    }
    else if ((mode & s_Mode_M_ARGUMENT) && !isPassByValue_hxWWgdZ1(type.vtype))
        return fwd + "&&"_fu;
    else if ((mode & s_Mode_M_CONST) && is_trivial_1qjplDUo(type.vtype, _here, ctx, module))
        return "const "_fu + fwd;
    else
        return /*NRVO*/ fwd;

}

static s_PointerFlip PointerFlip_cqSTVt8D(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!is_ref_9CJmuVSD(type) || (isPassByValue_hxWWgdZ1(type.vtype) && !is_mutref_9CJmuVSD(type, _here, ctx)))
        return s_PointerFlip_None;
    else if (!is_sliceable_hxWWgdZ1(type.vtype) || ifArrayRef_annotateAsVec_i4S3ctpP(type))
        return s_PointerFlip_RawPointer;
    else
        return s_PointerFlip_VecRangeOrView;

}

                                #ifndef DEF_str_FSJWvyyW8Q1
                                #define DEF_str_FSJWvyyW8Q1
inline fu::str str_FSJWvyyW(const s_PointerFlip n)
{
    if (n == s_PointerFlip_None)
        return "None"_fu;
    else if (n == s_PointerFlip_VecRangeOrView)
        return "VecRangeOrView"_fu;
    else if (n == s_PointerFlip_RawPointer)
        return "RawPointer"_fu;

    return fu::i64dec(int64_t(n));
}
                                #endif

static fu::str TEMPVAR_declare_i4S3ctpP(const s_Type& type, s_PointerFlip& ptr_flip, fu::str& annot, const s_Mode mode, const fu::str& id, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    annot = typeAnnot_i4S3ctpP(type, mode, outputs, _current_fn, _here, ctx, module, options);
    ptr_flip = PointerFlip_cqSTVt8D(type, _here, ctx);
    /*MOV*/ fu::str id_1 = (id ? fu::str(id) : x7E_3lDd4lqo("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += ((ptr_flip == s_PointerFlip_RawPointer) ? ((fu::get_view_start0(annot, (annot.size() - 1)) + "* "_fu) + id_1) : (is_trivial_1qjplDUo(type.vtype, _here, ctx, module) ? ((annot + " "_fu) + id_1) : (((annot + " "_fu) + id_1) + " {}"_fu)));
    if (annot == "int"_fu)
    {
        if (!(ptr_flip == s_PointerFlip_None))
            BUG_i4S3ctpP(x7E_3lDd4lqo("TEMPVAR_declare: int."_fu, str_FSJWvyyW(ptr_flip)), _here, ctx);

    };
    return /*NRVO*/ id_1;
}

static fu::str TEMPVAR_init_i4S3ctpP(fu::view<char> id, const s_PointerFlip ptr_flip, fu::view<char> init, const bool immediate)
{
    if (immediate && (ptr_flip != s_PointerFlip_VecRangeOrView))
        return (((ptr_flip == s_PointerFlip_RawPointer) ? "(*("_fu : "("_fu) + TEMPVAR_init_i4S3ctpP(id, ptr_flip, init, false)) + ((ptr_flip == s_PointerFlip_RawPointer) ? "))"_fu : ")"_fu);
    else if (ptr_flip == s_PointerFlip_RawPointer)
    {
        return (id + " = &"_fu) + (init ? (("("_fu + init) + ")"_fu) : fu::str{});
    }
    else if (ptr_flip == s_PointerFlip_VecRangeOrView)
    {
        return (id + ".ptr_reassign"_fu) + (init ? (("("_fu + init) + ")"_fu) : fu::str{});
    }
    else
        return (id + " = "_fu) + init;

}

static fu::str cgCopy_i4S3ctpP(const s_Type& type, const fu::str& src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isPassByValue_hxWWgdZ1(type.vtype))
        return fu::str(src);
    else
        return ((typeAnnotBase_i4S3ctpP(type, s_Mode_M_IGNORE_REFERENCE, outputs, _current_fn, _here, ctx, module, options) + "("_fu) + src) + ")"_fu;

}

static s_Target nested_i4S3ctpP(const int locid, const s_cg_CurrentFn& _current_fn)
{
    if (locid)
    {
        int BL_2_v {};
        int BL_3_v {};
        return Target_xQNS19Zn((__extension__ (
        {
            const s_Target& t = _current_fn.target;
            BL_2_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
        (void)0;}), BL_2_v), (__extension__ (
        {
            const s_Target& t = _current_fn.target;
            BL_3_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_3_v), locid);
    }
    else
    {
        return s_Target{};
    };
}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static bool hasZeroes_i4S3ctpP(const s_Lifetime& lifetime, const s_cg_CurrentFn& _current_fn, const s_Context& ctx, const s_Module& module)
{

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
            const bool isStatic = ((r & 11u) == 1u);
            const bool isAlwaysMoveable = ((r == 0b0101u) || (r == 0b1001u));
            int BL_11_v {};
            const int locid = ((r & 1u) ? 0 : (__extension__ (
            {
                const unsigned v = (r >> 1u);
                BL_11_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
            (void)0;}), BL_11_v));
            if (isStatic && isAlwaysMoveable)
                return true;
            else if (locid && !(locid < 0))
            {
                const s_SolvedNode& n = GET_i4S3ctpP(nested_i4S3ctpP(locid, _current_fn), ctx, module).solved;
                if (is_ref_9CJmuVSD(n.type) && hasZeroes_i4S3ctpP(n.items[LET_INIT].type.lifetime, _current_fn, ctx, module))
                    return true;

            };
        };
    };
    return false;
}

static fu::str cgMoveOrDefault_i4S3ctpP(fu::view<char> src, s_Outputs& outputs)
{
    include_i4S3ctpP("<fu/move_or_default.h>"_fu, outputs);
    return ("fu::move_or_default("_fu + src) + ")"_fu;
}

static fu::str cgMove_i4S3ctpP(const s_Type& type, const fu::str& src, const bool notRefOK, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (!(notRefOK || is_ref_9CJmuVSD(type)))
        BUG_i4S3ctpP("cgMove: Not a reference."_fu, _here, ctx);
    else if (isPassByValue_hxWWgdZ1(type.vtype))
        return cgCopy_i4S3ctpP(type, src, outputs, _current_fn, _here, ctx, module, options);
    else if (is_ref_9CJmuVSD(type) && is_sliceable_hxWWgdZ1(type.vtype) && !ifArrayRef_annotateAsVec_i4S3ctpP(type))
        BUG_i4S3ctpP("cgMove: About to use the wrong move for a slice or vec-range."_fu, _here, ctx);
    else if (hasZeroes_i4S3ctpP(type.lifetime, _current_fn, ctx, module))
        return cgMoveOrDefault_i4S3ctpP(src, outputs);
    else
        return ((("static_cast<"_fu + typeAnnotBase_i4S3ctpP(type, s_Mode_M_IGNORE_REFERENCE, outputs, _current_fn, _here, ctx, module, options)) + "&&>("_fu) + src) + ")"_fu;

}

static fu::str TEMPVAR_consume_i4S3ctpP(const fu::str& id, const s_Type& type, const s_PointerFlip ptr_flip, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (ptr_flip == s_PointerFlip_None)
        return cgMove_i4S3ctpP(type, id, true, outputs, _current_fn, _here, ctx, module, options);
    else if (ptr_flip == s_PointerFlip_RawPointer)
        return "*"_fu + id;
    else
        return fu::str(id);

}

                                #ifndef DEF___m1U5ONZhbib
                                #define DEF___m1U5ONZhbib
inline static void _m1U5ONZh(const int i, const s_Argument& host_arg, const int seqIdx, const s_Extended& ext, const s_Overload& target, fu::view<s_SolvedNode> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::view_mut<fu::str> item_src, const bool RTL, fu::view<s_Argument> host_args, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& arg = args[i];
    const s_SolvedNode& arg_1 = ((isSimpleCpyMovAssign && (i == 1) && isAbbreviatedCopy_i4S3ctpP(arg, true)) ? only_LqU08rcL(arg.items) : arg);
    bool junk = false;
    const bool mustDiscard = isIrrelevant_9CJmuVSD(arg_1.type);
    if (mustDiscard)
        junk = ((arg_1.kind == s_Kind_empty) || ((arg_1.kind == s_Kind_call) ? ((GET_i4S3ctpP(arg_1.target, ctx, module).kind == s_Kind_var) || ((GET_i4S3ctpP(arg_1.target, ctx, module).kind == s_Kind_type) ? !arg_1.items : false) || (GET_i4S3ctpP(arg_1.target, ctx, module).kind == s_Kind_enumv)) : false));
    else if (is_never_9CJmuVSD(arg_1.type.vtype))
        BUG_i4S3ctpP("cgCall: arg.is_never"_fu, _here, ctx);

    const int MUSTSEQ_bit = (1 << (i & 31));
    const int mustSeq_useTemporary = (MUSTSEQ_mask & MUSTSEQ_bit);
    fu::str _0 {};
    /*MOV*/ fu::str src = (junk ? ""_fu : ((_0 = cgNode_i4S3ctpP(arg_1, (isNative ? s_Mode_M_ARG_TO_NATIVE : s_Mode{}), (!mustSeq_useTemporary ? host_arg.type : (*(const s_Type*)fu::NIL)), outputs, _current_fn, _here, ctx, module, options)) ? static_cast<fu::str&&>(_0) : BUG_i4S3ctpP("Empty arg src."_fu, _here, ctx)));
    if (mustDiscard && src)
    {
        ooe_crosscheck |= MUSTSEQ_bit;
        if (ooe_header)
            ooe_header += ", "_fu;

        ooe_header += "(void) "_fu;
        ooe_header += src;
        src = ""_fu;
    };
    if (mustDiscard && (target.kind == s_Kind_type) && !is_zst_1qjplDUo(arg_1.type.vtype, _here, ctx, module))
    {
        src = "{/*unused non-zst*/}"_fu;
    };
    if (mustSeq_useTemporary)
    {
        if (junk)
            BUG_i4S3ctpP("Trying to MUSTSEQ a discarded argument, shouldnt happen."_fu, _here, ctx);
        else
        {
            ooe_crosscheck |= MUSTSEQ_bit;
            if (isPointlessMustSeq_i4S3ctpP(arg_1, ext.args[i], ctx, module) || (((MUSTSEQ_mask & ~MUSTSEQ_bit) < MUSTSEQ_mask) && rest_isPointlessMustSeq_i4S3ctpP(seqIdx, args, RTL, host_args, _here, ctx, module)))
                noteDefect_i4S3ctpP(s_CGDefects_PointlessMustSeq, outputs, _here, ctx, options);
            else
            {
                if (ooe_header)
                    ooe_header += ", "_fu;

                s_PointerFlip ptr_flip {};
                fu::str annot {};
                fu::str id = TEMPVAR_declare_i4S3ctpP(arg_1.type, ptr_flip, annot, s_Mode{}, (*(const fu::str*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
                ooe_header += TEMPVAR_init_i4S3ctpP(id, ptr_flip, src, false);
                src = TEMPVAR_consume_i4S3ctpP(id, arg_1.type, ptr_flip, outputs, _current_fn, _here, ctx, module, options);
            };
        };
    };
    item_src.mutref(i) = static_cast<fu::str&&>(src);
}
                                #endif

                                #ifndef DEF_argsForward_VUHdzx8pTi9
                                #define DEF_argsForward_VUHdzx8pTi9
inline void argsForward_VUHdzx8p(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, const s_Extended& ext, const s_Overload& target, fu::view<s_SolvedNode> args, const bool isNative, const bool isSimpleCpyMovAssign, const int MUSTSEQ_mask, int& ooe_crosscheck, fu::str& ooe_header, fu::view_mut<fu::str> item_src, const bool RTL_1, fu::view<s_Argument> host_args_1, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_9CJmuVSD(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    _m1U5ONZh(i, host_arg, seqIdx, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL_1, host_args_1, outputs, _current_fn, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

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

static const fu::str& ARG_cqSTVt8D(const int i, fu::view<fu::str> item_src)
{
    return item_src[i];
}

static fu::str REST_i4S3ctpP(const int start, fu::view<fu::str> item_src)
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

static fu::str ooeWrap_i4S3ctpP(const fu::str& src, fu::view<char> ooe_header)
{
    if (ooe_header)
        return ((("("_fu + ooe_header) + ", "_fu) + src) + ")"_fu;
    else
        return fu::str(src);

}

static fu::str emitMethodCall_i4S3ctpP(fu::view<char> id, fu::view<char> ooe_header, fu::view<fu::str> item_src)
{
    return ooeWrap_i4S3ctpP(((((ARG_cqSTVt8D(0, item_src) + id) + "("_fu) + REST_i4S3ctpP(1, item_src)) + ")"_fu), ooe_header);
}

static bool affectedByIntegerPromotions_i4S3ctpP(const s_Type& type)
{
    if (is_ref_9CJmuVSD(type) || !is_bitfield_hxWWgdZ1(type.vtype) || isIrrelevant_9CJmuVSD(type))
        return false;
    else
    {
        fu::view<char> c = type.vtype.canon;
        return ((c.size() >= 2) && (c[1] == '8')) || ((c.size() >= 3) && (fu::get_view(c, 1, 3) == "16"_fu));
    };
}

static fu::str unpromote_i4S3ctpP(const fu::str& expr, const s_SolvedNode& node, const bool isNative, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isNative && affectedByIntegerPromotions_i4S3ctpP(node.type))
    {
        return ((typeAnnotBase_i4S3ctpP(node.type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options) + "("_fu) + expr) + ")"_fu;
    }
    else
        return fu::str(expr);

}

static fu::str emitPostfixOp_i4S3ctpP(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view<fu::str> item_src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return unpromote_i4S3ctpP((ARG_cqSTVt8D(0, item_src) + op), node, isNative, outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF_only_iL7PcytqrGd
                                #define DEF_only_iL7PcytqrGd
inline const fu::str& only_iL7Pcytq(fu::view<fu::str> s)
{
    fu_ASSERT((s.size() == 1));
    return s[0];
}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu::str emitBuiltin_i4S3ctpP(fu::view<char> id, fu::view<fu::str> args, const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = node.type;
        const s_Type& input = only_LqU08rcL(node.items).type;
        fu::str cast = typeAnnotBase_i4S3ctpP(output, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
        if (is_integral_hxWWgdZ1(input.vtype) && is_integral_hxWWgdZ1(output.vtype) && (is_unsigned_hxWWgdZ1(input.vtype) != is_unsigned_hxWWgdZ1(output.vtype)))
        {
            s_Type mid_t { (is_unsigned_hxWWgdZ1(input.vtype) ? output : input) };
            if (mid_t.vtype.canon[0] == 'i')
            {
                mid_t.vtype.canon.mutref(0) = 'u';
                if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
                {
                    fu::str inner = typeAnnotBase_i4S3ctpP(mid_t, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
                    return ((((cast + '(') + inner) + '(') + only_iL7Pcytq(args)) + "))"_fu;
                };
            }
            else
                BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx);

        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu::str inner = typeAnnotBase_i4S3ctpP(t_u8, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
            return ((((cast + '(') + inner) + '(') + only_iL7Pcytq(args)) + "))"_fu;
        };
        return ((cast + '(') + only_iL7Pcytq(args)) + ')';
    }
    else
        BUG_i4S3ctpP(("Unknown builtin: "_fu + id), _here, ctx);

}

                                #ifndef DEF_find_5WUbOXwWxRb
                                #define DEF_find_5WUbOXwWxRb
inline int find_5WUbOXwW(fu::view<char> haystack, fu::view<char> needle)
{
    if ((haystack.size() < needle.size()) || (needle.size() <= 0))
    {
        if (needle.size())
            return -1;
        else
            return 0;

    }
    else if (needle.size() == 1)
        return find_yP7FbxFZ(haystack, needle[0]);
    else
    {
        const int needle_len_m1 = (needle.size() - 1);
        const char needle_last_char = needle[needle_len_m1];
        int skip = 0;
        for (int i = needle_len_m1; i < haystack.size(); )
        {
            while (haystack[i] != needle_last_char)
            {
                if (++i == haystack.size())
                    return -1;

            };
            for (int j = 0; ; )
            {
                if (haystack[((i - needle_len_m1) + j)] != needle[j])
                {
                    if (!skip)
                    {
                        skip = needle.size();
                        for (int j_1 = needle_len_m1; j_1-- > 0; )
                        {
                            if (needle[j_1] == needle_last_char)
                            {
                                skip = (needle_len_m1 - j_1);
                                break;
                            };
                        };
                    };
                    i += skip;
                    break;
                }
                else if (++j == needle_len_m1)
                    return i - needle_len_m1;

            };
        };
        return -1;
    };
}
                                #endif

                                #ifndef DEF_q_USAGE
                                #define DEF_q_USAGE
extern const unsigned q_USAGE;
                                #endif

                                #ifndef DEF___CUqYpNSRzJ6
                                #define DEF___CUqYpNSRzJ6
inline static void _CUqYpNSR(const int i, const s_Argument& host_arg, fu::str& angle_brackets, fu::view<s_Argument> host_args, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_9CJmuVSD(host_arg.type))
    {
        if (angle_brackets)
            angle_brackets += ", "_fu;

        s_Type slot { host_args[i].type };
        slot.vtype.quals |= q_USAGE;
        angle_brackets += typeAnnotBase_i4S3ctpP(slot, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
    };
}
                                #endif

                                #ifndef DEF_argsForward_wxnBK44tkt0
                                #define DEF_argsForward_wxnBK44tkt0
inline void argsForward_wxnBK44t(const bool RTL, fu::view<s_Argument> host_args, const int seqIdx_start, fu::str& angle_brackets, fu::view<s_Argument> host_args_1, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int seqIdx = 0;
    int lastPass = 1;
    for (int pass = 0; pass < lastPass; pass++)
    {
        for (int i = 0; i < host_args.size(); i++)
        {
            const s_Argument& host_arg = host_args[i];
            if (!!pass != (RTL ? !i : !!((host_arg.flags & s_Flags_F_IMPLICIT) || is_mutref_9CJmuVSD(host_arg.type, _here, ctx))))
                lastPass = 2;
            else
            {
                if ((seqIdx_start <= seqIdx))
                    _CUqYpNSR(i, host_arg, angle_brackets, host_args_1, outputs, _current_fn, _here, ctx, module, options);

                seqIdx++;
            };
        };
    };
}
                                #endif

                                #ifndef DEF_ends_AbHOxjqnKH3
                                #define DEF_ends_AbHOxjqnKH3
inline bool ends_AbHOxjqn(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

static fu::str emitFunctionCall_i4S3ctpP(/*MOV*/ fu::str&& id, fu::view<char> open, fu::view<char> close, fu::view<char> ooe_header, fu::view<fu::str> item_src, const bool RTL, fu::view<s_Argument> host_args, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const int tEmplate = find_5WUbOXwW(id, "<>"_fu);
    if (tEmplate > 0)
    {
        fu::str angle_brackets = ""_fu;
        argsForward_wxnBK44t(RTL, host_args, 0, angle_brackets, host_args, outputs, _current_fn, _here, ctx, module, options);
        id = ((((fu::get_view_start0(id, tEmplate) + '<') + angle_brackets) + '>') + fu::get_view(id, (tEmplate + 2)));
    };
    fu::str args = ((open + REST_i4S3ctpP(0, item_src)) + close);
    if ((args == "()"_fu) && ends_AbHOxjqn(id, ')'))
        return static_cast<fu::str&&>(id);
    else
        return ooeWrap_i4S3ctpP((id + args), ooe_header);

}

                                #ifndef DEF_last_Opodn9l24A5
                                #define DEF_last_Opodn9l24A5
inline char last_Opodn9l2(fu::view<char> s)
{
    return s[(s.size() - 1)];
}
                                #endif

static bool binSkipParens_i4S3ctpP(fu::view<char> id, const s_Mode mode)
{
    if (mode & s_Mode_M_STMT)
        return true;
    else if (mode & s_Mode_M_PARENS)
    {
        if (last_Opodn9l2(id) == '=')
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

static fu::str emitBinaryOp_i4S3ctpP(fu::view<char> op, const s_SolvedNode& node, const s_Mode mode, fu::view<s_SolvedNode> args, const bool isNative, fu::view<char> ooe_header, fu::view<fu::str> item_src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (args.size() == 2)
    {
        if (binSkipParens_i4S3ctpP(op, mode) && !ooe_header)
            return (((ARG_cqSTVt8D(0, item_src) + " "_fu) + op) + " "_fu) + ARG_cqSTVt8D(1, item_src);
        else
        {
            fu::str _0 {};
            return (_0 = unpromote_i4S3ctpP((((((("("_fu + ARG_cqSTVt8D(0, item_src)) + " "_fu) + op) + " "_fu) + ARG_cqSTVt8D(1, item_src)) + ")"_fu), node, isNative, outputs, _current_fn, _here, ctx, module, options), ooeWrap_i4S3ctpP(static_cast<fu::str&&>(_0), ooe_header));
        };
    }
    else
        BUG_i4S3ctpP("args.len != 2"_fu, _here, ctx);

}

static bool isInlLinked_i4S3ctpP(const s_Overload& overload)
{
    return !!(overload.flags & s_Flags_F_TEMPLATE);
}

                                #ifndef DEF_x3Cx3E_ZAz3Jw6Ldo7
                                #define DEF_x3Cx3E_ZAz3Jw6Ldo7
inline int x3Cx3E_ZAz3Jw6L(const uint64_t a, const uint64_t b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_B3HLYN6fNTl
                                #define DEF_x3Cx3E_B3HLYN6fNTl
inline int x3Cx3E_B3HLYN6f(const s_Target& a, const s_Target& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_ZAz3Jw6L(a._packed, b._packed)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_add_eAAgIA81n52
                                #define DEF_add_eAAgIA81n52
inline bool add_eAAgIA81(s_Set_aQNJhbMknMf& _, const s_Target& key)
{
    fu::view<s_Target> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_B3HLYN6f(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, s_Target(key));
    return true;
}
                                #endif

static bool isExtLinked_i4S3ctpP(const s_Overload& overload)
{
    return s_SolverStatus((overload.status & s_SolverStatus_SS_EXTERNAL_LINKAGE)) || ((overload.flags & s_Flags_F_TEMPLATE) && (overload.flags & s_Flags_F_PUB));
}

static fu::str fnLinkage_i4S3ctpP(const s_Overload& overload)
{
    return ((is_never_9CJmuVSD(overload.type.vtype) ? "[[noreturn]] "_fu : fu::str{}) + (isInlLinked_i4S3ctpP(overload) ? "inline "_fu : fu::str{})) + (!isExtLinked_i4S3ctpP(overload) ? "static "_fu : fu::str{});
}

static bool isOp_i4S3ctpP(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    const s_Flags flags = GET_i4S3ctpP(target, ctx, module).flags;
    if (!(flags & s_Flags_F_OPERATOR))
        return false;
    else if (GET_i4S3ctpP(target, ctx, module).kind == s_Kind___native)
        return true;
    else
    {
        int numArgs {};
        bool primsOnly = true;
        fu::view<s_Argument> args = EXT_i4S3ctpP(target, ctx, module).args;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& argType = args[i].type;
            if (!isIrrelevant_9CJmuVSD(argType))
            {
                numArgs++;
                if (!is_primitive_hxWWgdZ1(argType.vtype))
                    primsOnly = false;

            };
        };
        if (!numArgs || (numArgs > 2) || primsOnly)
            return false;
        else
        {
            fu::view<char> name = GET_i4S3ctpP(target, ctx, module).name;
            if (numArgs > 1)
                return hasBinary_vRqJr3WR(name);
            else
                return hasUnary_vRqJr3WR(name);

        };
    };
}

static fu::str valid_operator_i4S3ctpP(const fu::str& str)
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

static char hex_i4S3ctpP(const unsigned x)
{
    if (x < 10u)
        return char((unsigned(fu::u8('0')) + x));
    else
        return char((unsigned(fu::u8('A')) + (x - 10u)));

}

static fu::str xHH_i4S3ctpP(const unsigned c)
{
    return ("x"_fu + hex_i4S3ctpP(((c >> 4u) & 0xfu))) + hex_i4S3ctpP(((c >> 0u) & 0xfu));
}

static fu::str valid_identifier_i4S3ctpP(fu::str&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (!(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_')))
            str = ((fu::get_view_start0(str, i) + xHH_i4S3ctpP(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1)));

    };
    return ID_vRqJr3WR(str);
}

static fu::str fnID_i4S3ctpP(const s_Target& target, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Overload& overload = GET_i4S3ctpP(target, ctx, module);
    const fu::str& id = (overload.name ? overload.name : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx));
    if (isOp_i4S3ctpP(target, ctx, module))
        return "operator"_fu + valid_operator_i4S3ctpP(id);
    else
    {
        /*MOV*/ fu::str ret = valid_identifier_i4S3ctpP(fu::str(id));
        if (EXT_i4S3ctpP(target, ctx, module).sighash && !(GET_i4S3ctpP(target, ctx, module).flags & s_Flags_F_EXTERN))
        {
            uint64_t BL_4_v {};
            ((ret == "_"_fu) ? ret : (ret += "_"_fu)) += digest62_lweHUmk8((__extension__ (
            {
                const s_TEA& tea = EXT_i4S3ctpP(target, ctx, module).sighash;
                BL_4_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
            (void)0;}), BL_4_v), SIGHASH_CHARS);
        };
        return /*NRVO*/ ret;
    };
}

static fu::str cgFnPrototype_i4S3ctpP(const s_Target& target, const bool fnptr, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu::vec<fu::str>{}, fu::vec<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<int>{}, s_BitSet{}, s_BitSet{}, fu::vec<int>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    /*MOV*/ fu::str src = ""_fu;
    const s_Overload& overload = GET_i4S3ctpP(target, ctx, module);
    if (!fnptr)
    {
        fu::str linkage = fnLinkage_i4S3ctpP(overload);
        src += linkage;
        if ((int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid) && !isExtLinked_i4S3ctpP(overload) && !isInlLinked_i4S3ctpP(overload))
            BUG_i4S3ctpP("cgFnPrototype: !isExtLinked but off-module"_fu, _here, ctx);

    };

    {
        const s_Type& ret = (overload.type ? overload.type : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx));
        fu::str annot = typeAnnot_i4S3ctpP(ret, s_Mode_M_RETVAL, outputs, _current_fn, _here, ctx, module, options);
        src += (annot + " "_fu);
    };

    {
        /*MOV*/ fu::str name = fnID_i4S3ctpP(target, _here, ctx, module);
        src += (fnptr ? (("(*"_fu + name) + ")"_fu) : static_cast<fu::str&&>(name));
    };

    {
        src += "("_fu;
        fu::view<s_Argument> args = EXT_i4S3ctpP(target, ctx, module).args;
        bool first = true;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& arg = args[i].type;
            if (!(isIrrelevant_9CJmuVSD(arg)))
            {
                if (first)
                    first = false;
                else
                    src += ", "_fu;

                src += typeAnnot_i4S3ctpP(arg, (s_Mode_M_ARGUMENT | s_Mode_M_FWDECL), outputs, _current_fn, _here, ctx, module, options);
            };
        };
        if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_vRqJr3WR(overload.name))
            src += ", /*postfix*/int"_fu;

        src += ")"_fu;
    };
    return /*NRVO*/ src;
}

static void ensureFwdDecl_i4S3ctpP(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& overload = GET_i4S3ctpP(target, ctx, module);
    if (!((overload.kind != s_Kind_fn) || (overload.name == "main"_fu)))
    {
        if (!(!add_eAAgIA81(outputs._ffwd, target)))
        {
            fu::str fwdDecl = (cgFnPrototype_i4S3ctpP(target, false, outputs, _current_fn, _here, ctx, module, options) + ";\n"_fu);
            if (overload.flags & s_Flags_F_HOTSWAP)
            {
                fu::str fnPtr = (("extern "_fu + cgFnPrototype_i4S3ctpP(target, true, outputs, _current_fn, _here, ctx, module, options)) + ";\n"_fu);
                outputs._ifdef_hotswap += fnPtr;
                outputs._ifndef_hotswap += fwdDecl;
            }
            else
                outputs._ffwd_src += fwdDecl;

        };
    };
}

                                #ifndef DEF_has_woYDJ4WPpN0
                                #define DEF_has_woYDJ4WPpN0
inline bool has_woYDJ4WP(const s_Set_aQNJhbMknMf& _, const s_Target& key)
{
    fu::view<s_Target> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_B3HLYN6f(keys_asc[i], key);
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

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_bfind_i5SCsmCtWgi
                                #define DEF_bfind_i5SCsmCtWgi
inline static int bfind_i5SCsmCt(fu::view<fu::str> keys_asc, fu::view<char> key, s_Set_6ARmtH0K78f& _, const fu::str& key_1, fu::vec<s_Target>& values)
{
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
            return i;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    values.insert(i, s_Target{});
    _.keys_asc.insert(i, fu::str(key_1));
    return i;
}
                                #endif

                                #ifndef DEF_ref_Pj5EznQtl84
                                #define DEF_ref_Pj5EznQtl84
inline s_Target& ref_Pj5EznQt(s_Set_6ARmtH0K78f& _, const fu::str& key, fu::vec<s_Target>& values)
{
    const int idx = bfind_i5SCsmCt(_.keys_asc, key, _, key, values);
    return values.mutref(idx);
}
                                #endif

                                #ifndef DEF_ref_ZEhRUdG2Qoj
                                #define DEF_ref_ZEhRUdG2Qoj
inline s_Target& ref_ZEhRUdG2(s_Map_CIvvfLLMMzl& _, const fu::str& key)
{
    return ref_Pj5EznQt(_.keys, key, _.vals);
}
                                #endif

static bool TODO_FIX_seenFns_dedupeAlreadyUsable_i4S3ctpP(const fu::str& what, const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    s_Target& t = ref_ZEhRUdG2(outputs._TODO_FIX_seenFns, what);
    if (t)
    {
        ensureFnUsable_i4S3ctpP(s_Target(t), outputs, _current_fn, _here, ctx, module, options);
        return true;
    }
    else
    {
        t = target;
        return false;
    };
}

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

static void prefix_i4S3ctpP(const s_BitSet& bitset, fu::str& prefix)
{
    for (int i = 0; i < bitset._data.size(); i++)
    {
        unsigned v = unsigned(bitset._data[i]);
        prefix += hex_i4S3ctpP((v & 0xfu));
        if ((v >>= 4u))
            prefix += hex_i4S3ctpP(v);

    };
}

static bool isHoistable_i4S3ctpP(const int locid)
{
    return locid > 0;
}

static fu::view<fu::str> _ids_used_WXxAIqEr(const s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu::vec<fu::str>& _ids_used_i4S3ctpP(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

                                #ifndef DEF_ensure_qSTqnenA2R1
                                #define DEF_ensure_qSTqnenA2R1
inline int& ensure_qSTqnenA(fu::vec<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_iF_zuMlNyDQpMh
                                #define DEF_iF_zuMlNyDQpMh
inline int iF_zuMlNyDQ(fu::view<int> a, const int i)
{
    if (uNsigned_fAw9WufW(i) < uNsigned_fAw9WufW(a.size()))
        return a[i];
    else
    {
        return int{};
    };
}
                                #endif

static fu::str localID_i4S3ctpP(const s_Target& target, const bool dedupe, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const s_Overload& o = GET_i4S3ctpP(target, ctx, module);
    /*MOV*/ fu::str id { o.name };
    const s_ClosureID cid = tryParseClosureID_UvH3gYAB(id, _here, ctx);
    if (cid.target)
        id = GET_i4S3ctpP(cid.target, ctx, module).name;

    id = valid_identifier_i4S3ctpP(ID_vRqJr3WR(id));
    int BL_2_v {};
    const int locid = (__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_2_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_2_v);
    if (locid)
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                /*MOV*/ fu::str candidate = (dupes ? x7E_3lDd4lqo((id + '_'), fu::i64dec(dupes)) : fu::str(id));
                for (int i = 0; i < _ids_used_WXxAIqEr(_current_fn).size(); i++)
                {
                    if (_ids_used_WXxAIqEr(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_6;
                    };
                };
                _ids_used_i4S3ctpP(_current_fn) += static_cast<fu::str&&>(candidate);
                break;
              } BL_6:;
            };
            if (dupes)
                ((locid < 0) ? ensure_qSTqnenA(_current_fn._ids_dedupe_n, -locid) : ensure_qSTqnenA(_current_fn._ids_dedupe_p, +locid)) = dupes;

        };
        const int dupes = ((locid < 0) ? iF_zuMlNyDQ(_current_fn._ids_dedupe_n, -locid) : iF_zuMlNyDQ(_current_fn._ids_dedupe_p, +locid));
        if (dupes)
            return x7E_3lDd4lqo((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

static bool isHoisted_i4S3ctpP(const int locid, const s_cg_CurrentFn& _current_fn)
{
    if (isHoistable_i4S3ctpP(locid))
        return has_ZwXYCruz(_current_fn._hoisted, locid);
    else
        return false;

}

                                #ifndef DEF_use_STATIC_REF
                                #define DEF_use_STATIC_REF
inline constexpr bool use_STATIC_REF = true;
                                #endif

static bool isConstexpr_i4S3ctpP(const s_SolvedNode& expr, const s_Context& ctx, const s_Module& module)
{
    if ((expr.kind == s_Kind_int) || (expr.kind == s_Kind_char) || (expr.kind == s_Kind_real) || (expr.kind == s_Kind_bool))
        return true;
    else
    {
        if (expr.kind == s_Kind_call)
        {
            const s_Overload& o = GET_i4S3ctpP(expr.target, ctx, module);
            if ((o.kind == s_Kind___native) && (o.flags & s_Flags_F_OPERATOR))
            {
                for (int i = 0; i < expr.items.size(); i++)
                {
                    if (!isConstexpr_i4S3ctpP(expr.items[i], ctx, module))
                        return false;

                };
                return true;
            }
            else if (o.kind == s_Kind_var)
                return globalVar_isConstexpr_i4S3ctpP(o, ctx, module);

        };
        if (expr.kind == s_Kind_copy)
            return isConstexpr_i4S3ctpP(only_LqU08rcL(expr.items), ctx, module);
        else
            return false;

    };
}

static bool globalVar_isConstexpr_i4S3ctpP(const s_Overload& o, const s_Context& ctx, const s_Module& module)
{
    return isConstexpr_i4S3ctpP(o.solved.items[LET_INIT], ctx, module);
}

static bool TODO_FIX_useStaticRef_i4S3ctpP(const s_Target& target, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if ((__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_1_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_1_v) || !use_STATIC_REF)
        return false;
    else
    {
        const s_Type& place_type = GET_i4S3ctpP(target, ctx, module).solved.type;
        return is_ref_9CJmuVSD(place_type) && !isPassByValue_hxWWgdZ1(place_type.vtype) && (!is_sliceable_hxWWgdZ1(place_type.vtype) || ifArray_annotateAsVec_i4S3ctpP(place_type)) && !globalVar_isConstexpr_i4S3ctpP(GET_i4S3ctpP(target, ctx, module), ctx, module);
    };
}

                                #ifndef DEF___6a8YK6nimPl
                                #define DEF___6a8YK6nimPl
inline static void _6a8YK6ni(const int locid, const bool isTemp, const bool isStatic, const bool isArgIdx, const bool isAlwaysMoveable, fu::str& lt, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (lt)
        lt += "|"_fu;

    if (isTemp)
        lt += "temp"_fu;
    else if (isStatic)
        lt += (isAlwaysMoveable ? "zeroes"_fu : "static"_fu);
    else if (isArgIdx)
        BUG_i4S3ctpP("WTF"_fu, _here, ctx);
    else
        lt += localID_i4S3ctpP(nested_i4S3ctpP(locid, _current_fn), false, _current_fn, _here, ctx, module);

}
                                #endif

                                #ifndef DEF_Lifetime_each_iRI0CdJaYK4
                                #define DEF_Lifetime_each_iRI0CdJaYK4
inline void Lifetime_each_iRI0CdJa(const s_Lifetime& lifetime, fu::str& lt, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
        int BL_10_v {};
        _6a8YK6ni(((r & 1u) ? 0 : (__extension__ (
        {
            const unsigned v = (r >> 1u);
            BL_10_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
        (void)0;}), BL_10_v)), (r == 0b1001u), ((r & 11u) == 1u), ((r & 3u) == 3u), ((r == 0b0101u) || (r == 0b1001u)), lt, _current_fn, _here, ctx, module);
    };
}
                                #endif

static fu::str binding_i4S3ctpP(const s_Target& target, const bool forceValue, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& o = GET_i4S3ctpP(target, ctx, module);
    const s_Type& place_type = o.solved.type;
    int BL_1_v {};
    const bool isArg = ((__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_1_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_1_v) < 0);
    s_Type place_type_1 = (forceValue ? clear_refs_9CJmuVSD(s_Type(place_type)) : s_Type(place_type));
    int BL_2_v {};
    int BL_3_v {};
    const bool alreadyDeclared = (isHoistable_i4S3ctpP((__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_2_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_2_v)) ? !add_ZwXYCruz(_current_fn._declared, (__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_3_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_3_v)) : false);
    /*MOV*/ fu::str id = localID_i4S3ctpP(target, !alreadyDeclared, _current_fn, _here, ctx, module);
    int BL_4_v {};
    const bool isHoisted = isHoisted_i4S3ctpP((__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_4_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_4_v), _current_fn);
    const s_Mode mode = (((is_mutref_9CJmuVSD(o.type, _here, ctx) ? s_Mode_M_MUTVAR : s_Mode{}) | (s_SolverStatus((o.status & s_SolverStatus_SS_MOVED_FROM)) ? s_Mode_M_MOVABLE : s_Mode{})) | (TODO_FIX_useStaticRef_i4S3ctpP(target, ctx, module) ? s_Mode_M_STATIC_REF : s_Mode{}));
    if (isHoisted)
    {
        if (!alreadyDeclared)
        {
            fu::str annot {};
            s_PointerFlip ptr_flip {};
            TEMPVAR_declare_i4S3ctpP(place_type_1, ptr_flip, annot, mode, id, outputs, _current_fn, _here, ctx, module, options);
        };
        return /*NRVO*/ id;
    }
    else
    {
        /*MOV*/ fu::str annot = typeAnnot_i4S3ctpP(place_type_1, ((mode | (!is_mutref_9CJmuVSD(o.type, _here, ctx) ? s_Mode_M_CONST : s_Mode{})) | (isArg ? s_Mode_M_ARGUMENT : s_Mode{})), outputs, _current_fn, _here, ctx, module, options);
        const s_SolverStatus isUnused = s_SolverStatus((o.status & s_SolverStatus_SS_UNUSED));
        if (isArg && isUnused)
            return /*NRVO*/ annot;
        else
        {
            if (!isHoisted)
            {
                int BL_11_v {};
                _current_fn._live_locals += (__extension__ (
                {
                    const unsigned v = unsigned((target._packed & 0xfffffull));
                    BL_11_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
                (void)0;}), BL_11_v);
            };
            /*MOV*/ fu::str head = static_cast<fu::str&&>((annot ? annot : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx)));
            if (!isArg && is_ref_9CJmuVSD(place_type_1) && s_DevOptions((options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)))
            {
                fu::str lt = ""_fu;
                Lifetime_each_iRI0CdJa(place_type_1.lifetime, lt, _current_fn, _here, ctx, module);
                head += ((" /*"_fu + lt) + "*/"_fu);
            };
            head += (" "_fu + id);
            if (isUnused)
                head = ("[[maybe_unused]] "_fu + head);

            if (GET_i4S3ctpP(target, ctx, module).status & s_SolverStatus_SS_MOVED_FROM)
                head = ("/*MOV*/ "_fu + head);

            return /*NRVO*/ head;
        };
    };
}

static fu::str binding_EiZ8XPcg(const s_Argument& arg, const bool forceValue, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str prefix = ""_fu;
    if (s_DevOptions((options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)) && is_ref_9CJmuVSD(arg.type) && (arg.may_alias || arg.may_invalidate))
    {
        prefix += "/*"_fu;
        prefix_i4S3ctpP(arg.may_alias, prefix);
        prefix += ":"_fu;
        prefix_i4S3ctpP(arg.may_invalidate, prefix);
        prefix += "*/ "_fu;
    };
    return prefix + binding_i4S3ctpP(arg.target, forceValue, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgFnSignature_i4S3ctpP(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Overload& overload = GET_i4S3ctpP(target, ctx, module);
    fu::view<s_Argument> host_args = EXT_i4S3ctpP(target, ctx, module).args;
    fu::str annot = typeAnnot_i4S3ctpP((overload.type ? overload.type : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx)), s_Mode_M_RETVAL, outputs, _current_fn, _here, ctx, module, options);
    fu::str id { overload.name };
    if (id == "main"_fu)
    {
        outputs._hasMain = MAIN_needed;
        id = "fu_MAIN"_fu;
        if (host_args)
            outputs._hasMain |= MAIN_argv;

        if (isIrrelevant_9CJmuVSD(overload.type))
            outputs._hasMain |= MAIN_zst;

    }
    else
        id = fnID_i4S3ctpP(target, _here, ctx, module);

    /*MOV*/ fu::str src = ((((fnLinkage_i4S3ctpP(overload) + annot) + " "_fu) + id) + "("_fu);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (!(isIrrelevant_9CJmuVSD(host_args[i].type)))
        {
            if (some)
                src += ", "_fu;

            some = true;
            src += binding_EiZ8XPcg(host_args[i], false, outputs, _current_fn, _here, ctx, module, options);
        };
    };
    if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_vRqJr3WR(overload.name))
        src += ", /*postfix*/int"_fu;

    src += ")"_fu;
    return /*NRVO*/ src;
}

static void set_isHoisted_i4S3ctpP(const int locid, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (locid)
    {
        if (locid < 0)
            BUG_i4S3ctpP("Hoisted an argument."_fu, _here, ctx);

    }
    else
        BUG_i4S3ctpP("set_isHoisted: Not a local."_fu, _here, ctx);

    add_ZwXYCruz(_current_fn._hoisted, locid);
}

                                #ifndef DEF___ETt0aj2T3sj
                                #define DEF___ETt0aj2T3sj
inline static void _ETt0aj2T(const int locid, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isHoistable_i4S3ctpP(locid) && !has_ZwXYCruz(_current_fn._declared, locid))
    {
        set_isHoisted_i4S3ctpP(locid, _current_fn, _here, ctx);
        binding_i4S3ctpP(nested_i4S3ctpP(locid, _current_fn), false, outputs, _current_fn, _here, ctx, module, options);
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_xHS7OX74XGg
                                #define DEF_Lifetime_each_xHS7OX74XGg
inline void Lifetime_each_xHS7OX74(const s_Lifetime& lifetime, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
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
        int BL_10_v {};
        _ETt0aj2T(((r & 1u) ? 0 : (__extension__ (
        {
            const unsigned v = (r >> 1u);
            BL_10_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
        (void)0;}), BL_10_v)), outputs, _current_fn, _here, ctx, module, options);
    };
}
                                #endif

                                #ifndef DEF_if_last_iOPO4E2Xkgb
                                #define DEF_if_last_iOPO4E2Xkgb
inline const s_SolvedNode& if_last_iOPO4E2X(fu::view<s_SolvedNode> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_SolvedNode*)fu::NIL);

}
                                #endif

                                #ifndef DEF_x3Dx3D_LQEv05vYad8
                                #define DEF_x3Dx3D_LQEv05vYad8
inline bool operator==(const s_Target& a, const s_Target& b)
{
    return !x3Cx3E_B3HLYN6f(a, b);
}
                                #endif

static bool exprOK_i4S3ctpP(fu::view<s_SolvedNode> nodes)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        const s_Kind k = n.kind;
        if ((k == s_Kind_jump) || (k == s_Kind_loop) || (k == s_Kind_try) || (k == s_Kind_defer) || (k == s_Kind_pragma))
            return false;
        else if (!exprOK_i4S3ctpP(n.items))
            return false;

    };
    return true;
}

static fu::str cgComma_i4S3ctpP(fu::view<s_SolvedNode> nodes, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<fu::str> items = cgNodes_i4S3ctpP(nodes, s_Mode_M_CHECK_NEVER_LTR, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
    if (!items.size())
    {
        noteDefect_i4S3ctpP(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);
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

                                #ifndef DEF_Lifetime_each_FRmdfw3qyX1
                                #define DEF_Lifetime_each_FRmdfw3qyX1
inline void Lifetime_each_FRmdfw3q(const s_Lifetime& lifetime, bool& isMovedFrom, const s_cg_CurrentFn& _current_fn, const s_Context& ctx, const s_Module& module)
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
        int BL_10_v {};
        const int locid = ((r & 1u) ? 0 : (__extension__ (
        {
            const unsigned v = (r >> 1u);
            BL_10_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
        (void)0;}), BL_10_v));
        if (!locid || !s_SolverStatus((GET_i4S3ctpP(nested_i4S3ctpP(locid, _current_fn), ctx, module).status & s_SolverStatus_SS_MOVED_FROM)))
        {
            isMovedFrom = false;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF_last_31malqbtYj8
                                #define DEF_last_31malqbtYj8
inline const s_SolvedNode& last_31malqbt(fu::view<s_SolvedNode> s)
{
    return s[(s.size() - 1)];
}
                                #endif

                                #ifndef DEF___G3369FbduMj
                                #define DEF___G3369FbduMj
inline static void _G3369Fbd(const s_SolvedNode& item, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    TEST_noDanglingRefs_i4S3ctpP(surviving_locals, item, _current_fn, _here, ctx, module);
}
                                #endif

                                #ifndef DEF_each_aN1xJP7Hmzg
                                #define DEF_each_aN1xJP7Hmzg
inline void each_aN1xJP7H(fu::view<s_SolvedNode> a, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < a.size(); i++)
        _G3369Fbd(a[i], surviving_locals, _current_fn, _here, ctx, module);

}
                                #endif

                                #ifndef DEF_find_DRuCVJPp7zc
                                #define DEF_find_DRuCVJPp7zc
inline int find_DRuCVJPp(fu::view<int> haystack, const int needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_4AEOmDQrEG3
                                #define DEF_has_4AEOmDQrEG3
inline bool has_4AEOmDQr(fu::view<int> a, const int b)
{
    return (find_DRuCVJPp(a, b) >= 0);
}
                                #endif

                                #ifndef DEF___lWWPuAkBxY5
                                #define DEF___lWWPuAkBxY5
inline static void _lWWPuAkB(const int locid, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!locid || has_4AEOmDQr(surviving_locals, locid)))
    {
        if (!((locid < 0) || isHoisted_i4S3ctpP(locid, _current_fn)))
        {
            const s_Overload& o = GET_i4S3ctpP(nested_i4S3ctpP(locid, _current_fn), ctx, module);
            if (o.solved.type.lifetime)
            {
                TEST_noDanglingRefs_cqSTVt8D(surviving_locals, o.solved.type.lifetime, _current_fn, _here, ctx, module);
            }
            else
                BUG_i4S3ctpP(("TEST_noDanglingRefs: returning a dangling reference to "_fu + qBAD_e44UlzzA(o.name)), _here, ctx);

        };
    };
}
                                #endif

                                #ifndef DEF_Lifetime_each_VHVphj3EHzg
                                #define DEF_Lifetime_each_VHVphj3EHzg
inline void Lifetime_each_VHVphj3E(const s_Lifetime& lifetime, fu::view<int> surviving_locals, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
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
        int BL_10_v {};
        _lWWPuAkB(((r & 1u) ? 0 : (__extension__ (
        {
            const unsigned v = (r >> 1u);
            BL_10_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
        (void)0;}), BL_10_v)), surviving_locals, _current_fn, _here, ctx, module);
    };
}
                                #endif

static void TEST_noDanglingRefs_cqSTVt8D(fu::view<int> surviving_locals, const s_Lifetime& lifetime, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    Lifetime_each_VHVphj3E(lifetime, surviving_locals, _current_fn, _here, ctx, module);
}

static void TEST_noDanglingRefs_i4S3ctpP(fu::view<int> surviving_locals, const s_SolvedNode& node, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (!(!is_ref_9CJmuVSD(node.type)))
    {
        if ((node.kind == s_Kind_if) || (node.kind == s_Kind_and) || (node.kind == s_Kind_or))
        {
            each_aN1xJP7H(fu::get_view(node.items, ((node.kind == s_Kind_if) ? 1 : 0)), surviving_locals, _current_fn, _here, ctx, module);
        };
        TEST_noDanglingRefs_cqSTVt8D(surviving_locals, node.type.lifetime, _current_fn, _here, ctx, module);
    };
}

                                #ifndef DEF_has_nst65ofMVk7
                                #define DEF_has_nst65ofMVk7
inline bool has_nst65ofM(fu::view<char> a, fu::view<char> b)
{
    return (find_5WUbOXwW(a, b) >= 0);
}
                                #endif

                                #ifndef DEF_has_J81b5Q24qw3
                                #define DEF_has_J81b5Q24qw3
inline bool has_J81b5Q24(fu::view<char> a, const char b)
{
    return (find_yP7FbxFZ(a, b) >= 0);
}
                                #endif

static fu::str cgBlock_cqSTVt8D(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Helpers& helpers, const s_Type& type, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::str indent0 { outputs._indent };
    const int ids_used0 = _current_fn._ids_used.size();
    const int live_locals0 = _current_fn._live_locals.size();
    fu_DEFER(
    {
        outputs._indent = static_cast<fu::str&&>(indent0);
        _current_fn._ids_used.shrink(ids_used0);
        _current_fn._live_locals.shrink(live_locals0);
    });
    outputs._indent += "    "_fu;
    fu::str open = "{"_fu;
    fu::str close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu::str trail = ""_fu;
    fu::str name = x7E_3lDd4lqo("BL_"_fu, fu::i64dec(_current_fn.num_labels++));
    bool has_val = !isIrrelevant_9CJmuVSD(type);
    s_PointerFlip ptr_flip {};
    if (is_never_9CJmuVSD(type.vtype))
    {
        has_val = false;
        if (gnuStmtExpr)
        {
            annotateNever_i4S3ctpP(outputs);
            close = (("    (void)0;"_fu + indent0) + "}), fu::unreachable)"_fu);
        };
    }
    else if (has_val)
    {
        bool isMovedFrom = is_ref_9CJmuVSD(type);
        Lifetime_each_FRmdfw3q(type.lifetime, isMovedFrom, _current_fn, ctx, module);
        fu::str annot {};
        fu::str id = TEMPVAR_declare_i4S3ctpP(type, ptr_flip, annot, (isMovedFrom ? s_Mode_M_MOVABLE : s_Mode{}), (name ? (name + "_v"_fu) : fu::str{}), outputs, _current_fn, _here, ctx, module, options);
        fu::str outval = TEMPVAR_consume_i4S3ctpP(id, type, ptr_flip, outputs, _current_fn, _here, ctx, module, options);
        close = (((("    (void)0;"_fu + indent0) + "}), "_fu) + outval) + ")"_fu);
        trail = TEMPVAR_init_i4S3ctpP(id, ptr_flip, fu::view<char>{}, false);
    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    const fu::vec<int>& surviving_locals = _current_fn._live_locals;
    _current_fn.blocks += s_cg_Block { fu::str(name), s_Helpers(helpers), has_val, ptr_flip, fu::vec<int>(surviving_locals) };
    if (has_val)
        TEST_noDanglingRefs_i4S3ctpP(surviving_locals, last_31malqbt(nodes), _current_fn, _here, ctx, module);

    int count {};
    /*MOV*/ fu::str src = cgStatements_i4S3ctpP(nodes, count, trail, outputs, _current_fn, _here, ctx, module, options);
    const bool labelUsed = has_nst65ofM(src, (("goto "_fu + name) + ";"_fu));
    if (labelUsed)
    {
        close = (((("  } "_fu + name) + ":;"_fu) + indent0) + close);
        open = "{ {"_fu;
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || labelUsed || has_J81b5Q24(src, '{') || has_nst65ofM(src, "if"_fu) || (only_LqU08rcL(nodes).kind == s_Kind_pragma))
    {
        fu::str gnuOpen = ""_fu;
        if (gnuStmtExpr)
        {
            noteDefect_i4S3ctpP(s_CGDefects_GNUStmtExpr, outputs, _here, ctx, options);
            gnuOpen = "(__extension__ ("_fu;
        };
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);
    };
    return /*NRVO*/ src;
}

static fu::str cgBlock_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<s_SolvedNode> items = ((node.kind == s_Kind_block) ? fu::vec<s_SolvedNode>(node.items) : fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Helpers& helpers = ((node.kind == s_Kind_block) ? node.helpers : (*(const s_Helpers*)fu::NIL));
    if (!(mode & s_Mode_M_FN_BODY))
    {
        Lifetime_each_xHS7OX74(node.type.lifetime, outputs, _current_fn, _here, ctx, module, options);
    };
    if (mode & s_Mode_M_LOOP_BODY)
        _current_fn.can_cont = helpers;


    {
        const s_SolvedNode& tail = if_last_iOPO4E2X(items);
        if ((tail.kind == s_Kind_let) || (tail.kind == s_Kind_letdef) || (tail.kind == s_Kind_struct) || (tail.kind == s_Kind_fn) || (tail.kind == s_Kind_defer))
            BUG_i4S3ctpP(x7E_3lDd4lqo("cgBlock: tailing "_fu, str_WkqQ7QhO(tail.kind)), _here, ctx);

    };
    if (!(mode & s_Mode_M_STMT))
    {
        if ((items.size() >= 2))
        {
            const s_SolvedNode& last = items[(items.size() - 1)];
            const s_SolvedNode& expr = (((last.kind == s_Kind_return) && last.items) ? last.items[0] : last);
            if (expr.kind == s_Kind_call)
            {
                const s_Target& target = expr.target;
                const s_SolvedNode& prev = items[(items.size() - 2)];
                if ((prev.kind == s_Kind_letdef) && (prev.target == target))
                    noteDefect_i4S3ctpP(s_CGDefects_PointlessLocal, outputs, _here, ctx, options);

            };
        };
    };
    const bool expr = !(mode & s_Mode_M_STMT);
    if (expr && exprOK_i4S3ctpP(items))
        return cgComma_i4S3ctpP(items, outputs, _current_fn, _here, ctx, module, options);
    else
        return cgBlock_cqSTVt8D(items, !!(mode & s_Mode_M_OPT_CURLIES), expr, helpers, (expr ? node.type : (*(const s_Type*)fu::NIL)), outputs, _current_fn, _here, ctx, module, options);

}

                                #ifndef DEF_F_TESTCASE
                                #define DEF_F_TESTCASE
extern const s_Flags F_TESTCASE;
                                #endif

static void cgFn_i4S3ctpP(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& node = GET_i4S3ctpP(target, ctx, module).solved;
    if (node.kind == s_Kind_fn)
    {
        /*MOV*/ fu::str indent0 { outputs._indent };
        fu_DEFER(outputs._indent = static_cast<fu::str&&>(indent0));
        fu::view<s_SolvedNode> items = node.items;
        const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
        const s_Overload& overload = GET_i4S3ctpP(target, ctx, module);
        fu::view<char> id = overload.name;
        if (overload.status & s_SolverStatus_SS_FINALIZED)
        {
            if (!body)
            {
                if (!((overload.kind == s_Kind___native) || (overload.kind == s_Kind_inline)))
                    BUG_i4S3ctpP(((x7E_3lDd4lqo("cgFn: no body on non-native: "_fu, str_WkqQ7QhO(overload.kind)) + " "_fu) + id), _here, ctx);

            }
            else if (overload.status & s_SolverStatus_SS_Debug_AllPassesComplete)
            {
                outputs._indent = "\n"_fu;
                /*MOV*/ fu::str dedupe = ((overload.flags & s_Flags_F_TEMPLATE) ? valid_identifier_i4S3ctpP(fu::str(overload.name)) : fu::str{});
                const s_TEA& sighash = EXT_i4S3ctpP(target, ctx, module).sighash;
                fu::str dedupe_1 = ((dedupe && sighash) ? ((dedupe + '_') + digest62_lweHUmk8((uint64_t(sighash.v0) | (uint64_t(sighash.v1) << 32ull)), 0)) : static_cast<fu::str&&>(dedupe));
                if (dedupe_1 && TODO_FIX_seenFns_dedupeAlreadyUsable_i4S3ctpP(dedupe_1, target, outputs, _current_fn, _here, ctx, module, options))
                    noteDefect_i4S3ctpP(s_CGDefects_DuplicateFunctions, outputs, _here, ctx, options);
                else
                {
                    fu::str src {};

                    {
                        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu::vec<fu::str>{}, fu::vec<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu::vec<fu::str>{}, fu::vec<int>{}, fu::vec<int>{}, s_BitSet{}, s_BitSet{}, fu::vec<int>{} };
                        fu_DEFER(std::swap(_current_fn, current_fn0));
                        std::swap(_current_fn, current_fn0);
                        _current_fn.can_return = body.helpers;
                        src += cgFnSignature_i4S3ctpP(target, outputs, _current_fn, _here, ctx, module, options);
                        fu::str body_src = cgBlock_i4S3ctpP(body, (s_Mode_M_STMT | s_Mode_M_FN_BODY), outputs, _current_fn, _here, ctx, module, options);
                        src += body_src;
                        if (_current_fn.TEMPVARs)
                            BUG_i4S3ctpP("Leftover tempvars."_fu, _here, ctx);

                    };
                    if (!dedupe_1 && TODO_FIX_seenFns_dedupeAlreadyUsable_i4S3ctpP(src, target, outputs, _current_fn, _here, ctx, module, options))
                        noteDefect_i4S3ctpP(s_CGDefects_DuplicateFunctions, outputs, _here, ctx, options);
                    else
                    {
                        if (overload.flags & s_Flags_F_HOTSWAP)
                        {
                            if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
                            {
                                fu::str fnID = fnID_i4S3ctpP(target, _here, ctx, module);
                                fu::str fnID_local = (fnID + "_local"_fu);
                                fu::str fnPtrAnnot = cgFnPrototype_i4S3ctpP(target, true, outputs, _current_fn, _here, ctx, module, options);
                                include_i4S3ctpP("<dl/hotswap.hpp>"_fu, outputs);
                                ensureFwdDecl_i4S3ctpP(target, outputs, _current_fn, _here, ctx, module, options);
                                src = (((((((((((((((((((((("                                #ifdef fu_HOTSWAP\n"_fu + "                                #define "_fu) + fnID) + " "_fu) + fnID_local) + "\n"_fu) + "extern \"C\" fu_EXPORT\n"_fu) + "                                #endif\n"_fu) + src) + "\n"_fu) + "                                #ifdef fu_HOTSWAP\n"_fu) + "                                #undef "_fu) + fnID) + "\n"_fu) + fnPtrAnnot) + " =\n    fu::hotswap(\""_fu) + fnID_local) + "\",\n                 "_fu) + fnID) + ",\n                &"_fu) + fnID_local) + ");\n"_fu) + "                                #endif"_fu);
                            }
                            else
                                BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx);

                        };
                        if (overload.flags & F_TESTCASE)
                        {
                            if (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid)
                            {
                                include_i4S3ctpP("<stdio.h>"_fu, outputs);
                                outputs._testsuite += (("\n    puts(\"   TEST "_fu + id) + " ...\");"_fu);
                                outputs._testsuite += (("\n    "_fu + fnID_i4S3ctpP(target, _here, ctx, module)) + "();"_fu);
                                outputs._testsuite += (("\n    puts(\"    ... "_fu + id) + " OK\\n\");"_fu);
                                outputs._testsuite += "\n"_fu;
                            }
                            else
                                BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx);

                        };
                        if (dedupe_1)
                        {
                            outputs._fdef_src += ((("\n                                #ifndef DEF_"_fu + dedupe_1) + "\n                                #define DEF_"_fu) + dedupe_1);
                        };
                        outputs._fdef_src += (("\n"_fu + src) + "\n"_fu);
                        if (dedupe_1)
                        {
                            outputs._fdef_src += "                                #endif\n"_fu;
                        };
                    };
                };
            }
            else
                BUG_i4S3ctpP(("cgFn: SS_Debug_AllPassesComplete not set: "_fu + id), _here, ctx);

        }
        else
            BUG_i4S3ctpP(("cgFn: SS_FINALIZED not set: "_fu + id), _here, ctx);

    }
    else
        BUG_i4S3ctpP("cgFn: target.solved.kind != 'fn'"_fu, _here, ctx);

}

static void ensureFnDef_i4S3ctpP(const s_Target& target, const bool offtarget, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if ((int(unsigned(((target._packed >> 40ull) & 0xfffffull))) == module.modid) || offtarget)
    {
        if (!add_eAAgIA81(outputs._fdef_started, target))
        {
            if (!has_woYDJ4WP(outputs._fdef_complete, target))
            {
                if (!s_SolverStatus((GET_i4S3ctpP(target, ctx, module).status & s_SolverStatus_SS_FN_RECUR)))
                    BUG_i4S3ctpP("ensureFnDef: Function without SS_FN_RECUR appears to be recursive."_fu, _here, ctx);
                else
                    ensureFwdDecl_i4S3ctpP(target, outputs, _current_fn, _here, ctx, module, options);

            };
        }
        else
        {
            cgFn_i4S3ctpP(target, outputs, _current_fn, _here, ctx, module, options);
            if (!(add_eAAgIA81(outputs._fdef_complete, target)))
                BUG_i4S3ctpP(("ensureFnDef: _fdef_complete twice: "_fu + GET_i4S3ctpP(target, ctx, module).name), _here, ctx);

        };
    }
    else
        BUG_i4S3ctpP((((x7E_3lDd4lqo((x7E_3lDd4lqo((x7E_3lDd4lqo("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(int(unsigned(((target._packed >> 40ull) & 0xfffffull))))) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu), str_WkqQ7QhO(GET_i4S3ctpP(target, ctx, module).kind)) + " "_fu) + GET_i4S3ctpP(target, ctx, module).name) + "`."_fu), _here, ctx);

}

static void ensureFnUsable_i4S3ctpP(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_TokenIdx here0 { _here };
    fu_DEFER(_here = here0);
    const bool offtarget = (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid);
    if (offtarget && !isInlLinked_i4S3ctpP(GET_i4S3ctpP(target, ctx, module)))
        ensureFwdDecl_i4S3ctpP(target, outputs, _current_fn, _here, ctx, module, options);
    else
        ensureFnDef_i4S3ctpP(target, offtarget, outputs, _current_fn, _here, ctx, module, options);

}

                                #ifndef DEF_find_tnDs1wBzL75
                                #define DEF_find_tnDs1wBzL75
inline int find_tnDs1wBz(fu::view<char> haystack, const char needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_yP7FbxFZ(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_starts_8EDTwZj1Fm2
                                #define DEF_starts_8EDTwZj1Fm2
inline bool starts_8EDTwZj1(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

                                #ifndef DEF_starts_hRi5tkxndc1
                                #define DEF_starts_hRi5tkxndc1
inline bool starts_hRi5tkxn(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

static fu::str cgArithmeticLiteral_cqSTVt8D(const s_Type& type, const fu::str& value, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::str src { value };
    int idx {};
    while (((idx = find_tnDs1wBz(src, '_', idx)) >= 0))
        src.splice(idx, 1);

    fu::view<char> _0 {};
    fu::view<char> base = ((_0 = tryLookupUserType_1qjplDUo(type.vtype, _here, ctx, module).shape.basePrim) ? static_cast<fu::view<char>&&>(_0) : type.vtype.canon);
    if (starts_8EDTwZj1(base, 'u') && !has_J81b5Q24(src, 'u'))
        src += 'u';

    if (starts_8EDTwZj1(base, 'f'))
    {
        if (!has_J81b5Q24(src, '.') && !has_J81b5Q24(src, (has_J81b5Q24(src, 'x') ? 'p' : 'e')))
            src += ".0"_fu;

        if (base == "f32"_fu)
        {
            if (has_J81b5Q24(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (base != "f64"_fu)
            BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx);

    };
    if (starts_hRi5tkxn(src, "0o"_fu))
        src.splice(1, 1);

    if (starts_8EDTwZj1(base, 'i') || starts_8EDTwZj1(base, 'u'))
    {
        if (src.size() > 16)
        {
            s_Intlit parse = Intlit_u8re8TwO(src);
            if (parse.negative && (parse.absval == 0x8000000000000000ull))
                return "(-9223372036854775807-1)"_fu;

        };
        if ((base == "u64"_fu) || (base == "i64"_fu))
        {
            if (!has_J81b5Q24(src, 'l'))
                return src + "ll"_fu;

        }
        else if ((base != "u32"_fu) && (base != "i32"_fu))
        {
            if (!(mode & s_Mode_M_ENUM_DECL))
            {
                return ((typeAnnotBase_i4S3ctpP(type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options) + "("_fu) + src) + ")"_fu;
            };
        };
    };
    return /*NRVO*/ src;
}

static const fu::str& cgBoolLiteral_i4S3ctpP(const fu::str& value, const s_TokenIdx& _here, const s_Context& ctx)
{
    if ((value != "true"_fu) && (value != "false"_fu))
        BUG_i4S3ctpP((("cgBoolLiteral: bad value("_fu + value) + ")"_fu), _here, ctx);
    else
        return value;

}

static fu::str try_cgPrettierEmpty_i4S3ctpP(const s_Type& type, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (is_arithmetic_hxWWgdZ1(type.vtype))
    {
        return cgArithmeticLiteral_cqSTVt8D(type, "0"_fu, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
    }
    else if (is_boolean_hxWWgdZ1(type.vtype))
        return static_cast<fu::str&&>(const_cast<fu::str&>(cgBoolLiteral_i4S3ctpP("false"_fu, _here, ctx)));
    else
        return ""_fu;

}

static s_PointerFlip PointerFlip_i4S3ctpP(const s_Overload& o, const s_TokenIdx& _here, const s_Context& ctx)
{
    return PointerFlip_cqSTVt8D(o.solved.type, _here, ctx);
}

static fu::str HOIST_init_i4S3ctpP(fu::view<char> init, const s_Target& target, const s_Mode mode, fu::view<char> head, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    return TEMPVAR_init_i4S3ctpP(head, PointerFlip_i4S3ctpP(GET_i4S3ctpP(target, ctx, module), _here, ctx), init, !(mode & (s_Mode_M_STMT | s_Mode_M_VOID_EXPR)));
}

                                #ifndef DEF_join_roEBocCSa32
                                #define DEF_join_roEBocCSa32
inline fu::str join_roEBocCS(fu::view<fu::str> a, fu::view<char> sep)
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

static fu::str binding_cqSTVt8D(const s_Target& target, const s_SolvedNode& init, const s_Mode mode, const bool doInit, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::str head = binding_i4S3ctpP(target, false, outputs, _current_fn, _here, ctx, module, options);
    if (!doInit)
        return /*NRVO*/ head;
    else
    {
        int BL_3_v {};
        const bool isHoisted = isHoisted_i4S3ctpP((__extension__ (
        {
            const unsigned v = unsigned((target._packed & 0xfffffull));
            BL_3_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
        (void)0;}), BL_3_v), _current_fn);
        if (!init || ((init.kind == s_Kind_empty) && !is_ref_9CJmuVSD(init.type)))
        {
            /*MOV*/ fu::str pretty = ((init.kind == s_Kind_empty) ? try_cgPrettierEmpty_i4S3ctpP(init.type, outputs, _current_fn, _here, ctx, module, options) : fu::str{});
            if (isHoisted)
            {
                return HOIST_init_i4S3ctpP((pretty ? static_cast<fu::str&&>(pretty) : "{}"_fu), target, mode, head, _here, ctx, module);
            }
            else
            {
                return static_cast<fu::str&&>((head += (pretty ? (" = "_fu + pretty) : " {}"_fu)));
            };
        }
        else
        {
            const bool isAbbreviatedCopy = isAbbreviatedCopy_i4S3ctpP(init, false);
            const s_SolvedNode& init_1 = (isAbbreviatedCopy ? only_LqU08rcL(init.items) : init);
            if ((init_1.kind == s_Kind_bool) && !(GET_i4S3ctpP(target, ctx, module).flags & s_Flags_F_PUB) && !is_mutref_9CJmuVSD(GET_i4S3ctpP(target, ctx, module).type, _here, ctx))
                noteDefect_i4S3ctpP(s_CGDefects_LocalConstBool, outputs, _here, ctx, options);

            int BL_9_v {};
            const bool use_initTEMPVARs = !(__extension__ (
            {
                const s_Target& t = _current_fn.target;
                BL_9_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
            (void)0;}), BL_9_v);
            fu::vec<fu::str> initTEMPVARs {};
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            fu::str expr = cgNode_i4S3ctpP(init_1, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            if (initTEMPVARs)
            {
                expr = (((((("[]() -> "_fu + typeAnnot_i4S3ctpP(init_1.type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options)) + " {\n    "_fu) + join_roEBocCS(initTEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}()"_fu);
            };
            if (isHoisted)
                return HOIST_init_i4S3ctpP(expr, target, mode, head, _here, ctx, module);
            else
                return (head + " = "_fu) + expr;

        };
    };
}

static fu::str binding_WXxAIqEr(const s_SolvedNode& node, const s_Mode mode, const bool doInit, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Target& target = node.target;
    const s_SolvedNode& init = ((doInit && node.items) ? node.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
    return binding_cqSTVt8D(target, init, mode, doInit, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgInitPrio_i4S3ctpP(const int modid, s_Outputs& outputs, const s_Context& ctx)
{
    const int prio = ctx.modules[modid].order.dep_depth;
    include_i4S3ctpP("<fu/init_priority.h>"_fu, outputs);
    return x7E_3lDd4lqo("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ") "_fu;
}

static fu::str cgLet_i4S3ctpP(const s_Target& target, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int BL_1_v {};
    const bool global = !(__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_1_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_1_v);
    const bool foreign = (global ? (int(unsigned(((target._packed >> 40ull) & 0xfffffull))) != module.modid) : false);
    const s_SolvedNode& node = GET_i4S3ctpP(target, ctx, module).solved;
    if (isIrrelevant_9CJmuVSD(node.type))
        return ""_fu;
    else if (global && !add_eAAgIA81(outputs._ffwd, target))
        return ""_fu;
    else
    {
        if (!(mode & s_Mode_M_STMT) && !global)
        {
            int BL_6_v {};
            set_isHoisted_i4S3ctpP((__extension__ (
            {
                const unsigned v = unsigned((target._packed & 0xfffffull));
                BL_6_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
            (void)0;}), BL_6_v), _current_fn, _here, ctx);
        };
        const bool cOnstexpr = (global ? globalVar_isConstexpr_i4S3ctpP(GET_i4S3ctpP(target, ctx, module), ctx, module) : false);
        /*MOV*/ fu::str src = binding_WXxAIqEr(node, mode, (!foreign || cOnstexpr), outputs, _current_fn, _here, ctx, module, options);
        if (!global)
            return /*NRVO*/ src;
        else
        {
            if (starts_hRi5tkxn(src, "const "_fu))
                src = fu::slice(src, 6);

            if (cOnstexpr)
            {
                outputs._ffwd_src += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                return ""_fu;
            }
            else
            {
                fu::str prio = ((!foreign && !is_primitive_hxWWgdZ1(node.type.vtype)) ? cgInitPrio_i4S3ctpP(int(unsigned(((target._packed >> 40ull) & 0xfffffull))), outputs, ctx) : fu::str{});
                if (prio)
                {
                    const int eq = find_yP7FbxFZ(src, '=');
                    const int eq_1 = ((eq >= 0) ? eq : find_yP7FbxFZ(src, '{'));
                    if ((eq_1 >= 0))
                        src = ((fu::get_view_start0(src, eq_1) + prio) + fu::get_view(src, eq_1));
                    else
                        BUG_i4S3ctpP((("Needs init priority but can't find first = in `"_fu + src) + "`"_fu), _here, ctx);

                };
                if (!isExtLinked_i4S3ctpP(GET_i4S3ctpP(target, ctx, module)))
                {
                    if (!foreign)
                        outputs._fdef_src += (("\nstatic const "_fu + src) + ";\n"_fu);
                    else
                        BUG_i4S3ctpP(("Cannot codegen, relies on an external static: "_fu + GET_i4S3ctpP(target, ctx, module).name), _here, ctx);

                }
                else
                    outputs._fdef_src += (("\nextern const "_fu + src) + ";"_fu);

                return ""_fu;
            };
        };
    };
}

static void ensureGlobal_i4S3ctpP(const s_Target& target, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int BL_1_v {};
    if ((__extension__ (
    {
        const unsigned v = unsigned((target._packed & 0xfffffull));
        BL_1_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_1_v))
        BUG_i4S3ctpP("ensureGlobal: not a global, has locid."_fu, _here, ctx);
    else if (cgLet_i4S3ctpP(target, s_Mode_M_STMT, outputs, _current_fn, _here, ctx, module, options))
        BUG_i4S3ctpP("ensureGlobal/cgLet: non-empty output."_fu, _here, ctx);

}

                                #ifndef DEF_find_l600OhfD9ua
                                #define DEF_find_l600OhfD9ua
inline int find_l600OhfD(fu::view<fu::str> haystack, fu::view<char> needle)
{
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_has_JcV6lPAxKV5
                                #define DEF_has_JcV6lPAxKV5
inline bool has_JcV6lPAx(fu::view<fu::str> a, fu::view<char> b)
{
    return (find_l600OhfD(a, b) >= 0);
}
                                #endif

static fu::str rootNS_i4S3ctpP(const fu::str& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_JcV6lPAx(_current_fn._ids_used, id))
        return "::"_fu + id;
    else
        return fu::str(id);

}

static fu::str TEMPVAR_peek_i4S3ctpP(const s_PointerFlip ptr_flip, const fu::str& expr, const bool parens)
{
    if (ptr_flip == s_PointerFlip_RawPointer)
    {
        if (parens)
            return ("(*"_fu + expr) + ")"_fu;
        else
            return "*"_fu + expr;

    }
    else
        return fu::str(expr);

}

static fu::str cgEnumv_i4S3ctpP(const s_Type& type, fu::view<char> id, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::str base = typeAnnotBase_i4S3ctpP(type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
    return (base + "_"_fu) + id;
}

static fu::str emitPrefixOp_i4S3ctpP(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view<fu::str> item_src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return unpromote_i4S3ctpP((op + ARG_cqSTVt8D(0, item_src)), node, isNative, outputs, _current_fn, _here, ctx, module, options);
}

                                #ifndef DEF___1DioEmfkTh9
                                #define DEF___1DioEmfkTh9
inline static fu::str _1DioEmfk(const s_SolvedNode& x)
{
    return str_WkqQ7QhO(x.kind);
}
                                #endif

                                #ifndef DEF_map_T3oRinDqzW6
                                #define DEF_map_T3oRinDqzW6
inline fu::vec<fu::str> map_T3oRinDq(fu::view<s_SolvedNode> a)
{
    /*MOV*/ fu::vec<fu::str> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = _1DioEmfk(a[i]);

    return /*NRVO*/ res;
}
                                #endif

static fu::str cgCall_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Extended& ext = EXT_i4S3ctpP(node.target, ctx, module);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_i4S3ctpP(node.target, ctx, module))) ? *_0 : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx));
    fu::view<s_SolvedNode> args = node.items;
    const bool isNative = (target.kind == s_Kind___native);
    const bool isSimpleCpyMovAssign = (((args.size() == 2) && isNative && (target.name == "="_fu)) ? isFieldChain_i4S3ctpP(args[0], ctx, module) : false);
    const int MUSTSEQ_mask = node.helpers.index;
    int ooe_crosscheck = 0;
    fu::str ooe_header = ""_fu;
    fu::vec<fu::str> item_src {};
    item_src.resize(args.size());
    const bool RTL = isRTL_xQNS19Zn(target);
    fu::view<s_Argument> host_args = ext.args;
    if (args)
        argsForward_VUHdzx8p(RTL, host_args, 0, ext, target, args, isNative, isSimpleCpyMovAssign, MUSTSEQ_mask, ooe_crosscheck, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);

    if ((ooe_crosscheck & MUSTSEQ_mask) == MUSTSEQ_mask)
    {
        if (isNative && (target.name[0] == '\n'))
        {
            /*MOV*/ fu::str id = fu::slice(target.name, (NativeQualities_UvH3gYAB(target.name).name_start_idx + 1));
            const int idx = find_yP7FbxFZ(id, '\n');
            if (idx > -1)
            {
                include_i4S3ctpP(fu::slice(id, 0, idx), outputs);
                id = fu::slice(id, (idx + 1));
            };
            if (id[0] == '.')
            {
                if (args.size() > 1)
                    return emitMethodCall_i4S3ctpP(id, ooe_header, item_src);
                else
                    return emitPostfixOp_i4S3ctpP(id, node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);

            }
            else if (id[0] == '/')
                return ooeWrap_i4S3ctpP(emitBuiltin_i4S3ctpP(id, item_src, node, outputs, _current_fn, _here, ctx, module, options), ooe_header);
            else if (args)
            {
                if (hasIdentifierChars_V5IuMsej(id))
                    return emitFunctionCall_i4S3ctpP(static_cast<fu::str&&>(id), "("_fu, ")"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                else
                    return emitBinaryOp_i4S3ctpP(id, node, mode, args, isNative, ooe_header, item_src, outputs, _current_fn, _here, ctx, module, options);

            }
            else
                return /*NRVO*/ id;

        }
        else
        {
            const s_Kind kind = target.kind;
            int BL_21_v {};
            if (kind == s_Kind_type)
            {
                if (!args)
                    BUG_i4S3ctpP("cgCall: call(type).args.len == 0, should be 'empty' instead."_fu, _here, ctx);
                else
                {
                    const s_Struct* _1;
                    const s_Struct& t = (*(_1 = &(tryLookupUserType_1qjplDUo(target.type.vtype, _here, ctx, module))) ? *_1 : BUG_i4S3ctpP("cgCall: defctor/type not a struct nor a user primitive."_fu, _here, ctx));
                    /*MOV*/ fu::str base = typeAnnotBase_i4S3ctpP(target.type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
                    if (t.kind == s_Kind_flags)
                        return emitFunctionCall_i4S3ctpP(fu::str(base), "(("_fu, ((") & MASK_"_fu + base) + ")"_fu), ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    else if ((t.kind == s_Kind_primitive) || (t.kind == s_Kind_enum))
                        return emitFunctionCall_i4S3ctpP(static_cast<fu::str&&>(base), "("_fu, ")"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    else if ((t.kind == s_Kind_struct) || (t.kind == s_Kind_union))
                    {
                        return emitFunctionCall_i4S3ctpP(static_cast<fu::str&&>(base), " { "_fu, " }"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);
                    }
                    else
                        BUG_i4S3ctpP(x7E_3lDd4lqo("Unknown usertype kind: "_fu, str_WkqQ7QhO(t.kind)), _here, ctx);

                };
            }
            else if ((kind == s_Kind_fn) && (__extension__ (
            {
                const s_Target& t = node.target;
                BL_21_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
            (void)0;}), BL_21_v))
                ensureFnUsable_i4S3ctpP(node.target, outputs, _current_fn, _here, ctx, module, options);
            else if (kind == s_Kind_inline)
                BUG_i4S3ctpP(("cgCall: found a call to an inline fn: "_fu + GET_i4S3ctpP(node.target, ctx, module).name), _here, ctx);

            const fu::str& id = (target.name ? target.name : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx));
            if ((args.size() <= 2))
            {
                if (target.kind == s_Kind_var)
                {
                    int BL_27_v {};
                    if (isIrrelevant_9CJmuVSD(target.type))
                        BUG_i4S3ctpP("cgCall: reading an irrelevant var"_fu, _here, ctx);
                    else if (!(__extension__ (
                    {
                        const s_Target& t = node.target;
                        const unsigned v = unsigned((t._packed & 0xfffffull));
                        BL_27_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
                    (void)0;}), BL_27_v))
                    {
                        ensureGlobal_i4S3ctpP(node.target, outputs, _current_fn, _here, ctx, module, options);
                        /*MOV*/ fu::str ret = rootNS_i4S3ctpP(localID_i4S3ctpP(node.target, false, _current_fn, _here, ctx, module), _current_fn);
                        if (TODO_FIX_useStaticRef_i4S3ctpP(node.target, ctx, module))
                            ret += ".ref"_fu;

                        return /*NRVO*/ ret;
                    }
                    else
                    {
                        /*MOV*/ fu::str id_1 = localID_i4S3ctpP(node.target, false, _current_fn, _here, ctx, module);
                        int BL_31_v {};
                        if (isHoisted_i4S3ctpP((__extension__ (
                        {
                            const s_Target& t = node.target;
                            const unsigned v = unsigned((t._packed & 0xfffffull));
                            BL_31_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
                        (void)0;}), BL_31_v), _current_fn))
                            return TEMPVAR_peek_i4S3ctpP(PointerFlip_i4S3ctpP(target, _here, ctx), id_1, true);
                        else
                            return /*NRVO*/ id_1;

                    };
                }
                else if (target.kind == s_Kind_field)
                {
                    fu::view<char> _2 {};
                    fu::view<char> head = ((_2 = ARG_cqSTVt8D(0, item_src)) ? static_cast<fu::view<char>&&>(_2) : BUG_i4S3ctpP("cgField: about to emit a [nothing].field sequence."_fu, _here, ctx));
                    return (head + "."_fu) + ID_vRqJr3WR(id);
                }
                else if (target.kind == s_Kind_enumv)
                    return cgEnumv_i4S3ctpP(target.type, id, outputs, _current_fn, _here, ctx, module, options);
                else if (isOp_i4S3ctpP(node.target, ctx, module))
                {
                    if (args.size() == 1)
                    {
                        if (hasPostfix_vRqJr3WR(id))
                            return emitPostfixOp_i4S3ctpP(valid_operator_i4S3ctpP(id), node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);
                        else
                            return emitPrefixOp_i4S3ctpP(valid_operator_i4S3ctpP(id), node, isNative, item_src, outputs, _current_fn, _here, ctx, module, options);

                    }
                    else if (args.size() == 2)
                    {
                        if (id == "[]"_fu)
                            return ooeWrap_i4S3ctpP((((ARG_cqSTVt8D(0, item_src) + "["_fu) + ARG_cqSTVt8D(1, item_src)) + "]"_fu), ooe_header);
                        else
                            return emitBinaryOp_i4S3ctpP(valid_operator_i4S3ctpP(id), node, mode, args, isNative, ooe_header, item_src, outputs, _current_fn, _here, ctx, module, options);

                    };
                };
            };
            if (isNative)
                BUG_i4S3ctpP((("Unknown __native: `"_fu + id) + "`."_fu), _here, ctx);
            else
                return emitFunctionCall_i4S3ctpP(rootNS_i4S3ctpP(fnID_i4S3ctpP(node.target, _here, ctx, module), _current_fn), "("_fu, ")"_fu, ooe_header, item_src, RTL, host_args, outputs, _current_fn, _here, ctx, module, options);

        };
    }
    else
        BUG_i4S3ctpP(((x7E_3lDd4lqo((x7E_3lDd4lqo("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(MUSTSEQ_mask)) + ": "_fu) + join_roEBocCS(map_T3oRinDq(args), "|"_fu)), _here, ctx);

}

static fu::str cgArithmeticLiteral_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_9CJmuVSD(node.type))
        noteDefect_i4S3ctpP(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    return cgArithmeticLiteral_cqSTVt8D(node.type, node.value, mode, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str escapeStringLiteral_i4S3ctpP(fu::view<char> str, const char quot)
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
            esc += ("\\"_fu + xHH_i4S3ctpP(unsigned(fu::u8(c))));
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

static fu::str cgCharLiteral_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Options& options)
{
    if (isIrrelevant_9CJmuVSD(node.type))
        noteDefect_i4S3ctpP(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    return escapeStringLiteral_i4S3ctpP(node.value, '\'');
}

                                #ifndef DEF_SMALL_STRING_OPTI
                                #define DEF_SMALL_STRING_OPTI
inline constexpr int SMALL_STRING_OPTI = 15;
                                #endif

                                #ifndef DEF_add_xVC6X5Gm7xe
                                #define DEF_add_xVC6X5Gm7xe
inline bool add_xVC6X5Gm(s_Set_5e8gOOeJ71a& _, const uint64_t key)
{
    fu::view<uint64_t> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_ZAz3Jw6L(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, key);
    return true;
}
                                #endif

static fu::str cgStringLiteral_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_9CJmuVSD(node.type))
        noteDefect_i4S3ctpP(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    if (is_primitive_hxWWgdZ1(node.type.vtype))
        return cgEnumv_i4S3ctpP(node.type, node.value, outputs, _current_fn, _here, ctx, module, options);
    else
    {
        fu::str stringAnnot = annotateString_i4S3ctpP(outputs);
        /*MOV*/ fu::str esc = escapeStringLiteral_i4S3ctpP(node.value, '"');
        if (is_ref_9CJmuVSD(node.type) && ifArrayRef_annotateAsSlice_i4S3ctpP(node.type))
            return esc + "_view"_fu;
        else
        {
            esc += "_fu"_fu;
            if (hasStatic_7Yz9ezW2(node.type.lifetime) || ((node.value.size() > SMALL_STRING_OPTI) && _current_fn.target))
            {
                s_TEA hash {};
                hash_l6RUR9Sz(hash, node.value);
                uint64_t BL_7_v {};
                fu::str dedupe = digest62_lweHUmk8((__extension__ (
                {
                    const s_TEA& tea = hash;
                    BL_7_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
                (void)0;}), BL_7_v), 0);
                /*MOV*/ fu::str id = ("str_"_fu + dedupe);
                uint64_t BL_8_v {};
                if (add_xVC6X5Gm(outputs._static_strings, (__extension__ (
                {
                    const s_TEA& tea = hash;
                    BL_8_v = ((uint64_t(tea.v0) | (uint64_t(tea.v1) << 32ull)));
                (void)0;}), BL_8_v)))
                {
                    fu::str prio = cgInitPrio_i4S3ctpP(module.modid, outputs, ctx);
                    fu::str& src = outputs._static_string_src;
                    src += ("\n                                #ifndef STR_"_fu + dedupe);
                    src += ("\n                                #define STR_"_fu + dedupe);
                    src += (((((((("\nstatic const "_fu + stringAnnot) + " "_fu) + id) + " "_fu) + prio) + "{ "_fu) + esc) + " };"_fu);
                    src += "\n                                #endif\n"_fu;
                };
                esc = static_cast<fu::str&&>(id);
            };
            if (!is_ref_9CJmuVSD(node.type))
                return ((stringAnnot + "("_fu) + esc) + ")"_fu;
            else
                return /*NRVO*/ esc;

        };
    };
}

static fu::str cgArrayLiteral_i4S3ctpP(const s_SolvedNode& node, const s_Type& callarg, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isIrrelevant_9CJmuVSD(node.type))
        noteDefect_i4S3ctpP(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);

    fu::vec<fu::str> _0 {};
    fu::vec<fu::str> items = ((_0 = cgNodes_i4S3ctpP(node.items, s_Mode_M_CHECK_NEVER_LTR, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options)) ? static_cast<fu::vec<fu::str>&&>(_0) : BUG_i4S3ctpP("cgArrayLiteral: arrlit.items.len == 0, should be 'empty' instead"_fu, _here, ctx));
    fu::str src = join_roEBocCS(items, ", "_fu);
    fu::str T = typeAnnotBase_i4S3ctpP(clear_sliceable_1qjplDUo(node.type.vtype, _here, ctx, module), s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
    if (is_ref_9CJmuVSD(callarg) && ifArrayRef_annotateAsSlice_i4S3ctpP(callarg))
    {
        include_i4S3ctpP("<fu/view.h>"_fu, outputs);
        return ((("fu::view<"_fu + T) + "> {{ "_fu) + src) + " }}"_fu;
    }
    else
    {
        include_i4S3ctpP("<fu/vec.h>"_fu, outputs);
        return ((("fu::vec<"_fu + T) + "> {{ "_fu) + src) + " }}"_fu;
    };
}

                                #ifndef DEF___XZquILfdlae
                                #define DEF___XZquILfdlae
inline static bool _XZquILfd(const int locid, const bool isAlwaysMoveable, const s_TokenIdx& _here, const s_Context& ctx)
{
    return locid || isAlwaysMoveable || BUG_i4S3ctpP("cgCopyOrMove: Considering a move from non-local lifetime."_fu, _here, ctx);
}
                                #endif

                                #ifndef DEF_Lifetime_each_ZzRrEFSrMtb
                                #define DEF_Lifetime_each_ZzRrEFSrMtb
inline void Lifetime_each_ZzRrEFSr(const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
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
        int BL_10_v {};
        _XZquILfd(((r & 1u) ? 0 : (__extension__ (
        {
            const unsigned v = (r >> 1u);
            BL_10_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
        (void)0;}), BL_10_v)), ((r == 0b0101u) || (r == 0b1001u)), _here, ctx);
    };
}
                                #endif

static void sanityCheck_i4S3ctpP(const s_Lifetime& lt, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (lt)
    {
        Lifetime_each_ZzRrEFSr(lt, _here, ctx);
    }
    else
    {
        BUG_i4S3ctpP("cgCopyOrMove: Considering a move from an empty lifetime."_fu, _here, ctx);
    };
}

static bool supportsNRVO_i4S3ctpP(const s_Target& t, const s_Context& ctx, const s_Module& module)
{
    int BL_1_v {};
    if ((GET_i4S3ctpP(t, ctx, module).kind == s_Kind_var) && !((__extension__ (
    {
        const unsigned v = unsigned((t._packed & 0xfffffull));
        BL_1_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
    (void)0;}), BL_1_v) < 0))
        return !is_ref_9CJmuVSD(GET_i4S3ctpP(t, ctx, module).solved.type);
    else
        return false;

}

static bool mayNeedConstCast_cqSTVt8D(fu::view<s_SolvedNode> items, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = 0; i < items.size(); i++)
    {
        if (mayNeedConstCast_i4S3ctpP(items[i], _here, ctx, module))
            return true;

    };
    return false;
}

                                #ifndef DEF___leWMZvAgmyi
                                #define DEF___leWMZvAgmyi
inline static bool _leWMZvAg(const bool isArgIdx, const bool isAlwaysMoveable, const s_TokenIdx& _here, const s_Context& ctx)
{
    return isArgIdx ? isArgIdx : isAlwaysMoveable ? isAlwaysMoveable : BUG_i4S3ctpP("About to return mayNeedConstCast, but fn returns non-arg refs."_fu, _here, ctx);
}
                                #endif

                                #ifndef DEF_Lifetime_each_E41VH0asTy4
                                #define DEF_Lifetime_each_E41VH0asTy4
inline void Lifetime_each_E41VH0as(const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
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
        _leWMZvAg(((r & 3u) == 3u), ((r == 0b0101u) || (r == 0b1001u)), _here, ctx);
    };
}
                                #endif

static bool mayNeedConstCast_i4S3ctpP(const s_SolvedNode& expr, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (is_mutref_9CJmuVSD(expr.type, _here, ctx) || !is_ref_9CJmuVSD(expr.type))
        return false;
    else if ((expr.kind == s_Kind_and) || (expr.kind == s_Kind_or))
        return mayNeedConstCast_cqSTVt8D(expr.items, _here, ctx, module);
    else if (expr.kind == s_Kind_if)
        return mayNeedConstCast_cqSTVt8D(fu::get_view(expr.items, 1, 3), _here, ctx, module);
    else if (expr.kind == s_Kind_call)
    {
        const s_Kind k = GET_i4S3ctpP(expr.target, ctx, module).kind;
        if (k == s_Kind_field)
            return mayNeedConstCast_cqSTVt8D(expr.items, _here, ctx, module);
        else if (k == s_Kind_var)
        {
            const s_Type& place = GET_i4S3ctpP(expr.target, ctx, module).solved.type;
            if (is_sliceable_hxWWgdZ1(place.vtype) && is_ref_9CJmuVSD(place) && !is_mutref_9CJmuVSD(place, _here, ctx) && ifArrayRef_annotateAsVecRange_i4S3ctpP(place))
                return true;
            else
                return false;

        }
        else
        {
            const s_Type& t = GET_i4S3ctpP(expr.target, ctx, module).type;
            const bool mayNeedConstCast = (is_ref_9CJmuVSD(t) ? !is_mutref_9CJmuVSD(t, _here, ctx) : false);
            if (mayNeedConstCast)
            {
                sanityCheck_i4S3ctpP(expr.type.lifetime, _here, ctx);
                Lifetime_each_E41VH0as(t.lifetime, _here, ctx);
            };
            return mayNeedConstCast;
        };
    }
    else
        return true;

}

static fu::str cgCopyOrMove_cqSTVt8D(const s_Kind kind, const s_Type& type, const fu::str& src, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (kind == s_Kind_move)
        return cgMove_i4S3ctpP(type, src, false, outputs, _current_fn, _here, ctx, module, options);
    else
        return cgCopy_i4S3ctpP(type, src, outputs, _current_fn, _here, ctx, module, options);

}

static fu::str cgCopyOrMove_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& expr = only_LqU08rcL(node.items);
    if (is_ref_9CJmuVSD(expr.type))
    {
        /*MOV*/ fu::str src = cgNode_i4S3ctpP(expr, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        if ((mode & s_Mode_M_RETURN) && is_trivial_1qjplDUo(node.type.vtype, _here, ctx, module))
            return /*NRVO*/ src;
        else
        {
            if (node.kind == s_Kind_move)
            {
                sanityCheck_i4S3ctpP(expr.type.lifetime, _here, ctx);
                if (mode & s_Mode_M_RETURN)
                {
                    const bool nrvo = (((expr.kind == s_Kind_call) && (expr.items.size() == 0)) ? supportsNRVO_i4S3ctpP(expr.target, ctx, module) : false);
                    if (nrvo)
                        return "/*NRVO*/ "_fu + src;

                };
                if (!is_trivial_1qjplDUo(node.type.vtype, _here, ctx, module))
                {
                    const bool mayNeedConstCast = mayNeedConstCast_i4S3ctpP(expr, _here, ctx, module);
                    if (is_sliceable_hxWWgdZ1(node.type.vtype) && !ifArrayRef_annotateAsVec_i4S3ctpP(node.type))
                    {
                        if (mayNeedConstCast)
                        {
                            noteDefect_i4S3ctpP(s_CGDefects_ConstCast, outputs, _here, ctx, options);
                            src += ".const_cast_mut()"_fu;
                        };
                        src += (hasZeroes_i4S3ctpP(expr.type.lifetime, _current_fn, ctx, module) ? ".destructive_move_or_default()"_fu : ".destructive_move()"_fu);
                        return /*NRVO*/ src;
                    }
                    else if (mayNeedConstCast)
                    {
                        noteDefect_i4S3ctpP(s_CGDefects_ConstCast, outputs, _here, ctx, options);
                        src = (((("const_cast<"_fu + typeAnnotBase_i4S3ctpP(node.type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options)) + "&>("_fu) + src) + ")"_fu);
                    };
                };
            };
            if (node.value && s_DevOptions((options.dev & s_DevOptions_DEV_CG_LifetimeAnnots)))
                src = ((("/*"_fu + node.value) + "*/ "_fu) + src);

            return cgCopyOrMove_cqSTVt8D(node.kind, expr.type, src, outputs, _current_fn, _here, ctx, module, options);
        };
    }
    else
        BUG_i4S3ctpP("cgCopyOrMove: !expr.is_ref"_fu, _here, ctx);

}

static fu::str blockWrapSubstatement_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return cgBlock_i4S3ctpP(node, ((s_Mode_M_STMT | s_Mode_M_OPT_CURLIES) | mode), outputs, _current_fn, _here, ctx, module, options);
}

static fu::str blockWrap_unlessIf_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if ((node.kind == s_Kind_if) || (node.kind == s_Kind_and))
        return " "_fu + cgNode_i4S3ctpP(node, s_Mode_M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
    else
    {
        return blockWrapSubstatement_i4S3ctpP(node, s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
    };
}

static fu::str cgIf_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& n0 = node.items[0];
    if (is_never_9CJmuVSD(n0.type.vtype))
        BUG_i4S3ctpP("cgIf: cond.is_never"_fu, _here, ctx);
    else
    {
        const s_SolvedNode& n1 = node.items[1];
        const s_SolvedNode& n2 = node.items[2];
        const bool stmt = !!(mode & s_Mode_M_STMT);
        fu::str cond = (n0 ? cgNode_i4S3ctpP(n0, (s_Mode_M_RETBOOL | (stmt ? s_Mode_M_PARENS : s_Mode{})), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str cons = (n1 ? (stmt ? blockWrapSubstatement_i4S3ctpP(n1, s_Mode{}, outputs, _current_fn, _here, ctx, module, options) : cgNode_i4S3ctpP(n1, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) : fu::str{});
        fu::str alt = (n2 ? (stmt ? blockWrap_unlessIf_i4S3ctpP(n2, outputs, _current_fn, _here, ctx, module, options) : cgNode_i4S3ctpP(n2, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) : fu::str{});
        if (stmt)
        {
            return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((outputs._indent + "else"_fu) + alt) : ""_fu);
        }
        else
        {
            if (propositionOK_9CJmuVSD(node.type, true, _here, ctx))
            {
                if (!propositionOK_9CJmuVSD(n1.type, true, _here, ctx))
                    cons = (("!!("_fu + cons) + ")"_fu);

                if (!propositionOK_9CJmuVSD(n2.type, true, _here, ctx))
                    alt = (("!!("_fu + alt) + ")"_fu);

            };
            return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;
        };
    };
}

static void cgAndOr_concat_i4S3ctpP(fu::str& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, const bool last_never_ok, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Mode mode = (s_Mode_M_RETBOOL | ((parens && (items.size() == 1)) ? s_Mode_M_PARENS : s_Mode{}));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const s_SolvedNode& item = items[i];
        if (is_never_9CJmuVSD(item.type.vtype) && !(last_never_ok && (i == (items.size() - 1))))
            BUG_i4S3ctpP("cgAndOr_concat: item.is_never"_fu, _here, ctx);
        else
        {
            fu::str term = cgNode_i4S3ctpP(item, mode, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (isIrrelevant_9CJmuVSD(item.type))
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

static bool acceptsBools_fromAndOr_i4S3ctpP(const s_Type& type)
{
    if (!is_ref_9CJmuVSD(type))
        return type.vtype.canon == t_bool.vtype.canon;
    else
        return false;

}

static fu::str via_cqSTVt8D(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (!tv.id)
    {
        tv.id = TEMPVAR_declare_i4S3ctpP(type, tv.ptr_flip, tv.annot, s_Mode{}, (*(const fu::str*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
    };
    fu::str cond = TEMPVAR_peek_i4S3ctpP(tv.ptr_flip, (("("_fu + TEMPVAR_init_i4S3ctpP(tv.id, tv.ptr_flip, expr, false)) + ")"_fu), false);
    fu::str cons = TEMPVAR_consume_i4S3ctpP(tv.id, type, tv.ptr_flip, outputs, _current_fn, _here, ctx, module, options);
    return ((cond + " ? "_fu) + cons) + " : "_fu;
}

static fu::str via_i4S3ctpP(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (isFieldChain_i4S3ctpP(node, ctx, module))
    {
        fu::str trivial = cgNode_i4S3ctpP(node, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    }
    else
    {
        if ((node.kind == s_Kind_copy) || (node.kind == s_Kind_move))
        {
            const s_SolvedNode& expr = only_LqU08rcL(node.items);
            if (isFieldChain_i4S3ctpP(expr, ctx, module))
            {
                fu::str _0 {};
                return (_0 = (cgNode_i4S3ctpP(expr, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) + " ? "_fu), (static_cast<fu::str&&>(_0) + cgNode_i4S3ctpP(node, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options))) + " : "_fu;
            };
        };
        return via_cqSTVt8D(tv, type, cgNode_i4S3ctpP(node, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options), outputs, _current_fn, _here, ctx, module, options);
    };
}

static fu::str cgOr_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Type& type = node.type;
    fu::view<s_SolvedNode> items = node.items;
    const bool stmt = !!(mode & s_Mode_M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = "if (!("_fu;
        cgAndOr_concat_i4S3ctpP(src, " || "_fu, fu::get_view_start0(items, (items.size() - 1)), true, false, outputs, _current_fn, _here, ctx, module, options);
        src += "))"_fu;
        src += blockWrapSubstatement_i4S3ctpP(items[(items.size() - 1)], s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = (!(mode & s_Mode_M_PARENS) ? "("_fu : fu::str{});
        if (acceptsBools_fromAndOr_i4S3ctpP(type))
            cgAndOr_concat_i4S3ctpP(src, " || "_fu, items, true, true, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < (items.size() - 1); i++)
            {
                const s_SolvedNode* _0;
                const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx));
                s_SolvedNode tail { item };
                if (item.kind == s_Kind_and)
                {
                    fu::view<s_SolvedNode> items_1 = item.items;
                    const s_SolvedNode* _1;
                    tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx));
                    cgAndOr_concat_i4S3ctpP(src, " && "_fu, fu::get_view_start0(items_1, (items_1.size() - 1)), false, false, outputs, _current_fn, _here, ctx, module, options);
                    src += " && "_fu;
                };
                src += via_i4S3ctpP(tv, type, tail, outputs, _current_fn, _here, ctx, module, options);
            };
            const s_SolvedNode* _2;
            const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx));
            src += cgNode_i4S3ctpP(tail, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
        };
        if (!(mode & s_Mode_M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_cqSTVt8D(fu::view<s_SolvedNode> items, const s_Type& type, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const bool stmt = !!(mode & s_Mode_M_STMT);
    if (stmt)
    {
        /*MOV*/ fu::str src = "if ("_fu;
        cgAndOr_concat_i4S3ctpP(src, " && "_fu, fu::get_view_start0(items, (items.size() - 1)), true, false, outputs, _current_fn, _here, ctx, module, options);
        src += ")"_fu;
        src += blockWrapSubstatement_i4S3ctpP(items[(items.size() - 1)], s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu::str src = (!(mode & s_Mode_M_PARENS) ? "("_fu : fu::str{});
        if (acceptsBools_fromAndOr_i4S3ctpP(type))
            cgAndOr_concat_i4S3ctpP(src, " && "_fu, items, true, true, outputs, _current_fn, _here, ctx, module, options);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via_i4S3ctpP(tv, type, item, outputs, _current_fn, _here, ctx, module, options));
                else
                {
                    src += cgNode_i4S3ctpP(item, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
                };
            };
        };
        if (!(mode & s_Mode_M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu::str cgAnd_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    return cgAnd_cqSTVt8D(node.items, node.type, mode, outputs, _current_fn, _here, ctx, module, options);
}

static fu::str cgLetDef_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int BL_1_v {};
    const bool TODO_FIX_skipPrivateGlobalLetdefs_shouldHaveBeenRemovedFromIR = (!(__extension__ (
    {
        const s_Target& t = _current_fn.target;
        BL_1_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
    (void)0;}), BL_1_v) ? !isExtLinked_i4S3ctpP(GET_i4S3ctpP(node.target, ctx, module)) : false);
    const s_Mode mode_1 = (mode | ((isIrrelevant_9CJmuVSD(node.type) && !(mode & s_Mode_M_STMT)) ? s_Mode_M_VOID_EXPR : s_Mode{}));
    fu::str _0 {};
    return (_0 = (!TODO_FIX_skipPrivateGlobalLetdefs_shouldHaveBeenRemovedFromIR ? cgLet_i4S3ctpP(node.target, mode_1, outputs, _current_fn, _here, ctx, module, options) : fu::str{})) ? static_cast<fu::str&&>(_0) : ((mode_1 & s_Mode_M_STMT) ? ""_fu : "void()"_fu);
}

                                #ifndef DEF___NNfhLzUlbm4
                                #define DEF___NNfhLzUlbm4
inline static void _NNfhLzUl(const s_Target& target, s_Target& last, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (last)
        BUG_i4S3ctpP(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_i4S3ctpP(last, ctx, module).name) + " vs "_fu) + GET_i4S3ctpP(target, ctx, module).name), _here, ctx);
    else
    {
        last = target;
        if (GET_i4S3ctpP(target, ctx, module).kind == s_Kind_fn)
        {
            fu::view<s_Argument> args = EXT_i4S3ctpP(target, ctx, module).args;
            for (int i = 0; i < args.size(); i++)
            {
                if (args[i].flags & s_Flags_F_IMPLICIT)
                    BUG_i4S3ctpP("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, _here, ctx);

            };
            ensureFnUsable_i4S3ctpP(target, outputs, _current_fn, _here, ctx, module, options);
        }
        else
            BUG_i4S3ctpP(((x7E_3lDd4lqo("Cannot codegen a non-fn: "_fu, str_WkqQ7QhO(GET_i4S3ctpP(target, ctx, module).kind)) + " "_fu) + GET_i4S3ctpP(target, ctx, module).name), _here, ctx);

    };
}
                                #endif

                                #ifndef DEF_unpackAddrOfFn_ui211F7zr2f
                                #define DEF_unpackAddrOfFn_ui211F7zr2f
inline void unpackAddrOfFn_ui211F7z(fu::view<char> canon, s_Target& last, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Target mi = parseLocalOrGlobal_xQNS19Zn(canon, offset);
            int BL_4_v {};
            _NNfhLzUl(Target_xQNS19Zn(int(unsigned(((mi._packed >> 40ull) & 0xfffffull))), int(unsigned(((mi._packed >> 20ull) & 0xfffffull))), (__extension__ (
            {
                const unsigned v = unsigned((mi._packed & 0xfffffull));
                BL_4_v = (int(((v >> 1u) ^ ((v & 1u) ? 0xffffffffu : 0x0u))));
            (void)0;}), BL_4_v)), last, outputs, _current_fn, _here, ctx, module, options);
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static fu::str cgEmpty_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Type& type = (node.type ? node.type : BUG_i4S3ctpP("cgEmpty: !node.type"_fu, _here, ctx));
    if (mode & s_Mode_M_STMT)
        return ""_fu;
    else if ((mode & s_Mode_M_ARG_TO_NATIVE) && isAddrOfFn_9CJmuVSD(type))
    {
        s_Target last {};
        unpackAddrOfFn_ui211F7z(type.vtype.canon, last, outputs, _current_fn, _here, ctx, module, options);
        return "&"_fu + fnID_i4S3ctpP(last, _here, ctx, module);
    }
    else if (is_mutref_9CJmuVSD(type, _here, ctx))
        BUG_i4S3ctpP("Cannot definit mutrefs."_fu, _here, ctx);
    else if (isIrrelevant_9CJmuVSD(type))
    {
        noteDefect_i4S3ctpP(s_CGDefects_IrrelevantLiteral, outputs, _here, ctx, options);
        return "void()"_fu;
    }
    else
    {
        if (is_ref_9CJmuVSD(type) && !isPassByValue_hxWWgdZ1(type.vtype))
        {
            if (!is_sliceable_hxWWgdZ1(type.vtype) || ifArray_annotateAsVec_i4S3ctpP(type))
            {
                include_i4S3ctpP("<fu/default.h>"_fu, outputs);
                if (is_primitive_hxWWgdZ1(type.vtype))
                    BUG_i4S3ctpP("cgDefault: Genering NIL refs to primitives."_fu, _here, ctx);
                else
                {
                    return ("(*("_fu + typeAnnot_i4S3ctpP(clear_refs_9CJmuVSD(s_Type(type)), s_Mode{}, outputs, _current_fn, _here, ctx, module, options)) + "*)fu::NIL)"_fu;
                };
            };
        };
        fu::str _0 {};
        return (_0 = try_cgPrettierEmpty_i4S3ctpP(type, outputs, _current_fn, _here, ctx, module, options)) ? static_cast<fu::str&&>(_0) : (typeAnnot_i4S3ctpP(type, s_Mode{}, outputs, _current_fn, _here, ctx, module, options) + "{}"_fu);
    };
}

                                #ifndef DEF_x3Cx3E_WhvoP02V4ek
                                #define DEF_x3Cx3E_WhvoP02V4ek
inline int x3Cx3E_WhvoP02V(const s_Helpers& a, const s_Helpers& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_XrkW2YUZ(a.index, b.index)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Dx3D_FDVwlGlNbw4
                                #define DEF_x3Dx3D_FDVwlGlNbw4
inline bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return !x3Cx3E_WhvoP02V(a, b);
}
                                #endif

static const s_cg_Block& findBlock_i4S3ctpP(const s_Helpers& helpers, const s_SolvedNode& expr, const s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const s_cg_Block& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
        {
            TEST_noDanglingRefs_i4S3ctpP(block.surviving_locals, expr, _current_fn, _here, ctx, module);
            return block;
        };
    };
    BUG_i4S3ctpP(x7E_3lDd4lqo("No such block in scope: "_fu, fu::i64dec(helpers.index)), _here, ctx);
}

static fu::str cgGoto_i4S3ctpP(const s_cg_Block& block, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Options& options)
{
    noteDefect_i4S3ctpP(s_CGDefects_Goto, outputs, _here, ctx, options);
    return "goto "_fu + block.name;
}

static fu::str cgJump_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Helpers& helpers = node.helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    const s_SolvedNode& expr = only_LqU08rcL(node.items);
    s_cg_Block block { (!use_return ? findBlock_i4S3ctpP(helpers, expr, _current_fn, _here, ctx, module) : (*(const s_cg_Block*)fu::NIL)) };
    if ((expr.kind != s_Kind_empty) || !isIrrelevant_9CJmuVSD(expr.type))
    {
        if (!use_return)
        {
            fu::str value = cgNode_i4S3ctpP(expr, (!block.has_val ? s_Mode_M_STMT : s_Mode{}), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            if (block.has_val)
            {
                fu::str id = (block.name + "_v"_fu);
                value = TEMPVAR_init_i4S3ctpP(id, block.ptr_flip, value, false);
            };
            return ((("{ "_fu + value) + "; "_fu) + cgGoto_i4S3ctpP(block, outputs, _here, ctx, options)) + "; }"_fu;
        }
        else
            return "return "_fu + cgNode_i4S3ctpP(expr, (s_Mode_M_PARENS | s_Mode_M_RETURN), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);

    }
    else if (use_return)
        return "return"_fu;
    else if (helpers == _current_fn.can_break)
        return "break"_fu;
    else if (helpers == _current_fn.can_cont)
        return "continue"_fu;
    else
        return cgGoto_i4S3ctpP(block, outputs, _here, ctx, options);

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

static fu::str cgLoop_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_SolvedNode& n_pre = node.items[LOOP_PRE];
    if (n_pre)
    {
        s_SolvedNode pre { n_pre };
        if (pre.kind != s_Kind_block)
        {
            pre.kind = s_Kind_block;
            pre.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(n_pre) } };
        };
        /*MOV*/ s_SolvedNode loop { node };
        loop.items.mutref(LOOP_INIT) = s_SolvedNode{};
        loop.items.mutref(LOOP_PRE) = s_SolvedNode{};
        /*MOV*/ s_SolvedNode n_pre_cond { loop.items[LOOP_PRE_COND] };
        if (n_pre_cond)
        {
            if (loop.items[LOOP_POST_COND])
                BUG_i4S3ctpP("TODO: cgLoop with pre, pre_cond & post_cond."_fu, _here, ctx);
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
            guard.kind = s_Kind_and;
            guard.items = fu::vec<s_SolvedNode> { fu::slate<2, s_SolvedNode> { static_cast<s_SolvedNode&&>(n_pre_cond), s_SolvedNode(pre) } };
            pre = n_pre;
            pre.kind = s_Kind_block;
            pre.items = fu::vec<s_SolvedNode> { fu::slate<1, s_SolvedNode> { static_cast<s_SolvedNode&&>(guard) } };
        };
        const s_SolvedNode& n_init = node.items[LOOP_INIT];
        if (n_init)
        {
            pre.items.unshift(s_SolvedNode(n_init));
        };
        return cgNode_i4S3ctpP(pre, s_Mode_M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
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
        fu::str init = (n_init ? cgNode_i4S3ctpP(n_init, s_Mode_M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str pre_cond = (n_pre_cond ? cgNode_i4S3ctpP(n_pre_cond, (s_Mode_M_RETBOOL | s_Mode_M_PARENS), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str post = (n_post ? cgNode_i4S3ctpP(n_post, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        /*MOV*/ fu::str post_cond = (n_post_cond ? cgNode_i4S3ctpP(n_post_cond, s_Mode_M_RETBOOL, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        fu::str name = x7E_3lDd4lqo("LL_"_fu, fu::i64dec(_current_fn.num_labels++));
        const s_Helpers& helpers = node.helpers;
        _current_fn.can_break = helpers;
        const int blocks0 = _current_fn.blocks.size();
        fu_DEFER(_current_fn.blocks.shrink(blocks0));
        _current_fn.blocks += s_cg_Block { fu::str(name), s_Helpers(helpers), false, s_PointerFlip_None, fu::vec<int>{} };
        fu::str body = (n_body ? blockWrapSubstatement_i4S3ctpP(n_body, s_Mode_M_LOOP_BODY, outputs, _current_fn, _here, ctx, module, options) : fu::str{});
        const bool labelUsed = has_nst65ofM(body, (("goto "_fu + name) + ";"_fu));
        fu::str breakLabel = (labelUsed ? ((" "_fu + name) + ":;"_fu) : fu::str{});
        if (post_cond)
        {
            if (init || pre_cond)
                BUG_i4S3ctpP("TODO: cgLoop with post_cond & init/pre_cond."_fu, _here, ctx);
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

static fu::str cgTryCatch_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view<s_SolvedNode> items = node.items;
    fu::str tRy = blockWrapSubstatement_i4S3ctpP(items[TRY_TRY], s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
    const s_SolvedNode& err_let = items[TRY_ERR];
    if ((err_let.kind == s_Kind_letdef) || (err_let.kind == s_Kind_empty))
    {
        const s_Target& err_trg = err_let.target;
        fu::str err = (err_trg ? localID_i4S3ctpP(err_trg, true, _current_fn, _here, ctx, module) : fu::str{});
        fu::str cAtch = blockWrapSubstatement_i4S3ctpP(items[TRY_CATCH], s_Mode{}, outputs, _current_fn, _here, ctx, module, options);
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
        BUG_i4S3ctpP("TRY_ERR not a letdef/empty"_fu, _here, ctx);

}

static fu::str cgDefer_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    include_i4S3ctpP("<fu/defer.h>"_fu, outputs);
    fu::str which = ((node.value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((node.value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_i4S3ctpP(only_LqU08rcL(node.items), s_Mode_M_STMT, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options)) + ")"_fu;
}

                                #ifndef DEF_if_first_vW4NXAfyKXc
                                #define DEF_if_first_vW4NXAfyKXc
inline char if_first_vW4NXAfy(fu::view<char> s)
{
    if (s.size())
        return s[0];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str inferIndentation_i4S3ctpP(const fu::str& v)
{
    if (if_first_vW4NXAfy(v) == '\n')
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

                                #ifndef DEF_find_2C20a41o6u3
                                #define DEF_find_2C20a41o6u3
inline int find_2C20a41o(fu::view<char> haystack, fu::view<char> needle, const int start)
{
    fu::view<char> slice = fu::get_view(haystack, start);
    const int res = find_5WUbOXwW(slice, needle);
    return res + ((res < 0) ? 0 : start);
}
                                #endif

                                #ifndef DEF_replace_EgBUdXNI93i
                                #define DEF_replace_EgBUdXNI93i
inline fu::str replace_EgBUdXNI(const fu::str& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu::str result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = find_2C20a41o(str, all, last)) >= 0))
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

                                #ifndef DEF___aPA34wvQWDj
                                #define DEF___aPA34wvQWDj
inline static bool _aPA34wvQ(const fu::str& i, s_Outputs& outputs)
{
    return add_eHVOG4pi(outputs._build_hacks.link, i);
}
                                #endif

                                #ifndef DEF___PISIdwBGbH4
                                #define DEF___PISIdwBGbH4
inline static bool _PISIdwBG(const fu::str& i, s_Outputs& outputs)
{
    return add_eHVOG4pi(outputs._build_hacks.include_dirs, i);
}
                                #endif

                                #ifndef DEF___I1ZEQ8qfQjj
                                #define DEF___I1ZEQ8qfQjj
inline static bool _I1ZEQ8qf(const fu::str& i, s_Outputs& outputs)
{
    return add_eHVOG4pi(outputs._build_hacks.extra_sources, i);
}
                                #endif

                                #ifndef DEF___tuOuRfxv2Vc
                                #define DEF___tuOuRfxv2Vc
inline static void _tuOuRfxv(const fu::str& i, s_Outputs& outputs)
{
    include_i4S3ctpP((starts_8EDTwZj1(i, '<') ? fu::str(i) : (('"' + i) + '"')), outputs);
}
                                #endif

static fu::str cgCompilerPragma_i4S3ctpP(const s_SolvedNode& node, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::view<char> cmd = node.value;
    if ((cmd == "emit"_fu) || (cmd == "emit_top"_fu) || (cmd == "input"_fu) || (cmd == "output"_fu) || (cmd == "clock"_fu))
    {
        /*MOV*/ fu::str result = ""_fu;
        fu::str indent = ""_fu;
        if (node.items)
        {
            const s_SolvedNode& node_1 = node.items[0];
            if (node_1.kind == s_Kind_str)
                indent = inferIndentation_i4S3ctpP(node_1.value);

        };
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& node_1 = node.items[i];
            if (node_1.kind == s_Kind_str)
                result += replace_EgBUdXNI(fu::slice(node_1.value, ((i == 0) ? indent.size() : 0)), indent, outputs._indent);
            else
            {
                result += cgNode_i4S3ctpP(node_1, s_Mode{}, (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options);
            };
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
        if (_current_fn && (cmd != "emit_top"_fu))
            return /*NRVO*/ result;
        else
        {
            result += "\n"_fu;
            if (!has_JcV6lPAx(outputs._top_emits, result))
                outputs._top_emits += static_cast<fu::str&&>(result);

            return ""_fu;
        };
    }
    else if (cmd == "link"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_Kind_str)
                BUG_i4S3ctpP((x7E_3lDd4lqo("compiler link: All arguments must be string literals, got a `"_fu, str_WkqQ7QhO(item.kind)) + "`."_fu), _here, ctx);
            else
                _aPA34wvQ(item.value, outputs);

        };
        return ""_fu;
    }
    else if (cmd == "include_dirs"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_Kind_str)
                BUG_i4S3ctpP((x7E_3lDd4lqo("compiler link: All arguments must be string literals, got a `"_fu, str_WkqQ7QhO(item.kind)) + "`."_fu), _here, ctx);
            else
                _PISIdwBG(item.value, outputs);

        };
        return ""_fu;
    }
    else if (cmd == "sources"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_Kind_str)
                BUG_i4S3ctpP((x7E_3lDd4lqo("compiler link: All arguments must be string literals, got a `"_fu, str_WkqQ7QhO(item.kind)) + "`."_fu), _here, ctx);
            else
                _I1ZEQ8qf(item.value, outputs);

        };
        return ""_fu;
    }
    else if (cmd == "include"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_Kind_str)
                BUG_i4S3ctpP((x7E_3lDd4lqo("compiler link: All arguments must be string literals, got a `"_fu, str_WkqQ7QhO(item.kind)) + "`."_fu), _here, ctx);
            else
                _tuOuRfxv(item.value, outputs);

        };
        return ""_fu;
    }
    else
        BUG_i4S3ctpP(("Unknown compiler pragma: "_fu + cmd), _here, ctx);

}

static fu::str cgNode_i4S3ctpP(const s_SolvedNode& node, const s_Mode mode, const s_Type& callarg, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    const s_Kind k = (node.kind ? node.kind : BUG_i4S3ctpP("cgNode: No node.kind."_fu, _here, ctx));

    {
        const s_TokenIdx& node_1 = node.token;
        if (node_1)
            _here = node_1;

    };
    if (k == s_Kind_not)
        return cgNot_i4S3ctpP(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_call)
        return cgCall_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_int)
        return cgArithmeticLiteral_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_real)
        return cgArithmeticLiteral_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_char)
        return cgCharLiteral_i4S3ctpP(node, outputs, _here, ctx, options);
    else if (k == s_Kind_str)
        return cgStringLiteral_i4S3ctpP(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_arrlit)
        return cgArrayLiteral_i4S3ctpP(node, callarg, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_bool)
        return fu::str(cgBoolLiteral_i4S3ctpP(node.value, _here, ctx));
    else if (k == s_Kind_copy)
        return cgCopyOrMove_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_move)
        return cgCopyOrMove_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_if)
        return cgIf_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_or)
        return cgOr_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_and)
        return cgAnd_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_letdef)
        return cgLetDef_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_block)
        return cgBlock_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_empty)
        return cgEmpty_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (!(mode & s_Mode_M_STMT))
        return cgBlock_i4S3ctpP(node, mode, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_jump)
        return cgJump_i4S3ctpP(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_loop)
        return cgLoop_i4S3ctpP(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_try)
        return cgTryCatch_i4S3ctpP(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_defer)
        return cgDefer_i4S3ctpP(node, outputs, _current_fn, _here, ctx, module, options);
    else if (k == s_Kind_pragma)
        return cgCompilerPragma_i4S3ctpP(node, outputs, _current_fn, _here, ctx, module, options);
    else
        BUG_i4S3ctpP(x7E_3lDd4lqo("cg: Unexpected "_fu, str_WkqQ7QhO(k)), _here, ctx);

}

static fu::vec<fu::str> cgNodes_i4S3ctpP(fu::view<s_SolvedNode> nodes, const s_Mode mode, fu::view<char> trail, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    /*MOV*/ fu::vec<fu::str> result {};
    fu::vec<fu::str> _tv0 {};
    if (mode & s_Mode_M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (mode & s_Mode_M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs););
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& node = nodes[i];
        if ((mode & s_Mode_M_CHECK_NEVER_LTR) && is_never_9CJmuVSD(node.type.vtype) && (i < (nodes.size() - 1)))
            BUG_i4S3ctpP("M_CHECK_NEVER_LTR: non-trailing node.is_never"_fu, _here, ctx);
        else
        {
            const bool isTrail = ((trail && (i == (nodes.size() - 1)) && !is_never_9CJmuVSD(node.type.vtype)) ? !isIrrelevant_9CJmuVSD(node.type) : false);
            /*MOV*/ fu::str src = (node ? cgNode_i4S3ctpP(node, (isTrail ? (mode & ~s_Mode_M_STMT) : mode), (*(const s_Type*)fu::NIL), outputs, _current_fn, _here, ctx, module, options) : fu::str{});
            if (src || (mode & s_Mode_M_STMT))
            {
                if ((mode & s_Mode_M_STMT) && _current_fn.TEMPVARs)
                {
                    result += _current_fn.TEMPVARs;
                    _current_fn.TEMPVARs.clear();
                };
                if (isTrail)
                    src = (((trail + "("_fu) + src) + ")"_fu);

                result.push(static_cast<fu::str&&>(src));
            }
            else
                BUG_i4S3ctpP((((x7E_3lDd4lqo("cgNodes: empty output for Node(kind=`"_fu, str_WkqQ7QhO(node.kind)) + "` value=`"_fu) + node.value) + "`)."_fu), _here, ctx);

        };
    };
    return /*NRVO*/ result;
}

                                #ifndef DEF_if_last_fWHNFvAM0jc
                                #define DEF_if_last_fWHNFvAM0jc
inline char if_last_fWHNFvAM(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str cgStatements_i4S3ctpP(fu::view<s_SolvedNode> nodes, int& count, fu::view<char> trail, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    fu::vec<fu::str> lines = cgNodes_i4S3ctpP(nodes, (s_Mode_M_STMT | s_Mode_M_CHECK_NEVER_LTR), trail, outputs, _current_fn, _here, ctx, module, options);
    count = lines.size();
    /*MOV*/ fu::str src = ""_fu;
    for (int i = 0; i < lines.size(); i++)
    {
        fu::view<char> line = lines[i];
        if (line)
        {
            src += (((if_first_vW4NXAfy(line) == '\n') ? ('\n' + line) : (outputs._indent + line)) + ((if_last_fWHNFvAM(line) == ';') ? '\n' : ';'));
        };
    };
    return /*NRVO*/ src;
}

static fu::str cgMain_i4S3ctpP(s_Outputs& outputs)
{
    /*MOV*/ fu::str src = ""_fu;
    if (outputs._hasMain)
    {
        fu::str zst = ""_fu;
        if (outputs._hasMain & MAIN_zst)
            zst = ", 0"_fu;

        if (outputs._hasMain & MAIN_argv)
        {
            annotateString_i4S3ctpP(outputs);
            src = ((((((((((("\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu::vec<fu::str> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu::to_str(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu::vec<fu::str>&&>(args))"_fu) + zst) + ";"_fu) + "\n}"_fu);
        }
        else
        {
            src = (("\nint main() { return fu_MAIN()"_fu + zst) + "; }"_fu);
        };
    };
    if (outputs._testsuite)
    {
        if (src)
            src = ("\n                                #else"_fu + src);

        src = ((((((("\n                                #ifdef fu_TESTSUITE"_fu + "\nint main()"_fu) + "\n{"_fu) + outputs._testsuite) + "\n    return 0;"_fu) + "\n}"_fu) + src) + "\n                                #endif"_fu);
    };
    if (src)
        src += "\n"_fu;

    return /*NRVO*/ src;
}

static fu::str collectDedupes_i4S3ctpP(const s_Set_6ARmtH0K78f& values, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> header, fu::view<char> footer)
{
    /*MOV*/ fu::str out = ""_fu;
    if (values)
        out += header;

    int BL_2_v {};
    for (int i = 0; i < (__extension__ (
    {
        const s_Set_6ARmtH0K78f& _ = values;
        BL_2_v = (_.keys_asc.size());
    (void)0;}), BL_2_v); i++)
    {
        fu::view<char> BL_5_v {};
        out += ((prefix + (__extension__ (
        {
            const s_Set_6ARmtH0K78f& _ = values;
            const int i_1 = i;
            BL_5_v = (_.keys_asc[i_1]);
        (void)0;}), static_cast<fu::view<char>&&>(BL_5_v))) + suffix);
    };
    if (out)
        out += footer;

    return /*NRVO*/ out;
}

                                #ifndef DEF_join_P3W3QNXygla
                                #define DEF_join_P3W3QNXygla
inline fu::str join_P3W3QNXy(fu::view<fu::str> a)
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
        const int N = 0;
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
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

static fu::str cgRoot_i4S3ctpP(const s_SolvedNode& root, fu::view<s_ScopeItem> scope, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_Options& options)
{
    int count {};
    fu::str src = cgStatements_i4S3ctpP(root.items, count, fu::view<char>{}, outputs, _current_fn, _here, ctx, module, options);
    int hasTestcasePass = 1;
    for (int isTestcasePass = 0; isTestcasePass < hasTestcasePass; isTestcasePass++)
    {
        if (isTestcasePass)
        {
            outputs._tfwd_src += "                                #ifdef fu_TESTSUITE\n"_fu;
            outputs._ffwd_src += "                                #ifdef fu_TESTSUITE\n"_fu;
            outputs._tdef_src += "                                #ifdef fu_TESTSUITE\n"_fu;
            outputs._fdef_src += "                                #ifdef fu_TESTSUITE\n"_fu;
        };
        fu_DEFER(if (isTestcasePass)
        {
            outputs._tfwd_src += "                                #endif\n"_fu;
            outputs._ffwd_src += "                                #endif\n"_fu;
            outputs._tdef_src += "                                #endif\n"_fu;
            outputs._fdef_src += "                                #endif\n"_fu;
        });
        for (int i = 0; i < scope.size(); i++)
        {
            const s_Target t = target_z0QqoZ5t(scope[i]);
            if ((int(unsigned(((t._packed >> 40ull) & 0xfffffull))) == module.modid) && (GET_i4S3ctpP(t, ctx, module).kind == s_Kind_fn) && isExtLinked_i4S3ctpP(GET_i4S3ctpP(t, ctx, module)))
            {
                if (!!(GET_i4S3ctpP(t, ctx, module).flags & F_TESTCASE) != !!isTestcasePass)
                {
                    hasTestcasePass = 2;
                    continue;
                }
                else
                    ensureFnDef_i4S3ctpP(t, false, outputs, _current_fn, _here, ctx, module, options);

            };
        };
    };
    fu::str main = cgMain_i4S3ctpP(outputs);
    return ((((((((((((((((((outputs._testsuite ? (("                                #ifdef fu_TESTSUITE\n"_fu + "#undef NDEBUG\n"_fu) + "                                #endif\n"_fu) : ""_fu) + collectDedupes_i4S3ctpP(outputs._libs, "#include "_fu, "\n"_fu, fu::view<char>{}, "\n"_fu)) + outputs._tfwd_src) + outputs._ffwd_src) + (outputs._ifdef_hotswap ? "                                #ifdef fu_HOTSWAP\n"_fu : fu::str{})) + outputs._ifdef_hotswap) + (outputs._ifdef_hotswap ? "                                #else\n"_fu : fu::str{})) + outputs._ifndef_hotswap) + (outputs._ifdef_hotswap ? "                                #endif\n"_fu : fu::str{})) + outputs._tdef_src) + outputs._static_string_src) + collectDedupes_i4S3ctpP(outputs._gcc_ignore, "#pragma GCC diagnostic ignored \""_fu, "\"\n"_fu, "#pragma GCC diagnostic push\n"_fu, "\n"_fu)) + join_P3W3QNXy(outputs._top_emits)) + (outputs._fdef_src ? "\n#ifndef fu_NO_fdefs\n"_fu : fu::str{})) + outputs._fdef_src) + (outputs._fdef_src ? "\n#endif\n"_fu : fu::str{})) + src) + main) + (outputs._gcc_ignore ? "\n#pragma GCC diagnostic pop\n"_fu : fu::str{});
}

static fu::str localPath_i4S3ctpP(const fu::str& path, const s_Module& module)
{
    if (starts_8EDTwZj1(path, '.'))
        return join_qZI0kCzt(dirname_qZI0kCzt(module.fname), path);
    else
        return fu::str(path);

}

                                #ifndef DEF_add_8Ex4HrqlBhg
                                #define DEF_add_8Ex4HrqlBhg
inline bool add_8Ex4Hrql(s_Set_95BJOojOc45& _, const int key)
{
    fu::view<int> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_XrkW2YUZ(keys_asc[i], key);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, key);
    return true;
}
                                #endif

static void visit_i4S3ctpP(const s_Module& m, s_Set_95BJOojOc45& testsuite_modids, const s_Context& ctx)
{
    for (int i = 0; i < m.in.parse.imports.size(); i++)
    {
        const int modid = m.in.parse.imports[i].modid;
        if (add_8Ex4Hrql(testsuite_modids, modid))
            visit_i4S3ctpP(ctx.modules[modid], testsuite_modids, ctx);

    };
}

s_CodegenOutput cpp_codegen_i4S3ctpP(const s_Module& module, const s_Context& ctx, const s_Options& options)
{
    s_TokenIdx _here {};
    s_Outputs outputs {};
    outputs._indent = "\n"_fu;
    s_cg_CurrentFn _current_fn {};
    const s_SolvedNode& root = module.out.solve.root;
    if (root.kind == s_Kind_root)
    {
        /*MOV*/ fu::str src = cgRoot_i4S3ctpP(root, module.out.solve.scope.items, outputs, _current_fn, _here, ctx, module, options);
        int BL_2_v {};
        for (int i = 0; i < (__extension__ (
        {
            const s_Set_6ARmtH0K78f& _ = outputs._build_hacks.extra_sources;
            BL_2_v = (_.keys_asc.size());
        (void)0;}), BL_2_v); i++)
        {
            const fu::str* BL_5_v;
            const fu::str& orig = (__extension__ (
            {
                const s_Set_6ARmtH0K78f& _ = outputs._build_hacks.extra_sources;
                const int i_1 = i;
                BL_5_v = &(_.keys_asc[i_1]);
            (void)0;}), *BL_5_v);
            /*MOV*/ fu::str file = localPath_i4S3ctpP(orig, module);
            src += (("\n// "_fu + orig) + "\n"_fu);
            read_VWJwj7Fs(static_cast<fu::str&&>(file), src, 0ll);
        };
        /*MOV*/ s_Set_95BJOojOc45 testsuite_modids {};
        if (outputs._testsuite)
        {
            add_8Ex4Hrql(testsuite_modids, 0);
            visit_i4S3ctpP(module, testsuite_modids, ctx);
        };
        return s_CodegenOutput { static_cast<fu::str&&>(src), s_Set_6ARmtH0K78f(outputs._libs), s_BuildHacks(outputs._build_hacks), static_cast<s_Set_95BJOojOc45&&>(testsuite_modids), outputs._defects };
    }
    else
        BUG_i4S3ctpP((*(const fu::str*)fu::NIL), _here, ctx);

}

#endif
