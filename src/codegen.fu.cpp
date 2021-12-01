#include <cstdint>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/int.h>
#include <fu/map.h>
#include <fu/never.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/vec/concat.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/sort.h>
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
struct s_MapFields;
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
bool hasBinary(fu::view<fu::byte>);
bool hasIdentifierChars(fu::view<fu::byte>);
bool hasPostfix(fu::view<fu::byte>);
bool hasUnary(fu::view<fu::byte>);
bool isStruct(const s_Type&);
bool is_bool(const s_Type&);
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
bool type_isMap(const s_Type&);
bool type_isZST(const s_Type&);
const s_Struct& lookupStruct(const s_Type&, const s_Module&, const s_Context&);
fu_STR ID(const fu_STR&);
int MODID(const s_Module&);
int structIndex(fu::view<fu::byte>);
s_Intlit Intlit(fu::view<fu::byte>);
s_MapFields tryClear_map(const s_Type&);
s_Region Region_fromArgIndex(int);
s_Target target(const s_ScopeItem&);
s_Target tryParseClosureID(fu::view<fu::byte>, int);
s_Type clear_refs(s_Type&&);
s_Type tryClear_sliceable(const s_Type&);
static bool add_once(fu_VEC<s_BitSet>&, const s_Target&);
static fu_STR ARG(int, fu::view<s_SolvedNode>, const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgAnd(const s_SolvedNode&, int, fu::view<fu::byte>, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgAnd(fu::view<s_SolvedNode>, const s_Type&, int, fu::view<fu::byte>, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgAppend(const s_SolvedNode&, const fu_STR&, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgBlock(const s_SolvedNode&, int, fu::view<fu::byte>, const s_Module&, const s_Context&, s_cg_CurrentFn&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgCall(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgFn(const s_SolvedNode&, int, fu_STR&, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, int&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgIf(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgMoveOrClone(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_cg_CurrentFn&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgNode(const s_SolvedNode&, fu::view<fu::byte>, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR cgTryCatch(const s_SolvedNode&, const s_Module&, const s_Context&, s_cg_CurrentFn&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR collectDedupes(const fu_MAP<fu_STR, fu_STR>&, bool);
static fu_STR typeAnnot(const s_Type&, int, fu_MAP<fu_STR, fu_STR>&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, const s_cg_CurrentFn&);
static fu_STR via(s_TEMPVAR&, const s_Type&, const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, fu_MAP<fu_STR, fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_STR&, fu_VEC<int>&, fu_VEC<int>&, s_BitSet&, fu_STR&, int&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR via(s_TEMPVAR&, const s_Type&, fu::view<fu::byte>, fu_MAP<fu_STR, fu_STR>&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&);
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

                                #ifndef DEF_s_Context
                                #define DEF_s_Context
struct s_Context
{
    fu_VEC<s_Module> modules;
    fu_MAP<fu_STR, fu_STR> files;
    fu_MAP<fu_STR, fu_STR> fuzzy;
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

                                #ifndef DEF_s_MapFields
                                #define DEF_s_MapFields
struct s_MapFields
{
    s_Type key;
    s_Type value;
    explicit operator bool() const noexcept
    {
        return false
            || key
            || value
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

                                #ifndef DEFt_unless_oob_cxd2
                                #define DEFt_unless_oob_cxd2
inline const s_Extended& unless_oob_cxd2(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT(const s_Target& target_6, const s_Module& module, const s_Context& ctx)
{
    if (target_6.modid == module.modid)
        return unless_oob_cxd2(module.out.solve.scope.extended, (target_6.index - 1));

    if (target_6.modid < 0)
        return (*(const s_Extended*)fu::NIL);

    return unless_oob_cxd2(ctx.modules[target_6.modid].out.solve.scope.extended, (target_6.index - 1));
}

static const s_SolvedNodeData& SolvedNodeData(const s_SolvedNode& nid, const s_Module& module, const s_Context& ctx)
{
    return nid.nodeown ? EXT(nid.nodeown, module, ctx).nodes[nid.nodeidx] : (*(const s_SolvedNodeData*)fu::NIL);
}

[[noreturn]] static fu::never fail(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu_STR(reason) : "Assertion failed."_fu)), _here, ctx);
}

static const s_Overload& GET(const s_Target& target_6, const s_Module& module, const s_Context& ctx)
{
    if (!(target_6.index > 0))
        fu_ASSERT();

    if (target_6.modid < 0)
        return module.out.solve.scope.extended[(-target_6.modid - 1)].locals[(target_6.index - 1)];

    const s_Module& m = ((target_6.modid == module.modid) ? module : ctx.modules[target_6.modid]);
    return m.out.solve.scope.overloads[(target_6.index - 1)];
}

                                #ifndef DEFt_find_WqUX
                                #define DEFt_find_WqUX
inline int find_WqUX(fu::view<fu::byte> a, const fu::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

static void include(const fu_STR& lib, fu_MAP<fu_STR, fu_STR>& _libs)
{
    if (!fu::has(_libs, lib))
        (_libs.upsert(lib) = (("#include "_fu + lib) + "\n"_fu));

}

                                #ifndef DEFt_x7E_OZkl
                                #define DEFt_x7E_OZkl
inline fu_STR x7E_OZkl(fu::view<fu::byte> a, fu::view<fu::byte> b)
{
    return a + b;
}
                                #endif

static fu_STR ARG(const int i, fu::view<s_SolvedNode> items_5, const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgNode(items_5[i], (x7E_OZkl((("cgCall("_fu + SolvedNodeData(node_1, module, ctx).value) + ").ARG("_fu), fu::i64dec(i)) + ")"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR REST(const int start_1, fu::view<s_SolvedNode> items_5, const s_Extended& ext, const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_STR src_2 {};
    for (int i = start_1; i < items_5.size(); i++)
    {
        if (i > start_1)
            src_2 += ", "_fu;

        src_2 += cgNode(items_5[i], (x7E_OZkl((("cgCall("_fu + SolvedNodeData(node_1, module, ctx).value) + ").REST("_fu), fu::i64dec(i)) + ")"_fu), 0, ext.args[i].type, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    };
    return src_2;
}

                                #ifndef DEFt_last_AwjY
                                #define DEFt_last_AwjY
inline fu::byte last_AwjY(fu::view<fu::byte> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static bool binSkipParens(fu::view<fu::byte> id_2, const int mode)
{
    if (mode & M_STMT)
        return true;

    if (mode & M_PARENS)
    {
        if (last_AwjY(id_2) == fu::byte('='))
        {
            if ((id_2 == "=="_fu) || (id_2 == "!="_fu))
                return true;

            return false;
        };
        return true;
    };
    return false;
}

static fu_STR annotateNever(fu_MAP<fu_STR, fu_STR>& _libs)
{
    include("<fu/never.h>"_fu, _libs);
    return "fu::never"_fu;
}

extern const s_Type t_byte;

static fu_STR annotateString(fu_MAP<fu_STR, fu_STR>& _libs)
{
    include("<fu/str.h>"_fu, _libs);
    return "fu_STR"_fu;
}

                                #ifndef DEFt_grow_if_oob_qJXb
                                #define DEFt_grow_if_oob_qJXb
inline s_BitSet& grow_if_oob_qJXb(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once(grow_if_oob_qJXb(bs, i), j);
}

static const s_Overload& try_GET(const s_Target& target_6, const s_Module& module, const s_Context& ctx)
{
    return target_6 ? GET(target_6, module, ctx) : (*(const s_Overload*)fu::NIL);
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

static fu_STR declareStruct(fu::view<fu::byte> id_2, const s_Type& t, const s_Struct& s, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id_2) + "\n                                #define DEF_"_fu) + id_2) + "\nstruct "_fu) + id_2) + "\n{"_fu);
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
        def += (((("\n    "_fu + id_2) + "(const "_fu) + id_2) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id_2) + "("_fu) + id_2) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id_2) + "& operator=(const "_fu) + id_2) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id_2) + "& operator=("_fu) + id_2) + "&&) = default;"_fu);
    }
    else if (try_GET(s.target, module, ctx).status & SS_TYPE_RECUR)
    {
        def += (((("\n    "_fu + id_2) + "(const "_fu) + id_2) + "&) = default;"_fu);
        def += (((("\n    "_fu + id_2) + "("_fu) + id_2) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id_2) + "& operator=("_fu) + id_2) + "&&) = default;"_fu);
        def += (((((("\n    "_fu + id_2) + "& operator=(const "_fu) + id_2) + "& selfrec) { return *this = "_fu) + id_2) + "(selfrec); }"_fu);
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

static fu_STR typeAnnotBase(const s_Type& type_3, const int mode, fu_MAP<fu_STR, fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    fu::view<fu::byte> c = type_3.vtype.canon;
    if (is_primitive(type_3))
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

        if ((c == "i8"_fu) || (c == "u8"_fu) || (c == "byte"_fu))
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

    s_Type arrayItem = tryClear_sliceable(type_3);
    if (arrayItem)
    {
        if (type_isArray(type_3) || !is_ref(type_3))
        {
            if (arrayItem == t_byte)
                return annotateString(_libs);

            fu_STR itemAnnot = typeAnnot(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            include("<fu/vec.h>"_fu, _libs);
            return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
        };
        fu_STR itemAnnot = typeAnnot(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        include("<fu/view.h>"_fu, _libs);
        if (is_mutref(type_3, _here, ctx) || (mode & M_MUTVAR))
            return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
        else
            return ("fu::view<"_fu + itemAnnot) + ">"_fu;

    };
    s_MapFields mapPair = tryClear_map(type_3);
    if (mapPair)
    {
        fu_STR k = typeAnnot(mapPair.key, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        fu_STR v = typeAnnot(mapPair.value, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        include("<fu/map.h>"_fu, _libs);
        return ((("fu_MAP<"_fu + k) + ", "_fu) + v) + ">"_fu;
    };
    const s_Struct* _0;
    const s_Struct& s = (*(_0 = &(lookupStruct(type_3, module, ctx))) ? *_0 : fail(("TODO: "_fu + type_3.vtype.canon), _here, ctx));
    fu_STR id_2 = ("s_"_fu + s.name);
    if (add_once(_tfwd, type_3.vtype.modid, structIndex(type_3.vtype.canon)))
    {
        _tfwd_src += (("struct "_fu + id_2) + ";\n"_fu);
        _tdef += declareStruct(id_2, type_3, s, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn);
    };
    return id_2;
}

static fu_STR typeAnnot(const s_Type& type_3, const int mode, fu_MAP<fu_STR, fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (type_isZST(type_3))
        return "int"_fu;

    fu_STR fwd = typeAnnotBase(type_3, mode, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (is_ref(type_3))
    {
        if (fu::lmatch(fwd, "fu::view"_fu))
            return fwd;

        if (is_mutref(type_3, _here, ctx))
            return fwd + "&"_fu;

        if (is_primitive(type_3))
            return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

        if (mode & M_MOVABLE)
        {
            const s_Type& fnret = GET(s_Target { int(module.modid), int(_current_fn.target.index) }, module, ctx).type;
            if (!(is_trivial(fnret, module, ctx) || is_ref(fnret)))
                return fwd + "&"_fu;

        };
        return ("const "_fu + fwd) + "&"_fu;
    };
    if ((mode & M_ARGUMENT) && !is_primitive(type_3))
        return fwd + "&&"_fu;

    if ((mode & M_CONST) && is_trivial(type_3, module, ctx))
        return "const "_fu + fwd;

    return fwd;
}

static fu_STR cgDefault(const s_Type& type_3, const s_TokenIdx& _here, const s_Context& ctx, fu_MAP<fu_STR, fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_mutref(type_3, _here, ctx))
        fail("Cannot definit mutrefs."_fu, _here, ctx);

    if (is_ref(type_3))
    {
        fu_STR annot = typeAnnot(type_3, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        if (fu::lmatch(annot, "fu::view"_fu))
            return annot + "{}"_fu;

        include("<fu/default.h>"_fu, _libs);
        return ("(*(const "_fu + typeAnnot(clear_refs(s_Type(type_3)), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "*)fu::NIL)"_fu;
    };
    return typeAnnot(type_3, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "{}"_fu;
}

static bool add_once(fu_VEC<s_BitSet>& bs, const s_Target& target_6)
{
    return add_once(bs, target_6.modid, target_6.index);
}

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
                                #endif

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

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

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

                                #ifndef DEFt_grow_if_oob_xJq8
                                #define DEFt_grow_if_oob_xJq8
inline int& grow_if_oob_xJq8(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_VEC<int>& _ids_dedupe(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

static fu_STR localID(const s_Target& target_6, const bool dedupe, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET(target_6, module, ctx);
    fu_STR id_2 { o.name };
    const s_Target t = tryParseClosureID(id_2, MODID(module));
    if (t)
        id_2 = GET(t, module, ctx).name;

    id_2 = ID(id_2);
    if (o.local_of)
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                fu_STR candidate = (dupes ? x7E_OZkl((id_2 + fu::byte('_')), fu::i64dec(dupes)) : fu_STR(id_2));
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
                grow_if_oob_xJq8(_ids_dedupe(_current_fn), target_6.index) = dupes;

        };
        const int dupes = ((_ids_dedupe(_current_fn).size() > target_6.index) ? _ids_dedupe(_current_fn)[target_6.index] : (*(const int*)fu::NIL));
        if (dupes)
            return x7E_OZkl((id_2 + fu::byte('_')), fu::i64dec(dupes));

    };
    return id_2;
}

                                #ifndef DEFt_only_Mzjf
                                #define DEFt_only_Mzjf
inline const s_SolvedNode& only_Mzjf(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E_OZkl("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static fu_STR cgClone(const s_Type& type_3, fu::view<fu::byte> src_2, fu_MAP<fu_STR, fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return ((typeAnnotBase(type_3, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src_2) + ")"_fu;
}

                                #ifndef DEFt_join_9sek
                                #define DEFt_join_9sek
inline fu_STR join_9sek(fu::view<fu_STR> a, fu::view<fu::byte> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    fu_STR res {};
    res.grow<false>(size);
    fu::view<fu::byte> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<fu::byte> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return res;
}
                                #endif

static fu_STR binding(const s_SolvedNode& node_1, const bool doInit, const bool forceMut, const bool forceValue, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> _tv0 {};
    if (!_current_fn.target.index)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (!_current_fn.target.index)
        std::swap(_tv0, _current_fn.TEMPVARs););
    const s_Overload& overload = (SolvedNodeData(node_1, module, ctx).target ? GET(SolvedNodeData(node_1, module, ctx).target, module, ctx) : (*(const s_Overload*)fu::NIL));
    const int isArg = (overload.flags & F_ARG);
    s_Type node_type = (forceValue ? clear_refs(s_Type(SolvedNodeData(node_1, module, ctx).type)) : s_Type(SolvedNodeData(node_1, module, ctx).type));
    fu_STR annot = typeAnnot(node_type, ((((!forceMut && !is_mutref(overload.type, _here, ctx) ? M_CONST : (*(const int*)fu::NIL)) | (isArg ? M_ARGUMENT : (*(const int*)fu::NIL))) | (is_mutref(overload.type, _here, ctx) ? M_MUTVAR : (*(const int*)fu::NIL))) | ((overload.flags & F_MOVED_FROM) ? M_MOVABLE : (*(const int*)fu::NIL))), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (!SolvedNodeData(node_1, module, ctx).target)
        return annot;

    const int isUnused = (overload.flags & F_UNUSED);
    if (isArg && isUnused)
        return annot;

    fu_STR id_2 = localID(SolvedNodeData(node_1, module, ctx).target, true, module, ctx, _current_fn);
    fu_STR head = ((((isUnused ? "[[maybe_unused]] "_fu : fu_STR{}) + (annot ? annot : fail(fu_STR{}, _here, ctx))) + " "_fu) + id_2);
    if (!doInit || isArg)
        return head;

    const s_SolvedNode init = (SolvedNodeData(node_1, module, ctx).items ? s_SolvedNode(SolvedNodeData(node_1, module, ctx).items[LET_INIT]) : s_SolvedNode{});
    if (init)
    {
        if ((SolvedNodeData(init, module, ctx).kind == "definit"_fu) && !is_ref(SolvedNodeData(init, module, ctx).type))
        {
            if (!(SolvedNodeData(init, module, ctx).type == SolvedNodeData(node_1, module, ctx).type))
                fail("what's this now"_fu, _here, ctx);

            return head + " {}"_fu;
        };
        const bool isCopy = ((SolvedNodeData(init, module, ctx).kind == "copy"_fu) && !is_ref(SolvedNodeData(node_1, module, ctx).type));
        fu_STR expr = cgNode((isCopy ? only_Mzjf(SolvedNodeData(init, module, ctx).items) : init), (("binding("_fu + id_2) + ")"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        if (!_current_fn.target.index && _current_fn.TEMPVARs)
        {
            fu_STR annot_1 = (fu::lmatch(annot, "const "_fu) ? fu::slice(annot, 6) : fu_STR(annot));
            fu_STR expr_1 = (isCopy ? cgClone(SolvedNodeData(init, module, ctx).type, expr, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) : fu_STR(expr));
            fu_STR iife = ((((((" { []() -> "_fu + annot_1) + " {\n    "_fu) + join_9sek(_current_fn.TEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr_1) + ";\n}() }"_fu);
            _current_fn.TEMPVARs.clear();
            return head + iife;
        };
        if (isCopy && !is_primitive(SolvedNodeData(node_1, module, ctx).type))
            return ((head + " { "_fu) + expr) + " }"_fu;

        return (head + " = "_fu) + expr;
    };
    return head + " {}"_fu;
}

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEFt_add_E7FI
                                #define DEFt_add_E7FI
inline bool add_E7FI(fu_VEC<int>& dest, const int item, fu_VEC<int>& extras, const int extra)
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

static fu_STR cgLet(const s_SolvedNode& node_1, const bool global, const bool foreign, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (type_isZST(SolvedNodeData(node_1, module, ctx).type))
        return fu_STR{};

    const bool intconst = (global && is_primitive(SolvedNodeData(node_1, module, ctx).type) && !is_floating_pt(SolvedNodeData(node_1, module, ctx).type) && isIntegerConstant_8Z6B(SolvedNodeData(node_1, module, ctx).items[LET_INIT], module, ctx));
    fu_STR src_2 = binding(node_1, (!foreign || intconst), bool{}, bool{}, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    if (!global)
        return src_2;

    if (fu::lmatch(src_2, "const "_fu))
        src_2 = fu::slice(src_2, 6);

    if (!(GET(SolvedNodeData(node_1, module, ctx).target, module, ctx).flags & F_PUB))
    {
        if (!foreign)
            _fdef += (("\nstatic const "_fu + src_2) + ";\n"_fu);
        else
        {
            int _0 {};
            add_E7FI(_unity, ((_0 = SolvedNodeData(node_1, module, ctx).target.modid) ? _0 : fail(fu_STR{}, _here, ctx)), _unity_because, SolvedNodeData(node_1, module, ctx).target.index);
        };
    }
    else if (!intconst)
        _fdef += (("\nextern const "_fu + src_2) + ";\n"_fu);
    else
        _fdef += ((((((("\n                                #ifndef DEF_"_fu + SolvedNodeData(node_1, module, ctx).value) + "\n                                #define DEF_"_fu) + SolvedNodeData(node_1, module, ctx).value) + "\ninline constexpr "_fu) + src_2) + ";"_fu) + "\n                                #endif\n"_fu);

    return fu_STR{};
}

static void cgForeignGlobal(const s_Target& target_6, fu_VEC<s_BitSet>& _ffwd, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (!add_once(_ffwd, target_6))
        return;

    const s_Overload& o = GET(target_6, module, ctx);
    cgLet(o.solved, true, true, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
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

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline constexpr int F_POSTFIX = (1 << 3);
                                #endif

static bool isOp(const s_Target& target_6, const s_Module& module, const s_Context& ctx)
{
    const int flags_4 = GET(target_6, module, ctx).flags;
    if (!(flags_4 & F_OPERATOR))
        return false;

    fu::view<s_Argument> args_1 = EXT(target_6, module, ctx).args;
    if (args_1.size() > 2)
        return false;

    if (GET(target_6, module, ctx).kind == "__native"_fu)
        return true;

    fu::view<fu::byte> name_3 = GET(target_6, module, ctx).name;
    if (args_1.size() > 1)
        return hasBinary(name_3);

    if (flags_4 & F_POSTFIX)
        return hasPostfix(name_3);

    return hasUnary(name_3);
}

static fu_STR valid_operator(const fu_STR& str_1)
{
    int start_1 = 0;
    bool some = false;
    for (int i = 0; i < str_1.size(); i++)
    {
        const fu::byte c = str_1[i];
        if (((c >= fu::byte('a')) && (c <= fu::byte('z'))) || ((c >= fu::byte('A')) && (c <= fu::byte('Z'))) || ((c >= fu::byte('0')) && (c <= fu::byte('9'))) || (c == fu::byte('_')))
        {
            if (!some)
                start_1 = (i + 1);
            else
                return fu::slice(str_1, start_1, i);

        }
        else
            some = true;

    };
    return (start_1 ? fu::slice(str_1, start_1) : fu_STR(str_1));
}

static fu::byte hex(const unsigned x)
{
    return ((x < 10u) ? fu::byte((uint32_t(fu::byte('0')) + x)) : fu::byte((uint32_t(fu::byte('A')) + (x - 10u))));
}

static fu_STR valid_identifier(fu_STR&& str_1)
{
    for (int i = str_1.size(); i-- > 0; )
    {
        const fu::byte c = str_1[i];
        if (((c >= fu::byte('a')) && (c <= fu::byte('z'))) || ((c >= fu::byte('A')) && (c <= fu::byte('Z'))) || ((c >= fu::byte('0')) && (c <= fu::byte('9'))) || (c == fu::byte('_')))
            continue;

        const unsigned c_1 = uint32_t(c);
        const unsigned b0 = ((c_1 >> 4u) & 0xfu);
        const unsigned b1 = ((c_1 >> 0u) & 0xfu);
        str_1 = ((((fu::get_view(str_1, 0, i) + fu::byte('x')) + hex(b0)) + hex(b1)) + fu::get_view(str_1, (i + 1), str_1.size()));
    };
    return ID(str_1);
}

static fu_STR fnID(const s_Target& target_6, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET(target_6, module, ctx);
    const fu_STR& id_2 = (overload.name ? overload.name : fail(fu_STR{}, _here, ctx));
    return (isOp(target_6, module, ctx) ? ("operator"_fu + valid_operator(id_2)) : valid_identifier(fu_STR(id_2)));
}

static fu_STR fnLinkage(const s_Overload& overload)
{
    return ((is_never(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!(overload.flags & F_PUB) ? "static "_fu : fu_STR{});
}

static fu_STR cgFnSignature(const s_SolvedNode& fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, int& _hasMain, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target& target_6 = SolvedNodeData(fn, module, ctx).target;
    const s_Overload& overload = GET(target_6, module, ctx);
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(fn, module, ctx).items;
    fu_STR annot = typeAnnot((overload.type ? overload.type : fail(fu_STR{}, _here, ctx)), M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR id_2 { overload.name };
    if (id_2 == "main"_fu)
    {
        _hasMain = ((SolvedNodeData(fn, module, ctx).items.size() + FN_ARGS_BACK) ? 2 : 1);
        id_2 = "fu_MAIN"_fu;
    }
    else
        id_2 = fnID(SolvedNodeData(fn, module, ctx).target, module, ctx, _here);

    fu_STR src_2 = ((((fnLinkage(overload) + annot) + " "_fu) + id_2) + "("_fu);
    for (int i = 0; i < (items_5.size() + FN_ARGS_BACK); i++)
    {
        if (i)
            src_2 += ", "_fu;

        const s_SolvedNode* _0;
        src_2 += binding((*(_0 = &(items_5[i])) ? *_0 : fail(fu_STR{}, _here, ctx)), bool{}, bool{}, bool{}, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    };
    if (overload.flags & F_POSTFIX)
    {
        if (!(overload.flags & F_OPERATOR))
            fu_ASSERT();

        src_2 += ", /*postfix*/int "_fu;
    };
    src_2 += ")"_fu;
    return src_2;
}

static bool exprOK(fu::view<s_SolvedNode> nodes_1, const s_Module& module, const s_Context& ctx)
{
    for (int i = 0; i < nodes_1.size(); i++)
    {
        const s_SolvedNode& n = nodes_1[i];
        fu::view<fu::byte> k = SolvedNodeData(n, module, ctx).kind;
        if ((k == "jump"_fu) || (k == "loop"_fu) || (k == "try"_fu) || (k == "catch"_fu) || (k == "let"_fu) || (k == "block"_fu))
            return false;

        if (((k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu)) && !exprOK(SolvedNodeData(n, module, ctx).items, module, ctx))
            return false;

    };
    return true;
}

static fu_VEC<fu_STR> cgNodes(fu::view<s_SolvedNode> nodes_1, const int mode, const fu_STR& trail, fu::view<fu::byte> debug, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> result {};
    fu_VEC<fu_STR> _tv0 {};
    if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (mode & M_STMT)
        std::swap(_tv0, _current_fn.TEMPVARs););
    for (int i = 0; i < nodes_1.size(); i++)
    {
        const s_SolvedNode& node_1 = nodes_1[i];
        const bool isTrail = (trail && (i == (nodes_1.size() - 1)) && !maybe_nonzero(SolvedNodeData(node_1, module, ctx).type));
        fu_STR src_2 = (node_1 ? cgNode(node_1, (debug + ".cgNodes"_fu), (isTrail ? (mode & ~M_STMT) : int(mode)), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
        if (!(src_2 || (mode & M_STMT)))
            fail((((("cgNodes: empty output for Node(kind=`"_fu + SolvedNodeData(node_1, module, ctx).kind) + "` value=`"_fu) + SolvedNodeData(node_1, module, ctx).value) + "`)."_fu), _here, ctx);

        if ((mode & M_STMT) && _current_fn.TEMPVARs)
        {
            result += _current_fn.TEMPVARs;
            _current_fn.TEMPVARs.clear();
        };
        if (isTrail)
            src_2 = (((trail + "("_fu) + src_2) + ")"_fu);

        result.push(src_2);
    };
    return result;
}

static fu_STR cgComma(fu::view<s_SolvedNode> nodes_1, fu::view<fu::byte> debug, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> items_5 = cgNodes(nodes_1, 0, (*(const fu_STR*)fu::NIL), (debug + ".cgComma"_fu), _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    if (!items_5.size())
        return "(false /*empty parens*/)"_fu;

    if (items_5.size() == 1)
        return fu_STR(items_5[0]);

    fu_STR src_2 = "("_fu;
    for (int i = 0; i < items_5.size(); i++)
    {
        if (i)
            src_2 += ", "_fu;

        if (i < (items_5.size() - 1))
            src_2 += "(void)"_fu;

        src_2 += items_5[i];
    };
    return src_2 + ")"_fu;
}

static fu_STR emitTEMPVAR(fu::view<fu::byte> annot, bool& ptrflip, const fu_STR& id_2, const fu_STR& expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == fu::byte('&'));
    fu_STR id_3 = (id_2 ? fu_STR(id_2) : x7E_OZkl("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_3) : (((annot + " "_fu) + id_3) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return id_3;
}

static fu_STR cgMove(const s_Type& type_3, fu::view<fu::byte> src_2, const s_Module& module, const s_Context& ctx, fu_MAP<fu_STR, fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_trivial(type_3, module, ctx))
        return cgClone(type_3, src_2, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    return ((("static_cast<"_fu + typeAnnotBase(type_3, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "&&>("_fu) + src_2) + ")"_fu;
}

                                #ifndef DEFt_if_first_AwjY
                                #define DEFt_if_first_AwjY
inline fu::byte if_first_AwjY(fu::view<fu::byte> s)
{
    return s.size() ? s[0] : (*(const fu::byte*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_if_last_AwjY
                                #define DEFt_if_last_AwjY
inline fu::byte if_last_AwjY(fu::view<fu::byte> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const fu::byte*)fu::NIL);
}
                                #endif

static fu_STR cgStatements(fu::view<s_SolvedNode> nodes_1, int& count, const fu_STR& trail, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> lines = cgNodes(nodes_1, M_STMT, trail, "cgStatements"_fu, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    count = lines.size();
    fu_STR src_2 {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
            src_2 += (((if_first_AwjY(line) == fu::byte('\n')) ? (fu::byte('\n') + line) : (_indent + line)) + ((if_last_AwjY(line) == fu::byte(';')) ? fu::byte('\n') : fu::byte(';')));

    };
    return src_2;
}

static fu_STR cgBlock(fu::view<s_SolvedNode> nodes_1, const bool skipCurlies, const bool gnuStmtExpr, const s_Target& label, const s_Type& type_3, s_cg_CurrentFn& _current_fn, fu_STR& _indent, const s_Module& module, const s_Context& ctx, fu_MAP<fu_STR, fu_STR>& _libs, s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
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
    const fu_STR& name_3 = lbl.name;
    const int blockvals0 = _current_fn.blockvals.size();
    fu_DEFER(_current_fn.blockvals.shrink(blockvals0));
    if (type_3 && !is_void(type_3))
    {
        bool ptrflip = false;
        fu_STR annot = typeAnnot(type_3, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        fu_STR id_2 = emitTEMPVAR(annot, ptrflip, (name_3 ? (("L_"_fu + name_3) + "_v"_fu) : fu_STR{}), (*(const fu_STR*)fu::NIL), _current_fn);
        _current_fn.blockvals += s_cg_Blockval { s_Target(label), bool(ptrflip) };
        fu_STR out_1 = (ptrflip ? ("*"_fu + id_2) : cgMove(type_3, id_2, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
        close = (("(void)0;}), "_fu + out_1) + ")"_fu);
        trail = (id_2 + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    int count {};
    fu_STR src_2 = cgStatements(nodes_1, count, trail, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    if (lbl.name)
    {
        fu_STR prefixed_id = ("L_"_fu + name_3);
        if (fu::has(src_2, (("goto "_fu + prefixed_id) + ";"_fu)))
        {
            close = (((("  } "_fu + prefixed_id) + ":;"_fu) + indent0) + close);
            open = "{ {"_fu;
        };
    };
    if (!skipCurlies || (nodes_1.size() != 1) || (count != 1) || ((SolvedNodeData(nodes_1[0], module, ctx).kind != "jump"_fu) && (SolvedNodeData(nodes_1[0], module, ctx).kind != "call"_fu)))
        src_2 = (((((gnuOpen + indent0) + open) + src_2) + indent0) + close);

    return src_2;
}

static fu_STR cgBlock(const s_SolvedNode& node_1, const int mode, fu::view<fu::byte> debug, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<s_SolvedNode> items_5 = ((SolvedNodeData(node_1, module, ctx).kind == "block"_fu) ? fu_VEC<s_SolvedNode>(SolvedNodeData(node_1, module, ctx).items) : fu_VEC<s_SolvedNode> { fu_VEC<s_SolvedNode>::INIT<1> { s_SolvedNode(node_1) } });
    const s_Target& label = ((SolvedNodeData(node_1, module, ctx).kind == "block"_fu) ? SolvedNodeData(node_1, module, ctx).target : (*(const s_Target*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = label;

    const bool expr = !(mode & M_STMT);
    if (expr && !label && exprOK(items_5, module, ctx))
        return cgComma(items_5, (debug + ".cgBlock"_fu), _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    return cgBlock(items_5, !!(mode & M_OPT_CURLIES), expr, label, (expr ? SolvedNodeData(node_1, module, ctx).type : (*(const s_Type*)fu::NIL)), _current_fn, _indent, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
}

static void ensureFwdDecl(const s_Target& target_6, const s_Module& module, const s_Context& ctx, fu_VEC<s_BitSet>& _ffwd, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<fu_STR>& _ffwd_src)
{
    const s_Overload& overload = GET(target_6, module, ctx);
    if ((overload.kind != "fn"_fu) || (overload.name == "main"_fu))
        return;

    if (!add_once(_ffwd, target_6))
        return;

    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target_6), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, s_Target{}, s_Target{}, fu_VEC<fu_STR>{}, fu_VEC<int>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    const s_Type& ret = (overload.type ? overload.type : fail(fu_STR{}, _here, ctx));
    fu_STR annot = typeAnnot(ret, M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR name_3 = fnID(target_6, module, ctx, _here);
    fu_STR src_2 = ((((fnLinkage(overload) + annot) + " "_fu) + name_3) + "("_fu);
    fu::view<s_Argument> args_1 = EXT(target_6, module, ctx).args;
    for (int i = 0; i < args_1.size(); i++)
    {
        if (i)
            src_2 += ", "_fu;

        src_2 += typeAnnot(args_1[i].type, (M_ARGUMENT | M_FWDECL), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    };
    src_2 += ");\n"_fu;
    _ffwd_src += src_2;
    return;
}

static fu_STR cgFn(const s_SolvedNode& fn, const int mode, fu_STR& _indent, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_STR indent0 { _indent };
    fu_DEFER(_indent = indent0);
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(fn, module, ctx).items;
    const s_SolvedNode& body = items_5[(items_5.size() + FN_BODY_BACK)];
    const s_Overload& overload = GET(SolvedNodeData(fn, module, ctx).target, module, ctx);
    fu::view<fu::byte> id_2 = overload.name;
    if (!(overload.status & SS_FINALIZED))
        fail(("cgFn: fn not finalized: "_fu + id_2), _here, ctx);

    if (!body)
    {
        if (!(overload.kind == "__native"_fu))
            fail(((("cgFn: no body on non-native: "_fu + overload.kind) + " "_fu) + id_2), _here, ctx);

        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
    };
    _indent = "\n"_fu;
    fu_STR src_2 {};

    {
        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(SolvedNodeData(fn, module, ctx).target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, s_Target{}, s_Target{}, fu_VEC<fu_STR>{}, fu_VEC<int>{} };
        fu_DEFER(std::swap(_current_fn, current_fn0));
        std::swap(_current_fn, current_fn0);
        src_2 += cgFnSignature(fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _hasMain, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _ffwd_src, _moveFromConstRefHelpers);
        src_2 += cgBlock(body, M_STMT, (("cgFn("_fu + id_2) + ")"_fu), module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    };
    if (fu::has(_fdef, (id_2 ? id_2 : fail(fu_STR{}, _here, ctx))))
        ensureFwdDecl(SolvedNodeData(fn, module, ctx).target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);

    fu_STR dedupe = ((overload.flags & F_PUB) && (overload.flags & F_TEMPLATE) ? valid_identifier(fu_STR(overload.name)) : fu_STR{});
    if (dedupe)
        _fdef += ((("\n                                #ifndef DEFt_"_fu + dedupe) + "\n                                #define DEFt_"_fu) + dedupe);

    _fdef += (("\n"_fu + src_2) + "\n"_fu);
    if (dedupe)
        _fdef += "                                #endif\n"_fu;

    return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
}

static void ensureFnDef(const s_Target& target_6, const s_Overload& overload, const s_Module& module, s_TokenIdx& _here, const s_Context& ctx, s_BitSet& _idef, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (!(target_6.modid == module.modid))
        fail((((((x7E_OZkl((x7E_OZkl("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target_6.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu) + overload.kind) + " "_fu) + overload.name) + "`."_fu), _here, ctx);

    if (!add_once(_idef, target_6.index))
        return;

    const s_SolvedNode& node_1 = overload.solved;
    if (!(SolvedNodeData(node_1, module, ctx).kind == "fn"_fu))
        fail("ensureFnDef non-fn"_fu, _here, ctx);

    cgFn(node_1, M_STMT, _indent, module, ctx, _here, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _fdef, _unity, _unity_because, _idef, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR via(s_TEMPVAR& tv, const s_Type& type_3, fu::view<fu::byte> expr, fu_MAP<fu_STR, fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
        tv.id = emitTEMPVAR(fu_STR((tv.annot = typeAnnot(type_3, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn))), tv.ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn);

    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;

    if (is_trivial(type_3, module, ctx))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;

    return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;
}

static bool isFieldChain(const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx)
{
    if (SolvedNodeData(node_1, module, ctx).kind != "call"_fu)
        return false;

    const s_Overload& t = GET(SolvedNodeData(node_1, module, ctx).target, module, ctx);
    if (t.kind == "field"_fu)
        return isFieldChain(only_Mzjf(SolvedNodeData(node_1, module, ctx).items), module, ctx);

    if (t.kind == "var"_fu)
        return true;

    return false;
}

static void cgAppend_visit(const fu_STR& canon_1, const fu_STR& into, const s_SolvedNode& stuff, fu_STR& src_2, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if ((SolvedNodeData(stuff, module, ctx).kind != "call"_fu) || (SolvedNodeData(stuff, module, ctx).value != "~"_fu) || (SolvedNodeData(stuff, module, ctx).type.vtype.canon != canon_1) || (SolvedNodeData(stuff, module, ctx).items.size() != 2))
    {
        fu_STR val = cgNode(stuff, "cgAppend_visit"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        if (src_2.size() > 1)
            src_2 += ", "_fu;

        src_2 += ((into + " += "_fu) + val);
    }
    else
    {
        cgAppend_visit(canon_1, into, SolvedNodeData(stuff, module, ctx).items[0], src_2, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        cgAppend_visit(canon_1, into, SolvedNodeData(stuff, module, ctx).items[1], src_2, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    };
}

static fu_STR cgAppend(const s_SolvedNode& node_1, const fu_STR& into, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_STR src_2 = "("_fu;
    cgAppend_visit(SolvedNodeData(node_1, module, ctx).type.vtype.canon, into, SolvedNodeData(node_1, module, ctx).items[1], src_2, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    src_2 += ")"_fu;
    return src_2;
}

static fu_STR cgPrint(fu::view<fu_STR> items_5, fu_MAP<fu_STR, fu_STR>& _libs)
{
    include("<iostream>"_fu, _libs);
    fu_STR src_2 = "(std::cout"_fu;
    for (int i = 0; i < items_5.size(); i++)
        src_2 += (" << "_fu + items_5[i]);

    src_2 += " << '\\n')"_fu;
    return src_2;
}

static fu_STR cgCall(const s_SolvedNode& node_1, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Extended& ext = EXT(SolvedNodeData(node_1, module, ctx).target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target_6 = (*(_0 = &(GET(SolvedNodeData(node_1, module, ctx).target, module, ctx))) ? *_0 : fail(fu_STR{}, _here, ctx));
    [[maybe_unused]] fu_VEC<fu_STR> _items {};
    const fu_VEC<s_SolvedNode>& items_5 = SolvedNodeData(node_1, module, ctx).items;
    if ((target_6.kind == "__native"_fu) && (target_6.name[0] == fu::byte('\n')))
    {
        fu_STR id_2 = fu::slice(target_6.name, 1);
        const int idx = find_WqUX(id_2, fu::byte('\n'));
        if (idx > -1)
        {
            include(fu::slice(id_2, 0, idx), _libs);
            id_2 = fu::slice(id_2, (idx + 1));
        };
        if (id_2[0] == fu::byte('.'))
        {
            if (items_5.size() > 1)
                return (((ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + id_2) + "("_fu) + REST(1, items_5, ext, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;

            return ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + id_2;
        };
        if (items_5)
        {
            if (hasIdentifierChars(id_2))
                return ((id_2 + "("_fu) + REST(0, items_5, ext, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;

            if (binSkipParens(id_2, mode))
                return (((ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + " "_fu) + id_2) + " "_fu) + ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

            return ((((("("_fu + ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + " "_fu) + id_2) + " "_fu) + ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;
        };
        return id_2;
    };
    if (target_6.kind == "type"_fu)
    {
        if (!items_5)
            return cgDefault(target_6.type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

        if (!(isStruct(target_6.type)))
            fail("cgCall: defctor/type not a struct."_fu, _here, ctx);

        fu_STR args_1 = REST(0, items_5, ext, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        return ((typeAnnotBase(target_6.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + " { "_fu) + args_1) + " }"_fu;
    };
    const fu_STR& id_2 = (target_6.name ? target_6.name : fail(fu_STR{}, _here, ctx));
    if (target_6.kind == "var"_fu)
    {
        if (!target_6.local_of)
        {
            if (SolvedNodeData(node_1, module, ctx).target.modid != module.modid)
                cgForeignGlobal(SolvedNodeData(node_1, module, ctx).target, _ffwd, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

            return ID(id_2);
        };
        return localID(SolvedNodeData(node_1, module, ctx).target, bool{}, module, ctx, _current_fn);
    };
    if (target_6.kind == "field"_fu)
        return (ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + "."_fu) + ID(id_2);

    if (SolvedNodeData(node_1, module, ctx).target.modid && (target_6.kind == "fn"_fu))
    {
        if ((SolvedNodeData(target_6.solved, module, ctx).flags & F_TEMPLATE) || !(SolvedNodeData(target_6.solved, module, ctx).flags & F_PUB))
            ensureFnDef(SolvedNodeData(node_1, module, ctx).target, target_6, module, _here, ctx, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _fdef, _unity, _unity_because, _ffwd_src, _moveFromConstRefHelpers);
        else if (SolvedNodeData(node_1, module, ctx).target.modid != module.modid)
            ensureFwdDecl(SolvedNodeData(node_1, module, ctx).target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);

    };
    if (isOp(SolvedNodeData(node_1, module, ctx).target, module, ctx))
    {
        const s_SolvedNode* _1;
        const s_SolvedNode& head = (*(_1 = &(items_5[0])) ? *_1 : fail(fu_STR{}, _here, ctx));
        if (items_5.size() == 1)
            return ((target_6.flags & F_POSTFIX) ? (ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + valid_operator(id_2)) : (valid_operator(id_2) + ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)));

        if (items_5.size() == 2)
        {
            if (id_2 == "[]"_fu)
            {
                if (is_mutref(SolvedNodeData(node_1, module, ctx).type, _here, ctx))
                    return ((ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + ".mutref("_fu) + ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;

                return ((ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + "["_fu) + ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + "]"_fu;
            };
            if (id_2 == "="_fu)
            {
                if ((SolvedNodeData(head, module, ctx).kind == "call"_fu) && (SolvedNodeData(head, module, ctx).value == "[]"_fu) && (SolvedNodeData(head, module, ctx).items.size() == 2))
                {
                    const s_SolvedNode* _2;
                    if (type_isMap(SolvedNodeData((*(_2 = &(SolvedNodeData(head, module, ctx).items[0])) ? *_2 : fail(fu_STR{}, _here, ctx)), module, ctx).type))
                    {
                        const s_SolvedNode* _3;
                        const s_SolvedNode* _4;
                        return ((((("("_fu + cgNode((*(_3 = &(SolvedNodeData(head, module, ctx).items[0])) ? *_3 : fail(fu_STR{}, _here, ctx)), "cgCall(Map= #0)"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ".upsert("_fu) + cgNode((*(_4 = &(SolvedNodeData(head, module, ctx).items[1])) ? *_4 : fail(fu_STR{}, _here, ctx)), "cgCall(Map= #1)"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ") = "_fu) + ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;
                    };
                };
            };
            if (id_2 == "||="_fu)
            {
                fu_STR arg0 {};
                if ((SolvedNodeData(head, module, ctx).kind == "call"_fu) && (SolvedNodeData(head, module, ctx).value == "[]"_fu) && (SolvedNodeData(head, module, ctx).items.size() == 2))
                {
                    const s_SolvedNode* _5;
                    if (type_isMap(SolvedNodeData((*(_5 = &(SolvedNodeData(head, module, ctx).items[0])) ? *_5 : fail(fu_STR{}, _here, ctx)), module, ctx).type))
                    {
                        const s_SolvedNode* _6;
                        const s_SolvedNode* _7;
                        arg0 = (((cgNode((*(_6 = &(SolvedNodeData(head, module, ctx).items[0])) ? *_6 : fail(fu_STR{}, _here, ctx)), "cgCall(Map||= #0)"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + ".upsert("_fu) + cgNode((*(_7 = &(SolvedNodeData(head, module, ctx).items[1])) ? *_7 : fail(fu_STR{}, _here, ctx)), "cgCall(Map||= #1)"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu);
                    };
                };
                fu_STR* _8;
                (*(_8 = &(arg0)) ? *_8 : *_8 = ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers));
                s_TEMPVAR tv {};
                fu_STR condcons = via(tv, SolvedNodeData(head, module, ctx).type, arg0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                fu_STR alt = (tv.ptrflip ? ("*"_fu + tv.id) : fu_STR((tv.id ? tv.id : arg0)));
                return (((("("_fu + condcons) + alt) + " = "_fu) + ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;
            };
            if ((id_2 == "~="_fu) && type_isArray(SolvedNodeData(head, module, ctx).type) && isFieldChain(SolvedNodeData(node_1, module, ctx).items[0], module, ctx) && (SolvedNodeData(SolvedNodeData(node_1, module, ctx).items[1], module, ctx).value == "~"_fu) && (SolvedNodeData(SolvedNodeData(node_1, module, ctx).items[1], module, ctx).type.vtype.canon == SolvedNodeData(head, module, ctx).type.vtype.canon))
                return cgAppend(node_1, ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

            fu_STR arg0 = ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
            fu_STR arg1 {};
            if (((id_2 == "="_fu) || (id_2 == "||="_fu) || (id_2 == "&&="_fu)) && (SolvedNodeData(items_5[1], module, ctx).kind == "copy"_fu))
                arg1 = cgNode(only_Mzjf(SolvedNodeData(items_5[1], module, ctx).items), (("cgCall("_fu + id_2) + " skipcopy)"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

            fu_STR op = valid_operator(id_2);
            if (binSkipParens(op, mode))
                return (((arg0 + " "_fu) + op) + " "_fu) + (arg1 ? fu_STR(arg1) : ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers));
            else
                return ((((("("_fu + arg0) + " "_fu) + op) + " "_fu) + (arg1 ? fu_STR(arg1) : ARG(1, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers))) + ")"_fu;

        };
    };
    if ((id_2 == "STEAL"_fu) && (items_5.size() == 1))
        return cgMove(SolvedNodeData(node_1, module, ctx).type, ARG(0, items_5, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (id_2 == "println"_fu)
        return cgPrint(cgNodes(items_5, 0, (*(const fu_STR*)fu::NIL), "prinln"_fu, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers), _libs);

    if (!(id_2 != "__native"_fu))
        fu_ASSERT();

    return ((valid_identifier(fu_STR(id_2)) + "("_fu) + REST(0, items_5, ext, node_1, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;
}

                                #ifndef DEFt_has_WqUX
                                #define DEFt_has_WqUX
inline bool has_WqUX(fu::view<fu::byte> a, const fu::byte b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR cgLiteral(const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx, fu_MAP<fu_STR, fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    fu_STR src_2 { SolvedNodeData(node_1, module, ctx).value };
    if (is_unsigned(SolvedNodeData(node_1, module, ctx).type) && !has_WqUX(src_2, fu::byte('u')))
        src_2 += fu::byte('u');

    if (is_floating_pt(SolvedNodeData(node_1, module, ctx).type))
    {
        if (!has_WqUX(src_2, fu::byte('.')))
            src_2 += ".0"_fu;

        if (SolvedNodeData(node_1, module, ctx).type.vtype.canon == "f32"_fu)
        {
            if (has_WqUX(src_2, fu::byte('x')))
                src_2 = (("float("_fu + src_2) + ")"_fu);
            else
                src_2 += "f"_fu;

        }
        else if (SolvedNodeData(node_1, module, ctx).type.vtype.canon != "f64"_fu)
            fu_ASSERT();

    };
    if (fu::lmatch(src_2, "0o"_fu))
        src_2.splice(1, 1);

    if (src_2.size() > 16)
    {
        s_Intlit parse_3 = Intlit(src_2);
        if (parse_3.negative && (parse_3.absval == 0x8000000000000000ull))
            return "(-9223372036854775807-1)"_fu;

    };
    if (is_integral(SolvedNodeData(node_1, module, ctx).type) && (SolvedNodeData(node_1, module, ctx).type.vtype.canon != "u32"_fu) && (SolvedNodeData(node_1, module, ctx).type.vtype.canon != "i32"_fu))
    {
        if ((SolvedNodeData(node_1, module, ctx).type.vtype.canon == "u64"_fu) || (SolvedNodeData(node_1, module, ctx).type.vtype.canon == "i64"_fu))
        {
            if (!has_WqUX(src_2, fu::byte('l')))
                return src_2 + "ll"_fu;

        }
        else
            return ((typeAnnotBase(SolvedNodeData(node_1, module, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src_2) + ")"_fu;

    };
    return src_2;
}

static fu_STR cgCharLiteral(const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx, fu_MAP<fu_STR, fu_STR>& _libs)
{
    fu_STR esc {};
    for (int i = 0; i < SolvedNodeData(node_1, module, ctx).value.size(); i++)
    {
        const fu::byte c = SolvedNodeData(node_1, module, ctx).value[i];
        if (c == fu::byte('\n'))
            esc += "\\n"_fu;
        else if (c == fu::byte('\r'))
            esc += "\\r"_fu;
        else if (c == fu::byte('\t'))
            esc += "\\t"_fu;
        else if (c == fu::byte('\v'))
            esc += "\\v"_fu;
        else if (c == fu::byte('\\'))
            esc += "\\\\"_fu;
        else if (c == fu::byte('\''))
            esc += "\\'"_fu;
        else
            esc += c;

    };
    include("<fu/int.h>"_fu, _libs);
    return ("fu::byte('"_fu + esc) + "')"_fu;
}

static fu_STR cgStringLiteral(const s_SolvedNode& node_1, fu_MAP<fu_STR, fu_STR>& _libs, const s_Module& module, const s_Context& ctx)
{
    annotateString(_libs);
    fu_STR esc {};
    for (int i = 0; i < SolvedNodeData(node_1, module, ctx).value.size(); i++)
    {
        const fu::byte c = SolvedNodeData(node_1, module, ctx).value[i];
        if (c == fu::byte('\n'))
            esc += "\\n"_fu;
        else if (c == fu::byte('\r'))
            esc += "\\r"_fu;
        else if (c == fu::byte('\t'))
            esc += "\\t"_fu;
        else if (c == fu::byte('\v'))
            esc += "\\v"_fu;
        else if (c == fu::byte('\\'))
            esc += "\\\\"_fu;
        else if (c == fu::byte('"'))
            esc += "\\\""_fu;
        else
            esc += c;

    };
    return ("\""_fu + esc) + "\"_fu"_fu;
}

                                #ifndef DEFt_join_VtCz
                                #define DEFt_join_VtCz
inline fu_STR join_VtCz(fu::view<fu_STR> a, fu::view<fu::byte> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

    int size = a[0].size();
    for (int i = 1; i < a.size(); i++)
        size += (sep.size() + a[i].size());

    fu_STR res {};
    res.grow<false>(size);
    fu::view<fu::byte> head = a[0];
    size = head.size();
    fu::view_assign(fu::get_view_mut(res, 0, head.size()), head);
    for (int i_1 = 1; i_1 < a.size(); i_1++)
    {
        fu::view<fu::byte> range = a[i_1];
        fu::view_assign(fu::get_view_mut(res, size, (size + sep.size())), sep);
        size += sep.size();
        fu::view_assign(fu::get_view_mut(res, size, (size + range.size())), range);
        size += range.size();
    };
    return res;
}
                                #endif

static fu_STR cgArrayLiteral(const s_SolvedNode& node_1, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (SolvedNodeData(node_1, module, ctx).target)
        return cgCall(node_1, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    fu_VEC<fu_STR> items_5 = cgNodes(SolvedNodeData(node_1, module, ctx).items, 0, (*(const fu_STR*)fu::NIL), "cgArrayLiteral"_fu, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    if (!items_5.size())
        return cgDefault(SolvedNodeData(node_1, module, ctx).type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    fu_STR list = (("{ "_fu + join_VtCz(items_5, ", "_fu)) + " }"_fu);
    fu_STR annot = typeAnnotBase(SolvedNodeData(node_1, module, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (is_ref(callarg) && !type_isArray(callarg))
    {
        include("<fu/view.h>"_fu, _libs);
        return ((((x7E_OZkl("(fu::slate<"_fu, fu::i64dec(items_5.size())) + ", "_fu) + fu::slice(annot, 7)) + " "_fu) + list) + ")"_fu;
    };
    return ((x7E_OZkl((((annot + " { "_fu) + annot) + "::INIT<"_fu), fu::i64dec(items_5.size())) + "> "_fu) + list) + " }"_fu;
}

static fu_STR cgDefinit(const s_SolvedNode& node_1, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgArrayLiteral(node_1, mode, callarg, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
}

static bool supportsNRVO(const s_Overload& o, const s_cg_CurrentFn& _current_fn)
{
    return (o.kind == "var"_fu) && !(o.flags & F_ARG) && (o.local_of == _current_fn.target.index);
}

static bool Lifetime_hasArguments(const s_Lifetime& lifetime_1)
{
    for (int i = 0; i < lifetime_1.uni0n.size(); i++)
    {
        if (Region_isArg(lifetime_1.uni0n[i]))
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

static void ensureMoveFromConstRefHelper(const s_Target& target_6, fu_VEC<s_BitSet>& _moveFromConstRefHelpers, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src)
{
    if (!add_once(_moveFromConstRefHelpers, target_6))
        return;

    fu_STR name_3 = fnID(target_6, module, ctx, _here);
    fu::view<s_Argument> args_1 = EXT(target_6, module, ctx).args;
    fu_STR annot = typeAnnot(clear_refs(s_Type(GET(target_6, module, ctx).type)), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR src_2 = (((("inline "_fu + annot) + " "_fu) + name_3) + "("_fu);
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(GET(target_6, module, ctx).solved, module, ctx).items;
    fu::view<s_Region> retargs = GET(target_6, module, ctx).type.lifetime.uni0n;
    fu_STR body = (((((("return static_cast<"_fu + annot) + "&&>(const_cast<"_fu) + annot) + "&>("_fu) + name_3) + "("_fu);
    for (int i = 0; i < args_1.size(); i++)
    {
        const s_SolvedNode* _0;
        const s_SolvedNode& argNode = (*(_0 = &(items_5[i])) ? *_0 : fail(fu_STR{}, _here, ctx));
        const s_Target& argTarget = SolvedNodeData(argNode, module, ctx).target;
        const bool forceValue = has_urEh(retargs, Region_fromArgIndex(argTarget.index));
        fu_STR binding_1 = binding(argNode, bool{}, bool{}, forceValue, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        int space = -1;
        for (int i_1 = binding_1.size(); i_1-- > 0; )
        {
            if (binding_1[i_1] == fu::byte(' '))
            {
                space = i_1;
                break;
            };
        };
        if (!(space > 0))
            fail("ensureMoveFromConstRefHelper: cant split annot/id."_fu, _here, ctx);

        fu_STR pass = fu::slice(binding_1, (space + 1));
        if (!is_ref(SolvedNodeData(argNode, module, ctx).type))
            pass = (((("static_cast<"_fu + fu::slice(binding_1, 0, space)) + "&&>("_fu) + pass) + ")"_fu);

        if (i)
        {
            src_2 += ", "_fu;
            body += ", "_fu;
        };
        src_2 += binding_1;
        body += pass;
    };
    src_2 += ((")\n{\n    "_fu + body) + ")));\n}\n"_fu);
    _fdef += (("\n"_fu + src_2) + "\n"_fu);
}

static fu_STR cgMoveOrClone(fu::view<fu::byte> kind_3, const s_Type& type_3, fu::view<fu::byte> src_2, const s_Module& module, const s_Context& ctx, fu_MAP<fu_STR, fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (kind_3 == "move"_fu)
        return cgMove(type_3, src_2, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    return cgClone(type_3, src_2, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgMoveOrClone(const s_SolvedNode& node_1, const int mode, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_SolvedNode& expr = only_Mzjf(SolvedNodeData(node_1, module, ctx).items);
    if (SolvedNodeData(node_1, module, ctx).kind == "move"_fu)
    {
        if (mode & M_RETURN)
        {
            const bool nrvo = ((SolvedNodeData(expr, module, ctx).kind == "call"_fu) && (SolvedNodeData(expr, module, ctx).items.size() == 0) && supportsNRVO(GET(SolvedNodeData(expr, module, ctx).target, module, ctx), _current_fn));
            if (nrvo)
                return cgNode(expr, "NRVO"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

        };
        if (!is_trivial(SolvedNodeData(node_1, module, ctx).type, module, ctx))
        {
            if (SolvedNodeData(expr, module, ctx).kind == "call"_fu)
            {
                const s_Overload& o = GET(SolvedNodeData(expr, module, ctx).target, module, ctx);
                if (!is_mutref(o.type, _here, ctx) && Lifetime_hasArguments(o.type.lifetime))
                {
                    ensureMoveFromConstRefHelper(SolvedNodeData(expr, module, ctx).target, _moveFromConstRefHelpers, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src);
                    return cgNode(expr, "cgMoveFromConstRefHelper"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
                };
            };
        };
    };
    return cgMoveOrClone(SolvedNodeData(node_1, module, ctx).kind, SolvedNodeData(node_1, module, ctx).type, cgNode(expr, "cgMoveOrClone"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR blockWrapSubstatement(const s_SolvedNode& node_1, const int mode, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgBlock(node_1, ((M_STMT | M_OPT_CURLIES) | mode), "blockWrapSubstatement"_fu, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR blockWrap_unlessIf(const s_SolvedNode& node_2, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return (((SolvedNodeData(node_2, module, ctx).kind == "if"_fu) || (SolvedNodeData(node_2, module, ctx).kind == "and"_fu)) ? (" "_fu + cgNode(node_2, "cgIf.blockWrap_unlessIf"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) : blockWrapSubstatement(node_2, 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers));
}

static fu_STR cgIf(const s_SolvedNode& node_1, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_SolvedNode& n0 = SolvedNodeData(node_1, module, ctx).items[0];
    const s_SolvedNode& n1 = SolvedNodeData(node_1, module, ctx).items[1];
    const s_SolvedNode& n2 = SolvedNodeData(node_1, module, ctx).items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode(n0, "cgIf[cond]"_fu, (M_RETBOOL | (stmt ? M_PARENS : (*(const int*)fu::NIL))), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement(n1, 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : cgNode(n1, "cgIf[cons]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf(n2, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : cgNode(n2, "cgIf[alt]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) : fu_STR{});
    if (stmt)
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((_indent + "else"_fu) + alt) : fu_STR{});

    return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;
}

static void cgAndOr_concat(fu_STR& src_2, fu::view<fu::byte> op, fu::view<s_SolvedNode> items_5, const bool parens, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const int mode = (M_RETBOOL | (parens && (items_5.size() == 1) ? M_PARENS : (*(const int*)fu::NIL)));
    for (int i = 0; i < items_5.size(); i++)
    {
        if (i)
            src_2 += op;

        src_2 += cgNode(items_5[i], (x7E_OZkl("cgAndOr_concat["_fu, fu::i64dec(i)) + "]"_fu), mode, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    };
}

static fu_STR via(s_TEMPVAR& tv, const s_Type& type_3, const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (isFieldChain(expr, module, ctx))
    {
        fu_STR trivial = cgNode(expr, "TEMPVAR[fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    };
    if ((SolvedNodeData(expr, module, ctx).kind == "copy"_fu) || (SolvedNodeData(expr, module, ctx).kind == "move"_fu))
    {
        fu::view<fu::byte> kind_3 = SolvedNodeData(expr, module, ctx).kind;
        const s_SolvedNode& expr_1 = only_Mzjf(SolvedNodeData(expr, module, ctx).items);
        if (isFieldChain(expr_1, module, ctx))
        {
            fu_STR trivial = cgNode(expr_1, "TEMPVAR[copymov/fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
            return ((trivial + " ? "_fu) + cgMoveOrClone(kind_3, type_3, trivial, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn)) + " : "_fu;
        };
    };
    return via(tv, type_3, cgNode(expr, "TEMPVAR[usual]"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgOr(const s_SolvedNode& node_1, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Type& type_3 = SolvedNodeData(node_1, module, ctx).type;
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(node_1, module, ctx).items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        fu_STR src_2 = "if (!("_fu;
        cgAndOr_concat(src_2, " || "_fu, fu::get_view(items_5, 0, (items_5.size() - 1)), true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        src_2 += "))"_fu;
        src_2 += blockWrapSubstatement(items_5[(items_5.size() - 1)], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        return src_2;
    };
    fu_STR src_2 = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (is_bool(type_3))
        cgAndOr_concat(src_2, " || "_fu, items_5, true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    else
    {
        s_TEMPVAR tv {};
        for (int i = 0; i < (items_5.size() - 1); i++)
        {
            const s_SolvedNode* _0;
            const s_SolvedNode& item = (*(_0 = &(items_5[i])) ? *_0 : fail(fu_STR{}, _here, ctx));
            s_SolvedNode tail { item };
            if (SolvedNodeData(item, module, ctx).kind == "and"_fu)
            {
                fu::view<s_SolvedNode> items_6 = SolvedNodeData(item, module, ctx).items;
                const s_SolvedNode* _1;
                tail = (*(_1 = &(items_6[(items_6.size() - 1)])) ? *_1 : fail(fu_STR{}, _here, ctx));
                cgAndOr_concat(src_2, " && "_fu, fu::get_view(items_6, 0, (items_6.size() - 1)), bool{}, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
                src_2 += " && "_fu;
            };
            src_2 += via(tv, type_3, tail, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        };
        const s_SolvedNode* _2;
        const s_SolvedNode& tail = (*(_2 = &(items_5[(items_5.size() - 1)])) ? *_2 : fail(fu_STR{}, _here, ctx));
        src_2 += cgNode(tail, "cgOr"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    };
    if (!(mode & M_PARENS))
        src_2 += ")"_fu;

    return src_2;
}

static fu_STR cgAnd(fu::view<s_SolvedNode> items_5, const s_Type& type_3, const int mode, fu::view<fu::byte> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        fu_STR src_2 = "if ("_fu;
        cgAndOr_concat(src_2, " && "_fu, fu::get_view(items_5, 0, (items_5.size() - 1)), true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        src_2 += ")"_fu;
        src_2 += blockWrapSubstatement(items_5[(items_5.size() - 1)], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
        return src_2;
    };
    fu_STR src_2 = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (is_bool(type_3))
        cgAndOr_concat(src_2, " && "_fu, items_5, true, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    else
    {
        s_TEMPVAR tv {};
        if (is_mutref(type_3, _here, ctx))
        {
            for (int i = 0; i < items_5.size(); i++)
            {
                const s_SolvedNode& item = items_5[i];
                if (i < (items_5.size() - 1))
                    src_2 += ("!"_fu + via(tv, type_3, item, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers));
                else
                    src_2 += cgNode(item, (x7E_OZkl((debug + ".cgAnd[mutref "_fu), fu::i64dec(i)) + "]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

            };
        }
        else
        {
            const int N = items_5.size();
            const bool retSecondLast = is_never(SolvedNodeData(items_5[(N - 1)], module, ctx).type);
            const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
            cgAndOr_concat(src_2, " && "_fu, fu::get_view(items_5, 0, condEnd), bool{}, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
            if (retSecondLast)
            {
                if (condEnd)
                    src_2 += " && "_fu;

                src_2 += ("!"_fu + via(tv, type_3, items_5[(N - 2)], module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers));
                src_2 += cgNode(items_5[(N - 1)], (debug + ".cgAnd[retSecondLast]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
            }
            else
            {
                src_2 += (" ? "_fu + cgNode(items_5[(N - 1)], (debug + ".cgAnd[usual]"_fu), 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers));
                src_2 += (" : "_fu + cgDefault(type_3, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn));
            };
        };
    };
    if (!(mode & M_PARENS))
        src_2 += ")"_fu;

    return src_2;
}

static fu_STR cgAnd(const s_SolvedNode& node_1, const int mode, fu::view<fu::byte> debug, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgAnd(SolvedNodeData(node_1, module, ctx).items, SolvedNodeData(node_1, module, ctx).type, mode, debug, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR cgMain(const int _hasMain, fu_MAP<fu_STR, fu_STR>& _libs)
{
    if (!_hasMain)
        return fu_STR{};

    if (_hasMain != 2)
        return "\n\nint main() { return fu_MAIN(); }\n"_fu;

    annotateString(_libs);
    return (((((((("\n\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));"_fu) + "\n}\n"_fu;
}

static fu_STR collectDedupes(fu_VEC<fu_STR>&& values_1, const bool leadingNewline)
{
    if (!values_1.size())
        return fu_STR{};

    fu_STR out_1 = (leadingNewline ? "\n"_fu : fu_STR{});
    fu::sort(values_1);
    for (int i = 0; i < values_1.size(); i++)
        out_1 += values_1[i];

    return out_1;
}

static fu_STR collectDedupes(const fu_MAP<fu_STR, fu_STR>& dedupes, const bool leadingNewline)
{
    return collectDedupes(fu_VEC<fu_STR>(dedupes.m_values), leadingNewline);
}

static fu_STR cgRoot(const s_SolvedNode& root_3, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    int count {};
    fu_STR src_2 = cgStatements(SolvedNodeData(root_3, module, ctx).items, count, (*(const fu_STR*)fu::NIL), _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    fu_STR main = cgMain(_hasMain, _libs);
    fu_STR header = ((((collectDedupes(_libs, bool{}) + collectDedupes(fu_VEC<fu_STR>(_tfwd_src), true)) + collectDedupes(fu_VEC<fu_STR>(_ffwd_src), true)) + _tdef) + (_fdef ? (("\n#ifndef FU_NO_FDEFs\n"_fu + _fdef) + "\n#endif\n"_fu) : fu_STR{}));
    return (header + src_2) + main;
}

static fu_STR cgFnDef(const s_SolvedNode& fndef, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Overload& o = GET(SolvedNodeData(fndef, module, ctx).target, module, ctx);
    const s_SolvedNode& n = o.solved;
    if (!(n ? (o.flags & F_PUB) : int{}))
        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);

    if (!(SolvedNodeData(n, module, ctx).kind == "fn"_fu))
        fail("cgFnDef non-fn"_fu, _here, ctx);

    return cgFn(n, mode, _indent, module, ctx, _here, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _fdef, _unity, _unity_because, _idef, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR cgEmpty(const int mode)
{
    return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
}

static fu_STR cgJump(const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target& dest_idx = SolvedNodeData(node_1, module, ctx).target;
    const bool use_return = (dest_idx == _current_fn.target);
    const s_Overload& dest = GET(dest_idx, module, ctx);
    if (SolvedNodeData(node_1, module, ctx).items)
    {
        const s_SolvedNode& head = only_Mzjf(SolvedNodeData(node_1, module, ctx).items);
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
            fu_STR value_3 = cgNode(head, "cgJump[val.break]"_fu, (!assign ? M_STMT : (*(const int*)fu::NIL)), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
            if (ptrflip)
                value_3 = (("&("_fu + value_3) + ")"_fu);

            return (((("{ "_fu + assign) + value_3) + "; goto L_"_fu) + dest.name) + "; }"_fu;
        };
        if (is_never(SolvedNodeData(head, module, ctx).type))
        {
            if (is_never(dest.type))
                return cgNode(head, "cgJump[val.return.never]"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

            if (is_void(dest.type))
                return "return (void) "_fu + cgNode(head, "cgJump[val.return.void]"_fu, M_RETURN, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

        };
        return "return "_fu + cgNode(head, "cgJump[val.return]"_fu, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
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

static fu_STR cgLoop(const s_SolvedNode& node_1, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
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
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(node_1, module, ctx).items;
    const s_SolvedNode& n_init = items_5[LOOP_INIT];
    const s_SolvedNode& n_cond = items_5[LOOP_COND];
    const s_SolvedNode& n_body = items_5[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items_5[LOOP_POST_COND];
    const s_SolvedNode& n_post = items_5[LOOP_POST];
    fu_STR init = (n_init ? cgNode(n_init, "cgLoop[init]"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode(n_cond, "cgLoop[cond]"_fu, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode(n_pcnd, "cgLoop[pcnd]"_fu, M_RETBOOL, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR post = (n_post ? cgNode(n_post, "cgLoop[post]"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    const s_Target& label = SolvedNodeData(node_1, module, ctx).target;
    _current_fn.can_break = label;
    fu_STR body = (n_body ? blockWrapSubstatement(n_body, M_LOOP_BODY, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR breakLabel {};
    const s_Overload& lbl = (label ? GET(label, module, ctx) : (*(const s_Overload*)fu::NIL));
    const fu_STR& name_3 = lbl.name;
    if (body && name_3)
    {
        fu_STR brk = ("L_"_fu + name_3);
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

static fu_STR cgTryCatch(fu::view<fu::byte> tRy, const fu_STR& err, fu::view<fu::byte> cAtch, fu::view<fu::byte> _indent)
{
    return ((((((((((((((((_indent + "try"_fu) + _indent) + "{"_fu) + tRy) + _indent) + "}"_fu) + _indent) + "catch (const std::exception& o_0)"_fu) + _indent) + "{"_fu) + _indent) + "    fu_STR "_fu) + ID(err)) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + _indent) + "}\n"_fu;
}

static fu_STR cgTryCatch(const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(node_1, module, ctx).items;
    fu_STR tRy = blockWrapSubstatement(items_5[0], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    const fu_STR& err = GET(SolvedNodeData(items_5[1], module, ctx).target, module, ctx).name;
    fu_STR cAtch = blockWrapSubstatement(items_5[2], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    return cgTryCatch(tRy, err, cAtch, _indent);
}

static fu_STR cgCatch(const s_SolvedNode& node_1, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<s_SolvedNode> items_5 = SolvedNodeData(node_1, module, ctx).items;
    const s_SolvedNode& var_name = items_5[0];
    if (SolvedNodeData(var_name, module, ctx).kind != "let"_fu)
        return cgTryCatch(node_1, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    fu_STR try_init = (cgNode(SolvedNodeData(items_5[0], module, ctx).items[LET_INIT], "cgCatch"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + ";"_fu);
    const fu_STR& err = GET(SolvedNodeData(items_5[1], module, ctx).target, module, ctx).name;
    fu_STR cAtch = blockWrapSubstatement(items_5[2], 0, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    fu_STR vardecl = (!is_never(SolvedNodeData(var_name, module, ctx).type) ? (binding(var_name, bool{}, true, bool{}, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers) + " = {};"_fu) : fu_STR{});
    return vardecl + cgTryCatch((is_never(SolvedNodeData(var_name, module, ctx).type) ? ((_indent + "    "_fu) + try_init) : ((((_indent + "    "_fu) + SolvedNodeData(var_name, module, ctx).value) + " = "_fu) + try_init)), err, cAtch, _indent);
}

static fu_STR cgDefer(const s_SolvedNode& node_1, fu_MAP<fu_STR, fu_STR>& _libs, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    include("<fu/defer.h>"_fu, _libs);
    fu_STR which = ((SolvedNodeData(node_1, module, ctx).value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((SolvedNodeData(node_1, module, ctx).value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode(only_Mzjf(SolvedNodeData(node_1, module, ctx).items), "defer"_fu, M_STMT, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;
}

static fu_STR cgNode(const s_SolvedNode& node_1, fu::view<fu::byte> debug, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_MAP<fu_STR, fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_STR& _fdef, fu_VEC<int>& _unity, fu_VEC<int>& _unity_because, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<fu::byte> _0 {};
    fu::view<fu::byte> k = ((_0 = SolvedNodeData(node_1, module, ctx).kind) ? static_cast<fu::view<fu::byte>&&>(_0) : fail(("cgNode: No node.kind: "_fu + debug), _here, ctx));
    HERE(SolvedNodeData(node_1, module, ctx).token, _here);
    if (k == "call"_fu)
        return cgCall(node_1, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "int"_fu)
        return cgLiteral(node_1, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "real"_fu)
        return cgLiteral(node_1, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "char"_fu)
        return cgCharLiteral(node_1, module, ctx, _libs);

    if (k == "str"_fu)
        return cgStringLiteral(node_1, _libs, module, ctx);

    if (k == "arrlit"_fu)
        return cgArrayLiteral(node_1, mode, callarg, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "definit"_fu)
        return cgDefinit(node_1, mode, callarg, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "copy"_fu)
        return cgMoveOrClone(node_1, mode, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "move"_fu)
        return cgMoveOrClone(node_1, mode, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "if"_fu)
        return cgIf(node_1, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "or"_fu)
        return cgOr(node_1, mode, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "and"_fu)
        return cgAnd(node_1, mode, debug, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "let"_fu)
        return cgLet(node_1, !_current_fn.target.index, bool{}, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "root"_fu)
        return cgRoot(node_1, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "block"_fu)
        return cgBlock(node_1, mode, "block"_fu, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "argid"_fu)
        return cgComma(SolvedNodeData(node_1, module, ctx).items, "argid"_fu, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "fndef"_fu)
        return cgFnDef(node_1, mode, module, ctx, _here, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _fdef, _unity, _unity_because, _idef, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "empty"_fu)
        return cgEmpty(mode);

    if (!(mode & M_STMT))
        return cgBlock(node_1, mode, (k + "!M_STMT"_fu), module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "jump"_fu)
        return cgJump(node_1, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "loop"_fu)
        return cgLoop(node_1, _current_fn, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "try"_fu)
        return cgTryCatch(node_1, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "catch"_fu)
        return cgCatch(node_1, module, ctx, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "defer"_fu)
        return cgDefer(node_1, _libs, module, ctx, _here, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);

    fail(("TODO: "_fu + k), _here, ctx);
}

s_CodegenOutput cpp_codegen(const s_SolvedNode& root_2, const s_Module& module, const s_Context& ctx)
{
    fu_MAP<fu_STR, fu_STR> _libs {};
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
    if (!(SolvedNodeData(root_2, module, ctx).kind == "root"_fu))
        fail(fu_STR{}, _here, ctx);

    fu_STR src_2 = cgNode(root_2, "cgRoot"_fu, 0, (*(const s_Type*)fu::NIL), module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _fdef, _unity, _unity_because, _idef, _indent, _hasMain, _ffwd_src, _moveFromConstRefHelpers);
    return s_CodegenOutput { fu_VEC<int>(_unity), fu_VEC<int>(_unity_because), fu_STR(src_2) };
}

#endif
