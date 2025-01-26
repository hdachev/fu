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
struct s_Import;
struct s_Token;
struct s_LineColChars;
struct s_Options;
struct s_Lint;
typedef int s_SolverNotes;
typedef fu::u8 s_CGDefects;
typedef fu::u8 s_DevOptions;
enum s_Fixity: fu::u8;
struct s_BINOP;
struct s_Map_ZvYmFQlP8R5;
struct s_ArgsParse;
fu::str qKW_3PsDzMvu(const fu::str&);
fu::str qID_3PsDzMvu(const fu::str&);
[[noreturn]] fu::never FAIL_fezemVq0(const fu::str&, const fu::str&, const s_LineColChars&, fu::view<char>);
fu::str ext_8Oo0Zp26(const fu::str&);
fu::str dirname_8Oo0Zp26(const fu::str&);
fu::str join_8GxtVDhD(fu::view<char>, const fu::str&);
fu::str qBAD_3PsDzMvu(const fu::str&);
inline static s_Node parseExpression_djvSQ5j2(int, int, int, const fu::str&, const fu::str&, fu::view<s_Token>, int&, int&, int&, int&, int&, bool&, bool&, int&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<s_Import>&, fu::vec<fu::str>&, const s_Options&);
bool hasIdentifierChars_pZLkTusf(fu::view<char>);
static fu::str getAutoName_kWtblw2z(const s_Node&, const fu::str&, const fu::str&, fu::view<s_Token>, int);
static s_Node parseLet_smk4PW6Z(bool, bool, bool, int, int, const fu::str&, const fu::str&, fu::view<s_Token>, int&, int&, int&, int&, int&, bool&, bool&, int&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<s_Import>&, fu::vec<fu::str>&, const s_Options&);
static s_Node parseTypeAnnot_JxRmj4Ey(bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, int&, int&, int&, int&, int&, bool&, bool&, int&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<s_Import>&, fu::vec<fu::str>&, const s_Options&);
fu::str cleanID_j6ljQymd(const fu::str&);
static s_Node parseUnaryExpression_Wyb4ayQA(int, int, const fu::str&, const fu::str&, fu::view<s_Token>, int&, int&, int&, int&, int&, bool&, bool&, int&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<s_Import>&, fu::vec<fu::str>&, const s_Options&);
inline fu::vec<fu::str> uNion_bZpiHcbv(const fu::vec<fu::str>&, const fu::vec<fu::str>&);
static fu::vec<s_Node> parseBlockLike_bSAgMgCf(s_kind, fu::view<char>, bool, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, int&, int&, int&, int&, int&, bool&, bool&, int&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<s_Import>&, fu::vec<fu::str>&, const s_Options&);
static s_Node parseStatement_GzQ8uksl(int, const fu::str&, const fu::str&, fu::view<s_Token>, int&, int&, int&, int&, int&, bool&, bool&, int&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<s_Import>&, fu::vec<fu::str>&, const s_Options&);
static s_Node parseFnDecl_x0HZ97dk(s_Flags, s_Fixity, s_DeclAsserts, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, int&, int&, int&, int&, int&, bool&, bool&, int&, fu::vec<fu::str>&, fu::vec<fu::str>&, fu::vec<s_Import>&, fu::vec<fu::str>&, const s_Options&);

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

                                #ifndef DEF_s_Fixity
                                #define DEF_s_Fixity
enum s_Fixity: fu::u8
{
    s_Fixity_Infix = 1u,
    s_Fixity_Prefix = 2u,
    s_Fixity_Postfix = 3u,
};
                                #endif

                                #ifndef DEF_s_Map_ZvYmFQlP8R5
                                #define DEF_s_Map_ZvYmFQlP8R5
struct s_Map_ZvYmFQlP8R5
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
    s_Map_ZvYmFQlP8R5 PRECEDENCE;
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

                                #ifndef DEF_s_ArgsParse
                                #define DEF_s_ArgsParse
struct s_ArgsParse
{
    s_Flags flags;
    bool sliceSyntax;
    explicit operator bool() const noexcept
    {
        return false
            || flags
            || sliceSyntax
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_P_RESET
                                #define DEF_P_RESET
inline constexpr int P_RESET = 1000;
                                #endif

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

[[noreturn]] static fu::never fail_a0ZqfRup(fu::str&& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    const s_Token& token = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_fezemVq0(fname, src, token.lcc, reason);
}

static const s_Token& consume_ifLltrwq(const s_kind kind, const fu::str& value, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _idx++;
        return token;
    }
    else
    {
        fail_a0ZqfRup(((((("Expected "_fu + qKW_3PsDzMvu(str_n4lV73pj(kind))) + ((value && (kind == token.kind)) ? (" "_fu + qID_3PsDzMvu(value)) : fu::str{})) + "\n\t     got "_fu) + qKW_3PsDzMvu(str_n4lV73pj(token.kind))) + ((value && (kind == token.kind)) ? (" "_fu + qID_3PsDzMvu(token.value)) : fu::str{})), fname, src, tokens, _idx);
    };
}

