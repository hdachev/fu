#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

struct s_Region;
struct s_Lifetime;
struct s_Type;
struct s_ValueType;
struct s_TokenIdx;
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
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Target;
struct s_ScopeItem;
struct s_SolverOutput;
struct s_SolvedNode;
struct s_Helpers;
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
inline fu_VEC<s_Region> uNion_vO5wFRsv(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
inline fu_VEC<s_Region> inter_vO5wFRsv(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
[[noreturn]] fu::never BUG_vYytSj38(fu_STR&&, const s_TokenIdx&, const s_Context&);
unsigned parse10u32_Tv0KZM6O(int&, fu::view<char>);
void appendMi_bivPeQcS(fu_STR&, int, int);

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

#ifndef fu_NO_fdefs

                                #ifndef DEF_q_mutref
                                #define DEF_q_mutref
inline constexpr int q_mutref = (1 << 0);
                                #endif

                                #ifndef DEF_q_rx_copy
                                #define DEF_q_rx_copy
inline constexpr int q_rx_copy = (1 << 1);
                                #endif

                                #ifndef DEF_q_rx_resize
                                #define DEF_q_rx_resize
inline constexpr int q_rx_resize = (1 << 2);
                                #endif

                                #ifndef DEF_TAGS
                                #define DEF_TAGS
extern const fu_VEC<fu_STR> TAGS fu_INIT_PRIORITY(1008) = fu_VEC<fu_STR> { fu::slate<3, fu_STR> { "mutref"_fu, "copy"_fu, "resize"_fu } };
                                #endif

                                #ifndef DEF_RELAX_before_bck
                                #define DEF_RELAX_before_bck
extern const int RELAX_before_bck = q_mutref;
                                #endif

                                #ifndef DEF_RELAX_all
                                #define DEF_RELAX_all
extern const int RELAX_all = ((q_mutref | q_rx_copy) | q_rx_resize);
                                #endif

int Region_toLocal_PhGvG2us(const s_Region& region)
{
    return region.index;
}

s_Region Region_fromLocal_eorXYpEE(const int index)
{
    return s_Region { int(index) };
}

                                #ifndef DEF_Region_TEMP
                                #define DEF_Region_TEMP
extern const s_Region Region_TEMP fu_INIT_PRIORITY(1008) = Region_fromLocal_eorXYpEE(int(0x7fffffffu));
                                #endif

                                #ifndef DEF_Region_STATIC
                                #define DEF_Region_STATIC
extern const s_Region Region_STATIC fu_INIT_PRIORITY(1008) = Region_fromLocal_eorXYpEE(int(0x80000001u));
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

                                #ifndef DEF_x3Dx3D_A8tRjjUdpoc
                                #define DEF_x3Dx3D_A8tRjjUdpoc
inline bool operator==(const s_Region& a, const s_Region& b)
{
    return !x3Cx3E_A8tRjjUd(a, b);
}
                                #endif

bool Region_isTemp_PhGvG2us(const s_Region& region)
{
    return region == Region_TEMP;
}

bool Region_isStatic_PhGvG2us(const s_Region& region)
{
    return region == Region_STATIC;
}

bool Region_isArgPosition_PhGvG2us(const s_Region& region)
{
    return region.index < 0;
}

int Region_toArgPosition_PhGvG2us(const s_Region& region)
{
    return -(region.index + 1);
}

s_Region Region_fromArgPosition_BLLdCVw1(const int position)
{
    return s_Region { -(position + 1) };
}

int Region_asLocal_l3hJ0imS(const s_Region& r)
{
    if ((r == Region_TEMP) || (r.index < 0))
        return 0;
    else
        return r.index;

}

inline static void merge_Qqkds5A2(fu::view<s_Region> l, fu::view<s_Region> r, fu::view<s_Region> l_1, fu_VEC<s_Region>& result, bool& useResult)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_A8tRjjUd(l[li], r[ri])));
        if ((cmp <= 0))
        {

            {
                const s_Region& item = l[li];
                if (useResult)
                    result += s_Region(item);

            };
            li++;
            ri += int((cmp == 0));
        }
        else
        {

            {
                const s_Region& item = r[ri];
                if (!useResult)
                {
                    useResult = true;
                    result += fu::get_view(l_1, 0, li);
                };
                result += s_Region(item);
            };
            ri++;
        };
    };
}

                                #ifndef DEF_uNion_vO5wFRsv73g
                                #define DEF_uNion_vO5wFRsv73g
