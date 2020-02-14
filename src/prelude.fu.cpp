#include <fu/map.h>
#include <fu/str.h>
#include <fu/vec.h>

struct s_Context;
struct s_Effects;
struct s_LexerOutput;
struct s_Lifetime;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Region;
struct s_Scope;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
struct s_ValueType;
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
    fu_STR canon;
    int quals;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || canon
            || quals
            || modid
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

                                #ifndef DEF_s_Struct
                                #define DEF_s_Struct
struct s_Struct
{
    fu_STR kind;
    fu_STR id;
    fu_VEC<s_StructField> fields;
    int flags;
    explicit operator bool() const noexcept
    {
        return false
            || kind
            || id
            || fields
            || flags
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
    s_Template Q_template;
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
            || Q_template
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
    fu_COW_MAP<fu_STR, s_Struct> types;
    fu_COW_MAP<fu_STR, s_SolvedNode> specs;
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

                                #ifndef DEF_s_ModuleStats
                                #define DEF_s_ModuleStats
struct s_ModuleStats
{
    f64 s_lex;
    f64 s_parse;
    f64 s_solve;
    f64 s_cpp;
    explicit operator bool() const noexcept
    {
        return false
            || s_lex
            || s_parse
            || s_solve
            || s_cpp
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
    fu_COW_MAP<fu_STR, fu_STR> files;
    explicit operator bool() const noexcept
    {
        return false
            || modules
            || files
        ;
    }
};
                                #endif

                                #ifndef DEF_prelude_src
                                #define DEF_prelude_src
inline const fu_STR prelude_src = "\n\n\n// Some lolcode.\n\nfn __native(): never never;\nfn __native(id: string): never never;\nfn __native(id: string, opt: string): never never;\n\nfn STEAL (a: &mut $T): $T __native;\nfn CLONE (a: &    $T): $T __native;\nfn SWAP  (a: &mut $T, b: &mut $T): void __native;\n\nfn print(a: $A): void __native;\nfn print(a: $A, b: $B): void __native;\nfn print(a: $A, b: $B, c: $C): void __native;\nfn print(a: $A, b: $B, c: $C, d: $D): void __native;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E): void __native;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E, f: $F): void __native;\n\n\n// Arithmetics.\n\nfn +(a: $T)                 case ($T -> @arithmetic):   $T __native;\nfn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native;\n\nfn -(a: $T)                 case ($T -> @arithmetic):   $T __native;\nfn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native;\nfn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native;\n\nfn /(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native;\n    case ($T -> @arithmetic): $T __native;\n\nfn %(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native;\n    case ($T -> @arithmetic): $T __native;\n\nfn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native;\nfn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native;\nfn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native;\nfn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native;\n\nfn ==(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native;\nfn !=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native;\nfn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native;\nfn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native;\nfn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native;\nfn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native;\n\n\n// Bitwise.\n\nfn ~(a: $T)                 case ($T -> @integral):     $T __native;\nfn &(a: $T, b: $T)          case ($T -> @integral):     $T __native;\nfn |(a: $T, b: $T)          case ($T -> @integral):     $T __native;\nfn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native;\nfn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native;\nfn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native;\n\nfn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native;\nfn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native;\nfn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native;\n\n\n// Numeric conversions.\n\nfn  i8(v: $T) case ($T -> @arithmetic):  i8 __native;\nfn i16(v: $T) case ($T -> @arithmetic): i16 __native('short');\nfn i32(v: $T) case ($T -> @arithmetic): i32 __native('int');\nfn i64(v: $T) case ($T -> @arithmetic): i64 __native;\n\nfn  u8(v: $T) case ($T -> @arithmetic):  u8 __native;\nfn u16(v: $T) case ($T -> @arithmetic): u16 __native;\nfn u32(v: $T) case ($T -> @arithmetic): u32 __native;\nfn u64(v: $T) case ($T -> @arithmetic): u64 __native;\n\nfn f32(v: $T) case ($T -> @arithmetic): f32 __native('float');\nfn f64(v: $T) case ($T -> @arithmetic): f64 __native('double');\n\n\n// Math.\n\nfn abs(v: $T) case ($T -> @arithmetic): $T __native('<cmath>', 'std::abs');\nfn max(a: $T, b: $T) case ($T -> @arithmetic): $T __native('<cmath>', 'std::max');\nfn min(a: $T, b: $T) case ($T -> @arithmetic): $T __native('<cmath>', 'std::min');\n\nfn exp  (a: $T, b: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::exp');\nfn exp2 (a: $T, b: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::exp2');\nfn log  (a: $T, b: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::log');\nfn log10(a: $T, b: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::log10');\nfn log2 (a: $T, b: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::log2');\n\nfn pow  (a: $T, b: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::pow');\nfn sqrt (v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::sqrt');\nfn cbrt (v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::cbrt');\nfn hypot(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::hypot');\n\nfn ceil (v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::ceil');\nfn floor(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::floor');\nfn trunc(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::trunc');\nfn round(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::round');\n\nfn sin(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::sin');\nfn cos(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::cos');\nfn tan(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::tan');\n\nfn asin(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::asin');\nfn acos(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::acos');\nfn atan(v: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::atan');\n\nfn atan2(y: $T, x: $T) case ($T -> @floating_point): $T __native('<cmath>', 'std::atan2');\n\nfn PI():  f64 __native('<math.h>', 'M_PI');\nfn E():   f64 __native('<math.h>', 'M_E');\nfn INF(): f64 __native('<math.h>', 'INFINITY');\nfn NAN(): f64 __native('<math.h>', 'NAN');\n\n\n// Logic.\n\nfn true (): bool __native('true');\nfn false(): bool __native('false');\n\n\n// Assignment.\n\nfn   =(a: &mut $T, b: $T): &mut $T __native;\nfn ||=(a: &mut $T, b: $T): &mut $T __native;\n\n\n// Arrays.\n\nfn len (a: $T[]): i32 __native('.size()');\nfn find(a: $T[], b: $T): i32 __native('<fu/vec/find.h>', 'fu::lfind');\nfn has (a: $T[], b: $T): bool __native('<fu/vec/find.h>', 'fu::has');\n\nfn [](a: $T[], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native;\n    case ($a -> &    $T[]): &    $T __native;\n    case ($a ->      $T[]):      $T __native;\n\nfn    push(a: &mut $T[], b: $T): void __native('.push');\nfn unshift(a: &mut $T[], b: $T): void __native('.unshift');\nfn  insert(a: &mut $T[], i: i32, b: $T): void __native('.insert');\n\nfn  slice(a: $T[], i0: i32, i1: i32): $T[] __native('<fu/vec/slice.h>', 'fu::slice');\nfn  slice(a: $T[], i0: i32): $T[] __native('<fu/vec/slice.h>', 'fu::slice');\n\nfn splice(a: &mut $T[], i: i32, N: i32): void  __native('.splice');\nfn    pop(a: &mut $T[]): void __native('.pop()');\n\nfn  clear(a: &mut $T[]): void __native('.clear()');\nfn resize(a: &mut $T[], len: i32): void __native('.resize');\nfn shrink(a: &mut $T[], len: i32): void __native('.shrink');\n\nfn sort(a: &mut $T[]): void __native('<fu/vec/sort.h>', 'fu::sort');\n\n\n// Concats.\n//\n//  flatten: str/arr a+b+c chains into a n-ary binop -\n//  adjoin : str/arr chain adjacent += for the same left-arg.\n//\n//      Currently just testing notations,\n//        but can we make this more generic?\n//          Will it be useful? Array ops are really\n//            the only thing we care about optimizing.\n\nfn +(a: $T[], b: $T[]): $T[] __native;\nfn +(a: $T[], b: $T  ): $T[] __native;\nfn +(a: $T  , b: $T[]): $T[] __native;\n\nfn +=(a: &mut string, b: string): &mut string __native;\nfn + (a:      string, b: string):      string __native;\n\n\n// Strings.\n\nfn  len(a: string): i32 __native('.size()');\nfn find(a: string, b: string): i32 __native('<fu/vec/find.h>', 'fu::lfind');\nfn  has(a: string, b: string): bool __native('<fu/vec/find.h>', 'fu::has');\n\nfn  [](a: string, i: i32): string __native;\n\nfn ==(a: string, b: string): bool __native;\nfn !=(a: string, b: string): bool __native;\nfn  >(a: string, b: string): bool __native;\nfn  <(a: string, b: string): bool __native;\nfn >=(a: string, b: string): bool __native;\nfn <=(a: string, b: string): bool __native;\n\nfn starts(a: string, with: string): bool __native('<fu/vec/find.h>', 'fu::lmatch');\nfn   ends(a: string, with: string): bool __native('<fu/vec/find.h>', 'fu::rmatch');\n\nfn slice (a: string, i0: i32, i1: i32): string __native('<fu/vec/slice.h>', 'fu::slice');\nfn slice (a: string, i0: i32): string __native('<fu/vec/slice.h>', 'fu::slice');\n\nfn substr(a: string, i0: i32, i1: i32): string __native('<fu/vec/slice.h>', 'fu::substr');\nfn char  (a: string, i0: i32): i32 __native;\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn   split(str: string, sep: string): string[] __native('<fu/vec/split.h>', 'fu::split');\nfn    join(a: string[], sep: string): string __native('<fu/vec/join.h>', 'fu::join');\nfn replace(in: string, all: string, with: string): string __native('<fu/vec/replace.h>', 'fu::replace');\n\n\n// Maps.\n\nfn [](a: Map($K, $V), b: &$K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native;\n    case ($a -> &    Map($K, $V)): &    $V __native;\n    case ($a ->      Map($K, $V)):      $V __native;\n\nfn keys  (a: Map($K, $V)): $K[] __native('.m_keys');\nfn values(a: Map($K, $V)): $V[] __native('.m_values');\nfn has   (a: Map($K, $V), b: $K): bool __native('<fu/vec/find.h>', 'fu::has');\nfn count (a: Map($K, $V)): i32 __native('.size()');\n\n\n// Assertions, bugs & fails.\n\nfn throw(reason: string): never __native('<fu/never.h>', 'fu::fail');\nfn assert(): never __native('<fu/never.h>', 'fu::fail()');\n\n\n// Butt plugs.\n\n// TODO we should go for an any $B -> call stringify(b) macro.\nfn +(a: string, b: i32): string __native;\nfn +(a: string, b: f64): string __native;\nfn +(a: i32, b: string): string __native;\nfn +(a: f64, b: string): string __native;\n\n// TODO fix impure io.\nfn now_hr(): f64 __native('<fu/now.h>', 'fu::now_hr()');\nfn now_utc(): f64 __native('<fu/now.h>', 'fu::now_utc()');\n\nfn env_get(key: string): string __native('<fu/env.h>', 'fu::env_get');\n\nfn file_size(path: string): i32 __native('<fu/io.h>', 'fu::file_size');\nfn file_read(path: string): string __native('<fu/io.h>', 'fu::file_read');\nfn file_write(path: string, body: string): i32 __native('<fu/io.h>', 'fu::file_write');\n\nfn fs_cwd(): string __native('<fu/io.h>', 'fu::fs_cwd()');\nfn fs_mkdir_p(path: string): i32 __native('<fu/io.h>', 'fu::fs_mkdir_p');\nfn fs_mkdir_p(path: string, mode: i32): i32 __native('<fu/io.h>', 'fu::fs_mkdir_p');\n\nfn shell_exec(cmd: string): i32 __native('<fu/shell.h>', 'fu::shell_exec');\nfn shell_exec(cmd: string, stdout: &mut string): i32 __native('<fu/shell.h>', 'fu::shell_exec');\n\nfn hash_tea(str: string): string __native('<fu/tea.h>', 'fu::hash_tea');\n\nfn exit(code: i32): never __native;\n\n"_fu;
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
