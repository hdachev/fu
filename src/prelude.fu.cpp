#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>
#include <fu/default.h>
#include <fu/init_priority.h>

struct s_Context;
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
struct s_CodegenOutput;
struct s_ModuleStats;
struct s_ModuleStat;
struct s_Map_gb6sFwC7;
struct s_Options;
struct s_Lint;
s_Module& getModule_Itjm8oks(const fu_STR&, s_Context&);
s_LexerOutput lex_uzLKWC6R(const fu_STR&, fu::view<char>);
s_ParserOutput parse_J0V9lDrD(int, const fu_STR&, const fu_STR&, fu::view<s_Token>, const s_Options&);
void setModule_IgtJxUnL(const s_Module&, s_Context&);
s_SolverOutput solve_j5ptKWox(const s_Context&, s_Module&, const s_Options&);

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
    int break_notes;
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

static const fu_STR prelude_src fu_INIT_PRIORITY(1005) = "\n\n\n// Arithmetics.\n\nfn +(a: $T) case ($T.is::arithmetic): $T __native;\nfn -(a: $T) case ($T.is::arithmetic): $T __native;\n\nfn +(a: $T, b: $T) case ($T.is::arithmetic): $T __native;\nfn -(a: $T, b: $T) case ($T.is::arithmetic): $T __native;\nfn *(a: $T, b: $T) case ($T.is::arithmetic): $T __native;\nfn /(a: $T, b: $T) case ($T.is::arithmetic): $T __native;\n\nfn %(a: $T, b: $T)\n    case ($T.is::integral): $T __native;\n    case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::fmod\");\n\nfn ++(ref a: $T) case ($T.is::arithmetic): &mut $T __native;\nfn --(ref a: $T) case ($T.is::arithmetic): &mut $T __native;\npostfix fn ++(ref a: $T) case ($T.is::arithmetic): $T __native;\npostfix fn --(ref a: $T) case ($T.is::arithmetic): $T __native;\n\nfn +=(ref a: $T, b: $T) case ($T.is::arithmetic): &mut $T __native;\nfn -=(ref a: $T, b: $T) case ($T.is::arithmetic): &mut $T __native;\nfn *=(ref a: $T, b: $T) case ($T.is::arithmetic): &mut $T __native;\nfn /=(ref a: $T, b: $T) case ($T.is::arithmetic): &mut $T __native;\n\nfn ==(a: $T, b: $T) case ($T.is::primitive): bool __native;\nfn !=(a: $T, b: $T) case ($T.is::primitive): bool __native;\n\nfn > (a: $T, b: $T) case ($T.is::primitive): bool __native;\nfn < (a: $T, b: $T) case ($T.is::primitive): bool __native;\nfn >=(a: $T, b: $T) case ($T.is::primitive): bool __native;\nfn <=(a: $T, b: $T) case ($T.is::primitive): bool __native;\n\n\n// Bitwise.\n\nfn ~(a: $T)        case ($T.is::bitfield): $T __native;\nfn &(a: $T, b: $T) case ($T.is::bitfield): $T __native;\nfn |(a: $T, b: $T) case ($T.is::bitfield): $T __native;\nfn ^(a: $T, b: $T) case ($T.is::bitfield): $T __native;\n\nfn &=(ref a: $T, b: $T) case ($T.is::bitfield): &mut $T __native;\nfn |=(ref a: $T, b: $T) case ($T.is::bitfield): &mut $T __native;\nfn ^=(ref a: $T, b: $T) case ($T.is::bitfield): &mut $T __native;\n\nfn <<(a: $T, b: $T) case ($T.is::integral): $T __native;\nfn >>(a: $T, b: $T) case ($T.is::integral): $T __native;\n\nfn <<=(ref a: $T, b: $T) case ($T.is::integral): &mut $T __native;\nfn >>=(ref a: $T, b: $T) case ($T.is::integral): &mut $T __native;\n\n\n// Numeric conversions.\n\nfn  i8(v: $T) case ($T.is::primitive):  i8 __native(\"/prim/convert\");\nfn i16(v: $T) case ($T.is::primitive): i16 __native(\"/prim/convert\");\nfn i32(v: $T) case ($T.is::primitive): i32 __native(\"/prim/convert\");\nfn i64(v: $T) case ($T.is::primitive): i64 __native(\"/prim/convert\");\n\nfn  u8(v: $T) case ($T.is::primitive):  u8 __native(\"/prim/convert\");\nfn u16(v: $T) case ($T.is::primitive): u16 __native(\"/prim/convert\");\nfn u32(v: $T) case ($T.is::primitive): u32 __native(\"/prim/convert\");\nfn u64(v: $T) case ($T.is::primitive): u64 __native(\"/prim/convert\");\n\nfn f32(v: $T) case ($T.is::primitive): f32 __native(\"/prim/convert\");\nfn f64(v: $T) case ($T.is::primitive): f64 __native(\"/prim/convert\");\n\nfn byte(v: $T) case ($T.is::primitive): byte __native(\"/prim/convert\");\n\n\n// Math.\n\nfn abs(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::abs\");\n\nfn max(a: $T, b: $T)\n    case ($T.is::floating_point) a >= b || b != b ? a : b;\n    case ($T.is::arithmetic)     a >= b           ? a : b;\n\nfn min(a: $T, b: $T)\n    case ($T.is::floating_point) a <= b || b != b ? a : b;\n    case ($T.is::arithmetic)     a <= b           ? a : b;\n\nfn exp  (a: $T, b: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::exp\");\nfn exp2 (a: $T, b: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::exp2\");\nfn log  (a: $T, b: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::log\");\nfn log10(a: $T, b: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::log10\");\nfn log2 (a: $T, b: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::log2\");\n\nfn pow  (a: $T, b: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::pow\");\nfn sqrt (v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt (v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil (v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::ceil\");\nfn floor(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::floor\");\nfn trunc(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::trunc\");\nfn round(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::round\");\n\nfn sin(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::sin\");\nfn cos(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::cos\");\nfn tan(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::tan\");\n\nfn asin(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::asin\");\nfn acos(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::acos\");\nfn atan(v: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2(y: $T, x: $T) case ($T.is::floating_point): $T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI():  f64 __native(\"<math.h>\", \"M_PI\");\nfn E():   f64 __native(\"<math.h>\", \"M_E\");\nfn INF(): f64 __native(\"<math.h>\", \"INFINITY\");\nfn NAN(): f64 __native(\"<math.h>\", \"NAN\");\n\nfn nan(v: $T) case ($T.is::floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf(v: $T) case ($T.is::floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite(v: $T) case ($T.is::floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Int helpers.\n\ntype  int   = i32; // These may become separate types\ntype uint   = u32; //  with a user-selectable size.\n\nfn MIN(_: $T)\n    case ($T -> i8 )        -128;\n    case ($T -> i16)        -32768;\n    case ($T -> i32)        -2147483648;\n    case ($T -> i64)        -9223372036854775808;\n    case ($T.is::unsigned)  $T(0);\n\nfn MAX(_: $T)\n    case ($T -> i8 )        127;\n    case ($T -> i16)        32767;\n    case ($T -> i32)        2147483647;\n    case ($T -> i64)        9223372036854775807;\n    case ($T.is::unsigned)  $T(-1);\n\n\n// Logic.\n\nfn !(v: $T): bool __native;\n\n\n// Assignment.\n\nfn   =(ref a: $T,    mut b: $T): &mut $T __native;\nfn ||=(ref a: $T, inline b: $T): &mut $T = a || (a = b);\nfn &&=(ref a: $T, inline b: $T): &mut $T = a && (a = b);\n\nfn swap(ref a: $T, ref b: $T): void __native(\n    \"hacks/soft_risk\",\n    \"<utility>\", \"std::swap\");\n\n\n\n// Arrays.\n//\n// TODO mutval .=,\n//  just like the assignments and splice.\n\nnovec fn len (a: [$T;]): int __native(\".size()\");\n\nnovec fn [](a: [$T;], i: int)\n    case ($a -> &mut [$T;]): &mut $T __native(\".mutref\");\n    default                : &    $T __native;\n\nnovec fn [](a: [$T;], start: int, end: int)\n    case ($a -> &mut [$T;]): &mut [$T;] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default                : &    [$T;] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push(ref a: $T[], mut b: $T): void __native(\".push\");\nfn unshift(ref a: $T[], mut b: $T): void __native(\".unshift\");\nfn  insert(ref a: $T[], i: int, mut b: $T): void __native(\".insert\");\n\nfn  slice(a: $T[], start: int, end: int): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn  slice(a: $T[], start: int): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn substr(a: $T[], start: int, end: int): $T[] __native(\"<fu/vec/slice.h>\", \"fu::substr\");\n\nfn splice(ref a: $T[], start: int, count: int): void  __native(\".splice\");\nfn splice(ref a: $T[], start: int, count: int, mut b: $T[]): void  __native(\".splice\");\n\nfn    pop(ref a: $T[]): void __native(\".pop()\");\nfn  shift(ref a: $T[]): void __native(\".shift()\");\n\nfn  clear(ref a: $T[]): void __native(\".clear()\");\nfn shrink(ref a: $T[], len: int): void __native(\".shrink\");\n\nfn resize(ref a: $T[], len: int): void __native(\".resize\");\nfn   grow(ref a: $T[], len: int): void __native(\".grow\");\n\nfn resize_junk(ref a: $T[], len: int): void __native(\".resize<false>\");\nfn   grow_junk(ref a: $T[], len: int): void __native(\".grow<false>\");\n\n\n// Sorts, via std::sort - fnptrs.\n\nfn sort(ref a: [$T;]): void\n{\n    pragma include(\"<algorithm>\");\n    pragma emit(\n    \"\n        auto* data = \"a\".data_mut();\n        std::sort(data, data + \"a\".size());\n    \");\n}\n\nfn sort(ref a: [$T;], less/*: fn(a: $T, b: $T): bool*/): void\n{\n    noflow fn sort()\n    {\n        mut l: $T;\n        mut r: $T;\n        pragma include(\"<algorithm>\");\n        pragma emit(\n        \"\n            (void) \"l\";\n            (void) \"r\";\n            auto* data = \"a\".data_mut();\n            std::sort(data, data + \"a\".size(), [&](auto& \"l\", auto& \"r\")\n            {\n        \");\n\n        mut lt: bool = less(l, r);\n        pragma emit(\n        \"\n                return \"lt\";\n            });\n        \");\n    }\n\n    sort();\n}\n\n\n// String likes.\n\nfn ==(a: [$T;], b: [$T;]) case ($T.is::primitive): bool __native(\"<fu/vec/cmp.h>\", \"==\");\nfn !=(a: [$T;], b: [$T;]) case ($T.is::primitive): bool __native(\"<fu/vec/cmp.h>\", \"!=\");\n\nfn find(a: [$T;], b: [$T;], start: int, end: int) case ($T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find(a: [$T;], b: [$T;], start: int)           case ($T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find(a: [$T;], b: [$T;])                       case ($T.is::primitive): int  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\n\nfn has (a: [$T;], b: [$T;]) case ($T.is::primitive): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Find char.\n\nfn starts(a: [$T;], with: $T): bool\n{\n    return a.len && a[0] == with;\n}\n\nfn ends(a: [$T;], with: $T): bool\n{\n    return a.len && a[a.len - 1] == with;\n}\n\nfn starts(a: [$T;], with: [$T;]): bool\n{\n    return a.len >= with.len\n        && a[0, with.len] == with;\n}\n\nfn ends(a: [$T;], with: [$T;]): bool\n{\n    return a.len >= with.len\n        && a[a.len - with.len, a.len] == with;\n}\n\nfn find(a: [$T;], b: $T, mut start: int): int\n{\n    start = start > 0 ? start : 0;\n    for (mut i = start; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn find(a: [$T;], b: $T): int\n{\n    for (mut i = 0; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn has(a: [$T;], b: $T): bool\n{\n    for (mut i = 0; i < a.len; i++)\n        if (a[i] == b)\n            return true;\n\n    return false;\n}\n\n\n// Strings.\n\ntype string = byte[];\n\nfn  >(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \">\");\nfn  <(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \"<\");\nfn >=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \">=\");\nfn <=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \"<=\");\n\n\n// D-style concats.\n\nfn ~(a: [$T;], b: [$T;]): $T[] __native(\"<fu/vec/concat.h>\",     \"+\");\nfn ~(a: [$T;], b:  $T  ): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\nfn ~(a:  $T  , b: [$T;]): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\nfn ~=(ref a: $T[],     b: [$T;]): &mut $T[] __native(\"<fu/vec/concat.h>\",     \"+=\");\nfn ~=(ref a: $T[], mut b:  $T  ): &mut $T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\n\n// Fun with views.\n\nfn view(a: [$T;], t: $U)\n    case ($a -> &mut [$T;] && $T.is::trivial && $U.is::trivial): &mut [$U] __native(\"<fu/view.h>\", \"fu::view_of_mut\");\n    case (                    $T.is::trivial && $U.is::trivial):      [$U] __native(\"<fu/view.h>\", \"fu::view_of\");\n\nfn   .=(ref a: [$T;], b: [$T;]) case ($T.is::copy): void __native(\"<fu/vec/view_assign.h>\", \"fu::view_assign\");\n\n// TODO not needed if swap(x, y) alias-ok's its two arguments:\nfn swap(ref a: [$T;], i: int, j: int): void __native(\"<fu/vec/view_swap.h>\", \"fu::view_swap\");\n\n\n// Assertions, bugs & fails.\n//  TODO i dont actually think we want to have nullary stuff in prelude,\n//   so TODO needs to take an arg, same with assert - perhaps a pass-through argument.\n\nfn throw(mut reason: string): never __native(\"<fu/never.h>\", \"fu::fail\");\nfn assert(): never __native(\"<fu/never.h>\", \"fu_ASSERT()\");\n\n\n// Stringifiables.\n\nfn ~ (    a: string, b.str) a ~ b;\nfn ~ (    a.str, b: string) a ~ b;\nfn ~=(ref a: string, b.str) a ~= b;\n\nfn str(n: $T)\n    case ($T.is::unsigned): string __native(\"<fu/decstr.h>\", \"fu::u64dec\");\n    case ($T.is::integral): string __native(\"<fu/decstr.h>\", \"fu::i64dec\");\n    case ($T -> bool):      string __native(\"<fu/decstr.h>\", \"fu::booldec\");\n    case ($T.is::floating_point): string __native(\"<fu/decstr.h>\", \"fu::f64dec\");\n    case ($T.is::enum)\n{\n    for (fieldname i: n)\n        if (n == \"i\")\n            return \"i\";\n\n    return n.i32.str; // TODO FIX use .integer or .arithmetic when we get these\n};\n\n\n// Printifiables = anything that implements print.\n\ninline fn print(x: string): string = x;\ninline fn print(x.str)    : string = x;\n\nfn println(parts.print[]: [string]): void __native(\"<fu/print.h>\", \"fu::println\");\n\n\n// String commons.\n\nfn join(a: $T[][], lax sep?: $T or [$T;] or [])\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    let N = sep -> [$T;] ? sep.len\n          : sep ->  $T   ? 1\n                         : 0;\n\n    mut size = a[0].len;\n    for (mut i = 1; i < a.len; i++)\n        size += N + a[i].len;\n\n    mut res: $T[];\n    res.grow_junk(size);\n\n    let head = a[0];\n    size = head.len;\n    res[0, head.len] .= head;\n    for (mut i = 1; i < a.len; i++)\n    {\n        let range = a[i];\n        if (sep -> [$T;])\n            res[size, size + N] .= sep;\n        else if (sep -> $T)\n            res[size] = sep;\n\n        size += N;\n        res[size, size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn split(str: $T[], sep: $T or [$T;], each)\n{\n    mut last = 0;\n    mut next = 0;\n\n    let N = sep -> [$T;] ? sep.len : 1;\n    if (N) while ((next = str.find(sep, start: last)) >= 0)\n    {\n        each(str.slice(last, next), first?: !last, last?: false);\n        last = next + N;\n    }\n\n    if (last)\n        each(str.slice(last), first?: false, last?: true);\n    else\n        each(str, first?: true, last?: true);\n}\n\nfn split(str: $T[], sep: $T or [$T;])\n{\n    mut result: $T[][];\n    split(str, :sep, |substr| result ~= substr);\n    return result;\n}\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn replace(str: $T[], all: $T or [$T;], with: $T or [$T;] or [])\n{\n    mut result: $T[];\n    split(str, sep: all, |substr, first, last|\n    {\n        if (!first)\n            with -> [] ? with() : result ~= with;\n        else if (last)\n            return str;\n\n        result ~= substr;\n    });\n\n    return result;\n}\n\n\n//\n\nfn <>(a: $T, b: $T)\ncase ($T.is::primitive) = a < b ? -1 : a > b ? +1 : 0;\ncase ($T -> [$U]) {\n    mut cmp = a.len <> b.len;\n    for (mut i = 0; i < a.len && !cmp; i++)\n        cmp = a[i] <> b[i];\n\n    return cmp;\n}\ndefault {\n    // TODO this would be better if it went through each member doing the trivial work first -\n    //  only then going through them again and looking at e.g. array contents etc.\n    for (fieldname i: a) {\n        let cmp = a.i <> b.i;\n        if (cmp)\n            return cmp;\n    }\n\n    return 0;\n}\n\n\n"_fu;

                                #ifndef DEF_clone_uFTeeyF6
                                #define DEF_clone_uFTeeyF6