inline fu_VEC<s_Region> uNion_vO5wFRsv(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() > l.size())
        return uNion_vO5wFRsv(r, l);
    else
    {
        /*MOV*/ fu_VEC<s_Region> result {};
        bool useResult = false;
        merge_Qqkds5A2(l, r, l, result, useResult);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu_VEC<s_Region>(l);

    };
}
                                #endif

s_Lifetime Lifetime_union_7b6lMejl(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { uNion_vO5wFRsv(a.uni0n, b.uni0n) };
}

inline static void merge_94XyCtUk(fu::view<s_Region> l, fu::view<s_Region> r, const fu_VEC<s_Region>& l_1, fu_VEC<s_Region>& result, bool& useResult)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_A8tRjjUd(l[li], r[ri])));
        if (cmp == 0)
        {

            {
                const s_Region& item = l[li];
                if (useResult)
                    result += s_Region(item);

            };
            li++;
            ri++;
        }
        else if (cmp < 0)
        {

            {
                [[maybe_unused]] const s_Region& _ = l[li];
                if (!useResult)
                {
                    useResult = true;
                    result = fu::slice(l_1, 0, li);
                };
            };
            li++;
        }
        else
        {

            {
                [[maybe_unused]] const s_Region& _ = r[ri];
            };
            ri++;
        };
    };
}

                                #ifndef DEF_inter_vO5wFRsv73g
                                #define DEF_inter_vO5wFRsv73g
inline fu_VEC<s_Region> inter_vO5wFRsv(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_vO5wFRsv(r, l);
    else
    {
        /*MOV*/ fu_VEC<s_Region> result {};
        bool useResult = false;
        merge_94XyCtUk(l, r, l, result, useResult);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu_VEC<s_Region>(l);

    };
}
                                #endif

s_Lifetime Lifetime_inter_7b6lMejl(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { inter_vO5wFRsv(a.uni0n, b.uni0n) };
}

s_Lifetime Lifetime_static_8nlJDPX0()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(Region_STATIC) } } };
}

s_Lifetime Lifetime_makeShared_0ep4DGAR(const s_Lifetime& lifetime)
{
    return Lifetime_union_7b6lMejl(lifetime, Lifetime_static_8nlJDPX0());
}

s_Lifetime Lifetime_temporary_8nlJDPX0()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(Region_TEMP) } } };
}

s_Type Primitive(const fu_STR& canon)
{
    return s_Type { s_ValueType { int(q_rx_copy), fu_STR(canon) }, s_Lifetime{} };
}

                                #ifndef DEF_t_i8
                                #define DEF_t_i8
extern const s_Type t_i8 fu_INIT_PRIORITY(1008) = Primitive("i8"_fu);
                                #endif

                                #ifndef DEF_t_i16
                                #define DEF_t_i16
extern const s_Type t_i16 fu_INIT_PRIORITY(1008) = Primitive("i16"_fu);
                                #endif

                                #ifndef DEF_t_i32
                                #define DEF_t_i32
extern const s_Type t_i32 fu_INIT_PRIORITY(1008) = Primitive("i32"_fu);
                                #endif

                                #ifndef DEF_t_i64
                                #define DEF_t_i64
extern const s_Type t_i64 fu_INIT_PRIORITY(1008) = Primitive("i64"_fu);
                                #endif

                                #ifndef DEF_t_i128
                                #define DEF_t_i128
extern const s_Type t_i128 fu_INIT_PRIORITY(1008) = Primitive("i128"_fu);
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8 fu_INIT_PRIORITY(1008) = Primitive("u8"_fu);
                                #endif

                                #ifndef DEF_t_u16
                                #define DEF_t_u16
extern const s_Type t_u16 fu_INIT_PRIORITY(1008) = Primitive("u16"_fu);
                                #endif

                                #ifndef DEF_t_u32
                                #define DEF_t_u32
extern const s_Type t_u32 fu_INIT_PRIORITY(1008) = Primitive("u32"_fu);
                                #endif

                                #ifndef DEF_t_u64
                                #define DEF_t_u64
extern const s_Type t_u64 fu_INIT_PRIORITY(1008) = Primitive("u64"_fu);
                                #endif

                                #ifndef DEF_t_u128
                                #define DEF_t_u128
