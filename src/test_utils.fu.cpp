#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
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
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_IAbSsNotHdi;
struct s_Options;
struct s_Lint;
struct s_TestDiffs;
void compile_7wGmmS6S(const fu_STR&, const fu_STR&, s_Context&, const s_Options&);
fu_STR lower_hmGcUNDy(fu_STR&&);
fu_STR qBAD_9QQZAztz(const fu_STR&);
void set_next_oJ8TkZcV(s_TestDiffs&, const fu_STR&, const fu_STR&);
void build_HnsWULq2(fu_STR&&, fu::view<char>, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, fu::view<char>, const fu_STR&, bool, bool, bool, bool, const fu_VEC<fu_STR>&, const fu_VEC<fu_STR>&, const s_Context&);
s_Context ZERO_oHGrVBOo(fu_VEC<fu_STR>&&, const s_Options&, s_TestDiffs&);
s_Context ZERO_oCxdKX3P(const fu_STR&, s_TestDiffs&);

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
    unsigned dev;
    unsigned shuffle;
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
            || shuffle
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TestDiffs
                                #define DEF_s_TestDiffs
struct s_TestDiffs
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

#ifndef fu_NO_fdefs

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
                                #endif

                                #ifndef DEF_clone_QHWJUlp3Txf
                                #define DEF_clone_QHWJUlp3Txf
