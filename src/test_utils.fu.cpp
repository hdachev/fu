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
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_gb6sFwC7IKi;
struct s_Options;
struct s_Lint;
struct s_TestDiffs;
void compile_rasidNMT(const fu_STR&, const fu_STR&, s_Context&, const s_Options&);
fu_STR lower_FZjKqN6X(fu_STR&&);
fu_STR qBAD_ThvlUeXJ(const fu_STR&);
void set_next_Vos5idnT(s_TestDiffs&, const fu_STR&, const fu_STR&);
void build_E7FDvIUS(fu_STR&&, fu::view<char>, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, fu::view<char>, const fu_STR&, bool, bool, bool, const fu_VEC<fu_STR>&, const fu_VEC<fu_STR>&, const s_Context&);
s_Context ZERO_6DokMNA4(fu_VEC<fu_STR>&&, const s_Options&, s_TestDiffs&);
s_Context ZERO_zkc417nz(const fu_STR&, s_TestDiffs&);

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
    explicit operator bool() const noexcept
    {
        return false
            || lint
            || break_notes
            || dev
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

                                #ifndef DEF_clone_uFTeeyF6178
                                #define DEF_clone_uFTeeyF6178
inline int clone_uFTeeyF6(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ZCtM7908em2
                                #define DEF_clone_ZCtM7908em2
inline const fu_STR& clone_ZCtM7908(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Ubr1UgJywL7
                                #define DEF_clone_Ubr1UgJywL7
inline const s_ModuleInputs& clone_Ubr1UgJy(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_plfOxjBDXu6
                                #define DEF_clone_plfOxjBDXu6
inline const s_ModuleOrder& clone_plfOxjBD(const s_ModuleOrder& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_uhFEw1JYsb6
                                #define DEF_clone_uhFEw1JYsb6
inline const fu_VEC<s_Struct>& clone_uhFEw1JY(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_5SroIQL7AMc
                                #define DEF_clone_5SroIQL7AMc
inline const s_SolvedNode& clone_5SroIQL7(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_pVzH1qAze10
                                #define DEF_clone_pVzH1qAze10
inline const fu_VEC<s_Overload>& clone_pVzH1qAz(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_589ji8xIkwc
                                #define DEF_clone_589ji8xIkwc
inline const fu_VEC<s_Extended>& clone_589ji8xI(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_L1OynXoo4W8
                                #define DEF_clone_L1OynXoo4W8
inline const fu_VEC<s_ScopeItem>& clone_L1OynXoo(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_krBIyjUlm12
                                #define DEF_clone_krBIyjUlm12
inline const fu_VEC<int>& clone_krBIyjUl(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_fjWGI0vCJl7
                                #define DEF_clone_fjWGI0vCJl7
inline const fu_VEC<s_Target>& clone_fjWGI0vC(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_qN0pIGaTWq8
                                #define DEF_clone_qN0pIGaTWq8
inline s_Scope clone_qN0pIGaT(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_pVzH1qAz(a.overloads);
        res.extended = clone_589ji8xI(a.extended);
        res.items = clone_L1OynXoo(a.items);
        res.implicits = clone_L1OynXoo(a.implicits);
        res.imports = clone_krBIyjUl(a.imports);
        res.privates = clone_krBIyjUl(a.privates);
        res.usings = clone_fjWGI0vC(a.usings);
        res.converts = clone_fjWGI0vC(a.converts);
        res.pub_items = clone_uFTeeyF6(a.pub_items);
        res.pub_cnvrts = clone_uFTeeyF6(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_78p1SrmO3Wk
                                #define DEF_clone_78p1SrmO3Wk
inline s_SolverNotes clone_78p1SrmO(const s_SolverNotes a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_vUXrtzZvhGl
                                #define DEF_clone_vUXrtzZvhGl
inline s_SolverOutput clone_vUXrtzZv(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_5SroIQL7(a.root);
        res.scope = clone_qN0pIGaT(a.scope);
        res.notes = clone_78p1SrmO(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_mRxGHiSsdK0
                                #define DEF_clone_mRxGHiSsdK0
inline const s_CodegenOutput& clone_mRxGHiSs(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_Tzsta5ldyWc
                                #define DEF_clone_Tzsta5ldyWc
inline s_ModuleOutputs clone_Tzsta5ld(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.types = clone_uhFEw1JY(a.types);
        res.solve = clone_vUXrtzZv(a.solve);
        res.cpp = clone_mRxGHiSs(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_ncaVWBO3C8d
                                #define DEF_clone_ncaVWBO3C8d
inline const s_ModuleStats& clone_ncaVWBO3(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_jFwbe1Ionzd
                                #define DEF_clone_jFwbe1Ionzd
inline s_Module clone_jFwbe1Io(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_uFTeeyF6(a.modid);
        res.fname = clone_ZCtM7908(a.fname);
        res.in = clone_Ubr1UgJy(a.in);
        res.order = clone_plfOxjBD(a.order);
        res.out = clone_Tzsta5ld(a.out);
        res.stats = clone_ncaVWBO3(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_map_IjFmPwRP6ck
                                #define DEF_map_IjFmPwRP6ck
inline fu_VEC<s_Module> map_IjFmPwRP(fu::view<s_Module> a)
{
    /*MOV*/ fu_VEC<s_Module> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = clone_jFwbe1Io(a[i]);

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_LU0aFJvTaB1
                                #define DEF_clone_LU0aFJvTaB1
inline fu_VEC<s_Module> clone_LU0aFJvT(fu::view<s_Module> a)
{
    return map_IjFmPwRP(a);
}
                                #endif

                                #ifndef DEF_clone_KBgi0Tm8es5
                                #define DEF_clone_KBgi0Tm8es5
inline const s_Map_gb6sFwC7IKi& clone_KBgi0Tm8(const s_Map_gb6sFwC7IKi& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_eixx2GVSM9a
                                #define DEF_clone_eixx2GVSM9a
inline s_Context clone_eixx2GVS(const s_Context& a)
{
    /*MOV*/ s_Context res {};

    {
        res.modules = clone_LU0aFJvT(a.modules);
        res.dep_order = clone_krBIyjUl(a.dep_order);
        res.files = clone_KBgi0Tm8(a.files);
        res.fuzzy = clone_KBgi0Tm8(a.fuzzy);
    };
    return /*NRVO*/ res;
}
                                #endif

static fu_STR ensure_main_UtFGlxlR(const fu_STR& src)
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

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_DEV_PrintAST
                                #define DEF_DEV_PrintAST
inline constexpr unsigned DEV_PrintAST = (0x1u << 1u);
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

                                #ifndef DEF_update_CZIi53Dq85k
                                #define DEF_update_CZIi53Dq85k
inline bool update_CZIi53Dq(const fu_STR& item, const fu_STR& extra, s_Map_gb6sFwC7IKi& _)
{
    int lo = 0;
    int hi = _.keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(_.keys[i], item);
        if (cmp == 0)
        {
            _.vals.mutref(i) = extra;
            return false;
        }
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    _.keys.insert(lo, fu_STR(item));
    _.vals.insert(lo, fu_STR(extra));
    return true;
}
                                #endif

                                #ifndef DEF_set_SN0lxEjdhq6
                                #define DEF_set_SN0lxEjdhq6
inline bool set_SN0lxEjd(s_Map_gb6sFwC7IKi& _, const fu_STR& key, const fu_STR& value)
{
    return update_CZIi53Dq(key, value, _);
}
                                #endif

                                #ifndef DEF_str_hwRw3Bt9F9l
                                #define DEF_str_hwRw3Bt9F9l
inline fu_STR str_hwRw3Bt9(const s_SolverNotes n)
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

s_Context compile_snippets_hRyKTFLb(fu::view<fu_STR> sources, fu::view<fu_STR> fnames, fu::view<s_Options> options)
{
    /*MOV*/ s_Context ctx = clone_eixx2GVS(CTX_PRELUDE);
    for (int i = 0; i < sources.size(); i++)
    {
        const fu_STR& snippet = sources[i];
        fu_STR src = ((i == (sources.size() - 1)) ? ensure_main_UtFGlxlR(snippet) : fu_STR(snippet));
        fu_STR fname = ((fnames.size() > i) ? fu_STR(fnames[i]) : (x7E_YP7BiSZZ((FUDIR + "__tests__/_"_fu), fu::i64dec(i)) + ".fu"_fu));
        s_Options options_1 { ((options.size() > i) ? options[i] : (*(const s_Options*)fu::NIL)) };
        if (fu::has(src, "/*PRINT*/"_fu))
            options_1.dev |= DEV_PrintAST;

        set_SN0lxEjd(ctx.files, fname, src);
        compile_rasidNMT(fname, (*(const fu_STR*)fu::NIL), ctx, options_1);
    };
    for (int i_1 = 0; i_1 < ctx.modules.size(); i_1++)
    {
        s_Module& module = ctx.modules.mutref(i_1);
        const s_SolverNotes notes = module.out.solve.notes;
        if (notes)
            module.out.cpp.src += (x7E_YP7BiSZZ("\n// "_fu, str_hwRw3Bt9(notes)) + "\n"_fu);

    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_x3Dx3D_YP7BiSZZZOd
                                #define DEF_x3Dx3D_YP7BiSZZZOd
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

fu_STR snippet2cpp_lY1zhnoo(const fu_STR& src)
{
    fu_STR fname = "/DIR/FILE.fu"_fu;
    s_Context ctx = compile_snippets_hRyKTFLb((fu::slate<1, fu_STR> { fu_STR(src) }), (fu::slate<1, fu_STR> { fu_STR(fname) }), fu::view<s_Options>{});
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        if (module.fname == fname)
            return fu_STR(module.out.cpp.src);

    };
    return fu_STR{};
}

static int unindent_left_sfS5Ia3H(fu::view<char> src, const int i0)
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
    return int(i0);
}

                                #ifndef DEF_split_sY7q9Vjuicl
                                #define DEF_split_sY7q9Vjuicl
inline void split_sY7q9Vju(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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

                                #ifndef DEF_split_0uwO0NUHiD4
                                #define DEF_split_0uwO0NUHiD4
inline fu_VEC<fu_STR> split_0uwO0NUH(const fu_STR& str, fu::view<char> sep)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    split_sY7q9Vju(str, sep, result);
    return /*NRVO*/ result;
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

static fu_STR ERR_TRIM_lY1zhnoo(const fu_STR& e)
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

static fu_STR ERR_STRIP_ANSI_lY1zhnoo(/*MOV*/ fu_STR&& e)
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

static fu_STR ERR_STRIP_SNIPPETS_lY1zhnoo(/*MOV*/ fu_STR&& e)
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
                    {
                        i0 = i;
                    };
                    i--;
                    break;
                };
            };
        };
    };
    return static_cast<fu_STR&&>(e);
}

static fu_STR ERR_KEY_imBaPu6b(fu::view<fu_STR> sources)
{
    /*MOV*/ fu_STR key {};
    for (int i = 0; i < sources.size(); i++)
    {
        fu::view<char> src = sources[i];
        const int end = unindent_left_sfS5Ia3H(src, src.size());
        key += fu::get_view(src, 0, end);
    };
    return /*NRVO*/ key;
}

                                #ifndef DEF_map_0HFKkLwhx8e
                                #define DEF_map_0HFKkLwhx8e
inline fu_VEC<s_Options> map_0HFKkLwh(fu::view<fu_STR> a, const s_Options& options)
{
    /*MOV*/ fu_VEC<s_Options> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const s_Options* BL_3_v;
        res.mutref(i) = (__extension__ (
        {
            [[maybe_unused]] fu::view<char> _ = a[i];
            BL_3_v = &(options);
        (void)0;}), *BL_3_v);
    };
    return /*NRVO*/ res;
}
                                #endif

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

                                #ifndef DEF_parse_p7nuxXbtZV6
                                #define DEF_parse_p7nuxXbtZV6
inline s_SolverNotes parse_p7nuxXbt(fu::view<char> v, const s_SolverNotes)
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

                                #ifndef DEF_grow_if_oob_8Fb1xv16w5f
                                #define DEF_grow_if_oob_8Fb1xv16w5f
inline fu_VEC<fu_STR>& grow_if_oob_8Fb1xv16(fu_VEC<fu_VEC<fu_STR>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

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

                                #ifndef DEF_x21x3D_YP7BiSZZZOd
                                #define DEF_x21x3D_YP7BiSZZZOd
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE;
                                #endif

s_Context ZERO_6DokMNA4(fu_VEC<fu_STR>&& sources, const s_Options& options, s_TestDiffs& testdiffs)
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
                    while (src[start1++] != '>')
                    {
                    };
                    fu_STR msg = fu::slice(src, (start0 + 5), (start1 - 1));
                    if (msg)
                    {
                        if (msg[0] == ' ')
                        {
                            const int end1 = (end0 + 7);
                            start0 = unindent_left_sfS5Ia3H(src, start0);
                            end0 = unindent_left_sfS5Ia3H(src, end0);
                            fu_STR prefix = fu::slice(src, 0, start0);
                            fu_STR suffix = fu::slice(src, end1, src.size());
                            fu_VEC<fu_STR> split = split_0uwO0NUH(fu::slice(src, start1, end0), "<pass/>"_fu);
                            if (split.size() > 1)
                            {
                                if (split.size() < 3)
                                {
                                    fu_VEC<fu_STR> fails = split_0uwO0NUH(split[0], "<fail/>"_fu);
                                    split.shift();
                                    fu::view<char> pass = only_3Ycuooso(split);
                                    for (int j = fails.size(); j-- > 0; )
                                    {
                                        fu::view<char> fail = fails[j];
                                        const int end = unindent_left_sfS5Ia3H(fail, fail.size());
                                        sources.mutref(i) = ((prefix + fu::get_view(fail, 0, end)) + suffix);

                                        try
                                        {
                                        {
                                            ZERO_6DokMNA4(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
                                        }
                                        }
                                        catch (const std::exception& o_0)
                                        {
                                            fu_STR e = fu_TO_STR(o_0.what());

                                        {
                                            fu_STR e_1 = ERR_TRIM_lY1zhnoo(e);
                                            fu_STR actual = lower_FZjKqN6X(ERR_STRIP_SNIPPETS_lY1zhnoo(ERR_STRIP_ANSI_lY1zhnoo(fu_STR(e_1))));
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

                                                        fu_STR expect = lower_FZjKqN6X(static_cast<fu_STR&&>(exact));
                                                        if (!fu::has(actual, expect))
                                                            fu::fail((((((("<fail> mismatch:\n\n    Expected error keyword:\n        "_fu + qBAD_ThvlUeXJ(expect)) + " from pattern <fail"_fu) + qBAD_ThvlUeXJ(msg)) + ">"_fu) + "\n\n    ... not present in error message:\n\n"_fu) + e_1));

                                                    };
                                                    m0 = -1;
                                                }
                                                else if (m0 < 0)
                                                {
                                                    m0 = m1;
                                                };
                                            };
                                            if (!BUG_ok && fu::has(e_1, "BUG"_fu))
                                                fu::fail(("<fail> error message contains BUG:\n\n"_fu + e_1));
                                            else
                                            {
                                                set_next_Vos5idnT(testdiffs, ERR_KEY_imBaPu6b(sources), e_1);
                                                continue;
                                            };
                                        }
                                        }
;
                                        fu::fail(("<fail> does not throw:\n"_fu + sources[i]));
                                    };
                                    const int end = unindent_left_sfS5Ia3H(pass, pass.size());
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
                    start0 = unindent_left_sfS5Ia3H(src, start0);
                    end0 = unindent_left_sfS5Ia3H(src, end0);
                    fu_STR prefix = fu::slice(src, 0, start0);
                    fu_STR suffix = fu::slice(src, end1, src.size());
                    fu_VEC<fu_STR> split = split_0uwO0NUH(fu::slice(src, start1, end0), "<alt/>"_fu);
                    if (split.size() < 2)
                    {
                        split += fu_STR{};
                    };
                    for (int j = split.size(); j-- > 0; )
                    {
                        fu::view<char> part = split[j];
                        const int end = unindent_left_sfS5Ia3H(part, part.size());
                        sources.mutref(i_1) = ((prefix + fu::get_view(part, 0, end)) + suffix);
                        if (j)
                        {
                            ZERO_6DokMNA4(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
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
                /*MOV*/ fu_STR moduleB = ((x7E_YP7BiSZZ((fu::get_view(src, start0, start00) + "import _"_fu), fu::i64dec(i_2)) + ";"_fu) + fu::get_view(src, start1, src.size()));
                /*MOV*/ fu_STR without = (fu::get_view(src, 0, start0) + fu::get_view(src, start1, src.size()));
                sources.mutref(i_2) = static_cast<fu_STR&&>(without);
                ZERO_6DokMNA4(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
                sources.mutref(i_2) = static_cast<fu_STR&&>(moduleA);
                int _0 {};
                (_0 = (i_2 + 1), sources.insert(int(_0), static_cast<fu_STR&&>(moduleB)));
            };
        };
    };
    fu_VEC<fu_VEC<fu_STR>> expectations {};
    fu_VEC<s_Options> options_1 = map_0HFKkLwh(sources, options);
    for (int i_3 = 0; i_3 < sources.size(); i_3++)
    {
        fu_STR& src = sources.mutref(i_3);

        {
            int end = src.size();
            for (/*MOV*/ int r = src.size(); (r-- > 0) && (src[r] == ' '); )
                end = int(r);

            src.shrink(end);
        };
        /*MOV*/ s_SolverNotes break_notes {};
        int start = 0;
        while (((start = fu::lfind(src, " ;; "_fu, start)) >= 0))
        {
            /*MOV*/ int end = find_aQVLX4hM(src, '\n', (start + 4));
            if (end < 0)
                end = src.size();

            /*MOV*/ fu_STR annot = fu::slice(src, (start + 4), end);
            if (annot[0] == '!')
            {
                s_SolverNotes _1 {};
                break_notes |= ((_1 = parse_p7nuxXbt(fu::slice(annot, 1, annot.size()), s_SolverNotes{})) ? _1 : fu::fail((("Bad break_note: `;; "_fu + annot) + "`."_fu)));
            }
            else
            {
                fu_VEC<fu_STR>* _2;
                (_2 = &(grow_if_oob_8Fb1xv16(expectations, i_3)), (*_2 += static_cast<fu_STR&&>(annot)));
            };
            src.mutref((start + 1)) = '/';
            src.mutref((start + 2)) = '/';
            start = int(end);
        };
        options_1.mutref(i_3).break_notes = s_SolverNotes(break_notes);
    };
    /*MOV*/ s_Context ctx = compile_snippets_hRyKTFLb(sources, fu::view<fu_STR>{}, options_1);
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
            const s_SolverNotes note = parse_p7nuxXbt(x, s_SolverNotes{});
            if (note)
            {
                if (out.solve.notes & note)
                    continue;
                else
                    fu::fail(((((("Expected note not listed: `"_fu + x) + "` in:\n"_fu) + src) + "\n\nOutput is:\n\n"_fu) + cpp.src));

            }
            else
            {
                const int idx = find_8ObANk7r(x, ' ');
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
    build_E7FDvIUS(fu_STR(DEFAULT_WORKSPACE), FUDIR, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), "debug"_fu, "print-src"_fu, run, bool{}, bool{}, (*(const fu_VEC<fu_STR>*)fu::NIL), (*(const fu_VEC<fu_STR>*)fu::NIL), ctx);
    build_E7FDvIUS(fu_STR(DEFAULT_WORKSPACE), FUDIR, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, fu_STR{}, (*(const fu_STR*)fu::NIL), fu::view<char>{}, "print-src"_fu, run, bool{}, bool{}, (*(const fu_VEC<fu_STR>*)fu::NIL), (*(const fu_VEC<fu_STR>*)fu::NIL), ctx);

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
            set_next_Vos5idnT(testdiffs, key, (testdiff_prepend + actual));
        };
    };
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_replace_IPuENzWdLPh
                                #define DEF_replace_IPuENzWdLPh
inline fu_STR replace_IPuENzWd(const fu_STR& str, fu::view<char> all, fu::view<char> with)
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

static fu_STR indent_Ved6K8Qn(const fu_STR& src)
{
    return replace_IPuENzWd(src, "\n"_fu, "\n\t"_fu);
}

void ZERO_SAME_SiTfvojq(fu::view<fu_VEC<fu_STR>> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<s_Module> expect = ZERO_6DokMNA4(fu_VEC<fu_STR>(alts[0]), s_Options{}, testdiffs).modules;
    for (int i = 1; i < alts.size(); i++)
    {
        fu_VEC<s_Module> actual = compile_snippets_hRyKTFLb(alts[i], fu::view<fu_STR>{}, fu::view<s_Options>{}).modules;
        if (expect.size() != actual.size())
            fu::fail("ZERO_SAME: expect/actual len mismatch."_fu);
        else
        {
            for (int m = 0; m < actual.size(); m++)
            {
                const fu_STR& x = expect[m].out.cpp.src;
                const fu_STR& a = actual[m].out.cpp.src;
                if (x != a)
                    fu::fail((((x7E_YP7BiSZZ((((x7E_YP7BiSZZ(((x7E_YP7BiSZZ("ZERO_SAME: alts["_fu, fu::i64dec(i)) + "] mismatch at:\n"_fu) + "\nexpect["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_Ved6K8Qn(x)) + "\nactual["_fu), fu::i64dec(m)) + "]:\n\t"_fu) + indent_Ved6K8Qn(a)) + "\n"_fu));

            };
        };
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

void TODO_VpwO06E8(const fu_VEC<fu_STR>& sources, s_TestDiffs& testdiffs)
{

    try
    {
    {
        ZERO_6DokMNA4(fu_VEC<fu_STR>(sources), s_Options{}, testdiffs);
    }
    }
    catch (const std::exception& o_0)
    {
        fu_STR e = fu_TO_STR(o_0.what());

    {
        set_next_Vos5idnT(testdiffs, ERR_KEY_imBaPu6b(sources), ("TODO: "_fu + ERR_TRIM_lY1zhnoo(e)));
        return;
    }
    }
;
    fu::fail(("TODO test is actually passing: "_fu + join_NaazSXrk(sources, "\n\n"_fu)));
}

s_Context ZERO_zkc417nz(const fu_STR& src, s_TestDiffs& testdiffs)
{
    return ZERO_6DokMNA4(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, s_Options{}, testdiffs);
}

void TODO_zkc417nz(const fu_STR& src, s_TestDiffs& testdiffs)
{
    TODO_VpwO06E8(fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(src) } }, testdiffs);
}

void ZERO_SAME_kVjtdWIn(fu::view<fu_STR> alts, s_TestDiffs& testdiffs)
{
    fu_VEC<fu_VEC<fu_STR>> wrap {};
    for (int i = 0; i < alts.size(); i++)
    {
        wrap += fu_VEC<fu_STR> { fu::slate<1, fu_STR> { fu_STR(alts[i]) } };
    };
    ZERO_SAME_SiTfvojq(wrap, testdiffs);
}

#endif