extern const s_Type t_u128 fu_INIT_PRIORITY(1008) = Primitive("u128"_fu);
                                #endif

                                #ifndef DEF_t_f32
                                #define DEF_t_f32
extern const s_Type t_f32 fu_INIT_PRIORITY(1008) = Primitive("f32"_fu);
                                #endif

                                #ifndef DEF_t_f64
                                #define DEF_t_f64
extern const s_Type t_f64 fu_INIT_PRIORITY(1008) = Primitive("f64"_fu);
                                #endif

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool fu_INIT_PRIORITY(1008) = Primitive("b8"_fu);
                                #endif

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte fu_INIT_PRIORITY(1008) = Primitive("c8"_fu);
                                #endif

s_Type NotSure(const fu_STR& canon)
{
    return s_Type { s_ValueType { 0, fu_STR(canon) }, s_Lifetime{} };
}

                                #ifndef DEF_t_void
                                #define DEF_t_void
extern const s_Type t_void fu_INIT_PRIORITY(1008) = NotSure("void"_fu);
                                #endif

                                #ifndef DEF_t_never
                                #define DEF_t_never
extern const s_Type t_never fu_INIT_PRIORITY(1008) = NotSure("never"_fu);
                                #endif

                                #ifndef DEF_t_zeroes
                                #define DEF_t_zeroes
extern const s_Type t_zeroes fu_INIT_PRIORITY(1008) = NotSure("zeroes"_fu);
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

bool is_void_eqpYb5IC(const s_Type& t)
{
    return t.vtype.canon == t_void.vtype.canon;
}

bool is_never_eqpYb5IC(const s_Type& t)
{
    return t.vtype.canon == t_never.vtype.canon;
}

bool is_zeroes_eqpYb5IC(const s_Type& t)
{
    return t.vtype.canon == t_zeroes.vtype.canon;
}

bool is_rx_copy_6qTx5aCK(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_copy);
}

bool is_rx_resize_6qTx5aCK(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_resize);
}

bool isCanonAssignable(fu::view<char> host, fu::view<char> guest)
{
    return host == guest;
}

bool areQualsAssignable(const int host, const int guest)
{
    return (host & guest) == host;
}

bool isLifetimeAssignable(const s_Lifetime& host, const s_Lifetime& guest)
{
    return !host || !!guest;
}

                                #ifndef DEF_CANNOT_definit_mutrefs
                                #define DEF_CANNOT_definit_mutrefs
extern const bool CANNOT_definit_mutrefs = true;
                                #endif

bool isAssignableAsArgument_d2HKSF3T(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes)
{
    return (areQualsAssignable(host.vtype.quals, guest.vtype.quals) && isCanonAssignable(host.vtype.canon, guest.vtype.canon)) || (is_zeroes_eqpYb5IC(guest) && !DONT_match_zeroes && !(CANNOT_definit_mutrefs && (host.vtype.quals & q_mutref)));
}

bool isAssignable_zQyU0CZE(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes, const bool asArgument)
{
    return (isAssignableAsArgument_d2HKSF3T(host, guest, DONT_match_zeroes) && (asArgument || isLifetimeAssignable(host.lifetime, guest.lifetime))) || is_never_eqpYb5IC(guest);
}

bool is_ref_qNIEFFQB(const s_Type& type)
{
    return !!type.lifetime;
}

bool is_mutref_8RliRHyJ(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    const bool a = ((type.vtype.quals & q_mutref) != 0);
    const bool b = is_ref_qNIEFFQB(type);
    if (a && !b)
        BUG_vYytSj38("MutRef&&!Ref"_fu, _here, ctx);
    else
        return a;

}

