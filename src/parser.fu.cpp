#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/assert.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_ParserOutput;
struct s_Node;
enum s_Kind: fu::u8;
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
struct s_ParserState;
struct s_Precedence;
struct s_MustBeZeroAtExit;
struct s_Set_6ARmtH0K78f;
enum s_Fixity: fu::u8;
struct s_BINOP;
struct s_Map_I9V9dUCVIZ3;
struct s_ArgsParse;
fu::str qKW_e44UlzzA(const fu::str&);
fu::str qID_e44UlzzA(const fu::str&);
[[noreturn]] fu::never FAIL_k53poh8o(const fu::str&, const fu::str&, const s_LineColChars&, fu::view<char>);
fu::str qBAD_e44UlzzA(const fu::str&);
inline static s_Node parseExpression_MVLhfXwn(const s_Precedence&, int, int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&, const s_Options&);
bool hasIdentifierChars_V5IuMsej(fu::view<char>);
static fu::str getAutoName_qFInc1ha(const s_Node&, const fu::str&, const fu::str&, fu::view<s_Token>, const s_ParserState&);
static s_Node parseTypeAnnot_qFInc1ha(bool, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&, const s_Options&);
void appendVarint_V5IuMsej(fu::str&, unsigned);
static s_Node parseLet_qFInc1ha(bool, int, bool, bool, const s_Precedence&, int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&, const s_Options&);
fu::str cleanID_V5IuMsej(const fu::str&);
static s_Node parseUnaryExpression_qFInc1ha(int, int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&, const s_Options&);
inline s_Set_6ARmtH0K78f uNion_7WwCOM79(const s_Set_6ARmtH0K78f&, const s_Set_6ARmtH0K78f&);
static fu::vec<s_Node> parseBlockLike_qFInc1ha(s_Kind, fu::view<char>, bool, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&, const s_Options&);
static s_Node parseStatement_qFInc1ha(int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&, const s_Options&);
static s_Node parseFnDecl_qFInc1ha(s_Flags, s_Fixity, s_DeclAsserts, bool, int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&, const s_Options&);
static s_Node createUsing_qFInc1ha(s_Node&&, int, const fu::str&, const fu::str&, fu::view<s_Token>, s_ParserState&);
bool isFnOrTypeDeclaration_UVY6Qzz1(s_Kind);

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

                                #ifndef DEF_s_Precedence
                                #define DEF_s_Precedence