inline int clone_QHWJUlp3(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_cKXFaBx1i30
                                #define DEF_clone_cKXFaBx1i30
inline const fu_STR& clone_cKXFaBx1(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Q9GwByTbj2h
                                #define DEF_clone_Q9GwByTbj2h
inline const s_ModuleInputs& clone_Q9GwByTb(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_cKDFcCShzG6
                                #define DEF_clone_cKDFcCShzG6
inline const s_ModuleOrder& clone_cKDFcCSh(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_mIcyDyOTlZ1
                                #define DEF_clone_mIcyDyOTlZ1
inline const fu_VEC<s_Struct>& clone_mIcyDyOT(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_oqX99xxPr12
                                #define DEF_clone_oqX99xxPr12
inline const s_SolvedNode& clone_oqX99xxP(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_O5MVWdjFpQ9
                                #define DEF_clone_O5MVWdjFpQ9
inline const fu_VEC<s_Overload>& clone_O5MVWdjF(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_zWV6M2ga21g
                                #define DEF_clone_zWV6M2ga21g
inline const fu_VEC<s_Extended>& clone_zWV6M2ga(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_eQPO4N5k976
                                #define DEF_clone_eQPO4N5k976
inline const fu_VEC<s_ScopeItem>& clone_eQPO4N5k(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_aJTGPeDTA93
                                #define DEF_clone_aJTGPeDTA93
inline const fu_VEC<int>& clone_aJTGPeDT(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Vq9wx9bfHA1
                                #define DEF_clone_Vq9wx9bfHA1
inline const fu_VEC<s_Target>& clone_Vq9wx9bf(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_4p2EW6P6Ld0
                                #define DEF_clone_4p2EW6P6Ld0
inline s_Scope clone_4p2EW6P6(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_O5MVWdjF(a.overloads);
        res.extended = clone_zWV6M2ga(a.extended);
        res.items = clone_eQPO4N5k(a.items);
        res.implicits = clone_eQPO4N5k(a.implicits);
        res.imports = clone_aJTGPeDT(a.imports);
        res.privates = clone_aJTGPeDT(a.privates);
        res.usings = clone_Vq9wx9bf(a.usings);
        res.converts = clone_Vq9wx9bf(a.converts);
        res.pub_items = clone_QHWJUlp3(a.pub_items);
        res.pub_cnvrts = clone_QHWJUlp3(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_JLHVIKS4dWa
                                #define DEF_clone_JLHVIKS4dWa
inline s_SolverNotes clone_JLHVIKS4(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_BTsvUzwcF36
                                #define DEF_clone_BTsvUzwcF36
inline s_SolverOutput clone_BTsvUzwc(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_oqX99xxP(a.root);
        res.scope = clone_4p2EW6P6(a.scope);
        res.notes = clone_JLHVIKS4(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_jklpPw3yip5
                                #define DEF_clone_jklpPw3yip5
inline const s_CodegenOutput& clone_jklpPw3y(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ODN5U52cq59
                                #define DEF_clone_ODN5U52cq59
inline s_ModuleOutputs clone_ODN5U52c(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_mIcyDyOT(a.types);
        res.solve = clone_BTsvUzwc(a.solve);
        res.cpp = clone_jklpPw3y(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_PqlSWJbwCL7
                                #define DEF_clone_PqlSWJbwCL7
inline const s_ModuleStats& clone_PqlSWJbw(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_XWiiejdI92l
                                #define DEF_clone_XWiiejdI92l
inline s_Module clone_XWiiejdI(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_QHWJUlp3(a.modid);
        res.fname = clone_cKXFaBx1(a.fname);
        res.in = clone_Q9GwByTb(a.in);
        res.order = clone_cKDFcCSh(a.order);
        res.out = clone_ODN5U52c(a.out);
        res.stats = clone_PqlSWJbw(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_map_AUBQVaPaij1
                                #define DEF_map_AUBQVaPaij1
inline fu_VEC<s_Module> map_AUBQVaPa(fu::view<s_Module> a)
{
    /*MOV*/ fu_VEC<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_XWiiejdI(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_pyylHj9Puo5
                                #define DEF_clone_pyylHj9Puo5
inline fu_VEC<s_Module> clone_pyylHj9P(fu::view<s_Module> a)
{
    return map_AUBQVaPa(a);
}
                                #endif

                                #ifndef DEF_clone_5K12T79VlNk
                                #define DEF_clone_5K12T79VlNk
inline const s_Map_IAbSsNotHdi& clone_5K12T79V(const s_Map_IAbSsNotHdi& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_VqnlIKJgJh2
                                #define DEF_clone_VqnlIKJgJh2
inline s_Context clone_VqnlIKJg(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.modules = clone_pyylHj9P(a.modules);
        res.dep_order = clone_aJTGPeDT(a.dep_order);
        res.files = clone_5K12T79V(a.files);
        res.fuzzy = clone_5K12T79V(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

static fu_STR ensure_main_Bxlpkq3Y(const fu_STR& src)
{
    if (fu::has(src, "fn main"_fu))
        return fu_STR(src);
    else
    {
        return ("\n\nfn main(): i32 {\n"_fu + src) + "\n}\n"_fu;
    };
}

                                #ifndef DEF_FUDIR
                                #define DEF_FUDIR
extern const fu_STR FUDIR;
                                #endif

                                #ifndef DEF_x7E_sTZRmMq1BYf
                                #define DEF_x7E_sTZRmMq1BYf
inline fu_STR x7E_sTZRmMq1(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_DEV_PrintAST
                                #define DEF_DEV_PrintAST
inline constexpr unsigned DEV_PrintAST = (0x1u << 1u);
                                #endif

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

                                #ifndef DEF_update_BvxGz5uiYA7
                                #define DEF_update_BvxGz5uiYA7
inline bool update_BvxGz5ui(const fu_STR& item, const fu_STR& extra, s_Map_IAbSsNotHdi& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_sTZRmMq1(_.keys[i], item);
        if (cmp == 0)
        {
            _.vals.mutref(i) = fu_STR(extra);
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    _.keys.insert(lo, fu_STR(item));
    _.vals.insert(lo, fu_STR(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_MRLJO2CvfHc
                                #define DEF_set_MRLJO2CvfHc
inline bool set_MRLJO2Cv(s_Map_IAbSsNotHdi& _, const fu_STR& key, const fu_STR& value)
{
    return update_BvxGz5ui(key, value, _);
}
                                #endif

                                #ifndef DEF_str_NS5lOCBb1Va
                                #define DEF_str_NS5lOCBb1Va
inline fu_STR str_NS5lOCBb(const s_SolverNotes n)
{
    /*MOV*/ fu_STR res {};

    {
        if (n & s_SolverNotes_N_FnRecursion)
            res += ("N_FnRecursion"_fu + ", "_fu);

        if (n & s_SolverNotes_N_FnResolve)
            res += ("N_FnResolve"_fu + ", "_fu);

        if (n & s_SolverNotes_N_FnReopen)
            res += ("N_FnReopen"_fu + ", "_fu);

        if (n & s_SolverNotes_N_TypeRecursion)
            res += ("N_TypeRecursion"_fu + ", "_fu);

        if (n & s_SolverNotes_N_TypeResolve)
            res += ("N_TypeResolve"_fu + ", "_fu);

        if (n & s_SolverNotes_N_TypeReopen)
            res += ("N_TypeReopen"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadCode)
            res += ("N_DeadCode"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadCall)
            res += ("N_DeadCall"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadLet)
            res += ("N_DeadLet"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadIfCond)
            res += ("N_DeadIfCond"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadIfCons)
            res += ("N_DeadIfCons"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadArrlit)
            res += ("N_DeadArrlit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadLoopInit)
            res += ("N_DeadLoopInit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_DeadConv)
            res += ("N_DeadConv"_fu + ", "_fu);

        if (n & s_SolverNotes_N_NonTrivAutoCopy)
            res += ("N_NonTrivAutoCopy"_fu + ", "_fu);

        if (n & s_SolverNotes_N_RelaxRespec)
            res += ("N_RelaxRespec"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedImplicit)
            res += ("N_UnusedImplicit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedCall)
            res += ("N_UnusedCall"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedDefer)
            res += ("N_UnusedDefer"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedStmt)
            res += ("N_UnusedStmt"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedTry)
            res += ("N_UnusedTry"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedAndOr)
            res += ("N_UnusedAndOr"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedIfElse)
            res += ("N_UnusedIfElse"_fu + ", "_fu);

        if (n & s_SolverNotes_N_UnusedArrlit)
            res += ("N_UnusedArrlit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_BckSoftRisk)
            res += ("N_BckSoftRisk"_fu + ", "_fu);

        if (n & s_SolverNotes_N_BckMustSeq)
            res += ("N_BckMustSeq"_fu + ", "_fu);

        if (n & s_SolverNotes_N_MoveMustSeq)
            res += ("N_MoveMustSeq"_fu + ", "_fu);

        if (n & s_SolverNotes_N_SD_HasStaticInit)
            res += ("N_SD_HasStaticInit"_fu + ", "_fu);

        if (n & s_SolverNotes_N_SD_ExternPrivates)
            res += ("N_SD_ExternPrivates"_fu + ", "_fu);

    };
    if (res)
        res.shrink((res.size() - 2));

    return /*NRVO*/ res;
}
                                #endif

s_Context compile_snippets_Y5r8l4ds(fu::view<fu_STR> sources, fu::view<fu_STR> fnames, fu::view<s_Options> options)
{
    /*MOV*/ s_Context ctx = clone_VqnlIKJg(CTX_PRELUDE);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu_STR& snippet = sources[i];
        fu_STR src = ((i == (sources.size() - 1)) ? ensure_main_Bxlpkq3Y(snippet) : fu_STR(snippet));
        fu_STR fname = ((fnames.size() > i) ? fu_STR(fnames[i]) : (x7E_sTZRmMq1((FUDIR + "__tests__/_"_fu), fu::i64dec(i)) + ".fu"_fu));
        s_Options options_1 { ((options.size() > i) ? options[i] : (*(const s_Options*)fu::NIL)) };
        if (fu::has(src, "/*PRINT*/"_fu))
            options_1.dev |= DEV_PrintAST;

        set_MRLJO2Cv(ctx.files, fname, src);
        compile_7wGmmS6S(fname, (*(const fu_STR*)fu::NIL), ctx, options_1);
    };
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        s_Module& module = ctx.modules.mutref(i_1);
        const s_SolverNotes notes = module.out.solve.notes;
        if (notes)
            module.out.cpp.src += (x7E_sTZRmMq1("\n// "_fu, str_NS5lOCBb(notes)) + "\n"_fu);

    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_x3Dx3D_sTZRmMq1BYf
                                #define DEF_x3Dx3D_sTZRmMq1BYf
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

fu_STR snippet2cpp_mdMRU05n(const fu_STR& src)
{
    fu_STR fname = "/DIR/FILE.fu"_fu;
    s_Context ctx = compile_snippets_Y5r8l4ds((fu::slate<1, fu_STR> { fu_STR(src) }), (fu::slate<1, fu_STR> { fu_STR(fname) }), fu::view<s_Options>{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu_STR(module.out.cpp.src);

    };
    return fu_STR{};
}

static int unindent_left_eEh7DAxj(fu::view<char> src, const int i0)
{
    int i1 = i0;
    while (i1--)
    {
        const char c = src[i1];
        if (c != ' ')
        {
            if (c == '\n')
                return i1 + 1;
            else
                break;

        };
    };
    return i0;
}

                                #ifndef DEF_split_gBWTalTkBVk
                                #define DEF_split_gBWTalTkBVk
inline void split_gBWTalTk(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
{
    int last = 0;
    int next = 0;
    const int N = sep.size();
    if (N)
    {
        while (((next = fu::lfind(str, sep, last)) >= 0))
        {

            {
                /*MOV*/ fu_STR substr = fu::slice(str, last, next);
                result += static_cast<fu_STR&&>(substr);
            };
            last = (next + N);
        };
    };
    if (last)
    {
        /*MOV*/ fu_STR substr = fu::slice(str, last);
        result += static_cast<fu_STR&&>(substr);
    }
    else
        result += fu_STR(str);

}
                                #endif

                                #ifndef DEF_split_3Ik58ru2SW4
                                #define DEF_split_3Ik58ru2SW4
inline fu_VEC<fu_STR> split_3Ik58ru2(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_gBWTalTk(str, sep, result);
    return /*NRVO*/ result;
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

static fu_STR ERR_TRIM_0bmq74Fa(const fu_STR& e)
{
    int start = 0;
    bool startOK = false;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '/')
            start = (i + 1);
        else if (c == ':')
            startOK = true;
        else if (c == '\n')
            break;

    };
    if (startOK)
        return fu::slice(e, start);
    else
        fu::fail(("FAIL: Error does not start with an `dir/file.fu@line:col` marker:\n"_fu + e));

}

static fu_STR ERR_STRIP_ANSI_0bmq74Fa(/*MOV*/ fu_STR&& e)
{
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if (c == '\x1B')
        {
            const int i0 = i++;
            for (; i < e.size(); i++)
            {
                const char c_1 = e[i];
                if (c_1 == 'm')
                {
                    i++;
                    e.splice(i0, (i - i0));
                    i = i0;
                    i--;
                    break;
                };
            };
        };
    };
    return static_cast<fu_STR&&>(e);
}

static fu_STR ERR_STRIP_SNIPPETS_0bmq74Fa(/*MOV*/ fu_STR&& e)
{
    int i0 = 0;
    for (int i = 0; i < e.size(); i++)
    {
        const char c = e[i];
        if ((c == ' ') || (c == '\n'))
            continue;
        else
        {
            const bool snippet = (((c >= '0') && (c <= '9')) || (c == '|'));
            i++;
            for (; i < e.size(); i++)
            {
                const char c_1 = e[i];
                if (c_1 == '\n')
                {
                    i++;
                    if (snippet)
                    {
                        e.splice(i0, (i - i0));
                        i = i0;
                    }
                    else
                        i0 = i;

                    i--;
                    break;
                };
            };
        };
    };
    return static_cast<fu_STR&&>(e);
}

static fu_STR ERR_KEY_iAIZCjDR(fu::view<fu_STR> sources)
{
    /*MOV*/ fu_STR key {};
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_eEh7DAxj(src, src.size());
        key += fu::get_view(src, 0, end);
    };
    return /*NRVO*/ key;
}

                                #ifndef DEF_map_4nroOuJ6Eia
                                #define DEF_map_4nroOuJ6Eia
inline fu_VEC<s_Options> map_4nroOuJ6(fu::view<fu_STR> a, const s_Options& options)
{
    /*MOV*/ fu_VEC<s_Options> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const s_Options* BL_3_v;
        res.mutref(i) = s_Options((__extension__ (
        {
            [[maybe_unused]] fu::view<char> _ = a[i];
            BL_3_v = &(options);
        (void)0;}), *BL_3_v));
    };
    return /*NRVO*/ res;
}
                                #endif

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

                                #ifndef DEF_parse_uC3IjuZ5pt5
                                #define DEF_parse_uC3IjuZ5pt5
inline s_SolverNotes parse_uC3IjuZ5(fu::view<char> v, const s_SolverNotes)
{
    if (v == "N_FnRecursion"_fu)
        return s_SolverNotes_N_FnRecursion;
    else if (v == "N_FnResolve"_fu)
        return s_SolverNotes_N_FnResolve;
    else if (v == "N_FnReopen"_fu)
        return s_SolverNotes_N_FnReopen;
    else if (v == "N_TypeRecursion"_fu)
        return s_SolverNotes_N_TypeRecursion;
    else if (v == "N_TypeResolve"_fu)
        return s_SolverNotes_N_TypeResolve;
    else if (v == "N_TypeReopen"_fu)
        return s_SolverNotes_N_TypeReopen;
    else if (v == "N_DeadCode"_fu)
        return s_SolverNotes_N_DeadCode;
    else if (v == "N_DeadCall"_fu)
        return s_SolverNotes_N_DeadCall;
    else if (v == "N_DeadLet"_fu)
        return s_SolverNotes_N_DeadLet;
    else if (v == "N_DeadIfCond"_fu)
        return s_SolverNotes_N_DeadIfCond;
    else if (v == "N_DeadIfCons"_fu)
        return s_SolverNotes_N_DeadIfCons;
    else if (v == "N_DeadArrlit"_fu)
        return s_SolverNotes_N_DeadArrlit;
    else if (v == "N_DeadLoopInit"_fu)
        return s_SolverNotes_N_DeadLoopInit;
    else if (v == "N_DeadConv"_fu)
        return s_SolverNotes_N_DeadConv;
    else if (v == "N_NonTrivAutoCopy"_fu)
        return s_SolverNotes_N_NonTrivAutoCopy;
    else if (v == "N_RelaxRespec"_fu)
        return s_SolverNotes_N_RelaxRespec;
    else if (v == "N_UnusedImplicit"_fu)
        return s_SolverNotes_N_UnusedImplicit;
    else if (v == "N_UnusedCall"_fu)
        return s_SolverNotes_N_UnusedCall;
    else if (v == "N_UnusedDefer"_fu)
        return s_SolverNotes_N_UnusedDefer;
    else if (v == "N_UnusedStmt"_fu)
        return s_SolverNotes_N_UnusedStmt;
    else if (v == "N_UnusedTry"_fu)
        return s_SolverNotes_N_UnusedTry;
    else if (v == "N_UnusedAndOr"_fu)
        return s_SolverNotes_N_UnusedAndOr;
    else if (v == "N_UnusedIfElse"_fu)
        return s_SolverNotes_N_UnusedIfElse;
    else if (v == "N_UnusedArrlit"_fu)
        return s_SolverNotes_N_UnusedArrlit;
    else if (v == "N_BckSoftRisk"_fu)
        return s_SolverNotes_N_BckSoftRisk;
    else if (v == "N_BckMustSeq"_fu)
        return s_SolverNotes_N_BckMustSeq;
    else if (v == "N_MoveMustSeq"_fu)
        return s_SolverNotes_N_MoveMustSeq;
    else if (v == "N_SD_HasStaticInit"_fu)
        return s_SolverNotes_N_SD_HasStaticInit;
    else if (v == "N_SD_ExternPrivates"_fu)
        return s_SolverNotes_N_SD_ExternPrivates;

    return s_SolverNotes{};
}
                                #endif

                                #ifndef DEF_grow_if_oob_JMigTcQ1ln8
                                #define DEF_grow_if_oob_JMigTcQ1ln8
inline fu_VEC<fu_STR>& grow_if_oob_JMigTcQ1(fu_VEC<fu_VEC<fu_STR>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

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

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE;
                                #endif

s_Context ZERO_oHGrVBOo(fu_VEC<fu_STR>&& sources, const s_Options& options, s_TestDiffs& testdiffs)
{
    for (int i = 0; i < sources.size(); i++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i];
            int start0 = fu::lfind(src, "<fail"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = fu::lfind(src, "</fail>"_fu, start0);
                if ((end0 >= 0))
                {
                    int start1 = (start0 + 5);
                    while (src[start1++] != '>');
                    fu_STR msg = fu::slice(src, (start0 + 5), (start1 - 1));
                    if (msg)
                    {
                        if (msg[0] == ' ')
                        {
                            const int end1 = (end0 + 7);
                            start0 = unindent_left_eEh7DAxj(src, start0);
                            end0 = unindent_left_eEh7DAxj(src, end0);
                            fu_STR prefix = fu::slice(src, 0, start0);
                            fu_STR suffix = fu::slice(src, end1, src.size());
                            fu_VEC<fu_STR> split = split_3Ik58ru2(fu::slice(src, start1, end0), "<pass/>"_fu);
                            if (split.size() > 1)
                            {
                                if (split.size() < 3)
                                {
                                    fu_VEC<fu_STR> fails = split_3Ik58ru2(split[0], "<fail/>"_fu);
                                    split.shift();
                                    fu::view<char> pass = only_gp6HauT4(split);
                                    for (int j = fails.size(); j-- > 0; )
                                    {
                                        fu::view<char> fail = fails[j];
                                        const int end = unindent_left_eEh7DAxj(fail, fail.size());
                                        sources.mutref(i) = ((prefix + fu::get_view(fail, 0, end)) + suffix);

                                        try
                                        {
                                        {
                                            ZERO_oHGrVBOo(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
                                        }
                                        }
                                        catch (const std::exception& o_0)
                                        {
                                            fu_STR e = fu_TO_STR(o_0.what());

                                        {
                                            fu_STR e_1 = ERR_TRIM_0bmq74Fa(e);
                                            fu_STR actual = lower_hmGcUNDy(ERR_STRIP_SNIPPETS_0bmq74Fa(ERR_STRIP_ANSI_0bmq74Fa(fu_STR(e_1))));
                                            bool BUG_ok = false;
                                            int m0 = -1;
                                            for (int m1 = 0; (m1 <= msg.size()); m1++)
                                            {
                                                const char c = ((m1 < msg.size()) ? char(msg[m1]) : ' ');
                                                if ((int(fu::u8(c)) <= 32))
                                                {
                                                    if ((m0 >= 0))
                                                    {
                                                        /*MOV*/ fu_STR exact = fu::slice(msg, m0, m1);
                                                        if (exact == "BUG"_fu)
                                                            BUG_ok = true;

                                                        fu_STR expect = lower_hmGcUNDy(static_cast<fu_STR&&>(exact));
                                                        if (!fu::has(actual, expect))
                                                            fu::fail((((((("<fail> mismatch:\n\n    Expected error keyword:\n        "_fu + qBAD_9QQZAztz(expect)) + " from pattern <fail"_fu) + qBAD_9QQZAztz(msg)) + ">"_fu) + "\n\n    ... not present in error message:\n\n"_fu) + e_1));

                                                    };
                                                    m0 = -1;
                                                }
                                                else if (m0 < 0)
                                                    m0 = m1;

                                            };
                                            if (!BUG_ok && fu::has(e_1, "BUG"_fu))
                                                fu::fail(("<fail> error message contains BUG:\n\n"_fu + e_1));
                                            else
                                            {
                                                set_next_oJ8TkZcV(testdiffs, ERR_KEY_iAIZCjDR(sources), e_1);
                                                continue;
                                            };
                                        }
                                        }
;
                                        fu::fail(("<fail> does not throw:\n"_fu + sources[i]));
                                    };
                                    const int end = unindent_left_eEh7DAxj(pass, pass.size());
                                    sources.mutref(i) = ((prefix + fu::get_view(pass, 0, end)) + suffix);
                                }
                                else
                                    fu::fail("Multiple `<pass/>` blocks for `<fail>`."_fu);

                            }
                            else
                                fu::fail("No `<pass/>` for `<fail>`."_fu);

                        }
                        else
                            fu::fail((("Bad <fail keywords>: `<fail"_fu + msg) + ">`."_fu));

                    }
                    else
                        fu::fail("No <fail keywords>."_fu);

                }
                else
                    fu::fail("No closing `</fail>` for `<fail>`."_fu);

            };
        };
    };
    for (int i_1 = 0; i_1 < sources.size(); i_1++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i_1];
            int start0 = fu::lfind(src, "<alt>"_fu);
            if (start0 < 0)
                break;
            else
            {
                int end0 = fu::lfind(src, "</alt>"_fu, start0);
                if ((end0 >= 0))
                {
                    const int start1 = (start0 + 5);
                    const int end1 = (end0 + 6);
                    start0 = unindent_left_eEh7DAxj(src, start0);
                    end0 = unindent_left_eEh7DAxj(src, end0);
                    fu_STR prefix = fu::slice(src, 0, start0);
                    fu_STR suffix = fu::slice(src, end1, src.size());
                    fu_VEC<fu_STR> split = split_3Ik58ru2(fu::slice(src, start1, end0), "<alt/>"_fu);
                    if (split.size() < 2)
                    {
                        split += fu_STR{};
                    };
                    for (int j = split.size(); j-- > 0; )
                    {
                        fu::view<char> part = split[j];
                        const int end = unindent_left_eEh7DAxj(part, part.size());
                        sources.mutref(i_1) = ((prefix + fu::get_view(part, 0, end)) + suffix);
                        if (j)
                        {
                            ZERO_oHGrVBOo(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
                        };
                    };
                }
                else
                    fu::fail("No closing `</alt>` for `<alt>`."_fu);

            };
        };
    };
    for (int i_2 = 0; i_2 < sources.size(); i_2++)
    {
        for (; ; )
        {
            const fu_STR& src = sources[i_2];
            int start0 = fu::lfind(src, "<split/>"_fu);
            const int start1 = (start0 + 8);
            if (start0 < 0)
                break;
            else
            {
                const int start00 = start0;
                while (start0 && (src[(start0 - 1)] == ' '))
                    start0--;

                /*MOV*/ fu_STR moduleA = fu::slice(src, 0, start0);
                /*MOV*/ fu_STR moduleB = ((x7E_sTZRmMq1((fu::get_view(src, start0, start00) + "import _"_fu), fu::i64dec(i_2)) + ";"_fu) + fu::get_view(src, start1, src.size()));
                /*MOV*/ fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
                sources.mutref(i_2) = static_cast<fu_STR&&>(without);
                ZERO_oHGrVBOo(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
                sources.mutref(i_2) = static_cast<fu_STR&&>(moduleA);
                int _0 {};
                (_0 = (i_2 + 1), sources.insert(int(_0), static_cast<fu_STR&&>(moduleB)));
            };
        };
    };
    fu_VEC<fu_VEC<fu_STR>> expectations {};
    fu_VEC<s_Options> options_1 = map_4nroOuJ6(sources, options);
    for (int i_3 = 0; i_3 < sources.size(); i_3++)
    {
        fu_STR& src = sources.mutref(i_3);

        {
            int end = src.size();
            for (int r = src.size(); (r-- > 0) && (src[r] == ' '); )
                end = r;

            src.shrink(end);
        };
        s_SolverNotes break_notes {};
        int start = 0;
        while (((start = fu::lfind(src, " ;; "_fu, start)) >= 0))
        {
            int end = find_mimv437E(src, '\n', (start + 4));
            if (end < 0)
                end = src.size();

            /*MOV*/ fu_STR annot = fu::slice(src, (start + 4), end);
            if (annot[0] == '!')
            {
                s_SolverNotes _1 {};
                break_notes |= ((_1 = parse_uC3IjuZ5(fu::slice(annot, 1, annot.size()), s_SolverNotes{})) ? _1 : fu::fail((("Bad break_note: `;; "_fu + annot) + "`."_fu)));
            }
            else
            {
                fu_VEC<fu_STR>* _2;
                (_2 = &(grow_if_oob_JMigTcQ1(expectations, i_3)), (*_2 += static_cast<fu_STR&&>(annot)));
            };
            src.mutref((start + 1)) = '/';
            src.mutref((start + 2)) = '/';
            start = end;
        };
        options_1.mutref(i_3).break_notes = s_SolverNotes(break_notes);
    };
    /*MOV*/ s_Context ctx = compile_snippets_Y5r8l4ds(sources, fu::view<fu_STR>{}, options_1);
    fu_STR testdiff_prepend {};
    for (int i_4 = 0; i_4 < expectations.size(); i_4++)
    {
        fu::view<fu_STR> arr = expectations[i_4];
        fu::view<char> src = sources[i_4];
        const s_ModuleOutputs& out = ctx.modules[(i_4 + 1)].out;
        const s_CodegenOutput& cpp = out.cpp;
        for (int i_5 = 0; i_5 < arr.size(); i_5++)
        {
            const fu_STR& x = arr[i_5];
            const s_SolverNotes note = parse_uC3IjuZ5(x, s_SolverNotes{});
            if (note)
            {
                if (out.solve.notes & note)
                    continue;
                else
                    fu::fail(((((("Expected note not listed: `"_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));

            }
            else
            {
                const int idx = find_ODCLAe2r(x, ' ');
                fu_STR cmd = fu::slice(x, 0, idx);
                fu_STR rest = fu::slice(x, (idx + 1));
                const bool found = fu::has(cpp.src, rest);
                if (cmd == "EXPECT"_fu)
                {
                    if (!(found))
                        fu::fail(((((("EXPECT mismatch: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));

                }
                else if (cmd != "TODO"_fu)
                    fu::fail(((("Unknown ;; CHECK: `;; "_fu + x) + "` in:\n"_fu) + src));
                else if (found)
                    fu::fail(((((("TODO test is actually passing: `;; "_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));
                else
                {
                    testdiff_prepend += ((";; "_fu + x) + "\n"_fu);
                };
            };
        };
    };
    const bool run = true;
    build_HnsWULq2(fu_STR(DEFAULT_WORKSPACE), FUDIR, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), "debug"_fu, "print-src"_fu, run, false, false, false, (*(const fu_VEC<fu_STR>*)fu::NIL), (*(const fu_VEC<fu_STR>*)fu::NIL), ctx);
    build_HnsWULq2(fu_STR(DEFAULT_WORKSPACE), FUDIR, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), fu::view<char>{}, "print-src"_fu, run, false, false, false, (*(const fu_VEC<fu_STR>*)fu::NIL), (*(const fu_VEC<fu_STR>*)fu::NIL), ctx);

    {
        if (testdiff_prepend)
        {
            testdiff_prepend += "\n"_fu;
        };
        fu_STR key {};
        for (int i_5 = 0; i_5 < sources.size(); i_5++)
        {
            key += sources[i_5];
            fu::view<char> actual = ctx.modules[((i_5 + ctx.modules.size()) - sources.size())].out.cpp.src;
            set_next_oJ8TkZcV(testdiffs, key, (testdiff_prepend + actual));
        };
    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_replace_ri7KHFHDbB0
                                #define DEF_replace_ri7KHFHDbB0
inline fu_STR replace_ri7KHFHD(const fu_STR& str, fu::view<char> all, fu::view<char> with)
{
    /*MOV*/ fu_STR result {};

    {
        int last = 0;
        int next = 0;
        const int N = all.size();
        if (N)
        {
            while (((next = fu::lfind(str, all, last)) >= 0))
            {

                {
                    fu_STR substr = fu::slice(str, last, next);
                    const bool first = !last;
                    const bool last_1 = false;
                    if (!first)
                        result += with;
                    else if (last_1)
                        return fu_STR(str);

                    result += substr;
                };
                last = (next + N);
            };
        };
        if (last)
        {
            fu_STR substr = fu::slice(str, last);
            const bool first = false;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += substr;
        }
        else
        {
            const bool first = true;
            const bool last_1 = true;
            if (!first)
                result += with;
            else if (last_1)
                return fu_STR(str);

            result += str;
        };
    };
    return /*NRVO*/ result;
}
                                #endif

static fu_STR indent_gWtvb1JJ(const fu_STR& src)
{
    return replace_ri7KHFHD(src, "\n"_fu, "\n\t"_fu);
}

void ZERO_SAME_nv7UfNbd(fu::view<fu_VEC<fu_STR>> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<s_Module> expect = ZERO_oHGrVBOo(fu_VEC<fu_STR>(alts[0]), s_Options{}, testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu_VEC<s_Module> actual = compile_snippets_Y5r8l4ds(alts[i], fu::view<fu_STR>{}, fu::view<s_Options>{}).modules;
        if (expect.size() != actual.size())
            fu::fail("ZERO_SAME: expect/actual len mismatch."_fu);
        else
        {
            for (int m = 0; m < actual.size(); m++)
            {
                const fu_STR& x = expect[m].out.cpp.src;
                const fu_STR& a = actual[m].out.cpp.src;
                if (x != a)
                    fu::fail((((x7E_sTZRmMq1((((x7E_sTZRmMq1(((x7E_sTZRmMq1("ZERO_SAME: alts["_fu, fu::i64dec(i)) + "] mismatch at:\n"_fu) + "\nexpect["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_gWtvb1JJ(x)) + "\nactual["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_gWtvb1JJ(a)) + "\n"_fu));

            };
        };
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

void TODO_XTE66CJM(const fu_VEC<fu_STR>& sources, s_TestDiffs& testdiffs)
{

    try
    {
    {
        ZERO_oHGrVBOo(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
    }
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        set_next_oJ8TkZcV(testdiffs, ERR_KEY_iAIZCjDR(sources), ("TODO: "_fu + ERR_TRIM_0bmq74Fa(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + join_yaiqG1c4(sources, "\n\n"_fu)));
}

s_Context ZERO_oCxdKX3P(const fu_STR& src, s_TestDiffs& testdiffs)
{
    return ZERO_oHGrVBOo(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, s_Options{}, testdiffs);
}

void TODO_oCxdKX3P(const fu_STR& src, s_TestDiffs& testdiffs)
{
    TODO_XTE66CJM(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, testdiffs);
}

void ZERO_SAME_cqAFELSG(fu::view<fu_STR> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<fu_VEC<fu_STR>> wrap {};
    for (int i = 0; i < alts.size(); i++)
    {
        wrap += fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(alts[i]) } };
    };
    ZERO_SAME_nv7UfNbd(wrap, testdiffs);
}

#endif