s_Type add_ref_arUcTyoS(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union_7b6lMejl(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG_vYytSj38("add_ref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

s_Type add_mutref_arUcTyoS(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    type.vtype.quals |= q_mutref;
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union_7b6lMejl(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG_vYytSj38("add_mutref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_if_last_uRy3lRyu3F2
                                #define DEF_if_last_uRy3lRyu3F2
inline const s_Region& if_last_uRy3lRyu(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

bool is_ref2temp_8RliRHyJ(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (if_last_uRy3lRyu(type.lifetime.uni0n) == Region_TEMP) && (is_ref_qNIEFFQB(type) || BUG_vYytSj38("is_ref2temp: has lts but isnt ref"_fu, _here, ctx));
}

s_Type clear_refs_qNIEFFQB(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    type.lifetime = s_Lifetime{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_mutref_qNIEFFQB(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    return static_cast<s_Type&&>(type);
}

s_Type tryClearRefs(const s_Type& type, const bool mutref, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (mutref ? is_mutref_8RliRHyJ(type, _here, ctx) : is_ref_qNIEFFQB(type)) ? clear_refs_qNIEFFQB(s_Type(type)) : s_Type{};
}

s_Type tryClear_mutref_8RliRHyJ(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, true, _here, ctx);
}

s_Type tryClear_ref_8RliRHyJ(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, false, _here, ctx);
}

s_Type add_refs_BuHxEtjM(const s_Type& from, /*MOV*/ s_Type&& to)
{
    to.vtype.quals |= (from.vtype.quals & q_mutref);
    to.lifetime = Lifetime_union_7b6lMejl(from.lifetime, to.lifetime);
    return static_cast<s_Type&&>(to);
}

s_Type make_copyable_qNIEFFQB(/*MOV*/ s_Type&& type)
{
    type.vtype.quals |= q_rx_copy;
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_x7Ex3D_EHZEiPh81F6
                                #define DEF_x7Ex3D_EHZEiPh81F6
inline fu_STR& x7Ex3D_EHZEiPh8(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

fu_STR serializeType_PYGow2xq(const s_Type& type, fu::view<char> debug)
{
    if (type)
    {
        fu_STR prefix {};
        if (type.vtype.quals)
            x7Ex3D_EHZEiPh8(prefix, fu::i64dec(type.vtype.quals));

        return prefix + (type.vtype.canon ? type.vtype.canon : fu::fail(("COMPILER BUG: serializeType: No type.canon in: "_fu + debug)));
    }
    else
        fu::fail(("COMPILER BUG: serializeType: Falsy type in: "_fu + debug));

}

fu_STR humanizeQuals_qNIEFFQB(const s_Type& type)
{
    /*MOV*/ fu_STR result = ":"_fu;
    for (int i = 0; i < TAGS.size(); i++)
    {
        if (type.vtype.quals & (1 << i))
            result += (" "_fu + TAGS[i]);

    };
    return /*NRVO*/ result;
}

s_ValueType parseType_NHYewH65(const fu_STR& str)
{
    int offset {};
    const int quals = int(parse10u32_Tv0KZM6O(offset, str));
    /*MOV*/ fu_STR canon = fu::slice(str, offset);
    int _0 {};
    return (_0 = int(quals), s_ValueType { int(_0), static_cast<fu_STR&&>(canon) });
}

                                #ifndef DEF_starts_fjBQS6rrsUk
                                #define DEF_starts_fjBQS6rrsUk
inline bool starts_fjBQS6rr(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool type_isSliceable_mipI0b6h(const s_Type& type)
{
    return starts_fjBQS6rr(type.vtype.canon, '[');
}

s_Type createArray_oj1mQ036(const s_Type& item)
{
    /*MOV*/ fu_STR canon = (("["_fu + serializeType_PYGow2xq(item, "createArray"_fu)) + "]"_fu);
    const int quals = ((item.vtype.quals & q_rx_copy) | q_rx_resize);
    int _0 {};
    return s_Type { (_0 = int(quals), s_ValueType { int(_0), static_cast<fu_STR&&>(canon) }), s_Lifetime(item.lifetime) };
}

s_Type createSlice_8h5rReSH(const s_Type& item, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ s_Type out = createArray_oj1mQ036(item);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref_arUcTyoS(static_cast<s_Type&&>(out), lifetime, _here, ctx);
}

s_Type tryClear_sliceable_qNIEFFQB(const s_Type& type)
{
    if (!type_isSliceable_mipI0b6h(type))
    {
        return s_Type{};
    }
    else
    {
        /*MOV*/ s_ValueType vtype = parseType_NHYewH65(fu::slice(type.vtype.canon, 1, (type.vtype.canon.size() - 1)));
        return s_Type { static_cast<s_ValueType&&>(vtype), s_Lifetime{} };
    };
}

s_Type clear_sliceable_8RliRHyJ(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = tryClear_sliceable_qNIEFFQB(type)) ? static_cast<s_Type&&>(_0) : BUG_vYytSj38(("Not sliceable: "_fu + type.vtype.canon), _here, ctx);
}

s_Type tryClear_array_qNIEFFQB(const s_Type& type)
{
    if ((type.vtype.quals & q_rx_resize) != q_rx_resize)
    {
        return s_Type{};
    }
    else
        return tryClear_sliceable_qNIEFFQB(type);

}

bool TODO_FIX_isArray_qNIEFFQB(const s_Type& type)
{
    return (type.vtype.quals & (q_rx_resize | q_rx_copy)) && type_isSliceable_mipI0b6h(type);
}

                                #ifndef DEF_t_string
                                #define DEF_t_string
extern const s_Type t_string fu_INIT_PRIORITY(1008) = createArray_oj1mQ036(t_byte);
                                #endif

                                #ifndef DEF_x21x3D_sTZRmMq1BYf
                                #define DEF_x21x3D_sTZRmMq1BYf
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_sTZRmMq1(a, b);
}
                                #endif

s_Type type_trySuper_HuTHARyU(const s_Type& a, const s_Type& b, const bool DONT_match_zeroes)
{
    if (a.vtype.canon != b.vtype.canon)
    {
        if (is_never_eqpYb5IC(a))
            return s_Type(b);
        else if (is_never_eqpYb5IC(b))
            return s_Type(a);
        else if (is_zeroes_eqpYb5IC(a) && !DONT_match_zeroes)
        {
            if (CANNOT_definit_mutrefs)
                return clear_mutref_qNIEFFQB(s_Type(b));
            else
                return s_Type(b);

        }
        else if (is_zeroes_eqpYb5IC(b) && !DONT_match_zeroes)
        {
            if (CANNOT_definit_mutrefs)
                return clear_mutref_qNIEFFQB(s_Type(a));
            else
                return s_Type(a);

        }
        else
        {
            return s_Type{};
        };
    }
    else
    {
        const int quals = (a.vtype.quals & b.vtype.quals);
        /*MOV*/ s_Lifetime lifetime = (a.lifetime && b.lifetime ? Lifetime_union_7b6lMejl(a.lifetime, b.lifetime) : s_Lifetime{});
        s_ValueType _0 {};
        return (_0 = s_ValueType { int(quals), fu_STR(a.vtype.canon) }, s_Type { static_cast<s_ValueType&&>(_0), static_cast<s_Lifetime&&>(lifetime) });
    };
}

s_Type type_tryIntersect_F2WHZZjx(const s_Type& a, const s_Type& b)
{
    if (a.vtype.canon != b.vtype.canon)
    {
        return s_Type{};
    }
    else
    {
        const int quals = (a.vtype.quals | b.vtype.quals);
        /*MOV*/ s_Lifetime lifetime = Lifetime_inter_7b6lMejl(a.lifetime, b.lifetime);
        if (!lifetime && (a.lifetime || b.lifetime))
        {
            return s_Type{};
        }
        else
        {
            s_ValueType _0 {};
            return (_0 = s_ValueType { int(quals), fu_STR(a.vtype.canon) }, s_Type { static_cast<s_ValueType&&>(_0), static_cast<s_Lifetime&&>(lifetime) });
        };
    };
}

bool isAddrOfFn_mipI0b6h(const s_Type& type)
{
    return starts_fjBQS6rr(type.vtype.canon, '@');
}

fu_STR packAddrOfFn_KJaKO9Hx(fu::view<s_Target> targets)
{
    /*MOV*/ fu_STR res = "@"_fu;
    for (int i = 0; i < targets.size(); i++)
    {
        const s_Target& target = targets[i];
        appendMi_bivPeQcS(res, int(target.modid), int(target.index));
    };
    return /*NRVO*/ res;
}

bool will_relax_tzd45SLg(const s_Type& type, const s_Type& slot, const int relax_mask)
{
    return ((type.vtype.quals & ~slot.vtype.quals) & relax_mask) != 0;
}

bool try_relax_aIGuZbhF(s_Type& type, const s_Type& slot, const int relax_mask)
{
    if (!will_relax_tzd45SLg(type, slot, int(relax_mask)))
        return false;
    else
    {
        type.vtype.quals &= (slot.vtype.quals | ~relax_mask);
        return true;
    };
}

s_Type relax_typeParam_qNIEFFQB(/*MOV*/ s_Type&& type)
{
    return clear_refs_qNIEFFQB(static_cast<s_Type&&>(type));
}

#endif
