
#include <cstdint>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/int.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/sort.h>
#include <fu/vec/view_assign.h>
#include <fu/view.h>
#include <utility>

struct s_ArgWrite;
struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Map_OZkl;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_ScopeMemo;
struct s_ScopeSkip;
struct s_ScopeSkipMemos;
struct s_SolvedNode;
struct s_SolvedNodeData;
struct s_SolverOutput;
struct s_Struct;
struct s_TEMPVAR;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;
struct s_cg_Blockval;
struct s_cg_CurrentFn;

[[noreturn]] fu::never FAIL(fu_STR&&, const s_TokenIdx&, const s_Context&);
bool Region_isArg(const s_Region&);
bool add_once(s_BitSet&, int);
bool hasBinary(fu::view<char>);
bool hasIdentifierChars(fu::view<char>);
bool hasPostfix(fu::view<char>);
bool hasUnary(fu::view<char>);
bool isStruct(const s_Type&);
bool is_bool(const s_Type&);
bool is_byte(const s_Type&);
bool is_floating_pt(const s_Type&);
bool is_integral(const s_Type&);
bool is_mutref(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_never(const s_Type&);
bool is_primitive(const s_Type&);
bool is_ref(const s_Type&);
bool is_rx_copy(const s_Type&);
bool is_trivial(const s_Type&, const s_Module&, const s_Context&);
bool is_unsigned(const s_Type&);
bool is_void(const s_Type&);
bool maybe_nonzero(const s_Type&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool type_isArray(const s_Type&);
bool type_isZST(const s_Type&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
fu_STR ID(const fu_STR&);
int MODID(const s_Module&);
int structIndex(fu::view<char>);
s_Intlit Intlit(fu::view<char>);
s_Region Region_fromArgIndex(int);
s_Target target(const s_ScopeItem&);
s_Target tryParseClosureID(fu::view<char>, int);
s_Type clear_refs(s_Type&&);
s_Type clear_sliceable(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_sliceable(const s_Type&);
static bool add_once(fu_VEC<s_BitSet>&, const s_Target&);
static fu_STR cgAnd(const s_SolvedNode&, int, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR cgAnd(fu::view<s_SolvedNode>, const s_Type&, int, fu::view<char>, const s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR cgBlock(const s_SolvedNode&, int, fu::view<char>, const s_Module&, const s_Context&, s_cg_CurrentFn&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR cgFn(const s_SolvedNode&, int, fu_STR&, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, int&, s_BitSet&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR cgIf(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR cgMoveOrClone(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_cg_CurrentFn&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR cgNode(const s_SolvedNode&, fu::view<char>, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR cgTryCatch(const s_SolvedNode&, const s_Module&, const s_Context&, s_cg_CurrentFn&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR collectDedupes(fu_VEC<fu_STR>&&);
static fu_STR typeAnnot(const s_Type&, int, fu_VEC<fu_STR>&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, const s_cg_CurrentFn&);
static fu_STR via(s_TEMPVAR&, const s_Type&, const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<int>&, fu_VEC<int>&, fu_VEC<s_BitSet>&);
static fu_STR via(s_TEMPVAR&, const s_Type&, fu::view<char>, fu_VEC<fu_STR>&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&);
static fu_STR& ARG(int, fu_VEC<fu_STR>&);
void HERE(const s_TokenIdx&, s_TokenIdx&);

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu_VEC<int> unity;
    fu_VEC<int> unity_because;
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
            || unity
            || unity_because
            || src
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

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    s_Target nodeown;
    int nodeidx;
    explicit operator bool() const noexcept
    {
        return false
            || nodeown
            || nodeidx
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Token
                                #define DEF_s_Token
struct s_Token
{
    fu_STR kind;
    fu_STR value;
    int idx0;
    int idx1;
    int line;
    int col;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || value
            || idx0
            || idx1
            || line
            || col
        ;
    }
};
                                #endif

                                #ifndef DEF_s_LexerOutput
                                #define DEF_s_LexerOutput
struct s_LexerOutput
{
    fu_STR fname;
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
            || fname
            || tokens
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

                                #ifndef DEF_s_Node
                                #define DEF_s_Node
struct s_Node
{
    fu_STR kind;
    int flags;
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
            || flags
            || value
            || items
            || token
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
            || modid
            || packed
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR name;
    s_Target target;
    fu_VEC<s_ScopeItem> items;
    fu_VEC<int> imports;
    fu_VEC<s_Target> converts;
    int flat_cnt;
    bool all_triv;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
            || flat_cnt
            || all_triv
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ValueType
                                #define DEF_s_ValueType
struct s_ValueType
{
    int quals;
    int modid;
    fu_STR canon;
    explicit operator bool() const noexcept
    {
        return false
            || quals
            || modid
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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    s_Type type;
    int flags;
    s_SolvedNode solved;
    unsigned status;
    int local_of;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || solved
            || status
            || local_of
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

                                #ifndef DEF_s_ArgWrite
                                #define DEF_s_ArgWrite
struct s_ArgWrite
{
    int nodeidx;
    int arg_position;
    explicit operator bool() const noexcept
    {
        return false
            || nodeidx
            || arg_position
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
    int flags;
    s_BitSet risk_free;
    s_ArgWrite written_via;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || risk_free
            || written_via
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ScopeMemo
                                #define DEF_s_ScopeMemo
struct s_ScopeMemo
{
    int items_len;
    int imports_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
            || imports_len
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
    fu_VEC<s_ScopeSkip> declash;
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || declash
            || imports
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
            || imports
            || scope_memo
            || scope_skip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
{
    fu_STR kind;
    int helpers;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || helpers
            || flags
            || value
            || items
            || token
            || type
            || target
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
    fu_VEC<s_Argument> args;
    s_Target spec_of;
    s_Template tEmplate;
    fu_VEC<s_SolvedNodeData> nodes;
    fu_VEC<s_Overload> locals;
    fu_VEC<s_ScopeItem> extra_items;
    fu_VEC<s_SolvedNode> callsites;
    explicit operator bool() const noexcept
    {
        return false
            || min
            || max
            || args
            || spec_of
            || tEmplate
            || nodes
            || locals
            || extra_items
            || callsites
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Scope
                                #define DEF_s_Scope
struct s_Scope
{
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_Overload> overloads;
    fu_VEC<s_Extended> extended;
    fu_VEC<int> imports;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    int pub_count;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || extended
            || imports
            || usings
            || converts
            || pub_count
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
    int notes;
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
    fu_VEC<int> deps;
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
            || deps
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
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Map_OZkl
                                #define DEF_s_Map_OZkl
struct s_Map_OZkl
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
    s_Map_OZkl files;
    s_Map_OZkl fuzzy;
    s_Context(const s_Context&) = delete;
    s_Context(s_Context&&) = default;
    s_Context& operator=(const s_Context&) = delete;
    s_Context& operator=(s_Context&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
            || fuzzy
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_Blockval
                                #define DEF_s_cg_Blockval
struct s_cg_Blockval
{
    s_Target label;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || label
            || ptrflip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_CurrentFn
                                #define DEF_s_cg_CurrentFn
struct s_cg_CurrentFn
{
    s_Target target;
    int numTEMPVARs;
    fu_VEC<fu_STR> TEMPVARs;
    fu_VEC<s_cg_Blockval> blockvals;
    s_Target can_break;
    s_Target can_cont;
    fu_VEC<fu_STR> _ids_used;
    fu_VEC<int> _ids_dedupe;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || numTEMPVARs
            || TEMPVARs
            || blockvals
            || can_break
            || can_cont
            || _ids_used
            || _ids_dedupe
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEMPVAR
                                #define DEF_s_TEMPVAR
struct s_TEMPVAR
{
    fu_STR annot;
    fu_STR id;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || annot
            || id
            || ptrflip
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Intlit
                                #define DEF_s_Intlit
struct s_Intlit
{
    fu::u8 base;
    fu::u8 minsize_i;
    fu::u8 minsize_u;
    fu::u8 minsize_f;
    bool sIgned;
    bool uNsigned;
    bool negative;
    uint64_t absval;
    fu_STR error;
    explicit operator bool() const noexcept
    {
        return false
            || base
            || minsize_i
            || minsize_u
            || minsize_f
            || sIgned
            || uNsigned
            || negative
            || absval
            || error
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

static const int M_STMT = (1 << 0);

static const int M_RETBOOL = (1 << 1);

static const int M_CONST = (1 << 2);

static const int M_RETVAL = (1 << 3);

static const int M_ARGUMENT = (1 << 4);

static const int M_RETURN = (1 << 5);

static const int M_FWDECL = (1 << 6);

static const int M_PARENS = (1 << 7);

static const int M_OPT_CURLIES = (1 << 8);

static const int M_LOOP_BODY = (1 << 9);

static const int M_MUTVAR = (1 << 10);

static const int M_MOVABLE = (1 << 11);

static const int M_MOVE = (1 << 12);

                                #ifndef DEFt_unless_oob_cxd2
                                #define DEFt_unless_oob_cxd2
inline const s_Extended& unless_oob_cxd2(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_cxd2(module.out.solve.scope.extended, (target.index - 1));

    if (target.modid < 0)
        return (*(const s_Extended*)fu::NIL);

    return unless_oob_cxd2(ctx.modules[target.modid].out.solve.scope.extended, (target.index - 1));
}

static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode& nid, const s_Module& module, const s_Context& ctx)
{
    return nid.nodeown ? EXT(nid.nodeown, module, ctx).nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

[[noreturn]] static fu::never fail(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu_STR(reason) : "Assertion failed."_fu)), _here, ctx);
}

static const s_Overload& GET(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (!(target.index > 0))
        fu_ASSERT();

    if (target.modid < 0)
        return module.out.solve.scope.extended[(-target.modid - 1)].locals[(target.index - 1)];

    const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
    return m.out.solve.scope.overloads[(target.index - 1)];
}

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEFt_only_Mzjf
                                #define DEFt_only_Mzjf
inline const s_SolvedNode& only_Mzjf(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static bool isFieldChain(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx)
{
    if (SolvedNodeData(node, module, ctx).kind != "call"_fu)
        return false;

    const s_Overload& t = GET(SolvedNodeData(node, module, ctx).target, module, ctx);
    if (t.kind == "field"_fu)
        return isFieldChain(only_Mzjf(SolvedNodeData(node, module, ctx).items), module, ctx);

    if (t.kind == "var"_fu)
        return true;

    return false;
}

                                #ifndef DEFt_add_9sek
                                #define DEFt_add_9sek
inline bool add_9sek(fu_VEC<fu_STR>& dest, const fu_STR& item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, item);
                return true;
            };
            return false;
        };
    };
    dest.push(item);
    return true;
}
                                #endif

static void include(const fu_STR& lib, fu_VEC<fu_STR>& _libs)
{
    add_9sek(_libs, lib);
}

static fu_STR annotateNever(fu_VEC<fu_STR>& _libs)
{
    include("<fu/never.h>"_fu, _libs);
    return "fu::never"_fu;
}

extern const s_Type t_byte;

static fu_STR annotateString(fu_VEC<fu_STR>& _libs)
{
    include("<fu/str.h>"_fu, _libs);
    return "fu_STR"_fu;
}

                                #ifndef DEFt_grow_if_oob_yL2h
                                #define DEFt_grow_if_oob_yL2h
inline s_BitSet& grow_if_oob_yL2h(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once(grow_if_oob_yL2h(bs, i), j);
}

static const s_Overload& try_GET(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    return target ? GET(target, module, ctx) : (*(const s_Overload*)fu::NIL);
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

static fu_STR declareStruct(fu::view<char> id, const s_Type& t, const s_Struct& s, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\nstruct "_fu) + id) + "\n{"_fu);
    fu_STR indent = "\n    "_fu;
    fu::view<s_ScopeItem> fields = s.items;
    for (int i = 0; i < fields.size(); i++)
    {
        const s_Overload& field = GET(target(fields[i]), module, ctx);
        if (!(field.kind == "field"_fu))
            fail(((((("Non-field struct item: "_fu + field.name) + " ("_fu) + field.kind) + ") in "_fu) + t.vtype.canon), _here, ctx);

        def += ((((indent + typeAnnot(field.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + " "_fu) + ID(field.name)) + ";"_fu);
    };
    if (!is_rx_copy(t))
    {
        def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
    }
    else if (try_GET(s.target, module, ctx).status & SS_TYPE_RECUR)
    {
        def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = default;"_fu);
        def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
        def += (((((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "& selfrec) { return *this = "_fu) + id) + "(selfrec); }"_fu);
    };
    def += "\n    explicit operator bool() const noexcept"_fu;
    def += "\n    {"_fu;
    def += "\n        return false"_fu;
    for (int i_1 = 0; i_1 < fields.size(); i_1++)
        def += ("\n            || "_fu + ID(fields[i_1].id));

    def += "\n        ;"_fu;
    def += "\n    }"_fu;
    return def + "\n};\n                                #endif\n"_fu;
}

static fu_STR typeAnnotBase(const s_Type& type, const int mode, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive(type))
    {
        if (c == "i32"_fu)
            return "int"_fu;

        if (c == "i16"_fu)
            return "short"_fu;

        if (c == "u32"_fu)
            return "unsigned"_fu;

        if (c == "bool"_fu)
            return "bool"_fu;

        if (c == "f32"_fu)
            return "float"_fu;

        if (c == "f64"_fu)
            return "double"_fu;

        if (c == "byte"_fu)
            return "char"_fu;

        if ((c == "i8"_fu) || (c == "u8"_fu))
        {
            include("<fu/int.h>"_fu, _libs);
            return "fu::"_fu + c;
        };
        include("<cstdint>"_fu, _libs);
        if (c == "i64"_fu)
            return "int64_t"_fu;

        if (c == "u16"_fu)
            return "uint16_t"_fu;

        if (c == "u32"_fu)
            return "uint32_t"_fu;

        if (c == "u64"_fu)
            return "uint64_t"_fu;

        fail("Unknown primitive."_fu, _here, ctx);
    };
    if (c == "void"_fu)
        return "void"_fu;

    if (c == "never"_fu)
        return annotateNever(_libs);

    s_Type arrayItem = tryClear_sliceable(type);
    if (arrayItem)
    {
        if (type_isArray(type) || !is_ref(type))
        {
            if (arrayItem == t_byte)
                return annotateString(_libs);

            fu_STR itemAnnot = typeAnnot(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            include("<fu/vec.h>"_fu, _libs);
            return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
        };
        fu_STR itemAnnot = typeAnnot(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        include("<fu/view.h>"_fu, _libs);
        if (is_mutref(type, _here, ctx) || (mode & M_MUTVAR))
            return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
        else
            return ("fu::view<"_fu + itemAnnot) + ">"_fu;

    };
    const s_Struct* _0;
    const s_Struct& s = (*(_0 = &(lookupStruct(type, module, ctx))) ? *_0 : fail(("TODO: "_fu + type.vtype.canon), _here, ctx));
    /*MOV*/ fu_STR id = ("s_"_fu + s.name);
    if (add_once(_tfwd, type.vtype.modid, structIndex(type.vtype.canon)))
    {
        _tfwd_src += (("struct "_fu + id) + ";\n"_fu);
        fu_STR decl = declareStruct(id, type, s, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn);
        _tdef += decl;
    };
    return /*NRVO*/ id;
}

static fu_STR typeAnnot(const s_Type& type, const int mode, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (type_isZST(type))
        return "int"_fu;

    /*MOV*/ fu_STR fwd = typeAnnotBase(type, mode, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (is_ref(type))
    {
        if (fu::lmatch(fwd, "fu::view"_fu))
            return /*NRVO*/ fwd;

        if (is_mutref(type, _here, ctx))
            return fwd + "&"_fu;

        if (is_primitive(type))
            return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

        if (mode & M_MOVABLE)
        {
            const s_Type& fnret = GET(s_Target { int(module.modid), int(_current_fn.target.index) }, module, ctx).type;
            if (!(is_trivial(fnret, module, ctx) || is_ref(fnret)))
                return fwd + "&"_fu;

        };
        return ("const "_fu + fwd) + "&"_fu;
    };
    if ((mode & M_ARGUMENT) && !is_primitive(type))
        return fwd + "&&"_fu;

    if ((mode & M_CONST) && is_trivial(type, module, ctx))
        return "const "_fu + fwd;

    return /*NRVO*/ fwd;
}

static fu_STR emitTEMPVAR(fu::view<char> annot, bool& ptrflip, const fu_STR& id, const fu_STR& expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu_STR id_1 = (id ? fu_STR(id) : x7E_OZkl("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu_STR cgClone(const s_Type& type, fu::view<char> src, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return ((typeAnnotBase(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src) + ")"_fu;
}

static fu_STR cgMove(const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_trivial(type, module, ctx) && is_rx_copy(type))
        return cgClone(type, src, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    return ((("static_cast<"_fu + typeAnnotBase(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "&&>("_fu) + src) + ")"_fu;
}

                                #ifndef DEFt_map_kzqR
                                #define DEFt_map_kzqR
inline fu_VEC<fu_STR> map_kzqR(fu::view<s_SolvedNode> a, int, const s_Module& module, const s_Context& ctx)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const fu_STR* _0;
        res.mutref(i) = (__extension__ (
        {
            const s_SolvedNode& i_1 = a[i];
            _0 = &(SolvedNodeData(i_1, module, ctx).kind);
        (void)0;}), *_0);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_join_VtCz
                                #define DEFt_join_VtCz
inline fu_STR join_VtCz(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_find_WqUX
                                #define DEFt_find_WqUX
inline int find_WqUX(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static fu_STR& ARG(const int i, fu_VEC<fu_STR>& item_src)
{
    return item_src.mutref(i);
}

static fu_STR REST(const int start, fu::view<fu_STR> item_src)
{
    /*MOV*/ fu_STR src {};
    for (int i = start; i < item_src.size(); i++)
    {
        if (i > start)
            src += ", "_fu;

        src += item_src[i];
    };
    return /*NRVO*/ src;
}

static fu_STR ooeWrap(const fu_STR& src, const fu_STR& ooe_header)
{
    return (ooe_header ? (((ooe_header + ", "_fu) + src) + ")"_fu) : fu_STR(src));
}

static fu_STR emitMethodCall(fu::view<char> id, fu_VEC<fu_STR>& item_src, const fu_STR& ooe_header)
{
    fu_STR _0 {};
    return ooeWrap(((_0 = ((ARG(0, item_src) + id) + "("_fu), (static_cast<fu_STR&&>(_0) + REST(1, item_src))) + ")"_fu), ooe_header);
}

static fu_STR emitPostfixOp(fu::view<char> op, fu_VEC<fu_STR>& item_src)
{
    return ARG(0, item_src) + op;
}

                                #ifndef DEFt_only_2Suj
                                #define DEFt_only_2Suj
inline const fu_STR& only_2Suj(fu::view<fu_STR> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

extern const s_Type t_u8;

static fu_STR emitBuiltin(fu::view<char> id, fu::view<fu_STR> args, const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = SolvedNodeData(node, module, ctx).type;
        const s_Type& input = SolvedNodeData(only_Mzjf(SolvedNodeData(node, module, ctx).items), module, ctx).type;
        fu_STR cast = typeAnnotBase(output, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        if (is_integral(input) && is_integral(output) && (is_unsigned(input) != is_unsigned(output)))
        {
            s_Type mid_t { (is_unsigned(input) ? output : input) };
            if (!(mid_t.vtype.canon[0] == 'i'))
                fail(fu_STR{}, _here, ctx);

            mid_t.vtype.canon.mutref(0) = 'u';
            if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
            {
                fu_STR inner = typeAnnotBase(mid_t, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                return ((((cast + '(') + inner) + '(') + only_2Suj(args)) + "))"_fu;
            };
        }
        else if (is_byte(input) && !is_byte(output))
        {
            fu_STR inner = typeAnnotBase(t_u8, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            return ((((cast + '(') + inner) + '(') + only_2Suj(args)) + "))"_fu;
        };
        return ((cast + '(') + only_2Suj(args)) + ')';
    };
    fail(("Unknown builtin: "_fu + id), _here, ctx);
}

static fu_STR emitFunctionCall(fu::view<char> id, fu::view<char> open, fu::view<char> close, fu::view<fu_STR> item_src, const fu_STR& ooe_header)
{
    return ooeWrap((((id + open) + REST(0, item_src)) + close), ooe_header);
}

                                #ifndef DEFt_last_AwjY
                                #define DEFt_last_AwjY
inline char last_AwjY(fu::view<char> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static bool binSkipParens(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;

    if (mode & M_PARENS)
    {
        if (last_AwjY(id) == '=')
        {
            if ((id == "=="_fu) || (id == "!="_fu))
                return true;

            return false;
        };
        return true;
    };
    return false;
}

static fu_STR emitBinaryOp(fu::view<char> op, fu::view<s_SolvedNode> args, const s_TokenIdx& _here, const s_Context& ctx, const int mode, const fu_STR& ooe_header, fu_VEC<fu_STR>& item_src)
{
    if (!(args.size() == 2))
        fail("args.len != 2"_fu, _here, ctx);

    if (binSkipParens(op, mode) && !ooe_header)
    {
        fu_STR _0 {};
        return (_0 = (((ARG(0, item_src) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_0) + ARG(1, item_src)));
    };
    fu_STR _1 {};
    return ooeWrap(((_1 = (((("("_fu + ARG(0, item_src)) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_1) + ARG(1, item_src))) + ")"_fu), ooe_header);
}

static fu_STR cgDefault(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_mutref(type, _here, ctx))
        fail("Cannot definit mutrefs."_fu, _here, ctx);

    if (is_ref(type))
    {
        fu_STR annot = typeAnnot(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        if (fu::lmatch(annot, "fu::view"_fu))
            return annot + "{}"_fu;

        include("<fu/default.h>"_fu, _libs);
        return ("(*(const "_fu + typeAnnot(clear_refs(s_Type(type)), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "*)fu::NIL)"_fu;
    };
    return typeAnnot(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "{}"_fu;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

extern const int FN_ARGS_BACK;

extern const int F_OOE_RTL;

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline constexpr int F_POSTFIX = (1 << 3);
                                #endif

static bool isOp(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    const int flags = GET(target, module, ctx).flags;
    if (flags & F_OOE_RTL)
        return true;

    if (!(flags & F_OPERATOR))
        return false;

    fu::view<s_Argument> args = EXT(target, module, ctx).args;
    if (args.size() > 2)
        return false;

    if (GET(target, module, ctx).kind == "__native"_fu)
        return true;

    fu::view<char> name = GET(target, module, ctx).name;
    if (args.size() > 1)
        return hasBinary(name);

    if (flags & F_POSTFIX)
        return hasPostfix(name);

    return hasUnary(name);
}

static fu_STR valid_operator(const fu_STR& str)
{
    int start = 0;
    bool some = false;
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
        {
            if (!some)
                start = (i + 1);
            else
                return fu::slice(str, start, i);

        }
        else
            some = true;

    };
    return (start ? fu::slice(str, start) : fu_STR(str));
}

static char hex(const unsigned x)
{
    return ((x < 10u) ? char((unsigned(fu::u8('0')) + x)) : char((unsigned(fu::u8('A')) + (x - 10u))));
}

static fu_STR xHH(const unsigned c)
{
    return ("x"_fu + hex(((c >> 4u) & 0xfu))) + hex(((c >> 0u) & 0xfu));
}

static fu_STR valid_identifier(fu_STR&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
            continue;

        str = ((fu::get_view(str, 0, i) + xHH(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1), str.size()));
    };
    return ID(str);
}

static fu_STR fnID(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET(target, module, ctx);
    const fu_STR& id = (overload.name ? overload.name : fail(fu_STR{}, _here, ctx));
    return (isOp(target, module, ctx) ? ("operator"_fu + valid_operator(id)) : valid_identifier(fu_STR(id)));
}

static fu_STR fnLinkage(const s_Overload& overload)
{
    return ((is_never(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!(overload.flags & F_PUB) ? "static "_fu : fu_STR{});
}

                                #ifndef DEF_F_ARG
                                #define DEF_F_ARG
inline constexpr int F_ARG = (1 << 9);
                                #endif

                                #ifndef DEF_F_MOVED_FROM
                                #define DEF_F_MOVED_FROM
inline constexpr int F_MOVED_FROM = (1 << 11);
                                #endif

                                #ifndef DEF_F_UNUSED
                                #define DEF_F_UNUSED
inline constexpr int F_UNUSED = (1 << 10);
                                #endif

static fu_VEC<fu_STR>& _ids_used(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu_VEC<int>& _ids_dedupe(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEFt_grow_if_oob_xJq8
                                #define DEFt_grow_if_oob_xJq8
inline int& grow_if_oob_xJq8(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR localID(const s_Target& target, const bool dedupe, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET(target, module, ctx);
    /*MOV*/ fu_STR id { o.name };
    const s_Target t = tryParseClosureID(id, MODID(module));
    if (t)
        id = GET(t, module, ctx).name;

    id = ID(id);
    if (o.local_of)
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                fu_STR candidate = (dupes ? x7E_OZkl((id + '_'), fu::i64dec(dupes)) : fu_STR(id));
                for (int i = 0; i < _ids_used(_current_fn).size(); i++)
                {
                    if (_ids_used(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto L_01;
                    };
                };
                _ids_used(_current_fn) += candidate;
                break;
              } L_01:;
            };
            if (dupes)
                grow_if_oob_xJq8(_ids_dedupe(_current_fn), target.index) = dupes;

        };
        const int dupes = ((_ids_dedupe(_current_fn).size() > target.index) ? _ids_dedupe(_current_fn)[target.index] : (*(const int*)fu::NIL));
        if (dupes)
            return x7E_OZkl((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

                                #ifndef DEF_F_TODO_FIX_RRET
                                #define DEF_F_TODO_FIX_RRET
inline constexpr int F_TODO_FIX_RRET = (1 << 27);
                                #endif

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

                                #ifndef DEFt_join_9sek
                                #define DEFt_join_9sek
inline fu_STR join_9sek(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    /*MOV*/ fu_STR res {};
    res.grow<false>(size);
    fu::view<char> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<char> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return /*NRVO*/ res;
}
                                #endif

static fu_STR binding(const s_SolvedNode& node, const bool doInit, const bool forceMut, const bool forceValue, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> _tv0 {};
    if (!_current_fn.target.index)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (!_current_fn.target.index)
        std::swap(_tv0, _current_fn.TEMPVARs););
    const s_Overload& overload = (SolvedNodeData(node, module, ctx).target ? GET(SolvedNodeData(node, module, ctx).target, module, ctx) : (*(const s_Overload*)fu::NIL));
    const int isArg = (overload.flags & F_ARG);
    s_Type node_type = (forceValue ? clear_refs(s_Type(SolvedNodeData(node, module, ctx).type)) : s_Type(SolvedNodeData(node, module, ctx).type));
    /*MOV*/ fu_STR annot = typeAnnot(node_type, ((((!forceMut && !is_mutref(overload.type, _here, ctx) ? M_CONST : (*(const int*)fu::NIL)) | (isArg ? M_ARGUMENT : (*(const int*)fu::NIL))) | (is_mutref(overload.type, _here, ctx) ? M_MUTVAR : (*(const int*)fu::NIL))) | ((overload.flags & F_MOVED_FROM) ? M_MOVABLE : (*(const int*)fu::NIL))), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (!SolvedNodeData(node, module, ctx).target)
        return /*NRVO*/ annot;

    const int isUnused = (overload.flags & F_UNUSED);
    if (isArg && isUnused)
        return /*NRVO*/ annot;

    fu_STR id = localID(SolvedNodeData(node, module, ctx).target, true, module, ctx, _current_fn);
    /*MOV*/ fu_STR head = (((annot ? annot : fail(fu_STR{}, _here, ctx)) + " "_fu) + id);
    if (isUnused)
        head = ("[[maybe_unused]] "_fu + head);

    if (GET(SolvedNodeData(node, module, ctx).target, module, ctx).flags & F_TODO_FIX_RRET)
        head = ("/*RRET*/ "_fu + head);

    if (GET(SolvedNodeData(node, module, ctx).target, module, ctx).flags & F_MOVED_FROM)
        head = ("/*MOV*/ "_fu + head);

    if (!doInit || isArg)
        return /*NRVO*/ head;

    const s_SolvedNode init = (SolvedNodeData(node, module, ctx).items ? s_SolvedNode(SolvedNodeData(node, module, ctx).items[LET_INIT]) : s_SolvedNode{});
    if (init)
    {
        if ((SolvedNodeData(init, module, ctx).kind == "definit"_fu) && !is_ref(SolvedNodeData(init, module, ctx).type))
        {
            if (!(SolvedNodeData(init, module, ctx).type == SolvedNodeData(node, module, ctx).type))
                fail("what's this now"_fu, _here, ctx);

            return head + " {}"_fu;
        };
        const bool isCopy = ((SolvedNodeData(init, module, ctx).kind == "copy"_fu) && !is_ref(SolvedNodeData(node, module, ctx).type));
        fu_STR expr = cgNode((isCopy ? only_Mzjf(SolvedNodeData(init, module, ctx).items) : init), (("binding("_fu + id) + ")"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        if (!_current_fn.target.index && _current_fn.TEMPVARs)
        {
            fu_STR annot_1 = (fu::lmatch(annot, "const "_fu) ? fu::slice(annot, 6) : fu_STR(annot));
            fu_STR expr_1 = (isCopy ? cgClone(SolvedNodeData(init, module, ctx).type, expr, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) : fu_STR(expr));
            fu_STR iife = ((((((" { []() -> "_fu + annot_1) + " {\n    "_fu) + join_9sek(_current_fn.TEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr_1) + ";\n}() }"_fu);
            _current_fn.TEMPVARs.clear();
            return head + iife;
        };
        if (isCopy && !is_primitive(SolvedNodeData(node, module, ctx).type))
            return ((head + " { "_fu) + expr) + " }"_fu;

        return (head + " = "_fu) + expr;
    };
    return head + " {}"_fu;
}

static fu_STR cgFnSignature(const s_SolvedNode& fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, int& _hasMain, s_BitSet& _idef, fu_STR& _indent, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target& target = SolvedNodeData(fn, module, ctx).target;
    const s_Overload& overload = GET(target, module, ctx);
    fu::view<s_SolvedNode> items = SolvedNodeData(fn, module, ctx).items;
    fu_STR annot = typeAnnot((overload.type ? overload.type : fail(fu_STR{}, _here, ctx)), M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR id { overload.name };
    if (id == "main"_fu)
    {
        _hasMain = ((SolvedNodeData(fn, module, ctx).items.size() + FN_ARGS_BACK) ? 2 : 1);
        id = "fu_MAIN"_fu;
    }
    else
        id = fnID(SolvedNodeData(fn, module, ctx).target, module, ctx, _here);

    /*MOV*/ fu_STR src = ((((fnLinkage(overload) + annot) + " "_fu) + id) + "("_fu);
    for (int i = 0; i < (items.size() + FN_ARGS_BACK); i++)
    {
        if (i)
            src += ", "_fu;

        const s_SolvedNode* _0;
        src += binding((*(_0 = &(items[i])) ? *_0 : fail(fu_STR{}, _here, ctx)), bool{}, bool{}, bool{}, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    };
    if (overload.flags & F_POSTFIX)
    {
        if (!(overload.flags & F_OPERATOR))
            fu_ASSERT();

        src += ", /*postfix*/int "_fu;
    };
    src += ")"_fu;
    return /*NRVO*/ src;
}

static bool exprOK(fu::view<s_SolvedNode> nodes, const s_Module& module, const s_Context& ctx)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        fu::view<char> k = SolvedNodeData(n, module, ctx).kind;
        if ((k == "jump"_fu) || (k == "loop"_fu) || (k == "try"_fu) || (k == "catch"_fu) || (k == "let"_fu) || (k == "block"_fu))
            return false;

        if (((k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu)) && !exprOK(SolvedNodeData(n, module, ctx).items, module, ctx))
            return false;

    };
    return true;
}

static fu_VEC<fu_STR> cgNodes(fu::view<s_SolvedNode> nodes, const int mode, const fu_STR& trail, fu::view<char> debug, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    /*MOV*/ fu_VEC<fu_STR> result {};
    fu_VEC<fu_STR> _tv0 {};
    if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs););
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& node = nodes[i];
        const bool isTrail = (trail && (i == (nodes.size() - 1)) && !maybe_nonzero(SolvedNodeData(node, module, ctx).type));
        fu_STR src = (node ? cgNode(node, (debug + ".cgNodes"_fu), (isTrail ? (mode & ~M_STMT) : int(mode)), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : fu_STR{});
        if (!(src || (mode & M_STMT)))
            fail((((("cgNodes: empty output for Node(kind=`"_fu + SolvedNodeData(node, module, ctx).kind) + "` value=`"_fu) + SolvedNodeData(node, module, ctx).value) + "`)."_fu), _here, ctx);

        if ((mode & M_STMT) && _current_fn.TEMPVARs)
        {
            result += _current_fn.TEMPVARs;
            _current_fn.TEMPVARs.clear();
        };
        if (isTrail)
            src = (((trail + "("_fu) + src) + ")"_fu);

        result.push(src);
    };
    return /*NRVO*/ result;
}

static fu_STR cgComma(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> items = cgNodes(nodes, 0, (*(const fu_STR*)fu::NIL), (debug + ".cgComma"_fu), _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    if (!items.size())
        return "(false /*empty parens*/)"_fu;

    if (items.size() == 1)
        return fu_STR(items[0]);

    fu_STR src = "("_fu;
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += ", "_fu;

        if (i < (items.size() - 1))
            src += "(void)"_fu;

        src += items[i];
    };
    return src + ")"_fu;
}

                                #ifndef DEFt_if_first_AwjY
                                #define DEFt_if_first_AwjY
inline char if_first_AwjY(fu::view<char> s)
{
    return s.size() ? s[0] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_if_last_AwjY
                                #define DEFt_if_last_AwjY
inline char if_last_AwjY(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR cgStatements(fu::view<s_SolvedNode> nodes, int& count, const fu_STR& trail, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> lines = cgNodes(nodes, M_STMT, trail, "cgStatements"_fu, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    count = lines.size();
    /*MOV*/ fu_STR src {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
            src += (((if_first_AwjY(line) == '\n') ? ('\n' + line) : (_indent + line)) + ((if_last_AwjY(line) == ';') ? '\n' : ';'));

    };
    return /*NRVO*/ src;
}

static fu_STR cgBlock(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Target& label, const s_Type& type, s_cg_CurrentFn& _current_fn, fu_STR& _indent, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const int _ids_used0 = _current_fn._ids_used.size();
    fu_DEFER(_current_fn._ids_used.shrink(_ids_used0));
    fu_STR indent0 { _indent };
    fu_DEFER(_indent = indent0);
    _indent += "    "_fu;
    fu_STR gnuOpen = (gnuStmtExpr ? "(__extension__ ("_fu : fu_STR{});
    fu_STR open = "{"_fu;
    fu_STR close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu_STR trail {};
    const s_Overload& lbl = (label ? GET(label, module, ctx) : (*(const s_Overload*)fu::NIL));
    const fu_STR& name = lbl.name;
    const int blockvals0 = _current_fn.blockvals.size();
    fu_DEFER(_current_fn.blockvals.shrink(blockvals0));
    if (type && !is_void(type))
    {
        bool ptrflip = false;
        fu_STR annot = typeAnnot(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        fu_STR id = emitTEMPVAR(annot, ptrflip, (name ? (("L_"_fu + name) + "_v"_fu) : fu_STR{}), (*(const fu_STR*)fu::NIL), _current_fn);
        _current_fn.blockvals += s_cg_Blockval { s_Target(label), bool(ptrflip) };
        fu_STR out = (ptrflip ? ("*"_fu + id) : cgMove(type, id, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    int count {};
    /*MOV*/ fu_STR src = cgStatements(nodes, count, trail, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    if (lbl.name)
    {
        fu_STR prefixed_id = ("L_"_fu + name);
        if (fu::has(src, (("goto "_fu + prefixed_id) + ";"_fu)))
        {
            close = (((("  } "_fu + prefixed_id) + ":;"_fu) + indent0) + close);
            open = "{ {"_fu;
        };
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || ((SolvedNodeData(nodes[0], module, ctx).kind != "jump"_fu) && (SolvedNodeData(nodes[0], module, ctx).kind != "call"_fu)))
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);

    return /*NRVO*/ src;
}

static fu_STR cgBlock(const s_SolvedNode& node, const int mode, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<s_SolvedNode> items = ((SolvedNodeData(node, module, ctx).kind == "block"_fu) ? fu_VEC<s_SolvedNode>(SolvedNodeData(node, module, ctx).items) : fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Target& label = ((SolvedNodeData(node, module, ctx).kind == "block"_fu) ? SolvedNodeData(node, module, ctx).target : (*(const s_Target*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = label;

    const bool expr = !(mode & M_STMT);
    if (expr && !label && exprOK(items, module, ctx))
        return cgComma(items, (debug + ".cgBlock"_fu), _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    return cgBlock(items, !!(mode & M_OPT_CURLIES), expr, label, (expr ? SolvedNodeData(node, module, ctx).type : (*(const s_Type*)fu::NIL)), _current_fn, _indent, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _idef, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
}

static bool add_once(fu_VEC<s_BitSet>& bs, const s_Target& target)
{
    return add_once(bs, target.modid, target.index);
}

static void ensureFwdDecl(const s_Target& target, const s_Module& module, const s_Context& ctx, fu_VEC<s_BitSet>& _ffwd, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<fu_STR>& _ffwd_src)
{
    const s_Overload& overload = GET(target, module, ctx);
    if ((overload.kind != "fn"_fu) || (overload.name == "main"_fu))
        return;

    if (!add_once(_ffwd, target))
        return;

    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, s_Target{}, s_Target{}, fu_VEC<fu_STR>{}, fu_VEC<int>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    const s_Type& ret = (overload.type ? overload.type : fail(fu_STR{}, _here, ctx));
    fu_STR annot = typeAnnot(ret, M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR name = fnID(target, module, ctx, _here);
    fu_STR src = ((((fnLinkage(overload) + annot) + " "_fu) + name) + "("_fu);
    fu::view<s_Argument> args = EXT(target, module, ctx).args;
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            src += ", "_fu;

        src += typeAnnot(args[i].type, (M_ARGUMENT | M_FWDECL), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    };
    if (overload.flags & F_POSTFIX)
    {
        if (!(overload.flags & F_OPERATOR))
            fu_ASSERT();

        src += ", /*postfix*/int "_fu;
    };
    src += ");\n"_fu;
    _ffwd_src += src;
    return;
}

static fu_STR cgFn(const s_SolvedNode& fn, const int mode, fu_STR& _indent, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, s_BitSet& _idef, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_STR indent0 { _indent };
    fu_DEFER(_indent = indent0);
    fu::view<s_SolvedNode> items = SolvedNodeData(fn, module, ctx).items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    const s_Overload& overload = GET(SolvedNodeData(fn, module, ctx).target, module, ctx);
    fu::view<char> id = overload.name;
    if (!(overload.status & SS_FINALIZED))
        fail(("cgFn: fn not finalized: "_fu + id), _here, ctx);

    if (!body)
    {
        if (!(overload.kind == "__native"_fu))
            fail(((("cgFn: no body on non-native: "_fu + overload.kind) + " "_fu) + id), _here, ctx);

        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
    };
    _indent = "\n"_fu;
    fu_STR src {};

    {
        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(SolvedNodeData(fn, module, ctx).target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, s_Target{}, s_Target{}, fu_VEC<fu_STR>{}, fu_VEC<int>{} };
        fu_DEFER(std::swap(_current_fn, current_fn0));
        std::swap(_current_fn, current_fn0);
        src += cgFnSignature(fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _hasMain, _idef, _indent, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        src += cgBlock(body, M_STMT, (("cgFn("_fu + id) + ")"_fu), module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    };
    if (fu::has(_fdef, (id ? id : fail(fu_STR{}, _here, ctx))))
        ensureFwdDecl(SolvedNodeData(fn, module, ctx).target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);

    fu_STR dedupe = ((overload.flags & F_PUB) && (overload.flags & F_TEMPLATE) ? valid_identifier(fu_STR(overload.name)) : fu_STR{});
    if (dedupe)
        _fdef += ((("\n                                #ifndef DEFt_"_fu + dedupe) + "\n                                #define DEFt_"_fu) + dedupe);

    _fdef += (("\n"_fu + src) + "\n"_fu);
    if (dedupe)
        _fdef += "                                #endif\n"_fu;

    return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
}

static void ensureFnDef(const s_Target& target, const s_Overload& overload, const s_Module& module, s_TokenIdx& _here, const s_Context& ctx, s_BitSet& _idef, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (!(target.modid == module.modid))
        fail((((((x7E_OZkl((x7E_OZkl("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu) + overload.kind) + " "_fu) + overload.name) + "`."_fu), _here, ctx);

    if (!add_once(_idef, target.index))
        return;

    const s_SolvedNode& node = overload.solved;
    if (!(SolvedNodeData(node, module, ctx).kind == "fn"_fu))
        fail("ensureFnDef non-fn"_fu, _here, ctx);

    cgFn(node, M_STMT, _indent, module, ctx, _here, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _idef, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
}

inline static bool isIntegerConstant_8Z6B(const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx)
{
    if (SolvedNodeData(expr, module, ctx).kind == "int"_fu)
        return true;

    if (SolvedNodeData(expr, module, ctx).kind == "call"_fu)
    {
        const s_Overload& t = GET(SolvedNodeData(expr, module, ctx).target, module, ctx);
        if ((t.kind == "__native"_fu) && (t.flags & F_OPERATOR))
        {
            for (int i = 0; i < SolvedNodeData(expr, module, ctx).items.size(); i++)
            {
                if (!isIntegerConstant_8Z6B(SolvedNodeData(expr, module, ctx).items[i], module, ctx))
                    return true;

            };
            return true;
        };
    };
    return false;
}

                                #ifndef DEFt_add_once_E7FI
                                #define DEFt_add_once_E7FI
inline bool add_once_E7FI(fu_VEC<int>& dest, const int item, fu_VEC<int>& extras, const int extra)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, item);
                extras.insert(i, extra);
                return true;
            };
            return false;
        };
    };
    dest.push(item);
    extras.push(extra);
    return true;
}
                                #endif

static fu_STR cgLet(const s_SolvedNode& node, const bool global, const bool foreign, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (type_isZST(SolvedNodeData(node, module, ctx).type))
        return fu_STR{};

    const bool intconst = (global && is_primitive(SolvedNodeData(node, module, ctx).type) && !is_floating_pt(SolvedNodeData(node, module, ctx).type) && isIntegerConstant_8Z6B(SolvedNodeData(node, module, ctx).items[LET_INIT], module, ctx));
    /*MOV*/ fu_STR src = binding(node, (!foreign || intconst), bool{}, bool{}, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    if (!global)
        return /*NRVO*/ src;

    if (fu::lmatch(src, "const "_fu))
        src = fu::slice(src, 6);

    if (!(GET(SolvedNodeData(node, module, ctx).target, module, ctx).flags & F_PUB))
    {
        if (!foreign)
            _fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
        else
        {
            int _0 {};
            add_once_E7FI(_unity, ((_0 = SolvedNodeData(node, module, ctx).target.modid) ? _0 : fail(fu_STR{}, _here, ctx)), _unity_because, SolvedNodeData(node, module, ctx).target.index);
        };
    }
    else if (!intconst)
        _fdef += (("\nextern const "_fu + src) + ";\n"_fu);
    else
        _fdef += ((((((("\n                                #ifndef DEF_"_fu + SolvedNodeData(node, module, ctx).value) + "\n                                #define DEF_"_fu) + SolvedNodeData(node, module, ctx).value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);

    return fu_STR{};
}

static void cgForeignGlobal(const s_Target& target, fu_VEC<s_BitSet>& _ffwd, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (!add_once(_ffwd, target))
        return;

    const s_Overload& o = GET(target, module, ctx);
    cgLet(o.solved, true, true, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
}

                                #ifndef DEFt_has_9sek
                                #define DEFt_has_9sek
inline bool has_9sek(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR rootNS(const fu_STR& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_9sek(_current_fn._ids_used, id))
        return "::"_fu + id;

    return fu_STR(id);
}

static fu_STR emitPrefixOp(fu::view<char> op, fu_VEC<fu_STR>& item_src)
{
    return op + ARG(0, item_src);
}

static fu_STR via(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
    {
        fu_STR _0 {};
        tv.id = (_0 = fu_STR((tv.annot = typeAnnot(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn))), emitTEMPVAR(static_cast<fu_STR&&>(_0), tv.ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;

    if (is_trivial(type, module, ctx))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;

    return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;
}

static fu_STR cgCall(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Extended& ext = EXT(SolvedNodeData(node, module, ctx).target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET(SolvedNodeData(node, module, ctx).target, module, ctx))) ? *_0 : fail(fu_STR{}, _here, ctx));
    const fu_VEC<s_SolvedNode>& args = SolvedNodeData(node, module, ctx).items;
    const bool isNative = (target.kind == "__native"_fu);
    const bool isCpyMovAssign = ((args.size() == 2) && isNative && (target.name == "="_fu));
    const int MUSTSEQ_mask = SolvedNodeData(node, module, ctx).helpers;
    int ooe_crosscheck = 0;
    fu_STR ooe_header {};
    fu_VEC<fu_STR> item_src {};
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        const s_SolvedNode& arg_1 = ((isCpyMovAssign && (i == 1) && (SolvedNodeData(arg, module, ctx).kind == "copy"_fu)) ? only_Mzjf(SolvedNodeData(arg, module, ctx).items) : arg);
        fu_STR src = cgNode(arg_1, (x7E_OZkl((("cgCall("_fu + SolvedNodeData(node, module, ctx).value) + ").ARG("_fu), fu::i64dec(i)) + ")"_fu), 0, ext.args[i].type, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        const int MUSTSEQ_bit = (1 << (i & 31));
        if (MUSTSEQ_mask & MUSTSEQ_bit)
        {
            ooe_crosscheck |= MUSTSEQ_bit;
            if (!isFieldChain(arg_1, module, ctx))
            {
                if (ooe_header)
                    ooe_header += ", "_fu;
                else
                    ooe_header = "("_fu;

                bool ptrflip = false;
                fu_STR annot = typeAnnot(SolvedNodeData(arg_1, module, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                fu_STR id = emitTEMPVAR(annot, ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn);
                ooe_header += id;
                ooe_header += " = "_fu;
                ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu_STR(src));
                src = (ptrflip ? ("*"_fu + id) : cgMove(SolvedNodeData(arg_1, module, ctx).type, id, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
            };
        };
        item_src += src;
    };
    if (!(ooe_crosscheck == SolvedNodeData(node, module, ctx).helpers))
        fail(((x7E_OZkl((x7E_OZkl("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(SolvedNodeData(node, module, ctx).helpers)) + ": "_fu) + join_VtCz(map_kzqR(args, 0, module, ctx), "|"_fu)), _here, ctx);

    if (isNative && (target.name[0] == '\n'))
    {
        /*MOV*/ fu_STR id = fu::slice(target.name, 1);
        const int idx = find_WqUX(id, '\n');
        if (idx > -1)
        {
            include(fu::slice(id, 0, idx), _libs);
            id = fu::slice(id, (idx + 1));
        };
        if (id[0] == '.')
        {
            if (args.size() > 1)
                return emitMethodCall(id, item_src, ooe_header);

            return emitPostfixOp(id, item_src);
        };
        if (id[0] == '/')
            return ooeWrap(emitBuiltin(id, item_src, node, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn), ooe_header);

        if (args)
        {
            if (hasIdentifierChars(id))
                return emitFunctionCall(id, "("_fu, ")"_fu, item_src, ooe_header);

            return emitBinaryOp(id, args, _here, ctx, mode, ooe_header, item_src);
        };
        return /*NRVO*/ id;
    };
    if (target.kind == "type"_fu)
    {
        if (!args)
            return cgDefault(target.type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

        if (!(isStruct(target.type)))
            fail("cgCall: defctor/type not a struct."_fu, _here, ctx);

        return emitFunctionCall(typeAnnotBase(target.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn), " { "_fu, " }"_fu, item_src, ooe_header);
    };
    if (SolvedNodeData(node, module, ctx).target.modid && (target.kind == "fn"_fu))
    {
        if ((SolvedNodeData(target.solved, module, ctx).flags & F_TEMPLATE) || !(SolvedNodeData(target.solved, module, ctx).flags & F_PUB))
            ensureFnDef(SolvedNodeData(node, module, ctx).target, target, module, _here, ctx, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        else if (SolvedNodeData(node, module, ctx).target.modid != module.modid)
            ensureFwdDecl(SolvedNodeData(node, module, ctx).target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);

    };
    const fu_STR& id = (target.name ? target.name : fail(fu_STR{}, _here, ctx));
    if ((args.size() <= 2))
    {
        if (target.kind == "var"_fu)
        {
            if (!target.local_of)
            {
                if (SolvedNodeData(node, module, ctx).target.modid != module.modid)
                    cgForeignGlobal(SolvedNodeData(node, module, ctx).target, _ffwd, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

                return rootNS(ID(id), _current_fn);
            };
            return localID(SolvedNodeData(node, module, ctx).target, bool{}, module, ctx, _current_fn);
        };
        if (target.kind == "field"_fu)
            return (ARG(0, item_src) + "."_fu) + ID(id);

        if (isOp(SolvedNodeData(node, module, ctx).target, module, ctx))
        {
            const s_SolvedNode* _1;
            const s_SolvedNode& head = (*(_1 = &(args[0])) ? *_1 : fail(fu_STR{}, _here, ctx));
            if (args.size() == 1)
                return ((target.flags & F_POSTFIX) ? emitPostfixOp(valid_operator(id), item_src) : emitPrefixOp(valid_operator(id), item_src));

            if (args.size() == 2)
            {
                if (id == "[]"_fu)
                {
                    if (mode & M_MOVE)
                    {
                        fu_STR _2 {};
                        return (_2 = (ARG(0, item_src) + ".try_steal("_fu), (static_cast<fu_STR&&>(_2) + ARG(1, item_src))) + ")"_fu;
                    };
                    if (is_mutref(SolvedNodeData(node, module, ctx).type, _here, ctx))
                    {
                        fu_STR _3 {};
                        return (_3 = (ARG(0, item_src) + ".mutref("_fu), (static_cast<fu_STR&&>(_3) + ARG(1, item_src))) + ")"_fu;
                    };
                    fu_STR _4 {};
                    return (_4 = (ARG(0, item_src) + "["_fu), (static_cast<fu_STR&&>(_4) + ARG(1, item_src))) + "]"_fu;
                };
                if (id == "||="_fu)
                {
                    const fu_STR& arg0 = ARG(0, item_src);
                    s_TEMPVAR tv {};
                    fu_STR condcons = via(tv, SolvedNodeData(head, module, ctx).type, arg0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                    fu_STR alt = (tv.ptrflip ? ("*"_fu + tv.id) : fu_STR((tv.id ? tv.id : arg0)));
                    return ooeWrap(((((("("_fu + condcons) + alt) + " = "_fu) + ARG(1, item_src)) + ")"_fu), ooe_header);
                };
                return emitBinaryOp(valid_operator(id), args, _here, ctx, mode, ooe_header, item_src);
            };
        };
        if ((id == "STEAL"_fu) && (args.size() == 1))
            return cgMove(SolvedNodeData(node, module, ctx).type, ARG(0, item_src), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    };
    if (isNative)
        fail((("Unknown __native: `"_fu + id) + "`."_fu), _here, ctx);

    return emitFunctionCall(rootNS(valid_identifier(fu_STR(id)), _current_fn), "("_fu, ")"_fu, item_src, ooe_header);
}

                                #ifndef DEFt_has_WqUX
                                #define DEFt_has_WqUX
inline bool has_WqUX(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_find_AP4C
                                #define DEFt_find_AP4C
inline int find_AP4C(fu::view<char> a, const char b, int start)
{
    start = ((start > 0) ? int(start) : 0);
    for (/*MOV*/ int i = start; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static fu_STR cgLiteral(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src { SolvedNodeData(node, module, ctx).value };
    if (is_unsigned(SolvedNodeData(node, module, ctx).type) && !has_WqUX(src, 'u'))
        src += 'u';

    if (is_floating_pt(SolvedNodeData(node, module, ctx).type))
    {
        if (!has_WqUX(src, '.'))
            src += ".0"_fu;

        if (SolvedNodeData(node, module, ctx).type.vtype.canon == "f32"_fu)
        {
            if (has_WqUX(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (SolvedNodeData(node, module, ctx).type.vtype.canon != "f64"_fu)
            fu_ASSERT();

    };
    if (fu::lmatch(src, "0o"_fu))
        src.splice(1, 1);

    if (src.size() > 16)
    {
        s_Intlit parse = Intlit(src);
        if (parse.negative && (parse.absval == 0x8000000000000000ull))
            return "(-9223372036854775807-1)"_fu;

    };
    if (is_integral(SolvedNodeData(node, module, ctx).type) && (SolvedNodeData(node, module, ctx).type.vtype.canon != "u32"_fu) && (SolvedNodeData(node, module, ctx).type.vtype.canon != "i32"_fu))
    {
        if ((SolvedNodeData(node, module, ctx).type.vtype.canon == "u64"_fu) || (SolvedNodeData(node, module, ctx).type.vtype.canon == "i64"_fu))
        {
            if (!has_WqUX(src, 'l'))
                return src + "ll"_fu;

        }
        else
            return ((typeAnnotBase(SolvedNodeData(node, module, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src) + ")"_fu;

    };
    int idx {};
    while (((idx = find_AP4C(src, '_', int(idx))) >= 0))
        src.splice(idx, 1);

    return /*NRVO*/ src;
}

static fu_STR escapeStringLiteral(fu::view<char> str, const char quot)
{
    /*MOV*/ fu_STR esc = fu_STR { fu::slate<1, char> { char(quot) } };
    for (int i = 0; i < str.size(); i++)
    {
        const char c = str[i];
        if (c == '\n')
            esc += "\\n"_fu;
        else if (c == '\r')
            esc += "\\r"_fu;
        else if (c == '\t')
            esc += "\\t"_fu;
        else if (c == '\v')
            esc += "\\v"_fu;
        else if (c == '\\')
            esc += "\\\\"_fu;
        else if (fu::i8(fu::u8(c)) < fu::i8(32))
            esc += ("\\"_fu + xHH(unsigned(fu::u8(c))));
        else
        {
            if (c == quot)
                esc += '\\';

            esc += c;
        };
    };
    esc += quot;
    return /*NRVO*/ esc;
}

static fu_STR cgCharLiteral(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx)
{
    return escapeStringLiteral(SolvedNodeData(node, module, ctx).value, '\'');
}

static fu_STR cgStringLiteral(const s_SolvedNode& node, fu_VEC<fu_STR>& _libs, const s_Module& module, const s_Context& ctx)
{
    annotateString(_libs);
    /*MOV*/ fu_STR esc = escapeStringLiteral(SolvedNodeData(node, module, ctx).value, '"');
    esc += "_fu"_fu;
    return /*NRVO*/ esc;
}

static fu_STR cgArrayLiteral(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (SolvedNodeData(node, module, ctx).target)
        return cgCall(node, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    fu_VEC<fu_STR> items = cgNodes(SolvedNodeData(node, module, ctx).items, 0, (*(const fu_STR*)fu::NIL), "cgArrayLiteral"_fu, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    if (!items.size())
        return cgDefault(SolvedNodeData(node, module, ctx).type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    fu_STR curly = (("{ "_fu + join_VtCz(items, ", "_fu)) + " }"_fu);
    fu_STR itemT = typeAnnotBase(clear_sliceable(SolvedNodeData(node, module, ctx).type, _here, ctx), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR slate = ((((x7E_OZkl("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
    if (is_ref(callarg) && !type_isArray(callarg))
    {
        include("<fu/view.h>"_fu, _libs);
        return ("("_fu + slate) + ")"_fu;
    };
    return ((typeAnnotBase(SolvedNodeData(node, module, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + " { "_fu) + slate) + " }"_fu;
}

static fu_STR cgDefinit(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgArrayLiteral(node, mode, callarg, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
}

static bool supportsNRVO(const s_Overload& o, const s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx)
{
    return (o.kind == "var"_fu) && !(o.flags & F_ARG) && (o.local_of == _current_fn.target.index) && !is_ref(SolvedNodeData(o.solved, module, ctx).type);
}

static bool Lifetime_hasArguments(const s_Lifetime& lifetime)
{
    for (int i = 0; i < lifetime.uni0n.size(); i++)
    {
        if (Region_isArg(lifetime.uni0n[i]))
            return true;

    };
    return false;
}

                                #ifndef DEFt_has_urEh
                                #define DEFt_has_urEh
inline bool has_urEh(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static void ensureMoveFromConstRefHelper(const s_Target& target, fu_VEC<s_BitSet>& _moveFromConstRefHelpers, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because)
{
    if (!add_once(_moveFromConstRefHelpers, target))
        return;

    fu_STR name = fnID(target, module, ctx, _here);
    fu::view<s_Argument> args = EXT(target, module, ctx).args;
    fu_STR annot = typeAnnot(clear_refs(s_Type(GET(target, module, ctx).type)), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR src = (((("inline "_fu + annot) + " "_fu) + name) + "("_fu);
    fu::view<s_SolvedNode> items = SolvedNodeData(GET(target, module, ctx).solved, module, ctx).items;
    fu::view<s_Region> retargs = GET(target, module, ctx).type.lifetime.uni0n;
    fu_STR body = (((((("return static_cast<"_fu + annot) + "&&>(const_cast<"_fu) + annot) + "&>("_fu) + name) + "("_fu);
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode* _0;
        const s_SolvedNode& argNode = (*(_0 = &(items[i])) ? *_0 : fail(fu_STR{}, _here, ctx));
        const s_Target& argTarget = SolvedNodeData(argNode, module, ctx).target;
        const bool forceValue = has_urEh(retargs, Region_fromArgIndex(argTarget.index));
        fu_STR binding = ::binding(argNode, bool{}, bool{}, forceValue, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        int space = -1;
        for (int i_1 = binding.size(); i_1-- > 0; )
        {
            if (binding[i_1] == ' ')
            {
                space = i_1;
                break;
            };
        };
        if (!(space > 0))
            fail("ensureMoveFromConstRefHelper: cant split annot/id."_fu, _here, ctx);

        fu_STR pass = fu::slice(binding, (space + 1));
        if (!is_ref(SolvedNodeData(argNode, module, ctx).type))
            pass = (((("static_cast<"_fu + fu::slice(binding, 0, space)) + "&&>("_fu) + pass) + ")"_fu);

        if (i)
        {
            src += ", "_fu;
            body += ", "_fu;
        };
        src += binding;
        body += pass;
    };
    src += ((")\n{\n    "_fu + body) + ")));\n}\n"_fu);
    _fdef += (("\n"_fu + src) + "\n"_fu);
}

static fu_STR cgMoveOrClone(fu::view<char> kind, const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (kind == "move"_fu)
        return cgMove(type, src, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    return cgClone(type, src, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgMoveOrClone(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_SolvedNode& expr = only_Mzjf(SolvedNodeData(node, module, ctx).items);
    if (SolvedNodeData(node, module, ctx).kind == "move"_fu)
    {
        if (mode & M_RETURN)
        {
            const bool nrvo = ((SolvedNodeData(expr, module, ctx).kind == "call"_fu) && (SolvedNodeData(expr, module, ctx).items.size() == 0) && supportsNRVO(GET(SolvedNodeData(expr, module, ctx).target, module, ctx), _current_fn, module, ctx));
            if (nrvo)
                return "/*NRVO*/ "_fu + cgNode(expr, "NRVO"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

        };
        if (!is_trivial(SolvedNodeData(node, module, ctx).type, module, ctx))
        {
            if (SolvedNodeData(expr, module, ctx).kind == "call"_fu)
            {
                const s_Overload& o = GET(SolvedNodeData(expr, module, ctx).target, module, ctx);
                if ((o.kind == "__native"_fu) && (o.name == "[]"_fu))
                    return cgNode(expr, "cgMoveOperator[]"_fu, M_MOVE, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

                if (!is_mutref(o.type, _here, ctx) && Lifetime_hasArguments(o.type.lifetime))
                {
                    ensureMoveFromConstRefHelper(SolvedNodeData(expr, module, ctx).target, _moveFromConstRefHelpers, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because);
                    return cgNode(expr, "cgMoveFromConstRefHelper"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
                };
            };
        };
    };
    fu_STR _0 {};
    return (_0 = cgNode(expr, "cgMoveOrClone"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers), cgMoveOrClone(SolvedNodeData(node, module, ctx).kind, SolvedNodeData(node, module, ctx).type, static_cast<fu_STR&&>(_0), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
}

static fu_STR blockWrapSubstatement(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgBlock(node, ((M_STMT | M_OPT_CURLIES) | mode), "blockWrapSubstatement"_fu, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
}

static fu_STR blockWrap_unlessIf(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return (((SolvedNodeData(node, module, ctx).kind == "if"_fu) || (SolvedNodeData(node, module, ctx).kind == "and"_fu)) ? (" "_fu + cgNode(node, "cgIf.blockWrap_unlessIf"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers)) : blockWrapSubstatement(node, 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers));
}

static fu_STR cgIf(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_SolvedNode& n0 = SolvedNodeData(node, module, ctx).items[0];
    const s_SolvedNode& n1 = SolvedNodeData(node, module, ctx).items[1];
    const s_SolvedNode& n2 = SolvedNodeData(node, module, ctx).items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode(n0, "cgIf[cond]"_fu, (M_RETBOOL | (stmt ? M_PARENS : (*(const int*)fu::NIL))), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement(n1, 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : cgNode(n1, "cgIf[cons]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf(n2, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : cgNode(n2, "cgIf[alt]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers)) : fu_STR{});
    if (stmt)
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((_indent + "else"_fu) + alt) : fu_STR{});

    return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;
}

static void cgAndOr_concat(fu_STR& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const int mode = (M_RETBOOL | (parens && (items.size() == 1) ? M_PARENS : (*(const int*)fu::NIL)));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        src += cgNode(items[i], (x7E_OZkl("cgAndOr_concat["_fu, fu::i64dec(i)) + "]"_fu), mode, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    };
}

static fu_STR via(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (isFieldChain(expr, module, ctx))
    {
        fu_STR trivial = cgNode(expr, "TEMPVAR[fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    };
    if ((SolvedNodeData(expr, module, ctx).kind == "copy"_fu) || (SolvedNodeData(expr, module, ctx).kind == "move"_fu))
    {
        fu::view<char> kind = SolvedNodeData(expr, module, ctx).kind;
        const s_SolvedNode& expr_1 = only_Mzjf(SolvedNodeData(expr, module, ctx).items);
        if (isFieldChain(expr_1, module, ctx))
        {
            fu_STR trivial = cgNode(expr_1, "TEMPVAR[copymov/fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
            return ((trivial + " ? "_fu) + cgMoveOrClone(kind, type, trivial, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn)) + " : "_fu;
        };
    };
    fu_STR _0 {};
    return (_0 = cgNode(expr, "TEMPVAR[usual]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers), via(tv, type, static_cast<fu_STR&&>(_0), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn));
}

static fu_STR cgOr(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Type& type = SolvedNodeData(node, module, ctx).type;
    fu::view<s_SolvedNode> items = SolvedNodeData(node, module, ctx).items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if (!("_fu;
        cgAndOr_concat(src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        src += "))"_fu;
        src += blockWrapSubstatement(items[(items.size() - 1)], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (is_bool(type))
        cgAndOr_concat(src, " || "_fu, items, true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    else
    {
        s_TEMPVAR tv {};
        for (int i = 0; i < (items.size() - 1); i++)
        {
            const s_SolvedNode* _0;
            const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : fail(fu_STR{}, _here, ctx));
            s_SolvedNode tail { item };
            if (SolvedNodeData(item, module, ctx).kind == "and"_fu)
            {
                fu::view<s_SolvedNode> items_1 = SolvedNodeData(item, module, ctx).items;
                const s_SolvedNode* _1;
                tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : fail(fu_STR{}, _here, ctx));
                cgAndOr_concat(src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), bool{}, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
                src += " && "_fu;
            };
            src += via(tv, type, tail, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        };
        const s_SolvedNode* _2;
        const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : fail(fu_STR{}, _here, ctx));
        src += cgNode(tail, "cgOr"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if ("_fu;
        cgAndOr_concat(src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        src += ")"_fu;
        src += blockWrapSubstatement(items[(items.size() - 1)], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (is_bool(type))
        cgAndOr_concat(src, " && "_fu, items, true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    else
    {
        s_TEMPVAR tv {};
        if (is_mutref(type, _here, ctx))
        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via(tv, type, item, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers));
                else
                    src += cgNode(item, (x7E_OZkl((debug + ".cgAnd[mutref "_fu), fu::i64dec(i)) + "]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

            };
        }
        else
        {
            const int N = items.size();
            const bool retSecondLast = is_never(SolvedNodeData(items[(N - 1)], module, ctx).type);
            const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
            cgAndOr_concat(src, " && "_fu, fu::get_view(items, 0, condEnd), bool{}, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
            if (retSecondLast)
            {
                if (condEnd)
                    src += " && "_fu;

                src += ("!"_fu + via(tv, type, items[(N - 2)], module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers));
                src += cgNode(items[(N - 1)], (debug + ".cgAnd[retSecondLast]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
            }
            else
            {
                src += (" ? "_fu + cgNode(items[(N - 1)], (debug + ".cgAnd[usual]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers));
                src += (" : "_fu + cgDefault(type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn));
            };
        };
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd(const s_SolvedNode& node, const int mode, fu::view<char> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgAnd(SolvedNodeData(node, module, ctx).items, SolvedNodeData(node, module, ctx).type, mode, debug, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
}

static fu_STR cgMain(const int _hasMain, fu_VEC<fu_STR>& _libs)
{
    if (!_hasMain)
        return fu_STR{};

    if (_hasMain != 2)
        return "\n\nint main() { return fu_MAIN(); }\n"_fu;

    annotateString(_libs);
    return (((((((("\n\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));"_fu) + "\n}\n"_fu;
}

static fu_STR collectDedupes(fu_VEC<fu_STR>&& values, fu::view<char> prefix, fu::view<char> suffix)
{
    if (!values.size())
        return fu_STR{};

    /*MOV*/ fu_STR out = "\n"_fu;
    fu::sort(values);
    for (int i = 0; i < values.size(); i++)
        out += ((prefix + values[i]) + suffix);

    return /*NRVO*/ out;
}

static fu_STR collectDedupes(fu_VEC<fu_STR>&& values)
{
    if (!values.size())
        return fu_STR{};

    /*MOV*/ fu_STR out = "\n"_fu;
    fu::sort(values);
    for (int i = 0; i < values.size(); i++)
        out += values[i];

    return /*NRVO*/ out;
}

static fu_STR cgRoot(const s_SolvedNode& root, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    int count {};
    fu_STR src = cgStatements(SolvedNodeData(root, module, ctx).items, count, (*(const fu_STR*)fu::NIL), _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    fu_STR main = cgMain(_hasMain, _libs);
    fu_STR header = ((((collectDedupes(fu_VEC<fu_STR>(_libs), "#include "_fu, "\n"_fu) + collectDedupes(fu_VEC<fu_STR>(_tfwd_src))) + collectDedupes(fu_VEC<fu_STR>(_ffwd_src))) + _tdef) + (_fdef ? (("\n#ifndef FU_NO_FDEFs\n"_fu + _fdef) + "\n#endif\n"_fu) : fu_STR{}));
    return (header + src) + main;
}

static fu_STR cgFnDef(const s_SolvedNode& fndef, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, s_BitSet& _idef, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Overload& o = GET(SolvedNodeData(fndef, module, ctx).target, module, ctx);
    const s_SolvedNode& n = o.solved;
    if (!(n ? (o.flags & F_PUB) : int{}))
        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);

    if (!(SolvedNodeData(n, module, ctx).kind == "fn"_fu))
        fail("cgFnDef non-fn"_fu, _here, ctx);

    return cgFn(n, mode, _indent, module, ctx, _here, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _idef, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
}

static fu_STR cgEmpty(const int mode)
{
    return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
}

static fu_STR cgJump(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target& dest_idx = SolvedNodeData(node, module, ctx).target;
    const bool use_return = (dest_idx == _current_fn.target);
    const s_Overload& dest = GET(dest_idx, module, ctx);
    if (SolvedNodeData(node, module, ctx).items)
    {
        const s_SolvedNode& head = only_Mzjf(SolvedNodeData(node, module, ctx).items);
        if (!use_return)
        {
            bool hasval = false;
            bool ptrflip = false;
            for (int i = _current_fn.blockvals.size(); i-- > 0; )
            {
                const s_cg_Blockval& bv = _current_fn.blockvals[i];
                if (bv.label == dest_idx)
                {
                    hasval = true;
                    ptrflip = bv.ptrflip;
                    break;
                };
            };
            fu_STR assign = (hasval ? (("L_"_fu + dest.name) + "_v = "_fu) : fu_STR{});
            fu_STR value = cgNode(head, "cgJump[val.break]"_fu, (!assign ? M_STMT : (*(const int*)fu::NIL)), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
            if (ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            return (((("{ "_fu + assign) + value) + "; goto L_"_fu) + dest.name) + "; }"_fu;
        };
        if (is_never(SolvedNodeData(head, module, ctx).type))
        {
            if (is_never(dest.type))
                return cgNode(head, "cgJump[val.return.never]"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

            if (is_void(dest.type))
                return "return (void) "_fu + cgNode(head, "cgJump[val.return.void]"_fu, M_RETURN, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

        };
        return "return "_fu + cgNode(head, "cgJump[val.return]"_fu, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    };
    if (use_return)
        return "return"_fu;

    if (dest_idx == _current_fn.can_break)
        return "break"_fu;

    if (dest_idx == _current_fn.can_cont)
        return "continue"_fu;

    return "goto L_"_fu + dest.name;
}

                                #ifndef DEF_LOOP_INIT
                                #define DEF_LOOP_INIT
inline constexpr int LOOP_INIT = 0;
                                #endif

                                #ifndef DEF_LOOP_COND
                                #define DEF_LOOP_COND
inline constexpr int LOOP_COND = 1;
                                #endif

                                #ifndef DEF_LOOP_BODY
                                #define DEF_LOOP_BODY
inline constexpr int LOOP_BODY = 2;
                                #endif

                                #ifndef DEF_LOOP_POST_COND
                                #define DEF_LOOP_POST_COND
inline constexpr int LOOP_POST_COND = 3;
                                #endif

                                #ifndef DEF_LOOP_POST
                                #define DEF_LOOP_POST
inline constexpr int LOOP_POST = 4;
                                #endif

static fu_STR cgLoop(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target can_cont0 { _current_fn.can_cont };
    const s_Target can_break0 { _current_fn.can_break };
    fu_DEFER(
    {
        _current_fn.can_cont = can_cont0;
        _current_fn.can_break = can_break0;
    });
    _current_fn.can_cont = s_Target{};
    _current_fn.can_break = s_Target{};
    fu::view<s_SolvedNode> items = SolvedNodeData(node, module, ctx).items;
    const s_SolvedNode& n_init = items[LOOP_INIT];
    const s_SolvedNode& n_cond = items[LOOP_COND];
    const s_SolvedNode& n_body = items[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
    const s_SolvedNode& n_post = items[LOOP_POST];
    fu_STR init = (n_init ? cgNode(n_init, "cgLoop[init]"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode(n_cond, "cgLoop[cond]"_fu, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode(n_pcnd, "cgLoop[pcnd]"_fu, M_RETBOOL, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR post = (n_post ? cgNode(n_post, "cgLoop[post]"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : fu_STR{});
    const s_Target& label = SolvedNodeData(node, module, ctx).target;
    _current_fn.can_break = label;
    fu_STR body = (n_body ? blockWrapSubstatement(n_body, M_LOOP_BODY, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR breakLabel {};
    const s_Overload& lbl = (label ? GET(label, module, ctx) : (*(const s_Overload*)fu::NIL));
    const fu_STR& name = lbl.name;
    if (body && name)
    {
        fu_STR brk = ("L_"_fu + name);
        if (fu::has(body, (("goto "_fu + brk) + ";"_fu)))
            breakLabel = ((" "_fu + brk) + ":;"_fu);

    };
    if (pcnd)
    {
        if (init || post || cond)
            fail("TODO extended loop."_fu, _here, ctx);

        return ((((("do"_fu + body) + _indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel;
    };
    if (init || post || !cond)
        return ((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;

    return ((("while ("_fu + cond) + ")"_fu) + body) + breakLabel;
}

static fu_STR cgTryCatch(fu::view<char> tRy, const fu_STR& err, fu::view<char> cAtch, fu::view<char> _indent)
{
    return ((((((((((((((((_indent + "try"_fu) + _indent) + "{"_fu) + tRy) + _indent) + "}"_fu) + _indent) + "catch (const std::exception& o_0)"_fu) + _indent) + "{"_fu) + _indent) + "    fu_STR "_fu) + ID(err)) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + _indent) + "}\n"_fu;
}

static fu_STR cgTryCatch(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<s_SolvedNode> items = SolvedNodeData(node, module, ctx).items;
    fu_STR tRy = blockWrapSubstatement(items[0], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    const fu_STR& err = GET(SolvedNodeData(items[1], module, ctx).target, module, ctx).name;
    fu_STR cAtch = blockWrapSubstatement(items[2], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    return cgTryCatch(tRy, err, cAtch, _indent);
}

static fu_STR cgCatch(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<s_SolvedNode> items = SolvedNodeData(node, module, ctx).items;
    const s_SolvedNode& var_name = items[0];
    if (SolvedNodeData(var_name, module, ctx).kind != "let"_fu)
        return cgTryCatch(node, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    fu_STR try_init = (cgNode(SolvedNodeData(items[0], module, ctx).items[LET_INIT], "cgCatch"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) + ";"_fu);
    const fu_STR& err = GET(SolvedNodeData(items[1], module, ctx).target, module, ctx).name;
    fu_STR cAtch = blockWrapSubstatement(items[2], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    fu_STR vardecl = (!is_never(SolvedNodeData(var_name, module, ctx).type) ? (binding(var_name, bool{}, true, bool{}, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers) + " = {};"_fu) : fu_STR{});
    return vardecl + cgTryCatch((is_never(SolvedNodeData(var_name, module, ctx).type) ? ((_indent + "    "_fu) + try_init) : ((((_indent + "    "_fu) + SolvedNodeData(var_name, module, ctx).value) + " = "_fu) + try_init)), err, cAtch, _indent);
}

static fu_STR cgDefer(const s_SolvedNode& node, fu_VEC<fu_STR>& _libs, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    include("<fu/defer.h>"_fu, _libs);
    fu_STR which = ((SolvedNodeData(node, module, ctx).value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((SolvedNodeData(node, module, ctx).value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode(only_Mzjf(SolvedNodeData(node, module, ctx).items), "defer"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers)) + ")"_fu;
}

static fu_STR cgNode(const s_SolvedNode& node, fu::view<char> debug, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<char> _0 {};
    fu::view<char> k = ((_0 = SolvedNodeData(node, module, ctx).kind) ? static_cast<fu::view<char>&&>(_0) : fail(("cgNode: No node.kind: "_fu + debug), _here, ctx));
    HERE(SolvedNodeData(node, module, ctx).token, _here);
    if (k == "call"_fu)
        return cgCall(node, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "int"_fu)
        return cgLiteral(node, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "real"_fu)
        return cgLiteral(node, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "char"_fu)
        return cgCharLiteral(node, module, ctx);

    if (k == "str"_fu)
        return cgStringLiteral(node, _libs, module, ctx);

    if (k == "arrlit"_fu)
        return cgArrayLiteral(node, mode, callarg, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "definit"_fu)
        return cgDefinit(node, mode, callarg, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "copy"_fu)
        return cgMoveOrClone(node, mode, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "move"_fu)
        return cgMoveOrClone(node, mode, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "if"_fu)
        return cgIf(node, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "or"_fu)
        return cgOr(node, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "and"_fu)
        return cgAnd(node, mode, debug, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "let"_fu)
        return cgLet(node, !_current_fn.target.index, bool{}, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "root"_fu)
        return cgRoot(node, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "block"_fu)
        return cgBlock(node, mode, "block"_fu, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "argid"_fu)
        return cgComma(SolvedNodeData(node, module, ctx).items, "argid"_fu, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "fndef"_fu)
        return cgFnDef(node, mode, module, ctx, _here, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _idef, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "empty"_fu)
        return cgEmpty(mode);

    if (!(mode & M_STMT))
        return cgBlock(node, mode, (k + "!M_STMT"_fu), module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "jump"_fu)
        return cgJump(node, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "loop"_fu)
        return cgLoop(node, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "try"_fu)
        return cgTryCatch(node, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "catch"_fu)
        return cgCatch(node, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    if (k == "defer"_fu)
        return cgDefer(node, _libs, module, ctx, _here, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);

    fail(("TODO: "_fu + k), _here, ctx);
}

s_CodegenOutput cpp_codegen(const s_SolvedNode& root, const s_Module& module, const s_Context& ctx)
{
    fu_VEC<fu_STR> _libs {};
    fu_VEC<s_BitSet> _tfwd {};
    fu_VEC<fu_STR> _tfwd_src {};
    fu_VEC<s_BitSet> _ffwd {};
    fu_VEC<fu_STR> _ffwd_src {};
    fu_VEC<s_BitSet> _moveFromConstRefHelpers {};
    s_BitSet _idef {};
    fu_STR _tdef {};
    fu_STR _fdef {};
    fu_STR _indent = "\n"_fu;
    int _hasMain {};
    fu_VEC<int> _unity {};
    fu_VEC<int> _unity_because {};
    s_TokenIdx _here {};
    s_cg_CurrentFn _current_fn {};
    if (!(SolvedNodeData(root, module, ctx).kind == "root"_fu))
        fail(fu_STR{}, _here, ctx);

    fu_STR src = cgNode(root, "cgRoot"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _unity, _unity_because, _moveFromConstRefHelpers);
    return s_CodegenOutput { fu_VEC<int>(_unity), fu_VEC<int>(_unity_because), fu_STR(src) };
}

#endif
