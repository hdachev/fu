#include "../lib/map.h"
#include "../lib/str.h"
#include "../lib/vec.h"

struct s_LexerOutput;
struct s_Module;
struct s_ModuleInputs;
struct s_ModuleOutputs;
struct s_ModuleStats;
struct s_Node;
struct s_Overload;
struct s_ParserOutput;
struct s_Partial;
struct s_Scope;
struct s_ScopeItem;
struct s_SolvedNode;
struct s_SolverOutput;
struct s_Struct;
struct s_StructField;
struct s_TEMP_Context;
struct s_Target;
struct s_Template;
struct s_Token;
struct s_TokenIdx;
struct s_Type;
s_Module& getModule(const fu_STR&, s_TEMP_Context&);
void setModule(const s_Module&, s_TEMP_Context&);
s_SolverOutput solve(const s_Node&, const s_TEMP_Context&, s_Module&);
s_ParserOutput parse(const int&, const fu_STR&, const fu_VEC<s_Token>&);
s_LexerOutput lex(const fu_STR&, const fu_STR&);
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
            || kind.size()
            || value.size()
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
            || fname.size()
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
            || kind.size()
            || flags
            || value.size()
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
            || src.size()
            || lex
            || parse
        ;
    }
};
                                #endif

                                #ifndef DEF_s_Type
                                #define DEF_s_Type
struct s_Type
{
    fu_STR canon;
    int quals;
    int modid;
    explicit operator bool() const noexcept
    {
        return false
            || canon.size()
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
    s_Type type;
    explicit operator bool() const noexcept
    {
        return false
            || id.size()
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
            || kind.size()
            || id.size()
            || fields
            || flags
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
            || kind.size()
            || flags
            || value.size()
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
            || id.size()
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
            || kind.size()
            || name.size()
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
            || cpp.size()
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
            || fname.size()
            || in
            || out
            || stats
        ;
    }
};
                                #endif

