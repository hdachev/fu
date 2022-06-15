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

struct s_Token;
enum s_kind: fu::u8;
struct s_TokenIdx;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
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
struct s_StructCanon;
s_StructCanon parseStructCanon_axp26pRU(fu::view<char>);
int64_t size_ny0gyQ9a(fu_STR&&);
fu_STR dirname_KqRBcvmh(const fu_STR&);
static fu_STR tryResolve_VstYn9wN(const fu_STR&, const fu_STR&, const fu_STR&, s_Context&);
static fu_STR resolveFile_RloYOv0n(const fu_STR&, const fu_STR&, s_Context&);
fu_STR resolveFile_WPdR5TkH(const fu_STR&, s_Context&);
fu_STR read_ny0gyQ9a(fu_STR&&);
bool is_primitive_VS9ogqN5(const s_Type&);
bool isStruct_jHe6RDpE(const s_Type&);
int basePrimPrefixLen_1NgzHTh0(fu::view<char>);

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

#ifndef fu_NO_fdefs

const s_Token& _token_oqTaHNkG(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].in.lex.tokens[idx.tokidx];
}

const fu_STR& _fname_oqTaHNkG(const s_TokenIdx& idx, const s_Context& ctx)
{
    return ctx.modules[idx.modid].fname;
}

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

s_Struct& lookupStruct_mut_KqcnL3sY(fu::view<char> canon, s_Module& module)
{
    const s_StructCanon scp = parseStructCanon_axp26pRU(canon);
    if (scp.modid == module.modid)
        return module.out.types.mutref(scp.index);
    else
        fu::fail((((x7E_YP7BiSZZ("lookupStruct_mut: Not from this module ("_fu, fu::i64dec(module.modid)) + ": "_fu) + canon) + ")"_fu));

}

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

                                #ifndef DEF_has_8ObANk7rz5k
                                #define DEF_has_8ObANk7rz5k
inline bool has_8ObANk7r(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
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

                                #ifndef DEF_get_ZxmEX1VMGq4
                                #define DEF_get_ZxmEX1VMGq4
inline const fu_STR& get_ZxmEX1VM(fu::view<fu_STR> keys, fu::view<char> item, fu::view<fu_STR> extras)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return extras[i];
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return (*(const fu_STR*)fu::NIL);
}
                                #endif

                                #ifndef DEF_get_7E0rjAmpTY2
                                #define DEF_get_7E0rjAmpTY2
inline const fu_STR& get_7E0rjAmp(const s_Map_gb6sFwC7IKi& _, fu::view<char> key)
{
    return get_ZxmEX1VM(_.keys, key, _.vals);
}
                                #endif

                                #ifndef DEF_x3Dx3D_YP7BiSZZZOd
                                #define DEF_x3Dx3D_YP7BiSZZZOd
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

                                #ifndef DEF_ends_YP7BiSZZZOd
                                #define DEF_ends_YP7BiSZZZOd
inline bool ends_YP7BiSZZ(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, (a.size() - with.size()), a.size()) == with);
}
                                #endif

