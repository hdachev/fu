#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>

struct s_Target;
struct s_ScopeItem;
struct s_Scope;
struct s_Overload;
enum s_kind: fu::u8;
typedef unsigned s_Flags;
typedef uint16_t s_SolverStatus;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
typedef fu::u8 s_VFacts;
struct s_SolvedNode;
struct s_Helpers;
struct s_TokenIdx;
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_COWInside;
typedef fu::u8 s_ExitPaths;
struct s_Template;
struct s_Node;
typedef uint16_t s_DeclAsserts;
typedef fu::u8 s_ParseSyntax;
struct s_TEA;
typedef uint16_t s_FxMask;
struct s_ScopeSkip;
struct s_ScopeMemo;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_LineColChars;
struct s_ParserOutput;
struct s_Import;
struct s_ModuleOrder;
struct s_ModuleOutputs;
struct s_Struct;
struct s_Shape;
struct s_SolverOutput;
typedef int s_SolverNotes;
struct s_CodegenOutput;
typedef fu::u8 s_CGDefects;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Profile;
s_Target Target_2jgCJZJY(int, int, int);

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

#ifndef fu_NO_fdefs

s_Target target_NWTdzsfF(const s_ScopeItem& si)
{
    return s_Target { (si._packed & 0x3fffffffffffffffull) };
}

bool ScopeItem_shadows_NWTdzsfF(const s_ScopeItem& si)
{
    return !!(si._packed & 0x8000000000000000ull);
}

bool ScopeItem_canSkipRest_NWTdzsfF(const s_ScopeItem& si)
{
    return !!(si._packed & 0x4000000000000000ull);
}

uint64_t& ScopeItem_canSkipRest_set_aaPaU7ri(s_ScopeItem& si)
{
    return (si._packed |= 0x4000000000000000ull);
}

uint64_t& ScopeItem_canSkipRest_clear_aaPaU7ri(s_ScopeItem& si)
{
    return (si._packed &= ~0x4000000000000000ull);
}

s_ScopeItem ScopeItem_UfPW8oRC(const fu::str& id, const s_Target& target, const bool shadows)
{
    return s_ScopeItem { fu::str(id), ((target._packed & 0x3fffffffffffffffull) | (shadows ? 0x8000000000000000ull : 0ull)) };
}

inline static const fu::vec<s_ScopeItem>& l_31_1_xtSc1Ua4(const s_Scope& l_31_1)
{
    return l_31_1.items;
}

