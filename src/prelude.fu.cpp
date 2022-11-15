#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/init_priority.h>

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
s_Module& getModule_c1QWvGGE(const fu_STR&, s_Context&);
s_LexerOutput lex_uk2ULxHb(const fu_STR&, fu::view<char>);
s_ParserOutput parse_ZGSvajvi(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&);
void setModule_xCUAVHNa(const s_Module&, s_Context&);
s_SolverOutput solve_Bpfv4cFz(const s_Context&, s_Module&, const s_Options&);

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

#ifndef fu_NO_fdefs

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

static const fu_STR prelude_src fu_INIT_PRIORITY(1011) = "\n\n\n// Arithmetics.\n\nfn + !T(a: T) case (T.is::arithmetic): T __native;\nfn - !T(a: T) case (T.is::arithmetic): T __native;\n\nfn + !T(a: T, b: T) case (T.is::arithmetic): T __native;\nfn - !T(a: T, b: T) case (T.is::arithmetic): T __native;\nfn * !T(a: T, b: T) case (T.is::arithmetic): T __native;\nfn / !T(a: T, b: T) case (T.is::arithmetic): T __native;\n\nfn % !T(a: T, b: T)\n    case (T.is::integral): T __native;\n    case (T.is::floating_point): T __native(\"<cmath>\", \"std::fmod\");\n\nfn ++ !T(ref a: T) case (T.is::arithmetic): &mut T __native;\nfn -- !T(ref a: T) case (T.is::arithmetic): &mut T __native;\npostfix fn ++ !T(ref a: T) case (T.is::arithmetic): T __native;\npostfix fn -- !T(ref a: T) case (T.is::arithmetic): T __native;\n\nfn += !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\nfn -= !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\nfn *= !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\nfn /= !T(ref a: T, b: T) case (T.is::arithmetic): &mut T __native;\n\nfn >  !T(a: T, b: T) case (T.is::primitive): bool __native;\nfn <  !T(a: T, b: T) case (T.is::primitive): bool __native;\nfn >= !T(a: T, b: T) case (T.is::primitive): bool __native;\nfn <= !T(a: T, b: T) case (T.is::primitive): bool __native;\n\n\n// Bitwise.\n\nfn ~ !T(a: T)       case (T.is::bitfield): T __native;\nfn & !T(a: T, b: T) case (T.is::bitfield): T __native;\nfn | !T(a: T, b: T) case (T.is::bitfield): T __native;\nfn ^ !T(a: T, b: T) case (T.is::bitfield): T __native;\n\nfn &= !T(ref a: T, b: T) case (T.is::bitfield): &mut T __native;\nfn |= !T(ref a: T, b: T) case (T.is::bitfield): &mut T __native;\nfn ^= !T(ref a: T, b: T) case (T.is::bitfield): &mut T __native;\n\nfn <<  !T(a: T, b: T) case (T.is::integral): T __native;\nfn >>  !T(a: T, b: T) case (T.is::integral): T __native;\n\nfn <<= !T(ref a: T, b: T) case (T.is::integral): &mut T __native;\nfn >>= !T(ref a: T, b: T) case (T.is::integral): &mut T __native;\n\n\n// Numeric conversions.\n\nfn   i8 !T(v: T) case (T.is::primitive):   i8 __native(\"/prim/convert\");\nfn  i16 !T(v: T) case (T.is::primitive):  i16 __native(\"/prim/convert\");\nfn  i32 !T(v: T) case (T.is::primitive):  i32 __native(\"/prim/convert\");\nfn  i64 !T(v: T) case (T.is::primitive):  i64 __native(\"/prim/convert\");\nfn i128 !T(v: T) case (T.is::primitive): i128 __native(\"/prim/convert\");\n\nfn   u8 !T(v: T) case (T.is::primitive):   u8 __native(\"/prim/convert\");\nfn  u16 !T(v: T) case (T.is::primitive):  u16 __native(\"/prim/convert\");\nfn  u32 !T(v: T) case (T.is::primitive):  u32 __native(\"/prim/convert\");\nfn  u64 !T(v: T) case (T.is::primitive):  u64 __native(\"/prim/convert\");\nfn u128 !T(v: T) case (T.is::primitive): u128 __native(\"/prim/convert\");\n\nfn  f32 !T(v: T) case (T.is::primitive): f32 __native(\"/prim/convert\");\nfn  f64 !T(v: T) case (T.is::primitive): f64 __native(\"/prim/convert\");\n\nfn byte !T(v: T) case (T.is::primitive): byte __native(\"/prim/convert\");\n\n\n// Math.\n\nfn abs !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::abs\");\n\nfn max !T(a: T, b: T)\n    case (T.is::floating_point) a >= b || b != b ? a : b;\n    case (T.is::arithmetic)     a >= b           ? a : b;\n\nfn min !T(a: T, b: T)\n    case (T.is::floating_point) a <= b || b != b ? a : b;\n    case (T.is::arithmetic)     a <= b           ? a : b;\n\nfn exp   !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp\");\nfn exp2  !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::exp2\");\nfn log   !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log\");\nfn log10 !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log10\");\nfn log2  !T(a: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::log2\");\n\nfn pow   !T(a: T, b: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::pow\");\nfn sqrt  !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt  !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil  !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::ceil\");\nfn floor !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::floor\");\nfn trunc !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::trunc\");\nfn round !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::round\");\n\nfn sin !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::sin\");\nfn cos !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::cos\");\nfn tan !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::tan\");\n\nfn asin !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::asin\");\nfn acos !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::acos\");\nfn atan !T(v: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2 !T(y: T, x: T) case (T.is::floating_point): T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI():  f64 __native(\"<math.h>\", \"M_PI\");\nfn E():   f64 __native(\"<math.h>\", \"M_E\");\nfn INF(): f64 __native(\"<math.h>\", \"INFINITY\");\nfn NAN(): f64 __native(\"<math.h>\", \"NAN\");\n\nfn nan    !T(v: T) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf    !T(v: T) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite !T(v: T) case (T.is::floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Int helpers.\n\ntype  int   = i32; // These may become separate types\ntype uint   = u32; //  with a user-selectable size.\n\nfn MIN !T(_: T)\n    case (T -> i8 )        -128;\n    case (T -> i16)        -32768;\n    case (T -> i32)        -2147483648;\n    case (T -> i64)        -9223372036854775808;\n    case (T.is::unsigned)  T(0);\n\nfn MAX !T(_: T)\n    case (T -> i8 )        127;\n    case (T -> i16)        32767;\n    case (T -> i32)        2147483647;\n    case (T -> i64)        9223372036854775807;\n    case (T.is::unsigned)  T(-1);\n\n\n// Assignment.\n\nfn   = !T(ref a: T,    mut b: T): &mut T __native;\nfn ||= !T(ref a: T, inline b: T): &mut T = a || (a = b);\nfn &&= !T(ref a: T, inline b: T): &mut T = a && (a = b);\n\nfn swap !T(ref a: T, ref b: T): void __native(\n    \"hacks/soft_risk\",\n    \"<utility>\", \"std::swap\");\n\n\n\n// Arrays.\n//\n// TODO mutval .=,\n//  just like the assignments and splice.\n\nnovec fn len !T(a: [T;]): int __native(\".size()\");\n\nnovec fn [] !T(a: [T;], i: int)\n    case ($a -> &mut [T;]): &mut T __native(\".mutref\");\n    default                : &    T __native;\n\nnovec fn [] !T(a: [T;], start: int, end: int)\n    case ($a -> &mut [T;]): &mut [T;] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                : &    [T;] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push !T(ref a: T[], mut b: T): void __native(\".push\");\nfn unshift !T(ref a: T[], mut b: T): void __native(\".unshift\");\nfn  insert !T(ref a: T[], i: int, mut b: T): void __native(\".insert\");\n\nfn  slice !T(a: T[], start: int, end: int): T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn  slice !T(a: T[], start: int): T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn substr !T(a: T[], start: int, end: int): T[] __native(\"<fu/vec/slice.h>\", \"fu::substr\");\n\nfn splice !T(ref a: T[], start: int, count: int): void  __native(\".splice\");\nfn splice !T(ref a: T[], start: int, count: int, /*TODO FIX*/b: [T]): void  __native(\".splice\");\n\nfn    pop !T(ref a: T[]): void __native(\".pop()\");\nfn  shift !T(ref a: T[]): void __native(\".shift()\");\n\nfn  clear !T(ref a: T[]): void __native(\".clear()\");\nfn shrink !T(ref a: T[], len: int): void __native(\".shrink\");\n\nfn resize !T(ref a: T[], len: int): void __native(\".resize\");\nfn   grow !T(ref a: T[], len: int): void __native(\".grow\");\n\nfn resize_junk !T(ref a: T[], len: int): void __native(\".resize<false>\");\nfn   grow_junk !T(ref a: T[], len: int): void __native(\".grow<false>\");\n\n\n// Sorts, via std::sort - fnptrs.\n\nfn sort !T(ref a: [T;]): void\n{\n    pragma include(\"<algorithm>\");\n    pragma emit(\n    \"\n        auto* data = \"a\".data_mut();\n        std::sort(data, data + \"a\".size());\n    \");\n}\n\nfn sort !T(ref a: [T;], less/*: fn(a: T, b: T): bool*/): void\n{\n    noflow fn sort()\n    {\n        mut l: T;\n        mut r: T;\n        pragma include(\"<algorithm>\");\n        pragma emit(\n        \"\n            (void) \"l\";\n            (void) \"r\";\n            auto* data = \"a\".data_mut();\n            std::sort(data, data + \"a\".size(), [&](auto& \"l\", auto& \"r\")\n            {\n        \");\n\n        mut lt: bool = less(l, r);\n        pragma emit(\n        \"\n                return \"lt\";\n            });\n        \");\n    }\n\n    sort();\n}\n\n\n// String likes.\n\nfn find !T(a: [T;], b: [T;], start: int, end: int) case (T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find !T(a: [T;], b: [T;], start: int)           case (T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find !T(a: [T;], b: [T;])                       case (T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\n\nfn has  !T(a: [T;], b: [T;]) case (T.is::primitive): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Find char.\n\nfn starts !T(a: [T;], with: T): bool\n{\n    return a.len && a[0] == with;\n}\n\nfn ends !T(a: [T;], with: T): bool\n{\n    return a.len && a[a.len - 1] == with;\n}\n\nfn starts !T(a: [T;], with: [T;]): bool\n{\n    return a.len >= with.len\n        && a[0, with.len] == with;\n}\n\nfn ends !T(a: [T;], with: [T;]): bool\n{\n    return a.len >= with.len\n        && a[a.len - with.len, a.len] == with;\n}\n\nfn find !T(a: [T;], b: T, mut start: int): int\n{\n    start = start > 0 ? start : 0;\n    for (mut i = start; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn find !T(a: [T;], b: T): int\n{\n    for (mut i = 0; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn has !T(a: [T;], b: T): bool\n{\n    for (mut i = 0; i < a.len; i++)\n        if (a[i] == b)\n            return true;\n\n    return false;\n}\n\n\n// Strings.\n\ntype string = byte[];\n\nfn  >(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \">\");\nfn  <(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \"<\");\nfn >=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \">=\");\nfn <=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \"<=\");\n\n\n// D-style concats.\n//\n// TODO FIX these concats hide copies\n//  which also means they dont work correctly for nocopy stuff\n//\nfn ~ !T(a: [T;], b: [T;]): T[] __native(\"<fu/vec/concat.h>\",     \"+\");\nfn ~ !T(a: [T;], b:  T  ): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\nfn ~ !T(a:  T  , b: [T;]): T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\nfn ~= !T(ref a: T[],     b: [T;]): &mut T[] __native(\"<fu/vec/concat.h>\",     \"+=\");\nfn ~= !T(ref a: T[], mut b:  T  ): &mut T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\n\n// Fun with views.\n\nfn view!<T, U>(a: [T;], of: U)\n    case ($a -> &mut [T;] && T.is::trivial && U.is::trivial): &mut [U] __native(\"<fu/view.h>\", \"fu::view_of_mut\");\n    case (                    T.is::trivial && U.is::trivial):      [U] __native(\"<fu/view.h>\", \"fu::view_of\");\n\nfn .= !T(ref a: [T;], b: [T;]) case (T.is::copy): void __native(\"<fu/vec/view_assign.h>\", \"fu::view_assign\");\n\n// TODO not needed if swap(x, y) alias-ok's its two arguments:\nfn swap !T(ref a: [T;], i: int, j: int): void __native(\"<fu/vec/view_swap.h>\", \"fu::view_swap\");\n\n\n// Stringifiables.\n\nfn ~  !T(    a: [byte], b.str) a ~ b;\nfn ~  !T(    a.str, b: [byte]) a ~ b;\nfn ~= !T(ref a: string, b.str) a ~= b;\n\nfn str !T(n: T)\n    case (T.is::unsigned       ): string __native(\"<fu/decstr.h>\", \"fu::u64dec\");\n    case (T.is::integral       ): string __native(\"<fu/decstr.h>\", \"fu::i64dec\");\n    case (T -> bool            ): string __native(\"<fu/decstr.h>\", \"fu::booldec\");\n    case (T -> f32             ): string __native(\"<fu/decstr.h>\", \"fu::f32dec\");\n    case (T -> f64             ): string __native(\"<fu/decstr.h>\", \"fu::f64dec\");\n    case (T.is::enum)\n{\n    for (fieldname i: T)\n        if (n == \"i\")\n            return \"i\";\n\n    return n.i64.str; // TODO FIX use .integer or .arithmetic when we get these\n}\n    case (T.is::flags)\n{\n    mut res: string;\n    for (fieldname i: T)\n        if (n & \"i\")\n            res ~= \"i\" ~ \", \";\n\n    if (res)\n        res.shrink(res.len - 2);\n\n    return res;\n}\n\n\n// Assertions, bugs & fails.\n//  TODO i dont actually think we want to have nullary stuff in prelude,\n//   so TODO needs to take an arg, same with assert - perhaps a pass-through argument.\n\nfn throw(mut reason: string): never __native(\"<fu/never.h>\", \"fu::fail\",\n    \"|Fx_NotDeadCode\", \"|Fx_DontMoveDown\", \"|Fx_Throws\");\n\nfn assert(): never __native(\"<fu/never.h>\", \"fu_ASSERT()\",\n    \"|Fx_NotDeadCode\", \"|Fx_DontMoveDown\", \"|Fx_Crashes\");\n\n\n// Printifiables = anything that implements print.\n\ninline fn print(x: string): string = x;\ninline fn print(x.str)    : string = x;\n\nfn println(parts.print[]: [string]): void __native(\"<fu/print.h>\", \"fu::println\",\n    \"|output\");\n\n\n// String commons.\n\nfn join !T(a: [T[];], sep?: T or [T;] or [])\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    let N = typeof(sep) -> [T;] ? sep.len\n          : typeof(sep) ->  T   ? 1\n                                : 0;\n\n    mut size = a[0].len;\n    for (mut i = 1; i < a.len; i++)\n        size += N + a[i].len;\n\n    mut res: T[];\n    res.grow_junk(size);\n\n    let head = a[0];\n    size = head.len;\n    res[0, head.len] .= head;\n    for (mut i = 1; i < a.len; i++)\n    {\n        let range = a[i];\n        if (typeof(sep) -> [T;])\n            res[size, size + N] .= sep;\n        else if (typeof(sep) -> T)\n            res[size] = sep;\n\n        size += N;\n        res[size, size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn split !T(str: T[], sep: T or [T;], each)\n{\n    mut last = 0;\n    mut next = 0;\n\n    let N = typeof(sep) -> [T;] ? sep.len : 1;\n    if (N) while ((next = str.find(sep, start: last)) >= 0)\n    {\n        each(str.slice(last, next), first?: !last, last?: false);\n        last = next + N;\n    }\n\n    if (last)\n        each(str.slice(last), first?: false, last?: true);\n    else\n        each(str, first?: true, last?: true);\n}\n\nfn split !T(str: T[], sep: T or [T;])\n{\n    mut result: T[][];\n    split(str, :sep, |substr| result ~= substr);\n    return result;\n}\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn replace !T(str: T[], all: T or [T;], with: T or [T;] or [])\n{\n    mut result: T[];\n    split(str, sep: all, |substr, first, last|\n    {\n        if (!first)\n            typeof(with) -> [] ? with() : result ~= with;\n        else if (last)\n            return str;\n\n        result ~= substr;\n    });\n\n    return result;\n}\n\n\n//\n\nfn <> !<T, U>(a: T, b: T)\ncase (T.is::primitive) = a < b ? -1 : a > b ? +1 : 0;\ncase (T -> [U;]) {\n    mut cmp = a.len <> b.len;\n    for (mut i = 0; i < a.len && !cmp; i++)\n        cmp = a[i] <> b[i];\n\n    return cmp;\n}\ndefault {\n    // TODO this would be better if it went through each member doing the trivial work first -\n    //  only then going through them again and looking at e.g. array contents etc.\n    for (fieldname i: T) {\n        let cmp = a.i <> b.i;\n        if (cmp)\n            return cmp;\n    }\n\n    return 0;\n}\n\nfn == !T(a: T, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !(a <> b);\n\nfn != !T(a: T, b: T)\n    case (T.is::primitive): bool __native;\n    default: bool = !!(a <> b);\n\n\n//\n\nfn map !T(a: [T;], fn)\n{\n    mut res: typeof( fn(T, i?: a.len) )[];\n    res.grow_junk(a.len);\n    for (mut i = 0; i < a.len; i++)\n        res[i] = fn(a[i], i?: i);\n\n    return res;\n}\n\nfn each !T(a: [T;], fn)\n    for (mut i = 0; i < a.len; i++)\n        fn(a[i], i?: i);\n\nfn reverse !T(ref a: [T;])\n{\n    let n1 = a.len - 1;\n    let n2 = a.len >> 1;\n    for (mut i = 0; i < n2; i++)\n        a.swap(i, n1 - i);\n}\n\n\n"_fu;

s_Context solvePrelude_eRdBm7hX()
{
    /*MOV*/ s_Context ctx {};
    s_Module module = clone_XWiiejdI(getModule_c1QWvGGE((*(const fu_STR*)fu::NIL), ctx));
    const s_Options options {};
    fu_STR fname = "__prelude"_fu;
    /*MOV*/ s_LexerOutput lex = lex_uk2ULxHb(prelude_src, fname);
    /*MOV*/ s_ParserOutput parse = parse_ZGSvajvi(0, fname, prelude_src, lex.tokens, options);
    s_LexerOutput _0 {};
    module.in = (_0 = static_cast<s_LexerOutput&&>(lex), s_ModuleInputs { fu_STR(prelude_src), static_cast<s_LexerOutput&&>(_0), static_cast<s_ParserOutput&&>(parse) });
    setModule_xCUAVHNa(module, ctx);
    module.out.solve = solve_Bpfv4cFz(ctx, module, options);
    setModule_xCUAVHNa(module, ctx);
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE fu_INIT_PRIORITY(1011) = solvePrelude_eRdBm7hX();
                                #endif

#endif