                                #ifndef DEF_s_TEMP_Context
                                #define DEF_s_TEMP_Context
struct s_TEMP_Context
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
inline const fu_STR prelude_src = "\n\n\n// Some lolcode.\n\nfn __native_pure(): never never;\nfn __native_pure(id: string): never never;\nfn __native_pure(id: string, opt: string): never never;\n\nfn STEAL (a: &mut $T): $T __native_pure;\nfn CLONE (a: &    $T): $T __native_pure;\n\nfn print(a: $A): void __native_pure;\nfn print(a: $A, b: $B): void __native_pure;\nfn print(a: $A, b: $B, c: $C): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E): void __native_pure;\nfn print(a: $A, b: $B, c: $C, d: $D, e: $E, f: $F): void __native_pure;\n\n\n// Arithmetics.\n\nfn +(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn +(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn -(a: $T)                 case ($T -> @arithmetic):   $T __native_pure;\nfn -(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\nfn *(a: $T, b: $T)          case ($T -> @arithmetic):   $T __native_pure;\n\nfn /(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @arithmetic): $T __native_pure;\n\nfn %(a: $T, b: $T)\n    // case ($T -> @floating_point):                       $T __native_pure;\n    // case ($T -> @integral && $b -> @non_zero):          $T __native_pure;\n    case ($T -> @arithmetic): $T __native_pure;\n\nfn ++(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn --(a: &mut $T)           case ($T -> @arithmetic):   $T __native_pure;\nfn +=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\nfn -=(a: &mut $T, b: $T)    case ($T -> @arithmetic):   &mut $T __native_pure;\n\nfn ==(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn !=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn > (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn < (a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn >=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\nfn <=(a: $T, b: $T)         case ($T -> @arithmetic):   bool __native_pure;\n\n\n// Bitwise.\n\nfn ~(a: $T)                 case ($T -> @integral):     $T __native_pure;\nfn &(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn |(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn ^(a: $T, b: $T)          case ($T -> @integral):     $T __native_pure;\nfn <<(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\nfn >>(a: $T, b: $T)         case ($T -> @integral):     $T __native_pure;\n\nfn &=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn |=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\nfn ^=(a: &mut $T, b: $T)    case ($T -> @integral):     &mut $T __native_pure;\n\n\n// Logic.\n\nfn true (): bool __native_pure;\nfn false(): bool __native_pure;\n\n\n// Assignment.\n\nfn   =(a: &mut $T, b: $T): &mut $T __native_pure;\nfn ||=(a: &mut $T, b: $T): &mut $T __native_pure;\n\nfn SWAP(a: &mut $T, b: &mut $T): void __native_pure;\n\n\n// Arrays.\n\nfn len (a: $T[]): i32 __native_pure;\nfn find(a: $T[], b: $T): i32 __native_pure;\nfn has (a: $T[], b: $T): bool __native_pure;\n\nfn [](a: $T[], i: i32)\n    case ($a -> &mut $T[]): &mut $T __native_pure;\n    case ($a -> &    $T[]): &    $T __native_pure;\n\nfn    push(a: &mut $T[], b: $T): void __native_pure;\nfn unshift(a: &mut $T[], b: $T): void __native_pure;\nfn  insert(a: &mut $T[], i: i32, b: $T): void __native_pure;\n\nfn  slice(a: $T[], i0: i32, i1: i32): $T[] __native_pure;\nfn  slice(a: $T[], i0: i32): $T[] __native_pure;\n\nfn splice(a: &mut $T[], i: i32, N: i32): void __native_pure;\nfn    pop(a: &mut $T[]): void __native_pure;\n\nfn  clear(a: &mut $T[]): void __native_pure;\nfn resize(a: &mut $T[], len: i32): void __native_pure;\nfn shrink(a: &mut $T[], len: i32): void __native_pure;\n\nfn move(a: &mut $T[], from: i32, to: i32): void __native_pure;\nfn sort(a: &mut $T[]): void __native_pure;\n\n\n// Concats.\n//\n//  flatten: str/arr a+b+c chains into a n-ary binop -\n//  adjoin : str/arr chain adjacent += for the same left-arg.\n//\n//      Currently just testing notations,\n//        but can we make this more generic?\n//          Will it be useful? Array ops are really\n//            the only thing we care about optimizing.\n\nfn +(a: $T[], b: $T[]): $T[] __native_pure( 'arr+', 'flatjoin' );\nfn +(a: $T[], b: $T  ): $T[] __native_pure( 'arr+', 'flatjoin' );\nfn +(a: $T  , b: $T[]): $T[] __native_pure( 'arr+', 'flatjoin' );\n\nfn +=(a: &mut string, b: string): &mut string __native_pure( 'arr+', 'flatjoin' );\nfn + (a:      string, b: string):      string __native_pure( 'arr+', 'flatjoin' );\n\n\n// Strings.\n\nfn len(a: string): i32 __native_pure;\nfn  [](a: string, i: i32): string __native_pure;\n\nfn ==(a: string, b: string): bool __native_pure;\nfn !=(a: string, b: string): bool __native_pure;\nfn  >(a: string, b: string): bool __native_pure;\nfn  <(a: string, b: string): bool __native_pure;\nfn >=(a: string, b: string): bool __native_pure;\nfn <=(a: string, b: string): bool __native_pure;\n\nfn   find(a: string, b: string): i32 __native_pure;\nfn    has(a: string, b: string): bool __native_pure;\nfn starts(a: string, with: string): bool __native_pure;\nfn   ends(a: string, with: string): bool __native_pure;\n\nfn slice (a: string, i0: i32, i1: i32): string __native_pure;\nfn slice (a: string, i0: i32): string __native_pure;\n\nfn substr(a: string, i0: i32, i1: i32): string __native_pure;\nfn char  (a: string, i0: i32): i32 __native_pure;\n\n\n// TODO: .replace() is a faster impl of .split().join().\n//  How do we express this so that .split.joins are automatically promoted?\n//   This would be generally useful, e.g.\n//    .map.maps and .map.filters could use this to skip allocs.\n\nfn   split(str: string, sep: string): string[] __native_pure;\nfn    join(a: string[], sep: string): string __native_pure;\nfn replace(in: string, all: string, with: string): string __native_pure;\n\n\n// Maps.\n\nfn [](a: Map($K, $V), b: &$K)\n    case ($a -> &mut Map($K, $V)): &mut $V __native_pure;\n    case ($a -> &    Map($K, $V)): &    $V __native_pure;\n\nfn keys  (a: Map($K, $V)): $K[] __native_pure;\nfn values(a: Map($K, $V)): $V[] __native_pure;\nfn has   (a: Map($K, $V), b: $K): bool __native_pure;\nfn count (a: Map($K, $V)): i32 __native_pure;\n\n\n// Assertions, bugs & fails.\n\nfn throw(reason: string): never __native_pure;\nfn assert(): never __native_pure;\n\n\n// Butt plugs.\n\n// TODO we should go for an any $B -> call stringify(b) macro.\nfn +(a: string, b: i32): string __native_pure;\nfn +(a: string, b: f64): string __native_pure;\nfn +(a: i32, b: string): string __native_pure;\nfn +(a: f64, b: string): string __native_pure;\n\n// TODO fix impure io.\nfn now_hr(): f64 __native_pure;\nfn now_utc(): f64 __native_pure;\n\nfn env_get(key: string): string __native_pure;\n\nfn fs_cwd(): string __native_pure;\nfn file_size(path: string): i32 __native_pure;\nfn file_read(path: string): string __native_pure;\nfn file_write(path: string, body: string): bool __native_pure;\n\nfn shell_exec(cmd: string): i32 __native_pure;\nfn shell_exec(cmd: string, stdout: &mut string): i32 __native_pure;\n\nfn hash_tea(str: string): string __native_pure;\n\nfn i32(v: f64): i32 __native_pure;\n\nfn exit(code: i32): never __native_pure;\n\n"_fu;
                                #endif

s_TEMP_Context solvePrelude()
{
    s_TEMP_Context ctx {};
    s_Module module { getModule(""_fu, ctx) };
    s_LexerOutput lexed = lex(prelude_src, "__prelude"_fu);
    s_Node root = parse(0, "__prelude"_fu, lexed.tokens).root;
    s_SolverOutput solved = solve(root, ctx, module);
    module.out.solve = solved;
    setModule(module, ctx);
    return ctx;
}

                                #ifndef DEF_CTX_PRELUDE
                                #define DEF_CTX_PRELUDE
inline const s_TEMP_Context CTX_PRELUDE = solvePrelude();
                                #endif
