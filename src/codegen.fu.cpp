#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct s_CodegenOutput;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
enum s_kind: fu::u8;
struct s_ParserOutput;
struct s_Node;
typedef fu::u8 s_DeclAsserts;
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
struct s_RWRanges;
struct s_Scope;
struct s_Overload;
typedef uint16_t s_SolverStatus;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_Template;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
typedef int s_SolverNotes;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Context;
struct s_Map_gb6sFwC7IKi;
struct s_Outputs;
struct s_cg_CurrentFn;
struct s_cg_Block;
struct s_StructCanon;
struct s_NativeHacks;
struct s_ClosureID;
struct s_Mi;
struct s_Intlit;
struct s_TEMPVAR;
[[noreturn]] fu::never FAIL_MO9c1jyS(fu::view<char>, const s_TokenIdx&, const s_Context&);
void HERE_Zn8FXweg(const s_TokenIdx&, s_TokenIdx&);
static bool isLocal_YmbFaJLd(const s_Target&);
static const s_Overload& GET_OaW94KNx(const s_Target&, const s_Module&, const s_Context&);
bool type_isZST_ZFEUWUgI(const s_Type&);
static bool isFieldChain_J1G85UMX(const s_SolvedNode&, const s_Module&, const s_Context&);
bool is_primitive_VS9ogqN5(const s_Type&);
s_Type tryClear_sliceable_MvT8pzW6(const s_Type&);
bool TODO_FIX_isArray_MvT8pzW6(const s_Type&);
bool is_ref_MvT8pzW6(const s_Type&);
bool is_mutref_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
const s_Struct& lookupStruct_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
s_StructCanon parseStructCanon_axp26pRU(fu::view<char>);
bool add_once_sDUBjUzV(s_BitSet&, int);
static bool add_once_V2s31CdL(fu_VEC<s_BitSet>&, int, int);
s_Target target_xni9Jmtc(const s_ScopeItem&);
static fu_STR declarePrimitive_eHGj5PB4(fu::view<char>, const s_Struct&, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
fu_STR ID_LX3QLY5k(const fu_STR&);
bool is_rx_copy_MvT8pzW6(const s_Type&);
static fu_STR declareStruct_5Be0Wtx1(fu::view<char>, const s_Struct&, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
static fu_STR typeAnnotBase_gSqG2tl4(const s_Type&, int, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
bool is_trivial_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
static fu_STR typeAnnot_XAncIXPF(const s_Type&, int, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
static fu_STR cgClone_N6SoZjKX(const s_Type&, fu::view<char>, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
static fu_STR cgMove_UpNInpC2(const s_Type&, fu::view<char>, const s_Module&, const s_Context&, s_Outputs&, s_TokenIdx&, s_cg_CurrentFn&);
s_NativeHacks NativeHacks_QYk3NQTZ(fu::view<char>);
bool is_bitfield_VS9ogqN5(const s_Type&);
bool is_integral_VS9ogqN5(const s_Type&);
bool is_unsigned_VS9ogqN5(const s_Type&);
static fu_STR emitBuiltin_3lgldZn3(fu::view<char>, fu::view<fu_STR>, const s_SolvedNode&, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
bool hasIdentifierChars_XKihkJM1(fu::view<char>);
s_Type clear_refs_MvT8pzW6(s_Type&&);
static fu_STR cgDefault_ytoUJzGd(const s_Type&, s_TokenIdx&, const s_Context&, s_Outputs&, const s_Module&, s_cg_CurrentFn&);
const s_Struct& tryLookupStructOrUserPrimitive_3ZVvGB0M(const s_Type&, const s_Module&, const s_Context&);
[[noreturn]] fu::never BUG_MO9c1jyS(fu_STR&&, const s_TokenIdx&, const s_Context&);
static bool add_once_HGgHOUs7(fu_VEC<s_BitSet>&, const s_Target&);
bool is_never_ZFEUWUgI(const s_Type&);
bool hasBinary_3qRoPKdA(fu::view<char>);
bool hasPostfix_3qRoPKdA(fu::view<char>);
bool hasUnary_3qRoPKdA(fu::view<char>);
static fu_STR cgFnPrototype_Tp34mmPi(const s_Target&, bool, s_cg_CurrentFn&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&);
static void ensureFwdDecl_ah5VhVfp(const s_Target&, const s_Module&, const s_Context&, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&);
s_ClosureID tryParseClosureID_QYk3NQTZ(fu::view<char>);
bool type_isSliceable_ZFEUWUgI(const s_Type&);
static fu_STR binding_G8HZ0SQ9(const s_Target&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR binding_bx8uIeSZ(const s_Argument&, bool, s_cg_CurrentFn&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&);
static fu_STR cgFnSignature_hedkTtd0(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static bool exprOK_AfKwbcst(fu::view<s_SolvedNode>);
bool is_void_ZFEUWUgI(const s_Type&);
static fu_VEC<fu_STR> cgNodes_LnAPcPVd(fu::view<s_SolvedNode>, int, const fu_STR&, fu::view<char>, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
int Region_asLocal_RvC5USpz(const s_Region&);
static fu_STR cgStatements_p7LyvI0I(fu::view<s_SolvedNode>, int&, const fu_STR&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgBlock_fvwB5MRq(fu::view<s_SolvedNode>, bool, bool, const s_Helpers&, const s_Type&, s_cg_CurrentFn&, s_Outputs&, const s_Module&, const s_Context&, s_TokenIdx&);
static fu_STR cgBlock_24YtSbve(const s_SolvedNode&, int, fu::view<char>, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
bool type_isAddrOfFn_ZFEUWUgI(const s_Type&);
s_Mi parseMi_0HRwKgGk(int&, fu::view<char>);
static fu_STR cgEmpty_IKkQY5yG(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgFn_Hyy7n2Un(const s_SolvedNode&, int, s_Outputs&, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&);
static void ensureFnDef_n6N1ATBE(const s_Target&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static void ensureFnUsable_9q3otC0P(const s_Target&, const s_Module&, const s_Context&, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&);
bool is_floating_pt_VS9ogqN5(const s_Type&);
inline static bool isIntegerConstant_s7X4Snc4(const s_SolvedNode&, const s_Module&, const s_Context&);
static fu_STR binding_eVCkFb5t(const s_Target&, const s_SolvedNode&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR binding_Ux57FH3g(const s_SolvedNode&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgEnumv_qklLCi9P(const s_Type&, fu::view<char>, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
static fu_STR cgCall_cbEMvl1e(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&, s_Outputs&);
s_Intlit Intlit_IQ08v4Hx(fu::view<char>);
static fu_STR cgLiteral_W5Gb06sl(const s_SolvedNode&, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
bool is_enum_VS9ogqN5(const s_Type&);
bool is_flags_VS9ogqN5(const s_Type&);
s_Type clear_sliceable_9gHYdovL(const s_Type&, const s_TokenIdx&, const s_Context&);
static fu_STR cgArrayLiteral_44zVcAte(const s_SolvedNode&, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&, s_Outputs&);
static fu_STR cgDefinit_DZfFCaJs(const s_SolvedNode&, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&, s_Outputs&);
bool Region_isArgPosition_RvC5USpz(const s_Region&);
static fu_STR cgMoveOrClone_tsvVg4L6(s_kind, const s_Type&, fu::view<char>, const s_Module&, const s_Context&, s_Outputs&, s_TokenIdx&, s_cg_CurrentFn&);
static fu_STR cgMoveOrClone_503MuTtW(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&, s_Outputs&);
static fu_STR blockWrap_unlessIf_1xw37BPu(const s_SolvedNode&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, s_Outputs&);
static fu_STR cgIf_uTc7shcZ(const s_SolvedNode&, int, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, s_Outputs&);
static void cgAndOr_concat_3w3IlnRk(fu_STR&, fu::view<char>, fu::view<s_SolvedNode>, bool, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, s_Outputs&);
bool isAssignable_b2EdYOvX(const s_Type&, const s_Type&, bool, bool);
static fu_STR via_7nqDvmIQ(s_TEMPVAR&, const s_Type&, fu::view<char>, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
static fu_STR via_QraCQbsX(s_TEMPVAR&, const s_Type&, const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&, s_Outputs&);
static fu_STR cgOr_VWIiQz9n(const s_SolvedNode&, int, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, s_Outputs&);
static fu_STR cgAnd_dnB69hgI(fu::view<s_SolvedNode>, const s_Type&, int, fu::view<char>, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, s_Outputs&);
static fu_STR cgJump_xp4HzzgU(const s_SolvedNode&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgLoop_yJ3mGyBr(const s_SolvedNode&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgDefer_72pFRz4n(const s_SolvedNode&, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
static fu_STR cgCompilerPragma_qteLR1mg(const s_SolvedNode&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, s_Outputs&);
static fu_STR cgNode_I5oehkqb(const s_SolvedNode&, fu::view<char>, int, const s_Type&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, s_Outputs&);
fu_STR dirname_KqRBcvmh(const fu_STR&);
fu_STR join_ZK3gqGz2(fu::view<char>, const fu_STR&);
fu_STR read_ny0gyQ9a(fu_STR&&);

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu_STR src;
    fu_VEC<fu_STR> link;
    fu_VEC<fu_STR> include_dirs;
    fu_VEC<fu_STR> extra_sources;
    fu_VEC<int> live;
    explicit operator bool() const noexcept
    {
        return false
            || src
            || link
            || include_dirs
            || extra_sources
            || live
        ;
    }
};
                                #endif

                                #ifndef DEF_s_kind
                                #define DEF_s_kind
enum s_kind: fu::u8
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
    s_kind_unwrap = 33,
    s_kind_forfieldsof = 34,
    s_kind_pragma = 35,
    s_kind_void = 36,
    s_kind_struct = 37,
    s_kind_union = 38,
    s_kind_primitive = 39,
    s_kind_flags = 40,
    s_kind_enum = 41,
    s_kind_members = 42,
    s_kind_fn = 43,
    s_kind_fnbranch = 44,
    s_kind_pattern = 45,
    s_kind_typeunion = 46,
    s_kind_typetag = 47,
    s_kind_jump = 48,
    s_kind_empty = 49,
    s_kind_letdef = 50,
    s_kind___relaxed = 51,
    s_kind___convert = 52,
    s_kind_fndef = 53,
    s_kind_copy = 54,
    s_kind_move = 55,
    s_kind___far_jump = 56,
    s_kind___no_kind_yet = 57,
    s_kind_type = 58,
    s_kind_var = 59,
    s_kind_field = 60,
    s_kind_enumv = 61,
    s_kind_template = 62,
    s_kind___native = 63,
    s_kind_inline = 64,
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    s_kind kind;
    fu_STR value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || tokens
        ;
    }
};
                                #endif

                                #ifndef DEF_s_DeclAsserts
                                #define DEF_s_DeclAsserts
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOCOPY = 1;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC = 2;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOVEC_MUT = 4;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE = 8;
inline constexpr s_DeclAsserts s_DeclAsserts_A_PURE_CTX = 16;
inline constexpr s_DeclAsserts s_DeclAsserts_A_NOFLOW = 32;

inline constexpr s_DeclAsserts MASK_s_DeclAsserts
    = s_DeclAsserts_A_NOCOPY
    | s_DeclAsserts_A_NOVEC
    | s_DeclAsserts_A_NOVEC_MUT
    | s_DeclAsserts_A_PURE
    | s_DeclAsserts_A_PURE_CTX
    | s_DeclAsserts_A_NOFLOW;
                                #endif

                                #ifndef DEF_s_ParseSyntax
                                #define DEF_s_ParseSyntax
inline constexpr s_ParseSyntax s_ParseSyntax_PS_ID = 1;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_PARENS = 2;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_SEMI = 4;
inline constexpr s_ParseSyntax s_ParseSyntax_PS_DISCARD = 8;

inline constexpr s_ParseSyntax MASK_s_ParseSyntax
    = s_ParseSyntax_PS_ID
    | s_ParseSyntax_PS_PARENS
    | s_ParseSyntax_PS_SEMI
    | s_ParseSyntax_PS_DISCARD;
                                #endif

                                #ifndef DEF_s_Flags
                                #define DEF_s_Flags
inline constexpr s_Flags s_Flags_F_METHOD = 1;
inline constexpr s_Flags s_Flags_F_INFIX = 2;
inline constexpr s_Flags s_Flags_F_PREFIX = 4;
inline constexpr s_Flags s_Flags_F_POSTFIX = 8;
inline constexpr s_Flags s_Flags_F_ACCESS = 16;
inline constexpr s_Flags s_Flags_F_COMPOUND_ID = 32;
inline constexpr s_Flags s_Flags_F_WRITTEN_TO = 64;
inline constexpr s_Flags s_Flags_F_LAX = 128;
inline constexpr s_Flags s_Flags_F_ARG = 256;
inline constexpr s_Flags s_Flags_F_OPERATOR = 512;
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 1024;
inline constexpr s_Flags s_Flags_F_CONVERSION = 2048;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 4096;
inline constexpr s_Flags s_Flags_F_MUT = 8192;
inline constexpr s_Flags s_Flags_F_REF = 16384;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 32768;
inline constexpr s_Flags s_Flags_F_USING = 65536;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 131072;
inline constexpr s_Flags s_Flags_F_SHADOW = 262144;
inline constexpr s_Flags s_Flags_F_PUB = 524288;
inline constexpr s_Flags s_Flags_F_EXTERN = 1048576;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 2097152;
inline constexpr s_Flags s_Flags_F_PREDICATE = 4194304;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 8388608;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 16777216;
inline constexpr s_Flags s_Flags_F_REST_ARG = 33554432;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 67108864;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 134217728;
inline constexpr s_Flags s_Flags_F_INLINE = 268435456;
inline constexpr s_Flags s_Flags_F_LAMBDA = 536870912;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_INFIX
    | s_Flags_F_PREFIX
    | s_Flags_F_POSTFIX
    | s_Flags_F_ACCESS
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
    | s_Flags_F_OPERATOR
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
    | s_Flags_F_LAMBDA;
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

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    s_kind kind;
    s_DeclAsserts asserts;
    s_ParseSyntax syntax;
    s_Flags flags;
    fu_STR value;
    fu_VEC<s_Node> items;
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

                                #ifndef DEF_s_ParserOutput
                                #define DEF_s_ParserOutput
struct s_ParserOutput
{
    s_Node root;
    fu_VEC<fu_STR> fuzimports;
    fu_VEC<fu_STR> warnings;
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

                                #ifndef DEF_s_ModuleInputs
                                #define DEF_s_ModuleInputs
struct s_ModuleInputs
{
    fu_STR src;
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
    fu_STR id;
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    s_kind kind;
    fu_STR name;
    s_Target target;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<int> imports;
    fu_VEC<s_Target> converts;
    fu_STR base;
    int flat_cnt;
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
            || flat_cnt
            || all_triv
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

                                #ifndef DEF_s_RWRanges
                                #define DEF_s_RWRanges
struct s_RWRanges
{
    int reads0;
    int reads1;
    int writes0;
    int writes1;
    explicit operator bool() const noexcept
    {
        return false
            || reads0
            || reads1
            || writes0
            || writes1
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
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    s_RWRanges rwr;
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

                                #ifndef DEF_s_SolverStatus
                                #define DEF_s_SolverStatus
inline constexpr s_SolverStatus s_SolverStatus_SS_LAZY = 1;
inline constexpr s_SolverStatus s_SolverStatus_SS_DID_START = 2;
inline constexpr s_SolverStatus s_SolverStatus_SS_DIRTY = 4;
inline constexpr s_SolverStatus s_SolverStatus_SS_FINALIZED = 8;
inline constexpr s_SolverStatus s_SolverStatus_SS_UPDATED = 16;
inline constexpr s_SolverStatus s_SolverStatus_SS_TYPE_RECUR = 32;
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_RECUR = 64;
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = 128;
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = 256;

inline constexpr s_SolverStatus MASK_s_SolverStatus
    = s_SolverStatus_SS_LAZY
    | s_SolverStatus_SS_DID_START
    | s_SolverStatus_SS_DIRTY
    | s_SolverStatus_SS_FINALIZED
    | s_SolverStatus_SS_UPDATED
    | s_SolverStatus_SS_TYPE_RECUR
    | s_SolverStatus_SS_FN_RECUR
    | s_SolverStatus_SS_HOIST
    | s_SolverStatus_SS_UNUSED;
                                #endif

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    s_kind kind;
    s_Flags flags;
    s_SolverStatus status;
    fu_STR name;
    fu_STR sighash;
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

                                #ifndef DEF_s_BitSet
                                #define DEF_s_BitSet
struct s_BitSet
{
    fu_VEC<fu::u8> _data;
    explicit operator bool() const noexcept
    {
        return false
            || _data
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    fu_STR autocall;
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

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int implicits_len;
    int imports_len;
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || implicits_len
            || imports_len
            || privates_len
            || usings_len
            || converts_len
            || helpers_len
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkip
                                #define DEF_s_ScopeSkip
struct s_ScopeSkip
{
    int start;
    int end;
    explicit operator bool() const noexcept
    {
        return false
            || start
            || end
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeSkipMemos
                                #define DEF_s_ScopeSkipMemos
struct s_ScopeSkipMemos
{
    fu_VEC<s_ScopeSkip> items;
    fu_VEC<s_ScopeSkip> implicits;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || implicits
            || imports
            || privates
            || usings
            || converts
            || helpers
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    fu_VEC<int> imports;
    s_ScopeMemo scope_memo;
    s_ScopeSkipMemos scope_skip;
    explicit operator bool() const noexcept
    {
        return false
            || node
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int local_of;
    int revision;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<int> callers;
    explicit operator bool() const noexcept
    {
        return false
            || local_of
            || revision
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || locals
            || extra_items
            || callers
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu_VEC<s_Overload> overloads;
    fu_VEC<s_Extended> extended;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_ScopeItem> implicits;
    fu_VEC<int> imports;
    fu_VEC<int> privates;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
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
inline constexpr s_SolverNotes s_SolverNotes_N_BckSoftRisk = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 1048576;

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
    | s_SolverNotes_N_BckSoftRisk
    | s_SolverNotes_N_BckMustSeq
    | s_SolverNotes_N_MoveMustSeq
    | s_SolverNotes_N_SD_HasStaticInit
    | s_SolverNotes_N_SD_ExternPrivates;
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
    fu_VEC<s_Struct> types;
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

                                #ifndef DEF_s_Module
                                #define DEF_s_Module
struct s_Module
{
    int modid;
    fu_STR fname;
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

                                #ifndef DEF_s_Map_gb6sFwC7IKi
                                #define DEF_s_Map_gb6sFwC7IKi
struct s_Map_gb6sFwC7IKi
{
    fu_VEC<fu_STR> keys;
    fu_VEC<fu_STR> vals;
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
    fu_VEC<s_Module> modules;
    fu_VEC<int> dep_order;
    s_Map_gb6sFwC7IKi files;
    s_Map_gb6sFwC7IKi fuzzy;
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

                                #ifndef DEF_s_Outputs
                                #define DEF_s_Outputs
struct s_Outputs
{
    fu_VEC<fu_STR> _libs;
    fu_VEC<fu_STR> _gcc_ignore;
    fu_STR _top_emits;
    fu_VEC<s_BitSet> _tfwd;
    fu_STR _tfwd_src;
    fu_VEC<s_BitSet> _ffwd;
    fu_STR _ffwd_src;
    fu_STR _ffwd_live_client;
    fu_STR _ffwd_live_nclient;
    fu_STR _tdef;
    s_BitSet _idef;
    fu_STR _fdef;
    fu_STR _indent;
    int _hasMain;
    fu_VEC<fu_STR> HACK_link;
    fu_VEC<fu_STR> HACK_include_dirs;
    fu_VEC<fu_STR> HACK_extra_sources;
    fu_VEC<int> _live_targets;
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
            || _idef
            || _fdef
            || _indent
            || _hasMain
            || HACK_link
            || HACK_include_dirs
            || HACK_extra_sources
            || _live_targets
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_Block
                                #define DEF_s_cg_Block
struct s_cg_Block
{
    fu_STR name;
    s_Helpers helpers;
    bool has_val;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || helpers
            || has_val
            || ptrflip
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
    fu_VEC<fu_STR> TEMPVARs;
    fu_VEC<s_cg_Block> blocks;
    int num_labels;
    s_Helpers can_return;
    s_Helpers can_break;
    s_Helpers can_cont;
    fu_VEC<fu_STR> _ids_used;
    fu_VEC<int> _ids_dedupe;
    fu_VEC<fu_STR> _hoist;
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
    int revision;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || revision
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
    fu_STR error;
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
    fu_STR annot;
    fu_STR id;
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

                                #ifndef DEF_M_RETBOOL
                                #define DEF_M_RETBOOL
inline constexpr int M_RETBOOL = (1 << 1);
                                #endif

                                #ifndef DEF_M_CONST
                                #define DEF_M_CONST
inline constexpr int M_CONST = (1 << 2);
                                #endif

                                #ifndef DEF_M_RETVAL
                                #define DEF_M_RETVAL
inline constexpr int M_RETVAL = (1 << 3);
                                #endif

                                #ifndef DEF_M_ARGUMENT
                                #define DEF_M_ARGUMENT
inline constexpr int M_ARGUMENT = (1 << 4);
                                #endif

                                #ifndef DEF_M_RETURN
                                #define DEF_M_RETURN
inline constexpr int M_RETURN = (1 << 5);
                                #endif

                                #ifndef DEF_M_FWDECL
                                #define DEF_M_FWDECL
inline constexpr int M_FWDECL = (1 << 6);
                                #endif

                                #ifndef DEF_M_PARENS
                                #define DEF_M_PARENS
inline constexpr int M_PARENS = (1 << 7);
                                #endif

                                #ifndef DEF_M_OPT_CURLIES
                                #define DEF_M_OPT_CURLIES
inline constexpr int M_OPT_CURLIES = (1 << 8);
                                #endif

                                #ifndef DEF_M_LOOP_BODY
                                #define DEF_M_LOOP_BODY
inline constexpr int M_LOOP_BODY = (1 << 9);
                                #endif

                                #ifndef DEF_M_MUTVAR
                                #define DEF_M_MUTVAR
inline constexpr int M_MUTVAR = (1 << 10);
                                #endif

                                #ifndef DEF_M_MOVABLE
                                #define DEF_M_MOVABLE
inline constexpr int M_MOVABLE = (1 << 11);
                                #endif

                                #ifndef DEF_M_MOVE
                                #define DEF_M_MOVE
inline constexpr int M_MOVE = (1 << 12);
                                #endif

                                #ifndef DEF_M_ARG_TO_NATIVE
                                #define DEF_M_ARG_TO_NATIVE
inline constexpr int M_ARG_TO_NATIVE = (1 << 13);
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

[[noreturn]] static fu::never fail_RdDFiAMv(const fu_STR& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL_MO9c1jyS(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu_STR(reason) : "Assertion failed."_fu)), _here, ctx);
}

                                #ifndef DEF_unless_oob_u1lQiwAxifj
                                #define DEF_unless_oob_u1lQiwAxifj
inline const s_Extended& unless_oob_u1lQiwAx(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_MlI4t9S3(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_u1lQiwAx(module.out.solve.scope.extended, target.index);
    else if (target.modid < 0)
        return (*(const s_Extended*)fu::NIL);
    else
        return unless_oob_u1lQiwAx(ctx.modules[target.modid].out.solve.scope.extended, target.index);

}

static bool isLocal_YmbFaJLd(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_OaW94KNx(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.index > 0)
    {
        if (isLocal_YmbFaJLd(target))
            return module.out.solve.scope.extended[-target.modid].locals[(target.index - 1)];
        else
        {
            const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
            return m.out.solve.scope.overloads[(target.index - 1)];
        };
    }
    else
        fu_ASSERT();

}

                                #ifndef DEF_x3Cx3E_gcxVH86XFM7
                                #define DEF_x3Cx3E_gcxVH86XFM7
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_hvR4gqODwpa
                                #define DEF_x3Cx3E_hvR4gqODwpa
inline int x3Cx3E_hvR4gqOD(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_YP7BiSZZZOd
                                #define DEF_x3Cx3E_YP7BiSZZZOd
inline int x3Cx3E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_hvR4gqOD(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_YP7BiSZZZOd
                                #define DEF_x3Dx3D_YP7BiSZZZOd
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_only_l6T9uEqEjQl
                                #define DEF_only_l6T9uEqEjQl
inline const s_SolvedNode& only_l6T9uEqE(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF_str_x2XZ9C2mr79
                                #define DEF_str_x2XZ9C2mr79
inline fu_STR str_x2XZ9C2m(const s_kind n)
{
    if (n == s_kind_sof)
        return "sof"_fu;
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
    else if (n == s_kind_err)
        return "err"_fu;
    else if (n == s_kind_eof)
        return "eof"_fu;
    else if (n == s_kind_root)
        return "root"_fu;
    else if (n == s_kind_block)
        return "block"_fu;
    else if (n == s_kind_argid)
        return "argid"_fu;
    else if (n == s_kind_let)
        return "let"_fu;
    else if (n == s_kind_call)
        return "call"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
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
    else if (n == s_kind_break)
        return "break"_fu;
    else if (n == s_kind_return)
        return "return"_fu;
    else if (n == s_kind_continue)
        return "continue"_fu;
    else if (n == s_kind_bool)
        return "bool"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_import)
        return "import"_fu;
    else if (n == s_kind_defer)
        return "defer"_fu;
    else if (n == s_kind_try)
        return "try"_fu;
    else if (n == s_kind_typedef)
        return "typedef"_fu;
    else if (n == s_kind_typecast)
        return "typecast"_fu;
    else if (n == s_kind_typeassert)
        return "typeassert"_fu;
    else if (n == s_kind_typeparam)
        return "typeparam"_fu;
    else if (n == s_kind_addroffn)
        return "addroffn"_fu;
    else if (n == s_kind_unwrap)
        return "unwrap"_fu;
    else if (n == s_kind_forfieldsof)
        return "forfieldsof"_fu;
    else if (n == s_kind_pragma)
        return "pragma"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
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
    else if (n == s_kind_members)
        return "members"_fu;
    else if (n == s_kind_fn)
        return "fn"_fu;
    else if (n == s_kind_fnbranch)
        return "fnbranch"_fu;
    else if (n == s_kind_pattern)
        return "pattern"_fu;
    else if (n == s_kind_typeunion)
        return "typeunion"_fu;
    else if (n == s_kind_typetag)
        return "typetag"_fu;
    else if (n == s_kind_jump)
        return "jump"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_letdef)
        return "letdef"_fu;
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
    else if (n == s_kind_fndef)
        return "fndef"_fu;
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind___far_jump)
        return "__far_jump"_fu;
    else if (n == s_kind___no_kind_yet)
        return "__no_kind_yet"_fu;
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

static bool isFieldChain_J1G85UMX(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx)
{
    if (node.kind != s_kind_call)
        return false;
    else
    {
        const s_Overload& t = GET_OaW94KNx(node.target, module, ctx);
        if (t.kind == s_kind_field)
            return isFieldChain_J1G85UMX(only_l6T9uEqE(node.items), module, ctx);
        else if (t.kind == s_kind_var)
            return true;
        else
            return false;

    };
}

                                #ifndef DEF_add_wAuMmv6Bq41
                                #define DEF_add_wAuMmv6Bq41
inline bool add_wAuMmv6B(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

static void include_NJm5NZ4n(const fu_STR& lib, s_Outputs& outputs)
{
    add_wAuMmv6B(outputs._libs, lib);
}

static fu_STR primAnnotBase_Qw5b4kRm(fu::view<char> c, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx)
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
        include_NJm5NZ4n("<fu/int.h>"_fu, outputs);
        return "fu::"_fu + c;
    }
    else
    {
        include_NJm5NZ4n("<cstdint>"_fu, outputs);
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
            fail_RdDFiAMv((("Unknown primitive: `"_fu + c) + "`."_fu), _here, ctx);

    };
}

static fu_STR annotateZST_5AAdxVnS()
{
    return "void"_fu;
}

static fu_STR annotateNever_tkejT3bV(s_Outputs& outputs)
{
    include_NJm5NZ4n("<fu/never.h>"_fu, outputs);
    return "fu::never"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEF_x3Cx3E_VSvR2otmpSl
                                #define DEF_x3Cx3E_VSvR2otmpSl
inline int x3Cx3E_VSvR2otm(const s_ValueType& a, const s_ValueType& b)
{

    {

        {
            /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.quals, b.quals);
            if (cmp)
                return /*NRVO*/ cmp;

        };
        /*MOV*/ const int cmp = x3Cx3E_YP7BiSZZ(a.canon, b.canon);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_gIvInnt76me
                                #define DEF_x3Cx3E_gIvInnt76me
inline int x3Cx3E_gIvInnt7(const s_Region& a, const s_Region& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_I6bIjEiYvCe
                                #define DEF_x3Cx3E_I6bIjEiYvCe
inline int x3Cx3E_I6bIjEiY(fu::view<s_Region> a, fu::view<s_Region> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_gIvInnt7(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_vhcxJrPf7Sf
                                #define DEF_x3Cx3E_vhcxJrPf7Sf
inline int x3Cx3E_vhcxJrPf(const s_Lifetime& a, const s_Lifetime& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_I6bIjEiY(a.uni0n, b.uni0n);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_PsqHNzQDchj
                                #define DEF_x3Cx3E_PsqHNzQDchj
inline int x3Cx3E_PsqHNzQD(const s_Type& a, const s_Type& b)
{

    {

        {
            /*MOV*/ const int cmp = x3Cx3E_VSvR2otm(a.vtype, b.vtype);
            if (cmp)
                return /*NRVO*/ cmp;

        };
        /*MOV*/ const int cmp = x3Cx3E_vhcxJrPf(a.lifetime, b.lifetime);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_PsqHNzQDchj
                                #define DEF_x3Dx3D_PsqHNzQDchj
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_PsqHNzQD(a, b);
}
                                #endif

static fu_STR annotateString_7YoInctu(s_Outputs& outputs)
{
    include_NJm5NZ4n("<fu/str.h>"_fu, outputs);
    return "fu_STR"_fu;
}

                                #ifndef DEF_grow_if_oob_rEqVG9azR8c
                                #define DEF_grow_if_oob_rEqVG9azR8c
inline s_BitSet& grow_if_oob_rEqVG9az(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once_V2s31CdL(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once_sDUBjUzV(grow_if_oob_rEqVG9az(bs, i), j);
}

                                #ifndef DEF_each_MDpLT5aN6O2
                                #define DEF_each_MDpLT5aN6O2
inline void each_MDpLT5aN(fu::view<s_ScopeItem> a, fu_STR& def, fu::view<char> id, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Target member = target_xni9Jmtc(a[i]);
        fu_STR _0 {};
        def += ((_0 = (((((("\ninline constexpr "_fu + id) + " "_fu) + id) + "_"_fu) + GET_OaW94KNx(member, module, ctx).name) + " = "_fu), (static_cast<fu_STR&&>(_0) + cgNode_I5oehkqb(GET_OaW94KNx(member, module, ctx).solved, "declarePrimitive"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs))) + ";"_fu);
    };
}
                                #endif

                                #ifndef DEF_each_zqqYejlLEOg
                                #define DEF_each_zqqYejlLEOg
inline void each_zqqYejlL(fu::view<s_ScopeItem> a, fu_STR& mask, fu::view<char> id, const s_Module& module, const s_Context& ctx)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Target member = target_xni9Jmtc(a[i]);
        if (!mask)
            mask = (((("\n\ninline constexpr "_fu + id) + " MASK_"_fu) + id) + "\n    = "_fu);
        else
            mask += "\n    | "_fu;

        mask += ((id + "_"_fu) + GET_OaW94KNx(member, module, ctx).name);
    };
}
                                #endif

                                #ifndef DEF_each_8odGh1nKDN2
                                #define DEF_each_8odGh1nKDN2
inline void each_8odGh1nK(fu::view<s_ScopeItem> a, fu_STR& def, fu::view<char> id, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Target member = target_xni9Jmtc(a[i]);
        fu_STR _0 {};
        def += ((_0 = (((("\n    "_fu + id) + "_"_fu) + GET_OaW94KNx(member, module, ctx).name) + " = "_fu), (static_cast<fu_STR&&>(_0) + cgNode_I5oehkqb(GET_OaW94KNx(member, module, ctx).solved, "declarePrimitive"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs))) + ","_fu);
    };
}
                                #endif

static fu_STR declarePrimitive_eHGj5PB4(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    fu_STR baseprim = primAnnotBase_Qw5b4kRm(s.base, outputs, _here, ctx);
    const fu_VEC<s_ScopeItem>& members = s.items;
    fu_STR def = ((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id);
    if ((s.kind != s_kind_enum) || !members)
    {
        outputs._tfwd_src += (((("typedef "_fu + baseprim) + " "_fu) + id) + ";\n"_fu);
        if (!members)
        {
            return fu_STR{};
        }
        else
        {
            each_MDpLT5aN(members, def, id, module, ctx, _here, _current_fn, outputs);
            if (s.kind == s_kind_flags)
            {
                fu_STR mask {};
                each_zqqYejlL(members, mask, id, module, ctx);
                if (mask)
                {
                    mask += ";"_fu;
                    def += mask;
                };
            };
        };
    }
    else
    {
        fu_STR header = ((("enum "_fu + id) + ": "_fu) + baseprim);
        outputs._tfwd_src += (header + ";\n"_fu);
        def += (("\n"_fu + header) + "\n{"_fu);
        each_8odGh1nK(members, def, id, module, ctx, _here, _current_fn, outputs);
        def += "\n};"_fu;
    };
    return def + "\n                                #endif\n"_fu;
}

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Overload& try_GET_TC1bs5YM(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    return target ? GET_OaW94KNx(target, module, ctx) : (*(const s_Overload*)fu::NIL);
}

static fu_STR declareStruct_5Be0Wtx1(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (s.base)
        return declarePrimitive_eHGj5PB4(id, s, outputs, _here, ctx, module, _current_fn);
    else
    {
        fu_STR header = (x7E_YP7BiSZZ(str_x2XZ9C2m(s.kind), " "_fu) + id);
        outputs._tfwd_src += (header + ";\n"_fu);
        const s_Type& t = GET_OaW94KNx(s.target, module, ctx).type;
        fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\n"_fu) + header) + "\n{"_fu);
        fu_STR indent = "\n    "_fu;
        fu::view<s_ScopeItem> fields = s.items;
        for (int i = 0; i < fields.size(); i++)
        {
            const s_Overload& field = GET_OaW94KNx(target_xni9Jmtc(fields[i]), module, ctx);
            if (field.kind == s_kind_field)
                def += ((((indent + typeAnnot_XAncIXPF(field.type, 0, outputs, _here, ctx, module, _current_fn)) + " "_fu) + ID_LX3QLY5k(field.name)) + ";"_fu);
            else
                fail_RdDFiAMv(((x7E_YP7BiSZZ((("Non-field struct item: "_fu + field.name) + " ("_fu), str_x2XZ9C2m(field.kind)) + ") in "_fu) + t.vtype.canon), _here, ctx);

        };
        if (!is_rx_copy_MvT8pzW6(t))
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
        }
        else if (try_GET_TC1bs5YM(s.target, module, ctx).status & s_SolverStatus_SS_TYPE_RECUR)
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = default;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
            def += (((((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "& selfrec) { return *this = "_fu) + id) + "(selfrec); }"_fu);
        };
        def += "\n    explicit operator bool() const noexcept"_fu;
        def += "\n    {"_fu;
        def += "\n        return false"_fu;
        for (int i_1 = 0; i_1 < fields.size(); i_1++)
        {
            if (GET_OaW94KNx(target_xni9Jmtc(fields[i_1]), module, ctx).flags & s_Flags_F_PREDICATE)
                def += ("\n            || "_fu + ID_LX3QLY5k(fields[i_1].id));

        };
        def += "\n        ;"_fu;
        def += "\n    }"_fu;
        return def + "\n};\n                                #endif\n"_fu;
    };
}

static fu_STR typeAnnotBase_gSqG2tl4(const s_Type& type, const int mode, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_VS9ogqN5(type) && ((c.size() < 4) || ((c.size() == 4) && (fu::get_view(c, 1, 4) == "128"_fu))))
        return primAnnotBase_Qw5b4kRm(c, outputs, _here, ctx);
    else if (type_isZST_ZFEUWUgI(type))
        return annotateZST_5AAdxVnS();
    else if (c == "never"_fu)
        return annotateNever_tkejT3bV(outputs);
    else
    {
        s_Type arrayItem = tryClear_sliceable_MvT8pzW6(type);
        if (arrayItem)
        {
            if (TODO_FIX_isArray_MvT8pzW6(type) || !is_ref_MvT8pzW6(type))
            {
                if (arrayItem == t_byte)
                    return annotateString_7YoInctu(outputs);
                else
                {
                    fu_STR itemAnnot = typeAnnot_XAncIXPF(arrayItem, 0, outputs, _here, ctx, module, _current_fn);
                    include_NJm5NZ4n("<fu/vec.h>"_fu, outputs);
                    return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
                };
            }
            else
            {
                fu_STR itemAnnot = typeAnnot_XAncIXPF(arrayItem, 0, outputs, _here, ctx, module, _current_fn);
                include_NJm5NZ4n("<fu/view.h>"_fu, outputs);
                if (is_mutref_9gHYdovL(type, _here, ctx) || (mode & M_MUTVAR))
                    return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
                else
                    return ("fu::view<"_fu + itemAnnot) + ">"_fu;

            };
        }
        else
        {
            const s_Struct* _0;
            const s_Struct& s = (*(_0 = &(lookupStruct_3ZVvGB0M(type, module, ctx))) ? *_0 : fail_RdDFiAMv(("TODO: "_fu + type.vtype.canon), _here, ctx));
            /*MOV*/ fu_STR id = ("s_"_fu + s.name);
            const s_StructCanon scp = parseStructCanon_axp26pRU(type.vtype.canon);
            if (add_once_V2s31CdL(outputs._tfwd, scp.modid, scp.index))
            {
                fu_STR decl = declareStruct_5Be0Wtx1(id, s, outputs, _here, ctx, module, _current_fn);
                outputs._tdef += decl;
            };
            return /*NRVO*/ id;
        };
    };
}

                                #ifndef DEF_starts_YP7BiSZZZOd
                                #define DEF_starts_YP7BiSZZZOd
inline bool starts_YP7BiSZZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu_STR typeAnnot_XAncIXPF(const s_Type& type, const int mode, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR fwd = typeAnnotBase_gSqG2tl4(type, mode, outputs, _here, ctx, module, _current_fn);
    if (is_ref_MvT8pzW6(type))
    {
        if (starts_YP7BiSZZ(fwd, "fu::view"_fu) || (fwd == "void"_fu))
            return /*NRVO*/ fwd;
        else if (is_mutref_9gHYdovL(type, _here, ctx))
            return fwd + "&"_fu;
        else if (is_primitive_VS9ogqN5(type))
        {
            if (((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL))
                return "const "_fu + fwd;
            else
                return /*NRVO*/ fwd;

        }
        else if ((mode & M_MOVABLE) && !is_trivial_3ZVvGB0M(type, module, ctx))
            return fwd + "&"_fu;
        else
            return ("const "_fu + fwd) + "&"_fu;

    }
    else if ((mode & M_ARGUMENT) && !is_primitive_VS9ogqN5(type))
        return fwd + "&&"_fu;
    else if ((mode & M_CONST) && is_trivial_3ZVvGB0M(type, module, ctx))
        return "const "_fu + fwd;
    else
        return /*NRVO*/ fwd;

}

static fu_STR emitTEMPVAR_HgszQL2d(fu::view<char> annot, bool& ptrflip, const fu_STR& id, const fu_STR& expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu_STR id_1 = (id ? fu_STR(id) : x7E_YP7BiSZZ("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu_STR cgClone_N6SoZjKX(const s_Type& type, fu::view<char> src, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    return ((typeAnnotBase_gSqG2tl4(type, 0, outputs, _here, ctx, module, _current_fn) + "("_fu) + src) + ")"_fu;
}

static fu_STR cgMove_UpNInpC2(const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn)
{
    if (is_trivial_3ZVvGB0M(type, module, ctx) && is_rx_copy_MvT8pzW6(type))
        return cgClone_N6SoZjKX(type, src, outputs, _here, ctx, module, _current_fn);
    else
        return ((("static_cast<"_fu + typeAnnotBase_gSqG2tl4(type, 0, outputs, _here, ctx, module, _current_fn)) + "&&>("_fu) + src) + ")"_fu;

}

                                #ifndef DEF_find_8ObANk7rz5k
                                #define DEF_find_8ObANk7rz5k
inline int find_8ObANk7r(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static fu_STR& ARG_s5E9zupI(const int i, fu::view_mut<fu_STR> item_src)
{
    return item_src.mutref(i);
}

static fu_STR REST_S7O6JLlt(const int start, fu::view<fu_STR> item_src)
{
    /*MOV*/ fu_STR src {};
    for (int i = start; i < item_src.size(); i++)
    {
        const fu_STR& item = item_src[i];
        if (!item)
            continue;
        else
        {
            if (src)
                src += ", "_fu;

            src += item_src[i];
        };
    };
    return /*NRVO*/ src;
}

static fu_STR ooeWrap_LXzNIndn(const fu_STR& src, const fu_STR& ooe_header)
{
    if (ooe_header)
        return ((ooe_header + ", "_fu) + src) + ")"_fu;
    else
        return fu_STR(src);

}

static fu_STR emitMethodCall_ze99ee30(fu::view<char> id, fu::view_mut<fu_STR> item_src, const fu_STR& ooe_header)
{
    fu_STR _0 {};
    return ooeWrap_LXzNIndn(((_0 = ((ARG_s5E9zupI(0, item_src) + id) + "("_fu), (static_cast<fu_STR&&>(_0) + REST_S7O6JLlt(1, item_src))) + ")"_fu), ooe_header);
}

static bool affectedByIntegerPromotions_KtAoEnLv(const s_Type& type)
{
    if (is_ref_MvT8pzW6(type) || !is_bitfield_VS9ogqN5(type))
        return false;
    else
    {
        fu::view<char> c = type.vtype.canon;
        return ((c.size() >= 2) && (c[1] == '8')) || ((c.size() >= 3) && (fu::get_view(c, 1, 3) == "16"_fu));
    };
}

static fu_STR unpromote_R4zbbsTc(const fu_STR& expr, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (isNative && affectedByIntegerPromotions_KtAoEnLv(node.type))
        return ((typeAnnotBase_gSqG2tl4(node.type, 0, outputs, _here, ctx, module, _current_fn) + "("_fu) + expr) + ")"_fu;
    else
        return fu_STR(expr);

}

static fu_STR emitPostfixOp_QZdPUxnZ(fu::view<char> op, fu::view_mut<fu_STR> item_src, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    return unpromote_R4zbbsTc((ARG_s5E9zupI(0, item_src) + op), isNative, node, outputs, _here, ctx, module, _current_fn);
}

                                #ifndef DEF_x21x3D_YP7BiSZZZOd
                                #define DEF_x21x3D_YP7BiSZZZOd
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

                                #ifndef DEF_only_3Ycuooso7la
                                #define DEF_only_3Ycuooso7la
inline const fu_STR& only_3Ycuooso(fu::view<fu_STR> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_YP7BiSZZ("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu_STR emitBuiltin_3lgldZn3(fu::view<char> id, fu::view<fu_STR> args, const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = node.type;
        const s_Type& input = only_l6T9uEqE(node.items).type;
        fu_STR cast = typeAnnotBase_gSqG2tl4(output, 0, outputs, _here, ctx, module, _current_fn);
        if (is_integral_VS9ogqN5(input) && is_integral_VS9ogqN5(output) && (is_unsigned_VS9ogqN5(input) != is_unsigned_VS9ogqN5(output)))
        {
            s_Type mid_t { (is_unsigned_VS9ogqN5(input) ? output : input) };
            if (mid_t.vtype.canon[0] == 'i')
            {
                mid_t.vtype.canon.mutref(0) = 'u';
                if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
                {
                    fu_STR inner = typeAnnotBase_gSqG2tl4(mid_t, 0, outputs, _here, ctx, module, _current_fn);
                    return ((((cast + '(') + inner) + '(') + only_3Ycuooso(args)) + "))"_fu;
                };
            }
            else
                fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx);

        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu_STR inner = typeAnnotBase_gSqG2tl4(t_u8, 0, outputs, _here, ctx, module, _current_fn);
            return ((((cast + '(') + inner) + '(') + only_3Ycuooso(args)) + "))"_fu;
        };
        return ((cast + '(') + only_3Ycuooso(args)) + ')';
    }
    else
        fail_RdDFiAMv(("Unknown builtin: "_fu + id), _here, ctx);

}

static fu_STR emitFunctionCall_u9r6DYtx(fu::view<char> id, fu::view<char> open, fu::view<char> close, fu::view<fu_STR> item_src, const fu_STR& ooe_header)
{
    return ooeWrap_LXzNIndn((((id + open) + REST_S7O6JLlt(0, item_src)) + close), ooe_header);
}

                                #ifndef DEF_last_XKihkJM18Pe
                                #define DEF_last_XKihkJM18Pe
inline char last_XKihkJM1(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static bool binSkipParens_A7saJYdO(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;
    else if (mode & M_PARENS)
    {
        if (last_XKihkJM1(id) == '=')
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

static fu_STR emitBinaryOp_Kp8z63Nh(fu::view<char> op, fu::view<s_SolvedNode> args, s_TokenIdx& _here, const s_Context& ctx, const int mode, const fu_STR& ooe_header, fu::view_mut<fu_STR> item_src, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (args.size() == 2)
    {
        if (binSkipParens_A7saJYdO(op, mode) && !ooe_header)
        {
            fu_STR _0 {};
            return (_0 = (((ARG_s5E9zupI(0, item_src) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_0) + ARG_s5E9zupI(1, item_src)));
        }
        else
        {
            fu_STR _1 {};
            return ooeWrap_LXzNIndn(unpromote_R4zbbsTc(((_1 = (((("("_fu + ARG_s5E9zupI(0, item_src)) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_1) + ARG_s5E9zupI(1, item_src))) + ")"_fu), isNative, node, outputs, _here, ctx, module, _current_fn), ooe_header);
        };
    }
    else
        fail_RdDFiAMv("args.len != 2"_fu, _here, ctx);

}

static fu_STR cgDefault_ytoUJzGd(const s_Type& type, s_TokenIdx& _here, const s_Context& ctx, s_Outputs& outputs, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (is_mutref_9gHYdovL(type, _here, ctx))
        fail_RdDFiAMv("Cannot definit mutrefs."_fu, _here, ctx);
    else if (type_isZST_ZFEUWUgI(type))
        return "void()"_fu;
    else if (is_ref_MvT8pzW6(type))
    {
        fu_STR annot = typeAnnot_XAncIXPF(type, 0, outputs, _here, ctx, module, _current_fn);
        if (starts_YP7BiSZZ(annot, "fu::view"_fu))
        {
            return annot + "{}"_fu;
        }
        else
        {
            include_NJm5NZ4n("<fu/default.h>"_fu, outputs);
            return ("(*(const "_fu + typeAnnot_XAncIXPF(clear_refs_MvT8pzW6(s_Type(type)), 0, outputs, _here, ctx, module, _current_fn)) + "*)fu::NIL)"_fu;
        };
    }
    else
    {
        return typeAnnot_XAncIXPF(type, 0, outputs, _here, ctx, module, _current_fn) + "{}"_fu;
    };
}

static bool add_once_HGgHOUs7(fu_VEC<s_BitSet>& bs, const s_Target& target)
{
    return add_once_V2s31CdL(bs, target.modid, target.index);
}

static s_Flags isExtLinked_3Atus6oq(const s_Overload& overload)
{
    return overload.flags & (s_Flags_F_PUB | s_Flags_F_EXTERN);
}

static fu_STR fnLinkage_YTrqLIq6(const s_Overload& overload)
{
    return ((is_never_ZFEUWUgI(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & s_Flags_F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!isExtLinked_3Atus6oq(overload) ? "static "_fu : fu_STR{});
}

static bool isOp_eayPrvio(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    const s_Flags flags = GET_OaW94KNx(target, module, ctx).flags;
    if (flags & s_Flags_F_OOE_RTL)
        return true;
    else if (!(flags & s_Flags_F_OPERATOR))
        return false;
    else
    {
        fu::view<s_Argument> args = EXT_MlI4t9S3(target, module, ctx).args;
        if (args.size() > 2)
            return false;
        else if (GET_OaW94KNx(target, module, ctx).kind == s_kind___native)
            return true;
        else
        {
            fu::view<char> name = GET_OaW94KNx(target, module, ctx).name;
            if (args.size() > 1)
                return hasBinary_3qRoPKdA(name);
            else if (flags & s_Flags_F_POSTFIX)
                return hasPostfix_3qRoPKdA(name);
            else
                return hasUnary_3qRoPKdA(name);

        };
    };
}

static fu_STR valid_operator_k2rX0sor(const fu_STR& str)
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
        {
            some = true;
        };
    };
    if (start)
        return fu::slice(str, start);
    else
        return fu_STR(str);

}

static char hex_Qe1vqa8t(const unsigned x)
{
    if (x < 10u)
        return char((unsigned(fu::u8('0')) + x));
    else
        return char((unsigned(fu::u8('A')) + (x - 10u)));

}

static fu_STR xHH_BDfBCCi2(const unsigned c)
{
    return ("x"_fu + hex_Qe1vqa8t(((c >> 4u) & 0xfu))) + hex_Qe1vqa8t(((c >> 0u) & 0xfu));
}

static fu_STR valid_identifier_DlVnWb66(fu_STR&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
            continue;
        else
            str = ((fu::get_view(str, 0, i) + xHH_BDfBCCi2(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1), str.size()));

    };
    return ID_LX3QLY5k(str);
}

static fu_STR fnID_6QsBqiXt(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET_OaW94KNx(target, module, ctx);
    const fu_STR& id = (overload.name ? overload.name : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx));
    if (isOp_eayPrvio(target, module, ctx))
        return "operator"_fu + valid_operator_k2rX0sor(id);
    else
    {
        /*MOV*/ fu_STR ret = valid_identifier_DlVnWb66(fu_STR(id));
        if (GET_OaW94KNx(target, module, ctx).sighash && !(GET_OaW94KNx(target, module, ctx).flags & s_Flags_F_EXTERN))
            ret += ("_"_fu + fu::get_view(GET_OaW94KNx(target, module, ctx).sighash, 0, 8));

        return /*NRVO*/ ret;
    };
}

static fu_STR cgFnPrototype_Tp34mmPi(const s_Target& target, const bool fnptr, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs)
{
    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu_VEC<fu_STR>{}, fu_VEC<int>{}, fu_VEC<fu_STR>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    /*MOV*/ fu_STR src {};
    const s_Overload& overload = GET_OaW94KNx(target, module, ctx);
    if (!fnptr)
    {
        fu_STR linkage = fnLinkage_YTrqLIq6(overload);
        src += linkage;
    };

    {
        const s_Type& ret = (overload.type ? overload.type : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx));
        fu_STR annot = typeAnnot_XAncIXPF(ret, M_RETVAL, outputs, _here, ctx, module, _current_fn);
        src += (annot + " "_fu);
    };

    {
        /*MOV*/ fu_STR name = fnID_6QsBqiXt(target, module, ctx, _here);
        src += (fnptr ? (("(*"_fu + name) + ")"_fu) : static_cast<fu_STR&&>(name));
    };

    {
        src += "("_fu;
        fu::view<s_Argument> args = EXT_MlI4t9S3(target, module, ctx).args;
        bool first = true;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& arg = args[i].type;
            if (type_isZST_ZFEUWUgI(arg))
                continue;
            else
            {
                if (first)
                    first = false;
                else
                    src += ", "_fu;

                src += typeAnnot_XAncIXPF(arg, (M_ARGUMENT | M_FWDECL), outputs, _here, ctx, module, _current_fn);
            };
        };
        if (overload.flags & s_Flags_F_POSTFIX)
        {
            if (overload.flags & s_Flags_F_OPERATOR)
                src += ", /*postfix*/int"_fu;
            else
                fu_ASSERT();

        };
        src += ")"_fu;
    };
    return /*NRVO*/ src;
}

static void ensureFwdDecl_ah5VhVfp(const s_Target& target, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here)
{
    const s_Overload& overload = GET_OaW94KNx(target, module, ctx);
    if ((overload.kind != s_kind_fn) || (overload.name == "main"_fu))
        return;
    else if (!add_once_HGgHOUs7(outputs._ffwd, target))
        return;
    else
    {
        fu_STR fwdDecl = (cgFnPrototype_Tp34mmPi(target, bool{}, _current_fn, module, ctx, _here, outputs) + ";\n"_fu);
        if (overload.flags & s_Flags_F_HOTSWAP)
        {
            fu_STR fnPtr = (("extern "_fu + cgFnPrototype_Tp34mmPi(target, true, _current_fn, module, ctx, _here, outputs)) + ";\n"_fu);
            outputs._ffwd_live_client += fnPtr;
            outputs._ffwd_live_nclient += fwdDecl;
        }
        else
        {
            outputs._ffwd_src += fwdDecl;
        };
    };
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

static s_Target nested_qRZNBd31(const int index, const s_cg_CurrentFn& _current_fn)
{
    return index ? s_Target { -_current_fn.target.index, int(index) } : s_Target{};
}

static fu_VEC<fu_STR>& _ids_used_Vr6yLSMS(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu_VEC<int>& _ids_dedupe_YXQj9LjX(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEF_grow_if_oob_SiQlapRFRu3
                                #define DEF_grow_if_oob_SiQlapRFRu3
inline int& grow_if_oob_SiQlapRF(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR localID_ugVPC7FD(const s_Target& target, const bool dedupe, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET_OaW94KNx(target, module, ctx);
    /*MOV*/ fu_STR id { o.name };
    const s_ClosureID cid = tryParseClosureID_QYk3NQTZ(id);
    if (cid.target)
        id = GET_OaW94KNx(cid.target, module, ctx).name;

    id = ID_LX3QLY5k(id);
    if (isLocal_YmbFaJLd(target))
    {
        if (dedupe)
        {
            /*MOV*/ int dupes = 0;
            for (; ; )
            { {
                /*MOV*/ fu_STR candidate = (dupes ? x7E_YP7BiSZZ((id + '_'), fu::i64dec(dupes)) : fu_STR(id));
                for (int i = 0; i < _ids_used_Vr6yLSMS(_current_fn).size(); i++)
                {
                    if (_ids_used_Vr6yLSMS(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_5;
                    };
                };
                fu_VEC<fu_STR>* _0;
                (_0 = &(_ids_used_Vr6yLSMS(_current_fn)), (*_0 += static_cast<fu_STR&&>(candidate)));
                break;
              } BL_5:;
            };
            if (dupes)
            {
                grow_if_oob_SiQlapRF(_ids_dedupe_YXQj9LjX(_current_fn), target.index) = int(dupes);
            };
        };
        const int dupes = ((_ids_dedupe_YXQj9LjX(_current_fn).size() > target.index) ? _ids_dedupe_YXQj9LjX(_current_fn)[target.index] : (*(const int*)fu::NIL));
        if (dupes)
            return x7E_YP7BiSZZ((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

static bool F_HOIST_asPtr_fKdzUhFh(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (!s_SolverStatus((GET_OaW94KNx(target, module, ctx).status & s_SolverStatus_SS_HOIST)))
        return false;
    else
    {
        const s_Type& t = GET_OaW94KNx(target, module, ctx).solved.type;
        return is_ref_MvT8pzW6(t) && (!type_isSliceable_ZFEUWUgI(t) || TODO_FIX_isArray_MvT8pzW6(t));
    };
}

static fu_STR binding_G8HZ0SQ9(const s_Target& target, const bool forceValue, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_OaW94KNx(target, module, ctx);
    const s_Type& place_type = overload.solved.type;
    const s_Flags isArg = (overload.flags & s_Flags_F_ARG);
    s_Type place_type_1 = (forceValue ? clear_refs_MvT8pzW6(s_Type(place_type)) : s_Type(place_type));
    /*MOV*/ fu_STR annot = typeAnnot_XAncIXPF(place_type_1, ((((!is_mutref_9gHYdovL(overload.type, _here, ctx) ? M_CONST : (*(const int*)fu::NIL)) | (isArg ? M_ARGUMENT : (*(const int*)fu::NIL))) | (is_mutref_9gHYdovL(overload.type, _here, ctx) ? M_MUTVAR : (*(const int*)fu::NIL))) | ((overload.flags & s_Flags_F_MOVED_FROM) ? M_MOVABLE : (*(const int*)fu::NIL))), outputs, _here, ctx, module, _current_fn);
    const s_SolverStatus isUnused = s_SolverStatus((overload.status & s_SolverStatus_SS_UNUSED));
    if (isArg && isUnused)
        return /*NRVO*/ annot;
    else
    {
        /*MOV*/ fu_STR id = localID_ugVPC7FD(target, true, module, ctx, _current_fn);
        if (GET_OaW94KNx(target, module, ctx).status & s_SolverStatus_SS_HOIST)
        {
            if (_current_fn.target)
            {
                fu_STR hoistDecl = (starts_YP7BiSZZ(annot, "const "_fu) ? fu::slice(annot, 6) : static_cast<fu_STR&&>(annot));
                if (F_HOIST_asPtr_fKdzUhFh(target, module, ctx))
                {
                    if (hoistDecl[(hoistDecl.size() - 1)] == '&')
                        hoistDecl.mutref((hoistDecl.size() - 1)) = '*';
                    else
                        BUG_MO9c1jyS(("F_HOIST_asPtr: Decl not a ref: "_fu + hoistDecl), _here, ctx);

                };
                _current_fn._hoist += ((hoistDecl + " "_fu) + id);
                return /*NRVO*/ id;
            }
            else
                BUG_MO9c1jyS("TODO: hoisting for global variables."_fu, _here, ctx);

        }
        else
        {
            /*MOV*/ fu_STR head = static_cast<fu_STR&&>((annot ? annot : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx)));
            head += (" "_fu + id);
            if (isUnused)
                head = ("[[maybe_unused]] "_fu + head);

            if (GET_OaW94KNx(target, module, ctx).flags & s_Flags_F_MOVED_FROM)
                head = ("/*MOV*/ "_fu + head);

            return /*NRVO*/ head;
        };
    };
}

static fu_STR binding_bx8uIeSZ(const s_Argument& arg, const bool forceValue, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs)
{
    const s_Target target = nested_qRZNBd31(arg.local, _current_fn);
    return binding_G8HZ0SQ9(target, forceValue, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgFnSignature_hedkTtd0(const s_SolvedNode& fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_OaW94KNx(target, module, ctx);
    const fu_VEC<s_Argument>& host_args = EXT_MlI4t9S3(target, module, ctx).args;
    fu_STR annot = typeAnnot_XAncIXPF((overload.type ? overload.type : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx)), M_RETVAL, outputs, _here, ctx, module, _current_fn);
    fu_STR id { overload.name };
    if (id == "main"_fu)
    {
        outputs._hasMain = MAIN_needed;
        id = "fu_MAIN"_fu;
        if (host_args)
            outputs._hasMain |= MAIN_argv;

        if (type_isZST_ZFEUWUgI(overload.type))
            outputs._hasMain |= MAIN_zst;

    }
    else
    {
        id = fnID_6QsBqiXt(fn.target, module, ctx, _here);
    };
    /*MOV*/ fu_STR src = ((((fnLinkage_YTrqLIq6(overload) + annot) + " "_fu) + id) + "("_fu);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (type_isZST_ZFEUWUgI(host_args[i].type))
            continue;
        else
        {
            if (some)
                src += ", "_fu;

            some = true;
            src += binding_bx8uIeSZ(host_args[i], bool{}, _current_fn, module, ctx, _here, outputs);
        };
    };
    if (overload.flags & s_Flags_F_POSTFIX)
    {
        if (overload.flags & s_Flags_F_OPERATOR)
            src += ", /*postfix*/int "_fu;
        else
            fu_ASSERT();

    };
    src += ")"_fu;
    return /*NRVO*/ src;
}

static bool exprOK_AfKwbcst(fu::view<s_SolvedNode> nodes)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        const s_kind k = n.kind;
        if ((k == s_kind_jump) || (k == s_kind_loop) || (k == s_kind_try) || (k == s_kind_defer) || (k == s_kind_letdef) || (k == s_kind_pragma))
            return false;
        else if (!exprOK_AfKwbcst(n.items))
            return false;

    };
    return true;
}

static fu_VEC<fu_STR> cgNodes_LnAPcPVd(fu::view<s_SolvedNode> nodes, const int mode, const fu_STR& trail, fu::view<char> debug, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    fu_VEC<fu_STR> _tv0 {};
    if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(
    {
        if (mode & M_STMT)
            std::swap(_tv0, _current_fn.TEMPVARs);

    });
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& node = nodes[i];
        const bool isTrail = (trail && (i == (nodes.size() - 1)) && !is_never_ZFEUWUgI(node.type) && !is_void_ZFEUWUgI(node.type));
        /*MOV*/ fu_STR src = (node ? cgNode_I5oehkqb(node, (debug + ".cgNodes"_fu), (isTrail ? (mode & ~M_STMT) : int(mode)), (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs) : fu_STR{});
        if (src || (mode & M_STMT))
        {
            if ((mode & M_STMT) && _current_fn.TEMPVARs)
            {
                result += _current_fn.TEMPVARs;
                _current_fn.TEMPVARs.clear();
            };
            if (isTrail)
                src = (((trail + "("_fu) + src) + ")"_fu);

            result.push(static_cast<fu_STR&&>(src));
        }
        else
            fail_RdDFiAMv((((x7E_YP7BiSZZ("cgNodes: empty output for Node(kind=`"_fu, str_x2XZ9C2m(node.kind)) + "` value=`"_fu) + node.value) + "`)."_fu), _here, ctx);

    };
    return /*NRVO*/ result;
}

static fu_STR cgComma_EPatlrZY(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu_VEC<fu_STR> items = cgNodes_LnAPcPVd(nodes, 0, (*(const fu_STR*)fu::NIL), (debug + ".cgComma"_fu), _current_fn, _here, ctx, module, outputs);
    if (!items.size())
        return "(false /*empty parens*/)"_fu;
    else if (items.size() == 1)
        return fu_STR(items[0]);
    else
    {
        fu_STR src = "("_fu;
        for (int i = 0; i < items.size(); i++)
        {
            if (i)
                src += ", "_fu;

            if (i < (items.size() - 1))
                src += "(void)"_fu;

            src += items[i];
        };
        return src + ")"_fu;
    };
}

                                #ifndef DEF_each_P2Dr9Bvx1Qg
                                #define DEF_each_P2Dr9Bvx1Qg
inline void each_P2Dr9Bvx(fu::view<s_Region> a, const s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, bool& force_mut)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        const int local = Region_asLocal_RvC5USpz(r);
        if (!local || !(GET_OaW94KNx(nested_qRZNBd31(local, _current_fn), module, ctx).flags & s_Flags_F_MOVED_FROM))
        {
            force_mut = false;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF_if_first_XKihkJM18Pe
                                #define DEF_if_first_XKihkJM18Pe
inline char if_first_XKihkJM1(fu::view<char> s)
{
    return s.size() ? s[0] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEF_if_last_XKihkJM18Pe
                                #define DEF_if_last_XKihkJM18Pe
inline char if_last_XKihkJM1(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR cgStatements_p7LyvI0I(fu::view<s_SolvedNode> nodes, int& count, const fu_STR& trail, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu_VEC<fu_STR> lines = cgNodes_LnAPcPVd(nodes, M_STMT, trail, "cgStatements"_fu, _current_fn, _here, ctx, module, outputs);
    count = lines.size();
    /*MOV*/ fu_STR src {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
        {
            src += (((if_first_XKihkJM1(line) == '\n') ? ('\n' + line) : (outputs._indent + line)) + ((if_last_XKihkJM1(line) == ';') ? '\n' : ';'));
        };
    };
    return /*NRVO*/ src;
}

                                #ifndef DEF_has_8ObANk7rz5k
                                #define DEF_has_8ObANk7rz5k
inline bool has_8ObANk7r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR cgBlock_fvwB5MRq(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Helpers& helpers, const s_Type& type, s_cg_CurrentFn& _current_fn, s_Outputs& outputs, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here)
{
    const int _ids_used0 = _current_fn._ids_used.size();
    fu_DEFER(
    {
        if (!_current_fn._hoist)
            _current_fn._ids_used.shrink(_ids_used0);

    });
    fu_STR indent0 { outputs._indent };
    fu_DEFER(outputs._indent = indent0);
    outputs._indent += "    "_fu;
    fu_STR gnuOpen = (gnuStmtExpr ? "(__extension__ ("_fu : fu_STR{});
    fu_STR open = "{"_fu;
    fu_STR close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu_STR trail {};
    fu_STR name = x7E_YP7BiSZZ("BL_"_fu, fu::i64dec(_current_fn.num_labels++));
    /*MOV*/ const bool has_val = (type && !is_void_ZFEUWUgI(type));
    /*MOV*/ bool ptrflip = false;
    if (has_val)
    {
        bool force_mut = is_ref_MvT8pzW6(type);
        each_P2Dr9Bvx(type.lifetime.uni0n, _current_fn, module, ctx, force_mut);
        fu_STR annot = typeAnnot_XAncIXPF(type, (force_mut ? M_MOVABLE : (*(const int*)fu::NIL)), outputs, _here, ctx, module, _current_fn);
        fu_STR id = emitTEMPVAR_HgszQL2d(annot, ptrflip, (name ? (name + "_v"_fu) : fu_STR{}), (*(const fu_STR*)fu::NIL), _current_fn);
        fu_STR out = (ptrflip ? ("*"_fu + id) : cgMove_UpNInpC2(type, id, module, ctx, outputs, _here, _current_fn));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    bool _0 {};
    _current_fn.blocks += (_0 = bool(has_val), s_cg_Block { fu_STR(name), s_Helpers(helpers), bool(_0), bool(ptrflip) });
    int count {};
    /*MOV*/ fu_STR src = cgStatements_p7LyvI0I(nodes, count, trail, _current_fn, _here, ctx, module, outputs);
    const bool labelUsed = fu::has(src, (("goto "_fu + name) + ";"_fu));
    if (labelUsed)
    {
        close = (((("  } "_fu + name) + ":;"_fu) + indent0) + close);
        open = "{ {"_fu;
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || labelUsed || has_8ObANk7r(src, '{') || fu::has(src, "if"_fu))
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);

    return /*NRVO*/ src;
}

static fu_STR cgBlock_24YtSbve(const s_SolvedNode& node, const int mode, fu::view<char> debug, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu_VEC<s_SolvedNode> items = ((node.kind == s_kind_block) ? fu_VEC<s_SolvedNode>(node.items) : fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Helpers& helpers = ((node.kind == s_kind_block) ? node.helpers : (*(const s_Helpers*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = helpers;

    const bool expr = !(mode & M_STMT);
    if (expr && exprOK_AfKwbcst(items))
        return cgComma_EPatlrZY(items, (debug + ".cgBlock"_fu), _current_fn, _here, ctx, module, outputs);
    else
        return cgBlock_fvwB5MRq(items, !!(mode & M_OPT_CURLIES), expr, helpers, (expr ? node.type : (*(const s_Type*)fu::NIL)), _current_fn, outputs, module, ctx, _here);

}

                                #ifndef DEF_unpackAddrOfFn_UleqQ7vZGBi
                                #define DEF_unpackAddrOfFn_UleqQ7vZGBi
inline void unpackAddrOfFn_UleqQ7vZ(fu::view<char> canon, s_Target& last, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            /*MOV*/ const s_Mi mi = parseMi_0HRwKgGk(offset, canon);
            int _0 {};
            const s_Target target = (_0 = int(mi.modid), s_Target { int(_0), int(mi.index) });
            if (last)
                fail_RdDFiAMv(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_OaW94KNx(last, module, ctx).name) + " vs "_fu) + GET_OaW94KNx(target, module, ctx).name), _here, ctx);
            else
            {
                last = target;
                if (GET_OaW94KNx(target, module, ctx).kind == s_kind_fn)
                {
                    fu::view<s_Argument> args = EXT_MlI4t9S3(target, module, ctx).args;
                    for (int i = 0; i < args.size(); i++)
                    {
                        if (args[i].flags & s_Flags_F_IMPLICIT)
                            fail_RdDFiAMv("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, _here, ctx);

                    };
                    ensureFnUsable_9q3otC0P(target, module, ctx, outputs, _current_fn, _here);
                }
                else
                    fail_RdDFiAMv(((x7E_YP7BiSZZ("Cannot codegen a non-fn: "_fu, str_x2XZ9C2m(GET_OaW94KNx(target, module, ctx).kind)) + " "_fu) + GET_OaW94KNx(target, module, ctx).name), _here, ctx);

            };
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static fu_STR cgEmpty_IKkQY5yG(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (mode & M_STMT)
    {
        return fu_STR{};
    }
    else if ((mode & M_ARG_TO_NATIVE) && type_isAddrOfFn_ZFEUWUgI(node.type))
    {
        s_Target last {};
        unpackAddrOfFn_UleqQ7vZ(node.type.vtype.canon, last, module, ctx, _here, outputs, _current_fn);
        return "&"_fu + fnID_6QsBqiXt(last, module, ctx, _here);
    }
    else if (!node.type)
        return "0"_fu;
    else
        return cgDefault_ytoUJzGd(node.type, _here, ctx, outputs, module, _current_fn);

}

static fu_STR cgFn_Hyy7n2Un(const s_SolvedNode& fn, const int mode, s_Outputs& outputs, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR indent0 { outputs._indent };
    fu_DEFER(outputs._indent = static_cast<fu_STR&&>(indent0));
    fu::view<s_SolvedNode> items = fn.items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_OaW94KNx(target, module, ctx);
    fu::view<char> id = overload.name;
    if (overload.status & s_SolverStatus_SS_FINALIZED)
    {
        if (!body)
        {
            if (overload.kind == s_kind___native)
            {
                if (mode & M_STMT)
                {
                    return fu_STR{};
                }
                else
                    return "0"_fu;

            }
            else
                fail_RdDFiAMv(((x7E_YP7BiSZZ("cgFn: no body on non-native: "_fu, str_x2XZ9C2m(overload.kind)) + " "_fu) + id), _here, ctx);

        }
        else
        {
            outputs._indent = "\n"_fu;
            fu_STR src {};

            {
                s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(fn.target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu_VEC<fu_STR>{}, fu_VEC<int>{}, fu_VEC<fu_STR>{} };
                fu_DEFER(std::swap(_current_fn, current_fn0));
                std::swap(_current_fn, current_fn0);
                _current_fn.can_return = body.helpers;
                src += cgFnSignature_hedkTtd0(fn, module, ctx, _here, outputs, _current_fn);
                fu_STR body_src = cgBlock_24YtSbve(body, M_STMT, (("cgFn("_fu + id) + ")"_fu), _current_fn, _here, ctx, module, outputs);
                if (_current_fn._hoist)
                {
                    fu_STR hoist = "\n    // Hoisted:"_fu;
                    for (int i = 0; i < _current_fn._hoist.size(); i++)
                        hoist += (("\n    "_fu + _current_fn._hoist[i]) + ";"_fu);

                    const int idx = (fu::lfind(body_src, "{"_fu) + 1);
                    if (idx > 0)
                        body_src.splice(idx, 0, (hoist + "\n"_fu));

                };
                src += body_src;
            };
            if (overload.status & s_SolverStatus_SS_FN_RECUR)
                ensureFwdDecl_ah5VhVfp(fn.target, module, ctx, outputs, _current_fn, _here);

            /*MOV*/ fu_STR dedupe = ((overload.flags & s_Flags_F_PUB) && (overload.flags & s_Flags_F_TEMPLATE) ? valid_identifier_DlVnWb66(fu_STR(overload.name)) : fu_STR{});
            fu_STR dedupe_1 = ((dedupe && overload.sighash) ? ((dedupe + '_') + overload.sighash) : static_cast<fu_STR&&>(dedupe));
            if (overload.flags & s_Flags_F_HOTSWAP)
            {
                if (target.modid == module.modid)
                {
                    outputs._live_targets += int(target.index);
                    fu_STR fnID = fnID_6QsBqiXt(target, module, ctx, _here);
                    fu_STR fnID_local = (fnID + "_local"_fu);
                    fu_STR fnPtrAnnot = cgFnPrototype_Tp34mmPi(target, true, _current_fn, module, ctx, _here, outputs);
                    include_NJm5NZ4n("<dl/hotswap.hpp>"_fu, outputs);
                    ensureFwdDecl_ah5VhVfp(target, module, ctx, outputs, _current_fn, _here);
                    src = (((((((((((((((((((((("                                #ifdef fu_HOTSWAP\n"_fu + "                                #define "_fu) + fnID) + " "_fu) + fnID_local) + "\n"_fu) + "extern \"C\" fu_EXPORT\n"_fu) + "                                #endif\n"_fu) + src) + "\n"_fu) + "                                #ifdef fu_HOTSWAP\n"_fu) + "                                #undef "_fu) + fnID) + "\n"_fu) + fnPtrAnnot) + " =\n    fu::hotswap(\""_fu) + fnID_local) + "\",\n                 "_fu) + fnID) + ",\n                &"_fu) + fnID_local) + ");\n"_fu) + "                                #endif"_fu);
                }
                else
                    fu_ASSERT();

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
            return cgEmpty_IKkQY5yG(fn, mode, module, ctx, _here, outputs, _current_fn);
        };
    }
    else
        fail_RdDFiAMv(("cgFn: fn not finalized: "_fu + id), _here, ctx);

}

static void ensureFnDef_n6N1ATBE(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (target.modid == module.modid)
    {
        if (!add_once_sDUBjUzV(outputs._idef, target.index))
            return;
        else
        {
            const s_SolvedNode& node = GET_OaW94KNx(target, module, ctx).solved;
            if (node.kind == s_kind_fn)
                cgFn_Hyy7n2Un(node, M_STMT, outputs, module, ctx, _here, _current_fn);
            else
                fail_RdDFiAMv("ensureFnDef non-fn"_fu, _here, ctx);

        };
    }
    else
        fail_RdDFiAMv((((x7E_YP7BiSZZ((x7E_YP7BiSZZ((x7E_YP7BiSZZ("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu), str_x2XZ9C2m(GET_OaW94KNx(target, module, ctx).kind)) + " "_fu) + GET_OaW94KNx(target, module, ctx).name) + "`."_fu), _here, ctx);

}

static void ensureFnUsable_9q3otC0P(const s_Target& target, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here)
{
    if (target.modid != module.modid)
        ensureFwdDecl_ah5VhVfp(target, module, ctx, outputs, _current_fn, _here);
    else
        ensureFnDef_n6N1ATBE(target, module, ctx, _here, outputs, _current_fn);

}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

inline static bool isIntegerConstant_s7X4Snc4(const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx)
{
    if (expr.kind == s_kind_int)
        return true;
    else
    {
        if (expr.kind == s_kind_call)
        {
            const s_Overload& t = GET_OaW94KNx(expr.target, module, ctx);
            if ((t.kind == s_kind___native) && (t.flags & s_Flags_F_OPERATOR))
            {
                for (int i = 0; i < expr.items.size(); i++)
                {
                    if (!isIntegerConstant_s7X4Snc4(expr.items[i], module, ctx))
                        return false;

                };
                return true;
            };
        };
        return false;
    };
}

                                #ifndef DEF_join_NaazSXrklU3
                                #define DEF_join_NaazSXrklU3
inline fu_STR join_NaazSXrk(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));
    else
    {
        const int N = sep.size();
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_STR res {};
        res.grow<false>(size);
        fu::view<char> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
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

static fu_STR binding_eVCkFb5t(const s_Target& target, const s_SolvedNode& init, const bool doInit, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR head = binding_G8HZ0SQ9(target, bool{}, module, ctx, _here, outputs, _current_fn);
    if (!doInit)
        return /*NRVO*/ head;
    else
    {
        if (GET_OaW94KNx(target, module, ctx).status & s_SolverStatus_SS_HOIST)
            head += " = "_fu;

        if (!init || ((init.kind == s_kind_definit) && !is_ref_MvT8pzW6(init.type)))
        {
            return head + " {}"_fu;
        }
        else
        {
            const bool isCopy = ((init.kind == s_kind_copy) && !is_ref_MvT8pzW6(GET_OaW94KNx(target, module, ctx).solved.type));
            const s_SolvedNode& init_1 = (isCopy ? only_l6T9uEqE(init.items) : init);
            const bool use_initTEMPVARs = !_current_fn.target.index;
            fu_VEC<fu_STR> initTEMPVARs {};
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            fu_STR expr = cgNode_I5oehkqb(init_1, "binding"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            if (initTEMPVARs)
            {
                expr = (((((("[]() -> "_fu + typeAnnot_XAncIXPF(init_1.type, 0, outputs, _here, ctx, module, _current_fn)) + " {\n    "_fu) + join_NaazSXrk(initTEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}()"_fu);
            };
            if (isCopy && !is_primitive_VS9ogqN5(init_1.type))
            {
                return ((head + " { "_fu) + expr) + " }"_fu;
            }
            else if (GET_OaW94KNx(target, module, ctx).status & s_SolverStatus_SS_HOIST)
            {
                if (F_HOIST_asPtr_fKdzUhFh(target, module, ctx))
                    return ((head + "&("_fu) + expr) + ")"_fu;
                else
                    return head + expr;

            }
            else
                return (head + " = "_fu) + expr;

        };
    };
}

static fu_STR binding_Ux57FH3g(const s_SolvedNode& node, const bool doInit, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = node.target;
    const s_SolvedNode& init = (doInit && node.items ? node.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
    return binding_eVCkFb5t(target, init, doInit, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgLet_hLpCnSfp(const s_SolvedNode& node, const bool global, const bool foreign, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (type_isZST_ZFEUWUgI(node.type))
    {
        return fu_STR{};
    }
    else
    {
        const bool intconst = (global && is_primitive_VS9ogqN5(node.type) && !is_floating_pt_VS9ogqN5(node.type) && isIntegerConstant_s7X4Snc4(node.items[LET_INIT], module, ctx));
        /*MOV*/ fu_STR src = binding_Ux57FH3g(node, (!foreign || intconst), module, ctx, _here, outputs, _current_fn);
        if (!global)
            return /*NRVO*/ src;
        else
        {
            if (starts_YP7BiSZZ(src, "const "_fu))
                src = fu::slice(src, 6);

            if (intconst)
            {
                outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                return fu_STR{};
            }
            else
            {
                const int prio = (is_primitive_VS9ogqN5(node.type) ? 0 : int(((node.target.modid == module.modid) ? module.order.dep_depth : ctx.modules[node.target.modid].order.dep_depth)));
                if (prio)
                {
                    include_NJm5NZ4n("<fu/init_priority.h>"_fu, outputs);
                    fu_STR attr = (x7E_YP7BiSZZ("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ")"_fu);
                    const int eq = find_8ObANk7r(src, '=');
                    if (eq > 0)
                        src = (((fu::get_view(src, 0, eq) + attr) + " "_fu) + fu::get_view(src, eq, src.size()));

                };
                if (!isExtLinked_3Atus6oq(GET_OaW94KNx(node.target, module, ctx)))
                {
                    if (!foreign)
                        outputs._fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
                    else
                        fail_RdDFiAMv(("Cannot codegen, relies on an external static: "_fu + GET_OaW94KNx(node.target, module, ctx).name), _here, ctx);

                }
                else
                {
                    outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\nextern const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                };
                return fu_STR{};
            };
        };
    };
}

static void cgForeignGlobal_kw3HjMTz(const s_Target& target, s_Outputs& outputs, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn)
{
    if (!add_once_HGgHOUs7(outputs._ffwd, target))
        return;
    else
        cgLet_hLpCnSfp(GET_OaW94KNx(target, module, ctx).solved, true, true, module, ctx, _here, outputs, _current_fn);

}

                                #ifndef DEF_has_NaazSXrklU3
                                #define DEF_has_NaazSXrklU3
inline bool has_NaazSXrk(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR rootNS_TBJDrw2N(const fu_STR& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_NaazSXrk(_current_fn._ids_used, id))
        return "::"_fu + id;
    else
        return fu_STR(id);

}

static fu_STR cgEnumv_qklLCi9P(const s_Type& type, fu::view<char> id, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    fu_STR base = typeAnnotBase_gSqG2tl4(type, 0, outputs, _here, ctx, module, _current_fn);
    return (base + "_"_fu) + id;
}

static fu_STR emitPrefixOp_wgcC8e2M(fu::view<char> op, fu::view_mut<fu_STR> item_src, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    return unpromote_R4zbbsTc((op + ARG_s5E9zupI(0, item_src)), isNative, node, outputs, _here, ctx, module, _current_fn);
}

                                #ifndef DEF_map_etSfbmT0sEg
                                #define DEF_map_etSfbmT0sEg
inline fu_VEC<fu_STR> map_etSfbmT0(fu::view<s_SolvedNode> a)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        fu_STR BL_3_v {};
        res.mutref(i) = (__extension__ (
        {
            const s_SolvedNode& x = a[i];
            BL_3_v = (str_x2XZ9C2m(x.kind));
        (void)0;}), static_cast<fu_STR&&>(BL_3_v));
    };
    return /*NRVO*/ res;
}
                                #endif

static fu_STR cgCall_cbEMvl1e(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    const s_Extended& ext = EXT_MlI4t9S3(node.target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_OaW94KNx(node.target, module, ctx))) ? *_0 : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx));
    const fu_VEC<s_SolvedNode>& args = node.items;
    const bool isNative = (target.kind == s_kind___native);
    const bool isCpyMovAssign = ((args.size() == 2) && isNative && (target.name == "="_fu));
    const int MUSTSEQ_mask = node.helpers.index;
    int ooe_crosscheck = 0;
    fu_STR ooe_header {};
    fu_VEC<fu_STR> item_src {};
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        const s_SolvedNode& arg_1 = ((isCpyMovAssign && (i == 1) && (arg.kind == s_kind_copy)) ? only_l6T9uEqE(arg.items) : arg);
        bool junk = false;
        if (type_isZST_ZFEUWUgI(arg_1.type))
        {
            junk = ((arg_1.kind == s_kind_empty) || (arg_1.kind == s_kind_definit) || (arg_1.kind == s_kind_fndef) || ((arg_1.kind == s_kind_call) && ((GET_OaW94KNx(arg_1.target, module, ctx).kind == s_kind_var) || ((GET_OaW94KNx(arg_1.target, module, ctx).kind == s_kind_type) && !arg_1.items) || (GET_OaW94KNx(arg_1.target, module, ctx).kind == s_kind_enumv))));
            if (!junk)
                fail_RdDFiAMv((x7E_YP7BiSZZ("Cannot discard ZST arg, kind is `"_fu, str_x2XZ9C2m(arg_1.kind)) + "`."_fu), _here, ctx);

        };
        fu_STR _1 {};
        /*MOV*/ fu_STR src = (junk ? fu_STR{} : ((_1 = cgNode_I5oehkqb(arg_1, (x7E_YP7BiSZZ((("cgCall("_fu + node.value) + ").ARG("_fu), fu::i64dec(i)) + ")"_fu), (isNative ? M_ARG_TO_NATIVE : (*(const int*)fu::NIL)), ext.args[i].type, _here, ctx, module, _current_fn, outputs)) ? static_cast<fu_STR&&>(_1) : fail_RdDFiAMv("Empty arg src."_fu, _here, ctx)));
        const int MUSTSEQ_bit = (1 << (i & 31));
        if (MUSTSEQ_mask & MUSTSEQ_bit)
        {
            if (junk)
                fail_RdDFiAMv("Trying to MUSTSEQ a discarded argument, shouldnt happen."_fu, _here, ctx);
            else
            {
                ooe_crosscheck |= MUSTSEQ_bit;
                if (!isFieldChain_J1G85UMX(arg_1, module, ctx))
                {
                    if (ooe_header)
                        ooe_header += ", "_fu;
                    else
                        ooe_header = "("_fu;

                    bool ptrflip = false;
                    fu_STR annot = typeAnnot_XAncIXPF(arg_1.type, 0, outputs, _here, ctx, module, _current_fn);
                    fu_STR id = emitTEMPVAR_HgszQL2d(annot, ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn);
                    ooe_header += id;
                    ooe_header += " = "_fu;
                    ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu_STR(src));
                    src = (ptrflip ? ("*"_fu + id) : cgMove_UpNInpC2(arg_1.type, id, module, ctx, outputs, _here, _current_fn));
                };
            };
        };
        item_src += static_cast<fu_STR&&>(src);
    };
    if (ooe_crosscheck == MUSTSEQ_mask)
    {
        if (isNative && (target.name[0] == '\n'))
        {
            /*MOV*/ fu_STR id = fu::slice(target.name, (NativeHacks_QYk3NQTZ(target.name).name_start_idx + 1));
            const int idx = find_8ObANk7r(id, '\n');
            if (idx > -1)
            {
                include_NJm5NZ4n(fu::slice(id, 0, idx), outputs);
                id = fu::slice(id, (idx + 1));
            };
            if (id[0] == '.')
            {
                if (args.size() > 1)
                    return emitMethodCall_ze99ee30(id, item_src, ooe_header);
                else
                    return emitPostfixOp_QZdPUxnZ(id, item_src, isNative, node, outputs, _here, ctx, module, _current_fn);

            }
            else if (id[0] == '/')
                return ooeWrap_LXzNIndn(emitBuiltin_3lgldZn3(id, item_src, node, outputs, _here, ctx, module, _current_fn), ooe_header);
            else if (args)
            {
                if (hasIdentifierChars_XKihkJM1(id))
                    return emitFunctionCall_u9r6DYtx(id, "("_fu, ")"_fu, item_src, ooe_header);
                else
                    return emitBinaryOp_Kp8z63Nh(id, args, _here, ctx, mode, ooe_header, item_src, isNative, node, outputs, module, _current_fn);

            }
            else
                return /*NRVO*/ id;

        }
        else if (target.kind == s_kind_type)
        {
            if (!args)
                return cgDefault_ytoUJzGd(target.type, _here, ctx, outputs, module, _current_fn);
            else
            {
                const s_Struct* _2;
                const s_Struct& t = (*(_2 = &(tryLookupStructOrUserPrimitive_3ZVvGB0M(target.type, module, ctx))) ? *_2 : fail_RdDFiAMv("cgCall: defctor/type not a struct nor a user primitive."_fu, _here, ctx));
                fu_STR base = typeAnnotBase_gSqG2tl4(target.type, 0, outputs, _here, ctx, module, _current_fn);
                if (t.kind == s_kind_flags)
                    return emitFunctionCall_u9r6DYtx(base, "(("_fu, ((") & MASK_"_fu + base) + ")"_fu), item_src, ooe_header);
                else if ((t.kind == s_kind_primitive) || (t.kind == s_kind_enum))
                    return emitFunctionCall_u9r6DYtx(base, "("_fu, ")"_fu, item_src, ooe_header);
                else if ((t.kind == s_kind_struct) || (t.kind == s_kind_union))
                {
                    return emitFunctionCall_u9r6DYtx(base, " { "_fu, " }"_fu, item_src, ooe_header);
                }
                else
                    BUG_MO9c1jyS(x7E_YP7BiSZZ("Unknown usertype kind: "_fu, str_x2XZ9C2m(t.kind)), _here, ctx);

            };
        }
        else
        {
            if (node.target.modid && (target.kind == s_kind_fn))
                ensureFnUsable_9q3otC0P(node.target, module, ctx, outputs, _current_fn, _here);

            const fu_STR& id = (target.name ? target.name : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx));
            if ((args.size() <= 2))
            {
                if (target.kind == s_kind_var)
                {
                    if (type_isZST_ZFEUWUgI(target.type))
                        return cgDefault_ytoUJzGd(target.type, _here, ctx, outputs, module, _current_fn);
                    else if (!isLocal_YmbFaJLd(node.target))
                    {
                        if (node.target.modid != module.modid)
                            cgForeignGlobal_kw3HjMTz(node.target, outputs, module, ctx, _here, _current_fn);

                        return rootNS_TBJDrw2N(ID_LX3QLY5k(id), _current_fn);
                    }
                    else
                    {
                        /*MOV*/ fu_STR id_1 = localID_ugVPC7FD(node.target, bool{}, module, ctx, _current_fn);
                        if (F_HOIST_asPtr_fKdzUhFh(node.target, module, ctx))
                            return ("(*"_fu + id_1) + ")"_fu;
                        else
                            return /*NRVO*/ id_1;

                    };
                }
                else if (target.kind == s_kind_field)
                    return (ARG_s5E9zupI(0, item_src) + "."_fu) + ID_LX3QLY5k(id);
                else if (target.kind == s_kind_enumv)
                    return cgEnumv_qklLCi9P(target.type, id, outputs, _here, ctx, module, _current_fn);
                else
                {
                    if (isOp_eayPrvio(node.target, module, ctx))
                    {
                        if (args.size() == 1)
                        {
                            if (target.flags & s_Flags_F_POSTFIX)
                                return emitPostfixOp_QZdPUxnZ(valid_operator_k2rX0sor(id), item_src, isNative, node, outputs, _here, ctx, module, _current_fn);
                            else
                                return emitPrefixOp_wgcC8e2M(valid_operator_k2rX0sor(id), item_src, isNative, node, outputs, _here, ctx, module, _current_fn);

                        }
                        else if (args.size() == 2)
                        {
                            if (id == "[]"_fu)
                            {
                                if (mode & M_MOVE)
                                {
                                    fu_STR _3 {};
                                    return (_3 = (ARG_s5E9zupI(0, item_src) + ".try_steal("_fu), (static_cast<fu_STR&&>(_3) + ARG_s5E9zupI(1, item_src))) + ")"_fu;
                                }
                                else
                                {
                                    fu_STR _4 {};
                                    return (_4 = (ARG_s5E9zupI(0, item_src) + "["_fu), (static_cast<fu_STR&&>(_4) + ARG_s5E9zupI(1, item_src))) + "]"_fu;
                                };
                            }
                            else
                                return emitBinaryOp_Kp8z63Nh(valid_operator_k2rX0sor(id), args, _here, ctx, mode, ooe_header, item_src, isNative, node, outputs, module, _current_fn);

                        };
                    };
                    if ((id == "STEAL"_fu) && (args.size() == 1))
                        return cgMove_UpNInpC2(node.type, ARG_s5E9zupI(0, item_src), module, ctx, outputs, _here, _current_fn);

                };
            };
            if (isNative)
                fail_RdDFiAMv((("Unknown __native: `"_fu + id) + "`."_fu), _here, ctx);
            else
                return emitFunctionCall_u9r6DYtx(rootNS_TBJDrw2N(fnID_6QsBqiXt(node.target, module, ctx, _here), _current_fn), "("_fu, ")"_fu, item_src, ooe_header);

        };
    }
    else
        fail_RdDFiAMv(((x7E_YP7BiSZZ((x7E_YP7BiSZZ("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(MUSTSEQ_mask)) + ": "_fu) + join_NaazSXrk(map_etSfbmT0(args), "|"_fu)), _here, ctx);

}

                                #ifndef DEF_find_aQVLX4hMqnc
                                #define DEF_find_aQVLX4hMqnc
inline int find_aQVLX4hM(fu::view<char> a, const char b, /*MOV*/ int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (/*MOV*/ int i = int(start); i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static fu_STR cgLiteral_W5Gb06sl(const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src { node.value };
    if (is_unsigned_VS9ogqN5(node.type) && !has_8ObANk7r(src, 'u'))
        src += 'u';

    if (is_floating_pt_VS9ogqN5(node.type))
    {
        if (!has_8ObANk7r(src, '.'))
            src += ".0"_fu;

        if (node.type.vtype.canon == "f32"_fu)
        {
            if (has_8ObANk7r(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (node.type.vtype.canon != "f64"_fu)
            fu_ASSERT();

    };
    if (starts_YP7BiSZZ(src, "0o"_fu))
        src.splice(1, 1);

    if (src.size() > 16)
    {
        s_Intlit parse = Intlit_IQ08v4Hx(src);
        if (parse.negative && (parse.absval == 0x8000000000000000ull))
            return "(-9223372036854775807-1)"_fu;

    };
    if (is_integral_VS9ogqN5(node.type) && (node.type.vtype.canon != "u32"_fu) && (node.type.vtype.canon != "i32"_fu))
    {
        if ((node.type.vtype.canon == "u64"_fu) || (node.type.vtype.canon == "i64"_fu))
        {
            if (!has_8ObANk7r(src, 'l'))
                return src + "ll"_fu;

        }
        else
            return ((typeAnnotBase_gSqG2tl4(node.type, 0, outputs, _here, ctx, module, _current_fn) + "("_fu) + src) + ")"_fu;

    };
    int idx {};
    while (((idx = find_aQVLX4hM(src, '_', int(idx))) >= 0))
        src.splice(idx, 1);

    return /*NRVO*/ src;
}

static fu_STR escapeStringLiteral_bVDlywOf(fu::view<char> str, const char quot)
{
    /*MOV*/ fu_STR esc = fu_STR { fu::slate<1, char> { char(quot) } };
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
            esc += ("\\"_fu + xHH_BDfBCCi2(unsigned(fu::u8(c))));
        else
        {
            if (c == quot)
                esc += '\\';

            esc += char(c);
        };
    };
    esc += char(quot);
    return /*NRVO*/ esc;
}

static fu_STR cgCharLiteral_Zc8LPqyY(const s_SolvedNode& node)
{
    return escapeStringLiteral_bVDlywOf(node.value, '\'');
}

static fu_STR cgStringLiteral_KfITti1I(const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (is_enum_VS9ogqN5(node.type) || is_flags_VS9ogqN5(node.type))
        return cgEnumv_qklLCi9P(node.type, node.value, outputs, _here, ctx, module, _current_fn);
    else
    {
        annotateString_7YoInctu(outputs);
        /*MOV*/ fu_STR esc = escapeStringLiteral_bVDlywOf(node.value, '"');
        esc += "_fu"_fu;
        return /*NRVO*/ esc;
    };
}

static fu_STR cgArrayLiteral_44zVcAte(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    if (node.target)
        return cgCall_cbEMvl1e(node, mode, module, ctx, _here, _current_fn, outputs);
    else
    {
        fu_VEC<fu_STR> items = cgNodes_LnAPcPVd(node.items, 0, (*(const fu_STR*)fu::NIL), "cgArrayLiteral"_fu, _current_fn, _here, ctx, module, outputs);
        if (!items.size())
            return cgDefault_ytoUJzGd(node.type, _here, ctx, outputs, module, _current_fn);
        else
        {
            fu_STR curly = (("{ "_fu + join_NaazSXrk(items, ", "_fu)) + " }"_fu);
            fu_STR itemT = typeAnnotBase_gSqG2tl4(clear_sliceable_9gHYdovL(node.type, _here, ctx), 0, outputs, _here, ctx, module, _current_fn);
            fu_STR slate = ((((x7E_YP7BiSZZ("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
            if (is_ref_MvT8pzW6(callarg) && !TODO_FIX_isArray_MvT8pzW6(callarg))
            {
                include_NJm5NZ4n("<fu/view.h>"_fu, outputs);
                return ("("_fu + slate) + ")"_fu;
            }
            else
            {
                return ((typeAnnotBase_gSqG2tl4(node.type, 0, outputs, _here, ctx, module, _current_fn) + " { "_fu) + slate) + " }"_fu;
            };
        };
    };
}

static fu_STR cgDefinit_DZfFCaJs(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    return cgArrayLiteral_44zVcAte(node, mode, callarg, module, ctx, _here, _current_fn, outputs);
}

static bool supportsNRVO_j74cOuYc(const s_Target& t, const s_Module& module, const s_Context& ctx)
{
    return (GET_OaW94KNx(t, module, ctx).kind == s_kind_var) && !(GET_OaW94KNx(t, module, ctx).flags & s_Flags_F_ARG) && !is_ref_MvT8pzW6(GET_OaW94KNx(t, module, ctx).solved.type);
}

static bool Lifetime_hasArgPositions_Zym6AOC9(const s_Lifetime& lifetime)
{
    for (int i = 0; i < lifetime.uni0n.size(); i++)
    {
        if (Region_isArgPosition_RvC5USpz(lifetime.uni0n[i]))
            return true;

    };
    return false;
}

static fu_STR cgMoveOrClone_tsvVg4L6(const s_kind kind, const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn)
{
    if (kind == s_kind_move)
        return cgMove_UpNInpC2(type, src, module, ctx, outputs, _here, _current_fn);
    else
        return cgClone_N6SoZjKX(type, src, outputs, _here, ctx, module, _current_fn);

}

static fu_STR cgMoveOrClone_503MuTtW(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    const s_SolvedNode& expr = only_l6T9uEqE(node.items);
    if (node.kind == s_kind_move)
    {
        if (mode & M_RETURN)
        {
            const bool nrvo = ((expr.kind == s_kind_call) && (expr.items.size() == 0) && supportsNRVO_j74cOuYc(expr.target, module, ctx));
            if (nrvo)
                return "/*NRVO*/ "_fu + cgNode_I5oehkqb(expr, "NRVO"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);

        };
        if (!is_trivial_3ZVvGB0M(node.type, module, ctx))
        {
            if (expr.kind == s_kind_call)
            {
                const s_Overload& o = GET_OaW94KNx(expr.target, module, ctx);
                if ((o.kind == s_kind___native) && (o.name == "[]"_fu))
                    return cgNode_I5oehkqb(expr, "cgMoveOperator[]"_fu, M_MOVE, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
                else if (!is_mutref_9gHYdovL(o.type, _here, ctx) && Lifetime_hasArgPositions_Zym6AOC9(o.type.lifetime))
                {
                    fu_STR _0 {};
                    fu_STR _1 {};
                    return (_1 = ((_0 = (("/* MOVE_FROM_CONST_REF */static_cast<"_fu + typeAnnotBase_gSqG2tl4(o.type, 0, outputs, _here, ctx, module, _current_fn)) + "&&>(const_cast<"_fu), (static_cast<fu_STR&&>(_0) + typeAnnotBase_gSqG2tl4(o.type, 0, outputs, _here, ctx, module, _current_fn))) + "&>("_fu), (static_cast<fu_STR&&>(_1) + cgNode_I5oehkqb(expr, "cgMoveFromConstRefHelper"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs))) + "))"_fu;
                };
            };
        };
    };
    fu_STR _2 {};
    return (_2 = cgNode_I5oehkqb(expr, "cgMoveOrClone"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs), cgMoveOrClone_tsvVg4L6(node.kind, node.type, static_cast<fu_STR&&>(_2), module, ctx, outputs, _here, _current_fn));
}

static fu_STR blockWrapSubstatement_XtvJKNTk(const s_SolvedNode& node, const int mode, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    return cgBlock_24YtSbve(node, ((M_STMT | M_OPT_CURLIES) | mode), "blockWrapSubstatement"_fu, _current_fn, _here, ctx, module, outputs);
}

static fu_STR blockWrap_unlessIf_1xw37BPu(const s_SolvedNode& node, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    if ((node.kind == s_kind_if) || (node.kind == s_kind_and))
        return " "_fu + cgNode_I5oehkqb(node, "cgIf.blockWrap_unlessIf"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
    else
        return blockWrapSubstatement_XtvJKNTk(node, 0, _current_fn, _here, ctx, module, outputs);

}

static fu_STR cgIf_uTc7shcZ(const s_SolvedNode& node, const int mode, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    const s_SolvedNode& n0 = node.items[0];
    const s_SolvedNode& n1 = node.items[1];
    const s_SolvedNode& n2 = node.items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode_I5oehkqb(n0, "cgIf[cond]"_fu, (M_RETBOOL | (stmt ? M_PARENS : (*(const int*)fu::NIL))), (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement_XtvJKNTk(n1, 0, _current_fn, _here, ctx, module, outputs) : cgNode_I5oehkqb(n1, "cgIf[cons]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf_1xw37BPu(n2, _here, ctx, module, _current_fn, outputs) : cgNode_I5oehkqb(n2, "cgIf[alt]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs)) : fu_STR{});
    if (stmt)
    {
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((outputs._indent + "else"_fu) + alt) : fu_STR{});
    }
    else
        return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;

}

static void cgAndOr_concat_3w3IlnRk(fu_STR& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    const int mode = (M_RETBOOL | (parens && (items.size() == 1) ? M_PARENS : (*(const int*)fu::NIL)));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const s_SolvedNode& item = items[i];
        fu_STR term = cgNode_I5oehkqb(item, (x7E_YP7BiSZZ("cgAndOr_concat["_fu, fu::i64dec(i)) + "]"_fu), mode, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
        if (is_void_ZFEUWUgI(item.type))
            src += (("("_fu + term) + ", 0)"_fu);
        else
            src += term;

    };
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool acceptsBool_JO5PPIhb(const s_Type& type)
{
    return isAssignable_b2EdYOvX(type, t_bool, bool{}, bool{});
}

static fu_STR via_7nqDvmIQ(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
    {
        fu_STR _0 {};
        tv.id = (_0 = fu_STR((tv.annot = typeAnnot_XAncIXPF(type, 0, outputs, _here, ctx, module, _current_fn))), emitTEMPVAR_HgszQL2d(static_cast<fu_STR&&>(_0), tv.ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;
    else if (is_trivial_3ZVvGB0M(type, module, ctx))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;
    else
        return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;

}

static fu_STR via_QraCQbsX(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    if (isFieldChain_J1G85UMX(expr, module, ctx))
    {
        fu_STR trivial = cgNode_I5oehkqb(expr, "TEMPVAR[fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    }
    else
    {
        if ((expr.kind == s_kind_copy) || (expr.kind == s_kind_move))
        {
            const s_kind kind = expr.kind;
            const s_SolvedNode& expr_1 = only_l6T9uEqE(expr.items);
            if (isFieldChain_J1G85UMX(expr_1, module, ctx))
            {
                fu_STR trivial = cgNode_I5oehkqb(expr_1, "TEMPVAR[copymov/fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
                return ((trivial + " ? "_fu) + cgMoveOrClone_tsvVg4L6(kind, type, trivial, module, ctx, outputs, _here, _current_fn)) + " : "_fu;
            };
        };
        fu_STR _0 {};
        return (_0 = cgNode_I5oehkqb(expr, "TEMPVAR[usual]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs), via_7nqDvmIQ(tv, type, static_cast<fu_STR&&>(_0), outputs, _here, ctx, module, _current_fn));
    };
}

static fu_STR cgOr_VWIiQz9n(const s_SolvedNode& node, const int mode, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    const s_Type& type = node.type;
    fu::view<s_SolvedNode> items = node.items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if (!("_fu;
        cgAndOr_concat_3w3IlnRk(src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _here, ctx, module, _current_fn, outputs);
        src += "))"_fu;
        src += blockWrapSubstatement_XtvJKNTk(items[(items.size() - 1)], 0, _current_fn, _here, ctx, module, outputs);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
        if (acceptsBool_JO5PPIhb(type))
            cgAndOr_concat_3w3IlnRk(src, " || "_fu, items, true, _here, ctx, module, _current_fn, outputs);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < (items.size() - 1); i++)
            {
                const s_SolvedNode* _0;
                const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx));
                s_SolvedNode tail { item };
                if (item.kind == s_kind_and)
                {
                    fu::view<s_SolvedNode> items_1 = item.items;
                    const s_SolvedNode* _1;
                    tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx));
                    cgAndOr_concat_3w3IlnRk(src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), bool{}, _here, ctx, module, _current_fn, outputs);
                    src += " && "_fu;
                };
                src += via_QraCQbsX(tv, type, tail, module, ctx, _here, _current_fn, outputs);
            };
            const s_SolvedNode* _2;
            const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx));
            src += cgNode_I5oehkqb(tail, "cgOr"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu_STR cgAnd_dnB69hgI(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, fu::view<char> debug, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if ("_fu;
        cgAndOr_concat_3w3IlnRk(src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _here, ctx, module, _current_fn, outputs);
        src += ")"_fu;
        src += blockWrapSubstatement_XtvJKNTk(items[(items.size() - 1)], 0, _current_fn, _here, ctx, module, outputs);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
        if (acceptsBool_JO5PPIhb(type))
            cgAndOr_concat_3w3IlnRk(src, " && "_fu, items, true, _here, ctx, module, _current_fn, outputs);
        else
        {
            s_TEMPVAR tv {};
            if (is_mutref_9gHYdovL(type, _here, ctx))
            {
                for (int i = 0; i < items.size(); i++)
                {
                    const s_SolvedNode& item = items[i];
                    if (i < (items.size() - 1))
                        src += ("!"_fu + via_QraCQbsX(tv, type, item, module, ctx, _here, _current_fn, outputs));
                    else
                        src += cgNode_I5oehkqb(item, (x7E_YP7BiSZZ((debug + ".cgAnd[mutref "_fu), fu::i64dec(i)) + "]"_fu), 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);

                };
            }
            else
            {
                const int N = items.size();
                const bool retSecondLast = is_never_ZFEUWUgI(items[(N - 1)].type);
                const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
                cgAndOr_concat_3w3IlnRk(src, " && "_fu, fu::get_view(items, 0, condEnd), bool{}, _here, ctx, module, _current_fn, outputs);
                if (retSecondLast)
                {
                    if (condEnd)
                        src += " && "_fu;

                    src += ("!"_fu + via_QraCQbsX(tv, type, items[(N - 2)], module, ctx, _here, _current_fn, outputs));
                    src += cgNode_I5oehkqb(items[(N - 1)], (debug + ".cgAnd[retSecondLast]"_fu), 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
                }
                else
                {
                    src += (" ? "_fu + cgNode_I5oehkqb(items[(N - 1)], (debug + ".cgAnd[usual]"_fu), 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs));
                    src += (" : "_fu + cgDefault_ytoUJzGd(type, _here, ctx, outputs, module, _current_fn));
                };
            };
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu_STR cgAnd_MAHbqkT7(const s_SolvedNode& node, const int mode, fu::view<char> debug, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    return cgAnd_dnB69hgI(node.items, node.type, mode, debug, _here, ctx, module, _current_fn, outputs);
}

static fu_STR cgLetDef_3lpPRyrC(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, s_Outputs& outputs)
{
    return cgLet_hLpCnSfp(GET_OaW94KNx(node.target, module, ctx).solved, !_current_fn.target.index, bool{}, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgMain_k5K7AdXY(s_Outputs& outputs)
{
    if (!outputs._hasMain)
    {
        return fu_STR{};
    }
    else
    {
        fu_STR zst {};
        if (outputs._hasMain & MAIN_zst)
            zst = ", 0"_fu;

        /*MOV*/ fu_STR src = (("\nint main() { return fu_MAIN()"_fu + zst) + "; }"_fu);
        if (outputs._hasMain & MAIN_argv)
        {
            annotateString_7YoInctu(outputs);
            src = ((((((((((("\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args))"_fu) + zst) + ";"_fu) + "\n}"_fu);
        };
        src += "\n"_fu;
        return /*NRVO*/ src;
    };
}

static fu_STR collectDedupes_ttDUK0mM(fu_VEC<fu_STR>&& values, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> header, fu::view<char> footer)
{
    /*MOV*/ fu_STR out {};
    if (values)
        out += header;

    for (int i = 0; i < values.size(); i++)
        out += ((prefix + values[i]) + suffix);

    if (out)
        out += footer;

    return /*NRVO*/ out;
}

static fu_STR cgRoot_GvipZNUP(const s_SolvedNode& root, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    int count {};
    fu_STR src = cgStatements_p7LyvI0I(root.items, count, (*(const fu_STR*)fu::NIL), _current_fn, _here, ctx, module, outputs);
    fu_STR main = cgMain_k5K7AdXY(outputs);
    return (((((((((((((((collectDedupes_ttDUK0mM(fu_VEC<fu_STR>(outputs._libs), "#include "_fu, "\n"_fu, fu::view<char>{}, "\n"_fu) + outputs._tfwd_src) + outputs._ffwd_src) + (outputs._ffwd_live_client ? "\n                                #ifdef fu_HOTSWAP\n"_fu : fu_STR{})) + outputs._ffwd_live_client) + (outputs._ffwd_live_client ? "                                #else\n"_fu : fu_STR{})) + outputs._ffwd_live_nclient) + (outputs._ffwd_live_client ? "                                #endif\n"_fu : fu_STR{})) + outputs._tdef) + collectDedupes_ttDUK0mM(fu_VEC<fu_STR>(outputs._gcc_ignore), "#pragma GCC diagnostic ignored \""_fu, "\"\n"_fu, "#pragma GCC diagnostic push\n#ifdef __clang__\n#pragma GCC diagnostic warning \"-Wunknown-warning-option\"\n#endif\n"_fu, "\n"_fu)) + outputs._top_emits) + (outputs._fdef ? "\n#ifndef fu_NO_fdefs\n"_fu : fu_STR{})) + outputs._fdef) + (outputs._fdef ? "\n#endif\n"_fu : fu_STR{})) + src) + main) + (outputs._gcc_ignore ? "\n#pragma GCC diagnostic pop\n"_fu : fu_STR{});
}

static fu_STR cgFnDef_NZVzav9B(const s_SolvedNode& fndef, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fndef.target;
    const s_Overload& o = GET_OaW94KNx(target, module, ctx);
    const s_SolvedNode& n = GET_OaW94KNx(target, module, ctx).solved;
    if (n && isExtLinked_3Atus6oq(o))
        ensureFnDef_n6N1ATBE(target, module, ctx, _here, outputs, _current_fn);

    return cgEmpty_IKkQY5yG(n, mode, module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_x3Cx3E_3LeATs3f1O0
                                #define DEF_x3Cx3E_3LeATs3f1O0
inline int x3Cx3E_3LeATs3f(const s_Helpers& a, const s_Helpers& b)
{

    {
        /*MOV*/ const int cmp = x3Cx3E_gcxVH86X(a.index, b.index);
        if (cmp)
            return /*NRVO*/ cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_3LeATs3f1O0
                                #define DEF_x3Dx3D_3LeATs3f1O0
inline bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return !x3Cx3E_3LeATs3f(a, b);
}
                                #endif

static const s_cg_Block& findBlock_E8rUkVPY(const s_cg_CurrentFn& _current_fn, const s_Helpers& helpers, const s_TokenIdx& _here, const s_Context& ctx)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const s_cg_Block& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
            return block;

    };
    fail_RdDFiAMv(x7E_YP7BiSZZ("No such block in scope: "_fu, fu::i64dec(helpers.index)), _here, ctx);
}

static bool hasNonIdentifierChars_8p24FxNj(fu::view<char> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const char c = id[i];
        if ((c == '_') || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')))
        {
        }
        else
            return true;

    };
    return false;
}

static fu_STR cgJump_xp4HzzgU(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    const s_Helpers& helpers = node.helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    s_cg_Block block { (!use_return ? findBlock_E8rUkVPY(_current_fn, helpers, _here, ctx) : (*(const s_cg_Block*)fu::NIL)) };
    const s_SolvedNode& expr = only_l6T9uEqE(node.items);
    if ((expr.kind != s_kind_empty) || !is_void_ZFEUWUgI(expr.type))
    {
        if (!use_return)
        {
            fu_STR assign = (block.has_val ? (block.name + "_v = "_fu) : fu_STR{});
            fu_STR value = cgNode_I5oehkqb(expr, "cgJump[val.break]"_fu, (!assign ? M_STMT : (*(const int*)fu::NIL)), (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
            if (block.ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            if (!(assign || hasNonIdentifierChars_8p24FxNj(value)))
                value = (("/* TODO FIX UNUSED VAL "_fu + value) + " */"_fu);

            return (((("{ "_fu + assign) + value) + "; goto "_fu) + block.name) + "; }"_fu;
        }
        else
            return "return "_fu + cgNode_I5oehkqb(expr, "cgJump[val.return]"_fu, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);

    }
    else if (use_return)
        return "return"_fu;
    else if (helpers == _current_fn.can_break)
        return "break"_fu;
    else if (helpers == _current_fn.can_cont)
        return "continue"_fu;
    else
        return "goto "_fu + block.name;

}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static fu_STR cgLoop_yJ3mGyBr(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    /*MOV*/ const s_Helpers can_cont0 { _current_fn.can_cont };
    /*MOV*/ const s_Helpers can_break0 { _current_fn.can_break };
    fu_DEFER(
    {
        _current_fn.can_cont = s_Helpers(can_cont0);
        _current_fn.can_break = s_Helpers(can_break0);
    });
    _current_fn.can_cont = s_Helpers{};
    _current_fn.can_break = s_Helpers{};
    fu::view<s_SolvedNode> items = node.items;
    const s_SolvedNode& n_init = items[LOOP_INIT];
    const s_SolvedNode& n_cond = items[LOOP_COND];
    const s_SolvedNode& n_body = items[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
    const s_SolvedNode& n_post = items[LOOP_POST];
    fu_STR init = (n_init ? cgNode_I5oehkqb(n_init, "cgLoop[init]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode_I5oehkqb(n_cond, "cgLoop[cond]"_fu, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode_I5oehkqb(n_pcnd, "cgLoop[pcnd]"_fu, M_RETBOOL, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs) : fu_STR{});
    fu_STR post = (n_post ? cgNode_I5oehkqb(n_post, "cgLoop[post]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs) : fu_STR{});
    fu_STR name = x7E_YP7BiSZZ("LL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const s_Helpers& helpers = node.helpers;
    _current_fn.can_break = helpers;
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu_STR(name), s_Helpers(helpers), false, false };
    fu_STR body = (n_body ? blockWrapSubstatement_XtvJKNTk(n_body, M_LOOP_BODY, _current_fn, _here, ctx, module, outputs) : fu_STR{});
    const bool labelUsed = fu::has(body, (("goto "_fu + name) + ";"_fu));
    fu_STR breakLabel = (labelUsed ? ((" "_fu + name) + ":;"_fu) : fu_STR{});
    if (pcnd)
    {
        if (init || post || cond)
            fail_RdDFiAMv("TODO extended loop."_fu, _here, ctx);
        else
            return ((((("do"_fu + body) + outputs._indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel;

    }
    else if (init || post || !cond)
        return ((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;
    else
        return ((("while ("_fu + cond) + ")"_fu) + body) + breakLabel;

}

static fu_STR cgTryCatch_Aa1YuJCu(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu::view<s_SolvedNode> items = node.items;
    fu_STR tRy = blockWrapSubstatement_XtvJKNTk(items[0], 0, _current_fn, _here, ctx, module, outputs);
    fu_STR err = localID_ugVPC7FD(items[1].target, true, module, ctx, _current_fn);
    fu_STR cAtch = blockWrapSubstatement_XtvJKNTk(items[2], 0, _current_fn, _here, ctx, module, outputs);
    return ((((((((((((((((outputs._indent + "try"_fu) + outputs._indent) + "{"_fu) + tRy) + outputs._indent) + "}"_fu) + outputs._indent) + "catch (const std::exception& o_0)"_fu) + outputs._indent) + "{"_fu) + outputs._indent) + "    fu_STR "_fu) + err) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + outputs._indent) + "}\n"_fu;
}

static fu_STR cgDefer_72pFRz4n(const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    include_NJm5NZ4n("<fu/defer.h>"_fu, outputs);
    fu_STR which = ((node.value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((node.value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_I5oehkqb(only_l6T9uEqE(node.items), "defer"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs)) + ")"_fu;
}

                                #ifndef DEF_starts_8ObANk7rz5k
                                #define DEF_starts_8ObANk7rz5k
inline bool starts_8ObANk7r(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static fu_STR cgCompilerPragma_qteLR1mg(const s_SolvedNode& node, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    fu::view<char> cmd = node.value;
    if (cmd == "emit"_fu)
    {
        /*MOV*/ fu_STR result {};
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& node_1 = node.items[i];
            if (node_1.kind == s_kind_str)
                result += node_1.value;
            else
                result += cgNode_I5oehkqb(node_1, "compiler:emit"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);

        };
        add_wAuMmv6B(outputs._gcc_ignore, "-Wmisleading-indentation"_fu);
        if (_current_fn)
            return /*NRVO*/ result;
        else
        {
            outputs._top_emits += result;
            return fu_STR{};
        };
    }
    else if (cmd == "link"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                fail_RdDFiAMv((x7E_YP7BiSZZ("compiler link: All arguments must be string literals, got a `"_fu, str_x2XZ9C2m(item.kind)) + "`."_fu), _here, ctx);
            else
            {
                const fu_STR& i_1 = item.value;
                add_wAuMmv6B(outputs.HACK_link, i_1);
            };
        };
        return fu_STR{};
    }
    else if (cmd == "include_dirs"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                fail_RdDFiAMv((x7E_YP7BiSZZ("compiler link: All arguments must be string literals, got a `"_fu, str_x2XZ9C2m(item.kind)) + "`."_fu), _here, ctx);
            else
            {
                const fu_STR& i_1 = item.value;
                add_wAuMmv6B(outputs.HACK_include_dirs, i_1);
            };
        };
        return fu_STR{};
    }
    else if (cmd == "sources"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                fail_RdDFiAMv((x7E_YP7BiSZZ("compiler link: All arguments must be string literals, got a `"_fu, str_x2XZ9C2m(item.kind)) + "`."_fu), _here, ctx);
            else
            {
                const fu_STR& i_1 = item.value;
                add_wAuMmv6B(outputs.HACK_extra_sources, i_1);
            };
        };
        return fu_STR{};
    }
    else if (cmd == "include"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != s_kind_str)
                fail_RdDFiAMv((x7E_YP7BiSZZ("compiler link: All arguments must be string literals, got a `"_fu, str_x2XZ9C2m(item.kind)) + "`."_fu), _here, ctx);
            else
            {
                const fu_STR& i_1 = item.value;
                include_NJm5NZ4n((starts_8ObANk7r(i_1, '<') ? fu_STR(i_1) : (('"' + i_1) + '"')), outputs);
            };
        };
        return fu_STR{};
    }
    else
        BUG_MO9c1jyS(("Unknown compiler pragma: "_fu + cmd), _here, ctx);

}

static fu_STR cgNode_I5oehkqb(const s_SolvedNode& node, fu::view<char> debug, const int mode, const s_Type& callarg, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, s_Outputs& outputs)
{
    const s_kind k = (node.kind ? node.kind : fail_RdDFiAMv(("cgNode: No node.kind: "_fu + debug), _here, ctx));
    HERE_Zn8FXweg(node.token, _here);
    if (k == s_kind_call)
        return cgCall_cbEMvl1e(node, mode, module, ctx, _here, _current_fn, outputs);
    else if (k == s_kind_int)
        return cgLiteral_W5Gb06sl(node, outputs, _here, ctx, module, _current_fn);
    else if (k == s_kind_real)
        return cgLiteral_W5Gb06sl(node, outputs, _here, ctx, module, _current_fn);
    else if (k == s_kind_char)
        return cgCharLiteral_Zc8LPqyY(node);
    else if (k == s_kind_str)
        return cgStringLiteral_KfITti1I(node, outputs, _here, ctx, module, _current_fn);
    else if (k == s_kind_arrlit)
        return cgArrayLiteral_44zVcAte(node, mode, callarg, module, ctx, _here, _current_fn, outputs);
    else if (k == s_kind_definit)
        return cgDefinit_DZfFCaJs(node, mode, callarg, module, ctx, _here, _current_fn, outputs);
    else if (k == s_kind_bool)
        return fu_STR(node.value);
    else if (k == s_kind_copy)
        return cgMoveOrClone_503MuTtW(node, mode, module, ctx, _here, _current_fn, outputs);
    else if (k == s_kind_move)
        return cgMoveOrClone_503MuTtW(node, mode, module, ctx, _here, _current_fn, outputs);
    else if (k == s_kind_if)
        return cgIf_uTc7shcZ(node, mode, _here, ctx, module, _current_fn, outputs);
    else if (k == s_kind_or)
        return cgOr_VWIiQz9n(node, mode, _here, ctx, module, _current_fn, outputs);
    else if (k == s_kind_and)
        return cgAnd_MAHbqkT7(node, mode, debug, _here, ctx, module, _current_fn, outputs);
    else if (k == s_kind_letdef)
        return cgLetDef_3lpPRyrC(node, module, ctx, _current_fn, _here, outputs);
    else if (k == s_kind_root)
        return cgRoot_GvipZNUP(node, _current_fn, _here, ctx, module, outputs);
    else if (k == s_kind_block)
        return cgBlock_24YtSbve(node, mode, "block"_fu, _current_fn, _here, ctx, module, outputs);
    else if (k == s_kind_argid)
        return cgComma_EPatlrZY(node.items, "argid"_fu, _current_fn, _here, ctx, module, outputs);
    else if (k == s_kind_fndef)
        return cgFnDef_NZVzav9B(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_empty)
        return cgEmpty_IKkQY5yG(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (!(mode & M_STMT))
        return cgBlock_24YtSbve(node, mode, x7E_YP7BiSZZ(str_x2XZ9C2m(k), "!M_STMT"_fu), _current_fn, _here, ctx, module, outputs);
    else if (k == s_kind_jump)
        return cgJump_xp4HzzgU(node, _current_fn, _here, ctx, module, outputs);
    else if (k == s_kind_loop)
        return cgLoop_yJ3mGyBr(node, _current_fn, _here, ctx, module, outputs);
    else if (k == s_kind_try)
        return cgTryCatch_Aa1YuJCu(node, _current_fn, _here, ctx, module, outputs);
    else if (k == s_kind_defer)
        return cgDefer_72pFRz4n(node, outputs, _here, ctx, module, _current_fn);
    else if (k == s_kind_pragma)
        return cgCompilerPragma_qteLR1mg(node, _here, ctx, module, _current_fn, outputs);
    else
        fail_RdDFiAMv(x7E_YP7BiSZZ("TODO: "_fu, str_x2XZ9C2m(k)), _here, ctx);

}

static fu_STR localPath_8SrnsSbY(const fu_STR& path, const s_Module& module)
{
    if (starts_8ObANk7r(path, '.'))
        return join_ZK3gqGz2(dirname_KqRBcvmh(module.fname), path);
    else
        return fu_STR(path);

}

s_CodegenOutput cpp_codegen_NCKyO7IL(const s_Module& module, const s_Context& ctx)
{
    s_TokenIdx _here {};
    /*MOV*/ s_Outputs outputs {};
    outputs._indent = "\n"_fu;
    s_cg_CurrentFn _current_fn {};
    const s_SolvedNode& root = module.out.solve.root;
    if (root.kind == s_kind_root)
    {
        /*MOV*/ fu_STR src = cgNode_I5oehkqb(root, "cgRoot"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, _current_fn, outputs);
        for (int i = 0; i < outputs.HACK_extra_sources.size(); i++)
        {
            const fu_STR& orig = outputs.HACK_extra_sources[i];
            /*MOV*/ fu_STR file = localPath_8SrnsSbY(orig, module);
            src += (("\n// "_fu + orig) + "\n"_fu);
            src += read_ny0gyQ9a(static_cast<fu_STR&&>(file));
        };
        fu_VEC<fu_STR> _0 {};
        fu_VEC<fu_STR> _1 {};
        return (_0 = fu_VEC<fu_STR>(outputs.HACK_link), _1 = fu_VEC<fu_STR>(outputs.HACK_include_dirs), s_CodegenOutput { static_cast<fu_STR&&>(src), static_cast<fu_VEC<fu_STR>&&>(_0), static_cast<fu_VEC<fu_STR>&&>(_1), static_cast<fu_VEC<fu_STR>&&>(outputs.HACK_extra_sources), fu_VEC<int>{} });
    }
    else
        fail_RdDFiAMv((*(const fu_STR*)fu::NIL), _here, ctx);

}

#endif
