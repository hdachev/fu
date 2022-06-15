#include <cstdint>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/print.h>
#include <fu/decstr.h>
#include <fu/default.h>
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
s_Module& getModule_WPdR5TkH(const fu_STR&, s_Context&);
fu_STR getFile_WPdR5TkH(fu_STR&&, s_Context&);
s_ModuleStat ModuleStat_now_pUbtfzLn();
s_LexerOutput lex_3z7oWPeJ(const fu_STR&, fu::view<char>);
s_ParserOutput parse_s7vuAgZz(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&);
s_ModuleStat operator-(const s_ModuleStat&, const s_ModuleStat&);
void setModule_IqHncgDn(const s_Module&, s_Context&);
fu_STR resolveFile_WPdR5TkH(const fu_STR&, s_Context&);
static s_ModuleOrder compile_lexParseDeps_rasidNMT(const fu_STR&, const fu_STR&, s_Context&, const s_Options&);
s_SolverOutput solve_88f7wJ3Z(const s_Context&, s_Module&, const s_Options&);
void inspect_ccjqvemK(const s_Module&);
s_CodegenOutput cpp_codegen_NCKyO7IL(const s_Module&, const s_Context&);
fu_STR get_1w6Ekz7Y(fu_STR&&);
int64_t size_ny0gyQ9a(fu_STR&&);
double hr_CPFg3qvV();
void operator+=(s_ModuleStat&, const s_ModuleStat&);
void ModuleStat_print_Juw13ven(const s_ModuleStat&, const fu_STR&, fu::view<char>);
void build_E7FDvIUS(fu_STR&&, fu::view<char>, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, fu_STR&&, const fu_STR&, fu::view<char>, const fu_STR&, bool, bool, bool, const fu_VEC<fu_STR>&, const fu_VEC<fu_STR>&, const s_Context&);

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

#ifndef fu_NO_fdefs

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

static s_ModuleOrder compile_lexParseDeps_rasidNMT(const fu_STR& fname, const fu_STR& via, s_Context& ctx, const s_Options& options)
{
    const s_Module& module = getModule_WPdR5TkH(fname, ctx);
    if (module.in)
    {
        if (module.order)
            return s_ModuleOrder((module.order ? module.order : fu::fail("BUG: !!module.in but !module.order"_fu)));
        else
            fu::fail((((("import circle: `"_fu + fname) + "\n\t<- "_fu) + via) + "`."_fu));

    }
    else
    {
        /*MOV*/ s_Module module_1 = clone_jFwbe1Io(module);
        if (module_1.out)
            fu::fail("BUG: !!module.out"_fu);
        else
        {
            fu_STR _0 {};
            /*MOV*/ fu_STR src = ((_0 = getFile_WPdR5TkH(fu_STR(fname), ctx)) ? static_cast<fu_STR&&>(_0) : fu::fail(((("import badfile: `"_fu + via) + fname) + "`."_fu)));
            const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
            /*MOV*/ s_LexerOutput lexer_result = lex_3z7oWPeJ(src, fname);
            const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
            /*MOV*/ s_ParserOutput parser_result = parse_s7vuAgZz(module_1.modid, fname, src, lexer_result.tokens, options);
            const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
            s_LexerOutput _1 {};
            module_1.in = (_1 = static_cast<s_LexerOutput&&>(lexer_result), s_ModuleInputs { static_cast<fu_STR&&>(src), static_cast<s_LexerOutput&&>(_1), static_cast<s_ParserOutput&&>(parser_result) });
            module_1.stats.lex = (stat1 - stat0);
            module_1.stats.parse = (stat2 - stat1);
            setModule_IqHncgDn(module_1, ctx);
            if (!module_1.order || fu::fail("BUG: !!module.order"_fu))
            {
                module_1.order.dep_depth = 1;
                fu_VEC<fu_STR> fuzimports { module_1.in.parse.fuzimports };
                for (int i = 0; i < fuzimports.size(); i++)
                {
                    const s_ModuleOrder order = compile_lexParseDeps_rasidNMT(resolveFile_WPdR5TkH(fuzimports[i], ctx), (fname + (via ? ("\n\t<- "_fu + via) : fu_STR{})), ctx, options);
                    if ((module_1.order.dep_depth <= order.dep_depth))
                        module_1.order.dep_depth = (order.dep_depth + 1);

                };
                setModule_IqHncgDn(module_1, ctx);
            };
            return s_ModuleOrder((module_1.order ? module_1.order : fu::fail("BUG: !module.order after lexParseDeps."_fu)));
        };
    };
}

                                #ifndef DEF_grow_if_oob_eq5Lu6Hwt31
                                #define DEF_grow_if_oob_eq5Lu6Hwt31
