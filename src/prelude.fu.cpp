#include <cstdint>
#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec.h>

struct s_Argument;
struct s_Context;
struct s_Effects;
struct s_LexerOutput;
struct s_Lifetime;
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
s_ParserOutput parse(int, const fu_STR&, const fu_VEC<s_Token>&);
s_SolverOutput solve(const s_Node&, const s_Context&, s_Module&);
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
    explicit operator bool() const noexcept
    {
        return false
            || root
            || fuzimports
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
    uint32_t packed;
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
    explicit operator bool() const noexcept
    {
        return false
            || name
            || target
            || items
            || imports
            || converts
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

                                #ifndef DEF_s_Effects
                                #define DEF_s_Effects
struct s_Effects
{
    int raw;
    explicit operator bool() const noexcept
    {
        return false
            || raw
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
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || vtype
            || lifetime
            || effects
        ;
    }
};
                                #endif

                                #ifndef DEF_s_SolvedNode
                                #define DEF_s_SolvedNode
struct s_SolvedNode
{
    fu_STR kind;
    int flags;
    fu_STR value;
    fu_VEC<s_SolvedNode> items;
    s_TokenIdx token;
    s_Type type;
    s_Target target;
    s_SolvedNode(const s_SolvedNode&) = default;
    s_SolvedNode(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(s_SolvedNode&&) = default;
    s_SolvedNode& operator=(const s_SolvedNode& selfrec) { return *this = s_SolvedNode(selfrec); }
    explicit operator bool() const noexcept
    {
        return false
            || kind
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

                                #ifndef DEF_s_Argument
                                #define DEF_s_Argument
struct s_Argument
{
    fu_STR name;
    s_Type type;
    s_SolvedNode dEfault;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || name
            || type
            || dEfault
            || flags
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

                                #ifndef DEF_s_Overload
                                #define DEF_s_Overload
struct s_Overload
{
    fu_STR kind;
    fu_STR name;
    s_Type type;
    int flags;
    int min;
    int max;
    fu_VEC<s_Argument> args;
    s_Template tEmplate;
    s_SolvedNode solved;
    fu_VEC<int> used_by;
    uint32_t status;
    int local_of;
    fu_VEC<int> closes_over;
    fu_VEC<s_ScopeItem> extra_items;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || flags
            || min
            || max
            || args
            || tEmplate
            || solved
            || used_by
            || status
            || local_of
            || closes_over
            || extra_items
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
    fu_VEC<int> imports;
    fu_VEC<s_Target> usings;
    fu_VEC<s_Target> converts;
    s_Scope(const s_Scope&) = delete;
    s_Scope(s_Scope&&) = default;
    s_Scope& operator=(const s_Scope&) = delete;
    s_Scope& operator=(s_Scope&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
            || imports
            || usings
            || converts
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
    fu_MAP<fu_STR, s_Target> specs;
    s_SolverOutput solve;
    fu_STR cpp;
    s_ModuleOutputs(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs(s_ModuleOutputs&&) = default;
    s_ModuleOutputs& operator=(const s_ModuleOutputs&) = delete;
    s_ModuleOutputs& operator=(s_ModuleOutputs&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || deps
            || types
            || specs
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

#ifndef FU_NO_FDEFs

static const fu_STR prelude_src = "\n\n\n// Some lolcode.\n\nfn STEAL (a: &mut $T): $T __native;\nfn CLONE (a: &    $T) case ($T -> @copy): $T __native;\nfn SWAP  (a: &mut $T, b: &mut $T): void __native(\"<utility>\", \"std::swap\");\n\nfn println(): void __native;\nfn println(a: $A): void __native;\nfn println(a: $A, b: $B): void __native;\nfn println(a: $A, b: $B, c: $C): void __native;\nfn println(a: $A, b: $B, c: $C, d: $D): void __native;\nfn println(a: $A, b: $B, c: $C, d: $D, e: $E): void __native;\nfn println(a: $A, b: $B, c: $C, d: $D, e: $E, f: $F): void __native;\n\n\n// Arithmetics.\n\nfn +(a: $T) case ($T -> @arithmetic): $T __native;\nfn -(a: $T) case ($T -> @arithmetic): $T __native;\n\nfn +(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn -(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn *(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn /(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\n\nfn %(a: $T, b: $T)\n    case ($T -> @integral): $T __native;\n    case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::fmod\");\n\nfn ++(a: &mut $T) case ($T -> @arithmetic): &mut $T __native;\nfn --(a: &mut $T) case ($T -> @arithmetic): &mut $T __native;\npostfix fn ++(a: &mut $T) case ($T -> @arithmetic): $T __native;\npostfix fn --(a: &mut $T) case ($T -> @arithmetic): $T __native;\n\nfn +=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\nfn -=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\nfn *=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\nfn /=(a: &mut $T, b: $T) case ($T -> @arithmetic): &mut $T __native;\n\nfn ==(a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn !=(a: $T, b: $T) case ($T -> @primitive): bool __native;\n\nfn > (a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn < (a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn >=(a: $T, b: $T) case ($T -> @primitive): bool __native;\nfn <=(a: $T, b: $T) case ($T -> @primitive): bool __native;\n\n\n// Bitwise.\n\nfn  ~(a: $T)        case ($T -> @integral): $T __native;\nfn  &(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn  |(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn  ^(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn <<(a: $T, b: $T) case ($T -> @integral): $T __native;\nfn >>(a: $T, b: $T) case ($T -> @integral): $T __native;\n\nfn  &=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn  |=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn  ^=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn <<=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\nfn >>=(a: &mut $T, b: $T) case ($T -> @integral): &mut $T __native;\n\n\n// Numeric conversions.\n\nfn  i8(v: $T) case ($T -> @primitive):  i8 __native(\"<cstdint>\",  \"int8_t\");\nfn i16(v: $T) case ($T -> @primitive): i16 __native(\"short\");\nfn i32(v: $T) case ($T -> @primitive): i32 __native(\"int\");\nfn i64(v: $T) case ($T -> @primitive): i64 __native(\"<cstdint>\", \"int64_t\");\n\nfn  u8(v: $T) case ($T -> @primitive):  u8 __native(\"<cstdint>\",  \"uint8_t\");\nfn u16(v: $T) case ($T -> @primitive): u16 __native(\"<cstdint>\", \"uint16_t\");\nfn u32(v: $T) case ($T -> @primitive): u32 __native(\"<cstdint>\", \"uint32_t\");\nfn u64(v: $T) case ($T -> @primitive): u64 __native(\"<cstdint>\", \"uint64_t\");\n\nfn f32(v: $T) case ($T -> @primitive): f32 __native(\"float\");\nfn f64(v: $T) case ($T -> @primitive): f64 __native(\"double\");\n\nfn byte(v: $T) case ($T -> @primitive): byte __native(\"<cstddef>\", \"std::byte\");\n\n\n// Math.\n\nfn abs(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::abs\");\nfn max(a: $T, b: $T) case ($T -> @arithmetic): $T __native(\"<algorithm>\", \"std::max\");\nfn min(a: $T, b: $T) case ($T -> @arithmetic): $T __native(\"<algorithm>\", \"std::min\");\n\nfn exp  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::exp\");\nfn exp2 (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::exp2\");\nfn log  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log\");\nfn log10(a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log10\");\nfn log2 (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log2\");\n\nfn pow  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::pow\");\nfn sqrt (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::ceil\");\nfn floor(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::floor\");\nfn trunc(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::trunc\");\nfn round(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::round\");\n\nfn sin(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::sin\");\nfn cos(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::cos\");\nfn tan(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::tan\");\n\nfn asin(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::asin\");\nfn acos(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::acos\");\nfn atan(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2(y: $T, x: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI():  f64 __native(\"<math.h>\", \"M_PI\");\nfn E():   f64 __native(\"<math.h>\", \"M_E\");\nfn INF(): f64 __native(\"<math.h>\", \"INFINITY\");\nfn NAN(): f64 __native(\"<math.h>\", \"NAN\");\n\nfn nan(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Logic.\n\nfn !(v: $T): bool __native;\nfn true (): bool __native(\"true\");\nfn false(): bool __native(\"false\");\n\n\n// Assignment.\n\nfn   =(a: &mut $T, mut b: $T): &mut $T __native;\nfn ||=(a: &mut $T, mut b: $T): &mut $T __native;\nfn &&=(a: &mut $T, mut b: $T): void __native;\n\n\n// Arrays.\n//\n// TODO mutval push/insert/unshift, just like the assignments above.\n// TODO trivial .=\n\nfn len (a: [$T]): i32 __native(\".size()\");\n\nfn [](a: [$T], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native;\n    case ($a -> &mut [$T]): &mut $T __native;\n    case ($a -> &    [$T]): &    $T __native;\n    case ($a ->      $T[]):      $T __native;\n\nfn [](a: [$T], start: i32, end: i32)\n    case ($a -> &mut $T[]): &mut [$T] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    case ($a -> &mut [$T]): &mut [$T] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    case ($a -> &    [$T]): &    [$T] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push(a: &mut $T[], b: $T): void __native(\".push\");\nfn unshift(a: &mut $T[], b: $T): void __native(\".unshift\");\nfn  insert(a: &mut $T[], i: i32, b: $T): void __native(\".insert\");\n\nfn  slice(a: $T[], start: i32, end: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn  slice(a: $T[], start: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn substr(a: $T[], start: i32, end: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::substr\");\n\nfn splice(a: &mut $T[], start: i32, count: i32): void  __native(\".splice\");\nfn splice(a: &mut $T[], start: i32, count: i32, b: [$T]): void  __native(\".splice\");\n\nfn    pop(a: &mut $T[]): void __native(\".pop()\");\nfn  shift(a: &mut $T[]): void __native(\".shift()\");\n\nfn  clear(a: &mut $T[]): void __native(\".clear()\");\nfn shrink(a: &mut $T[], len: i32): void __native(\".shrink\");\n\nfn resize(a: &mut $T[], len: i32): void __native(\".resize\");\nfn   grow(a: &mut $T[], len: i32): void __native(\".grow\");\n\nfn resize_junk(a: &mut $T[], len: i32): void __native(\".resize<false>\");\nfn   grow_junk(a: &mut $T[], len: i32): void __native(\".grow<false>\");\n\nfn sort(a: &mut $T[]): void __native(\"<fu/vec/sort.h>\", \"fu::sort\");\n\n\n// String likes.\n\nfn ==(a: [$T], b: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/cmp.h>\", \"==\");\nfn !=(a: [$T], b: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/cmp.h>\", \"!=\");\n\nfn starts(a: [$T], with: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::lmatch\");\nfn   ends(a: [$T], with: [$T]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::rmatch\");\nfn starts(a: [$T], with:   $T) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::lmatch\");\nfn   ends(a: [$T], with:   $T) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::rmatch\");\n\nfn find(a: [$T], b: [$T], start = 0) case ($T -> @primitive): i32  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn has (a: [$T], b: [$T])            case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Strings.\n\ntype string = byte[];\n\nfn  >(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \">\");\nfn  <(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \"<\");\nfn >=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \">=\");\nfn <=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \"<=\");\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn   split(str: string, sep: string): string[] __native(\"<fu/vec/split.h>\", \"fu::split\");\nfn    join(a: string[], sep: string): string __native(\"<fu/vec/join.h>\", \"fu::join\");\nfn replace(in: string, all: string, with: string): string __native(\"<fu/vec/replace.h>\", \"fu::replace\");\n\n\n// D-style concats.\n\nfn ~(a: [$T], b: [$T]): $T[] __native(\"<fu/vec/concat.h>\",     \"+\");\nfn ~(a: [$T], b:  $T ): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\nfn ~(a:  $T , b: [$T]): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\nfn ~=(a: &mut $T[], b: [$T]): &mut $T[] __native(\"<fu/vec/concat.h>\",     \"+=\");\nfn ~=(a: &mut $T[], b:  $T ): &mut $T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\nfn ~ (a: string, b: $T)      case ($T -> @arithmetic):      string __native(\"<fu/vec/concat_str.h>\", \"+\");\nfn ~ (a: $T, b: string)      case ($T -> @arithmetic):      string __native(\"<fu/vec/concat_str.h>\", \"+\");\nfn ~=(a: &mut string, b: $T) case ($T -> @arithmetic): &mut string __native(\"<fu/vec/concat_str.h>\", \"+=\");\n\n\n// Maps.\n\nfn [](a: &Map($K, $V), b: $K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native;\n    case ($a -> &    Map($K, $V)): &    $V __native;\n    case ($a ->      Map($K, $V)):      $V __native;\n\nfn keys  (a: &Map($K, $V)): &$K[] __native(\".m_keys\");\nfn values(a: &Map($K, $V)): &$V[] __native(\".m_values\");\nfn has   (a: Map($K, $V), b: $K): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Fun with views.\n\nfn view(a: [$T], t: $U)\n    case ($a -> &mut [$T] && $T -> @trivial && $U -> @trivial): &mut [$U] __native(\"<fu/view.h>\", \"fu::view_of_mut\");\n    case (                   $T -> @trivial && $U -> @trivial):      [$U] __native(\"<fu/view.h>\", \"fu::view_of\");\n\nfn .=(a: &mut [$T], b: [$T]) case ($T -> @copy): void __native(\"<fu/view.h>\", \"fu::view_assign\");\n\n\n// Assertions, bugs & fails.\n//  TODO i dont actually think we want to have nullary stuff in prelude,\n//   so TODO needs to take an arg, same with assert - perhaps a pass-through argument.\n\nfn throw(reason: string): never __native(\"<fu/never.h>\", \"fu::fail\");\nfn assert(): never __native(\"<fu/never.h>\", \"fu_ASSERT()\");\nfn TODO(): never __native(\"<fu/never.h>\", \"fu_TODO()\");\n\n\n// TODO FIX: these here mean to support arrays of strings.\n\nfn find(a: [$T], b: $T, start = 0): i32  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn has (a: [$T], b: $T):            bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n"_fu;

                                #ifndef DEFt_clone_cBw5
                                #define DEFt_clone_cBw5
inline int& clone_cBw5(int& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_jB4B
                                #define DEFt_clone_jB4B
inline fu_STR& clone_jB4B(fu_STR& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_udgC
                                #define DEFt_clone_udgC
inline s_ModuleInputs& clone_udgC(s_ModuleInputs& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_mrln
                                #define DEFt_clone_mrln
inline fu_VEC<int>& clone_mrln(fu_VEC<int>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_zQF6
                                #define DEFt_clone_zQF6
inline fu_VEC<s_Struct>& clone_zQF6(fu_VEC<s_Struct>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_tt3Q
                                #define DEFt_clone_tt3Q
inline fu_MAP<fu_STR, s_Target>& clone_tt3Q(fu_MAP<fu_STR, s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_R7Io
                                #define DEFt_clone_R7Io
inline s_SolvedNode& clone_R7Io(s_SolvedNode& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_j8Mo
                                #define DEFt_clone_j8Mo
inline fu_VEC<s_ScopeItem>& clone_j8Mo(fu_VEC<s_ScopeItem>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_Zi4U
                                #define DEFt_clone_Zi4U
inline fu_VEC<s_Overload>& clone_Zi4U(fu_VEC<s_Overload>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_pHkT
                                #define DEFt_clone_pHkT
inline fu_VEC<s_Target>& clone_pHkT(fu_VEC<s_Target>& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_5h8t
                                #define DEFt_clone_5h8t
inline s_Scope clone_5h8t(s_Scope& a)
{
    s_Scope res {};

    {
        res.items = clone_j8Mo(a.items);
        res.overloads = clone_Zi4U(a.overloads);
        res.imports = clone_mrln(a.imports);
        res.usings = clone_pHkT(a.usings);
        res.converts = clone_pHkT(a.converts);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_FES7
                                #define DEFt_clone_FES7
inline s_SolverOutput clone_FES7(s_SolverOutput& a)
{
    s_SolverOutput res {};

    {
        res.root = clone_R7Io(a.root);
        res.scope = clone_5h8t(a.scope);
        res.notes = clone_cBw5(a.notes);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_JkQQ
                                #define DEFt_clone_JkQQ
inline s_ModuleOutputs clone_JkQQ(s_ModuleOutputs& a)
{
    s_ModuleOutputs res {};

    {
        res.deps = clone_mrln(a.deps);
        res.types = clone_zQF6(a.types);
        res.specs = clone_tt3Q(a.specs);
        res.solve = clone_FES7(a.solve);
        res.cpp = clone_jB4B(a.cpp);
    };
    return res;
}
                                #endif

                                #ifndef DEFt_clone_krr2
                                #define DEFt_clone_krr2
inline s_ModuleStats& clone_krr2(s_ModuleStats& a)
{
    return a;
}
                                #endif

                                #ifndef DEFt_clone_iIE7
                                #define DEFt_clone_iIE7
inline s_Module clone_iIE7(s_Module& a)
{
    s_Module res {};

    {
        res.modid = clone_cBw5(a.modid);
        res.fname = clone_jB4B(a.fname);
        res.in = clone_udgC(a.in);
        res.out = clone_JkQQ(a.out);
        res.stats = clone_krr2(a.stats);
    };
    return res;
}
                                #endif

s_Context solvePrelude()
{
    s_Context ctx {};
    s_Module module = clone_iIE7(getModule(fu_STR{}, ctx));
    s_LexerOutput lexed = lex(prelude_src, "__prelude"_fu);
    s_Node root = parse(0, "__prelude"_fu, lexed.tokens).root;
    module.out.solve = solve(root, ctx, module);
    setModule(module, ctx);
    return ctx;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
inline const s_Context CTX_PRELUDE = solvePrelude();
                                #endif

#endif
