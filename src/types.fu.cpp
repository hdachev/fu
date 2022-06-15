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
typedef fu::u8 s_DeclAsserts;
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
typedef int s_SolverNotes;
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_gb6sFwC7IKi;
inline fu_VEC<s_Region> uNion_cjr4hkt7(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
inline fu_VEC<s_Region> inter_cjr4hkt7(const fu_VEC<s_Region>&, const fu_VEC<s_Region>&);
[[noreturn]] fu::never BUG_MO9c1jyS(fu_STR&&, const s_TokenIdx&, const s_Context&);
unsigned parse10u32_0HRwKgGk(int&, fu::view<char>);
void appendMi_KujYnsPj(fu_STR&, int, int);

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

int Region_toLocal_RvC5USpz(const s_Region& region)
{
    return region.index;
}

s_Region Region_fromLocal_BaKYka79(const int index)
{
    return s_Region { int(index) };
}

                                #ifndef DEF_Region_TEMP
                                #define DEF_Region_TEMP
extern const s_Region Region_TEMP fu_INIT_PRIORITY(1008) = Region_fromLocal_BaKYka79(int(0x7fffffffu));
                                #endif

                                #ifndef DEF_Region_STATIC
                                #define DEF_Region_STATIC
extern const s_Region Region_STATIC fu_INIT_PRIORITY(1008) = Region_fromLocal_BaKYka79(int(0x80000001u));
                                #endif

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

                                #ifndef DEF_x3Dx3D_gIvInnt76me
                                #define DEF_x3Dx3D_gIvInnt76me
inline bool operator==(const s_Region& a, const s_Region& b)
{
    return !x3Cx3E_gIvInnt7(a, b);
}
                                #endif

bool Region_isTemp_RvC5USpz(const s_Region& region)
{
    return region == Region_TEMP;
}

bool Region_isStatic_RvC5USpz(const s_Region& region)
{
    return region == Region_STATIC;
}

bool Region_isArgPosition_RvC5USpz(const s_Region& region)
{
    return region.index < 0;
}

int Region_toArgPosition_RvC5USpz(const s_Region& region)
{
    return -(region.index + 1);
}

s_Region Region_fromArgPosition_BaKYka79(const int position)
{
    return s_Region { -(position + 1) };
}

int Region_asLocal_RvC5USpz(const s_Region& r)
{
    if ((r == Region_TEMP) || (r.index < 0))
        return 0;
    else
        return int(r.index);

}

inline static void merge_b5LQE22P(fu::view<s_Region> l, fu::view<s_Region> r, bool& useResult, fu_VEC<s_Region>& result, fu::view<s_Region> l_1)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_gIvInnt7(l[li], r[ri])));
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

                                #ifndef DEF_uNion_cjr4hkt71m3
                                #define DEF_uNion_cjr4hkt71m3
inline fu_VEC<s_Region> uNion_cjr4hkt7(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() > l.size())
        return uNion_cjr4hkt7(r, l);
    else
    {
        /*MOV*/ fu_VEC<s_Region> result {};
        bool useResult = false;
        merge_b5LQE22P(l, r, useResult, result, l);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu_VEC<s_Region>(l);

    };
}
                                #endif

s_Lifetime Lifetime_union_BGIGvcl2(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { uNion_cjr4hkt7(a.uni0n, b.uni0n) };
}

inline static void merge_VQiD2ydv(fu::view<s_Region> l, fu::view<s_Region> r, bool& useResult, fu_VEC<s_Region>& result, const fu_VEC<s_Region>& l_1)
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
        (void)0;}), static_cast<fu::never&&>(BL_3_v)) : +1) : (r_done ? -1 : x3Cx3E_gIvInnt7(l[li], r[ri])));
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

                                #ifndef DEF_inter_cjr4hkt71m3
                                #define DEF_inter_cjr4hkt71m3
inline fu_VEC<s_Region> inter_cjr4hkt7(const fu_VEC<s_Region>& l, const fu_VEC<s_Region>& r)
{
    if (r.size() < l.size())
        return inter_cjr4hkt7(r, l);
    else
    {
        /*MOV*/ fu_VEC<s_Region> result {};
        bool useResult = false;
        merge_VQiD2ydv(l, r, useResult, result, l);
        if (useResult)
            return /*NRVO*/ result;
        else
            return fu_VEC<s_Region>(l);

    };
}
                                #endif

