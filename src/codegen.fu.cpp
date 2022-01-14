
#include <cstdint>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/defer.h>
#include <fu/init_priority.h>
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

struct s_Argument;
struct s_BitSet;
struct s_ClosureID;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Map_tcbzgxDC;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_NativeOpts;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_RWRanges;
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

[[noreturn]] fu::never FAIL_k6XVWCwq(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool Region_isArg_rLDFQf65(const s_Region&);
bool add_once_zoGTyg4u(s_BitSet&, int);
bool hasBinary_rJbriNRz(fu::view<char>);
bool hasIdentifierChars_rOVPWlZS(fu::view<char>);
bool hasPostfix_rJbriNRz(fu::view<char>);
bool hasUnary_rJbriNRz(fu::view<char>);
bool isAssignable_P9wIESfO(const s_Type&, const s_Type&);
bool isStruct_C02JG8Ye(const s_Type&);
bool is_floating_pt_dtjgvDEj(const s_Type&);
bool is_integral_dtjgvDEj(const s_Type&);
bool is_mutref_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_never_8e1ZyHy2(const s_Type&);
bool is_primitive_dtjgvDEj(const s_Type&);
bool is_ref_8e1ZyHy2(const s_Type&);
bool is_rx_copy_8e1ZyHy2(const s_Type&);
bool is_trivial_lcHUdEZy(const s_Type&, const s_Module&, const s_Context&);
bool is_unsigned_dtjgvDEj(const s_Type&);
bool is_void_8e1ZyHy2(const s_Type&);
bool operator==(const s_Region&, const s_Region&);
bool operator==(const s_Target&, const s_Target&);
bool operator==(const s_Type&, const s_Type&);
bool type_isAddrOfFn_5vhU4AHS(const s_Type&);
bool type_isArray_8e1ZyHy2(const s_Type&);
bool type_isZST_5vhU4AHS(const s_Type&);
const s_Struct& lookupStruct_5FUAmY77(const s_Type&, const s_Module&, const s_Context&);
fu_STR ID_rJbriNRz(const fu_STR&);
int parse10i32_g2vqWUwe(int&, fu::view<char>);
int structIndex_j5f0QjYP(fu::view<char>);
s_ClosureID tryParseClosureID_3jVozxZ2(fu::view<char>);
s_Intlit Intlit_NbHm0tEz(fu::view<char>);
s_NativeOpts NativeOpts_3jVozxZ2(fu::view<char>);
s_Region Region_fromArgIndex_KYx0R3Sq(int);
s_Target target_CL3tG3Pe(const s_ScopeItem&);
s_Type clear_refs_8e1ZyHy2(s_Type&&);
s_Type clear_sliceable_8e1ZyHy2(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_sliceable_8e1ZyHy2(const s_Type&);
static fu_STR cgNode_9cgzhl57(const s_SolvedNode&, fu::view<char>, int, const s_Type&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, s_BitSet&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
static fu_STR typeAnnot_ppEwo2vQ(const s_Type&, int, fu_VEC<fu_STR>&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, const s_cg_CurrentFn&);
static void ensureFnUsable_EZ69LBqa(const s_Target&, const s_Module&, const s_Context&, s_TokenIdx&, s_BitSet&, fu_STR&, s_cg_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, int&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&);
void HERE_GPjTSEGQ(const s_TokenIdx&, s_TokenIdx&);

                                #ifndef DEF_s_CodegenOutput
                                #define DEF_s_CodegenOutput
struct s_CodegenOutput
{
    fu_STR src;
    explicit operator bool() const noexcept
    {
        return false
            || src
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
    fu_VEC<s_Token> tokens;
    explicit operator bool() const noexcept
    {
        return false
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

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    int signedidx;
    explicit operator bool() const noexcept
    {
        return false
            || signedidx
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
    unsigned status;
    s_SolvedNode solved;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || status
            || solved
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
    int flags;
    int local;
    s_BitSet risk_free;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || autocall
            || type
            || dEfault
            || flags
            || local
            || risk_free
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
    int privates_len;
    int usings_len;
    int converts_len;
    int helpers_len;
    explicit operator bool() const noexcept
    {
        return false
            || items_len
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
    fu_VEC<s_ScopeSkip> imports;
    fu_VEC<s_ScopeSkip> privates;
    fu_VEC<s_ScopeSkip> usings;
    fu_VEC<s_ScopeSkip> converts;
    fu_VEC<s_ScopeSkip> helpers;
    explicit operator bool() const noexcept
    {
        return false
            || items
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
            || imports
            || scope_memo
            || scope_skip
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
    s_RWRanges rwr;
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
            || rwr
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
    fu_VEC<s_SolvedNodeData> nodes;
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
            || nodes
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
    fu_VEC<s_ScopeItem> items;
    fu_VEC<s_Overload> overloads;
    fu_VEC<s_Extended> extended;
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
            || items
            || overloads
            || extended
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
    int init_prio;
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
            || init_prio
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

                                #ifndef DEF_s_Map_tcbzgxDC
                                #define DEF_s_Map_tcbzgxDC
struct s_Map_tcbzgxDC
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
    s_Map_tcbzgxDC files;
    s_Map_tcbzgxDC fuzzy;
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

                                #ifndef DEF_s_NativeOpts
                                #define DEF_s_NativeOpts
struct s_NativeOpts
{
    int name_start_idx;
    bool no_AAR;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || no_AAR
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ClosureID
                                #define DEF_s_ClosureID
struct s_ClosureID
{
    s_Target target;
    int revision;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || revision
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

#ifndef FU_NO_FDEFs

                                #ifndef DEF_M_STMT
                                #define DEF_M_STMT
inline constexpr int M_STMT = (1 << 0);
                                #endif

                                #ifndef DEF_M_RETBOOL
                                #define DEF_M_RETBOOL
inline constexpr int M_RETBOOL = (1 << 1);
                                #endif

                                #ifndef DEF_M_CONST
                                #define DEF_M_CONST
inline constexpr int M_CONST = (1 << 2);
                                #endif

                                #ifndef DEF_M_RETVAL
                                #define DEF_M_RETVAL
inline constexpr int M_RETVAL = (1 << 3);
                                #endif

                                #ifndef DEF_M_ARGUMENT
                                #define DEF_M_ARGUMENT
inline constexpr int M_ARGUMENT = (1 << 4);
                                #endif

                                #ifndef DEF_M_RETURN
                                #define DEF_M_RETURN
inline constexpr int M_RETURN = (1 << 5);
                                #endif

                                #ifndef DEF_M_FWDECL
                                #define DEF_M_FWDECL
inline constexpr int M_FWDECL = (1 << 6);
                                #endif

                                #ifndef DEF_M_PARENS
                                #define DEF_M_PARENS
inline constexpr int M_PARENS = (1 << 7);
                                #endif

                                #ifndef DEF_M_OPT_CURLIES
                                #define DEF_M_OPT_CURLIES
inline constexpr int M_OPT_CURLIES = (1 << 8);
                                #endif

                                #ifndef DEF_M_LOOP_BODY
                                #define DEF_M_LOOP_BODY
inline constexpr int M_LOOP_BODY = (1 << 9);
                                #endif

                                #ifndef DEF_M_MUTVAR
                                #define DEF_M_MUTVAR
inline constexpr int M_MUTVAR = (1 << 10);
                                #endif

                                #ifndef DEF_M_MOVABLE
                                #define DEF_M_MOVABLE
inline constexpr int M_MOVABLE = (1 << 11);
                                #endif

                                #ifndef DEF_M_MOVE
                                #define DEF_M_MOVE
inline constexpr int M_MOVE = (1 << 12);
                                #endif

                                #ifndef DEF_M_ARG_TO_NATIVE
                                #define DEF_M_ARG_TO_NATIVE
inline constexpr int M_ARG_TO_NATIVE = (1 << 13);
                                #endif

                                #ifndef DEFt_unless_oob_RUr8uBUz
                                #define DEFt_unless_oob_RUr8uBUz
inline const s_Extended& unless_oob_RUr8uBUz(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_ZlyU9cD3(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_RUr8uBUz(module.out.solve.scope.extended, target.index);

    if (target.modid < 0)
        return (*(const s_Extended*)fu::NIL);

    return unless_oob_RUr8uBUz(ctx.modules[target.modid].out.solve.scope.extended, target.index);
}

                                #ifndef DEF_NODEIDX_signmask
                                #define DEF_NODEIDX_signmask
extern const int NODEIDX_signmask;
                                #endif

[[noreturn]] static fu::never fail_V4oWkR8I(fu_STR&& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL_k6XVWCwq(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu_STR(reason) : "Assertion failed."_fu)), _here, ctx);
}

                                #ifndef DEF_NODEIDX_signbits
                                #define DEF_NODEIDX_signbits
inline constexpr int NODEIDX_signbits = 4;
                                #endif

static const s_SolvedNodeData& SolvedNodeData_J9xttAO2(const s_SolvedNode& sn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!(!sn || ((sn.signedidx & NODEIDX_signmask) == (_current_fnort.index & NODEIDX_signmask))))
        fail_V4oWkR8I("RemoteNode: signature is off."_fu, _here, ctx);

    const int nodeidx = (sn.signedidx >> NODEIDX_signbits);
    return nodeidx ? _current_nodes[(nodeidx - 1)] : (*(const s_SolvedNodeData*)fu::NIL);
}

static bool isLocal_jTRiMj0t(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_2S2Dq3Ep(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (!(target.index > 0))
        fu_ASSERT();

    if (isLocal_jTRiMj0t(target))
        return module.out.solve.scope.extended[-target.modid].locals[(target.index - 1)];

    const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
    return m.out.solve.scope.overloads[(target.index - 1)];
}

                                #ifndef DEFt_x7E
                                #define DEFt_x7E
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEFt_only_aj4CwosS
                                #define DEFt_only_aj4CwosS
inline const s_SolvedNode& only_aj4CwosS(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static bool isFieldChain_69L69cjI(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind != "call"_fu)
        return false;

    const s_Overload& t = GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
    if (t.kind == "field"_fu)
        return isFieldChain_69L69cjI(only_aj4CwosS(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items), _current_nodes, _current_fnort, _here, ctx, module);

    if (t.kind == "var"_fu)
        return true;

    return false;
}

                                #ifndef DEFt_add_BkH1otAl
                                #define DEFt_add_BkH1otAl
inline bool add_BkH1otAl(fu_VEC<fu_STR>& dest, const fu_STR& item)
{
    for (int i = 0; i < dest.size(); i++)
    {
        if ((dest[i] >= item))
        {
            if (dest[i] != item)
            {
                dest.insert(i, fu_STR(item));
                return true;
            };
            return false;
        };
    };
    dest.push(fu_STR(item));
    return true;
}
                                #endif

static void include_iueXDZhA(const fu_STR& lib, fu_VEC<fu_STR>& _libs)
{
    add_BkH1otAl(_libs, lib);
}

static fu_STR annotateNever_ASCRG7EN(fu_VEC<fu_STR>& _libs)
{
    include_iueXDZhA("<fu/never.h>"_fu, _libs);
    return "fu::never"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static fu_STR annotateString_YhZ9WLzx(fu_VEC<fu_STR>& _libs)
{
    include_iueXDZhA("<fu/str.h>"_fu, _libs);
    return "fu_STR"_fu;
}

                                #ifndef DEFt_grow_if_oob_KOQaM58y
                                #define DEFt_grow_if_oob_KOQaM58y
inline s_BitSet& grow_if_oob_KOQaM58y(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once_3L58x2CZ(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once_zoGTyg4u(grow_if_oob_KOQaM58y(bs, i), j);
}

static const s_Overload& try_GET_NJlOZHES(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    return target ? GET_2S2Dq3Ep(target, module, ctx) : (*(const s_Overload*)fu::NIL);
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

static fu_STR declareStruct_BRvp3jho(fu::view<char> id, const s_Struct& s, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    const s_Type& t = GET_2S2Dq3Ep(s.target, module, ctx).type;
    fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\nstruct "_fu) + id) + "\n{"_fu);
    fu_STR indent = "\n    "_fu;
    fu::view<s_ScopeItem> fields = s.items;
    for (int i = 0; i < fields.size(); i++)
    {
        const s_Overload& field = GET_2S2Dq3Ep(target_CL3tG3Pe(fields[i]), module, ctx);
        if (!(field.kind == "field"_fu))
            fail_V4oWkR8I(((((("Non-field struct item: "_fu + field.name) + " ("_fu) + field.kind) + ") in "_fu) + t.vtype.canon), _here, ctx);

        def += ((((indent + typeAnnot_ppEwo2vQ(field.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + " "_fu) + ID_rJbriNRz(field.name)) + ";"_fu);
    };
    if (!is_rx_copy_8e1ZyHy2(t))
    {
        def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
    }
    else if (try_GET_NJlOZHES(s.target, module, ctx).status & SS_TYPE_RECUR)
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
        def += ("\n            || "_fu + ID_rJbriNRz(fields[i_1].id));

    def += "\n        ;"_fu;
    def += "\n    }"_fu;
    return def + "\n};\n                                #endif\n"_fu;
}

static fu_STR typeAnnotBase_1wr9sVUQ(const s_Type& type, const int mode, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_dtjgvDEj(type))
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
            include_iueXDZhA("<fu/int.h>"_fu, _libs);
            return "fu::"_fu + c;
        };
        include_iueXDZhA("<cstdint>"_fu, _libs);
        if (c == "i64"_fu)
            return "int64_t"_fu;

        if (c == "u16"_fu)
            return "uint16_t"_fu;

        if (c == "u32"_fu)
            return "uint32_t"_fu;

        if (c == "u64"_fu)
            return "uint64_t"_fu;

        fail_V4oWkR8I("Unknown primitive."_fu, _here, ctx);
    };
    if (c == "void"_fu)
        return "void"_fu;

    if (c == "never"_fu)
        return annotateNever_ASCRG7EN(_libs);

    s_Type arrayItem = tryClear_sliceable_8e1ZyHy2(type);
    if (arrayItem)
    {
        if (type_isArray_8e1ZyHy2(type) || !is_ref_8e1ZyHy2(type))
        {
            if (arrayItem == t_byte)
                return annotateString_YhZ9WLzx(_libs);

            fu_STR itemAnnot = typeAnnot_ppEwo2vQ(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            include_iueXDZhA("<fu/vec.h>"_fu, _libs);
            return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
        };
        fu_STR itemAnnot = typeAnnot_ppEwo2vQ(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        include_iueXDZhA("<fu/view.h>"_fu, _libs);
        if (is_mutref_8e1ZyHy2(type, _here, ctx) || (mode & M_MUTVAR))
            return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
        else
            return ("fu::view<"_fu + itemAnnot) + ">"_fu;

    };
    const s_Struct* _0;
    const s_Struct& s = (*(_0 = &(lookupStruct_5FUAmY77(type, module, ctx))) ? *_0 : fail_V4oWkR8I(("TODO: "_fu + type.vtype.canon), _here, ctx));
    /*MOV*/ fu_STR id = ("s_"_fu + s.name);
    if (add_once_3L58x2CZ(_tfwd, type.vtype.modid, structIndex_j5f0QjYP(type.vtype.canon)))
    {
        _tfwd_src += (("struct "_fu + id) + ";\n"_fu);
        fu_STR decl = declareStruct_BRvp3jho(id, s, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn);
        _tdef += decl;
    };
    return /*NRVO*/ id;
}

                                #ifndef DEFt_starts_OZkl8S7R
                                #define DEFt_starts_OZkl8S7R
inline bool starts_OZkl8S7R(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu_STR typeAnnot_ppEwo2vQ(const s_Type& type, const int mode, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (type_isZST_5vhU4AHS(type))
        return "int"_fu;

    /*MOV*/ fu_STR fwd = typeAnnotBase_1wr9sVUQ(type, mode, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (is_ref_8e1ZyHy2(type))
    {
        if (starts_OZkl8S7R(fwd, "fu::view"_fu))
            return /*NRVO*/ fwd;

        if (is_mutref_8e1ZyHy2(type, _here, ctx))
            return fwd + "&"_fu;

        if (is_primitive_dtjgvDEj(type))
            return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

        if (mode & M_MOVABLE)
        {
            const s_Type& fnret = GET_2S2Dq3Ep(s_Target { int(module.modid), int(_current_fn.target.index) }, module, ctx).type;
            if (!(is_trivial_lcHUdEZy(fnret, module, ctx) || is_ref_8e1ZyHy2(fnret)))
                return fwd + "&"_fu;

        };
        return ("const "_fu + fwd) + "&"_fu;
    };
    if ((mode & M_ARGUMENT) && !is_primitive_dtjgvDEj(type))
        return fwd + "&&"_fu;

    if ((mode & M_CONST) && is_trivial_lcHUdEZy(type, module, ctx))
        return "const "_fu + fwd;

    return /*NRVO*/ fwd;
}

static fu_STR emitTEMPVAR_lPmBolc1(fu::view<char> annot, bool& ptrflip, const fu_STR& id, const fu_STR& expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu_STR id_1 = (id ? fu_STR(id) : x7E("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu_STR cgClone_qJqs01Gk(const s_Type& type, fu::view<char> src, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return ((typeAnnotBase_1wr9sVUQ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src) + ")"_fu;
}

static fu_STR cgMove_FfaUFfvu(const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_trivial_lcHUdEZy(type, module, ctx) && is_rx_copy_8e1ZyHy2(type))
        return cgClone_qJqs01Gk(type, src, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    return ((("static_cast<"_fu + typeAnnotBase_1wr9sVUQ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "&&>("_fu) + src) + ")"_fu;
}

                                #ifndef DEFt_map_kPrMlsTr
                                #define DEFt_map_kPrMlsTr
inline fu_VEC<fu_STR> map_kPrMlsTr(fu::view<s_SolvedNode> a, int, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const fu_STR* _0;
        res.mutref(i) = (__extension__ (
        {
            const s_SolvedNode& i_1 = a[i];
            _0 = &(SolvedNodeData_J9xttAO2(i_1, _current_nodes, _current_fnort, _here, ctx).kind);
        (void)0;}), *_0);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_join_VtCzn94C
                                #define DEFt_join_VtCzn94C
inline fu_STR join_VtCzn94C(fu::view<fu_STR> a, fu::view<char> sep)
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

                                #ifndef DEFt_find_WqUX48cW
                                #define DEFt_find_WqUX48cW
inline int find_WqUX48cW(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static fu_STR& ARG_G2q7aVJi(const int i, fu_VEC<fu_STR>& item_src)
{
    return item_src.mutref(i);
}

static fu_STR REST_Ec0S1ETR(const int start, fu::view<fu_STR> item_src)
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

static fu_STR ooeWrap_G5VPSFn6(const fu_STR& src, const fu_STR& ooe_header)
{
    return (ooe_header ? (((ooe_header + ", "_fu) + src) + ")"_fu) : fu_STR(src));
}

static fu_STR emitMethodCall_dqk81BzT(fu::view<char> id, fu_VEC<fu_STR>& item_src, const fu_STR& ooe_header)
{
    fu_STR _0 {};
    return ooeWrap_G5VPSFn6(((_0 = ((ARG_G2q7aVJi(0, item_src) + id) + "("_fu), (static_cast<fu_STR&&>(_0) + REST_Ec0S1ETR(1, item_src))) + ")"_fu), ooe_header);
}

static bool affectedByIntegerPromotions_ZcfsZ0si(const s_Type& type)
{
    if (!is_integral_dtjgvDEj(type) || is_ref_8e1ZyHy2(type))
        return false;

    fu::view<char> c = type.vtype.canon;
    return (c.size() == 2) || ((c.size() == 3) && (fu::get_view(c, 1, 3) == "16"_fu));
}

static fu_STR unpromote_Ky60eHWu(const fu_STR& expr, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (isNative && affectedByIntegerPromotions_ZcfsZ0si(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type))
        return ((typeAnnotBase_1wr9sVUQ(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + expr) + ")"_fu;

    return fu_STR(expr);
}

static fu_STR emitPostfixOp_ZovG2fnO(fu::view<char> op, fu_VEC<fu_STR>& item_src, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return unpromote_Ky60eHWu((ARG_G2q7aVJi(0, item_src) + op), isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

                                #ifndef DEFt_only_ZZNS52GV
                                #define DEFt_only_ZZNS52GV
inline const fu_STR& only_ZZNS52GV(fu::view<fu_STR> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu_STR emitBuiltin_1eSYr18l(fu::view<char> id, fu::view<fu_STR> args, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type;
        const s_Type& input = SolvedNodeData_J9xttAO2(only_aj4CwosS(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items), _current_nodes, _current_fnort, _here, ctx).type;
        fu_STR cast = typeAnnotBase_1wr9sVUQ(output, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        if (is_integral_dtjgvDEj(input) && is_integral_dtjgvDEj(output) && (is_unsigned_dtjgvDEj(input) != is_unsigned_dtjgvDEj(output)))
        {
            s_Type mid_t { (is_unsigned_dtjgvDEj(input) ? output : input) };
            if (!(mid_t.vtype.canon[0] == 'i'))
                fail_V4oWkR8I(fu_STR{}, _here, ctx);

            mid_t.vtype.canon.mutref(0) = 'u';
            if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
            {
                fu_STR inner = typeAnnotBase_1wr9sVUQ(mid_t, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                return ((((cast + '(') + inner) + '(') + only_ZZNS52GV(args)) + "))"_fu;
            };
        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu_STR inner = typeAnnotBase_1wr9sVUQ(t_u8, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            return ((((cast + '(') + inner) + '(') + only_ZZNS52GV(args)) + "))"_fu;
        };
        return ((cast + '(') + only_ZZNS52GV(args)) + ')';
    };
    fail_V4oWkR8I(("Unknown builtin: "_fu + id), _here, ctx);
}

static fu_STR emitFunctionCall_TJvBKW7e(fu::view<char> id, fu::view<char> open, fu::view<char> close, fu::view<fu_STR> item_src, const fu_STR& ooe_header)
{
    return ooeWrap_G5VPSFn6((((id + open) + REST_Ec0S1ETR(0, item_src)) + close), ooe_header);
}

                                #ifndef DEFt_last_rOVPWlZS
                                #define DEFt_last_rOVPWlZS
inline char last_rOVPWlZS(fu::view<char> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static bool binSkipParens_cKpcZ4Ju(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;

    if (mode & M_PARENS)
    {
        if (last_rOVPWlZS(id) == '=')
        {
            if ((id == "=="_fu) || (id == "!="_fu))
                return true;

            return false;
        };
        return true;
    };
    return false;
}

static fu_STR emitBinaryOp_9m3vvHD6(fu::view<char> op, fu::view<s_SolvedNode> args, const s_TokenIdx& _here, const s_Context& ctx, const int mode, const fu_STR& ooe_header, fu_VEC<fu_STR>& item_src, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (!(args.size() == 2))
        fail_V4oWkR8I("args.len != 2"_fu, _here, ctx);

    if (binSkipParens_cKpcZ4Ju(op, mode) && !ooe_header)
    {
        fu_STR _0 {};
        return (_0 = (((ARG_G2q7aVJi(0, item_src) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_0) + ARG_G2q7aVJi(1, item_src)));
    };
    fu_STR _1 {};
    return ooeWrap_G5VPSFn6(unpromote_Ky60eHWu(((_1 = (((("("_fu + ARG_G2q7aVJi(0, item_src)) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_1) + ARG_G2q7aVJi(1, item_src))) + ")"_fu), isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn), ooe_header);
}

static fu_STR cgDefault_wo8VAeBT(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_mutref_8e1ZyHy2(type, _here, ctx))
        fail_V4oWkR8I("Cannot definit mutrefs."_fu, _here, ctx);

    if (is_ref_8e1ZyHy2(type))
    {
        fu_STR annot = typeAnnot_ppEwo2vQ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        if (starts_OZkl8S7R(annot, "fu::view"_fu))
            return annot + "{}"_fu;

        include_iueXDZhA("<fu/default.h>"_fu, _libs);
        return ("(*(const "_fu + typeAnnot_ppEwo2vQ(clear_refs_8e1ZyHy2(s_Type(type)), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "*)fu::NIL)"_fu;
    };
    return typeAnnot_ppEwo2vQ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "{}"_fu;
}

                                #ifndef DEF_F_TEMPLATE
                                #define DEF_F_TEMPLATE
inline constexpr int F_TEMPLATE = (1 << 28);
                                #endif

                                #ifndef DEF_F_PUB
                                #define DEF_F_PUB
inline constexpr int F_PUB = (1 << 20);
                                #endif

                                #ifndef DEF_F_EXTERN
                                #define DEF_F_EXTERN
extern const int F_EXTERN;
                                #endif

static int isExtLinked_jcaVmBMi(const s_Overload& overload)
{
    return overload.flags & (F_PUB | F_EXTERN);
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

                                #ifndef DEF_FN_ARGS_BACK
                                #define DEF_FN_ARGS_BACK
extern const int FN_ARGS_BACK;
                                #endif

                                #ifndef DEF_F_OOE_RTL
                                #define DEF_F_OOE_RTL
inline constexpr int F_OOE_RTL = (1 << 25);
                                #endif

                                #ifndef DEF_F_OPERATOR
                                #define DEF_F_OPERATOR
inline constexpr int F_OPERATOR = (1 << 21);
                                #endif

                                #ifndef DEF_F_POSTFIX
                                #define DEF_F_POSTFIX
inline constexpr int F_POSTFIX = (1 << 3);
                                #endif

static bool isOp_KRV6tila(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    const int flags = GET_2S2Dq3Ep(target, module, ctx).flags;
    if (flags & F_OOE_RTL)
        return true;

    if (!(flags & F_OPERATOR))
        return false;

    fu::view<s_Argument> args = EXT_ZlyU9cD3(target, module, ctx).args;
    if (args.size() > 2)
        return false;

    if (GET_2S2Dq3Ep(target, module, ctx).kind == "__native"_fu)
        return true;

    fu::view<char> name = GET_2S2Dq3Ep(target, module, ctx).name;
    if (args.size() > 1)
        return hasBinary_rJbriNRz(name);

    if (flags & F_POSTFIX)
        return hasPostfix_rJbriNRz(name);

    return hasUnary_rJbriNRz(name);
}

static fu_STR valid_operator_nsM0w94I(const fu_STR& str)
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

static char hex_UbAJLx1u(const unsigned x)
{
    return ((x < 10u) ? char((unsigned(fu::u8('0')) + x)) : char((unsigned(fu::u8('A')) + (x - 10u))));
}

static fu_STR xHH_KZpfkx9T(const unsigned c)
{
    return ("x"_fu + hex_UbAJLx1u(((c >> 4u) & 0xfu))) + hex_UbAJLx1u(((c >> 0u) & 0xfu));
}

static fu_STR valid_identifier_G7nVGu3F(fu_STR&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
            continue;

        str = ((fu::get_view(str, 0, i) + xHH_KZpfkx9T(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1), str.size()));
    };
    return ID_rJbriNRz(str);
}

static fu_STR fnID_ub0J1p5L(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET_2S2Dq3Ep(target, module, ctx);
    const fu_STR& id = (overload.name ? overload.name : fail_V4oWkR8I(fu_STR{}, _here, ctx));
    return (isOp_KRV6tila(target, module, ctx) ? ("operator"_fu + valid_operator_nsM0w94I(id)) : valid_identifier_G7nVGu3F(fu_STR(id)));
}

static fu_STR fnLinkage_Tc9XSnSL(const s_Overload& overload)
{
    return ((is_never_8e1ZyHy2(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!isExtLinked_jcaVmBMi(overload) ? "static "_fu : fu_STR{});
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

static fu_VEC<fu_STR>& _ids_used_3QdRrFts(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu_VEC<int>& _ids_dedupe_uOAqChKQ(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEFt_grow_if_oob_zAytlWBK
                                #define DEFt_grow_if_oob_zAytlWBK
inline int& grow_if_oob_zAytlWBK(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR localID_brGJkFwJ(const s_Target& target, const bool dedupe, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET_2S2Dq3Ep(target, module, ctx);
    /*MOV*/ fu_STR id { o.name };
    const s_ClosureID cid = tryParseClosureID_3jVozxZ2(id);
    if (cid.target)
        id = GET_2S2Dq3Ep(cid.target, module, ctx).name;

    id = ID_rJbriNRz(id);
    if (isLocal_jTRiMj0t(target))
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                fu_STR candidate = (dupes ? x7E((id + '_'), fu::i64dec(dupes)) : fu_STR(id));
                for (int i = 0; i < _ids_used_3QdRrFts(_current_fn).size(); i++)
                {
                    if (_ids_used_3QdRrFts(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto L_01;
                    };
                };
                _ids_used_3QdRrFts(_current_fn) += fu_STR(candidate);
                break;
              } L_01:;
            };
            if (dupes)
                grow_if_oob_zAytlWBK(_ids_dedupe_uOAqChKQ(_current_fn), target.index) = dupes;

        };
        const int dupes = ((_ids_dedupe_uOAqChKQ(_current_fn).size() > target.index) ? _ids_dedupe_uOAqChKQ(_current_fn)[target.index] : (*(const int*)fu::NIL));
        if (dupes)
            return x7E((id + '_'), fu::i64dec(dupes));

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

                                #ifndef DEFt_join_9sek5qv2
                                #define DEFt_join_9sek5qv2
inline fu_STR join_9sek5qv2(fu::view<fu_STR> a, fu::view<char> sep)
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

static fu_STR binding_u7zXtbGe(const s_SolvedNode& node, const bool doInit, const bool forceMut, const bool forceValue, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> _tv0 {};
    if (!_current_fn.target.index)
        std::swap(_tv0, _current_fn.TEMPVARs);

    fu_DEFER(if (!_current_fn.target.index)
        std::swap(_tv0, _current_fn.TEMPVARs););
    const s_Overload& overload = (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target ? GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx) : (*(const s_Overload*)fu::NIL));
    const int isArg = (overload.flags & F_ARG);
    s_Type node_type = (forceValue ? clear_refs_8e1ZyHy2(s_Type(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type)) : s_Type(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type));
    /*MOV*/ fu_STR annot = typeAnnot_ppEwo2vQ(node_type, ((((!forceMut && !is_mutref_8e1ZyHy2(overload.type, _here, ctx) ? M_CONST : (*(const int*)fu::NIL)) | (isArg ? M_ARGUMENT : (*(const int*)fu::NIL))) | (is_mutref_8e1ZyHy2(overload.type, _here, ctx) ? M_MUTVAR : (*(const int*)fu::NIL))) | ((overload.flags & F_MOVED_FROM) ? M_MOVABLE : (*(const int*)fu::NIL))), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (!SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target)
        return /*NRVO*/ annot;

    const int isUnused = (overload.flags & F_UNUSED);
    if (isArg && isUnused)
        return /*NRVO*/ annot;

    fu_STR id = localID_brGJkFwJ(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, true, module, ctx, _current_fn);
    /*MOV*/ fu_STR head { (annot ? annot : fail_V4oWkR8I(fu_STR{}, _here, ctx)) };
    head += (" "_fu + id);
    if (isUnused)
        head = ("[[maybe_unused]] "_fu + head);

    if (GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx).flags & F_TODO_FIX_RRET)
        head = ("/*RRET*/ "_fu + head);

    if (GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx).flags & F_MOVED_FROM)
        head = ("/*MOV*/ "_fu + head);

    if (!doInit || isArg)
        return /*NRVO*/ head;

    const s_SolvedNode init = (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items ? s_SolvedNode(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items[LET_INIT]) : s_SolvedNode{});
    if (init)
    {
        if ((SolvedNodeData_J9xttAO2(init, _current_nodes, _current_fnort, _here, ctx).kind == "definit"_fu) && !is_ref_8e1ZyHy2(SolvedNodeData_J9xttAO2(init, _current_nodes, _current_fnort, _here, ctx).type))
        {
            if (!(SolvedNodeData_J9xttAO2(init, _current_nodes, _current_fnort, _here, ctx).type == SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type))
                fail_V4oWkR8I("what's this now"_fu, _here, ctx);

            return head + " {}"_fu;
        };
        const bool isCopy = ((SolvedNodeData_J9xttAO2(init, _current_nodes, _current_fnort, _here, ctx).kind == "copy"_fu) && !is_ref_8e1ZyHy2(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type));
        fu_STR expr = cgNode_9cgzhl57((isCopy ? only_aj4CwosS(SolvedNodeData_J9xttAO2(init, _current_nodes, _current_fnort, _here, ctx).items) : init), (("binding("_fu + id) + ")"_fu), 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        if (!_current_fn.target.index && _current_fn.TEMPVARs)
        {
            fu_STR annot_1 = (starts_OZkl8S7R(annot, "const "_fu) ? fu::slice(annot, 6) : fu_STR(annot));
            fu_STR expr_1 = (isCopy ? cgClone_qJqs01Gk(SolvedNodeData_J9xttAO2(init, _current_nodes, _current_fnort, _here, ctx).type, expr, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) : fu_STR(expr));
            fu_STR iife = ((((((" { []() -> "_fu + annot_1) + " {\n    "_fu) + join_9sek5qv2(_current_fn.TEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr_1) + ";\n}() }"_fu);
            _current_fn.TEMPVARs.clear();
            return head + iife;
        };
        if (isCopy && !is_primitive_dtjgvDEj(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type))
            return ((head + " { "_fu) + expr) + " }"_fu;

        return (head + " = "_fu) + expr;
    };
    return head + " {}"_fu;
}

static fu_STR cgFnSignature_uxPTDQ0J(const s_SolvedNode& fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, int& _hasMain, s_BitSet& _idef, fu_STR& _indent, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target& target = SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).target;
    const s_Overload& overload = GET_2S2Dq3Ep(target, module, ctx);
    fu::view<s_SolvedNode> items = SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).items;
    fu_STR annot = typeAnnot_ppEwo2vQ((overload.type ? overload.type : fail_V4oWkR8I(fu_STR{}, _here, ctx)), M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR id { overload.name };
    if (id == "main"_fu)
    {
        _hasMain = ((SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).items.size() + FN_ARGS_BACK) ? 2 : 1);
        id = "fu_MAIN"_fu;
    }
    else
        id = fnID_ub0J1p5L(SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _here);

    /*MOV*/ fu_STR src = ((((fnLinkage_Tc9XSnSL(overload) + annot) + " "_fu) + id) + "("_fu);
    for (int i = 0; i < (items.size() + FN_ARGS_BACK); i++)
    {
        if (i)
            src += ", "_fu;

        const s_SolvedNode* _0;
        src += binding_u7zXtbGe((*(_0 = &(items[i])) ? *_0 : fail_V4oWkR8I(fu_STR{}, _here, ctx)), bool{}, bool{}, bool{}, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
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

static bool exprOK_7t30IwCM(fu::view<s_SolvedNode> nodes, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        fu::view<char> k = SolvedNodeData_J9xttAO2(n, _current_nodes, _current_fnort, _here, ctx).kind;
        if ((k == "jump"_fu) || (k == "loop"_fu) || (k == "try"_fu) || (k == "let"_fu) || (k == "block"_fu))
            return false;

        if (((k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu)) && !exprOK_7t30IwCM(SolvedNodeData_J9xttAO2(n, _current_nodes, _current_fnort, _here, ctx).items, _current_nodes, _current_fnort, _here, ctx))
            return false;

    };
    return true;
}

static fu_VEC<fu_STR> cgNodes_YoNSxjEO(fu::view<s_SolvedNode> nodes, const int mode, const fu_STR& trail, fu::view<char> debug, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
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
        const bool isTrail = (trail && (i == (nodes.size() - 1)) && !is_never_8e1ZyHy2(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type) && !is_void_8e1ZyHy2(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type));
        fu_STR src = (node ? cgNode_9cgzhl57(node, (debug + ".cgNodes"_fu), (isTrail ? (mode & ~M_STMT) : int(mode)), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
        if (!(src || (mode & M_STMT)))
            fail_V4oWkR8I((((("cgNodes: empty output for Node(kind=`"_fu + SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind) + "` value=`"_fu) + SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value) + "`)."_fu), _here, ctx);

        if ((mode & M_STMT) && _current_fn.TEMPVARs)
        {
            result += _current_fn.TEMPVARs;
            _current_fn.TEMPVARs.clear();
        };
        if (isTrail)
            src = (((trail + "("_fu) + src) + ")"_fu);

        result.push(fu_STR(src));
    };
    return /*NRVO*/ result;
}

static fu_STR cgComma_ioZ0mtum(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> items = cgNodes_YoNSxjEO(nodes, 0, (*(const fu_STR*)fu::NIL), (debug + ".cgComma"_fu), _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
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

                                #ifndef DEFt_if_first_rOVPWlZS
                                #define DEFt_if_first_rOVPWlZS
inline char if_first_rOVPWlZS(fu::view<char> s)
{
    return s.size() ? s[0] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_if_last_rOVPWlZS
                                #define DEFt_if_last_rOVPWlZS
inline char if_last_rOVPWlZS(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR cgStatements_Ab627VeL(fu::view<s_SolvedNode> nodes, int& count, const fu_STR& trail, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<fu_STR> lines = cgNodes_YoNSxjEO(nodes, M_STMT, trail, "cgStatements"_fu, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    count = lines.size();
    /*MOV*/ fu_STR src {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
            src += (((if_first_rOVPWlZS(line) == '\n') ? ('\n' + line) : (_indent + line)) + ((if_last_rOVPWlZS(line) == ';') ? '\n' : ';'));

    };
    return /*NRVO*/ src;
}

static fu_STR cgBlock_EkqLZTxn(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Target& label, const s_Type& type, s_cg_CurrentFn& _current_fn, fu_STR& _indent, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_BitSet& _idef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
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
    const s_Overload& lbl = (label ? GET_2S2Dq3Ep(label, module, ctx) : (*(const s_Overload*)fu::NIL));
    const fu_STR& name = lbl.name;
    const int blockvals0 = _current_fn.blockvals.size();
    fu_DEFER(_current_fn.blockvals.shrink(blockvals0));
    if (type && !is_void_8e1ZyHy2(type))
    {
        bool ptrflip = false;
        fu_STR annot = typeAnnot_ppEwo2vQ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        fu_STR id = emitTEMPVAR_lPmBolc1(annot, ptrflip, (name ? (("L_"_fu + name) + "_v"_fu) : fu_STR{}), (*(const fu_STR*)fu::NIL), _current_fn);
        _current_fn.blockvals += s_cg_Blockval { s_Target(label), bool(ptrflip) };
        fu_STR out = (ptrflip ? ("*"_fu + id) : cgMove_FfaUFfvu(type, id, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    int count {};
    /*MOV*/ fu_STR src = cgStatements_Ab627VeL(nodes, count, trail, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    if (lbl.name)
    {
        fu_STR prefixed_id = ("L_"_fu + name);
        if (fu::has(src, (("goto "_fu + prefixed_id) + ";"_fu)))
        {
            close = (((("  } "_fu + prefixed_id) + ":;"_fu) + indent0) + close);
            open = "{ {"_fu;
        };
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || ((SolvedNodeData_J9xttAO2(nodes[0], _current_nodes, _current_fnort, _here, ctx).kind != "jump"_fu) && (SolvedNodeData_J9xttAO2(nodes[0], _current_nodes, _current_fnort, _here, ctx).kind != "call"_fu)))
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);

    return /*NRVO*/ src;
}

static fu_STR cgBlock_EjPtMVJk(const s_SolvedNode& node, const int mode, fu::view<char> debug, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_VEC<s_SolvedNode> items = ((SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind == "block"_fu) ? fu_VEC<s_SolvedNode>(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items) : fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Target& label = ((SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind == "block"_fu) ? SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target : (*(const s_Target*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = label;

    const bool expr = !(mode & M_STMT);
    if (expr && !label && exprOK_7t30IwCM(items, _current_nodes, _current_fnort, _here, ctx))
        return cgComma_ioZ0mtum(items, (debug + ".cgBlock"_fu), _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    return cgBlock_EkqLZTxn(items, !!(mode & M_OPT_CURLIES), expr, label, (expr ? SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type : (*(const s_Type*)fu::NIL)), _current_fn, _indent, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_nodes, _current_fnort, _idef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

static bool add_once_0FsP30OA(fu_VEC<s_BitSet>& bs, const s_Target& target)
{
    return add_once_3L58x2CZ(bs, target.modid, target.index);
}

static void ensureFwdDecl_Iio6SH3L(const s_Target& target, const s_Module& module, const s_Context& ctx, fu_VEC<s_BitSet>& _ffwd, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<fu_STR>& _ffwd_src)
{
    [[maybe_unused]] fu::view<s_SolvedNodeData> _current_nodes = EXT_ZlyU9cD3(target, module, ctx).nodes;
    [[maybe_unused]] const s_Target& _current_fnort = target;
    const s_Overload& overload = GET_2S2Dq3Ep(target, module, ctx);
    if ((overload.kind != "fn"_fu) || (overload.name == "main"_fu))
        return;

    if (!add_once_0FsP30OA(_ffwd, target))
        return;

    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, s_Target{}, s_Target{}, fu_VEC<fu_STR>{}, fu_VEC<int>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    const s_Type& ret = (overload.type ? overload.type : fail_V4oWkR8I(fu_STR{}, _here, ctx));
    fu_STR annot = typeAnnot_ppEwo2vQ(ret, M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR name = fnID_ub0J1p5L(target, module, ctx, _here);
    fu_STR src = ((((fnLinkage_Tc9XSnSL(overload) + annot) + " "_fu) + name) + "("_fu);
    fu::view<s_Argument> args = EXT_ZlyU9cD3(target, module, ctx).args;
    for (int i = 0; i < args.size(); i++)
    {
        if (i)
            src += ", "_fu;

        src += typeAnnot_ppEwo2vQ(args[i].type, (M_ARGUMENT | M_FWDECL), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    };
    if (overload.flags & F_POSTFIX)
    {
        if (!(overload.flags & F_OPERATOR))
            fu_ASSERT();

        src += ", /*postfix*/int "_fu;
    };
    src += ");\n"_fu;
    _ffwd_src += fu_STR(src);
    return;
}

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEFt_unpackAddrOfFn_ZneQiq1Q
                                #define DEFt_unpackAddrOfFn_ZneQiq1Q
inline void unpackAddrOfFn_ZneQiq1Q(fu::view<char> canon, int, s_Target& last, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_BitSet& _idef, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    int i = 0;
    while (i < canon.size())
    {
        if (!(canon[i++] == '@'))
            fu::fail((("unpackAddrOfFn: bad canon [1]: `"_fu + canon) + "`."_fu));

        const int modid = parse10i32_g2vqWUwe(i, canon);
        if (!(canon[i++] == ':'))
            fu::fail((("unpackAddrOfFn: bad canon [2]: `"_fu + canon) + "`."_fu));

        const int index = parse10i32_g2vqWUwe(i, canon);
        const s_Target target = s_Target { int(modid), int(index) };
        if (last)
            fail_V4oWkR8I(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_2S2Dq3Ep(last, module, ctx).name) + " vs "_fu) + GET_2S2Dq3Ep(target, module, ctx).name), _here, ctx);

        last = target;
        if (!(GET_2S2Dq3Ep(target, module, ctx).kind == "fn"_fu))
            fail_V4oWkR8I(((("Cannot codegen a non-fn: "_fu + GET_2S2Dq3Ep(target, module, ctx).kind) + " "_fu) + GET_2S2Dq3Ep(target, module, ctx).name), _here, ctx);

        fu::view<s_Argument> args = EXT_ZlyU9cD3(target, module, ctx).args;
        for (int i_1 = 0; i_1 < args.size(); i_1++)
        {
            if (args[i_1].flags & F_IMPLICIT)
                fail_V4oWkR8I("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, _here, ctx);

        };
        ensureFnUsable_EZ69LBqa(target, module, ctx, _here, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    };
}
                                #endif

static fu_STR cgEmpty_gH2JA456(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_BitSet& _idef, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if ((mode & M_ARG_TO_NATIVE) && type_isAddrOfFn_5vhU4AHS(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type))
    {
        s_Target last {};
        unpackAddrOfFn_ZneQiq1Q(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon, 0, last, module, ctx, _here, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        return "&"_fu + fnID_ub0J1p5L(last, module, ctx, _here);
    };
    return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
}

static fu_STR cgFn_sD21CuDL(const s_SolvedNode& fn, const int mode, fu_STR& _indent, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, s_BitSet& _idef, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu_STR indent0 { _indent };
    fu_DEFER(_indent = indent0);
    fu::view<s_SolvedNode> items = SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    const s_Overload& overload = GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
    fu::view<char> id = overload.name;
    if (!(overload.status & SS_FINALIZED))
        fail_V4oWkR8I(("cgFn: fn not finalized: "_fu + id), _here, ctx);

    if (!body)
    {
        if (!(overload.kind == "__native"_fu))
            fail_V4oWkR8I(((("cgFn: no body on non-native: "_fu + overload.kind) + " "_fu) + id), _here, ctx);

        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
    };
    _indent = "\n"_fu;
    fu_STR src {};

    {
        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Blockval>{}, s_Target{}, s_Target{}, fu_VEC<fu_STR>{}, fu_VEC<int>{} };
        fu_DEFER(std::swap(_current_fn, current_fn0));
        std::swap(_current_fn, current_fn0);
        src += cgFnSignature_uxPTDQ0J(fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _hasMain, _idef, _indent, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        src += cgBlock_EjPtMVJk(body, M_STMT, (("cgFn("_fu + id) + ")"_fu), _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    };
    if (fu::has(_fdef, (id ? id : fail_V4oWkR8I(fu_STR{}, _here, ctx))))
        ensureFwdDecl_Iio6SH3L(SolvedNodeData_J9xttAO2(fn, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);

    fu_STR dedupe = ((overload.flags & F_PUB) && (overload.flags & F_TEMPLATE) ? valid_identifier_G7nVGu3F(fu_STR(overload.name)) : fu_STR{});
    if (dedupe)
        _fdef += ((("\n                                #ifndef DEFt_"_fu + dedupe) + "\n                                #define DEFt_"_fu) + dedupe);

    _fdef += (("\n"_fu + src) + "\n"_fu);
    if (dedupe)
        _fdef += "                                #endif\n"_fu;

    return cgEmpty_gH2JA456(fn, mode, _current_nodes, _current_fnort, _here, ctx, module, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

static void ensureFnDef_Ibi8w1Tw(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_BitSet& _idef, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (!(target.modid == module.modid))
        fail_V4oWkR8I((((((x7E((x7E("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu) + GET_2S2Dq3Ep(target, module, ctx).kind) + " "_fu) + GET_2S2Dq3Ep(target, module, ctx).name) + "`."_fu), _here, ctx);

    if (!add_once_zoGTyg4u(_idef, target.index))
        return;

    const s_SolvedNode& node = GET_2S2Dq3Ep(target, module, ctx).solved;
    if (!(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind == "fn"_fu))
        fail_V4oWkR8I("ensureFnDef non-fn"_fu, _here, ctx);

    cgFn_sD21CuDL(node, M_STMT, _indent, _current_nodes, _current_fnort, _here, ctx, module, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _idef, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

static void ensureFnUsable_EZ69LBqa(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_BitSet& _idef, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<s_SolvedNodeData> _current_nodes = EXT_ZlyU9cD3(target, module, ctx).nodes;
    const s_Target& _current_fnort = target;
    if ((SolvedNodeData_J9xttAO2(GET_2S2Dq3Ep(target, module, ctx).solved, _current_nodes, _current_fnort, _here, ctx).flags & F_TEMPLATE) || !isExtLinked_jcaVmBMi(GET_2S2Dq3Ep(target, module, ctx)))
        ensureFnDef_Ibi8w1Tw(target, module, ctx, _here, _idef, _current_nodes, _current_fnort, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    else if (target.modid != module.modid)
        ensureFwdDecl_Iio6SH3L(target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);

}

inline static bool isIntegerConstant_6Hlt4MvM(const s_SolvedNode& expr, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).kind == "int"_fu)
        return true;

    if (SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).kind == "call"_fu)
    {
        const s_Overload& t = GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
        if ((t.kind == "__native"_fu) && (t.flags & F_OPERATOR))
        {
            for (int i = 0; i < SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).items.size(); i++)
            {
                if (!isIntegerConstant_6Hlt4MvM(SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).items[i], _current_nodes, _current_fnort, _here, ctx, module))
                    return false;

            };
            return true;
        };
    };
    return false;
}

                                #ifndef DEFt_starts_FrnSuXk6
                                #define DEFt_starts_FrnSuXk6
inline bool starts_FrnSuXk6(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu_STR cgLet_vObiRBq5(const s_SolvedNode& node, const bool global, const bool foreign, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (type_isZST_5vhU4AHS(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type))
        return fu_STR{};

    const bool intconst = (global && is_primitive_dtjgvDEj(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type) && !is_floating_pt_dtjgvDEj(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type) && isIntegerConstant_6Hlt4MvM(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items[LET_INIT], _current_nodes, _current_fnort, _here, ctx, module));
    /*MOV*/ fu_STR src = binding_u7zXtbGe(node, (!foreign || intconst), bool{}, bool{}, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    if (!global)
        return /*NRVO*/ src;

    if (starts_FrnSuXk6(src, "const "_fu))
        src = fu::slice(src, 6);

    if (intconst)
    {
        _fdef += ((((((("\n                                #ifndef DEF_"_fu + SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value) + "\n                                #define DEF_"_fu) + SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
        return fu_STR{};
    };
    const int prio = (is_primitive_dtjgvDEj(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type) ? 0 : int(((SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target.modid == module.modid) ? module.out.init_prio : ctx.modules[SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target.modid].out.init_prio)));
    if (prio)
    {
        include_iueXDZhA("<fu/init_priority.h>"_fu, _libs);
        fu_STR attr = (x7E("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ")"_fu);
        const int eq = find_WqUX48cW(src, '=');
        if (eq > 0)
            src = (((fu::get_view(src, 0, eq) + attr) + " "_fu) + fu::get_view(src, eq, src.size()));

    };
    if (!isExtLinked_jcaVmBMi(GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx)))
    {
        if (!foreign)
            _fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
        else
            fail_V4oWkR8I(("Cannot codegen, relies on an external static: "_fu + GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx).name), _here, ctx);

    }
    else
        _fdef += ((((((("\n                                #ifndef DEF_"_fu + SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value) + "\n                                #define DEF_"_fu) + SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value) + "\nextern const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);

    return fu_STR{};
}

static void cgForeignGlobal_IM2E2cy2(const s_Target& target, fu_VEC<s_BitSet>& _ffwd, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (!add_once_0FsP30OA(_ffwd, target))
        return;

    fu::view<s_SolvedNodeData> _current_nodes = EXT_ZlyU9cD3(s_Target { int(target.modid), 0 }, module, ctx).nodes;
    const s_Target _current_fnort = s_Target { int(target.modid), 0 };
    cgLet_vObiRBq5(GET_2S2Dq3Ep(target, module, ctx).solved, true, true, _current_nodes, _current_fnort, _here, ctx, module, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

                                #ifndef DEFt_has_9sek5qv2
                                #define DEFt_has_9sek5qv2
inline bool has_9sek5qv2(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR rootNS_kXcAgz89(const fu_STR& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_9sek5qv2(_current_fn._ids_used, id))
        return "::"_fu + id;

    return fu_STR(id);
}

static fu_STR emitPrefixOp_eFpCJHUt(fu::view<char> op, fu_VEC<fu_STR>& item_src, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return unpromote_Ky60eHWu((op + ARG_G2q7aVJi(0, item_src)), isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgCall_cd1CIGpC(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Extended& ext = EXT_ZlyU9cD3(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx))) ? *_0 : fail_V4oWkR8I(fu_STR{}, _here, ctx));
    const fu_VEC<s_SolvedNode>& args = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items;
    const bool isNative = (target.kind == "__native"_fu);
    const bool isCpyMovAssign = ((args.size() == 2) && isNative && (target.name == "="_fu));
    const int MUSTSEQ_mask = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).helpers;
    int ooe_crosscheck = 0;
    fu_STR ooe_header {};
    fu_VEC<fu_STR> item_src {};
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        const s_SolvedNode& arg_1 = ((isCpyMovAssign && (i == 1) && (SolvedNodeData_J9xttAO2(arg, _current_nodes, _current_fnort, _here, ctx).kind == "copy"_fu)) ? only_aj4CwosS(SolvedNodeData_J9xttAO2(arg, _current_nodes, _current_fnort, _here, ctx).items) : arg);
        fu_STR src = cgNode_9cgzhl57(arg_1, (x7E((("cgCall("_fu + SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value) + ").ARG("_fu), fu::i64dec(i)) + ")"_fu), (isNative ? M_ARG_TO_NATIVE : (*(const int*)fu::NIL)), ext.args[i].type, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        const int MUSTSEQ_bit = (1 << (i & 31));
        if (MUSTSEQ_mask & MUSTSEQ_bit)
        {
            ooe_crosscheck |= MUSTSEQ_bit;
            if (!isFieldChain_69L69cjI(arg_1, _current_nodes, _current_fnort, _here, ctx, module))
            {
                if (ooe_header)
                    ooe_header += ", "_fu;
                else
                    ooe_header = "("_fu;

                bool ptrflip = false;
                fu_STR annot = typeAnnot_ppEwo2vQ(SolvedNodeData_J9xttAO2(arg_1, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                fu_STR id = emitTEMPVAR_lPmBolc1(annot, ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn);
                ooe_header += id;
                ooe_header += " = "_fu;
                ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu_STR(src));
                src = (ptrflip ? ("*"_fu + id) : cgMove_FfaUFfvu(SolvedNodeData_J9xttAO2(arg_1, _current_nodes, _current_fnort, _here, ctx).type, id, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
            };
        };
        item_src += fu_STR(src);
    };
    if (!(ooe_crosscheck == SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).helpers))
        fail_V4oWkR8I(((x7E((x7E("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).helpers)) + ": "_fu) + join_VtCzn94C(map_kPrMlsTr(args, 0, _current_nodes, _current_fnort, _here, ctx), "|"_fu)), _here, ctx);

    if (isNative && (target.name[0] == '\n'))
    {
        /*MOV*/ fu_STR id = fu::slice(target.name, (NativeOpts_3jVozxZ2(target.name).name_start_idx + 1));
        const int idx = find_WqUX48cW(id, '\n');
        if (idx > -1)
        {
            include_iueXDZhA(fu::slice(id, 0, idx), _libs);
            id = fu::slice(id, (idx + 1));
        };
        if (id[0] == '.')
        {
            if (args.size() > 1)
                return emitMethodCall_dqk81BzT(id, item_src, ooe_header);

            return emitPostfixOp_ZovG2fnO(id, item_src, isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        };
        if (id[0] == '/')
            return ooeWrap_G5VPSFn6(emitBuiltin_1eSYr18l(id, item_src, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn), ooe_header);

        if (args)
        {
            if (hasIdentifierChars_rOVPWlZS(id))
                return emitFunctionCall_TJvBKW7e(id, "("_fu, ")"_fu, item_src, ooe_header);

            return emitBinaryOp_9m3vvHD6(id, args, _here, ctx, mode, ooe_header, item_src, isNative, node, _current_nodes, _current_fnort, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        };
        return /*NRVO*/ id;
    };
    if (target.kind == "type"_fu)
    {
        if (!args)
            return cgDefault_wo8VAeBT(target.type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

        if (!(isStruct_C02JG8Ye(target.type)))
            fail_V4oWkR8I("cgCall: defctor/type not a struct."_fu, _here, ctx);

        return emitFunctionCall_TJvBKW7e(typeAnnotBase_1wr9sVUQ(target.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn), " { "_fu, " }"_fu, item_src, ooe_header);
    };
    if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target.modid && (target.kind == "fn"_fu))
        ensureFnUsable_EZ69LBqa(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _here, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    const fu_STR& id = (target.name ? target.name : fail_V4oWkR8I(fu_STR{}, _here, ctx));
    if ((args.size() <= 2))
    {
        if (target.kind == "var"_fu)
        {
            if (!isLocal_jTRiMj0t(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target))
            {
                if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target.modid != module.modid)
                    cgForeignGlobal_IM2E2cy2(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, _ffwd, module, ctx, _here, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd_src, _moveFromConstRefHelpers);

                return rootNS_kXcAgz89(ID_rJbriNRz(id), _current_fn);
            };
            return localID_brGJkFwJ(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, bool{}, module, ctx, _current_fn);
        };
        if (target.kind == "field"_fu)
            return (ARG_G2q7aVJi(0, item_src) + "."_fu) + ID_rJbriNRz(id);

        if (isOp_KRV6tila(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx))
        {
            if (args.size() == 1)
                return ((target.flags & F_POSTFIX) ? emitPostfixOp_ZovG2fnO(valid_operator_nsM0w94I(id), item_src, isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn) : emitPrefixOp_eFpCJHUt(valid_operator_nsM0w94I(id), item_src, isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn));

            if (args.size() == 2)
            {
                if (id == "[]"_fu)
                {
                    if (mode & M_MOVE)
                    {
                        fu_STR _1 {};
                        return (_1 = (ARG_G2q7aVJi(0, item_src) + ".try_steal("_fu), (static_cast<fu_STR&&>(_1) + ARG_G2q7aVJi(1, item_src))) + ")"_fu;
                    };
                    fu_STR _2 {};
                    return (_2 = (ARG_G2q7aVJi(0, item_src) + "["_fu), (static_cast<fu_STR&&>(_2) + ARG_G2q7aVJi(1, item_src))) + "]"_fu;
                };
                return emitBinaryOp_9m3vvHD6(valid_operator_nsM0w94I(id), args, _here, ctx, mode, ooe_header, item_src, isNative, node, _current_nodes, _current_fnort, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            };
        };
        if ((id == "STEAL"_fu) && (args.size() == 1))
            return cgMove_FfaUFfvu(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, ARG_G2q7aVJi(0, item_src), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    };
    if (isNative)
        fail_V4oWkR8I((("Unknown __native: `"_fu + id) + "`."_fu), _here, ctx);

    return emitFunctionCall_TJvBKW7e(rootNS_kXcAgz89(valid_identifier_G7nVGu3F(fu_STR(id)), _current_fn), "("_fu, ")"_fu, item_src, ooe_header);
}

                                #ifndef DEFt_has_WqUX48cW
                                #define DEFt_has_WqUX48cW
inline bool has_WqUX48cW(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_find_AP4C4Uui
                                #define DEFt_find_AP4C4Uui
inline int find_AP4C4Uui(fu::view<char> a, const char b, int start)
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

static fu_STR cgLiteral_vPao3Zrn(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src { SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value };
    if (is_unsigned_dtjgvDEj(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type) && !has_WqUX48cW(src, 'u'))
        src += 'u';

    if (is_floating_pt_dtjgvDEj(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type))
    {
        if (!has_WqUX48cW(src, '.'))
            src += ".0"_fu;

        if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon == "f32"_fu)
        {
            if (has_WqUX48cW(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon != "f64"_fu)
            fu_ASSERT();

    };
    if (starts_FrnSuXk6(src, "0o"_fu))
        src.splice(1, 1);

    if (src.size() > 16)
    {
        s_Intlit parse = Intlit_NbHm0tEz(src);
        if (parse.negative && (parse.absval == 0x8000000000000000ull))
            return "(-9223372036854775807-1)"_fu;

    };
    if (is_integral_dtjgvDEj(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type) && (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon != "u32"_fu) && (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon != "i32"_fu))
    {
        if ((SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon == "u64"_fu) || (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon == "i64"_fu))
        {
            if (!has_WqUX48cW(src, 'l'))
                return src + "ll"_fu;

        }
        else
            return ((typeAnnotBase_1wr9sVUQ(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src) + ")"_fu;

    };
    int idx {};
    while (((idx = find_AP4C4Uui(src, '_', int(idx))) >= 0))
        src.splice(idx, 1);

    return /*NRVO*/ src;
}

static fu_STR escapeStringLiteral_T2VjEl5p(fu::view<char> str, const char quot)
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
            esc += ("\\"_fu + xHH_KZpfkx9T(unsigned(fu::u8(c))));
        else
        {
            if (c == quot)
                esc += '\\';

            esc += char(c);
        };
    };
    esc += char(quot);
    return /*NRVO*/ esc;
}

static fu_STR cgCharLiteral_nr2O5wA0(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    return escapeStringLiteral_T2VjEl5p(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value, '\'');
}

static fu_STR cgStringLiteral_pTFq50lv(const s_SolvedNode& node, fu_VEC<fu_STR>& _libs, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    annotateString_YhZ9WLzx(_libs);
    /*MOV*/ fu_STR esc = escapeStringLiteral_T2VjEl5p(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value, '"');
    esc += "_fu"_fu;
    return /*NRVO*/ esc;
}

static fu_STR cgArrayLiteral_7lFMSwag(const s_SolvedNode& node, const int mode, const s_Type& callarg, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target)
        return cgCall_cd1CIGpC(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    fu_VEC<fu_STR> items = cgNodes_YoNSxjEO(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items, 0, (*(const fu_STR*)fu::NIL), "cgArrayLiteral"_fu, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    if (!items.size())
        return cgDefault_wo8VAeBT(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    fu_STR curly = (("{ "_fu + join_VtCzn94C(items, ", "_fu)) + " }"_fu);
    fu_STR itemT = typeAnnotBase_1wr9sVUQ(clear_sliceable_8e1ZyHy2(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, _here, ctx), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR slate = ((((x7E("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
    if (is_ref_8e1ZyHy2(callarg) && !type_isArray_8e1ZyHy2(callarg))
    {
        include_iueXDZhA("<fu/view.h>"_fu, _libs);
        return ("("_fu + slate) + ")"_fu;
    };
    return ((typeAnnotBase_1wr9sVUQ(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + " { "_fu) + slate) + " }"_fu;
}

static fu_STR cgDefinit_ngrqAunE(const s_SolvedNode& node, const int mode, const s_Type& callarg, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgArrayLiteral_7lFMSwag(node, mode, callarg, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

static bool supportsNRVO_wdM8IGXl(const s_Target& t, const s_Module& module, const s_Context& ctx, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    return (GET_2S2Dq3Ep(t, module, ctx).kind == "var"_fu) && !(GET_2S2Dq3Ep(t, module, ctx).flags & F_ARG) && !is_ref_8e1ZyHy2(SolvedNodeData_J9xttAO2(GET_2S2Dq3Ep(t, module, ctx).solved, _current_nodes, _current_fnort, _here, ctx).type);
}

static bool Lifetime_hasArguments_aAFhjE8B(const s_Lifetime& lifetime)
{
    for (int i = 0; i < lifetime.uni0n.size(); i++)
    {
        if (Region_isArg_rLDFQf65(lifetime.uni0n[i]))
            return true;

    };
    return false;
}

                                #ifndef DEFt_has_KVWxg77u
                                #define DEFt_has_KVWxg77u
inline bool has_KVWxg77u(fu::view<s_Region> a, const s_Region& b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static void ensureMoveFromConstRefHelper_S9Nj3BfK(const s_Target& target, const s_Module& module, const s_Context& ctx, fu_VEC<s_BitSet>& _moveFromConstRefHelpers, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src)
{
    fu::view<s_SolvedNodeData> _current_nodes = EXT_ZlyU9cD3(target, module, ctx).nodes;
    const s_Target& _current_fnort = target;
    if (!add_once_0FsP30OA(_moveFromConstRefHelpers, target))
        return;

    fu_STR name = fnID_ub0J1p5L(target, module, ctx, _here);
    fu::view<s_Argument> args = EXT_ZlyU9cD3(target, module, ctx).args;
    fu_STR annot = typeAnnot_ppEwo2vQ(clear_refs_8e1ZyHy2(s_Type(GET_2S2Dq3Ep(target, module, ctx).type)), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR src = (((("inline "_fu + annot) + " "_fu) + name) + "("_fu);
    fu::view<s_SolvedNode> items = SolvedNodeData_J9xttAO2(GET_2S2Dq3Ep(target, module, ctx).solved, _current_nodes, _current_fnort, _here, ctx).items;
    fu::view<s_Region> retargs = GET_2S2Dq3Ep(target, module, ctx).type.lifetime.uni0n;
    fu_STR body = (((((("return static_cast<"_fu + annot) + "&&>(const_cast<"_fu) + annot) + "&>("_fu) + name) + "("_fu);
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode* _0;
        const s_SolvedNode& argNode = (*(_0 = &(items[i])) ? *_0 : fail_V4oWkR8I(fu_STR{}, _here, ctx));
        const s_Target& argTarget = SolvedNodeData_J9xttAO2(argNode, _current_nodes, _current_fnort, _here, ctx).target;
        const bool forceValue = has_KVWxg77u(retargs, Region_fromArgIndex_KYx0R3Sq(argTarget.index));
        fu_STR binding = binding_u7zXtbGe(argNode, bool{}, bool{}, forceValue, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
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
            fail_V4oWkR8I("ensureMoveFromConstRefHelper: cant split annot/id."_fu, _here, ctx);

        fu_STR pass = fu::slice(binding, (space + 1));
        if (!is_ref_8e1ZyHy2(SolvedNodeData_J9xttAO2(argNode, _current_nodes, _current_fnort, _here, ctx).type))
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

static fu_STR cgMoveOrClone_qAiTXSvO(fu::view<char> kind, const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (kind == "move"_fu)
        return cgMove_FfaUFfvu(type, src, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    return cgClone_qJqs01Gk(type, src, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgMoveOrClone_GQ5Qshu9(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_SolvedNode& expr = only_aj4CwosS(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items);
    if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind == "move"_fu)
    {
        if (mode & M_RETURN)
        {
            const bool nrvo = ((SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).kind == "call"_fu) && (SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).items.size() == 0) && supportsNRVO_wdM8IGXl(SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _current_nodes, _current_fnort, _here));
            if (nrvo)
                return "/*NRVO*/ "_fu + cgNode_9cgzhl57(expr, "NRVO"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

        };
        if (!is_trivial_lcHUdEZy(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, module, ctx))
        {
            if (SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).kind == "call"_fu)
            {
                const s_Overload& o = GET_2S2Dq3Ep(SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
                if ((o.kind == "__native"_fu) && (o.name == "[]"_fu))
                    return cgNode_9cgzhl57(expr, "cgMoveOperator[]"_fu, M_MOVE, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

                if (!is_mutref_8e1ZyHy2(o.type, _here, ctx) && Lifetime_hasArguments_aAFhjE8B(o.type.lifetime))
                {
                    ensureMoveFromConstRefHelper_S9Nj3BfK(SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _moveFromConstRefHelpers, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src);
                    return cgNode_9cgzhl57(expr, "cgMoveFromConstRefHelper"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
                };
            };
        };
    };
    fu::view<char> _0 {};
    const s_Type* _1;
    fu_STR _2 {};
    return (_0 = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind, _1 = &(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type), _2 = cgNode_9cgzhl57(expr, "cgMoveOrClone"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers), cgMoveOrClone_qAiTXSvO(static_cast<fu::view<char>&&>(_0), *_1, static_cast<fu_STR&&>(_2), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
}

static fu_STR blockWrapSubstatement_QXGLAcww(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgBlock_EjPtMVJk(node, ((M_STMT | M_OPT_CURLIES) | mode), "blockWrapSubstatement"_fu, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR blockWrap_unlessIf_bbC8JDGe(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return (((SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind == "if"_fu) || (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind == "and"_fu)) ? (" "_fu + cgNode_9cgzhl57(node, "cgIf.blockWrap_unlessIf"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers)) : blockWrapSubstatement_QXGLAcww(node, 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers));
}

static fu_STR cgIf_2zNaBeDu(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_SolvedNode& n0 = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items[0];
    const s_SolvedNode& n1 = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items[1];
    const s_SolvedNode& n2 = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode_9cgzhl57(n0, "cgIf[cond]"_fu, (M_RETBOOL | (stmt ? M_PARENS : (*(const int*)fu::NIL))), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement_QXGLAcww(n1, 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : cgNode_9cgzhl57(n1, "cgIf[cons]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf_bbC8JDGe(n2, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : cgNode_9cgzhl57(n2, "cgIf[alt]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers)) : fu_STR{});
    if (stmt)
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((_indent + "else"_fu) + alt) : fu_STR{});

    return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;
}

static void cgAndOr_concat_7A5q8tpX(fu_STR& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const int mode = (M_RETBOOL | (parens && (items.size() == 1) ? M_PARENS : (*(const int*)fu::NIL)));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        src += cgNode_9cgzhl57(items[i], (x7E("cgAndOr_concat["_fu, fu::i64dec(i)) + "]"_fu), mode, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    };
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool acceptsBool_mgclQTQK(const s_Type& type)
{
    return isAssignable_P9wIESfO(type, t_bool);
}

static fu_STR via_GylI0agO(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
    {
        fu_STR _0 {};
        tv.id = (_0 = fu_STR((tv.annot = typeAnnot_ppEwo2vQ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn))), emitTEMPVAR_lPmBolc1(static_cast<fu_STR&&>(_0), tv.ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;

    if (is_trivial_lcHUdEZy(type, module, ctx))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;

    return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;
}

static fu_STR via_iuGFQedG(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    if (isFieldChain_69L69cjI(expr, _current_nodes, _current_fnort, _here, ctx, module))
    {
        fu_STR trivial = cgNode_9cgzhl57(expr, "TEMPVAR[fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    };
    if ((SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).kind == "copy"_fu) || (SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).kind == "move"_fu))
    {
        fu::view<char> kind = SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).kind;
        const s_SolvedNode& expr_1 = only_aj4CwosS(SolvedNodeData_J9xttAO2(expr, _current_nodes, _current_fnort, _here, ctx).items);
        if (isFieldChain_69L69cjI(expr_1, _current_nodes, _current_fnort, _here, ctx, module))
        {
            fu_STR trivial = cgNode_9cgzhl57(expr_1, "TEMPVAR[copymov/fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
            return ((trivial + " ? "_fu) + cgMoveOrClone_qAiTXSvO(kind, type, trivial, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn)) + " : "_fu;
        };
    };
    fu_STR _0 {};
    return (_0 = cgNode_9cgzhl57(expr, "TEMPVAR[usual]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers), via_GylI0agO(tv, type, static_cast<fu_STR&&>(_0), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn));
}

static fu_STR cgOr_7r5y4S0W(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Type& type = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type;
    fu::view<s_SolvedNode> items = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if (!("_fu;
        cgAndOr_concat_7A5q8tpX(src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        src += "))"_fu;
        src += blockWrapSubstatement_QXGLAcww(items[(items.size() - 1)], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (acceptsBool_mgclQTQK(type))
        cgAndOr_concat_7A5q8tpX(src, " || "_fu, items, true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    else
    {
        s_TEMPVAR tv {};
        for (int i = 0; i < (items.size() - 1); i++)
        {
            const s_SolvedNode* _0;
            const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : fail_V4oWkR8I(fu_STR{}, _here, ctx));
            s_SolvedNode tail { item };
            if (SolvedNodeData_J9xttAO2(item, _current_nodes, _current_fnort, _here, ctx).kind == "and"_fu)
            {
                fu::view<s_SolvedNode> items_1 = SolvedNodeData_J9xttAO2(item, _current_nodes, _current_fnort, _here, ctx).items;
                const s_SolvedNode* _1;
                tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : fail_V4oWkR8I(fu_STR{}, _here, ctx));
                cgAndOr_concat_7A5q8tpX(src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), bool{}, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
                src += " && "_fu;
            };
            src += via_iuGFQedG(tv, type, tail, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        };
        const s_SolvedNode* _2;
        const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : fail_V4oWkR8I(fu_STR{}, _here, ctx));
        src += cgNode_9cgzhl57(tail, "cgOr"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd_YtZxUhcE(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, fu::view<char> debug, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if ("_fu;
        cgAndOr_concat_7A5q8tpX(src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        src += ")"_fu;
        src += blockWrapSubstatement_QXGLAcww(items[(items.size() - 1)], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (acceptsBool_mgclQTQK(type))
        cgAndOr_concat_7A5q8tpX(src, " && "_fu, items, true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    else
    {
        s_TEMPVAR tv {};
        if (is_mutref_8e1ZyHy2(type, _here, ctx))
        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via_iuGFQedG(tv, type, item, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers));
                else
                    src += cgNode_9cgzhl57(item, (x7E((debug + ".cgAnd[mutref "_fu), fu::i64dec(i)) + "]"_fu), 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

            };
        }
        else
        {
            const int N = items.size();
            const bool retSecondLast = is_never_8e1ZyHy2(SolvedNodeData_J9xttAO2(items[(N - 1)], _current_nodes, _current_fnort, _here, ctx).type);
            const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
            cgAndOr_concat_7A5q8tpX(src, " && "_fu, fu::get_view(items, 0, condEnd), bool{}, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
            if (retSecondLast)
            {
                if (condEnd)
                    src += " && "_fu;

                src += ("!"_fu + via_iuGFQedG(tv, type, items[(N - 2)], _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers));
                src += cgNode_9cgzhl57(items[(N - 1)], (debug + ".cgAnd[retSecondLast]"_fu), 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
            }
            else
            {
                src += (" ? "_fu + cgNode_9cgzhl57(items[(N - 1)], (debug + ".cgAnd[usual]"_fu), 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers));
                src += (" : "_fu + cgDefault_wo8VAeBT(type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn));
            };
        };
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd_erDbU5nv(const s_SolvedNode& node, const int mode, fu::view<char> debug, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    return cgAnd_YtZxUhcE(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items, SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).type, mode, debug, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR cgMain_6QDQB19h(const int _hasMain, fu_VEC<fu_STR>& _libs)
{
    if (!_hasMain)
        return fu_STR{};

    if (_hasMain != 2)
        return "\n\nint main() { return fu_MAIN(); }\n"_fu;

    annotateString_YhZ9WLzx(_libs);
    return (((((((("\n\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args));"_fu) + "\n}\n"_fu;
}

static fu_STR collectDedupes_AqhuniEC(fu_VEC<fu_STR>&& values, fu::view<char> prefix, fu::view<char> suffix)
{
    if (!values.size())
        return fu_STR{};

    /*MOV*/ fu_STR out = "\n"_fu;
    fu::sort(values);
    for (int i = 0; i < values.size(); i++)
        out += ((prefix + values[i]) + suffix);

    return /*NRVO*/ out;
}

static fu_STR collectDedupes_lvTePJ2M(fu_VEC<fu_STR>&& values)
{
    if (!values.size())
        return fu_STR{};

    /*MOV*/ fu_STR out = "\n"_fu;
    fu::sort(values);
    for (int i = 0; i < values.size(); i++)
        out += values[i];

    return /*NRVO*/ out;
}

static fu_STR cgRoot_EvnleRns(const s_SolvedNode& root, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    int count {};
    fu_STR src = cgStatements_Ab627VeL(SolvedNodeData_J9xttAO2(root, _current_nodes, _current_fnort, _here, ctx).items, count, (*(const fu_STR*)fu::NIL), _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    fu_STR main = cgMain_6QDQB19h(_hasMain, _libs);
    fu_STR header = ((((collectDedupes_AqhuniEC(fu_VEC<fu_STR>(_libs), "#include "_fu, "\n"_fu) + collectDedupes_lvTePJ2M(fu_VEC<fu_STR>(_tfwd_src))) + collectDedupes_lvTePJ2M(fu_VEC<fu_STR>(_ffwd_src))) + _tdef) + (_fdef ? (("\n#ifndef FU_NO_FDEFs\n"_fu + _fdef) + "\n#endif\n"_fu) : fu_STR{}));
    return (header + src) + main;
}

static fu_STR cgFnDef_Svlj6eAM(const s_SolvedNode& fndef, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_BitSet& _idef, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target& target = SolvedNodeData_J9xttAO2(fndef, _current_nodes, _current_fnort, _here, ctx).target;
    fu::view<s_SolvedNodeData> _current_nodes_1 = EXT_ZlyU9cD3(target, module, ctx).nodes;
    const s_Target& _current_fnort_1 = target;
    const s_Overload& o = GET_2S2Dq3Ep(target, module, ctx);
    const s_SolvedNode& n = GET_2S2Dq3Ep(target, module, ctx).solved;
    if (!(n ? isExtLinked_jcaVmBMi(o) : int{}))
        return cgEmpty_gH2JA456(n, mode, _current_nodes_1, _current_fnort_1, _here, ctx, module, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (!(SolvedNodeData_J9xttAO2(n, _current_nodes_1, _current_fnort_1, _here, ctx).kind == "fn"_fu))
        fail_V4oWkR8I("cgFnDef non-fn"_fu, _here, ctx);

    return cgFn_sD21CuDL(n, mode, _indent, _current_nodes_1, _current_fnort_1, _here, ctx, module, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _idef, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
}

static fu_STR cgJump_RBwgaBff(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    const s_Target& dest_idx = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target;
    const bool use_return = (dest_idx == _current_fn.target);
    const s_Overload& dest = GET_2S2Dq3Ep(dest_idx, module, ctx);
    if (SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items)
    {
        const s_SolvedNode& head = only_aj4CwosS(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items);
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
            fu_STR value = cgNode_9cgzhl57(head, "cgJump[val.break]"_fu, (!assign ? M_STMT : (*(const int*)fu::NIL)), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
            if (ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            return (((("{ "_fu + assign) + value) + "; goto L_"_fu) + dest.name) + "; }"_fu;
        };
        if (is_never_8e1ZyHy2(SolvedNodeData_J9xttAO2(head, _current_nodes, _current_fnort, _here, ctx).type))
        {
            if (is_never_8e1ZyHy2(dest.type))
                return cgNode_9cgzhl57(head, "cgJump[val.return.never]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

            if (is_void_8e1ZyHy2(dest.type))
                return "return (void) "_fu + cgNode_9cgzhl57(head, "cgJump[val.return.void]"_fu, M_RETURN, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

        };
        return "return "_fu + cgNode_9cgzhl57(head, "cgJump[val.return]"_fu, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
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

static fu_STR cgLoop_9kJskWCI(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
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
    fu::view<s_SolvedNode> items = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items;
    const s_SolvedNode& n_init = items[LOOP_INIT];
    const s_SolvedNode& n_cond = items[LOOP_COND];
    const s_SolvedNode& n_body = items[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
    const s_SolvedNode& n_post = items[LOOP_POST];
    fu_STR init = (n_init ? cgNode_9cgzhl57(n_init, "cgLoop[init]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode_9cgzhl57(n_cond, "cgLoop[cond]"_fu, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode_9cgzhl57(n_pcnd, "cgLoop[pcnd]"_fu, M_RETBOOL, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR post = (n_post ? cgNode_9cgzhl57(n_post, "cgLoop[post]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    const s_Target& label = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).target;
    _current_fn.can_break = label;
    fu_STR body = (n_body ? blockWrapSubstatement_QXGLAcww(n_body, M_LOOP_BODY, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers) : fu_STR{});
    fu_STR breakLabel {};
    const s_Overload& lbl = (label ? GET_2S2Dq3Ep(label, module, ctx) : (*(const s_Overload*)fu::NIL));
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
            fail_V4oWkR8I("TODO extended loop."_fu, _here, ctx);

        return ((((("do"_fu + body) + _indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel;
    };
    if (init || post || !cond)
        return ((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;

    return ((("while ("_fu + cond) + ")"_fu) + body) + breakLabel;
}

static fu_STR cgTryCatch_QOdLwxlI(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<s_SolvedNode> items = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items;
    fu_STR tRy = blockWrapSubstatement_QXGLAcww(items[0], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    fu_STR err = localID_brGJkFwJ(SolvedNodeData_J9xttAO2(items[1], _current_nodes, _current_fnort, _here, ctx).target, true, module, ctx, _current_fn);
    fu_STR cAtch = blockWrapSubstatement_QXGLAcww(items[2], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    return ((((((((((((((((_indent + "try"_fu) + _indent) + "{"_fu) + tRy) + _indent) + "}"_fu) + _indent) + "catch (const std::exception& o_0)"_fu) + _indent) + "{"_fu) + _indent) + "    fu_STR "_fu) + err) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + _indent) + "}\n"_fu;
}

static fu_STR cgDefer_YRPkxypg(const s_SolvedNode& node, fu_VEC<fu_STR>& _libs, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    include_iueXDZhA("<fu/defer.h>"_fu, _libs);
    fu_STR which = ((SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_9cgzhl57(only_aj4CwosS(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items), "defer"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers)) + ")"_fu;
}

static fu_STR cgNode_9cgzhl57(const s_SolvedNode& node, fu::view<char> debug, const int mode, const s_Type& callarg, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_VEC<s_BitSet>& _moveFromConstRefHelpers)
{
    fu::view<char> _0 {};
    fu::view<char> k = ((_0 = SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).kind) ? static_cast<fu::view<char>&&>(_0) : fail_V4oWkR8I(("cgNode: No node.kind: "_fu + debug), _here, ctx));
    HERE_GPjTSEGQ(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).token, _here);
    if (k == "call"_fu)
        return cgCall_cd1CIGpC(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "int"_fu)
        return cgLiteral_vPao3Zrn(node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "real"_fu)
        return cgLiteral_vPao3Zrn(node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "char"_fu)
        return cgCharLiteral_nr2O5wA0(node, _current_nodes, _current_fnort, _here, ctx);

    if (k == "str"_fu)
        return cgStringLiteral_pTFq50lv(node, _libs, _current_nodes, _current_fnort, _here, ctx);

    if (k == "arrlit"_fu)
        return cgArrayLiteral_7lFMSwag(node, mode, callarg, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "definit"_fu)
        return cgDefinit_ngrqAunE(node, mode, callarg, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "copy"_fu)
        return cgMoveOrClone_GQ5Qshu9(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "move"_fu)
        return cgMoveOrClone_GQ5Qshu9(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "if"_fu)
        return cgIf_2zNaBeDu(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "or"_fu)
        return cgOr_7r5y4S0W(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "and"_fu)
        return cgAnd_erDbU5nv(node, mode, debug, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "let"_fu)
        return cgLet_vObiRBq5(node, !_current_fn.target.index, bool{}, _current_nodes, _current_fnort, _here, ctx, module, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "root"_fu)
        return cgRoot_EvnleRns(node, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "block"_fu)
        return cgBlock_EjPtMVJk(node, mode, "block"_fu, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "argid"_fu)
        return cgComma_ioZ0mtum(SolvedNodeData_J9xttAO2(node, _current_nodes, _current_fnort, _here, ctx).items, "argid"_fu, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "fndef"_fu)
        return cgFnDef_Svlj6eAM(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "empty"_fu)
        return cgEmpty_gH2JA456(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (!(mode & M_STMT))
        return cgBlock_EjPtMVJk(node, mode, (k + "!M_STMT"_fu), _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "jump"_fu)
        return cgJump_RBwgaBff(node, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "loop"_fu)
        return cgLoop_9kJskWCI(node, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "try"_fu)
        return cgTryCatch_QOdLwxlI(node, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    if (k == "defer"_fu)
        return cgDefer_YRPkxypg(node, _libs, _current_nodes, _current_fnort, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);

    fail_V4oWkR8I(("TODO: "_fu + k), _here, ctx);
}

s_CodegenOutput cpp_codegen_w3QnwnTR(const s_Module& module, const s_Context& ctx)
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
    s_TokenIdx _here {};
    s_cg_CurrentFn _current_fn {};
    fu::view<s_SolvedNodeData> _current_nodes = EXT_ZlyU9cD3(s_Target { int(module.modid), 0 }, module, ctx).nodes;
    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    const s_SolvedNode& root = module.out.solve.root;
    if (!(SolvedNodeData_J9xttAO2(root, _current_nodes, _current_fnort, _here, ctx).kind == "root"_fu))
        fail_V4oWkR8I(fu_STR{}, _here, ctx);

    fu_STR src = cgNode_9cgzhl57(root, "cgRoot"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _idef, _indent, _hasMain, _fdef, _ffwd, _ffwd_src, _moveFromConstRefHelpers);
    return s_CodegenOutput { fu_STR(src) };
}

#endif
