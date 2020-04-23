#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec.h>

struct s_ModuleStat;
struct s_LexerOutput;
struct s_Token;
struct s_Node;
struct s_ParserOutput;
struct s_TokenIdx;
struct s_Context;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Overload;
struct s_Partial;
struct s_Scope;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Template;
struct s_Effects;
struct s_Struct;
struct s_StructField;
struct s_Target;
struct s_Type;
struct s_ValueType;
struct s_Lifetime;
struct s_Region;
s_LexerOutput lex(const fu_STR&, const fu_STR&);
s_ParserOutput parse(int, const fu_STR&, const fu_VEC<s_Token>&);
s_SolverOutput solve(const s_Node&, const s_Context&, s_Module&);
s_Module& getModule(const fu_STR&, s_Context&);
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
    fu_VEC<fu_STR> imports;
    explicit operator bool() const noexcept
    {
        return false
            || root
            || imports
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

                                #ifndef DEF_s_StructField
                                #define DEF_s_StructField
struct s_StructField
{
    fu_STR id;
    s_ValueType type;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || type
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    s_Target ctor;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || fields
            || flags
            || ctor
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Region
                                #define DEF_s_Region
struct s_Region
{
    int index;
    int relax;
    explicit operator bool() const noexcept
    {
        return false
            || index
            || relax
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Lifetime
                                #define DEF_s_Lifetime
struct s_Lifetime
{
    fu_VEC<s_Region> regions;
    explicit operator bool() const noexcept
    {
        return false
            || regions
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
    s_ValueType value;
    s_Lifetime lifetime;
    s_Effects effects;
    explicit operator bool() const noexcept
    {
        return false
            || value
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

                                #ifndef DEF_s_ScopeItem
                                #define DEF_s_ScopeItem
struct s_ScopeItem
{
    fu_STR id;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || id
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Partial
                                #define DEF_s_Partial
struct s_Partial
{
    s_Target via;
    s_Target target;
    explicit operator bool() const noexcept
    {
        return false
            || via
            || target
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Template
                                #define DEF_s_Template
struct s_Template
{
    s_Node node;
    explicit operator bool() const noexcept
    {
        return false
            || node
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
    int min;
    int max;
    fu_VEC<s_Type> args;
    fu_VEC<fu_STR> names;
    fu_VEC<s_SolvedNode> defaults;
    s_Partial partial;
    s_Template tEmplate;
    s_SolvedNode constant;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || name
            || type
            || min
            || max
            || args
            || names
            || defaults
            || partial
            || tEmplate
            || constant
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
    explicit operator bool() const noexcept
    {
        return false
            || items
            || overloads
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
    explicit operator bool() const noexcept
    {
        return false
            || root
            || scope
        ;
    }
};
                                #endif

                                #ifndef DEF_s_ModuleOutputs
                                #define DEF_s_ModuleOutputs
struct s_ModuleOutputs
{
    fu_VEC<int> deps;
    fu_MAP<fu_STR, s_Struct> types;
    fu_MAP<fu_STR, s_SolvedNode> specs;
    s_SolverOutput solve;
    fu_STR cpp;
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
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEF_prelude_src
                                #define DEF_prelude_src
inline const fu_STR prelude_src = "\n\n\n// Some lolcode.\n\nfn STEAL (a: &mut $T): $T __native;\nfn CLONE (a: &    $T) case ($T -> @copy): $T __native;\nfn SWAP  (a: &mut $T, b: &mut $T): void __native;\n\nfn println(): void __native;\nfn println(a: $A): void __native;\nfn println(a: $A, b: $B): void __native;\nfn println(a: $A, b: $B, c: $C): void __native;\nfn println(a: $A, b: $B, c: $C, d: $D): void __native;\nfn println(a: $A, b: $B, c: $C, d: $D, e: $E): void __native;\nfn println(a: $A, b: $B, c: $C, d: $D, e: $E, f: $F): void __native;\n\n\n// Arithmetics.\n\nfn +(a: $T) case ($T -> @arithmetic): $T __native;\nfn -(a: $T) case ($T -> @arithmetic): $T __native;\n\nfn +(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn -(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn *(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\nfn /(a: $T, b: $T) case ($T -> @arithmetic): $T __native;\n\nfn %(a: $T, b: $T)\n    case ($T -> @integral): $T __native;\n    case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::fmod\");\n\nfn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native;\nfn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native;\nfn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native;\nfn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native;\nfn *=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native;\nfn /=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native;\n\nfn ==(a: $T, b: $T)         case ($T -> @primitive):    bool __native;\nfn !=(a: $T, b: $T)         case ($T -> @primitive):    bool __native;\n\nfn > (a: $T, b: $T)         case ($T -> @primitive):    bool __native;\nfn < (a: $T, b: $T)         case ($T -> @primitive):    bool __native;\nfn >=(a: $T, b: $T)         case ($T -> @primitive):    bool __native;\nfn <=(a: $T, b: $T)         case ($T -> @primitive):    bool __native;\n\n\n// Bitwise.\n\nfn ~(a: $T)                 case ($T -> @integral):     $T __native;\nfn &(a: $T, b: $T)          case ($T -> @integral):     $T __native;\nfn |(a: $T, b: $T)          case ($T -> @integral):     $T __native;\nfn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native;\nfn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native;\nfn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native;\n\nfn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native;\nfn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native;\nfn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native;\nfn <<=(a: &mut $T, b: $T)   case ($T -> @integral):     &mut $T __native;\nfn >>=(a: &mut $T, b: $T)   case ($T -> @integral):     &mut $T __native;\n\n\n// Numeric conversions.\n\nfn  i8(v: $T) case ($T -> @primitive):  i8 __native(\"<cstdint>\",  \"int8_t\");\nfn i16(v: $T) case ($T -> @primitive): i16 __native(\"short\");\nfn i32(v: $T) case ($T -> @primitive): i32 __native(\"int\");\nfn i64(v: $T) case ($T -> @primitive): i64 __native(\"<cstdint>\", \"int64_t\");\n\nfn  u8(v: $T) case ($T -> @primitive):  u8 __native(\"<cstdint>\",  \"uint8_t\");\nfn u16(v: $T) case ($T -> @primitive): u16 __native(\"<cstdint>\", \"uint16_t\");\nfn u32(v: $T) case ($T -> @primitive): u32 __native(\"<cstdint>\", \"uint32_t\");\nfn u64(v: $T) case ($T -> @primitive): u64 __native(\"<cstdint>\", \"uint64_t\");\n\nfn f32(v: $T) case ($T -> @primitive): f32 __native(\"float\");\nfn f64(v: $T) case ($T -> @primitive): f64 __native(\"double\");\n\nfn byte(v: $T) case ($T -> @primitive): byte __native(\"<cstddef>\", \"std::byte\");\n\n\n// Math.\n\nfn abs(v: $T) case ($T -> @arithmetic): $T __native(\"<cmath>\", \"std::abs\");\nfn max(a: $T, b: $T) case ($T -> @arithmetic): $T __native(\"<algorithm>\", \"std::max\");\nfn min(a: $T, b: $T) case ($T -> @arithmetic): $T __native(\"<algorithm>\", \"std::min\");\n\nfn exp  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::exp\");\nfn exp2 (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::exp2\");\nfn log  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log\");\nfn log10(a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log10\");\nfn log2 (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::log2\");\n\nfn pow  (a: $T, b: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::pow\");\nfn sqrt (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::sqrt\");\nfn cbrt (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::cbrt\");\nfn hypot(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::hypot\");\n\nfn ceil (v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::ceil\");\nfn floor(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::floor\");\nfn trunc(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::trunc\");\nfn round(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::round\");\n\nfn sin(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::sin\");\nfn cos(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::cos\");\nfn tan(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::tan\");\n\nfn asin(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::asin\");\nfn acos(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::acos\");\nfn atan(v: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::atan\");\n\nfn atan2(y: $T, x: $T) case ($T -> @floating_point): $T __native(\"<cmath>\", \"std::atan2\");\n\nfn PI():  f64 __native(\"<math.h>\", \"M_PI\");\nfn E():   f64 __native(\"<math.h>\", \"M_E\");\nfn INF(): f64 __native(\"<math.h>\", \"INFINITY\");\nfn NAN(): f64 __native(\"<math.h>\", \"NAN\");\n\nfn nan(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isnan\");\nfn inf(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isinf\");\nfn finite(v: $T) case ($T -> @floating_point): bool __native(\"<cmath>\", \"std::isfinite\");\n\n\n// Logic.\n\nfn true (): bool __native(\"true\");\nfn false(): bool __native(\"false\");\n\n\n// Assignment.\n\nfn   =(a: &mut $T, b: $T) case ($T -> @copy): &mut $T __native;\nfn ||=(a: &mut $T, b: $T) case ($T -> @copy): &mut $T __native;\n\n\n// Arrays.\n\nfn len (a: [$T]): i32 __native(\".size()\");\n\nfn [](a: [$T], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native;\n    case ($a -> &mut [$T]): &mut $T __native;\n    case ($a -> &    [$T]): &    $T __native;\n    case ($a ->      $T[]):      $T __native;\n\nfn [](a: [$T], start: i32, end: i32)\n    case ($a -> &mut $T[]): &mut [$T] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    case ($a -> &mut [$T]): &mut [$T] __native(\"<fu/view.h>\", \"fu::get_view_mut\");\n    case ($a -> &    [$T]): &    [$T] __native(\"<fu/view.h>\", \"fu::get_view\");\n\nfn    push(a: &mut $T[], b: $T): void __native(\".push\");\nfn unshift(a: &mut $T[], b: $T): void __native(\".unshift\");\nfn  insert(a: &mut $T[], i: i32, b: $T): void __native(\".insert\");\n\nfn  slice(a: $T[], i0: i32, i1: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn  slice(a: $T[], i0: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::slice\");\nfn substr(a: $T[], i0: i32, i1: i32): $T[] __native(\"<fu/vec/slice.h>\", \"fu::substr\");\n\nfn splice(a: &mut $T[], i: i32, N: i32): void  __native(\".splice\");\nfn    pop(a: &mut $T[]): void __native(\".pop()\");\n\nfn  clear(a: &mut $T[]): void __native(\".clear()\");\nfn resize(a: &mut $T[], len: i32): void __native(\".resize\");\nfn shrink(a: &mut $T[], len: i32): void __native(\".shrink\");\n\nfn sort(a: &mut $T[]): void __native(\"<fu/vec/sort.h>\", \"fu::sort\");\n\n\n// String likes.\n\nfn ==(a: $T[], b: $T[]) case ($T -> @primitive): bool __native(\"<fu/vec/cmp.h>\", \"==\");\nfn !=(a: $T[], b: $T[]) case ($T -> @primitive): bool __native(\"<fu/vec/cmp.h>\", \"!=\");\n\nfn starts(a: $T[], with: $T[]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::lmatch\");\nfn   ends(a: $T[], with: $T[]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::rmatch\");\nfn starts(a: $T[], with:   $T) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::lmatch\");\nfn   ends(a: $T[], with:   $T) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::rmatch\");\n\nfn find(a: $T[], b: $T[]) case ($T -> @primitive): i32  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn has (a: $T[], b: $T[]) case ($T -> @primitive): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// TODO FIX\nfn find(a: $T[], b: $T): i32  __native(\"<fu/vec/find.h>\", \"fu::lfind\");\nfn has (a: $T[], b: $T): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Strings.\n\ntypedef string = byte[];\n\nfn  >(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \">\");\nfn  <(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\",  \"<\");\nfn >=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \">=\");\nfn <=(a: string, b: string): bool __native(\"<fu/vec/cmp.h>\", \"<=\");\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn   split(str: string, sep: string): string[] __native(\"<fu/vec/split.h>\", \"fu::split\");\nfn    join(a: string[], sep: string): string __native(\"<fu/vec/join.h>\", \"fu::join\");\nfn replace(in: string, all: string, with: string): string __native(\"<fu/vec/replace.h>\", \"fu::replace\");\n\n\n// Concats.\n\nfn +(a: $T[], b: $T[]): $T[] __native(\"<fu/vec/concat.h>\", \"+\");\nfn +(a: $T[], b: $T  ): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\nfn +(a: $T  , b: $T[]): $T[] __native(\"<fu/vec/concat_one.h>\", \"+\");\n\nfn +=(a: &mut $T[], b: $T[]): &mut $T[] __native(\"<fu/vec/concat.h>\", \"+=\");\nfn +=(a: &mut $T[], b: $T  ): &mut $T[] __native(\"<fu/vec/concat_one.h>\", \"+=\");\n\nfn + (a: string, b: $T)      case ($T -> @arithmetic):      string __native(\"<fu/vec/concat_str.h>\", \"+\");\nfn + (a: $T, b: string)      case ($T -> @arithmetic):      string __native(\"<fu/vec/concat_str.h>\", \"+\");\nfn +=(a: &mut string, b: $T) case ($T -> @arithmetic): &mut string __native(\"<fu/vec/concat_str.h>\", \"+=\");\n\n\n// Maps.\n\nfn [](a: Map($K, $V), b: &$K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native;\n    case ($a -> &    Map($K, $V)): &    $V __native;\n    case ($a ->      Map($K, $V)):      $V __native;\n\nfn keys  (a: &Map($K, $V)): &$K[] __native(\".m_keys\");\nfn values(a: &Map($K, $V)): &$V[] __native(\".m_values\");\nfn has   (a: Map($K, $V), b: $K): bool __native(\"<fu/vec/find.h>\", \"fu::has\");\n\n\n// Assertions, bugs & fails.\n\nfn throw(reason: string): never __native(\"<fu/never.h>\", \"fu::fail\");\nfn assert(): never __native(\"<fu/never.h>\", \"fu::fail()\");\nfn exit(code: i32): never __native(\"<cstdlib>\", \"std::exit\");\n\nfn ALLOC_STAT_COUNT(): i32 __native(\"<fu/arc.h>\", \"fu_ARC::ALLOC_STAT_COUNT()\");\nfn ALLOC_STAT_BYTES(): i32 __native(\"<fu/arc.h>\", \"fu_ARC::ALLOC_STAT_BYTES()\");\n\n\n// TODO move these out in separate imports,\n//  now::hr() etc, mini import syntax will be just as usable.\n\nfn now_hr (): f64 __native(\"<fu/now.h>\", \"fu::now_hr()\");\nfn now_utc(): f64 __native(\"<fu/now.h>\", \"fu::now_utc()\");\n\n\n// TODO port this in our thing,\n//  we've got all we need now.\n\nfn hash_tea(str: string): string __native(\"<fu/tea.h>\", \"fu::hash_tea\");\n\n\n// TODO all of these should annotate 'str: string |> c_str',\n//  or '.c_str', or '|> c_str' - the c-str conversion can cheap append a nullchar,\n//   which will be alloc-free in 99% of the cases.\n\nfn env_get(mut key: string): string __native(\"<fu/env.h>\", \"fu::env_get\");\n\nfn file_size(mut path: string): i32 __native(\"<fu/io.h>\", \"fu::file_size\");\nfn file_read(mut path: string): string __native(\"<fu/io.h>\", \"fu::file_read\");\nfn file_write(mut path: string, body: string): i32 __native(\"<fu/io.h>\", \"fu::file_write\");\n\nfn fs_cwd(): string __native(\"<fu/io.h>\", \"fu::fs_cwd()\");\nfn fs_mkdir_p(mut path: string): i32 __native(\"<fu/io.h>\", \"fu::fs_mkdir_p\");\nfn fs_mkdir_p(mut path: string, mode: i32): i32 __native(\"<fu/io.h>\", \"fu::fs_mkdir_p\");\n\nfn shell_exec(mut cmd: string): i32 __native(\"<fu/shell.h>\", \"fu::shell_exec\");\nfn shell_exec(mut cmd: string, stdout: &mut string): i32 __native(\"<fu/shell.h>\", \"fu::shell_exec\");\n\n\n// TODO figure this out, clean this up.\n//  This is quite primitive - otherwise being able to recast\n//   trivial arrays as ranges of a different type is useful.\n\nfn f32_view(a: [$T])\n    case ($a -> &mut [$T] && $T -> @trivial): &mut [f32] __native(\"<fu/view.h>\", \"fu::into_view_mut<f32>\");\n    case (                   $T -> @trivial):      [f32] __native(\"<fu/view.h>\", \"fu::into_view<f32>\");\n\nfn i32_view(a: [$T])\n    case ($a -> &mut [$T] && $T -> @trivial): &mut [i32] __native(\"<fu/view.h>\", \"fu::into_view_mut<i32>\");\n    case (                   $T -> @trivial):      [i32] __native(\"<fu/view.h>\", \"fu::into_view<i32>\");\n\nfn u32_view(a: [$T])\n    case ($a -> &mut [$T] && $T -> @trivial): &mut [u32] __native(\"<fu/view.h>\", \"fu::into_view_mut<u32>\");\n    case (                   $T -> @trivial):      [u32] __native(\"<fu/view.h>\", \"fu::into_view<u32>\");\n\nfn i16_view(a: [$T])\n    case ($a -> &mut [$T] && $T -> @trivial): &mut [i16] __native(\"<fu/view.h>\", \"fu::into_view_mut<i16>\");\n    case (                   $T -> @trivial):      [i16] __native(\"<fu/view.h>\", \"fu::into_view<i16>\");\n\nfn u8_view(a: [$T])\n    case ($a -> &mut [$T] && $T -> @trivial): &mut [u8] __native(\"<fu/view.h>\", \"fu::into_view_mut<u8>\");\n    case (                   $T -> @trivial):      [u8] __native(\"<fu/view.h>\", \"fu::into_view<u8>\");\n\nfn .=(a: &mut [$T], b: [$T]) case ($T -> @copy): void __native(\"<fu/view.h>\", \"fu::view_assign\");\n\n"_fu;
                                #endif

s_Context solvePrelude()
{
    s_Context ctx {};
    s_Module module { getModule(fu_STR{}, ctx) };
    s_LexerOutput lexed = lex(prelude_src, "__prelude"_fu);
    s_Node root = parse(0, "__prelude"_fu, lexed.tokens).root;
    s_SolverOutput solved = solve(root, ctx, module);
    module.out.solve = solved;
    setModule(module, ctx);
    return ctx;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
inline const s_Context CTX_PRELUDE = solvePrelude();
                                #endif

#endif