struct s_Precedence
{
    int formal;
    int whitesp_lint;
    int tokidx;
    explicit operator bool() const noexcept
    {
        return false
            || formal
            || whitesp_lint
            || tokidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_MustBeZeroAtExit
                                #define DEF_s_MustBeZeroAtExit
struct s_MustBeZeroAtExit
{
    int _fnDepth;
    int _templateDepth;
    int _loopDepth;
    int _lambdaDepth;
    int _blockArgDepth;
    bool _TODO_FIX_dollarOk;
    s_Set_6ARmtH0K78f _expectedTypeParams;
    s_Set_6ARmtH0K78f _upstreamTypeParams;
    explicit operator bool() const noexcept
    {
        return false
            || _fnDepth
            || _templateDepth
            || _loopDepth
            || _lambdaDepth
            || _blockArgDepth
            || _TODO_FIX_dollarOk
            || _expectedTypeParams
            || _upstreamTypeParams
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ParserState
                                #define DEF_s_ParserState
struct s_ParserState
{
    int _idx;
    int _loc;
    int _col0;
    s_Precedence _precedence;
    s_MustBeZeroAtExit mbz;
    bool _autopub;
    int _numDollars;
    fu::vec<s_Import> imports;
    fu::vec<fu::str> warnings;
    explicit operator bool() const noexcept
    {
        return false
            || _idx
            || _loc
            || _col0
            || _precedence
            || mbz
            || _autopub
            || _numDollars
            || imports
            || warnings
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

                                #ifndef DEF_s_Map_I9V9dUCVIZ3
                                #define DEF_s_Map_I9V9dUCVIZ3
struct s_Map_I9V9dUCVIZ3
{
    s_Set_6ARmtH0K78f keys;
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
    s_Map_I9V9dUCVIZ3 PRECEDENCE;
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

[[noreturn]] static fu::never fail_94Qvv8bz(fu::str&& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    const s_Token& token = tokens[_ps._idx];
    if (!reason)
        reason = (("Unexpected `"_fu + token.value) + "`."_fu);

    FAIL_k53poh8o(fname, src, token.lcc, reason);
}

static const s_Token& consume_qFInc1ha(const s_Kind kind, const fu::str& value, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    const s_Token& token = tokens[_ps._idx];
    if ((token.kind == kind) && (!value || (token.value == value)))
    {
        _ps._idx++;
        return token;
    }
    else
    {
        fail_94Qvv8bz(((((("Expected "_fu + qKW_e44UlzzA(str_WkqQ7QhO(kind))) + ((value && (kind == token.kind)) ? (" "_fu + qID_e44UlzzA(value)) : fu::str{})) + "\n\t     got "_fu) + qKW_e44UlzzA(str_WkqQ7QhO(token.kind))) + ((value && (kind == token.kind)) ? (" "_fu + qID_e44UlzzA(token.value)) : fu::str{})), fname, src, tokens, _ps);
    };
}

                                #ifndef DEF_x7E_3lDd4lqoIHf
                                #define DEF_x7E_3lDd4lqoIHf
inline fu::str x7E_3lDd4lqo(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::str fail_compose_qFInc1ha(fu::str&& reason, fu::view<char> fname, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    const s_Token& loc = tokens[_ps._loc];
    const s_Token& here = tokens[_ps._idx];
    if (!reason)
        reason = (("Unexpected `"_fu + here.value) + "`."_fu);

    const int l0 = loc.lcc.line;
    const int c0 = loc.lcc.col;
    const int l1 = here.lcc.line;
    const int c1 = here.lcc.col;
    fu::str addr = ((l1 == l0) ? x7E_3lDd4lqo((x7E_3lDd4lqo("@"_fu, fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)) : x7E_3lDd4lqo((x7E_3lDd4lqo((x7E_3lDd4lqo((x7E_3lDd4lqo("@"_fu, fu::i64dec(l0)) + ":"_fu), fu::i64dec(c0)) + ".."_fu), fu::i64dec(l1)) + ":"_fu), fu::i64dec(c1)));
    return (((fname + " "_fu) + addr) + ":\n\t"_fu) + reason;
}

static void warn_qFInc1ha(const fu::str& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (_ps.warnings.size() == options.lint.maxwarn)
        fail_94Qvv8bz(fu::str(reason), fname, src, tokens, _ps);
    else
        _ps.warnings += fail_compose_qFInc1ha(fu::str(reason), fname, tokens, _ps);

}

static const s_Token& tryConsume_94Qvv8bz(const s_Kind kind, fu::view<char> value, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    const s_Token& token = tokens[_ps._idx];
    if ((token.kind == kind) && (token.value == value))
    {
        _ps._idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}

static const s_Precedence P_RESET fu_INIT_PRIORITY(1007) = s_Precedence { 1000, 0, 0 };

                                #ifndef DEF_tryConsume_ke9qGwne7g8
                                #define DEF_tryConsume_ke9qGwne7g8
inline static const s_Token& tryConsume_ke9qGwne(const s_Kind kind, fu::view<char> value, const bool xqmark, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    const s_Token& token = tokens[_ps._idx];
    bool BL_1_v {};
    if ((token.kind == kind) && (token.value == value) && (__extension__ (
    {
        const s_Token& token_1 = tokens[(_ps._idx + 1)];
        BL_1_v = (((token_1.kind == s_Kind_id) || ((xqmark && (token_1.kind == s_Kind_op)) ? ((token_1.value == "."_fu) || (token_1.value == "<"_fu)) : false)));
    (void)0;}), BL_1_v))
    {
        _ps._idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}
                                #endif

static void set_SHADOW_qFInc1ha(s_Flags& flags, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    if (flags & s_Flags_F_PUB)
        fail_94Qvv8bz(((("Cannot "_fu + qBAD_e44UlzzA("shadow"_fu)) + " a "_fu) + qKW_e44UlzzA("pub"_fu)), fname, src, tokens, _ps);
    else if (_ps.mbz._fnDepth)
        flags |= s_Flags_F_SHADOW;
    else
        fail_94Qvv8bz("Shadowing is currently only supported inside functions."_fu, fname, src, tokens, _ps);

}

static const s_Token& tryConsume_qFInc1ha(const s_Kind kind, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    const s_Token& token = tokens[_ps._idx];
    if (token.kind == kind)
    {
        _ps._idx++;
        return token;
    }
    else
        return (*(const s_Token*)fu::NIL);

}

static const s_Precedence P_PREFIX_UNARY fu_INIT_PRIORITY(1007) = s_Precedence { 1, 0, 0 };

                                #ifndef DEF_M_LINT_ENSURE_INDENT
                                #define DEF_M_LINT_ENSURE_INDENT
inline constexpr int M_LINT_ENSURE_INDENT = (1 << 1);
                                #endif

static s_Node make_qFInc1ha(const s_Kind kind, const fu::vec<s_Node>& items, const s_Flags flags, const fu::str& value, const s_DeclAsserts asserts, const s_ParseSyntax syntax, const s_TokenIdx& token, const int modid, const s_ParserState& _ps)
{
    return s_Node { kind, asserts, syntax, flags, fu::str(value), fu::vec<s_Node>(items), (token ? s_TokenIdx(token) : s_TokenIdx { modid, _ps._loc }) };
}

static s_Node createLeaf_qFInc1ha(const s_Kind kind, const fu::str& value, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(kind, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static const fu::vec<fu::str> POSTFIX fu_INIT_PRIORITY(1007) = fu::vec<fu::str> { fu::slate<4, fu::str> { "++"_fu, "--"_fu, "[]"_fu, "[..]"_fu } };

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

static const fu::vec<fu::str> PREFIX fu_INIT_PRIORITY(1007) = fu::vec<fu::str> { fu::slate<10, fu::str> { "++"_fu, "+"_fu, "--"_fu, "-"_fu, "!"_fu, "~"_fu, "?"_fu, "*"_fu, "&"_fu, "-%"_fu } };

                                #ifndef DEF_ensure_lwb4YOuoboe
                                #define DEF_ensure_lwb4YOuoboe
inline bool& ensure_lwb4YOuo(fu::vec<bool>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_update_6mCqOHvOSF6
                                #define DEF_update_6mCqOHvOSF6
inline bool update_6mCqOHvO(s_Set_6ARmtH0K78f& _, const fu::str& key, fu::vec<int>& values, const int value)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
        {
            values.mutref(i) = value;
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    const int i = lo;
    _.keys_asc.insert(i, fu::str(key));
    values.insert(i, value);
    return true;
}
                                #endif

                                #ifndef DEF_set_84Xf7O4qVf8
                                #define DEF_set_84Xf7O4qVf8
inline bool set_84Xf7O4q(s_Map_I9V9dUCVIZ3& _, const fu::str& key, const int value)
{
    return update_6mCqOHvO(_.keys, key, _.vals, value);
}
                                #endif

static void binop_qFInc1ha(fu::view<fu::str> ops, s_BINOP& out, int& precedence, const bool rightToLeft)
{
    precedence++;
    if (precedence < 64)
    {
        ensure_lwb4YOuo(out.RIGHT_TO_LEFT, precedence) = rightToLeft;
        for (int i = 0; i < ops.size(); i++)
            set_84Xf7O4q(out.PRECEDENCE, ops[i], precedence);

    }
    else
        fu::fail("Assertion failed: precedence < 64"_fu);

}

static s_BINOP setupOperators_qFInc1ha()
{
    /*MOV*/ s_BINOP out {};
    int precedence = P_PREFIX_UNARY.formal;
    bool rightToLeft = false;
    rightToLeft = false;
    binop_qFInc1ha((fu::slate<4, fu::str> { "*"_fu, "/"_fu, "%"_fu, "*%"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<4, fu::str> { "+"_fu, "-"_fu, "+%"_fu, "-%"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<2, fu::str> { "<<"_fu, ">>"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<1, fu::str> { "&"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<1, fu::str> { "^"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<1, fu::str> { "|"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<1, fu::str> { "~"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<2, fu::str> { "<>"_fu, "!<>"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<2, fu::str> { "=>"_fu, "->"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<4, fu::str> { "<"_fu, "<="_fu, ">"_fu, ">="_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<2, fu::str> { "=="_fu, "!="_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<1, fu::str> { "&&"_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<1, fu::str> { "||"_fu }), out, precedence, rightToLeft);
    rightToLeft = true;
    binop_qFInc1ha((fu::slate<21, fu::str> { "?"_fu, "="_fu, "+="_fu, "-="_fu, "**="_fu, "*="_fu, "/="_fu, "%="_fu, "<<="_fu, ">>="_fu, "&="_fu, "^="_fu, "|="_fu, "||="_fu, "&&="_fu, ".="_fu, "~="_fu, ":="_fu, "+%="_fu, "-%="_fu, "*%="_fu }), out, precedence, rightToLeft);
    binop_qFInc1ha((fu::slate<1, fu::str> { "<|"_fu }), out, precedence, rightToLeft);
    rightToLeft = false;
    binop_qFInc1ha((fu::slate<1, fu::str> { "|>"_fu }), out, precedence, rightToLeft);
    return /*NRVO*/ out;
}

static const s_BINOP BINOP fu_INIT_PRIORITY(1007) = setupOperators_qFInc1ha();

                                #ifndef DEF_has_fdEaTHNUjS8
                                #define DEF_has_fdEaTHNUjS8
inline bool has_fdEaTHNU(const s_Set_6ARmtH0K78f& _, fu::view<char> key)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
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

                                #ifndef DEF_has_Zl0XKnjhqid
                                #define DEF_has_Zl0XKnjhqid
inline bool has_Zl0XKnjh(const s_Map_I9V9dUCVIZ3& _, fu::view<char> key)
{
    return has_fdEaTHNU(_.keys, key);
}
                                #endif

                                #ifndef DEF_steal_7R3sCSEEa85
                                #define DEF_steal_7R3sCSEEa85
inline s_Set_6ARmtH0K78f steal_7R3sCSEE(s_Set_6ARmtH0K78f& v)
{
    /*MOV*/ s_Set_6ARmtH0K78f ret {};
    std::swap(v, ret);
    return /*NRVO*/ ret;
}
                                #endif

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

static void parseAndAdd_qFInc1ha(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    const fu::str& id = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
    if (has_fdEaTHNU(_ps.mbz._upstreamTypeParams, id) || !add_eHVOG4pi(_ps.mbz._expectedTypeParams, id))
        fail_94Qvv8bz((("Duplicate type parameter: "_fu + qBAD_e44UlzzA(id)) + "."_fu), fname, src, tokens, _ps);

}

static void tryParseTypeParamsDecl_qFInc1ha(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    if (tryConsume_94Qvv8bz(s_Kind_op, "!"_fu, tokens, _ps) || (tryConsume_94Qvv8bz(s_Kind_op, "<"_fu, tokens, _ps) && (_ps._idx--, true)))
    {
        if (tryConsume_94Qvv8bz(s_Kind_op, "<"_fu, tokens, _ps))
        {
            bool first = true;
            for (; ; )
            {
                if (tryConsume_94Qvv8bz(s_Kind_op, ">"_fu, tokens, _ps))
                    break;
                else
                {
                    if (!first)
                        consume_qFInc1ha(s_Kind_op, ","_fu, fname, src, tokens, _ps);

                    first = false;
                    parseAndAdd_qFInc1ha(fname, src, tokens, _ps);
                };
            };
        }
        else
            parseAndAdd_qFInc1ha(fname, src, tokens, _ps);

    };
}

static s_Node createAddrOfFn_qFInc1ha(const fu::str& name, const s_Flags flags, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_addroffn, (*(const fu::vec<s_Node>*)fu::NIL), flags, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node createLet_qFInc1ha(const fu::str& id, const s_Node& type, const s_Node& init, const s_Flags flags, const s_ParseSyntax syntax, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_let, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(type), s_Node(init) } }, flags, id, s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _ps);
}

static s_Node createCall_qFInc1ha(const fu::str& id, const s_Flags flags, const fu::vec<s_Node>& args, const s_ParseSyntax syntax, const s_TokenIdx& token, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_call, args, flags, id, s_DeclAsserts{}, syntax, token, modid, _ps);
}

static s_Node createRead_qFInc1ha(const fu::str& id, const s_Flags flags, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    if ((id == "true"_fu) || (id == "false"_fu))
    {
        return make_qFInc1ha(s_Kind_bool, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    }
    else
    {
        return createCall_qFInc1ha((id ? id : fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps)), flags, (*(const fu::vec<s_Node>*)fu::NIL), s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    };
}

                                #ifndef DEF_M_LINT_UNARY_PRECEDENCE
                                #define DEF_M_LINT_UNARY_PRECEDENCE
inline constexpr int M_LINT_UNARY_PRECEDENCE = (1 << 0);
                                #endif

static void lint_qFInc1ha(const int mode, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (mode & M_LINT_UNARY_PRECEDENCE)
        warn_qFInc1ha((("Here the unary -/+ separates from the numeric literal,"_fu + " and wraps around the whole expression."_fu) + " Please parenthesize explicitly to make this obvious."_fu), fname, src, tokens, _ps, options);

}

static s_Node parseAccessExpression_qFInc1ha(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    _ps._loc = _ps._idx;
    s_Token id { tryConsume_qFInc1ha(s_Kind_id, tokens, _ps) };
    if (!id)
    {
        consume_qFInc1ha(s_Kind_op, "::"_fu, fname, src, tokens, _ps);
        id = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps);
        _ps._idx -= 2;
    };
    return createCall_qFInc1ha(id.value, s_Flags_F_CALL_HAS_DOT, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

                                #ifndef DEF_last_LbltPilu7l1
                                #define DEF_last_LbltPilu7l1
inline s_Node& last_LbltPilu(fu::view_mut<s_Node> s)
{
    return s.mutref((s.size() - 1));
}
                                #endif

static s_Node createArgID_qFInc1ha(const fu::str& id, const s_Node& expr, const s_Flags flags, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_argid, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(expr) } }, flags, id, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static void softComma_qFInc1ha(fu::view<char> endop, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& peek = tokens[_ps._idx];
    if (peek.kind == s_Kind_op)
    {
        if (peek.value == ","_fu)
        {
            _ps._idx++;
            return;
        }
        else if (peek.value == endop)
            return;

    };
    if (!((peek.kind == s_Kind_str) != (tokens[(_ps._idx - 1)].kind == s_Kind_str)))
        warn_qFInc1ha((("Missing comma before "_fu + qBAD_e44UlzzA(peek.value)) + "."_fu), fname, src, tokens, _ps, options);

}

                                #ifndef DEF_max_yeUdQhUA9W5
                                #define DEF_max_yeUdQhUA9W5
inline int max_yeUdQhUA(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_M_CALLSITE_ARGUMENT_POS
                                #define DEF_M_CALLSITE_ARGUMENT_POS
inline constexpr int M_CALLSITE_ARGUMENT_POS = (1 << 3);
                                #endif

static fu::str getAutoName_qFInc1ha(const s_Node& expr, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    if (hasIdentifierChars_V5IuMsej(expr.value) && ((expr.kind == s_Kind_call) || (expr.kind == s_Kind_typeparam) || (expr.kind == s_Kind_addroffn)))
        return fu::str(expr.value);
    else if (expr.items)
    {
        const int i = (((expr.kind == s_Kind_and) && (expr.items.size() - 1)) ? ((expr.kind == s_Kind_if) ? 1 : 0) : 0);
        return getAutoName_qFInc1ha(expr.items[i], fname, src, tokens, _ps);
    }
    else
        fail_94Qvv8bz("Cannot :autoname this expression."_fu, fname, src, tokens, _ps);

}

static s_ArgsParse parseCallArgs_qFInc1ha(fu::view<char> endop, fu::vec<s_Node>& out_args, const bool sliceSyntax, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    s_Flags flags {};
    bool sliceSyntax_used {};
    const int col00 = _ps._col0;
    for (; ; )
    {
        fu::str name = ""_fu;

        { {
            if (sliceSyntax && !sliceSyntax_used)
            {
                const s_Token& peek = tokens[_ps._idx];
                if ((peek.kind == s_Kind_op) && (peek.value == ".."_fu))
                {
                    if (out_args)
                    {
                        s_Node& last = last_LbltPilu(out_args);
                        if (last.kind == s_Kind_argid)
                        {
                            fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
                        }
                        else
                        {
                            last = createArgID_qFInc1ha("start"_fu, last, s_Flags{}, modid, _ps);
                            flags |= s_Flags_F_CALL_HAS_NAMED_ARGS;
                        };
                    };
                    _ps._idx++;
                    sliceSyntax_used = true;
                    const s_Token& peek_1 = tokens[_ps._idx];
                    if ((peek_1.kind == s_Kind_op) && (peek_1.value == ","_fu))
                        _ps._idx++;
                    else
                        name = "end"_fu;

                    goto BL_3;
                };
            };
            if (out_args)
                softComma_qFInc1ha(endop, fname, src, tokens, _ps, options);

          } BL_3:;
        };
        if (tryConsume_94Qvv8bz(s_Kind_op, endop, tokens, _ps))
            break;
        else
        {
            bool autoName = false;
            bool optional = false;
            const s_Token& tok0 = tokens[_ps._idx];
            _ps._col0 = ((tok0.lcc.line > tokens[(_ps._idx - 1)].lcc.line) ? max_yeUdQhUA(tok0.lcc.col, col00) : col00);
            if (!(name))
            {
                if ((tok0.kind == s_Kind_op) && (tok0.value == "?:"_fu))
                {
                    autoName = true;
                    optional = true;
                    _ps._idx += 1;
                }
                else if ((tok0.kind == s_Kind_op) && (tok0.value == ":"_fu))
                {
                    autoName = true;
                    _ps._idx += 1;
                }
                else if (tok0.kind == s_Kind_id)
                {
                    const s_Token& tok1 = tokens[(_ps._idx + 1)];
                    if (tok1.kind == s_Kind_op)
                    {
                        if ((tok1.value == ":"_fu) || (optional = (tok1.value == "?:"_fu)))
                        {
                            name = tok0.value;
                            _ps._idx += 2;
                        };
                    };
                };
            };
            /*MOV*/ s_Node expr = parseExpression_MVLhfXwn(P_RESET, M_CALLSITE_ARGUMENT_POS, modid, fname, src, tokens, _ps, options);
            if (autoName)
                name = getAutoName_qFInc1ha(expr, fname, src, tokens, _ps);

            if (name)
            {
                flags |= s_Flags_F_CALL_HAS_NAMED_ARGS;
                if ((expr.kind == s_Kind_fn) && (expr.value == "_"_fu))
                    expr.value = name;

            };
            out_args.push((name ? createArgID_qFInc1ha(name, expr, (optional ? s_Flags_F_ARGID_IS_OPTIONAL : s_Flags{}), modid, _ps) : static_cast<s_Node&&>(expr)));
        };
    };
    _ps._col0 = col00;
    return s_ArgsParse { flags, sliceSyntax_used };
}

static s_Node parseCallExpression_qFInc1ha(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    fu::vec<s_Node> args {};
    const int numDollars0 = _ps._numDollars;
    s_Flags argFlags = parseCallArgs_qFInc1ha(")"_fu, args, false, modid, fname, src, tokens, _ps, options).flags;
    if (_ps._numDollars > numDollars0)
        argFlags |= s_Flags_F_TEMPLATE;

    const s_Flags flags = (expr.flags | argFlags);

    { {
        if (!(expr.syntax & s_ParseSyntax_PS_PARENS))
        {
            if ((expr.kind == s_Kind_call) && ((flags & (s_Flags_F_CALL_HAS_DOT | s_Flags_F_CALL_HAS_ARGPARENS)) == s_Flags_F_CALL_HAS_DOT))
            {
                const s_Node* _0;
                const s_Node& head = (*(_0 = &(((expr.items.size() == 1) ? expr.items[0] : (*(const s_Node*)fu::NIL)))) ? *_0 : fu::fail("Malformed property access expression."_fu));
                args.unshift(s_Node(head));
            }
            else
            {
                if (!((expr.kind == s_Kind_call) && !(flags & (s_Flags_F_CALL_HAS_DOT | s_Flags_F_CALL_HAS_ARGPARENS))))
                {
                    if (!(expr.kind == s_Kind_typeparam))
                        goto BL_2;

                };
            };
            return createCall_qFInc1ha((expr.value ? expr.value : fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps)), (flags | s_Flags_F_CALL_HAS_ARGPARENS), args, s_ParseSyntax{}, expr.token, modid, _ps);
        };
      } BL_2:;
    };
    return make_qFInc1ha(s_Kind_call_indir, (expr + args), argFlags, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node parseIndexExpression_qFInc1ha(const s_Node& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    fu::vec<s_Node> args {};
    const s_ArgsParse argsParse = parseCallArgs_qFInc1ha("]"_fu, args, true, modid, fname, src, tokens, _ps, options);
    args.unshift(s_Node(expr));
    return createCall_qFInc1ha((argsParse.sliceSyntax ? "[..]"_fu : "[]"_fu), (argsParse.flags | s_Flags_F_OPERATOR), args, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

                                #ifndef DEF_get_iaK1LCoFDvd
                                #define DEF_get_iaK1LCoFDvd
inline int get_iaK1LCoF(const s_Set_6ARmtH0K78f& _, fu::view<char> key, fu::view<int> values)
{
    fu::view<fu::str> keys_asc = _.keys_asc;
    int lo = 0;
    int hi = keys_asc.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_bv5nK4Kl(keys_asc[i], key);
        if (cmp == 0)
            return values[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    return int{};
}
                                #endif

                                #ifndef DEF_get_KlIlvQCYm75
                                #define DEF_get_KlIlvQCYm75
inline int get_KlIlvQCY(const s_Map_I9V9dUCVIZ3& _, fu::view<char> key)
{
    return get_iaK1LCoF(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_uNsigned_fAw9WufW9A7
                                #define DEF_uNsigned_fAw9WufW9A7
inline unsigned uNsigned_fAw9WufW(const int v)
{
    return unsigned(v);
}
                                #endif

                                #ifndef DEF_iF_hfA0DDNjcB3
                                #define DEF_iF_hfA0DDNjcB3
inline const s_Token& iF_hfA0DDNj(fu::view<s_Token> a, const int i)
{
    if (uNsigned_fAw9WufW(i) < uNsigned_fAw9WufW(a.size()))
        return a[i];
    else
        return (*(const s_Token*)fu::NIL);

}
                                #endif

                                #ifndef DEF_min_O25D0jcUwAc
                                #define DEF_min_O25D0jcUwAc
inline int min_O25D0jcU(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

static int whitespaceDiff_qFInc1ha(const s_Token& prev, const s_Token& next)
{
    if (prev.lcc.line < next.lcc.line)
        return 10;
    else
        return max_yeUdQhUA(0, min_O25D0jcU(1, ((next.lcc.col - prev.lcc.col) - prev.lcc.chars)));

}

                                #ifndef DEF_abs_CUvFTXV0DPe
                                #define DEF_abs_CUvFTXV0DPe
inline int abs_CUvFTXV0(const int v)
{
    if (v < 0)
        return -v;
    else
        return v;

}
                                #endif

static s_Node createIf_qFInc1ha(const s_Node& cond, const s_Node& cons, const s_Node& alt, const s_ParseSyntax syntax, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_if, fu::vec<s_Node> { fu::slate<3, s_Node> { s_Node(cond), s_Node(cons), s_Node(alt) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _ps);
}

static s_Node flattenIfSame_qFInc1ha(const s_Kind kind, const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const s_ParserState& _ps)
{
    const s_Kind k_left = left.kind;
    const s_Kind k_right = right.kind;
    fu::vec<s_Node> items = (((k_left == kind) && (k_right == kind)) ? (left.items + right.items) : ((k_left == kind) ? (left.items + right) : ((k_right == kind) ? (left + right.items) : fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(left), s_Node(right) } })));
    return make_qFInc1ha(kind, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, syntax, s_TokenIdx{}, modid, _ps);
}

static s_Node createOr_qFInc1ha(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const s_ParserState& _ps)
{
    return flattenIfSame_qFInc1ha(s_Kind_or, left, right, syntax, modid, _ps);
}

static s_Node createAnd_qFInc1ha(const s_Node& left, const s_Node& right, const s_ParseSyntax syntax, const int modid, const s_ParserState& _ps)
{
    return flattenIfSame_qFInc1ha(s_Kind_and, left, right, syntax, modid, _ps);
}

static s_Node pipelineRight_qFInc1ha(const s_Node& left, /*MOV*/ s_Node&& right, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    if (right.kind != s_Kind_call)
        fail_94Qvv8bz("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _ps);
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

static s_Node pipelineLeft_qFInc1ha(/*MOV*/ s_Node&& left, const s_Node& right, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    if (left.kind != s_Kind_call)
        fail_94Qvv8bz("Cannot pipeline: not a call expr."_fu, fname, src, tokens, _ps);
    else
    {
        left.items.push(s_Node(right));
        left.flags |= s_Flags_F_CALL_HAS_ARGPARENS;
        return static_cast<s_Node&&>(left);
    };
}

static s_Node letShorthand_qFInc1ha(const s_Node& left, const s_Node& right, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_ParserState& _ps)
{
    if ((left.kind != s_Kind_call) || left.flags || left.items)
    {
        fail_94Qvv8bz("Invalid let shorthand - left side not an identifier."_fu, fname, src, tokens, _ps);
    }
    else
    {
        return createLet_qFInc1ha(left.value, (*(const s_Node*)fu::NIL), right, s_Flags{}, s_ParseSyntax{}, modid, _ps);
    };
}

static s_Node typeCheck_qFInc1ha(const s_Node& actual, const s_Node& expect, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_typeassert, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node typeCast_qFInc1ha(const s_Node& actual, const s_Node& expect, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_typecast, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(actual), s_Node(expect) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node tryParseBinary_qFInc1ha(const s_Node& left, const s_Token& op, const int p1, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const bool miss = ((p1 > _ps._precedence.formal) || ((p1 == _ps._precedence.formal) ? !BINOP.RIGHT_TO_LEFT[p1] : false));
    const int whitesp_lint = max_yeUdQhUA(whitespaceDiff_qFInc1ha(iF_hfA0DDNj(tokens, (_ps._idx - 1)), op), whitespaceDiff_qFInc1ha(op, iF_hfA0DDNj(tokens, (_ps._idx + 1))));
    if (_ps._precedence.tokidx)
    {
        const int whitespace_diff = (whitesp_lint - _ps._precedence.whitesp_lint);
        const bool multiline = (abs_CUvFTXV0(whitespace_diff) > 1);
        bool BL_2_v {};
        if ((miss ? (whitespace_diff < 0) : (whitespace_diff > 0)) && (p1 != _ps._precedence.formal) && (!multiline || (__extension__ (
        {
            const int indent_diff = (op.lcc.col - tokens[_ps._precedence.tokidx].lcc.col);
            BL_2_v = ((miss ? (indent_diff >= 0) : (indent_diff <= 0)));
        (void)0;}), BL_2_v)) && !BINOP.RIGHT_TO_LEFT[p1] && !BINOP.RIGHT_TO_LEFT[_ps._precedence.formal])
        {
            if (miss)
                _ps._idx = _ps._precedence.tokidx;

            warn_qFInc1ha((("Misleading whitespace: misrepresents operator precedence."_fu + "\n\n\tPlease parenthesize this expression to disambiguate"_fu) + (multiline ? ((","_fu + "\n\t\tindent the stronger operator further to the right,"_fu) + "\n\t\tor put the weaker operator on a new line."_fu) : "."_fu)), fname, src, tokens, _ps, options);
        };
    };
    if (miss)
    {
        return s_Node{};
    }
    else
    {
        const s_Precedence p1_1 = s_Precedence { p1, whitesp_lint, _ps._idx };
        _ps._idx++;
        const fu::str& op_1 = op.value;
        s_Node mid {};
        if (op_1 == "?"_fu)
        {
            mid = parseExpression_MVLhfXwn(P_RESET, int{}, modid, fname, src, tokens, _ps, options);
            consume_qFInc1ha(s_Kind_op, ":"_fu, fname, src, tokens, _ps);
        };
        /*MOV*/ s_Node right = (((op_1 == "->"_fu) || (op_1 == "=>"_fu)) ? parseTypeAnnot_qFInc1ha(false, true, modid, fname, src, tokens, _ps, options) : parseExpression_MVLhfXwn(p1_1, int{}, modid, fname, src, tokens, _ps, options));
        if (mid)
        {
            return createIf_qFInc1ha(left, mid, right, s_ParseSyntax{}, modid, _ps);
        }
        else if (op_1 == "||"_fu)
        {
            return createOr_qFInc1ha(left, right, s_ParseSyntax{}, modid, _ps);
        }
        else if (op_1 == "&&"_fu)
        {
            return createAnd_qFInc1ha(left, right, s_ParseSyntax{}, modid, _ps);
        }
        else
        {
            if ((left.kind == s_Kind_and) || (left.kind == s_Kind_or))
            {
                if (!(left.syntax & s_ParseSyntax_PS_PARENS))
                    warn_qFInc1ha((((x7E_3lDd4lqo("Unparenthesized `"_fu, str_WkqQ7QhO(left.kind)) + "` on the left side of an `"_fu) + op_1) + "`."_fu), fname, src, tokens, _ps, options);

            };
            if (op_1 == "|>"_fu)
                return pipelineRight_qFInc1ha(left, static_cast<s_Node&&>(right), fname, src, tokens, _ps);
            else if (op_1 == "<|"_fu)
                return pipelineLeft_qFInc1ha(s_Node(left), right, fname, src, tokens, _ps);
            else if (op_1 == ":="_fu)
                return letShorthand_qFInc1ha(left, right, modid, fname, src, tokens, _ps);
            else if (op_1 == "->"_fu)
                return typeCheck_qFInc1ha(left, right, modid, _ps);
            else if (op_1 == "=>"_fu)
                return typeCast_qFInc1ha(left, right, modid, _ps);
            else
            {
                return createCall_qFInc1ha(op_1, s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node(left), static_cast<s_Node&&>(right) } }, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
            };
        };
    };
}

                                #ifndef DEF_only_CiCfNZS0A49
                                #define DEF_only_CiCfNZS0A49
inline const s_Node& only_CiCfNZS0(fu::view<s_Node> s)
{
    fu_ASSERT((s.size() == 1));
    return s[0];
}
                                #endif

static s_Node createTypeTag_qFInc1ha(const fu::str& value, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_typetag, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static fu::str registerImport_qFInc1ha(/*MOV*/ fu::str&& pattern, fu::view<char> id, const int modid, s_ParserState& _ps)
{
    int index = _ps.imports.size();

    { {
        if (id)
            (pattern += '\t') += id;

        for (int i = 0; i < _ps.imports.size(); i++)
        {
            if (_ps.imports[i].pattern == pattern)
            {
                index = i;
                goto BL_1;
            };
        };
        _ps.imports += s_Import { s_TokenIdx { modid, _ps._loc }, static_cast<fu::str&&>(pattern), 0 };
      } BL_1:;
    };
    /*MOV*/ fu::str marker = ""_fu;
    appendVarint_V5IuMsej(marker, unsigned(modid));
    appendVarint_V5IuMsej(marker, unsigned(index));
    marker += id;
    return /*NRVO*/ marker;
}

static s_Node parseQualifierChain_qFInc1ha(/*MOV*/ s_Node&& expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    if (expr.kind != s_Kind_addroffn)
    {
        if ((expr.kind != s_Kind_call) || (expr.items.size() > 1) || (expr.flags & ~s_Flags_F_CALL_HAS_DOT))
        {
            _ps._idx--;
            fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
        };
    };
    expr.flags |= s_Flags_F_COMPOUND_ID;
    /*MOV*/ fu::str path { expr.value };
    for (; ; )
    {
        const fu::str& id = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
        if (!tryConsume_94Qvv8bz(s_Kind_op, "::"_fu, tokens, _ps))
        {
            if ((path == "is"_fu) && (expr.items.size() == 1))
            {
                const s_Node& left = only_CiCfNZS0(expr.items);
                s_Node right = createTypeTag_qFInc1ha(id, modid, _ps);
                return typeCheck_qFInc1ha(left, right, modid, _ps);
            }
            else
            {
                expr.value = registerImport_qFInc1ha(static_cast<fu::str&&>(path), id, modid, _ps);
                expr.token.tokidx = (_ps._idx - 1);
                return static_cast<s_Node&&>(expr);
            };
        }
        else
            path += ("/"_fu + id);

    };
}

static s_Node tryParseExpressionTail_qFInc1ha(const s_Node& head, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& token = tokens[_ps._idx++];
    if (token.kind == s_Kind_op)
    {
        const fu::str& v = token.value;
        if (v == ";"_fu)
        {
            _ps._idx--;
            return s_Node{};
        }
        else if (v == "."_fu)
        {
            lint_qFInc1ha(mode, fname, src, tokens, _ps, options);
            return parseAccessExpression_qFInc1ha(head, modid, fname, src, tokens, _ps);
        }
        else if (v == "("_fu)
        {
            lint_qFInc1ha(mode, fname, src, tokens, _ps, options);
            return parseCallExpression_qFInc1ha(head, modid, fname, src, tokens, _ps, options);
        }
        else if (v == "["_fu)
        {
            lint_qFInc1ha(mode, fname, src, tokens, _ps, options);
            return parseIndexExpression_qFInc1ha(head, modid, fname, src, tokens, _ps, options);
        }
        else
        {
            const int p1 = get_KlIlvQCY(BINOP.PRECEDENCE, v);
            if (p1)
            {
                _ps._idx--;
                return tryParseBinary_qFInc1ha(head, token, p1, modid, fname, src, tokens, _ps, options);
            }
            else if (has_JcV6lPAx(POSTFIX, v))
            {
                return createCall_qFInc1ha((((v == "++"_fu) || (v == "--"_fu)) ? ("postfix"_fu + v) : fu::str(v)), s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(head) } }, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
            }
            else if (v == "::"_fu)
            {
                return parseQualifierChain_qFInc1ha(s_Node(head), modid, fname, src, tokens, _ps);
            };
        };
    };
    _ps._idx--;
    return s_Node{};
}

                                #ifndef DEF_parseExpression_CTeqAdqTum0
                                #define DEF_parseExpression_CTeqAdqTum0
inline static s_Node parseExpression_CTeqAdqT(const s_Precedence& p1, const s_Node& parseHead, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Precedence p0 { _ps._precedence };
    const int loc00 = _ps._loc;
    _ps._precedence = p1;
    _ps._loc = _ps._idx;
    const int col00 = _ps._col0;
    if (!((tokens[_ps._idx].lcc.col >= (_ps._col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_qFInc1ha(x7E_3lDd4lqo((x7E_3lDd4lqo((("Ambiguous indent at `"_fu + tokens[_ps._idx].value) + "`: expected more than "_fu), fu::i64dec(_ps._col0)) + ", got "_fu), fu::i64dec(tokens[_ps._idx].lcc.col)), fname, src, tokens, _ps, options);

    /*MOV*/ s_Node head { parseHead };
    if (!s_ParseSyntax((head.syntax & s_ParseSyntax_PS_NOT_AN_EXPRESSION)))
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_Kind_int) || (head.kind == s_Kind_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_ps._loc = _ps._idx);
        while (/*MOV*/ s_Node out = tryParseExpressionTail_qFInc1ha(head, mode_1, modid, fname, src, tokens, _ps, options))
        {

            {
                const s_Token& t1 = tokens[(_ps._loc = loc0)];
                if (!(t1.lcc.col > col00))
                    warn_qFInc1ha(x7E_3lDd4lqo((x7E_3lDd4lqo((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.lcc.col)), fname, src, tokens, _ps, options);

            };
            loc0 = (_ps._loc = _ps._idx);
            head = static_cast<s_Node&&>(out);
        };
    };
    _ps._precedence = p0;
    _ps._loc = loc00;
    return /*NRVO*/ head;
}
                                #endif

static s_Flags parseLeadingDot_qFInc1ha(fu::vec<s_Node>& out_push_arg_and_body, const fu::str& name, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node singleArg = createLet_qFInc1ha(name, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), ((s_Flags_F_TEMPLATE | s_Flags_F_SHADOW) | s_Flags_F_REF), s_ParseSyntax{}, modid, _ps);
    s_Node _0 {};
    /*MOV*/ s_Node singleExpression = (_0 = (_ps._idx--, createRead_qFInc1ha(name, s_Flags{}, modid, fname, src, tokens, _ps)), parseExpression_CTeqAdqT(_ps._precedence, static_cast<s_Node&&>(_0), int{}, modid, fname, src, tokens, _ps, options));
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

static s_Flags parseArgsDecl_qFInc1ha(fu::vec<s_Node>& outArgs, const s_Kind endk, fu::view<char> endv, const s_Precedence& initPrecedence, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    bool first = true;
    s_Flags outFlags {};
    fu::vec<s_Node> implicit {};
    int firstDefaulted = -1;
    for (; ; )
    {
        if (tryConsume_94Qvv8bz(endk, endv, tokens, _ps))
            break;
        else
        {
            if (!first)
                consume_qFInc1ha(s_Kind_op, ","_fu, fname, src, tokens, _ps);

            first = false;
            const bool isInline = !!tryConsume_94Qvv8bz(s_Kind_id, "inline"_fu, tokens, _ps);
            const int numDollars0 = _ps._numDollars;
            int insertAt = -1;
            /*MOV*/ s_Node arg = parseLet_qFInc1ha(true, outArgs.size(), true, true, initPrecedence, modid, fname, src, tokens, _ps, options);
            const bool NEW = (_ps._numDollars > numDollars0);
            if (NEW || (arg.items[LET_TYPE].kind == s_Kind_typeunion))
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
                    fail_94Qvv8bz("TODO default implicit arguments"_fu, fname, src, tokens, _ps);
                else
                {
                    if (firstDefaulted < 0)
                        firstDefaulted = outArgs.size();

                    if (((init.kind == s_Kind_definit) && !annot) || (arg.flags & s_Flags_F_TYPENAME))
                        arg.flags |= s_Flags_F_TEMPLATE;

                };
            }
            else if ((firstDefaulted >= 0))
            {
                if (!(arg.flags & s_Flags_F_MUSTNAME))
                    fail_94Qvv8bz("Non-optional arguments without a bang! cannot follow optional arguments."_fu, fname, src, tokens, _ps);
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

static s_Node tryPopTypeAnnot_qFInc1ha(const bool allowTypeUnions, const bool allowLegacyRefs, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (tryConsume_94Qvv8bz(s_Kind_op, ":"_fu, tokens, _ps))
        return parseTypeAnnot_qFInc1ha(allowTypeUnions, allowLegacyRefs, modid, fname, src, tokens, _ps, options);
    else
    {
        return s_Node{};
    };
}

                                #ifndef DEF_x21x3D_ExVC00HnUgl
                                #define DEF_x21x3D_ExVC00HnUgl
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_bv5nK4Kl(a, b);
}
                                #endif

                                #ifndef DEF___Vw5RneqL2al
                                #define DEF___Vw5RneqL2al
inline static void _Vw5RneqL(const fu::str& item, fu::vec<fu::str>& result, const bool useResult)
{
    if (useResult)
        result += fu::str(item);

}
                                #endif

                                #ifndef DEF___AKoRYT7ngY6
                                #define DEF___AKoRYT7ngY6
inline static void _AKoRYT7n(const fu::str& item, const int left, const s_Set_6ARmtH0K78f& l, fu::vec<fu::str>& result, bool& useResult)
{
    if (!useResult)
    {
        useResult = true;
        result += fu::get_view_start0(l.keys_asc, left);
    };
    result += fu::str(item);
}
                                #endif

                                #ifndef DEF_merge_mwBXqpOgaEc
                                #define DEF_merge_mwBXqpOgaEc
inline static void merge_mwBXqpOg(fu::view<fu::str> l, fu::view<fu::str> r, const s_Set_6ARmtH0K78f& l_1, fu::vec<fu::str>& result, bool& useResult)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_bv5nK4Kl(l[li], r[ri])));
        if ((cmp <= 0))
        {
            _Vw5RneqL(l[li], result, useResult);
            li++;
            ri += int((cmp == 0));
        }
        else
        {
            _AKoRYT7n(r[ri], li, l_1, result, useResult);
            ri++;
        };
    };
}
                                #endif

                                #ifndef DEF_uNion_7WwCOM79bai
                                #define DEF_uNion_7WwCOM79bai
inline s_Set_6ARmtH0K78f uNion_7WwCOM79(const s_Set_6ARmtH0K78f& l, const s_Set_6ARmtH0K78f& r)
{
    if (r.keys_asc.size() > l.keys_asc.size())
        return uNion_7WwCOM79(r, l);
    else
    {
        /*MOV*/ fu::vec<fu::str> result {};
        bool useResult = false;
        merge_mwBXqpOg(l.keys_asc, r.keys_asc, l, result, useResult);
        if (useResult)
        {
            return s_Set_6ARmtH0K78f { static_cast<fu::vec<fu::str>&&>(result) };
        }
        else
            return s_Set_6ARmtH0K78f(l);

    };
}
                                #endif

                                #ifndef DEF_if_last_hSs7lgrEAvb
                                #define DEF_if_last_hSs7lgrEAvb
inline const s_Node& if_last_hSs7lgrE(fu::view<s_Node> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
        return (*(const s_Node*)fu::NIL);

}
                                #endif

                                #ifndef DEF_last_AO8V8JG3nr0
                                #define DEF_last_AO8V8JG3nr0
inline const s_Node& last_AO8V8JG3(fu::view<s_Node> s)
{
    return s[(s.size() - 1)];
}
                                #endif

static s_Node createBlock_qFInc1ha(fu::vec<s_Node>&& items, const fu::str& label, const int modid, const s_ParserState& _ps)
{
    if (if_last_hSs7lgrE(items).syntax & s_ParseSyntax((s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL | s_ParseSyntax_PS_ALWAYS_DISCARD)))
    {
        items += make_qFInc1ha(s_Kind_empty, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, last_AO8V8JG3(items).token, modid, _ps);
    };
    return make_qFInc1ha(s_Kind_block, items, s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node parseBlock_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    fu::vec<s_Node> _0 {};
    return (_0 = parseBlockLike_qFInc1ha(s_Kind_op, "}"_fu, false, false, modid, fname, src, tokens, _ps, options), createBlock_qFInc1ha(static_cast<fu::vec<s_Node>&&>(_0), (*(const fu::str*)fu::NIL), modid, _ps));
}

static s_Node parseLabelledStatement_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const fu::str& label = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
    /*MOV*/ s_Node stmt = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    if ((stmt.kind == s_Kind_loop) || (stmt.kind == s_Kind_block))
    {
        if (stmt.value)
            fail_94Qvv8bz((((("Label "_fu + qID_e44UlzzA(label)) + ": statement already labeled as "_fu) + qID_e44UlzzA(stmt.value)) + "."_fu), fname, src, tokens, _ps);
        else
        {
            stmt.value = label;
            return /*NRVO*/ stmt;
        };
    }
    else
    {
        return createBlock_qFInc1ha(fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(stmt) } }, label, modid, _ps);
    };
}

static bool softSemi_qFInc1ha(const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& peek = tokens[_ps._idx];
    if (peek.kind == s_Kind_op)
    {
        if (peek.value == ";"_fu)
        {
            _ps._idx++;
            return true;
        }
        else if ((peek.value == "}"_fu) || (peek.value == ")"_fu))
            return false;

    }
    else if (peek.lcc.col == _ps._col0)
        return false;
    else if (peek.kind == s_Kind_eof)
        return false;

    warn_qFInc1ha((("Missing semicollon before "_fu + qBAD_e44UlzzA(peek.value)) + "."_fu), fname, src, tokens, _ps, options);
    return false;
}

static s_Node parseLetStmt_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node ret = parseLet_qFInc1ha(false, 0, false, false, P_RESET, modid, fname, src, tokens, _ps, options);
    if (softSemi_qFInc1ha(fname, src, tokens, _ps, options))
        ret.syntax |= s_ParseSyntax_PS_ALWAYS_DISCARD;

    if (!(~ret.flags & (s_Flags_F_IMPLICIT | s_Flags_F_REF)) && ret.items[LET_TYPE] && !ret.items[LET_INIT])
    {
        const fu::str& name = ret.value;
        const s_Flags flags = (ret.flags & (s_Flags_F_SHADOW | s_Flags_F_LAX));
        ret.flags |= s_Flags_F_SHADOW;
        return make_qFInc1ha(s_Kind_fn, fu::vec<s_Node> { fu::slate<3, s_Node> { s_Node(ret), s_Node{}, createRead_qFInc1ha(name, s_Flags{}, modid, fname, src, tokens, _ps) } }, (flags | s_Flags_F_INLINE), name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    }
    else
        return /*NRVO*/ ret;

}

                                #ifndef DEF_M_LAMBDA_STMT_OK
                                #define DEF_M_LAMBDA_STMT_OK
inline constexpr int M_LAMBDA_STMT_OK = (1 << 2);
                                #endif

static void tryColonPipeline_qFInc1ha(s_Node& expr, const bool stmt, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (tryConsume_94Qvv8bz(s_Kind_op, ":"_fu, tokens, _ps))
    {
        if (!(expr.kind == s_Kind_call))
            fail_94Qvv8bz("Cannot pipeline: expression is not a call."_fu, fname, src, tokens, _ps);
        else
        {
            s_Node right = parseExpression_MVLhfXwn(P_RESET, ((stmt ? M_LAMBDA_STMT_OK : 0) | M_CALLSITE_ARGUMENT_POS), modid, fname, src, tokens, _ps, options);
            expr = pipelineLeft_qFInc1ha(s_Node(expr), right, fname, src, tokens, _ps);
            if (stmt)
            {
                const s_Token& prev = (_ps._idx ? tokens[(_ps._idx - 1)] : (*(const s_Token*)fu::NIL));
                if ((prev.kind == s_Kind_op) && (prev.value == ";"_fu))
                    _ps._idx--;

            };
        };
    };
}

static s_Node parseExpressionStatement_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node expr = parseExpression_MVLhfXwn(P_RESET, int{}, modid, fname, src, tokens, _ps, options);
    tryColonPipeline_qFInc1ha(expr, true, modid, fname, src, tokens, _ps, options);
    if (softSemi_qFInc1ha(fname, src, tokens, _ps, options))
        expr.syntax |= s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL;

    return /*NRVO*/ expr;
}

static s_Node parseLetOrExpressionStatement_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& token = tokens[_ps._idx++];
    if ((token.kind == s_Kind_id) && (tokens[_ps._idx].kind == s_Kind_id))
    {
        fu::view<char> v = token.value;
        if (v == "let"_fu)
            return parseLetStmt_qFInc1ha(modid, fname, src, tokens, _ps, options);
        else if ((v == "mut"_fu) || (v == "ref"_fu) || (v == "val"_fu) || (v == "const"_fu) || (v == "implicit"_fu) || (v == "type"_fu))
        {
            _ps._idx--;
            return parseLetStmt_qFInc1ha(modid, fname, src, tokens, _ps, options);
        };
    };
    _ps._idx--;
    if (!_ps.mbz._fnDepth)
    {
        fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
    }
    else
        return parseExpressionStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);

}

[[noreturn]] static fu::never fail_qFInc1ha(const s_TokenIdx& token, /*MOV*/ fu::str&& reason, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    if (token.modid == modid)
        _ps._loc = (_ps._idx = token.tokidx);

    fail_94Qvv8bz(static_cast<fu::str&&>(reason), fname, src, tokens, _ps);
}

static s_Node parseConditionExpr_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node ret = parseLetOrExpressionStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    if ((ret.kind == s_Kind_call) && (ret.value == "="_fu) && !s_ParseSyntax((ret.syntax & s_ParseSyntax_PS_PARENS)))
        fail_qFInc1ha(ret.token, "Unparenthesized assignment used as a condition."_fu, modid, fname, src, tokens, _ps);
    else
        return /*NRVO*/ ret;

}

                                #ifndef DEF_only_2Om2RuuETKl
                                #define DEF_only_2Om2RuuETKl
inline char only_2Om2RuuE(fu::view<char> s)
{
    fu_ASSERT((s.size() == 1));
    return s[0];
}
                                #endif

static s_Node createPrefix_qFInc1ha(const fu::str& op, /*MOV*/ s_Node&& expr, const int modid, const s_ParserState& _ps)
{
    if (((op == "+"_fu) || (op == "-"_fu)) && ((expr.kind == s_Kind_int) || (expr.kind == s_Kind_real)))
    {
        const char sign = expr.value[0];
        if ((sign == '+') || (sign == '-'))
            expr.value.mutref(0) = ((sign == only_2Om2RuuE(op)) ? '+' : '-');
        else
            expr.value = (op + expr.value);

        return static_cast<s_Node&&>(expr);
    }
    else if (op == "!"_fu)
    {
        return make_qFInc1ha(s_Kind_not, fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    }
    else
    {
        return createCall_qFInc1ha(op, s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } }, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    };
}

static s_Node parseIfCond_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& nOt = tryConsume_94Qvv8bz(s_Kind_op, "!"_fu, tokens, _ps);
    consume_qFInc1ha(s_Kind_op, "("_fu, fname, src, tokens, _ps);
    /*MOV*/ s_Node cond = parseConditionExpr_qFInc1ha(modid, fname, src, tokens, _ps, options);
    consume_qFInc1ha(s_Kind_op, ")"_fu, fname, src, tokens, _ps);
    if (nOt)
        return createPrefix_qFInc1ha("!"_fu, static_cast<s_Node&&>(cond), modid, _ps);
    else
        return /*NRVO*/ cond;

}

static s_Node parseSubStatement_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& peek = tokens[_ps._idx];
    if ((peek.kind != s_Kind_op) || (peek.value != "{"_fu))
    {
        if (!(peek.lcc.col > _ps._col0))
            warn_qFInc1ha((x7E_3lDd4lqo((x7E_3lDd4lqo((("Misleading indent at "_fu + qBAD_e44UlzzA(peek.value)) + ": expected more than "_fu), fu::i64dec(_ps._col0)) + ", got "_fu), fu::i64dec(peek.lcc.col)) + "."_fu), fname, src, tokens, _ps, options);

    };
    return parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
}

static s_Node parseIf_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& token = tokens[(_ps._idx - 1)];
    const s_Token& prev = ((_ps._idx > 1) ? tokens[(_ps._idx - 2)] : (*(const s_Token*)fu::NIL));
    const s_Token& token_1 = (((prev.kind == s_Kind_id) && (prev.value == "else"_fu)) ? prev : token);
    s_Node cond = parseIfCond_qFInc1ha(modid, fname, src, tokens, _ps, options);
    s_Node cons = parseSubStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    const s_Token& eLse = tryConsume_94Qvv8bz(s_Kind_id, "else"_fu, tokens, _ps);
    if (eLse)
    {
        if (!((eLse.lcc.line == token_1.lcc.line) || (eLse.lcc.col == token_1.lcc.col)))
        {
            warn_qFInc1ha((x7E_3lDd4lqo((x7E_3lDd4lqo((x7E_3lDd4lqo("Inconsistent indent at `else`: expected "_fu, fu::i64dec(token_1.lcc.col)) + ", got "_fu), fu::i64dec(eLse.lcc.col)) + ". `if` starts on line "_fu), fu::i64dec(token_1.lcc.line)) + "."_fu), fname, src, tokens, _ps, options);
        };
        s_Node alt = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
        return createIf_qFInc1ha(cond, cons, alt, s_ParseSyntax_PS_ALWAYS_DISCARD, modid, _ps);
    }
    else
        return createAnd_qFInc1ha(cond, cons, s_ParseSyntax_PS_ALWAYS_DISCARD, modid, _ps);

}

static s_Node parseParens_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node out = parseExpression_MVLhfXwn(P_RESET, int{}, modid, fname, src, tokens, _ps, options);
    out.syntax |= s_ParseSyntax_PS_PARENS;
    consume_qFInc1ha(s_Kind_op, ")"_fu, fname, src, tokens, _ps);
    return /*NRVO*/ out;
}

static s_Node tryParseLoopPreheader_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& peek = tokens[_ps._idx];
    if ((peek.kind == s_Kind_id) && (peek.value == "on"_fu))
    {
        const s_Token& peek_1 = tokens[(_ps._idx + 1)];
        if ((peek_1.kind == s_Kind_id) && (peek_1.value == "enter"_fu))
        {
            _ps._idx += 2;
            /*MOV*/ s_Node ret = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
            consume_qFInc1ha(s_Kind_id, "then"_fu, fname, src, tokens, _ps);
            return /*NRVO*/ ret;
        };
    };
    return s_Node{};
}

static s_Node createLoop_qFInc1ha(const s_Node& init, const s_Node& pre_cond, const s_Node& pre, const s_Node& body, const s_Node& post, const s_Node& post_cond, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_loop, fu::vec<s_Node> { fu::slate<6, s_Node> { s_Node(init), s_Node(pre_cond), s_Node(pre), s_Node(body), s_Node(post), s_Node(post_cond) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax_PS_ALWAYS_DISCARD, s_TokenIdx{}, modid, _ps);
}

static s_Node parseFor_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    _ps.mbz._loopDepth++;
    fu_DEFER(_ps.mbz._loopDepth--);
    consume_qFInc1ha(s_Kind_op, "("_fu, fname, src, tokens, _ps);
    if (tryConsume_94Qvv8bz(s_Kind_id, "fieldname"_fu, tokens, _ps))
    {
        const fu::str& placeholder = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
        consume_qFInc1ha(s_Kind_op, ":"_fu, fname, src, tokens, _ps);
        /*MOV*/ s_Node type = parseTypeAnnot_qFInc1ha(false, false, modid, fname, src, tokens, _ps, options);
        consume_qFInc1ha(s_Kind_op, ")"_fu, fname, src, tokens, _ps);
        /*MOV*/ s_Node body = parseSubStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
        return make_qFInc1ha(s_Kind_forfieldsof, fu::vec<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(type), static_cast<s_Node&&>(body) } }, s_Flags{}, placeholder, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    }
    else
    {
        s_Node init = (!tryConsume_94Qvv8bz(s_Kind_op, ";"_fu, tokens, _ps) ? parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options) : s_Node{});
        if (init && (init.kind != s_Kind_let))
            fail_94Qvv8bz((x7E_3lDd4lqo("`for` expects a `let` statement, got a `"_fu, str_WkqQ7QhO(init.kind)) + "`."_fu), fname, src, tokens, _ps);
        else
        {
            s_Node pre_cond = (!tryConsume_94Qvv8bz(s_Kind_op, ";"_fu, tokens, _ps) ? parseConditionExpr_qFInc1ha(modid, fname, src, tokens, _ps, options) : s_Node{});
            const s_Token& token = tokens[_ps._idx];
            s_Node post = (!((token.kind == s_Kind_op) && (token.value == ")"_fu)) ? parseParens_qFInc1ha(modid, fname, src, tokens, _ps, options) : (consume_qFInc1ha(s_Kind_op, ")"_fu, fname, src, tokens, _ps), s_Node{}));
            s_Node pre = tryParseLoopPreheader_qFInc1ha(modid, fname, src, tokens, _ps, options);
            s_Node body = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
            return createLoop_qFInc1ha(init, pre_cond, pre, body, post, (*(const s_Node*)fu::NIL), modid, _ps);
        };
    };
}

static s_Node parseWhile_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    _ps.mbz._loopDepth++;
    fu_DEFER(_ps.mbz._loopDepth--);
    s_Node pre_cond = parseIfCond_qFInc1ha(modid, fname, src, tokens, _ps, options);
    s_Node body = parseSubStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    return createLoop_qFInc1ha((*(const s_Node*)fu::NIL), pre_cond, (*(const s_Node*)fu::NIL), body, (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), modid, _ps);
}

static s_Node parseDoWhile_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    _ps.mbz._loopDepth++;
    fu_DEFER(_ps.mbz._loopDepth--);
    s_Node body = parseSubStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    consume_qFInc1ha(s_Kind_id, "while"_fu, fname, src, tokens, _ps);
    consume_qFInc1ha(s_Kind_op, "("_fu, fname, src, tokens, _ps);
    s_Node post_cond = parseConditionExpr_qFInc1ha(modid, fname, src, tokens, _ps, options);
    consume_qFInc1ha(s_Kind_op, ")"_fu, fname, src, tokens, _ps);
    softSemi_qFInc1ha(fname, src, tokens, _ps, options);
    return createLoop_qFInc1ha((*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), (*(const s_Node*)fu::NIL), body, (*(const s_Node*)fu::NIL), post_cond, modid, _ps);
}

static s_Node parseJump_qFInc1ha(const s_Kind kind, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const fu::str& label = (tryConsume_94Qvv8bz(s_Kind_op, ":"_fu, tokens, _ps) ? consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value : (*(const fu::str*)fu::NIL));

    {
        _ps._idx--;
        if (!label)
        {
            if (kind == s_Kind_break)
            {
                if (!(_ps.mbz._blockArgDepth || _ps.mbz._loopDepth))
                    fail_94Qvv8bz(((("Nothing to "_fu + qKW_e44UlzzA(str_WkqQ7QhO(kind))) + " from here."_fu) + "\n\n\tNo surrounding loop or |code| block."_fu), fname, src, tokens, _ps);

            };
            if (kind == s_Kind_continue)
            {
                if (!(_ps.mbz._lambdaDepth || _ps.mbz._loopDepth))
                    fail_94Qvv8bz(((("Nothing to "_fu + qKW_e44UlzzA(str_WkqQ7QhO(kind))) + " from here."_fu) + "\n\n\tNo surrounding loop or callsite: |code| block."_fu), fname, src, tokens, _ps);

            };
        };
        if (kind == s_Kind_return)
        {
            if (!(_ps.mbz._fnDepth))
                fail_94Qvv8bz(((("Cannot "_fu + qKW_e44UlzzA(str_WkqQ7QhO(kind))) + " here."_fu) + "\n\n\tNo surrounding function."_fu), fname, src, tokens, _ps);

        };
        _ps._idx++;
    };
    /*MOV*/ s_Node expr {};
    if (!tryConsume_94Qvv8bz(s_Kind_op, ";"_fu, tokens, _ps))
    {
        expr = parseExpression_MVLhfXwn(P_RESET, M_LINT_ENSURE_INDENT, modid, fname, src, tokens, _ps, options);
        softSemi_qFInc1ha(fname, src, tokens, _ps, options);
    };
    return make_qFInc1ha(kind, (expr ? fu::vec<s_Node> { fu::slate<1, s_Node> { static_cast<s_Node&&>(expr) } } : fu::vec<s_Node>{}), s_Flags{}, label, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node parseCatchErrvar_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    const fu::str& id = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
    return createLet_qFInc1ha(id, createRead_qFInc1ha("string"_fu, s_Flags{}, modid, fname, src, tokens, _ps), (*(const s_Node*)fu::NIL), s_Flags{}, s_ParseSyntax{}, modid, _ps);
}

static s_Node parseTryCatch_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (_ps.mbz._fnDepth > 0)
    {
        /*MOV*/ s_Node tRy = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
        consume_qFInc1ha(s_Kind_id, "catch"_fu, fname, src, tokens, _ps);
        consume_qFInc1ha(s_Kind_op, "("_fu, fname, src, tokens, _ps);
        /*MOV*/ s_Node err = parseCatchErrvar_qFInc1ha(modid, fname, src, tokens, _ps);
        consume_qFInc1ha(s_Kind_op, ")"_fu, fname, src, tokens, _ps);
        /*MOV*/ s_Node cAtch = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
        return make_qFInc1ha(s_Kind_try, fu::vec<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(tRy), static_cast<s_Node&&>(err), static_cast<s_Node&&>(cAtch) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    }
    else
    {
        _ps._idx--;
        fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
    };
}

static s_Node parseUnwrap_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node stmt = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    if (stmt.kind == s_Kind_block)
    {
        stmt.items += make_qFInc1ha(s_Kind_unwrap, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
        return /*NRVO*/ stmt;
    }
    else
        fail_94Qvv8bz((("Unwrap only works for blocks, this is a "_fu + qKW_e44UlzzA(str_WkqQ7QhO(stmt.kind))) + "."_fu), fname, src, tokens, _ps);

}

                                #ifndef DEF___n8Zb1GnKXra
                                #define DEF___n8Zb1GnKXra
inline static void _n8Zb1GnK(s_Node& item)
{
    if (item.kind == s_Kind_let)
        item.flags |= s_Flags_F_PREDICATE;

}
                                #endif

                                #ifndef DEF_each_WVNurTJSw0g
                                #define DEF_each_WVNurTJSw0g
inline void each_WVNurTJS(fu::view_mut<s_Node> a)
{
    for (int i = 0; i < a.size(); i++)
        _n8Zb1GnK(a.mutref(i));

}
                                #endif

static s_Node parseStructDecl_qFInc1ha(const s_Kind kind, const s_Flags flags, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    s_Set_6ARmtH0K78f expectedTypedParams0 = steal_7R3sCSEE(_ps.mbz._expectedTypeParams);
    fu_DEFER(std::swap(expectedTypedParams0, _ps.mbz._expectedTypeParams));
    const fu::str& name = tryConsume_qFInc1ha(s_Kind_id, tokens, _ps).value;
    fu::vec<s_Node> args {};
    const s_Flags argFlags = ((name && tryConsume_94Qvv8bz(s_Kind_op, "("_fu, tokens, _ps)) ? parseArgsDecl_qFInc1ha(args, s_Kind_op, ")"_fu, P_RESET, modid, fname, src, tokens, _ps, options) : s_Flags{});
    consume_qFInc1ha(s_Kind_op, "{"_fu, fname, src, tokens, _ps);
    fu::vec<s_Node> items = parseBlockLike_qFInc1ha(s_Kind_op, "}"_fu, true, false, modid, fname, src, tokens, _ps, options);

    { {
        for (int i = 0; i < items.size(); i++)
        {
            const s_Node& item = items[i];
            if ((item.kind == s_Kind_let) && (item.flags & s_Flags_F_PREDICATE))
                goto BL_1;

        };
        each_WVNurTJS(items);
      } BL_1:;
    };
    /*MOV*/ s_Node sTruct = make_qFInc1ha(kind, fu::vec<s_Node> { fu::slate<2, s_Node> { s_Node{}, make_qFInc1ha(s_Kind_members, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps) } }, flags, name, asserts, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    if (!args)
        return /*NRVO*/ sTruct;
    else
    {
        sTruct.value = ""_fu;
        return make_qFInc1ha(s_Kind_fn, ((args + s_Node{}) + sTruct), argFlags, name, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    };
}

static void set_PUB_qFInc1ha(s_Flags& flags, fu::view<char> extra, const bool autopub_ok, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    if (flags & s_Flags_F_SHADOW)
        fail_94Qvv8bz((((("Cannot "_fu + qBAD_e44UlzzA("pub"_fu)) + " a "_fu) + qKW_e44UlzzA("shadow"_fu)) + (extra ? (": "_fu + extra) : "."_fu)), fname, src, tokens, _ps);
    else
    {
        flags |= s_Flags_F_PUB;
        if (!autopub_ok)
            _ps._autopub = false;

    };
}

static s_Node parsePub_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (_ps.mbz._fnDepth)
        fail_94Qvv8bz((((("Cannot "_fu + qBAD_e44UlzzA("pub"_fu)) + " from within a "_fu) + qKW_e44UlzzA("fn"_fu)) + "."_fu), fname, src, tokens, _ps);
    else
    {
        /*MOV*/ s_Node out = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
        set_PUB_qFInc1ha(out.flags, fu::view<char>{}, (out.kind == s_Kind_import), fname, src, tokens, _ps);
        return /*NRVO*/ out;
    };
}

static s_Node parseShadow_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    int idx0 = _ps._idx;
    /*MOV*/ s_Node out = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    if (out.flags & s_Flags_F_PUB)
        fail_94Qvv8bz((((("Cannot "_fu + qBAD_e44UlzzA("shadow"_fu)) + " a "_fu) + qKW_e44UlzzA("pub"_fu)) + "."_fu), fname, src, tokens, _ps);
    else
    {
        std::swap(idx0, _ps._idx);
        set_SHADOW_qFInc1ha(out.flags, fname, src, tokens, _ps);
        std::swap(idx0, _ps._idx);
        return /*NRVO*/ out;
    };
}

                                #ifndef DEF_FN_RET_BACK
                                #define DEF_FN_RET_BACK
inline constexpr int FN_RET_BACK = -2;
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
inline constexpr int FN_ARGS_BACK = FN_RET_BACK;
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

                                #ifndef DEF_has_J81b5Q24qw3
                                #define DEF_has_J81b5Q24qw3
inline bool has_J81b5Q24(fu::view<char> a, const char b)
{
    return (find_yP7FbxFZ(a, b) >= 0);
}
                                #endif

static s_Node createUsing_qFInc1ha(/*MOV*/ s_Node&& out, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    if (out.kind == s_Kind_fn)
    {
        int explicitMin = 0;
        int explicitMax = 0;
        for (int i = 0; i < (out.items.size() + FN_ARGS_BACK); i++)
        {
            const s_Node& arg = out.items[i];
            if (!(arg.flags & s_Flags_F_IMPLICIT))
            {
                explicitMax++;
                if (!arg.items[LET_INIT] && explicitMin++)
                    fail_qFInc1ha(arg.token, "Conversion functions cannot have more than one non-defaulted explicit argument."_fu, modid, fname, src, tokens, _ps);

            };
        };
        if (explicitMin)
            out.flags |= s_Flags_F_CONVERSION;
        else if (!explicitMax)
            out.flags |= s_Flags_F_USING;
        else
            fail_qFInc1ha(out.token, "Conversion functions cannot have all their explicit arguments defaulted."_fu, modid, fname, src, tokens, _ps);

        for (int i_1 = 0; i_1 < (out.items.size() - 2); i_1++)
        {
            const s_Node& arg = out.items[i_1];
            if (!arg.items[LET_TYPE] && !has_J81b5Q24(arg.value, '.'))
                fail_qFInc1ha(arg.token, "Conversion functions need type annotations on their arguments to know when to kick in."_fu, modid, fname, src, tokens, _ps);

        };
    }
    else if (out.kind == s_Kind_let)
        out.flags |= s_Flags_F_USING;
    else if ((out.kind == s_Kind_enum) || (out.kind == s_Kind_flags) || (out.kind == s_Kind_primitive))
        out.flags |= s_Flags_F_USING;
    else if (out.kind == s_Kind_call)
    {
        return createUsing_qFInc1ha(createLet_qFInc1ha("_"_fu, (*(const s_Node*)fu::NIL), out, s_Flags{}, s_ParseSyntax_PS_USING_EXPRESSION, modid, _ps), modid, fname, src, tokens, _ps);
    }
    else
        fail_94Qvv8bz((qBAD_e44UlzzA("using"_fu) + " cannot be used here."_fu), fname, src, tokens, _ps);

    if (out.flags & s_Flags_F_OPERATOR)
        fail_94Qvv8bz((qBAD_e44UlzzA("using"_fu) + " cannot be used on operator functions."_fu), fname, src, tokens, _ps);
    else
        return static_cast<s_Node&&>(out);

}

static s_Node parseUsing_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node out = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    return createUsing_qFInc1ha(static_cast<s_Node&&>(out), modid, fname, src, tokens, _ps);
}

static s_Node parseLax_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node out = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    if ((out.kind == s_Kind_let) || (out.kind == s_Kind_fn))
    {
        out.flags |= s_Flags_F_LAX;
        return /*NRVO*/ out;
    }
    else
        fail_qFInc1ha(out.token, (qBAD_e44UlzzA("lax"_fu) + " is not supported for this statement or declaration."_fu), modid, fname, src, tokens, _ps);

}

static s_Node parseExtern_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node out = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    if (isFnOrTypeDeclaration_UVY6Qzz1(out.kind))
    {
        out.flags |= s_Flags_F_EXTERN;
        return /*NRVO*/ out;
    }
    else
        fail_qFInc1ha(out.token, (qBAD_e44UlzzA("extern"_fu) + " is not supported for this statement or declaration."_fu), modid, fname, src, tokens, _ps);

}

static s_Node parseImport_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ fu::str path { tryConsume_qFInc1ha(s_Kind_id, tokens, _ps).value };
    if (path)
        while (tryConsume_94Qvv8bz(s_Kind_op, "::"_fu, tokens, _ps))
            path += ("/"_fu + consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value);

    else
        path = consume_qFInc1ha(s_Kind_str, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;

    softSemi_qFInc1ha(fname, src, tokens, _ps, options);
    fu::str _0 {};
    return (_0 = registerImport_qFInc1ha(static_cast<fu::str&&>(path), fu::view<char>{}, modid, _ps), make_qFInc1ha(s_Kind_import, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, static_cast<fu::str&&>(_0), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps));
}

static s_Node parseCompilerPragma_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const fu::str& value = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
    fu::vec<s_Node> items {};
    if (value != "break"_fu)
    {
        consume_qFInc1ha(s_Kind_op, "("_fu, fname, src, tokens, _ps);
        parseCallArgs_qFInc1ha(")"_fu, items, false, modid, fname, src, tokens, _ps, options);
    };
    s_ParseSyntax _0 {};
    return (_0 = (softSemi_qFInc1ha(fname, src, tokens, _ps, options) ? s_ParseSyntax_PS_DISCARD_IF_BLOCK_TAIL : s_ParseSyntax{}), make_qFInc1ha(s_Kind_pragma, items, s_Flags{}, value, s_DeclAsserts{}, _0, s_TokenIdx{}, modid, _ps));
}

static s_Node parseFixityDecl_qFInc1ha(const s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    consume_qFInc1ha(s_Kind_id, "fn"_fu, fname, src, tokens, _ps);
    return parseFnDecl_qFInc1ha(flags, fixity, asserts, expr, modid, fname, src, tokens, _ps, options);
}

static s_Node parseOperatorDecl_qFInc1ha(const s_Fixity fixity, const s_Flags flags, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (fixity)
    {
        return parseFixityDecl_qFInc1ha(flags, fixity, s_DeclAsserts{}, false, modid, fname, src, tokens, _ps, options);
    }
    else
        fail_94Qvv8bz("Falsy fixity."_fu, fname, src, tokens, _ps);

}

static s_Node parseInlineDecl_qFInc1ha(s_Flags flags, const s_Flags F, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    flags |= F;
    fu::view<char> v = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
    if (v == "infix"_fu)
        return parseOperatorDecl_qFInc1ha(s_Fixity_Infix, flags, modid, fname, src, tokens, _ps, options);
    else if (v == "prefix"_fu)
        return parseOperatorDecl_qFInc1ha(s_Fixity_Prefix, flags, modid, fname, src, tokens, _ps, options);
    else if (v == "postfix"_fu)
        return parseOperatorDecl_qFInc1ha(s_Fixity_Postfix, flags, modid, fname, src, tokens, _ps, options);
    else
    {
        _ps._idx--;
        return parseFixityDecl_qFInc1ha(flags, s_Fixity{}, asserts, false, modid, fname, src, tokens, _ps, options);
    };
}

static s_Node parseNoInlineDecl_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    return parseInlineDecl_qFInc1ha(s_Flags{}, s_Flags{}, s_DeclAsserts_A_NOINLINE, modid, fname, src, tokens, _ps, options);
}

static s_Node parsePrimDecl_qFInc1ha(const s_Kind kind, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const fu::str& name = tryConsume_qFInc1ha(s_Kind_id, tokens, _ps).value;
    /*MOV*/ s_Node annot = tryPopTypeAnnot_qFInc1ha(false, false, modid, fname, src, tokens, _ps, options);
    fu::vec<s_Node> items = (tryConsume_94Qvv8bz(s_Kind_op, "{"_fu, tokens, _ps) ? parseBlockLike_qFInc1ha(s_Kind_op, "}"_fu, false, true, modid, fname, src, tokens, _ps, options) : fu::vec<s_Node>{});
    if ((kind != s_Kind_enum) && (kind != s_Kind_flags))
    {
        if (!(annot))
            fail_94Qvv8bz((qKW_e44UlzzA("primitive"_fu) + " declarations require a base type annotation."_fu), fname, src, tokens, _ps);

    };
    return make_qFInc1ha(kind, fu::vec<s_Node> { fu::slate<2, s_Node> { static_cast<s_Node&&>(annot), (items ? make_qFInc1ha(s_Kind_members, items, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps) : s_Node{}) } }, s_Flags{}, name, asserts, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node parseAnnotatedFn_qFInc1ha(const s_Flags flags, const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const int _idx0 = _ps._idx;
    /*MOV*/ s_Node stmt = parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
    if ((stmt.kind != s_Kind_fn) || (stmt.flags & s_Flags_F_LAMBDA))
    {
        _ps._idx = (_idx0 ? (_idx0 - 1) : 0);
        fail_94Qvv8bz((("Invalid annotation: not a "_fu + qKW_e44UlzzA("fn"_fu)) + " declaration."_fu), fname, src, tokens, _ps);
    }
    else
    {
        stmt.flags |= flags;
        stmt.asserts |= asserts;
        return /*NRVO*/ stmt;
    };
}

static s_Node parseAnnotatedStruct_qFInc1ha(const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    consume_qFInc1ha(s_Kind_id, "struct"_fu, fname, src, tokens, _ps);
    return parseStructDecl_qFInc1ha(s_Kind_struct, s_Flags{}, asserts, modid, fname, src, tokens, _ps, options);
}

static s_Node parseAnnotatedType_qFInc1ha(const s_DeclAsserts asserts, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    fu::view<char> kw = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
    if (kw == "struct"_fu)
    {
        return parseStructDecl_qFInc1ha(s_Kind_struct, s_Flags{}, asserts, modid, fname, src, tokens, _ps, options);
    }
    else if (kw == "enum"_fu)
        return parsePrimDecl_qFInc1ha(s_Kind_enum, asserts, modid, fname, src, tokens, _ps, options);
    else if (kw == "flags"_fu)
        return parsePrimDecl_qFInc1ha(s_Kind_flags, asserts, modid, fname, src, tokens, _ps, options);
    else if (kw == "primitive"_fu)
        return parsePrimDecl_qFInc1ha(s_Kind_primitive, asserts, modid, fname, src, tokens, _ps, options);
    else
    {
        _ps._idx--;
        fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
    };
}

                                #ifndef DEF_F_TESTCASE
                                #define DEF_F_TESTCASE
extern const s_Flags F_TESTCASE;
                                #endif

static s_Node parseTestcase_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    return parseFnDecl_qFInc1ha(F_TESTCASE, s_Fixity{}, s_DeclAsserts{}, false, modid, fname, src, tokens, _ps, options);
}

static s_Node parseStatement_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const int loc0 = _ps._loc;
    fu_DEFER(_ps._loc = loc0);
    const s_Token* _0;
    const s_Token& token = (*(_0 = &(tokens[(_ps._loc = _ps._idx++)])) ? *_0 : fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps));
    if (token.kind == s_Kind_op)
    {
        fu::view<char> v = token.value;
        if (v == "{"_fu)
            return parseBlock_qFInc1ha(modid, fname, src, tokens, _ps, options);
        else if (v == ":"_fu)
            return parseLabelledStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);

    }
    else if (token.kind == s_Kind_id)
    {
        fu::view<char> v = token.value;
        const s_Token& peek = tokens[_ps._idx];
        if (_ps.mbz._fnDepth)
        {
            if (v == "if"_fu)
                return parseIf_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "for"_fu)
                return parseFor_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "while"_fu)
                return parseWhile_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "do"_fu)
                return parseDoWhile_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "return"_fu)
                return parseJump_qFInc1ha(s_Kind_return, modid, fname, src, tokens, _ps, options);
            else if (v == "break"_fu)
                return parseJump_qFInc1ha(s_Kind_break, modid, fname, src, tokens, _ps, options);
            else if (v == "continue"_fu)
                return parseJump_qFInc1ha(s_Kind_continue, modid, fname, src, tokens, _ps, options);
            else if (v == "try"_fu)
                return parseTryCatch_qFInc1ha(modid, fname, src, tokens, _ps, options);

        };
        if ((peek.kind == s_Kind_op) && (peek.value == "{"_fu))
        {
            if (v == "unwrap"_fu)
                return parseUnwrap_qFInc1ha(modid, fname, src, tokens, _ps, options);

        };
        if ((v == "fn"_fu) && ((peek.kind == s_Kind_id) || !_ps.mbz._fnDepth))
        {
            return parseFnDecl_qFInc1ha(s_Flags{}, s_Fixity{}, s_DeclAsserts{}, false, modid, fname, src, tokens, _ps, options);
        }
        else if (peek.kind == s_Kind_id)
        {
            if (v == "struct"_fu)
            {
                return parseStructDecl_qFInc1ha(s_Kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "union"_fu)
            {
                return parseStructDecl_qFInc1ha(s_Kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "pub"_fu)
                return parsePub_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "shadow"_fu)
                return parseShadow_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "using"_fu)
                return parseUsing_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "lax"_fu)
                return parseLax_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "extern"_fu)
                return parseExtern_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "import"_fu)
                return parseImport_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "pragma"_fu)
                return parseCompilerPragma_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "inline"_fu)
            {
                return parseInlineDecl_qFInc1ha(s_Flags{}, s_Flags_F_INLINE, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "noinline"_fu)
                return parseNoInlineDecl_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "infix"_fu)
            {
                return parseOperatorDecl_qFInc1ha(s_Fixity_Infix, s_Flags{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "prefix"_fu)
            {
                return parseOperatorDecl_qFInc1ha(s_Fixity_Prefix, s_Flags{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "postfix"_fu)
            {
                return parseOperatorDecl_qFInc1ha(s_Fixity_Postfix, s_Flags{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "primitive"_fu)
            {
                return parsePrimDecl_qFInc1ha(s_Kind_primitive, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "flags"_fu)
            {
                return parsePrimDecl_qFInc1ha(s_Kind_flags, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "enum"_fu)
            {
                return parsePrimDecl_qFInc1ha(s_Kind_enum, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "pure"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_PURE, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "purectx"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_PURE_CTX, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "purefx"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_PURE_FX, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "novec"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_NOVEC, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "noflow"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_NOFLOW, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "nothrow"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_NOTHROW, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "nocrash"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_NOCRASH, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "noio"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_NOIO, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "fast"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags{}, s_DeclAsserts_A_FAST, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "nocopy"_fu)
                return parseAnnotatedStruct_qFInc1ha(s_DeclAsserts_A_NOCOPY, modid, fname, src, tokens, _ps, options);
            else if (v == "trivial"_fu)
                return parseAnnotatedStruct_qFInc1ha(s_DeclAsserts_A_TRIVIAL, modid, fname, src, tokens, _ps, options);
            else if (v == "nodiscard"_fu)
                return parseAnnotatedType_qFInc1ha(s_DeclAsserts_A_NODISCARD, modid, fname, src, tokens, _ps, options);
            else if (v == "hotswap"_fu)
            {
                return parseAnnotatedFn_qFInc1ha(s_Flags_F_HOTSWAP, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
            }
            else if (v == "test"_fu)
                return parseTestcase_qFInc1ha(modid, fname, src, tokens, _ps, options);

        };
    };
    _ps._idx--;
    return parseLetOrExpressionStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
}

static s_Node parseFnBodyBranch_qFInc1ha(const s_Flags flags, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    s_Set_6ARmtH0K78f upstreamTypeParams0 = uNion_7WwCOM79(_ps.mbz._upstreamTypeParams, _ps.mbz._expectedTypeParams);
    std::swap(_ps.mbz._upstreamTypeParams, upstreamTypeParams0);
    s_Set_6ARmtH0K78f expectedTypeParams0 = steal_7R3sCSEE(_ps.mbz._expectedTypeParams);
    const int templateDepth0 = _ps.mbz._templateDepth;
    fu_DEFER(
    {
        std::swap(_ps.mbz._upstreamTypeParams, upstreamTypeParams0);
        std::swap(_ps.mbz._expectedTypeParams, expectedTypeParams0);
        _ps.mbz._templateDepth = templateDepth0;
    });
    if (flags & s_Flags_F_TEMPLATE)
        _ps.mbz._templateDepth++;

    tryConsume_94Qvv8bz(s_Kind_op, "="_fu, tokens, _ps);
    /*MOV*/ s_Node body = (expr ? parseExpression_MVLhfXwn(_ps._precedence, int{}, modid, fname, src, tokens, _ps, options) : parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options));
    if (body.syntax & s_ParseSyntax_PS_ALWAYS_DISCARD)
    {
        body = createBlock_qFInc1ha(fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(body) } }, (*(const fu::str*)fu::NIL), modid, _ps);
    };
    return /*NRVO*/ body;
}

static void parseBranch_qFInc1ha(const bool noCond, const s_Flags flags, fu::view<s_Node> out_push_body, bool& TODO_FIX_didInitArgTypeParams, s_Set_6ARmtH0K78f& withArgTypeParams, fu::vec<s_Node>& branches, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (!noCond)
    {
        if (!TODO_FIX_didInitArgTypeParams)
        {
            TODO_FIX_didInitArgTypeParams = true;
            withArgTypeParams = _ps.mbz._expectedTypeParams;
            for (int i = (out_push_body.size() - 1); i-- > 0; )
            {
                const s_Node& arg = out_push_body[i];
                fu::str argName = ((arg.kind == s_Kind_let) ? ((arg.flags & s_Flags_F_COMPOUND_ID) ? cleanID_V5IuMsej(arg.value) : fu::str(arg.value)) : fu::str{});
                if (argName && (argName != "_"_fu))
                    add_eHVOG4pi(withArgTypeParams, argName);

            };
        };
        std::swap(_ps.mbz._expectedTypeParams, withArgTypeParams);
    };
    _ps.mbz._TODO_FIX_dollarOk = true;
    /*MOV*/ s_Node cond = (!noCond ? parseUnaryExpression_qFInc1ha(0, modid, fname, src, tokens, _ps, options) : s_Node{});
    _ps.mbz._TODO_FIX_dollarOk = false;
    if (!noCond)
        std::swap(_ps.mbz._expectedTypeParams, withArgTypeParams);

    /*MOV*/ s_Node type = tryPopTypeAnnot_qFInc1ha(false, true, modid, fname, src, tokens, _ps, options);
    /*MOV*/ s_Node cons = parseFnBodyBranch_qFInc1ha(flags, false, modid, fname, src, tokens, _ps, options);
    branches.push(make_qFInc1ha(s_Kind_fnbranch, fu::vec<s_Node> { fu::slate<3, s_Node> { static_cast<s_Node&&>(cond), static_cast<s_Node&&>(type), static_cast<s_Node&&>(cons) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps));
}

static void parseFnBodyOrPattern_qFInc1ha(s_Flags& flags, fu::vec<s_Node>& out_push_body, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    /*MOV*/ s_Node body {};
    bool TODO_FIX_didInitArgTypeParams = false;
    s_Set_6ARmtH0K78f withArgTypeParams {};
    if (!expr && tryConsume_94Qvv8bz(s_Kind_id, "case"_fu, tokens, _ps))
    {
        flags |= s_Flags_F_TEMPLATE;
        fu::vec<s_Node> branches {};
        do
            parseBranch_qFInc1ha(false, flags, out_push_body, TODO_FIX_didInitArgTypeParams, withArgTypeParams, branches, modid, fname, src, tokens, _ps, options);
        while (tryConsume_94Qvv8bz(s_Kind_id, "case"_fu, tokens, _ps));
        if (tryConsume_94Qvv8bz(s_Kind_id, "default"_fu, tokens, _ps))
            parseBranch_qFInc1ha(true, flags, out_push_body, TODO_FIX_didInitArgTypeParams, withArgTypeParams, branches, modid, fname, src, tokens, _ps, options);

        body = make_qFInc1ha(s_Kind_pattern, branches, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    }
    else
        body = parseFnBodyBranch_qFInc1ha(flags, expr, modid, fname, src, tokens, _ps, options);

    out_push_body.push(static_cast<s_Node&&>(body));
}

static s_Node parseFnDecl_cont_qFInc1ha(const fu::str& name, s_Flags flags, const s_DeclAsserts asserts, const bool expr, const bool leadingDot, fu::view<char> endv, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const bool expr_1 = (expr ? expr : leadingDot);
    fu::vec<s_Node> items {};
    _ps.mbz._fnDepth++;
    const int numDollars0 = _ps._numDollars;
    fu_DEFER(
    {
        _ps.mbz._fnDepth--;
        _ps._numDollars = numDollars0;
    });
    if (leadingDot)
        flags |= parseLeadingDot_qFInc1ha(items, name, modid, fname, src, tokens, _ps, options);
    else
    {
        flags |= (endv ? parseArgsDecl_qFInc1ha(items, s_Kind_op, endv, ((endv == "|"_fu) ? P_PREFIX_UNARY : P_RESET), modid, fname, src, tokens, _ps, options) : s_Flags{});
        /*MOV*/ s_Node type = tryPopTypeAnnot_qFInc1ha(false, true, modid, fname, src, tokens, _ps, options);
        const int retIdx = items.size();
        items.push(s_Node(type));
        parseFnBodyOrPattern_qFInc1ha(flags, items, expr_1, modid, fname, src, tokens, _ps, options);
        if ((name == "main"_fu) && (_ps.mbz._fnDepth == 1))
        {
            if (!type)
            {
                items.mutref(retIdx) = static_cast<s_Node&&>((type = createRead_qFInc1ha("i32"_fu, s_Flags{}, modid, fname, src, tokens, _ps)));
            }
            else if ((type.kind != s_Kind_call) || (type.value != "i32"_fu) || type.items.size())
                fail_94Qvv8bz("fn main() must return i32."_fu, fname, src, tokens, _ps);

            set_PUB_qFInc1ha(flags, fu::view<char>{}, false, fname, src, tokens, _ps);
            flags |= s_Flags_F_EXTERN;
        };
    };
    if ((flags & s_Flags_F_LAMBDA) || _ps.mbz._templateDepth)
        flags |= s_Flags_F_TEMPLATE;

    if (flags & s_Flags_F_TEMPLATE)
    {
        for (int i = 0; i < (items.size() + FN_ARGS_BACK); i++)
        {
            if ((items[i].flags & ((s_Flags_F_REF | s_Flags_F_CONST) | s_Flags_F_MUT)) == s_Flags_F_REF)
                items.mutref(i).flags |= s_Flags_F_TEMPLATE;

        };
    };
    return make_qFInc1ha(s_Kind_fn, items, flags, name, asserts, (!expr_1 ? s_ParseSyntax_PS_NOT_AN_EXPRESSION : s_ParseSyntax{}), s_TokenIdx{}, modid, _ps);
}

static s_Node parseFnDecl_qFInc1ha(s_Flags flags, const s_Fixity fixity, const s_DeclAsserts asserts, const bool expr, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const int loc0 = _ps._loc;
    _ps._loc = _ps._idx;
    fu_DEFER(_ps._loc = loc0);
    fu::str name { tryConsume_qFInc1ha(s_Kind_id, tokens, _ps).value };
    if (!name)
    {
        name = consume_qFInc1ha(s_Kind_op, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
        if (fixity == s_Fixity_Postfix)
        {
            if (!has_JcV6lPAx(POSTFIX, name))
                fail_94Qvv8bz((("No such postfix operator: "_fu + qBAD_e44UlzzA(name)) + "."_fu), fname, src, tokens, _ps);
            else if (has_JcV6lPAx(PREFIX, name))
                name = ("postfix"_fu + name);

        }
        else if (fixity == s_Fixity_Infix)
        {
            if (!(has_Zl0XKnjh(BINOP.PRECEDENCE, name)))
                fail_94Qvv8bz((("No such infix operator: "_fu + qBAD_e44UlzzA(name)) + "."_fu), fname, src, tokens, _ps);

        }
        else if (fixity == s_Fixity_Prefix)
        {
            if (!(has_JcV6lPAx(PREFIX, name)))
                fail_94Qvv8bz((("No such prefix operator: "_fu + qBAD_e44UlzzA(name)) + "."_fu), fname, src, tokens, _ps);

        };
        flags |= s_Flags_F_OPERATOR;
    }
    else if ((flags & s_Flags_F_OPERATOR) || fixity)
        fail_94Qvv8bz((("Not an operator: "_fu + qBAD_e44UlzzA(name)) + "."_fu), fname, src, tokens, _ps);

    s_Set_6ARmtH0K78f expectedTypedParams0 = steal_7R3sCSEE(_ps.mbz._expectedTypeParams);
    fu_DEFER(std::swap(expectedTypedParams0, _ps.mbz._expectedTypeParams));
    tryParseTypeParamsDecl_qFInc1ha(fname, src, tokens, _ps);
    fu::str endv = (tryConsume_94Qvv8bz(s_Kind_op, "("_fu, tokens, _ps) ? ")"_fu : fu::str{});
    if (!endv)
    {
        if (expr)
            return createAddrOfFn_qFInc1ha(name, flags, modid, _ps);
        else
            consume_qFInc1ha(s_Kind_op, "="_fu, fname, src, tokens, _ps);

    };
    return parseFnDecl_cont_qFInc1ha(name, flags, asserts, expr, false, endv, modid, fname, src, tokens, _ps, options);
}

                                #ifndef DEF_starts_8EDTwZj1Fm2
                                #define DEF_starts_8EDTwZj1Fm2
inline bool starts_8EDTwZj1(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static s_Node createTypeParam_qFInc1ha(const fu::str& value, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    const bool isDollar = starts_8EDTwZj1(value, '$');
    if ((!_ps.mbz._TODO_FIX_dollarOk && isDollar) || has_fdEaTHNU(_ps.mbz._upstreamTypeParams, value))
    {
        return createRead_qFInc1ha(value, s_Flags{}, modid, fname, src, tokens, _ps);
    }
    else
    {
        if (_ps.mbz._TODO_FIX_dollarOk && isDollar)
            add_eHVOG4pi(_ps.mbz._expectedTypeParams, value);

        _ps._numDollars++;
        return make_qFInc1ha(s_Kind_typeparam, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    };
}

static s_Node createAnonymousTypeParam_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    return createTypeParam_qFInc1ha(x7E_3lDd4lqo("_ "_fu, fu::i64dec(_ps._idx)), modid, fname, src, tokens, _ps);
}

static s_Node createArrayLiteral_qFInc1ha(const s_Flags argFlags, const fu::vec<s_Node>& items, const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_arrlit, items, argFlags, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node parseArrayLiteral_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    fu::vec<s_Node> args {};
    const s_Flags argFlags = parseCallArgs_qFInc1ha("]"_fu, args, false, modid, fname, src, tokens, _ps, options).flags;
    return createArrayLiteral_qFInc1ha(argFlags, args, modid, _ps);
}

static s_Node parseTypeParam_94Qvv8bz(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    fu::str value = ("$"_fu + consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value);
    return createTypeParam_qFInc1ha(value, modid, fname, src, tokens, _ps);
}

static s_Node parseLambda_qFInc1ha(const bool noClosingPipe, const bool leadingDot, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const int blockArgDepth0 = _ps.mbz._blockArgDepth;
    _ps.mbz._blockArgDepth = ((mode & M_CALLSITE_ARGUMENT_POS) ? (_ps.mbz._blockArgDepth + 1) : 0);
    _ps.mbz._lambdaDepth++;
    fu_DEFER(
    {
        _ps.mbz._blockArgDepth = blockArgDepth0;
        _ps.mbz._lambdaDepth--;
    });
    if (noClosingPipe && (_ps._precedence.formal > P_RESET.formal) && (_ps._precedence.formal < P_PREFIX_UNARY.formal))
        warn_qFInc1ha("Unparenthesized `|| lambda` within a binary expression."_fu, fname, src, tokens, _ps, options);

    fu::str name = "_"_fu;
    const s_Flags flags = (s_Flags_F_LAX | s_Flags_F_LAMBDA);
    return parseFnDecl_cont_qFInc1ha(name, flags, s_DeclAsserts{}, !(mode & M_LAMBDA_STMT_OK), leadingDot, (!noClosingPipe ? "|"_fu : fu::str{}), modid, fname, src, tokens, _ps, options);
}

static s_Node createDefinit_qFInc1ha(const int modid, const s_ParserState& _ps)
{
    return make_qFInc1ha(s_Kind_definit, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
}

static s_Node parseTypeParam_qFInc1ha(const fu::str& endv, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps)
{
    if (_ps.mbz._TODO_FIX_dollarOk)
    {
        const fu::str& value = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
        if (has_fdEaTHNU(_ps.mbz._upstreamTypeParams, value) || !add_eHVOG4pi(_ps.mbz._expectedTypeParams, value))
        {
            _ps._idx--;
            fail_94Qvv8bz((("A type parameter "_fu + qID_e44UlzzA(value)) + " is already defined."_fu), fname, src, tokens, _ps);
        }
        else
        {
            consume_qFInc1ha(s_Kind_op, endv, fname, src, tokens, _ps);
            _ps._numDollars++;
            return make_qFInc1ha(s_Kind_typeparam, (*(const fu::vec<s_Node>*)fu::NIL), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
        };
    }
    else
    {
        fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
    };
}

static s_Node parsePrefix_qFInc1ha(const fu::str& op, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (has_JcV6lPAx(PREFIX, op))
    {
        const int mode = (((op == "-"_fu) || (op == "+"_fu)) ? M_LINT_UNARY_PRECEDENCE : 0);
        return createPrefix_qFInc1ha(op, parseUnaryExpression_qFInc1ha(mode, modid, fname, src, tokens, _ps, options), modid, _ps);
    }
    else
    {
        _ps._idx--;
        fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
    };
}

static s_Node parseExpressionHead_qFInc1ha(const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& token = tokens[_ps._idx++];

    {
        const s_Kind k = token.kind;
        const fu::str& v = token.value;
        if ((k == s_Kind_int) || (k == s_Kind_real) || (k == s_Kind_str) || (k == s_Kind_char))
            return createLeaf_qFInc1ha(k, v, modid, _ps);
        else if (k == s_Kind_id)
        {
            const s_Token& peek = tokens[_ps._idx];
            if (peek.kind == s_Kind_id)
            {
                if ((v == "fn"_fu) || (v == "infix"_fu) || (v == "prefix"_fu) || (v == "postfix"_fu))
                {
                    _ps._idx++;
                    const s_Fixity fixity = ((v == "infix"_fu) ? s_Fixity_Infix : ((v == "prefix"_fu) ? s_Fixity_Prefix : ((v == "postfix"_fu) ? s_Fixity_Postfix : (_ps._idx--, s_Fixity{}))));
                    return parseFnDecl_qFInc1ha(s_Flags{}, fixity, s_DeclAsserts{}, true, modid, fname, src, tokens, _ps, options);
                };
            };
            if ((peek.kind == s_Kind_op) && (peek.value == "{"_fu))
            {
                if (v == "struct"_fu)
                {
                    return parseStructDecl_qFInc1ha(s_Kind_struct, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
                }
                else if (v == "union"_fu)
                {
                    return parseStructDecl_qFInc1ha(s_Kind_union, s_Flags{}, s_DeclAsserts{}, modid, fname, src, tokens, _ps, options);
                };
            };
            if (_ps.mbz._TODO_FIX_dollarOk && has_fdEaTHNU(_ps.mbz._expectedTypeParams, v))
                return createTypeParam_qFInc1ha(v, modid, fname, src, tokens, _ps);
            else if (v == "_"_fu)
                return createAnonymousTypeParam_qFInc1ha(modid, fname, src, tokens, _ps);
            else
            {
                return createRead_qFInc1ha(v, s_Flags{}, modid, fname, src, tokens, _ps);
            };
        }
        else if (k == s_Kind_op)
        {
            if (v == "("_fu)
                return parseParens_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "{"_fu)
                return parseBlock_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "["_fu)
                return parseArrayLiteral_qFInc1ha(modid, fname, src, tokens, _ps, options);
            else if (v == "$"_fu)
                return parseTypeParam_94Qvv8bz(modid, fname, src, tokens, _ps);
            else if (v == "|"_fu)
                return parseLambda_qFInc1ha(false, false, mode, modid, fname, src, tokens, _ps, options);
            else if (v == "||"_fu)
                return parseLambda_qFInc1ha(true, false, mode, modid, fname, src, tokens, _ps, options);
            else if (v == "."_fu)
                return parseLambda_qFInc1ha(true, true, 0, modid, fname, src, tokens, _ps, options);
            else if (v == "[]"_fu)
                return createDefinit_qFInc1ha(modid, _ps);
            else if (v == "::"_fu)
            {
                const fu::str& id = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
                _ps._idx--;
                return parseQualifierChain_qFInc1ha(createRead_qFInc1ha(id, s_Flags{}, modid, fname, src, tokens, _ps), modid, fname, src, tokens, _ps);
            }
            else if ((v == "<"_fu) && _ps.mbz._TODO_FIX_dollarOk)
                return parseTypeParam_qFInc1ha(">"_fu, modid, fname, src, tokens, _ps);
            else
                return parsePrefix_qFInc1ha(v, modid, fname, src, tokens, _ps, options);

        };
    };
    _ps._idx--;
    fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
}

                                #ifndef DEF_parseExpression_MVLhfXwnwT9
                                #define DEF_parseExpression_MVLhfXwnwT9
inline static s_Node parseExpression_MVLhfXwn(const s_Precedence& p1, const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Precedence p0 { _ps._precedence };
    const int loc00 = _ps._loc;
    _ps._precedence = p1;
    _ps._loc = _ps._idx;
    const int col00 = _ps._col0;
    if (!((tokens[_ps._idx].lcc.col >= (_ps._col0 + ((mode & M_LINT_ENSURE_INDENT) ? 1 : 0)))))
        warn_qFInc1ha(x7E_3lDd4lqo((x7E_3lDd4lqo((("Ambiguous indent at `"_fu + tokens[_ps._idx].value) + "`: expected more than "_fu), fu::i64dec(_ps._col0)) + ", got "_fu), fu::i64dec(tokens[_ps._idx].lcc.col)), fname, src, tokens, _ps, options);

    /*MOV*/ s_Node head = parseExpressionHead_qFInc1ha(mode, modid, fname, src, tokens, _ps, options);
    if (!s_ParseSyntax((head.syntax & s_ParseSyntax_PS_NOT_AN_EXPRESSION)))
    {
        const int mode_1 = (((mode & M_LINT_UNARY_PRECEDENCE) && ((head.kind == s_Kind_int) || (head.kind == s_Kind_real))) ? mode : (mode & ~M_LINT_UNARY_PRECEDENCE));
        int loc0 = (_ps._loc = _ps._idx);
        while (/*MOV*/ s_Node out = tryParseExpressionTail_qFInc1ha(head, mode_1, modid, fname, src, tokens, _ps, options))
        {

            {
                const s_Token& t1 = tokens[(_ps._loc = loc0)];
                if (!(t1.lcc.col > col00))
                    warn_qFInc1ha(x7E_3lDd4lqo((x7E_3lDd4lqo((("Ambiguous indent at `"_fu + t1.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(t1.lcc.col)), fname, src, tokens, _ps, options);

            };
            loc0 = (_ps._loc = _ps._idx);
            head = static_cast<s_Node&&>(out);
        };
    };
    _ps._precedence = p0;
    _ps._loc = loc00;
    return /*NRVO*/ head;
}
                                #endif

static s_Node parseUnaryExpression_qFInc1ha(const int mode, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    return parseExpression_MVLhfXwn(P_PREFIX_UNARY, mode, modid, fname, src, tokens, _ps, options);
}

static s_Node parseTypeAnnot_qFInc1ha(const bool allowTypeUnions, const bool allowLegacyRefs, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    bool hasLegacyRef = false;
    bool hasLegacyMutRef = false;
    if (allowLegacyRefs)
    {
        hasLegacyRef = !!tryConsume_94Qvv8bz(s_Kind_op, "&"_fu, tokens, _ps);
        hasLegacyMutRef = (hasLegacyRef ? !!tryConsume_94Qvv8bz(s_Kind_id, "mut"_fu, tokens, _ps) : false);
    };
    /*MOV*/ s_Node res = parseUnaryExpression_qFInc1ha(0, modid, fname, src, tokens, _ps, options);
    while (allowTypeUnions && tryConsume_94Qvv8bz(s_Kind_id, "or"_fu, tokens, _ps))
    {
        if (res.kind != s_Kind_typeunion)
        {
            res = make_qFInc1ha(s_Kind_typeunion, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(res) } }, s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
        };
        res.items += parseUnaryExpression_qFInc1ha(0, modid, fname, src, tokens, _ps, options);
    };
    if (hasLegacyRef)
    {
        res = createCall_qFInc1ha((hasLegacyMutRef ? "&mut"_fu : "&"_fu), s_Flags_F_OPERATOR, fu::vec<s_Node> { fu::slate<1, s_Node> { s_Node(res) } }, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps);
    };
    return /*NRVO*/ res;
}

static s_Node tryParseLetInit_qFInc1ha(const s_Precedence& precedence, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    if (tryConsume_94Qvv8bz(s_Kind_op, "="_fu, tokens, _ps))
    {
        return parseExpression_MVLhfXwn(precedence, int{}, modid, fname, src, tokens, _ps, options);
    }
    else
    {
        return s_Node{};
    };
}

static s_Node parseLet_qFInc1ha(const bool xqmark, const int anonIndex, const bool allowTypeUnions, const bool allowTypeParams, const s_Precedence& initPrecedence, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    s_Flags flags {};

    {
        if (tryConsume_ke9qGwne(s_Kind_id, "using"_fu, xqmark, tokens, _ps))
            flags |= s_Flags_F_USING;

        if (tryConsume_ke9qGwne(s_Kind_id, "implicit"_fu, xqmark, tokens, _ps))
            flags |= s_Flags_F_IMPLICIT;

        if (tryConsume_ke9qGwne(s_Kind_id, "lax"_fu, xqmark, tokens, _ps))
            flags |= s_Flags_F_LAX;

        if (tryConsume_ke9qGwne(s_Kind_id, "shadow"_fu, xqmark, tokens, _ps))
            set_SHADOW_qFInc1ha(flags, fname, src, tokens, _ps);

        if (tryConsume_ke9qGwne(s_Kind_id, "type"_fu, xqmark, tokens, _ps))
            flags |= s_Flags_F_TYPENAME;
        else
        {
            if (tryConsume_ke9qGwne(s_Kind_id, "mut"_fu, xqmark, tokens, _ps))
                flags |= s_Flags_F_MUT;
            else if (tryConsume_ke9qGwne(s_Kind_id, "const"_fu, xqmark, tokens, _ps))
                flags |= s_Flags_F_CONST;

            if (tryConsume_ke9qGwne(s_Kind_id, "ref"_fu, xqmark, tokens, _ps))
                flags |= s_Flags_F_REF;
            else if (tryConsume_ke9qGwne(s_Kind_id, "val"_fu, xqmark, tokens, _ps))
                flags |= s_Flags_F_VAL;

        };
    };
    if ((flags & s_Flags_F_MUT) && !(flags & s_Flags_F_REF))
        flags |= s_Flags_F_VAL;

    if ((flags & s_Flags_F_CONST) && !(flags & s_Flags_F_VAL))
        flags |= s_Flags_F_REF;

    const s_Token& sh_autocall = (xqmark ? tryConsume_94Qvv8bz(s_Kind_op, "."_fu, tokens, _ps) : (*(const s_Token*)fu::NIL));
    const int loc0 = _ps._loc;
    _ps._loc = _ps._idx;
    fu_DEFER(_ps._loc = loc0);
    const fu::str* BL_14_v;
    fu::str id { (((flags & s_Flags_F_TYPENAME) && tryConsume_94Qvv8bz(s_Kind_op, "<"_fu, tokens, _ps)) ? (__extension__ (
    {
        const fu::str& v = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
        consume_qFInc1ha(s_Kind_op, ">"_fu, fname, src, tokens, _ps);
        BL_14_v = &(v);
    (void)0;}), *BL_14_v) : consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value) };
    if (!sh_autocall)
    {
        if (xqmark && tryConsume_94Qvv8bz(s_Kind_op, "."_fu, tokens, _ps))
        {
            flags |= s_Flags_F_COMPOUND_ID;
            id += ("."_fu + consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value);
            while (tryConsume_94Qvv8bz(s_Kind_op, "::"_fu, tokens, _ps))
                id += ("\t"_fu + consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value);

        };
    };
    if (xqmark && tryConsume_94Qvv8bz(s_Kind_op, "[]"_fu, tokens, _ps))
        flags |= s_Flags_F_REST_ARG;

    if (sh_autocall)
    {
        const s_Token& postfix = tryConsume_qFInc1ha(s_Kind_id, tokens, _ps);
        flags |= s_Flags_F_COMPOUND_ID;
        id = (((postfix ? postfix.value : id) + "."_fu) + id);
    };
    if (id == "_"_fu)
    {
        if (anonIndex)
            id = x7E_3lDd4lqo("_ "_fu, fu::i64dec(anonIndex));

        flags |= s_Flags_F_LAX;
    };
    if (xqmark && tryConsume_94Qvv8bz(s_Kind_op, "!"_fu, tokens, _ps))
    {
        flags |= s_Flags_F_MUSTNAME;
        fu::view<char> BL_24_v {};
        fu::view<char> inner_id = (((flags & s_Flags_F_TYPENAME) && tryConsume_94Qvv8bz(s_Kind_op, "<"_fu, tokens, _ps)) ? (__extension__ (
        {
            fu::view<char> v = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
            consume_qFInc1ha(s_Kind_op, ">"_fu, fname, src, tokens, _ps);
            BL_24_v = (v);
        (void)0;}), static_cast<fu::view<char>&&>(BL_24_v)) : tryConsume_qFInc1ha(s_Kind_id, tokens, _ps).value);
        if (inner_id)
        {
            flags |= s_Flags_F_COMPOUND_ID;
            id += ("!"_fu + inner_id);
        };
    };
    s_Token optional { (xqmark ? tryConsume_94Qvv8bz(s_Kind_op, "?"_fu, tokens, _ps) : (*(const s_Token*)fu::NIL)) };
    _ps.mbz._TODO_FIX_dollarOk = allowTypeParams;
    const s_Token& isOpt = ((xqmark && !optional) ? (optional = tryConsume_94Qvv8bz(s_Kind_op, "?:"_fu, tokens, _ps)) : (*(const s_Token*)fu::NIL));
    s_Node type = (isOpt ? parseTypeAnnot_qFInc1ha(allowTypeUnions, false, modid, fname, src, tokens, _ps, options) : tryPopTypeAnnot_qFInc1ha(allowTypeUnions, false, modid, fname, src, tokens, _ps, options));
    _ps.mbz._TODO_FIX_dollarOk = false;
    s_Node init = (optional ? createDefinit_qFInc1ha(modid, _ps) : tryParseLetInit_qFInc1ha(initPrecedence, modid, fname, src, tokens, _ps, options));
    return createLet_qFInc1ha(id, type, init, flags, s_ParseSyntax{}, modid, _ps);
}

static s_Node parseStructItem_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& isPredicate = tryConsume_94Qvv8bz(s_Kind_id, "true"_fu, tokens, _ps);
    /*MOV*/ s_Node member = parseLet_qFInc1ha(true, 0, false, false, P_RESET, modid, fname, src, tokens, _ps, options);
    softSemi_qFInc1ha(fname, src, tokens, _ps, options);
    if (isPredicate)
        member.flags |= s_Flags_F_PREDICATE;

    return /*NRVO*/ member;
}

static s_Node parseEnumItem_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const fu::str& id = consume_qFInc1ha(s_Kind_id, (*(const fu::str*)fu::NIL), fname, src, tokens, _ps).value;
    s_Node init = tryParseLetInit_qFInc1ha(P_RESET, modid, fname, src, tokens, _ps, options);
    softSemi_qFInc1ha(fname, src, tokens, _ps, options);
    return createLet_qFInc1ha(id, (*(const s_Node*)fu::NIL), init, s_Flags{}, s_ParseSyntax{}, modid, _ps);
}

static s_Node parseDefer_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token* _0;
    const fu::str& value = (tryConsume_94Qvv8bz(s_Kind_op, ":"_fu, tokens, _ps) ? (*(_0 = &(tryConsume_94Qvv8bz(s_Kind_id, "err"_fu, tokens, _ps))) ? *_0 : consume_qFInc1ha(s_Kind_id, "ok"_fu, fname, src, tokens, _ps)).value : (*(const fu::str*)fu::NIL));
    if (_ps.mbz._fnDepth > 0)
    {
        fu::vec<s_Node> _1 {};
        return (_1 = fu::vec<s_Node> { fu::slate<1, s_Node> { parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options) } }, make_qFInc1ha(s_Kind_defer, static_cast<fu::vec<s_Node>&&>(_1), s_Flags{}, value, s_DeclAsserts{}, s_ParseSyntax_PS_ALWAYS_DISCARD, s_TokenIdx{}, modid, _ps));
    }
    else
    {
        _ps._idx--;
        fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps);
    };
}

static s_Node parseDeferOrStatement_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const int loc0 = _ps._loc;
    fu_DEFER(_ps._loc = loc0);
    const s_Token* _0;
    const s_Token& peek = (*(_0 = &(tokens[(_ps._loc = _ps._idx)])) ? *_0 : fail_94Qvv8bz(fu::str{}, fname, src, tokens, _ps));
    if (peek.kind == s_Kind_id)
    {
        fu::view<char> v = peek.value;
        if (v == "defer"_fu)
        {
            _ps._idx++;
            return parseDefer_qFInc1ha(modid, fname, src, tokens, _ps, options);
        };
    };
    return parseStatement_qFInc1ha(modid, fname, src, tokens, _ps, options);
}

                                #ifndef DEF_warn_ubpUbfDPVUa
                                #define DEF_warn_ubpUbfDPVUa
inline static void warn_ubpUbfDP(const int idx, const fu::str& reason, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const int idx0 = _ps._idx;
    _ps._idx = idx;
    warn_qFInc1ha(reason, fname, src, tokens, _ps, options);
    _ps._idx = idx0;
}
                                #endif

static fu::vec<s_Node> parseBlockLike_qFInc1ha(const s_Kind endKind, fu::view<char> endVal, const bool sTruct, const bool eNum, const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    const s_Token& tok0 = (_ps._idx ? tokens[(_ps._idx - 1)] : (*(const s_Token*)fu::NIL));
    const int line0 = tok0.lcc.line;
    const int col00 = _ps._col0;
    const int col01 = ((tok0.lcc.col == col00) ? col00 : -1);
    int colNN = -1;
    int lineNN = line0;
    /*MOV*/ fu::vec<s_Node> items {};
    for (; ; )
    {
        const int idx0 = _ps._idx;
        const s_Token& token = tokens[_ps._idx];
        if ((token.kind == s_Kind_op) && (token.value == ";"_fu))
            _ps._idx++;
        else if ((token.kind == endKind) && (token.value == endVal))
        {
            _ps._col0 = col00;
            _ps._idx++;
            const int line1 = token.lcc.line;
            const int col1 = token.lcc.col;
            const int col1_min = _ps._col0;
            const int col1_max = ((col01 < 0) ? ((colNN < 0) ? _ps._col0 : (colNN - 1)) : col01);
            if (!((line1 == line0) || ((col1 >= col1_min) && (col1 <= col1_max))))
                warn_qFInc1ha((x7E_3lDd4lqo((x7E_3lDd4lqo(((x7E_3lDd4lqo((("Inconsistent indent at closing `"_fu + token.value) + "`: expected "_fu), fu::i64dec((col1_min - 1))) + ((col1_max > col1_min) ? x7E_3lDd4lqo(" up to "_fu, fu::i64dec((col1_max - 1))) : ""_fu)) + ", got "_fu), fu::i64dec((col1 - 1))) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, _ps, options);

            break;
        }
        else
        {
            _ps._col0 = token.lcc.col;
            if (!(_ps._col0 > col00))
                warn_qFInc1ha((x7E_3lDd4lqo((x7E_3lDd4lqo((x7E_3lDd4lqo((("Inconsistent indent at `"_fu + token.value) + "`: expected more than "_fu), fu::i64dec(col00)) + ", got "_fu), fu::i64dec(_ps._col0)) + ". Block starts on line "_fu), fu::i64dec(line0)) + "."_fu), fname, src, tokens, _ps, options);

            if (!((colNN < 0) || (colNN == _ps._col0) || (token.lcc.line == lineNN)))
                warn_qFInc1ha((x7E_3lDd4lqo((x7E_3lDd4lqo((x7E_3lDd4lqo((("Inconsistent indent at `"_fu + token.value) + "`: expected exactly "_fu), fu::i64dec(colNN)) + ", got "_fu), fu::i64dec(_ps._col0)) + ". Previous statement starts on line "_fu), fu::i64dec(lineNN)) + "."_fu), fname, src, tokens, _ps, options);

            if (colNN < 0)
                colNN = _ps._col0;

            lineNN = token.lcc.line;
            /*MOV*/ s_Node expr = (sTruct ? parseStructItem_qFInc1ha(modid, fname, src, tokens, _ps, options) : (eNum ? parseEnumItem_qFInc1ha(modid, fname, src, tokens, _ps, options) : parseDeferOrStatement_qFInc1ha(modid, fname, src, tokens, _ps, options)));
            if (!((expr.kind != s_Kind_call) || (expr.flags & (s_Flags_F_CALL_HAS_ARGPARENS | s_Flags_F_OPERATOR)) || (expr.items.size() > 1) || (tokens[_ps._idx].value == endVal)))
                warn_ubpUbfDP(idx0, "Orphaned call without parentheses, add () to imply a useful side effect."_fu, fname, src, tokens, _ps, options);

            items.push(static_cast<s_Node&&>(expr));
        };
    };
    return /*NRVO*/ items;
}

static s_Node parseRoot_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, s_ParserState& _ps, const s_Options& options)
{
    consume_qFInc1ha(s_Kind_sof, ""_fu, fname, src, tokens, _ps);
    _ps._loc = _ps._idx;
    fu::vec<s_Node> _0 {};
    /*MOV*/ s_Node out = (_0 = parseBlockLike_qFInc1ha(s_Kind_eof, ""_fu, false, false, modid, fname, src, tokens, _ps, options), make_qFInc1ha(s_Kind_root, static_cast<fu::vec<s_Node>&&>(_0), s_Flags{}, (*(const fu::str*)fu::NIL), s_DeclAsserts{}, s_ParseSyntax{}, s_TokenIdx{}, modid, _ps));
    _ps._idx--;
    if (_ps._autopub)
    {
        for (int i = 0; i < out.items.size(); i++)
        {
            s_Node& item = out.items.mutref(i);
            const s_Kind k = item.kind;
            if ((k == s_Kind_fn) || (k == s_Kind_let) || (k == s_Kind_struct) || (k == s_Kind_union) || (k == s_Kind_enum) || (k == s_Kind_flags) || (k == s_Kind_primitive))
                set_PUB_qFInc1ha(item.flags, "Module has no pubs, pubbing everything."_fu, false, fname, src, tokens, _ps);

        };
    };
    return /*NRVO*/ out;
}

s_ParserOutput parse_qFInc1ha(const int modid, const fu::str& fname, const fu::str& src, fu::view<s_Token> tokens, const s_Options& options)
{
    s_ParserState _ps {};
    fu_DEFER_IF_OK(if (_ps.mbz._fnDepth)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_fnDepth"_fu));
    else if (_ps.mbz._templateDepth)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_templateDepth"_fu));
    else if (_ps.mbz._loopDepth)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_loopDepth"_fu));
    else if (_ps.mbz._lambdaDepth)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_lambdaDepth"_fu));
    else if (_ps.mbz._blockArgDepth)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_blockArgDepth"_fu));
    else if (_ps.mbz._TODO_FIX_dollarOk)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_TODO_FIX_dollarOk"_fu));
    else if (_ps.mbz._expectedTypeParams)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_expectedTypeParams"_fu));
    else if (_ps.mbz._upstreamTypeParams)
        fu::fail(("parser: end-cleanup, not empty: "_fu + "_upstreamTypeParams"_fu)););
    _ps._autopub = true;
    if (tokens[(tokens.size() - 1)].kind == s_Kind_eof)
    {
        /*MOV*/ s_Node root = parseRoot_qFInc1ha(modid, fname, src, tokens, _ps, options);
        return s_ParserOutput { static_cast<s_Node&&>(root), fu::vec<s_Import>(_ps.imports), fu::vec<fu::str>(_ps.warnings) };
    }
    else
        fail_94Qvv8bz("Missing `eof` token."_fu, fname, src, tokens, _ps);

}

#endif
