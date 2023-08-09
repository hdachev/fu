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
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_ParserOutput;
struct s_Node;
enum s_kind: fu::u8;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
typedef unsigned s_Flags;
struct s_TokenIdx;
struct s_Token;
struct s_LineColChars;
struct s_Options;
struct s_Lint;
typedef int s_SolverNotes;
typedef fu::u8 s_CGDefects;
typedef fu::u8 s_DevOptions;
enum s_Fixity: fu::u8;
struct s_BINOP;
struct s_Map_QBFRIvrzxzj;
fu::str qKW_bF2G8fJR(fu::view<char>);
fu::str qID_bF2G8fJR(fu::view<char>);
[[noreturn]] fu::never FAIL_lEtuvlMs(const fu::str&, const fu::str&, const s_LineColChars&, fu::view<char>);
fu::str ext_BWbYsL34(const fu::str&);
fu::str dirname_BWbYsL34(const fu::str&);
fu::str join_By06Vz3F(fu::view<char>, const fu::str&);
inline static s_Node parseExpression_5I1QNbGa(int, int, int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
bool hasIdentifierChars_j1t51HgV(fu::view<char>);
static fu::str getAutoName_cZJzYhry(const s_Node&, const fu::str&, const fu::str&, fu::view<s_Token>, int);
static s_Node parseLet_pB1yCfCX(bool, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
static s_Node tryPopTypeAnnot_aPo3e6LN(bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
static s_Node parseUnaryExpression_zPvhGGON(int, int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
static fu::vec<s_Node> parseBlockLike_AZs3ozYB(s_kind, fu::view<char>, bool, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
static s_Node parseStatement_gdgRK4PN(int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
static s_Node parseTypeAnnot_8l9E2qtJ(bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
static s_Node parseFnDecl_mR504p1Z(s_Flags, s_Fixity, s_DeclAsserts, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, const s_Options&, int&, int&, int&, int&, int&, int&, fu::vec<fu::str>&, int&, bool&, bool&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<fu::str>&);
fu::str qBAD_bF2G8fJR(fu::view<char>);

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

                                #ifndef DEF_s_Fixity
                                #define DEF_s_Fixity
enum s_Fixity: fu::u8
{
    s_Fixity_Infix = 1u,
    s_Fixity_Prefix = 2u,
    s_Fixity_Postfix = 3u,
};
                                #endif

                                #ifndef DEF_s_Map_QBFRIvrzxzj
                                #define DEF_s_Map_QBFRIvrzxzj
struct s_Map_QBFRIvrzxzj
{
    fu::vec<fu::str> keys;
    fu::vec<int> vals;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

                                #ifndef DEF_s_BINOP
                                #define DEF_s_BINOP
struct s_BINOP
{
    s_Map_QBFRIvrzxzj PRECEDENCE;
    fu::vec<bool> RIGHT_TO_LEFT;
    explicit operator bool() const noexcept
    {
        return false
            || PRECEDENCE
            || RIGHT_TO_LEFT
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_P_RESET
                                #define DEF_P_RESET
inline constexpr int P_RESET = 1000;
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

                                #ifndef DEF_x3Dx3D_r7bhmB7DrQ0
                                #define DEF_x3Dx3D_r7bhmB7DrQ0
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

                                #ifndef DEF_str_k2hK9UHjiD5
                                #define DEF_str_k2hK9UHjiD5
inline fu::str str_k2hK9UHj(const s_kind n)
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

[[noreturn]] static fu::never fail_QjJC84VE(fu::str&& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_lEtuvlMs(fname, src, token.lcc, reason);
}

static const s_Token& consume_QsJKoP7u(const s_kind kind, fu::view<char> value, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    }
    else
    {
        fail_QjJC84VE(((((("Expected "_fu + qKW_bF2G8fJR(str_k2hK9UHj(kind))) + ((value && (kind == token.kind)) ? (" "_fu + qID_bF2G8fJR(value)) : fu::str{})) + "\n\t     got "_fu) + qKW_bF2G8fJR(str_k2hK9UHj(token.kind))) + ((value && (kind == token.kind)) ? (" "_fu + qID_bF2G8fJR(token.value)) : fu::str{})), fname, src, tokens, _idx);
    };
}

                                #ifndef DEF_x7E_r7bhmB7DrQ0
                                #define DEF_x7E_r7bhmB7DrQ0
inline fu::str x7E_r7bhmB7D(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::str fail_compose_OuakICQ9(fu::str&& reason, fu::view<char> fname, fu::view<s_Token> tokens, const int _idx, const int _loc)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.lcc.line;
    const int c0 = loc.lcc.col;
    const int l1 = here.lcc.line;
    const int c1 = here.lcc.col;
    fu::str addr = ((l1 == l0) ? x7E_r7bhmB7D((x7E_r7bhmB7D("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    return (((fname + " "_fu) + addr) + ":\n\t"_fu) + reason;
}

static void warn_obh9Xt5r(const fu::str& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, const int _idx, const int _loc, fu::vec<fu::str>& warnings)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_QjJC84VE(fu::str(reason), fname, src, tokens, _idx);
    else
        warnings += fail_compose_OuakICQ9(fu::str(reason), fname, tokens, _idx, _loc);

}

static const s_Token& tryConsume_KaE2i7rm(const s_kind kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}

                                #ifndef DEF_starts_1wDddajZEEk
                                #define DEF_starts_1wDddajZEEk
inline bool starts_1wDddajZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

                                #ifndef DEF_has_E59mf3XC9N1
                                #define DEF_has_E59mf3XC9N1
inline bool has_E59mf3XC(fu::view<fu::str> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu::str registerImport_A8vsdgaH(/*MOV*/ fu::str&& value, const fu::str& fname, fu::vec<fu::str>& fuzimports)
{
    if (!ext_BWbYsL34(value))
        value += ".fu"_fu;

    fu::str dir = dirname_BWbYsL34(fname);
    value = (starts_1wDddajZ(value, "."_fu) ? join_By06Vz3F(dir, value) : ((dir + '\v') + value));
    if (!has_E59mf3XC(fuzimports, value))
        fuzimports.push(fu::str(value));

    return static_cast<fu::str&&>(value);
}

static s_Node make_O3NkiiPH(const s_kind kind, const fu::vec<s_Node>& items, const s_Flags flags, const fu::str& value, const s_DeclAsserts asserts, const s_ParseSyntax syntax, const s_TokenIdx& token, const int modid, const int _loc)
{
    return s_Node { kind, asserts, syntax, flags, fu::str(value), fu::vec<s_Node>(items), (token ? s_TokenIdx(token) : s_TokenIdx { modid, _loc }) };
}

static s_Node createCall_8yrU0PMf(const fu::str& id, const s_Flags flags, const fu::vec<s_Node>& args, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_call, args, flags, id, s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _loc);
}

static s_Node createRead_HKYAKX51(const fu::str& id, const s_Flags flags, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, const int _loc)
{
    if ((id == "true"_fu) || (id == "false"_fu))
    {
        return make_O3NkiiPH(s_kind_bool, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        return createCall_8yrU0PMf((id ? id : fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx)), flags, (*(const fu::vec<s_Node>*)fu::NIL), s_ParseSyntax_PS_ID, modid, _loc);
    };
}

                                #ifndef DEF_P_PREFIX_UNARY
                                #define DEF_P_PREFIX_UNARY
inline constexpr int P_PREFIX_UNARY = 1;
                                #endif

                                #ifndef DEF_M_LINT_ENSURE_INDENT
                                #define DEF_M_LINT_ENSURE_INDENT
inline constexpr int M_LINT_ENSURE_INDENT = (1 << 1);
                                #endif

static s_Node createLeaf_y6Lhwj9n(const s_kind kind, const fu::str& value, const int modid, const int _loc)
{
    return make_O3NkiiPH(kind, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

                                #ifndef DEF_grow_if_oob_Az7DoqbhTMb
                                #define DEF_grow_if_oob_Az7DoqbhTMb
inline bool& grow_if_oob_Az7Doqbh(fu::vec<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::vec<fu::str>& l_6_0_yVZijIEo(s_Map_QBFRIvrzxzj& _)
{
    return _.keys;
}

static fu::vec<int>& l_6_1_wmnzD4Sj(s_Map_QBFRIvrzxzj& _)
{
    return _.vals;
}

                                #ifndef DEF_update_6LdaOa0K1Ee
                                #define DEF_update_6LdaOa0K1Ee
inline bool update_6LdaOa0K(const fu::str& item, const int extra, s_Map_QBFRIvrzxzj& _)
{
    int lo = 0;
    int hi = l_6_0_yVZijIEo(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_r7bhmB7D(l_6_0_yVZijIEo(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_wmnzD4Sj(_).mutref(i) = extra;
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_yVZijIEo(_).insert(lo, fu::str(item));
    l_6_1_wmnzD4Sj(_).insert(lo, extra);
    return true;
}
                                #endif

                                #ifndef DEF_set_T6D98AjWDrh
                                #define DEF_set_T6D98AjWDrh
inline bool set_T6D98AjW(s_Map_QBFRIvrzxzj& _, const fu::str& key, const int value)
{
    return update_6LdaOa0K(key, value, _);
}
                                #endif

static void binop_941go0tt(fu::view<fu::str> ops, s_BINOP& out, int& precedence, const bool rightToLeft)
{
    precedence++;
    if (precedence < 64)
    {
        grow_if_oob_Az7Doqbh(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
        for (int i = 0; i < ops.size(); i++)
            set_T6D98AjW(out.PRECEDENCE, ops[i], precedence);

    }
    else
        fu::fail("Assertion failed: precedence < 64"_fu);

}

static s_BINOP setupOperators_J2h3fYmf()
{
    /*MOV*/ s_BINOP out {};
    int precedence = P_PREFIX_UNARY;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_941go0tt((fu::slate<3, fu::str> { "*"_fu, "/"_fu, "%"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<2, fu::str> { "+"_fu, "-"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<2, fu::str> { "<<"_fu, ">>"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<1, fu::str> { "&"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<1, fu::str> { "^"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<1, fu::str> { "|"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<1, fu::str> { "~"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<2, fu::str> { "<=>"_fu, "<>"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<2, fu::str> { "=>"_fu, "->"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<5, fu::str> { "<"_fu, "<="_fu, ">"_fu, ">="_fu, "<=>"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<2, fu::str> { "=="_fu, "!="_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<1, fu::str> { "&&"_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<1, fu::str> { "||"_fu }), out, precedence, rightToLeft);
    rightToLeft = true;
    binop_941go0tt((fu::slate<17, fu::str> { "?"_fu, "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), out, precedence, rightToLeft);
    binop_941go0tt((fu::slate<1, fu::str> { "<|"_fu }), out, precedence, rightToLeft);
    rightToLeft = false;
    binop_941go0tt((fu::slate<1, fu::str> { "|>"_fu }), out, precedence, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1008) = setupOperators_J2h3fYmf();

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

                                #ifndef DEF_has_yDXnIeTy03e
                                #define DEF_has_yDXnIeTy03e
inline bool has_yDXnIeTy(const s_Map_QBFRIvrzxzj& _, fu::view<char> key)
{
    return has_T5fUfc6T(_.keys, key);
}
                                #endif

static const fu::vec<fu::str> PREFIX fu_INIT_PRIORITY(1008) = fu::vec<fu::str> { fu::slate<10, fu::str> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

static void tryParseTypeParamsDecl_Kgz7qc4K(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, fu::vec<fu::str>& _expectedTypeParams)
{
    if (tryConsume_KaE2i7rm(s_kind_op, "!"_fu, tokens, _idx))
    {
        if (tryConsume_KaE2i7rm(s_kind_op, "<"_fu, tokens, _idx))
        {
            bool first = true;
            for (; ; )
            {
                if (tryConsume_KaE2i7rm(s_kind_op, ">"_fu, tokens, _idx))
                    break;
                else
                {
                    if (!first)
                        consume_QsJKoP7u(s_kind_op, ","_fu, fname, src, tokens, _idx);

                    first = false;
                    const fu::str& id = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
                    _expectedTypeParams += fu::str(id);
                };
            };
        }
        else
        {
            const fu::str& id = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
            _expectedTypeParams += fu::str(id);
        };
    };
}

static s_Node createAddrOfFn_9y4ElW5g(const fu::str& name, const s_Flags flags, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_addroffn, (*(const fu::vec<s_Node>*)fu::NIL), flags, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node createLet_asR5Ww5q(const fu::str& id, const s_Node& type, const s_Node& init, const s_Flags flags, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_let, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

                                #ifndef DEF_M_LINT_UNARY_PRECEDENCE
                                #define DEF_M_LINT_UNARY_PRECEDENCE
inline constexpr int M_LINT_UNARY_PRECEDENCE = (1 << 0);
                                #endif

static s_Node miss_GxfQVGJo()
{
    return s_Node{};
}

static void lint_LzYMpa8h(const int mode, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, const int _idx, const int _loc, fu::vec<fu::str>& warnings)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_obh9Xt5r((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), fname, src, tokens, options, _idx, _loc, warnings);

}

static s_Node parseAccessExpression_NC79skII(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc)
{
    _loc = _idx;
    s_Token id { tryConsume_KaE2i7rm(s_kind_id, fu::view<char>{}, tokens, _idx) };
    if (!id)
    {
        consume_QsJKoP7u(s_kind_op, "::"_fu, fname, src, tokens, _idx);
        id = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx);
        _idx -= 2;
    };
    return createCall_8yrU0PMf(id.value, s_Flags_F_ACCESS, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, s_ParseSyntax{}, modid, _loc);
}

static void softComma_mHybwi98(fu::view<char> endop, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, const int _loc, fu::vec<fu::str>& warnings)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_op)
    {
        if (peek.value == ","_fu)
        {
            _idx++;
            return;
        }
        else if (peek.value == endop)
            return;

    };
    if (!((peek.kind == s_kind_str) != (tokens[(_idx - 1)].kind == s_kind_str)))
        warn_obh9Xt5r((("Missing comma before `"_fu + peek.value) + "`."_fu), fname, src, tokens, options, _idx, _loc, warnings);

}

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

                                #ifndef DEF_last_JmX1sOIFCI5
                                #define DEF_last_JmX1sOIFCI5
inline s_Node& last_JmX1sOIF(fu::view_mut<s_Node> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static s_Node createArgID_EvcWwoFv(const fu::str& id, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_argid, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static fu::str getAutoName_cZJzYhry(const s_Node& expr, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if ((expr.kind == s_kind_call) && hasIdentifierChars_j1t51HgV(expr.value))
        return fu::str(expr.value);
    else if (expr.items)
    {
        const int i = (((expr.kind == s_kind_and) && (expr.items.size() - 1)) ? ((expr.kind == s_kind_if) ? 1 : 0) : 0);
        return getAutoName_cZJzYhry(expr.items[i], fname, src, tokens, _idx);
    }
    else
        fail_QjJC84VE("Can't :autoname this expression."_fu, fname, src, tokens, _idx);

}

static s_Flags parseCallArgs_PDP4xB36(fu::view<char> endop, fu::vec<s_Node>& out_args, bool sliceSyntax, const bool experimental_sliceAnnots, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    s_Flags flags {};
    const int col00 = _col0;
    bool first = true;
    for (; ; )
    {
        if (experimental_sliceAnnots && tryConsume_KaE2i7rm(s_kind_op, ";"_fu, tokens, _idx))
        {
            consume_QsJKoP7u(s_kind_op, endop, fname, src, tokens, _idx);
            break;
        }
        else
        {
            if (!first)
            { {
                if (sliceSyntax)
                {
                    const s_Token& peek = tokens[_idx];
                    if ((peek.kind == s_kind_op) && (peek.value == ":"_fu))
                        goto BL_5;

                };
                softComma_mHybwi98(endop, fname, src, tokens, options, _idx, _loc, warnings);
              } BL_5:;
            };
            if (tryConsume_KaE2i7rm(s_kind_op, endop, tokens, _idx))
                break;
            else
            {
                fu::str name {};
                bool autoName = false;
                bool optional = false;
                const s_Token& tok0 = tokens[_idx];
                _col0 = ((tok0.lcc.line > tokens[(_idx - 1)].lcc.line) ? max_AsFD7H8N(tok0.lcc.col, col00) : col00);
                if ((tok0.kind == s_kind_op) && (tok0.value == ":"_fu))
                {
                    autoName = true;
                    _idx += 1;
                    if (sliceSyntax && !first && !(flags & s_Flags_F_NAMED_ARGS))
                    {
                        if (tryConsume_KaE2i7rm(s_kind_op, endop, tokens, _idx))
                        {
                            s_Node& last = last_JmX1sOIF(out_args);
                            last = createArgID_EvcWwoFv("start"_fu, last, s_Flags{}, modid, _loc);
                            flags |= s_Flags_F_NAMED_ARGS;
                            break;
                        };
                    };
                }
                else if ((tok0.kind == s_kind_id) && !sliceSyntax)
                {
                    const s_Token& tok1 = tokens[(_idx + 1)];
                    if (tok1.kind == s_kind_op)
                    {
                        if (tok1.value == ":"_fu)
                        {
                            name = tok0.value;
                            _idx += 2;
                        }
                        else if (tok1.value == "?"_fu)
                        {
                            const s_Token& tok2 = tokens[(_idx + 2)];
                            if ((tok2.kind == s_kind_op) && (tok2.value == ":"_fu))
                            {
                                optional = true;
                                name = tok0.value;
                                _idx += 3;
                            };
                        };
                    };
                };
                /*MOV*/ s_Node expr = parseExpression_5I1QNbGa(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
                if (autoName)
                {
                    if (sliceSyntax)
                    {
                        name = "end"_fu;
                        sliceSyntax = false;
                    }
                    else
                        name = getAutoName_cZJzYhry(expr, fname, src, tokens, _idx);

                };
                if (name)
                    flags |= s_Flags_F_NAMED_ARGS;

                out_args.push((name ? createArgID_EvcWwoFv(name, expr, (optional ? s_Flags_F_OPT_ARG : s_Flags{}), modid, _loc) : static_cast<s_Node&&>(expr)));
                first = false;
            };
        };
    };
    _col0 = col00;
    return flags;
}

static s_Node parseCallExpression_8mu3MhGl(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::vec<s_Node> args {};
    s_Flags _0 {};
    const s_Flags flags = (_0 = expr.flags, (_0 | parseCallArgs_PDP4xB36(")"_fu, args, false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings)));
    if ((expr.kind == s_kind_call) && (flags & s_Flags_F_ACCESS))
    {
        const s_Node* _1;
        const s_Node& head = (*(_1 = &(((expr.items && (expr.items.size() == 1)) ? expr.items[0] : (*(const s_Node*)fu::NIL)))) ? *_1 : fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx));
        args.unshift(s_Node(head));
        return createCall_8yrU0PMf((expr.value ? expr.value : fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx)), ((flags & ~s_Flags_F_ACCESS) | s_Flags_F_METHOD), args, s_ParseSyntax{}, modid, _loc);
    }
    else if ((expr.kind == s_kind_call) && s_ParseSyntax((expr.syntax & s_ParseSyntax_PS_ID)))
    {
        return createCall_8yrU0PMf((expr.value ? expr.value : fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx)), flags, args, s_ParseSyntax((expr.syntax & s_ParseSyntax(~s_ParseSyntax_PS_ID))), modid, _loc);
    }
    else if (expr.kind == s_kind_typeparam)
    {
        return createCall_8yrU0PMf((expr.value ? expr.value : fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx)), flags, args, s_ParseSyntax{}, modid, _loc);
    }
    else
        fail_QjJC84VE("TODO dynamic call"_fu, fname, src, tokens, _idx);

}

static s_Node parseIndexExpression_5w9Gl1Q0(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::vec<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_PDP4xB36("]"_fu, args, true, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    args.unshift(s_Node(expr));
    return createCall_8yrU0PMf("[]"_fu, (argFlags | s_Flags_F_OPERATOR), args, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_get_P713HOyUle5
                                #define DEF_get_P713HOyUle5
inline int get_P713HOyU(fu::view<fu::str> keys, fu::view<char> item, fu::view<int> extras)
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
    return int{};
}
                                #endif

                                #ifndef DEF_get_eybdxG6hJu7
                                #define DEF_get_eybdxG6hJu7
inline int get_eybdxG6h(const s_Map_QBFRIvrzxzj& _, fu::view<char> key)
{
    return get_P713HOyU(_.keys, key, _.vals);
}
                                #endif

static s_Node createIf_V61KsbnO(const s_Node& cond, const s_Node& cons, const s_Node& alt, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_if, fu::vec<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _loc);
}

static s_Node flattenIfSame_WN8eaVvF(const s_kind kind, const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    const s_kind k_left = left.kind;
    const s_kind k_right = right.kind;
    fu::vec<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_O3NkiiPH(kind, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _loc);
}

static s_Node createOr_Yz65IHD0(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_WN8eaVvF(s_kind_or, left, right, syntax, modid, _loc);
}

static s_Node createAnd_kbLBXc1d(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_WN8eaVvF(s_kind_and, left, right, syntax, modid, _loc);
}

static s_Node pipelineRight_GicGlgSb(const s_Node& left, /*MOV*/ s_Node&& right, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (right.kind != s_kind_call)
        fail_QjJC84VE("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _idx);
    else
    {
        if (right.flags & s_Flags_F_METHOD)
            right.items.insert(1, s_Node(left));
        else
        {
            right.items.unshift(s_Node(left));
        };
        return static_cast<s_Node&&>(right);
    };
}

static s_Node pipelineLeft_lg9VKtgz(/*MOV*/ s_Node&& left, const s_Node& right, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (left.kind != s_kind_call)
        fail_QjJC84VE("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _idx);
    else
    {
        left.items.push(s_Node(right));
        left.syntax &= s_ParseSyntax(~s_ParseSyntax_PS_ID);
        return static_cast<s_Node&&>(left);
    };
}

static s_Node typeCheck_7flE1xPv(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_typeassert, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node typeCast_bIdmBS5H(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_typecast, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node tryParseBinary_3gxP8gRI(const s_Node& left, const fu::str& op, const int p1, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_GxfQVGJo();
    else
    {
        _idx++;
        s_Node mid {};
        if (op == "?"_fu)
        {
            mid = parseExpression_5I1QNbGa(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            consume_QsJKoP7u(s_kind_op, ":"_fu, fname, src, tokens, _idx);
        };
        /*MOV*/ s_Node right = parseExpression_5I1QNbGa(p1, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        if (mid)
        {
            return createIf_V61KsbnO(left, mid, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "||"_fu)
        {
            return createOr_Yz65IHD0(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "&&"_fu)
        {
            return createAnd_kbLBXc1d(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else
        {
            if ((left.kind == s_kind_and) || (left.kind == s_kind_or))
            {
                if (!(left.syntax & s_ParseSyntax_PS_PARENS))
                    warn_obh9Xt5r((((x7E_r7bhmB7D("Unparenthesized `"_fu, str_k2hK9UHj(left.kind)) + "` on the left side of an `"_fu) + op) + "`."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            };
            if (op == "|>"_fu)
                return pipelineRight_GicGlgSb(left, static_cast<s_Node&&>(right), fname, src, tokens, _idx);
            else if (op == "<|"_fu)
                return pipelineLeft_lg9VKtgz(s_Node(left), right, fname, src, tokens, _idx);
            else if (op == "->"_fu)
                return typeCheck_7flE1xPv(left, right, modid, _loc);
            else if (op == "=>"_fu)
                return typeCast_bIdmBS5H(left, right, modid, _loc);
            else
            {
                return createCall_8yrU0PMf(op, s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(left), static_cast<s_Node&&>(right) } }, s_ParseSyntax{}, modid, _loc);
            };
        };
    };
}

static const fu::vec<fu::str> POSTFIX fu_INIT_PRIORITY(1008) = fu::vec<fu::str> { fu::slate<3, fu::str> { "++"_fu, "--"_fu, "[]"_fu } };

                                #ifndef DEF_only_HNT2v2R9tlh
                                #define DEF_only_HNT2v2R9tlh
inline const s_Node& only_HNT2v2R9(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createTypeTag_rthUaFQW(const fu::str& value, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_typetag, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseQualifierChain_ODK1DHdp(/*MOV*/ s_Node&& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, fu::vec<fu::str>& fuzimports)
{
    if (expr.kind != s_kind_addroffn)
    {
        if ((expr.kind != s_kind_call) || (expr.items && ((expr.items.size() != 1) || !(expr.flags & s_Flags_F_ACCESS))) || (expr.flags & s_Flags_F_COMPOUND_ID))
        {
            _idx--;
            fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx);
        };
    };
    expr.flags |= s_Flags_F_COMPOUND_ID;
    fu::str path { expr.value };
    for (; ; )
    {
        const fu::str& id = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
        if (!tryConsume_KaE2i7rm(s_kind_op, "::"_fu, tokens, _idx))
        {
            if ((path == "is"_fu) && (expr.items.size() == 1))
            {
                const s_Node& left = only_HNT2v2R9(expr.items);
                s_Node right = createTypeTag_rthUaFQW(id, modid, _loc);
                return typeCheck_7flE1xPv(left, right, modid, _loc);
            }
            else
            {
                path = registerImport_A8vsdgaH(fu::str(path), fname, fuzimports);
                expr.value = ((path + "\t"_fu) + id);
                return static_cast<s_Node&&>(expr);
            };
        }
        else
            path += ("/"_fu + id);

    };
}

static s_Node tryParseExpressionTail_rpAQEDFX(const s_Node& head, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::view<s_Token> _0 {};
    const s_Token& token = (_0 = tokens, static_cast<fu::view<s_Token>&&>(_0)[_idx++]);
    if (token.kind == s_kind_op)
    {
        const fu::str& v = token.value;
        if (v == ";"_fu)
        {
            _idx--;
            return miss_GxfQVGJo();
        }
        else if (v == "."_fu)
        {
            lint_LzYMpa8h(mode, fname, src, tokens, options, _idx, _loc, warnings);
            return parseAccessExpression_NC79skII(head, modid, fname, src, tokens, _idx, _loc);
        }
        else if (v == "("_fu)
        {
            lint_LzYMpa8h(mode, fname, src, tokens, options, _idx, _loc, warnings);
            return parseCallExpression_8mu3MhGl(head, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else if (v == "["_fu)
        {
            lint_LzYMpa8h(mode, fname, src, tokens, options, _idx, _loc, warnings);
            return parseIndexExpression_5w9Gl1Q0(head, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else
        {
            const int p1 = get_eybdxG6h(BINOP.PRECEDENCE, v);
            if (p1)
            {
                _idx--;
                return tryParseBinary_3gxP8gRI(head, v, p1, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (has_E59mf3XC(POSTFIX, v))
            {
                return createCall_8yrU0PMf((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu::str(v)), s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, s_ParseSyntax{}, modid, _loc);
            }
            else if (v == "::"_fu)
            {
                return parseQualifierChain_ODK1DHdp(s_Node(head), modid, fname, src, tokens, _idx, _loc, fuzimports);
            };
        };
    };
    _idx--;
    return miss_GxfQVGJo();
}

inline static s_Node parseExpression_3KzoHcW8(const int p1, const int mode, const s_Node& parseHead, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (!((tokens[_idx].lcc.col >= (_col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_obh9Xt5r(x7E_r7bhmB7D((x7E_r7bhmB7D((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].lcc.col)), fname, src, tokens, options, _idx, _loc, warnings);

    /*MOV*/ s_Node head { parseHead };

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_kind_int) || (head.kind == s_kind_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_rpAQEDFX(head, mode_1, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings)))
        {

            {
                fu::view<s_Token> _0 {};
                const s_Token& t1 = (_0 = tokens, static_cast<fu::view<s_Token>&&>(_0)[(_loc = loc0)]);
                if (!(t1.lcc.col > col00))
                    warn_obh9Xt5r(x7E_r7bhmB7D((x7E_r7bhmB7D((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.lcc.col)), fname, src, tokens, options, _idx, _loc, warnings);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Flags parseLeadingDot_DOBluc9P(fu::vec<s_Node>& out_push_arg_and_body, const fu::str& name, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node singleArg = createLet_asR5Ww5q(name, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), (s_Flags_F_ARG | s_Flags_F_TEMPLATE), modid, _loc);
    int _0 {};
    s_Node _1 {};
    /*MOV*/ s_Node singleExpression = (_0 = _precedence, _1 = (_idx--, createRead_HKYAKX51(name, s_Flags{}, modid, fname, src, tokens, _idx, _loc)), parseExpression_3KzoHcW8(_0, 0, static_cast<s_Node&&>(_1), modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings));
    out_push_arg_and_body.push(static_cast<s_Node&&>(singleArg));
    out_push_arg_and_body.push(s_Node{});
    out_push_arg_and_body.push(static_cast<s_Node&&>(singleExpression));
    return s_Flags_F_TEMPLATE;
}

                                #ifndef DEF_LET_TYPE
                                #define DEF_LET_TYPE
inline constexpr int LET_TYPE = 0;
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

static s_Flags parseArgsDecl_JdLkJr96(fu::vec<s_Node>& outArgs, const s_kind endk, fu::view<char> endv, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    bool first = true;
    s_Flags outFlags {};
    fu::vec<s_Node> implicit {};
    int firstDefaulted = -1;
    _dollarAuto++;
    _TODO_FIX_dollarOk = true;
    const int dollars0 = _dollars.size();
    for (; ; )
    {
        if (tryConsume_KaE2i7rm(endk, endv, tokens, _idx))
            break;
        else
        {
            if (!first)
                consume_QsJKoP7u(s_kind_op, ","_fu, fname, src, tokens, _idx);

            first = false;
            const bool isInline = !!tryConsume_KaE2i7rm(s_kind_id, "inline"_fu, tokens, _idx);
            int insertAt = -1;
            /*MOV*/ s_Node arg = parseLet_pB1yCfCX(true, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            if ((_dollars.size() > dollars0) || (arg.items[LET_TYPE].kind == s_kind_typeunion))
                arg.flags |= s_Flags_F_TEMPLATE;

            if (isInline)
            {
                arg.flags |= s_Flags_F_INLINE;
                outFlags |= s_Flags_F_INLINE;
            };
            if (arg.items[LET_INIT])
            {
                if (arg.flags & s_Flags_F_IMPLICIT)
                    fail_QjJC84VE("TODO default implicit arguments"_fu, fname, src, tokens, _idx);
                else if (firstDefaulted < 0)
                    firstDefaulted = outArgs.size();

            }
            else if ((firstDefaulted >= 0))
            {
                if (!(arg.flags & s_Flags_F_MUSTNAME))
                    fail_QjJC84VE("Non-optional arguments without a bang! cannot follow optional arguments."_fu, fname, src, tokens, _idx);
                else
                {
                    insertAt = firstDefaulted;
                    firstDefaulted++;
                };
            }
            else if (!arg.items[LET_TYPE])
                arg.flags |= s_Flags_F_TEMPLATE;

            arg.flags |= s_Flags_F_ARG;
            outFlags |= (arg.flags & s_Flags_F_TEMPLATE);
            if (arg.flags & s_Flags_F_IMPLICIT)
                implicit.push(static_cast<s_Node&&>(arg));
            else if ((insertAt >= 0))
                outArgs.insert(insertAt, static_cast<s_Node&&>(arg));
            else
                outArgs.push(static_cast<s_Node&&>(arg));

        };
    };
    _dollarAuto--;
    _TODO_FIX_dollarOk = false;
    if (implicit)
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(s_Node(implicit[i]));
;
    return outFlags;
}

                                #ifndef DEF_if_last_HNT2v2R9tlh
                                #define DEF_if_last_HNT2v2R9tlh
inline const s_Node& if_last_HNT2v2R9(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_Node*)fu::NIL);

}
                                #endif

                                #ifndef DEF_last_HNT2v2R9tlh
                                #define DEF_last_HNT2v2R9tlh
inline const s_Node& last_HNT2v2R9(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static s_Node createBlock_ACcU1NnE(fu::vec<s_Node>&& items, const fu::str& label, const int modid, const int _loc)
{
    if (if_last_HNT2v2R9(items).syntax & s_ParseSyntax_PS_DISCARD)
    {
        items += make_O3NkiiPH(s_kind_empty, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, last_HNT2v2R9(items).token, modid, _loc);
    };
    return make_O3NkiiPH(s_kind_block, items, s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseBlock_JKDmvbtI(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::vec<s_Node> _0 {};
    return (_0 = parseBlockLike_AZs3ozYB(s_kind_op, "}"_fu, false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings), createBlock_ACcU1NnE(static_cast<fu::vec<s_Node>&&>(_0), (*(const fu::str*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_4WudXlma(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const fu::str& label = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
    /*MOV*/ s_Node stmt = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if ((stmt.kind == s_kind_loop) || (stmt.kind == s_kind_block))
    {
        if (stmt.value)
            fail_QjJC84VE((((("Label "_fu + qID_bF2G8fJR(label)) + ": statement already labeled as "_fu) + qID_bF2G8fJR(stmt.value)) + "."_fu), fname, src, tokens, _idx);
        else
        {
            stmt.value = label;
            return /*NRVO*/ stmt;
        };
    }
    else
    {
        return createBlock_ACcU1NnE(fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(stmt) } }, label, modid, _loc);
    };
}

static bool softSemi_FQQLnIZv(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, const int _loc, const int _col0, fu::vec<fu::str>& warnings)
{
    const s_Token& peek = tokens[_idx];
    if (peek.kind == s_kind_op)
    {
        if (peek.value == ";"_fu)
        {
            _idx++;
            return true;
        }
        else if ((peek.value == "}"_fu) || (peek.value == ")"_fu))
            return false;

    }
    else if (peek.lcc.col == _col0)
        return false;

    warn_obh9Xt5r((("Missing semicollon before `"_fu + peek.value) + "`."_fu), fname, src, tokens, options, _idx, _loc, warnings);
    return false;
}

static s_Node parseLetStmt_D19rXKnC(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node ret = parseLet_pB1yCfCX(false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return /*NRVO*/ ret;
}

                                #ifndef DEF_M_LAMBDA_STMT_OK
                                #define DEF_M_LAMBDA_STMT_OK
inline constexpr int M_LAMBDA_STMT_OK = (1 << 2);
                                #endif

static s_Node parseExpressionStatement_fyLdgjF9(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node expr = parseExpression_5I1QNbGa(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (tryConsume_KaE2i7rm(s_kind_op, ":"_fu, tokens, _idx))
    {
        if (!(expr.kind == s_kind_call))
            fail_QjJC84VE("Cannot pipeline: expression is not a call."_fu, fname, src, tokens, _idx);
        else
        {
            s_Node right = parseExpression_5I1QNbGa(P_RESET, M_LAMBDA_STMT_OK, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            return pipelineLeft_lg9VKtgz(static_cast<s_Node&&>(expr), right, fname, src, tokens, _idx);
        };
    }
    else
    {
        if (softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings))
            expr.syntax |= s_ParseSyntax_PS_DISCARD;

        return /*NRVO*/ expr;
    };
}

static s_Node parseLetOrExpressionStatement_PevQlYOP(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::view<s_Token> _0 {};
    const s_Token& token = (_0 = tokens, static_cast<fu::view<s_Token>&&>(_0)[_idx++]);
    if ((token.kind == s_kind_id) && (tokens[_idx].kind == s_kind_id))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_D19rXKnC(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        else if (v == "mut"_fu)
        {
            _idx--;
            return parseLetStmt_D19rXKnC(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else if (v == "ref"_fu)
        {
            _idx--;
            return parseLetStmt_D19rXKnC(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else if (v == "implicit"_fu)
        {
            _idx--;
            return parseLetStmt_D19rXKnC(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        };
    };
    _idx--;
    if (!_fnDepth)
    {
        fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx);
    }
    else
        return parseExpressionStatement_fyLdgjF9(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

}

                                #ifndef DEF_only_HTJeFkMmZC7
                                #define DEF_only_HTJeFkMmZC7
inline char only_HTJeFkMm(fu::view<char> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_r7bhmB7D("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createPrefix_CROadCBC(const fu::str& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == s_kind_int) || (expr.kind == s_kind_real)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_HTJeFkMm(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    }
    else if (op == "!"_fu)
    {
        return make_O3NkiiPH(s_kind_not, fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        return createCall_8yrU0PMf(op, s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_ParseSyntax{}, modid, _loc);
    };
}

static s_Node parseIf_3t4rFYM3(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == s_kind_id) && (prev.value == "else"_fu)) ? prev : token);
    const s_Token& nOt = tryConsume_KaE2i7rm(s_kind_op, "!"_fu, tokens, _idx);
    consume_QsJKoP7u(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node cond = parseLetOrExpressionStatement_PevQlYOP(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_QsJKoP7u(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    if (nOt)
        cond = createPrefix_CROadCBC("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    const s_Token& eLse = tryConsume_KaE2i7rm(s_kind_id, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.lcc.line == token_1.lcc.line) || (eLse.lcc.col == token_1.lcc.col)))
        {
            warn_obh9Xt5r((x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.lcc.col)) + ", got "_fu), fu::i64dec(eLse.lcc.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.lcc.line)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);
        };
        s_Node alt = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        return createIf_V61KsbnO(cond, cons, alt, s_ParseSyntax_PS_DISCARD, modid, _loc);
    }
    else
        return createAnd_kbLBXc1d(cond, cons, s_ParseSyntax_PS_DISCARD, modid, _loc);

}

static s_Node parseParens_y5yBU5Ka(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node out = parseExpression_5I1QNbGa(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    out.syntax |= s_ParseSyntax_PS_PARENS;
    consume_QsJKoP7u(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    return /*NRVO*/ out;
}

static s_Node tryParseLoopPreheader_EX4gErCg(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const s_Token& peek = tokens[_idx];
    if ((peek.kind == s_kind_id) && (peek.value == "on"_fu))
    {
        const s_Token& peek_1 = tokens[(_idx + 1)];
        if ((peek_1.kind == s_kind_id) && (peek_1.value == "enter"_fu))
        {
            _idx += 2;
            /*MOV*/ s_Node ret = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            consume_QsJKoP7u(s_kind_id, "then"_fu, fname, src, tokens, _idx);
            return /*NRVO*/ ret;
        };
    };
    return s_Node{};
}

static s_Node createLoop_3cyKjX3y(const s_Node& init, const s_Node& pre_cond, const s_Node& pre, const s_Node& body, const s_Node& post, const s_Node& post_cond, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_loop, fu::vec<s_Node> { fu::slate<6, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(pre), s_Node(body), s_Node(post), s_Node(post_cond) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseFor_sbXjOF53(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    consume_QsJKoP7u(s_kind_op, "("_fu, fname, src, tokens, _idx);
    if (tryConsume_KaE2i7rm(s_kind_id, "fieldname"_fu, tokens, _idx))
    {
        const fu::str& placeholder = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
        consume_QsJKoP7u(s_kind_op, ":"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node type = parseTypeAnnot_8l9E2qtJ(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        consume_QsJKoP7u(s_kind_op, ")"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node body = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        return make_O3NkiiPH(s_kind_forfieldsof, fu::vec<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(type), static_cast<s_Node&&>(body) } }, s_Flags{}, placeholder, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        s_Node init = (!tryConsume_KaE2i7rm(s_kind_op, ";"_fu, tokens, _idx) ? parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Node{});
        if (init && (init.kind != s_kind_let))
            fail_QjJC84VE((x7E_r7bhmB7D("`for` expects a `let` statement, got a `"_fu, str_k2hK9UHj(init.kind)) + "`."_fu), fname, src, tokens, _idx);
        else
        {
            s_Node pre_cond = (!tryConsume_KaE2i7rm(s_kind_op, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_PevQlYOP(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Node{});
            const s_Token& token = tokens[_idx];
            s_Node post = (!((token.kind == s_kind_op) && (token.value == ")"_fu)) ? parseParens_y5yBU5Ka(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : (consume_QsJKoP7u(s_kind_op, ")"_fu, fname, src, tokens, _idx), s_Node{}));
            s_Node pre = tryParseLoopPreheader_EX4gErCg(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            s_Node body = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            return createLoop_3cyKjX3y(init, pre_cond, pre, body, post, (*(const s_Node*)fu::NIL), modid, _loc);
        };
    };
}

static s_Node parseWhile_mtGEH3md(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    consume_QsJKoP7u(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node pre_cond = parseLetOrExpressionStatement_PevQlYOP(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_QsJKoP7u(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    s_Node body = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    return createLoop_3cyKjX3y((*(const s_Node*)fu::NIL), pre_cond, (*(const s_Node*)fu::NIL), body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_K3MVxrXy(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    s_Node body = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_QsJKoP7u(s_kind_id, "while"_fu, fname, src, tokens, _idx);
    consume_QsJKoP7u(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node post_cond = parseLetOrExpressionStatement_PevQlYOP(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    consume_QsJKoP7u(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return createLoop_3cyKjX3y((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, (*(const s_Node*)fu::NIL), post_cond, modid, _loc);
}

static s_Node parseJump_WM1OxvzW(const s_kind kind, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (_fnDepth > 0)
    {
        const fu::str& label = (tryConsume_KaE2i7rm(s_kind_op, ":"_fu, tokens, _idx) ? consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value : (*(const fu::str*)fu::NIL));
        /*MOV*/ s_Node expr {};
        if (!tryConsume_KaE2i7rm(s_kind_op, ";"_fu, tokens, _idx))
        {
            expr = parseExpression_5I1QNbGa(P_RESET, M_LINT_ENSURE_INDENT, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings);
        };
        return make_O3NkiiPH(kind, (expr ? fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } } : fu::vec<s_Node>{}), s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx);
    };
}

static s_Node parseCatchErrvar_derQXy5f(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc)
{
    const fu::str& id = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
    return createLet_asR5Ww5q(id, createRead_HKYAKX51("string"_fu, s_Flags{}, modid, fname, src, tokens, _idx, _loc), (*(const s_Node*)fu::NIL), s_Flags{}, modid, _loc);
}

static s_Node parseTryCatch_WWmiiRys(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (_fnDepth > 0)
    {
        /*MOV*/ s_Node tRy = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        consume_QsJKoP7u(s_kind_id, "catch"_fu, fname, src, tokens, _idx);
        consume_QsJKoP7u(s_kind_op, "("_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node err = parseCatchErrvar_derQXy5f(modid, fname, src, tokens, _idx, _loc);
        consume_QsJKoP7u(s_kind_op, ")"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node cAtch = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        return make_O3NkiiPH(s_kind_try, fu::vec<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(tRy), static_cast<s_Node&&>(err), static_cast<s_Node&&>(cAtch) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx);
    };
}

inline static s_Flags l_26_1_J340g2xM(s_Node& item)
{
    if (item.kind == s_kind_let)
        return (item.flags |= s_Flags_F_PREDICATE);
    else
    {
        return s_Flags{};
    };
}

                                #ifndef DEF_each_IDOV784ZAR0
                                #define DEF_each_IDOV784ZAR0
inline void each_IDOV784Z(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
        l_26_1_J340g2xM(a.mutref(i));

}
                                #endif

static s_Node parseStructDecl_H5wRE0Ow(const s_kind kind, const s_Flags flags, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const fu::str& name = tryConsume_KaE2i7rm(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    consume_QsJKoP7u(s_kind_op, "{"_fu, fname, src, tokens, _idx);
    fu::vec<s_Node> items = parseBlockLike_AZs3ozYB(s_kind_op, "}"_fu, true, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    { {
        for (int i = 0; i < items.size(); i++)
        {
            const s_Node& item = items[i];
            if ((item.kind == s_kind_let) && (item.flags & s_Flags_F_PREDICATE))
                goto BL_1;

        };
        each_IDOV784Z(items);
      } BL_1:;
    };
    return make_O3NkiiPH(kind, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node{}, make_O3NkiiPH(s_kind_members, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc) } }, flags, name, asserts, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseUnwrap_PQC9bRCz(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node stmt = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (stmt.kind == s_kind_block)
    {
        stmt.items += make_O3NkiiPH(s_kind_unwrap, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
        return /*NRVO*/ stmt;
    }
    else
        fail_QjJC84VE((("Unwrap only works for blocks, this is a "_fu + qKW_bF2G8fJR(str_k2hK9UHj(stmt.kind))) + "."_fu), fname, src, tokens, _idx);

}

static s_Node parseTypedef_ibgIuPau(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const fu::str& name = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
    consume_QsJKoP7u(s_kind_op, "="_fu, fname, src, tokens, _idx);
    /*MOV*/ s_Node annot = parseTypeAnnot_8l9E2qtJ(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return make_O3NkiiPH(s_kind_typedef, fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(annot) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static void set_PUB_PViMrakm(s_Flags& flags, fu::view<char> extra, const bool autopub_ok, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, bool& _autopub)
{
    if (flags & s_Flags_F_SHADOW)
        fail_QjJC84VE((((("Cannot "_fu + qBAD_bF2G8fJR("pub"_fu)) + " a "_fu) + qKW_bF2G8fJR("shadow"_fu)) + (extra ? (": "_fu + extra) : "."_fu)), fname, src, tokens, _idx);
    else
    {
        flags |= s_Flags_F_PUB;
        if (!autopub_ok)
            _autopub = false;

    };
}

static s_Node parsePub_E2JD7boL(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (_fnDepth)
        fail_QjJC84VE((((("Cannot "_fu + qBAD_bF2G8fJR("pub"_fu)) + " from within a "_fu) + qKW_bF2G8fJR("fn"_fu)) + "."_fu), fname, src, tokens, _idx);
    else
    {
        /*MOV*/ s_Node out = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        set_PUB_PViMrakm(out.flags, fu::view<char>{}, (out.kind == s_kind_import), fname, src, tokens, _idx, _autopub);
        return /*NRVO*/ out;
    };
}

static s_Node parseShadow_g7zPdlJo(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node out = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (out.flags & s_Flags_F_PUB)
        fail_QjJC84VE((((("Cannot "_fu + qBAD_bF2G8fJR("shadow"_fu)) + " a "_fu) + qKW_bF2G8fJR("pub"_fu)) + "."_fu), fname, src, tokens, _idx);
    else
    {
        out.flags |= s_Flags_F_SHADOW;
        return /*NRVO*/ out;
    };
}

static s_Node parseUsing_hh8HxI9f(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node out = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if (out.kind == s_kind_fn)
        out.flags |= s_Flags_F_CONVERSION;
    else if (out.kind == s_kind_let)
        out.flags |= s_Flags_F_USING;
    else
        fail_QjJC84VE((qBAD_bF2G8fJR("using"_fu) + " cannot be used here."_fu), fname, src, tokens, _idx);

    if (out.flags & s_Flags_F_OPERATOR)
        fail_QjJC84VE((qBAD_bF2G8fJR("using"_fu) + " cannot be used on operator functions."_fu), fname, src, tokens, _idx);
    else
        return /*NRVO*/ out;

}

static s_Node parseLax_GsXRLnrt(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node out = parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    if ((out.kind == s_kind_let) || (out.kind == s_kind_fn))
    {
        out.flags |= s_Flags_F_LAX;
        return /*NRVO*/ out;
    }
    else
        fail_QjJC84VE((qBAD_bF2G8fJR("lax"_fu) + " cannot be used here."_fu), fname, src, tokens, _idx);

}

static s_Node parseImport_m67LhM6n(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, const int _loc, const int _col0, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::str value { tryConsume_KaE2i7rm(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (value)
    {
        while (tryConsume_KaE2i7rm(s_kind_op, "::"_fu, tokens, _idx))
        {
            value += ("/"_fu + consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value);
        };
    }
    else
    {
        value = consume_QsJKoP7u(s_kind_str, fu::view<char>{}, fname, src, tokens, _idx).value;
    };
    softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    value = registerImport_A8vsdgaH(fu::str(value), fname, fuzimports);
    return make_O3NkiiPH(s_kind_import, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

                                #ifndef DEF_x21x3D_r7bhmB7DrQ0
                                #define DEF_x21x3D_r7bhmB7DrQ0
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_r7bhmB7D(a, b);
}
                                #endif

static s_Node parseCompilerPragma_svsVcavR(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const fu::str& value = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
    fu::vec<s_Node> items {};
    if (value != "break"_fu)
    {
        consume_QsJKoP7u(s_kind_op, "("_fu, fname, src, tokens, _idx);
        parseCallArgs_PDP4xB36(")"_fu, items, false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    };
    s_ParseSyntax _0 {};
    return (_0 = (softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings) ? s_ParseSyntax_PS_DISCARD : s_ParseSyntax{}), make_O3NkiiPH(s_kind_pragma, items, s_Flags{}, value, s_DeclAsserts{}, _0, s_TokenIdx{}, modid, _loc));
}

static s_Node parseFixityDecl_nVYeSalg(const s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    consume_QsJKoP7u(s_kind_id, "fn"_fu, fname, src, tokens, _idx);
    return parseFnDecl_mR504p1Z(flags, fixity, asserts, expr, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseOperatorDecl_LZ6Jd79V(const s_Fixity fixity, const s_Flags flags, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (fixity)
    {
        return parseFixityDecl_nVYeSalg(flags, fixity, s_DeclAsserts{}, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    }
    else
        fail_QjJC84VE("Falsy fixity."_fu, fname, src, tokens, _idx);

}

static s_Node parseInlineDecl_0basNOcd(s_Flags flags, const s_Flags F, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    flags |= F;
    fu::view<char> v = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
    if (v == "infix"_fu)
        return parseOperatorDecl_LZ6Jd79V(s_Fixity_Infix, flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else if (v == "prefix"_fu)
        return parseOperatorDecl_LZ6Jd79V(s_Fixity_Prefix, flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else if (v == "postfix"_fu)
        return parseOperatorDecl_LZ6Jd79V(s_Fixity_Postfix, flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
    {
        _idx--;
        return parseFixityDecl_nVYeSalg(flags, s_Fixity{}, asserts, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    };
}

static s_Node parseNoInlineDecl_ilcf4pYa(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    return parseInlineDecl_0basNOcd(s_Flags{}, s_Flags{}, s_DeclAsserts_A_NOINLINE, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parsePrimDecl_ozuHxmVQ(const s_kind kind, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const fu::str& name = tryConsume_KaE2i7rm(s_kind_id, fu::view<char>{}, tokens, _idx).value;
    /*MOV*/ s_Node annot = tryPopTypeAnnot_aPo3e6LN(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    fu::vec<s_Node> items = (tryConsume_KaE2i7rm(s_kind_op, "{"_fu, tokens, _idx) ? parseBlockLike_AZs3ozYB(s_kind_op, "}"_fu, false, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : fu::vec<s_Node>{});
    if ((kind != s_kind_enum) && (kind != s_kind_flags))
    {
        if (!(annot))
            fail_QjJC84VE((qKW_bF2G8fJR("primitive"_fu) + " declarations require a base type annotation."_fu), fname, src, tokens, _idx);

    };
    return make_O3NkiiPH(kind, fu::vec<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(annot), (items ? make_O3NkiiPH(s_kind_members, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc) : s_Node{}) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static void add_ks9mKu7n(const s_DeclAsserts assert, s_DeclAsserts& asserts, fu::view<char> v, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (asserts & assert)
        fail_QjJC84VE(("Dulicate assertion: "_fu + qKW_bF2G8fJR(v)), fname, src, tokens, _idx);
    else
        asserts |= assert;

}

static void add_COCPbG7S(const s_Flags flag, s_Flags& flags, fu::view<char> v, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (flags & flag)
    {
        fail_QjJC84VE(("Duplicate qualifier: "_fu + qKW_bF2G8fJR(v)), fname, src, tokens, _idx);
    }
    else
        flags |= flag;

}

static s_Node parseExoticDecl_blW3gu3H(s_Flags flags, s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    for (; ; )
    {
        fu::view<char> v = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
        if (v == "pure"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_PURE, asserts, v, fname, src, tokens, _idx);
        else if (v == "purectx"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_PURE_CTX, asserts, v, fname, src, tokens, _idx);
        else if (v == "purefx"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_PURE_FX, asserts, v, fname, src, tokens, _idx);
        else if (v == "novec"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_NOVEC, asserts, v, fname, src, tokens, _idx);
        else if (v == "noflow"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_NOFLOW, asserts, v, fname, src, tokens, _idx);
        else if (v == "nothrow"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_NOTHROW, asserts, v, fname, src, tokens, _idx);
        else if (v == "nocrash"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_NOCRASH, asserts, v, fname, src, tokens, _idx);
        else if (v == "noio"_fu)
            add_ks9mKu7n(s_DeclAsserts_A_NOIO, asserts, v, fname, src, tokens, _idx);
        else if (v == "extern"_fu)
            add_COCPbG7S(s_Flags_F_EXTERN, flags, v, fname, src, tokens, _idx);
        else if (v == "hotswap"_fu)
            add_COCPbG7S(s_Flags_F_HOTSWAP, flags, v, fname, src, tokens, _idx);
        else if (v == "fn"_fu)
        {
            _idx--;
            return parseInlineDecl_0basNOcd(s_Flags{}, flags, asserts, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else
        {
            fail_QjJC84VE(("Unknown qualifier: "_fu + qKW_bF2G8fJR(v)), fname, src, tokens, _idx);
        };
    };
}

static s_Node parseNoCopy_OKGy7cn6(const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    consume_QsJKoP7u(s_kind_id, "struct"_fu, fname, src, tokens, _idx);
    return parseStructDecl_H5wRE0Ow(s_kind_struct, s_Flags{}, asserts, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseStatement_gdgRK4PN(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    fu::view<s_Token> _0 {};
    const s_Token* _1;
    const s_Token& token = (*(_1 = &((_0 = tokens, static_cast<fu::view<s_Token>&&>(_0)[(_loc = _idx++)]))) ? *_1 : fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx));
    if (token.kind == s_kind_op)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_JKDmvbtI(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        else if (v == ":"_fu)
            return parseLabelledStatement_4WudXlma(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    }
    else if (token.kind == s_kind_id)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_3t4rFYM3(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "for"_fu)
                return parseFor_sbXjOF53(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "while"_fu)
                return parseWhile_mtGEH3md(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "do"_fu)
                return parseDoWhile_K3MVxrXy(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "return"_fu)
                return parseJump_WM1OxvzW(s_kind_return, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "break"_fu)
                return parseJump_WM1OxvzW(s_kind_break, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "continue"_fu)
                return parseJump_WM1OxvzW(s_kind_continue, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "try"_fu)
                return parseTryCatch_WWmiiRys(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        };
        if ((peek.kind == s_kind_op) && (peek.value == "{"_fu))
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_H5wRE0Ow(s_kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_H5wRE0Ow(s_kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "unwrap"_fu)
                return parseUnwrap_PQC9bRCz(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        };
        if ((v == "fn"_fu) && ((peek.kind == s_kind_id) || !_fnDepth))
        {
            return parseFnDecl_mR504p1Z(s_Flags{}, s_Fixity{}, s_DeclAsserts{}, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        }
        else if (peek.kind == s_kind_id)
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_H5wRE0Ow(s_kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_H5wRE0Ow(s_kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "type"_fu)
                return parseTypedef_ibgIuPau(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "pub"_fu)
                return parsePub_E2JD7boL(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "shadow"_fu)
                return parseShadow_g7zPdlJo(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "using"_fu)
                return parseUsing_hh8HxI9f(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "lax"_fu)
                return parseLax_GsXRLnrt(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "import"_fu)
                return parseImport_m67LhM6n(modid, fname, src, tokens, options, _idx, _loc, _col0, fuzimports, warnings);
            else if (v == "pragma"_fu)
                return parseCompilerPragma_svsVcavR(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "inline"_fu)
            {
                return parseInlineDecl_0basNOcd(s_Flags{}, s_Flags_F_INLINE, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "noinline"_fu)
                return parseNoInlineDecl_ilcf4pYa(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "infix"_fu)
            {
                return parseOperatorDecl_LZ6Jd79V(s_Fixity_Infix, s_Flags{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "prefix"_fu)
            {
                return parseOperatorDecl_LZ6Jd79V(s_Fixity_Prefix, s_Flags{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "postfix"_fu)
            {
                return parseOperatorDecl_LZ6Jd79V(s_Fixity_Postfix, s_Flags{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "primitive"_fu)
                return parsePrimDecl_ozuHxmVQ(s_kind_primitive, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "flags"_fu)
                return parsePrimDecl_ozuHxmVQ(s_kind_flags, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "enum"_fu)
                return parsePrimDecl_ozuHxmVQ(s_kind_enum, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "pure"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_PURE, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "purectx"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_PURE_CTX, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "purefx"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_PURE_FX, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "novec"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_NOVEC, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "noflow"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_NOFLOW, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "nothrow"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_NOTHROW, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "nocrash"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_NOCRASH, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "noio"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_NOIO, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "fast"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags{}, s_DeclAsserts_A_FAST, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "nocopy"_fu)
                return parseNoCopy_OKGy7cn6(s_DeclAsserts_A_NOCOPY, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "trivial"_fu)
                return parseNoCopy_OKGy7cn6(s_DeclAsserts_A_TRIVIAL, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "extern"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags_F_EXTERN, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            }
            else if (v == "hotswap"_fu)
            {
                return parseExoticDecl_blW3gu3H(s_Flags_F_HOTSWAP, s_DeclAsserts{}, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            };
        };
    };
    _idx--;
    return parseLetOrExpressionStatement_PevQlYOP(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseFnBodyBranch_RnNiSnOx(const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    tryConsume_KaE2i7rm(s_kind_op, "="_fu, tokens, _idx);
    if (expr)
        return parseExpression_5I1QNbGa(_precedence, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
        return parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

}

static void parseBranch_PlDDNayc(const bool noCond, fu::vec<s_Node>& branches, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    _TODO_FIX_dollarOk = true;
    /*MOV*/ s_Node cond = (!noCond ? parseUnaryExpression_zPvhGGON(0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Node{});
    _TODO_FIX_dollarOk = false;
    /*MOV*/ s_Node type = tryPopTypeAnnot_aPo3e6LN(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    /*MOV*/ s_Node cons = parseFnBodyBranch_RnNiSnOx(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    branches.push(make_O3NkiiPH(s_kind_fnbranch, fu::vec<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(cond), static_cast<s_Node&&>(type), static_cast<s_Node&&>(cons) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc));
}

static s_Flags parseFnBodyOrPattern_MiVyD8pl(fu::vec<s_Node>& out_push_body, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const s_Flags flags {};
    /*MOV*/ s_Node body {};
    if (!expr && tryConsume_KaE2i7rm(s_kind_id, "case"_fu, tokens, _idx))
    {
        fu::vec<s_Node> branches {};
        do
            parseBranch_PlDDNayc(false, branches, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        while (tryConsume_KaE2i7rm(s_kind_id, "case"_fu, tokens, _idx));
        if (tryConsume_KaE2i7rm(s_kind_id, "default"_fu, tokens, _idx))
            parseBranch_PlDDNayc(true, branches, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        body = make_O3NkiiPH(s_kind_pattern, branches, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
        body = parseFnBodyBranch_RnNiSnOx(expr, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    out_push_body.push(static_cast<s_Node&&>(body));
    return flags;
}

static s_Node parseFnDecl_cont_P7yy58pa(const fu::str& name, s_Flags flags, const s_DeclAsserts asserts, const bool expr, const bool leadingDot, fu::view<char> endv, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::vec<s_Node> items {};
    _fnDepth++;
    const int dollars0 = _dollars.size();
    const bool dollarsOk0 = _TODO_FIX_dollarOk;
    fu_DEFER(
    {
        _fnDepth--;
        _dollars.shrink(dollars0);
        _TODO_FIX_dollarOk = dollarsOk0;
    });
    if (leadingDot)
        flags |= parseLeadingDot_DOBluc9P(items, name, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
    {
        flags |= (endv ? parseArgsDecl_JdLkJr96(items, s_kind_op, endv, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : s_Flags{});
        /*MOV*/ s_Node type = tryPopTypeAnnot_aPo3e6LN(false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        const int retIdx = items.size();
        items.push(s_Node(type));
        flags |= parseFnBodyOrPattern_MiVyD8pl(items, expr, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        if ((name == "main"_fu) && (_fnDepth == 1))
        {
            if (!type)
            {
                items.mutref(retIdx) = static_cast<s_Node&&>((type = createRead_HKYAKX51("i32"_fu, s_Flags{}, modid, fname, src, tokens, _idx, _loc)));
            }
            else if ((type.kind != s_kind_call) || (type.value != "i32"_fu) || type.items.size())
                fail_QjJC84VE("fn main() must return i32."_fu, fname, src, tokens, _idx);

            set_PUB_PViMrakm(flags, fu::view<char>{}, false, fname, src, tokens, _idx, _autopub);
            flags |= s_Flags_F_EXTERN;
        };
        if (_dollars.size() > dollars0)
            flags |= s_Flags_F_TEMPLATE;

    };
    return make_O3NkiiPH(s_kind_fn, items, flags, name, asserts, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseFnDecl_mR504p1Z(s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const int loc0 = _loc;
    _loc = _idx;
    fu_DEFER(_loc = loc0);
    fu::str name { tryConsume_KaE2i7rm(s_kind_id, fu::view<char>{}, tokens, _idx).value };
    if (!name)
    {
        name = consume_QsJKoP7u(s_kind_op, fu::view<char>{}, fname, src, tokens, _idx).value;
        if (fixity == s_Fixity_Postfix)
        {
            if ((name == "++"_fu) || (name == "--"_fu))
                name = ("postfix"_fu + name);
            else
                fail_QjJC84VE((("No such postfix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        }
        else if (fixity == s_Fixity_Infix)
        {
            if (!(has_yDXnIeTy(BINOP.PRECEDENCE, name)))
                fail_QjJC84VE((("No such infix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        }
        else if (fixity == s_Fixity_Prefix)
        {
            if (!(has_E59mf3XC(PREFIX, name)))
                fail_QjJC84VE((("No such prefix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        };
        flags |= s_Flags_F_OPERATOR;
    }
    else if ((flags & s_Flags_F_OPERATOR) || fixity)
        fail_QjJC84VE((("Not an operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

    fu::vec<fu::str> expectedTypedParams0 {};
    std::swap(expectedTypedParams0, _expectedTypeParams);
    fu_DEFER(std::swap(expectedTypedParams0, _expectedTypeParams));
    tryParseTypeParamsDecl_Kgz7qc4K(fname, src, tokens, _idx, _expectedTypeParams);
    fu::str endv = (tryConsume_KaE2i7rm(s_kind_op, "("_fu, tokens, _idx) ? ")"_fu : fu::str{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_9y4ElW5g(name, flags, modid, _loc);
        else
            consume_QsJKoP7u(s_kind_op, "="_fu, fname, src, tokens, _idx);

    };
    return parseFnDecl_cont_P7yy58pa(name, flags, asserts, expr, false, endv, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node createTypeParam_RCFhRMDS(const fu::str& value, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, const int _loc, const int _dollarAuto, fu::vec<fu::str>& _dollars, const bool _TODO_FIX_dollarOk)
{
    if (!_TODO_FIX_dollarOk)
    {
        return createRead_HKYAKX51(value, s_Flags{}, modid, fname, src, tokens, _idx, _loc);
    }
    else
    {
        if (!has_E59mf3XC(_dollars, value) && _dollarAuto)
            _dollars.push(fu::str(value));

        return make_O3NkiiPH(s_kind_typeparam, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    };
}

static s_Node createArrayLiteral_oULFHKhq(const s_Flags argFlags, const fu::vec<s_Node>& items, const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_arrlit, items, argFlags, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseArrayLiteral_E22FdRFD(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::vec<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_PDP4xB36("]"_fu, args, false, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    return createArrayLiteral_oULFHKhq(argFlags, args, modid, _loc);
}

static s_Node parseTypeParam_A82wrYOO(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, const int _dollarAuto, fu::vec<fu::str>& _dollars, const bool _TODO_FIX_dollarOk)
{
    fu::str value = ("$"_fu + consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value);
    return createTypeParam_RCFhRMDS(value, modid, fname, src, tokens, _idx, _loc, _dollarAuto, _dollars, _TODO_FIX_dollarOk);
}

static s_Node parseLambda_jeB7IQYa(const bool noClosingPipe, const bool leadingDot, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_obh9Xt5r("Unparenthesized `|| lambda` within a binary expression."_fu, fname, src, tokens, options, _idx, _loc, warnings);

    fu::str _0 {};
    fu::str name = (_0 = (x7E_r7bhmB7D("l_"_fu, fu::i64dec(modid)) + "_"_fu), x7E_r7bhmB7D(static_cast<fu::str&&>(_0), fu::i64dec(_anonFns++)));
    const s_Flags flags = (s_Flags_F_LAX | s_Flags_F_LAMBDA);
    return parseFnDecl_cont_P7yy58pa(name, flags, s_DeclAsserts{}, !(mode & M_LAMBDA_STMT_OK), leadingDot, (!noClosingPipe ? "|"_fu : fu::str{}), modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node createDefinit_K3ZxIoDY(const int modid, const int _loc)
{
    return make_O3NkiiPH(s_kind_definit, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parsePrefix_66Bn2ziT(fu::str&& op, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (has_E59mf3XC(PREFIX, op))
    {
        if ((op == "&"_fu) && tryConsume_KaE2i7rm(s_kind_id, "mut"_fu, tokens, _idx))
            op = "&mut"_fu;

        const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? M_LINT_UNARY_PRECEDENCE : 0);
        return createPrefix_CROadCBC(op, parseUnaryExpression_zPvhGGON(mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings), modid, _loc);
    }
    else
    {
        _idx--;
        fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx);
    };
}

static s_Node parseExpressionHead_j6onU2WL(const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    fu::view<s_Token> _0 {};
    const s_Token& token = (_0 = tokens, static_cast<fu::view<s_Token>&&>(_0)[_idx++]);

    {
        const s_kind k = token.kind;
        const fu::str& v = token.value;
        if ((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_str) || (k == s_kind_char))
            return createLeaf_y6Lhwj9n(k, v, modid, _loc);
        else if (k == s_kind_id)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == s_kind_id)
            {
                if (v == "fn"_fu)
                {
                    return parseFnDecl_mR504p1Z(s_Flags{}, s_Fixity{}, s_DeclAsserts{}, true, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
                };
            };
            if (_TODO_FIX_dollarOk && has_E59mf3XC(_expectedTypeParams, v))
                return createTypeParam_RCFhRMDS(v, modid, fname, src, tokens, _idx, _loc, _dollarAuto, _dollars, _TODO_FIX_dollarOk);
            else
            {
                return createRead_HKYAKX51(v, s_Flags{}, modid, fname, src, tokens, _idx, _loc);
            };
        }
        else if (k == s_kind_op)
        {
            if (v == "("_fu)
                return parseParens_y5yBU5Ka(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "{"_fu)
                return parseBlock_JKDmvbtI(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "["_fu)
                return parseArrayLiteral_E22FdRFD(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "$"_fu)
                return parseTypeParam_A82wrYOO(modid, fname, src, tokens, _idx, _loc, _dollarAuto, _dollars, _TODO_FIX_dollarOk);
            else if (v == "|"_fu)
                return parseLambda_jeB7IQYa(false, false, mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "||"_fu)
                return parseLambda_jeB7IQYa(true, false, mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "."_fu)
                return parseLambda_jeB7IQYa(true, true, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
            else if (v == "[]"_fu)
                return createDefinit_K3ZxIoDY(modid, _loc);
            else if (v == "::"_fu)
            {
                const fu::str& id = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
                _idx--;
                return parseQualifierChain_ODK1DHdp(createRead_HKYAKX51(id, s_Flags{}, modid, fname, src, tokens, _idx, _loc), modid, fname, src, tokens, _idx, _loc, fuzimports);
            }
            else
                return parsePrefix_66Bn2ziT(fu::str(v), modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

        };
    };
    _idx--;
    fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx);
}

inline static s_Node parseExpression_5I1QNbGa(const int p1, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (!((tokens[_idx].lcc.col >= (_col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_obh9Xt5r(x7E_r7bhmB7D((x7E_r7bhmB7D((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].lcc.col)), fname, src, tokens, options, _idx, _loc, warnings);

    /*MOV*/ s_Node head = parseExpressionHead_j6onU2WL(mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);

    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_kind_int) || (head.kind == s_kind_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_rpAQEDFX(head, mode_1, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings)))
        {

            {
                fu::view<s_Token> _0 {};
                const s_Token& t1 = (_0 = tokens, static_cast<fu::view<s_Token>&&>(_0)[(_loc = loc0)]);
                if (!(t1.lcc.col > col00))
                    warn_obh9Xt5r(x7E_r7bhmB7D((x7E_r7bhmB7D((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.lcc.col)), fname, src, tokens, options, _idx, _loc, warnings);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_zPvhGGON(const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    return parseExpression_5I1QNbGa(P_PREFIX_UNARY, mode, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static s_Node parseTypeAnnot_8l9E2qtJ(const bool allowTypeUnions, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    /*MOV*/ s_Node res = parseUnaryExpression_zPvhGGON(0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    while (allowTypeUnions && tryConsume_KaE2i7rm(s_kind_id, "or"_fu, tokens, _idx))
    {
        if (res.kind != s_kind_typeunion)
        {
            res = make_O3NkiiPH(s_kind_typeunion, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(res) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
        };
        res.items += parseUnaryExpression_zPvhGGON(0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    };
    return /*NRVO*/ res;
}

static s_Node tryPopTypeAnnot_aPo3e6LN(const bool allowTypeUnions, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (tryConsume_KaE2i7rm(s_kind_op, ":"_fu, tokens, _idx))
        return parseTypeAnnot_8l9E2qtJ(allowTypeUnions, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
        return miss_GxfQVGJo();

}

static s_Node tryParseLetInit_LtHf71EI(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    if (tryConsume_KaE2i7rm(s_kind_op, "="_fu, tokens, _idx))
        return parseExpression_5I1QNbGa(P_RESET, 0, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    else
    {
        return s_Node{};
    };
}

static s_Node parseLet_pB1yCfCX(const bool xqmark, const bool allowTypeUnions, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    s_Flags flags {};
    if (tryConsume_KaE2i7rm(s_kind_id, "using"_fu, tokens, _idx))
        flags |= s_Flags_F_USING;

    if (tryConsume_KaE2i7rm(s_kind_id, "implicit"_fu, tokens, _idx))
        flags |= s_Flags_F_IMPLICIT;

    if (tryConsume_KaE2i7rm(s_kind_id, "lax"_fu, tokens, _idx))
        flags |= s_Flags_F_LAX;

    if (tryConsume_KaE2i7rm(s_kind_id, "shadow"_fu, tokens, _idx))
        flags |= s_Flags_F_SHADOW;

    if (tryConsume_KaE2i7rm(s_kind_id, "mut"_fu, tokens, _idx))
        flags |= s_Flags_F_MUT;

    if (tryConsume_KaE2i7rm(s_kind_id, "ref"_fu, tokens, _idx))
        flags |= s_Flags_F_REF;

    const s_Token& sh_import = tryConsume_KaE2i7rm(s_kind_op, "::"_fu, tokens, _idx);
    const int loc0 = _loc;
    _loc = _idx;
    fu_DEFER(_loc = loc0);
    fu::str id { consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value };
    if (id == "_"_fu)
        flags |= s_Flags_F_LAX;

    if (xqmark && tryConsume_KaE2i7rm(s_kind_op, "!"_fu, tokens, _idx))
    {
        flags |= s_Flags_F_MUSTNAME;
        fu::view<char> inner_id = tryConsume_KaE2i7rm(s_kind_id, fu::view<char>{}, tokens, _idx).value;
        if (inner_id)
        {
            flags |= s_Flags_F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    if (xqmark && tryConsume_KaE2i7rm(s_kind_op, "."_fu, tokens, _idx))
    {
        flags |= s_Flags_F_COMPOUND_ID;
        id += ("."_fu + consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value);
        while (tryConsume_KaE2i7rm(s_kind_op, "::"_fu, tokens, _idx))
        {
            id += ("\t"_fu + consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value);
        };
    };
    if (xqmark && tryConsume_KaE2i7rm(s_kind_op, "[]"_fu, tokens, _idx))
        flags |= s_Flags_F_REST_ARG;

    const s_Token& optional = (xqmark ? tryConsume_KaE2i7rm(s_kind_op, "?"_fu, tokens, _idx) : (*(const s_Token*)fu::NIL));
    fu::str _0 {};
    s_Node type = (sh_import ? (_0 = ((registerImport_A8vsdgaH(fu::str(id), fname, fuzimports) + '\t') + id), createRead_HKYAKX51(static_cast<fu::str&&>(_0), s_Flags_F_COMPOUND_ID, modid, fname, src, tokens, _idx, _loc)) : tryPopTypeAnnot_aPo3e6LN(allowTypeUnions, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings));
    s_Node init = (optional ? createDefinit_K3ZxIoDY(modid, _loc) : tryParseLetInit_LtHf71EI(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings));
    if ((flags & s_Flags_F_REF) && type)
    {
        if ((type.kind != s_kind_call) || (type.value != "&mut"_fu))
        {
            type = createPrefix_CROadCBC("&mut"_fu, s_Node(type), modid, _loc);
            flags &= ~s_Flags_F_REF;
        };
    };
    return createLet_asR5Ww5q(id, type, init, flags, modid, _loc);
}

static s_Node parseStructItem_p57a7gyQ(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const s_Token& isPredicate = tryConsume_KaE2i7rm(s_kind_id, "true"_fu, tokens, _idx);
    /*MOV*/ s_Node member = parseLet_pB1yCfCX(true, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    if (isPredicate)
        member.flags |= s_Flags_F_PREDICATE;

    return /*NRVO*/ member;
}

static s_Node parseEnumItem_WiFdLF2n(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const fu::str& id = consume_QsJKoP7u(s_kind_id, fu::view<char>{}, fname, src, tokens, _idx).value;
    s_Node init = tryParseLetInit_LtHf71EI(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
    softSemi_FQQLnIZv(fname, src, tokens, options, _idx, _loc, _col0, warnings);
    return createLet_asR5Ww5q(id, (*(const s_Node*)fu::NIL), init, s_Flags{}, modid, _loc);
}

static s_Node parseDefer_FagZ5wMO(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const s_Token* _0;
    const fu::str& value = (tryConsume_KaE2i7rm(s_kind_op, ":"_fu, tokens, _idx) ? (*(_0 = &(tryConsume_KaE2i7rm(s_kind_id, "err"_fu, tokens, _idx))) ? *_0 : consume_QsJKoP7u(s_kind_id, "ok"_fu, fname, src, tokens, _idx)).value : (*(const fu::str*)fu::NIL));
    if (_fnDepth > 0)
    {
        fu::vec<s_Node> _1 {};
        return (_1 = fu::vec<s_Node> { fu::slate<1, s_Node> { parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) } }, make_O3NkiiPH(s_kind_defer, static_cast<fu::vec<s_Node>&&>(_1), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax_PS_DISCARD, s_TokenIdx{}, modid, _loc));
    }
    else
    {
        _idx--;
        fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx);
    };
}

static s_Node parseDeferOrStatement_oHl2b5BG(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    fu::view<s_Token> _0 {};
    const s_Token* _1;
    const s_Token& peek = (*(_1 = &((_0 = tokens, static_cast<fu::view<s_Token>&&>(_0)[(_loc = _idx)]))) ? *_1 : fail_QjJC84VE(fu::str{}, fname, src, tokens, _idx));
    if (peek.kind == s_kind_id)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
        {
            _idx++;
            return parseDefer_FagZ5wMO(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        };
    };
    return parseStatement_gdgRK4PN(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
}

static fu::vec<s_Node> parseBlockLike_AZs3ozYB(const s_kind endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    const int line0 = (!_idx ? _idx : tokens[(_idx - 1)].lcc.line);
    const int col00 = _col0;
    int colNN = -1;
    int lineNN = line0;
    /*MOV*/ fu::vec<s_Node> items {};
    for (; ; )
    {
        const s_Token& token = tokens[_idx];
        if ((token.kind == s_kind_op) && (token.value == ";"_fu))
            _idx++;
        else if ((token.kind == endKind) && (token.value == endVal))
        {
            _col0 = col00;
            _idx++;
            const int line1 = token.lcc.line;
            const int col1 = token.lcc.col;
            if (!((line1 == line0) || (col1 == _col0)))
                warn_obh9Xt5r((x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((_col0 - 1))) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            break;
        }
        else
        {
            _col0 = token.lcc.col;
            if (!(_col0 > col00))
                warn_obh9Xt5r((x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            if (!((colNN < 0) || (colNN == _col0) || (token.lcc.line == lineNN)))
                warn_obh9Xt5r((x7E_r7bhmB7D((x7E_r7bhmB7D((x7E_r7bhmB7D((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), fname, src, tokens, options, _idx, _loc, warnings);

            if (colNN < 0)
                colNN = _col0;

            lineNN = token.lcc.line;
            /*MOV*/ s_Node expr = (sTruct ? parseStructItem_p57a7gyQ(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : (eNum ? parseEnumItem_WiFdLF2n(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings) : parseDeferOrStatement_oHl2b5BG(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings)));
            if (!((expr.kind != s_kind_call) || (!(expr.flags & s_Flags_F_ACCESS) && !s_ParseSyntax((expr.syntax & s_ParseSyntax_PS_ID))) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
                warn_obh9Xt5r("Orphan pure-looking expression."_fu, fname, src, tokens, options, _idx, _loc, warnings);

            items.push(static_cast<s_Node&&>(expr));
        };
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_gek2KVdw(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, int& _dollarAuto, fu::vec<fu::str>& _dollars, int& _anonFns, bool& _autopub, bool& _TODO_FIX_dollarOk, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& fuzimports, fu::vec<fu::str>& warnings)
{
    consume_QsJKoP7u(s_kind_sof, fu::view<char>{}, fname, src, tokens, _idx);
    _loc = _idx;
    fu::vec<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_AZs3ozYB(s_kind_eof, fu::view<char>{}, false, false, modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings), make_O3NkiiPH(s_kind_root, static_cast<fu::vec<s_Node>&&>(_0), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc));
    _idx--;
    if (_autopub)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            const s_kind k = item.kind;
            if ((k == s_kind_fn) || (k == s_kind_let) || (k == s_kind_typedef) || (k == s_kind_struct) || (k == s_kind_union) || (k == s_kind_enum) || (k == s_kind_flags) || (k == s_kind_primitive))
                set_PUB_PViMrakm(item.flags, "Module has no pubs, pubbing everything."_fu, false, fname, src, tokens, _idx, _autopub);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_od6Zl77H(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options)
{
    int _idx = 0;
    int _loc = 0;
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    int _dollarAuto = 0;
    fu::vec<fu::str> _dollars {};
    int _anonFns = 0;
    bool _autopub = true;
    bool _TODO_FIX_dollarOk = false;
    fu::vec<fu::str> _expectedTypeParams {};
    /*MOV*/ fu::vec<fu::str> fuzimports {};
    /*MOV*/ fu::vec<fu::str> warnings {};
    if (tokens[(tokens.size() - 1)].kind == s_kind_eof)
    {
        /*MOV*/ s_Node root = parseRoot_gek2KVdw(modid, fname, src, tokens, options, _idx, _loc, _col0, _precedence, _fnDepth, _dollarAuto, _dollars, _anonFns, _autopub, _TODO_FIX_dollarOk, _expectedTypeParams, fuzimports, warnings);
        return s_ParserOutput { static_cast<s_Node&&>(root), static_cast<fu::vec<fu::str>&&>(fuzimports), static_cast<fu::vec<fu::str>&&>(warnings) };
    }
    else
        fail_QjJC84VE("Missing `eof` token."_fu, fname, src, tokens, _idx);

}

#endif