inline static void l_31_0_BgGmjtwC(/*MOV*/ s_ScopeItem&& item, fu::vec<s_ScopeItem>& pUblic, fu::vec<s_ScopeItem>& pRivate, const s_Scope& scope, const int modid)
{
    int BL_1_v {};
    if (!((__extension__ (
    {
        const s_Target t = target_NWTdzsfF(item);
        BL_1_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
    (void)0;}), BL_1_v) != modid))
    {
        ScopeItem_canSkipRest_clear_aaPaU7ri(item);
        int BL_3_v {};
        const s_Overload& overload = scope.overloads[((__extension__ (
        {
            const s_Target t = target_NWTdzsfF(item);
            BL_3_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_3_v) - 1)];
        ((overload.flags & s_Flags_F_PUB) ? pUblic : pRivate) += static_cast<s_ScopeItem&&>(item);
    };
}

                                #ifndef DEF_each_0VRlKdIgqbc
                                #define DEF_each_0VRlKdIgqbc
inline void each_0VRlKdIg(fu::view<s_ScopeItem> a, fu::vec<s_ScopeItem>& pUblic, fu::vec<s_ScopeItem>& pRivate, const s_Scope& scope, const int modid)
{
    for (int i = 0; i < a.size(); i++)
        l_31_0_BgGmjtwC(s_ScopeItem(a[i]), pUblic, pRivate, scope, modid);

}
                                #endif

inline static fu::vec<s_ScopeItem> collect_qRThuoet(int& pub_cnt, /*MOV*/ fu::vec<s_ScopeItem>&& pUblic, fu::vec<s_ScopeItem>&& pRivate, const s_Scope& scope, const int modid)
{
    each_0VRlKdIg(l_31_1_xtSc1Ua4(scope), pUblic, pRivate, scope, modid);
    pub_cnt = pUblic.size();
    pUblic += pRivate;
    return static_cast<fu::vec<s_ScopeItem>&&>(pUblic);
}

inline static const fu::vec<s_ScopeItem>& l_31_2_CkaZ0fkW(const s_Scope& l_31_2)
{
    return l_31_2.implicits;
}

inline static void l_31_0_5QfVCuIc(/*MOV*/ s_ScopeItem&& item, fu::vec<s_ScopeItem>& pUblic, fu::vec<s_ScopeItem>& pRivate, const s_Scope& scope, const int modid)
{
    int BL_1_v {};
    if (!((__extension__ (
    {
        const s_Target t = target_NWTdzsfF(item);
        BL_1_v = (int(unsigned(((t._packed >> 40ull) & 0xfffffull))));
    (void)0;}), BL_1_v) != modid))
    {
        ScopeItem_canSkipRest_clear_aaPaU7ri(item);
        int BL_3_v {};
        const s_Overload& overload = scope.overloads[((__extension__ (
        {
            const s_Target t = target_NWTdzsfF(item);
            BL_3_v = (int(unsigned(((t._packed >> 20ull) & 0xfffffull))));
        (void)0;}), BL_3_v) - 1)];
        ((overload.flags & s_Flags_F_PUB) ? pUblic : pRivate) += static_cast<s_ScopeItem&&>(item);
    };
}

                                #ifndef DEF_each_5haW0MLguFf
                                #define DEF_each_5haW0MLguFf
inline void each_5haW0MLg(fu::view<s_ScopeItem> a, fu::vec<s_ScopeItem>& pUblic, fu::vec<s_ScopeItem>& pRivate, const s_Scope& scope, const int modid)
{
    for (int i = 0; i < a.size(); i++)
        l_31_0_5QfVCuIc(s_ScopeItem(a[i]), pUblic, pRivate, scope, modid);

}
                                #endif

inline static fu::vec<s_ScopeItem> collect_mzrJ2wNl(int& pub_cnt, /*MOV*/ fu::vec<s_ScopeItem>&& pUblic, fu::vec<s_ScopeItem>&& pRivate, const s_Scope& scope, const int modid)
{
    each_5haW0MLg(l_31_2_CkaZ0fkW(scope), pUblic, pRivate, scope, modid);
    pub_cnt = pUblic.size();
    pUblic += pRivate;
    return static_cast<fu::vec<s_ScopeItem>&&>(pUblic);
}

s_Scope Scope_exports_llrYisu8(const s_Scope& scope, const int modid, const fu::vec<s_ScopeItem>& field_items, const fu::vec<s_ScopeItem>& field_implicits, const fu::vec<int>& pub_imports)
{
    int pub_items = 0;
    int pub_implicits = 0;
    /*MOV*/ fu::vec<s_ScopeItem> items = collect_qRThuoet(pub_items, fu::vec<s_ScopeItem>(field_items), fu::vec<s_ScopeItem>{}, scope, modid);
    /*MOV*/ fu::vec<s_ScopeItem> implicits = collect_mzrJ2wNl(pub_implicits, fu::vec<s_ScopeItem>(field_implicits), fu::vec<s_ScopeItem>{}, scope, modid);
    /*MOV*/ fu::vec<s_Target> converts {};
    fu::vec<s_Target> prv_converts {};
    for (int i = 0; i < scope.converts.size(); i++)
    {
        const s_Target& item = scope.converts[i];
        if (int(unsigned(((item._packed >> 40ull) & 0xfffffull))) == modid)
        {
            const s_Overload& overload = scope.overloads[(int(unsigned(((item._packed >> 20ull) & 0xfffffull))) - 1)];
            ((overload.flags & s_Flags_F_PUB) ? converts : prv_converts) += s_Target(item);
        };
    };
    const int pub_converts = converts.size();
    converts += prv_converts;
    return s_Scope { fu::vec<s_Overload>(scope.overloads), fu::vec<s_Extended>(scope.extended), static_cast<fu::vec<s_ScopeItem>&&>(items), static_cast<fu::vec<s_ScopeItem>&&>(implicits), fu::vec<int>(pub_imports), fu::vec<int>{}, fu::vec<s_Target>{}, static_cast<fu::vec<s_Target>&&>(converts), pub_items, pub_implicits, pub_converts };
}

static void nextSkip_HupDBH4G(fu::view<s_ScopeItem> items, int& scope_iterator, fu::view<s_ScopeSkip> scope_skip, int& skiptrap)
{
    for (int i = scope_skip.size(); i-- > 0; )
    {
        const s_ScopeSkip& ss = scope_skip[i];
        const int s1 = (ss.end - 1);
        if (scope_iterator > s1)
        {
            skiptrap = s1;
            break;
        }
        else
        {
            const int s0 = (ss.start - 1);
            if (scope_iterator > s0)
                scope_iterator = s0;

        };
    };
    if ((skiptrap >= items.size()))
        fu::fail("Scope/search: scope_skip will jump past end of items."_fu);

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

s_Target search_ihIw5OEs(fu::view_mut<s_ScopeItem> items, fu::view<char> id, int& scope_iterator, fu::view<s_ScopeSkip> scope_skip, bool& shadows, fu::view<s_Target> extra_items, fu::view<s_ScopeItem> field_items)
{
    shadows = false;
    const int NUM_EXTRAS = extra_items.size();
    const int NUM_SPECIALS = (NUM_EXTRAS + field_items.size());
    const int START = (NUM_SPECIALS + items.size());
    if (!scope_iterator)
        scope_iterator = START;
    else if ((scope_iterator >= START))
        fu::fail("Scope/search: items shrunk while we iterated."_fu);

    fu_DEFER(if (!(scope_iterator))
        scope_iterator = -1;);

    {
        scope_iterator -= NUM_SPECIALS;
        fu_DEFER(scope_iterator += NUM_SPECIALS);
        int skiptrap = -1;
        const int scope_iterator0 = scope_iterator;
        scope_iterator--;
        nextSkip_HupDBH4G(items, scope_iterator, scope_skip, skiptrap);
        scope_iterator++;
        while (scope_iterator-- > 0)
        {
            if (scope_iterator == skiptrap)
            {
                nextSkip_HupDBH4G(items, scope_iterator, scope_skip, skiptrap);
                scope_iterator++;
            }
            else
            {
                const s_ScopeItem& item = items[scope_iterator];
                if (item.id == id)
                {
                    shadows = ScopeItem_shadows_NWTdzsfF(item);
                    if (ScopeItem_canSkipRest_NWTdzsfF(item))
                        scope_iterator = 0;

                    return target_NWTdzsfF(item);
                };
            };
        };
        if ((scope_iterator0 >= 0) && (scope_iterator0 < items.size()))
            ScopeItem_canSkipRest_set_aaPaU7ri(items.mutref(scope_iterator0));

    };
    scope_iterator++;

    {
        scope_iterator -= NUM_EXTRAS;
        fu_DEFER(scope_iterator += NUM_EXTRAS);
        while (scope_iterator-- > 0)
        {
            const s_ScopeItem& item = field_items[scope_iterator];
            if (item.id == id)
                return target_NWTdzsfF(item);

        };
    };
    scope_iterator++;
    while (scope_iterator-- > 0)
        return extra_items[scope_iterator];

    return s_Target{};
}

s_Target search_KfdOrUQd(const s_Target& dont_search_just_return, int& scope_iterator)
{
    if (scope_iterator)
    {
        return s_Target{};
    }
    else
    {
        scope_iterator--;
        return dont_search_just_return;
    };
}

s_Target search_yfyUVvrQ(fu::view<s_ScopeItem> items, fu::view<char> id, int& scope_iterator)
{
    const int START = items.size();
    if (!scope_iterator)
        scope_iterator = START;
    else if ((scope_iterator >= START))
        fu::fail("Scope/search: items shrunk while we iterated."_fu);

    fu_DEFER(if (!(scope_iterator))
        scope_iterator = -1;);
    while (scope_iterator-- > 0)
    {
        const s_ScopeItem& item = items[scope_iterator];
        if (item.id == id)
            return target_NWTdzsfF(item);

    };
    return s_Target{};
}

s_ScopeMemo Scope_snap_dcsfJwX5(const s_Scope& scope, fu::view<s_Helpers> _helpers)
{
    return s_ScopeMemo { scope.items.size(), scope.implicits.size(), scope.imports.size(), scope.privates.size(), scope.usings.size(), scope.converts.size(), _helpers.size() };
}

void Scope_pop_5cTQENbb(s_Scope& scope, const s_ScopeMemo& memo, fu::vec<s_Helpers>& _helpers)
{
    scope.items.shrink(memo.items_len);
    scope.implicits.shrink(memo.implicits_len);
    scope.imports.shrink(memo.imports_len);
    scope.privates.shrink(memo.privates_len);
    scope.usings.shrink(memo.usings_len);
    scope.converts.shrink(memo.converts_len);
    _helpers.shrink(memo.helpers_len);
}

                                #ifndef DEF_grow_if_oob_fu2c8orlZra
                                #define DEF_grow_if_oob_fu2c8orlZra
inline s_Extended& grow_if_oob_fu2c8orl(fu::vec<s_Extended>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

s_Target Scope_create_j83Ac6jp(s_Scope& scope, const s_kind kind, const fu::str& name, const s_Type& type, const s_Flags flags, const s_SolverStatus status, const int nest, const s_Module& module)
{
    fu::vec<s_Overload>& overloads = (nest ? grow_if_oob_fu2c8orl(scope.extended, nest).locals : scope.overloads);
    const int position = (overloads.size() + 1);
    const s_Target target = Target_2jgCJZJY(module.modid, (nest ? nest : position), (!nest ? nest : position));
    /*MOV*/ s_Overload item {};
    item.name = name;
    item.kind = kind;
    item.flags = flags;
    item.type = type;
    item.status = status;
    overloads.push(static_cast<s_Overload&&>(item));
    if (!nest)
        scope.extended.grow((overloads.size() + 1));

    return target;
}

void Scope_set_pOqhE364(fu::vec<s_ScopeItem>& items, const fu::str& id, const s_Target& target, const bool shadows)
{
    items.push(ScopeItem_UfPW8oRC(id, target, shadows));
}

void Scope_set_5Z1f2QqZ(s_Scope& scope, const fu::str& id, const s_Target& target, const bool shadows)
{
    Scope_set_pOqhE364(scope.items, id, target, shadows);
}

#endif