s_Lifetime Lifetime_inter_BGIGvcl2(const s_Lifetime& a, const s_Lifetime& b)
{
    return s_Lifetime { inter_cjr4hkt7(a.uni0n, b.uni0n) };
}

s_Lifetime Lifetime_static_8nlJDPX0()
{
    return s_Lifetime { fu_VEC<s_Region> { fu::slate<1, s_Region> { s_Region(Region_STATIC) } } };
}

s_Lifetime Lifetime_makeShared_L0YJBnz6(const s_Lifetime& lifetime)
{
    return Lifetime_union_BGIGvcl2(lifetime, Lifetime_static_8nlJDPX0());
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

bool is_void_ZFEUWUgI(const s_Type& t)
{
    return t.vtype.canon == t_void.vtype.canon;
}

bool is_never_ZFEUWUgI(const s_Type& t)
{
    return t.vtype.canon == t_never.vtype.canon;
}

bool is_zeroes_ZFEUWUgI(const s_Type& t)
{
    return t.vtype.canon == t_zeroes.vtype.canon;
}

bool is_rx_copy_MvT8pzW6(const s_Type& t)
{
    return !!(t.vtype.quals & q_rx_copy);
}

bool is_rx_resize_MvT8pzW6(const s_Type& t)
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

bool isAssignableAsArgument_0a4boBJ8(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes)
{
    return (areQualsAssignable(host.vtype.quals, guest.vtype.quals) && isCanonAssignable(host.vtype.canon, guest.vtype.canon)) || (is_zeroes_ZFEUWUgI(guest) && !DONT_match_zeroes && !(CANNOT_definit_mutrefs ? (host.vtype.quals & q_mutref) : int{}));
}

bool isAssignable_b2EdYOvX(const s_Type& host, const s_Type& guest, const bool DONT_match_zeroes, const bool asArgument)
{
    return (isAssignableAsArgument_0a4boBJ8(host, guest, DONT_match_zeroes) && (asArgument || isLifetimeAssignable(host.lifetime, guest.lifetime))) || is_never_ZFEUWUgI(guest);
}

bool is_ref_MvT8pzW6(const s_Type& type)
{
    return !!type.lifetime;
}

bool is_mutref_9gHYdovL(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ const bool a = ((type.vtype.quals & q_mutref) != 0);
    const bool b = is_ref_MvT8pzW6(type);
    if (a && !b)
        BUG_MO9c1jyS("MutRef&&!Ref"_fu, _here, ctx);
    else
        return /*NRVO*/ a;

}

s_Type add_ref_8kJD1Pzg(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union_BGIGvcl2(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG_MO9c1jyS("add_ref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

s_Type add_mutref_8kJD1Pzg(/*MOV*/ s_Type&& type, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    type.vtype.quals |= q_mutref;
    s_Lifetime _0 {};
    type.lifetime = ((_0 = Lifetime_union_BGIGvcl2(type.lifetime, lifetime)) ? static_cast<s_Lifetime&&>(_0) : BUG_MO9c1jyS("add_mutref: falsy lifetime"_fu, _here, ctx));
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_if_last_ExmqHm1o0ua
                                #define DEF_if_last_ExmqHm1o0ua
inline const s_Region& if_last_ExmqHm1o(fu::view<s_Region> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const s_Region*)fu::NIL);
}
                                #endif

bool is_ref2temp_9gHYdovL(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (if_last_ExmqHm1o(type.lifetime.uni0n) == Region_TEMP) && (is_ref_MvT8pzW6(type) || BUG_MO9c1jyS("is_ref2temp: has lts but isnt ref"_fu, _here, ctx));
}

s_Type clear_refs_MvT8pzW6(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    type.lifetime = s_Lifetime{};
    return static_cast<s_Type&&>(type);
}

s_Type clear_mutref_MvT8pzW6(/*MOV*/ s_Type&& type)
{
    type.vtype.quals &= ~q_mutref;
    return static_cast<s_Type&&>(type);
}

s_Type tryClearRefs(const s_Type& type, const bool mutref, const s_TokenIdx& _here, const s_Context& ctx)
{
    return (mutref ? is_mutref_9gHYdovL(type, _here, ctx) : is_ref_MvT8pzW6(type)) ? clear_refs_MvT8pzW6(s_Type(type)) : s_Type{};
}

s_Type tryClear_mutref_9gHYdovL(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, true, _here, ctx);
}

s_Type tryClear_ref_9gHYdovL(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    return tryClearRefs(type, bool{}, _here, ctx);
}

s_Type add_refs_XJgsWJyN(const s_Type& from, /*MOV*/ s_Type&& to)
{
    to.vtype.quals |= (from.vtype.quals & q_mutref);
    to.lifetime = Lifetime_union_BGIGvcl2(from.lifetime, to.lifetime);
    return static_cast<s_Type&&>(to);
}

s_Type make_copyable_MvT8pzW6(/*MOV*/ s_Type&& type)
{
    type.vtype.quals |= q_rx_copy;
    return static_cast<s_Type&&>(type);
}

                                #ifndef DEF_x7Ex3D_qlVazLihZ2i
                                #define DEF_x7Ex3D_qlVazLihZ2i
inline fu_STR& x7Ex3D_qlVazLih(fu_STR& a, fu::view<char> b)
{
    return (a += b);
}
                                #endif

fu_STR serializeType_j1lEWOZW(const s_Type& type, fu::view<char> debug, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (type)
    {
        fu_STR prefix {};
        if (type.vtype.quals)
            x7Ex3D_qlVazLih(prefix, fu::i64dec(type.vtype.quals));

        return prefix + (type.vtype.canon ? type.vtype.canon : BUG_MO9c1jyS(("serializeType: No type.canon in: "_fu + debug), _here, ctx));
    }
    else
        BUG_MO9c1jyS(("serializeType: Falsy type in: "_fu + debug), _here, ctx);

}

fu_STR humanizeQuals_MvT8pzW6(const s_Type& type)
{
    /*MOV*/ fu_STR result = ":"_fu;
    for (int i = 0; i < TAGS.size(); i++)
    {
        if (type.vtype.quals & (1 << i))
            result += (" "_fu + TAGS[i]);

    };
    return /*NRVO*/ result;
}

s_ValueType parseType_pTOG72Sa(const fu_STR& str)
{
    int offset {};
    /*MOV*/ const int quals = int(parse10u32_0HRwKgGk(offset, str));
    /*MOV*/ fu_STR canon = fu::slice(str, offset);
    int _0 {};
    return (_0 = int(quals), s_ValueType { int(_0), static_cast<fu_STR&&>(canon) });
}

                                #ifndef DEF_starts_8ObANk7rz5k
                                #define DEF_starts_8ObANk7rz5k
inline bool starts_8ObANk7r(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

bool type_isSliceable_ZFEUWUgI(const s_Type& type)
{
    return starts_8ObANk7r(type.vtype.canon, '[');
}

s_Type createArray_9gHYdovL(const s_Type& item, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_STR canon = (("["_fu + serializeType_j1lEWOZW(item, "createArray"_fu, _here, ctx)) + "]"_fu);
    /*MOV*/ const int quals = ((item.vtype.quals & q_rx_copy) | q_rx_resize);
    int _0 {};
    return s_Type { (_0 = int(quals), s_ValueType { int(_0), static_cast<fu_STR&&>(canon) }), s_Lifetime(item.lifetime) };
}

s_Type createSlice_8kJD1Pzg(const s_Type& item, const s_Lifetime& lifetime, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ s_Type out = createArray_9gHYdovL(item, _here, ctx);
    out.vtype.quals &= ~(q_rx_copy | q_rx_resize);
    return add_ref_8kJD1Pzg(static_cast<s_Type&&>(out), lifetime, _here, ctx);
}

s_Type tryClear_sliceable_MvT8pzW6(const s_Type& type)
{
    if (!type_isSliceable_ZFEUWUgI(type))
    {
        return s_Type{};
    }
    else
    {
        /*MOV*/ s_ValueType vtype = parseType_pTOG72Sa(fu::slice(type.vtype.canon, 1, (type.vtype.canon.size() - 1)));
        return s_Type { static_cast<s_ValueType&&>(vtype), s_Lifetime{} };
    };
}

s_Type clear_sliceable_9gHYdovL(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx)
{
    s_Type _0 {};
    return (_0 = tryClear_sliceable_MvT8pzW6(type)) ? static_cast<s_Type&&>(_0) : BUG_MO9c1jyS(("Not sliceable: "_fu + type.vtype.canon), _here, ctx);
}

s_Type tryClear_array_MvT8pzW6(const s_Type& type)
{
    if ((type.vtype.quals & q_rx_resize) != q_rx_resize)
    {
        return s_Type{};
    }
    else
        return tryClear_sliceable_MvT8pzW6(type);

}

bool TODO_FIX_isArray_MvT8pzW6(const s_Type& type)
{
    return (type.vtype.quals & (q_rx_resize | q_rx_copy)) && type_isSliceable_ZFEUWUgI(type);
}

                                #ifndef DEF_x21x3D_YP7BiSZZZOd
                                #define DEF_x21x3D_YP7BiSZZZOd
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

s_Type type_trySuper_0a4boBJ8(const s_Type& a, const s_Type& b, const bool DONT_match_zeroes)
{
    if (a.vtype.canon != b.vtype.canon)
    {
        if (is_never_ZFEUWUgI(a))
            return s_Type(b);
        else if (is_never_ZFEUWUgI(b))
            return s_Type(a);
        else if (is_zeroes_ZFEUWUgI(a) && !DONT_match_zeroes)
        {
            if (CANNOT_definit_mutrefs)
                return clear_mutref_MvT8pzW6(s_Type(b));
            else
                return s_Type(b);

        }
        else if (is_zeroes_ZFEUWUgI(b) && !DONT_match_zeroes)
        {
            if (CANNOT_definit_mutrefs)
                return clear_mutref_MvT8pzW6(s_Type(a));
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
        /*MOV*/ const int quals = (a.vtype.quals & b.vtype.quals);
        /*MOV*/ s_Lifetime lifetime = (a.lifetime && b.lifetime ? Lifetime_union_BGIGvcl2(a.lifetime, b.lifetime) : s_Lifetime{});
        s_ValueType _0 {};
        return (_0 = s_ValueType { int(quals), fu_STR(a.vtype.canon) }, s_Type { static_cast<s_ValueType&&>(_0), static_cast<s_Lifetime&&>(lifetime) });
    };
}

s_Type type_tryIntersect_XJgsWJyN(const s_Type& a, const s_Type& b)
{
    if (a.vtype.canon != b.vtype.canon)
    {
        return s_Type{};
    }
    else
    {
        /*MOV*/ const int quals = (a.vtype.quals | b.vtype.quals);
        /*MOV*/ s_Lifetime lifetime = Lifetime_inter_BGIGvcl2(a.lifetime, b.lifetime);
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

bool type_isAddrOfFn_ZFEUWUgI(const s_Type& type)
{
    return starts_8ObANk7r(type.vtype.canon, '@');
}

bool type_isZST_ZFEUWUgI(const s_Type& type)
{
    return type_isAddrOfFn_ZFEUWUgI(type) || is_void_ZFEUWUgI(type) || is_zeroes_ZFEUWUgI(type);
}

fu_STR packAddrOfFn_KKQQYGG8(fu::view<s_Target> targets)
{
    /*MOV*/ fu_STR res = "@"_fu;
    for (int i = 0; i < targets.size(); i++)
    {
        const s_Target& target = targets[i];
        appendMi_KujYnsPj(res, int(target.modid), int(target.index));
    };
    return /*NRVO*/ res;
}

bool will_relax_J74Hyb4o(const s_Type& type, const s_Type& slot, const int relax_mask)
{
    return ((type.vtype.quals & ~slot.vtype.quals) & relax_mask) != 0;
}

bool try_relax_Wnahb19Z(s_Type& type, const s_Type& slot, const int relax_mask)
{
    if (!will_relax_J74Hyb4o(type, slot, int(relax_mask)))
        return false;
    else
    {
        type.vtype.quals &= (slot.vtype.quals | ~relax_mask);
        return true;
    };
}

s_Type relax_typeParam_MvT8pzW6(/*MOV*/ s_Type&& type)
{
    return clear_refs_MvT8pzW6(static_cast<s_Type&&>(type));
}

#endif
