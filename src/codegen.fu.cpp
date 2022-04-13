#include <cstdint>
#include <utility>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/defer.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/default.h>
#include <fu/vec/cmp.h>
#include <fu/vec/find.h>
#include <fu/vec/slice.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>
#include <fu/vec/view_assign.h>

struct s_CodegenOutput;
struct s_Module;
struct s_ModuleInputs;
struct s_LexerOutput;
struct s_Token;
struct s_ParserOutput;
struct s_Node;
struct s_TokenIdx;
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
struct s_Extended;
struct s_Argument;
struct s_BitSet;
struct s_Template;
struct s_ScopeMemo;
struct s_ScopeSkipMemos;
struct s_ScopeSkip;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Context;
struct s_Map_gb6sFwC7;
struct s_Outputs;
struct s_cg_CurrentFn;
struct s_cg_Block;
struct s_StructCanon;
struct s_NativeHacks;
struct s_ClosureID;
struct s_Mi;
struct s_Intlit;
struct s_TEMPVAR;
[[noreturn]] fu::never FAIL_QjCEbuxM(fu::view<char>, const s_TokenIdx&, const s_Context&);
void HERE_fVfHq6aR(const s_TokenIdx&, s_TokenIdx&);
bool type_isZST_zJCUz9W3(const s_Type&);
static bool isFieldChain_ZZ187IGK(const s_SolvedNode&, const s_Module&, const s_Context&);
bool is_primitive_oPp5yWwB(const s_Type&);
s_Type tryClear_sliceable_zJCUz9W3(const s_Type&);
bool TODO_FIX_isArray_zJCUz9W3(const s_Type&);
bool is_ref_zJCUz9W3(const s_Type&);
bool operator==(const s_Type&, const s_Type&);
bool is_mutref_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
const s_Struct& lookupStruct_GBXUPXZt(const s_Type&, const s_Module&, const s_Context&);
s_StructCanon parseStructCanon_9u6Vl9O2(fu::view<char>);
bool add_once_PCSel0xp(s_BitSet&, int);
static bool add_once_IPrjcKiK(fu_VEC<s_BitSet>&, int, int);
s_Target target_e3eS1o6f(const s_ScopeItem&);
fu_STR ID_LX3QLY5k(const fu_STR&);
bool is_rx_copy_zJCUz9W3(const s_Type&);
static fu_STR declareStruct_hHl0RMJO(fu::view<char>, const s_Struct&, s_Outputs&, const s_TokenIdx&, const s_Context&, const s_Module&, const s_cg_CurrentFn&);
static fu_STR typeAnnotBase_06A3k4cb(const s_Type&, int, s_Outputs&, const s_TokenIdx&, const s_Context&, const s_Module&, const s_cg_CurrentFn&);
bool is_trivial_JKdxRWxB(const s_Type&, const s_Module&, const s_Context&);
static fu_STR typeAnnot_uGt8hsQ7(const s_Type&, int, s_Outputs&, const s_TokenIdx&, const s_Context&, const s_Module&, const s_cg_CurrentFn&);
s_NativeHacks NativeHacks_1FBeX0Ih(fu::view<char>);
bool is_integral_oPp5yWwB(const s_Type&);
bool is_unsigned_oPp5yWwB(const s_Type&);
bool hasIdentifierChars_ZCtM7908(fu::view<char>);
s_Type clear_refs_zJCUz9W3(s_Type&&);
bool isStruct_usAEukhR(const s_Type&);
static bool add_once_SI3t3nsB(fu_VEC<s_BitSet>&, const s_Target&);
bool is_never_zJCUz9W3(const s_Type&);
bool hasBinary_LX3QLY5k(fu::view<char>);
bool hasPostfix_LX3QLY5k(fu::view<char>);
bool hasUnary_LX3QLY5k(fu::view<char>);
s_ClosureID tryParseClosureID_1FBeX0Ih(fu::view<char>);
[[noreturn]] fu::never BUG_XksxYQ3i(fu_STR&&, const s_TokenIdx&, const s_Context&);
bool type_isSliceable_zJCUz9W3(const s_Type&);
static fu_STR binding_L7OBCMHa(const s_Argument&, bool, s_cg_CurrentFn&, const s_Module&, const s_Context&, const s_TokenIdx&, s_Outputs&);
static fu_STR cgFnSignature_S2GTOKYd(const s_SolvedNode&, const s_Module&, const s_Context&, const s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static bool exprOK_qyufW00L(fu::view<s_SolvedNode>);
static bool labelUsed_b8AulKHd(fu::view<s_SolvedNode>, const s_Helpers&);
bool is_void_zJCUz9W3(const s_Type&);
static fu_VEC<fu_STR> cgNodes_sITJPhOk(fu::view<s_SolvedNode>, int, const fu_STR&, fu::view<char>, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgComma_BCPrStF4(fu::view<s_SolvedNode>, fu::view<char>, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgStatements_sCoJjqTg(fu::view<s_SolvedNode>, int&, const fu_STR&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgBlock_K9RMzG8Z(fu::view<s_SolvedNode>, bool, bool, const s_Helpers&, const s_Type&, s_cg_CurrentFn&, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&);
static fu_STR cgBlock_cmMJyrMp(const s_SolvedNode&, int, fu::view<char>, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
bool type_isAddrOfFn_zJCUz9W3(const s_Type&);
s_Mi parseMi_mPp6Ulzh(int&, fu::view<char>);
static fu_STR cgEmpty_LIDsl2ab(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgFn_s5b6nkc4(const s_SolvedNode&, int, s_Outputs&, const s_Module&, const s_Context&, s_TokenIdx&, s_cg_CurrentFn&);
static void ensureFnDef_shmfQfn5(const s_Target&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static void ensureFnUsable_hsT4XLhz(const s_Target&, const s_Module&, const s_Context&, s_Outputs&, s_cg_CurrentFn&, s_TokenIdx&);
bool is_floating_pt_oPp5yWwB(const s_Type&);
inline static bool isIntegerConstant_z36h1L35(const s_SolvedNode&, const s_Module&, const s_Context&);
static fu_STR binding_1WbVgtW3(const s_Target&, const s_SolvedNode&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR binding_uC3XDQ0O(const s_SolvedNode&, bool, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgCall_IpJDBsCp(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
s_Intlit Intlit_IQ08v4Hx(fu::view<char>);
bool is_enum_oPp5yWwB(const s_Type&);
s_Type clear_sliceable_zJCUz9W3(const s_Type&, const s_TokenIdx&, const s_Context&);
static fu_STR cgArrayLiteral_xEfKC73g(const s_SolvedNode&, int, const s_Type&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
bool Region_isArgPosition_MvT8pzW6(const s_Region&);
static fu_STR cgMoveOrClone_6LKZENmu(const s_SolvedNode&, int, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR blockWrap_unlessIf_Pm8NhZjc(const s_SolvedNode&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgIf_NBg0StUX(const s_SolvedNode&, int, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&, s_cg_CurrentFn&);
static void cgAndOr_concat_CCzl17vc(fu_STR&, fu::view<char>, fu::view<s_SolvedNode>, bool, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&, s_cg_CurrentFn&);
bool isAssignable_0meCKYxP(const s_Type&, const s_Type&, bool, bool);
static fu_STR via_gekMsZ4H(s_TEMPVAR&, const s_Type&, const s_SolvedNode&, const s_Module&, const s_Context&, s_TokenIdx&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgOr_mJD2WH76(const s_SolvedNode&, int, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgAnd_qZ6NMfFo(fu::view<s_SolvedNode>, const s_Type&, int, fu::view<char>, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgRoot_uSv8aBTF(const s_SolvedNode&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgJump_4ZIKtfs2(const s_SolvedNode&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgLoop_xh99Hn6J(const s_SolvedNode&, s_cg_CurrentFn&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&);
static fu_STR cgDefer_Dv0q8rZu(const s_SolvedNode&, s_Outputs&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&);
static fu_STR cgCompilerPragma_d5NYXTvS(const s_SolvedNode&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&, s_cg_CurrentFn&);
static fu_STR cgNode_3OLWvUbE(const s_SolvedNode&, fu::view<char>, int, const s_Type&, s_TokenIdx&, const s_Context&, const s_Module&, s_Outputs&, s_cg_CurrentFn&);
fu_STR dirname_KqRBcvmh(const fu_STR&);
fu_STR join_Lfq50XKd(fu::view<char>, const fu_STR&);
fu_STR read_ny0gyQ9a(fu_STR&&);

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
    fu_STR base;
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
    fu_STR kind;
    s_Helpers helpers;
    int flags;
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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    fu_STR sighash;
    s_Type type;
    int flags;
    unsigned status;
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
    int flags;
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

                                #ifndef DEF_s_Map_gb6sFwC7
                                #define DEF_s_Map_gb6sFwC7
struct s_Map_gb6sFwC7
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
    s_Map_gb6sFwC7 files;
    s_Map_gb6sFwC7 fuzzy;
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

                                #ifndef DEF_s_Outputs
                                #define DEF_s_Outputs
struct s_Outputs
{
    fu_VEC<fu_STR> _libs;
    fu_VEC<fu_STR> _gcc_ignore;
    fu_STR _top_emits;
    fu_VEC<s_BitSet> _tfwd;
    fu_STR _tfwd_src;
    fu_VEC<s_BitSet> _ffwd;
    fu_STR _ffwd_src;
    fu_STR _ffwd_live_client;
    fu_STR _ffwd_live_nclient;
    fu_STR _tdef;
    s_BitSet _idef;
    fu_STR _fdef;
    fu_STR _indent;
    int _hasMain;
    fu_VEC<fu_STR> HACK_link;
    fu_VEC<fu_STR> HACK_include_dirs;
    fu_VEC<fu_STR> HACK_extra_sources;
    fu_VEC<int> _live_targets;
    s_Outputs(const s_Outputs&) = delete;
    s_Outputs(s_Outputs&&) = default;
    s_Outputs& operator=(const s_Outputs&) = delete;
    s_Outputs& operator=(s_Outputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || _libs
            || _gcc_ignore
            || _top_emits
            || _tfwd
            || _tfwd_src
            || _ffwd
            || _ffwd_src
            || _ffwd_live_client
            || _ffwd_live_nclient
            || _tdef
            || _idef
            || _fdef
            || _indent
            || _hasMain
            || HACK_link
            || HACK_include_dirs
            || HACK_extra_sources
            || _live_targets
        ;
    }
};
                                #endif

                                #ifndef DEF_s_cg_Block
                                #define DEF_s_cg_Block
struct s_cg_Block
{
    fu_STR name;
    s_Helpers helpers;
    bool has_val;
    bool ptrflip;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || helpers
            || has_val
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
    fu_VEC<s_cg_Block> blocks;
    int num_labels;
    s_Helpers can_return;
    s_Helpers can_break;
    s_Helpers can_cont;
    fu_VEC<fu_STR> _ids_used;
    fu_VEC<int> _ids_dedupe;
    fu_VEC<fu_STR> _hoist;
    explicit operator bool() const noexcept
    {
        return false
            || target
            || numTEMPVARs
            || TEMPVARs
            || blocks
            || num_labels
            || can_return
            || can_break
            || can_cont
            || _ids_used
            || _ids_dedupe
            || _hoist
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

                                #ifndef DEF_s_NativeHacks
                                #define DEF_s_NativeHacks
struct s_NativeHacks
{
    int name_start_idx;
    bool soft_risk;
    explicit operator bool() const noexcept
    {
        return false
            || name_start_idx
            || soft_risk
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

                                #ifndef DEF_s_Mi
                                #define DEF_s_Mi
struct s_Mi
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

#ifndef fu_NO_fdefs

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

                                #ifndef DEF_MAIN_needed
                                #define DEF_MAIN_needed
inline constexpr int MAIN_needed = (1 << 0);
                                #endif

                                #ifndef DEF_MAIN_argv
                                #define DEF_MAIN_argv
inline constexpr int MAIN_argv = (1 << 1);
                                #endif

                                #ifndef DEF_MAIN_zst
                                #define DEF_MAIN_zst
inline constexpr int MAIN_zst = (1 << 2);
                                #endif

[[noreturn]] static fu::never fail_vAc0TkcF(const fu_STR& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL_QjCEbuxM(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu_STR(reason) : "Assertion failed."_fu)), _here, ctx);
}

                                #ifndef DEF_unless_oob_UKLZzMsv
                                #define DEF_unless_oob_UKLZzMsv
inline const s_Extended& unless_oob_UKLZzMsv(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_Hbw1kZ0j(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_UKLZzMsv(module.out.solve.scope.extended, target.index);

    if (target.modid < 0)
        return (*(const s_Extended*)fu::NIL);

    return unless_oob_UKLZzMsv(ctx.modules[target.modid].out.solve.scope.extended, target.index);
}

static bool isLocal_TryBh3kR(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_a8BCJP3T(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (!(target.index > 0))
        fu_ASSERT();

    if (isLocal_TryBh3kR(target))
        return module.out.solve.scope.extended[-target.modid].locals[(target.index - 1)];

    const s_Module& m = ((target.modid == module.modid) ? module : ctx.modules[target.modid]);
    return m.out.solve.scope.overloads[(target.index - 1)];
}

                                #ifndef DEF_x7E_PEYL9mMAprj
                                #define DEF_x7E_PEYL9mMAprj
inline fu_STR x7E(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

                                #ifndef DEF_only_gF1gIgkM
                                #define DEF_only_gF1gIgkM
inline const s_SolvedNode& only_gF1gIgkM(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static bool isFieldChain_ZZ187IGK(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx)
{
    if (node.kind != "call"_fu)
        return false;

    const s_Overload& t = GET_a8BCJP3T(node.target, module, ctx);
    if (t.kind == "field"_fu)
        return isFieldChain_ZZ187IGK(only_gF1gIgkM(node.items), module, ctx);

    if (t.kind == "var"_fu)
        return true;

    return false;
}

                                #ifndef DEF_x3Cx3E_gcxVH86X
                                #define DEF_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_D0yPwEUc
                                #define DEF_x3Cx3E_D0yPwEUc
inline int x3Cx3E_D0yPwEUc(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEF_x3Cx3E_pN4jXVBE
                                #define DEF_x3Cx3E_pN4jXVBE
inline int x3Cx3E_pN4jXVBE(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_D0yPwEUc(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEF_add_wAuMmv6B
                                #define DEF_add_wAuMmv6B
inline bool add_wAuMmv6B(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_pN4jXVBE(keys[i], item);
        if (cmp == 0)
        {
            return false;
        };
        if (cmp < 0)
            lo = (i + 1);
        else
            hi = i;

    };
    keys.insert(lo, fu_STR(item));
    return true;
}
                                #endif

static void include_OWB5Ob07(const fu_STR& lib, s_Outputs& outputs)
{
    add_wAuMmv6B(outputs._libs, lib);
}

static fu_STR primAnnotBase_k2rX0sor(fu::view<char> c, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (c == "i32"_fu)
        return "int"_fu;

    if (c == "i16"_fu)
        return "short"_fu;

    if (c == "u32"_fu)
        return "unsigned"_fu;

    if (c == "b8"_fu)
        return "bool"_fu;

    if (c == "c8"_fu)
        return "char"_fu;

    if (c == "f32"_fu)
        return "float"_fu;

    if (c == "f64"_fu)
        return "double"_fu;

    if ((c == "i8"_fu) || (c == "u8"_fu))
    {
        include_OWB5Ob07("<fu/int.h>"_fu, outputs);
        return "fu::"_fu + c;
    };
    include_OWB5Ob07("<cstdint>"_fu, outputs);
    if (c == "i64"_fu)
        return "int64_t"_fu;

    if (c == "u16"_fu)
        return "uint16_t"_fu;

    if (c == "u32"_fu)
        return "uint32_t"_fu;

    if (c == "u64"_fu)
        return "uint64_t"_fu;

    fail_vAc0TkcF((("Unknown primitive: `"_fu + c) + "`."_fu), _here, ctx);
}

static fu_STR annotateZST_wiVUtkCT()
{
    return "void"_fu;
}

static fu_STR annotateNever_L2rU3UsB(s_Outputs& outputs)
{
    include_OWB5Ob07("<fu/never.h>"_fu, outputs);
    return "fu::never"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static fu_STR annotateString_LkR5I5c0(s_Outputs& outputs)
{
    include_OWB5Ob07("<fu/str.h>"_fu, outputs);
    return "fu_STR"_fu;
}

                                #ifndef DEF_grow_if_oob_hKyTLsWu
                                #define DEF_grow_if_oob_hKyTLsWu
inline s_BitSet& grow_if_oob_hKyTLsWu(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once_IPrjcKiK(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once_PCSel0xp(grow_if_oob_hKyTLsWu(bs, i), j);
}

static fu_STR declarePrimitive_VhNsoKsn(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    fu_STR baseprim = primAnnotBase_k2rX0sor(s.base, outputs, _here, ctx);
    fu_STR header = ((("enum "_fu + id) + ": "_fu) + baseprim);
    outputs._tfwd_src += (header + ";\n"_fu);
    fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\n"_fu) + header) + "\n{"_fu);
    fu::view<s_ScopeItem> members = s.items;
    for (int i = 0; i < members.size(); i++)
    {
        const s_Overload& member = GET_a8BCJP3T(target_e3eS1o6f(members[i]), module, ctx);
        def += (((("\n    "_fu + id) + "_"_fu) + member.name) + ","_fu);
    };
    return def + "\n};\n                                #endif\n"_fu;
}

static const s_Overload& try_GET_0LIypOXp(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    return target ? GET_a8BCJP3T(target, module, ctx) : (*(const s_Overload*)fu::NIL);
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_F_PREDICATE
                                #define DEF_F_PREDICATE
extern const int F_PREDICATE;
                                #endif

static fu_STR declareStruct_hHl0RMJO(fu::view<char> id, const s_Struct& s, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    if (s.base)
        return declarePrimitive_VhNsoKsn(id, s, outputs, _here, ctx, module);

    outputs._tfwd_src += (("struct "_fu + id) + ";\n"_fu);
    const s_Type& t = GET_a8BCJP3T(s.target, module, ctx).type;
    fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\nstruct "_fu) + id) + "\n{"_fu);
    fu_STR indent = "\n    "_fu;
    fu::view<s_ScopeItem> fields = s.items;
    for (int i = 0; i < fields.size(); i++)
    {
        const s_Overload& field = GET_a8BCJP3T(target_e3eS1o6f(fields[i]), module, ctx);
        if (!(field.kind == "field"_fu))
            fail_vAc0TkcF(((((("Non-field struct item: "_fu + field.name) + " ("_fu) + field.kind) + ") in "_fu) + t.vtype.canon), _here, ctx);

        def += ((((indent + typeAnnot_uGt8hsQ7(field.type, 0, outputs, _here, ctx, module, _current_fn)) + " "_fu) + ID_LX3QLY5k(field.name)) + ";"_fu);
    };
    if (!is_rx_copy_zJCUz9W3(t))
    {
        def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
    }
    else if (try_GET_0LIypOXp(s.target, module, ctx).status & SS_TYPE_RECUR)
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
    {
        if (GET_a8BCJP3T(target_e3eS1o6f(fields[i_1]), module, ctx).flags & F_PREDICATE)
            def += ("\n            || "_fu + ID_LX3QLY5k(fields[i_1].id));

    };
    def += "\n        ;"_fu;
    def += "\n    }"_fu;
    return def + "\n};\n                                #endif\n"_fu;
}

static fu_STR typeAnnotBase_06A3k4cb(const s_Type& type, const int mode, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_oPp5yWwB(type) && (c.size() < 4))
        return primAnnotBase_k2rX0sor(c, outputs, _here, ctx);

    if (type_isZST_zJCUz9W3(type))
        return annotateZST_wiVUtkCT();

    if (c == "never"_fu)
        return annotateNever_L2rU3UsB(outputs);

    s_Type arrayItem = tryClear_sliceable_zJCUz9W3(type);
    if (arrayItem)
    {
        if (TODO_FIX_isArray_zJCUz9W3(type) || !is_ref_zJCUz9W3(type))
        {
            if (arrayItem == t_byte)
                return annotateString_LkR5I5c0(outputs);

            fu_STR itemAnnot = typeAnnot_uGt8hsQ7(arrayItem, 0, outputs, _here, ctx, module, _current_fn);
            include_OWB5Ob07("<fu/vec.h>"_fu, outputs);
            return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
        };
        fu_STR itemAnnot = typeAnnot_uGt8hsQ7(arrayItem, 0, outputs, _here, ctx, module, _current_fn);
        include_OWB5Ob07("<fu/view.h>"_fu, outputs);
        if (is_mutref_zJCUz9W3(type, _here, ctx) || (mode & M_MUTVAR))
            return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
        else
            return ("fu::view<"_fu + itemAnnot) + ">"_fu;

    };
    const s_Struct* _0;
    const s_Struct& s = (*(_0 = &(lookupStruct_GBXUPXZt(type, module, ctx))) ? *_0 : fail_vAc0TkcF(("TODO: "_fu + type.vtype.canon), _here, ctx));
    /*MOV*/ fu_STR id = ("s_"_fu + s.name);
    const s_StructCanon scp = parseStructCanon_9u6Vl9O2(type.vtype.canon);
    if (add_once_IPrjcKiK(outputs._tfwd, scp.modid, scp.index))
    {
        fu_STR decl = declareStruct_hHl0RMJO(id, s, outputs, _here, ctx, module, _current_fn);
        outputs._tdef += decl;
    };
    return /*NRVO*/ id;
}

                                #ifndef DEF_starts_PEYL9mMA
                                #define DEF_starts_PEYL9mMA
inline bool starts_PEYL9mMA(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu_STR typeAnnot_uGt8hsQ7(const s_Type& type, const int mode, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR fwd = typeAnnotBase_06A3k4cb(type, mode, outputs, _here, ctx, module, _current_fn);
    if (is_ref_zJCUz9W3(type))
    {
        if (starts_PEYL9mMA(fwd, "fu::view"_fu) || (fwd == "void"_fu))
            return /*NRVO*/ fwd;

        if (is_mutref_zJCUz9W3(type, _here, ctx))
            return fwd + "&"_fu;

        if (is_primitive_oPp5yWwB(type))
            return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

        if (mode & M_MOVABLE)
        {
            const s_Type& fnret = GET_a8BCJP3T(s_Target { int(module.modid), int(_current_fn.target.index) }, module, ctx).type;
            if (!(is_trivial_JKdxRWxB(fnret, module, ctx) || is_ref_zJCUz9W3(fnret)))
                return fwd + "&"_fu;

        };
        return ("const "_fu + fwd) + "&"_fu;
    };
    if ((mode & M_ARGUMENT) && !is_primitive_oPp5yWwB(type))
        return fwd + "&&"_fu;

    if ((mode & M_CONST) && is_trivial_JKdxRWxB(type, module, ctx))
        return "const "_fu + fwd;

    return /*NRVO*/ fwd;
}

static fu_STR emitTEMPVAR_R0z1o01h(fu::view<char> annot, bool& ptrflip, const fu_STR& id, const fu_STR& expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu_STR id_1 = (id ? fu_STR(id) : x7E("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu_STR cgClone_zxF8bHlr(const s_Type& type, fu::view<char> src, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    return ((typeAnnotBase_06A3k4cb(type, 0, outputs, _here, ctx, module, _current_fn) + "("_fu) + src) + ")"_fu;
}

static fu_STR cgMove_1CTxogtf(const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (is_trivial_JKdxRWxB(type, module, ctx) && is_rx_copy_zJCUz9W3(type))
        return cgClone_zxF8bHlr(type, src, outputs, _here, ctx, module, _current_fn);

    return ((("static_cast<"_fu + typeAnnotBase_06A3k4cb(type, 0, outputs, _here, ctx, module, _current_fn)) + "&&>("_fu) + src) + ")"_fu;
}

                                #ifndef DEF_map_6SPoLEfY
                                #define DEF_map_6SPoLEfY
inline fu_VEC<fu_STR> map_6SPoLEfY(fu::view<s_SolvedNode> a)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
        res.mutref(i) = a[i].kind;

    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_join_tkmelWjn
                                #define DEF_join_tkmelWjn
inline fu_STR join_tkmelWjn(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

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
}
                                #endif

                                #ifndef DEF_find_97z4iafs
                                #define DEF_find_97z4iafs
inline int find_97z4iafs(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static fu_STR& ARG_9rKNiNGB(const int i, fu::view_mut<fu_STR> item_src)
{
    return item_src.mutref(i);
}

static fu_STR REST_9PCldYlE(const int start, fu::view<fu_STR> item_src)
{
    /*MOV*/ fu_STR src {};
    for (int i = start; i < item_src.size(); i++)
    {
        const fu_STR& item = item_src[i];
        if (!item)
            continue;

        if (src)
            src += ", "_fu;

        src += item_src[i];
    };
    return /*NRVO*/ src;
}

static fu_STR ooeWrap_2Q04c6Ry(const fu_STR& src, const fu_STR& ooe_header)
{
    return (ooe_header ? (((ooe_header + ", "_fu) + src) + ")"_fu) : fu_STR(src));
}

static fu_STR emitMethodCall_Ze9wxdW6(fu::view<char> id, fu::view_mut<fu_STR> item_src, const fu_STR& ooe_header)
{
    fu_STR _0 {};
    return ooeWrap_2Q04c6Ry(((_0 = ((ARG_9rKNiNGB(0, item_src) + id) + "("_fu), (static_cast<fu_STR&&>(_0) + REST_9PCldYlE(1, item_src))) + ")"_fu), ooe_header);
}

static bool affectedByIntegerPromotions_NMNvZEw8(const s_Type& type)
{
    if (!is_integral_oPp5yWwB(type) || is_ref_zJCUz9W3(type))
        return false;

    fu::view<char> c = type.vtype.canon;
    return (c.size() == 2) || ((c.size() == 3) && (fu::get_view(c, 1, 3) == "16"_fu));
}

static fu_STR unpromote_b4cHd89X(const fu_STR& expr, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    if (isNative && affectedByIntegerPromotions_NMNvZEw8(node.type))
        return ((typeAnnotBase_06A3k4cb(node.type, 0, outputs, _here, ctx, module, _current_fn) + "("_fu) + expr) + ")"_fu;

    return fu_STR(expr);
}

static fu_STR emitPostfixOp_rgUgU86m(fu::view<char> op, fu::view_mut<fu_STR> item_src, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    return unpromote_b4cHd89X((ARG_9rKNiNGB(0, item_src) + op), isNative, node, outputs, _here, ctx, module, _current_fn);
}

                                #ifndef DEF_only_3Ycuooso
                                #define DEF_only_3Ycuooso
inline const fu_STR& only_3Ycuooso(fu::view<fu_STR> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu_STR emitBuiltin_3E7cMvFs(fu::view<char> id, fu::view<fu_STR> args, const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = node.type;
        const s_Type& input = only_gF1gIgkM(node.items).type;
        fu_STR cast = typeAnnotBase_06A3k4cb(output, 0, outputs, _here, ctx, module, _current_fn);
        if (is_integral_oPp5yWwB(input) && is_integral_oPp5yWwB(output) && (is_unsigned_oPp5yWwB(input) != is_unsigned_oPp5yWwB(output)))
        {
            s_Type mid_t { (is_unsigned_oPp5yWwB(input) ? output : input) };
            if (!(mid_t.vtype.canon[0] == 'i'))
                fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx);

            mid_t.vtype.canon.mutref(0) = 'u';
            if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
            {
                fu_STR inner = typeAnnotBase_06A3k4cb(mid_t, 0, outputs, _here, ctx, module, _current_fn);
                return ((((cast + '(') + inner) + '(') + only_3Ycuooso(args)) + "))"_fu;
            };
        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu_STR inner = typeAnnotBase_06A3k4cb(t_u8, 0, outputs, _here, ctx, module, _current_fn);
            return ((((cast + '(') + inner) + '(') + only_3Ycuooso(args)) + "))"_fu;
        };
        return ((cast + '(') + only_3Ycuooso(args)) + ')';
    };
    fail_vAc0TkcF(("Unknown builtin: "_fu + id), _here, ctx);
}

static fu_STR emitFunctionCall_JRKdsrM7(fu::view<char> id, fu::view<char> open, fu::view<char> close, fu::view<fu_STR> item_src, const fu_STR& ooe_header)
{
    return ooeWrap_2Q04c6Ry((((id + open) + REST_9PCldYlE(0, item_src)) + close), ooe_header);
}

                                #ifndef DEF_last_ZCtM7908
                                #define DEF_last_ZCtM7908
inline char last_ZCtM7908(fu::view<char> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static bool binSkipParens_XsJxoa9a(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;

    if (mode & M_PARENS)
    {
        if (last_ZCtM7908(id) == '=')
        {
            if ((id == "=="_fu) || (id == "!="_fu))
                return true;

            return false;
        };
        return true;
    };
    return false;
}

static fu_STR emitBinaryOp_ZiThntw4(fu::view<char> op, fu::view<s_SolvedNode> args, const s_TokenIdx& _here, const s_Context& ctx, const int mode, const fu_STR& ooe_header, fu::view_mut<fu_STR> item_src, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    if (!(args.size() == 2))
        fail_vAc0TkcF("args.len != 2"_fu, _here, ctx);

    if (binSkipParens_XsJxoa9a(op, mode) && !ooe_header)
    {
        fu_STR _0 {};
        return (_0 = (((ARG_9rKNiNGB(0, item_src) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_0) + ARG_9rKNiNGB(1, item_src)));
    };
    fu_STR _1 {};
    return ooeWrap_2Q04c6Ry(unpromote_b4cHd89X(((_1 = (((("("_fu + ARG_9rKNiNGB(0, item_src)) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_1) + ARG_9rKNiNGB(1, item_src))) + ")"_fu), isNative, node, outputs, _here, ctx, module, _current_fn), ooe_header);
}

static fu_STR cgDefault_Hcs2dzQd(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, s_Outputs& outputs, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    if (is_mutref_zJCUz9W3(type, _here, ctx))
        fail_vAc0TkcF("Cannot definit mutrefs."_fu, _here, ctx);

    if (type_isZST_zJCUz9W3(type))
        return "void()"_fu;

    if (is_ref_zJCUz9W3(type))
    {
        fu_STR annot = typeAnnot_uGt8hsQ7(type, 0, outputs, _here, ctx, module, _current_fn);
        if (starts_PEYL9mMA(annot, "fu::view"_fu))
            return annot + "{}"_fu;

        include_OWB5Ob07("<fu/default.h>"_fu, outputs);
        return ("(*(const "_fu + typeAnnot_uGt8hsQ7(clear_refs_zJCUz9W3(s_Type(type)), 0, outputs, _here, ctx, module, _current_fn)) + "*)fu::NIL)"_fu;
    };
    return typeAnnot_uGt8hsQ7(type, 0, outputs, _here, ctx, module, _current_fn) + "{}"_fu;
}

static bool add_once_SI3t3nsB(fu_VEC<s_BitSet>& bs, const s_Target& target)
{
    return add_once_IPrjcKiK(bs, target.modid, target.index);
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

static int isExtLinked_FX9JSe8v(const s_Overload& overload)
{
    return overload.flags & (F_PUB | F_EXTERN);
}

static fu_STR fnLinkage_F83cfzZa(const s_Overload& overload)
{
    return ((is_never_zJCUz9W3(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!isExtLinked_FX9JSe8v(overload) ? "static "_fu : fu_STR{});
}

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

static bool isOp_Rb43UWRA(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    const int flags = GET_a8BCJP3T(target, module, ctx).flags;
    if (flags & F_OOE_RTL)
        return true;

    if (!(flags & F_OPERATOR))
        return false;

    fu::view<s_Argument> args = EXT_Hbw1kZ0j(target, module, ctx).args;
    if (args.size() > 2)
        return false;

    if (GET_a8BCJP3T(target, module, ctx).kind == "__native"_fu)
        return true;

    fu::view<char> name = GET_a8BCJP3T(target, module, ctx).name;
    if (args.size() > 1)
        return hasBinary_LX3QLY5k(name);

    if (flags & F_POSTFIX)
        return hasPostfix_LX3QLY5k(name);

    return hasUnary_LX3QLY5k(name);
}

static fu_STR valid_operator_vfuw1B15(const fu_STR& str)
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

static char hex_mtW5p6Ur(const unsigned x)
{
    return ((x < 10u) ? char((unsigned(fu::u8('0')) + x)) : char((unsigned(fu::u8('A')) + (x - 10u))));
}

static fu_STR xHH_gyFRpmHc(const unsigned c)
{
    return ("x"_fu + hex_mtW5p6Ur(((c >> 4u) & 0xfu))) + hex_mtW5p6Ur(((c >> 0u) & 0xfu));
}

static fu_STR valid_identifier_9dZldJIf(fu_STR&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
            continue;

        str = ((fu::get_view(str, 0, i) + xHH_gyFRpmHc(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1), str.size()));
    };
    return ID_LX3QLY5k(str);
}

static fu_STR fnID_zXF0zMbc(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET_a8BCJP3T(target, module, ctx);
    const fu_STR& id = (overload.name ? overload.name : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx));
    return (isOp_Rb43UWRA(target, module, ctx) ? ("operator"_fu + valid_operator_vfuw1B15(id)) : valid_identifier_9dZldJIf(fu_STR(id)));
}

static fu_STR cgFnPrototype_C92xTPva(const s_Target& target, const bool fnptr, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_Outputs& outputs)
{
    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu_VEC<fu_STR>{}, fu_VEC<int>{}, fu_VEC<fu_STR>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    /*MOV*/ fu_STR src {};
    const s_Overload& overload = GET_a8BCJP3T(target, module, ctx);
    if (!fnptr)
    {
        fu_STR linkage = fnLinkage_F83cfzZa(overload);
        src += linkage;
    };

    {
        const s_Type& ret = (overload.type ? overload.type : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx));
        fu_STR annot = typeAnnot_uGt8hsQ7(ret, M_RETVAL, outputs, _here, ctx, module, _current_fn);
        src += (annot + " "_fu);
    };

    {
        fu_STR name = fnID_zXF0zMbc(target, module, ctx, _here);
        src += (fnptr ? (("(*"_fu + name) + ")"_fu) : fu_STR(name));
    };

    {
        src += "("_fu;
        fu::view<s_Argument> args = EXT_Hbw1kZ0j(target, module, ctx).args;
        bool first = true;
        for (int i = 0; i < args.size(); i++)
        {
            const s_Type& arg = args[i].type;
            if (type_isZST_zJCUz9W3(arg))
                continue;

            if (first)
                first = false;
            else
                src += ", "_fu;

            src += typeAnnot_uGt8hsQ7(arg, (M_ARGUMENT | M_FWDECL), outputs, _here, ctx, module, _current_fn);
        };
        if (overload.flags & F_POSTFIX)
        {
            if (!(overload.flags & F_OPERATOR))
                fu_ASSERT();

            src += ", /*postfix*/int"_fu;
        };
        src += ")"_fu;
    };
    return /*NRVO*/ src;
}

                                #ifndef DEF_F_HOTSWAP
                                #define DEF_F_HOTSWAP
extern const int F_HOTSWAP;
                                #endif

static void ensureFwdDecl_03T9n4In(const s_Target& target, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET_a8BCJP3T(target, module, ctx);
    if ((overload.kind != "fn"_fu) || (overload.name == "main"_fu))
        return;

    if (!add_once_SI3t3nsB(outputs._ffwd, target))
        return;

    fu_STR fwdDecl = (cgFnPrototype_C92xTPva(target, bool{}, _current_fn, module, ctx, _here, outputs) + ";\n"_fu);
    if (overload.flags & F_HOTSWAP)
    {
        fu_STR fnPtr = (("extern "_fu + cgFnPrototype_C92xTPva(target, true, _current_fn, module, ctx, _here, outputs)) + ";\n"_fu);
        outputs._ffwd_live_client += fnPtr;
        outputs._ffwd_live_nclient += fwdDecl;
    }
    else
        outputs._ffwd_src += fwdDecl;

}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

static s_Target nested_WZh50iUF(const int index, const s_cg_CurrentFn& _current_fn)
{
    return index ? s_Target { -_current_fn.target.index, int(index) } : s_Target{};
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

static fu_VEC<fu_STR>& _ids_used_A6ZrtACn(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu_VEC<int>& _ids_dedupe_faxvPNqp(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEF_grow_if_oob_SiQlapRF
                                #define DEF_grow_if_oob_SiQlapRF
inline int& grow_if_oob_SiQlapRF(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR localID_5lIpHhW1(const s_Target& target, const bool dedupe, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET_a8BCJP3T(target, module, ctx);
    /*MOV*/ fu_STR id { o.name };
    const s_ClosureID cid = tryParseClosureID_1FBeX0Ih(id);
    if (cid.target)
        id = GET_a8BCJP3T(cid.target, module, ctx).name;

    id = ID_LX3QLY5k(id);
    if (isLocal_TryBh3kR(target))
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                fu_STR candidate = (dupes ? x7E((id + '_'), fu::i64dec(dupes)) : fu_STR(id));
                for (int i = 0; i < _ids_used_A6ZrtACn(_current_fn).size(); i++)
                {
                    if (_ids_used_A6ZrtACn(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_5;
                    };
                };
                _ids_used_A6ZrtACn(_current_fn) += fu_STR(candidate);
                break;
              } BL_5:;
            };
            if (dupes)
                grow_if_oob_SiQlapRF(_ids_dedupe_faxvPNqp(_current_fn), target.index) = dupes;

        };
        const int dupes = ((_ids_dedupe_faxvPNqp(_current_fn).size() > target.index) ? _ids_dedupe_faxvPNqp(_current_fn)[target.index] : (*(const int*)fu::NIL));
        if (dupes)
            return x7E((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

                                #ifndef DEF_F_HOIST
                                #define DEF_F_HOIST
extern const int F_HOIST;
                                #endif

static bool F_HOIST_asPtr_tEzfHTVR(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (!(GET_a8BCJP3T(target, module, ctx).flags & F_HOIST))
        return false;

    const s_Type& t = GET_a8BCJP3T(target, module, ctx).solved.type;
    return is_ref_zJCUz9W3(t) && (!type_isSliceable_zJCUz9W3(t) || TODO_FIX_isArray_zJCUz9W3(t));
}

static fu_STR binding_K61rtyHc(const s_Target& target, const bool forceValue, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_a8BCJP3T(target, module, ctx);
    const s_Type& place_type = overload.solved.type;
    const int isArg = (overload.flags & F_ARG);
    s_Type place_type_1 = (forceValue ? clear_refs_zJCUz9W3(s_Type(place_type)) : s_Type(place_type));
    /*MOV*/ fu_STR annot = typeAnnot_uGt8hsQ7(place_type_1, ((((!is_mutref_zJCUz9W3(overload.type, _here, ctx) ? M_CONST : (*(const int*)fu::NIL)) | (isArg ? M_ARGUMENT : (*(const int*)fu::NIL))) | (is_mutref_zJCUz9W3(overload.type, _here, ctx) ? M_MUTVAR : (*(const int*)fu::NIL))) | ((overload.flags & F_MOVED_FROM) ? M_MOVABLE : (*(const int*)fu::NIL))), outputs, _here, ctx, module, _current_fn);
    const int isUnused = (overload.flags & F_UNUSED);
    if (isArg && isUnused)
        return /*NRVO*/ annot;

    /*MOV*/ fu_STR id = localID_5lIpHhW1(target, true, module, ctx, _current_fn);
    if (GET_a8BCJP3T(target, module, ctx).flags & F_HOIST)
    {
        if (!(_current_fn.target))
            BUG_XksxYQ3i("TODO: hoisting for global variables."_fu, _here, ctx);

        fu_STR hoistDecl = (starts_PEYL9mMA(annot, "const "_fu) ? fu::slice(annot, 6) : fu_STR(annot));
        if (F_HOIST_asPtr_tEzfHTVR(target, module, ctx))
        {
            if (!(hoistDecl[(hoistDecl.size() - 1)] == '&'))
                BUG_XksxYQ3i(("F_HOIST_asPtr: Decl not a ref: "_fu + hoistDecl), _here, ctx);

            hoistDecl.mutref((hoistDecl.size() - 1)) = '*';
        };
        _current_fn._hoist += ((hoistDecl + " "_fu) + id);
        return /*NRVO*/ id;
    };
    /*MOV*/ fu_STR head { (annot ? annot : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx)) };
    head += (" "_fu + id);
    if (isUnused)
        head = ("[[maybe_unused]] "_fu + head);

    if (GET_a8BCJP3T(target, module, ctx).flags & F_MOVED_FROM)
        head = ("/*MOV*/ "_fu + head);

    return /*NRVO*/ head;
}

static fu_STR binding_L7OBCMHa(const s_Argument& arg, const bool forceValue, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_Outputs& outputs)
{
    const s_Target target = nested_WZh50iUF(arg.local, _current_fn);
    return binding_K61rtyHc(target, forceValue, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgFnSignature_S2GTOKYd(const s_SolvedNode& fn, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_a8BCJP3T(target, module, ctx);
    const fu_VEC<s_Argument>& host_args = EXT_Hbw1kZ0j(target, module, ctx).args;
    fu_STR annot = typeAnnot_uGt8hsQ7((overload.type ? overload.type : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx)), M_RETVAL, outputs, _here, ctx, module, _current_fn);
    fu_STR id { overload.name };
    if (id == "main"_fu)
    {
        outputs._hasMain = MAIN_needed;
        id = "fu_MAIN"_fu;
        if (host_args)
            outputs._hasMain |= MAIN_argv;

        if (type_isZST_zJCUz9W3(overload.type))
            outputs._hasMain |= MAIN_zst;

    }
    else
        id = fnID_zXF0zMbc(fn.target, module, ctx, _here);

    /*MOV*/ fu_STR src = ((((fnLinkage_F83cfzZa(overload) + annot) + " "_fu) + id) + "("_fu);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (type_isZST_zJCUz9W3(host_args[i].type))
            continue;

        if (some)
            src += ", "_fu;

        some = true;
        src += binding_L7OBCMHa(host_args[i], bool{}, _current_fn, module, ctx, _here, outputs);
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

static bool exprOK_qyufW00L(fu::view<s_SolvedNode> nodes)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        fu::view<char> k = n.kind;
        if ((k == "jump"_fu) || (k == "loop"_fu) || (k == "try"_fu) || (k == "letdef"_fu) || (k == "block"_fu))
            return false;

        if (((k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu)) && !exprOK_qyufW00L(n.items))
            return false;

    };
    return true;
}

static bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return a.index == b.index;
}

static bool labelUsed_b8AulKHd(fu::view<s_SolvedNode> items, const s_Helpers& helpers)
{
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& item = items[i];
        if (((item.kind == "jump"_fu) && (item.helpers == helpers)) || labelUsed_b8AulKHd(item.items, helpers))
            return true;

    };
    return false;
}

static fu_VEC<fu_STR> cgNodes_sITJPhOk(fu::view<s_SolvedNode> nodes, const int mode, const fu_STR& trail, fu::view<char> debug, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
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
        const bool isTrail = (trail && (i == (nodes.size() - 1)) && !is_never_zJCUz9W3(node.type) && !is_void_zJCUz9W3(node.type));
        fu_STR src = (node ? cgNode_3OLWvUbE(node, (debug + ".cgNodes"_fu), (isTrail ? (mode & ~M_STMT) : int(mode)), (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn) : fu_STR{});
        if (!(src || (mode & M_STMT)))
            fail_vAc0TkcF((((("cgNodes: empty output for Node(kind=`"_fu + node.kind) + "` value=`"_fu) + node.value) + "`)."_fu), _here, ctx);

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

static fu_STR cgComma_BCPrStF4(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu_VEC<fu_STR> items = cgNodes_sITJPhOk(nodes, 0, (*(const fu_STR*)fu::NIL), (debug + ".cgComma"_fu), _current_fn, _here, ctx, module, outputs);
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

                                #ifndef DEF_if_first_ZCtM7908
                                #define DEF_if_first_ZCtM7908
inline char if_first_ZCtM7908(fu::view<char> s)
{
    return s.size() ? s[0] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEF_if_last_ZCtM7908
                                #define DEF_if_last_ZCtM7908
inline char if_last_ZCtM7908(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR cgStatements_sCoJjqTg(fu::view<s_SolvedNode> nodes, int& count, const fu_STR& trail, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu_VEC<fu_STR> lines = cgNodes_sITJPhOk(nodes, M_STMT, trail, "cgStatements"_fu, _current_fn, _here, ctx, module, outputs);
    count = lines.size();
    /*MOV*/ fu_STR src {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
            src += (((if_first_ZCtM7908(line) == '\n') ? ('\n' + line) : (outputs._indent + line)) + ((if_last_ZCtM7908(line) == ';') ? '\n' : ';'));

    };
    return /*NRVO*/ src;
}

static fu_STR cgBlock_K9RMzG8Z(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Helpers& helpers, const s_Type& type, s_cg_CurrentFn& _current_fn, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    const int _ids_used0 = _current_fn._ids_used.size();
    fu_DEFER(if (!_current_fn._hoist)
        _current_fn._ids_used.shrink(_ids_used0););
    fu_STR indent0 { outputs._indent };
    fu_DEFER(outputs._indent = indent0);
    outputs._indent += "    "_fu;
    fu_STR gnuOpen = (gnuStmtExpr ? "(__extension__ ("_fu : fu_STR{});
    fu_STR open = "{"_fu;
    fu_STR close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu_STR trail {};
    fu_STR name = x7E("BL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const bool has_val = (type && !is_void_zJCUz9W3(type));
    bool ptrflip = false;
    if (has_val)
    {
        fu_STR annot = typeAnnot_uGt8hsQ7(type, 0, outputs, _here, ctx, module, _current_fn);
        fu_STR id = emitTEMPVAR_R0z1o01h(annot, ptrflip, (name ? (name + "_v"_fu) : fu_STR{}), (*(const fu_STR*)fu::NIL), _current_fn);
        fu_STR out = (ptrflip ? ("*"_fu + id) : cgMove_1CTxogtf(type, id, module, ctx, outputs, _here, _current_fn));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu_STR(name), s_Helpers(helpers), bool(has_val), bool(ptrflip) };
    int count {};
    /*MOV*/ fu_STR src = cgStatements_sCoJjqTg(nodes, count, trail, _current_fn, _here, ctx, module, outputs);
    const bool labelUsed = fu::has(src, (("goto "_fu + name) + ";"_fu));
    if (labelUsed)
    {
        close = (((("  } "_fu + name) + ":;"_fu) + indent0) + close);
        open = "{ {"_fu;
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || ((nodes[0].kind != "jump"_fu) && (nodes[0].kind != "call"_fu)) || labelUsed)
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);

    return /*NRVO*/ src;
}

static fu_STR cgBlock_cmMJyrMp(const s_SolvedNode& node, const int mode, fu::view<char> debug, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu_VEC<s_SolvedNode> items = ((node.kind == "block"_fu) ? fu_VEC<s_SolvedNode>(node.items) : fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Helpers& helpers = ((node.kind == "block"_fu) ? node.helpers : (*(const s_Helpers*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = helpers;

    const bool expr = !(mode & M_STMT);
    if (expr && exprOK_qyufW00L(items) && !labelUsed_b8AulKHd(items, helpers))
        return cgComma_BCPrStF4(items, (debug + ".cgBlock"_fu), _current_fn, _here, ctx, module, outputs);

    return cgBlock_K9RMzG8Z(items, !!(mode & M_OPT_CURLIES), expr, helpers, (expr ? node.type : (*(const s_Type*)fu::NIL)), _current_fn, outputs, _here, ctx, module);
}

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEF_unpackAddrOfFn_p3IkuVP6
                                #define DEF_unpackAddrOfFn_p3IkuVP6
inline void unpackAddrOfFn_p3IkuVP6(fu::view<char> canon, s_Target& last, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!(canon[0] == '@'))
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

    int offset = 1;
    while (offset < canon.size())
    {
        const s_Mi mi = parseMi_mPp6Ulzh(offset, canon);
        const s_Target target = s_Target { int(mi.modid), int(mi.index) };
        if (last)
            fail_vAc0TkcF(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_a8BCJP3T(last, module, ctx).name) + " vs "_fu) + GET_a8BCJP3T(target, module, ctx).name), _here, ctx);

        last = target;
        if (!(GET_a8BCJP3T(target, module, ctx).kind == "fn"_fu))
            fail_vAc0TkcF(((("Cannot codegen a non-fn: "_fu + GET_a8BCJP3T(target, module, ctx).kind) + " "_fu) + GET_a8BCJP3T(target, module, ctx).name), _here, ctx);

        fu::view<s_Argument> args = EXT_Hbw1kZ0j(target, module, ctx).args;
        for (int i = 0; i < args.size(); i++)
        {
            if (args[i].flags & F_IMPLICIT)
                fail_vAc0TkcF("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, _here, ctx);

        };
        ensureFnUsable_hsT4XLhz(target, module, ctx, outputs, _current_fn, _here);
    };
}
                                #endif

static fu_STR cgEmpty_LIDsl2ab(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (mode & M_STMT)
        return fu_STR{};

    if ((mode & M_ARG_TO_NATIVE) && type_isAddrOfFn_zJCUz9W3(node.type))
    {
        s_Target last {};
        unpackAddrOfFn_p3IkuVP6(node.type.vtype.canon, last, module, ctx, _here, outputs, _current_fn);
        return "&"_fu + fnID_zXF0zMbc(last, module, ctx, _here);
    };
    if (!node.type)
        return "0"_fu;

    return cgDefault_Hcs2dzQd(node.type, _here, ctx, outputs, module, _current_fn);
}

static fu_STR cgFn_s5b6nkc4(const s_SolvedNode& fn, const int mode, s_Outputs& outputs, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn)
{
    fu_STR indent0 { outputs._indent };
    fu_DEFER(outputs._indent = indent0);
    fu::view<s_SolvedNode> items = fn.items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    const s_Target& target = fn.target;
    const s_Overload& overload = GET_a8BCJP3T(target, module, ctx);
    fu::view<char> id = overload.name;
    if (!(overload.status & SS_FINALIZED))
        fail_vAc0TkcF(("cgFn: fn not finalized: "_fu + id), _here, ctx);

    if (!body)
    {
        if (!(overload.kind == "__native"_fu))
            fail_vAc0TkcF(((("cgFn: no body on non-native: "_fu + overload.kind) + " "_fu) + id), _here, ctx);

        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
    };
    outputs._indent = "\n"_fu;
    fu_STR src {};

    {
        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(fn.target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu_VEC<fu_STR>{}, fu_VEC<int>{}, fu_VEC<fu_STR>{} };
        fu_DEFER(std::swap(_current_fn, current_fn0));
        std::swap(_current_fn, current_fn0);
        _current_fn.can_return = body.helpers;
        src += cgFnSignature_S2GTOKYd(fn, module, ctx, _here, outputs, _current_fn);
        fu_STR body_src = cgBlock_cmMJyrMp(body, M_STMT, (("cgFn("_fu + id) + ")"_fu), _current_fn, _here, ctx, module, outputs);
        if (_current_fn._hoist)
        {
            fu_STR hoist = "\n    // Hoisted:"_fu;
            for (int i = 0; i < _current_fn._hoist.size(); i++)
                hoist += (("\n    "_fu + _current_fn._hoist[i]) + ";"_fu);

            const int idx = (fu::lfind(body_src, "{"_fu) + 1);
            if (idx > 0)
                body_src.splice(idx, 0, (hoist + "\n"_fu));

        };
        src += body_src;
    };
    if (overload.status & SS_FN_RECUR)
        ensureFwdDecl_03T9n4In(fn.target, module, ctx, outputs, _current_fn, _here);

    fu_STR dedupe = ((overload.flags & F_PUB) && (overload.flags & F_TEMPLATE) ? valid_identifier_9dZldJIf(fu_STR(overload.name)) : fu_STR{});
    fu_STR dedupe_1 = ((dedupe && overload.sighash) ? ((dedupe + '_') + overload.sighash) : fu_STR(dedupe));
    if (overload.flags & F_HOTSWAP)
    {
        if (!(target.modid == module.modid))
            fu_ASSERT();

        outputs._live_targets += int(target.index);
        fu_STR fnID = fnID_zXF0zMbc(target, module, ctx, _here);
        fu_STR fnID_local = (fnID + "_local"_fu);
        fu_STR fnPtrAnnot = cgFnPrototype_C92xTPva(target, true, _current_fn, module, ctx, _here, outputs);
        include_OWB5Ob07("<dl/hotswap.hpp>"_fu, outputs);
        ensureFwdDecl_03T9n4In(target, module, ctx, outputs, _current_fn, _here);
        src = (((((((((((((((((((((("                                #ifdef fu_HOTSWAP\n"_fu + "                                #define "_fu) + fnID) + " "_fu) + fnID_local) + "\n"_fu) + "extern \"C\" fu_EXPORT\n"_fu) + "                                #endif\n"_fu) + src) + "\n"_fu) + "                                #ifdef fu_HOTSWAP\n"_fu) + "                                #undef "_fu) + fnID) + "\n"_fu) + fnPtrAnnot) + " =\n    fu::hotswap(\""_fu) + fnID_local) + "\",\n                 "_fu) + fnID) + ",\n                &"_fu) + fnID_local) + ");\n"_fu) + "                                #endif"_fu);
    };
    if (dedupe_1)
        outputs._fdef += ((("\n                                #ifndef DEF_"_fu + dedupe_1) + "\n                                #define DEF_"_fu) + dedupe_1);

    outputs._fdef += (("\n"_fu + src) + "\n"_fu);
    if (dedupe_1)
        outputs._fdef += "                                #endif\n"_fu;

    return cgEmpty_LIDsl2ab(fn, mode, module, ctx, _here, outputs, _current_fn);
}

static void ensureFnDef_shmfQfn5(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (!(target.modid == module.modid))
        fail_vAc0TkcF((((((x7E((x7E("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu) + GET_a8BCJP3T(target, module, ctx).kind) + " "_fu) + GET_a8BCJP3T(target, module, ctx).name) + "`."_fu), _here, ctx);

    if (!add_once_PCSel0xp(outputs._idef, target.index))
        return;

    const s_SolvedNode& node = GET_a8BCJP3T(target, module, ctx).solved;
    if (!(node.kind == "fn"_fu))
        fail_vAc0TkcF("ensureFnDef non-fn"_fu, _here, ctx);

    cgFn_s5b6nkc4(node, M_STMT, outputs, module, ctx, _here, _current_fn);
}

static void ensureFnUsable_hsT4XLhz(const s_Target& target, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here)
{
    if (target.modid != module.modid)
        ensureFwdDecl_03T9n4In(target, module, ctx, outputs, _current_fn, _here);
    else
        ensureFnDef_shmfQfn5(target, module, ctx, _here, outputs, _current_fn);

}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

inline static bool isIntegerConstant_z36h1L35(const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx)
{
    if (expr.kind == "int"_fu)
        return true;

    if (expr.kind == "call"_fu)
    {
        const s_Overload& t = GET_a8BCJP3T(expr.target, module, ctx);
        if ((t.kind == "__native"_fu) && (t.flags & F_OPERATOR))
        {
            for (int i = 0; i < expr.items.size(); i++)
            {
                if (!isIntegerConstant_z36h1L35(expr.items[i], module, ctx))
                    return false;

            };
            return true;
        };
    };
    return false;
}

                                #ifndef DEF_join_xAlmFa4a
                                #define DEF_join_xAlmFa4a
inline fu_STR join_xAlmFa4a(fu::view<fu_STR> a, fu::view<char> sep)
{
    if (a.size() < 2)
        return fu_STR((a.size() ? a[0] : (*(const fu_STR*)fu::NIL)));

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
}
                                #endif

static fu_STR binding_1WbVgtW3(const s_Target& target, const s_SolvedNode& init, const bool doInit, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR head = binding_K61rtyHc(target, bool{}, module, ctx, _here, outputs, _current_fn);
    if (!doInit)
        return /*NRVO*/ head;

    if (GET_a8BCJP3T(target, module, ctx).flags & F_HOIST)
        head += " = "_fu;

    if (!init || ((init.kind == "definit"_fu) && !is_ref_zJCUz9W3(init.type)))
        return head + " {}"_fu;

    const bool isCopy = ((init.kind == "copy"_fu) && !is_ref_zJCUz9W3(GET_a8BCJP3T(target, module, ctx).solved.type));
    const s_SolvedNode& init_1 = (isCopy ? only_gF1gIgkM(init.items) : init);
    const bool use_initTEMPVARs = !_current_fn.target.index;
    fu_VEC<fu_STR> initTEMPVARs {};
    if (use_initTEMPVARs)
        std::swap(initTEMPVARs, _current_fn.TEMPVARs);

    fu_STR expr = cgNode_3OLWvUbE(init_1, "binding"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
    if (use_initTEMPVARs)
        std::swap(initTEMPVARs, _current_fn.TEMPVARs);

    if (initTEMPVARs)
        expr = (((((("[]() -> "_fu + typeAnnot_uGt8hsQ7(init_1.type, 0, outputs, _here, ctx, module, _current_fn)) + " {\n    "_fu) + join_xAlmFa4a(initTEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}()"_fu);

    if (isCopy && !is_primitive_oPp5yWwB(init_1.type))
        return ((head + " { "_fu) + expr) + " }"_fu;

    if (GET_a8BCJP3T(target, module, ctx).flags & F_HOIST)
    {
        if (F_HOIST_asPtr_tEzfHTVR(target, module, ctx))
            return ((head + "&("_fu) + expr) + ")"_fu;

        return head + expr;
    };
    return (head + " = "_fu) + expr;
}

static fu_STR binding_uC3XDQ0O(const s_SolvedNode& node, const bool doInit, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = node.target;
    const s_SolvedNode& init = (doInit && node.items ? node.items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
    return binding_1WbVgtW3(target, init, doInit, module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_starts_pN4jXVBE
                                #define DEF_starts_pN4jXVBE
inline bool starts_pN4jXVBE(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu_STR cgLet_owOc3cyK(const s_SolvedNode& node, const bool global, const bool foreign, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (type_isZST_zJCUz9W3(node.type))
        return fu_STR{};

    const bool intconst = (global && is_primitive_oPp5yWwB(node.type) && !is_floating_pt_oPp5yWwB(node.type) && isIntegerConstant_z36h1L35(node.items[LET_INIT], module, ctx));
    /*MOV*/ fu_STR src = binding_uC3XDQ0O(node, (!foreign || intconst), module, ctx, _here, outputs, _current_fn);
    if (!global)
        return /*NRVO*/ src;

    if (starts_pN4jXVBE(src, "const "_fu))
        src = fu::slice(src, 6);

    if (intconst)
    {
        outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
        return fu_STR{};
    };
    const int prio = (is_primitive_oPp5yWwB(node.type) ? 0 : int(((node.target.modid == module.modid) ? module.out.init_prio : ctx.modules[node.target.modid].out.init_prio)));
    if (prio)
    {
        include_OWB5Ob07("<fu/init_priority.h>"_fu, outputs);
        fu_STR attr = (x7E("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ")"_fu);
        const int eq = find_97z4iafs(src, '=');
        if (eq > 0)
            src = (((fu::get_view(src, 0, eq) + attr) + " "_fu) + fu::get_view(src, eq, src.size()));

    };
    if (!isExtLinked_FX9JSe8v(GET_a8BCJP3T(node.target, module, ctx)))
    {
        if (!foreign)
            outputs._fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
        else
            fail_vAc0TkcF(("Cannot codegen, relies on an external static: "_fu + GET_a8BCJP3T(node.target, module, ctx).name), _here, ctx);

    }
    else
        outputs._fdef += ((((((("\n                                #ifndef DEF_"_fu + node.value) + "\n                                #define DEF_"_fu) + node.value) + "\nextern const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);

    return fu_STR{};
}

static void cgForeignGlobal_SaoRdUbS(const s_Target& target, s_Outputs& outputs, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_cg_CurrentFn& _current_fn)
{
    if (!add_once_SI3t3nsB(outputs._ffwd, target))
        return;

    cgLet_owOc3cyK(GET_a8BCJP3T(target, module, ctx).solved, true, true, module, ctx, _here, outputs, _current_fn);
}

                                #ifndef DEF_has_xAlmFa4a
                                #define DEF_has_xAlmFa4a
inline bool has_xAlmFa4a(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR rootNS_xQqDz96E(const fu_STR& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_xAlmFa4a(_current_fn._ids_used, id))
        return "::"_fu + id;

    return fu_STR(id);
}

static fu_STR cgEnumv_9I0i0ouK(const s_Type& type, fu::view<char> id, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    fu_STR base = typeAnnotBase_06A3k4cb(type, 0, outputs, _here, ctx, module, _current_fn);
    return (base + "_"_fu) + id;
}

static fu_STR emitPrefixOp_6fSiCgsA(fu::view<char> op, fu::view_mut<fu_STR> item_src, const bool isNative, const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    return unpromote_b4cHd89X((op + ARG_9rKNiNGB(0, item_src)), isNative, node, outputs, _here, ctx, module, _current_fn);
}

static fu_STR cgCall_IpJDBsCp(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Extended& ext = EXT_Hbw1kZ0j(node.target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_a8BCJP3T(node.target, module, ctx))) ? *_0 : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx));
    const fu_VEC<s_SolvedNode>& args = node.items;
    const bool isNative = (target.kind == "__native"_fu);
    const bool isCpyMovAssign = ((args.size() == 2) && isNative && (target.name == "="_fu));
    const int MUSTSEQ_mask = node.helpers.index;
    int ooe_crosscheck = 0;
    fu_STR ooe_header {};
    fu_VEC<fu_STR> item_src {};
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        const s_SolvedNode& arg_1 = ((isCpyMovAssign && (i == 1) && (arg.kind == "copy"_fu)) ? only_gF1gIgkM(arg.items) : arg);
        bool junk = false;
        if (type_isZST_zJCUz9W3(arg_1.type))
        {
            junk = ((arg_1.kind == "empty"_fu) || (arg_1.kind == "definit"_fu) || (arg_1.kind == "fndef"_fu) || ((arg_1.kind == "call"_fu) && ((GET_a8BCJP3T(arg_1.target, module, ctx).kind == "var"_fu) || ((GET_a8BCJP3T(arg_1.target, module, ctx).kind == "type"_fu) && !arg_1.items) || (GET_a8BCJP3T(arg_1.target, module, ctx).kind == "enumv"_fu))));
            if (!junk)
                fail_vAc0TkcF((("Cannot discard ZST arg, kind is `"_fu + arg_1.kind) + "`."_fu), _here, ctx);

        };
        fu_STR _1 {};
        fu_STR src = (junk ? fu_STR{} : ((_1 = cgNode_3OLWvUbE(arg_1, (x7E((("cgCall("_fu + node.value) + ").ARG("_fu), fu::i64dec(i)) + ")"_fu), (isNative ? M_ARG_TO_NATIVE : (*(const int*)fu::NIL)), ext.args[i].type, _here, ctx, module, outputs, _current_fn)) ? static_cast<fu_STR&&>(_1) : fail_vAc0TkcF("Empty arg src."_fu, _here, ctx)));
        const int MUSTSEQ_bit = (1 << (i & 31));
        if (MUSTSEQ_mask & MUSTSEQ_bit)
        {
            if (junk)
                fail_vAc0TkcF("Trying to MUSTSEQ a discarded argument, shouldnt happen."_fu, _here, ctx);

            ooe_crosscheck |= MUSTSEQ_bit;
            if (!isFieldChain_ZZ187IGK(arg_1, module, ctx))
            {
                if (ooe_header)
                    ooe_header += ", "_fu;
                else
                    ooe_header = "("_fu;

                bool ptrflip = false;
                fu_STR annot = typeAnnot_uGt8hsQ7(arg_1.type, 0, outputs, _here, ctx, module, _current_fn);
                fu_STR id = emitTEMPVAR_R0z1o01h(annot, ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn);
                ooe_header += id;
                ooe_header += " = "_fu;
                ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu_STR(src));
                src = (ptrflip ? ("*"_fu + id) : cgMove_1CTxogtf(arg_1.type, id, module, ctx, outputs, _here, _current_fn));
            };
        };
        item_src += fu_STR(src);
    };
    if (!(ooe_crosscheck == MUSTSEQ_mask))
        fail_vAc0TkcF(((x7E((x7E("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(MUSTSEQ_mask)) + ": "_fu) + join_tkmelWjn(map_6SPoLEfY(args), "|"_fu)), _here, ctx);

    if (isNative && (target.name[0] == '\n'))
    {
        /*MOV*/ fu_STR id = fu::slice(target.name, (NativeHacks_1FBeX0Ih(target.name).name_start_idx + 1));
        const int idx = find_97z4iafs(id, '\n');
        if (idx > -1)
        {
            include_OWB5Ob07(fu::slice(id, 0, idx), outputs);
            id = fu::slice(id, (idx + 1));
        };
        if (id[0] == '.')
        {
            if (args.size() > 1)
                return emitMethodCall_Ze9wxdW6(id, item_src, ooe_header);

            return emitPostfixOp_rgUgU86m(id, item_src, isNative, node, outputs, _here, ctx, module, _current_fn);
        };
        if (id[0] == '/')
            return ooeWrap_2Q04c6Ry(emitBuiltin_3E7cMvFs(id, item_src, node, outputs, _here, ctx, module, _current_fn), ooe_header);

        if (args)
        {
            if (hasIdentifierChars_ZCtM7908(id))
                return emitFunctionCall_JRKdsrM7(id, "("_fu, ")"_fu, item_src, ooe_header);

            return emitBinaryOp_ZiThntw4(id, args, _here, ctx, mode, ooe_header, item_src, isNative, node, outputs, module, _current_fn);
        };
        return /*NRVO*/ id;
    };
    if (target.kind == "type"_fu)
    {
        if (!args)
            return cgDefault_Hcs2dzQd(target.type, _here, ctx, outputs, module, _current_fn);

        if (!(isStruct_usAEukhR(target.type)))
            fail_vAc0TkcF("cgCall: defctor/type not a struct."_fu, _here, ctx);

        return emitFunctionCall_JRKdsrM7(typeAnnotBase_06A3k4cb(target.type, 0, outputs, _here, ctx, module, _current_fn), " { "_fu, " }"_fu, item_src, ooe_header);
    };
    if (node.target.modid && (target.kind == "fn"_fu))
        ensureFnUsable_hsT4XLhz(node.target, module, ctx, outputs, _current_fn, _here);

    const fu_STR& id = (target.name ? target.name : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx));
    if ((args.size() <= 2))
    {
        if (target.kind == "var"_fu)
        {
            if (type_isZST_zJCUz9W3(target.type))
                return cgDefault_Hcs2dzQd(target.type, _here, ctx, outputs, module, _current_fn);

            if (!isLocal_TryBh3kR(node.target))
            {
                if (node.target.modid != module.modid)
                    cgForeignGlobal_SaoRdUbS(node.target, outputs, module, ctx, _here, _current_fn);

                return rootNS_xQqDz96E(ID_LX3QLY5k(id), _current_fn);
            };
            /*MOV*/ fu_STR id_1 = localID_5lIpHhW1(node.target, bool{}, module, ctx, _current_fn);
            if (F_HOIST_asPtr_tEzfHTVR(node.target, module, ctx))
                return ("(*"_fu + id_1) + ")"_fu;

            return /*NRVO*/ id_1;
        };
        if (target.kind == "field"_fu)
            return (ARG_9rKNiNGB(0, item_src) + "."_fu) + ID_LX3QLY5k(id);

        if (target.kind == "enumv"_fu)
            return cgEnumv_9I0i0ouK(target.type, id, outputs, _here, ctx, module, _current_fn);

        if (isOp_Rb43UWRA(node.target, module, ctx))
        {
            if (args.size() == 1)
                return ((target.flags & F_POSTFIX) ? emitPostfixOp_rgUgU86m(valid_operator_vfuw1B15(id), item_src, isNative, node, outputs, _here, ctx, module, _current_fn) : emitPrefixOp_6fSiCgsA(valid_operator_vfuw1B15(id), item_src, isNative, node, outputs, _here, ctx, module, _current_fn));

            if (args.size() == 2)
            {
                if (id == "[]"_fu)
                {
                    if (mode & M_MOVE)
                    {
                        fu_STR _2 {};
                        return (_2 = (ARG_9rKNiNGB(0, item_src) + ".try_steal("_fu), (static_cast<fu_STR&&>(_2) + ARG_9rKNiNGB(1, item_src))) + ")"_fu;
                    };
                    fu_STR _3 {};
                    return (_3 = (ARG_9rKNiNGB(0, item_src) + "["_fu), (static_cast<fu_STR&&>(_3) + ARG_9rKNiNGB(1, item_src))) + "]"_fu;
                };
                return emitBinaryOp_ZiThntw4(valid_operator_vfuw1B15(id), args, _here, ctx, mode, ooe_header, item_src, isNative, node, outputs, module, _current_fn);
            };
        };
        if ((id == "STEAL"_fu) && (args.size() == 1))
            return cgMove_1CTxogtf(node.type, ARG_9rKNiNGB(0, item_src), module, ctx, outputs, _here, _current_fn);

    };
    if (isNative)
        fail_vAc0TkcF((("Unknown __native: `"_fu + id) + "`."_fu), _here, ctx);

    return emitFunctionCall_JRKdsrM7(rootNS_xQqDz96E(valid_identifier_9dZldJIf(fu_STR(id)), _current_fn), "("_fu, ")"_fu, item_src, ooe_header);
}

                                #ifndef DEF_has_97z4iafs
                                #define DEF_has_97z4iafs
inline bool has_97z4iafs(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEF_find_EAsImrjz
                                #define DEF_find_EAsImrjz
inline int find_EAsImrjz(fu::view<char> a, const char b, int start)
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

static fu_STR cgLiteral_pc5VJQ7J(const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src { node.value };
    if (is_unsigned_oPp5yWwB(node.type) && !has_97z4iafs(src, 'u'))
        src += 'u';

    if (is_floating_pt_oPp5yWwB(node.type))
    {
        if (!has_97z4iafs(src, '.'))
            src += ".0"_fu;

        if (node.type.vtype.canon == "f32"_fu)
        {
            if (has_97z4iafs(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (node.type.vtype.canon != "f64"_fu)
            fu_ASSERT();

    };
    if (starts_pN4jXVBE(src, "0o"_fu))
        src.splice(1, 1);

    if (src.size() > 16)
    {
        s_Intlit parse = Intlit_IQ08v4Hx(src);
        if (parse.negative && (parse.absval == 0x8000000000000000ull))
            return "(-9223372036854775807-1)"_fu;

    };
    if (is_integral_oPp5yWwB(node.type) && (node.type.vtype.canon != "u32"_fu) && (node.type.vtype.canon != "i32"_fu))
    {
        if ((node.type.vtype.canon == "u64"_fu) || (node.type.vtype.canon == "i64"_fu))
        {
            if (!has_97z4iafs(src, 'l'))
                return src + "ll"_fu;

        }
        else
            return ((typeAnnotBase_06A3k4cb(node.type, 0, outputs, _here, ctx, module, _current_fn) + "("_fu) + src) + ")"_fu;

    };
    int idx {};
    while (((idx = find_EAsImrjz(src, '_', int(idx))) >= 0))
        src.splice(idx, 1);

    return /*NRVO*/ src;
}

static fu_STR escapeStringLiteral_UPAgDlDC(fu::view<char> str, const char quot)
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
            esc += ("\\"_fu + xHH_gyFRpmHc(unsigned(fu::u8(c))));
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

static fu_STR cgCharLiteral_ZH0HRcHF(const s_SolvedNode& node)
{
    return escapeStringLiteral_UPAgDlDC(node.value, '\'');
}

static fu_STR cgStringLiteral_QVaEVKJ4(const s_SolvedNode& node, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, const s_cg_CurrentFn& _current_fn)
{
    if (is_enum_oPp5yWwB(node.type))
        return cgEnumv_9I0i0ouK(node.type, node.value, outputs, _here, ctx, module, _current_fn);

    annotateString_LkR5I5c0(outputs);
    /*MOV*/ fu_STR esc = escapeStringLiteral_UPAgDlDC(node.value, '"');
    esc += "_fu"_fu;
    return /*NRVO*/ esc;
}

static fu_STR cgArrayLiteral_xEfKC73g(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (node.target)
        return cgCall_IpJDBsCp(node, mode, module, ctx, _here, outputs, _current_fn);

    fu_VEC<fu_STR> items = cgNodes_sITJPhOk(node.items, 0, (*(const fu_STR*)fu::NIL), "cgArrayLiteral"_fu, _current_fn, _here, ctx, module, outputs);
    if (!items.size())
        return cgDefault_Hcs2dzQd(node.type, _here, ctx, outputs, module, _current_fn);

    fu_STR curly = (("{ "_fu + join_tkmelWjn(items, ", "_fu)) + " }"_fu);
    fu_STR itemT = typeAnnotBase_06A3k4cb(clear_sliceable_zJCUz9W3(node.type, _here, ctx), 0, outputs, _here, ctx, module, _current_fn);
    fu_STR slate = ((((x7E("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
    if (is_ref_zJCUz9W3(callarg) && !TODO_FIX_isArray_zJCUz9W3(callarg))
    {
        include_OWB5Ob07("<fu/view.h>"_fu, outputs);
        return ("("_fu + slate) + ")"_fu;
    };
    return ((typeAnnotBase_06A3k4cb(node.type, 0, outputs, _here, ctx, module, _current_fn) + " { "_fu) + slate) + " }"_fu;
}

static fu_STR cgDefinit_4Ty860DV(const s_SolvedNode& node, const int mode, const s_Type& callarg, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgArrayLiteral_xEfKC73g(node, mode, callarg, module, ctx, _here, outputs, _current_fn);
}

static bool supportsNRVO_k74wOje1(const s_Target& t, const s_Module& module, const s_Context& ctx)
{
    return (GET_a8BCJP3T(t, module, ctx).kind == "var"_fu) && !(GET_a8BCJP3T(t, module, ctx).flags & F_ARG) && !is_ref_zJCUz9W3(GET_a8BCJP3T(t, module, ctx).solved.type);
}

static bool Lifetime_hasArgPositions_EpTZV4tz(const s_Lifetime& lifetime)
{
    for (int i = 0; i < lifetime.uni0n.size(); i++)
    {
        if (Region_isArgPosition_MvT8pzW6(lifetime.uni0n[i]))
            return true;

    };
    return false;
}

static fu_STR cgMoveOrClone_BlF8jKwY(fu::view<char> kind, const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, s_Outputs& outputs, const s_TokenIdx& _here, const s_cg_CurrentFn& _current_fn)
{
    if (kind == "move"_fu)
        return cgMove_1CTxogtf(type, src, module, ctx, outputs, _here, _current_fn);

    return cgClone_zxF8bHlr(type, src, outputs, _here, ctx, module, _current_fn);
}

static fu_STR cgMoveOrClone_6LKZENmu(const s_SolvedNode& node, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& expr = only_gF1gIgkM(node.items);
    if (node.kind == "move"_fu)
    {
        if (mode & M_RETURN)
        {
            const bool nrvo = ((expr.kind == "call"_fu) && (expr.items.size() == 0) && supportsNRVO_k74wOje1(expr.target, module, ctx));
            if (nrvo)
                return "/*NRVO*/ "_fu + cgNode_3OLWvUbE(expr, "NRVO"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);

        };
        if (!is_trivial_JKdxRWxB(node.type, module, ctx))
        {
            if (expr.kind == "call"_fu)
            {
                const s_Overload& o = GET_a8BCJP3T(expr.target, module, ctx);
                if ((o.kind == "__native"_fu) && (o.name == "[]"_fu))
                    return cgNode_3OLWvUbE(expr, "cgMoveOperator[]"_fu, M_MOVE, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);

                if (!is_mutref_zJCUz9W3(o.type, _here, ctx) && Lifetime_hasArgPositions_EpTZV4tz(o.type.lifetime))
                {
                    fu_STR _0 {};
                    fu_STR _1 {};
                    return (_1 = ((_0 = (("/* MOVE_FROM_CONST_REF */static_cast<"_fu + typeAnnotBase_06A3k4cb(o.type, 0, outputs, _here, ctx, module, _current_fn)) + "&&>(const_cast<"_fu), (static_cast<fu_STR&&>(_0) + typeAnnotBase_06A3k4cb(o.type, 0, outputs, _here, ctx, module, _current_fn))) + "&>("_fu), (static_cast<fu_STR&&>(_1) + cgNode_3OLWvUbE(expr, "cgMoveFromConstRefHelper"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn))) + "))"_fu;
                };
            };
        };
    };
    fu_STR _2 {};
    return (_2 = cgNode_3OLWvUbE(expr, "cgMoveOrClone"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn), cgMoveOrClone_BlF8jKwY(node.kind, node.type, static_cast<fu_STR&&>(_2), module, ctx, outputs, _here, _current_fn));
}

static fu_STR blockWrapSubstatement_ktxMLQ76(const s_SolvedNode& node, const int mode, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    return cgBlock_cmMJyrMp(node, ((M_STMT | M_OPT_CURLIES) | mode), "blockWrapSubstatement"_fu, _current_fn, _here, ctx, module, outputs);
}

static fu_STR blockWrap_unlessIf_Pm8NhZjc(const s_SolvedNode& node, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return (((node.kind == "if"_fu) || (node.kind == "and"_fu)) ? (" "_fu + cgNode_3OLWvUbE(node, "cgIf.blockWrap_unlessIf"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn)) : blockWrapSubstatement_ktxMLQ76(node, 0, _current_fn, _here, ctx, module, outputs));
}

static fu_STR cgIf_NBg0StUX(const s_SolvedNode& node, const int mode, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_SolvedNode& n0 = node.items[0];
    const s_SolvedNode& n1 = node.items[1];
    const s_SolvedNode& n2 = node.items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode_3OLWvUbE(n0, "cgIf[cond]"_fu, (M_RETBOOL | (stmt ? M_PARENS : (*(const int*)fu::NIL))), (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement_ktxMLQ76(n1, 0, _current_fn, _here, ctx, module, outputs) : cgNode_3OLWvUbE(n1, "cgIf[cons]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf_Pm8NhZjc(n2, _here, ctx, module, outputs, _current_fn) : cgNode_3OLWvUbE(n2, "cgIf[alt]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn)) : fu_STR{});
    if (stmt)
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((outputs._indent + "else"_fu) + alt) : fu_STR{});

    return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;
}

static void cgAndOr_concat_CCzl17vc(fu_STR& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const int mode = (M_RETBOOL | (parens && (items.size() == 1) ? M_PARENS : (*(const int*)fu::NIL)));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const s_SolvedNode& item = items[i];
        fu_STR term = cgNode_3OLWvUbE(item, (x7E("cgAndOr_concat["_fu, fu::i64dec(i)) + "]"_fu), mode, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
        if (is_void_zJCUz9W3(item.type))
            src += (("("_fu + term) + ", 0)"_fu);
        else
            src += term;

    };
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool acceptsBool_lE7duogz(const s_Type& type)
{
    return isAssignable_0meCKYxP(type, t_bool, bool{}, bool{});
}

static fu_STR via_evH6wLUP(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, s_Outputs& outputs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
    {
        fu_STR _0 {};
        tv.id = (_0 = fu_STR((tv.annot = typeAnnot_uGt8hsQ7(type, 0, outputs, _here, ctx, module, _current_fn))), emitTEMPVAR_R0z1o01h(static_cast<fu_STR&&>(_0), tv.ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;

    if (is_trivial_JKdxRWxB(type, module, ctx))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;

    return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;
}

static fu_STR via_gekMsZ4H(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    if (isFieldChain_ZZ187IGK(expr, module, ctx))
    {
        fu_STR trivial = cgNode_3OLWvUbE(expr, "TEMPVAR[fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    };
    if ((expr.kind == "copy"_fu) || (expr.kind == "move"_fu))
    {
        fu::view<char> kind = expr.kind;
        const s_SolvedNode& expr_1 = only_gF1gIgkM(expr.items);
        if (isFieldChain_ZZ187IGK(expr_1, module, ctx))
        {
            fu_STR trivial = cgNode_3OLWvUbE(expr_1, "TEMPVAR[copymov/fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
            return ((trivial + " ? "_fu) + cgMoveOrClone_BlF8jKwY(kind, type, trivial, module, ctx, outputs, _here, _current_fn)) + " : "_fu;
        };
    };
    fu_STR _0 {};
    return (_0 = cgNode_3OLWvUbE(expr, "TEMPVAR[usual]"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn), via_evH6wLUP(tv, type, static_cast<fu_STR&&>(_0), outputs, _here, ctx, module, _current_fn));
}

static fu_STR cgOr_mJD2WH76(const s_SolvedNode& node, const int mode, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Type& type = node.type;
    fu::view<s_SolvedNode> items = node.items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if (!("_fu;
        cgAndOr_concat_CCzl17vc(src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _here, ctx, module, outputs, _current_fn);
        src += "))"_fu;
        src += blockWrapSubstatement_ktxMLQ76(items[(items.size() - 1)], 0, _current_fn, _here, ctx, module, outputs);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (acceptsBool_lE7duogz(type))
        cgAndOr_concat_CCzl17vc(src, " || "_fu, items, true, _here, ctx, module, outputs, _current_fn);
    else
    {
        s_TEMPVAR tv {};
        for (int i = 0; i < (items.size() - 1); i++)
        {
            const s_SolvedNode* _0;
            const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx));
            s_SolvedNode tail { item };
            if (item.kind == "and"_fu)
            {
                fu::view<s_SolvedNode> items_1 = item.items;
                const s_SolvedNode* _1;
                tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx));
                cgAndOr_concat_CCzl17vc(src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), bool{}, _here, ctx, module, outputs, _current_fn);
                src += " && "_fu;
            };
            src += via_gekMsZ4H(tv, type, tail, module, ctx, _here, outputs, _current_fn);
        };
        const s_SolvedNode* _2;
        const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx));
        src += cgNode_3OLWvUbE(tail, "cgOr"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd_qZ6NMfFo(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, fu::view<char> debug, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if ("_fu;
        cgAndOr_concat_CCzl17vc(src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _here, ctx, module, outputs, _current_fn);
        src += ")"_fu;
        src += blockWrapSubstatement_ktxMLQ76(items[(items.size() - 1)], 0, _current_fn, _here, ctx, module, outputs);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (acceptsBool_lE7duogz(type))
        cgAndOr_concat_CCzl17vc(src, " && "_fu, items, true, _here, ctx, module, outputs, _current_fn);
    else
    {
        s_TEMPVAR tv {};
        if (is_mutref_zJCUz9W3(type, _here, ctx))
        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via_gekMsZ4H(tv, type, item, module, ctx, _here, outputs, _current_fn));
                else
                    src += cgNode_3OLWvUbE(item, (x7E((debug + ".cgAnd[mutref "_fu), fu::i64dec(i)) + "]"_fu), 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);

            };
        }
        else
        {
            const int N = items.size();
            const bool retSecondLast = is_never_zJCUz9W3(items[(N - 1)].type);
            const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
            cgAndOr_concat_CCzl17vc(src, " && "_fu, fu::get_view(items, 0, condEnd), bool{}, _here, ctx, module, outputs, _current_fn);
            if (retSecondLast)
            {
                if (condEnd)
                    src += " && "_fu;

                src += ("!"_fu + via_gekMsZ4H(tv, type, items[(N - 2)], module, ctx, _here, outputs, _current_fn));
                src += cgNode_3OLWvUbE(items[(N - 1)], (debug + ".cgAnd[retSecondLast]"_fu), 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
            }
            else
            {
                src += (" ? "_fu + cgNode_3OLWvUbE(items[(N - 1)], (debug + ".cgAnd[usual]"_fu), 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn));
                src += (" : "_fu + cgDefault_Hcs2dzQd(type, _here, ctx, outputs, module, _current_fn));
            };
        };
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd_U2y1umfw(const s_SolvedNode& node, const int mode, fu::view<char> debug, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    return cgAnd_qZ6NMfFo(node.items, node.type, mode, debug, _here, ctx, module, outputs, _current_fn);
}

static fu_STR cgLetDef_1a6dXvRt(const s_SolvedNode& node, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, s_Outputs& outputs)
{
    return cgLet_owOc3cyK(GET_a8BCJP3T(node.target, module, ctx).solved, !_current_fn.target.index, bool{}, module, ctx, _here, outputs, _current_fn);
}

static fu_STR cgMain_usDrimyh(s_Outputs& outputs)
{
    if (!outputs._hasMain)
        return fu_STR{};

    fu_STR zst {};
    if (outputs._hasMain & MAIN_zst)
        zst = ", 0"_fu;

    /*MOV*/ fu_STR src = (("\nint main() { return fu_MAIN()"_fu + zst) + "; }"_fu);
    if (outputs._hasMain & MAIN_argv)
    {
        annotateString_LkR5I5c0(outputs);
        src = ((((((((((("\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args))"_fu) + zst) + ";"_fu) + "\n}"_fu);
    };
    src += "\n"_fu;
    return /*NRVO*/ src;
}

static fu_STR collectDedupes_KPyYztPl(fu_VEC<fu_STR>&& values, fu::view<char> prefix, fu::view<char> suffix, fu::view<char> header, fu::view<char> footer)
{
    /*MOV*/ fu_STR out {};
    if (values)
        out += header;

    for (int i = 0; i < values.size(); i++)
        out += ((prefix + values[i]) + suffix);

    if (out)
        out += footer;

    return /*NRVO*/ out;
}

static fu_STR cgRoot_uSv8aBTF(const s_SolvedNode& root, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    int count {};
    fu_STR src = cgStatements_sCoJjqTg(root.items, count, (*(const fu_STR*)fu::NIL), _current_fn, _here, ctx, module, outputs);
    fu_STR main = cgMain_usDrimyh(outputs);
    return (((((((((((((((collectDedupes_KPyYztPl(fu_VEC<fu_STR>(outputs._libs), "#include "_fu, "\n"_fu, fu::view<char>{}, "\n"_fu) + outputs._tfwd_src) + outputs._ffwd_src) + (outputs._ffwd_live_client ? "\n                                #ifdef fu_HOTSWAP\n"_fu : fu_STR{})) + outputs._ffwd_live_client) + (outputs._ffwd_live_client ? "                                #else\n"_fu : fu_STR{})) + outputs._ffwd_live_nclient) + (outputs._ffwd_live_client ? "                                #endif\n"_fu : fu_STR{})) + outputs._tdef) + collectDedupes_KPyYztPl(fu_VEC<fu_STR>(outputs._gcc_ignore), "#pragma GCC diagnostic ignored \""_fu, "\"\n"_fu, "#pragma GCC diagnostic push\n#ifdef __clang__\n#pragma GCC diagnostic warning \"-Wunknown-warning-option\"\n#endif\n"_fu, "\n"_fu)) + outputs._top_emits) + (outputs._fdef ? "\n#ifndef fu_NO_fdefs\n"_fu : fu_STR{})) + outputs._fdef) + (outputs._fdef ? "\n#endif\n"_fu : fu_STR{})) + src) + main) + (outputs._gcc_ignore ? "\n#pragma GCC diagnostic pop\n"_fu : fu_STR{});
}

static fu_STR cgFnDef_7cw8DsbX(const s_SolvedNode& fndef, const int mode, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    const s_Target& target = fndef.target;
    const s_Overload& o = GET_a8BCJP3T(target, module, ctx);
    const s_SolvedNode& n = GET_a8BCJP3T(target, module, ctx).solved;
    if (n && isExtLinked_FX9JSe8v(o))
        ensureFnDef_shmfQfn5(target, module, ctx, _here, outputs, _current_fn);

    return cgEmpty_LIDsl2ab(n, mode, module, ctx, _here, outputs, _current_fn);
}

static const s_cg_Block& findBlock_feN8NccK(const s_cg_CurrentFn& _current_fn, const s_Helpers& helpers, const s_TokenIdx& _here, const s_Context& ctx)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const s_cg_Block& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
            return block;

    };
    fail_vAc0TkcF(x7E("No such block in scope: "_fu, fu::i64dec(helpers.index)), _here, ctx);
}

static bool hasNonIdentifierChars_alisHiTN(fu::view<char> id)
{
    for (int i = 0; i < id.size(); i++)
    {
        const char c = id[i];
        if ((c == '_') || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')))
        {
        }
        else
            return true;

    };
    return false;
}

static fu_STR cgJump_4ZIKtfs2(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    const s_Helpers& helpers = node.helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    s_cg_Block block { (!use_return ? findBlock_feN8NccK(_current_fn, helpers, _here, ctx) : (*(const s_cg_Block*)fu::NIL)) };
    const s_SolvedNode& expr = only_gF1gIgkM(node.items);
    if ((expr.kind != "empty"_fu) || !is_void_zJCUz9W3(expr.type))
    {
        if (!use_return)
        {
            fu_STR assign = (block.has_val ? (block.name + "_v = "_fu) : fu_STR{});
            fu_STR value = cgNode_3OLWvUbE(expr, "cgJump[val.break]"_fu, (!assign ? M_STMT : (*(const int*)fu::NIL)), (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
            if (block.ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            if (!(assign || hasNonIdentifierChars_alisHiTN(value)))
                value = (("/* TODO FIX UNUSED VAL "_fu + value) + " */"_fu);

            return (((("{ "_fu + assign) + value) + "; goto "_fu) + block.name) + "; }"_fu;
        };
        return "return "_fu + cgNode_3OLWvUbE(expr, "cgJump[val.return]"_fu, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
    };
    if (use_return)
        return "return"_fu;

    if (helpers == _current_fn.can_break)
        return "break"_fu;

    if (helpers == _current_fn.can_cont)
        return "continue"_fu;

    return "goto "_fu + block.name;
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

static fu_STR cgLoop_xh99Hn6J(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    const s_Helpers can_cont0 { _current_fn.can_cont };
    const s_Helpers can_break0 { _current_fn.can_break };
    fu_DEFER(
    {
        _current_fn.can_cont = can_cont0;
        _current_fn.can_break = can_break0;
    });
    _current_fn.can_cont = s_Helpers{};
    _current_fn.can_break = s_Helpers{};
    fu::view<s_SolvedNode> items = node.items;
    const s_SolvedNode& n_init = items[LOOP_INIT];
    const s_SolvedNode& n_cond = items[LOOP_COND];
    const s_SolvedNode& n_body = items[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
    const s_SolvedNode& n_post = items[LOOP_POST];
    fu_STR init = (n_init ? cgNode_3OLWvUbE(n_init, "cgLoop[init]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode_3OLWvUbE(n_cond, "cgLoop[cond]"_fu, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode_3OLWvUbE(n_pcnd, "cgLoop[pcnd]"_fu, M_RETBOOL, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn) : fu_STR{});
    fu_STR post = (n_post ? cgNode_3OLWvUbE(n_post, "cgLoop[post]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn) : fu_STR{});
    fu_STR name = x7E("LL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const s_Helpers& helpers = node.helpers;
    _current_fn.can_break = helpers;
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu_STR(name), s_Helpers(helpers), false, false };
    fu_STR body = (n_body ? blockWrapSubstatement_ktxMLQ76(n_body, M_LOOP_BODY, _current_fn, _here, ctx, module, outputs) : fu_STR{});
    const bool labelUsed = fu::has(body, (("goto "_fu + name) + ";"_fu));
    fu_STR breakLabel = (labelUsed ? ((" "_fu + name) + ":;"_fu) : fu_STR{});
    if (pcnd)
    {
        if (init || post || cond)
            fail_vAc0TkcF("TODO extended loop."_fu, _here, ctx);

        return ((((("do"_fu + body) + outputs._indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel;
    };
    if (init || post || !cond)
        return ((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;

    return ((("while ("_fu + cond) + ")"_fu) + body) + breakLabel;
}

static fu_STR cgTryCatch_X5kLPinl(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs)
{
    fu::view<s_SolvedNode> items = node.items;
    fu_STR tRy = blockWrapSubstatement_ktxMLQ76(items[0], 0, _current_fn, _here, ctx, module, outputs);
    fu_STR err = localID_5lIpHhW1(items[1].target, true, module, ctx, _current_fn);
    fu_STR cAtch = blockWrapSubstatement_ktxMLQ76(items[2], 0, _current_fn, _here, ctx, module, outputs);
    return ((((((((((((((((outputs._indent + "try"_fu) + outputs._indent) + "{"_fu) + tRy) + outputs._indent) + "}"_fu) + outputs._indent) + "catch (const std::exception& o_0)"_fu) + outputs._indent) + "{"_fu) + outputs._indent) + "    fu_STR "_fu) + err) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + outputs._indent) + "}\n"_fu;
}

static fu_STR cgDefer_Dv0q8rZu(const s_SolvedNode& node, s_Outputs& outputs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn)
{
    include_OWB5Ob07("<fu/defer.h>"_fu, outputs);
    fu_STR which = ((node.value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((node.value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_3OLWvUbE(only_gF1gIgkM(node.items), "defer"_fu, M_STMT, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn)) + ")"_fu;
}

                                #ifndef DEF_starts_cnCAmU7Y
                                #define DEF_starts_cnCAmU7Y
inline bool starts_cnCAmU7Y(fu::view<char> a, const char with)
{
    return a.size() && (a[0] == with);
}
                                #endif

static fu_STR cgCompilerPragma_d5NYXTvS(const s_SolvedNode& node, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> cmd = node.value;
    if (cmd == "emit"_fu)
    {
        /*MOV*/ fu_STR result {};
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& node_1 = node.items[i];
            if (node_1.kind == "str"_fu)
                result += node_1.value;
            else
                result += cgNode_3OLWvUbE(node_1, "compiler:emit"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);

        };
        add_wAuMmv6B(outputs._gcc_ignore, "-Wmisleading-indentation"_fu);
        if (_current_fn)
            return /*NRVO*/ result;

        outputs._top_emits += result;
        return fu_STR{};
    };
    if (cmd == "link"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != "str"_fu)
                fail_vAc0TkcF((("compiler link: All arguments must be string literals, got a `"_fu + item.kind) + "`."_fu), _here, ctx);

            const fu_STR& i_1 = item.value;
            add_wAuMmv6B(outputs.HACK_link, i_1);
        };
        return fu_STR{};
    };
    if (cmd == "include_dirs"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != "str"_fu)
                fail_vAc0TkcF((("compiler link: All arguments must be string literals, got a `"_fu + item.kind) + "`."_fu), _here, ctx);

            const fu_STR& i_1 = item.value;
            add_wAuMmv6B(outputs.HACK_include_dirs, i_1);
        };
        return fu_STR{};
    };
    if (cmd == "sources"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != "str"_fu)
                fail_vAc0TkcF((("compiler link: All arguments must be string literals, got a `"_fu + item.kind) + "`."_fu), _here, ctx);

            const fu_STR& i_1 = item.value;
            add_wAuMmv6B(outputs.HACK_extra_sources, i_1);
        };
        return fu_STR{};
    };
    if (cmd == "include"_fu)
    {
        for (int i = 0; i < node.items.size(); i++)
        {
            const s_SolvedNode& item = node.items[i];
            if (item.kind != "str"_fu)
                fail_vAc0TkcF((("compiler link: All arguments must be string literals, got a `"_fu + item.kind) + "`."_fu), _here, ctx);

            const fu_STR& i_1 = item.value;
            include_OWB5Ob07((starts_cnCAmU7Y(i_1, '<') ? fu_STR(i_1) : (('"' + i_1) + '"')), outputs);
        };
        return fu_STR{};
    };
    BUG_XksxYQ3i(("Unknown compiler pragma: "_fu + cmd), _here, ctx);
}

static fu_STR cgNode_3OLWvUbE(const s_SolvedNode& node, fu::view<char> debug, const int mode, const s_Type& callarg, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_Outputs& outputs, s_cg_CurrentFn& _current_fn)
{
    fu::view<char> k = (node.kind ? node.kind : fail_vAc0TkcF(("cgNode: No node.kind: "_fu + debug), _here, ctx));
    HERE_fVfHq6aR(node.token, _here);
    if (k == "call"_fu)
        return cgCall_IpJDBsCp(node, mode, module, ctx, _here, outputs, _current_fn);

    if (k == "int"_fu)
        return cgLiteral_pc5VJQ7J(node, outputs, _here, ctx, module, _current_fn);

    if (k == "real"_fu)
        return cgLiteral_pc5VJQ7J(node, outputs, _here, ctx, module, _current_fn);

    if (k == "char"_fu)
        return cgCharLiteral_ZH0HRcHF(node);

    if (k == "str"_fu)
        return cgStringLiteral_QVaEVKJ4(node, outputs, _here, ctx, module, _current_fn);

    if (k == "arrlit"_fu)
        return cgArrayLiteral_xEfKC73g(node, mode, callarg, module, ctx, _here, outputs, _current_fn);

    if (k == "definit"_fu)
        return cgDefinit_4Ty860DV(node, mode, callarg, module, ctx, _here, outputs, _current_fn);

    if (k == "bool"_fu)
        return fu_STR(node.value);

    if (k == "copy"_fu)
        return cgMoveOrClone_6LKZENmu(node, mode, module, ctx, _here, outputs, _current_fn);

    if (k == "move"_fu)
        return cgMoveOrClone_6LKZENmu(node, mode, module, ctx, _here, outputs, _current_fn);

    if (k == "if"_fu)
        return cgIf_NBg0StUX(node, mode, _here, ctx, module, outputs, _current_fn);

    if (k == "or"_fu)
        return cgOr_mJD2WH76(node, mode, _here, ctx, module, outputs, _current_fn);

    if (k == "and"_fu)
        return cgAnd_U2y1umfw(node, mode, debug, _here, ctx, module, outputs, _current_fn);

    if (k == "letdef"_fu)
        return cgLetDef_1a6dXvRt(node, module, ctx, _current_fn, _here, outputs);

    if (k == "root"_fu)
        return cgRoot_uSv8aBTF(node, _current_fn, _here, ctx, module, outputs);

    if (k == "block"_fu)
        return cgBlock_cmMJyrMp(node, mode, "block"_fu, _current_fn, _here, ctx, module, outputs);

    if (k == "argid"_fu)
        return cgComma_BCPrStF4(node.items, "argid"_fu, _current_fn, _here, ctx, module, outputs);

    if (k == "fndef"_fu)
        return cgFnDef_7cw8DsbX(node, mode, module, ctx, _here, outputs, _current_fn);

    if (k == "empty"_fu)
        return cgEmpty_LIDsl2ab(node, mode, module, ctx, _here, outputs, _current_fn);

    if (!(mode & M_STMT))
        return cgBlock_cmMJyrMp(node, mode, (k + "!M_STMT"_fu), _current_fn, _here, ctx, module, outputs);

    if (k == "jump"_fu)
        return cgJump_4ZIKtfs2(node, _current_fn, _here, ctx, module, outputs);

    if (k == "loop"_fu)
        return cgLoop_xh99Hn6J(node, _current_fn, _here, ctx, module, outputs);

    if (k == "try"_fu)
        return cgTryCatch_X5kLPinl(node, _current_fn, _here, ctx, module, outputs);

    if (k == "defer"_fu)
        return cgDefer_Dv0q8rZu(node, outputs, _here, ctx, module, _current_fn);

    if (k == "pragma"_fu)
        return cgCompilerPragma_d5NYXTvS(node, _here, ctx, module, outputs, _current_fn);

    fail_vAc0TkcF(("TODO: "_fu + k), _here, ctx);
}

static fu_STR localPath_AV3fLj8y(const fu_STR& path, const s_Module& module)
{
    return (starts_cnCAmU7Y(path, '.') ? join_Lfq50XKd(dirname_KqRBcvmh(module.fname), path) : fu_STR(path));
}

s_CodegenOutput cpp_codegen_2xq2c97A(const s_Module& module, const s_Context& ctx)
{
    s_TokenIdx _here {};
    s_Outputs outputs {};
    outputs._indent = "\n"_fu;
    s_cg_CurrentFn _current_fn {};
    const s_SolvedNode& root = module.out.solve.root;
    if (!(root.kind == "root"_fu))
        fail_vAc0TkcF((*(const fu_STR*)fu::NIL), _here, ctx);

    fu_STR src = cgNode_3OLWvUbE(root, "cgRoot"_fu, 0, (*(const s_Type*)fu::NIL), _here, ctx, module, outputs, _current_fn);
    for (int i = 0; i < outputs.HACK_extra_sources.size(); i++)
    {
        const fu_STR& orig = outputs.HACK_extra_sources[i];
        fu_STR file = localPath_AV3fLj8y(orig, module);
        src += (("\n// "_fu + orig) + "\n"_fu);
        src += read_ny0gyQ9a(fu_STR(file));
    };
    return s_CodegenOutput { fu_STR(src), fu_VEC<fu_STR>(outputs.HACK_link), fu_VEC<fu_STR>(outputs.HACK_include_dirs), fu_VEC<fu_STR>(outputs.HACK_extra_sources), fu_VEC<int>{} };
}

#endif
