
#include <fu/default.h>
#include <fu/int.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/view.h>

struct s_ArgWrite;
struct s_Argument;
struct s_BitSet;
struct s_CodegenOutput;
struct s_Context;
struct s_Extended;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Lint;
struct s_Map_OZkl;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStat;
struct s_ModuleStats;
struct s_Node;
struct s_Options;
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
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;

s_LexerOutput lex(const fu_STR&, const fu_STR&);
s_Module& getModule(const fu_STR&, s_Context&);
s_ParserOutput parse(int, const fu_STR&, fu::view<s_Token>, const s_Options&);
s_SolverOutput solve(const s_Options&, const s_Context&, s_Module&);
void setModule(const s_Module&, s_Context&);

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

#ifndef FU_NO_FDEFs

static const fu_STR prelude_src = "\n\n\n// Some lolcode.\n\nfn STEAL (ref a: $T): $T __native;\nfn SWAP  (ref a: $T, ref b: $T): void __native(\"<utility>\", \"std::swap\");\n\n\n// Arithmetics.\n\nfn +(a: $T) case ($T -> @arithmetic): $T __native;\nfn -(a: $T) case ($T -> @arithmetic): $T __native;\n\nfn +(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn -(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn *(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn /(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\n\nfn %(a: $T, b: $T)\n    case ($T -> @integral): $T __native;\n    case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::fmod\");\n\nfn ++(a: &mut $T) case ($T -> @arithmetic): &mut $T __native;\nfn --(a: &mut $T) case ($T -> @arithmetic): &mut $T __native;\npostfix fn ++(a: &mut $T) case ($T -> @arithmetic): $T __native;\npostfix fn --(a: &mut $T) case ($T -> @arithmetic): $T __native;\n\nfn +=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\nfn -=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\nfn *=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\nfn /=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\n\nfn ==(a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn !=(a: $T, b: $T) case ($T -> @primitive): bool __native;\n\nfn > (a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn < (a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn >=(a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn <=(a: $T, b: $T) case ($T -> @primitive): bool __native;\n\n\n// Bitwise.\n\nfn  ~(a: $T)        case ($T -> @integral): $T __native;\nfn  &(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn  |(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn  ^(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn <<(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn >>(a: $T, b: $T) case ($T -> @integral): $T __native;\n\nfn  &=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn  |=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn  ^=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn <<=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn >>=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\n\n\n// Numeric conversions.\n\nfn  i8(v: $T) case ($T -> @primitive):  i8 __native(\"/prim/convert\");\nfn i16(v: $T) case ($T -> @primitive): i16 __native(\"/prim/convert\");\nfn i32(v: $T) case ($T -> @primitive): i32 __native(\"/prim/convert\");\nfn i64(v: $T) case ($T -> @primitive): i64 __native(\"/prim/convert\");\n\nfn  u8(v: $T) case ($T -> @primitive):  u8 __native(\"/prim/convert\");\nfn u16(v: $T) case ($T -> @primitive): u16 __native(\"/prim/convert\");\nfn u32(v: $T) case ($T -> @primitive): u32 __native(\"/prim/convert\");\nfn u64(v: $T) case ($T -> @primitive): u64 __native(\"/prim/convert\");\n\nfn f32(v: $T) case ($T -> @primitive): f32 __native(\"/prim/convert\");\nfn f64(v: $T) case ($T -> @primitive): f64 __native(\"/prim/convert\");\n\nfn byte(v: $T) case ($T -> @primitive): byte __native(\"/prim/convert\");\n\n\n// Math.\n\nfn abs(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::abs\");\nfn max(a: $T, b: $T) case ($T -> @arithmetic): $T __native(\"<algorithm>\", \"std::max\");\nfn min(a: $T, b: $T) case ($T -> @arithmetic): $T __native(\"<algorithm>\", \"std::min\");\n\nfn exp  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::exp\");\nfn exp2 (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::exp2\");\nfn log  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log\");\nfn log10(a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log10\");\nfn log2 (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log2\");\n\nfn pow  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::pow\");\nfn sqrt (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::ceil\");\nfn floor(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::floor\");\nfn trunc(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::trunc\");\nfn round(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::round\");\n\nfn sin(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::sin\");\nfn cos(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::cos\");\nfn tan(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::tan\");\n\nfn asin(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::asin\");\nfn acos(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::acos\");\nfn atan(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2(y: $T, x: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI():  f64 __native(\"<math.h>\", \"M_PI\");\nfn E():   f64 __native(\"<math.h>\", \"M_E\");\nfn INF(): f64 __native(\"<math.h>\", \"INFINITY\");\nfn NAN(): f64 __native(\"<math.h>\", \"NAN\");\n\nfn nan(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Logic.\n\nfn !(v: $T): bool __native;\nfn true (): bool __native(\"true\");\nfn false(): bool __native(\"false\");\n\n\n// Assignment.\n\nfn   =(a: &mut $T, mut b: $T): &mut $T __native;\nfn ||=(a: &mut $T, mut b: $T): &mut $T __native;\n\n\n// Arrays.\n//\n// TODO mutval push/insert/unshift, just like the assignments above.\n// TODO trivial .=\n\nfn len (a: [$T]): i32 __native(\".size()\");\n\nfn [](a: [$T], i: i32)\n    case ($a -> &mut [$T]): &mut $T __native;\n    default               : &    $T __native;\n\nfn [](a: [$T], start: i32, end: i32)\n    case ($a -> &mut [$T]): &mut [$T] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    default               : &    [$T] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push(a: &mut $T[], b: $T): void __native(\".push\");\nfn unshift(a: &mut $T[], b: $T): void __native(\".unshift\");\nfn  insert(a: &mut $T[], i: i32, b: $T): void __native(\".insert\");\n\nfn  slice(a: $T[], start: i32, end: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn  slice(a: $T[], start: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn substr(a: $T[], start: i32, end: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::substr\");\n\nfn splice(a: &mut $T[], start: i32, count: i32): void  __native(\".splice\");\nfn splice(a: &mut $T[], start: i32, count: i32, b: [$T]): void  __native(\".splice\");\n\nfn    pop(a: &mut $T[]): void __native(\".pop()\");\nfn  shift(a: &mut $T[]): void __native(\".shift()\");\n\nfn  clear(a: &mut $T[]): void __native(\".clear()\");\nfn shrink(a: &mut $T[], len: i32): void __native(\".shrink\");\n\nfn resize(a: &mut $T[], len: i32): void __native(\".resize\");\nfn   grow(a: &mut $T[], len: i32): void __native(\".grow\");\n\nfn resize_junk(a: &mut $T[], len: i32): void __native(\".resize<false>\");\nfn   grow_junk(a: &mut $T[], len: i32): void __native(\".grow<false>\");\n\nfn sort(a: &mut $T[]): void __native(\"<fu/vec/sort.h>\", \"fu::sort\");\n\n\n// String likes.\n\nfn ==(a: [$T], b: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/cmp.h>\", \"==\");\nfn !=(a: [$T], b: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/cmp.h>\", \"!=\");\n\nfn starts(a: [$T], with: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::lmatch\");\nfn   ends(a: [$T], with: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::rmatch\");\n\nfn find(a: [$T], b: [$T], start: i32, end: i32) case ($T -> @primitive): i32  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find(a: [$T], b: [$T], start: i32)           case ($T -> @primitive): i32  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn find(a: [$T], b: [$T])                       case ($T -> @primitive): i32  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\n\nfn has (a: [$T], b: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Find char.\n\nfn starts(a: [$T], with: $T): bool\n{\n    return a.len && a[0] == with;\n}\n\nfn ends(a: [$T], with: $T): bool\n{\n    return a.len && a[a.len - 1] == with;\n}\n\nfn find(a: [$T], b: $T, mut start: i32): i32\n{\n    start = start > 0 ? start : 0;\n    for (mut i = start; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn find(a: [$T], b: $T): i32\n{\n    for (mut i = 0; i < a.len; i++) // TODO memchr\n        if (a[i] == b)\n            return i;\n\n    return -1;\n}\n\nfn has(a: [$T], b: $T): bool\n{\n    for (mut i = 0; i < a.len; i++)\n        if (a[i] == b)\n            return true;\n\n    return false;\n}\n\n\n// Strings.\n\ntype string = byte[];\n\nfn  >(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \">\");\nfn  <(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \"<\");\nfn >=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \">=\");\nfn <=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \"<=\");\n\n\n// D-style concats.\n\nfn ~(a: [$T], b: [$T]): $T[] __native(\"<fu/vec/concat.h>\",     \"+\");\nfn ~(a: [$T], b:  $T ): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\nfn ~(a:  $T , b: [$T]): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\nfn ~=(a: &mut $T[], b: [$T]): &mut $T[] __native(\"<fu/vec/concat.h>\",     \"+=\");\nfn ~=(a: &mut $T[], b:  $T ): &mut $T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\n\n// Fun with views.\n\nfn view(a: [$T], t: $U)\n    case ($a -> &mut [$T] && $T -> @trivial && $U -> @trivial): &mut [$U] __native(\"<fu/view.h>\", \"fu::view_of_mut\");\n    case (                   $T -> @trivial && $U -> @trivial):      [$U] __native(\"<fu/view.h>\", \"fu::view_of\");\n\nfn .=(a: &mut [$T], b: [$T]) case ($T -> @copy): void __native(\"<fu/vec/view_assign.h>\", \"fu::view_assign\");\n\n\n// Assertions, bugs & fails.\n//  TODO i dont actually think we want to have nullary stuff in prelude,\n//   so TODO needs to take an arg, same with assert - perhaps a pass-through argument.\n\nfn throw(reason: string): never __native(\"<fu/never.h>\", \"fu::fail\");\nfn assert(): never __native(\"<fu/never.h>\", \"fu_ASSERT()\");\n\n\n// Stringifiables.\n\nfn ~ (    a: string, b.str) a ~ b;\nfn ~ (    a.str, b: string) a ~ b;\nfn ~=(ref a: string, b.str) a ~= b;\n\nfn str(n: $T)\n    case ($T -> @unsigned): string __native(\"<fu/decstr.h>\", \"fu::u64dec\");\n    case ($T -> @integral): string __native(\"<fu/decstr.h>\", \"fu::i64dec\");\n    case ($T -> @floating_point): string __native(\"<fu/decstr.h>\", \"fu::f64dec\");\n\n\n// Printifiables = anything that implements print.\n\ninline fn print(x: string): string = x;\ninline fn print(x.str)    : string = x;\n\nfn println(parts.print[]: [string]): void __native(\"<fu/print.h>\", \"fu::println\");\n\n\n// String commons.\n\nfn join(a: $T[][])\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    mut size = 0;\n    for (mut i = 0; i < a.len; i++)\n        size += a[i].len;\n\n    mut res: $T[];\n    res.grow_junk(size);\n\n    size = 0;\n    for (mut i = 0; i < a.len; i++)\n    {\n        let range = a[i];\n        res[size, size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn join(a: $T[][], sep: $T)\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    mut size = a[0].len;\n    for (mut i = 1; i < a.len; i++)\n        size += 1 + a[i].len;\n\n    mut res: $T[];\n    res.grow_junk(size);\n\n    let head = a[0];\n    size = head.len;\n    res[0, head.len] .= head;\n    for (mut i = 1; i < a.len; i++)\n    {\n        let range = a[i];\n        res[size] = sep;\n        size += 1;\n        res[size, size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn join(a: $T[][], sep: $T[])\n{\n    if (a.len < 2)\n        return a.len && a[0];\n\n    mut size = a[0].len;\n    for (mut i = 1; i < a.len; i++)\n        size += sep.len + a[i].len;\n\n    mut res: $T[];\n    res.grow_junk(size);\n\n    let head = a[0];\n    size = head.len;\n    res[0, head.len] .= head;\n    for (mut i = 1; i < a.len; i++)\n    {\n        let range = a[i];\n        res[size, size + sep.len] .= sep;\n        size += sep.len;\n        res[size, size + range.len] .= range;\n        size += range.len;\n    }\n\n    return res;\n}\n\nfn split(str: $T[], sep: [$T], each)\n{\n    mut last = 0;\n    mut next = 0;\n\n    let N = sep.len;\n    if (N) while ((next = str.find(sep, start: last)) >= 0)\n    {\n        each(str.slice(last, next), first?: !last, last?: false);\n        last = next + N;\n    }\n\n    if (last)\n        each(str.slice(last), first?: false, last?: true);\n    else\n        each(str, first?: true, last?: true);\n}\n\nfn split(str: $T[], sep: $T)\n{\n    mut last = 0;\n    mut next = 0;\n\n    while ((next = str.find(sep, start: last)) >= 0)\n    {\n        each(str.slice(last, next), first?: !last, last?: false);\n        last = next + 1;\n    }\n\n    if (last)\n        each(str.slice(last), first?: false, last?: true);\n    else\n        each(str, first?: true, last?: true);\n}\n\nfn split(str: $T[], sep: [$T])\n{\n    mut result: $T[][];\n    split(str, sep, |substr| result ~= substr);\n    return result;\n}\n\nfn split(str: $T[], sep: $T)\n{\n    mut result: $T[][];\n    split(str, sep, |substr| result ~= substr);\n    return result;\n}\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn replace(str: $T[], all: [$T], with: [$T])\n{\n    mut result: $T[];\n    split(str, sep: all, |substr, first, last|\n    {\n        if (!first)\n            result ~= with;\n        else if (last)\n            return str;\n\n        result ~= substr;\n    });\n\n    return result;\n}\n\n\n"_fu;

                                #ifndef DEFt_clone_6Kad
                                #define DEFt_clone_6Kad