inline int clone_uFTeeyF6(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_ZCtM7908
                                #define DEF_clone_ZCtM7908
inline const fu_STR& clone_ZCtM7908(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_av5PxtCI
                                #define DEF_clone_av5PxtCI
inline const s_ModuleInputs& clone_av5PxtCI(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_krBIyjUl
                                #define DEF_clone_krBIyjUl
inline const fu_VEC<int>& clone_krBIyjUl(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_RKBsevnx
                                #define DEF_clone_RKBsevnx
inline const fu_VEC<s_Struct>& clone_RKBsevnx(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_qVCYkPgh
                                #define DEF_clone_qVCYkPgh
inline const s_SolvedNode& clone_qVCYkPgh(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_bjZCjfhl
                                #define DEF_clone_bjZCjfhl
inline const fu_VEC<s_Overload>& clone_bjZCjfhl(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_fx1SDBUT
                                #define DEF_clone_fx1SDBUT
inline const fu_VEC<s_Extended>& clone_fx1SDBUT(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_vOYHP1IT
                                #define DEF_clone_vOYHP1IT
inline const fu_VEC<s_ScopeItem>& clone_vOYHP1IT(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_fnMFgrK3
                                #define DEF_clone_fnMFgrK3
inline const fu_VEC<s_Target>& clone_fnMFgrK3(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_VGha2dKA
                                #define DEF_clone_VGha2dKA
inline s_Scope clone_VGha2dKA(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.overloads = clone_bjZCjfhl(a.overloads);
        res.extended = clone_fx1SDBUT(a.extended);
        res.items = clone_vOYHP1IT(a.items);
        res.implicits = clone_vOYHP1IT(a.implicits);
        res.imports = clone_krBIyjUl(a.imports);
        res.privates = clone_krBIyjUl(a.privates);
        res.usings = clone_fnMFgrK3(a.usings);
        res.converts = clone_fnMFgrK3(a.converts);
        res.pub_items = clone_uFTeeyF6(a.pub_items);
        res.pub_cnvrts = clone_uFTeeyF6(a.pub_cnvrts);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_xQX8ydH9
                                #define DEF_clone_xQX8ydH9
inline s_SolverOutput clone_xQX8ydH9(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_qVCYkPgh(a.root);
        res.scope = clone_VGha2dKA(a.scope);
        res.notes = clone_uFTeeyF6(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_G6pqsUn1
                                #define DEF_clone_G6pqsUn1
inline const s_CodegenOutput& clone_G6pqsUn1(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_aK06JrSd
                                #define DEF_clone_aK06JrSd
inline s_ModuleOutputs clone_aK06JrSd(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_krBIyjUl(a.deps);
        res.types = clone_RKBsevnx(a.types);
        res.solve = clone_xQX8ydH9(a.solve);
        res.cpp = clone_G6pqsUn1(a.cpp);
        res.init_prio = clone_uFTeeyF6(a.init_prio);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEF_clone_plfOxjBD
                                #define DEF_clone_plfOxjBD
inline const s_ModuleStats& clone_plfOxjBD(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEF_clone_MVzrYodk
                                #define DEF_clone_MVzrYodk
inline s_Module clone_MVzrYodk(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_uFTeeyF6(a.modid);
        res.fname = clone_ZCtM7908(a.fname);
        res.in = clone_av5PxtCI(a.in);
        res.out = clone_aK06JrSd(a.out);
        res.stats = clone_plfOxjBD(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

s_Context solvePrelude_eRdBm7hX()
{
    /*MOV*/ s_Context ctx {};
    s_Module module = clone_MVzrYodk(getModule_Itjm8oks((*(const fu_STR*)fu::NIL), ctx));
    const s_Options options {};
    fu_STR fname = "__prelude"_fu;
    s_LexerOutput lex = lex_uzLKWC6R(prelude_src, fname);
    s_ParserOutput parse = parse_J0V9lDrD(0, fname, prelude_src, lex.tokens, options);
    module.in = s_ModuleInputs { fu_STR(prelude_src), s_LexerOutput(lex), s_ParserOutput(parse) };
    setModule_IgtJxUnL(module, ctx);
    module.out.solve = solve_j5ptKWox(ctx, module, options);
    setModule_IgtJxUnL(module, ctx);
    return /*NRVO*/ ctx;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
extern const s_Context CTX_PRELUDE fu_INIT_PRIORITY(1005) = solvePrelude_eRdBm7hX();
                                #endif

#endif