inline fu_VEC<int>& grow_if_oob_eq5Lu6Hw(fu_VEC<fu_VEC<int>>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

                                #ifndef DEF_join_6nodBuv9xv9
                                #define DEF_join_6nodBuv9xv9
inline fu_VEC<int> join_6nodBuv9(fu::view<fu_VEC<int>> a)
{
    if (a.size() < 2)
        return fu_VEC<int>((a.size() ? a[0] : (*(const fu_VEC<int>*)fu::NIL)));
    else
    {
        const int N = 0;
        int size = a[0].size();
        for (int i = 1; i < a.size(); i++)
            size += (N + a[i].size());

        /*MOV*/ fu_VEC<int> res {};
        res.grow<false>(size);
        fu::view<int> head = a[0];
        size = head.size();
        fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
        for (int i_1 = 1; i_1 < a.size(); i_1++)
        {
            fu::view<int> range = a[i_1];
            size += N;
            fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
            size += range.size();
        };
        return /*NRVO*/ res;
    };
}
                                #endif

                                #ifndef DEF_DEV_PrintAST
                                #define DEF_DEV_PrintAST
inline constexpr unsigned DEV_PrintAST = (0x1u << 1u);
                                #endif

static void compile_solveCodegen_wyDw9c3y(s_Module& module, const s_Options& options, const s_Context& ctx)
{
    if (module.out)
        fu::fail("compile_solveCodegen: !!module.out"_fu);
    else
    {
        const s_ModuleStat stat0 = ModuleStat_now_pUbtfzLn();
        module.out.solve = solve_88f7wJ3Z(ctx, module, options);
        if (options.dev & DEV_PrintAST)
            inspect_ccjqvemK(module);

        const s_ModuleStat stat1 = ModuleStat_now_pUbtfzLn();
        module.out.cpp = cpp_codegen_NCKyO7IL(module, ctx);
        const s_ModuleStat stat2 = ModuleStat_now_pUbtfzLn();
        module.stats.solve = (stat1 - stat0);
        module.stats.codegen = (stat2 - stat1);
    };
}

                                #ifndef DEF_each_AzKegufdVAk
                                #define DEF_each_AzKegufdVAk
inline void each_AzKegufd(fu::view<int> a, s_Context& ctx, const s_Options& options)
{
    for (int i = 0; i < a.size(); i++)
    {
        const int modid = a[i];
        const s_Module& module = ctx.modules[modid];
        if (!module.out)
        {
            s_Module module_1 = clone_jFwbe1Io(module);
            compile_solveCodegen_wyDw9c3y(module_1, options, ctx);
            setModule_IqHncgDn(module_1, ctx);
        };
    };
}
                                #endif

void compile_rasidNMT(const fu_STR& fname, const fu_STR& via, s_Context& ctx, const s_Options& options)
{
    compile_lexParseDeps_rasidNMT(fname, via, ctx, options);
    fu_VEC<fu_VEC<int>> dep_order {};
    for (int i = 0; i < ctx.modules.size(); i++)
    {
        const s_Module& module = ctx.modules[i];
        grow_if_oob_eq5Lu6Hw(dep_order, module.order.dep_depth) += int(module.modid);
    };
    ctx.dep_order = join_6nodBuv9(dep_order);
    for (int i_1 = 0; i_1 < dep_order.size(); i_1++)
    {
        fu::view<int> modids = dep_order[i_1];
        each_AzKegufd(modids, ctx, options);
    };
}

                                #ifndef DEF_if_last_XKihkJM18Pe
                                #define DEF_if_last_XKihkJM18Pe
inline char if_last_XKihkJM1(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR absdir_0ex5iJt8(const fu_STR& a)
{
    if (if_last_XKihkJM1(a) == '/')
        return fu_STR(a);
    else
        return a + '/';

}

static const fu_STR HOME fu_INIT_PRIORITY(1012) = absdir_0ex5iJt8(get_1w6Ekz7Y("HOME"_fu));

                                #ifndef DEF_x7E_YP7BiSZZZOd
                                #define DEF_x7E_YP7BiSZZZOd
inline fu_STR x7E_YP7BiSZZ(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

fu_STR locate_FUDIR_LI96RGZs()
{
    /*MOV*/ fu_STR dir = (HOME + "fu/"_fu);
    fu_STR fn = (dir + "src/compiler.fu"_fu);
    const int64_t fs = size_ny0gyQ9a(fu_STR(fn));
    if (fs > 1000ll)
        return /*NRVO*/ dir;
    else
        fu::fail(x7E_YP7BiSZZ((("Bad compiler.fu: "_fu + fn) + ": "_fu), fu::i64dec(fs)));

}

                                #ifndef DEF_FUDIR
                                #define DEF_FUDIR
extern const fu_STR FUDIR fu_INIT_PRIORITY(1012) = locate_FUDIR_LI96RGZs();
                                #endif

                                #ifndef DEF_DEFAULT_WORKSPACE
                                #define DEF_DEFAULT_WORKSPACE
extern const fu_STR DEFAULT_WORKSPACE fu_INIT_PRIORITY(1012) = (FUDIR + "build-cpp/"_fu);
                                #endif

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE;
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

void compile_and_build_iVxREEwY(const fu_STR& fname, const fu_STR& dir_wrk, const fu_STR& bin, const fu_STR& dir_obj, const fu_STR& dir_src, const fu_STR& dir_cpp, fu::view<char> scheme, const bool run, const bool shared, const bool hotswap, const fu_VEC<fu_STR>& flags_cc, const fu_VEC<fu_STR>& flags_ld)
{
    // Hoisted:
    fu_STR x;
    fu_STR x_1;
    fu_STR x_2;
    fu_STR x_3;

    s_Context ctx = clone_eixx2GVS(CTX_PRELUDE);
    const s_Options options {};

    {
        fu_STR* BL_2_v;
        fu::println((fu::slate<2, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            x = "COMPILE "_fu;
            BL_2_v = &(x);
        (void)0;}), *BL_2_v)), fu_STR(fname) }));
        const double t0 = hr_CPFg3qvV();
        compile_rasidNMT(fname, (*(const fu_STR*)fu::NIL), ctx, options);
        const double t1 = hr_CPFg3qvV();
        const double tt = (t1 - t0);
        if ((t1 - t0) > 0.025)
        {
            s_ModuleStat lex {};
            s_ModuleStat parse {};
            s_ModuleStat solve {};
            s_ModuleStat codegen {};
            fu::view<s_Module> m = ctx.modules;
            for (int i = 0; i < m.size(); i++)
            {
                lex += m[i].stats.lex;
                parse += m[i].stats.parse;
                solve += m[i].stats.solve;
                codegen += m[i].stats.codegen;
            };
            ModuleStat_print_Juw13ven(lex, "\n    lex "_fu, fu::view<char>{});
            ModuleStat_print_Juw13ven(parse, "  parse "_fu, fu::view<char>{});
            ModuleStat_print_Juw13ven(solve, "  solve "_fu, fu::view<char>{});
            ModuleStat_print_Juw13ven(codegen, "codegen "_fu, "\n"_fu);
        };
        fu_STR* BL_6_v;
        fu_STR* BL_7_v;
        fu_STR* BL_8_v;
        fu::println((fu::slate<3, fu_STR> { static_cast<fu_STR&&>((__extension__ (
        {
            x_1 = "        "_fu;
            BL_6_v = &(x_1);
        (void)0;}), *BL_6_v)), static_cast<fu_STR&&>((__extension__ (
        {
            x_2 = fu::f64dec(tt);
            BL_7_v = &(x_2);
        (void)0;}), *BL_7_v)), static_cast<fu_STR&&>((__extension__ (
        {
            x_3 = "s\n"_fu;
            BL_8_v = &(x_3);
        (void)0;}), *BL_8_v)) }));
    };
    build_E7FDvIUS(fu_STR(dir_wrk), FUDIR, fu_STR{}, fu_STR(bin), fu_STR(dir_obj), fu_STR(dir_src), fu_STR(dir_cpp), fname, scheme, (*(const fu_STR*)fu::NIL), run, shared, hotswap, flags_cc, flags_ld, ctx);
}

#endif