static fu_STR tryResolve_VstYn9wN(const fu_STR& path, const fu_STR& from, const fu_STR& name, s_Context& ctx)
{

    {
        const bool exists = (size_ny0gyQ9a(fu_STR(path)) >= 0ll);
        if (exists)
            return fu_STR(path);

    };

    {
        /*MOV*/ fu_STR path_1 = ((from + "lib/"_fu) + name);
        const bool exists = (size_ny0gyQ9a(fu_STR(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };

    {
        /*MOV*/ fu_STR path_1 = ((from + "fu/lib/"_fu) + name);
        const bool exists = (size_ny0gyQ9a(fu_STR(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };
    if (ends_YP7BiSZZ(name, ".fu"_fu))
    {
        const int ext = (name.size() - 3);
        int dir = 0;
        for (int i = ext; i-- > 0; )
        {
            if (name[i] == '/')
            {
                dir = (i + 1);
                break;
            };
        };
        fu_STR name_1 = (((fu::get_view(name, 0, dir) + fu::get_view(name, dir, ext)) + '/') + fu::get_view(name, dir, name.size()));

        {
            /*MOV*/ fu_STR path_1 = (from + name_1);
            const bool exists = (size_ny0gyQ9a(fu_STR(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };

        {
            /*MOV*/ fu_STR path_1 = ((from + "lib/"_fu) + name_1);
            const bool exists = (size_ny0gyQ9a(fu_STR(path_1)) >= 0ll);
            if (exists)
                return /*NRVO*/ path_1;

        };
        /*MOV*/ fu_STR path_1 = ((from + "fu/lib/"_fu) + name_1);
        const bool exists = (size_ny0gyQ9a(fu_STR(path_1)) >= 0ll);
        if (exists)
            return /*NRVO*/ path_1;

    };
    fu_STR fallback = dirname_KqRBcvmh(from);
    if (!fallback || (fallback.size() >= from.size()))
    {
        return fu_STR{};
    }
    else
        return resolveFile_RloYOv0n(fallback, name, ctx);

}

                                #ifndef DEF_update_LYVBc7OUHZd
                                #define DEF_update_LYVBc7OUHZd
inline bool update_LYVBc7OU(const fu_STR& item, const fu_STR& extra, s_Map_gb6sFwC7IKi& _)
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
    return update_LYVBc7OU(key, value, _);
}
                                #endif

static fu_STR resolveFile_RloYOv0n(const fu_STR& from, const fu_STR& name, s_Context& ctx)
{
    fu_STR path = (from + name);
    const fu_STR& cached = get_7E0rjAmp(ctx.fuzzy, path);
    if (cached)
    {
        if (cached == "\v"_fu)
        {
            return fu_STR{};
        }
        else
            return fu_STR(cached);

    }
    else
    {
        /*MOV*/ fu_STR resolve = tryResolve_VstYn9wN(path, from, name, ctx);
        set_SN0lxEjd(ctx.fuzzy, path, (resolve ? fu_STR(resolve) : "\v"_fu));
        return /*NRVO*/ resolve;
    };
}

                                #ifndef DEF_has_IAp1oy9CzB1
                                #define DEF_has_IAp1oy9CzB1
inline bool has_IAp1oy9C(fu::view<fu_STR> keys, fu::view<char> item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        /*MOV*/ const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_YP7BiSZZ(keys[i], item);
        if (cmp == 0)
            return true;
        else if (cmp < 0)
            lo = (i + 1);
        else
            hi = int(i);

    };
    return false;
}
                                #endif

                                #ifndef DEF_has_7E0rjAmpTY2
                                #define DEF_has_7E0rjAmpTY2
inline bool has_7E0rjAmp(const s_Map_gb6sFwC7IKi& _, fu::view<char> key)
{
    return has_IAp1oy9C(_.keys, key);
}
                                #endif

fu_STR resolveFile_WPdR5TkH(const fu_STR& path, s_Context& ctx)
{
    const int fuzzy = find_8ObANk7r(path, '\v');
    if (fuzzy > 0)
    {
        fu_STR from = fu::slice(path, 0, fuzzy);
        fu_STR name = fu::slice(path, (fuzzy + 1));
        if (from && name && !has_8ObANk7r(name, '\v'))
        {
            /*MOV*/ fu_STR res = resolveFile_RloYOv0n(from, name, ctx);
            if (res)
                return /*NRVO*/ res;
            else
            {
                /*MOV*/ fu_STR prepopulated = (from + name);
                if (has_7E0rjAmp(ctx.files, prepopulated))
                    return /*NRVO*/ prepopulated;

            };
        };
    };
    return fu_STR(path);
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

                                #ifndef DEF_x21x3D_YP7BiSZZZOd
                                #define DEF_x21x3D_YP7BiSZZZOd
inline bool operator!=(fu::view<char> a, fu::view<char> b)
{
    return !!x3Cx3E_YP7BiSZZ(a, b);
}
                                #endif

fu_STR resolveFile_x_adz9iQmO(const fu_STR& path, const s_Context& ctx)
{
    /*MOV*/ fu_STR clean = replace_IPuENzWd(path, "\v"_fu, fu::view<char>{});
    const fu_STR& match = get_7E0rjAmp(ctx.fuzzy, clean);
    if (match && (match != "\v"_fu))
        return fu_STR(match);
    else
        return /*NRVO*/ clean;

}

fu_STR getFile_WPdR5TkH(fu_STR&& path, s_Context& ctx)
{
    const fu_STR& cached = get_7E0rjAmp(ctx.files, path);
    if (cached)
    {
        if (cached == "\v"_fu)
        {
            return fu_STR{};
        }
        else
            return fu_STR(cached);

    }
    else
    {
        /*MOV*/ fu_STR read = read_ny0gyQ9a(fu_STR(path));
        set_SN0lxEjd(ctx.files, path, (read ? fu_STR(read) : "\v"_fu));
        return /*NRVO*/ read;
    };
}

s_Module& getModule_WPdR5TkH(const fu_STR& fname, s_Context& ctx)
{
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        if (ctx.modules[i].fname == fname)
            return ctx.modules.mutref(i);

    };
    const int i_1 = ctx.modules.size();
    ctx.modules.push(s_Module { int(i_1), fu_STR(fname), s_ModuleInputs{}, s_ModuleOrder{}, s_ModuleOutputs{}, s_ModuleStats{} });
    return ctx.modules.mutref(i_1);
}

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

void setModule_IqHncgDn(const s_Module& module, s_Context& ctx)
{
    s_Module& current = ctx.modules.mutref(module.modid);
    if (current.fname == module.fname)
        current = clone_jFwbe1Io(module);
    else
        fu_ASSERT();

}

const s_Struct& lookupStruct_3ZVvGB0M(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    const s_StructCanon scp = parseStructCanon_axp26pRU(type.vtype.canon);
    if (scp.modid == module.modid)
    {
        const s_Struct* _0;
        return *(_0 = &(module.out.types[scp.index])) ? *_0 : fu_ASSERT();
    }
    else
    {
        const s_Struct* _1;
        return *(_1 = &(ctx.modules[scp.modid].out.types[scp.index])) ? *_1 : fu_ASSERT();
    };
}

bool is_trivial_3ZVvGB0M(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return is_primitive_VS9ogqN5(type) || (isStruct_jHe6RDpE(type) ? lookupStruct_3ZVvGB0M(type, module, ctx).all_triv : (*(const bool*)fu::NIL));
}

const s_Struct& tryLookupStruct_3ZVvGB0M(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return isStruct_jHe6RDpE(type) ? lookupStruct_3ZVvGB0M(type, module, ctx) : (*(const s_Struct*)fu::NIL);
}

const fu_VEC<int>& lookupTypeImports_3ZVvGB0M(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct_3ZVvGB0M(type, module, ctx).imports;
}

const fu_VEC<s_Target>& lookupTypeConverts_3ZVvGB0M(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    return tryLookupStruct_3ZVvGB0M(type, module, ctx).converts;
}

const s_Struct& tryLookupStructOrUserPrimitive_3ZVvGB0M(const s_Type& type, const s_Module& module, const s_Context& ctx)
{
    if (isStruct_jHe6RDpE(type) || (basePrimPrefixLen_1NgzHTh0(type.vtype.canon) < type.vtype.canon.size()))
        return lookupStruct_3ZVvGB0M(type, module, ctx);
    else
        return (*(const s_Struct*)fu::NIL);

}

const fu_STR& getModuleSrc_i6qog7jy(const int modid, const s_Context& ctx)
{
    return ctx.modules[modid].in.src;
}

                                #ifndef DEF_split_6uHUDn2hRFg
                                #define DEF_split_6uHUDn2hRFg
inline void split_6uHUDn2h(const fu_STR& str, fu::view<char> sep, fu_VEC<fu_STR>& result)
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
    split_6uHUDn2h(str, sep, result);
    return /*NRVO*/ result;
}
                                #endif

                                #ifndef DEF_max_gcxVH86XFM7
                                #define DEF_max_gcxVH86XFM7
inline int max_gcxVH86X(const int a, const int b)
{
    if ((a >= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_min_gcxVH86XFM7
                                #define DEF_min_gcxVH86XFM7
inline int min_gcxVH86X(const int a, const int b)
{
    if ((a <= b))
        return a;
    else
        return b;

}
                                #endif

                                #ifndef DEF_DIM
                                #define DEF_DIM
extern const fu_STR DIM;
                                #endif

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_RESET
                                #define DEF_RESET
extern const fu_STR RESET;
                                #endif

                                #ifndef DEF_BAD
                                #define DEF_BAD
extern const fu_STR BAD;
                                #endif

fu_STR formatCodeSnippet_t7Xwu1LT(const fu_STR& src, const s_Token& start, const s_Token& end, const int extraLines)
{
    fu_VEC<fu_STR> lines = split_0uwO0NUH(src, "\n"_fu);
    /*MOV*/ int l_start = ((start.line - extraLines) - 1);
    int l_end = (end.line + extraLines);
    l_start = max_gcxVH86X(l_start, 0);
    l_end = min_gcxVH86X(l_end, lines.size());
    /*MOV*/ fu_STR result {};
    for (int i = int(l_start); i < l_end; i++)
    {
        if ((i < (start.line - 1)) || (i >= end.line))
        {
            result += (DIM + "      | "_fu);
        }
        else
        {
            fu_STR margin = x7E_YP7BiSZZ(fu::i64dec((i + 1)), " | "_fu);
            while (margin.size() < 8)
                margin = (" "_fu + margin);

            result += margin;
        };
        fu_STR line { lines[i] };
        if (i == (end.line - 1))
        {
            const int c0 = max_gcxVH86X((end.col - 1), 0);
            const int c1 = min_gcxVH86X((c0 + end.value.size()), line.size());
            line.splice(c1, 0, RESET);
            line.splice(c0, 0, BAD);
        };
        result += line;
        if ((i < (start.line - 1)) || (i >= end.line))
            result += RESET;

        result += "\n"_fu;
    };
    return /*NRVO*/ result;
}

fu_STR formatCodeSnippet_MxvshLCw(const s_TokenIdx& to, s_TokenIdx&& from, const s_Context& ctx)
{
    const fu_STR& src = getModuleSrc_i6qog7jy(to.modid, ctx);
    const s_Token& start = _token_oqTaHNkG((from ? from : to), ctx);
    const s_Token& end = _token_oqTaHNkG(to, ctx);
    return formatCodeSnippet_t7Xwu1LT(src, start, end, 2);
}

fu_STR getShortModuleName_hDYH9Tpk(const fu_STR& fname)
{
    const int end = (fname.size() - 3);
    bool found = false;
    for (int i = end; i-- > 0; )
    {
        const char c = fname[i];
        if (c != '/')
            continue;
        else if (found)
            return fu::slice(fname, (i + 1), end);
        else
            found = true;

    };
    fu_ASSERT();
}

#endif
