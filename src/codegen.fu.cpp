#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/print.h>
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
typedef uint16_t s_FxMask;
typedef int s_SolverNotes;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Context;
struct s_Map_IAbSsNotHdi;
struct s_Outputs;
struct s_cg_CurrentFn;
struct s_cg_Block;
struct s_StructCanon;
struct s_NativeHacks;
struct s_ClosureID;
struct s_Mi;
struct s_Intlit;
struct s_TEMPVAR;
[[noreturn]] fu::never FAIL_vYytSj38(fu::view<char>, const s_TokenIdx&, const s_Context&);
void HERE_bcSKDjer(const s_TokenIdx&, s_TokenIdx&);
static fu_STR cgNot_XNwElvhc(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static bool isFieldChain_ikNkD4rO(const s_SolvedNode&, const s_Module&, const s_Context&);
bool is_void_eqpYb5IC(const s_Type&);
bool is_zeroes_eqpYb5IC(const s_Type&);
bool isAddrOfFn_mipI0b6h(const s_Type&);
bool is_primitive_XeFsC3zb(const s_Type&);
s_Type tryClear_sliceable_qNIEFFQB(const s_Type&);
bool TODO_FIX_isArray_qNIEFFQB(const s_Type&);
bool is_ref_qNIEFFQB(const s_Type&);
bool is_mutref_8RliRHyJ(const s_Type&, const s_TokenIdx&, const s_Context&);
const s_Struct& lookupUserType_pnzMWl0a(const s_Type&, const s_Module&, const s_Context&);
s_StructCanon parseStructCanon_1RM6wwlO(fu::view<char>);
bool add_once_uczByTOp(s_BitSet&, int);
static bool add_once_JYhPSsPA(fu_VEC<s_BitSet>&, int, int);
s_Target target_QZZ1cmZA(const s_ScopeItem&);
static fu_STR declarePrimitive_EDgt1oqP(fu::view<char>, const s_Struct&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
fu_STR ID_iBN4fKP1(const fu_STR&);
bool is_rx_copy_6qTx5aCK(const s_Type&);
static fu_STR declareStruct_IHI9Lr6J(fu::view<char>, const s_Struct&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR typeAnnotBase_bE67WZlo(const s_Type&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
bool is_trivial_ChYpFATl(const s_Type&, const s_Context&, const s_Module&);
static fu_STR typeAnnot_coM5xjto(const s_Type&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgClone_l8wM6Aam(const s_Type&, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgMove_hgqMZ5U5(const s_Type&, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
s_NativeHacks NativeHacks_FkHhiw9v(fu::view<char>);
bool is_bitfield_XeFsC3zb(const s_Type&);
bool is_integral_XeFsC3zb(const s_Type&);
bool is_unsigned_XeFsC3zb(const s_Type&);
static fu_STR emitBuiltin_yzzC6BWa(fu::view<char>, fu::view<fu_STR>, const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
bool hasIdentifierChars_LDOhpoIo(fu::view<char>);
s_Type clear_refs_qNIEFFQB(s_Type&&);
static fu_STR cgDefault_G3HxNGaN(const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
const s_Struct& tryLookupUserType_ChYpFATl(const s_Type&, const s_Context&, const s_Module&);
[[noreturn]] fu::never BUG_vYytSj38(fu_STR&&, const s_TokenIdx&, const s_Context&);
static bool add_once_dNBNLn9o(fu_VEC<s_BitSet>&, const s_Target&);
bool is_never_eqpYb5IC(const s_Type&);
bool hasBinary_xj37xk9w(fu::view<char>);
bool hasUnary_xj37xk9w(fu::view<char>);
bool hasPostfix_xj37xk9w(fu::view<char>);
static fu_STR cgFnPrototype_S0BjggAd(const s_Target&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static void ensureFwdDecl_v7rzALCa(const s_Target&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
s_ClosureID tryParseClosureID_ESzTmva3(fu::view<char>);
bool type_isSliceable_mipI0b6h(const s_Type&);
static fu_STR binding_lksPzqwz(const s_Target&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR binding_rH9uREC8(const s_Argument&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgFnSignature_zPb8EP6H(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static bool exprOK_SMv97Hh6(fu::view<s_SolvedNode>);
static fu_VEC<fu_STR> cgNodes_cdZrHI4a(fu::view<s_SolvedNode>, int, const fu_STR&, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
int Region_asLocal_l3hJ0imS(const s_Region&);
static fu_STR cgStatements_Vkv9eEnw(fu::view<s_SolvedNode>, int&, const fu_STR&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgBlock_8T5iRECb(fu::view<s_SolvedNode>, bool, bool, const s_Helpers&, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
s_Mi parseMi_Tv0KZM6O(int&, fu::view<char>);
static fu_STR cgEmpty_yN55i8zq(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgFn_4BNBZ9xV(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static void ensureFnDef_OKzrNiT8(const s_Target&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static void ensureFnUsable_3tpsKWu9(const s_Target&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
bool is_floating_pt_XeFsC3zb(const s_Type&);
inline static bool isIntegerConstant_nAZaJqCn(const s_SolvedNode&, const s_Module&, const s_Context&);
static fu_STR binding_qYA4B3UA(const s_Target&, const s_SolvedNode&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR binding_MYV8ny69(const s_SolvedNode&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgEnumv_qsDsvkbe(const s_Type&, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgCall_xHZTUdVv(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
s_Intlit Intlit_eSPjJZjJ(fu::view<char>);
static fu_STR cgLiteral_xU6ofrQD(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
bool is_enum_XeFsC3zb(const s_Type&);
bool is_flags_XeFsC3zb(const s_Type&);
s_Type clear_sliceable_8RliRHyJ(const s_Type&, const s_TokenIdx&, const s_Context&);
static fu_STR cgArrayLiteral_fk1ACYhG(const s_SolvedNode&, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgDefinit_aZcqDasx(const s_SolvedNode&, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
bool Region_isArgPosition_PhGvG2us(const s_Region&);
static fu_STR cgMoveOrClone_R9yMJkLd(s_kind, const s_Type&, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgMoveOrClone_gmjA4Jip(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR blockWrap_unlessIf_vijkYK7N(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgIf_JRy1tMcC(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static void cgAndOr_concat_auSC8ikS(fu_STR&, fu::view<char>, fu::view<s_SolvedNode>, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
bool isAssignable_zQyU0CZE(const s_Type&, const s_Type&, bool, bool);
static fu_STR via_ycCzX0iM(s_TEMPVAR&, const s_Type&, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR via_tNk83Ppf(s_TEMPVAR&, const s_Type&, const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgOr_eXjetXix(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgAnd_U3H01fXm(fu::view<s_SolvedNode>, const s_Type&, int, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgJump_KZMjBwT9(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgLoop_6aBvufTK(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgDefer_5bEV3k4c(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgCompilerPragma_3WvVdyga(const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgNode_ZetS6gVl(const s_SolvedNode&, fu::view<char>, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
fu_STR dirname_hNtHZ3HE(const fu_STR&);
fu_STR join_rMAWYyxW(fu::view<char>, const fu_STR&);
fu_STR read_1HHdbYe3(fu_STR&&);

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
    s_kind_void = 16u,
    s_kind_not = 17u,
    s_kind_call = 18u,
    s_kind_argid = 19u,
    s_kind_root = 20u,
    s_kind_block = 21u,
    s_kind_if = 22u,
    s_kind_or = 23u,
    s_kind_and = 24u,
    s_kind_loop = 25u,
    s_kind_jump = 26u,
    s_kind___far_jump = 27u,
    s_kind_defer = 28u,
    s_kind_try = 29u,
    s_kind_let = 30u,
    s_kind_letdef = 31u,
    s_kind_typedef = 32u,
    s_kind_typecast = 33u,
    s_kind_typeassert = 34u,
    s_kind_typeparam = 35u,
    s_kind_unwrap = 36u,
    s_kind_pragma = 37u,
    s_kind_break = 38u,
    s_kind_return = 39u,
    s_kind_continue = 40u,
    s_kind_import = 41u,
    s_kind_addroffn = 42u,
    s_kind_forfieldsof = 43u,
    s_kind_struct = 44u,
    s_kind_union = 45u,
    s_kind_primitive = 46u,
    s_kind_flags = 47u,
    s_kind_enum = 48u,
    s_kind_members = 49u,
    s_kind_fndef = 50u,
    s_kind_fn = 51u,
    s_kind_fnbranch = 52u,
    s_kind_pattern = 53u,
    s_kind_typeunion = 54u,
    s_kind_typetag = 55u,
    s_kind___relaxed = 56u,
    s_kind___convert = 57u,
    s_kind___no_kind_yet = 58u,
    s_kind_type = 59u,
    s_kind_var = 60u,
    s_kind_field = 61u,
    s_kind_enumv = 62u,
    s_kind_template = 63u,
    s_kind___native = 64u,
    s_kind_inline = 65u,
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
    | s_DeclAsserts_A_FAST;
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
inline constexpr s_Flags s_Flags_F_MOVED_FROM = 128u;
inline constexpr s_Flags s_Flags_F_CONVERSION = 256u;
inline constexpr s_Flags s_Flags_F_OPT_ARG = 512u;
inline constexpr s_Flags s_Flags_F_MUT = 1024u;
inline constexpr s_Flags s_Flags_F_REF = 2048u;
inline constexpr s_Flags s_Flags_F_IMPLICIT = 4096u;
inline constexpr s_Flags s_Flags_F_USING = 8192u;
inline constexpr s_Flags s_Flags_F_MUSTNAME = 16384u;
inline constexpr s_Flags s_Flags_F_SHADOW = 32768u;
inline constexpr s_Flags s_Flags_F_PUB = 65536u;
inline constexpr s_Flags s_Flags_F_EXTERN = 131072u;
inline constexpr s_Flags s_Flags_F_HOTSWAP = 262144u;
inline constexpr s_Flags s_Flags_F_PREDICATE = 524288u;
inline constexpr s_Flags s_Flags_F_NAMED_ARGS = 1048576u;
inline constexpr s_Flags s_Flags_F_OOE_RTL = 2097152u;
inline constexpr s_Flags s_Flags_F_REST_ARG = 4194304u;
inline constexpr s_Flags s_Flags_F_RELAXABLE_REF = 8388608u;
inline constexpr s_Flags s_Flags_F_TEMPLATE = 16777216u;
inline constexpr s_Flags s_Flags_F_INLINE = 33554432u;
inline constexpr s_Flags s_Flags_F_LAMBDA = 67108864u;
inline constexpr s_Flags s_Flags_F_INJECTED = 134217728u;

inline constexpr s_Flags MASK_s_Flags
    = s_Flags_F_METHOD
    | s_Flags_F_OPERATOR
    | s_Flags_F_ACCESS
    | s_Flags_F_COMPOUND_ID
    | s_Flags_F_WRITTEN_TO
    | s_Flags_F_LAX
    | s_Flags_F_ARG
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
    int _loop_start;
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
inline constexpr s_SolverStatus s_SolverStatus_SS_LAZY = s_SolverStatus(1u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DID_START = s_SolverStatus(2u);
inline constexpr s_SolverStatus s_SolverStatus_SS_DIRTY = s_SolverStatus(4u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FINALIZED = s_SolverStatus(8u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UPDATED = s_SolverStatus(16u);
inline constexpr s_SolverStatus s_SolverStatus_SS_TYPE_RECUR = s_SolverStatus(32u);
inline constexpr s_SolverStatus s_SolverStatus_SS_FN_RECUR = s_SolverStatus(64u);
inline constexpr s_SolverStatus s_SolverStatus_SS_HOIST = s_SolverStatus(128u);
inline constexpr s_SolverStatus s_SolverStatus_SS_UNUSED = s_SolverStatus(256u);

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

                                #ifndef DEF_s_Extended
                                #define DEF_s_Extended
struct s_Extended
{
    int local_of;
    unsigned revision;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<int> callers;
    s_FxMask fx_mask;
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
            || fx_mask
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
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedImplicit = 65536;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedCall = 131072;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedDefer = 262144;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedStmt = 524288;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedTry = 1048576;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedAndOr = 2097152;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedIfElse = 4194304;
inline constexpr s_SolverNotes s_SolverNotes_N_UnusedArrlit = 8388608;
inline constexpr s_SolverNotes s_SolverNotes_N_BckSoftRisk = 16777216;
inline constexpr s_SolverNotes s_SolverNotes_N_BckMustSeq = 33554432;
inline constexpr s_SolverNotes s_SolverNotes_N_MoveMustSeq = 67108864;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_HasStaticInit = 134217728;
inline constexpr s_SolverNotes s_SolverNotes_N_SD_ExternPrivates = 268435456;

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
    | s_SolverNotes_N_UnusedStmt
    | s_SolverNotes_N_UnusedTry
    | s_SolverNotes_N_UnusedAndOr
    | s_SolverNotes_N_UnusedIfElse
    | s_SolverNotes_N_UnusedArrlit
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

                                #ifndef DEF_s_Map_IAbSsNotHdi
                                #define DEF_s_Map_IAbSsNotHdi
struct s_Map_IAbSsNotHdi
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
    s_Map_IAbSsNotHdi files;
    s_Map_IAbSsNotHdi fuzzy;
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
    unsigned revision;
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

[[noreturn]] static fu::never fail_AIhs8aVA(const fu_STR& reason, const s_Context& ctx, const s_TokenIdx& _here)
{
    FAIL_vYytSj38(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu_STR(reason) : "Assertion failed."_fu)), _here, ctx);
}

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_only_7ZMqiNoZmIe
                                #define DEF_only_7ZMqiNoZmIe
inline const s_SolvedNode& only_7ZMqiNoZ(fu::view<s_SolvedNode> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static fu_STR cgNot_XNwElvhc(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return "!"_fu + cgNode_ZetS6gVl(only_7ZMqiNoZ(node.items), "not"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_unless_oob_MFXRIS0PVB0
                                #define DEF_unless_oob_MFXRIS0PVB0
inline const s_Extended& unless_oob_MFXRIS0P(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_zGKqmACg(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_MFXRIS0P(module.out.solve.scope.extended, target.index);
    else if (target.modid < 0)
        return (*(const s_Extended*)fu::NIL);
    else
        return unless_oob_MFXRIS0P(ctx.modules[target.modid].out.solve.scope.extended, target.index);

}

static bool isLocal_gjigkUO2(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_EGW2iFNh(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.index > 0)
    {
        if (isLocal_gjigkUO2(target))
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

                                #ifndef DEF_x3Cx3E_F7KakSWb5Tl
                                #define DEF_x3Cx3E_F7KakSWb5Tl
inline int x3Cx3E_F7KakSWb(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_ed1A1fZavVf
                                #define DEF_x3Cx3E_ed1A1fZavVf
inline int x3Cx3E_ed1A1fZa(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sTZRmMq1BYf
                                #define DEF_x3Cx3E_sTZRmMq1BYf
inline int x3Cx3E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_ed1A1fZa(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

static bool isFieldChain_ikNkD4rO(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx)
{
    if (node.kind != s_kind_call)
        return false;
    else
    {
        const s_Overload& t = GET_EGW2iFNh(node.target, module, ctx);
        if (t.kind == s_kind_field)
            return isFieldChain_ikNkD4rO(only_7ZMqiNoZ(node.items), module, ctx);
        else if (t.kind == s_kind_var)
            return true;
        else
            return false;

    };
}

static bool type_isZST_P1efM8U7(const s_Type& type)
{
    return is_void_eqpYb5IC(type) || is_zeroes_eqpYb5IC(type) || isAddrOfFn_mipI0b6h(type);
}

                                #ifndef DEF_str_v3b7EcLtghl
                                #define DEF_str_v3b7EcLtghl
inline fu_STR str_v3b7EcLt(const s_kind n)
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
    else if (n == s_kind_copy)
        return "copy"_fu;
    else if (n == s_kind_move)
        return "move"_fu;
    else if (n == s_kind_arrlit)
        return "arrlit"_fu;
    else if (n == s_kind_definit)
        return "definit"_fu;
    else if (n == s_kind_empty)
        return "empty"_fu;
    else if (n == s_kind_void)
        return "void"_fu;
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
    else if (n == s_kind_typedef)
        return "typedef"_fu;
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
    else if (n == s_kind_fndef)
        return "fndef"_fu;
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
    else if (n == s_kind___relaxed)
        return "__relaxed"_fu;
    else if (n == s_kind___convert)
        return "__convert"_fu;
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

                                #ifndef DEF_M_ARG_TO_NATIVE
                                #define DEF_M_ARG_TO_NATIVE
inline constexpr int M_ARG_TO_NATIVE = (1 << 13);
                                #endif

                                #ifndef DEF_add_P2VwYqz53p5
                                #define DEF_add_P2VwYqz53p5
inline bool add_P2VwYqz5(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(keys[i], item);
        if (cmp == 0)
            return false;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

static void include_yf0Pavvk(const fu_STR& lib, s_Outputs& outputs)
{
    add_P2VwYqz5(outputs._libs, lib);
}

static fu_STR primAnnotBase_rCc1anSR(fu::view<char> c, const s_Context& ctx, const s_TokenIdx& _here, s_Outputs& outputs)
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
        include_yf0Pavvk("<fu/int.h>"_fu, outputs);
        return "fu::"_fu + c;
    }
    else
    {
        include_yf0Pavvk("<cstdint>"_fu, outputs);
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
            fail_AIhs8aVA((("Unknown primitive: `"_fu + c) + "`."_fu), ctx, _here);

    };
}

static fu_STR annotateZST_L2rU3UsB()
{
    return "void"_fu;
}

static fu_STR annotateNever_vqPbamC8(s_Outputs& outputs)
{
    include_yf0Pavvk("<fu/never.h>"_fu, outputs);
    return "fu::never"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

                                #ifndef DEF_x3Cx3E_SWJyYhvzXi2
                                #define DEF_x3Cx3E_SWJyYhvzXi2
inline int x3Cx3E_SWJyYhvz(const s_ValueType& a, const s_ValueType& b)
{

    {

        {
            const int cmp = x3Cx3E_F7KakSWb(a.quals, b.quals);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_sTZRmMq1(a.canon, b.canon);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_A8tRjjUdpoc
                                #define DEF_x3Cx3E_A8tRjjUdpoc
inline int x3Cx3E_A8tRjjUd(const s_Region& a, const s_Region& b)
{

    {
        const int cmp = x3Cx3E_F7KakSWb(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_HivDn1koKN2
                                #define DEF_x3Cx3E_HivDn1koKN2
inline int x3Cx3E_HivDn1ko(fu::view<s_Region> a, fu::view<s_Region> b)
{
    int cmp = x3Cx3E_F7KakSWb(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_A8tRjjUd(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Cx3E_ZEZmKEMV5rb
                                #define DEF_x3Cx3E_ZEZmKEMV5rb
inline int x3Cx3E_ZEZmKEMV(const s_Lifetime& a, const s_Lifetime& b)
{

    {
        const int cmp = x3Cx3E_HivDn1ko(a.uni0n, b.uni0n);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Cx3E_sXOXbilqj37
                                #define DEF_x3Cx3E_sXOXbilqj37
inline int x3Cx3E_sXOXbilq(const s_Type& a, const s_Type& b)
{

    {

        {
            const int cmp = x3Cx3E_SWJyYhvz(a.vtype, b.vtype);
            if (cmp)
                return cmp;

        };
        const int cmp = x3Cx3E_ZEZmKEMV(a.lifetime, b.lifetime);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_sXOXbilqj37
                                #define DEF_x3Dx3D_sXOXbilqj37
inline bool operator==(const s_Type& a, const s_Type& b)
{
    return !x3Cx3E_sXOXbilq(a, b);
}
                                #endif

static fu_STR annotateString_JpvcP5X9(s_Outputs& outputs)
{
    include_yf0Pavvk("<fu/str.h>"_fu, outputs);
    return "fu_STR"_fu;
}

                                #ifndef DEF_M_MUTVAR
                                #define DEF_M_MUTVAR
inline constexpr int M_MUTVAR = (1 << 10);
                                #endif

                                #ifndef DEF_grow_if_oob_QFqLpWjooDl
                                #define DEF_grow_if_oob_QFqLpWjooDl
inline s_BitSet& grow_if_oob_QFqLpWjo(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once_JYhPSsPA(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once_uczByTOp(grow_if_oob_QFqLpWjo(bs, i), j);
}

                                #ifndef DEF_each_42A2fcQpkk4
                                #define DEF_each_42A2fcQpkk4
inline void each_42A2fcQp(fu::view<s_ScopeItem> a, fu::view<char> id, fu_STR& def, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Target member = target_QZZ1cmZA(a[i]);
        fu_STR _0 {};
        def += ((_0 = (((((("\ninline constexpr "_fu + id) + " "_fu) + id) + "_"_fu) + GET_EGW2iFNh(member, module, ctx).name) + " = "_fu), (static_cast<fu_STR&&>(_0) + cgNode_ZetS6gVl(GET_EGW2iFNh(member, module, ctx).solved, "declarePrimitive"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn))) + ";"_fu);
    };
}
                                #endif

                                #ifndef DEF_each_MIdgY3OZ5Ef
                                #define DEF_each_MIdgY3OZ5Ef
inline void each_MIdgY3OZ(fu::view<s_ScopeItem> a, fu::view<char> id, fu_STR& mask, const s_Module& module, const s_Context& ctx)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Target member = target_QZZ1cmZA(a[i]);
        if (!mask)
            mask = (((("\n\ninline constexpr "_fu + id) + " MASK_"_fu) + id) + "\n    = "_fu);
        else
            mask += "\n    | "_fu;

        mask += ((id + "_"_fu) + GET_EGW2iFNh(member, module, ctx).name);
    };
}
                                #endif

                                #ifndef DEF_M_ENUM_DECL
                                #define DEF_M_ENUM_DECL
inline constexpr int M_ENUM_DECL = (1 << 14);
                                #endif

                                #ifndef DEF_each_kSsrz3o80ih
                                #define DEF_each_kSsrz3o80ih
inline void each_kSsrz3o8(fu::view<s_ScopeItem> a, fu::view<char> id, fu_STR& def, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Target member = target_QZZ1cmZA(a[i]);
        fu_STR _0 {};
        def += ((_0 = (((("\n    "_fu + id) + "_"_fu) + GET_EGW2iFNh(member, module, ctx).name) + " = "_fu), (static_cast<fu_STR&&>(_0) + cgNode_ZetS6gVl(GET_EGW2iFNh(member, module, ctx).solved, "declarePrimitive"_fu, M_ENUM_DECL, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn))) + ","_fu);
    };
}
                                #endif

static fu_STR declarePrimitive_EDgt1oqP(fu::view<char> id, const s_Struct& s, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu_STR baseprim = primAnnotBase_rCc1anSR(s.base, ctx, _here, outputs);
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
            each_42A2fcQp(members, id, def, module, ctx, _here, outputs, _current_fn);
            if (s.kind == s_kind_flags)
            {
                fu_STR mask {};
                each_MIdgY3OZ(members, id, mask, module, ctx);
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
        each_kSsrz3o8(members, id, def, module, ctx, _here, outputs, _current_fn);
        def += "\n};"_fu;
    };
    return def + "\n                                #endif\n"_fu;
}

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static const s_Overload& try_GET_VsdXDyAC(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    return target ? GET_EGW2iFNh(target, module, ctx) : (*(const s_Overload*)fu::NIL);
}

static fu_STR declareStruct_IHI9Lr6J(fu::view<char> id, const s_Struct& s, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (s.base)
        return declarePrimitive_EDgt1oqP(id, s, module, ctx, _here, outputs, _current_fn);
    else
    {
        fu_STR header = (x7E_sTZRmMq1(str_v3b7EcLt(s.kind), " "_fu) + id);
        outputs._tfwd_src += (header + ";\n"_fu);
        const s_Type& t = GET_EGW2iFNh(s.target, module, ctx).type;
        fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\n"_fu) + header) + "\n{"_fu);
        fu_STR indent = "\n    "_fu;
        fu::view<s_ScopeItem> fields = s.items;
        for (int i = 0; i < fields.size(); i++)
        {
            const s_Overload& field = GET_EGW2iFNh(target_QZZ1cmZA(fields[i]), module, ctx);
            if (field.kind == s_kind_field)
                def += ((((indent + typeAnnot_coM5xjto(field.type, 0, module, ctx, _here, outputs, _current_fn)) + " "_fu) + ID_iBN4fKP1(field.name)) + ";"_fu);
            else
                fail_AIhs8aVA(((x7E_sTZRmMq1((("Non-field struct item: "_fu + field.name) + " ("_fu), str_v3b7EcLt(field.kind)) + ") in "_fu) + t.vtype.canon), ctx, _here);

        };
        if (!is_rx_copy_6qTx5aCK(t))
        {
            def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
            def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
            def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
        }
        else if (try_GET_VsdXDyAC(s.target, module, ctx).status & s_SolverStatus_SS_TYPE_RECUR)
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
            if (GET_EGW2iFNh(target_QZZ1cmZA(fields[i_1]), module, ctx).flags & s_Flags_F_PREDICATE)
                def += ("\n            || "_fu + ID_iBN4fKP1(fields[i_1].id));

        };
        def += "\n        ;"_fu;
        def += "\n    }"_fu;
        return def + "\n};\n                                #endif\n"_fu;
    };
}

static fu_STR typeAnnotBase_bE67WZlo(const s_Type& type, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_XeFsC3zb(type) && ((c.size() < 4) || ((c.size() == 4) && (fu::get_view(c, 1, 4) == "128"_fu))))
        return primAnnotBase_rCc1anSR(c, ctx, _here, outputs);
    else if (type_isZST_P1efM8U7(type))
        return annotateZST_L2rU3UsB();
    else if (c == "never"_fu)
        return annotateNever_vqPbamC8(outputs);
    else
    {
        s_Type arrayItem = tryClear_sliceable_qNIEFFQB(type);
        if (arrayItem)
        {
            if (TODO_FIX_isArray_qNIEFFQB(type) || !is_ref_qNIEFFQB(type))
            {
                if (arrayItem == t_byte)
                    return annotateString_JpvcP5X9(outputs);
                else
                {
                    fu_STR itemAnnot = typeAnnot_coM5xjto(arrayItem, 0, module, ctx, _here, outputs, _current_fn);
                    include_yf0Pavvk("<fu/vec.h>"_fu, outputs);
                    return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
                };
            }
            else
            {
                fu_STR itemAnnot = typeAnnot_coM5xjto(arrayItem, 0, module, ctx, _here, outputs, _current_fn);
                include_yf0Pavvk("<fu/view.h>"_fu, outputs);
                if (is_mutref_8RliRHyJ(type, _here, ctx) || (mode & M_MUTVAR))
                    return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
                else
                    return ("fu::view<"_fu + itemAnnot) + ">"_fu;

            };
        }
        else
        {
            const s_Struct* _0;
            const s_Struct& s = (*(_0 = &(lookupUserType_pnzMWl0a(type, module, ctx))) ? *_0 : fail_AIhs8aVA(("TODO: "_fu + type.vtype.canon), ctx, _here));
            /*MOV*/ fu_STR id = ("s_"_fu + s.name);
            const s_StructCanon scp = parseStructCanon_1RM6wwlO(type.vtype.canon);
            if (add_once_JYhPSsPA(outputs._tfwd, scp.modid, scp.index))
            {
                fu_STR decl = declareStruct_IHI9Lr6J(id, s, module, ctx, _here, outputs, _current_fn);
                outputs._tdef += decl;
            };
            return /*NRVO*/ id;
        };
    };
}

                                #ifndef DEF_starts_Nz2mqu34wT8
                                #define DEF_starts_Nz2mqu34wT8
inline bool starts_Nz2mqu34(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

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

static fu_STR typeAnnot_coM5xjto(const s_Type& type, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR fwd = typeAnnotBase_bE67WZlo(type, mode, module, ctx, _here, outputs, _current_fn);
    if (is_ref_qNIEFFQB(type))
    {
        if (starts_Nz2mqu34(fwd, "fu::view"_fu) || (fwd == "void"_fu))
            return /*NRVO*/ fwd;
        else if (is_mutref_8RliRHyJ(type, _here, ctx))
            return fwd + "&"_fu;
        else if (is_primitive_XeFsC3zb(type))
        {
            if (((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL))
                return "const "_fu + fwd;
            else
                return /*NRVO*/ fwd;

        }
        else if ((mode & M_MOVABLE) && !is_trivial_ChYpFATl(type, ctx, module))
            return fwd + "&"_fu;
        else
            return ("const "_fu + fwd) + "&"_fu;

    }
    else if ((mode & M_ARGUMENT) && !is_primitive_XeFsC3zb(type))
        return fwd + "&&"_fu;
    else if ((mode & M_CONST) && is_trivial_ChYpFATl(type, ctx, module))
        return "const "_fu + fwd;
    else
        return /*NRVO*/ fwd;

}

static fu_STR emitTEMPVAR_PHuaPwZQ(fu::view<char> annot, bool& ptrflip, const fu_STR& id, const fu_STR& expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu_STR id_1 = (id ? fu_STR(id) : x7E_sTZRmMq1("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu_STR cgClone_l8wM6Aam(const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return ((typeAnnotBase_bE67WZlo(type, 0, module, ctx, _here, outputs, _current_fn) + "("_fu) + src) + ")"_fu;
}

static fu_STR cgMove_hgqMZ5U5(const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (is_trivial_ChYpFATl(type, ctx, module) && is_rx_copy_6qTx5aCK(type))
        return cgClone_l8wM6Aam(type, src, module, ctx, _here, outputs, _current_fn);
    else
        return ((("static_cast<"_fu + typeAnnotBase_bE67WZlo(type, 0, module, ctx, _here, outputs, _current_fn)) + "&&>("_fu) + src) + ")"_fu;

}

                                #ifndef DEF_find_ODCLAe2r9ig
                                #define DEF_find_ODCLAe2r9ig
inline int find_ODCLAe2r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static fu_STR& ARG_tpo4EISy(const int i, fu::view_mut<fu_STR> item_src)
{
    return item_src.mutref(i);
}

static fu_STR REST_wniynk7T(const int start, fu::view<fu_STR> item_src)
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

static fu_STR ooeWrap_jzosBNjE(const fu_STR& src, const fu_STR& ooe_header)
{
    if (ooe_header)
        return ((ooe_header + ", "_fu) + src) + ")"_fu;
    else
        return fu_STR(src);

}

static fu_STR emitMethodCall_gx8G74wr(fu::view<char> id, const fu_STR& ooe_header, fu::view_mut<fu_STR> item_src)
{
    fu_STR _0 {};
    return ooeWrap_jzosBNjE(((_0 = ((ARG_tpo4EISy(0, item_src) + id) + "("_fu), (static_cast<fu_STR&&>(_0) + REST_wniynk7T(1, item_src))) + ")"_fu), ooe_header);
}

static bool affectedByIntegerPromotions_O8xtPhcl(const s_Type& type)
{
    if (is_ref_qNIEFFQB(type) || !is_bitfield_XeFsC3zb(type))
        return false;
    else
    {
        fu::view<char> c = type.vtype.canon;
        return ((c.size() >= 2) && (c[1] == '8')) || ((c.size() >= 3) && (fu::get_view(c, 1, 3) == "16"_fu));
    };
}

static fu_STR unpromote_guFt1bJJ(const fu_STR& expr, const s_SolvedNode& node, const bool isNative, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isNative && affectedByIntegerPromotions_O8xtPhcl(node.type))
        return ((typeAnnotBase_bE67WZlo(node.type, 0, module, ctx, _here, outputs, _current_fn) + "("_fu) + expr) + ")"_fu;
    else
        return fu_STR(expr);

}

static fu_STR emitPostfixOp_r9sVzSR1(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view_mut<fu_STR> item_src, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return unpromote_guFt1bJJ((ARG_tpo4EISy(0, item_src) + op), node, isNative, module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_only_gp6HauT4bf0
                                #define DEF_only_gp6HauT4bf0
inline const fu_STR& only_gp6HauT4(fu::view<fu_STR> s)
{
    if (s.size() == 1)
        return s[0];
    else
        return fu::fail(x7E_sTZRmMq1("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu_STR emitBuiltin_yzzC6BWa(fu::view<char> id, fu::view<fu_STR> args, const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = node.type;
        const s_Type& input = only_7ZMqiNoZ(node.items).type;
        fu_STR cast = typeAnnotBase_bE67WZlo(output, 0, module, ctx, _here, outputs, _current_fn);
        if (is_integral_XeFsC3zb(input) && is_integral_XeFsC3zb(output) && (is_unsigned_XeFsC3zb(input) != is_unsigned_XeFsC3zb(output)))
        {
            s_Type mid_t { (is_unsigned_XeFsC3zb(input) ? output : input) };
            if (mid_t.vtype.canon[0] == 'i')
            {
                mid_t.vtype.canon.mutref(0) = 'u';
                if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
                {
                    fu_STR inner = typeAnnotBase_bE67WZlo(mid_t, 0, module, ctx, _here, outputs, _current_fn);
                    return ((((cast + '(') + inner) + '(') + only_gp6HauT4(args)) + "))"_fu;
                };
            }
            else
                fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here);

        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu_STR inner = typeAnnotBase_bE67WZlo(t_u8, 0, module, ctx, _here, outputs, _current_fn);
            return ((((cast + '(') + inner) + '(') + only_gp6HauT4(args)) + "))"_fu;
        };
        return ((cast + '(') + only_gp6HauT4(args)) + ')';
    }
    else
        fail_AIhs8aVA(("Unknown builtin: "_fu + id), ctx, _here);

}

static fu_STR emitFunctionCall_LbqmZg4Y(fu::view<char> id, fu::view<char> open, fu::view<char> close, const fu_STR& ooe_header, fu::view<fu_STR> item_src)
{
    return ooeWrap_jzosBNjE((((id + open) + REST_wniynk7T(0, item_src)) + close), ooe_header);
}

                                #ifndef DEF_M_STMT
                                #define DEF_M_STMT
inline constexpr int M_STMT = (1 << 0);
                                #endif

                                #ifndef DEF_M_PARENS
                                #define DEF_M_PARENS
inline constexpr int M_PARENS = (1 << 7);
                                #endif

                                #ifndef DEF_last_ovYeq1jaRea
                                #define DEF_last_ovYeq1jaRea
inline char last_ovYeq1ja(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return fu::fail("len == 0"_fu);

}
                                #endif

static bool binSkipParens_oJaSxzz8(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;
    else if (mode & M_PARENS)
    {
        if (last_ovYeq1ja(id) == '=')
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

static fu_STR emitBinaryOp_PigYCvj6(fu::view<char> op, const s_SolvedNode& node, const int mode, fu::view<s_SolvedNode> args, const bool isNative, const fu_STR& ooe_header, fu::view_mut<fu_STR> item_src, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (args.size() == 2)
    {
        if (binSkipParens_oJaSxzz8(op, mode) && !ooe_header)
        {
            fu_STR _0 {};
            return (_0 = (((ARG_tpo4EISy(0, item_src) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_0) + ARG_tpo4EISy(1, item_src)));
        }
        else
        {
            fu_STR _1 {};
            return ooeWrap_jzosBNjE(unpromote_guFt1bJJ(((_1 = (((("("_fu + ARG_tpo4EISy(0, item_src)) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_1) + ARG_tpo4EISy(1, item_src))) + ")"_fu), node, isNative, module, ctx, _here, outputs, _current_fn), ooe_header);
        };
    }
    else
        fail_AIhs8aVA("args.len != 2"_fu, ctx, _here);

}

static fu_STR cgDefault_G3HxNGaN(const s_Type& type, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (is_mutref_8RliRHyJ(type, _here, ctx))
        fail_AIhs8aVA("Cannot definit mutrefs."_fu, ctx, _here);
    else if (type_isZST_P1efM8U7(type))
        return "void()"_fu;
    else if (is_ref_qNIEFFQB(type))
    {
        fu_STR annot = typeAnnot_coM5xjto(type, 0, module, ctx, _here, outputs, _current_fn);
        if (starts_Nz2mqu34(annot, "fu::view"_fu))
        {
            return annot + "{}"_fu;
        }
        else
        {
            include_yf0Pavvk("<fu/default.h>"_fu, outputs);
            return ("(*(const "_fu + typeAnnot_coM5xjto(clear_refs_qNIEFFQB(s_Type(type)), 0, module, ctx, _here, outputs, _current_fn)) + "*)fu::NIL)"_fu;
        };
    }
    else
    {
        return typeAnnot_coM5xjto(type, 0, module, ctx, _here, outputs, _current_fn) + "{}"_fu;
    };
}

static bool add_once_dNBNLn9o(fu_VEC<s_BitSet>& bs, const s_Target& target)
{
    return add_once_JYhPSsPA(bs, target.modid, target.index);
}

static s_Flags isExtLinked_VvuQC9lu(const s_Overload& overload)
{
    return overload.flags & (s_Flags_F_PUB | s_Flags_F_EXTERN);
}

static fu_STR fnLinkage_24BDkzaM(const s_Overload& overload)
{
    return ((is_never_eqpYb5IC(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & s_Flags_F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!isExtLinked_VvuQC9lu(overload) ? "static "_fu : fu_STR{});
}

                                #ifndef DEF_M_RETVAL
                                #define DEF_M_RETVAL
inline constexpr int M_RETVAL = (1 << 3);
                                #endif

static bool isOp_gGR1jk63(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    const s_Flags flags = GET_EGW2iFNh(target, module, ctx).flags;
    if (flags & s_Flags_F_OOE_RTL)
        return true;
    else if (!(flags & s_Flags_F_OPERATOR))
        return false;
    else
    {
        fu::view<s_Argument> args = EXT_zGKqmACg(target, module, ctx).args;
        if (args.size() > 2)
            return false;
        else if (GET_EGW2iFNh(target, module, ctx).kind == s_kind___native)
            return true;
        else
        {
            fu::view<char> name = GET_EGW2iFNh(target, module, ctx).name;
            if (args.size() > 1)
                return hasBinary_xj37xk9w(name);
            else
                return hasUnary_xj37xk9w(name);

        };
    };
}

static fu_STR valid_operator_DsQPtRhU(const fu_STR& str)
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
        return fu_STR(str);

}

static char hex_EjSKsJK2(const unsigned x)
{
    if (x < 10u)
        return char((unsigned(fu::u8('0')) + x));
    else
        return char((unsigned(fu::u8('A')) + (x - 10u)));

}

static fu_STR xHH_PEPcgSrq(const unsigned c)
{
    return ("x"_fu + hex_EjSKsJK2(((c >> 4u) & 0xfu))) + hex_EjSKsJK2(((c >> 0u) & 0xfu));
}

static fu_STR valid_identifier_H2o2ZvfF(fu_STR&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
            continue;
        else
            str = ((fu::get_view(str, 0, i) + xHH_PEPcgSrq(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1), str.size()));

    };
    return ID_iBN4fKP1(str);
}

static fu_STR fnID_YHJyya9d(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET_EGW2iFNh(target, module, ctx);
    const fu_STR& id = (overload.name ? overload.name : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here));
    if (isOp_gGR1jk63(target, module, ctx))
        return "operator"_fu + valid_operator_DsQPtRhU(id);
    else
    {
        /*MOV*/ fu_STR ret = valid_identifier_H2o2ZvfF(fu_STR(id));
        if (GET_EGW2iFNh(target, module, ctx).sighash && !(GET_EGW2iFNh(target, module, ctx).flags & s_Flags_F_EXTERN))
            ret += ("_"_fu + fu::get_view(GET_EGW2iFNh(target, module, ctx).sighash, 0, 8));

        return /*NRVO*/ ret;
    };
}

static fu_STR cgFnPrototype_S0BjggAd(const s_Target& target, const bool fnptr, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu_VEC<fu_STR>{}, fu_VEC<int>{}, fu_VEC<fu_STR>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    /*MOV*/ fu_STR src {};
    const s_Overload& overload = GET_EGW2iFNh(target, module, ctx);
    if (!fnptr)
    {
        fu_STR linkage = fnLinkage_24BDkzaM(overload);
        src += linkage;
    };

    {
        const s_Type& ret = (overload.type ? overload.type : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here));
        fu_STR annot = typeAnnot_coM5xjto(ret, M_RETVAL, module, ctx, _here, outputs, _current_fn);
        src += (annot + " "_fu);
    };

    {
        /*MOV*/ fu_STR name = fnID_YHJyya9d(target, module, ctx, _here);
        src += (fnptr ? (("(*"_fu + name) + ")"_fu) : static_cast<fu_STR&&>(name));
    };

    {
        src += "("_fu;
        fu::view<s_Argument> args = EXT_zGKqmACg(target, module, ctx).args;
        bool first = true;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& arg = args[i].type;
            if (type_isZST_P1efM8U7(arg))
                continue;
            else
            {
                if (first)
                    first = false;
                else
                    src += ", "_fu;

                src += typeAnnot_coM5xjto(arg, (M_ARGUMENT | M_FWDECL), module, ctx, _here, outputs, _current_fn);
            };
        };
        if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_xj37xk9w(overload.name))
            src += ", /*postfix*/int"_fu;

        src += ")"_fu;
    };
    return /*NRVO*/ src;
}

static void ensureFwdDecl_v7rzALCa(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_EGW2iFNh(target, module, ctx);
    if ((overload.kind != s_kind_fn) || (overload.name == "main"_fu))
        return;
    else if (!add_once_dNBNLn9o(outputs._ffwd, target))
        return;
    else
    {
        fu_STR fwdDecl = (cgFnPrototype_S0BjggAd(target, false, module, ctx, _here, outputs, _current_fn) + ";\n"_fu);
        if (overload.flags & s_Flags_F_HOTSWAP)
        {
            fu_STR fnPtr = (("extern "_fu + cgFnPrototype_S0BjggAd(target, true, module, ctx, _here, outputs, _current_fn)) + ";\n"_fu);
            outputs._ffwd_live_client += fnPtr;
            outputs._ffwd_live_nclient += fwdDecl;
        }
        else
            outputs._ffwd_src += fwdDecl;

    };
}

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

static s_Target nested_4p1wbx4r(const int index, const s_cg_CurrentFn& _current_fn)
{
    return index ? s_Target { -_current_fn.target.index, int(index) } : s_Target{};
}

static fu_VEC<fu_STR>& _ids_used_SnvE2i57(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu_VEC<int>& _ids_dedupe_GYFmxecH(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEF_grow_if_oob_RV5Mq2qSYFc
                                #define DEF_grow_if_oob_RV5Mq2qSYFc
inline int& grow_if_oob_RV5Mq2qS(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR localID_RDwXodVL(const s_Target& target, const bool dedupe, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET_EGW2iFNh(target, module, ctx);
    /*MOV*/ fu_STR id { o.name };
    const s_ClosureID cid = tryParseClosureID_ESzTmva3(id);
    if (cid.target)
        id = GET_EGW2iFNh(cid.target, module, ctx).name;

    id = ID_iBN4fKP1(id);
    if (isLocal_gjigkUO2(target))
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                /*MOV*/ fu_STR candidate = (dupes ? x7E_sTZRmMq1((id + '_'), fu::i64dec(dupes)) : fu_STR(id));
                for (int i = 0; i < _ids_used_SnvE2i57(_current_fn).size(); i++)
                {
                    if (_ids_used_SnvE2i57(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_5;
                    };
                };
                fu_VEC<fu_STR>* _0;
                (_0 = &(_ids_used_SnvE2i57(_current_fn)), (*_0 += static_cast<fu_STR&&>(candidate)));
                break;
              } BL_5:;
            };
            if (dupes)
            {
                grow_if_oob_RV5Mq2qS(_ids_dedupe_GYFmxecH(_current_fn), target.index) = int(dupes);
            };
        };
        const int dupes = ((_ids_dedupe_GYFmxecH(_current_fn).size() > target.index) ? _ids_dedupe_GYFmxecH(_current_fn)[target.index] : (*(const int*)fu::NIL));
        if (dupes)
            return x7E_sTZRmMq1((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

static bool F_HOIST_asPtr_0Jz1fmsh(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (!s_SolverStatus((GET_EGW2iFNh(target, module, ctx).status & s_SolverStatus_SS_HOIST)))
        return false;
    else
    {
        const s_Type& t = GET_EGW2iFNh(target, module, ctx).solved.type;
        return is_ref_qNIEFFQB(t) && (!type_isSliceable_mipI0b6h(t) || TODO_FIX_isArray_qNIEFFQB(t));
    };
}

static fu_STR binding_lksPzqwz(const s_Target& target, const bool forceValue, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_EGW2iFNh(target, module, ctx);
    const s_Type& place_type = overload.solved.type;
    const s_Flags isArg = (overload.flags & s_Flags_F_ARG);
    s_Type place_type_1 = (forceValue ? clear_refs_qNIEFFQB(s_Type(place_type)) : s_Type(place_type));
    /*MOV*/ fu_STR annot = typeAnnot_coM5xjto(place_type_1, ((((!is_mutref_8RliRHyJ(overload.type, _here, ctx) ? M_CONST : (*(const int*)fu::NIL)) | (isArg ? M_ARGUMENT : (*(const int*)fu::NIL))) | (is_mutref_8RliRHyJ(overload.type, _here, ctx) ? M_MUTVAR : (*(const int*)fu::NIL))) | ((overload.flags & s_Flags_F_MOVED_FROM) ? M_MOVABLE : (*(const int*)fu::NIL))), module, ctx, _here, outputs, _current_fn);
    const s_SolverStatus isUnused = s_SolverStatus((overload.status & s_SolverStatus_SS_UNUSED));
    if (isArg && isUnused)
        return /*NRVO*/ annot;
    else
    {
        /*MOV*/ fu_STR id = localID_RDwXodVL(target, true, module, ctx, _current_fn);
        if (GET_EGW2iFNh(target, module, ctx).status & s_SolverStatus_SS_HOIST)
        {
            if (_current_fn.target)
            {
                fu_STR hoistDecl = (starts_Nz2mqu34(annot, "const "_fu) ? fu::slice(annot, 6) : static_cast<fu_STR&&>(annot));
                if (F_HOIST_asPtr_0Jz1fmsh(target, module, ctx))
                {
                    if (hoistDecl[(hoistDecl.size() - 1)] == '&')
                        hoistDecl.mutref((hoistDecl.size() - 1)) = '*';
                    else
                        BUG_vYytSj38(("F_HOIST_asPtr: Decl not a ref: "_fu + hoistDecl), _here, ctx);

                };
                _current_fn._hoist += ((hoistDecl + " "_fu) + id);
                return /*NRVO*/ id;
            }
            else
                BUG_vYytSj38("TODO: hoisting for global variables."_fu, _here, ctx);

        }
        else
        {
            /*MOV*/ fu_STR head = static_cast<fu_STR&&>((annot ? annot : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here)));
            head += (" "_fu + id);
            if (isUnused)
                head = ("[[maybe_unused]] "_fu + head);

            if (GET_EGW2iFNh(target, module, ctx).flags & s_Flags_F_MOVED_FROM)
                head = ("/*MOV*/ "_fu + head);

            return /*NRVO*/ head;
        };
    };
}

static fu_STR binding_rH9uREC8(const s_Argument& arg, const bool forceValue, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target target = nested_4p1wbx4r(arg.local, _current_fn);
    return binding_lksPzqwz(target, forceValue, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgFnSignature_zPb8EP6H(const s_SolvedNode& fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_EGW2iFNh(target, module, ctx);
    const fu_VEC<s_Argument>& host_args = EXT_zGKqmACg(target, module, ctx).args;
    fu_STR annot = typeAnnot_coM5xjto((overload.type ? overload.type : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here)), M_RETVAL, module, ctx, _here, outputs, _current_fn);
    fu_STR id { overload.name };
    if (id == "main"_fu)
    {
        outputs._hasMain = MAIN_needed;
        id = "fu_MAIN"_fu;
        if (host_args)
            outputs._hasMain |= MAIN_argv;

        if (type_isZST_P1efM8U7(overload.type))
            outputs._hasMain |= MAIN_zst;

    }
    else
        id = fnID_YHJyya9d(fn.target, module, ctx, _here);

    /*MOV*/ fu_STR src = ((((fnLinkage_24BDkzaM(overload) + annot) + " "_fu) + id) + "("_fu);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (type_isZST_P1efM8U7(host_args[i].type))
            continue;
        else
        {
            if (some)
                src += ", "_fu;

            some = true;
            src += binding_rH9uREC8(host_args[i], false, module, ctx, _here, outputs, _current_fn);
        };
    };
    if ((overload.flags & s_Flags_F_OPERATOR) && hasPostfix_xj37xk9w(overload.name))
        src += ", /*postfix*/int"_fu;

    src += ")"_fu;
    return /*NRVO*/ src;
}

                                #ifndef DEF_M_LOOP_BODY
                                #define DEF_M_LOOP_BODY
inline constexpr int M_LOOP_BODY = (1 << 9);
                                #endif

static bool exprOK_SMv97Hh6(fu::view<s_SolvedNode> nodes)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        const s_kind k = n.kind;
        if ((k == s_kind_jump) || (k == s_kind_loop) || (k == s_kind_try) || (k == s_kind_defer) || (k == s_kind_letdef) || (k == s_kind_pragma))
            return false;
        else if (!exprOK_SMv97Hh6(n.items))
            return false;

    };
    return true;
}

static fu_VEC<fu_STR> cgNodes_cdZrHI4a(fu::view<s_SolvedNode> nodes, const int mode, const fu_STR& trail, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
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
        const bool isTrail = (trail && (i == (nodes.size() - 1)) && !is_never_eqpYb5IC(node.type) && !is_void_eqpYb5IC(node.type));
        /*MOV*/ fu_STR src = (node ? cgNode_ZetS6gVl(node, (debug + ".cgNodes"_fu), (isTrail ? (mode & ~M_STMT) : int(mode)), (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn) : fu_STR{});
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
            fail_AIhs8aVA((((x7E_sTZRmMq1("cgNodes: empty output for Node(kind=`"_fu, str_v3b7EcLt(node.kind)) + "` value=`"_fu) + node.value) + "`)."_fu), ctx, _here);

    };
    return /*NRVO*/ result;
}

static fu_STR cgComma_PCJtHUzR(fu::view<s_SolvedNode> nodes, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu_VEC<fu_STR> items = cgNodes_cdZrHI4a(nodes, 0, (*(const fu_STR*)fu::NIL), (debug + ".cgComma"_fu), module, ctx, _here, outputs, _current_fn);
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

                                #ifndef DEF_M_OPT_CURLIES
                                #define DEF_M_OPT_CURLIES
inline constexpr int M_OPT_CURLIES = (1 << 8);
                                #endif

                                #ifndef DEF_each_reZQvZWkV9i
                                #define DEF_each_reZQvZWkV9i
inline void each_reZQvZWk(fu::view<s_Region> a, bool& force_mut, const s_Module& module, const s_Context& ctx, const s_cg_CurrentFn& _current_fn)
{
    for (int i = 0; i < a.size(); i++)
    {
        const s_Region& r = a[i];
        const int local = Region_asLocal_l3hJ0imS(r);
        if (!local || !(GET_EGW2iFNh(nested_4p1wbx4r(local, _current_fn), module, ctx).flags & s_Flags_F_MOVED_FROM))
        {
            force_mut = false;
            return;
        };
    };
}
                                #endif

                                #ifndef DEF_if_first_ovYeq1jaRea
                                #define DEF_if_first_ovYeq1jaRea
inline char if_first_ovYeq1ja(fu::view<char> s)
{
    return s.size() ? s[0] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEF_if_last_ovYeq1jaRea
                                #define DEF_if_last_ovYeq1jaRea
inline char if_last_ovYeq1ja(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR cgStatements_Vkv9eEnw(fu::view<s_SolvedNode> nodes, int& count, const fu_STR& trail, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu_VEC<fu_STR> lines = cgNodes_cdZrHI4a(nodes, M_STMT, trail, "cgStatements"_fu, module, ctx, _here, outputs, _current_fn);
    count = lines.size();
    /*MOV*/ fu_STR src {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
        {
            src += (((if_first_ovYeq1ja(line) == '\n') ? ('\n' + line) : (outputs._indent + line)) + ((if_last_ovYeq1ja(line) == ';') ? '\n' : ';'));
        };
    };
    return /*NRVO*/ src;
}

                                #ifndef DEF_has_ODCLAe2r9ig
                                #define DEF_has_ODCLAe2r9ig
inline bool has_ODCLAe2r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR cgBlock_8T5iRECb(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Helpers& helpers, const s_Type& type, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const int _ids_used0 = _current_fn._ids_used.size();
    fu_DEFER(
    {
        if (!_current_fn._hoist)
            _current_fn._ids_used.shrink(_ids_used0);

    });
    /*MOV*/ fu_STR indent0 { outputs._indent };
    fu_DEFER(outputs._indent = static_cast<fu_STR&&>(indent0));
    outputs._indent += "    "_fu;
    fu_STR gnuOpen = (gnuStmtExpr ? "(__extension__ ("_fu : fu_STR{});
    fu_STR open = "{"_fu;
    fu_STR close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu_STR trail {};
    fu_STR name = x7E_sTZRmMq1("BL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const bool has_val = (type && !is_void_eqpYb5IC(type));
    bool ptrflip = false;
    if (has_val)
    {
        bool force_mut = is_ref_qNIEFFQB(type);
        each_reZQvZWk(type.lifetime.uni0n, force_mut, module, ctx, _current_fn);
        fu_STR annot = typeAnnot_coM5xjto(type, (force_mut ? M_MOVABLE : (*(const int*)fu::NIL)), module, ctx, _here, outputs, _current_fn);
        fu_STR id = emitTEMPVAR_PHuaPwZQ(annot, ptrflip, (name ? (name + "_v"_fu) : fu_STR{}), (*(const fu_STR*)fu::NIL), _current_fn);
        fu_STR out = (ptrflip ? ("*"_fu + id) : cgMove_hgqMZ5U5(type, id, module, ctx, _here, outputs, _current_fn));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu_STR(name), s_Helpers(helpers), bool(has_val), bool(ptrflip) };
    int count {};
    /*MOV*/ fu_STR src = cgStatements_Vkv9eEnw(nodes, count, trail, module, ctx, _here, outputs, _current_fn);
    const bool labelUsed = fu::has(src, (("goto "_fu + name) + ";"_fu));
    if (labelUsed)
    {
        close = (((("  } "_fu + name) + ":;"_fu) + indent0) + close);
        open = "{ {"_fu;
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || labelUsed || has_ODCLAe2r(src, '{') || fu::has(src, "if"_fu))
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);

    return /*NRVO*/ src;
}

static fu_STR cgBlock_X39lWkfJ(const s_SolvedNode& node, const int mode, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu_VEC<s_SolvedNode> items = ((node.kind == s_kind_block) ? fu_VEC<s_SolvedNode>(node.items) : fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Helpers& helpers = ((node.kind == s_kind_block) ? node.helpers : (*(const s_Helpers*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = helpers;

    const bool expr = !(mode & M_STMT);
    if (expr && exprOK_SMv97Hh6(items))
        return cgComma_PCJtHUzR(items, (debug + ".cgBlock"_fu), module, ctx, _here, outputs, _current_fn);
    else
        return cgBlock_8T5iRECb(items, !!(mode & M_OPT_CURLIES), expr, helpers, (expr ? node.type : (*(const s_Type*)fu::NIL)), module, ctx, _here, outputs, _current_fn);

}

static const bool RESOLVE_report = false;

static fu_STR Indent_mguXYTQp(const int REV)
{
    /*MOV*/ fu_STR str {};
    for (int i = 0; i < REV; i++)
        str += " "_fu;

    return /*NRVO*/ str;
}

                                #ifndef DEF_unpackAddrOfFn_ISGjAIb8S71
                                #define DEF_unpackAddrOfFn_ISGjAIb8S71
inline void unpackAddrOfFn_ISGjAIb8(fu::view<char> canon, s_Target& last, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (canon[0] == '@')
    {
        int offset = 1;
        while (offset < canon.size())
        {
            const s_Mi mi = parseMi_Tv0KZM6O(offset, canon);
            const s_Target target = s_Target { int(mi.modid), int(mi.index) };
            if (last)
                fail_AIhs8aVA(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_EGW2iFNh(last, module, ctx).name) + " vs "_fu) + GET_EGW2iFNh(target, module, ctx).name), ctx, _here);
            else
            {
                last = target;
                if (GET_EGW2iFNh(target, module, ctx).kind == s_kind_fn)
                {
                    fu::view<s_Argument> args = EXT_zGKqmACg(target, module, ctx).args;
                    for (int i = 0; i < args.size(); i++)
                    {
                        if (args[i].flags & s_Flags_F_IMPLICIT)
                            fail_AIhs8aVA("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, ctx, _here);

                    };
                    ensureFnUsable_3tpsKWu9(target, module, ctx, _here, outputs, _current_fn);
                }
                else
                    fail_AIhs8aVA(((x7E_sTZRmMq1("Cannot codegen a non-fn: "_fu, str_v3b7EcLt(GET_EGW2iFNh(target, module, ctx).kind)) + " "_fu) + GET_EGW2iFNh(target, module, ctx).name), ctx, _here);

            };
        };
    }
    else
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

}
                                #endif

static fu_STR cgEmpty_yN55i8zq(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (mode & M_STMT)
    {
        return fu_STR{};
    }
    else if ((mode & M_ARG_TO_NATIVE) && isAddrOfFn_mipI0b6h(node.type))
    {
        s_Target last {};
        unpackAddrOfFn_ISGjAIb8(node.type.vtype.canon, last, module, ctx, _here, outputs, _current_fn);
        return "&"_fu + fnID_YHJyya9d(last, module, ctx, _here);
    }
    else if (!node.type)
        return "0"_fu;
    else
        return cgDefault_G3HxNGaN(node.type, module, ctx, _here, outputs, _current_fn);

}

static fu_STR cgFn_4BNBZ9xV(const s_SolvedNode& fn, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    // Hoisted:
    fu_STR x;

    /*MOV*/ fu_STR indent0 { outputs._indent };
    fu_DEFER(outputs._indent = static_cast<fu_STR&&>(indent0));
    fu::view<s_SolvedNode> items = fn.items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_EGW2iFNh(target, module, ctx);
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
                fail_AIhs8aVA(((x7E_sTZRmMq1("cgFn: no body on non-native: "_fu, str_v3b7EcLt(overload.kind)) + " "_fu) + id), ctx, _here);

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
                src += cgFnSignature_zPb8EP6H(fn, module, ctx, _here, outputs, _current_fn);
                fu_STR body_src = cgBlock_X39lWkfJ(body, M_STMT, (("cgFn("_fu + id) + ")"_fu), module, ctx, _here, outputs, _current_fn);
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
                ensureFwdDecl_v7rzALCa(fn.target, module, ctx, _here, outputs, _current_fn);

            /*MOV*/ fu_STR dedupe = ((overload.flags & s_Flags_F_PUB) && (overload.flags & s_Flags_F_TEMPLATE) ? valid_identifier_H2o2ZvfF(fu_STR(overload.name)) : fu_STR{});
            fu_STR dedupe_1 = ((dedupe && overload.sighash) ? ((dedupe + '_') + overload.sighash) : static_cast<fu_STR&&>(dedupe));
            if (overload.flags & s_Flags_F_HOTSWAP)
            {
                if (target.modid == module.modid)
                {
                    outputs._live_targets += int(target.index);
                    fu_STR fnID = fnID_YHJyya9d(target, module, ctx, _here);
                    fu_STR fnID_local = (fnID + "_local"_fu);
                    fu_STR fnPtrAnnot = cgFnPrototype_S0BjggAd(target, true, module, ctx, _here, outputs, _current_fn);
                    include_yf0Pavvk("<dl/hotswap.hpp>"_fu, outputs);
                    ensureFwdDecl_v7rzALCa(target, module, ctx, _here, outputs, _current_fn);
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
            if (RESOLVE_report)
            {
                const int REV = int(EXT_zGKqmACg(target, module, ctx).revision);
                if (REV > 5)
                {
                    fu_STR* BL_21_v;
                    fu::println((fu::slate<1, fu_STR> { static_cast<fu_STR&&>((__extension__ (
                    {
                        x = x7E_sTZRmMq1(((("RESOLVE "_fu + Indent_mguXYTQp(REV)) + overload.name) + " :: "_fu), fu::u64dec(EXT_zGKqmACg(target, module, ctx).revision));
                        BL_21_v = &(x);
                    (void)0;}), *BL_21_v)) }));
                };
            };
            return cgEmpty_yN55i8zq(fn, mode, module, ctx, _here, outputs, _current_fn);
        };
    }
    else
        fail_AIhs8aVA(("cgFn: fn not finalized: "_fu + id), ctx, _here);

}

static void ensureFnDef_OKzrNiT8(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (target.modid == module.modid)
    {
        if (!add_once_uczByTOp(outputs._idef, target.index))
            return;
        else
        {
            const s_SolvedNode& node = GET_EGW2iFNh(target, module, ctx).solved;
            if (node.kind == s_kind_fn)
                cgFn_4BNBZ9xV(node, M_STMT, module, ctx, _here, outputs, _current_fn);
            else
                fail_AIhs8aVA("ensureFnDef non-fn"_fu, ctx, _here);

        };
    }
    else
        fail_AIhs8aVA((((x7E_sTZRmMq1((x7E_sTZRmMq1((x7E_sTZRmMq1("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu), str_v3b7EcLt(GET_EGW2iFNh(target, module, ctx).kind)) + " "_fu) + GET_EGW2iFNh(target, module, ctx).name) + "`."_fu), ctx, _here);

}

static void ensureFnUsable_3tpsKWu9(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (target.modid != module.modid)
        ensureFwdDecl_v7rzALCa(target, module, ctx, _here, outputs, _current_fn);
    else
        ensureFnDef_OKzrNiT8(target, module, ctx, _here, outputs, _current_fn);

}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

inline static bool isIntegerConstant_nAZaJqCn(const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx)
{
    if (expr.kind == s_kind_int)
        return true;
    else
    {
        if (expr.kind == s_kind_call)
        {
            const s_Overload& t = GET_EGW2iFNh(expr.target, module, ctx);
            if ((t.kind == s_kind___native) && (t.flags & s_Flags_F_OPERATOR))
            {
                for (int i = 0; i < expr.items.size(); i++)
                {
                    if (!isIntegerConstant_nAZaJqCn(expr.items[i], module, ctx))
                        return false;

                };
                return true;
            };
        };
        return false;
    };
}

                                #ifndef DEF_join_yaiqG1c4pfi
                                #define DEF_join_yaiqG1c4pfi
inline fu_STR join_yaiqG1c4(fu::view<fu_STR> a, fu::view<char> sep)
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

static fu_STR binding_qYA4B3UA(const s_Target& target, const s_SolvedNode& init, const bool doInit, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR head = binding_lksPzqwz(target, false, module, ctx, _here, outputs, _current_fn);
    if (!doInit)
        return /*NRVO*/ head;
    else
    {
        if (GET_EGW2iFNh(target, module, ctx).status & s_SolverStatus_SS_HOIST)
            head += " = "_fu;

        if (!init || ((init.kind == s_kind_definit) && !is_ref_qNIEFFQB(init.type)))
        {
            return head + " {}"_fu;
        }
        else
        {
            const bool isCopy = ((init.kind == s_kind_copy) && !is_ref_qNIEFFQB(GET_EGW2iFNh(target, module, ctx).solved.type));
            const s_SolvedNode& init_1 = (isCopy ? only_7ZMqiNoZ(init.items) : init);
            const bool use_initTEMPVARs = !_current_fn.target.index;
            fu_VEC<fu_STR> initTEMPVARs {};
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            fu_STR expr = cgNode_ZetS6gVl(init_1, "binding"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
            if (use_initTEMPVARs)
                std::swap(initTEMPVARs, _current_fn.TEMPVARs);

            if (initTEMPVARs)
            {
                expr = (((((("[]() -> "_fu + typeAnnot_coM5xjto(init_1.type, 0, module, ctx, _here, outputs, _current_fn)) + " {\n    "_fu) + join_yaiqG1c4(initTEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}()"_fu);
            };
            if (isCopy && !is_primitive_XeFsC3zb(init_1.type))
            {
                return ((head + " { "_fu) + expr) + " }"_fu;
            }
            else if (GET_EGW2iFNh(target, module, ctx).status & s_SolverStatus_SS_HOIST)
            {
                if (F_HOIST_asPtr_0Jz1fmsh(target, module, ctx))
                    return ((head + "&("_fu) + expr) + ")"_fu;
                else
                    return head + expr;

            }
            else
                return (head + " = "_fu) + expr;

        };
    };
}

static fu_STR binding_MYV8ny69(const s_SolvedNode& node, const bool doInit, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = node.target;
    const s_SolvedNode& init = (doInit && node.items ? node.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
    return binding_qYA4B3UA(target, init, doInit, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgLet_EkF7nYO6(const s_SolvedNode& node, const bool global, const bool foreign, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (type_isZST_P1efM8U7(node.type))
    {
        return fu_STR{};
    }
    else
    {
        const bool intconst = (global && is_primitive_XeFsC3zb(node.type) && !is_floating_pt_XeFsC3zb(node.type) && isIntegerConstant_nAZaJqCn(node.items[LET_INIT], module, ctx));
        /*MOV*/ fu_STR src = binding_MYV8ny69(node, (!foreign || intconst), module, ctx, _here, outputs, _current_fn);
        if (!global)
            return /*NRVO*/ src;
        else
        {
            if (starts_Nz2mqu34(src, "const "_fu))
                src = fu::slice(src, 6);

            if (intconst)
            {
                outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
                return fu_STR{};
            }
            else
            {
                const int prio = (is_primitive_XeFsC3zb(node.type) ? 0 : int(((node.target.modid == module.modid) ? module.order.dep_depth : ctx.modules[node.target.modid].order.dep_depth)));
                if (prio)
                {
                    include_yf0Pavvk("<fu/init_priority.h>"_fu, outputs);
                    fu_STR attr = (x7E_sTZRmMq1("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ")"_fu);
                    const int eq = find_ODCLAe2r(src, '=');
                    if (eq > 0)
                        src = (((fu::get_view(src, 0, eq) + attr) + " "_fu) + fu::get_view(src, eq, src.size()));

                };
                if (!isExtLinked_VvuQC9lu(GET_EGW2iFNh(node.target, module, ctx)))
                {
                    if (!foreign)
                        outputs._fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
                    else
                        fail_AIhs8aVA(("Cannot codegen, relies on an external static: "_fu + GET_EGW2iFNh(node.target, module, ctx).name), ctx, _here);

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

static fu_STR cgGlobal_xVqi1UCF(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!add_once_dNBNLn9o(outputs._ffwd, target))
    {
        return fu_STR{};
    }
    else
        return cgLet_EkF7nYO6(GET_EGW2iFNh(target, module, ctx).solved, true, (target.modid != module.modid), module, ctx, _here, outputs, _current_fn);

}

                                #ifndef DEF_has_51aX1qKygWk
                                #define DEF_has_51aX1qKygWk
inline bool has_51aX1qKy(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR rootNS_cxO6Eb9k(const fu_STR& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_51aX1qKy(_current_fn._ids_used, id))
        return "::"_fu + id;
    else
        return fu_STR(id);

}

static fu_STR cgEnumv_qsDsvkbe(const s_Type& type, fu::view<char> id, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu_STR base = typeAnnotBase_bE67WZlo(type, 0, module, ctx, _here, outputs, _current_fn);
    return (base + "_"_fu) + id;
}

static fu_STR emitPrefixOp_fUoJiBwK(fu::view<char> op, const s_SolvedNode& node, const bool isNative, fu::view_mut<fu_STR> item_src, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return unpromote_guFt1bJJ((op + ARG_tpo4EISy(0, item_src)), node, isNative, module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_M_MOVE
                                #define DEF_M_MOVE
inline constexpr int M_MOVE = (1 << 12);
                                #endif

                                #ifndef DEF_map_zVOaNyV8496
                                #define DEF_map_zVOaNyV8496
inline fu_VEC<fu_STR> map_zVOaNyV8(fu::view<s_SolvedNode> a)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        fu_STR BL_3_v {};
        res.mutref(i) = (__extension__ (
        {
            const s_SolvedNode& x = a[i];
            BL_3_v = (str_v3b7EcLt(x.kind));
        (void)0;}), static_cast<fu_STR&&>(BL_3_v));
    };
    return /*NRVO*/ res;
}
                                #endif

static fu_STR cgCall_xHZTUdVv(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Extended& ext = EXT_zGKqmACg(node.target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_EGW2iFNh(node.target, module, ctx))) ? *_0 : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here));
    const fu_VEC<s_SolvedNode>& args = node.items;
    const bool isNative = (target.kind == s_kind___native);
    const bool isSimpleCpyMovAssign = ((args.size() == 2) && isNative && (target.name == "="_fu) && isFieldChain_ikNkD4rO(args[0], module, ctx));
    const int MUSTSEQ_mask = node.helpers.index;
    int ooe_crosscheck = 0;
    fu_STR ooe_header {};
    fu_VEC<fu_STR> item_src {};
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        const s_SolvedNode& arg_1 = ((isSimpleCpyMovAssign && (i == 1) && (arg.kind == s_kind_copy)) ? only_7ZMqiNoZ(arg.items) : arg);
        bool junk = false;
        if (type_isZST_P1efM8U7(arg_1.type))
        {
            junk = ((arg_1.kind == s_kind_empty) || (arg_1.kind == s_kind_definit) || (arg_1.kind == s_kind_fndef) || ((arg_1.kind == s_kind_call) && ((GET_EGW2iFNh(arg_1.target, module, ctx).kind == s_kind_var) || ((GET_EGW2iFNh(arg_1.target, module, ctx).kind == s_kind_type) && !arg_1.items) || (GET_EGW2iFNh(arg_1.target, module, ctx).kind == s_kind_enumv))));
            if (!junk)
                fail_AIhs8aVA((x7E_sTZRmMq1("Cannot discard ZST arg, kind is `"_fu, str_v3b7EcLt(arg_1.kind)) + "`."_fu), ctx, _here);

        };
        fu_STR _1 {};
        /*MOV*/ fu_STR src = (junk ? fu_STR{} : ((_1 = cgNode_ZetS6gVl(arg_1, (x7E_sTZRmMq1((("cgCall("_fu + node.value) + ").ARG("_fu), fu::i64dec(i)) + ")"_fu), (isNative ? M_ARG_TO_NATIVE : (*(const int*)fu::NIL)), ext.args[i].type, module, ctx, _here, outputs, _current_fn)) ? static_cast<fu_STR&&>(_1) : fail_AIhs8aVA("Empty arg src."_fu, ctx, _here)));
        const int MUSTSEQ_bit = (1 << (i & 31));
        if (MUSTSEQ_mask & MUSTSEQ_bit)
        {
            if (junk)
                fail_AIhs8aVA("Trying to MUSTSEQ a discarded argument, shouldnt happen."_fu, ctx, _here);
            else
            {
                ooe_crosscheck |= MUSTSEQ_bit;
                if (!isFieldChain_ikNkD4rO(arg_1, module, ctx))
                {
                    if (ooe_header)
                        ooe_header += ", "_fu;
                    else
                        ooe_header = "("_fu;

                    bool ptrflip = false;
                    fu_STR annot = typeAnnot_coM5xjto(arg_1.type, 0, module, ctx, _here, outputs, _current_fn);
                    fu_STR id = emitTEMPVAR_PHuaPwZQ(annot, ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn);
                    ooe_header += id;
                    ooe_header += " = "_fu;
                    ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu_STR(src));
                    src = (ptrflip ? ("*"_fu + id) : cgMove_hgqMZ5U5(arg_1.type, id, module, ctx, _here, outputs, _current_fn));
                };
            };
        };
        item_src += static_cast<fu_STR&&>(src);
    };
    if (ooe_crosscheck == MUSTSEQ_mask)
    {
        if (isNative && (target.name[0] == '\n'))
        {
            /*MOV*/ fu_STR id = fu::slice(target.name, (NativeHacks_FkHhiw9v(target.name).name_start_idx + 1));
            const int idx = find_ODCLAe2r(id, '\n');
            if (idx > -1)
            {
                include_yf0Pavvk(fu::slice(id, 0, idx), outputs);
                id = fu::slice(id, (idx + 1));
            };
            if (id[0] == '.')
            {
                if (args.size() > 1)
                    return emitMethodCall_gx8G74wr(id, ooe_header, item_src);
                else
                    return emitPostfixOp_r9sVzSR1(id, node, isNative, item_src, module, ctx, _here, outputs, _current_fn);

            }
            else if (id[0] == '/')
                return ooeWrap_jzosBNjE(emitBuiltin_yzzC6BWa(id, item_src, node, module, ctx, _here, outputs, _current_fn), ooe_header);
            else if (args)
            {
                if (hasIdentifierChars_LDOhpoIo(id))
                    return emitFunctionCall_LbqmZg4Y(id, "("_fu, ")"_fu, ooe_header, item_src);
                else
                    return emitBinaryOp_PigYCvj6(id, node, mode, args, isNative, ooe_header, item_src, module, ctx, _here, outputs, _current_fn);

            }
            else
                return /*NRVO*/ id;

        }
        else if (target.kind == s_kind_type)
        {
            if (!args)
                return cgDefault_G3HxNGaN(target.type, module, ctx, _here, outputs, _current_fn);
            else
            {
                const s_Struct* _2;
                const s_Struct& t = (*(_2 = &(tryLookupUserType_ChYpFATl(target.type, ctx, module))) ? *_2 : fail_AIhs8aVA("cgCall: defctor/type not a struct nor a user primitive."_fu, ctx, _here));
                fu_STR base = typeAnnotBase_bE67WZlo(target.type, 0, module, ctx, _here, outputs, _current_fn);
                if (t.kind == s_kind_flags)
                    return emitFunctionCall_LbqmZg4Y(base, "(("_fu, ((") & MASK_"_fu + base) + ")"_fu), ooe_header, item_src);
                else if ((t.kind == s_kind_primitive) || (t.kind == s_kind_enum))
                    return emitFunctionCall_LbqmZg4Y(base, "("_fu, ")"_fu, ooe_header, item_src);
                else if ((t.kind == s_kind_struct) || (t.kind == s_kind_union))
                {
                    return emitFunctionCall_LbqmZg4Y(base, " { "_fu, " }"_fu, ooe_header, item_src);
                }
                else
                    BUG_vYytSj38(x7E_sTZRmMq1("Unknown usertype kind: "_fu, str_v3b7EcLt(t.kind)), _here, ctx);

            };
        }
        else
        {
            if (node.target.modid && (target.kind == s_kind_fn))
                ensureFnUsable_3tpsKWu9(node.target, module, ctx, _here, outputs, _current_fn);

            const fu_STR& id = (target.name ? target.name : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here));
            if ((args.size() <= 2))
            {
                if (target.kind == s_kind_var)
                {
                    if (type_isZST_P1efM8U7(target.type))
                        return cgDefault_G3HxNGaN(target.type, module, ctx, _here, outputs, _current_fn);
                    else if (!isLocal_gjigkUO2(node.target))
                    {
                        cgGlobal_xVqi1UCF(node.target, module, ctx, _here, outputs, _current_fn);
                        return rootNS_cxO6Eb9k(ID_iBN4fKP1(id), _current_fn);
                    }
                    else
                    {
                        /*MOV*/ fu_STR id_1 = localID_RDwXodVL(node.target, false, module, ctx, _current_fn);
                        if (F_HOIST_asPtr_0Jz1fmsh(node.target, module, ctx))
                            return ("(*"_fu + id_1) + ")"_fu;
                        else
                            return /*NRVO*/ id_1;

                    };
                }
                else if (target.kind == s_kind_field)
                    return (ARG_tpo4EISy(0, item_src) + "."_fu) + ID_iBN4fKP1(id);
                else if (target.kind == s_kind_enumv)
                    return cgEnumv_qsDsvkbe(target.type, id, module, ctx, _here, outputs, _current_fn);
                else
                {
                    if (isOp_gGR1jk63(node.target, module, ctx))
                    {
                        if (args.size() == 1)
                        {
                            if (hasPostfix_xj37xk9w(id))
                                return emitPostfixOp_r9sVzSR1(valid_operator_DsQPtRhU(id), node, isNative, item_src, module, ctx, _here, outputs, _current_fn);
                            else
                                return emitPrefixOp_fUoJiBwK(valid_operator_DsQPtRhU(id), node, isNative, item_src, module, ctx, _here, outputs, _current_fn);

                        }
                        else if (args.size() == 2)
                        {
                            if (id == "[]"_fu)
                            {
                                if (mode & M_MOVE)
                                {
                                    fu_STR _3 {};
                                    return (_3 = (ARG_tpo4EISy(0, item_src) + ".try_steal("_fu), (static_cast<fu_STR&&>(_3) + ARG_tpo4EISy(1, item_src))) + ")"_fu;
                                }
                                else
                                {
                                    fu_STR _4 {};
                                    return (_4 = (ARG_tpo4EISy(0, item_src) + "["_fu), (static_cast<fu_STR&&>(_4) + ARG_tpo4EISy(1, item_src))) + "]"_fu;
                                };
                            }
                            else
                                return emitBinaryOp_PigYCvj6(valid_operator_DsQPtRhU(id), node, mode, args, isNative, ooe_header, item_src, module, ctx, _here, outputs, _current_fn);

                        };
                    };
                    if ((id == "STEAL"_fu) && (args.size() == 1))
                        return cgMove_hgqMZ5U5(node.type, ARG_tpo4EISy(0, item_src), module, ctx, _here, outputs, _current_fn);

                };
            };
            if (isNative)
                fail_AIhs8aVA((("Unknown __native: `"_fu + id) + "`."_fu), ctx, _here);
            else
                return emitFunctionCall_LbqmZg4Y(rootNS_cxO6Eb9k(fnID_YHJyya9d(node.target, module, ctx, _here), _current_fn), "("_fu, ")"_fu, ooe_header, item_src);

        };
    }
    else
        fail_AIhs8aVA(((x7E_sTZRmMq1((x7E_sTZRmMq1("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(MUSTSEQ_mask)) + ": "_fu) + join_yaiqG1c4(map_zVOaNyV8(args), "|"_fu)), ctx, _here);

}

                                #ifndef DEF_find_mimv437E658
                                #define DEF_find_mimv437E658
inline int find_mimv437E(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

                                #ifndef DEF_starts_fjBQS6rrsUk
                                #define DEF_starts_fjBQS6rrsUk
inline bool starts_fjBQS6rr(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static fu_STR cgLiteral_xU6ofrQD(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src { node.value };
    int idx {};
    while (((idx = find_mimv437E(src, '_', int(idx))) >= 0))
        src.splice(idx, 1);

    fu::view<char> _0 {};
    fu::view<char> base = ((_0 = tryLookupUserType_ChYpFATl(node.type, ctx, module).base) ? static_cast<fu::view<char>&&>(_0) : node.type.vtype.canon);
    if (starts_fjBQS6rr(base, 'u') && !has_ODCLAe2r(src, 'u'))
        src += 'u';

    if (starts_fjBQS6rr(base, 'f'))
    {
        if (!has_ODCLAe2r(src, '.') && !has_ODCLAe2r(src, (has_ODCLAe2r(src, 'x') ? 'p' : 'e')))
            src += ".0"_fu;

        if (base == "f32"_fu)
        {
            if (has_ODCLAe2r(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (base != "f64"_fu)
            fu_ASSERT();

    };
    if (starts_Nz2mqu34(src, "0o"_fu))
        src.splice(1, 1);

    if (starts_fjBQS6rr(base, 'i') || starts_fjBQS6rr(base, 'u'))
    {
        if (src.size() > 16)
        {
            s_Intlit parse = Intlit_eSPjJZjJ(src);
            if (parse.negative && (parse.absval == 0x8000000000000000ull))
                return "(-9223372036854775807-1)"_fu;

        };
        if ((base == "u64"_fu) || (base == "i64"_fu))
        {
            if (!has_ODCLAe2r(src, 'l'))
                return src + "ll"_fu;

        }
        else if ((base != "u32"_fu) && (base != "i32"_fu))
        {
            if (!(mode & M_ENUM_DECL))
                return ((typeAnnotBase_bE67WZlo(node.type, 0, module, ctx, _here, outputs, _current_fn) + "("_fu) + src) + ")"_fu;

        };
    };
    return /*NRVO*/ src;
}

static fu_STR escapeStringLiteral_j7vRHh4q(fu::view<char> str, const char quot)
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
            esc += ("\\"_fu + xHH_PEPcgSrq(unsigned(fu::u8(c))));
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

static fu_STR cgCharLiteral_kvdqcZX6(const s_SolvedNode& node)
{
    return escapeStringLiteral_j7vRHh4q(node.value, '\'');
}

static fu_STR cgStringLiteral_w87BjJ13(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (is_enum_XeFsC3zb(node.type) || is_flags_XeFsC3zb(node.type))
        return cgEnumv_qsDsvkbe(node.type, node.value, module, ctx, _here, outputs, _current_fn);
    else
    {
        annotateString_JpvcP5X9(outputs);
        /*MOV*/ fu_STR esc = escapeStringLiteral_j7vRHh4q(node.value, '"');
        esc += "_fu"_fu;
        return /*NRVO*/ esc;
    };
}

static fu_STR cgArrayLiteral_fk1ACYhG(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (node.target)
        return cgCall_xHZTUdVv(node, mode, module, ctx, _here, outputs, _current_fn);
    else
    {
        fu_VEC<fu_STR> items = cgNodes_cdZrHI4a(node.items, 0, (*(const fu_STR*)fu::NIL), "cgArrayLiteral"_fu, module, ctx, _here, outputs, _current_fn);
        if (!items.size())
            return cgDefault_G3HxNGaN(node.type, module, ctx, _here, outputs, _current_fn);
        else
        {
            fu_STR curly = (("{ "_fu + join_yaiqG1c4(items, ", "_fu)) + " }"_fu);
            fu_STR itemT = typeAnnotBase_bE67WZlo(clear_sliceable_8RliRHyJ(node.type, _here, ctx), 0, module, ctx, _here, outputs, _current_fn);
            fu_STR slate = ((((x7E_sTZRmMq1("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
            if (is_ref_qNIEFFQB(callarg) && !TODO_FIX_isArray_qNIEFFQB(callarg))
            {
                include_yf0Pavvk("<fu/view.h>"_fu, outputs);
                return ("("_fu + slate) + ")"_fu;
            }
            else
            {
                return ((typeAnnotBase_bE67WZlo(node.type, 0, module, ctx, _here, outputs, _current_fn) + " { "_fu) + slate) + " }"_fu;
            };
        };
    };
}

static fu_STR cgDefinit_aZcqDasx(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgArrayLiteral_fk1ACYhG(node, mode, callarg, module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_M_RETURN
                                #define DEF_M_RETURN
inline constexpr int M_RETURN = (1 << 5);
                                #endif

static bool supportsNRVO_OzwEMwzS(const s_Target& t, const s_Module& module, const s_Context& ctx)
{
    return (GET_EGW2iFNh(t, module, ctx).kind == s_kind_var) && !(GET_EGW2iFNh(t, module, ctx).flags & s_Flags_F_ARG) && !is_ref_qNIEFFQB(GET_EGW2iFNh(t, module, ctx).solved.type);
}

static bool Lifetime_hasArgPositions_zODwOxgR(const s_Lifetime& lifetime)
{
    for (int i = 0; i < lifetime.uni0n.size(); i++)
    {
        if (Region_isArgPosition_PhGvG2us(lifetime.uni0n[i]))
            return true;

    };
    return false;
}

static fu_STR cgMoveOrClone_R9yMJkLd(const s_kind kind, const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (kind == s_kind_move)
        return cgMove_hgqMZ5U5(type, src, module, ctx, _here, outputs, _current_fn);
    else
        return cgClone_l8wM6Aam(type, src, module, ctx, _here, outputs, _current_fn);

}

static fu_STR cgMoveOrClone_gmjA4Jip(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& expr = only_7ZMqiNoZ(node.items);
    if ((mode & M_RETURN) && is_trivial_ChYpFATl(node.type, ctx, module))
        return cgNode_ZetS6gVl(expr, "retTrivCpy"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
    else
    {
        if (node.kind == s_kind_move)
        {
            if (mode & M_RETURN)
            {
                const bool nrvo = ((expr.kind == s_kind_call) && (expr.items.size() == 0) && supportsNRVO_OzwEMwzS(expr.target, module, ctx));
                if (nrvo)
                    return "/*NRVO*/ "_fu + cgNode_ZetS6gVl(expr, "NRVO"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);

            };
            if (!is_trivial_ChYpFATl(node.type, ctx, module))
            {
                if (expr.kind == s_kind_call)
                {
                    const s_Overload& o = GET_EGW2iFNh(expr.target, module, ctx);
                    if ((o.kind == s_kind___native) && (o.name == "[]"_fu))
                        return cgNode_ZetS6gVl(expr, "cgMoveOperator[]"_fu, M_MOVE, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
                    else if (!is_mutref_8RliRHyJ(o.type, _here, ctx) && Lifetime_hasArgPositions_zODwOxgR(o.type.lifetime))
                    {
                        fu_STR _0 {};
                        fu_STR _1 {};
                        return (_1 = ((_0 = (("/* MOVE_FROM_CONST_REF */static_cast<"_fu + typeAnnotBase_bE67WZlo(o.type, 0, module, ctx, _here, outputs, _current_fn)) + "&&>(const_cast<"_fu), (static_cast<fu_STR&&>(_0) + typeAnnotBase_bE67WZlo(o.type, 0, module, ctx, _here, outputs, _current_fn))) + "&>("_fu), (static_cast<fu_STR&&>(_1) + cgNode_ZetS6gVl(expr, "cgMoveFromConstRefHelper"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn))) + "))"_fu;
                    };
                };
            };
        };
        fu_STR _2 {};
        return (_2 = cgNode_ZetS6gVl(expr, "cgMoveOrClone"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn), cgMoveOrClone_R9yMJkLd(node.kind, node.type, static_cast<fu_STR&&>(_2), module, ctx, _here, outputs, _current_fn));
    };
}

                                #ifndef DEF_M_RETBOOL
                                #define DEF_M_RETBOOL
inline constexpr int M_RETBOOL = (1 << 1);
                                #endif

static fu_STR blockWrapSubstatement_lvkhMHmN(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgBlock_X39lWkfJ(node, ((M_STMT | M_OPT_CURLIES) | mode), "blockWrapSubstatement"_fu, module, ctx, _here, outputs, _current_fn);
}

static fu_STR blockWrap_unlessIf_vijkYK7N(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if ((node.kind == s_kind_if) || (node.kind == s_kind_and))
        return " "_fu + cgNode_ZetS6gVl(node, "cgIf.blockWrap_unlessIf"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
    else
        return blockWrapSubstatement_lvkhMHmN(node, 0, module, ctx, _here, outputs, _current_fn);

}

static fu_STR cgIf_JRy1tMcC(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& n0 = node.items[0];
    const s_SolvedNode& n1 = node.items[1];
    const s_SolvedNode& n2 = node.items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode_ZetS6gVl(n0, "cgIf[cond]"_fu, (M_RETBOOL | (stmt ? M_PARENS : (*(const int*)fu::NIL))), (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement_lvkhMHmN(n1, 0, module, ctx, _here, outputs, _current_fn) : cgNode_ZetS6gVl(n1, "cgIf[cons]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf_vijkYK7N(n2, module, ctx, _here, outputs, _current_fn) : cgNode_ZetS6gVl(n2, "cgIf[alt]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn)) : fu_STR{});
    if (stmt)
    {
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((outputs._indent + "else"_fu) + alt) : fu_STR{});
    }
    else
        return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;

}

static void cgAndOr_concat_auSC8ikS(fu_STR& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const int mode = (M_RETBOOL | (parens && (items.size() == 1) ? M_PARENS : (*(const int*)fu::NIL)));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const s_SolvedNode& item = items[i];
        fu_STR term = cgNode_ZetS6gVl(item, (x7E_sTZRmMq1("cgAndOr_concat["_fu, fu::i64dec(i)) + "]"_fu), mode, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
        if (is_void_eqpYb5IC(item.type))
            src += (("("_fu + term) + ", 0)"_fu);
        else
            src += term;

    };
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool acceptsBool_abbfyTjm(const s_Type& type)
{
    return isAssignable_zQyU0CZE(type, t_bool, false, false);
}

static fu_STR via_ycCzX0iM(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
    {
        fu_STR _0 {};
        tv.id = (_0 = fu_STR((tv.annot = typeAnnot_coM5xjto(type, 0, module, ctx, _here, outputs, _current_fn))), emitTEMPVAR_PHuaPwZQ(static_cast<fu_STR&&>(_0), tv.ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;
    else if (is_trivial_ChYpFATl(type, ctx, module))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;
    else
        return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;

}

static fu_STR via_tNk83Ppf(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isFieldChain_ikNkD4rO(expr, module, ctx))
    {
        fu_STR trivial = cgNode_ZetS6gVl(expr, "TEMPVAR[fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    }
    else
    {
        if ((expr.kind == s_kind_copy) || (expr.kind == s_kind_move))
        {
            const s_kind kind = expr.kind;
            const s_SolvedNode& expr_1 = only_7ZMqiNoZ(expr.items);
            if (isFieldChain_ikNkD4rO(expr_1, module, ctx))
            {
                fu_STR trivial = cgNode_ZetS6gVl(expr_1, "TEMPVAR[copymov/fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
                return ((trivial + " ? "_fu) + cgMoveOrClone_R9yMJkLd(kind, type, trivial, module, ctx, _here, outputs, _current_fn)) + " : "_fu;
            };
        };
        fu_STR _0 {};
        return (_0 = cgNode_ZetS6gVl(expr, "TEMPVAR[usual]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn), via_ycCzX0iM(tv, type, static_cast<fu_STR&&>(_0), module, ctx, _here, outputs, _current_fn));
    };
}

static fu_STR cgOr_eXjetXix(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Type& type = node.type;
    fu::view<s_SolvedNode> items = node.items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if (!("_fu;
        cgAndOr_concat_auSC8ikS(src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true, module, ctx, _here, outputs, _current_fn);
        src += "))"_fu;
        src += blockWrapSubstatement_lvkhMHmN(items[(items.size() - 1)], 0, module, ctx, _here, outputs, _current_fn);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
        if (acceptsBool_abbfyTjm(type))
            cgAndOr_concat_auSC8ikS(src, " || "_fu, items, true, module, ctx, _here, outputs, _current_fn);
        else
        {
            s_TEMPVAR tv {};
            for (int i = 0; i < (items.size() - 1); i++)
            {
                const s_SolvedNode* _0;
                const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here));
                s_SolvedNode tail { item };
                if (item.kind == s_kind_and)
                {
                    fu::view<s_SolvedNode> items_1 = item.items;
                    const s_SolvedNode* _1;
                    tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here));
                    cgAndOr_concat_auSC8ikS(src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), false, module, ctx, _here, outputs, _current_fn);
                    src += " && "_fu;
                };
                src += via_tNk83Ppf(tv, type, tail, module, ctx, _here, outputs, _current_fn);
            };
            const s_SolvedNode* _2;
            const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here));
            src += cgNode_ZetS6gVl(tail, "cgOr"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu_STR cgAnd_U3H01fXm(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if ("_fu;
        cgAndOr_concat_auSC8ikS(src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true, module, ctx, _here, outputs, _current_fn);
        src += ")"_fu;
        src += blockWrapSubstatement_lvkhMHmN(items[(items.size() - 1)], 0, module, ctx, _here, outputs, _current_fn);
        return /*NRVO*/ src;
    }
    else
    {
        /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
        if (acceptsBool_abbfyTjm(type))
            cgAndOr_concat_auSC8ikS(src, " && "_fu, items, true, module, ctx, _here, outputs, _current_fn);
        else
        {
            s_TEMPVAR tv {};
            if (is_mutref_8RliRHyJ(type, _here, ctx))
            {
                for (int i = 0; i < items.size(); i++)
                {
                    const s_SolvedNode& item = items[i];
                    if (i < (items.size() - 1))
                        src += ("!"_fu + via_tNk83Ppf(tv, type, item, module, ctx, _here, outputs, _current_fn));
                    else
                        src += cgNode_ZetS6gVl(item, (x7E_sTZRmMq1((debug + ".cgAnd[mutref "_fu), fu::i64dec(i)) + "]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);

                };
            }
            else
            {
                const int N = items.size();
                const bool retSecondLast = is_never_eqpYb5IC(items[(N - 1)].type);
                const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
                cgAndOr_concat_auSC8ikS(src, " && "_fu, fu::get_view(items, 0, condEnd), false, module, ctx, _here, outputs, _current_fn);
                if (retSecondLast)
                {
                    if (condEnd)
                        src += " && "_fu;

                    src += ("!"_fu + via_tNk83Ppf(tv, type, items[(N - 2)], module, ctx, _here, outputs, _current_fn));
                    src += cgNode_ZetS6gVl(items[(N - 1)], (debug + ".cgAnd[retSecondLast]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
                }
                else
                {
                    src += (" ? "_fu + cgNode_ZetS6gVl(items[(N - 1)], (debug + ".cgAnd[usual]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn));
                    src += (" : "_fu + cgDefault_G3HxNGaN(type, module, ctx, _here, outputs, _current_fn));
                };
            };
        };
        if (!(mode & M_PARENS))
            src += ")"_fu;

        return /*NRVO*/ src;
    };
}

static fu_STR cgAnd_KNgsZaJ1(const s_SolvedNode& node, const int mode, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgAnd_U3H01fXm(node.items, node.type, mode, debug, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgLetDef_qj2Vy8U6(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!_current_fn.target.index)
    {
        return isExtLinked_VvuQC9lu(GET_EGW2iFNh(node.target, module, ctx)) ? cgGlobal_xVqi1UCF(node.target, module, ctx, _here, outputs, _current_fn) : fu_STR{};
    }
    else
        return cgLet_EkF7nYO6(GET_EGW2iFNh(node.target, module, ctx).solved, false, false, module, ctx, _here, outputs, _current_fn);

}

static fu_STR cgMain_LFIkQ30s(s_Outputs& outputs)
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
            annotateString_JpvcP5X9(outputs);
            src = ((((((((((("\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args))"_fu) + zst) + ";"_fu) + "\n}"_fu);
        };
        src += "\n"_fu;
        return /*NRVO*/ src;
    };
}

static fu_STR collectDedupes_ypKXxOTk(fu_VEC<fu_STR>&& values, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> header, fu::view<char> footer)
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

static fu_STR cgRoot_geQBKnpw(const s_SolvedNode& root, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    int count {};
    fu_STR src = cgStatements_Vkv9eEnw(root.items, count, (*(const fu_STR*)fu::NIL), module, ctx, _here, outputs, _current_fn);
    fu_STR main = cgMain_LFIkQ30s(outputs);
    return (((((((((((((((collectDedupes_ypKXxOTk(fu_VEC<fu_STR>(outputs._libs), "#include "_fu, "\n"_fu, fu::view<char>{}, "\n"_fu) + outputs._tfwd_src) + outputs._ffwd_src) + (outputs._ffwd_live_client ? "\n                                #ifdef fu_HOTSWAP\n"_fu : fu_STR{})) + outputs._ffwd_live_client) + (outputs._ffwd_live_client ? "                                #else\n"_fu : fu_STR{})) + outputs._ffwd_live_nclient) + (outputs._ffwd_live_client ? "                                #endif\n"_fu : fu_STR{})) + outputs._tdef) + collectDedupes_ypKXxOTk(fu_VEC<fu_STR>(outputs._gcc_ignore), "#pragma GCC diagnostic ignored \""_fu, "\"\n"_fu, "#pragma GCC diagnostic push\n#ifdef __clang__\n#pragma GCC diagnostic warning \"-Wunknown-warning-option\"\n#endif\n"_fu, "\n"_fu)) + outputs._top_emits) + (outputs._fdef ? "\n#ifndef fu_NO_fdefs\n"_fu : fu_STR{})) + outputs._fdef) + (outputs._fdef ? "\n#endif\n"_fu : fu_STR{})) + src) + main) + (outputs._gcc_ignore ? "\n#pragma GCC diagnostic pop\n"_fu : fu_STR{});
}

static fu_STR cgFnDef_6lyhcGYT(const s_SolvedNode& fndef, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fndef.target;
    const s_Overload& o = GET_EGW2iFNh(target, module, ctx);
    const s_SolvedNode& n = GET_EGW2iFNh(target, module, ctx).solved;
    if (n && isExtLinked_VvuQC9lu(o))
        ensureFnDef_OKzrNiT8(target, module, ctx, _here, outputs, _current_fn);

    return cgEmpty_yN55i8zq(n, mode, module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_x3Cx3E_D3b1dJ13Cpi
                                #define DEF_x3Cx3E_D3b1dJ13Cpi
inline int x3Cx3E_D3b1dJ13(const s_Helpers& a, const s_Helpers& b)
{

    {
        const int cmp = x3Cx3E_F7KakSWb(a.index, b.index);
        if (cmp)
            return cmp;

    };
    return 0;
}
                                #endif

                                #ifndef DEF_x3Dx3D_D3b1dJ13Cpi
                                #define DEF_x3Dx3D_D3b1dJ13Cpi
inline bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return !x3Cx3E_D3b1dJ13(a, b);
}
                                #endif

static const s_cg_Block& findBlock_cVbG88HC(const s_Helpers& helpers, const s_Context& ctx, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const s_cg_Block& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
            return block;

    };
    fail_AIhs8aVA(x7E_sTZRmMq1("No such block in scope: "_fu, fu::i64dec(helpers.index)), ctx, _here);
}

static bool hasNonIdentifierChars_nlx4uEix(fu::view<char> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const char c = id[i];
        if (!((c == '_') || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9'))))
            return true;

    };
    return false;
}

static fu_STR cgJump_KZMjBwT9(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Helpers& helpers = node.helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    s_cg_Block block { (!use_return ? findBlock_cVbG88HC(helpers, ctx, _here, _current_fn) : (*(const s_cg_Block*)fu::NIL)) };
    const s_SolvedNode& expr = only_7ZMqiNoZ(node.items);
    if ((expr.kind != s_kind_empty) || !is_void_eqpYb5IC(expr.type))
    {
        if (!use_return)
        {
            fu_STR assign = (block.has_val ? (block.name + "_v = "_fu) : fu_STR{});
            fu_STR value = cgNode_ZetS6gVl(expr, "cgJump[val.break]"_fu, (!assign ? M_STMT : (*(const int*)fu::NIL)), (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
            if (block.ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            if (!(assign || hasNonIdentifierChars_nlx4uEix(value)))
                value = (("/* TODO FIX UNUSED VAL "_fu + value) + " */"_fu);

            return (((("{ "_fu + assign) + value) + "; goto "_fu) + block.name) + "; }"_fu;
        }
        else
            return "return "_fu + cgNode_ZetS6gVl(expr, "cgJump[val.return]"_fu, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);

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

static fu_STR cgLoop_6aBvufTK(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
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
    const s_SolvedNode& n_cond = items[LOOP_COND];
    const s_SolvedNode& n_body = items[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
    const s_SolvedNode& n_post = items[LOOP_POST];
    fu_STR init = (n_init ? cgNode_ZetS6gVl(n_init, "cgLoop[init]"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode_ZetS6gVl(n_cond, "cgLoop[cond]"_fu, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode_ZetS6gVl(n_pcnd, "cgLoop[pcnd]"_fu, M_RETBOOL, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn) : fu_STR{});
    fu_STR post = (n_post ? cgNode_ZetS6gVl(n_post, "cgLoop[post]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn) : fu_STR{});
    fu_STR name = x7E_sTZRmMq1("LL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const s_Helpers& helpers = node.helpers;
    _current_fn.can_break = helpers;
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu_STR(name), s_Helpers(helpers), false, false };
    fu_STR body = (n_body ? blockWrapSubstatement_lvkhMHmN(n_body, M_LOOP_BODY, module, ctx, _here, outputs, _current_fn) : fu_STR{});
    const bool labelUsed = fu::has(body, (("goto "_fu + name) + ";"_fu));
    fu_STR breakLabel = (labelUsed ? ((" "_fu + name) + ":;"_fu) : fu_STR{});
    if (pcnd)
    {
        if (init || post || cond)
            fail_AIhs8aVA("TODO extended loop."_fu, ctx, _here);
        else
            return ((((("do"_fu + body) + outputs._indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel;

    }
    else if (init || post || !cond)
        return ((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;
    else
        return ((("while ("_fu + cond) + ")"_fu) + body) + breakLabel;

}

static fu_STR cgTryCatch_qxc3IaRD(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<s_SolvedNode> items = node.items;
    fu_STR tRy = blockWrapSubstatement_lvkhMHmN(items[0], 0, module, ctx, _here, outputs, _current_fn);
    fu_STR err = localID_RDwXodVL(items[1].target, true, module, ctx, _current_fn);
    fu_STR cAtch = blockWrapSubstatement_lvkhMHmN(items[2], 0, module, ctx, _here, outputs, _current_fn);
    return ((((((((((((((((outputs._indent + "try"_fu) + outputs._indent) + "{"_fu) + tRy) + outputs._indent) + "}"_fu) + outputs._indent) + "catch (const std::exception& o_0)"_fu) + outputs._indent) + "{"_fu) + outputs._indent) + "    fu_STR "_fu) + err) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + outputs._indent) + "}\n"_fu;
}

static fu_STR cgDefer_5bEV3k4c(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    include_yf0Pavvk("<fu/defer.h>"_fu, outputs);
    fu_STR which = ((node.value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((node.value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_ZetS6gVl(only_7ZMqiNoZ(node.items), "defer"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn)) + ")"_fu;
}

static fu_STR cgCompilerPragma_3WvVdyga(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> cmd = node.value;
    if ((cmd == "emit"_fu) || (cmd == "input"_fu) || (cmd == "output"_fu) || (cmd == "clock"_fu))
    {
        /*MOV*/ fu_STR result {};
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& node_1 = node.items[i];
            if (node_1.kind == s_kind_str)
                result += node_1.value;
            else if (!type_isZST_P1efM8U7(node_1.type))
                result += cgNode_ZetS6gVl(node_1, "compiler:emit"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);

        };
        add_P2VwYqz5(outputs._gcc_ignore, "-Wmisleading-indentation"_fu);
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
                fail_AIhs8aVA((x7E_sTZRmMq1("compiler link: All arguments must be string literals, got a `"_fu, str_v3b7EcLt(item.kind)) + "`."_fu), ctx, _here);
            else
            {
                const fu_STR& i_1 = item.value;
                add_P2VwYqz5(outputs.HACK_link, i_1);
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
                fail_AIhs8aVA((x7E_sTZRmMq1("compiler link: All arguments must be string literals, got a `"_fu, str_v3b7EcLt(item.kind)) + "`."_fu), ctx, _here);
            else
            {
                const fu_STR& i_1 = item.value;
                add_P2VwYqz5(outputs.HACK_include_dirs, i_1);
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
                fail_AIhs8aVA((x7E_sTZRmMq1("compiler link: All arguments must be string literals, got a `"_fu, str_v3b7EcLt(item.kind)) + "`."_fu), ctx, _here);
            else
            {
                const fu_STR& i_1 = item.value;
                add_P2VwYqz5(outputs.HACK_extra_sources, i_1);
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
                fail_AIhs8aVA((x7E_sTZRmMq1("compiler link: All arguments must be string literals, got a `"_fu, str_v3b7EcLt(item.kind)) + "`."_fu), ctx, _here);
            else
            {
                const fu_STR& i_1 = item.value;
                include_yf0Pavvk((starts_fjBQS6rr(i_1, '<') ? fu_STR(i_1) : (('"' + i_1) + '"')), outputs);
            };
        };
        return fu_STR{};
    }
    else
        BUG_vYytSj38(("Unknown compiler pragma: "_fu + cmd), _here, ctx);

}

static fu_STR cgNode_ZetS6gVl(const s_SolvedNode& node, fu::view<char> debug, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_kind k = (node.kind ? node.kind : fail_AIhs8aVA(("cgNode: No node.kind: "_fu + debug), ctx, _here));
    HERE_bcSKDjer(node.token, _here);
    if (k == s_kind_not)
        return cgNot_XNwElvhc(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_call)
        return cgCall_xHZTUdVv(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_int)
        return cgLiteral_xU6ofrQD(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_real)
        return cgLiteral_xU6ofrQD(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_char)
        return cgCharLiteral_kvdqcZX6(node);
    else if (k == s_kind_str)
        return cgStringLiteral_w87BjJ13(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_arrlit)
        return cgArrayLiteral_fk1ACYhG(node, mode, callarg, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_definit)
        return cgDefinit_aZcqDasx(node, mode, callarg, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_bool)
        return fu_STR(node.value);
    else if (k == s_kind_copy)
        return cgMoveOrClone_gmjA4Jip(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_move)
        return cgMoveOrClone_gmjA4Jip(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_if)
        return cgIf_JRy1tMcC(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_or)
        return cgOr_eXjetXix(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_and)
        return cgAnd_KNgsZaJ1(node, mode, debug, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_letdef)
        return cgLetDef_qj2Vy8U6(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_root)
        return cgRoot_geQBKnpw(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_block)
        return cgBlock_X39lWkfJ(node, mode, "block"_fu, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_argid)
        return cgComma_PCJtHUzR(node.items, "argid"_fu, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_fndef)
        return cgFnDef_6lyhcGYT(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_empty)
        return cgEmpty_yN55i8zq(node, mode, module, ctx, _here, outputs, _current_fn);
    else if (!(mode & M_STMT))
        return cgBlock_X39lWkfJ(node, mode, x7E_sTZRmMq1(str_v3b7EcLt(k), "!M_STMT"_fu), module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_jump)
        return cgJump_KZMjBwT9(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_loop)
        return cgLoop_6aBvufTK(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_try)
        return cgTryCatch_qxc3IaRD(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_defer)
        return cgDefer_5bEV3k4c(node, module, ctx, _here, outputs, _current_fn);
    else if (k == s_kind_pragma)
        return cgCompilerPragma_3WvVdyga(node, module, ctx, _here, outputs, _current_fn);
    else
        fail_AIhs8aVA(x7E_sTZRmMq1("TODO: "_fu, str_v3b7EcLt(k)), ctx, _here);

}

static fu_STR localPath_HqSLm4bO(const fu_STR& path, const s_Module& module)
{
    if (starts_fjBQS6rr(path, '.'))
        return join_rMAWYyxW(dirname_hNtHZ3HE(module.fname), path);
    else
        return fu_STR(path);

}

s_CodegenOutput cpp_codegen_mFMNL4ot(const s_Module& module, const s_Context& ctx)
{
    s_TokenIdx _here {};
    /*MOV*/ s_Outputs outputs {};
    outputs._indent = "\n"_fu;
    s_cg_CurrentFn _current_fn {};
    const s_SolvedNode& root = module.out.solve.root;
    if (root.kind == s_kind_root)
    {
        /*MOV*/ fu_STR src = cgNode_ZetS6gVl(root, "cgRoot"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, outputs, _current_fn);
        for (int i = 0; i < outputs.HACK_extra_sources.size(); i++)
        {
            const fu_STR& orig = outputs.HACK_extra_sources[i];
            /*MOV*/ fu_STR file = localPath_HqSLm4bO(orig, module);
            src += (("\n// "_fu + orig) + "\n"_fu);
            src += read_1HHdbYe3(static_cast<fu_STR&&>(file));
        };
        fu_VEC<fu_STR> _0 {};
        fu_VEC<fu_STR> _1 {};
        return (_0 = fu_VEC<fu_STR>(outputs.HACK_link), _1 = fu_VEC<fu_STR>(outputs.HACK_include_dirs), s_CodegenOutput { static_cast<fu_STR&&>(src), static_cast<fu_VEC<fu_STR>&&>(_0), static_cast<fu_VEC<fu_STR>&&>(_1), static_cast<fu_VEC<fu_STR>&&>(outputs.HACK_extra_sources), fu_VEC<int>{} });
    }
    else
        fail_AIhs8aVA((*(const fu_STR*)fu::NIL), ctx, _here);

}

#endif
