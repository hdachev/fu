
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
struct s_Helpers;
struct s_Intlit;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Map_EmVtl5Qe;
struct s_Mi;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_NativeHacks;
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
struct s_StructCanon;
struct s_TEMPVAR;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;
struct s_cg_Block;
struct s_cg_CurrentFn;

[[noreturn]] fu::never BUG_patsWWTe(fu_STR&&, const s_TokenIdx&, const s_Context&);
[[noreturn]] fu::never FAIL_FsVimAHf(fu::view<char>, const s_TokenIdx&, const s_Context&);
bool Region_isArgPosition_L0YJBnz6(const s_Region&);
bool TODO_FIX_isArray_4X1iL0ll(const s_Type&);
bool add_once_yDyCXbrU(s_BitSet&, int);
bool hasBinary_YqscxHlw(fu::view<char>);
bool hasIdentifierChars_85KQkyE0(fu::view<char>);
bool hasPostfix_YqscxHlw(fu::view<char>);
bool hasUnary_YqscxHlw(fu::view<char>);
bool isAssignable_87LkAOV4(const s_Type&, const s_Type&);
bool isStruct_ZYIX8afu(const s_Type&);
bool is_floating_pt_CbRwLCm2(const s_Type&);
bool is_integral_CbRwLCm2(const s_Type&);
bool is_mutref_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
bool is_never_4X1iL0ll(const s_Type&);
bool is_primitive_CbRwLCm2(const s_Type&);
bool is_ref_4X1iL0ll(const s_Type&);
bool is_rx_copy_4X1iL0ll(const s_Type&);
bool is_trivial_K61azC5I(const s_Type&, const s_Module&, const s_Context&);
bool is_unsigned_CbRwLCm2(const s_Type&);
bool is_void_4X1iL0ll(const s_Type&);
bool operator==(const s_Type&, const s_Type&);
bool type_isAddrOfFn_4X1iL0ll(const s_Type&);
bool type_isSliceable_4X1iL0ll(const s_Type&);
bool type_isZST_4X1iL0ll(const s_Type&);
const s_Struct& lookupStruct_LWkAag39(const s_Type&, const s_Module&, const s_Context&);
fu_STR ID_YqscxHlw(const fu_STR&);
inline static bool isIntegerConstant_nkZjodhm(const s_SolvedNode&, fu::view<s_SolvedNodeData>, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&);
s_ClosureID tryParseClosureID_RHyKU5hm(fu::view<char>);
s_Intlit Intlit_hdlyM3zq(fu::view<char>);
s_Mi parseMi_t6R8uPsY(int&, fu::view<char>);
s_NativeHacks NativeHacks_RHyKU5hm(fu::view<char>);
s_StructCanon parseStructCanon_1WZjPEgG(fu::view<char>);
s_Target target_wh65lsPu(const s_ScopeItem&);
s_Type clear_refs_4X1iL0ll(s_Type&&);
s_Type clear_sliceable_4X1iL0ll(const s_Type&, const s_TokenIdx&, const s_Context&);
s_Type tryClear_sliceable_4X1iL0ll(const s_Type&);
static bool add_once_IPrjcKiK(fu_VEC<s_BitSet>&, int, int);
static bool add_once_SI3t3nsB(fu_VEC<s_BitSet>&, const s_Target&);
static bool exprOK_kZjsCDLz(fu::view<s_SolvedNode>, fu::view<s_SolvedNodeData>, const s_Target&, const s_TokenIdx&, const s_Context&);
static bool isFieldChain_9ll5pofB(const s_SolvedNode&, fu::view<s_SolvedNodeData>, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&);
static bool labelUsed_JedfjST3(fu::view<s_SolvedNode>, fu::view<s_SolvedNodeData>, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Helpers&);
static fu_STR binding_OPJNitD8(const s_SolvedNode&, bool, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR binding_a0djusPl(const s_Argument&, bool, s_cg_CurrentFn&, const s_Module&, const s_Context&, fu::view<s_SolvedNodeData>, const s_Target&, const s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&);
static fu_STR binding_fqqlrPll(const s_Target&, const s_SolvedNode&, bool, const s_Module&, const s_Context&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR blockWrap_unlessIf_TuAf7YkM(const s_SolvedNode&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgAnd_YR66bWwf(fu::view<s_SolvedNode>, const s_Type&, int, fu::view<char>, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgArrayLiteral_oTpRmMlG(const s_SolvedNode&, int, const s_Type&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgBlock_Tw6DXZm5(const s_SolvedNode&, int, fu::view<char>, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, s_cg_CurrentFn&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgBlock_xtm0G3Pd(fu::view<s_SolvedNode>, bool, bool, const s_Helpers&, const s_Type&, s_cg_CurrentFn&, fu_STR&, fu_VEC<fu_STR>&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu::view<s_SolvedNodeData>, const s_Target&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, int&, fu_STR&);
static fu_STR cgCall_OzIM8TVI(const s_SolvedNode&, int, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgComma_16yi8aht(fu::view<s_SolvedNode>, fu::view<char>, s_cg_CurrentFn&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgDefer_IuQyh1DE(const s_SolvedNode&, fu_VEC<fu_STR>&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgEmpty_xRwG0KtX(const s_SolvedNode&, int, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, s_cg_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgFnSignature_zC4vjsMu(const s_SolvedNode&, fu::view<s_SolvedNodeData>, const s_Target&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, int&);
static fu_STR cgFn_naur8gVc(const s_SolvedNode&, int, fu_STR&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, s_cg_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, int&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&);
static fu_STR cgIf_2usNYe5f(const s_SolvedNode&, int, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgJump_hJloXIvC(const s_SolvedNode&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, s_cg_CurrentFn&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgLoop_A61K101J(const s_SolvedNode&, s_cg_CurrentFn&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgMoveOrClone_RxSqybxq(const s_SolvedNode&, int, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgNode_rdhcxijm(const s_SolvedNode&, fu::view<char>, int, const s_Type&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgOr_p24fumYJ(const s_SolvedNode&, int, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgRoot_Daw0Sqbf(const s_SolvedNode&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, s_cg_CurrentFn&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR cgStatements_NLVqZd95(fu::view<s_SolvedNode>, int&, const fu_STR&, s_cg_CurrentFn&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_STR declareStruct_w0xtnOZA(fu::view<char>, const s_Struct&, const s_Module&, const s_Context&, const s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, const s_cg_CurrentFn&);
static fu_STR typeAnnotBase_m31cPWMO(const s_Type&, int, fu_VEC<fu_STR>&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, const s_cg_CurrentFn&);
static fu_STR typeAnnot_Qp954DVJ(const s_Type&, int, fu_VEC<fu_STR>&, const s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, const s_cg_CurrentFn&);
static fu_STR via_JCgdMHjW(s_TEMPVAR&, const s_Type&, const s_SolvedNode&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static fu_VEC<fu_STR> cgNodes_EjavTiy7(fu::view<s_SolvedNode>, int, const fu_STR&, fu::view<char>, s_cg_CurrentFn&, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static void cgAndOr_concat_jRoOURAS(fu_STR&, fu::view<char>, fu::view<s_SolvedNode>, bool, fu::view<s_SolvedNodeData>, const s_Target&, s_TokenIdx&, const s_Context&, const s_Module&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, s_cg_CurrentFn&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
static void ensureFnDef_brkMkIOD(const s_Target&, const s_Module&, const s_Context&, s_TokenIdx&, s_BitSet&, fu::view<s_SolvedNodeData>, const s_Target&, fu_STR&, s_cg_CurrentFn&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, int&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&);
static void ensureFnUsable_HF669hTW(const s_Target&, const s_Module&, const s_Context&, fu_VEC<s_BitSet>&, s_cg_CurrentFn&, s_TokenIdx&, fu_VEC<fu_STR>&, fu_VEC<s_BitSet>&, fu_VEC<fu_STR>&, fu_STR&, fu_VEC<fu_STR>&, s_BitSet&, fu_STR&, int&, fu_STR&);
void HERE_fVfHq6aR(const s_TokenIdx&, s_TokenIdx&);

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

                                #ifndef DEF_s_SolvedNodeData
                                #define DEF_s_SolvedNodeData
struct s_SolvedNodeData
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

                                #ifndef DEF_s_Map_EmVtl5Qe
                                #define DEF_s_Map_EmVtl5Qe
struct s_Map_EmVtl5Qe
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
    s_Map_EmVtl5Qe files;
    s_Map_EmVtl5Qe fuzzy;
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

                                #ifndef DEFt_unless_oob_zhK7J6yd
                                #define DEFt_unless_oob_zhK7J6yd
inline const s_Extended& unless_oob_zhK7J6yd(fu::view<s_Extended> a, const int i)
{
    return (i < a.size()) ? a[i] : (*(const s_Extended*)fu::NIL);
}
                                #endif

static const s_Extended& EXT_UPg8LnZ5(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (target.modid == module.modid)
        return unless_oob_zhK7J6yd(module.out.solve.scope.extended, target.index);

    if (target.modid < 0)
        return (*(const s_Extended*)fu::NIL);

    return unless_oob_zhK7J6yd(ctx.modules[target.modid].out.solve.scope.extended, target.index);
}

                                #ifndef DEF_NODEIDX_signmask
                                #define DEF_NODEIDX_signmask
extern const int NODEIDX_signmask;
                                #endif

[[noreturn]] static fu::never fail_g0mqMv14(const fu_STR& reason, const s_TokenIdx& _here, const s_Context& ctx)
{
    FAIL_FsVimAHf(("THIS IS A COMPILER BUG.\n\n\tCODEGEN FAIL:\n\n\t"_fu + (reason ? fu_STR(reason) : "Assertion failed."_fu)), _here, ctx);
}

                                #ifndef DEF_NODEIDX_signbits
                                #define DEF_NODEIDX_signbits
inline constexpr int NODEIDX_signbits = 4;
                                #endif

static const s_SolvedNodeData& SolvedNodeData_jJduAOM6(const s_SolvedNode& sn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    if (!(!sn || ((sn.signedidx & NODEIDX_signmask) == (_current_fnort.index & NODEIDX_signmask))))
        fail_g0mqMv14("RemoteNode: signature is off."_fu, _here, ctx);

    const int nodeidx = (sn.signedidx >> NODEIDX_signbits);
    return nodeidx ? _current_nodes[(nodeidx - 1)] : (*(const s_SolvedNodeData*)fu::NIL);
}

static bool isLocal_VRlaNfIi(const s_Target& target)
{
    return target.modid < 0;
}

static const s_Overload& GET_x3O7get6(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    if (!(target.index > 0))
        fu_ASSERT();

    if (isLocal_VRlaNfIi(target))
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

                                #ifndef DEFt_only_YfDn7IVA
                                #define DEFt_only_YfDn7IVA
inline const s_SolvedNode& only_YfDn7IVA(fu::view<s_SolvedNode> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

static bool isFieldChain_9ll5pofB(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind != "call"_fu)
        return false;

    const s_Overload& t = GET_x3O7get6(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
    if (t.kind == "field"_fu)
        return isFieldChain_9ll5pofB(only_YfDn7IVA(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items), _current_nodes, _current_fnort, _here, ctx, module);

    if (t.kind == "var"_fu)
        return true;

    return false;
}

                                #ifndef DEFt_x3Cx3E_gcxVH86X
                                #define DEFt_x3Cx3E_gcxVH86X
inline int x3Cx3E_gcxVH86X(const int a, const int b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_b25bS2EX
                                #define DEFt_x3Cx3E_b25bS2EX
inline int x3Cx3E_b25bS2EX(const char a, const char b)
{
    return ((a < b) ? -1 : ((a > b) ? +1 : 0));
}
                                #endif

                                #ifndef DEFt_x3Cx3E_wtS8CFRs
                                #define DEFt_x3Cx3E_wtS8CFRs
inline int x3Cx3E_wtS8CFRs(fu::view<char> a, fu::view<char> b)
{
    /*MOV*/ int cmp = x3Cx3E_gcxVH86X(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_b25bS2EX(a[i], b[i]);

    return /*NRVO*/ cmp;
}
                                #endif

                                #ifndef DEFt_add_n5fL7Bm1
                                #define DEFt_add_n5fL7Bm1
inline bool add_n5fL7Bm1(fu_VEC<fu_STR>& keys, const fu_STR& item)
{
    int lo = 0;
    int hi = keys.size();
    while (lo < hi)
    {
        const int i = ((hi + lo) >> 1);
        const int cmp = x3Cx3E_wtS8CFRs(keys[i], item);
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

static void include_ozNJN3BA(const fu_STR& lib, fu_VEC<fu_STR>& _libs)
{
    add_n5fL7Bm1(_libs, lib);
}

static fu_STR annotateZST_BlCwSV5H()
{
    return "void"_fu;
}

static fu_STR annotateNever_O3hSx4OE(fu_VEC<fu_STR>& _libs)
{
    include_ozNJN3BA("<fu/never.h>"_fu, _libs);
    return "fu::never"_fu;
}

                                #ifndef DEF_t_byte
                                #define DEF_t_byte
extern const s_Type t_byte;
                                #endif

static fu_STR annotateString_rZxUZlPs(fu_VEC<fu_STR>& _libs)
{
    include_ozNJN3BA("<fu/str.h>"_fu, _libs);
    return "fu_STR"_fu;
}

                                #ifndef DEFt_grow_if_oob_hKyTLsWu
                                #define DEFt_grow_if_oob_hKyTLsWu
inline s_BitSet& grow_if_oob_hKyTLsWu(fu_VEC<s_BitSet>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static bool add_once_IPrjcKiK(fu_VEC<s_BitSet>& bs, const int i, const int j)
{
    return add_once_yDyCXbrU(grow_if_oob_hKyTLsWu(bs, i), j);
}

static const s_Overload& try_GET_j9slLFZe(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    return target ? GET_x3O7get6(target, module, ctx) : (*(const s_Overload*)fu::NIL);
}

                                #ifndef DEF_SS_TYPE_RECUR
                                #define DEF_SS_TYPE_RECUR
inline constexpr unsigned SS_TYPE_RECUR = (0x1u << 16u);
                                #endif

                                #ifndef DEF_F_PREDICATE
                                #define DEF_F_PREDICATE
extern const int F_PREDICATE;
                                #endif

static fu_STR declareStruct_w0xtnOZA(fu::view<char> id, const s_Struct& s, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    const s_Type& t = GET_x3O7get6(s.target, module, ctx).type;
    fu_STR def = (((((("\n                                #ifndef DEF_"_fu + id) + "\n                                #define DEF_"_fu) + id) + "\nstruct "_fu) + id) + "\n{"_fu);
    fu_STR indent = "\n    "_fu;
    fu::view<s_ScopeItem> fields = s.items;
    for (int i = 0; i < fields.size(); i++)
    {
        const s_Overload& field = GET_x3O7get6(target_wh65lsPu(fields[i]), module, ctx);
        if (!(field.kind == "field"_fu))
            fail_g0mqMv14(((((("Non-field struct item: "_fu + field.name) + " ("_fu) + field.kind) + ") in "_fu) + t.vtype.canon), _here, ctx);

        def += ((((indent + typeAnnot_Qp954DVJ(field.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + " "_fu) + ID_YqscxHlw(field.name)) + ";"_fu);
    };
    if (!is_rx_copy_4X1iL0ll(t))
    {
        def += (((("\n    "_fu + id) + "(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "("_fu) + id) + "&&) = default;"_fu);
        def += (((("\n    "_fu + id) + "& operator=(const "_fu) + id) + "&) = delete;"_fu);
        def += (((("\n    "_fu + id) + "& operator=("_fu) + id) + "&&) = default;"_fu);
    }
    else if (try_GET_j9slLFZe(s.target, module, ctx).status & SS_TYPE_RECUR)
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
        if (GET_x3O7get6(target_wh65lsPu(fields[i_1]), module, ctx).flags & F_PREDICATE)
            def += ("\n            || "_fu + ID_YqscxHlw(fields[i_1].id));

    };
    def += "\n        ;"_fu;
    def += "\n    }"_fu;
    return def + "\n};\n                                #endif\n"_fu;
}

static fu_STR typeAnnotBase_m31cPWMO(const s_Type& type, const int mode, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    fu::view<char> c = type.vtype.canon;
    if (is_primitive_CbRwLCm2(type))
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
            include_ozNJN3BA("<fu/int.h>"_fu, _libs);
            return "fu::"_fu + c;
        };
        include_ozNJN3BA("<cstdint>"_fu, _libs);
        if (c == "i64"_fu)
            return "int64_t"_fu;

        if (c == "u16"_fu)
            return "uint16_t"_fu;

        if (c == "u32"_fu)
            return "uint32_t"_fu;

        if (c == "u64"_fu)
            return "uint64_t"_fu;

        fail_g0mqMv14("Unknown primitive."_fu, _here, ctx);
    };
    if (type_isZST_4X1iL0ll(type))
        return annotateZST_BlCwSV5H();

    if (c == "never"_fu)
        return annotateNever_O3hSx4OE(_libs);

    s_Type arrayItem = tryClear_sliceable_4X1iL0ll(type);
    if (arrayItem)
    {
        if (TODO_FIX_isArray_4X1iL0ll(type) || !is_ref_4X1iL0ll(type))
        {
            if (arrayItem == t_byte)
                return annotateString_rZxUZlPs(_libs);

            fu_STR itemAnnot = typeAnnot_Qp954DVJ(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            include_ozNJN3BA("<fu/vec.h>"_fu, _libs);
            return ("fu_VEC<"_fu + itemAnnot) + ">"_fu;
        };
        fu_STR itemAnnot = typeAnnot_Qp954DVJ(arrayItem, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        include_ozNJN3BA("<fu/view.h>"_fu, _libs);
        if (is_mutref_4X1iL0ll(type, _here, ctx) || (mode & M_MUTVAR))
            return ("fu::view_mut<"_fu + itemAnnot) + ">"_fu;
        else
            return ("fu::view<"_fu + itemAnnot) + ">"_fu;

    };
    const s_Struct* _0;
    const s_Struct& s = (*(_0 = &(lookupStruct_LWkAag39(type, module, ctx))) ? *_0 : fail_g0mqMv14(("TODO: "_fu + type.vtype.canon), _here, ctx));
    /*MOV*/ fu_STR id = ("s_"_fu + s.name);
    const s_StructCanon scp = parseStructCanon_1WZjPEgG(type.vtype.canon);
    if (add_once_IPrjcKiK(_tfwd, scp.modid, scp.index))
    {
        _tfwd_src += (("struct "_fu + id) + ";\n"_fu);
        fu_STR decl = declareStruct_w0xtnOZA(id, s, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn);
        _tdef += decl;
    };
    return /*NRVO*/ id;
}

                                #ifndef DEFt_starts_KclJlPSO
                                #define DEFt_starts_KclJlPSO
inline bool starts_KclJlPSO(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu_STR typeAnnot_Qp954DVJ(const s_Type& type, const int mode, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR fwd = typeAnnotBase_m31cPWMO(type, mode, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (is_ref_4X1iL0ll(type))
    {
        if (starts_KclJlPSO(fwd, "fu::view"_fu) || (fwd == "void"_fu))
            return /*NRVO*/ fwd;

        if (is_mutref_4X1iL0ll(type, _here, ctx))
            return fwd + "&"_fu;

        if (is_primitive_CbRwLCm2(type))
            return ((((mode & M_ARGUMENT) | (mode & M_CONST)) && !(mode & M_FWDECL)) ? ("const "_fu + fwd) : fu_STR(fwd));

        if (mode & M_MOVABLE)
        {
            const s_Type& fnret = GET_x3O7get6(s_Target { int(module.modid), int(_current_fn.target.index) }, module, ctx).type;
            if (!(is_trivial_K61azC5I(fnret, module, ctx) || is_ref_4X1iL0ll(fnret)))
                return fwd + "&"_fu;

        };
        return ("const "_fu + fwd) + "&"_fu;
    };
    if ((mode & M_ARGUMENT) && !is_primitive_CbRwLCm2(type))
        return fwd + "&&"_fu;

    if ((mode & M_CONST) && is_trivial_K61azC5I(type, module, ctx))
        return "const "_fu + fwd;

    return /*NRVO*/ fwd;
}

static fu_STR emitTEMPVAR_k1nONmeL(fu::view<char> annot, bool& ptrflip, const fu_STR& id, const fu_STR& expr, s_cg_CurrentFn& _current_fn)
{
    ptrflip = (annot[(annot.size() - 1)] == '&');
    /*MOV*/ fu_STR id_1 = (id ? fu_STR(id) : x7E("_"_fu, fu::i64dec(_current_fn.numTEMPVARs++)));
    _current_fn.TEMPVARs += (ptrflip ? ((fu::get_view(annot, 0, (annot.size() - 1)) + "* "_fu) + id_1) : (((annot + " "_fu) + id_1) + (expr ? (" = "_fu + expr) : " {}"_fu)));
    return /*NRVO*/ id_1;
}

static fu_STR cgClone_QA9X0tmD(const s_Type& type, fu::view<char> src, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return ((typeAnnotBase_m31cPWMO(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src) + ")"_fu;
}

static fu_STR cgMove_PTYYRveC(const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_trivial_K61azC5I(type, module, ctx) && is_rx_copy_4X1iL0ll(type))
        return cgClone_QA9X0tmD(type, src, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    return ((("static_cast<"_fu + typeAnnotBase_m31cPWMO(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "&&>("_fu) + src) + ")"_fu;
}

                                #ifndef DEFt_map_FEDTyZou
                                #define DEFt_map_FEDTyZou
inline fu_VEC<fu_STR> map_FEDTyZou(fu::view<s_SolvedNode> a, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    /*MOV*/ fu_VEC<fu_STR> res {};
    res.grow<false>(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        const fu_STR* BL_3_v;
        res.mutref(i) = (__extension__ (
        {
            const s_SolvedNode& i_1 = a[i];
            BL_3_v = &(SolvedNodeData_jJduAOM6(i_1, _current_nodes, _current_fnort, _here, ctx).kind);
        (void)0;}), *BL_3_v);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_join_IswWtOx1
                                #define DEFt_join_IswWtOx1
inline fu_STR join_IswWtOx1(fu::view<fu_STR> a, fu::view<char> sep)
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

                                #ifndef DEFt_find_hCEGPwyG
                                #define DEFt_find_hCEGPwyG
inline int find_hCEGPwyG(fu::view<char> a, const char b)
{
    for (/*MOV*/ int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return /*NRVO*/ i;

    };
    return -1;
}
                                #endif

static fu_STR& ARG_gRnBDiMl(const int i, fu_VEC<fu_STR>& item_src)
{
    return item_src.mutref(i);
}

static fu_STR REST_nWoeWpFd(const int start, fu::view<fu_STR> item_src)
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

static fu_STR ooeWrap_6VporGwO(const fu_STR& src, const fu_STR& ooe_header)
{
    return (ooe_header ? (((ooe_header + ", "_fu) + src) + ")"_fu) : fu_STR(src));
}

static fu_STR emitMethodCall_6hdhjGr7(fu::view<char> id, fu_VEC<fu_STR>& item_src, const fu_STR& ooe_header)
{
    fu_STR _0 {};
    return ooeWrap_6VporGwO(((_0 = ((ARG_gRnBDiMl(0, item_src) + id) + "("_fu), (static_cast<fu_STR&&>(_0) + REST_nWoeWpFd(1, item_src))) + ")"_fu), ooe_header);
}

static bool affectedByIntegerPromotions_jPROw9Lp(const s_Type& type)
{
    if (!is_integral_CbRwLCm2(type) || is_ref_4X1iL0ll(type))
        return false;

    fu::view<char> c = type.vtype.canon;
    return (c.size() == 2) || ((c.size() == 3) && (fu::get_view(c, 1, 3) == "16"_fu));
}

static fu_STR unpromote_qIQWHSWt(const fu_STR& expr, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (isNative && affectedByIntegerPromotions_jPROw9Lp(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type))
        return ((typeAnnotBase_m31cPWMO(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + expr) + ")"_fu;

    return fu_STR(expr);
}

static fu_STR emitPostfixOp_Wp6p3mYc(fu::view<char> op, fu_VEC<fu_STR>& item_src, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return unpromote_qIQWHSWt((ARG_gRnBDiMl(0, item_src) + op), isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

                                #ifndef DEFt_only_ZM5iCY9I
                                #define DEFt_only_ZM5iCY9I
inline const fu_STR& only_ZM5iCY9I(fu::view<fu_STR> s)
{
    return ((s.size() == 1) ? s[0] : fu::fail(x7E("len != 1: "_fu, fu::i64dec(s.size()))));
}
                                #endif

                                #ifndef DEF_t_u8
                                #define DEF_t_u8
extern const s_Type t_u8;
                                #endif

static fu_STR emitBuiltin_yDYXvdcw(fu::view<char> id, fu::view<fu_STR> args, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (id == "/prim/convert"_fu)
    {
        const s_Type& output = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type;
        const s_Type& input = SolvedNodeData_jJduAOM6(only_YfDn7IVA(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items), _current_nodes, _current_fnort, _here, ctx).type;
        fu_STR cast = typeAnnotBase_m31cPWMO(output, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        if (is_integral_CbRwLCm2(input) && is_integral_CbRwLCm2(output) && (is_unsigned_CbRwLCm2(input) != is_unsigned_CbRwLCm2(output)))
        {
            s_Type mid_t { (is_unsigned_CbRwLCm2(input) ? output : input) };
            if (!(mid_t.vtype.canon[0] == 'i'))
                fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx);

            mid_t.vtype.canon.mutref(0) = 'u';
            if ((mid_t.vtype.canon != output.vtype.canon) && (mid_t.vtype.canon != input.vtype.canon))
            {
                fu_STR inner = typeAnnotBase_m31cPWMO(mid_t, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                return ((((cast + '(') + inner) + '(') + only_ZM5iCY9I(args)) + "))"_fu;
            };
        }
        else if ((input.vtype.canon == t_byte.vtype.canon) && (output.vtype.canon != t_byte.vtype.canon))
        {
            fu_STR inner = typeAnnotBase_m31cPWMO(t_u8, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            return ((((cast + '(') + inner) + '(') + only_ZM5iCY9I(args)) + "))"_fu;
        };
        return ((cast + '(') + only_ZM5iCY9I(args)) + ')';
    };
    fail_g0mqMv14(("Unknown builtin: "_fu + id), _here, ctx);
}

static fu_STR emitFunctionCall_Hy6bSlfa(fu::view<char> id, fu::view<char> open, fu::view<char> close, fu::view<fu_STR> item_src, const fu_STR& ooe_header)
{
    return ooeWrap_6VporGwO((((id + open) + REST_nWoeWpFd(0, item_src)) + close), ooe_header);
}

                                #ifndef DEFt_last_85KQkyE0
                                #define DEFt_last_85KQkyE0
inline char last_85KQkyE0(fu::view<char> s)
{
    return (s.size() ? s[(s.size() - 1)] : fu::fail("len == 0"_fu));
}
                                #endif

static bool binSkipParens_lFU0PwSy(fu::view<char> id, const int mode)
{
    if (mode & M_STMT)
        return true;

    if (mode & M_PARENS)
    {
        if (last_85KQkyE0(id) == '=')
        {
            if ((id == "=="_fu) || (id == "!="_fu))
                return true;

            return false;
        };
        return true;
    };
    return false;
}

static fu_STR emitBinaryOp_68gsIY3d(fu::view<char> op, fu::view<s_SolvedNode> args, const s_TokenIdx& _here, const s_Context& ctx, const int mode, const fu_STR& ooe_header, fu_VEC<fu_STR>& item_src, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (!(args.size() == 2))
        fail_g0mqMv14("args.len != 2"_fu, _here, ctx);

    if (binSkipParens_lFU0PwSy(op, mode) && !ooe_header)
    {
        fu_STR _0 {};
        return (_0 = (((ARG_gRnBDiMl(0, item_src) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_0) + ARG_gRnBDiMl(1, item_src)));
    };
    fu_STR _1 {};
    return ooeWrap_6VporGwO(unpromote_qIQWHSWt(((_1 = (((("("_fu + ARG_gRnBDiMl(0, item_src)) + " "_fu) + op) + " "_fu), (static_cast<fu_STR&&>(_1) + ARG_gRnBDiMl(1, item_src))) + ")"_fu), isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn), ooe_header);
}

static fu_STR cgDefault_f447OWii(const s_Type& type, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (is_mutref_4X1iL0ll(type, _here, ctx))
        fail_g0mqMv14("Cannot definit mutrefs."_fu, _here, ctx);

    if (type_isZST_4X1iL0ll(type))
        return "void()"_fu;

    if (is_ref_4X1iL0ll(type))
    {
        fu_STR annot = typeAnnot_Qp954DVJ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        if (starts_KclJlPSO(annot, "fu::view"_fu))
            return annot + "{}"_fu;

        include_ozNJN3BA("<fu/default.h>"_fu, _libs);
        return ("(*(const "_fu + typeAnnot_Qp954DVJ(clear_refs_4X1iL0ll(s_Type(type)), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "*)fu::NIL)"_fu;
    };
    return typeAnnot_Qp954DVJ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "{}"_fu;
}

static bool add_once_SI3t3nsB(fu_VEC<s_BitSet>& bs, const s_Target& target)
{
    return add_once_IPrjcKiK(bs, target.modid, target.index);
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

static bool isOp_0LIypOXp(const s_Target& target, const s_Module& module, const s_Context& ctx)
{
    const int flags = GET_x3O7get6(target, module, ctx).flags;
    if (flags & F_OOE_RTL)
        return true;

    if (!(flags & F_OPERATOR))
        return false;

    fu::view<s_Argument> args = EXT_UPg8LnZ5(target, module, ctx).args;
    if (args.size() > 2)
        return false;

    if (GET_x3O7get6(target, module, ctx).kind == "__native"_fu)
        return true;

    fu::view<char> name = GET_x3O7get6(target, module, ctx).name;
    if (args.size() > 1)
        return hasBinary_YqscxHlw(name);

    if (flags & F_POSTFIX)
        return hasPostfix_YqscxHlw(name);

    return hasUnary_YqscxHlw(name);
}

static fu_STR valid_operator_Q6MO8qV0(const fu_STR& str)
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

static char hex_NW7DHgtU(const unsigned x)
{
    return ((x < 10u) ? char((unsigned(fu::u8('0')) + x)) : char((unsigned(fu::u8('A')) + (x - 10u))));
}

static fu_STR xHH_wsIuXlv1(const unsigned c)
{
    return ("x"_fu + hex_NW7DHgtU(((c >> 4u) & 0xfu))) + hex_NW7DHgtU(((c >> 0u) & 0xfu));
}

static fu_STR valid_identifier_RL982tKf(fu_STR&& str)
{
    for (int i = str.size(); i-- > 0; )
    {
        const char c = str[i];
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) || ((c >= '0') && (c <= '9')) || (c == '_'))
            continue;

        str = ((fu::get_view(str, 0, i) + xHH_wsIuXlv1(unsigned(fu::u8(c)))) + fu::get_view(str, (i + 1), str.size()));
    };
    return ID_YqscxHlw(str);
}

static fu_STR fnID_Hbw1kZ0j(const s_Target& target, const s_Module& module, const s_Context& ctx, const s_TokenIdx& _here)
{
    const s_Overload& overload = GET_x3O7get6(target, module, ctx);
    const fu_STR& id = (overload.name ? overload.name : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx));
    return (isOp_0LIypOXp(target, module, ctx) ? ("operator"_fu + valid_operator_Q6MO8qV0(id)) : valid_identifier_RL982tKf(fu_STR(id)));
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

static int isExtLinked_Frn9zIQz(const s_Overload& overload)
{
    return overload.flags & (F_PUB | F_EXTERN);
}

static fu_STR fnLinkage_FDh4fjeD(const s_Overload& overload)
{
    return ((is_never_4X1iL0ll(overload.type) ? "[[noreturn]] "_fu : fu_STR{}) + ((overload.flags & F_TEMPLATE) ? "inline "_fu : fu_STR{})) + (!isExtLinked_Frn9zIQz(overload) ? "static "_fu : fu_STR{});
}

static void ensureFwdDecl_BkO4aLq7(const s_Target& target, const s_Module& module, const s_Context& ctx, fu_VEC<s_BitSet>& _ffwd, s_cg_CurrentFn& _current_fn, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<fu_STR>& _ffwd_src)
{
    const s_Overload& overload = GET_x3O7get6(target, module, ctx);
    if ((overload.kind != "fn"_fu) || (overload.name == "main"_fu))
        return;

    if (!add_once_SI3t3nsB(_ffwd, target))
        return;

    s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu_VEC<fu_STR>{}, fu_VEC<int>{}, fu_VEC<fu_STR>{} };
    fu_DEFER(std::swap(_current_fn, current_fn0));
    std::swap(_current_fn, current_fn0);
    const s_Type& ret = (overload.type ? overload.type : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx));
    fu_STR annot = typeAnnot_Qp954DVJ(ret, M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR name = fnID_Hbw1kZ0j(target, module, ctx, _here);
    fu_STR src = ((((fnLinkage_FDh4fjeD(overload) + annot) + " "_fu) + name) + "("_fu);
    fu::view<s_Argument> args = EXT_UPg8LnZ5(target, module, ctx).args;
    bool first = true;
    for (int i = 0; i < args.size(); i++)
    {
        const s_Type& arg = args[i].type;
        if (type_isZST_4X1iL0ll(arg))
            continue;

        if (first)
            first = false;
        else
            src += ", "_fu;

        src += typeAnnot_Qp954DVJ(arg, (M_ARGUMENT | M_FWDECL), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    };
    if (overload.flags & F_POSTFIX)
    {
        if (!(overload.flags & F_OPERATOR))
            fu_ASSERT();

        src += ", /*postfix*/int "_fu;
    };
    src += ");\n"_fu;
    _ffwd_src += fu_STR(src);
}

                                #ifndef DEF_FN_BODY_BACK
                                #define DEF_FN_BODY_BACK
inline constexpr int FN_BODY_BACK = -1;
                                #endif

                                #ifndef DEF_SS_FINALIZED
                                #define DEF_SS_FINALIZED
inline constexpr unsigned SS_FINALIZED = (0x1u << 3u);
                                #endif

static s_Target nested_tjqs7wOv(const int index, const s_cg_CurrentFn& _current_fn)
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

static fu_VEC<fu_STR>& _ids_used_a87HGsiy(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_used;
}

static fu_VEC<int>& _ids_dedupe_xfbwA1zp(s_cg_CurrentFn& _current_fn)
{
    return _current_fn._ids_dedupe;
}

                                #ifndef DEFt_grow_if_oob_SiQlapRF
                                #define DEFt_grow_if_oob_SiQlapRF
inline int& grow_if_oob_SiQlapRF(fu_VEC<int>& a, const int i)
{
    if ((a.size() <= i))
        a.grow((i + 1));

    return a.mutref(i);
}
                                #endif

static fu_STR localID_OYeliFbo(const s_Target& target, const bool dedupe, const s_Module& module, const s_Context& ctx, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& o = GET_x3O7get6(target, module, ctx);
    /*MOV*/ fu_STR id { o.name };
    const s_ClosureID cid = tryParseClosureID_RHyKU5hm(id);
    if (cid.target)
        id = GET_x3O7get6(cid.target, module, ctx).name;

    id = ID_YqscxHlw(id);
    if (isLocal_VRlaNfIi(target))
    {
        if (dedupe)
        {
            int dupes = 0;
            for (; ; )
            { {
                fu_STR candidate = (dupes ? x7E((id + '_'), fu::i64dec(dupes)) : fu_STR(id));
                for (int i = 0; i < _ids_used_a87HGsiy(_current_fn).size(); i++)
                {
                    if (_ids_used_a87HGsiy(_current_fn)[i] == candidate)
                    {
                        dupes++;
                        goto BL_5;
                    };
                };
                _ids_used_a87HGsiy(_current_fn) += fu_STR(candidate);
                break;
              } BL_5:;
            };
            if (dupes)
                grow_if_oob_SiQlapRF(_ids_dedupe_xfbwA1zp(_current_fn), target.index) = dupes;

        };
        const int dupes = ((_ids_dedupe_xfbwA1zp(_current_fn).size() > target.index) ? _ids_dedupe_xfbwA1zp(_current_fn)[target.index] : (*(const int*)fu::NIL));
        if (dupes)
            return x7E((id + '_'), fu::i64dec(dupes));

    };
    return /*NRVO*/ id;
}

                                #ifndef DEF_F_HOIST
                                #define DEF_F_HOIST
extern const int F_HOIST;
                                #endif

static bool F_HOIST_asPtr_q500AJP6(const s_Target& target, const s_Module& module, const s_Context& ctx, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    if (!(GET_x3O7get6(target, module, ctx).flags & F_HOIST))
        return false;

    const s_Type& t = SolvedNodeData_jJduAOM6(GET_x3O7get6(target, module, ctx).solved, _current_nodes, _current_fnort, _here, ctx).type;
    return is_ref_4X1iL0ll(t) && (!type_isSliceable_4X1iL0ll(t) || TODO_FIX_isArray_4X1iL0ll(t));
}

static fu_STR binding_JvLuo6hk(const s_Target& target, const bool forceValue, const s_Module& module, const s_Context& ctx, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn)
{
    const s_Overload& overload = GET_x3O7get6(target, module, ctx);
    const s_Type& place_type = SolvedNodeData_jJduAOM6(overload.solved, _current_nodes, _current_fnort, _here, ctx).type;
    const int isArg = (overload.flags & F_ARG);
    s_Type place_type_1 = (forceValue ? clear_refs_4X1iL0ll(s_Type(place_type)) : s_Type(place_type));
    /*MOV*/ fu_STR annot = typeAnnot_Qp954DVJ(place_type_1, ((((!is_mutref_4X1iL0ll(overload.type, _here, ctx) ? M_CONST : (*(const int*)fu::NIL)) | (isArg ? M_ARGUMENT : (*(const int*)fu::NIL))) | (is_mutref_4X1iL0ll(overload.type, _here, ctx) ? M_MUTVAR : (*(const int*)fu::NIL))) | ((overload.flags & F_MOVED_FROM) ? M_MOVABLE : (*(const int*)fu::NIL))), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    const int isUnused = (overload.flags & F_UNUSED);
    if (isArg && isUnused)
        return /*NRVO*/ annot;

    /*MOV*/ fu_STR id = localID_OYeliFbo(target, true, module, ctx, _current_fn);
    if (GET_x3O7get6(target, module, ctx).flags & F_HOIST)
    {
        if (!(_current_fn.target))
            BUG_patsWWTe("TODO: hoisting for global variables."_fu, _here, ctx);

        fu_STR hoistDecl = (starts_KclJlPSO(annot, "const "_fu) ? fu::slice(annot, 6) : fu_STR(annot));
        if (F_HOIST_asPtr_q500AJP6(target, module, ctx, _current_nodes, _current_fnort, _here))
        {
            if (!(hoistDecl[(hoistDecl.size() - 1)] == '&'))
                BUG_patsWWTe(("F_HOIST_asPtr: Decl not a ref: "_fu + hoistDecl), _here, ctx);

            hoistDecl.mutref((hoistDecl.size() - 1)) = '*';
        };
        _current_fn._hoist += ((hoistDecl + " "_fu) + id);
        return /*NRVO*/ id;
    };
    /*MOV*/ fu_STR head { (annot ? annot : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx)) };
    head += (" "_fu + id);
    if (isUnused)
        head = ("[[maybe_unused]] "_fu + head);

    if (GET_x3O7get6(target, module, ctx).flags & F_MOVED_FROM)
        head = ("/*MOV*/ "_fu + head);

    return /*NRVO*/ head;
}

static fu_STR binding_a0djusPl(const s_Argument& arg, const bool forceValue, s_cg_CurrentFn& _current_fn, const s_Module& module, const s_Context& ctx, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef)
{
    const s_Target target = nested_tjqs7wOv(arg.local, _current_fn);
    return binding_JvLuo6hk(target, forceValue, module, ctx, _current_nodes, _current_fnort, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgFnSignature_zC4vjsMu(const s_SolvedNode& fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, int& _hasMain)
{
    const s_Target& target = SolvedNodeData_jJduAOM6(fn, _current_nodes, _current_fnort, _here, ctx).target;
    const s_Overload& overload = GET_x3O7get6(target, module, ctx);
    const fu_VEC<s_Argument>& host_args = EXT_UPg8LnZ5(target, module, ctx).args;
    fu_STR annot = typeAnnot_Qp954DVJ((overload.type ? overload.type : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx)), M_RETVAL, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR id { overload.name };
    if (id == "main"_fu)
    {
        _hasMain = MAIN_needed;
        id = "fu_MAIN"_fu;
        if (host_args)
            _hasMain |= MAIN_argv;

        if (type_isZST_4X1iL0ll(overload.type))
            _hasMain |= MAIN_zst;

    }
    else
        id = fnID_Hbw1kZ0j(SolvedNodeData_jJduAOM6(fn, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _here);

    /*MOV*/ fu_STR src = ((((fnLinkage_FDh4fjeD(overload) + annot) + " "_fu) + id) + "("_fu);
    bool some = false;
    for (int i = 0; i < host_args.size(); i++)
    {
        if (type_isZST_4X1iL0ll(host_args[i].type))
            continue;

        if (some)
            src += ", "_fu;

        some = true;
        src += binding_a0djusPl(host_args[i], bool{}, _current_fn, module, ctx, _current_nodes, _current_fnort, _here, _libs, _tfwd, _tfwd_src, _tdef);
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

static bool exprOK_kZjsCDLz(fu::view<s_SolvedNode> nodes, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    for (int i = 0; i < nodes.size(); i++)
    {
        const s_SolvedNode& n = nodes[i];
        fu::view<char> k = SolvedNodeData_jJduAOM6(n, _current_nodes, _current_fnort, _here, ctx).kind;
        if ((k == "jump"_fu) || (k == "loop"_fu) || (k == "try"_fu) || (k == "letdef"_fu) || (k == "block"_fu))
            return false;

        if (((k == "and"_fu) || (k == "or"_fu) || (k == "if"_fu)) && !exprOK_kZjsCDLz(SolvedNodeData_jJduAOM6(n, _current_nodes, _current_fnort, _here, ctx).items, _current_nodes, _current_fnort, _here, ctx))
            return false;

    };
    return true;
}

static bool operator==(const s_Helpers& a, const s_Helpers& b)
{
    return a.index == b.index;
}

static bool labelUsed_JedfjST3(fu::view<s_SolvedNode> items, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Helpers& helpers)
{
    for (int i = 0; i < items.size(); i++)
    {
        const s_SolvedNode& item = items[i];
        if (((SolvedNodeData_jJduAOM6(item, _current_nodes, _current_fnort, _here, ctx).kind == "jump"_fu) && (SolvedNodeData_jJduAOM6(item, _current_nodes, _current_fnort, _here, ctx).helpers == helpers)) || labelUsed_JedfjST3(SolvedNodeData_jJduAOM6(item, _current_nodes, _current_fnort, _here, ctx).items, _current_nodes, _current_fnort, _here, ctx, helpers))
            return true;

    };
    return false;
}

static fu_VEC<fu_STR> cgNodes_EjavTiy7(fu::view<s_SolvedNode> nodes, const int mode, const fu_STR& trail, fu::view<char> debug, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
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
        const bool isTrail = (trail && (i == (nodes.size() - 1)) && !is_never_4X1iL0ll(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type) && !is_void_4X1iL0ll(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type));
        fu_STR src = (node ? cgNode_rdhcxijm(node, (debug + ".cgNodes"_fu), (isTrail ? (mode & ~M_STMT) : int(mode)), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : fu_STR{});
        if (!(src || (mode & M_STMT)))
            fail_g0mqMv14((((("cgNodes: empty output for Node(kind=`"_fu + SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind) + "` value=`"_fu) + SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value) + "`)."_fu), _here, ctx);

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

static fu_STR cgComma_16yi8aht(fu::view<s_SolvedNode> nodes, fu::view<char> debug, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    fu_VEC<fu_STR> items = cgNodes_EjavTiy7(nodes, 0, (*(const fu_STR*)fu::NIL), (debug + ".cgComma"_fu), _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
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

                                #ifndef DEFt_if_first_85KQkyE0
                                #define DEFt_if_first_85KQkyE0
inline char if_first_85KQkyE0(fu::view<char> s)
{
    return s.size() ? s[0] : (*(const char*)fu::NIL);
}
                                #endif

                                #ifndef DEFt_if_last_85KQkyE0
                                #define DEFt_if_last_85KQkyE0
inline char if_last_85KQkyE0(fu::view<char> s)
{
    return s.size() ? s[(s.size() - 1)] : (*(const char*)fu::NIL);
}
                                #endif

static fu_STR cgStatements_NLVqZd95(fu::view<s_SolvedNode> nodes, int& count, const fu_STR& trail, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    fu_VEC<fu_STR> lines = cgNodes_EjavTiy7(nodes, M_STMT, trail, "cgStatements"_fu, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    count = lines.size();
    /*MOV*/ fu_STR src {};
    for (int i = 0; i < lines.size(); i++)
    {
        const fu_STR& line = lines[i];
        if (line)
            src += (((if_first_85KQkyE0(line) == '\n') ? ('\n' + line) : (_indent + line)) + ((if_last_85KQkyE0(line) == ';') ? '\n' : ';'));

    };
    return /*NRVO*/ src;
}

static fu_STR cgBlock_xtm0G3Pd(fu::view<s_SolvedNode> nodes, const bool skipCurlies, const bool gnuStmtExpr, const s_Helpers& helpers, const s_Type& type, s_cg_CurrentFn& _current_fn, fu_STR& _indent, fu_VEC<fu_STR>& _libs, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, int& _hasMain, fu_STR& _fdef)
{
    const int _ids_used0 = _current_fn._ids_used.size();
    fu_DEFER(if (!_current_fn._hoist)
        _current_fn._ids_used.shrink(_ids_used0););
    fu_STR indent0 { _indent };
    fu_DEFER(_indent = indent0);
    _indent += "    "_fu;
    fu_STR gnuOpen = (gnuStmtExpr ? "(__extension__ ("_fu : fu_STR{});
    fu_STR open = "{"_fu;
    fu_STR close = (gnuStmtExpr ? "}))"_fu : "}"_fu);
    fu_STR trail {};
    fu_STR name = x7E("BL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const bool has_val = (type && !is_void_4X1iL0ll(type));
    bool ptrflip = false;
    if (has_val)
    {
        fu_STR annot = typeAnnot_Qp954DVJ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        fu_STR id = emitTEMPVAR_k1nONmeL(annot, ptrflip, (name ? (name + "_v"_fu) : fu_STR{}), (*(const fu_STR*)fu::NIL), _current_fn);
        fu_STR out = (ptrflip ? ("*"_fu + id) : cgMove_PTYYRveC(type, id, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
        close = (("(void)0;}), "_fu + out) + ")"_fu);
        trail = (id + " = "_fu);
        if (ptrflip)
            trail += "&"_fu;

    };
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu_STR(name), s_Helpers(helpers), bool(has_val), bool(ptrflip) };
    int count {};
    /*MOV*/ fu_STR src = cgStatements_NLVqZd95(nodes, count, trail, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    const bool labelUsed = fu::has(src, (("goto "_fu + name) + ";"_fu));
    if (labelUsed)
    {
        close = (((("  } "_fu + name) + ":;"_fu) + indent0) + close);
        open = "{ {"_fu;
    };
    if (!skipCurlies || (nodes.size() != 1) || (count != 1) || ((SolvedNodeData_jJduAOM6(nodes[0], _current_nodes, _current_fnort, _here, ctx).kind != "jump"_fu) && (SolvedNodeData_jJduAOM6(nodes[0], _current_nodes, _current_fnort, _here, ctx).kind != "call"_fu)) || labelUsed)
        src = (((((gnuOpen + indent0) + open) + src) + indent0) + close);

    return /*NRVO*/ src;
}

static fu_STR cgBlock_Tw6DXZm5(const s_SolvedNode& node, const int mode, fu::view<char> debug, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    fu_VEC<s_SolvedNode> items = ((SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind == "block"_fu) ? fu_VEC<s_SolvedNode>(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items) : fu_VEC<s_SolvedNode> { fu::slate<1, s_SolvedNode> { s_SolvedNode(node) } });
    const s_Helpers& helpers = ((SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind == "block"_fu) ? SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).helpers : (*(const s_Helpers*)fu::NIL));
    if (mode & M_LOOP_BODY)
        _current_fn.can_cont = helpers;

    const bool expr = !(mode & M_STMT);
    if (expr && exprOK_kZjsCDLz(items, _current_nodes, _current_fnort, _here, ctx) && !labelUsed_JedfjST3(items, _current_nodes, _current_fnort, _here, ctx, helpers))
        return cgComma_16yi8aht(items, (debug + ".cgBlock"_fu), _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    return cgBlock_xtm0G3Pd(items, !!(mode & M_OPT_CURLIES), expr, helpers, (expr ? SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type : (*(const s_Type*)fu::NIL)), _current_fn, _indent, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_nodes, _current_fnort, _ffwd, _ffwd_src, _idef, _hasMain, _fdef);
}

                                #ifndef DEF_SS_FN_RECUR
                                #define DEF_SS_FN_RECUR
inline constexpr unsigned SS_FN_RECUR = (0x1u << 17u);
                                #endif

                                #ifndef DEF_F_IMPLICIT
                                #define DEF_F_IMPLICIT
inline constexpr int F_IMPLICIT = (1 << 17);
                                #endif

                                #ifndef DEFt_unpackAddrOfFn_MwvDqxVC
                                #define DEFt_unpackAddrOfFn_MwvDqxVC
inline void unpackAddrOfFn_MwvDqxVC(fu::view<char> canon, s_Target& last, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<s_BitSet>& _ffwd, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    if (!(canon[0] == '@'))
        fu::fail((("unpackAddrOfFn: No leading @ in `"_fu + canon) + "`."_fu));

    int offset = 1;
    while (offset < canon.size())
    {
        const s_Mi mi = parseMi_t6R8uPsY(offset, canon);
        const s_Target target = s_Target { int(mi.modid), int(mi.index) };
        if (last)
            fail_g0mqMv14(((("Codegen cannot decine which fn to pass as a c++ lambda at __native callsite: "_fu + GET_x3O7get6(last, module, ctx).name) + " vs "_fu) + GET_x3O7get6(target, module, ctx).name), _here, ctx);

        last = target;
        if (!(GET_x3O7get6(target, module, ctx).kind == "fn"_fu))
            fail_g0mqMv14(((("Cannot codegen a non-fn: "_fu + GET_x3O7get6(target, module, ctx).kind) + " "_fu) + GET_x3O7get6(target, module, ctx).name), _here, ctx);

        fu::view<s_Argument> args = EXT_UPg8LnZ5(target, module, ctx).args;
        for (int i = 0; i < args.size(); i++)
        {
            if (args[i].flags & F_IMPLICIT)
                fail_g0mqMv14("How do we codegen F_IMPLICIT arguments through lambdas?"_fu, _here, ctx);

        };
        ensureFnUsable_HF669hTW(target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    };
}
                                #endif

static fu_STR cgEmpty_xRwG0KtX(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _ffwd, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    if (mode & M_STMT)
        return fu_STR{};

    if ((mode & M_ARG_TO_NATIVE) && type_isAddrOfFn_4X1iL0ll(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type))
    {
        s_Target last {};
        unpackAddrOfFn_MwvDqxVC(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon, last, module, ctx, _here, _ffwd, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        return "&"_fu + fnID_Hbw1kZ0j(last, module, ctx, _here);
    };
    if (!SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type)
        return "0"_fu;

    return cgDefault_f447OWii(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgFn_naur8gVc(const s_SolvedNode& fn, const int mode, fu_STR& _indent, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _fdef)
{
    fu_STR indent0 { _indent };
    fu_DEFER(_indent = indent0);
    fu::view<s_SolvedNode> items = SolvedNodeData_jJduAOM6(fn, _current_nodes, _current_fnort, _here, ctx).items;
    const s_SolvedNode& body = items[(items.size() + FN_BODY_BACK)];
    const s_Overload& overload = GET_x3O7get6(SolvedNodeData_jJduAOM6(fn, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
    fu::view<char> id = overload.name;
    if (!(overload.status & SS_FINALIZED))
        fail_g0mqMv14(("cgFn: fn not finalized: "_fu + id), _here, ctx);

    if (!body)
    {
        if (!(overload.kind == "__native"_fu))
            fail_g0mqMv14(((("cgFn: no body on non-native: "_fu + overload.kind) + " "_fu) + id), _here, ctx);

        return ((mode & M_STMT) ? fu_STR{} : "0"_fu);
    };
    _indent = "\n"_fu;
    fu_STR src {};

    {
        s_cg_CurrentFn current_fn0 = s_cg_CurrentFn { s_Target(SolvedNodeData_jJduAOM6(fn, _current_nodes, _current_fnort, _here, ctx).target), 0, fu_VEC<fu_STR>{}, fu_VEC<s_cg_Block>{}, 0, s_Helpers{}, s_Helpers{}, s_Helpers{}, fu_VEC<fu_STR>{}, fu_VEC<int>{}, fu_VEC<fu_STR>{} };
        fu_DEFER(std::swap(_current_fn, current_fn0));
        std::swap(_current_fn, current_fn0);
        _current_fn.can_return = SolvedNodeData_jJduAOM6(body, _current_nodes, _current_fnort, _here, ctx).helpers;
        src += cgFnSignature_zC4vjsMu(fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _hasMain);
        fu_STR body_src = cgBlock_Tw6DXZm5(body, M_STMT, (("cgFn("_fu + id) + ")"_fu), _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
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
        ensureFwdDecl_BkO4aLq7(SolvedNodeData_jJduAOM6(fn, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);

    fu_STR dedupe = ((overload.flags & F_PUB) && (overload.flags & F_TEMPLATE) ? valid_identifier_RL982tKf(fu_STR(overload.name)) : fu_STR{});
    if (dedupe)
        _fdef += ((("\n                                #ifndef DEFt_"_fu + dedupe) + "\n                                #define DEFt_"_fu) + dedupe);

    _fdef += (("\n"_fu + src) + "\n"_fu);
    if (dedupe)
        _fdef += "                                #endif\n"_fu;

    return cgEmpty_xRwG0KtX(fn, mode, _current_nodes, _current_fnort, _here, ctx, module, _ffwd, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

static void ensureFnDef_brkMkIOD(const s_Target& target, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, s_BitSet& _idef, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_STR& _fdef)
{
    if (!(target.modid == module.modid))
        fail_g0mqMv14((((((x7E((x7E("ensureFnDef: fndef is needed outside of its original scope: "_fu, fu::i64dec(target.modid)) + " vs "_fu), fu::i64dec(module.modid)) + ": `"_fu) + GET_x3O7get6(target, module, ctx).kind) + " "_fu) + GET_x3O7get6(target, module, ctx).name) + "`."_fu), _here, ctx);

    if (!add_once_yDyCXbrU(_idef, target.index))
        return;

    const s_SolvedNode& node = GET_x3O7get6(target, module, ctx).solved;
    if (!(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind == "fn"_fu))
        fail_g0mqMv14("ensureFnDef non-fn"_fu, _here, ctx);

    cgFn_naur8gVc(node, M_STMT, _indent, _current_nodes, _current_fnort, _here, ctx, module, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _ffwd_src, _idef, _fdef);
}

static void ensureFnUsable_HF669hTW(const s_Target& target, const s_Module& module, const s_Context& ctx, fu_VEC<s_BitSet>& _ffwd, s_cg_CurrentFn& _current_fn, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    fu::view<s_SolvedNodeData> _current_nodes = EXT_UPg8LnZ5(target, module, ctx).nodes;
    const s_Target& _current_fnort = target;
    if (target.modid != module.modid)
        ensureFwdDecl_BkO4aLq7(target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src);
    else
        ensureFnDef_brkMkIOD(target, module, ctx, _here, _idef, _current_nodes, _current_fnort, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _ffwd_src, _fdef);

}

                                #ifndef DEF_LET_INIT
                                #define DEF_LET_INIT
inline constexpr int LET_INIT = 1;
                                #endif

inline static bool isIntegerConstant_nkZjodhm(const s_SolvedNode& expr, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module)
{
    if (SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind == "int"_fu)
        return true;

    if (SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind == "call"_fu)
    {
        const s_Overload& t = GET_x3O7get6(SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
        if ((t.kind == "__native"_fu) && (t.flags & F_OPERATOR))
        {
            for (int i = 0; i < SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).items.size(); i++)
            {
                if (!isIntegerConstant_nkZjodhm(SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).items[i], _current_nodes, _current_fnort, _here, ctx, module))
                    return false;

            };
            return true;
        };
    };
    return false;
}

                                #ifndef DEFt_join_hXY7eLHr
                                #define DEFt_join_hXY7eLHr
inline fu_STR join_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> sep)
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

static fu_STR binding_fqqlrPll(const s_Target& target, const s_SolvedNode& init, const bool doInit, const s_Module& module, const s_Context& ctx, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    /*MOV*/ fu_STR head = binding_JvLuo6hk(target, bool{}, module, ctx, _current_nodes, _current_fnort, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn);
    if (!doInit)
        return /*NRVO*/ head;

    if (GET_x3O7get6(target, module, ctx).flags & F_HOIST)
        head += " = "_fu;

    if (!init || ((SolvedNodeData_jJduAOM6(init, _current_nodes, _current_fnort, _here, ctx).kind == "definit"_fu) && !is_ref_4X1iL0ll(SolvedNodeData_jJduAOM6(init, _current_nodes, _current_fnort, _here, ctx).type)))
        return head + " {}"_fu;

    const bool isCopy = ((SolvedNodeData_jJduAOM6(init, _current_nodes, _current_fnort, _here, ctx).kind == "copy"_fu) && !is_ref_4X1iL0ll(SolvedNodeData_jJduAOM6(GET_x3O7get6(target, module, ctx).solved, _current_nodes, _current_fnort, _here, ctx).type));
    const s_SolvedNode& init_1 = (isCopy ? only_YfDn7IVA(SolvedNodeData_jJduAOM6(init, _current_nodes, _current_fnort, _here, ctx).items) : init);
    const bool use_initTEMPVARs = !_current_fn.target.index;
    fu_VEC<fu_STR> initTEMPVARs {};
    if (use_initTEMPVARs)
        std::swap(initTEMPVARs, _current_fn.TEMPVARs);

    fu_STR expr = cgNode_rdhcxijm(init_1, "binding"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    if (use_initTEMPVARs)
        std::swap(initTEMPVARs, _current_fn.TEMPVARs);

    if (initTEMPVARs)
        expr = (((((("[]() -> "_fu + typeAnnot_Qp954DVJ(SolvedNodeData_jJduAOM6(init_1, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + " {\n    "_fu) + join_hXY7eLHr(initTEMPVARs, ";\n    "_fu)) + ";\n    return "_fu) + expr) + ";\n}()"_fu);

    if (isCopy && !is_primitive_CbRwLCm2(SolvedNodeData_jJduAOM6(init_1, _current_nodes, _current_fnort, _here, ctx).type))
        return ((head + " { "_fu) + expr) + " }"_fu;

    if (GET_x3O7get6(target, module, ctx).flags & F_HOIST)
    {
        if (F_HOIST_asPtr_q500AJP6(target, module, ctx, _current_nodes, _current_fnort, _here))
            return ((head + "&("_fu) + expr) + ")"_fu;

        return head + expr;
    };
    return (head + " = "_fu) + expr;
}

static fu_STR binding_OPJNitD8(const s_SolvedNode& node, const bool doInit, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const s_Target& target = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target;
    const s_SolvedNode& init = (doInit && SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items ? SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items[LET_INIT] : (*(const s_SolvedNode*)fu::NIL));
    return binding_fqqlrPll(target, init, doInit, module, ctx, _current_nodes, _current_fnort, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

                                #ifndef DEFt_starts_wtS8CFRs
                                #define DEFt_starts_wtS8CFRs
inline bool starts_wtS8CFRs(fu::view<char> a, fu::view<char> with)
{
    return (a.size() >= with.size()) && (fu::get_view(a, 0, with.size()) == with);
}
                                #endif

static fu_STR cgLet_g2TJmPuy(const s_SolvedNode& node, const bool global, const bool foreign, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    if (type_isZST_4X1iL0ll(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type))
        return fu_STR{};

    const bool intconst = (global && is_primitive_CbRwLCm2(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type) && !is_floating_pt_CbRwLCm2(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type) && isIntegerConstant_nkZjodhm(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items[LET_INIT], _current_nodes, _current_fnort, _here, ctx, module));
    /*MOV*/ fu_STR src = binding_OPJNitD8(node, (!foreign || intconst), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    if (!global)
        return /*NRVO*/ src;

    if (starts_wtS8CFRs(src, "const "_fu))
        src = fu::slice(src, 6);

    if (intconst)
    {
        _fdef += ((((((("\n                                #ifndef DEF_"_fu + SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value) + "\n                                #define DEF_"_fu) + SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value) + "\ninline constexpr "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);
        return fu_STR{};
    };
    const int prio = (is_primitive_CbRwLCm2(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type) ? 0 : int(((SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target.modid == module.modid) ? module.out.init_prio : ctx.modules[SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target.modid].out.init_prio)));
    if (prio)
    {
        include_ozNJN3BA("<fu/init_priority.h>"_fu, _libs);
        fu_STR attr = (x7E("fu_INIT_PRIORITY("_fu, fu::i64dec((1000 + prio))) + ")"_fu);
        const int eq = find_hCEGPwyG(src, '=');
        if (eq > 0)
            src = (((fu::get_view(src, 0, eq) + attr) + " "_fu) + fu::get_view(src, eq, src.size()));

    };
    if (!isExtLinked_Frn9zIQz(GET_x3O7get6(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx)))
    {
        if (!foreign)
            _fdef += (("\nstatic const "_fu + src) + ";\n"_fu);
        else
            fail_g0mqMv14(("Cannot codegen, relies on an external static: "_fu + GET_x3O7get6(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx).name), _here, ctx);

    }
    else
        _fdef += ((((((("\n                                #ifndef DEF_"_fu + SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value) + "\n                                #define DEF_"_fu) + SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value) + "\nextern const "_fu) + src) + ";"_fu) + "\n                                #endif\n"_fu);

    return fu_STR{};
}

static void cgForeignGlobal_syB4CovC(const s_Target& target, fu_VEC<s_BitSet>& _ffwd, const s_Module& module, const s_Context& ctx, s_TokenIdx& _here, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    if (!add_once_SI3t3nsB(_ffwd, target))
        return;

    fu::view<s_SolvedNodeData> _current_nodes = EXT_UPg8LnZ5(s_Target { int(target.modid), 0 }, module, ctx).nodes;
    const s_Target _current_fnort = s_Target { int(target.modid), 0 };
    cgLet_g2TJmPuy(GET_x3O7get6(target, module, ctx).solved, true, true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

                                #ifndef DEFt_has_hXY7eLHr
                                #define DEFt_has_hXY7eLHr
inline bool has_hXY7eLHr(fu::view<fu_STR> a, fu::view<char> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

static fu_STR rootNS_YSKVgcx7(const fu_STR& id, const s_cg_CurrentFn& _current_fn)
{
    if (has_hXY7eLHr(_current_fn._ids_used, id))
        return "::"_fu + id;

    return fu_STR(id);
}

static fu_STR emitPrefixOp_KVZcUJ5P(fu::view<char> op, fu_VEC<fu_STR>& item_src, const bool isNative, const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    return unpromote_qIQWHSWt((op + ARG_gRnBDiMl(0, item_src)), isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgCall_OzIM8TVI(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const s_Extended& ext = EXT_UPg8LnZ5(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
    const s_Overload* _0;
    const s_Overload& target = (*(_0 = &(GET_x3O7get6(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx))) ? *_0 : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx));
    const fu_VEC<s_SolvedNode>& args = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items;
    const bool isNative = (target.kind == "__native"_fu);
    const bool isCpyMovAssign = ((args.size() == 2) && isNative && (target.name == "="_fu));
    const int MUSTSEQ_mask = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).helpers.index;
    int ooe_crosscheck = 0;
    fu_STR ooe_header {};
    fu_VEC<fu_STR> item_src {};
    for (int i = 0; i < args.size(); i++)
    {
        const s_SolvedNode& arg = args[i];
        const s_SolvedNode& arg_1 = ((isCpyMovAssign && (i == 1) && (SolvedNodeData_jJduAOM6(arg, _current_nodes, _current_fnort, _here, ctx).kind == "copy"_fu)) ? only_YfDn7IVA(SolvedNodeData_jJduAOM6(arg, _current_nodes, _current_fnort, _here, ctx).items) : arg);
        bool junk = false;
        if (type_isZST_4X1iL0ll(SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).type))
        {
            junk = ((SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).kind == "empty"_fu) || (SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).kind == "definit"_fu) || (SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).kind == "fndef"_fu) || ((SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).kind == "call"_fu) && (GET_x3O7get6(SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).target, module, ctx).kind == "var"_fu)));
            if (!junk)
                fail_g0mqMv14((("Cannot discard ZST arg, kind is `"_fu + SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).kind) + "`."_fu), _here, ctx);

        };
        fu_STR _1 {};
        fu_STR src = (junk ? fu_STR{} : ((_1 = cgNode_rdhcxijm(arg_1, (x7E((("cgCall("_fu + SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value) + ").ARG("_fu), fu::i64dec(i)) + ")"_fu), (isNative ? M_ARG_TO_NATIVE : (*(const int*)fu::NIL)), ext.args[i].type, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef)) ? static_cast<fu_STR&&>(_1) : fail_g0mqMv14("Empty arg src."_fu, _here, ctx)));
        const int MUSTSEQ_bit = (1 << (i & 31));
        if (MUSTSEQ_mask & MUSTSEQ_bit)
        {
            if (junk)
                fail_g0mqMv14("Trying to MUSTSEQ a discarded argument, shouldnt happen."_fu, _here, ctx);

            ooe_crosscheck |= MUSTSEQ_bit;
            if (!isFieldChain_9ll5pofB(arg_1, _current_nodes, _current_fnort, _here, ctx, module))
            {
                if (ooe_header)
                    ooe_header += ", "_fu;
                else
                    ooe_header = "("_fu;

                bool ptrflip = false;
                fu_STR annot = typeAnnot_Qp954DVJ(SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
                fu_STR id = emitTEMPVAR_k1nONmeL(annot, ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn);
                ooe_header += id;
                ooe_header += " = "_fu;
                ooe_header += (ptrflip ? (("&("_fu + src) + ")"_fu) : fu_STR(src));
                src = (ptrflip ? ("*"_fu + id) : cgMove_PTYYRveC(SolvedNodeData_jJduAOM6(arg_1, _current_nodes, _current_fnort, _here, ctx).type, id, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
            };
        };
        item_src += fu_STR(src);
    };
    if (!(ooe_crosscheck == MUSTSEQ_mask))
        fail_g0mqMv14(((x7E((x7E("OOE crosscheck failed: codegen sequenced "_fu, fu::i64dec(ooe_crosscheck)) + ", but solver wants "_fu), fu::i64dec(MUSTSEQ_mask)) + ": "_fu) + join_IswWtOx1(map_FEDTyZou(args, _current_nodes, _current_fnort, _here, ctx), "|"_fu)), _here, ctx);

    if (isNative && (target.name[0] == '\n'))
    {
        /*MOV*/ fu_STR id = fu::slice(target.name, (NativeHacks_RHyKU5hm(target.name).name_start_idx + 1));
        const int idx = find_hCEGPwyG(id, '\n');
        if (idx > -1)
        {
            include_ozNJN3BA(fu::slice(id, 0, idx), _libs);
            id = fu::slice(id, (idx + 1));
        };
        if (id[0] == '.')
        {
            if (args.size() > 1)
                return emitMethodCall_6hdhjGr7(id, item_src, ooe_header);

            return emitPostfixOp_Wp6p3mYc(id, item_src, isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        };
        if (id[0] == '/')
            return ooeWrap_6VporGwO(emitBuiltin_yDYXvdcw(id, item_src, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn), ooe_header);

        if (args)
        {
            if (hasIdentifierChars_85KQkyE0(id))
                return emitFunctionCall_Hy6bSlfa(id, "("_fu, ")"_fu, item_src, ooe_header);

            return emitBinaryOp_68gsIY3d(id, args, _here, ctx, mode, ooe_header, item_src, isNative, node, _current_nodes, _current_fnort, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
        };
        return /*NRVO*/ id;
    };
    if (target.kind == "type"_fu)
    {
        if (!args)
            return cgDefault_f447OWii(target.type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

        if (!(isStruct_ZYIX8afu(target.type)))
            fail_g0mqMv14("cgCall: defctor/type not a struct."_fu, _here, ctx);

        return emitFunctionCall_Hy6bSlfa(typeAnnotBase_m31cPWMO(target.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn), " { "_fu, " }"_fu, item_src, ooe_header);
    };
    if (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target.modid && (target.kind == "fn"_fu))
        ensureFnUsable_HF669hTW(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _ffwd, _current_fn, _here, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    const fu_STR& id = (target.name ? target.name : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx));
    if ((args.size() <= 2))
    {
        if (target.kind == "var"_fu)
        {
            if (type_isZST_4X1iL0ll(target.type))
                return cgDefault_f447OWii(target.type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

            if (!isLocal_VRlaNfIi(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target))
            {
                if (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target.modid != module.modid)
                    cgForeignGlobal_syB4CovC(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, _ffwd, module, ctx, _here, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd_src, _idef, _indent, _hasMain, _fdef);

                return rootNS_YSKVgcx7(ID_YqscxHlw(id), _current_fn);
            };
            /*MOV*/ fu_STR id_1 = localID_OYeliFbo(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, bool{}, module, ctx, _current_fn);
            if (F_HOIST_asPtr_q500AJP6(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _current_nodes, _current_fnort, _here))
                return ("(*"_fu + id_1) + ")"_fu;

            return /*NRVO*/ id_1;
        };
        if (target.kind == "field"_fu)
            return (ARG_gRnBDiMl(0, item_src) + "."_fu) + ID_YqscxHlw(id);

        if (isOp_0LIypOXp(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx))
        {
            if (args.size() == 1)
                return ((target.flags & F_POSTFIX) ? emitPostfixOp_Wp6p3mYc(valid_operator_Q6MO8qV0(id), item_src, isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn) : emitPrefixOp_KVZcUJ5P(valid_operator_Q6MO8qV0(id), item_src, isNative, node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn));

            if (args.size() == 2)
            {
                if (id == "[]"_fu)
                {
                    if (mode & M_MOVE)
                    {
                        fu_STR _2 {};
                        return (_2 = (ARG_gRnBDiMl(0, item_src) + ".try_steal("_fu), (static_cast<fu_STR&&>(_2) + ARG_gRnBDiMl(1, item_src))) + ")"_fu;
                    };
                    fu_STR _3 {};
                    return (_3 = (ARG_gRnBDiMl(0, item_src) + "["_fu), (static_cast<fu_STR&&>(_3) + ARG_gRnBDiMl(1, item_src))) + "]"_fu;
                };
                return emitBinaryOp_68gsIY3d(valid_operator_Q6MO8qV0(id), args, _here, ctx, mode, ooe_header, item_src, isNative, node, _current_nodes, _current_fnort, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);
            };
        };
        if ((id == "STEAL"_fu) && (args.size() == 1))
            return cgMove_PTYYRveC(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, ARG_gRnBDiMl(0, item_src), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    };
    if (isNative)
        fail_g0mqMv14((("Unknown __native: `"_fu + id) + "`."_fu), _here, ctx);

    return emitFunctionCall_Hy6bSlfa(rootNS_YSKVgcx7(valid_identifier_RL982tKf(fu_STR(id)), _current_fn), "("_fu, ")"_fu, item_src, ooe_header);
}

                                #ifndef DEFt_has_hCEGPwyG
                                #define DEFt_has_hCEGPwyG
inline bool has_hCEGPwyG(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return true;

    };
    return false;
}
                                #endif

                                #ifndef DEFt_find_Q3Ydtd63
                                #define DEFt_find_Q3Ydtd63
inline int find_Q3Ydtd63(fu::view<char> a, const char b, int start)
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

static fu_STR cgLiteral_MMho0nlJ(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    /*MOV*/ fu_STR src { SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value };
    if (is_unsigned_CbRwLCm2(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type) && !has_hCEGPwyG(src, 'u'))
        src += 'u';

    if (is_floating_pt_CbRwLCm2(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type))
    {
        if (!has_hCEGPwyG(src, '.'))
            src += ".0"_fu;

        if (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon == "f32"_fu)
        {
            if (has_hCEGPwyG(src, 'x'))
                src = (("float("_fu + src) + ")"_fu);
            else
                src += "f"_fu;

        }
        else if (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon != "f64"_fu)
            fu_ASSERT();

    };
    if (starts_wtS8CFRs(src, "0o"_fu))
        src.splice(1, 1);

    if (src.size() > 16)
    {
        s_Intlit parse = Intlit_hdlyM3zq(src);
        if (parse.negative && (parse.absval == 0x8000000000000000ull))
            return "(-9223372036854775807-1)"_fu;

    };
    if (is_integral_CbRwLCm2(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type) && (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon != "u32"_fu) && (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon != "i32"_fu))
    {
        if ((SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon == "u64"_fu) || (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type.vtype.canon == "i64"_fu))
        {
            if (!has_hCEGPwyG(src, 'l'))
                return src + "ll"_fu;

        }
        else
            return ((typeAnnotBase_m31cPWMO(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + "("_fu) + src) + ")"_fu;

    };
    int idx {};
    while (((idx = find_Q3Ydtd63(src, '_', int(idx))) >= 0))
        src.splice(idx, 1);

    return /*NRVO*/ src;
}

static fu_STR escapeStringLiteral_5j7uPe0f(fu::view<char> str, const char quot)
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
            esc += ("\\"_fu + xHH_wsIuXlv1(unsigned(fu::u8(c))));
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

static fu_STR cgCharLiteral_TiKUfVRb(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    return escapeStringLiteral_5j7uPe0f(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value, '\'');
}

static fu_STR cgStringLiteral_fy61EElh(const s_SolvedNode& node, fu_VEC<fu_STR>& _libs, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here, const s_Context& ctx)
{
    annotateString_rZxUZlPs(_libs);
    /*MOV*/ fu_STR esc = escapeStringLiteral_5j7uPe0f(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value, '"');
    esc += "_fu"_fu;
    return /*NRVO*/ esc;
}

static fu_STR cgArrayLiteral_oTpRmMlG(const s_SolvedNode& node, const int mode, const s_Type& callarg, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    if (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target)
        return cgCall_OzIM8TVI(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    fu_VEC<fu_STR> items = cgNodes_EjavTiy7(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items, 0, (*(const fu_STR*)fu::NIL), "cgArrayLiteral"_fu, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    if (!items.size())
        return cgDefault_f447OWii(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    fu_STR curly = (("{ "_fu + join_IswWtOx1(items, ", "_fu)) + " }"_fu);
    fu_STR itemT = typeAnnotBase_m31cPWMO(clear_sliceable_4X1iL0ll(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, _here, ctx), 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
    fu_STR slate = ((((x7E("fu::slate<"_fu, fu::i64dec(items.size())) + ", "_fu) + itemT) + "> "_fu) + curly);
    if (is_ref_4X1iL0ll(callarg) && !TODO_FIX_isArray_4X1iL0ll(callarg))
    {
        include_ozNJN3BA("<fu/view.h>"_fu, _libs);
        return ("("_fu + slate) + ")"_fu;
    };
    return ((typeAnnotBase_m31cPWMO(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn) + " { "_fu) + slate) + " }"_fu;
}

static fu_STR cgDefinit_2gyw2yMD(const s_SolvedNode& node, const int mode, const s_Type& callarg, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    return cgArrayLiteral_oTpRmMlG(node, mode, callarg, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

static bool supportsNRVO_604FVQ4w(const s_Target& t, const s_Module& module, const s_Context& ctx, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, const s_TokenIdx& _here)
{
    return (GET_x3O7get6(t, module, ctx).kind == "var"_fu) && !(GET_x3O7get6(t, module, ctx).flags & F_ARG) && !is_ref_4X1iL0ll(SolvedNodeData_jJduAOM6(GET_x3O7get6(t, module, ctx).solved, _current_nodes, _current_fnort, _here, ctx).type);
}

static bool Lifetime_hasArgPositions_zPuXyaJm(const s_Lifetime& lifetime)
{
    for (int i = 0; i < lifetime.uni0n.size(); i++)
    {
        if (Region_isArgPosition_L0YJBnz6(lifetime.uni0n[i]))
            return true;

    };
    return false;
}

static fu_STR cgMoveOrClone_vWXEFxx1(fu::view<char> kind, const s_Type& type, fu::view<char> src, const s_Module& module, const s_Context& ctx, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, const s_cg_CurrentFn& _current_fn)
{
    if (kind == "move"_fu)
        return cgMove_PTYYRveC(type, src, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn);

    return cgClone_QA9X0tmD(type, src, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn);
}

static fu_STR cgMoveOrClone_RxSqybxq(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const s_SolvedNode& expr = only_YfDn7IVA(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items);
    if (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind == "move"_fu)
    {
        if (mode & M_RETURN)
        {
            const bool nrvo = ((SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind == "call"_fu) && (SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).items.size() == 0) && supportsNRVO_604FVQ4w(SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).target, module, ctx, _current_nodes, _current_fnort, _here));
            if (nrvo)
                return "/*NRVO*/ "_fu + cgNode_rdhcxijm(expr, "NRVO"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

        };
        if (!is_trivial_K61azC5I(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, module, ctx))
        {
            if (SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind == "call"_fu)
            {
                const s_Overload& o = GET_x3O7get6(SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).target, module, ctx);
                if ((o.kind == "__native"_fu) && (o.name == "[]"_fu))
                    return cgNode_rdhcxijm(expr, "cgMoveOperator[]"_fu, M_MOVE, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

                if (!is_mutref_4X1iL0ll(o.type, _here, ctx) && Lifetime_hasArgPositions_zPuXyaJm(o.type.lifetime))
                {
                    fu_STR _0 {};
                    fu_STR _1 {};
                    return (_1 = ((_0 = (("/* MOVE_FROM_CONST_REF */static_cast<"_fu + typeAnnotBase_m31cPWMO(o.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn)) + "&&>(const_cast<"_fu), (static_cast<fu_STR&&>(_0) + typeAnnotBase_m31cPWMO(o.type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn))) + "&>("_fu), (static_cast<fu_STR&&>(_1) + cgNode_rdhcxijm(expr, "cgMoveFromConstRefHelper"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef))) + "))"_fu;
                };
            };
        };
    };
    fu::view<char> _2 {};
    const s_Type* _3;
    fu_STR _4 {};
    return (_2 = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind, _3 = &(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type), _4 = cgNode_rdhcxijm(expr, "cgMoveOrClone"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef), cgMoveOrClone_vWXEFxx1(static_cast<fu::view<char>&&>(_2), *_3, static_cast<fu_STR&&>(_4), module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn));
}

static fu_STR blockWrapSubstatement_Cu6NZ5x4(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    return cgBlock_Tw6DXZm5(node, ((M_STMT | M_OPT_CURLIES) | mode), "blockWrapSubstatement"_fu, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

static fu_STR blockWrap_unlessIf_TuAf7YkM(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    return (((SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind == "if"_fu) || (SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind == "and"_fu)) ? (" "_fu + cgNode_rdhcxijm(node, "cgIf.blockWrap_unlessIf"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef)) : blockWrapSubstatement_Cu6NZ5x4(node, 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef));
}

static fu_STR cgIf_2usNYe5f(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const s_SolvedNode& n0 = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items[0];
    const s_SolvedNode& n1 = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items[1];
    const s_SolvedNode& n2 = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items[2];
    const bool stmt = !!(mode & M_STMT);
    fu_STR cond = (n0 ? cgNode_rdhcxijm(n0, "cgIf[cond]"_fu, (M_RETBOOL | (stmt ? M_PARENS : (*(const int*)fu::NIL))), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : fu_STR{});
    fu_STR cons = (n1 ? (stmt ? blockWrapSubstatement_Cu6NZ5x4(n1, 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : cgNode_rdhcxijm(n1, "cgIf[cons]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef)) : fu_STR{});
    fu_STR alt = (n2 ? (stmt ? blockWrap_unlessIf_TuAf7YkM(n2, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : cgNode_rdhcxijm(n2, "cgIf[alt]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef)) : fu_STR{});
    if (stmt)
        return ((("if ("_fu + cond) + ")"_fu) + cons) + (alt ? ((_indent + "else"_fu) + alt) : fu_STR{});

    return ((((("("_fu + cond) + " ? "_fu) + cons) + " : "_fu) + alt) + ")"_fu;
}

static void cgAndOr_concat_jRoOURAS(fu_STR& src, fu::view<char> op, fu::view<s_SolvedNode> items, const bool parens, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const int mode = (M_RETBOOL | (parens && (items.size() == 1) ? M_PARENS : (*(const int*)fu::NIL)));
    for (int i = 0; i < items.size(); i++)
    {
        if (i)
            src += op;

        const s_SolvedNode& item = items[i];
        fu_STR term = cgNode_rdhcxijm(item, (x7E("cgAndOr_concat["_fu, fu::i64dec(i)) + "]"_fu), mode, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        if (is_void_4X1iL0ll(SolvedNodeData_jJduAOM6(item, _current_nodes, _current_fnort, _here, ctx).type))
            src += (("("_fu + term) + ", 0)"_fu);
        else
            src += term;

    };
}

                                #ifndef DEF_t_bool
                                #define DEF_t_bool
extern const s_Type t_bool;
                                #endif

static bool acceptsBool_Ez763JSb(const s_Type& type)
{
    return isAssignable_87LkAOV4(type, t_bool);
}

static fu_STR via_FWZu7igG(s_TEMPVAR& tv, const s_Type& type, fu::view<char> expr, fu_VEC<fu_STR>& _libs, const s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn)
{
    if (!tv.id)
    {
        fu_STR _0 {};
        tv.id = (_0 = fu_STR((tv.annot = typeAnnot_Qp954DVJ(type, 0, _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn))), emitTEMPVAR_k1nONmeL(static_cast<fu_STR&&>(_0), tv.ptrflip, (*(const fu_STR*)fu::NIL), (*(const fu_STR*)fu::NIL), _current_fn));
    };
    if (tv.ptrflip)
        return ((((("*("_fu + tv.id) + " = &("_fu) + expr) + ")) ? *"_fu) + tv.id) + " : "_fu;

    if (is_trivial_K61azC5I(type, module, ctx))
        return ((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? "_fu) + tv.id) + " : "_fu;

    return ((((((("("_fu + tv.id) + " = "_fu) + expr) + ") ? static_cast<"_fu) + tv.annot) + "&&>("_fu) + tv.id) + ") : "_fu;
}

static fu_STR via_JCgdMHjW(s_TEMPVAR& tv, const s_Type& type, const s_SolvedNode& expr, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    if (isFieldChain_9ll5pofB(expr, _current_nodes, _current_fnort, _here, ctx, module))
    {
        fu_STR trivial = cgNode_rdhcxijm(expr, "TEMPVAR[fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        return ((trivial + " ? "_fu) + trivial) + " : "_fu;
    };
    if ((SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind == "copy"_fu) || (SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind == "move"_fu))
    {
        fu::view<char> kind = SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind;
        const s_SolvedNode& expr_1 = only_YfDn7IVA(SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).items);
        if (isFieldChain_9ll5pofB(expr_1, _current_nodes, _current_fnort, _here, ctx, module))
        {
            fu_STR trivial = cgNode_rdhcxijm(expr_1, "TEMPVAR[copymov/fieldChain]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
            return ((trivial + " ? "_fu) + cgMoveOrClone_vWXEFxx1(kind, type, trivial, module, ctx, _libs, _here, _tfwd, _tfwd_src, _tdef, _current_fn)) + " : "_fu;
        };
    };
    fu_STR _0 {};
    return (_0 = cgNode_rdhcxijm(expr, "TEMPVAR[usual]"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef), via_FWZu7igG(tv, type, static_cast<fu_STR&&>(_0), _libs, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn));
}

static fu_STR cgOr_p24fumYJ(const s_SolvedNode& node, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const s_Type& type = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type;
    fu::view<s_SolvedNode> items = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items;
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if (!("_fu;
        cgAndOr_concat_jRoOURAS(src, " || "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        src += "))"_fu;
        src += blockWrapSubstatement_Cu6NZ5x4(items[(items.size() - 1)], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (acceptsBool_Ez763JSb(type))
        cgAndOr_concat_jRoOURAS(src, " || "_fu, items, true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    else
    {
        s_TEMPVAR tv {};
        for (int i = 0; i < (items.size() - 1); i++)
        {
            const s_SolvedNode* _0;
            const s_SolvedNode& item = (*(_0 = &(items[i])) ? *_0 : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx));
            s_SolvedNode tail { item };
            if (SolvedNodeData_jJduAOM6(item, _current_nodes, _current_fnort, _here, ctx).kind == "and"_fu)
            {
                fu::view<s_SolvedNode> items_1 = SolvedNodeData_jJduAOM6(item, _current_nodes, _current_fnort, _here, ctx).items;
                const s_SolvedNode* _1;
                tail = (*(_1 = &(items_1[(items_1.size() - 1)])) ? *_1 : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx));
                cgAndOr_concat_jRoOURAS(src, " && "_fu, fu::get_view(items_1, 0, (items_1.size() - 1)), bool{}, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
                src += " && "_fu;
            };
            src += via_JCgdMHjW(tv, type, tail, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        };
        const s_SolvedNode* _2;
        const s_SolvedNode& tail = (*(_2 = &(items[(items.size() - 1)])) ? *_2 : fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx));
        src += cgNode_rdhcxijm(tail, "cgOr"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd_YR66bWwf(fu::view<s_SolvedNode> items, const s_Type& type, const int mode, fu::view<char> debug, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const bool stmt = !!(mode & M_STMT);
    if (stmt)
    {
        /*MOV*/ fu_STR src = "if ("_fu;
        cgAndOr_concat_jRoOURAS(src, " && "_fu, fu::get_view(items, 0, (items.size() - 1)), true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        src += ")"_fu;
        src += blockWrapSubstatement_Cu6NZ5x4(items[(items.size() - 1)], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
        return /*NRVO*/ src;
    };
    /*MOV*/ fu_STR src = (!(mode & M_PARENS) ? "("_fu : fu_STR{});
    if (acceptsBool_Ez763JSb(type))
        cgAndOr_concat_jRoOURAS(src, " && "_fu, items, true, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    else
    {
        s_TEMPVAR tv {};
        if (is_mutref_4X1iL0ll(type, _here, ctx))
        {
            for (int i = 0; i < items.size(); i++)
            {
                const s_SolvedNode& item = items[i];
                if (i < (items.size() - 1))
                    src += ("!"_fu + via_JCgdMHjW(tv, type, item, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef));
                else
                    src += cgNode_rdhcxijm(item, (x7E((debug + ".cgAnd[mutref "_fu), fu::i64dec(i)) + "]"_fu), 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

            };
        }
        else
        {
            const int N = items.size();
            const bool retSecondLast = is_never_4X1iL0ll(SolvedNodeData_jJduAOM6(items[(N - 1)], _current_nodes, _current_fnort, _here, ctx).type);
            const int condEnd = (retSecondLast ? (N - 2) : (N - 1));
            cgAndOr_concat_jRoOURAS(src, " && "_fu, fu::get_view(items, 0, condEnd), bool{}, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
            if (retSecondLast)
            {
                if (condEnd)
                    src += " && "_fu;

                src += ("!"_fu + via_JCgdMHjW(tv, type, items[(N - 2)], _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef));
                src += cgNode_rdhcxijm(items[(N - 1)], (debug + ".cgAnd[retSecondLast]"_fu), 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
            }
            else
            {
                src += (" ? "_fu + cgNode_rdhcxijm(items[(N - 1)], (debug + ".cgAnd[usual]"_fu), 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef));
                src += (" : "_fu + cgDefault_f447OWii(type, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn));
            };
        };
    };
    if (!(mode & M_PARENS))
        src += ")"_fu;

    return /*NRVO*/ src;
}

static fu_STR cgAnd_CiRCy1mE(const s_SolvedNode& node, const int mode, fu::view<char> debug, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    return cgAnd_YR66bWwf(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items, SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).type, mode, debug, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

static fu_STR cgLetDef_8VqMqXX0(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    return cgLet_g2TJmPuy(GET_x3O7get6(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).target, module, ctx).solved, !_current_fn.target.index, bool{}, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

static fu_STR cgMain_BMxypTeb(const int _hasMain, fu_VEC<fu_STR>& _libs)
{
    if (!_hasMain)
        return fu_STR{};

    fu_STR zst {};
    if (_hasMain & MAIN_zst)
        zst = ", 0"_fu;

    if (!(_hasMain & MAIN_argv))
        return ("\n\nint main() { return fu_MAIN()"_fu + zst) + "; }\n"_fu;

    annotateString_rZxUZlPs(_libs);
    return (((((((((("\n\nint main(int argc, char* argv[])"_fu + "\n{"_fu) + "\n    fu_VEC<fu_STR> args;"_fu) + "\n    args.reserve(argc);"_fu) + "\n"_fu) + "\n    for (int i = 0; i < argc; i++)"_fu) + "\n        args.push(fu_TO_STR(argv[i]));"_fu) + "\n"_fu) + "\n    return fu_MAIN(static_cast<fu_VEC<fu_STR>&&>(args))"_fu) + zst) + ";"_fu) + "\n}\n"_fu;
}

static fu_STR collectDedupes_gQRotEiv(fu_VEC<fu_STR>&& values, fu::view<char> prefix, fu::view<char> suffix)
{
    if (!values.size())
        return fu_STR{};

    /*MOV*/ fu_STR out = "\n"_fu;
    fu::sort(values);
    for (int i = 0; i < values.size(); i++)
        out += ((prefix + values[i]) + suffix);

    return /*NRVO*/ out;
}

static fu_STR collectDedupes_Z9TS5NBk(fu_VEC<fu_STR>&& values)
{
    if (!values.size())
        return fu_STR{};

    /*MOV*/ fu_STR out = "\n"_fu;
    fu::sort(values);
    for (int i = 0; i < values.size(); i++)
        out += values[i];

    return /*NRVO*/ out;
}

static fu_STR cgRoot_Daw0Sqbf(const s_SolvedNode& root, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    int count {};
    fu_STR src = cgStatements_NLVqZd95(SolvedNodeData_jJduAOM6(root, _current_nodes, _current_fnort, _here, ctx).items, count, (*(const fu_STR*)fu::NIL), _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    fu_STR main = cgMain_BMxypTeb(_hasMain, _libs);
    fu_STR header = ((((collectDedupes_gQRotEiv(fu_VEC<fu_STR>(_libs), "#include "_fu, "\n"_fu) + collectDedupes_Z9TS5NBk(fu_VEC<fu_STR>(_tfwd_src))) + collectDedupes_Z9TS5NBk(fu_VEC<fu_STR>(_ffwd_src))) + _tdef) + (_fdef ? (("\n#ifndef FU_NO_FDEFs\n"_fu + _fdef) + "\n#endif\n"_fu) : fu_STR{}));
    return (header + src) + main;
}

static fu_STR cgFnDef_TLa1tfnA(const s_SolvedNode& fndef, const int mode, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, s_BitSet& _idef, fu_STR& _indent, s_cg_CurrentFn& _current_fn, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, int& _hasMain, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, fu_STR& _fdef)
{
    const s_Target& target = SolvedNodeData_jJduAOM6(fndef, _current_nodes, _current_fnort, _here, ctx).target;
    fu::view<s_SolvedNodeData> _current_nodes_1 = EXT_UPg8LnZ5(target, module, ctx).nodes;
    const s_Target& _current_fnort_1 = target;
    const s_Overload& o = GET_x3O7get6(target, module, ctx);
    const s_SolvedNode& n = GET_x3O7get6(target, module, ctx).solved;
    if (n && isExtLinked_Frn9zIQz(o))
        ensureFnDef_brkMkIOD(target, module, ctx, _here, _idef, _current_nodes_1, _current_fnort_1, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _ffwd_src, _fdef);

    return cgEmpty_xRwG0KtX(n, mode, _current_nodes_1, _current_fnort_1, _here, ctx, module, _ffwd, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src, _idef, _indent, _hasMain, _fdef);
}

static const s_cg_Block& findBlock_2NKvbPWA(const s_cg_CurrentFn& _current_fn, const s_Helpers& helpers, const s_TokenIdx& _here, const s_Context& ctx)
{
    for (int i = _current_fn.blocks.size(); i-- > 0; )
    {
        const s_cg_Block& block = _current_fn.blocks[i];
        if (block.helpers == helpers)
            return block;

    };
    fail_g0mqMv14(x7E("No such block in scope: "_fu, fu::i64dec(helpers.index)), _here, ctx);
}

static bool hasNonIdentifierChars_1Osmox3T(fu::view<char> id)
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

static fu_STR cgJump_hJloXIvC(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    const s_Helpers& helpers = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).helpers;
    const bool use_return = (helpers == _current_fn.can_return);
    s_cg_Block block { (!use_return ? findBlock_2NKvbPWA(_current_fn, helpers, _here, ctx) : (*(const s_cg_Block*)fu::NIL)) };
    const s_SolvedNode& expr = only_YfDn7IVA(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items);
    if ((SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).kind != "empty"_fu) || !is_void_4X1iL0ll(SolvedNodeData_jJduAOM6(expr, _current_nodes, _current_fnort, _here, ctx).type))
    {
        if (!use_return)
        {
            fu_STR assign = (block.has_val ? (block.name + "_v = "_fu) : fu_STR{});
            fu_STR value = cgNode_rdhcxijm(expr, "cgJump[val.break]"_fu, (!assign ? M_STMT : (*(const int*)fu::NIL)), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
            if (block.ptrflip)
                value = (("&("_fu + value) + ")"_fu);

            if (!(assign || hasNonIdentifierChars_1Osmox3T(value)))
                value = (("/* TODO FIX UNUSED VAL "_fu + value) + " */"_fu);

            return (((("{ "_fu + assign) + value) + "; goto "_fu) + block.name) + "; }"_fu;
        };
        return "return "_fu + cgNode_rdhcxijm(expr, "cgJump[val.return]"_fu, (M_PARENS | M_RETURN), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
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

static fu_STR cgLoop_A61K101J(const s_SolvedNode& node, s_cg_CurrentFn& _current_fn, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
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
    fu::view<s_SolvedNode> items = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items;
    const s_SolvedNode& n_init = items[LOOP_INIT];
    const s_SolvedNode& n_cond = items[LOOP_COND];
    const s_SolvedNode& n_body = items[LOOP_BODY];
    const s_SolvedNode& n_pcnd = items[LOOP_POST_COND];
    const s_SolvedNode& n_post = items[LOOP_POST];
    fu_STR init = (n_init ? cgNode_rdhcxijm(n_init, "cgLoop[init]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : fu_STR{});
    fu_STR cond = (n_cond ? cgNode_rdhcxijm(n_cond, "cgLoop[cond]"_fu, (M_RETBOOL | M_PARENS), (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : fu_STR{});
    fu_STR pcnd = (n_pcnd ? cgNode_rdhcxijm(n_pcnd, "cgLoop[pcnd]"_fu, M_RETBOOL, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : fu_STR{});
    fu_STR post = (n_post ? cgNode_rdhcxijm(n_post, "cgLoop[post]"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : fu_STR{});
    fu_STR name = x7E("LL_"_fu, fu::i64dec(_current_fn.num_labels++));
    const s_Helpers& helpers = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).helpers;
    _current_fn.can_break = helpers;
    const int blocks0 = _current_fn.blocks.size();
    fu_DEFER(_current_fn.blocks.shrink(blocks0));
    _current_fn.blocks += s_cg_Block { fu_STR(name), s_Helpers(helpers), false, false };
    fu_STR body = (n_body ? blockWrapSubstatement_Cu6NZ5x4(n_body, M_LOOP_BODY, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef) : fu_STR{});
    const bool labelUsed = fu::has(body, (("goto "_fu + name) + ";"_fu));
    fu_STR breakLabel = (labelUsed ? ((" "_fu + name) + ":;"_fu) : fu_STR{});
    if (pcnd)
    {
        if (init || post || cond)
            fail_g0mqMv14("TODO extended loop."_fu, _here, ctx);

        return ((((("do"_fu + body) + _indent) + "while ("_fu) + pcnd) + ")"_fu) + breakLabel;
    };
    if (init || post || !cond)
        return ((((((("for ("_fu + init) + "; "_fu) + cond) + "; "_fu) + post) + ")"_fu) + body) + breakLabel;

    return ((("while ("_fu + cond) + ")"_fu) + body) + breakLabel;
}

static fu_STR cgTryCatch_yl3FbUFC(const s_SolvedNode& node, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, s_cg_CurrentFn& _current_fn, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    fu::view<s_SolvedNode> items = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items;
    fu_STR tRy = blockWrapSubstatement_Cu6NZ5x4(items[0], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    fu_STR err = localID_OYeliFbo(SolvedNodeData_jJduAOM6(items[1], _current_nodes, _current_fnort, _here, ctx).target, true, module, ctx, _current_fn);
    fu_STR cAtch = blockWrapSubstatement_Cu6NZ5x4(items[2], 0, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    return ((((((((((((((((_indent + "try"_fu) + _indent) + "{"_fu) + tRy) + _indent) + "}"_fu) + _indent) + "catch (const std::exception& o_0)"_fu) + _indent) + "{"_fu) + _indent) + "    fu_STR "_fu) + err) + " = fu_TO_STR(o_0.what());\n"_fu) + cAtch) + _indent) + "}\n"_fu;
}

static fu_STR cgDefer_IuQyh1DE(const s_SolvedNode& node, fu_VEC<fu_STR>& _libs, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    include_ozNJN3BA("<fu/defer.h>"_fu, _libs);
    fu_STR which = ((SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value == "err"_fu) ? "fu_DEFER_IF_ERR"_fu : ((SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).value == "ok"_fu) ? "fu_DEFER_IF_OK"_fu : "fu_DEFER"_fu));
    return ((which + "("_fu) + cgNode_rdhcxijm(only_YfDn7IVA(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items), "defer"_fu, M_STMT, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef)) + ")"_fu;
}

static fu_STR cgNode_rdhcxijm(const s_SolvedNode& node, fu::view<char> debug, const int mode, const s_Type& callarg, fu::view<s_SolvedNodeData> _current_nodes, const s_Target& _current_fnort, s_TokenIdx& _here, const s_Context& ctx, const s_Module& module, fu_VEC<fu_STR>& _libs, fu_VEC<s_BitSet>& _tfwd, fu_VEC<fu_STR>& _tfwd_src, fu_STR& _tdef, s_cg_CurrentFn& _current_fn, fu_VEC<s_BitSet>& _ffwd, fu_VEC<fu_STR>& _ffwd_src, s_BitSet& _idef, fu_STR& _indent, int& _hasMain, fu_STR& _fdef)
{
    fu::view<char> _0 {};
    fu::view<char> k = ((_0 = SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).kind) ? static_cast<fu::view<char>&&>(_0) : fail_g0mqMv14(("cgNode: No node.kind: "_fu + debug), _here, ctx));
    HERE_fVfHq6aR(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).token, _here);
    if (k == "call"_fu)
        return cgCall_OzIM8TVI(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "int"_fu)
        return cgLiteral_MMho0nlJ(node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "real"_fu)
        return cgLiteral_MMho0nlJ(node, _current_nodes, _current_fnort, _here, ctx, _libs, module, _tfwd, _tfwd_src, _tdef, _current_fn);

    if (k == "char"_fu)
        return cgCharLiteral_TiKUfVRb(node, _current_nodes, _current_fnort, _here, ctx);

    if (k == "str"_fu)
        return cgStringLiteral_fy61EElh(node, _libs, _current_nodes, _current_fnort, _here, ctx);

    if (k == "arrlit"_fu)
        return cgArrayLiteral_oTpRmMlG(node, mode, callarg, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "definit"_fu)
        return cgDefinit_2gyw2yMD(node, mode, callarg, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "copy"_fu)
        return cgMoveOrClone_RxSqybxq(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "move"_fu)
        return cgMoveOrClone_RxSqybxq(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "if"_fu)
        return cgIf_2usNYe5f(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "or"_fu)
        return cgOr_p24fumYJ(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "and"_fu)
        return cgAnd_CiRCy1mE(node, mode, debug, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "letdef"_fu)
        return cgLetDef_8VqMqXX0(node, _current_nodes, _current_fnort, _here, ctx, module, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "root"_fu)
        return cgRoot_Daw0Sqbf(node, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "block"_fu)
        return cgBlock_Tw6DXZm5(node, mode, "block"_fu, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "argid"_fu)
        return cgComma_16yi8aht(SolvedNodeData_jJduAOM6(node, _current_nodes, _current_fnort, _here, ctx).items, "argid"_fu, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "fndef"_fu)
        return cgFnDef_TLa1tfnA(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _idef, _indent, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _hasMain, _ffwd, _ffwd_src, _fdef);

    if (k == "empty"_fu)
        return cgEmpty_xRwG0KtX(node, mode, _current_nodes, _current_fnort, _here, ctx, module, _ffwd, _current_fn, _libs, _tfwd, _tfwd_src, _tdef, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (!(mode & M_STMT))
        return cgBlock_Tw6DXZm5(node, mode, (k + "!M_STMT"_fu), _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "jump"_fu)
        return cgJump_hJloXIvC(node, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "loop"_fu)
        return cgLoop_A61K101J(node, _current_fn, _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "try"_fu)
        return cgTryCatch_yl3FbUFC(node, _current_nodes, _current_fnort, _here, ctx, _current_fn, module, _libs, _tfwd, _tfwd_src, _tdef, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    if (k == "defer"_fu)
        return cgDefer_IuQyh1DE(node, _libs, _current_nodes, _current_fnort, _here, ctx, module, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);

    fail_g0mqMv14(("TODO: "_fu + k), _here, ctx);
}

s_CodegenOutput cpp_codegen_2xq2c97A(const s_Module& module, const s_Context& ctx)
{
    fu_VEC<fu_STR> _libs {};
    fu_VEC<s_BitSet> _tfwd {};
    fu_VEC<fu_STR> _tfwd_src {};
    fu_VEC<s_BitSet> _ffwd {};
    fu_VEC<fu_STR> _ffwd_src {};
    s_BitSet _idef {};
    fu_STR _tdef {};
    fu_STR _fdef {};
    fu_STR _indent = "\n"_fu;
    int _hasMain {};
    s_TokenIdx _here {};
    s_cg_CurrentFn _current_fn {};
    fu::view<s_SolvedNodeData> _current_nodes = EXT_UPg8LnZ5(s_Target { int(module.modid), 0 }, module, ctx).nodes;
    const s_Target _current_fnort = s_Target { int(module.modid), 0 };
    const s_SolvedNode& root = module.out.solve.root;
    if (!(SolvedNodeData_jJduAOM6(root, _current_nodes, _current_fnort, _here, ctx).kind == "root"_fu))
        fail_g0mqMv14((*(const fu_STR*)fu::NIL), _here, ctx);

    fu_STR src = cgNode_rdhcxijm(root, "cgRoot"_fu, 0, (*(const s_Type*)fu::NIL), _current_nodes, _current_fnort, _here, ctx, module, _libs, _tfwd, _tfwd_src, _tdef, _current_fn, _ffwd, _ffwd_src, _idef, _indent, _hasMain, _fdef);
    return s_CodegenOutput { fu_STR(src) };
}

#endif