inline int clone_6Kad(const int a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_AwjY
                                #define DEFt_clone_AwjY
inline const fu_STR& clone_AwjY(const fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Ylnj
                                #define DEFt_clone_Ylnj
inline const s_ModuleInputs& clone_Ylnj(const s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_xQkU
                                #define DEFt_clone_xQkU
inline const fu_VEC<int>& clone_xQkU(const fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_O2WC
                                #define DEFt_clone_O2WC
inline const fu_VEC<s_Struct>& clone_O2WC(const fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_8Z6B
                                #define DEFt_clone_8Z6B
inline const s_SolvedNode& clone_8Z6B(const s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_sjQW
                                #define DEFt_clone_sjQW
inline const fu_VEC<s_ScopeItem>& clone_sjQW(const fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_TURz
                                #define DEFt_clone_TURz
inline const fu_VEC<s_Overload>& clone_TURz(const fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_no8B
                                #define DEFt_clone_no8B
inline const fu_VEC<s_Extended>& clone_no8B(const fu_VEC<s_Extended>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_ntxL
                                #define DEFt_clone_ntxL
inline const fu_VEC<s_Target>& clone_ntxL(const fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_0uIe
                                #define DEFt_clone_0uIe
inline s_Scope clone_0uIe(const s_Scope& a)
{
    /*MOV*/ s_Scope res {};

    {
        res.items = clone_sjQW(a.items);
        res.overloads = clone_TURz(a.overloads);
        res.extended = clone_no8B(a.extended);
        res.imports = clone_xQkU(a.imports);
        res.usings = clone_ntxL(a.usings);
        res.converts = clone_ntxL(a.converts);
        res.pub_count = clone_6Kad(a.pub_count);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_c2RA
                                #define DEFt_clone_c2RA
inline s_SolverOutput clone_c2RA(const s_SolverOutput& a)
{
    /*MOV*/ s_SolverOutput res {};

    {
        res.root = clone_8Z6B(a.root);
        res.scope = clone_0uIe(a.scope);
        res.notes = clone_6Kad(a.notes);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_wg6f
                                #define DEFt_clone_wg6f
inline const s_CodegenOutput& clone_wg6f(const s_CodegenOutput& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Bl4u
                                #define DEFt_clone_Bl4u
inline s_ModuleOutputs clone_Bl4u(const s_ModuleOutputs& a)
{
    /*MOV*/ s_ModuleOutputs res {};

    {
        res.deps = clone_xQkU(a.deps);
        res.types = clone_O2WC(a.types);
        res.solve = clone_c2RA(a.solve);
        res.cpp = clone_wg6f(a.cpp);
    };
    return /*NRVO*/ res;
}
                                #endif

                                #ifndef DEFt_clone_PHyv
                                #define DEFt_clone_PHyv
inline const s_ModuleStats& clone_PHyv(const s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_uibg
                                #define DEFt_clone_uibg
inline s_Module clone_uibg(const s_Module& a)
{
    /*MOV*/ s_Module res {};

    {
        res.modid = clone_6Kad(a.modid);
        res.fname = clone_AwjY(a.fname);
        res.in = clone_Ylnj(a.in);
        res.out = clone_Bl4u(a.out);
        res.stats = clone_PHyv(a.stats);
    };
    return /*NRVO*/ res;
}
                                #endif

s_Context solvePrelude()
{
    /*MOV*/ s_Context ctx {};
    s_Module module = clone_uibg(getModule((*(const fu_STR*)fu::NIL), ctx));
    const s_Options options {};
    fu_STR fname_1 = "__prelude"_fu;
    s_LexerOutput lexed = lex(prelude_src, fname_1);
    s_ParserOutput parsed = parse(0, fname_1, lexed.tokens, options);
    module.in = s_ModuleInputs { fu_STR(prelude_src), s_LexerOutput(lexed), s_ParserOutput(parsed) };
    setModule(module, ctx);
    module.out.solve = solve(options, ctx, module);
    setModule(module, ctx);
    return /*NRVO*/ ctx;
}

extern const s_Context CTX_PRELUDE = solvePrelude();

#endif