                                #ifndef DEF_x7E_gCeFmDFw0L8
                                #define DEF_x7E_gCeFmDFw0L8
inline fu::str x7E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::str fail_compose_fyNGq3bz(fu::str&& reason, fu::view<char> fname, fu::view<s_Token> tokens, const int _idx, const int _loc)
{
    const s_Token& loc = tokens[_loc];
    const s_Token& here = tokens[_idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.lcc.line;
    const int c0 = loc.lcc.col;
    const int l1 = here.lcc.line;
    const int c1 = here.lcc.col;
    fu::str addr = ((l1 == l0) ? x7E_gCeFmDFw((x7E_gCeFmDFw("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    return (((fname + " "_fu) + addr) + ":\n\t"_fu) + reason;
}

static void warn_JY9fwXxS(const fu::str& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, const int _loc, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (warnings.size() == options.lint.maxwarn)
        fail_a0ZqfRup(fu::str(reason), fname, src, tokens, _idx);
    else
        warnings += fail_compose_fyNGq3bz(fu::str(reason), fname, tokens, _idx, _loc);

}

static const s_Token& tryConsume_RS2yajZX(const s_kind kind, fu::view<char> value, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if ((token.kind == kind) && (token.value == value))
    {
        _idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}

inline static const s_Token& tryConsume_QdsI94aK(const s_kind kind, fu::view<char> value, const bool xqmark, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    bool BL_1_v {};
    if ((token.kind == kind) && (token.value == value) && (__extension__ (
    {
        const s_Token& token_1 = tokens[(_idx + 1)];
        BL_1_v = (((token_1.kind == s_kind_id) || ((xqmark && (token_1.kind == s_kind_op)) ? (token_1.value == "."_fu) : false)));
    (void)0;}), BL_1_v))
    {
        _idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}

static const s_Token& tryConsume_xXyIFHPn(const s_kind kind, fu::view<s_Token> tokens, int& _idx)
{
    const s_Token& token = tokens[_idx];
    if (token.kind == kind)
    {
        _idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}

                                #ifndef DEF_starts_t2TApdnqRc8
                                #define DEF_starts_t2TApdnqRc8
inline bool starts_t2TApdnq(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view_start0(a, with.size()) == with);
}
                                #endif

static fu::str registerImport_ugbgDS9b(/*MOV*/ fu::str&& value, const int modid, const fu::str& fname, const int _loc, fu::vec<s_Import>& imports)
{
    if (!ext_8Oo0Zp26(value))
        value += ".fu"_fu;

    fu::str dir = dirname_8Oo0Zp26(fname);
    value = (starts_t2TApdnq(value, "."_fu) ? join_8GxtVDhD(dir, value) : ((dir + '\v') + value));

    { {
        for (int i = 0; i < imports.size(); i++)
        {
            const s_Import& import = imports[i];
            if (import.value == value)
                goto BL_2;

        };
        imports += s_Import { s_TokenIdx { modid, _loc }, fu::str(value) };
      } BL_2:;
    };
    return static_cast<fu::str&&>(value);
}

static s_Node make_3RGKUyIO(const s_kind kind, const fu::vec<s_Node>& items, const s_Flags flags, const fu::str& value, const s_DeclAsserts asserts, const s_ParseSyntax syntax, const s_TokenIdx& token, const int modid, const int _loc)
{
    return s_Node { kind, asserts, syntax, flags, fu::str(value), fu::vec<s_Node>(items), (token ? s_TokenIdx(token) : s_TokenIdx { modid, _loc }) };
}

static s_Node createCall_mBEz988k(const fu::str& id, const s_Flags flags, const fu::vec<s_Node>& args, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_call, args, flags, id, s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _loc);
}

static s_Node createRead_9y30X3Q5(const fu::str& id, const s_Flags flags, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, const int _loc)
{
    if ((id == "true"_fu) || (id == "false"_fu))
    {
        return make_3RGKUyIO(s_kind_bool, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        return createCall_mBEz988k((id ? id : fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx)), flags, (*(const fu::vec<s_Node>*)fu::NIL), s_ParseSyntax{}, modid, _loc);
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

static s_Node createLeaf_BO33R8nU(const s_kind kind, const fu::str& value, const int modid, const int _loc)
{
    return make_3RGKUyIO(kind, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

                                #ifndef DEF_grow_if_oob_g9Y9RHMdUy1
                                #define DEF_grow_if_oob_g9Y9RHMdUy1
inline bool& grow_if_oob_g9Y9RHMd(fu::vec<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu::vec<fu::str>& l_6_0_a5P0miaw(s_Map_ZvYmFQlP8R5& _)
{
    return _.keys;
}

static fu::vec<int>& l_6_1_34LbA0ur(s_Map_ZvYmFQlP8R5& _)
{
    return _.vals;
}

                                #ifndef DEF_update_HDUvgk0YVUa
                                #define DEF_update_HDUvgk0YVUa
inline bool update_HDUvgk0Y(const fu::str& item, const int extra, s_Map_ZvYmFQlP8R5& _)
{
    int lo = 0;
    int hi = l_6_0_a5P0miaw(_).size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_gCeFmDFw(l_6_0_a5P0miaw(_)[i], item);
        if (cmp == 0)
        {
            l_6_1_34LbA0ur(_).mutref(i) = extra;
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    l_6_0_a5P0miaw(_).insert(lo, fu::str(item));
    l_6_1_34LbA0ur(_).insert(lo, extra);
    return true;
}
                                #endif

                                #ifndef DEF_set_aEyaPH6ApB3
                                #define DEF_set_aEyaPH6ApB3
inline bool set_aEyaPH6A(s_Map_ZvYmFQlP8R5& _, const fu::str& key, const int value)
{
    return update_HDUvgk0Y(key, value, _);
}
                                #endif

static void binop_g9H7c3np(fu::view<fu::str> ops, s_BINOP& out, int& precedence, const bool rightToLeft)
{
    precedence++;
    if (precedence < 64)
    {
        grow_if_oob_g9Y9RHMd(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
        for (int i = 0; i < ops.size(); i++)
            set_aEyaPH6A(out.PRECEDENCE, ops[i], precedence);

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
    binop_g9H7c3np((fu::slate<3, fu::str> { "*"_fu, "/"_fu, "%"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<2, fu::str> { "+"_fu, "-"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<2, fu::str> { "<<"_fu, ">>"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<1, fu::str> { "&"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<1, fu::str> { "^"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<1, fu::str> { "|"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<1, fu::str> { "~"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<2, fu::str> { "<=>"_fu, "<>"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<2, fu::str> { "=>"_fu, "->"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<5, fu::str> { "<"_fu, "<="_fu, ">"_fu, ">="_fu, "<=>"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<2, fu::str> { "=="_fu, "!="_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<1, fu::str> { "&&"_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<1, fu::str> { "||"_fu }), out, precedence, rightToLeft);
    rightToLeft = true;
    binop_g9H7c3np((fu::slate<17, fu::str> { "?"_fu, "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu }), out, precedence, rightToLeft);
    binop_g9H7c3np((fu::slate<1, fu::str> { "<|"_fu }), out, precedence, rightToLeft);
    rightToLeft = false;
    binop_g9H7c3np((fu::slate<1, fu::str> { "|>"_fu }), out, precedence, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1005) = setupOperators_J2h3fYmf();

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

                                #ifndef DEF_has_JTjmFfAyj34
                                #define DEF_has_JTjmFfAyj34
inline bool has_JTjmFfAy(const s_Map_ZvYmFQlP8R5& _, fu::view<char> key)
{
    return has_03SseD2Z(_.keys, key);
}
                                #endif

static const fu::vec<fu::str> PREFIX fu_INIT_PRIORITY(1005) = fu::vec<fu::str> { fu::slate<10, fu::str> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "&mut"_fu } };

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

static void parseAndAdd_xkEtAxR6(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, fu::vec<fu::str>& _expectedTypeParams, fu::view<fu::str> _upstreamTypeParams)
{
    const fu::str& id = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
    if (has_g5ZsWtbd(_upstreamTypeParams, id) || !add_mts1NXJ4(_expectedTypeParams, id))
        fail_a0ZqfRup((("Duplicate type parameter: "_fu + qBAD_3PsDzMvu(id)) + "."_fu), fname, src, tokens, _idx);

}

static void tryParseTypeParamsDecl_wC2VdYU6(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, fu::vec<fu::str>& _expectedTypeParams, fu::view<fu::str> _upstreamTypeParams)
{
    if (tryConsume_RS2yajZX(s_kind_op, "!"_fu, tokens, _idx)

        // RETROFIT see parser.fu
        || tryConsume_RS2yajZX(s_kind_op, "<"_fu, tokens, _idx)
            && (_idx--, true))
    {
        if (tryConsume_RS2yajZX(s_kind_op, "<"_fu, tokens, _idx))
        {
            bool first = true;
            for (; ; )
            {
                if (tryConsume_RS2yajZX(s_kind_op, ">"_fu, tokens, _idx))
                    break;
                else
                {
                    if (!first)
                    {
                        consume_ifLltrwq(s_kind_op, ","_fu, fname, src, tokens, _idx);
                    };
                    first = false;
                    parseAndAdd_xkEtAxR6(fname, src, tokens, _idx, _expectedTypeParams, _upstreamTypeParams);
                };
            };
        }
        else
            parseAndAdd_xkEtAxR6(fname, src, tokens, _idx, _expectedTypeParams, _upstreamTypeParams);

    };
}

static s_Node createAddrOfFn_sLA17eRn(const fu::str& name, const s_Flags flags, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_addroffn, (*(const fu::vec<s_Node>*)fu::NIL), flags, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node createLet_smN5JZFS(const fu::str& id, const s_Node& type, const s_Node& init, const s_Flags flags, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_let, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

                                #ifndef DEF_M_LINT_UNARY_PRECEDENCE
                                #define DEF_M_LINT_UNARY_PRECEDENCE
inline constexpr int M_LINT_UNARY_PRECEDENCE = (1 << 0);
                                #endif

static s_Node miss_Rruxt4LX()
{
    return s_Node{};
}

static void lint_BxXpQjpT(const int mode, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, const int _loc, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_JY9fwXxS((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), fname, src, tokens, _idx, _loc, warnings, options);

}

static s_Node parseAccessExpression_joifAiN6(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc)
{
    _loc = _idx;
    s_Token id { tryConsume_xXyIFHPn(s_kind_id, tokens, _idx) };
    if (!id)
    {
        consume_ifLltrwq(s_kind_op, "::"_fu, fname, src, tokens, _idx);
        id = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx);
        _idx -= 2;
    };
    return createCall_mBEz988k(id.value, s_Flags_F_CALL_HAS_DOT, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, s_ParseSyntax{}, modid, _loc);
}

static void softComma_eRGnsrbO(fu::view<char> endop, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, fu::vec<fu::str>& warnings, const s_Options& options)
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
        warn_JY9fwXxS((("Missing comma before `"_fu + peek.value) + "`."_fu), fname, src, tokens, _idx, _loc, warnings, options);

}

                                #ifndef DEF_max_mJGU9byOmI4
                                #define DEF_max_mJGU9byOmI4
inline int max_mJGU9byO(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_last_4PVbatPg4uj
                                #define DEF_last_4PVbatPg4uj
inline s_Node& last_4PVbatPg(fu::view_mut<s_Node> s)
{
    if (s.size())
        return s.mutref((s.size() - 1));
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static s_Node createArgID_g0AzNAZQ(const fu::str& id, const s_Node& expr, const s_Flags flags, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_argid, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static fu::str getAutoName_kWtblw2z(const s_Node& expr, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (expr.kind == s_kind_addroffn)
        return fu::str(expr.value);
    else if ((expr.kind == s_kind_call) && hasIdentifierChars_pZLkTusf(expr.value))
        return fu::str(expr.value);
    else if (expr.items)
    {
        const int i = (((expr.kind == s_kind_and) && (expr.items.size() - 1)) ? ((expr.kind == s_kind_if) ? 1 : 0) : 0);
        return getAutoName_kWtblw2z(expr.items[i], fname, src, tokens, _idx);
    }
    else
        fail_a0ZqfRup("Cannot :autoname this expression."_fu, fname, src, tokens, _idx);

}

static s_ArgsParse parseCallArgs_BABVKvPl(const fu::str& endop, fu::vec<s_Node>& out_args, bool sliceSyntax, const bool experimental_sliceAnnots, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    s_Flags flags {};
    bool sliceSyntax_used {};
    const int col00 = _col0;
    bool first = true;
    for (; ; )
    {
        if (experimental_sliceAnnots && tryConsume_RS2yajZX(s_kind_op, ";"_fu, tokens, _idx))
        {
            consume_ifLltrwq(s_kind_op, endop, fname, src, tokens, _idx);
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
                    {
                        sliceSyntax_used = true;
                        goto BL_5;
                    };
                };
                softComma_eRGnsrbO(endop, fname, src, tokens, _idx, _loc, warnings, options);
              } BL_5:;
            };
            if (tryConsume_RS2yajZX(s_kind_op, endop, tokens, _idx))
                break;
            else
            {
                fu::str name = ""_fu;
                bool autoName = false;
                bool optional = false;
                const s_Token& tok0 = tokens[_idx];
                _col0 = ((tok0.lcc.line > tokens[(_idx - 1)].lcc.line) ? max_mJGU9byO(tok0.lcc.col, col00) : col00);
                if ((tok0.kind == s_kind_op) && (tok0.value == "?:"_fu) && !sliceSyntax)
                {
                    autoName = true;
                    optional = true;
                    _idx += 1;
                }
                else if ((tok0.kind == s_kind_op) && (tok0.value == ":"_fu))
                {
                    autoName = true;
                    _idx += 1;
                    if (sliceSyntax && !first && !(flags & s_Flags_F_CALL_HAS_NAMED_ARGS))
                    {
                        if (tryConsume_RS2yajZX(s_kind_op, endop, tokens, _idx))
                        {
                            sliceSyntax_used = true;
                            s_Node& last = last_4PVbatPg(out_args);
                            last = createArgID_g0AzNAZQ("start"_fu, last, s_Flags{}, modid, _loc);
                            flags |= s_Flags_F_CALL_HAS_NAMED_ARGS;
                            break;
                        };
                    };
                }
                else if ((tok0.kind == s_kind_id) && !sliceSyntax)
                {
                    const s_Token& tok1 = tokens[(_idx + 1)];
                    if (tok1.kind == s_kind_op)
                    {
                        if ((tok1.value == ":"_fu) || (optional = (tok1.value == "?:"_fu)))
                        {
                            name = tok0.value;
                            _idx += 2;
                        };
                    };
                };
                /*MOV*/ s_Node expr = parseExpression_djvSQ5j2(P_RESET, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
                if (autoName)
                {
                    if (sliceSyntax)
                    {
                        sliceSyntax_used = true;
                        name = "end"_fu;
                        sliceSyntax = false;
                    }
                    else
                        name = getAutoName_kWtblw2z(expr, fname, src, tokens, _idx);

                };
                if (name)
                    flags |= s_Flags_F_CALL_HAS_NAMED_ARGS;

                out_args.push((name ? createArgID_g0AzNAZQ(name, expr, (optional ? s_Flags_F_ARGID_IS_OPTIONAL : s_Flags{}), modid, _loc) : static_cast<s_Node&&>(expr)));
                first = false;
            };
        };
    };
    _col0 = col00;
    return s_ArgsParse { flags, sliceSyntax_used };
}

static s_Node parseCallExpression_m6VOOz4D(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    fu::vec<s_Node> args {};
    const int numDollars0 = _numDollars;
    s_Flags flags = (expr.flags | parseCallArgs_BABVKvPl(")"_fu, args, false, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options).flags);
    if (_numDollars > numDollars0)
        flags |= s_Flags_F_TEMPLATE;

    if ((expr.kind == s_kind_call) && ((flags & (s_Flags_F_CALL_HAS_DOT | s_Flags_F_CALL_HAS_ARGPARENS)) == s_Flags_F_CALL_HAS_DOT))
    {
        const s_Node* _0;
        const s_Node& head = (*(_0 = &(((expr.items && (expr.items.size() == 1)) ? expr.items[0] : (*(const s_Node*)fu::NIL)))) ? *_0 : fu::fail("Malformed property access expression."_fu));
        args.unshift(s_Node(head));
    }
    else
    {
        if (!((expr.kind == s_kind_call) && !(flags & (s_Flags_F_CALL_HAS_DOT | s_Flags_F_CALL_HAS_ARGPARENS))))
        {
            if (!(expr.kind == s_kind_typeparam))
                fail_a0ZqfRup("Invalid call expression."_fu, fname, src, tokens, _idx);

        };
    };
    return createCall_mBEz988k((expr.value ? expr.value : fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx)), (flags | s_Flags_F_CALL_HAS_ARGPARENS), args, s_ParseSyntax{}, modid, _loc);
}

static s_Node parseIndexExpression_cht38Puc(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    fu::vec<s_Node> args {};
    const s_ArgsParse argsParse = parseCallArgs_BABVKvPl("]"_fu, args, true, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    args.unshift(s_Node(expr));
    return createCall_mBEz988k((argsParse.sliceSyntax ? "[:]"_fu : "[]"_fu), (argsParse.flags | s_Flags_F_OPERATOR), args, s_ParseSyntax{}, modid, _loc);
}

                                #ifndef DEF_get_90TVR3QvsI8
                                #define DEF_get_90TVR3QvsI8
inline int get_90TVR3Qv(fu::view<fu::str> keys, fu::view<char> item, fu::view<int> extras)
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
    return int{};
}
                                #endif

                                #ifndef DEF_get_JTjmFfAyj34
                                #define DEF_get_JTjmFfAyj34
inline int get_JTjmFfAy(const s_Map_ZvYmFQlP8R5& _, fu::view<char> key)
{
    return get_90TVR3Qv(_.keys, key, _.vals);
}
                                #endif

static s_Node createIf_GfIIGbSf(const s_Node& cond, const s_Node& cons, const s_Node& alt, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_if, fu::vec<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _loc);
}

static s_Node flattenIfSame_VK45J0Fw(const s_kind kind, const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    const s_kind k_left = left.kind;
    const s_kind k_right = right.kind;
    fu::vec<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_3RGKUyIO(kind, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _loc);
}

static s_Node createOr_QkHvaC2I(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_VK45J0Fw(s_kind_or, left, right, syntax, modid, _loc);
}

static s_Node createAnd_lIz6bDXy(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const int _loc)
{
    return flattenIfSame_VK45J0Fw(s_kind_and, left, right, syntax, modid, _loc);
}

static s_Node pipelineRight_jM2ij3aE(const s_Node& left, /*MOV*/ s_Node&& right, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (right.kind != s_kind_call)
        fail_a0ZqfRup("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _idx);
    else
    {
        if (right.flags & s_Flags_F_CALL_HAS_DOT)
            right.items.insert(1, s_Node(left));
        else
        {
            right.items.unshift(s_Node(left));
        };
        return static_cast<s_Node&&>(right);
    };
}

static s_Node pipelineLeft_4IoZWeLk(/*MOV*/ s_Node&& left, const s_Node& right, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (left.kind != s_kind_call)
        fail_a0ZqfRup("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _idx);
    else
    {
        left.items.push(s_Node(right));
        left.flags |= s_Flags_F_CALL_HAS_ARGPARENS;
        return static_cast<s_Node&&>(left);
    };
}

static s_Node typeCheck_WbQ39EP1(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_typeassert, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node typeCast_tptvGwZv(const s_Node& actual, const s_Node& expect, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_typecast, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node tryParseBinary_PCbrGXiu(const s_Node& left, const fu::str& op, const int p1, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if ((p1 > _precedence) || ((p1 == _precedence) && !BINOP.RIGHT_TO_LEFT[p1]))
        return miss_Rruxt4LX();
    else
    {
        _idx++;
        s_Node mid {};
        if (op == "?"_fu)
        {
            mid = parseExpression_djvSQ5j2(P_RESET, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            consume_ifLltrwq(s_kind_op, ":"_fu, fname, src, tokens, _idx);
        };
        /*MOV*/ s_Node right = parseExpression_djvSQ5j2(p1, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        if (mid)
        {
            return createIf_GfIIGbSf(left, mid, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "||"_fu)
        {
            return createOr_QkHvaC2I(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else if (op == "&&"_fu)
        {
            return createAnd_lIz6bDXy(left, right, s_ParseSyntax{}, modid, _loc);
        }
        else
        {
            if ((left.kind == s_kind_and) || (left.kind == s_kind_or))
            {
                if (!(left.syntax & s_ParseSyntax_PS_PARENS))
                    warn_JY9fwXxS((((x7E_gCeFmDFw("Unparenthesized `"_fu, str_n4lV73pj(left.kind)) + "` on the left side of an `"_fu) + op) + "`."_fu), fname, src, tokens, _idx, _loc, warnings, options);

            };
            if (op == "|>"_fu)
                return pipelineRight_jM2ij3aE(left, static_cast<s_Node&&>(right), fname, src, tokens, _idx);
            else if (op == "<|"_fu)
                return pipelineLeft_4IoZWeLk(s_Node(left), right, fname, src, tokens, _idx);
            else if (op == "->"_fu)
                return typeCheck_WbQ39EP1(left, right, modid, _loc);
            else if (op == "=>"_fu)
                return typeCast_tptvGwZv(left, right, modid, _loc);
            else
            {
                return createCall_mBEz988k(op, s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(left), static_cast<s_Node&&>(right) } }, s_ParseSyntax{}, modid, _loc);
            };
        };
    };
}

static const fu::vec<fu::str> POSTFIX fu_INIT_PRIORITY(1005) = fu::vec<fu::str> { fu::slate<4, fu::str> { "++"_fu, "--"_fu, "[]"_fu, "[:]"_fu } };

                                #ifndef DEF_only_a6qr8qgsAa4
                                #define DEF_only_a6qr8qgsAa4
inline const s_Node& only_a6qr8qgs(fu::view<s_Node> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createTypeTag_tqh7oohf(const fu::str& value, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_typetag, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseQualifierChain_NXNdYmCl(/*MOV*/ s_Node&& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, fu::vec<s_Import>& imports)
{
    if (expr.kind != s_kind_addroffn)
    {
        if ((expr.kind != s_kind_call) || (expr.items.size() > 1) || (expr.flags & ~s_Flags_F_CALL_HAS_DOT))
        {
            _idx--;
            fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx);
        };
    };
    expr.flags |= s_Flags_F_COMPOUND_ID;
    fu::str path { expr.value };
    for (; ; )
    {
        const fu::str& id = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
        if (!tryConsume_RS2yajZX(s_kind_op, "::"_fu, tokens, _idx))
        {
            if ((path == "is"_fu) && (expr.items.size() == 1))
            {
                const s_Node& left = only_a6qr8qgs(expr.items);
                s_Node right = createTypeTag_tqh7oohf(id, modid, _loc);
                return typeCheck_WbQ39EP1(left, right, modid, _loc);
            }
            else
            {
                path = registerImport_ugbgDS9b(fu::str(path), modid, fname, _loc, imports);
                expr.value = ((path + "\t"_fu) + id);
                return static_cast<s_Node&&>(expr);
            };
        }
        else
            path += ("/"_fu + id);

    };
}

static s_Node tryParseExpressionTail_3P8LHR5x(const s_Node& head, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& token = tokens[_idx++];
    if (token.kind == s_kind_op)
    {
        const fu::str& v = token.value;
        if (v == ";"_fu)
        {
            _idx--;
            return miss_Rruxt4LX();
        }
        else if (v == "."_fu)
        {
            lint_BxXpQjpT(mode, fname, src, tokens, _idx, _loc, warnings, options);
            return parseAccessExpression_joifAiN6(head, modid, fname, src, tokens, _idx, _loc);
        }
        else if (v == "("_fu)
        {
            lint_BxXpQjpT(mode, fname, src, tokens, _idx, _loc, warnings, options);
            return parseCallExpression_m6VOOz4D(head, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        }
        else if (v == "["_fu)
        {
            lint_BxXpQjpT(mode, fname, src, tokens, _idx, _loc, warnings, options);
            return parseIndexExpression_cht38Puc(head, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        }
        else
        {
            const int p1 = get_JTjmFfAy(BINOP.PRECEDENCE, v);
            if (p1)
            {
                _idx--;
                return tryParseBinary_PCbrGXiu(head, v, p1, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (has_g5ZsWtbd(POSTFIX, v))
            {
                return createCall_mBEz988k((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu::str(v)), s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, s_ParseSyntax{}, modid, _loc);
            }
            else if (v == "::"_fu)
            {
                return parseQualifierChain_NXNdYmCl(s_Node(head), modid, fname, src, tokens, _idx, _loc, imports);
            };
        };
    };
    _idx--;
    return miss_Rruxt4LX();
}

inline static s_Node parseExpression_QdbRgGe3(const int p1, const int mode, const s_Node& parseHead, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (!((tokens[_idx].lcc.col >= (_col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_JY9fwXxS(x7E_gCeFmDFw((x7E_gCeFmDFw((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].lcc.col)), fname, src, tokens, _idx, _loc, warnings, options);

    /*MOV*/ s_Node head { parseHead };
    if (!s_ParseSyntax((head.syntax & s_ParseSyntax_PS_NOT_AN_EXPRESSION)))
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_kind_int) || (head.kind == s_kind_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_3P8LHR5x(head, mode_1, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.lcc.col > col00))
                    warn_JY9fwXxS(x7E_gCeFmDFw((x7E_gCeFmDFw((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.lcc.col)), fname, src, tokens, _idx, _loc, warnings, options);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Flags parseLeadingDot_TDejJgK6(fu::vec<s_Node>& out_push_arg_and_body, const fu::str& name, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node singleArg = createLet_smN5JZFS(name, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), ((s_Flags_F_TEMPLATE | s_Flags_F_SHADOW) | s_Flags_F_REF), modid, _loc);
    int _0 {};
    s_Node _1 {};
    /*MOV*/ s_Node singleExpression = (_0 = _precedence, _1 = (_idx--, createRead_9y30X3Q5(name, s_Flags{}, modid, fname, src, tokens, _idx, _loc)), parseExpression_QdbRgGe3(_0, 0, static_cast<s_Node&&>(_1), modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options));
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

static s_Flags parseArgsDecl_0b0tHnte(fu::vec<s_Node>& outArgs, const s_kind endk, fu::view<char> endv, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    bool first = true;
    s_Flags outFlags {};
    fu::vec<s_Node> implicit {};
    int firstDefaulted = -1;
    const int numDollars0 = _numDollars;
    for (; ; )
    {
        if (tryConsume_RS2yajZX(endk, endv, tokens, _idx))
            break;
        else
        {
            if (!first)
            {
                consume_ifLltrwq(s_kind_op, ","_fu, fname, src, tokens, _idx);
            };
            first = false;
            const bool isInline = !!tryConsume_RS2yajZX(s_kind_id, "inline"_fu, tokens, _idx);
            int insertAt = -1;
            /*MOV*/ s_Node arg = parseLet_smk4PW6Z(true, true, true, outArgs.size(), modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            const bool NEW = (_numDollars > numDollars0);
            if (NEW || (arg.items[LET_TYPE].kind == s_kind_typeunion))
                arg.flags |= s_Flags_F_TEMPLATE;

            if (isInline)
            {
                arg.flags |= s_Flags_F_INLINE;
                outFlags |= s_Flags_F_INLINE;
            };
            const s_Node& annot = arg.items[LET_TYPE];
            const s_Node& init = arg.items[LET_INIT];
            if (init)
            {
                if (arg.flags & s_Flags_F_IMPLICIT)
                    fail_a0ZqfRup("TODO default implicit arguments"_fu, fname, src, tokens, _idx);
                else
                {
                    if (firstDefaulted < 0)
                        firstDefaulted = outArgs.size();

                    if ((init.kind == s_kind_definit) && !annot)
                        arg.flags |= s_Flags_F_TEMPLATE;

                };
            }
            else if ((firstDefaulted >= 0))
            {
                if (!(arg.flags & s_Flags_F_MUSTNAME))
                    fail_a0ZqfRup("Non-optional arguments without a bang! cannot follow optional arguments."_fu, fname, src, tokens, _idx);
                else
                {
                    insertAt = firstDefaulted;
                    firstDefaulted++;
                };
            }
            else if (!annot)
                arg.flags |= s_Flags_F_TEMPLATE;

            outFlags |= (arg.flags & s_Flags_F_TEMPLATE);
            if (arg.flags & s_Flags_F_IMPLICIT)
                implicit.push(static_cast<s_Node&&>(arg));
            else if ((insertAt >= 0))
                outArgs.insert(insertAt, static_cast<s_Node&&>(arg));
            else
                outArgs.push(static_cast<s_Node&&>(arg));

        };
    };
    if (implicit)
        for (int i = 0; i < implicit.size(); i++)
            outArgs.push(s_Node(implicit[i]));
;
    return outFlags;
}

static s_Node tryPopTypeAnnot_SOzY03Zo(const bool allowTypeUnions, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (tryConsume_RS2yajZX(s_kind_op, ":"_fu, tokens, _idx))
        return parseTypeAnnot_JxRmj4Ey(allowTypeUnions, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    else
        return miss_Rruxt4LX();

}

                                #ifndef DEF_x21x3D_gCeFmDFw0L8
                                #define DEF_x21x3D_gCeFmDFw0L8
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

inline static void l_7_20_zM4VFqus(const fu::str& item, fu::vec<fu::str>& result, const bool useResult)
{
    if (useResult)
        result += fu::str(item);

}

inline static void l_7_21_fSveg32f(const fu::str& item, const int left, fu::view<fu::str> l, fu::vec<fu::str>& result, bool& useResult)
{
    if (!useResult)
    {
        useResult = true;
        result += fu::get_view_start0(l, left);
    };
    result += fu::str(item);
}

inline static void merge_BJpm1Wws(fu::view<fu::str> l, fu::view<fu::str> r, fu::view<fu::str> l_1, fu::vec<fu::str>& result, bool& useResult)
{
    int li = 0;
    int ri = 0;
    for (; ; )
    {
        const bool l_done = (li == l.size());
        const bool r_done = (ri == r.size());
        fu::never BL_3_v {};
        const int cmp = (l_done ? (r_done ? (__extension__ (
        {
            return;
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_gCeFmDFw(l[li], r[ri])));
        if ((cmp <= 0))
        {
            l_7_20_zM4VFqus(l[li], result, useResult);
            li++;
            ri += int((cmp == 0));
        }
        else
        {
            l_7_21_fSveg32f(r[ri], li, l_1, result, useResult);
            ri++;
        };
    };
}

                                #ifndef DEF_uNion_bZpiHcbvZl5
                                #define DEF_uNion_bZpiHcbvZl5
inline fu::vec<fu::str> uNion_bZpiHcbv(const fu::vec<fu::str>& l, const fu::vec<fu::str>& r)
{
    if (r.size() > l.size())
        return uNion_bZpiHcbv(r, l);
    else
    {
        /*MOV*/ fu::vec<fu::str> result {};
        bool useResult = false;
        merge_BJpm1Wws(l, r, l, result, useResult);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu::vec<fu::str>(l);

    };
}
                                #endif

                                #ifndef DEF_steal_SsrT85jPAoh
                                #define DEF_steal_SsrT85jPAoh
inline fu::vec<fu::str> steal_SsrT85jP(fu::vec<fu::str>& v)
{
    /*MOV*/ fu::vec<fu::str> ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

                                #ifndef DEF_if_last_a6qr8qgsAa4
                                #define DEF_if_last_a6qr8qgsAa4
inline const s_Node& if_last_a6qr8qgs(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_Node*)fu::NIL);

}
                                #endif

                                #ifndef DEF_last_a6qr8qgsAa4
                                #define DEF_last_a6qr8qgsAa4
inline const s_Node& last_a6qr8qgs(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        fu::fail("len == 0"_fu);

}
                                #endif

static s_Node createBlock_Xs4gphBm(fu::vec<s_Node>&& items, const fu::str& label, const int modid, const int _loc)
{
    if (if_last_a6qr8qgs(items).syntax & s_ParseSyntax((s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL | s_ParseSyntax_PS_ALWAYS_DISCARD)))
    {
        items += make_3RGKUyIO(s_kind_empty, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, last_a6qr8qgs(items).token, modid, _loc);
    };
    return make_3RGKUyIO(s_kind_block, items, s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseBlock_JHukuVno(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    fu::vec<s_Node> _0 {};
    return (_0 = parseBlockLike_bSAgMgCf(s_kind_op, "}"_fu, false, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options), createBlock_Xs4gphBm(static_cast<fu::vec<s_Node>&&>(_0), (*(const fu::str*)fu::NIL), modid, _loc));
}

static s_Node parseLabelledStatement_ITvfuHJO(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const fu::str& label = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
    /*MOV*/ s_Node stmt = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    if ((stmt.kind == s_kind_loop) || (stmt.kind == s_kind_block))
    {
        if (stmt.value)
            fail_a0ZqfRup((((("Label "_fu + qID_3PsDzMvu(label)) + ": statement already labeled as "_fu) + qID_3PsDzMvu(stmt.value)) + "."_fu), fname, src, tokens, _idx);
        else
        {
            stmt.value = label;
            return /*NRVO*/ stmt;
        };
    }
    else
    {
        return createBlock_Xs4gphBm(fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(stmt) } }, label, modid, _loc);
    };
}

static bool softSemi_MnASs0li(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, const int _col0, fu::vec<fu::str>& warnings, const s_Options& options)
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

    warn_JY9fwXxS((("Missing semicollon before `"_fu + peek.value) + "`."_fu), fname, src, tokens, _idx, _loc, warnings, options);
    return false;
}

static s_Node parseLetStmt_xskOWIkE(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node ret = parseLet_smk4PW6Z(false, false, false, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options);
    if (!(~ret.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)) && ret.items[LET_TYPE] && !ret.items[LET_INIT])
    {
        fu::str name { ret.value };
        const s_Flags flags = (ret.flags & (s_Flags_F_SHADOW | s_Flags_F_LAX));
        ret.flags |= s_Flags_F_SHADOW;
        return make_3RGKUyIO(s_kind_fn, fu::vec<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(ret), s_Node{}, createRead_9y30X3Q5(name, s_Flags{}, modid, fname, src, tokens, _idx, _loc) } }, (flags | s_Flags_F_INLINE), name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
        return /*NRVO*/ ret;

}

                                #ifndef DEF_M_LAMBDA_STMT_OK
                                #define DEF_M_LAMBDA_STMT_OK
inline constexpr int M_LAMBDA_STMT_OK = (1 << 2);
                                #endif

static s_Node parseExpressionStatement_NsEgxFfw(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node expr = parseExpression_djvSQ5j2(P_RESET, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    if (tryConsume_RS2yajZX(s_kind_op, ":"_fu, tokens, _idx))
    {
        if (!(expr.kind == s_kind_call))
            fail_a0ZqfRup("Cannot pipeline: expression is not a call."_fu, fname, src, tokens, _idx);
        else
        {
            s_Node right = parseExpression_djvSQ5j2(P_RESET, M_LAMBDA_STMT_OK, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            return pipelineLeft_4IoZWeLk(static_cast<s_Node&&>(expr), right, fname, src, tokens, _idx);
        };
    }
    else
    {
        if (softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options))
            expr.syntax |= s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL;

        return /*NRVO*/ expr;
    };
}

static s_Node parseLetOrExpressionStatement_AhqcHb1j(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& token = tokens[_idx++];
    if ((token.kind == s_kind_id) && (tokens[_idx].kind == s_kind_id))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_xskOWIkE(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        else if ((v == "mut"_fu) || (v == "ref"_fu) || (v == "val"_fu) || (v == "const"_fu) || (v == "implicit"_fu) || (v == "type"_fu))
        {
            _idx--;
            return parseLetStmt_xskOWIkE(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        };
    };
    _idx--;
    if (!_fnDepth)
    {
        fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx);
    }
    else
        return parseExpressionStatement_NsEgxFfw(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

}

                                #ifndef DEF_only_uwKwzsvZqOh
                                #define DEF_only_uwKwzsvZqOh
inline char only_uwKwzsvZ(fu::view<char> s)
{
    if (s.size() == 1)
        return s[0];
    else
        fu::fail(x7E_gCeFmDFw("len != 1: "_fu, fu::i64dec(s.size())));

}
                                #endif

static s_Node createPrefix_2MFNfWCU(const fu::str& op, /*MOV*/ s_Node&& expr, const int modid, const int _loc)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == s_kind_int) || (expr.kind == s_kind_real)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_uwKwzsvZ(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    }
    else if (op == "!"_fu)
    {
        return make_3RGKUyIO(s_kind_not, fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        return createCall_mBEz988k(op, s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_ParseSyntax{}, modid, _loc);
    };
}

static s_Node parseSubStatement_e5pF24cY(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& peek = tokens[_idx];
    if ((peek.kind != s_kind_op) || (peek.value != "{"_fu))
    {
        if (!(peek.lcc.col > _col0))
            warn_JY9fwXxS((x7E_gCeFmDFw((x7E_gCeFmDFw((("Misleading indent at `"_fu + peek.value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(peek.lcc.col)) + "."_fu), fname, src, tokens, _idx, _loc, warnings, options);

    };
    return parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

static s_Node parseIf_XBHYqa2E(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& token = tokens[(_idx - 1)];
    const s_Token& prev = ((_idx > 1) ? tokens[(_idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == s_kind_id) && (prev.value == "else"_fu)) ? prev : token);
    const s_Token& nOt = tryConsume_RS2yajZX(s_kind_op, "!"_fu, tokens, _idx);
    consume_ifLltrwq(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node cond = parseLetOrExpressionStatement_AhqcHb1j(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    consume_ifLltrwq(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    if (nOt)
        cond = createPrefix_2MFNfWCU("!"_fu, s_Node(cond), modid, _loc);

    s_Node cons = parseSubStatement_e5pF24cY(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    const s_Token& eLse = tryConsume_RS2yajZX(s_kind_id, "else"_fu, tokens, _idx);
    if (eLse)
    {
        if (!((eLse.lcc.line == token_1.lcc.line) || (eLse.lcc.col == token_1.lcc.col)))
        {
            warn_JY9fwXxS((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.lcc.col)) + ", got "_fu), fu::i64dec(eLse.lcc.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.lcc.line)) + "."_fu), fname, src, tokens, _idx, _loc, warnings, options);
        };
        s_Node alt = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        return createIf_GfIIGbSf(cond, cons, alt, s_ParseSyntax_PS_ALWAYS_DISCARD, modid, _loc);
    }
    else
        return createAnd_lIz6bDXy(cond, cons, s_ParseSyntax_PS_ALWAYS_DISCARD, modid, _loc);

}

static s_Node parseParens_pIG3IH1I(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node out = parseExpression_djvSQ5j2(P_RESET, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    out.syntax |= s_ParseSyntax_PS_PARENS;
    consume_ifLltrwq(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    return /*NRVO*/ out;
}

static s_Node tryParseLoopPreheader_muv1XVFm(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& peek = tokens[_idx];
    if ((peek.kind == s_kind_id) && (peek.value == "on"_fu))
    {
        const s_Token& peek_1 = tokens[(_idx + 1)];
        if ((peek_1.kind == s_kind_id) && (peek_1.value == "enter"_fu))
        {
            _idx += 2;
            /*MOV*/ s_Node ret = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            consume_ifLltrwq(s_kind_id, "then"_fu, fname, src, tokens, _idx);
            return /*NRVO*/ ret;
        };
    };
    return s_Node{};
}

static s_Node createLoop_8OE9KoCG(const s_Node& init, const s_Node& pre_cond, const s_Node& pre, const s_Node& body, const s_Node& post, const s_Node& post_cond, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_loop, fu::vec<s_Node> { fu::slate<6, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(pre), s_Node(body), s_Node(post), s_Node(post_cond) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseFor_qT3oAVeV(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    consume_ifLltrwq(s_kind_op, "("_fu, fname, src, tokens, _idx);
    if (tryConsume_RS2yajZX(s_kind_id, "fieldname"_fu, tokens, _idx))
    {
        const fu::str& placeholder = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
        consume_ifLltrwq(s_kind_op, ":"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node type = parseTypeAnnot_JxRmj4Ey(false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        consume_ifLltrwq(s_kind_op, ")"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node body = parseSubStatement_e5pF24cY(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        return make_3RGKUyIO(s_kind_forfieldsof, fu::vec<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(type), static_cast<s_Node&&>(body) } }, s_Flags{}, placeholder, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        s_Node init = (!tryConsume_RS2yajZX(s_kind_op, ";"_fu, tokens, _idx) ? parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : s_Node{});
        if (init && (init.kind != s_kind_let))
            fail_a0ZqfRup((x7E_gCeFmDFw("`for` expects a `let` statement, got a `"_fu, str_n4lV73pj(init.kind)) + "`."_fu), fname, src, tokens, _idx);
        else
        {
            s_Node pre_cond = (!tryConsume_RS2yajZX(s_kind_op, ";"_fu, tokens, _idx) ? parseLetOrExpressionStatement_AhqcHb1j(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : s_Node{});
            const s_Token& token = tokens[_idx];
            s_Node post = (!((token.kind == s_kind_op) && (token.value == ")"_fu)) ? parseParens_pIG3IH1I(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : (consume_ifLltrwq(s_kind_op, ")"_fu, fname, src, tokens, _idx), s_Node{}));
            s_Node pre = tryParseLoopPreheader_muv1XVFm(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            s_Node body = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            return createLoop_8OE9KoCG(init, pre_cond, pre, body, post, (*(const s_Node*)fu::NIL), modid, _loc);
        };
    };
}

static s_Node parseWhile_I1QhYpkA(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    consume_ifLltrwq(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node pre_cond = parseLetOrExpressionStatement_AhqcHb1j(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    consume_ifLltrwq(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    s_Node body = parseSubStatement_e5pF24cY(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    return createLoop_8OE9KoCG((*(const s_Node*)fu::NIL), pre_cond, (*(const s_Node*)fu::NIL), body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _loc);
}

static s_Node parseDoWhile_DbFSNEs3(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    s_Node body = parseSubStatement_e5pF24cY(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    consume_ifLltrwq(s_kind_id, "while"_fu, fname, src, tokens, _idx);
    consume_ifLltrwq(s_kind_op, "("_fu, fname, src, tokens, _idx);
    s_Node post_cond = parseLetOrExpressionStatement_AhqcHb1j(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    consume_ifLltrwq(s_kind_op, ")"_fu, fname, src, tokens, _idx);
    softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options);
    return createLoop_8OE9KoCG((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, (*(const s_Node*)fu::NIL), post_cond, modid, _loc);
}

static s_Node parseJump_hG02po1B(const s_kind kind, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (_fnDepth > 0)
    {
        const fu::str& label = (tryConsume_RS2yajZX(s_kind_op, ":"_fu, tokens, _idx) ? consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value : (*(const fu::str*)fu::NIL));
        /*MOV*/ s_Node expr {};
        if (!tryConsume_RS2yajZX(s_kind_op, ";"_fu, tokens, _idx))
        {
            expr = parseExpression_djvSQ5j2(P_RESET, M_LINT_ENSURE_INDENT, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options);
        };
        return make_3RGKUyIO(kind, (expr ? fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } } : fu::vec<s_Node>{}), s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx);
    };
}

static s_Node parseCatchErrvar_WZQFJDnD(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc)
{
    const fu::str& id = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
    return createLet_smN5JZFS(id, createRead_9y30X3Q5("string"_fu, s_Flags{}, modid, fname, src, tokens, _idx, _loc), (*(const s_Node*)fu::NIL), s_Flags{}, modid, _loc);
}

static s_Node parseTryCatch_0htiNgEo(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (_fnDepth > 0)
    {
        /*MOV*/ s_Node tRy = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        consume_ifLltrwq(s_kind_id, "catch"_fu, fname, src, tokens, _idx);
        consume_ifLltrwq(s_kind_op, "("_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node err = parseCatchErrvar_WZQFJDnD(modid, fname, src, tokens, _idx, _loc);
        consume_ifLltrwq(s_kind_op, ")"_fu, fname, src, tokens, _idx);
        /*MOV*/ s_Node cAtch = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        return make_3RGKUyIO(s_kind_try, fu::vec<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(tRy), static_cast<s_Node&&>(err), static_cast<s_Node&&>(cAtch) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
    {
        _idx--;
        fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx);
    };
}

static s_Node parseUnwrap_tkChLXD1(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node stmt = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    if (stmt.kind == s_kind_block)
    {
        stmt.items += make_3RGKUyIO(s_kind_unwrap, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
        return /*NRVO*/ stmt;
    }
    else
        fail_a0ZqfRup((("Unwrap only works for blocks, this is a "_fu + qKW_3PsDzMvu(str_n4lV73pj(stmt.kind))) + "."_fu), fname, src, tokens, _idx);

}

inline static void l_29_2_PJHJ6Vft(s_Node& item)
{
    if (item.kind == s_kind_let)
        item.flags |= s_Flags_F_PREDICATE;

}

                                #ifndef DEF_each_QJi9AqbTaNe
                                #define DEF_each_QJi9AqbTaNe
inline void each_QJi9AqbT(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
        l_29_2_PJHJ6Vft(a.mutref(i));

}
                                #endif

static s_Node parseStructDecl_QN9UXwKW(const s_kind kind, const s_Flags flags, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const fu::str& name = tryConsume_xXyIFHPn(s_kind_id, tokens, _idx).value;
    fu::vec<s_Node> args {};
    const s_Flags argFlags = ((name && tryConsume_RS2yajZX(s_kind_op, "("_fu, tokens, _idx)) ? parseArgsDecl_0b0tHnte(args, s_kind_op, ")"_fu, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : s_Flags{});
    consume_ifLltrwq(s_kind_op, "{"_fu, fname, src, tokens, _idx);
    fu::vec<s_Node> items = parseBlockLike_bSAgMgCf(s_kind_op, "}"_fu, true, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

    { {
        for (int i = 0; i < items.size(); i++)
        {
            const s_Node& item = items[i];
            if ((item.kind == s_kind_let) && (item.flags & s_Flags_F_PREDICATE))
                goto BL_1;

        };
        each_QJi9AqbT(items);
      } BL_1:;
    };
    /*MOV*/ s_Node sTruct = make_3RGKUyIO(kind, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node{}, make_3RGKUyIO(s_kind_members, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc) } }, flags, name, asserts, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    if (!args)
        return /*NRVO*/ sTruct;
    else
    {
        sTruct.value = ""_fu;
        return make_3RGKUyIO(s_kind_fn, ((args + s_Node{}) + sTruct), argFlags, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    };
}

static void set_PUB_A85zFcwG(s_Flags& flags, fu::view<char> extra, const bool autopub_ok, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, bool& _autopub)
{
    if (flags & s_Flags_F_SHADOW)
        fail_a0ZqfRup((((("Cannot "_fu + qBAD_3PsDzMvu("pub"_fu)) + " a "_fu) + qKW_3PsDzMvu("shadow"_fu)) + (extra ? (": "_fu + extra) : "."_fu)), fname, src, tokens, _idx);
    else
    {
        flags |= s_Flags_F_PUB;
        if (!autopub_ok)
            _autopub = false;

    };
}

static s_Node parsePub_gc3n8hC7(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (_fnDepth)
        fail_a0ZqfRup((((("Cannot "_fu + qBAD_3PsDzMvu("pub"_fu)) + " from within a "_fu) + qKW_3PsDzMvu("fn"_fu)) + "."_fu), fname, src, tokens, _idx);
    else
    {
        /*MOV*/ s_Node out = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        set_PUB_A85zFcwG(out.flags, fu::view<char>{}, (out.kind == s_kind_import), fname, src, tokens, _idx, _autopub);
        return /*NRVO*/ out;
    };
}

static s_Node parseShadow_7jnHazlz(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node out = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    if (out.flags & s_Flags_F_PUB)
        fail_a0ZqfRup((((("Cannot "_fu + qBAD_3PsDzMvu("shadow"_fu)) + " a "_fu) + qKW_3PsDzMvu("pub"_fu)) + "."_fu), fname, src, tokens, _idx);
    else
    {
        out.flags |= s_Flags_F_SHADOW;
        return /*NRVO*/ out;
    };
}

static s_Node parseUsing_WxcdcCvp(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node out = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    if (out.kind == s_kind_fn)
        out.flags |= s_Flags_F_CONVERSION;
    else if (out.kind == s_kind_let)
        out.flags |= s_Flags_F_USING;
    else if ((out.kind == s_kind_enum) || (out.kind == s_kind_flags) || (out.kind == s_kind_primitive))
        out.flags |= s_Flags_F_USING;
    else
        fail_a0ZqfRup((qBAD_3PsDzMvu("using"_fu) + " cannot be used here."_fu), fname, src, tokens, _idx);

    if (out.flags & s_Flags_F_OPERATOR)
        fail_a0ZqfRup((qBAD_3PsDzMvu("using"_fu) + " cannot be used on operator functions."_fu), fname, src, tokens, _idx);
    else
        return /*NRVO*/ out;

}

static s_Node parseLax_9jrKNzEV(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node out = parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    if ((out.kind == s_kind_let) || (out.kind == s_kind_fn))
    {
        out.flags |= s_Flags_F_LAX;
        return /*NRVO*/ out;
    }
    else
        fail_a0ZqfRup((qBAD_3PsDzMvu("lax"_fu) + " cannot be used here."_fu), fname, src, tokens, _idx);

}

static s_Node parseImport_WFA6leDZ(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, const int _col0, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    fu::str value { tryConsume_xXyIFHPn(s_kind_id, tokens, _idx).value };
    if (value)
    {
        while (tryConsume_RS2yajZX(s_kind_op, "::"_fu, tokens, _idx))
        {
            value += ("/"_fu + consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value);
        };
    }
    else
    {
        value = consume_ifLltrwq(s_kind_str, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
    };
    softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options);
    value = registerImport_ugbgDS9b(fu::str(value), modid, fname, _loc, imports);
    return make_3RGKUyIO(s_kind_import, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseCompilerPragma_S0oLrTyv(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const fu::str& value = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
    fu::vec<s_Node> items {};
    if (value != "break"_fu)
    {
        consume_ifLltrwq(s_kind_op, "("_fu, fname, src, tokens, _idx);
        parseCallArgs_BABVKvPl(")"_fu, items, false, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    };
    s_ParseSyntax _0 {};
    return (_0 = (softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options) ? s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL : s_ParseSyntax{}), make_3RGKUyIO(s_kind_pragma, items, s_Flags{}, value, s_DeclAsserts{}, _0, s_TokenIdx{}, modid, _loc));
}

static s_Node parseFixityDecl_0cZvb8Gd(const s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    consume_ifLltrwq(s_kind_id, "fn"_fu, fname, src, tokens, _idx);
    return parseFnDecl_x0HZ97dk(flags, fixity, asserts, expr, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

static s_Node parseOperatorDecl_wyeqfGAA(const s_Fixity fixity, const s_Flags flags, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (fixity)
    {
        return parseFixityDecl_0cZvb8Gd(flags, fixity, s_DeclAsserts{}, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    }
    else
        fail_a0ZqfRup("Falsy fixity."_fu, fname, src, tokens, _idx);

}

static s_Node parseInlineDecl_yoFjJFSS(s_Flags flags, const s_Flags F, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    flags |= F;
    fu::view<char> v = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
    if (v == "infix"_fu)
        return parseOperatorDecl_wyeqfGAA(s_Fixity_Infix, flags, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    else if (v == "prefix"_fu)
        return parseOperatorDecl_wyeqfGAA(s_Fixity_Prefix, flags, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    else if (v == "postfix"_fu)
        return parseOperatorDecl_wyeqfGAA(s_Fixity_Postfix, flags, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    else
    {
        _idx--;
        return parseFixityDecl_0cZvb8Gd(flags, s_Fixity{}, asserts, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    };
}

static s_Node parseNoInlineDecl_WesxvqeU(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    return parseInlineDecl_yoFjJFSS(s_Flags{}, s_Flags{}, s_DeclAsserts_A_NOINLINE, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

static s_Node parsePrimDecl_sob8wCh5(const s_kind kind, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const fu::str& name = tryConsume_xXyIFHPn(s_kind_id, tokens, _idx).value;
    /*MOV*/ s_Node annot = tryPopTypeAnnot_SOzY03Zo(false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    fu::vec<s_Node> items = (tryConsume_RS2yajZX(s_kind_op, "{"_fu, tokens, _idx) ? parseBlockLike_bSAgMgCf(s_kind_op, "}"_fu, false, true, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : fu::vec<s_Node>{});
    if ((kind != s_kind_enum) && (kind != s_kind_flags))
    {
        if (!(annot))
            fail_a0ZqfRup((qKW_3PsDzMvu("primitive"_fu) + " declarations require a base type annotation."_fu), fname, src, tokens, _idx);

    };
    return make_3RGKUyIO(kind, fu::vec<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(annot), (items ? make_3RGKUyIO(s_kind_members, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc) : s_Node{}) } }, s_Flags{}, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static void add_LVnVuR8v(const s_DeclAsserts assert, s_DeclAsserts& asserts, const fu::str& v, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (asserts & assert)
        fail_a0ZqfRup(("Dulicate assertion: "_fu + qKW_3PsDzMvu(v)), fname, src, tokens, _idx);
    else
        asserts |= assert;

}

static void add_wECeSnhi(const s_Flags flag, s_Flags& flags, const fu::str& v, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx)
{
    if (flags & flag)
    {
        fail_a0ZqfRup(("Duplicate qualifier: "_fu + qKW_3PsDzMvu(v)), fname, src, tokens, _idx);
    }
    else
        flags |= flag;

}

static s_Node parseExoticDecl_tr5Hu9pl(s_Flags flags, s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    for (; ; )
    {
        const fu::str& v = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
        if (v == "pure"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_PURE, asserts, v, fname, src, tokens, _idx);
        else if (v == "purectx"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_PURE_CTX, asserts, v, fname, src, tokens, _idx);
        else if (v == "purefx"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_PURE_FX, asserts, v, fname, src, tokens, _idx);
        else if (v == "novec"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_NOVEC, asserts, v, fname, src, tokens, _idx);
        else if (v == "noflow"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_NOFLOW, asserts, v, fname, src, tokens, _idx);
        else if (v == "nothrow"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_NOTHROW, asserts, v, fname, src, tokens, _idx);
        else if (v == "nocrash"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_NOCRASH, asserts, v, fname, src, tokens, _idx);
        else if (v == "noio"_fu)
            add_LVnVuR8v(s_DeclAsserts_A_NOIO, asserts, v, fname, src, tokens, _idx);
        else if (v == "extern"_fu)
            add_wECeSnhi(s_Flags_F_EXTERN, flags, v, fname, src, tokens, _idx);
        else if (v == "hotswap"_fu)
            add_wECeSnhi(s_Flags_F_HOTSWAP, flags, v, fname, src, tokens, _idx);
        else if (v == "fn"_fu)
        {
            _idx--;
            return parseInlineDecl_yoFjJFSS(s_Flags{}, flags, asserts, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        }
        else
        {
            fail_a0ZqfRup(("Unknown qualifier: "_fu + qKW_3PsDzMvu(v)), fname, src, tokens, _idx);
        };
    };
}

static s_Node parseNoCopy_hMkS4kwQ(const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    consume_ifLltrwq(s_kind_id, "struct"_fu, fname, src, tokens, _idx);
    return parseStructDecl_QN9UXwKW(s_kind_struct, s_Flags{}, asserts, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

static s_Node parseStatement_GzQ8uksl(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_loc = _idx++)])) ? *_0 : fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx));
    if (token.kind == s_kind_op)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_JHukuVno(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        else if (v == ":"_fu)
            return parseLabelledStatement_ITvfuHJO(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

    }
    else if (token.kind == s_kind_id)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_idx];
        if (_fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_XBHYqa2E(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "for"_fu)
                return parseFor_qT3oAVeV(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "while"_fu)
                return parseWhile_I1QhYpkA(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "do"_fu)
                return parseDoWhile_DbFSNEs3(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "return"_fu)
                return parseJump_hG02po1B(s_kind_return, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "break"_fu)
                return parseJump_hG02po1B(s_kind_break, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "continue"_fu)
                return parseJump_hG02po1B(s_kind_continue, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "try"_fu)
                return parseTryCatch_0htiNgEo(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

        };
        if ((peek.kind == s_kind_op) && (peek.value == "{"_fu))
        {
            if (v == "unwrap"_fu)
                return parseUnwrap_tkChLXD1(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

        };
        if ((v == "fn"_fu || /*fwd compat*/v == "test"_fu) && ((peek.kind == s_kind_id) || !_fnDepth))
        {
            return parseFnDecl_x0HZ97dk(s_Flags{}, s_Fixity{}, s_DeclAsserts{}, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        }
        else if (peek.kind == s_kind_id)
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_QN9UXwKW(s_kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_QN9UXwKW(s_kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "pub"_fu)
                return parsePub_gc3n8hC7(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "shadow"_fu)
                return parseShadow_7jnHazlz(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "using"_fu)
                return parseUsing_WxcdcCvp(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "lax"_fu)
                return parseLax_9jrKNzEV(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "import"_fu)
                return parseImport_WFA6leDZ(modid, fname, src, tokens, _idx, _loc, _col0, imports, warnings, options);
            else if (v == "pragma"_fu)
                return parseCompilerPragma_S0oLrTyv(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "inline"_fu)
            {
                return parseInlineDecl_yoFjJFSS(s_Flags{}, s_Flags_F_INLINE, s_DeclAsserts{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "noinline"_fu)
                return parseNoInlineDecl_WesxvqeU(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "infix"_fu)
            {
                return parseOperatorDecl_wyeqfGAA(s_Fixity_Infix, s_Flags{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "prefix"_fu)
            {
                return parseOperatorDecl_wyeqfGAA(s_Fixity_Prefix, s_Flags{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "postfix"_fu)
            {
                return parseOperatorDecl_wyeqfGAA(s_Fixity_Postfix, s_Flags{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "primitive"_fu)
                return parsePrimDecl_sob8wCh5(s_kind_primitive, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "flags"_fu)
                return parsePrimDecl_sob8wCh5(s_kind_flags, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "enum"_fu)
                return parsePrimDecl_sob8wCh5(s_kind_enum, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "pure"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_PURE, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "purectx"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_PURE_CTX, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "purefx"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_PURE_FX, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "novec"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_NOVEC, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "noflow"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_NOFLOW, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "nothrow"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_NOTHROW, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "nocrash"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_NOCRASH, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "noio"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_NOIO, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "fast"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags{}, s_DeclAsserts_A_FAST, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "nocopy"_fu)
                return parseNoCopy_hMkS4kwQ(s_DeclAsserts_A_NOCOPY, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "trivial"_fu)
                return parseNoCopy_hMkS4kwQ(s_DeclAsserts_A_TRIVIAL, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "extern"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags_F_EXTERN, s_DeclAsserts{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            }
            else if (v == "hotswap"_fu)
            {
                return parseExoticDecl_tr5Hu9pl(s_Flags_F_HOTSWAP, s_DeclAsserts{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            };
        };
    };
    _idx--;
    return parseLetOrExpressionStatement_AhqcHb1j(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

static s_Node parseFnBodyBranch_D4pQuvx0(const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    fu::vec<fu::str> upstreamTypeParams0 = uNion_bZpiHcbv(_upstreamTypeParams, _expectedTypeParams);
    std::swap(_upstreamTypeParams, upstreamTypeParams0);
    fu::vec<fu::str> expectedTypeParams0 = steal_SsrT85jP(_expectedTypeParams);
    fu_DEFER(std::swap(_upstreamTypeParams, upstreamTypeParams0));
    fu_DEFER(std::swap(_expectedTypeParams, expectedTypeParams0));
    tryConsume_RS2yajZX(s_kind_op, "="_fu, tokens, _idx);
    /*MOV*/ s_Node body = (expr ? parseExpression_djvSQ5j2(_precedence, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options));
    if (body.syntax & s_ParseSyntax_PS_ALWAYS_DISCARD)
    {
        body = createBlock_Xs4gphBm(fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(body) } }, (*(const fu::str*)fu::NIL), modid, _loc);
    };
    return /*NRVO*/ body;
}

static void parseBranch_xJB0C2Cj(const bool noCond, fu::view<s_Node> out_push_body, bool& TODO_FIX_didInitArgTypeParams, fu::vec<fu::str>& withArgTypeParams, fu::vec<s_Node>& branches, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (!noCond)
    {
        if (!TODO_FIX_didInitArgTypeParams)
        {
            TODO_FIX_didInitArgTypeParams = true;
            withArgTypeParams = _expectedTypeParams;
            for (int i = (out_push_body.size() - 1); i-- > 0; )
            {
                const s_Node& arg = out_push_body[i];
                fu::str argName = ((arg.kind == s_kind_let) ? ((arg.flags & s_Flags_F_COMPOUND_ID) ? cleanID_j6ljQymd(arg.value) : fu::str(arg.value)) : fu::str{});
                if (argName && (argName != "_"_fu))
                    add_mts1NXJ4(withArgTypeParams, argName);

            };
        };
        std::swap(_expectedTypeParams, withArgTypeParams);
    };
    _TODO_FIX_dollarOk = true;
    /*MOV*/ s_Node cond = (!noCond ? parseUnaryExpression_Wyb4ayQA(0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : s_Node{});
    _TODO_FIX_dollarOk = false;
    if (!noCond)
        std::swap(_expectedTypeParams, withArgTypeParams);

    /*MOV*/ s_Node type = tryPopTypeAnnot_SOzY03Zo(false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    /*MOV*/ s_Node cons = parseFnBodyBranch_D4pQuvx0(false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    branches.push(make_3RGKUyIO(s_kind_fnbranch, fu::vec<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(cond), static_cast<s_Node&&>(type), static_cast<s_Node&&>(cons) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc));
}

static s_Flags parseFnBodyOrPattern_qOh7JdpM(fu::vec<s_Node>& out_push_body, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Flags flags {};
    /*MOV*/ s_Node body {};
    bool TODO_FIX_didInitArgTypeParams = false;
    fu::vec<fu::str> withArgTypeParams {};
    if (!expr && tryConsume_RS2yajZX(s_kind_id, "case"_fu, tokens, _idx))
    {
        fu::vec<s_Node> branches {};
        do
            parseBranch_xJB0C2Cj(false, out_push_body, TODO_FIX_didInitArgTypeParams, withArgTypeParams, branches, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        while (tryConsume_RS2yajZX(s_kind_id, "case"_fu, tokens, _idx));
        if (tryConsume_RS2yajZX(s_kind_id, "default"_fu, tokens, _idx))
            parseBranch_xJB0C2Cj(true, out_push_body, TODO_FIX_didInitArgTypeParams, withArgTypeParams, branches, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

        body = make_3RGKUyIO(s_kind_pattern, branches, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    }
    else
        body = parseFnBodyBranch_D4pQuvx0(expr, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

    out_push_body.push(static_cast<s_Node&&>(body));
    return flags;
}

static s_Node parseFnDecl_cont_4u2vd9sO(const fu::str& name, s_Flags flags, const s_DeclAsserts asserts, const bool expr, const bool leadingDot, fu::view<char> endv, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const bool expr_1 = (expr ? expr : leadingDot);
    fu::vec<s_Node> items {};
    _fnDepth++;
    const int numDollars0 = _numDollars;
    fu_DEFER(
    {
        _fnDepth--;
        _numDollars = numDollars0;
    });
    if (leadingDot)
        flags |= parseLeadingDot_TDejJgK6(items, name, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    else
    {
        flags |= (endv ? parseArgsDecl_0b0tHnte(items, s_kind_op, endv, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : s_Flags{});
        /*MOV*/ s_Node type = tryPopTypeAnnot_SOzY03Zo(false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        const int retIdx = items.size();
        items.push(s_Node(type));
        flags |= parseFnBodyOrPattern_qOh7JdpM(items, expr_1, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        if ((name == "main"_fu) && (_fnDepth == 1))
        {
            if (!type)
            {
                items.mutref(retIdx) = static_cast<s_Node&&>((type = createRead_9y30X3Q5("i32"_fu, s_Flags{}, modid, fname, src, tokens, _idx, _loc)));
            }
            else if ((type.kind != s_kind_call) || (type.value != "i32"_fu) || type.items.size())
                fail_a0ZqfRup("fn main() must return i32."_fu, fname, src, tokens, _idx);

            set_PUB_A85zFcwG(flags, fu::view<char>{}, false, fname, src, tokens, _idx, _autopub);
            flags |= s_Flags_F_EXTERN;
        };
    };
    if (flags & s_Flags_F_LAMBDA)
        flags |= s_Flags_F_TEMPLATE;

    return make_3RGKUyIO(s_kind_fn, items, flags, name, asserts, (!expr_1 ? s_ParseSyntax_PS_NOT_AN_EXPRESSION : s_ParseSyntax{}), s_TokenIdx{}, modid, _loc);
}

static s_Node parseFnDecl_x0HZ97dk(s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const int loc0 = _loc;
    _loc = _idx;
    fu_DEFER(_loc = loc0);
    fu::str name { tryConsume_xXyIFHPn(s_kind_id, tokens, _idx).value };
    if (!name)
    {
        name = consume_ifLltrwq(s_kind_op, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
        if (fixity == s_Fixity_Postfix)
        {
            if (!(has_g5ZsWtbd(POSTFIX, name)))
                fail_a0ZqfRup((("No such postfix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

            if (has_g5ZsWtbd(PREFIX, name))
                name = ("postfix"_fu + name);
        }
        else if (fixity == s_Fixity_Infix)
        {
            if (!(has_JTjmFfAy(BINOP.PRECEDENCE, name)))
                fail_a0ZqfRup((("No such infix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        }
        else if (fixity == s_Fixity_Prefix)
        {
            if (!(has_g5ZsWtbd(PREFIX, name)))
                fail_a0ZqfRup((("No such prefix operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

        };
        flags |= s_Flags_F_OPERATOR;
    }
    else if ((flags & s_Flags_F_OPERATOR) || fixity)
        fail_a0ZqfRup((("Not an operator: `"_fu + name) + "`."_fu), fname, src, tokens, _idx);

    fu::vec<fu::str> expectedTypedParams0 {};
    std::swap(expectedTypedParams0, _expectedTypeParams);
    fu_DEFER(std::swap(expectedTypedParams0, _expectedTypeParams));
    tryParseTypeParamsDecl_wC2VdYU6(fname, src, tokens, _idx, _expectedTypeParams, _upstreamTypeParams);
    fu::str endv = (tryConsume_RS2yajZX(s_kind_op, "("_fu, tokens, _idx) ? ")"_fu : fu::str{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_sLA17eRn(name, flags, modid, _loc);
        else
        {
            consume_ifLltrwq(s_kind_op, "="_fu, fname, src, tokens, _idx);
        };
    };
    return parseFnDecl_cont_4u2vd9sO(name, flags, asserts, expr, false, endv, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

                                #ifndef DEF_starts_Db9eGFmCKDj
                                #define DEF_starts_Db9eGFmCKDj
inline bool starts_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static s_Node createTypeParam_2wDfSPFl(const fu::str& value, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const int _idx, const int _loc, const bool _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::view<fu::str> _upstreamTypeParams)
{
    const bool isDollar = starts_Db9eGFmC(value, '$');
    if ((!_TODO_FIX_dollarOk && isDollar) || has_g5ZsWtbd(_upstreamTypeParams, value))
    {
        return createRead_9y30X3Q5(value, s_Flags{}, modid, fname, src, tokens, _idx, _loc);
    }
    else
    {
        if (_TODO_FIX_dollarOk && isDollar)
            add_mts1NXJ4(_expectedTypeParams, value);

        _numDollars++;
        return make_3RGKUyIO(s_kind_typeparam, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
    };
}

static s_Node createArrayLiteral_xBmPG9H1(const s_Flags argFlags, const fu::vec<s_Node>& items, const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_arrlit, items, argFlags, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parseArrayLiteral_HVHnW2wO(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    fu::vec<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_BABVKvPl("]"_fu, args, false, true, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options).flags;
    return createArrayLiteral_xBmPG9H1(argFlags, args, modid, _loc);
}

static s_Node parseTypeParam_Wu7Epznd(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, const bool _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::view<fu::str> _upstreamTypeParams,

    // RETROFIT /////////
    bool oldDollarSyntax)
    // RETROFIT /////////
{
    fu::str value = ((oldDollarSyntax ? "$"_fu : ""_fu) + consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value);
    return createTypeParam_2wDfSPFl(value, modid, fname, src, tokens, _idx, _loc, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams);
}

static s_Node parseLambda_z8gvJnpB(const bool noClosingPipe, const bool leadingDot, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (noClosingPipe && (_precedence > P_RESET) && (_precedence < P_PREFIX_UNARY))
        warn_JY9fwXxS("Unparenthesized `|| lambda` within a binary expression."_fu, fname, src, tokens, _idx, _loc, warnings, options);

    fu::str name = "_"_fu;
    const s_Flags flags = (s_Flags_F_LAX | s_Flags_F_LAMBDA);
    return parseFnDecl_cont_4u2vd9sO(name, flags, s_DeclAsserts{}, !(mode & M_LAMBDA_STMT_OK), leadingDot, (!noClosingPipe ? "|"_fu : fu::str{}), modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

static s_Node createDefinit_4BgnEF3S(const int modid, const int _loc)
{
    return make_3RGKUyIO(s_kind_definit, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
}

static s_Node parsePrefix_guIekM2D(fu::str&& op, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (has_g5ZsWtbd(PREFIX, op))
    {
        if ((op == "&"_fu) && tryConsume_RS2yajZX(s_kind_id, "mut"_fu, tokens, _idx))
            op = "&mut"_fu;

        const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? M_LINT_UNARY_PRECEDENCE : 0);
        return createPrefix_2MFNfWCU(op, parseUnaryExpression_Wyb4ayQA(mode, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options), modid, _loc);
    }
    else
    {
        _idx--;
        fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx);
    };
}

static s_Node parseExpressionHead_AIC28k1n(const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& token = tokens[_idx++];

    {
        const s_kind k = token.kind;
        const fu::str& v = token.value;
        if ((k == s_kind_int) || (k == s_kind_real) || (k == s_kind_str) || (k == s_kind_char))
            return createLeaf_BO33R8nU(k, v, modid, _loc);
        else if (k == s_kind_id)
        {
            const s_Token& peek = tokens[_idx];
            if (peek.kind == s_kind_id)
            {
                if ((v == "fn"_fu) || (v == "infix"_fu) || (v == "prefix"_fu) || (v == "postfix"_fu))
                {
                    _idx++;
                    const s_Fixity fixity = ((v == "infix"_fu) ? s_Fixity_Infix : ((v == "prefix"_fu) ? s_Fixity_Prefix : ((v == "postfix"_fu) ? s_Fixity_Postfix : (_idx--, s_Fixity{}))));
                    return parseFnDecl_x0HZ97dk(s_Flags{}, fixity, s_DeclAsserts{}, true, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
                };
            };
            if ((peek.kind == s_kind_op) && (peek.value == "{"_fu))
            {
                if (v == "struct"_fu)
                {
                    return parseStructDecl_QN9UXwKW(s_kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
                }
                else if (v == "union"_fu)
                {
                    return parseStructDecl_QN9UXwKW(s_kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
                };
            };
            if (_TODO_FIX_dollarOk && has_g5ZsWtbd(_expectedTypeParams, v))
                return createTypeParam_2wDfSPFl(v, modid, fname, src, tokens, _idx, _loc, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams);
            else if (v == "_"_fu)
                return createTypeParam_2wDfSPFl(x7E_gCeFmDFw("anon:"_fu, fu::i64dec(_expectedTypeParams.size())), modid, fname, src, tokens, _idx, _loc, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams);
            else
            {
                return createRead_9y30X3Q5(v, s_Flags{}, modid, fname, src, tokens, _idx, _loc);
            };
        }
        else if (k == s_kind_op)
        {
            if (v == "("_fu)
                return parseParens_pIG3IH1I(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "{"_fu)
                return parseBlock_JHukuVno(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "["_fu)
                return parseArrayLiteral_HVHnW2wO(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "$"_fu)
                return parseTypeParam_Wu7Epznd(modid, fname, src, tokens, _idx, _loc, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, /*oldDollarSyntax*/true);
            else if (v == "|"_fu)
                return parseLambda_z8gvJnpB(false, false, mode, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "||"_fu)
                return parseLambda_z8gvJnpB(true, false, mode, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "."_fu)
                return parseLambda_z8gvJnpB(true, true, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
            else if (v == "[]"_fu)
                return createDefinit_4BgnEF3S(modid, _loc);
            else if (v == "::"_fu)
            {
                const fu::str& id = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
                _idx--;
                return parseQualifierChain_NXNdYmCl(createRead_9y30X3Q5(id, s_Flags{}, modid, fname, src, tokens, _idx, _loc), modid, fname, src, tokens, _idx, _loc, imports);
            }
            else if (v == "<"_fu)
            {
                // RETROFIT //////////////////////
                auto ret = parseTypeParam_Wu7Epznd(modid, fname, src, tokens, _idx, _loc, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, /*oldDollarSyntax*/false);
                add_mts1NXJ4(_expectedTypeParams, ret.value);
                consume_ifLltrwq(s_kind_op, ">"_fu, fname, src, tokens, _idx);
                return ret; //////////////////////
            }
            else
                return parsePrefix_guIekM2D(fu::str(v), modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);

        };
    };
    _idx--;
    fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx);
}

inline static s_Node parseExpression_djvSQ5j2(const int p1, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const int p0 = _precedence;
    const int loc00 = _loc;
    _precedence = p1;
    _loc = _idx;
    const int col00 = _col0;
    if (!((tokens[_idx].lcc.col >= (_col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_JY9fwXxS(x7E_gCeFmDFw((x7E_gCeFmDFw((("Ambiguous indent at `"_fu + tokens[_idx].value) + "`: expected more than "_fu), fu::i64dec(_col0)) + ", got "_fu), fu::i64dec(tokens[_idx].lcc.col)), fname, src, tokens, _idx, _loc, warnings, options);

    /*MOV*/ s_Node head = parseExpressionHead_AIC28k1n(mode, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    if (!s_ParseSyntax((head.syntax & s_ParseSyntax_PS_NOT_AN_EXPRESSION)))
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_kind_int) || (head.kind == s_kind_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_loc = _idx);
        s_Node out {};
        while ((out = tryParseExpressionTail_3P8LHR5x(head, mode_1, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options)))
        {

            {
                const s_Token& t1 = tokens[(_loc = loc0)];
                if (!(t1.lcc.col > col00))
                    warn_JY9fwXxS(x7E_gCeFmDFw((x7E_gCeFmDFw((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.lcc.col)), fname, src, tokens, _idx, _loc, warnings, options);

            };
            loc0 = (_loc = _idx);
            head = out;
        };
    };
    _precedence = p0;
    _loc = loc00;
    return /*NRVO*/ head;
}

static s_Node parseUnaryExpression_Wyb4ayQA(const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    return parseExpression_djvSQ5j2(P_PREFIX_UNARY, mode, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

static s_Node parseTypeAnnot_JxRmj4Ey(const bool allowTypeUnions, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    /*MOV*/ s_Node res = parseUnaryExpression_Wyb4ayQA(0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    while (allowTypeUnions && tryConsume_RS2yajZX(s_kind_id, "or"_fu, tokens, _idx))
    {
        if (res.kind != s_kind_typeunion)
        {
            res = make_3RGKUyIO(s_kind_typeunion, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(res) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc);
        };
        res.items += parseUnaryExpression_Wyb4ayQA(0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    };
    return /*NRVO*/ res;
}

static s_Node tryParseLetInit_tHOcSerL(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    if (tryConsume_RS2yajZX(s_kind_op, "="_fu, tokens, _idx))
        return parseExpression_djvSQ5j2(P_RESET, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    else
    {
        return s_Node{};
    };
}

static s_Node parseLet_smk4PW6Z(const bool xqmark, const bool allowTypeUnions, const bool allowTypeParams, const int anonIndex, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    s_Flags flags {};

    {
        if (tryConsume_QdsI94aK(s_kind_id, "using"_fu, xqmark, tokens, _idx))
            flags |= s_Flags_F_USING;

        if (tryConsume_QdsI94aK(s_kind_id, "implicit"_fu, xqmark, tokens, _idx))
            flags |= s_Flags_F_IMPLICIT;

        if (tryConsume_QdsI94aK(s_kind_id, "lax"_fu, xqmark, tokens, _idx))
            flags |= s_Flags_F_LAX;

        if (tryConsume_QdsI94aK(s_kind_id, "shadow"_fu, xqmark, tokens, _idx))
            flags |= s_Flags_F_SHADOW;

        if (tryConsume_QdsI94aK(s_kind_id, "type"_fu, xqmark, tokens, _idx))
            flags |= s_Flags_F_TYPENAME;
        else
        {
            if (tryConsume_QdsI94aK(s_kind_id, "mut"_fu, xqmark, tokens, _idx))
                flags |= s_Flags_F_MUT;
            else if (tryConsume_QdsI94aK(s_kind_id, "const"_fu, xqmark, tokens, _idx))
                flags |= s_Flags_F_CONST;

            if (tryConsume_QdsI94aK(s_kind_id, "ref"_fu, xqmark, tokens, _idx))
                flags |= s_Flags_F_REF;
            else if (tryConsume_QdsI94aK(s_kind_id, "val"_fu, xqmark, tokens, _idx))
                flags |= s_Flags_F_VAL;

        };
    };
    if ((flags & s_Flags_F_MUT) && !(flags & s_Flags_F_REF))
        flags |= s_Flags_F_VAL;

    if ((flags & s_Flags_F_CONST) && !(flags & s_Flags_F_VAL))
        flags |= s_Flags_F_REF;

    const s_Token& sh_import = tryConsume_RS2yajZX(s_kind_op, "::"_fu, tokens, _idx);
    const s_Token& sh_autocall = (xqmark ? tryConsume_RS2yajZX(s_kind_op, "."_fu, tokens, _idx) : (*(const s_Token*)fu::NIL));
    const int loc0 = _loc;
    _loc = _idx;
    fu_DEFER(_loc = loc0);

    // RETROFIT /////////////////////////////////////////
    tryConsume_RS2yajZX(s_kind_op, "<"_fu, tokens, _idx);

    fu::str id { consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value };

    // RETROFIT /////////////////////////////////////////
    tryConsume_RS2yajZX(s_kind_op, "<"_fu, tokens, _idx);

    if (id == "_"_fu)
    {
        if (anonIndex)
            id = x7E_gCeFmDFw("_ "_fu, fu::i64dec(anonIndex));

        flags |= s_Flags_F_LAX;
    };
    if (sh_autocall)
    {
        flags |= s_Flags_F_COMPOUND_ID;
        id += ("."_fu + id);
    }
    else if (xqmark && tryConsume_RS2yajZX(s_kind_op, "."_fu, tokens, _idx))
    {
        flags |= s_Flags_F_COMPOUND_ID;
        id += ("."_fu + consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value);
        while (tryConsume_RS2yajZX(s_kind_op, "::"_fu, tokens, _idx))
        {
            id += ("\t"_fu + consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value);
        };
    };
    if (xqmark && tryConsume_RS2yajZX(s_kind_op, "[]"_fu, tokens, _idx))
        flags |= s_Flags_F_REST_ARG;

    if (xqmark && tryConsume_RS2yajZX(s_kind_op, "!"_fu, tokens, _idx))
    {
        // RETROFIT /////////////////////////////////////////
        tryConsume_RS2yajZX(s_kind_op, "<"_fu, tokens, _idx);

        flags |= s_Flags_F_MUSTNAME;
        fu::view<char> inner_id = tryConsume_xXyIFHPn(s_kind_id, tokens, _idx).value;
        if (inner_id)
        {
            flags |= s_Flags_F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };

        // RETROFIT /////////////////////////////////////////
        tryConsume_RS2yajZX(s_kind_op, ">"_fu, tokens, _idx);
    };
    s_Token optional { (xqmark ? tryConsume_RS2yajZX(s_kind_op, "?"_fu, tokens, _idx) : (*(const s_Token*)fu::NIL)) };
    _TODO_FIX_dollarOk = allowTypeParams;
    fu::str _0 {};
    s_Node type = (sh_import ? (_0 = ((registerImport_ugbgDS9b(fu::str(id), modid, fname, _loc, imports) + '\t') + id), createRead_9y30X3Q5(static_cast<fu::str&&>(_0), s_Flags_F_COMPOUND_ID, modid, fname, src, tokens, _idx, _loc)) : ((xqmark && !optional && (optional = tryConsume_RS2yajZX(s_kind_op, "?:"_fu, tokens, _idx))) ? parseTypeAnnot_JxRmj4Ey(allowTypeUnions, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : tryPopTypeAnnot_SOzY03Zo(allowTypeUnions, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options)));
    _TODO_FIX_dollarOk = false;
    s_Node init = (optional ? createDefinit_4BgnEF3S(modid, _loc) : tryParseLetInit_tHOcSerL(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options));
    return createLet_smN5JZFS(id, type, init, flags, modid, _loc);
}

static s_Node parseStructItem_VN3o1iDS(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& isPredicate = tryConsume_RS2yajZX(s_kind_id, "true"_fu, tokens, _idx);
    /*MOV*/ s_Node member = parseLet_smk4PW6Z(true, false, false, 0, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options);
    if (isPredicate)
        member.flags |= s_Flags_F_PREDICATE;

    return /*NRVO*/ member;
}

static s_Node parseEnumItem_arxIquYP(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const fu::str& id = consume_ifLltrwq(s_kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _idx).value;
    s_Node init = tryParseLetInit_tHOcSerL(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
    softSemi_MnASs0li(fname, src, tokens, _idx, _loc, _col0, warnings, options);
    return createLet_smN5JZFS(id, (*(const s_Node*)fu::NIL), init, s_Flags{}, modid, _loc);
}

static s_Node parseDefer_cHXLilIa(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token* _0;
    const fu::str& value = (tryConsume_RS2yajZX(s_kind_op, ":"_fu, tokens, _idx) ? (*(_0 = &(tryConsume_RS2yajZX(s_kind_id, "err"_fu, tokens, _idx))) ? *_0 : consume_ifLltrwq(s_kind_id, "ok"_fu, fname, src, tokens, _idx)).value : (*(const fu::str*)fu::NIL));
    if (_fnDepth > 0)
    {
        fu::vec<s_Node> _1 {};
        return (_1 = fu::vec<s_Node> { fu::slate<1, s_Node> { parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) } }, make_3RGKUyIO(s_kind_defer, static_cast<fu::vec<s_Node>&&>(_1), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax_PS_ALWAYS_DISCARD, s_TokenIdx{}, modid, _loc));
    }
    else
    {
        _idx--;
        fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx);
    };
}

static s_Node parseDeferOrStatement_PQIy48QJ(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const int loc0 = _loc;
    fu_DEFER(_loc = loc0);
    const s_Token* _0;
    const s_Token& peek = (*(_0 = &(tokens[(_loc = _idx)])) ? *_0 : fail_a0ZqfRup(fu::str{}, fname, src, tokens, _idx));
    if (peek.kind == s_kind_id)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
        {
            _idx++;
            return parseDefer_cHXLilIa(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        };
    };
    return parseStatement_GzQ8uksl(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
}

inline static void warn_0rH35IQ8(const int idx, const fu::str& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, const int _loc, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const int idx0 = _idx;
    _idx = idx;
    warn_JY9fwXxS(reason, fname, src, tokens, _idx, _loc, warnings, options);
    _idx = idx0;
}

static fu::vec<s_Node> parseBlockLike_bSAgMgCf(const s_kind endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    const s_Token& tok0 = (_idx ? tokens[(_idx - 1)] : (*(const s_Token*)fu::NIL));
    const int line0 = tok0.lcc.line;
    const int col00 = _col0;
    const int col01 = ((tok0.lcc.col == col00) ? col00 : -1);
    int colNN = -1;
    int lineNN = line0;
    /*MOV*/ fu::vec<s_Node> items {};
    for (; ; )
    {
        const int idx0 = _idx;
        const s_Token& token = tokens[_idx];
        if ((token.kind == s_kind_op) && (token.value == ";"_fu))
            _idx++;
        else if ((token.kind == endKind) && (token.value == endVal))
        {
            _col0 = col00;
            _idx++;
            const int line1 = token.lcc.line;
            const int col1 = token.lcc.col;
            const int col1_min = _col0;
            const int col1_max = ((col01 < 0) ? ((colNN < 0) ? _col0 : (colNN - 1)) : col01);
            if (!((line1 == line0) || ((col1 >= col1_min) && (col1 <= col1_max))))
                warn_JY9fwXxS((x7E_gCeFmDFw((x7E_gCeFmDFw(((x7E_gCeFmDFw((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((col1_min - 1))) + ((col1_max > col1_min) ? x7E_gCeFmDFw(" up to "_fu, fu::i64dec((col1_max - 1))) : ""_fu)) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, _idx, _loc, warnings, options);

            break;
        }
        else
        {
            _col0 = token.lcc.col;
            if (!(_col0 > col00))
                warn_JY9fwXxS((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, _idx, _loc, warnings, options);

            if (!((colNN < 0) || (colNN == _col0) || (token.lcc.line == lineNN)))
                warn_JY9fwXxS((x7E_gCeFmDFw((x7E_gCeFmDFw((x7E_gCeFmDFw((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), fname, src, tokens, _idx, _loc, warnings, options);

            if (colNN < 0)
                colNN = _col0;

            lineNN = token.lcc.line;
            /*MOV*/ s_Node expr = (sTruct ? parseStructItem_VN3o1iDS(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : (eNum ? parseEnumItem_arxIquYP(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options) : parseDeferOrStatement_PQIy48QJ(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options)));
            if (!((expr.kind != s_kind_call) || (expr.flags & (s_Flags_F_CALL_HAS_ARGPARENS | s_Flags_F_OPERATOR)) || (expr.items.size() > 1) || (tokens[_idx].value == endVal)))
                warn_0rH35IQ8(idx0, "Orphaned call without parentheses, add () to imply a useful side effect."_fu, fname, src, tokens, _idx, _loc, warnings, options);

            items.push(static_cast<s_Node&&>(expr));
        };
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_EXdLsWck(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, int& _idx, int& _loc, int& _col0, int& _precedence, int& _fnDepth, bool& _autopub, bool& _TODO_FIX_dollarOk, int& _numDollars, fu::vec<fu::str>& _expectedTypeParams, fu::vec<fu::str>& _upstreamTypeParams, fu::vec<s_Import>& imports, fu::vec<fu::str>& warnings, const s_Options& options)
{
    consume_ifLltrwq(s_kind_sof, ""_fu, fname, src, tokens, _idx);
    _loc = _idx;
    fu::vec<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_bSAgMgCf(s_kind_eof, ""_fu, false, false, modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options), make_3RGKUyIO(s_kind_root, static_cast<fu::vec<s_Node>&&>(_0), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _loc));
    _idx--;
    if (_autopub)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            const s_kind k = item.kind;
            if ((k == s_kind_fn) || (k == s_kind_let) || (k == s_kind_struct) || (k == s_kind_union) || (k == s_kind_enum) || (k == s_kind_flags) || (k == s_kind_primitive))
                set_PUB_A85zFcwG(item.flags, "Module has no pubs, pubbing everything."_fu, false, fname, src, tokens, _idx, _autopub);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_SmcwBTdS(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options)
{
    int _idx = 0;
    int _loc = 0;
    int _col0 = 0;
    int _precedence = P_RESET;
    int _fnDepth = 0;
    bool _autopub = true;
    bool _TODO_FIX_dollarOk = false;
    int _numDollars = 0;
    fu::vec<fu::str> _expectedTypeParams {};
    fu::vec<fu::str> _upstreamTypeParams {};
    /*MOV*/ fu::vec<s_Import> imports {};
    /*MOV*/ fu::vec<fu::str> warnings {};
    if (tokens[(tokens.size() - 1)].kind == s_kind_eof)
    {
        /*MOV*/ s_Node root = parseRoot_EXdLsWck(modid, fname, src, tokens, _idx, _loc, _col0, _precedence, _fnDepth, _autopub, _TODO_FIX_dollarOk, _numDollars, _expectedTypeParams, _upstreamTypeParams, imports, warnings, options);
        return s_ParserOutput { static_cast<s_Node&&>(root), static_cast<fu::vec<s_Import>&&>(imports), static_cast<fu::vec<fu::str>&&>(warnings) };
    }
    else
        fail_a0ZqfRup("Missing `eof` token."_fu, fname, src, tokens, _idx);

}

#endif
